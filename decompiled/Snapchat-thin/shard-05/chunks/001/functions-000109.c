/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b67eb8; end: 103b67fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b67eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_112fef5e0;
  func_0x000107c61614(unaff_x20 + _DAT_112fef5e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fef5e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef5b0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef5b8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef5c0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fef5c8) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112fef5d0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fef5d8) = param_8;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_9);
  func_0x0001003604c8();
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_8);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 103b67fdc; end: 103b680cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b67fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112fef5e0;
  func_0x000107c61614(unaff_x20 + _DAT_112fef5e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fef5e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef5b0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef5b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef5c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112fef5c8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fef5d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef5d8) = 0;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_5);
  func_0x0001003604c8();
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b680d0; end: 103b680f3;  */

undefined8 FUN_103b680d0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b680f4; end: 103b6815f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b680f4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100360e84();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fef620) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b68160; end: 103b68167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68160(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100360e84();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef620) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103b68168; end: 103b681b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68168(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef620) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b681b4; end: 103b6823b; -[_TtC24FanPassSubscriptionScope39FanPassSubscriptionScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b681b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 103b6823c; end: 103b6829b; -[_TtC24FanPassSubscriptionScope39FanPassSubscriptionScopeFactoryServices init] */

void FUN_103b6823c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionScope.FanPassSubscriptionScopeFactoryServices",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b68268);
  (*pcVar1)();
}



/* Entry: 103b6829c; end: 103b682ab;  */

undefined1  [16] FUN_103b6829c(void)

{
  return ZEXT816(0x1106d8f68);
}



/* Entry: 103b682ac; end: 103b682bb; -[_TtC24FanPassSubscriptionScope39FanPassSubscriptionScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b682ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fef620));
  return;
}



/* Entry: 103b682bc; end: 103b6834f;  */

long FUN_103b682bc(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ad920;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 103b68350; end: 103b6835b;  */

/* WARNING: Possible PIC construction at 0x000103b68704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b68708) */

void FUN_103b68350(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  uVar1 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  (*(code *)&SUB_107a5bbcc)(uVar2,param_1,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b6835c; end: 103b683ab;  */

void FUN_103b6835c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0x676e69646e6570;
  func_0x000107c5fadc(0x676e69646e6570,0xe700000000000000);
  func_0x000107a5bbcc(uVar2,0,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b683ac; end: 103b683c3;  */

void FUN_103b683ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  (*(code *)&UNK_107a5c0e4)(uVar3,puVar1,param_4,param_2,1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103b683c4; end: 103b68493;  */

void FUN_103b683c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  (*param_6)(uVar3,puVar1,param_4,param_2,1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103b68494; end: 103b684bb;  */

/* WARNING: Possible PIC construction at 0x000103b68518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b6851c) */

void FUN_103b68494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0x73736563637573;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107a5c664(uVar2,uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b684bc; end: 103b68533;  */

/* WARNING: Possible PIC construction at 0x000103b68518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b6851c) */

void FUN_103b684bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(param_4,0xe700000000000000);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107a5c664(uVar1,param_4,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103b68534; end: 103b6854b;  */

void FUN_103b68534(double param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b685d8);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      (*(code *)&UNK_107a5bdfc)(uVar2,param_2,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b685e0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b685dc);
  (*pcVar1)();
}



/* Entry: 103b6854c; end: 103b685df;  */

void FUN_103b6854c(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b685d8);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      (*param_4)(uVar2,param_2,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b685e0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b685dc);
  (*pcVar1)();
}



/* Entry: 103b685e0; end: 103b685f7;  */

void FUN_103b685e0(void)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109f79d0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 103b685f8; end: 103b6863b;  */

void FUN_103b685f8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  func_0x000107a5c984(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b6863c; end: 103b68647;  */

void FUN_103b6863c(void)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109f7c00,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 103b68648; end: 103b68697;  */

void FUN_103b68648(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000107a5d15c(uVar2,0,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b68698; end: 103b686a3;  */

/* WARNING: Possible PIC construction at 0x000103b68704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b68708) */

void FUN_103b68698(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  uVar1 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  (*(code *)&SUB_107a5d15c)(uVar2,param_1,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b686a4; end: 103b6871b;  */

/* WARNING: Possible PIC construction at 0x000103b68704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b68708) */

void FUN_103b686a4(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  uVar1 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  (*param_3)(uVar2,param_1,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b6871c; end: 103b68753;  */

void FUN_103b6871c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107a5d404(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b68754; end: 103b68797;  */

void FUN_103b68754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107a5d404(uVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b68798; end: 103b687cf;  */

void FUN_103b68798(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107a5caf8(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b687d0; end: 103b688db;  */

/* WARNING: Possible PIC construction at 0x000103b68824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b68828) */

void FUN_103b687d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  uVar1 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000107a5cc6c(uVar2,0,param_1,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b688dc; end: 103b6897b;  */

/* WARNING: Possible PIC construction at 0x000103b68958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b6895c) */

void FUN_103b688dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = 0x676e69646e6570;
  uVar1 = uVar3;
  func_0x000107c5fadc(0x676e69646e6570,0xe700000000000000);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5fadc(0x676e69646e6570,0xe700000000000000);
  func_0x000107a5cc6c(uVar2,uVar1,param_1,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b6897c; end: 103b689a3;  */

void FUN_103b6897c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar2 = 0x73736563637573;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000107a5cf2c(uVar4,puVar1,uVar2,1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103b689a4; end: 103b68a37;  */

void FUN_103b689a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fadc(param_2,0xe700000000000000);
  func_0x000107a5cf2c(uVar3,puVar1,param_2,1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103b68a38; end: 103b68a43;  */

void FUN_103b68a38(void)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1109f7ca0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 103b68a44; end: 103b68a7b;  */

void FUN_103b68a44(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107a5d5f0(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b68a7c; end: 103b68a9f;  */

void FUN_103b68a7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103b68aa0; end: 103b68b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68aa0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037137c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fef6f8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b68b08; end: 103b68b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68b08(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef6f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b68b54; end: 103b68ca3; -[_TtC28SCAddToStoryCameraScopeProxy38SCAddToStoryCameraScopeBuilderServices buildWithReplyConfiguration:presentingViewController:cameraScopeDismissalDelegate:captureWorkflowResultDelegate:quickStickerImage:quickStickerMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126a9cf0;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c48314(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_78[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103b68ca4; end: 103b68cd3;  */

void FUN_103b68ca4(void)

{
  func_0x00010037137c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b68cd4; end: 103b68d03; -[_TtC28SCAddToStoryCameraScopeProxy38SCAddToStoryCameraScopeBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fef6f8));
  return;
}



/* Entry: 103b68d04; end: 103b68d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68d04(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef748) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b68d50; end: 103b68ee7; -[_TtC24SCDirectorModeScopeProxy27SCDirectorModeScopeServices buildWithPresentingUIContainer:sourcePageType:directorModeSource:replyConfiguration:scopeDelegate:draftDelegate:sendSnapDelegate:transitionDelegate:shortcutContextAction:mediaProvider:spotlightPostingConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126abf28;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_10);
  func_0x000107c61174();
  func_0x000107c615f0(param_12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c48070(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c615e8(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_78[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103b68ee8; end: 103b68f17;  */

void FUN_103b68ee8(void)

{
  func_0x000100371848();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b68f18; end: 103b68f47; -[_TtC24SCDirectorModeScopeProxy27SCDirectorModeScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fef748));
  return;
}



/* Entry: 103b68f48; end: 103b68f63; -[_TtC27SCSpotlightPlaybackServices27SCSpotlightPlaybackServices topicOperaPresenterProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68f48(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fef790);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x103b693b4;
  puStack_48 = &UNK_1106d9330;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103b68f64; end: 103b68f7f; -[_TtC27SCSpotlightPlaybackServices27SCSpotlightPlaybackServices spotlightManagementPresenterProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68f64(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fef798);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x103b693b0;
  puStack_48 = &UNK_1106d9308;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103b68f80; end: 103b68ffb;  */

void FUN_103b68f80(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + *param_3);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = param_4;
  uStack_48 = param_5;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103b68ffc; end: 103b69017; -[_TtC27SCSpotlightPlaybackServices27SCSpotlightPlaybackServices singleSpotlightPresenterProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b68ffc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fef7a0);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x103b693b8;
  puStack_48 = &UNK_1106d92e0;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103b69018; end: 103b6904f;  */

void FUN_103b69018(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b69050; end: 103b6905f; -[_TtC27SCSpotlightPlaybackServices27SCSpotlightPlaybackServices topicReportManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fef7a8));
  return;
}



/* Entry: 103b69060; end: 103b6906f; -[_TtC27SCSpotlightPlaybackServices27SCSpotlightPlaybackServices singleSnapPlaybackDataStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fef7b0));
  return;
}



/* Entry: 103b69070; end: 103b69133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef790);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef798);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef7a0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fef7a8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fef7b0) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b69134; end: 103b69287; -[_TtC27SCSpotlightPlaybackServices27SCSpotlightPlaybackServices initWithTopicOperaPresenterProvider:spotlightManagementPresenterProvider:singleSpotlightPresenterProvider:topicReportManager:singleSnapPlaybackDataStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar3 = &UNK_1106d9278;
  func_0x000107c613fc(&UNK_1106d9278,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  puVar4 = &UNK_1106d92a0;
  func_0x000107c613fc(&UNK_1106d92a0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  puVar5 = &UNK_1106d92c8;
  func_0x000107c613fc(&UNK_1106d92c8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_5;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fef790);
  *puVar1 = FUN_103b6935c;
  puVar1[1] = puVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fef798);
  *puVar1 = 0x103b693a8;
  puVar1[1] = puVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fef7a0);
  *puVar1 = 0x103b693ac;
  puVar1[1] = puVar5;
  *(undefined8 *)(param_1 + _DAT_112fef7a8) = param_6;
  *(undefined8 *)(param_1 + _DAT_112fef7b0) = param_7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 103b69288; end: 103b692e7; -[_TtC27SCSpotlightPlaybackServices27SCSpotlightPlaybackServices init] */

void FUN_103b69288(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightPlaybackServices.SCSpotlightPlaybackServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b692b4);
  (*pcVar1)();
}



/* Entry: 103b692e8; end: 103b6935b; -[_TtC27SCSpotlightPlaybackServices27SCSpotlightPlaybackServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b69340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b69344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b692e8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fef790 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fef798 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fef7a0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fef7a8));
  return;
}



/* Entry: 103b6935c; end: 103b6937b;  */

void FUN_103b6935c(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 103b6937c; end: 103b693bb;  */

void FUN_103b6937c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103b693bc; end: 103b693e7; +[SCSpotlightShareSource spotlightFeed] */

void FUN_103b693bc(void)

{
  func_0x000107c5fadc(0xd000000000000023,0x800000010f1a20f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b693e8; end: 103b69413; +[SCSpotlightShareSource spotlightFeedLenses] */

void FUN_103b693e8(void)

{
  func_0x000107c5fadc(0xd000000000000029,0x800000010f1a2120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b69414; end: 103b6943f; +[SCSpotlightShareSource topicPage] */

void FUN_103b69414(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1a2150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b69440; end: 103b6946b; +[SCSpotlightShareSource storyManagementSpotlight] */

void FUN_103b69440(void)

{
  func_0x000107c5fadc(0xd000000000000029,0x800000010f1a2170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6946c; end: 103b69497; +[SCSpotlightShareSource storyManagementSnapMap] */

void FUN_103b6946c(void)

{
  func_0x000107c5fadc(0xd000000000000027,0x800000010f1a21a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b69498; end: 103b694c3; +[SCSpotlightShareSource chatForward] */

void FUN_103b69498(void)

{
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1a21d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b694c4; end: 103b694ef; +[SCSpotlightShareSource chatForwardLenses] */

void FUN_103b694c4(void)

{
  func_0x000107c5fadc(0xd000000000000027,0x800000010f1a2200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b694f0; end: 103b694fb;  */

undefined * FUN_103b694f0(void)

{
  return &UNK_1106d9400;
}



/* Entry: 103b694fc; end: 103b69527; +[SCSpotlightShareSource quickShare] */

void FUN_103b694fc(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1a2230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b69528; end: 103b69553; +[SCSpotlightShareSource commentsTray] */

void FUN_103b69528(void)

{
  func_0x000107c5fadc(0xd000000000000022,0x800000010f1a2260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b69554; end: 103b6955f;  */

undefined * FUN_103b69554(void)

{
  return &UNK_1106d9410;
}



/* Entry: 103b69560; end: 103b6958b; +[SCSpotlightShareSource spotlightRecommend] */

void FUN_103b69560(void)

{
  func_0x000107c5fadc(0xd000000000000028,0x800000010f1a2290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6958c; end: 103b695c7; -[SCSpotlightShareSource init] */

void FUN_103b6958c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b695c8; end: 103b695fb;  */

void FUN_103b695c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b695fc; end: 103b695ff; -[SCSpotlightShareSource .cxx_destruct] */

void FUN_103b695fc(void)

{
  return;
}



/* Entry: 103b69600; end: 103b6961f;  */

void FUN_103b69600(void)

{
  func_0x000107c61168(&PTR_PTR_112931e08);
  return;
}



/* Entry: 103b69620; end: 103b69ad7;  */

long FUN_103b69620(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b69ad8; end: 103b69aef;  */

bool FUN_103b69ad8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b69af0; end: 103b69b2f;  */

void FUN_103b69af0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fef808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc59850;
  func_0x000107c61520(&UNK_10dc59850,&UNK_1106d9540);
  puRam0000000112fef808 = puVar1;
  return;
}



/* Entry: 103b69b30; end: 103b69bdb;  */

void FUN_103b69b30(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b69bdc; end: 103b69c13;  */

void FUN_103b69bdc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103b69c14; end: 103b69c23; -[_TtC26SCSpotlightSharingServices26SCSpotlightSharingServices spotlightShareSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fef810));
  return;
}



/* Entry: 103b69c24; end: 103b69c33; -[_TtC26SCSpotlightSharingServices26SCSpotlightSharingServices spotlightToStoriesPoster] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fef818));
  return;
}



/* Entry: 103b69c34; end: 103b69c43; -[_TtC26SCSpotlightSharingServices26SCSpotlightSharingServices spotlightPlatformAnalyticsCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fef820));
  return;
}



/* Entry: 103b69c44; end: 103b69c53; -[_TtC26SCSpotlightSharingServices26SCSpotlightSharingServices spotlightShareUIProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fef828));
  return;
}



/* Entry: 103b69c54; end: 103b69c63; -[_TtC26SCSpotlightSharingServices26SCSpotlightSharingServices spotlightShareDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fef830));
  return;
}



/* Entry: 103b69c64; end: 103b69cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef810) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fef820) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fef828) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fef830) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fef818) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b69d00; end: 103b69dc7; -[_TtC26SCSpotlightSharingServices26SCSpotlightSharingServices initWithSpotlightShareSender:spotlightPlatformAnalyticsCreator:spotlightShareUIProvider:spotlightShareDataProvider:spotlightToStoriesPoster:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69d00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fef810) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fef820) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fef828) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fef830) = param_6;
  *(undefined8 *)(param_1 + _DAT_112fef818) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 103b69dc8; end: 103b69e27; -[_TtC26SCSpotlightSharingServices26SCSpotlightSharingServices init] */

void FUN_103b69dc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightSharingServices.SCSpotlightSharingServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b69df4);
  (*pcVar1)();
}



/* Entry: 103b69e28; end: 103b69e8f; -[_TtC26SCSpotlightSharingServices26SCSpotlightSharingServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b69e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b69e64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b69e48) */
/* WARNING: Removing unreachable block (ram,0x000103b69e68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fef810));
  return;
}



/* Entry: 103b69e90; end: 103b69e9b; -[SCSpotlightShareModel compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69e90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fef860))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fef860);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b69e9c; end: 103b69ea7; -[SCSpotlightShareModel source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69e9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fef868))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fef868);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b69ea8; end: 103b69eb3; -[SCSpotlightShareModel lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69ea8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fef870))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fef870);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b69eb4; end: 103b69f0b;  */

void FUN_103b69eb4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b69f0c; end: 103b6a043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b69f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef860);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef868);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef870);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6a044; end: 103b6a127; -[SCSpotlightShareModel initWithCompositeStoryId:source:lensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a044(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = param_2;
  }
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112fef860);
  *plVar1 = param_3;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_112fef868);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112fef870);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6a128; end: 103b6a193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a128(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef860);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef868);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef870);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b6a194; end: 103b6a197; -[SCSpotlightShareModel copyWithZone:] */

void FUN_103b6a194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b6a198; end: 103b6a1b3; -[SCSpotlightShareModel description] */

void FUN_103b6a198(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b6a1b4; end: 103b6a22f; -[SCSpotlightShareModel init] */

void FUN_103b6a1b4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCSpotlightSharingServices/SCSpotlightShareModelWrapper.swift",0x3d,2,0x2d,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b6a1fc);
  (*pcVar1)();
}



/* Entry: 103b6a230; end: 103b6a283; -[SCSpotlightShareModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b6a250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b6a254) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fef860 + 8))
  ;
  return;
}



/* Entry: 103b6a284; end: 103b6a2a3;  */

void FUN_103b6a284(void)

{
  func_0x000107c61168(&PTR_PTR_112931f98);
  return;
}



/* Entry: 103b6a2a4; end: 103b6a2af; -[SCSpotlightReplyShareModel compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6a2a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fef8a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fef8a0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


