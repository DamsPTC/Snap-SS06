/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102191054; end: 102191073;  */

void FUN_102191054(void)

{
  func_0x000107c61168(&PTR_PTR_112822ba0);
  return;
}



/* Entry: 102191074; end: 1021910f7; -[_TtC19GenAICreateSongFlow23GenAICreateSongLauncher plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001021910b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021910cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021910b4) */
/* WARNING: Removing unreachable block (ram,0x0001021910d0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102191074(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021910f8; end: 10219113f;  */

undefined8 FUN_1021910f8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e5e768;
  func_0x0001000285a8(0x112e5e768,&UNK_10da65a68);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102191140; end: 102191163;  */

void FUN_102191140(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10218bccc();
    func_0x00010218c240();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102191164; end: 1021911d7;  */

void FUN_102191164(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1021911d8; end: 10219127b;  */

void FUN_1021911d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c5ee30(param_2);
  uVar5 = uVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c5faec(param_3);
  (*pcVar1)(param_2,uVar4,param_3,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x00010006c090(param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10219127c; end: 1021912f3;  */

void FUN_10219127c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102191d30(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1021912f4; end: 102191317;  */

void FUN_1021912f4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e5e788;
  plVar5 = (long *)&UNK_10da65b10;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102191d30(0,0x112e5e2f0,&PTR_PTR_1126c4548);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102191318; end: 102191403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102191318(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_4;
  func_0x000107c614f0();
  lVar3 = param_4 + _DAT_112e5e628;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  *(undefined8 *)(param_4 + _DAT_112e5e620) = param_2;
  *(undefined ***)(lVar3 + 8) = &PTR_DAT_1104d7958;
  func_0x000107c61604();
  puVar1 = PTR_s_initWithValdiView_presentationTy_1125272a0;
  lStack_50 = param_4;
  lStack_48 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_50,puVar1,param_1,4);
  func_0x000107c61180();
  func_0x000107c561c0(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar4;
}



/* Entry: 102191404; end: 1021914f3;  */

long FUN_102191404(double param_1)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  double dVar4;
  
  lVar2 = 0;
  dVar4 = param_1;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  param_1 = dVar4 * 1000.0 - param_1;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021914ec);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021914f0);
    (*pcVar1)();
  }
  if (param_1 < 9.223372036854776e+18) {
    return (long)param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021914f4);
  (*pcVar1)();
}



/* Entry: 1021914f4; end: 10219169f;  */

undefined1  [16] FUN_1021914f4(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  param_3 = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
  uVar2 = param_1;
  func_0x000107c5fb5c();
  if ((long)param_3 < (long)uVar2) {
    lVar3 = 0xa680e2;
    func_0x000107c5fb5c(0xa680e2,0xa300000000000000);
    lVar4 = param_3 - lVar3;
    if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10219169c);
      (*pcVar1)();
    }
    func_0x000107c61434(param_2);
    if (lVar4 < 0) {
      uVar2 = param_2;
      func_0x000101297580(param_3,param_1,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c5fb2c(param_3,param_1,uVar2,param_4);
      func_0x000107c6142c(param_4);
      uStack_58 = param_1;
    }
    else {
      uVar2 = param_2;
      func_0x000101297580();
      func_0x000107c6142c(param_2);
      uStack_60 = 0;
      uStack_58 = 0xe000000000000000;
      lVar5 = 0xa680e2;
      func_0x000107c5fb5c(0xa680e2,0xa300000000000000);
      lVar6 = lVar4;
      func_0x000107c601b0(lVar4,param_1,lVar4,param_1,uVar2,param_4);
      lVar3 = lVar5 + lVar6;
      if (SCARRY8(lVar5,lVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021916a0);
        (*pcVar1)();
      }
      func_0x000107c5fb38(lVar3);
      lStack_80 = lVar4;
      uStack_78 = param_1;
      uStack_70 = uVar2;
      uStack_68 = param_4;
      func_0x000100edab88();
      func_0x000107c5fb70(&lStack_80,PTR___sSsN_11034e1d8,lVar3);
      lStack_80 = 0xa680e2;
      uStack_78 = 0xa300000000000000;
      func_0x000107c5fb70(&lStack_80,PTR___sSSN_11034da80,PTR___sSSSTsWP_11034daa0);
      func_0x000107c6142c(param_4);
      param_3 = uStack_60;
    }
  }
  else {
    func_0x000107c61434(param_2);
    param_3 = param_1;
    uStack_58 = param_2;
  }
  auVar7._8_8_ = uStack_58;
  auVar7._0_8_ = param_3;
  return auVar7;
}



/* Entry: 1021916a0; end: 1021916c7;  */

void FUN_1021916a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10218dd74(param_1,param_2,param_3,uVar1,0);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1021916c8; end: 1021917a7;  */

void FUN_1021916c8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  uVar9 = *(undefined1 *)(unaff_x20 + 0x58);
  lVar16 = *(long *)(unaff_x20 + 0xb0);
  lVar15 = *(long *)(unaff_x20 + 0xa8);
  lVar14 = *(long *)(unaff_x20 + 0xc0);
  lVar13 = *(long *)(unaff_x20 + 0xb8);
  lVar11 = *(long *)(unaff_x20 + 200);
  plVar10 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1021917a8;
  plVar10[0x1b] = lVar14;
  plVar10[0x1c] = lVar11;
  plVar10[0x1a] = lVar13;
  plVar10[0x19] = lVar16;
  plVar10[0x18] = lVar15;
  plVar10[0x17] = unaff_x20 + 0x60;
  *(undefined1 *)(plVar10 + 0x26) = uVar9;
  plVar10[0x16] = lVar12;
  plVar10[0x15] = lVar8;
  plVar10[0x13] = lVar7;
  plVar10[0x14] = lVar4;
  plVar10[0x11] = lVar2;
  plVar10[0x12] = lVar6;
  plVar10[0xf] = lVar1;
  plVar10[0x10] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10218fd58,0,0,lVar2,lVar6,uVar3);
  return;
}



/* Entry: 1021917a8; end: 1021917e3;  */

void FUN_1021917a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001021917e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1021917e4; end: 1021918a3;  */

undefined8 FUN_1021917e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e5e768;
  func_0x0001000285a8(0x112e5e768,&UNK_10da65a68);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1021918a4; end: 1021918af;  */

/* WARNING: Possible PIC construction at 0x0001021907ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021907f0) */

void FUN_1021918a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    puStack_40 = (undefined *)0x0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c602fc(0x27,*(undefined8 *)(unaff_x20 + 0x10));
    func_0x000107c6142c(uStack_38);
    puStack_40 = (undefined *)0xd000000000000025;
    uStack_38 = 0x800000010f068610;
    puVar1 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(uStack_38);
    puStack_40 = PTR_PTR_113188498;
    puVar1 = PTR_PTR_113188498;
    func_0x000107c61174();
    func_0x0001007d6d78(&puStack_40);
    func_0x000107c61170(puVar1);
    return;
  }
  puVar1 = &UNK_1104d7b58;
  func_0x000107c613fc(&UNK_1104d7b58,0x20,7,*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined **)(puVar1 + 0x10) = &UNK_10da65aa8;
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  func_0x000107c6157c(uVar2);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(3,0x100,0x60,3,0,0,&UNK_10da65ab8,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1021918b0; end: 10219193b;  */

void FUN_1021918b0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1021918f8;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102190874,lVar1,lVar2);
  return;
}



/* Entry: 10219193c; end: 1021919ab;  */

void FUN_10219193c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102191db8;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1021919ac; end: 1021919db;  */

void FUN_1021919ac(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1021919dc; end: 1021919e3;  */

void FUN_1021919dc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x40);
    if (lVar2 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      func_0x000107c61174();
      FUN_10218c020();
      if ((*(byte *)(lVar1 + 0x58) & 1) == 0) {
        if (*(char *)(lVar1 + 0x68) == '\x01') {
          *(undefined1 *)(lVar1 + 0x68) = 0;
          *(undefined8 *)(lVar1 + 0x60) = 0x3ff0000000000000;
          func_0x000107c51bdc(lVar2);
        }
        func_0x000107c4e868(lVar2);
      }
      else {
        func_0x000107c4e454(lVar2);
      }
      func_0x000107c61574(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1021919e4; end: 102191ab3;  */

void FUN_1021919e4(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x20;
  long unaff_x22;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar14 = *(long *)(unaff_x20 + 0x90);
  lVar13 = *(long *)(unaff_x20 + 0x88);
  lVar15 = *(long *)(unaff_x20 + 0x98);
  lVar12 = *(long *)(unaff_x20 + 0xa0);
  lVar7 = *(long *)(unaff_x20 + 0xb0);
  plVar10 = (long *)0x360;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x102191dbc;
  plVar10[0x67] = lVar7;
  plVar10[0x66] = lVar12;
  plVar10[0x65] = lVar15;
  plVar10[100] = lVar14;
  plVar10[99] = lVar13;
  plVar10[0x62] = unaff_x20 + 0x40;
  plVar10[0x61] = lVar6;
  lVar7 = 0;
  func_0x000107c5fcec();
  plVar10[0x68] = lVar7;
  func_0x000107c5fce8();
  plVar10[0x69] = lVar7;
  func_0x000107c614f0(uVar8);
  piVar11 = *(int **)(lVar4 + 8);
  iVar1 = *piVar11;
  plVar9 = (long *)(ulong)(uint)piVar11[1];
  func_0x000107c615b8();
  plVar10[0x6a] = (long)plVar9;
  *plVar9 = (long)plVar10;
  plVar9[1] = (long)FUN_10218f318;
                    /* WARNING: Could not recover jumptable at 0x00010218f314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))
            (plVar9,plVar10 + 0x38,uVar2,uVar5,uVar3,plVar10 + 0x6b,uVar8,lVar4);
  return;
}



/* Entry: 102191ab4; end: 102191b17;  */

void FUN_102191ab4(void)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102191dc0;
  *(undefined1 *)(plVar3 + 0xd) = uVar1;
  plVar3[0xb] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec(0,uVar1,uVar5);
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[0xc] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10218f9e4,lVar2,lVar4);
  return;
}



/* Entry: 102191b18; end: 102191b87;  */

void FUN_102191b18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102191dc4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102191b88; end: 102191beb;  */

void FUN_102191b88(void)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102191dc8;
  *(undefined1 *)(plVar3 + 0xd) = uVar1;
  plVar3[0xb] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec(0,uVar1,uVar5);
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[0xc] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10218f9e4,lVar2,lVar4);
  return;
}



/* Entry: 102191bec; end: 102191c5b;  */

void FUN_102191bec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102191dcc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102191c5c; end: 102191d6f;  */

undefined8 FUN_102191c5c(undefined8 param_1)

{
  (*(code *)&DAT_103a8c1b0)();
  return param_1;
}



/* Entry: 102191d70; end: 102191dcf;  */

void FUN_102191d70(long param_1,long param_2)

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



/* Entry: 102191dd0; end: 102192847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102191dd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar13;
  long extraout_x8_01;
  undefined8 uVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long alStack_1e0 [2];
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  func_0x000100083b20(alStack_90);
  lStack_128 = alStack_90[0];
  func_0x000107c3fa04();
  lVar8 = alStack_90[0];
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102192844);
    (*pcVar3)();
  }
  lVar4 = 0;
  func_0x000102193ba8();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(long *)(lVar5 + 0x10) = lVar8;
  lVar6 = 0;
  FUN_10218983c();
  lVar8 = lVar6;
  func_0x000107c613fc();
  ppuStack_70 = &PTR_DAT_1104d7de8;
  ppuStack_98 = &PTR_DAT_1104d74c0;
  lVar7 = 0;
  alStack_b8[0] = lVar8;
  lStack_a0 = lVar6;
  alStack_90[0] = lVar5;
  lStack_78 = lVar4;
  func_0x0001021888e4();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_90,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar15 = (undefined8 *)((long)alStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar15);
  func_0x0001000c6518(alStack_b8,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar16 = (undefined8 *)((long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar16);
  uVar13 = *puVar15;
  uVar14 = *puVar16;
  *(long *)(lVar7 + 0x28) = lVar4;
  *(undefined ***)(lVar7 + 0x30) = &PTR_DAT_1104d7de8;
  *(undefined8 *)(lVar7 + 0x38) = uVar14;
  *(undefined8 *)(lVar7 + 0x10) = uVar13;
  *(long *)(lVar7 + 0x50) = lVar6;
  *(undefined ***)(lVar7 + 0x58) = &PTR_DAT_1104d74c0;
  lStack_160 = lVar5;
  lStack_130 = lVar7;
  func_0x000107c6157c(lVar5);
  func_0x0001000834e4(alStack_b8);
  func_0x0001000834e4(alStack_90);
  func_0x000100083b20(alStack_90);
  lVar8 = alStack_90[0];
  lVar5 = alStack_90[0];
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  lVar6 = 0;
  func_0x00010218ada4();
  lVar4 = lVar6;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x10) = lVar5;
  func_0x000100083b20(alStack_90);
  lVar8 = alStack_90[0];
  uVar13 = *(undefined8 *)(alStack_90[0] + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  lVar8 = 0;
  func_0x00010218b69c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar13;
  lStack_178 = lVar8;
  func_0x000100083b20(alStack_90);
  lVar8 = alStack_90[0];
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  func_0x00010017da58(lVar8);
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  puStack_168 = puVar9;
  func_0x000107c61170(lVar8);
  func_0x000100083b20(alStack_90);
  lVar8 = alStack_90[0];
  puVar9 = &UNK_10da65b50;
  func_0x0001000285a8(0x112df8e10);
  func_0x000107c610f8();
  func_0x00010017da58(lVar8);
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  puStack_170 = puVar10;
  func_0x000107c61170(lVar8);
  func_0x000100083b20(&uStack_c0);
  uStack_138 = uStack_c0;
  func_0x000100083b20(&lStack_c8);
  uStack_1a8 = ((undefined8 *)(lStack_c8 + _DAT_112fdd608))[1];
  uStack_1b0 = *(undefined8 *)(lStack_c8 + _DAT_112fdd608);
  uStack_180 = uStack_1b0;
  func_0x000107c615f0();
  func_0x000107c61170(lStack_c8);
  func_0x000100083b20(&uStack_d0);
  uVar13 = uStack_d0;
  func_0x000107c422dc();
  func_0x000107c61180();
  uStack_188 = uVar13;
  func_0x000107c61170(uStack_d0);
  func_0x000100083b20(&uStack_d8);
  uVar13 = uStack_d8;
  func_0x000107c40664();
  func_0x000107c61180();
  uStack_140 = uVar13;
  func_0x000107c61170(uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  uStack_190 = uStack_e8;
  func_0x000100083b20(&uStack_f0);
  uStack_198 = uStack_f0;
  func_0x000100083b20(&uStack_f8);
  uStack_148 = uStack_f8;
  func_0x000100083b20(&lStack_100);
  uVar13 = *(undefined8 *)(lStack_100 + _DAT_113080ad0);
  func_0x000107c61174();
  uStack_1b8 = uVar13;
  func_0x000107c61170(lStack_100);
  lVar8 = lStack_128;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x000100083b20(&lStack_108);
    uStack_158 = *(undefined8 *)(lStack_108 + _DAT_113036478);
    func_0x000107c6157c();
    func_0x000107c61170(lStack_108);
    func_0x000100083b20(&lStack_110);
    uVar14 = *(undefined8 *)(lStack_110 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_110);
    uVar13 = uVar14;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    uVar14 = uVar13;
    func_0x000107c5faec();
    puStack_1d0 = puVar9;
    puStack_1c8 = (undefined *)uVar14;
    func_0x000107c61170(uVar13);
    ppuStack_70 = &PTR_DAT_1104d7548;
    lVar7 = 0;
    alStack_90[0] = lVar4;
    lStack_78 = lVar6;
    FUN_102191054();
    alStack_1e0[1] = lVar7;
    lStack_150 = lVar4;
    func_0x000107c610f8();
    func_0x0001000c6518(alStack_90,lVar6);
    puStack_1c0 = (undefined1 *)alStack_1e0;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    plVar12 = (long *)((long)alStack_1e0 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_01 + 0x10))(plVar12);
    alStack_b8[0] = *plVar12;
    ppuStack_98 = &PTR_DAT_1104d7548;
    puVar15 = (undefined8 *)(lVar7 + _DAT_112e5e6e0);
    *puVar15 = 0;
    puVar15[1] = 0xe000000000000000;
    *(undefined1 *)(lVar7 + _DAT_112e5e6e8) = 0;
    *(undefined8 *)(lVar7 + _DAT_112e5e6f0) = 0;
    *(undefined8 *)(lVar7 + _DAT_112e5e6f8) = 0;
    puVar15 = (undefined8 *)(lVar7 + _DAT_112e5e700);
    *puVar15 = 0;
    puVar15[1] = 0;
    *(undefined8 *)(lVar7 + _DAT_112e5e708) = 0;
    puVar15 = (undefined8 *)(lVar7 + _DAT_112e5e710);
    puVar15[1] = 0xf000000000000000;
    *puVar15 = 0;
    puVar15 = (undefined8 *)(lVar7 + _DAT_112e5e718);
    puVar15[8] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    puVar15[7] = 0;
    puVar15[6] = 0;
    puVar15[1] = 0;
    *puVar15 = 0;
    puVar15[3] = 0;
    puVar15[2] = 0;
    lStack_a0 = lVar6;
    func_0x000107c61614(lVar7 + _DAT_112e5e720,0);
    puVar15 = (undefined8 *)(lVar7 + _DAT_112e5e728);
    *puVar15 = 0;
    puVar15[1] = 0;
    *(undefined8 *)(lVar7 + _DAT_112e5e730) = 0;
    puVar15 = (undefined8 *)(lVar7 + _DAT_112e5e738);
    *puVar15 = 0;
    *(undefined1 *)(puVar15 + 1) = 1;
    *(undefined8 *)(lVar7 + _DAT_112e5e658) = uStack_138;
    puVar15 = (undefined8 *)(lVar7 + _DAT_112e5e660);
    puVar15[1] = uStack_1a8;
    *puVar15 = uStack_1b0;
    plVar12 = (long *)(lVar7 + _DAT_112e5e668);
    *plVar12 = lStack_130;
    plVar12[1] = (long)&PTR_DAT_1104d7390;
    *(undefined8 *)(lVar7 + _DAT_112e5e670) = uStack_188;
    *(undefined8 *)(lVar7 + _DAT_112e5e678) = uStack_140;
    FUN_102192a14(alStack_b8,lVar7 + _DAT_112e5e680);
    uVar2 = uStack_158;
    puVar10 = puStack_168;
    puVar9 = puStack_170;
    lVar5 = lStack_178;
    uVar1 = uStack_180;
    uVar11 = uStack_190;
    uVar14 = uStack_198;
    uVar13 = uStack_1b8;
    *(undefined8 *)(lVar7 + _DAT_112e5e688) = uStack_e0;
    *(undefined **)(lVar7 + _DAT_112e5e690) = puStack_168;
    *(undefined8 *)(lVar7 + _DAT_112e5e698) = uStack_190;
    *(undefined8 *)(lVar7 + _DAT_112e5e6a0) = uStack_198;
    plVar12 = (long *)(lVar7 + _DAT_112e5e6a8);
    *plVar12 = lStack_178;
    plVar12[1] = (long)&PTR_DAT_1104d76f0;
    *(undefined **)(lVar7 + _DAT_112e5e6b0) = puStack_170;
    *(undefined8 *)(lVar7 + _DAT_112e5e6b8) = uStack_148;
    *(undefined8 *)(lVar7 + _DAT_112e5e6c0) = uStack_1b8;
    *(long *)(lVar7 + _DAT_112e5e6c8) = lVar8;
    *(undefined8 *)(lVar7 + _DAT_112e5e6d0) = uStack_158;
    puVar15 = (undefined8 *)(lVar7 + _DAT_112e5e6d8);
    *puVar15 = puStack_1c8;
    puVar15[1] = puStack_1d0;
    lStack_118 = alStack_1e0[1];
    puStack_1c8 = PTR_s_init_1125d9248;
    alStack_1e0[0] = lVar8;
    lStack_120 = lVar7;
    func_0x000107c615f0(uStack_180);
    func_0x000107c61174();
    uStack_1b0 = uVar13;
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(lStack_150);
    uVar13 = uStack_138;
    func_0x000107c61174();
    lVar4 = lStack_130;
    uStack_1b8 = uVar13;
    func_0x000107c6157c(lStack_130);
    func_0x000107c61174();
    uStack_138 = uStack_188;
    func_0x000107c61174();
    func_0x000107c61174();
    uStack_188 = uStack_e0;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(lVar5);
    func_0x000107c61174();
    uVar13 = uStack_148;
    func_0x000107c61174();
    lVar8 = alStack_1e0[0];
    func_0x000107c615f0(alStack_1e0[0]);
    plVar12 = &lStack_120;
    func_0x000107c61154(plVar12,puStack_1c8);
    func_0x000107c61170(uStack_1b8);
    func_0x000107c615e8(uVar1);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uStack_138);
    func_0x000107c61170(uStack_140);
    func_0x000107c61170(uStack_188);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar14);
    func_0x000107c61574(lVar5);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uStack_1b0);
    func_0x000107c615e8(lVar8);
    func_0x000107c61574(uStack_158);
    func_0x000107c61574(lStack_150);
    func_0x000107c61574(lStack_160);
    func_0x000107c61170(lStack_128);
    func_0x0001000834e4(alStack_b8);
    func_0x0001000834e4(alStack_90);
    return plVar12;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102192848);
  (*pcVar3)();
}



/* Entry: 102192848; end: 10219287b; -[_TtC19GenAICreateSongFlow34GenAICreateSongLauncherFactoryImpl makeLauncher] */

void FUN_102192848(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102191dd0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10219287c; end: 1021928db; -[_TtC19GenAICreateSongFlow34GenAICreateSongLauncherFactoryImpl init] */

void FUN_10219287c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAICreateSongFlow.GenAICreateSongLauncherFactoryImpl",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021928a8);
  (*pcVar1)();
}



/* Entry: 1021928dc; end: 1021929f3; -[_TtC19GenAICreateSongFlow34GenAICreateSongLauncherFactoryImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021928f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102192918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102192938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102192958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102192978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102192998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021929b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021929d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021929bc) */
/* WARNING: Removing unreachable block (ram,0x00010219299c) */
/* WARNING: Removing unreachable block (ram,0x00010219297c) */
/* WARNING: Removing unreachable block (ram,0x00010219295c) */
/* WARNING: Removing unreachable block (ram,0x00010219293c) */
/* WARNING: Removing unreachable block (ram,0x00010219291c) */
/* WARNING: Removing unreachable block (ram,0x0001021928fc) */
/* WARNING: Removing unreachable block (ram,0x0001021929dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021928dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5e790));
  return;
}



/* Entry: 1021929f4; end: 102192a13;  */

void FUN_1021929f4(void)

{
  func_0x000107c61168(&PTR_PTR_112822d40);
  return;
}



/* Entry: 102192a14; end: 102192a57;  */

long FUN_102192a14(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102192a58; end: 102192c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102192a58(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  FUN_1021929f4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e5e790) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e5e798) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112e5e7a0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112e5e7a8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112e5e7b0) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112e5e7b8) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112e5e7c0) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112e5e7c8) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112e5e7d0) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112e5e7d8) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112e5e7e0) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112e5e7e8) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112e5e7f0) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112e5e7f8) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112e5e800) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112e5e808) = param_17;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 102192c70; end: 102192cb3;  */

void FUN_102192c70(void)

{
  long unaff_x20;
  
  FUN_102192a58(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 102192cb4; end: 102192cc3;  */

undefined1  [16] FUN_102192cb4(void)

{
  return ZEXT816(0x1104d7d40);
}



/* Entry: 102192cc4; end: 102192cef;  */

long FUN_102192cc4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102192cf0; end: 102192e9f;  */

int FUN_102192cf0(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x20] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102192ea0; end: 102192fd3;  */

void FUN_102192ea0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8();
  puVar3 = puVar2;
  func_0x000107c5ed90();
  func_0x000107c48fd4();
  *(undefined **)(unaff_x22 + 0x110) = puVar2;
  func_0x000107c61170(puVar3);
  uVar4 = 0x112e5e2d8;
  func_0x0001000285a8(0x112e5e2d8,&UNK_10da65670);
  func_0x000107c5f060();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar4;
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    plVar5 = (long *)(ulong)*(uint *)(
                                     PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlFTu_11034d5c0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_102192fd4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlF_11034d5b8
    )(plVar5,unaff_x22 + 0x1a0,uVar4,0,0);
    return;
  }
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10219304c;
                    /* WARNING: Could not recover jumptable at 0x000102192fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_102188c7c(uVar4,0,0);
  return;
}



/* Entry: 102192fd4; end: 10219304b;  */

void FUN_102192fd4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x120));
  func_0x000107c61574(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)(lVar2 + 0x1b0);
    *(undefined8 *)(lVar2 + 0x140) = *(undefined8 *)(lVar2 + 0x1a8);
    *(undefined8 *)(lVar2 + 0x138) = *(undefined8 *)(lVar2 + 0x1a0);
    pcVar1 = FUN_1021930e8;
  }
  else {
    *(long *)(lVar2 + 0x168) = unaff_x20;
    pcVar1 = FUN_102193714;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10219304c; end: 1021930e7;  */

void FUN_10219304c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x128));
  func_0x000107c61574(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x1a0) = param_1;
    *(int *)(lVar2 + 0x1a8) = (int)param_2;
    *(int *)(lVar2 + 0x1ac) = (int)((ulong)param_2 >> 0x20);
    *(undefined8 *)(lVar2 + 0x130) = param_3;
    *(undefined8 *)(lVar2 + 0x138) = param_1;
    *(undefined8 *)(lVar2 + 0x140) = *(undefined8 *)(lVar2 + 0x1a8);
    pcVar1 = FUN_1021930e8;
  }
  else {
    *(long *)(lVar2 + 0x168) = unaff_x20;
    pcVar1 = FUN_102193714;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1021930e8; end: 102193713;  */

void FUN_1021930e8(double param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  long unaff_x22;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar11 = *(long *)(unaff_x22 + 0x108);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c600d4(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x140),
                      *(undefined8 *)(unaff_x22 + 0x130));
  dVar21 = 1.0;
  if (1.0 < param_1 && (ulong)ABS(param_1) < 0x7ff0000000000000) {
    dVar21 = param_1;
  }
  puVar2 = PTR_PTR_1126c4288;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000107c3087c();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x148) = puVar3;
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126da0b0;
  func_0x000107c610f8();
  func_0x000107c3086c(uVar23,uVar22,uVar23,uVar22,0,0,dVar21,0);
  *(undefined **)(unaff_x22 + 0x150) = puVar2;
  puVar4 = PTR_PTR_1126bc3e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x158) = puVar4;
  uVar23 = *(undefined8 *)(lVar11 + 0x10);
  puVar5 = puVar4;
  func_0x000107c5de40();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x160) = puVar5;
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar6 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar7 + -8);
  (**(code **)(lVar16 + 0x38))(uVar6,1,1,lVar7);
  puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  *(undefined8 *)(unaff_x22 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(undefined8 *)(unaff_x22 + 0x78) = 0;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined8 *)(unaff_x22 + 0x80) = 0x3ff0000000000000;
  func_0x000107c5dc4c();
  func_0x000107c61180();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  lVar11 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar10 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar11 = 0;
  func_0x000107c5eea4();
  lVar20 = *(long *)(lVar11 + -8);
  (**(code **)(lVar20 + 0x38))(uVar10,1,1,lVar11);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(dVar21);
  uVar18 = uVar6;
  (**(code **)(lVar16 + 0x30))(uVar6,1,lVar7);
  func_0x000107c61174(uVar19);
  uVar22 = 0;
  if ((int)uVar18 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar16 + 8))(uVar6,lVar7);
    uVar22 = uVar19;
  }
  uVar18 = uVar10;
  (**(code **)(lVar20 + 0x30))(uVar10,1,lVar11);
  if ((int)uVar18 == 1) {
    uVar18 = 0;
  }
  else {
    func_0x000107c5ee70();
    (**(code **)(lVar20 + 8))(uVar10,lVar11);
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x110);
  puVar17 = (undefined8 *)PTR_PTR_1126da0c0;
  func_0x000107c610f8();
  func_0x000107c46ec0();
  *(undefined8 **)(unaff_x22 + 0x170) = puVar17;
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar6);
  puVar8 = PTR_PTR_1126da0d0;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  puVar9 = puVar5;
  func_0x000107c5ed90();
  func_0x000107c46eb8();
  *(undefined **)(unaff_x22 + 0x178) = puVar8;
  func_0x000107c61170(puVar9);
  func_0x000107c615e8(uVar23);
  func_0x000107c61170(puVar5);
  puVar13 = puVar17;
  func_0x000107c61170();
  if (puVar8 != (undefined *)0x0) {
    *(undefined **)(unaff_x22 + 0x60) = puVar8;
    *(undefined **)(unaff_x22 + 0xe0) = puVar8;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      plVar14 = (long *)(ulong)*(uint *)(
                                        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                        + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x180) = plVar14;
      *plVar14 = unaff_x22;
      plVar14[1] = (long)FUN_102193748;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
      )();
      return;
    }
    pcVar15 = FUN_102193c9c;
    func_0x000107c615b4(FUN_102193c9c,unaff_x22 + 0xd0);
    *(code **)(unaff_x22 + 0x188) = pcVar15;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1021937a4;
    lVar11 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar11,1);
    puVar2 = &UNK_1104d7e08;
    func_0x000107c613fc(&UNK_1104d7e08,0x20,7);
    puVar17 = (undefined8 *)(unaff_x22 + 0x98);
    *puVar17 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined **)(puVar2 + 0x10) = puVar8;
    *(long *)(puVar2 + 0x18) = lVar11;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0x102193ca4;
    *(undefined **)(unaff_x22 + 0xc0) = puVar2;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0xb0) = &UNK_1104d7e20;
    func_0x000107c60bc4(puVar17);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61174(puVar8);
    func_0x000107c61574(uVar19);
    func_0x000107c5bba8(puVar8);
    func_0x000107c60bd0(puVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x000102193bc8();
  func_0x000107c613f8(&UNK_1104d7f18,puVar13,0,0);
  *puVar13 = 1;
  func_0x000107c61654();
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar19);
                    /* WARNING: Could not recover jumptable at 0x000102193624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102193714; end: 102193747;  */

void FUN_102193714(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x000102193744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102193748; end: 1021937a3;  */

void FUN_102193748(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x180));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102193888;
  }
  else {
    *(long *)(lVar2 + 0x198) = unaff_x20;
    pcVar1 = FUN_102193908;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1021937a4; end: 102193807;  */

void FUN_1021937a4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 400) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_102193808;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x102193844;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102193808; end: 102193887;  */

void FUN_102193808(void)

{
  long unaff_x22;
  
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102193888,0,0);
  return;
}



/* Entry: 102193888; end: 102193907;  */

void FUN_102193888(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102193904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102193908; end: 102193987;  */

void FUN_102193908(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102193984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102193988; end: 10219399f;  */

void FUN_102193988(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021939a0,0,0);
  return;
}



/* Entry: 1021939a0; end: 102193a7f;  */

void FUN_1021939a0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102193a80;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  puVar2 = &UNK_1104d7e58;
  func_0x000107c613fc(&UNK_1104d7e58,0x20,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(long *)(puVar2 + 0x18) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x102193f84;
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104d7e70;
  func_0x000107c60bc4(puVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61174(uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c5bba8(uVar3);
  func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102193a80; end: 102193acb;  */

void FUN_102193a80(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
  }
                    /* WARNING: Could not recover jumptable at 0x000102193ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102193acc; end: 102193b83;  */

void FUN_102193acc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  plVar1 = param_1;
  func_0x000107c5bd00();
  if (plVar1 == (long *)0x4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_2);
    return;
  }
  func_0x000107c42a28();
  func_0x000107c61180();
  plVar1 = param_1;
  func_0x000102193bc8();
  puVar2 = &UNK_1104d7f18;
  func_0x000107c613f8(&UNK_1104d7f18,plVar1,0,0);
  *plVar1 = (long)param_1;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar4 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,uVar3);
  return;
}



/* Entry: 102193b84; end: 102193c07;  */

void FUN_102193b84(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102193c08; end: 102193c5f;  */

void FUN_102193c08(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102193c60;
  plVar1[0x10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021939a0,0,0);
  return;
}



/* Entry: 102193c60; end: 102193c9b;  */

void FUN_102193c60(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102193c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102193c9c; end: 102193cef;  */

void FUN_102193c9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf2efb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_cancelRunning_1125a9590);
  return;
}



/* Entry: 102193cf0; end: 102193e63;  */

void FUN_102193cf0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (uVar2 == 0 || ((int)uVar1 == -1 || (int)uVar1 == 0)) {
    func_0x000107c614b0(uVar2);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102193e64; end: 102193f8f;  */

int FUN_102193e64(ulong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar4 = *param_1;
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  iVar3 = (int)uVar4;
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar3 + -1;
  }
  iVar2 = 0;
  if (1 < iVar3 + 1U) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Entry: 102193f90; end: 1021940a3;  */

/* WARNING: Possible PIC construction at 0x000102194048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010219404c) */
/* WARNING: Removing unreachable block (ram,0x00010219408c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102193f90(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  plVar2 = plVar1;
  func_0x000107c5ed90(_DAT_113804688);
  plVar3 = plVar1;
  func_0x000107c4ff50();
  func_0x000107c61170(plVar1);
  plVar1 = plVar2;
  func_0x000107c61170();
  plVar9 = (long *)0x0;
  if (((int)plVar3 != 0) && (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8)) {
    func_0x000107c60e78();
    lStack_f0 = *plVar2;
    lVar8 = 0;
    plStack_d8 = plVar1;
    uStack_d0 = param_2;
    plStack_c8 = plVar3;
    func_0x000107c5eec8();
    lStack_e8 = *(long *)(lVar8 + -8);
    lStack_e0 = lVar8;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
    lVar12 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar4 = 0;
    func_0x000107c5ede0();
    lVar13 = *(long *)(lVar4 + -8);
    lVar8 = lVar4;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
    lVar11 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar15 = lVar11 - extraout_x12;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar14 = lVar15 - extraout_x12_00;
    func_0x000107c60b1c();
    func_0x000107c61180();
    lVar5 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
    uVar7 = param_2;
    func_0x000107c5ed80(lVar11,lVar5,param_2);
    func_0x000107c6142c(param_2);
    uStack_c0 = 0;
    uStack_b8 = 0xe000000000000000;
    func_0x000107c602fc(0x12);
    uVar6 = uStack_b8;
    func_0x000107c6142c(uStack_b8);
    uStack_c0 = 0xd000000000000010;
    uStack_b8 = 0x800000010f0686a0;
    func_0x000107c5eec4(lVar12);
    func_0x000107c5eeac();
    plVar1 = plStack_d8;
    (**(code **)(lStack_e8 + 8))(lVar12,lStack_e0);
    func_0x000107c5fb78(uVar6,uVar7);
    func_0x000107c6142c(uVar7);
    uVar6 = uStack_b8;
    func_0x000107c5ed9c(lVar15,uStack_c0,uStack_b8);
    func_0x000107c6142c(uVar6);
    uVar6 = uStack_d0;
    pcVar10 = *(code **)(lVar13 + 8);
    (*pcVar10)(lVar11,lVar4);
    func_0x000107c5eda0(lVar14,0x33706d,0xe300000000000000);
    (*pcVar10)(lVar15,lVar4);
    plVar3 = plStack_c8;
    func_0x000107c5ee40(lVar14,1,plVar1,uVar6);
    if (plVar3 == (long *)0x0) {
      func_0x00010006c090(plVar1,uVar6);
      (**(code **)(lVar13 + 0x20))((undefined *)((long)plVar2 + _DAT_113804688),lVar14,lVar4);
    }
    else {
      (*pcVar10)(lVar14,lVar4);
      func_0x00010006c090(plVar1,uVar6);
      func_0x000107c61464(plVar2,lStack_f0,*(undefined4 *)(*plVar2 + 0x30),
                          *(undefined2 *)(*plVar2 + 0x34));
    }
    return plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(0);
  return plVar9;
}



/* Entry: 1021940a4; end: 102194337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1021940a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lStack_a0 = *unaff_x20;
  lVar2 = 0;
  uStack_88 = param_1;
  uStack_80 = param_2;
  func_0x000107c5eec8();
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar9 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  lVar2 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12_00;
  func_0x000107c60b1c();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  uVar6 = param_2;
  func_0x000107c5ed80(lVar8,lVar4,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c602fc(0x12);
  uVar5 = 0xe000000000000000;
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5eec4(lVar9);
  func_0x000107c5eeac();
  uVar1 = uStack_88;
  (**(code **)(lStack_98 + 8))(lVar9,lStack_90);
  func_0x000107c5fb78(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5ed9c(lVar12,0xd000000000000010,0x800000010f0686a0);
  func_0x000107c6142c(0x800000010f0686a0);
  uVar6 = uStack_80;
  pcVar7 = *(code **)(lVar10 + 8);
  (*pcVar7)(lVar8,lVar3);
  func_0x000107c5eda0(lVar11,0x33706d,0xe300000000000000);
  (*pcVar7)(lVar12,lVar3);
  func_0x000107c5ee40(lVar11,1,uVar1,uVar6);
  if (unaff_x21 == 0) {
    func_0x00010006c090(uVar1,uVar6);
    (**(code **)(lVar10 + 0x20))((long)unaff_x20 + _DAT_113804688,lVar11,lVar3);
  }
  else {
    (*pcVar7)(lVar11,lVar3);
    func_0x00010006c090(uVar1,uVar6);
    func_0x000107c61464(unaff_x20,lStack_a0,*(undefined4 *)(*unaff_x20 + 0x30),
                        *(undefined2 *)(*unaff_x20 + 0x34));
  }
  return unaff_x20;
}



/* Entry: 102194338; end: 102194387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102194338(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  FUN_102193f90();
  lVar1 = _DAT_113804688;
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102194388; end: 10219438f;  */

void FUN_102194388(void)

{
  if (lRam0000000112e5e918 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6b4478);
  return;
}



/* Entry: 102194390; end: 1021943c7;  */

void FUN_102194390(undefined8 param_1)

{
  if (lRam0000000112e5e918 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6b4478);
  return;
}



/* Entry: 1021943c8; end: 102194433;  */

void FUN_1021943c8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 102194434; end: 102194c23;  */

undefined1  [16] FUN_102194434(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe1;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f068720);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0686e0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102194500);
  (*pcVar1)();
}



/* Entry: 102194c24; end: 102194c6f;  */

void FUN_102194c24(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102194c70,param_1);
  return;
}



/* Entry: 102194c70; end: 102194d7b;  */

void FUN_102194c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  func_0x0001000a0a8c(0);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_102195014;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_1104d8090;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e7ab78;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e7ab78);
  puVar3 = puVar1;
  func_0x000100a0dc54(puVar1,ppuVar2,param_3);
  func_0x000107c6142c(param_3);
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102194d7c; end: 102194dfb;  */

void FUN_102194d7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d7fe8;
  func_0x000107c613fc(&UNK_1104d7fe8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102194dfc,puVar1);
  return;
}



/* Entry: 102194dfc; end: 102194f2f;  */

void FUN_102194dfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000a0a8c(0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_1104d8050;
  uVar6 = 0x20;
  func_0x000107c613fc(&UNK_1104d8050,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  pcStack_60 = FUN_102194f7c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_1104d8068;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e7ab98;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e7ab98);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,ppuVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 102194f30; end: 102194f4f;  */

undefined1  [16] FUN_102194f30(void)

{
  return ZEXT816(0x1104d8010);
}



/* Entry: 102194f50; end: 102194f7b;  */

void FUN_102194f50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102194f7c; end: 102194ff7;  */

undefined * FUN_102194f7c(void)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  puVar1 = PTR_PTR_1126aa018;
  func_0x000107c610f8(PTR_PTR_1126aa018);
  func_0x000107c47f8c();
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(uStack_38);
  return puVar1;
}



/* Entry: 102194ff8; end: 102195013;  */

void FUN_102194ff8(long param_1,long param_2)

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



/* Entry: 102195014; end: 102195063;  */

undefined * FUN_102195014(void)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  puVar1 = PTR_PTR_1126aa020;
  func_0x000107c610f8(PTR_PTR_1126aa020);
  func_0x000107c4778c();
  func_0x000107c61170(uStack_28);
  return puVar1;
}



/* Entry: 102195064; end: 1021950b7;  */

void FUN_102195064(long param_1,long param_2)

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



/* Entry: 1021950b8; end: 10219513f;  */

void FUN_1021950b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_4,param_3);
  return;
}



/* Entry: 102195140; end: 10219519b;  */

void FUN_102195140(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar4 = &UNK_1104d8270;
  ppuVar5 = &puStack_90;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000a0a8c(0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar6 = 0x20;
  func_0x000107c613fc(&UNK_1104d8270,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  pcStack_70 = FUN_1021953b0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104d8288;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e7b0b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e7b0b8);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,ppuVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 10219519c; end: 1021952cb;  */

void FUN_10219519c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar4 = &puStack_90;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000a0a8c(0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uVar7 = 0x20;
  func_0x000107c613fc(param_2,0x20,7);
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  uStack_78 = param_4;
  uStack_70 = param_3;
  lStack_68 = param_2;
  func_0x000107c60bc4(&puStack_90);
  lVar2 = lStack_68;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(lVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = *param_5;
  func_0x000107c5faec(uVar5);
  puVar6 = puVar3;
  func_0x000100a0dc54(puVar3,uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c61170(puVar3);
  *param_1 = puVar6;
  return;
}



/* Entry: 1021952cc; end: 1021952fb;  */

undefined1  [16] FUN_1021952cc(void)

{
  return ZEXT816(0x1104d81c0);
}



/* Entry: 1021952fc; end: 102195393;  */

undefined * FUN_1021952fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c5c360(uStack_40);
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  puVar2 = PTR_PTR_1126aa028;
  func_0x000107c610f8(PTR_PTR_1126aa028);
  func_0x000107c4631c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_38);
  return puVar2;
}



/* Entry: 102195394; end: 1021953af;  */

void FUN_102195394(long param_1,long param_2)

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



/* Entry: 1021953b0; end: 102195447;  */

undefined * FUN_1021953b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5d6f8(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000100083b20(&uStack_40);
  puVar2 = PTR_PTR_1126aa030;
  func_0x000107c610f8(PTR_PTR_1126aa030);
  func_0x000107c456fc();
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 102195448; end: 102195473;  */

void FUN_102195448(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102195474; end: 10219552f;  */

undefined * FUN_102195474(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_40);
    uVar3 = uStack_40;
    func_0x000107c5c360(uStack_40);
    func_0x000107c61180();
    func_0x000107c61170(uStack_40);
    puVar4 = PTR_PTR_1126aa038;
    func_0x000107c610f8(PTR_PTR_1126aa038);
    func_0x000107c46888();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102195530);
  (*pcVar1)();
}



/* Entry: 102195530; end: 10219553f;  */

void FUN_102195530(long param_1,long param_2)

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



/* Entry: 102195540; end: 10219558b;  */

void FUN_102195540(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10219558c,param_1);
  return;
}



/* Entry: 10219558c; end: 102195697;  */

void FUN_10219558c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  func_0x0001000a0a8c(0);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_1021956a8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_1104d83a0;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e7c938;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e7c938);
  puVar3 = puVar1;
  func_0x000100a0dc54(puVar1,ppuVar2,param_3);
  func_0x000107c6142c(param_3);
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102195698; end: 1021956a7;  */

undefined1  [16] FUN_102195698(void)

{
  return ZEXT816(0x1104d8390);
}



/* Entry: 1021956a8; end: 10219573f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021956a8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = *(long *)(lStack_28 + _DAT_113042550);
  func_0x000107c61174();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126aa040;
    func_0x000107c610f8(PTR_PTR_1126aa040);
    func_0x000107c48a28();
    func_0x000107c615e8(lVar2);
  }
  return puVar3;
}



/* Entry: 102195740; end: 10219575b;  */

void FUN_102195740(long param_1,long param_2)

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



/* Entry: 10219575c; end: 1021957a7;  */

void FUN_10219575c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021957a8,param_1);
  return;
}



/* Entry: 1021957a8; end: 1021958af;  */

void FUN_1021957a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_1021958c0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_1104d8490;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000a0a8c(0);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea0c98;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110ea0c98);
  puVar3 = puVar1;
  func_0x000100a0dc54(puVar1,ppuVar2,param_3);
  func_0x000107c61170(puVar1);
  func_0x000107c6142c(param_3);
  *param_1 = puVar3;
  return;
}



/* Entry: 1021958b0; end: 1021958bf;  */

undefined1  [16] FUN_1021958b0(void)

{
  return ZEXT816(0x1104d8480);
}



/* Entry: 1021958c0; end: 10219592b;  */

undefined * FUN_1021958c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c40790(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  puVar2 = PTR_PTR_1126aa048;
  func_0x000107c610f8(PTR_PTR_1126aa048);
  func_0x000107c45c48();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 10219592c; end: 102195947;  */

void FUN_10219592c(long param_1,long param_2)

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



/* Entry: 102195948; end: 102195a03;  */

void FUN_102195948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d8548;
  func_0x000107c613fc(&UNK_1104d8548,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_102195b60,puVar1);
  return;
}



/* Entry: 102195a04; end: 102195b5f;  */

void FUN_102195a04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104d85b0;
  func_0x000107c613fc(&UNK_1104d85b0,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  pcStack_70 = FUN_10219609c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104d85c8;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd00000000000001b,0x800000010f068850);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 102195b60; end: 102195b6f;  */

void FUN_102195b60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar7 = &puStack_90;
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1104d85b0;
  func_0x000107c613fc(&UNK_1104d85b0,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar8;
  pcStack_70 = FUN_10219609c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104d85c8;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x0001000a0a8c(0);
  puVar6 = puVar5;
  func_0x000100a0dc54(puVar5,0xd00000000000001b,0x800000010f068850);
  func_0x000107c61170(puVar5);
  *param_1 = puVar6;
  return;
}



/* Entry: 102195b70; end: 102195f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102195b70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5ffd8();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ffc4();
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lStack_b0 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&uStack_68);
  uVar9 = uStack_68;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  lVar4 = lStack_70;
  func_0x000107c410f8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102195f0c);
    (*pcVar2)();
  }
  lStack_d0 = lVar13;
  lStack_c8 = lVar12;
  lStack_c0 = lVar11;
  lStack_b8 = lVar3;
  func_0x000100083b20(&lStack_78);
  lVar3 = lStack_78;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_78);
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_80);
    uVar5 = uStack_80;
    func_0x000107c3fe8c();
    func_0x000107c61180();
    func_0x000107c61170(uStack_80);
    func_0x000100083b20(&uStack_88);
    uVar6 = uStack_88;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uStack_88);
    uVar7 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    lVar8 = 0;
    func_0x000102198178();
    lVar13 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar13 + _DAT_112e5e9b0) = uVar9;
    *(long *)(lVar13 + _DAT_112e5e9b8) = lVar4;
    *(long *)(lVar13 + _DAT_112e5e9c0) = lVar3;
    *(undefined8 *)(lVar13 + _DAT_112e5e9c8) = uVar5;
    puVar1 = (undefined8 *)(lVar13 + _DAT_112e5e9d0);
    *puVar1 = uVar7;
    puVar1[1] = param_2;
    func_0x0001000295c4(0);
    func_0x000107c61174();
    uStack_d8 = uVar9;
    func_0x000107c61174();
    lStack_e0 = lVar4;
    func_0x000107c615f0(lVar3);
    func_0x000107c61174(uVar5);
    lVar12 = lStack_b0;
    func_0x000107c5f81c(lStack_b0);
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar9 = 0x112d4ac68;
    FUN_1021960c8(0x112d4ac68,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
    uVar6 = 0x112d4ac70;
    func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
    uVar7 = uVar6;
    func_0x00010002964c();
    lVar4 = lStack_d0;
    func_0x000107c60264(lStack_d0,&puStack_90,uVar6,uVar7,lStack_a8,uVar9);
    lVar11 = lStack_c0;
    (**(code **)(lStack_c8 + 0x68))
              (lStack_c0,
               *(undefined4 *)
                PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
               ,lStack_b8);
    uVar9 = 0xd000000000000024;
    func_0x000107c5ffec(0xd000000000000024,0x800000010f068870,lVar12,lVar4,lVar11,0);
    *(undefined8 *)(lVar13 + _DAT_112e5e9d8) = uVar9;
    plVar10 = &lStack_a0;
    lStack_a0 = lVar13;
    lStack_98 = lVar8;
    func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
    func_0x000107c61170(uStack_d8);
    func_0x000107c61170(lStack_e0);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar5);
    return plVar10;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102195f10);
  (*pcVar2)();
}



/* Entry: 102195f10; end: 102195f1f;  */

undefined1  [16] FUN_102195f10(void)

{
  return ZEXT816(0x1104d8570);
}


