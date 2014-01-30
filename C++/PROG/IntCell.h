
class IntCell
{
   public:
        IntCell( int initialValue = 0)
           { storedValue = initialValue; }

        int getValue()
                { return storedValue; }

        void setValue( int val)
        { storedValue = val; }

        private:
                int storedValue; 
};
