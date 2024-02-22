#ifndef BUDGET_H
#define BIDGET_H

class Budget{

    private:
        static double corpBudget;
        double divBudget;
    public:
        Budget(){
            divBudget = 0;
        }

        void addBudget(double bgt){
            divBudget += bgt;
            corpBudget += divBudget;
        }

        double getDivBudget() const {return divBudget;}
        double getCorpBudgget() const {return corpBudget;}


};

#endif
