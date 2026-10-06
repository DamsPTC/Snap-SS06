/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e22b10; end: 102e22b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e22b10(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1d7a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f1d7a0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    (*(code *)0x102e22b84)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102e22b24; end: 102e22c7b;  */

long FUN_102e22b24(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 102e22c7c; end: 102e22eb3;  */

/* WARNING: Possible PIC construction at 0x000102e22ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e22cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e22d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e22dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e22de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e22e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e22e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e22e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e22e30) */
/* WARNING: Removing unreachable block (ram,0x000102e22e10) */
/* WARNING: Removing unreachable block (ram,0x000102e22dec) */
/* WARNING: Removing unreachable block (ram,0x000102e22db0) */
/* WARNING: Removing unreachable block (ram,0x000102e22d90) */
/* WARNING: Removing unreachable block (ram,0x000102e22cc0) */
/* WARNING: Removing unreachable block (ram,0x000102e22ca8) */
/* WARNING: Removing unreachable block (ram,0x000102e22e6c) */

void FUN_102e22c7c(undefined8 param_1)

{
  FUN_102e22a30();
  func_0x000107c5a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e22eb4; end: 102e22f0f; -[_TtC18LensInfoButtonImpl29LensInfoButtonAttributionView initWithFrame:] */

void FUN_102e22eb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoButtonImpl.LensInfoButtonAttributionView",0x30,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e22ee0);
  (*pcVar1)();
}



/* Entry: 102e22f10; end: 102e22fa7; -[_TtC18LensInfoButtonImpl29LensInfoButtonAttributionView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e22f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e22f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e22f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e22f60) */
/* WARNING: Removing unreachable block (ram,0x000102e22f40) */
/* WARNING: Removing unreachable block (ram,0x000102e22f80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e22f10(long param_1)

{
  FUN_102e2318c(param_1 + _DAT_112f1d768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1d770));
  return;
}



/* Entry: 102e22fa8; end: 102e23073;  */

void FUN_102e22fa8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a8020);
  return;
}



/* Entry: 102e23074; end: 102e2318b;  */

undefined * FUN_102e23074(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c59c74();
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c55f80(puVar1);
  func_0x000107c56ba8(puVar1);
  func_0x000107c61170(puVar1);
  puVar3 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000100b74f58(0x4020000000000000,0x3fe0000000000000,0,0x4000000000000000,puVar3,puVar1,
                      puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 102e2318c; end: 102e231fb;  */

undefined8 FUN_102e2318c(undefined8 param_1)

{
  (*(code *)(undefined *)0x102e21cb0)();
  return param_1;
}



/* Entry: 102e231fc; end: 102e23233;  */

void FUN_102e231fc(void)

{
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bff5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102e23234; end: 102e232b7; -[SCLensInfoButtonView initWithAttributionSlugEnabled:shadowEnabled:] */

undefined8
FUN_102e23234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_118 [232];
  
  FUN_102e232b8(auStack_118);
  uVar1 = 0;
  func_0x000102e24908(0);
  func_0x000107c610f8();
  FUN_102e23758(param_3,param_4,auStack_118,uVar1);
  uVar1 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar1,0x130,7);
  return param_3;
}



/* Entry: 102e232b8; end: 102e234bf;  */

void FUN_102e232b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar1 = 1;
  func_0x000108f470a4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fe0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar2;
  func_0x000107c5afa4(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1107e0);
  puVar5 = puVar2;
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c5afa4(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *param_1 = puVar5;
  param_1[2] = 0x4044000000000000;
  param_1[1] = 0x4044000000000000;
  param_1[3] = 3;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = puVar2;
  auVar7 = NEON_fmov(0x4034000000000000,8);
  param_1[7] = auVar7._8_8_;
  param_1[6] = auVar7._0_8_;
  param_1[8] = 0x7a;
  param_1[9] = 0x3fd3333333333333;
  param_1[0xb] = 0xd5;
  param_1[10] = 7;
  param_1[0xd] = 0xd5;
  param_1[0xc] = 6;
  param_1[0xe] = uVar1;
  auVar7 = NEON_fmov(0x4028000000000000,8);
  param_1[0x10] = auVar7._8_8_;
  param_1[0xf] = auVar7._0_8_;
  param_1[0x11] = puVar4;
  auVar7 = NEON_fmov(0x4024000000000000,8);
  param_1[0x13] = auVar7._8_8_;
  param_1[0x12] = auVar7._0_8_;
  param_1[0x15] = 0;
  param_1[0x14] = 0x4000000000000000;
  param_1[0x16] = 0xd000000000000021;
  param_1[0x17] = 0x800000010f110780;
  param_1[0x18] = 0xd000000000000027;
  param_1[0x19] = 0x800000010f1107b0;
  param_1[0x1a] = 0x4024000000000000;
  param_1[0x1b] = 0xd000000000000010;
  param_1[0x1c] = 0x800000010f110800;
  return;
}



/* Entry: 102e234c0; end: 102e2356f; -[SCLensInfoButtonView tapHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e234c0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112f1d7d0);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105d86e0;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102e23570; end: 102e235c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102e23570(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112f1d7d0);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102e235c8; end: 102e23683; -[SCLensInfoButtonView setTapHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e235c8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1105d86c8;
    func_0x000107c613fc(&UNK_1105d86c8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_102e24a18;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112f1d7d0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e23684; end: 102e236df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e23684(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1d7d0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 102e236e0; end: 102e2371f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102e236e0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f1d7d0;
  func_0x000107c61428(unaff_x20 + _DAT_112f1d7d0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102e23720;
  return auVar2;
}



/* Entry: 102e23720; end: 102e23723;  */

void FUN_102e23720(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102e23724; end: 102e23757; -[SCLensInfoButtonView initWithCoder:] */

undefined8 FUN_102e23724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102e24864();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 102e23758; end: 102e23897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102e23758(undefined1 param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_118 [232];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1d7d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d7e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d7e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d7f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d7f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d800) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1d808) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112f1d810) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1d7d8);
  uVar3 = param_3[0x18];
  uVar5 = param_3[0x1b];
  uVar4 = param_3[0x1a];
  puVar1[0x19] = param_3[0x19];
  puVar1[0x18] = uVar3;
  puVar1[0x1b] = uVar5;
  puVar1[0x1a] = uVar4;
  puVar1[0x1c] = param_3[0x1c];
  uVar3 = param_3[0x10];
  uVar5 = param_3[0x13];
  uVar4 = param_3[0x12];
  puVar1[0x11] = param_3[0x11];
  puVar1[0x10] = uVar3;
  puVar1[0x13] = uVar5;
  puVar1[0x12] = uVar4;
  uVar5 = param_3[0x14];
  uVar4 = param_3[0x17];
  uVar3 = param_3[0x16];
  puVar1[0x15] = param_3[0x15];
  puVar1[0x14] = uVar5;
  puVar1[0x17] = uVar4;
  puVar1[0x16] = uVar3;
  uVar3 = param_3[8];
  uVar5 = param_3[0xb];
  uVar4 = param_3[10];
  puVar1[9] = param_3[9];
  puVar1[8] = uVar3;
  puVar1[0xb] = uVar5;
  puVar1[10] = uVar4;
  uVar5 = param_3[0xc];
  uVar4 = param_3[0xf];
  uVar3 = param_3[0xe];
  puVar1[0xd] = param_3[0xd];
  puVar1[0xc] = uVar5;
  puVar1[0xf] = uVar4;
  puVar1[0xe] = uVar3;
  uVar3 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  uVar5 = param_3[4];
  uVar4 = param_3[7];
  uVar3 = param_3[6];
  puVar1[5] = param_3[5];
  puVar1[4] = uVar5;
  puVar1[7] = uVar4;
  puVar1[6] = uVar3;
  FUN_102e24a40(param_3,auStack_118);
  func_0x000102e24908();
  puVar2 = &stack0xfffffffffffffed8;
  func_0x000107c61154(0,0,0,0,puVar2,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c58e6c();
  FUN_102e23898();
  FUN_102e23988();
  FUN_102e24928(param_3);
  func_0x000107c61170(puVar2);
  return puVar2;
}



/* Entry: 102e23898; end: 102e23987;  */

/* WARNING: Possible PIC construction at 0x000102e238d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e238f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e238f4) */
/* WARNING: Removing unreachable block (ram,0x000102e238dc) */
/* WARNING: Removing unreachable block (ram,0x000102e23928) */
/* WARNING: Removing unreachable block (ram,0x000102e23978) */
/* WARNING: Removing unreachable block (ram,0x000102e23950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e23898(void)

{
  long unaff_x20;
  
  func_0x000107c59594(*(undefined8 *)(unaff_x20 + _DAT_112f1d7d8 + 0xd0));
  FUN_102e24118();
  func_0x000107c3d5b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 102e23988; end: 102e23eab;  */

/* WARNING: Possible PIC construction at 0x000102e23a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e23e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e23e00) */
/* WARNING: Removing unreachable block (ram,0x000102e23db4) */
/* WARNING: Removing unreachable block (ram,0x000102e23d78) */
/* WARNING: Removing unreachable block (ram,0x000102e23d58) */
/* WARNING: Removing unreachable block (ram,0x000102e23d2c) */
/* WARNING: Removing unreachable block (ram,0x000102e23cd8) */
/* WARNING: Removing unreachable block (ram,0x000102e23c84) */
/* WARNING: Removing unreachable block (ram,0x000102e23c28) */
/* WARNING: Removing unreachable block (ram,0x000102e23bf4) */
/* WARNING: Removing unreachable block (ram,0x000102e23bc8) */
/* WARNING: Removing unreachable block (ram,0x000102e23b74) */
/* WARNING: Removing unreachable block (ram,0x000102e23b20) */
/* WARNING: Removing unreachable block (ram,0x000102e23ac4) */
/* WARNING: Removing unreachable block (ram,0x000102e23a90) */
/* WARNING: Removing unreachable block (ram,0x000102e23a6c) */
/* WARNING: Removing unreachable block (ram,0x000102e23a30) */
/* WARNING: Removing unreachable block (ram,0x000102e23a04) */
/* WARNING: Removing unreachable block (ram,0x000102e23e54) */

void FUN_102e23988(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 0x1d;
  *(undefined8 *)(puVar1 + 0x10) = 0xe;
  FUN_102e24118();
  func_0x000107c5e308();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102e23eac; end: 102e23ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e23eac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1d7e0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f1d7e0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_102e23ec0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102e23ec0; end: 102e23fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_102e23ec0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_140 [128];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1 = param_1 + _DAT_112f1d7d8;
  uStack_78 = *(undefined8 *)(param_1 + 0x98);
  uStack_80 = *(undefined8 *)(param_1 + 0x90);
  uStack_68 = *(undefined8 *)(param_1 + 0xa8);
  uStack_70 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uStack_48 = *(undefined8 *)(param_1 + 200);
  uStack_50 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_98 = *(undefined8 *)(param_1 + 0x78);
  uStack_a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = *(undefined8 *)(param_1 + 0x88);
  uStack_90 = *(undefined8 *)(param_1 + 0x80);
  uStack_60 = uVar3;
  uStack_58 = uVar4;
  FUN_102e22fa8(0);
  func_0x000107c610f8();
  func_0x000102e231c0(&uStack_c0,auStack_140);
  puVar1 = &uStack_c0;
  func_0x000102e22450(puVar1);
  func_0x000107c61180();
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c5a050(puVar1);
  func_0x000107c61170(puVar1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c56bb8();
  func_0x000107c3d6fc(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 102e23fd0; end: 102e24117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102e23fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = _DAT_112f1d7e8;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112f1d7e8);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53840();
    plVar1 = (long *)(unaff_x20 + _DAT_112f1d7d8);
    lVar6 = *plVar1;
    if (lVar6 != 0) {
      lVar8 = plVar1[1];
      lVar9 = plVar1[2];
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c61174();
      func_0x000107c4c194(puVar3);
      func_0x000107c61180();
      func_0x000107c51820();
      func_0x000107c61170(puVar3);
      lVar5 = lVar6;
      func_0x000107c5185c(lVar8,lVar9,param_1,lVar6,param_3,1,0,0,1);
      func_0x000107c61180();
      if (lVar5 == 0) {
        lVar5 = lVar6;
        func_0x000107c61174(lVar6);
      }
      func_0x000107c55258(puVar4,param_3,lVar5);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined **)(unaff_x20 + lVar2) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar7);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar4;
}



/* Entry: 102e24118; end: 102e2412b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e24118(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1d7f0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f1d7f0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_102e2412c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102e2412c; end: 102e2427f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102e2412c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c2e30;
  func_0x000107c610f8(PTR_PTR_1126c2e30);
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c55528(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f1d7d8 + 0xd8);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(param_1 + _DAT_112f1d7d8 + 0xe0));
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(uVar2);
  FUN_102e23fd0();
  func_0x000107c5a050();
  func_0x000107c61170(uVar2);
  func_0x000107c3d89c(puVar1);
  func_0x000107c3d8b8(puVar1);
  puVar4 = puVar1;
  if (*(char *)(param_1 + _DAT_112f1d810) == '\x01') {
    puVar3 = PTR_PTR_1126b08d8;
    func_0x000107c61168(PTR_PTR_1126b08d8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000100b74f58(0x4020000000000000,0x3fe4cccccccccccd,0,0,puVar3,puVar1,puVar4);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 102e24280; end: 102e24293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e24280(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1d7f8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f1d7f8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    (*(code *)0x102e242f4)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102e24294; end: 102e2442f;  */

long FUN_102e24294(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 102e24430; end: 102e2447b; -[SCLensInfoButtonView infoButtonTappedWithSender:] */

/* WARNING: Possible PIC construction at 0x000102e24464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e24468) */

void FUN_102e24430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102e2495c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102e2447c; end: 102e244d7; -[SCLensInfoButtonView initWithFrame:] */

void FUN_102e2447c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoButtonImpl.LensInfoButtonView",0x25,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e244a8);
  (*pcVar1)();
}



/* Entry: 102e244d8; end: 102e24563; -[SCLensInfoButtonView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e24518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e24538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e2451c) */
/* WARNING: Removing unreachable block (ram,0x000102e2453c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e244d8(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112f1d7d0),
                      ((undefined8 *)(param_1 + _DAT_112f1d7d0))[1]);
  FUN_102e24928(param_1 + _DAT_112f1d7d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1d7e0));
  return;
}



/* Entry: 102e24564; end: 102e24597; -[SCLensInfoButtonView centerAnchorView] */

void FUN_102e24564(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102e24118();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e24598; end: 102e245a7; -[SCLensInfoButtonView canShowAttributionSlug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102e24598(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f1d808);
}



/* Entry: 102e245a8; end: 102e2467f; -[SCLensInfoButtonView updateAttributionSlugWithLensName:creatorName:creatorImageHidden:] */

/* WARNING: Possible PIC construction at 0x000102e24660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e24664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e245a8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  if (*(char *)(param_1 + _DAT_112f1d808) == '\x01') {
    func_0x000107c61174(param_1);
    lVar2 = param_1;
    FUN_102e23eac();
    FUN_102e22548(param_3,uVar1,param_4,param_2,param_5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102e24680; end: 102e2478b; -[SCLensInfoButtonView updateInfoButtonWithImage:] */

/* WARNING: Possible PIC construction at 0x000102e246fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e24750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e24760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e24754) */
/* WARNING: Removing unreachable block (ram,0x000102e24700) */
/* WARNING: Removing unreachable block (ram,0x000102e24734) */
/* WARNING: Removing unreachable block (ram,0x000102e24740) */
/* WARNING: Removing unreachable block (ram,0x000102e24764) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e24680(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    func_0x000107c61174();
    FUN_102e23fd0();
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c51820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 102e2478c; end: 102e24803; -[SCLensInfoButtonView setAttributionHidden:] */

/* WARNING: Possible PIC construction at 0x000102e247d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e247e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e247d4) */
/* WARNING: Removing unreachable block (ram,0x000102e247ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2478c(long param_1)

{
  if (*(char *)(param_1 + _DAT_112f1d808) == '\x01') {
    func_0x000107c61174();
    FUN_102e23eac();
    func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102e24804; end: 102e24863; -[SCLensInfoButtonView setInfoButtonOverlayHidden:] */

/* WARNING: Possible PIC construction at 0x000102e24834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e2484c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e24838) */
/* WARNING: Removing unreachable block (ram,0x000102e24850) */

void FUN_102e24804(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e24280();
  func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e24864; end: 102e24927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e24864(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1d7d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d7e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d7e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d7f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d7f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d800) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010f0f28b0,
                      "LensInfoButtonImpl/LensInfoButtonView.swift",0x2b,2,0x16,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e24908);
  (*pcVar2)();
}



/* Entry: 102e24928; end: 102e2495b;  */

undefined8 FUN_102e24928(undefined8 param_1)

{
  (*(code *)(undefined *)0x102e21fb0)();
  return param_1;
}



/* Entry: 102e2495c; end: 102e24a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2495c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  if (*(char *)(unaff_x20 + _DAT_112f1d7d8 + 0x20) != '\x01') {
    puVar2 = PTR_PTR_1126affa8;
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102e24a18);
      (*pcVar4)();
    }
    func_0x000107c4e57c();
    func_0x000107c61170(puVar2);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1d7d0);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = puVar1[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)();
    func_0x00010058d43c(pcVar4,uVar3);
  }
  return;
}



/* Entry: 102e24a18; end: 102e24a3f;  */

void FUN_102e24a18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102e24a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102e24a40; end: 102e24a7b;  */

undefined8 FUN_102e24a40(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x102e22000)(param_2,param_1);
  return param_2;
}



/* Entry: 102e24a7c; end: 102e24b2f;  */

long FUN_102e24a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  func_0x000107c613fc();
  func_0x0001000c6580();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  return unaff_x20;
}



/* Entry: 102e24b30; end: 102e25263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e24b30(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  long *plVar17;
  code *pcVar18;
  undefined *puVar19;
  undefined8 *unaff_x20;
  code *pcVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  uVar22 = *unaff_x20;
  func_0x000107c6071c();
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x102e2525c);
    (*pcVar20)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x102e25260);
    (*pcVar20)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x102e25264);
    (*pcVar20)();
  }
  uVar4 = unaff_x20[5];
  func_0x000107c4b11c();
  func_0x000107c61180();
  lVar5 = 0;
  FUN_102e2776c();
  lVar7 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112f1da70) = uVar4;
  plVar6 = &lStack_80;
  lStack_80 = lVar7;
  lStack_78 = lVar5;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  lVar7 = *(long *)(unaff_x20[6] + _DAT_11302a390);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 != 0) {
    func_0x000107c59818();
    func_0x000107c615e8(lVar7);
  }
  uVar4 = unaff_x20[0xb];
  unaff_x20[0xb] = plVar6;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar8 = *(undefined8 *)(unaff_x20[3] + _DAT_113083868);
  func_0x000107c61174();
  uVar4 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  lVar21 = unaff_x20[2];
  uVar8 = *(undefined8 *)(lVar21 + _DAT_11306fae0);
  func_0x000107c61174();
  func_0x00010341c1d4();
  lVar5 = unaff_x20[4];
  func_0x000107c4b254();
  func_0x000107c61180();
  lVar7 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar7 == 0) {
    func_0x000104366fc4(0xd00000000000002e,0x800000010f110880,uVar22,&PTR_DAT_1105d8978);
    func_0x000107c61170(plVar6);
    func_0x000107c61574(uVar4);
    return;
  }
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar10 = &UNK_1105d87f0;
  func_0x000107c613fc(&UNK_1105d87f0,0x19,7);
  *(long *)(puVar10 + 0x10) = lVar7;
  puVar10[0x18] = (char)uVar8;
  pcStack_90 = FUN_102e25264;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = (undefined *)0x102e25744;
  puStack_98 = &UNK_1105d8808;
  ppuVar11 = &puStack_b0;
  puStack_88 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar10 = puStack_88;
  func_0x000107c615f0(lVar7);
  func_0x000107c61574(puVar10);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c41e08(lVar7);
  puVar10 = puVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    puVar12 = PTR_PTR_1126ac568;
    func_0x000107c61168(PTR_PTR_1126ac568);
    puVar13 = puVar10;
    func_0x000107c6148c(puVar10,puVar12);
    if (puVar13 != (undefined *)0x0) {
      func_0x000107c3e7f4();
      uVar22 = *(undefined8 *)(lVar21 + _DAT_11306fac8);
      uVar2 = ((undefined8 *)(lVar21 + _DAT_11306fac8))[1];
      uVar1 = *(undefined8 *)(lVar21 + _DAT_11306fb30);
      uVar3 = ((undefined8 *)(lVar21 + _DAT_11306fb30))[1];
      lVar14 = 0;
      func_0x000102e270a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar14 + 0x40) = 0;
      func_0x000107c61614(lVar14 + 0x38,0);
      *(undefined8 *)(lVar14 + 0x50) = 0;
      *(undefined8 *)(lVar14 + 0x58) = 0;
      *(undefined1 *)(lVar14 + 0x60) = 1;
      *(undefined8 *)(lVar14 + 0x10) = uVar22;
      *(undefined8 *)(lVar14 + 0x18) = uVar2;
      *(undefined8 *)(lVar14 + 0x20) = uVar4;
      *(undefined **)(lVar14 + 0x28) = puVar13;
      *(char *)(lVar14 + 0x30) = (char)uVar8;
      *(undefined8 *)(lVar14 + 0x40) = uVar3;
      *(undefined8 *)(lVar14 + 0x48) = 0;
      func_0x000107c61604(lVar14 + 0x38,uVar1);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c615f4(puVar10,2);
      func_0x000107c61434(uVar2);
      func_0x000107c6157c(uVar4);
      func_0x000107c615f0(uVar1);
      func_0x000107c47580();
      uVar22 = *(undefined8 *)(lVar14 + 0x48);
      *(undefined **)(lVar14 + 0x48) = puVar12;
      func_0x000107c61170(uVar22);
      func_0x00010341c1ac(uVar8);
      func_0x000107c5947c(puVar13);
      func_0x000107c615e8(uVar1);
      func_0x000107c615e8(puVar10);
      uVar22 = unaff_x20[9];
      unaff_x20[9] = lVar14;
      unaff_x20[10] = &PTR_DAT_1105d88c8;
      func_0x000107c6157c(lVar14);
      func_0x000107c615e8(uVar22);
      FUN_102e285f8(0);
      func_0x000107c610f8();
      lVar15 = lVar14;
      func_0x000107c6157c(lVar14);
      func_0x000102e2852c();
      func_0x000107c42c20(unaff_x20[8]);
      uVar22 = *(undefined8 *)(lVar21 + _DAT_11306fb28);
      lVar5 = ((undefined8 *)(lVar21 + _DAT_11306fb28))[1];
      uVar8 = uVar22;
      func_0x000107c614f0(uVar22);
      pcVar20 = *(code **)(lVar5 + 8);
      func_0x000107c615f0(uVar22);
      (*pcVar20)(uVar8,lVar5);
      func_0x000107c615e8(uVar22);
      FUN_102e12978();
      func_0x0001000c2068();
      func_0x000107c61574(uVar8);
      pcVar16 = "begin()";
      func_0x0001000c10c0();
      func_0x000107c61180();
      plVar17 = (long *)pcVar16;
      func_0x000100471e0c();
      func_0x000107c61574(uVar22);
      func_0x000107c615e8(pcVar16);
      puVar12 = &UNK_1105d8840;
      func_0x000107c613fc(&UNK_1105d8840,0x18,7);
      func_0x000107c61644(puVar12 + 0x10,lVar14);
      pcVar20 = FUN_102e25394;
      puVar13 = puVar12;
      (**(code **)(*plVar17 + 0x60))(FUN_102e25394);
      func_0x000107c61574(plVar17);
      func_0x000107c61574(puVar12);
      pcVar18 = pcVar20;
      func_0x000107c614f0(pcVar20);
      (**(code **)(puVar13 + 0x10))(unaff_x20[0xc],pcVar18,puVar13);
      func_0x000107c615e8(pcVar20);
      puVar19 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      puVar12 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_90 = FUN_102e25414;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1016cbcbc;
      puStack_98 = &UNK_1105d8858;
      ppuVar11 = &puStack_b0;
      puStack_88 = (undefined *)lVar14;
      func_0x000107c60bc4(ppuVar11);
      puVar13 = puStack_88;
      func_0x000107c6157c(lVar14);
      func_0x000107c61574(puVar13);
      func_0x000107c3e4fc(puVar19);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar11);
      puVar13 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      pcStack_90 = FUN_102e2541c;
      puStack_88 = (undefined *)0x0;
      puStack_b0 = puVar12;
      uStack_a8 = 0x42000000;
      puStack_a0 = (undefined *)0x102e25748;
      puStack_98 = &UNK_1105d8880;
      ppuVar11 = &puStack_b0;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c3e4fc(puVar13);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar11);
      puVar12 = PTR_PTR_1126bbb90;
      func_0x000107c610f8(PTR_PTR_1126bbb90);
      func_0x000107c471f4();
      func_0x000107c42c20(unaff_x20[7]);
      func_0x000107c61170(plVar6);
      func_0x000107c61574(uVar4);
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(puVar9);
      func_0x000107c615e8(puVar10);
      func_0x000107c61574(lVar14);
      func_0x000107c61170(lVar15);
      func_0x000107c61170(puVar19);
      func_0x000107c61170(puVar13);
      puVar9 = puVar12;
      goto LAB_102e25230;
    }
    func_0x000107c615e8(puVar10);
  }
  func_0x000104366fc4(0xd000000000000043,0x800000010f1108b0,uVar22,&PTR_DAT_1105d8978);
  func_0x000107c61170(plVar6);
  func_0x000107c61574(uVar4);
  func_0x000107c615e8(lVar7);
LAB_102e25230:
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 102e25264; end: 102e2529f;  */

void FUN_102e25264(void)

{
  long unaff_x20;
  
  func_0x00010341c1c0(*(undefined1 *)(unaff_x20 + 0x18));
  func_0x000107c610f8(PTR_PTR_1126ac568);
                    /* WARNING: Could not recover jumptable at 0x00010c024d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102e252a0; end: 102e252bb;  */

void FUN_102e252a0(long param_1,long param_2)

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



/* Entry: 102e252bc; end: 102e25393;  */

void FUN_102e252bc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_120 [104];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_40 = param_1[0xc];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  func_0x000107c61428(param_2 + 0x10,auStack_b8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  uVar1 = (uint)((ulong)uStack_90 >> 0x20);
  uVar2 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 4) {
    if (uVar2 - 2 < 2) {
      func_0x000102e17b78(&uStack_a0,auStack_120);
    }
    else {
      if (uVar2 == 0) goto LAB_102e25378;
      func_0x000107c61174(uStack_a0);
    }
    FUN_102e26284();
  }
  else {
    if ((uVar2 == 4) || (uVar2 != 5)) {
      FUN_102e265c0();
    }
    FUN_102e2654c();
  }
LAB_102e25378:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 102e25394; end: 102e2539b;  */

void FUN_102e25394(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  undefined1 auStack_120 [104];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_40 = param_1[0xc];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_b8,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (uint)((ulong)uStack_90 >> 0x20);
  uVar3 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 4) {
    if (uVar3 - 2 < 2) {
      func_0x000102e17b78(&uStack_a0,auStack_120);
    }
    else {
      if (uVar3 == 0) goto LAB_102e25378;
      func_0x000107c61174(uStack_a0);
    }
    FUN_102e26284();
  }
  else {
    if ((uVar3 == 4) || (uVar3 != 5)) {
      FUN_102e265c0();
    }
    FUN_102e2654c();
  }
LAB_102e25378:
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 102e2539c; end: 102e25413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2539c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = 0;
  FUN_102e2625c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f1d960) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f1d958);
  *puVar1 = param_1;
  puVar1[1] = &PTR_DAT_1105d88c8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c6157c(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 102e25414; end: 102e2541b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e25414(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x20;
  long lStack_30;
  long lStack_28;
  
  lVar3 = 0;
  FUN_102e2625c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f1d960) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f1d958);
  *puVar1 = unaff_x20;
  puVar1[1] = &PTR_DAT_1105d88c8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 102e2541c; end: 102e25437;  */

void FUN_102e2541c(void)

{
  func_0x000102e25714(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102e25438; end: 102e2546f;  */

void FUN_102e25438(long param_1)

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



/* Entry: 102e25470; end: 102e2556b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e25470(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x48);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x50);
    lVar1 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 0x78);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar1,lVar4);
    func_0x000107c615e8(lVar3);
    lVar3 = *(long *)(unaff_x20 + 0x48);
    if (lVar3 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0x50);
      lVar1 = lVar3;
      func_0x000107c614f0(lVar3);
      pcVar5 = *(code **)(lVar4 + 0x70);
      func_0x000107c615f0(lVar3);
      (*pcVar5)(lVar1,lVar4);
      func_0x000107c615e8(lVar3);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
      goto LAB_102e25508;
    }
  }
  uVar2 = 0;
LAB_102e25508:
  *(long *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000107c615e8(uVar2);
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x30) + _DAT_11302a390);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c59818();
    func_0x000107c615e8(lVar3);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  func_0x000107c61170(uVar2);
  return 0;
}



/* Entry: 102e2556c; end: 102e255ef;  */

void FUN_102e2556c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102e255f0; end: 102e25633;  */

void FUN_102e255f0(void)

{
  FUN_102e24b30();
  return;
}



/* Entry: 102e25634; end: 102e25643; -[_TtC32PlayGamesLensLoggingServicesImplP33_61FEB6A734D73EE82DC33E4042CEEFBE27PlayGamesNoOpSwipesProvider lensSwipesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e25634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f1d928));
  return;
}



/* Entry: 102e25644; end: 102e256af; -[_TtC32PlayGamesLensLoggingServicesImplP33_61FEB6A734D73EE82DC33E4042CEEFBE27PlayGamesNoOpSwipesProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e25644(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f1d928;
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  func_0x000107c4d608();
  func_0x000107c61180();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e256b0; end: 102e256e3;  */

void FUN_102e256b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e256e4; end: 102e256f3; -[_TtC32PlayGamesLensLoggingServicesImplP33_61FEB6A734D73EE82DC33E4042CEEFBE27PlayGamesNoOpSwipesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e256e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1d928));
  return;
}



/* Entry: 102e256f4; end: 102e25733;  */

void FUN_102e256f4(void)

{
  func_0x000107c61168(&PTR_PTR_112f1d880);
  return;
}



/* Entry: 102e25734; end: 102e2574b;  */

void FUN_102e25734(long param_1,long param_2)

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



/* Entry: 102e2574c; end: 102e25877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_102e2574c(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_48;
  
  lVar1 = _DAT_112f1d960;
  ppuVar2 = *(undefined ***)(unaff_x20 + _DAT_112f1d960);
  ppuVar4 = ppuVar2;
  if (ppuVar2 == (undefined **)0x0) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f1d958);
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f1d958))[1];
    func_0x000107c614f0(uVar6);
    (**(code **)(lVar5 + 8))();
    puVar3 = PTR_PTR_1126c4378;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar6,lVar5);
    func_0x000107c6142c(lVar5);
    func_0x000107c48628();
    func_0x000107c61170(uVar6);
    puStack_48 = puVar3;
    func_0x0001000285a8(0x112f1d990,&UNK_10db55b90);
    func_0x000107c613fc();
    ppuVar4 = &puStack_48;
    func_0x00010042e6a0();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined ***)(unaff_x20 + lVar1) = ppuVar4;
    func_0x000107c6157c();
    func_0x000107c61574(uVar6);
    ppuVar2 = (undefined **)0x0;
  }
  func_0x000107c6157c(ppuVar2);
  return ppuVar4;
}



/* Entry: 102e25878; end: 102e25883; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter setLensSessionId:] */

void FUN_102e25878(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_102e25884(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e25884; end: 102e25a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e25884(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_48;
  
  if (param_2 == 0) {
    lVar1 = unaff_x20;
    func_0x000107c614f0();
    func_0x000104366fc4(0xd000000000000018,0x800000010efb78b0,lVar1,&PTR_DAT_1105d89b8);
    param_1 = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f1d958);
  lVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f1d958))[1];
  lVar1 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar4 + 0x10))(param_1,lVar1,uVar2,lVar4);
  FUN_102e2574c();
  (**(code **)(lVar4 + 8))(uVar2,lVar4);
  puVar3 = PTR_PTR_1126c4378;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar2,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c48628();
  func_0x000107c61170(uVar2);
  puStack_48 = puVar3;
  func_0x0001007d6d78(&puStack_48);
  func_0x000107c61170(puVar3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 102e25a74; end: 102e25b03; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter lensSwipeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e25a74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f1d958);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112f1d958))[1];
  func_0x000107c614f0(uVar1);
  pcVar3 = *(code **)(lVar2 + 0x20);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar1,lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,lVar2);
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e25b04; end: 102e25b0f; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter setLensSwipeId:] */

void FUN_102e25b04(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_102e25b10(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e25b10; end: 102e25bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e25b10(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (param_2 == 0) {
    lVar2 = unaff_x20;
    func_0x000107c614f0();
    func_0x000104366fc4(0xd000000000000016,0x800000010efb7890,lVar2,&PTR_DAT_1105d89b8);
    param_1 = 0;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f1d958);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f1d958))[1];
  lVar2 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar2 = param_2;
  }
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar1 + 0x28))(param_1,lVar2,uVar3,lVar1);
  return;
}



/* Entry: 102e25bb8; end: 102e25c47; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter contextSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e25bb8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f1d958);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112f1d958))[1];
  func_0x000107c614f0(uVar1);
  pcVar3 = *(code **)(lVar2 + 0x40);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar1,lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,lVar2);
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e25c48; end: 102e25c53; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter setContextSessionId:] */

void FUN_102e25c48(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  (*(code *)0x102e25cbc)(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e25c54; end: 102e25d63;  */

void FUN_102e25c54(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e25d64; end: 102e25dd7; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter currentLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e25d64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f1d958);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f1d958))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x58);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102e25dd8; end: 102e25ddf; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter currentLensIndex] */

undefined8 FUN_102e25dd8(void)

{
  return 1;
}



/* Entry: 102e25de0; end: 102e25de7; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter lensCount] */

undefined8 FUN_102e25de0(void)

{
  return 1;
}



/* Entry: 102e25de8; end: 102e25def; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter lensSourceType] */

undefined8 FUN_102e25de8(void)

{
  return 0x12;
}



/* Entry: 102e25df0; end: 102e25df7; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter lensSource] */

undefined8 FUN_102e25df0(void)

{
  return 0;
}



/* Entry: 102e25df8; end: 102e25dff; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter snapSource] */

undefined8 FUN_102e25df8(void)

{
  return 8;
}



/* Entry: 102e25e00; end: 102e25e4f; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter lensSessionInfoObservable] */

void FUN_102e25e00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102e2574c();
  uVar2 = uVar1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102e25e50; end: 102e25eff; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter lensSwipeIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e25e50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f1d958);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f1d958))[1];
  func_0x000107c614f0(uVar2);
  pcVar4 = *(code **)(lVar1 + 0x38);
  func_0x000107c61174(param_1);
  (*pcVar4)(uVar2,lVar1);
  uVar3 = 0;
  func_0x0001000e2834(0);
  pcVar4 = FUN_102e25f00;
  func_0x0001000bfde0(FUN_102e25f00,0,uVar3);
  func_0x000107c61574(uVar2);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102e25f00; end: 102e25f2b;  */

void FUN_102e25f00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5fadc(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 102e25f2c; end: 102e26067; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter arBarTabSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e25f2c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f1d958);
  lVar3 = ((undefined8 *)(param_1 + _DAT_112f1d958))[1];
  func_0x000107c614f0(uVar1);
  pcVar6 = *(code **)(lVar3 + 8);
  func_0x000107c61174(param_1);
  (*pcVar6)(uVar1,lVar3);
  puVar5 = PTR_PTR_1126c4378;
  func_0x000107c610f8();
  lVar4 = lVar3;
  func_0x000107c5fadc(uVar1,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c48628();
  func_0x000107c61170(uVar1);
  puVar2 = puVar5;
  func_0x000107c3e0bc();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61170(param_1);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar2;
    func_0x000107c5faec(puVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar2);
    func_0x000107c5fadc(puVar5,lVar4);
    func_0x000107c6142c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 102e26068; end: 102e261a3; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter arBarTabCategoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e26068(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f1d958);
  lVar3 = ((undefined8 *)(param_1 + _DAT_112f1d958))[1];
  func_0x000107c614f0(uVar1);
  pcVar6 = *(code **)(lVar3 + 8);
  func_0x000107c61174(param_1);
  (*pcVar6)(uVar1,lVar3);
  puVar5 = PTR_PTR_1126c4378;
  func_0x000107c610f8();
  lVar4 = lVar3;
  func_0x000107c5fadc(uVar1,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c48628();
  func_0x000107c61170(uVar1);
  puVar2 = puVar5;
  func_0x000107c3e0b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61170(param_1);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar2;
    func_0x000107c5faec(puVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar2);
    func_0x000107c5fadc(puVar5,lVar4);
    func_0x000107c6142c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 102e261a4; end: 102e261ab; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter currentLensOptionId] */

void FUN_102e261a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102e261ac; end: 102e261b3; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter currentLensOptionSourceType] */

undefined8 FUN_102e261ac(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 102e261b4; end: 102e261bb; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter frontCameraSnapFacesCount] */

undefined8 FUN_102e261b4(void)

{
  return 0;
}



/* Entry: 102e261bc; end: 102e261c3; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter backCameraSnapFacesCount] */

undefined8 FUN_102e261bc(void)

{
  return 0;
}



/* Entry: 102e261c4; end: 102e26223; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter init] */

void FUN_102e261c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesLensLoggingServicesImpl.LensCarouselSessionAdapter",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e261f0);
  (*pcVar1)();
}



/* Entry: 102e26224; end: 102e2625b; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e26224(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f1d958));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f1d960));
  return;
}



/* Entry: 102e2625c; end: 102e2627b;  */

void FUN_102e2625c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a8458);
  return;
}



/* Entry: 102e2627c; end: 102e2627f; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter lensSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2627c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f1d958);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112f1d958))[1];
  func_0x000107c614f0(uVar1);
  pcVar3 = *(code **)(lVar2 + 8);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar1,lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,lVar2);
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e26280; end: 102e26283; -[_TtC32PlayGamesLensLoggingServicesImpl26LensCarouselSessionAdapter baseSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e26280(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f1d958);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112f1d958))[1];
  func_0x000107c614f0(uVar1);
  pcVar3 = *(code **)(lVar2 + 8);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar1,lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,lVar2);
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e26284; end: 102e2654b;  */

/* WARNING: Possible PIC construction at 0x000102e262e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e2630c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e2633c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e26350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e2643c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e264d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e26500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e2638c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e2639c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e26390) */
/* WARNING: Removing unreachable block (ram,0x000102e26504) */
/* WARNING: Removing unreachable block (ram,0x000102e264dc) */
/* WARNING: Removing unreachable block (ram,0x000102e26440) */
/* WARNING: Removing unreachable block (ram,0x000102e26354) */
/* WARNING: Removing unreachable block (ram,0x000102e26340) */
/* WARNING: Removing unreachable block (ram,0x000102e263c4) */
/* WARNING: Removing unreachable block (ram,0x000102e26534) */
/* WARNING: Removing unreachable block (ram,0x000102e263f8) */
/* WARNING: Removing unreachable block (ram,0x000102e26404) */
/* WARNING: Removing unreachable block (ram,0x000102e26408) */
/* WARNING: Removing unreachable block (ram,0x000102e26538) */
/* WARNING: Removing unreachable block (ram,0x000102e2640c) */
/* WARNING: Removing unreachable block (ram,0x000102e26414) */
/* WARNING: Removing unreachable block (ram,0x000102e26418) */
/* WARNING: Removing unreachable block (ram,0x000102e2653c) */
/* WARNING: Removing unreachable block (ram,0x000102e2641c) */
/* WARNING: Removing unreachable block (ram,0x000102e2634c) */
/* WARNING: Removing unreachable block (ram,0x000102e26310) */
/* WARNING: Removing unreachable block (ram,0x000102e26314) */
/* WARNING: Removing unreachable block (ram,0x000102e26318) */
/* WARNING: Removing unreachable block (ram,0x000102e26388) */
/* WARNING: Removing unreachable block (ram,0x000102e2631c) */
/* WARNING: Removing unreachable block (ram,0x000102e262e8) */
/* WARNING: Removing unreachable block (ram,0x000102e263a0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_102e26284(double param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar4 = lVar5;
  func_0x000107c40f64();
  func_0x000107c61180();
  if (lVar4 == 0) {
    puVar2 = *(undefined **)(unaff_x20 + 0x48);
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c6071c();
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e26544);
        (*pcVar1)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e26548);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e2654c);
        (*pcVar1)();
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c47580();
      puVar2 = (undefined *)0x0;
    }
    func_0x000107c61174(puVar2);
    func_0x000107c61174();
    FUN_102e26fd0();
    func_0x000107c4b330(lVar5);
    lVar4 = *(long *)(unaff_x20 + 0x48);
    *(undefined **)(unaff_x20 + 0x48) = puVar3;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 102e2654c; end: 102e265bf;  */

void FUN_102e2654c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x0001007d6c6c(1,0x7465736572,0xe500000000000000,*unaff_x20,&PTR_DAT_1105d8998);
  FUN_102e267b0();
  FUN_102e26ad0(2);
  uVar1 = unaff_x20[9];
  unaff_x20[9] = 0;
  func_0x000107c61170(uVar1);
  uVar1 = unaff_x20[5];
  func_0x000107c54d84(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_reset_11262ba18);
  return;
}



/* Entry: 102e265c0; end: 102e26657;  */

void FUN_102e265c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long lVar4;
  
  uVar3 = *unaff_x20;
  lVar4 = unaff_x20[5];
  lVar1 = lVar4;
  func_0x000107c40f64();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    FUN_102e26fd0();
    FUN_102e267b0();
    FUN_102e26ad0(2);
    func_0x000107c4b330(lVar4);
    uVar2 = unaff_x20[9];
    unaff_x20[9] = 0;
    func_0x000107c61170(uVar2);
    func_0x0001007d6c6c(1,0xd000000000000018,0x800000010f110940,uVar3,&PTR_DAT_1105d8998);
  }
  return;
}



/* Entry: 102e26658; end: 102e2667f;  */

void FUN_102e26658(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 102e26680; end: 102e267af;  */

void FUN_102e26680(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar6 = *unaff_x20;
  lVar2 = unaff_x20[5];
  func_0x000107c40f64();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c602fc(0x3a);
    func_0x000107c5fb78(0xd000000000000038,0x800000010f110a10);
    uVar4 = unaff_x20[2];
    uVar1 = unaff_x20[3];
    func_0x000107c5fb78(uVar4,uVar1);
    func_0x0001007d6c6c(3,0,0xe000000000000000,uVar6,&PTR_DAT_1105d8998);
    func_0x000107c6142c(0xe000000000000000);
    puVar3 = PTR_PTR_1126b0820;
    func_0x000107c610f8(PTR_PTR_1126b0820);
    func_0x000107c453e4();
    func_0x000107c5fadc(uVar4,uVar1);
    puVar5 = puVar3;
    func_0x000107c5e650(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c3ecc8(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 102e267b0; end: 102e26acf;  */

void FUN_102e267b0(double param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined *puVar9;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x28);
  uVar2 = uVar8;
  func_0x000107c40f64();
  func_0x000107c61180();
  if (uVar2 != 0) {
    func_0x000107c61170();
    uVar2 = uVar8;
    func_0x000107c44b80();
    if ((uVar2 & 1) == 0) {
      func_0x000107c6071c();
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e26ac8);
        (*pcVar1)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e26acc);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e26ad0);
        (*pcVar1)();
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c47580();
      puVar9 = *(undefined **)(unaff_x20 + 0x48);
      puVar4 = puVar9;
      if (puVar9 == (undefined *)0x0) {
        puVar4 = puVar3;
        func_0x000107c61174();
      }
      lVar5 = 0x112e02fe0;
      func_0x0001000285a8(0x112e02fe0,&UNK_10da4b3c0);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 0x10;
      *(undefined8 *)(lVar5 + 0x10) = 8;
      *(undefined8 *)(lVar5 + 0x20) = 0x4c45535f534e454c;
      *(undefined8 *)(lVar5 + 0x28) = 0xed00004445544345;
      *(undefined **)(lVar5 + 0x30) = puVar4;
      *(undefined8 *)(lVar5 + 0x38) = 0x45525f594c505041;
      *(undefined8 *)(lVar5 + 0x40) = 0xef44455453455551;
      *(undefined **)(lVar5 + 0x48) = puVar4;
      *(undefined8 *)(lVar5 + 0x50) = 0x454352554f534552;
      *(undefined8 *)(lVar5 + 0x58) = 0xef59444145525f53;
      *(undefined **)(lVar5 + 0x60) = puVar4;
      *(undefined8 *)(lVar5 + 0x68) = 0x415f45564954414e;
      *(undefined8 *)(lVar5 + 0x70) = 0xec000000594c5050;
      *(undefined **)(lVar5 + 0x78) = puVar4;
      *(undefined8 *)(lVar5 + 0x80) = 0xd000000000000011;
      *(undefined8 *)(lVar5 + 0x88) = 0x800000010f1109d0;
      *(undefined **)(lVar5 + 0x90) = puVar4;
      *(undefined8 *)(lVar5 + 0x98) = 0x414f4c5f534e454c;
      *(undefined8 *)(lVar5 + 0xa0) = 0xeb00000000444544;
      *(undefined **)(lVar5 + 0xa8) = puVar4;
      *(undefined8 *)(lVar5 + 0xb0) = 0xd000000000000014;
      *(undefined8 *)(lVar5 + 0xb8) = 0x800000010f1109f0;
      *(undefined **)(lVar5 + 0xc0) = puVar4;
      *(undefined8 *)(lVar5 + 200) = 0x5345445f534e454c;
      *(undefined8 *)(lVar5 + 0xd0) = 0xef44455443454c45;
      *(undefined **)(lVar5 + 0xd8) = puVar3;
      func_0x000107c61174(puVar4);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174(puVar3);
      func_0x000107c61174(puVar4);
      func_0x000107c61174(puVar3);
      func_0x000107c61174(puVar9);
      func_0x000107c61174(puVar4);
      func_0x000107c61174();
      func_0x000107c61174();
      lVar6 = lVar5;
      func_0x000100937a8c(lVar5);
      func_0x000107c61588(lVar5);
      uVar7 = 0x112e02fe8;
      func_0x0001000285a8(0x112e02fe8,&UNK_10d9d55b0);
      func_0x000107c61408((undefined8 *)(lVar5 + 0x20),8,uVar7);
      uVar7 = 0;
      func_0x0001002ed07c(0);
      lVar5 = lVar6;
      func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,uVar7,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar6);
      func_0x000107c5d654(uVar8);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 102e26ad0; end: 102e26fcf;  */

void FUN_102e26ad0(double param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar9 = unaff_x20[10];
  if ((uVar9 != 0) && (*(char *)(unaff_x20 + 0xc) != '\x01')) {
    uVar12 = *unaff_x20;
    dVar16 = (double)unaff_x20[0xb];
    unaff_x20[10] = 0;
    unaff_x20[0xb] = 0;
    *(undefined1 *)(unaff_x20 + 0xc) = 1;
    func_0x0001000d224c(&lStack_80);
    lVar2 = lStack_80;
    if (lStack_80 == 0) {
      func_0x0001007d6c6c(3,0xd00000000000003c,0x800000010f110960,uVar12,&PTR_DAT_1105d8998);
      func_0x000107c61170(uVar9);
    }
    else {
      func_0x000107c6071c();
      puVar3 = PTR_PTR_1126a7968;
      func_0x000107c610f8(PTR_PTR_1126a7968);
      func_0x000107c453e4();
      uVar4 = uVar9;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar13 = param_3;
      if (uVar4 == 0) {
        func_0x000107c5faec();
        uVar13 = param_3;
        func_0x000107c5fadc();
        func_0x000107c6142c(param_3);
      }
      dVar16 = (double)(long)((param_1 - dVar16) * 1000.0) / 1000.0;
      func_0x000107c549e0(puVar3);
      func_0x000107c61170(uVar4);
      lVar10 = unaff_x20[5];
      lVar15 = lVar10;
      func_0x000107c4b3f8();
      func_0x000107c61180();
      if (lVar15 == 0) {
        lVar14 = 0;
        uVar13 = 0xe000000000000000;
      }
      else {
        lVar14 = lVar15;
        func_0x000107c5faec();
        func_0x000107c61170(lVar15);
      }
      uVar11 = uVar13;
      func_0x000107c5fadc(lVar14);
      func_0x000107c6142c(uVar13);
      func_0x000107c55e70(puVar3);
      func_0x000107c61170(lVar14);
      uVar4 = uVar9;
      func_0x000107c4d420(uVar9);
      func_0x000107c61180();
      func_0x000107c55de8(puVar3);
      func_0x000107c61170(uVar4);
      uVar1 = *(undefined1 *)(unaff_x20 + 6);
      func_0x00010341c1ac(uVar1);
      func_0x000107c59558(puVar3);
      func_0x00010341c1c0(uVar1);
      func_0x000107c55e78(puVar3);
      func_0x000107c549dc(puVar3);
      func_0x000107c555b0(puVar3);
      func_0x000107c59d6c(dVar16,puVar3);
      func_0x000107c54750(puVar3);
      puVar5 = PTR_PTR_1126c4718;
      func_0x000107c610f8(PTR_PTR_1126c4718);
      func_0x000107c453e4();
      func_0x000107c4b474();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lVar15 = 0;
        uVar11 = 0xe000000000000000;
      }
      else {
        lVar15 = lVar10;
        func_0x000107c5faec();
        func_0x000107c61170(lVar10);
      }
      uVar13 = uVar11;
      func_0x000107c5fadc(lVar15);
      func_0x000107c6142c(uVar11);
      func_0x000107c55e94(puVar5);
      func_0x000107c61170(lVar15);
      uVar4 = uVar9;
      func_0x000107c5d2d8();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar11 = uVar4;
        func_0x000107c4f8bc();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar11 != 0) {
          uVar4 = uVar11;
          func_0x000107c5faec();
          uVar6 = uVar13;
          func_0x000107c6142c(uVar13);
          uVar4 = uVar4 & 0xffffffffffff;
          if ((uVar13 & 0x2000000000000000) != 0) {
            uVar4 = uVar13 >> 0x38 & 0xf;
          }
          uVar13 = uVar6;
          if (uVar4 != 0) {
            func_0x000107c57b18(puVar5);
            uVar13 = uVar6;
          }
          func_0x000107c61170(uVar11);
        }
      }
      uVar4 = uVar9;
      func_0x000107c5d2d8();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar11 = uVar4;
        func_0x000107c4f8b8();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar11 != 0) {
          uVar4 = uVar11;
          func_0x000107c5faec();
          func_0x000107c6142c(uVar13);
          uVar4 = uVar4 & 0xffffffffffff;
          if ((uVar13 & 0x2000000000000000) != 0) {
            uVar4 = uVar13 >> 0x38 & 0xf;
          }
          if (uVar4 != 0) {
            func_0x000107c57b1c(puVar5);
          }
          func_0x000107c61170(uVar11);
        }
      }
      func_0x000107c55cb0(puVar3);
      func_0x000107c4bfb0(lStack_80);
      lStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x3e);
      uVar7 = 0x800000010f1109a0;
      func_0x000107c5fb78(0xd000000000000022,0x800000010f1109a0);
      uVar4 = uVar9;
      func_0x000107c4b1dc(uVar9);
      func_0x000107c61180();
      uVar13 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      func_0x000107c5fb78(uVar13,uVar7);
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0x536e4f656d697420,0xef203a6e65657263);
      func_0x000107c5fddc(dVar16,&lStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x203a7469786520,0xe700000000000000);
      puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar8);
      uVar7 = uStack_78;
      func_0x0001007d6c6c(1,lStack_80,uStack_78,uVar12,&PTR_DAT_1105d8998);
      func_0x000107c61170(uVar9);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c6142c(uVar7);
    }
  }
  return;
}



/* Entry: 102e26fd0; end: 102e2705b;  */

void FUN_102e26fd0(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d95c8;
  func_0x000107c610f8(PTR_PTR_1126d95c8);
  func_0x000107c453e4();
  lVar2 = unaff_x20 + 0x38;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x40);
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c57b40(puVar1);
  func_0x000107c54d84(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102e2705c; end: 102e270c7;  */

void FUN_102e2705c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_102e27600(unaff_x20 + 0x38);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e270c8; end: 102e27127;  */

undefined1  [16] FUN_102e270c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c4b3f8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}


