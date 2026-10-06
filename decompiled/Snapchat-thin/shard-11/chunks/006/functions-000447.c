/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10881ec98; end: 10881ec9b;  */

void FUN_10881ec98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10881ec9c; end: 10881ed03;  */

void FUN_10881ec9c(void)

{
  func_0x00010882e33c();
  FUN_10881eb70();
  return;
}



/* Entry: 10881ed04; end: 10881edaf;  */

void FUN_10881ed04(void)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c33984();
  func_0x000107c29bc4();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x000107c33bb0();
  func_0x000107c3397c();
  func_0x000107c3395c();
  if ((**(byte **)(unaff_x20 + 0x90) & 1) == 0) {
    func_0x00010882ea5c();
    (**(code **)(extraout_x8 + 0x28))();
    func_0x000107c33bb0();
    func_0x000107c33980();
    func_0x000107c33958();
    func_0x000107c28288(unaff_x20 + 0x60);
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 10881edb0; end: 10881edcf;  */

void FUN_10881edb0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010881ecdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10881edd0; end: 10881edd3;  */

void FUN_10881edd0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10881edd4; end: 10881ee13;  */

void FUN_10881edd4(void)

{
  func_0x00010882e33c();
  FUN_10867f410();
  return;
}



/* Entry: 10881ee14; end: 10881ee6b;  */

undefined8 FUN_10881ee14(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  
  func_0x00010882fee4(&UNK_110a94758);
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(param_2 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010882f814();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      FUN_10891781c(param_1);
    }
    else {
      FUN_1089177ec(param_1);
    }
  }
  return param_1;
}



/* Entry: 10881ee6c; end: 10881ee8f;  */

long FUN_10881ee6c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882f6b0();
  func_0x00010882fb70();
  func_0x000107c33a24();
  FUN_1089176a0();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10881ee90; end: 10881ef33;  */

void FUN_10881ee90(void)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c33984();
  func_0x00010882fd24();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882f6a8();
  func_0x000107c3397c();
  func_0x000107c3395c();
  if ((**(byte **)(unaff_x20 + 0x60) & 1) == 0) {
    func_0x00010882ea5c();
    (**(code **)(extraout_x8 + 0x30))();
    func_0x00010882f6a8();
    func_0x000107c33980();
    func_0x000107c33958();
    func_0x00010882fd1c();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 10881ef34; end: 10881ef53;  */

void FUN_10881ef34(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10881ee6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10881ef54; end: 10881ef57;  */

void FUN_10881ef54(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10881ef58; end: 10881efbb;  */

void FUN_10881ef58(void)

{
  func_0x00010882e33c();
  FUN_10881ee14();
  return;
}



/* Entry: 10881efbc; end: 10881f047;  */

void FUN_10881efbc(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010882e56c();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882f008();
  func_0x000107c3397c();
  func_0x00010882e59c();
  func_0x00010882f4c0();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882ea5c();
    (**(code **)(extraout_x8_00 + 0x38))();
    func_0x00010882f008();
    func_0x000107c33980();
    func_0x00010882e58c();
    func_0x00010882f2b4();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 10881f048; end: 10881f067;  */

void FUN_10881f048(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010881ef98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10881f068; end: 10881f06b;  */

void FUN_10881f068(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10881f06c; end: 10881f0ab;  */

void FUN_10881f06c(void)

{
  func_0x00010882e33c();
  FUN_1086e6144();
  return;
}



/* Entry: 10881f0ac; end: 10881f103;  */

undefined8 FUN_10881f0ac(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  
  func_0x00010882fee4(&UNK_110a946b8);
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(param_2 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010882f814();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      FUN_108917534(param_1);
    }
    else {
      FUN_108917504(param_1);
    }
  }
  return param_1;
}



/* Entry: 10881f104; end: 10881f127;  */

long FUN_10881f104(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882f6b0();
  func_0x00010882fb70();
  func_0x000107c33a24();
  FUN_1089172fc();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10881f128; end: 10881f1cb;  */

void FUN_10881f128(void)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c33984();
  func_0x00010882fd24();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882f6a8();
  func_0x000107c3397c();
  func_0x000107c3395c();
  if ((**(byte **)(unaff_x20 + 0x60) & 1) == 0) {
    func_0x00010882ea5c();
    (**(code **)(extraout_x8 + 0x40))();
    func_0x00010882f6a8();
    func_0x000107c33980();
    func_0x000107c33958();
    func_0x00010882fd1c();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 10881f1cc; end: 10881f1eb;  */

void FUN_10881f1cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10881f104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10881f1ec; end: 10881f1ef;  */

void FUN_10881f1ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10881f1f0; end: 10881f22f;  */

void FUN_10881f1f0(void)

{
  func_0x00010882e33c();
  FUN_10881f0ac();
  return;
}



/* Entry: 10881f230; end: 10881f23f;  */

void FUN_10881f230(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a73ee0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10881f240; end: 10881f253;  */

void FUN_10881f240(void)

{
  FUN_10881fd68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10881f254; end: 10881f25f;  */

void FUN_10881f254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10881f260; end: 10881f273;  */

void FUN_10881f260(void)

{
  func_0x00010881f808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10881f274; end: 10881f3d7;  */

void FUN_10881f274(undefined8 param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  long unaff_x24;
  undefined4 in_stack_00000018;
  undefined *in_stack_00000088;
  code *in_stack_00000108;
  undefined **in_stack_00000110;
  code *in_stack_00000128;
  undefined **in_stack_00000130;
  undefined8 in_stack_00000150;
  undefined8 *in_stack_000001a0;
  code *in_stack_000001a8;
  undefined8 *in_stack_000001d0;
  
  func_0x00010882f870();
  func_0x00010882eaac();
  func_0x00010882e2d0();
  func_0x00010882fc10();
  lVar1 = unaff_x24 + 0x18;
  in_stack_00000018 = param_2;
  func_0x000107c339c8();
  func_0x00010882ed14();
  uVar3 = (undefined4)lVar1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
      uVar3 = (undefined4)lVar1;
    } while (extraout_w10 != 0);
  }
  func_0x00010882eee8();
  in_stack_00000088 = &UNK_10f4bcc27;
  func_0x00010882eae4();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_00)();
  func_0x00010882e2e8();
  func_0x00010882e728();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_10881f918();
  func_0x00010882e1e8(unaff_x19 + 0x38);
  in_stack_00000128 = FUN_10881f864;
  in_stack_00000130 = &PTR_FUN_110a74d68;
  func_0x000107c33a48();
  func_0x00010882f2a0();
  FUN_10881f918();
  func_0x00010882e1a4();
  func_0x00010882e960();
  func_0x00010882e828();
  func_0x00010882e4b4();
  func_0x00010881f840(&stack0x00000090);
  func_0x00010882ee40();
  func_0x00010882ee74();
  func_0x00010881f998(&stack0x00000008);
  func_0x00010882e28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e2fc();
    func_0x00010881f840(&stack0x00000090);
    func_0x00010882ee40();
    func_0x00010882ee74();
    func_0x00010881f998();
    func_0x00010882edf0();
    func_0x00010882f870();
    in_stack_000001d0 = &stack0x000001d0;
    func_0x00010882eaac();
    func_0x00010882e2d0();
    func_0x00010882fc10();
    in_stack_00000018 = uVar3;
    func_0x000107c339c8(unaff_x24 + 0x18);
    func_0x00010882ed14();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010882eee8();
    in_stack_00000088 = &UNK_10f4bcc39;
    func_0x00010882eae4();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_02)();
    func_0x00010882e2e8();
    func_0x00010882e728();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e9f0();
    FUN_10881fa94();
    func_0x00010882e1e8(&stack0x00000160);
    in_stack_00000128 = FUN_10881f9e0;
    in_stack_00000130 = &PTR_FUN_110a74d80;
    func_0x000107c33a48();
    func_0x00010882f2a0();
    FUN_10881fa94();
    func_0x00010882e1a4();
    func_0x00010882e960();
    func_0x00010882e828();
    func_0x00010882e4b4();
    func_0x00010881f9bc(&stack0x00000090);
    func_0x00010882ee40();
    func_0x00010882ee74();
    FUN_10881fae0(&stack0x00000008);
    func_0x00010882e28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e2fc();
      func_0x00010881f9bc(&stack0x00000090);
      func_0x00010882ee40();
      func_0x00010882ee74();
      FUN_10881fae0();
      func_0x00010882edf0();
      pcVar4 = FUN_10881f53c;
      func_0x00010882fac4();
      in_stack_000001a0 = &stack0x000001d0;
      in_stack_000001a8 = pcVar4;
      func_0x00010882e0e4();
      func_0x00010882efb8();
      func_0x00010881f964();
      func_0x00010882e694();
      func_0x00010882e718();
      if (extraout_x8_03 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c33978();
      func_0x00010882e60c();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_04)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x000107c339cc();
      func_0x000107c337bc();
      func_0x00010882ee48();
      func_0x00010882e6c8();
      FUN_10881fbd4();
      func_0x00010882de84(&stack0x00000160);
      in_stack_00000108 = FUN_10881fb24;
      in_stack_00000110 = &PTR_FUN_110a74d98;
      func_0x000107c339b8();
      func_0x00010882efe0();
      FUN_10881fbd4();
      func_0x00010882de30();
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x00010881fb00(&stack0x00000080);
      func_0x000107c3394c();
      func_0x000107c33948();
      FUN_10881fc14(&stack0x00000008);
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x00010881fb00(&stack0x00000080);
        func_0x000107c3394c();
        func_0x000107c33948();
        FUN_10881fc14();
        func_0x00010882edf0();
        pcVar4 = FUN_10881f688;
        func_0x00010882fac4();
        in_stack_000001a0 = &stack0x000001a0;
        in_stack_000001a8 = pcVar4;
        func_0x00010882e0e4();
        func_0x00010882efb8();
        func_0x00010881f964();
        func_0x00010882e694();
        func_0x00010882e718();
        if (extraout_x8_05 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_02 != 0);
        }
        func_0x000107c33978();
        func_0x00010882e60c();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_06)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x000107c339cc();
        func_0x000107c337bc();
        func_0x00010882ee48();
        func_0x00010882e6c8();
        FUN_10881fd08();
        func_0x00010882de84(&stack0x00000160);
        in_stack_00000108 = FUN_10881fc58;
        in_stack_00000110 = &PTR_FUN_110a74db0;
        func_0x000107c339b8();
        func_0x00010882efe0();
        FUN_10881fd08();
        func_0x00010882de30();
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x00010881fc34(&stack0x00000080);
        func_0x000107c3394c();
        func_0x000107c33948();
        FUN_10881fd48(&stack0x00000008);
        func_0x000107c33784();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010881fc34(&stack0x00000080);
          func_0x000107c3394c();
          func_0x000107c33948();
          puVar2 = &stack0x00000008;
          FUN_10881fd48();
          func_0x00010882edf0();
          func_0x00010882f6ec(*(undefined8 *)(puVar2 + 0x18));
          (*extraout_x8_07)();
          func_0x00010880d34c(puVar2 + 0x18);
          puVar2[0x38] = 1;
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10881f3d8; end: 10881f53b;  */

void FUN_10881f3d8(undefined8 param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  code *pcVar2;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long unaff_x24;
  undefined4 in_stack_00000018;
  undefined *in_stack_00000088;
  code *in_stack_00000108;
  undefined **in_stack_00000110;
  code *in_stack_00000128;
  undefined **in_stack_00000130;
  undefined8 in_stack_00000150;
  undefined8 *in_stack_000001a0;
  code *in_stack_000001a8;
  undefined8 in_stack_000001d0;
  
  func_0x00010882f870();
  func_0x00010882eaac();
  func_0x00010882e2d0();
  func_0x00010882fc10();
  in_stack_00000018 = param_2;
  func_0x000107c339c8(unaff_x24 + 0x18);
  func_0x00010882ed14();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882eee8();
  in_stack_00000088 = &UNK_10f4bcc39;
  func_0x00010882eae4();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_00)();
  func_0x00010882e2e8();
  func_0x00010882e728();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_10881fa94();
  func_0x00010882e1e8(unaff_x19 + 0x38);
  in_stack_00000128 = FUN_10881f9e0;
  in_stack_00000130 = &PTR_FUN_110a74d80;
  func_0x000107c33a48();
  func_0x00010882f2a0();
  FUN_10881fa94();
  func_0x00010882e1a4();
  func_0x00010882e960();
  func_0x00010882e828();
  func_0x00010882e4b4();
  func_0x00010881f9bc(&stack0x00000090);
  func_0x00010882ee40();
  func_0x00010882ee74();
  FUN_10881fae0(&stack0x00000008);
  func_0x00010882e28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010882e2fc();
  func_0x00010881f9bc(&stack0x00000090);
  func_0x00010882ee40();
  func_0x00010882ee74();
  FUN_10881fae0();
  func_0x00010882edf0();
  pcVar2 = FUN_10881f53c;
  func_0x00010882fac4();
  in_stack_000001a0 = &stack0x000001d0;
  in_stack_000001a8 = pcVar2;
  func_0x00010882e0e4();
  func_0x00010882efb8();
  func_0x00010881f964();
  func_0x00010882e694();
  func_0x00010882e718();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c33978();
  func_0x00010882e60c();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_02)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x000107c339cc();
  func_0x000107c337bc();
  func_0x00010882ee48();
  func_0x00010882e6c8();
  FUN_10881fbd4();
  func_0x00010882de84(&stack0x00000160);
  in_stack_00000108 = FUN_10881fb24;
  in_stack_00000110 = &PTR_FUN_110a74d98;
  func_0x000107c339b8();
  func_0x00010882efe0();
  FUN_10881fbd4();
  func_0x00010882de30();
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x00010881fb00(&stack0x00000080);
  func_0x000107c3394c();
  func_0x000107c33948();
  FUN_10881fc14(&stack0x00000008);
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x00010881fb00(&stack0x00000080);
    func_0x000107c3394c();
    func_0x000107c33948();
    FUN_10881fc14();
    func_0x00010882edf0();
    pcVar2 = FUN_10881f688;
    func_0x00010882fac4();
    in_stack_000001a0 = &stack0x000001a0;
    in_stack_000001a8 = pcVar2;
    func_0x00010882e0e4();
    func_0x00010882efb8();
    func_0x00010881f964();
    func_0x00010882e694();
    func_0x00010882e718();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c33978();
    func_0x00010882e60c();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_04)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x000107c339cc();
    func_0x000107c337bc();
    func_0x00010882ee48();
    func_0x00010882e6c8();
    FUN_10881fd08();
    func_0x00010882de84(&stack0x00000160);
    in_stack_00000108 = FUN_10881fc58;
    in_stack_00000110 = &PTR_FUN_110a74db0;
    func_0x000107c339b8();
    func_0x00010882efe0();
    FUN_10881fd08();
    func_0x00010882de30();
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x00010881fc34(&stack0x00000080);
    func_0x000107c3394c();
    func_0x000107c33948();
    FUN_10881fd48(&stack0x00000008);
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x00010881fc34(&stack0x00000080);
      func_0x000107c3394c();
      func_0x000107c33948();
      puVar1 = &stack0x00000008;
      FUN_10881fd48();
      func_0x00010882edf0();
      func_0x00010882f6ec(*(undefined8 *)(puVar1 + 0x18));
      (*extraout_x8_05)();
      func_0x00010880d34c(puVar1 + 0x18);
      puVar1[0x38] = 1;
      return;
    }
  }
  return;
}



/* Entry: 10881f53c; end: 10881f687;  */

void FUN_10881f53c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined *in_stack_00000078;
  code *in_stack_00000108;
  undefined **in_stack_00000110;
  undefined8 *in_stack_000001a0;
  
  func_0x00010882fac4();
  func_0x00010882e0e4();
  func_0x00010882efb8();
  FUN_10881f964();
  func_0x00010882e694();
  func_0x00010882e718();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c33978();
  in_stack_00000078 = &UNK_10f4bcc55;
  func_0x00010882e60c();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_00)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x000107c339cc();
  func_0x000107c337bc();
  func_0x00010882ee48();
  func_0x00010882e6c8();
  FUN_10881fbd4();
  func_0x00010882de84(unaff_x19 + 0x38);
  in_stack_00000108 = FUN_10881fb24;
  in_stack_00000110 = &PTR_FUN_110a74d98;
  func_0x000107c339b8();
  func_0x00010882efe0();
  FUN_10881fbd4();
  func_0x00010882de30();
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x00010881fb00(&stack0x00000080);
  func_0x000107c3394c();
  func_0x000107c33948();
  FUN_10881fc14(&stack0x00000008);
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x00010881fb00(&stack0x00000080);
    func_0x000107c3394c();
    func_0x000107c33948();
    FUN_10881fc14();
    func_0x00010882edf0();
    func_0x00010882fac4();
    in_stack_000001a0 = &stack0x000001a0;
    func_0x00010882e0e4();
    func_0x00010882efb8();
    FUN_10881f964();
    func_0x00010882e694();
    func_0x00010882e718();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c33978();
    in_stack_00000078 = &UNK_10f4bcc70;
    func_0x00010882e60c();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_02)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x000107c339cc();
    func_0x000107c337bc();
    func_0x00010882ee48();
    func_0x00010882e6c8();
    FUN_10881fd08();
    func_0x00010882de84(unaff_x19 + 0x38);
    in_stack_00000108 = FUN_10881fc58;
    in_stack_00000110 = &PTR_FUN_110a74db0;
    func_0x000107c339b8();
    func_0x00010882efe0();
    FUN_10881fd08();
    func_0x00010882de30();
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x00010881fc34(&stack0x00000080);
    func_0x000107c3394c();
    func_0x000107c33948();
    FUN_10881fd48(&stack0x00000008);
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x00010881fc34(&stack0x00000080);
      func_0x000107c3394c();
      func_0x000107c33948();
      puVar1 = &stack0x00000008;
      FUN_10881fd48();
      func_0x00010882edf0();
      func_0x00010882f6ec(*(undefined8 *)(puVar1 + 0x18));
      (*extraout_x8_03)();
      func_0x00010880d34c(puVar1 + 0x18);
      puVar1[0x38] = 1;
      return;
    }
  }
  return;
}



/* Entry: 10881f688; end: 10881f7d3;  */

void FUN_10881f688(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  long unaff_x19;
  undefined *in_stack_00000078;
  code *in_stack_00000108;
  undefined **in_stack_00000110;
  
  func_0x00010882fac4();
  func_0x00010882e0e4();
  func_0x00010882efb8();
  FUN_10881f964();
  func_0x00010882e694();
  func_0x00010882e718();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c33978();
  in_stack_00000078 = &UNK_10f4bcc70;
  func_0x00010882e60c();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_00)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x000107c339cc();
  func_0x000107c337bc();
  func_0x00010882ee48();
  func_0x00010882e6c8();
  FUN_10881fd08();
  func_0x00010882de84(unaff_x19 + 0x38);
  in_stack_00000108 = FUN_10881fc58;
  in_stack_00000110 = &PTR_FUN_110a74db0;
  func_0x000107c339b8();
  func_0x00010882efe0();
  FUN_10881fd08();
  func_0x00010882de30();
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x00010881fc34(&stack0x00000080);
  func_0x000107c3394c();
  func_0x000107c33948();
  FUN_10881fd48(&stack0x00000008);
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x00010881fc34(&stack0x00000080);
    func_0x000107c3394c();
    func_0x000107c33948();
    puVar1 = &stack0x00000008;
    FUN_10881fd48();
    func_0x00010882edf0();
    func_0x00010882f6ec(*(undefined8 *)(puVar1 + 0x18));
    (*extraout_x8_01)();
    func_0x00010880d34c(puVar1 + 0x18);
    puVar1[0x38] = 1;
    return;
  }
  return;
}



/* Entry: 10881f7d4; end: 10881f863;  */

void FUN_10881f7d4(long param_1)

{
  code *extraout_x8;
  
  func_0x00010882f6ec(*(undefined8 *)(param_1 + 0x18));
  (*extraout_x8)();
  func_0x00010880d34c((undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 10881f864; end: 10881f8f3;  */

void FUN_10881f864(void)

{
  uint extraout_w8;
  
  func_0x00010882e56c();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882f008();
  func_0x000107c3397c();
  func_0x00010882e59c();
  func_0x00010882f4c0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107c33a90();
    func_0x000107c339ac();
    func_0x00010882fb50();
    func_0x00010882f008();
    func_0x000107c33980();
    func_0x00010882e58c();
    func_0x00010882f2b4();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 10881f8f4; end: 10881f913;  */

void FUN_10881f8f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010881f840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10881f914; end: 10881f917;  */

void FUN_10881f914(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10881f918; end: 10881f963;  */

void FUN_10881f918(void)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3382c();
  func_0x000107c33a34();
  func_0x00010882fc60();
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x00010882ecf4();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10881f964; end: 10881f9df;  */

void FUN_10881f964(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  
  func_0x000107c33be8();
  if (param_3 == 0) {
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  else {
    func_0x000107c33b48();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      return;
    }
  }
  func_0x00010527822c();
  func_0x000107c33b18();
  func_0x000104be5d60();
  func_0x00010882fcf4();
  func_0x0001000dfb88();
  if (unaff_x19 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10881f9e0; end: 10881fa6f;  */

void FUN_10881f9e0(void)

{
  uint extraout_w8;
  
  func_0x00010882e56c();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882f008();
  func_0x000107c3397c();
  func_0x00010882e59c();
  func_0x00010882f4c0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107c33a90();
    func_0x000107c33a5c();
    func_0x00010882fb50();
    func_0x00010882f008();
    func_0x000107c33980();
    func_0x00010882e58c();
    func_0x00010882f2b4();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 10881fa70; end: 10881fa8f;  */

void FUN_10881fa70(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010881f9bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10881fa90; end: 10881fa93;  */

void FUN_10881fa90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10881fa94; end: 10881fadf;  */

void FUN_10881fa94(void)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3382c();
  func_0x000107c33a34();
  func_0x00010882fc60();
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x00010882ecf4();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10881fae0; end: 10881fb23;  */

long FUN_10881fae0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882edb8();
  func_0x00010882fcf4();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10881fb24; end: 10881fbaf;  */

void FUN_10881fb24(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010882e350();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882ee30();
  func_0x000107c3397c();
  func_0x00010882e370();
  func_0x00010882ef78();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882e4c4();
    func_0x00010882eec8(*(undefined8 *)(extraout_x8_00 + 0x20));
    func_0x00010882ee30();
    func_0x000107c33980();
    func_0x00010882e360();
    func_0x00010882eea0();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 10881fbb0; end: 10881fbcf;  */

void FUN_10881fbb0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010881fb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10881fbd0; end: 10881fbd3;  */

void FUN_10881fbd0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10881fbd4; end: 10881fc13;  */

void FUN_10881fbd4(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010882e244();
  func_0x000107c27994();
  func_0x00010882e708();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10881fc14; end: 10881fc57;  */

long FUN_10881fc14(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882e75c();
  func_0x00010882ee28();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10881fc58; end: 10881fce3;  */

void FUN_10881fc58(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010882e350();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882ee30();
  func_0x000107c3397c();
  func_0x00010882e370();
  func_0x00010882ef78();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882e4c4();
    func_0x00010882eec8(*(undefined8 *)(extraout_x8_00 + 0x28));
    func_0x00010882ee30();
    func_0x000107c33980();
    func_0x00010882e360();
    func_0x00010882eea0();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 10881fce4; end: 10881fd03;  */

void FUN_10881fce4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010881fc34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10881fd04; end: 10881fd07;  */

void FUN_10881fd04(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10881fd08; end: 10881fd47;  */

void FUN_10881fd08(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010882e244();
  func_0x000107c27994();
  func_0x00010882e708();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10881fd48; end: 10881fd67;  */

long FUN_10881fd48(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882e75c();
  func_0x00010882ee28();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10881fd68; end: 10881fd77;  */

void FUN_10881fd68(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a74c98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10881fd78; end: 10881fd8b;  */

void FUN_10881fd78(void)

{
  func_0x00010881ff0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10881fd8c; end: 10881fd9b;  */

void FUN_10881fd8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10881fd9c; end: 10881fddf;  */

void FUN_10881fd9c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = param_2;
  func_0x000107c33bf4();
  uStack_40 = 0;
  func_0x000107c28b50(auStack_48,param_3);
  func_0x000107c33bec();
  return;
}



/* Entry: 10881fde0; end: 10881fdeb;  */

void FUN_10881fde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *extraout_x8;
  
  func_0x000108682154(param_2,param_3);
  func_0x000107c32120();
                    /* WARNING: Could not recover jumptable at 0x0001005e700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*extraout_x8)();
  return;
}



/* Entry: 10881fdec; end: 10881fe5f;  */

void FUN_10881fdec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [32];
  
  func_0x000107c279a0(auStack_50,param_5);
  func_0x00010882fef8();
  func_0x000107c28b54(param_2,param_3,param_4,auStack_50,auStack_80);
  func_0x000107c278e0(auStack_80);
  func_0x000107c279a4(auStack_50);
  return;
}



/* Entry: 10881fe60; end: 10881fedf;  */

void FUN_10881fe60(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [32];
  undefined4 *puStack_38;
  
  puVar2 = param_2 + 2;
  uVar1 = *param_2;
  func_0x000107c2825c();
  puStack_38 = puVar2;
  func_0x000107c279a0(auStack_58,param_4);
  func_0x00010882fef8();
  func_0x000107c28b54(uVar1,&puStack_38,param_3,auStack_58,auStack_80);
  func_0x000107c278e0(auStack_80);
  func_0x000107c279a4(auStack_58);
  return;
}



/* Entry: 10881fee0; end: 10881ff1b;  */

void FUN_10881fee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  
  func_0x000107c32130(param_2,param_3);
  func_0x000107c32124();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8 + 8);
  func_0x000107c32138();
                    /* WARNING: Could not recover jumptable at 0x0001005e700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10881ff1c; end: 10881ff2f;  */

void FUN_10881ff1c(void)

{
  FUN_108820348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10881ff30; end: 10881ff3b;  */

void FUN_10881ff30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10881ff3c; end: 10881ff4f;  */

void FUN_10881ff3c(void)

{
  FUN_108820300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10881ff50; end: 10881ff83;  */

void FUN_10881ff50(void)

{
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x00010882f320();
  for (; unaff_x21 != unaff_x22; unaff_x21 = unaff_x21 + 2) {
    func_0x000107c339ac(*unaff_x21);
    func_0x00010882ef30();
  }
  return;
}



/* Entry: 10881ff84; end: 10881ffc7;  */

void FUN_10881ff84(long param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  undefined8 *puVar2;
  
  func_0x000107c339ec();
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  for (puVar2 = *(undefined8 **)(param_1 + 0x18); puVar2 != puVar1; puVar2 = puVar2 + 2) {
    func_0x000107c33a5c(*puVar2);
    func_0x00010882f2c4();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10881ffc8; end: 10882002f;  */

void FUN_10881ffc8(void)

{
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x00010882f320();
  for (; unaff_x21 != unaff_x22; unaff_x21 = unaff_x21 + 2) {
    func_0x00010882f4b4(*unaff_x21);
    func_0x00010882ef30();
  }
  return;
}



/* Entry: 108820030; end: 108820077;  */

void FUN_108820030(long param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  undefined8 *puVar2;
  
  func_0x000107c339ec();
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  for (puVar2 = *(undefined8 **)(param_1 + 0x18); puVar2 != puVar1; puVar2 = puVar2 + 2) {
    func_0x00010882f6ec(*puVar2);
    func_0x000107c33b08();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 108820078; end: 1088201c3;  */

void FUN_108820078(void)

{
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c33ba4();
  while (unaff_x20 != unaff_x21) {
    func_0x000107c33b38();
    func_0x00010882f428(*(undefined8 *)(extraout_x8 + 0x38));
  }
  return;
}



/* Entry: 1088201c4; end: 1088201f7;  */

void FUN_1088201c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  for (puVar2 = *(undefined8 **)(param_1 + 0x18); puVar2 != puVar1; puVar2 = puVar2 + 2) {
    (**(code **)(*(long *)*puVar2 + 0x88))();
  }
  return;
}



/* Entry: 1088201f8; end: 1088202ff;  */

void FUN_1088201f8(void)

{
  long extraout_x8;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010882f320();
  while (unaff_x21 != unaff_x22) {
    func_0x000107c33b5c();
    func_0x00010882ef30(*(undefined8 *)(extraout_x8 + 0xa0));
  }
  return;
}



/* Entry: 108820300; end: 108820347;  */

undefined8 * FUN_108820300(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110a74f28;
  plVar1 = param_1 + 3;
  if (*plVar1 != 0) {
    FUN_10880e210(plVar1);
    __ZdlPv(*plVar1);
  }
  *param_1 = &PTR_DAT_110a627a0;
  func_0x000107c28cac(param_1 + 1);
  return param_1;
}



/* Entry: 108820348; end: 108820357;  */

void FUN_108820348(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a74ed8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108820358; end: 10882036b;  */

void FUN_108820358(void)

{
  func_0x000108820378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882036c; end: 108820387;  */

long FUN_10882036c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  func_0x00010049cda4(lVar1,*(undefined8 *)(param_1 + 0x28));
  func_0x00010049ce0c(lVar1,0);
  return lVar1;
}



/* Entry: 108820388; end: 10882039b;  */

void FUN_108820388(void)

{
  func_0x0001088203a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882039c; end: 1088203b3;  */

void FUN_10882039c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1088203b4; end: 1088203c7;  */

void FUN_1088203b4(void)

{
  FUN_10882084c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088203c8; end: 1088203d3;  */

void FUN_1088203c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1088203d4; end: 1088203e7;  */

void FUN_1088203d4(void)

{
  FUN_108820474();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088203e8; end: 108820473;  */

void FUN_1088203e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  long unaff_x19;
  
  func_0x000107c3398c();
  func_0x000107c339ac();
  (*extraout_x8)();
  if (*(char *)(param_3 + 8) == '\r') {
    return;
  }
  __ZNSt3__15mutex4lockEv(unaff_x19 + 0x40);
  FUN_108820548();
  FUN_108820548();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x40);
  return;
}



/* Entry: 108820474; end: 10882052f;  */

long FUN_108820474(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010882f3a0(&PTR_DAT_110a78a38);
  __ZNSt3__15mutexD1Ev(lVar1 + 0x40);
  func_0x0001088204b8(param_1 + 0x18);
  func_0x000107c29bf0();
  return param_1;
}



/* Entry: 108820530; end: 108820547;  */

void FUN_108820530(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108820548; end: 1088205b3;  */

void FUN_108820548(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  code *extraout_x8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar2 = param_1 + 0x18;
  uStack_24 = param_2;
  FUN_1088205cc(lVar2,&uStack_24);
  if (lVar2 == 0) {
    uStack_28 = 1;
    lVar2 = param_1 + 0x18;
    FUN_1088205b4(lVar2,&uStack_24,&uStack_28);
    iVar1 = *(int *)(lVar2 + 0x14);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x14) + 1;
    *(int *)(lVar2 + 0x14) = iVar1;
  }
  func_0x00010882f4b4(*(undefined8 *)(param_1 + 8),uStack_24,iVar1);
  (*extraout_x8)();
  return;
}



/* Entry: 1088205b4; end: 1088205cb;  */

void FUN_1088205b4(void)

{
  FUN_108820668();
  return;
}



/* Entry: 1088205cc; end: 108820667;  */

long FUN_1088205cc(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 108820668; end: 108820687;  */

void FUN_108820668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108820688(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 108820688; end: 1088207ff;  */

undefined1  [16] FUN_108820688(undefined8 param_1,undefined8 param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar6;
  ulong uVar7;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar8;
  long *unaff_x21;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x23;
  undefined1 auVar11 [16];
  
  func_0x000107c33c90();
  iVar1 = *param_4;
  uVar8 = (ulong)iVar1;
  uVar10 = param_3[1];
  if (uVar10 != 0) {
    func_0x000107c33c7c();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar8;
    }
    else {
      in_NG = (long)(uVar10 - uVar8) < 0;
      unaff_x23 = uVar8;
      if (uVar10 <= uVar8) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar8 / uVar10;
        }
        unaff_x23 = uVar8 - uVar5 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar5 = extraout_x8;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar9;
          if (unaff_x21 == (long *)0x0) goto LAB_108820728;
          uVar7 = unaff_x21[1];
          plVar9 = unaff_x21;
          if (uVar7 != uVar8) break;
          in_NG = *(int *)(unaff_x21 + 2) - iVar1 < 0;
          if (*(int *)(unaff_x21 + 2) == iVar1) {
            uVar4 = 0;
            goto LAB_1088207e8;
          }
        }
        if ((uVar10 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar10 <= uVar7) {
          func_0x00010882fed8();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
      } while (uVar7 == unaff_x23);
    }
  }
LAB_108820728:
  func_0x000107c33be4(&stack0x00000008);
  FUN_108820800();
  func_0x000107c33a3c();
  if ((uVar10 == 0) || (func_0x000107c33c0c(param_1,param_2,(float)uVar10), (bool)in_NG)) {
    func_0x000107c33c10();
    bVar2 = 2 < uVar10;
    uVar3 = uVar10 == 3;
    func_0x000107c33918();
    uVar4 = extraout_x8_01;
    if (!bVar2 || (bool)uVar3) {
      uVar4 = extraout_x9_00;
    }
    func_0x000107c29be8(param_3,uVar4);
    uVar10 = param_3[1];
    func_0x000107c33c7c();
    if ((bool)uVar3) {
      unaff_x23 = extraout_x8_02 & uVar8;
    }
    else {
      unaff_x23 = uVar8;
      if (uVar10 <= uVar8) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar8 / uVar10;
        }
        unaff_x23 = uVar8 - uVar5 * uVar10;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x000107c33b98();
    if (extraout_x9_01 != 0) {
      uVar8 = *(ulong *)(extraout_x9_01 + 8);
      lVar6 = extraout_x8_03;
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar8 = uVar8 & uVar10 - 1;
      }
      else if (uVar10 <= uVar8) {
        func_0x00010882fed8();
        lVar6 = extraout_x8_04;
        uVar8 = extraout_x9_02;
      }
      *(long **)(lVar6 + uVar8 * 8) = unaff_x21;
    }
  }
  else {
    func_0x00010882fe8c();
  }
  func_0x000107c33910();
  func_0x000107c29bec();
  uVar4 = 1;
LAB_1088207e8:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = unaff_x21;
  return auVar11;
}



/* Entry: 108820800; end: 10882084b;  */

void FUN_108820800(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *extraout_x8;
  undefined4 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107c339ec();
  puVar1 = param_1 + 2;
  func_0x000107c33bd0();
  *extraout_x8 = param_1;
  extraout_x8[1] = puVar1;
  extraout_x8[2] = 1;
  *param_1 = 0;
  param_1[1] = unaff_x21;
  uVar2 = *param_4;
  *(undefined4 *)(param_1 + 2) = *unaff_x20;
  *(undefined4 *)((long)param_1 + 0x14) = uVar2;
  return;
}



/* Entry: 10882084c; end: 10882085b;  */

void FUN_10882084c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a789e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10882085c; end: 10882086f;  */

void FUN_10882085c(void)

{
  FUN_1088208a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820870; end: 10882087b;  */

void FUN_108820870(long param_1)

{
  func_0x000107c29bf0(param_1 + 0xa8);
  FUN_10882087c(param_1 + 0xa0);
  func_0x000105275748(param_1 + 0x98);
  func_0x00010882fca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 10882087c; end: 10882089f;  */

void FUN_10882087c(long param_1)

{
  func_0x000107c33924();
  if (param_1 != 0) {
    func_0x00010882ec40();
  }
  return;
}



/* Entry: 1088208a0; end: 1088208ab;  */

void FUN_1088208a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a78a90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1088208ac; end: 1088208e7;  */

void FUN_1088208ac(long param_1)

{
  func_0x000107c29bf0(param_1 + 0x90);
  FUN_10882087c(param_1 + 0x88);
  func_0x000105275748(param_1 + 0x80);
  func_0x00010882fca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1088208e8; end: 1088208eb;  */

void FUN_1088208e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a78ae0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1088208ec; end: 1088208ff;  */

void FUN_1088208ec(void)

{
  func_0x000108820908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820900; end: 108820917;  */

void FUN_108820900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108820918; end: 10882092b;  */

void FUN_108820918(void)

{
  func_0x000108820934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10882092c; end: 108820943;  */

void FUN_10882092c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108820944; end: 108820957;  */

void FUN_108820944(void)

{
  func_0x000108820960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108820958; end: 10882096f;  */

void FUN_108820958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


