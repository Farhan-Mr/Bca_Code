/* Program of Virtual Base class */

#include <iostream>
    using namespace std;

    class student 
    {
        protected :
            int roll_no;

            public :

            void get_number(int a)
            {
                roll_no = a;
            }
            void put_number ( )
            {
                cout << "\n Roll number = " << roll_no << endl;
            }
    };

    class test : public virtual student
    {
        protected :
            float score;

            public :
            void get_score(float s)
            {
                score = s;
            }

            void put_score()
            {
                cout <<" \n test score = " << score << endl;
            }
    };

    class music : public virtual student 
    {
        protected : float music_score;
        public :
        void get_music (float m)
        {
            music_score = m;
        }
        void put_music()
        {
            cout << " marks in music = " << music_score << endl;
        }

    };

    class result : public test , public music
    {
        private : float total ;

        public :

        void display();

    };

    void result :: display()
    {
        total = music_score + score ;
        cout << "total marks = " << total << endl;
    }

    int main ()
    {
        result r;

        r.get_number(101);
        r.put_number();

        r.get_score(49.5f);
        r.put_score();

        r.get_music(14.5f);
        r.put_music();

        r.display();

        return 0;
    }