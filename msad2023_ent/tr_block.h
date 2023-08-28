/*右コース*/
#define TR_BLOCK_R \
        .composite<BrainTree::ParallelSequence>(1,2) \
            .leaf<IsBackOn>() \
            .composite<BrainTree::MemSequence>() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsColorDetected>(CL_RED) \
                    .leaf<TraceLine>(25, GS_TARGET, P_CONST, I_CONST, D_CONST, 0.0, TS_NORMAL) \
                .end() \
/* Reset Arm Pos. \
                .leaf<SetArmPosition>(ARM_INITIAL_ANGLE, ARM_SHIFT_PWM) \
*/ \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(20500000) \
                    .leaf<TraceLine>(70, GS_TARGET, P_CONST, I_CONST, D_CONST, 0.0, TS_NORMAL) \
                .end() \
                \
/*左コース*/
#define TR_BLOCK_L \
        .composite<BrainTree::ParallelSequence>(1,2) \
            .leaf<IsBackOn>() \
            .composite<BrainTree::MemSequence>() \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(3000000) \
                    .leaf<TraceLine>(25, GS_TARGET, P_CONST, I_CONST, D_CONST, 0.0, TS_NORMAL) \
                .end() \
/* Reset Arm Pos. \
                .leaf<SetArmPosition>(ARM_INITIAL_ANGLE, ARM_SHIFT_PWM) \
*/ \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsTimeEarned>(20500000) \
                    .leaf<TraceLine>(70, GS_TARGET, P_CONST, I_CONST, D_CONST, 0.0, TS_NORMAL) \
                .end() \
                \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsColorDetected>(CL_RED) \
                    .leaf<TraceLine>(20, GS_TARGET, P_CONST, I_CONST, D_CONST, 0.0, TS_NORMAL) \
                .end() \
                \
                .composite<BrainTree::ParallelSequence>(2,3) \
                    .leaf<IsSonarOn>(200) \
                    .leaf<IsTimeEarned>(7290000) \
                    .leaf<RunAsInstructed>(20, 23, 0.5) \
                .end() \
                \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsColorDetected>(CL_GREEN) \
                    .leaf<RunAsInstructed>(-15, -30, 0.0) \
                .end() \
                \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsColorDetected>(CL_RED) \
                    .leaf<RunAsInstructed>(21, 12, 0.0) \
                .end() \
                \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsColorDetected>(CL_BLACK) \
                    .leaf<RunAsInstructed>(25, 25, 0.0) \
                .end() \
                \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsColorDetected>(CL_BLUE) \
                    .leaf<TraceLine>(25, GS_TARGET, P_CONST, I_CONST, D_CONST, 0.0, TS_NORMAL) \
                .end() \
                \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsColorDetected>(CL_BLACK) \
                    .leaf<TraceLine>(30, GS_TARGET, P_CONST, I_CONST, D_CONST, 0.0, TS_OPPOSITE) \
                .end() \
                \
                .composite<BrainTree::ParallelSequence>(1,2) \
                    .leaf<IsColorDetected>(CL_BLUE) \
                    .leaf<TraceLine>(50, GS_TARGET, P_CONST, I_CONST, D_CONST, 0.0, TS_OPPOSITE) \
                .end() \
            .end() \
        .end()
