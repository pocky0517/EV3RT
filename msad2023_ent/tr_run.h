/*右コース*/
#define TR_RUN_R \
        .composite<BrainTree::ParallelSequence>(1,2) \
            .leaf<IsBackOn>() \
            .composite<BrainTree::MemSequence>() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(7200000) \
                    .leaf<RunAsInstructed>(90, 90, 0.5) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(1700000) \
                    .leaf<RunAsInstructed>(90, 65, 0.0) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(4200000) \
                    .leaf<RunAsInstructed>(85, 80, 0.0) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(1800000) \
                    .leaf<RunAsInstructed>(90, 65, 0.0) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(1500000) \
                    .leaf<RunAsInstructed>(30, 30, 0.0) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(3000000) \
                    .leaf<RunAsInstructed>(10, 10, 0.5) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsColorDetected>(CL_BLACK) \
                    .leaf<RunAsInstructed>(2, 4, 0.5) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(1000000) \
                    .leaf<TraceLine>(20, GS_TARGET, P_CONST, I_CONST, D_CONST, 0.0, TS_NORMAL) \
                .end() \
            .end() \
        .end()

/*左コース*/
#define TR_RUN_L \
        .composite<BrainTree::ParallelSequence>(1,2) \
            .leaf<IsBackOn>() \
            .composite<BrainTree::MemSequence>() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(7200000) \
                    .leaf<RunAsInstructed>(90, 90, 0.5) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(1700000) \
                    .leaf<RunAsInstructed>(90, 65, 0.0) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(4000000) \
                    .leaf<RunAsInstructed>(85, 80, 0.0) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(1650000) \
                    .leaf<RunAsInstructed>(90, 68, 0.0) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsColorDetected>(CL_BLUE) \
                    .leaf<RunAsInstructed>(5, 5, 0.0) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(1300000) \
                    .leaf<RunAsInstructed>(0, 0, 0.0) \
                .end() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(1000000) \
                    .leaf<TraceLine>(20, GS_TARGET, P_CONST, I_CONST, D_CONST, 0.0, TS_NORMAL) \
                .end() \
            .end() \
        .end()