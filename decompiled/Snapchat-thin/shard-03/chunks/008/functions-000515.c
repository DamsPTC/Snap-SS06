/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cac59c; end: 102cac5bb;  */

void FUN_102cac59c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102cac5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102cac5bc; end: 102cac5ff;  */

long FUN_102cac5bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102cac600; end: 102cac6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102cac600(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_102cac5bc(param_1,unaff_x20 + _DAT_112f0a0e8);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 102cac6e0; end: 102cac73f; -[OperaPageViewServices init] */

void FUN_102cac6e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaPageViewServices.OperaPageViewServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cac70c);
  (*pcVar1)();
}



/* Entry: 102cac740; end: 102cac74f; -[OperaPageViewServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cac740(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112f0a0e8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0a0e8));
  return;
}



/* Entry: 102cac750; end: 102cac76f;  */

void FUN_102cac750(void)

{
  func_0x000107c61168(&PTR_PTR_11289cdd0);
  return;
}



/* Entry: 102cac770; end: 102cac7f7;  */

void FUN_102cac770(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = 0xff;
  func_0x000107c5fc80(0xff);
  func_0x00010006c1b8(0,uVar1);
  uStack_28 = param_1;
  func_0x0001000bf530(&uStack_28);
  return;
}



/* Entry: 102cac7f8; end: 102cac8d3;  */

long * FUN_102cac7f8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *unaff_x20;
  
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x000107c5fc6c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  FUN_102cac770();
  unaff_x20[2] = lVar1;
  unaff_x20[3] = param_1;
  unaff_x20[4] = param_2;
  unaff_x20[5] = param_3;
  unaff_x20[6] = param_4;
  return unaff_x20;
}



/* Entry: 102cac8d4; end: 102cac953;  */

void FUN_102cac8d4(ulong param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  
  if ((*(code **)(unaff_x20 + 0x18) == (code *)0x0) ||
     ((**(code **)(unaff_x20 + 0x18))(), (param_1 & 1) != 0)) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c6157c(uVar1);
    func_0x000100075034(FUN_102cacb94,auStack_50,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 102cac954; end: 102caca73;  */

void FUN_102cac954(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(*param_2 + 0x50);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar4 = param_2[5];
  if (lVar4 == 0) {
    (**(code **)(extraout_x12 + 0x10))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3,lVar5);
    uVar1 = 0;
    func_0x000107c5fc80(0,lVar5);
    func_0x000107c5fc78(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar1)
    ;
  }
  else {
    lVar6 = param_2[6];
    uVar1 = 0;
    func_0x000107c5fc80(0,lVar5);
    func_0x000107c6157c(lVar6);
    puVar2 = PTR___sSayxGSksMc_11034dd18;
    func_0x000107c61520(PTR___sSayxGSksMc_11034dd18,uVar1);
    puVar3 = PTR___sSayxGSmsMc_11034dd28;
    func_0x000107c61520(PTR___sSayxGSmsMc_11034dd28,uVar1);
    func_0x0001048da970(param_3,lVar4,lVar6,uVar1,puVar2,puVar3);
    func_0x000100d23204(lVar4,lVar6);
  }
  return;
}



/* Entry: 102caca74; end: 102cacadb;  */

void FUN_102caca74(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = unaff_x20[2];
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  uStack_38 = param_1;
  uStack_30 = param_2;
  func_0x000107c6157c(lVar1);
  func_0x000100075034(FUN_102cacbac,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 102cacadc; end: 102cacb27;  */

void FUN_102cacadc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100d23204(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100d23204(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 102cacb28; end: 102cacb2b;  */

void FUN_102cacb28(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 8),param_1,&UNK_10e7f9964,&UNK_10e7f996c);
  func_0x00010430d88c(0,uVar1);
  lStack_40 = param_1;
  lStack_38 = param_2;
  func_0x0001000c5db4(auStack_58);
  (**(code **)(*(long *)(param_1 + -8) + 0x10))();
  func_0x00010430d600(auStack_58);
  return;
}



/* Entry: 102cacb2c; end: 102cacb4b;  */

void FUN_102cacb2c(void)

{
  FUN_102cac8d4();
  return;
}



/* Entry: 102cacb4c; end: 102cacb6b;  */

void FUN_102cacb4c(void)

{
  FUN_102caca74();
  return;
}



/* Entry: 102cacb6c; end: 102cacb6f;  */

void FUN_102cacb6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_10e7f992c,&UNK_10e7f9934);
  (*(code *)&UNK_10430d834)(0,uVar1);
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0001000c5db4(auStack_68);
  (**(code **)(*(long *)(param_1 + -8) + 0x10))();
  (*(code *)&UNK_10430d8b8)(auStack_68);
  return;
}



/* Entry: 102cacb70; end: 102cacb8f;  */

void FUN_102cacb70(void)

{
  func_0x000102cac7b8();
  return;
}



/* Entry: 102cacb90; end: 102cacb93;  */

void FUN_102cacb90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_10e7f9964,&UNK_10e7f996c);
  (*(code *)&UNK_10430d840)(0,uVar1);
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0001000c5db4(auStack_68);
  (**(code **)(*(long *)(param_1 + -8) + 0x10))();
  (*(code *)&UNK_10430d8bc)(auStack_68);
  return;
}



/* Entry: 102cacb94; end: 102cacbab;  */

void FUN_102cacb94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102cac954(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102cacbac; end: 102cacc33;  */

void FUN_102cacbac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0;
  func_0x000107c5fc80(0,*(undefined8 *)(unaff_x20 + 0x10));
  puVar3 = PTR___sSayxGSMsMc_11034dcf8;
  func_0x000107c61520(PTR___sSayxGSMsMc_11034dcf8,uVar2);
  puVar4 = PTR___sSayxGSmsMc_11034dd28;
  func_0x000107c61520(PTR___sSayxGSmsMc_11034dd28,uVar2);
  func_0x000107c5ff0c(uVar1,uVar5,uVar2,puVar3,puVar4);
  return;
}



/* Entry: 102cacc34; end: 102cacc77;  */

void FUN_102cacc34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10db3cf38;
  func_0x000107c61520();
  *(undefined **)(param_1 + 8) = puVar1;
  puVar1 = &DAT_10db3cf1c;
  func_0x000107c61520(&DAT_10db3cf1c,param_2);
  *(undefined **)(param_1 + 0x10) = puVar1;
  return;
}



/* Entry: 102cacc78; end: 102cacc7b;  */

void FUN_102cacc78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 102cacc7c; end: 102cacccb;  */

void FUN_102cacc7c(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBoWV_11034d678 + 0x40;
  puStack_20 = &UNK_10db3cfa8;
  puStack_18 = &UNK_10db3cfa8;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x58);
  return;
}



/* Entry: 102cacccc; end: 102caccd7;  */

void FUN_102cacccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e726efc);
  return;
}



/* Entry: 102caccd8; end: 102cacd1f;  */

void FUN_102caccd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_102cacd20(param_1,param_2,param_3);
  return;
}



/* Entry: 102cacd20; end: 102cacfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102cacd20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined *puVar9;
  
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar8 = _DAT_112f0a160;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a160) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a168) = 0;
  lVar7 = _DAT_112f0a170;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a170) = 0;
  lVar1 = _DAT_112f0a178;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a178) = 0;
  *(long *)(unaff_x20 + lVar8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a180) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a188) = param_3;
  *(undefined8 *)(unaff_x20 + lVar7) = 0;
  if (param_1 == 0) {
    func_0x000107c61174(param_2);
    func_0x000107c615f0(param_3);
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126ae780;
    func_0x000107c610f8();
    lVar8 = param_1;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(param_3);
    func_0x000107c453e4();
    puVar3 = PTR_PTR_1126c99b8;
    func_0x000107c610f8(PTR_PTR_1126c99b8);
    func_0x000107c453e4();
    if (*(long *)(lVar8 + _DAT_113078d88) < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cacfb8);
      (*pcVar2)();
    }
    if (0x7fffffff < *(long *)(lVar8 + _DAT_113078d88)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cacfbc);
      (*pcVar2)();
    }
    func_0x000107c538b0();
    func_0x000107c5a2d0(puVar3);
    func_0x000107c5702c(puVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar9;
  func_0x000107c61170(uVar4);
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  lVar8 = *(long *)(puVar5 + _DAT_112f0a170);
  if (lVar8 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c615e8(param_3);
  }
  else {
    puVar6 = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      lVar7 = lVar8;
      func_0x000107c4f7fc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      puVar9 = &UNK_1105bd600;
      func_0x000107c613fc(&UNK_1105bd600,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,puVar6);
      uVar4 = 0;
      func_0x000100964acc(0);
      func_0x000107c6157c(puVar9);
      func_0x00010090569c(FUN_102cb6974,puVar9,uVar4);
      func_0x000107c61170(lVar7);
      func_0x000107c61578(puVar9,2);
    }
    func_0x000107c61170(param_2);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(param_1);
  return puVar5;
}



/* Entry: 102cacfbc; end: 102cad01b; -[SCOperaConfigProvider initWithSessionContext:presentingConfig:circumstanceEngine:] */

void FUN_102cacfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  FUN_102cacd20(param_3,param_4,param_5);
  return;
}



/* Entry: 102cad01c; end: 102cad073;  */

void FUN_102cad01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  FUN_102cad074(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 102cad074; end: 102cad34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102cad074(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined *puVar9;
  
  func_0x000107c614f0();
  lVar8 = _DAT_112f0a160;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a160) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a168) = 0;
  lVar7 = _DAT_112f0a170;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a170) = 0;
  lVar1 = _DAT_112f0a178;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a178) = 0;
  *(long *)(unaff_x20 + lVar8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a180) = param_2;
  *(undefined8 *)(unaff_x20 + lVar7) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0a188) = param_4;
  if (param_1 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c615f0(param_4);
    func_0x000107c61174(param_2);
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126ae780;
    func_0x000107c610f8();
    func_0x000107c61174(param_3);
    func_0x000107c615f0(param_4);
    lVar8 = param_1;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c453e4();
    puVar3 = PTR_PTR_1126c99b8;
    func_0x000107c610f8(PTR_PTR_1126c99b8);
    func_0x000107c453e4();
    if (*(long *)(lVar8 + _DAT_113078d88) < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cad348);
      (*pcVar2)();
    }
    if (0x7fffffff < *(long *)(lVar8 + _DAT_113078d88)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cad34c);
      (*pcVar2)();
    }
    func_0x000107c538b0();
    func_0x000107c5a2d0(puVar3);
    func_0x000107c5702c(puVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar9;
  func_0x000107c61170(uVar4);
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  lVar8 = *(long *)(puVar5 + _DAT_112f0a170);
  if (lVar8 == 0) {
    func_0x000107c61170(param_2);
    func_0x000107c615e8(param_4);
  }
  else {
    puVar6 = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      lVar7 = lVar8;
      func_0x000107c4f7fc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      puVar9 = &UNK_1105bd600;
      func_0x000107c613fc(&UNK_1105bd600,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,puVar6);
      uVar4 = 0;
      func_0x000100964acc(0);
      func_0x000107c6157c(puVar9);
      func_0x00010090569c(FUN_102cb6b34,puVar9,uVar4);
      func_0x000107c61170(lVar7);
      func_0x000107c61578(puVar9,2);
    }
    func_0x000107c61170(param_2);
    func_0x000107c615e8(param_4);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return puVar5;
}



/* Entry: 102cad34c; end: 102cad3c3; -[SCOperaConfigProvider initWithSessionContext:presentingConfig:asyncQueueProvider:circumstanceEngine:] */

void FUN_102cad34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  FUN_102cad074(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 102cad3c4; end: 102cad3f7; -[SCOperaConfigProvider enableMediaDurationLoadInMediaResolver] */

uint FUN_102cad3c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cad3f8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cad3f8; end: 102cad567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cad3f8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f1064f0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cad568; end: 102cad59b; -[SCOperaConfigProvider normalizeMediaSizeInMediaResolver] */

uint FUN_102cad568(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cad59c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cad59c; end: 102cad663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cad59c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f106530);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cad664; end: 102cad697; -[SCOperaConfigProvider enablePagePropertiesCleanupOnSSPTeardown] */

uint FUN_102cad664(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cad698();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cad698; end: 102cad75f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cad698(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000003c;
  func_0x000107c5fadc(0xd00000000000003c,0x800000010f106570);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cad760; end: 102cad793; -[SCOperaConfigProvider playbackOnBeginTransitionEnabled] */

uint FUN_102cad760(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cad794();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cad794; end: 102cad85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cad794(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010f1065b0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cad85c; end: 102cad88f; -[SCOperaConfigProvider enableEarlyPlaybackInSSP] */

uint FUN_102cad85c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cad890();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cad890; end: 102cad957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cad890(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f1065f0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cad958; end: 102cad98b; -[SCOperaConfigProvider attributeLoopStallsEnabled] */

uint FUN_102cad958(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cad98c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cad98c; end: 102cada53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cad98c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f106620);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cada54; end: 102cada87; -[SCOperaConfigProvider sspAutoLoopDelayEnabled] */

uint FUN_102cada54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cada88();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cada88; end: 102cadb4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cada88(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f106650);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cadb50; end: 102cadb83; -[SCOperaConfigProvider enableMediaPositionFix] */

uint FUN_102cadb50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cadb84();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cadb84; end: 102cadc4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cadb84(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f015db0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cadc4c; end: 102cadc7f; -[SCOperaConfigProvider operaViewLongPressGestureEnabled] */

uint FUN_102cadc4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cadc80();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cadc80; end: 102cadd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cadc80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000109128f3c();
  if ((param_1 != 1) && (param_1 == 0)) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
    lVar4 = *(long *)(unaff_x20 + _DAT_112f0a168);
    lVar2 = lVar4;
    if (lVar4 == 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
      func_0x000107c615f0(lVar2);
    }
    func_0x000107c61174(uVar3);
    func_0x000107c615f0(lVar4);
    uVar1 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010f106680);
    func_0x000107c3ebd4(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102cadd60; end: 102cadd93; -[SCOperaConfigProvider dismissGestureConfig] */

void FUN_102cadd60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cadd94();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cadd94; end: 102cadfff;  */

/* WARNING: Removing unreachable block (ram,0x000102cadec8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102cadd94(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112f0a168);
  puVar5 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar5 = *(undefined **)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(puVar5);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(puVar6);
  uVar3 = 0x800000010f1066b0;
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1066b0);
  puVar6 = puVar5;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c615e8(puVar5);
  func_0x000107c61170(uVar1);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126af7d0;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c61170(uVar4);
  puVar5 = puVar6;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    puVar2 = puVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
    func_0x000107c610f8(PTR_PTR_1126ac1d8);
    puVar5 = puVar2;
    FUN_102cb6a54(puVar2,uVar3);
    func_0x00010006c090(puVar2,uVar3);
    if (puVar5 != (undefined *)0x0) goto LAB_102cadf00;
  }
  puVar5 = PTR_PTR_1126ac1d8;
  func_0x000107c610f8(PTR_PTR_1126ac1d8);
  func_0x000107c453e4();
  func_0x000107c5a2a4();
  func_0x000107c566d0(0,puVar5);
  func_0x000107c566c8(0x41700000,puVar5);
LAB_102cadf00:
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 102cae000; end: 102cae033; -[SCOperaConfigProvider enablePageLoadingStateFix] */

uint FUN_102cae000(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cae034();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cae034; end: 102cae0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cae034(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1066e0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cae0fc; end: 102cae12f; -[SCOperaConfigProvider mediaResolverAdsFetchOption] */

undefined8 FUN_102cae0fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cae130();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102cae130; end: 102cae2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102cae130(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112f0a168);
  uVar3 = uVar4;
  if (uVar4 == 0) {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(uVar3);
  }
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar4);
  uVar2 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f106700);
  uVar4 = uVar3;
  func_0x000107c4980c();
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar2);
  if ((int)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cae200);
    (*pcVar1)();
  }
  return uVar4 & 0xffffffff;
}



/* Entry: 102cae2a8; end: 102cae2db; -[SCOperaConfigProvider enablesInnerScrollSupportForNewScrollView] */

uint FUN_102cae2a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cae2dc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cae2dc; end: 102cae3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cae2dc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f106730);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cae3a4; end: 102cae3d7; -[SCOperaConfigProvider disableTapsWhilePanningInOperaScrollView] */

uint FUN_102cae3a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cae3d8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cae3d8; end: 102cae49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cae3d8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f106770);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cae4a0; end: 102cae4db; -[SCOperaConfigProvider pageabilityOverwriteOnLoadingPage] */

void FUN_102cae4a0(void)

{
  func_0x000104451714(0);
  func_0x000107c610f8();
  func_0x0001044516b4(0,1,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cae4dc; end: 102cae533; -[SCOperaConfigProvider adVariantsAllowlist] */

void FUN_102cae4dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cae534();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5fe08(uVar1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102cae534; end: 102cae78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102cae534(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_60;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar7 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar6 = lVar7;
  if (lVar7 == 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar6);
  }
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(lVar7);
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f1067e0);
  uVar2 = 0xd000000000000026;
  uVar5 = 0x800000010f1067b0;
  func_0x000107c5fadc(0xd000000000000026);
  lVar7 = lVar6;
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  lVar6 = lVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar7);
  uStack_60 = 0x2c;
  uStack_58 = 0xe100000000000000;
  lStack_50 = lVar6;
  uStack_48 = uVar5;
  func_0x000100e8b654();
  func_0x000107c601dc(&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar7,lVar7);
  func_0x000107c6142c(uVar5);
  puVar4 = (undefined1 *)puVar3;
  func_0x000100403a6c(puVar3);
  func_0x000107c6142c(puVar3);
  return puVar4;
}



/* Entry: 102cae78c; end: 102cae7bf; -[SCOperaConfigProvider enableCustomizableSwipeDirectionResolution] */

uint FUN_102cae78c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cae7c0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cae7c0; end: 102cae887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cae7c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f106810);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cae888; end: 102cae8bb; -[SCOperaConfigProvider extraAngleToDetectSwipeToAttachmentOnAds] */

undefined8 FUN_102cae888(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cae8bc();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102cae8bc; end: 102cae983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cae8bc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f106840);
  lVar3 = lVar2;
  func_0x000107c4980c(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return (long)(int)lVar3;
}



/* Entry: 102cae984; end: 102cae9b7; -[SCOperaConfigProvider enableRetryOnMediaErrorsInSSP] */

uint FUN_102cae984(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cae9b8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cae9b8; end: 102caeb8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cae9b8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f106880);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102caeb90; end: 102caec2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102caeb90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
    lVar1 = 0;
  }
  func_0x000107c615f0(lVar1);
  func_0x000107c5fadc(param_1,param_2);
  lVar1 = lVar2;
  func_0x000107c4c270(lVar2);
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 102caec30; end: 102caec63; -[SCOperaConfigProvider videoPlayerPreloadStrategy] */

void FUN_102caec30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caec64();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102caec64; end: 102caef67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102caec64(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  func_0x000102caea80();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0001044517fc();
    lVar10 = _DAT_112f0a178;
    lVar3 = _DAT_112f0a168;
    puVar6 = (undefined8 *)*param_1;
    uVar1 = param_1[1];
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
    puVar8 = *(undefined8 **)(unaff_x20 + _DAT_112f0a168);
    puVar4 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(unaff_x20 + _DAT_112f0a188);
      func_0x000107c615f0(puVar4);
    }
    func_0x000107c61174(uVar7);
    func_0x000107c615f0(puVar8);
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(puVar6,uVar1);
    puVar8 = puVar4;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(puVar4);
    func_0x000107c61170();
    if (puVar8 == (undefined8 *)0x0) {
      lVar2 = 3;
    }
    else {
      puVar6 = puVar8;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      func_0x000107c615e8(puVar8);
      puVar4 = puVar6;
      func_0x000107c49804(puVar6);
      func_0x000107c61170();
      lVar2 = (long)(int)puVar4;
    }
    func_0x000104451808();
    puVar4 = (undefined8 *)*puVar6;
    uVar1 = puVar6[1];
    uVar7 = *(undefined8 *)(unaff_x20 + lVar10);
    puVar8 = *(undefined8 **)(unaff_x20 + lVar3);
    puVar6 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(unaff_x20 + _DAT_112f0a188);
      func_0x000107c615f0(puVar6);
    }
    func_0x000107c61174(uVar7);
    func_0x000107c615f0(puVar8);
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(puVar4,uVar1);
    puVar8 = puVar6;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c6142c(uVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(puVar6);
    func_0x000107c61170();
    if (puVar8 == (undefined8 *)0x0) {
      lVar5 = 1;
    }
    else {
      puVar4 = puVar8;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      func_0x000107c615e8(puVar8);
      puVar6 = puVar4;
      func_0x000107c49804(puVar4);
      func_0x000107c61170();
      lVar5 = (long)(int)puVar6;
    }
    func_0x000104451814();
    uVar1 = *puVar4;
    uVar7 = puVar4[1];
    uVar9 = *(undefined8 *)(unaff_x20 + lVar10);
    lVar10 = *(long *)(unaff_x20 + lVar3);
    lVar3 = lVar10;
    if (lVar10 == 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112f0a188);
      func_0x000107c615f0(lVar3);
    }
    func_0x000107c61174(uVar9);
    func_0x000107c615f0(lVar10);
    func_0x000107c61434(uVar7);
    func_0x000107c5fadc(uVar1,uVar7);
    lVar10 = lVar3;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c6142c(uVar7);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    if (lVar10 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = lVar10;
      func_0x000107c5dc0c(lVar10);
      func_0x000107c61180();
      func_0x000107c615e8(lVar10);
      lVar10 = lVar3;
      func_0x000107c49804(lVar3);
      func_0x000107c61170(lVar3);
      lVar3 = (long)(int)lVar10;
    }
    uVar1 = 0;
    func_0x000104451bc0(0);
    func_0x000107c610f8();
    func_0x000104451b6c(lVar2,lVar5,lVar3,uVar1);
  }
  return;
}



/* Entry: 102caef68; end: 102caef9b; -[SCOperaConfigProvider sspUseLazyVideoPool] */

uint FUN_102caef68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caef9c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102caef9c; end: 102caf063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102caef9c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f1068b0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102caf064; end: 102caf097; -[SCOperaConfigProvider playbackFrameRateTrackerEnabled] */

uint FUN_102caf064(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caf098();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102caf098; end: 102caf15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102caf098(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f1068e0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102caf160; end: 102caf193; -[SCOperaConfigProvider timeThresholdForAPICallsToAssertMs] */

undefined8 FUN_102caf160(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caf194();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102caf194; end: 102caf263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102caf194(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112f0a168);
  uVar3 = uVar4;
  if (uVar4 == 0) {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(uVar3);
  }
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar4);
  uVar2 = 0xd000000000000037;
  func_0x000107c5fadc(0xd000000000000037,0x800000010f106910);
  uVar4 = uVar3;
  func_0x000107c4980c();
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar2);
  if ((int)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102caf264);
    (*pcVar1)();
  }
  return uVar4 & 0xffffffff;
}



/* Entry: 102caf264; end: 102caf297; -[SCOperaConfigProvider timeThresholdForAPICallsToLogMs] */

undefined8 FUN_102caf264(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caf298();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102caf298; end: 102caf367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102caf298(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112f0a168);
  uVar3 = uVar4;
  if (uVar4 == 0) {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(uVar3);
  }
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar4);
  uVar2 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010f106950);
  uVar4 = uVar3;
  func_0x000107c4980c();
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar2);
  if ((int)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102caf368);
    (*pcVar1)();
  }
  return uVar4 & 0xffffffff;
}



/* Entry: 102caf368; end: 102caf39b; -[SCOperaConfigProvider shouldIgnoreLoadingStateChangeForPageToLayersResolution] */

uint FUN_102caf368(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caf39c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102caf39c; end: 102caf463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102caf39c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000046;
  func_0x000107c5fadc(0xd000000000000046,0x800000010f106990);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102caf464; end: 102caf497; -[SCOperaConfigProvider useMediaBundleResolution] */

uint FUN_102caf464(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caf498();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102caf498; end: 102caf55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102caf498(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f1069e0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102caf560; end: 102caf593; -[SCOperaConfigProvider useDownloadedSharingURL] */

uint FUN_102caf560(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caf594();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102caf594; end: 102caf65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102caf594(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f106a10);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102caf65c; end: 102caf68f; -[SCOperaConfigProvider useScrollViewOffsetForPages] */

uint FUN_102caf65c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caf690();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102caf690; end: 102caf757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102caf690(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f106a40);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102caf758; end: 102caf78b; -[SCOperaConfigProvider enableCornerRadiusOnContainerView] */

uint FUN_102caf758(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caf78c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102caf78c; end: 102caf853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102caf78c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f106a70);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102caf854; end: 102caf887; -[SCOperaConfigProvider makeRequestsWithUserVisiblePriority] */

uint FUN_102caf854(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caf888();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102caf888; end: 102caf94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102caf888(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f106aa0);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102caf950; end: 102caf983; -[SCOperaConfigProvider resolverItemHandleCacheLimit] */

undefined8 FUN_102caf950(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102caf984();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102caf984; end: 102cafa4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102caf984(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f106ad0);
  lVar3 = lVar2;
  func_0x000107c4980c(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cafa4c; end: 102cafa7f; -[SCOperaConfigProvider publishPlaylistItemId] */

uint FUN_102cafa4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cafa80();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cafa80; end: 102cafb47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cafa80(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f106b00);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cafb48; end: 102cafb7b; -[SCOperaConfigProvider stickySlotsUnifiedConfig] */

void FUN_102cafb48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cafb7c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cafb7c; end: 102cafcf3;  */

/* WARNING: Removing unreachable block (ram,0x000102cafcb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102cafb7c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112f0a168);
  puVar5 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar5 = *(undefined **)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(puVar5);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(puVar6);
  uVar3 = 0x800000010f106b20;
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f106b20);
  puVar6 = puVar5;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c615e8(puVar5);
  func_0x000107c61170(uVar1);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126af7d0;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c61170(uVar4);
  puVar5 = puVar6;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    puVar2 = puVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
    func_0x000107c610f8(PTR_PTR_1126ac1e0);
    puVar5 = puVar2;
    FUN_102cb6a54(puVar2,uVar3);
    func_0x00010006c090(puVar2,uVar3);
    if (puVar5 != (undefined *)0x0) goto LAB_102cafcc8;
  }
  puVar5 = PTR_PTR_1126ac1e0;
  func_0x000107c610f8(PTR_PTR_1126ac1e0);
  func_0x000107c453e4();
LAB_102cafcc8:
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 102cafcf4; end: 102cafd27; -[SCOperaConfigProvider enableNewPITNReport] */

uint FUN_102cafcf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cafd28();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cafd28; end: 102cafdef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cafd28(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f106b40);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}



/* Entry: 102cafdf0; end: 102cafe23; -[SCOperaConfigProvider doNotRestoreNativeVolume] */

uint FUN_102cafdf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cafe24();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cafe24; end: 102cafeeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cafe24(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0a178);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0a168);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0a188);
    func_0x000107c615f0(lVar2);
  }
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  uVar1 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f106b70);
  lVar3 = lVar2;
  func_0x000107c3ebd4(lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar1);
  return lVar3;
}


