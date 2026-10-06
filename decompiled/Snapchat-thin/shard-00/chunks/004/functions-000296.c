/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100664ab0; end: 100664adf; -[CTPStickerContentManagerServices setContentManager:] */

void FUN_100664ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100664ae0; end: 100664b1b;  */

void FUN_100664ae0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100664b1c; end: 100664b23;  */

void FUN_100664b1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100664b24; end: 100664b77;  */

void FUN_100664b24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100664b78; end: 100664b7f;  */

void FUN_100664b78(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100664b80; end: 100664bd3;  */

void FUN_100664b80(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100664bd4; end: 100664be3;  */

void FUN_100664bd4(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022dc2c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar8 = PTR_PTR_1126a8060;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc1590);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc3de0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3e00);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(undefined **)(lVar2 + 0x40) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100664f90);
  (*pcVar1)();
}



/* Entry: 100664be4; end: 100664f8f;  */

void FUN_100664be4(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022dc2c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar7 = PTR_PTR_1126a8060;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc1590);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc3de0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3e00);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar7);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined **)(param_2 + 0x40) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100664f90);
  (*pcVar1)();
}



/* Entry: 100664f90; end: 100664f97;  */

void FUN_100664f90(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100664f98; end: 100664feb;  */

void FUN_100664f98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100664fec; end: 100664ff3;  */

void FUN_100664fec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1001cb180();
  func_0x000107c613fc();
  FUN_100665068(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100664ff4; end: 100665067;  */

void FUN_100664ff4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1001cb180();
  func_0x000107c613fc();
  FUN_100665068(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100665068; end: 1006651bf;  */

void FUN_100665068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8068;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x706f635372657375;
  func_0x000107c5fadc(0x706f635372657375,0xe900000000000065);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1006651c0; end: 10066529b; -[SCCaptionMetricsServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006651c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11277c4fc;
    func_0x000107c61148();
  }
  lVar1 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_108e4ad0c;
  puStack_40 = &UNK_110ac72d0;
  puVar2 = PTR_PTR_1126ae720;
  lStack_38 = lVar1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_58);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126dc290;
  func_0x000107c610f4(PTR_PTR_1126dc290);
  func_0x000107c45ce0();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10066529c; end: 10066530f; -[SCAppGroupPlistStorage initWithFile:] */

undefined1 * FUN_10066529c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702b58;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100665310; end: 1006654bf; -[SCFideliusManager _writeToWatch:appGroupUserDefaults:] */

/* WARNING: Possible PIC construction at 0x0001006653ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006653fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100665494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100665484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100665418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100665428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010066541c) */
/* WARNING: Removing unreachable block (ram,0x000100665488) */
/* WARNING: Removing unreachable block (ram,0x000100665400) */
/* WARNING: Removing unreachable block (ram,0x000100665410) */
/* WARNING: Removing unreachable block (ram,0x000100665490) */
/* WARNING: Removing unreachable block (ram,0x0001006653f0) */
/* WARNING: Removing unreachable block (ram,0x00010066542c) */
/* WARNING: Removing unreachable block (ram,0x000100665434) */

void FUN_100665310(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar3 = param_3;
  if (param_4 == 0) {
    func_0x000107c61170(0);
  }
  else {
    puVar1 = PTR_PTR_1126c05e0;
    func_0x000107c5d998(PTR_PTR_1126c05e0,param_2,param_4);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c4f274();
    func_0x000107c61180();
    func_0x000107c45290(param_3);
    func_0x000107c61180();
    func_0x000107c49cf4(puVar2,param_2,uVar3);
    if ((int)puVar2 != 0) {
      puVar2 = puVar1;
      func_0x000107c4f5e4();
      func_0x000107c61180();
      uVar3 = param_3;
      func_0x000107c4e100(param_3);
      func_0x000107c61180();
      func_0x000107c49cf4(puVar2,param_2,uVar3);
      if ((int)puVar2 != 0) {
        func_0x000107c5dd14(puVar1);
        func_0x000107c5dd14(param_3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1006654c0; end: 1006654fb; +[_TtC29FideliusExtensionIdentityUtil38FideliusExtensionIdentityHelperWrapper userIdentityFrom:] */

void FUN_1006654c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_10066566c(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1006654fc; end: 10066566b;  */

/* WARNING: Removing unreachable block (ram,0x00010066561c) */

void FUN_1006654fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f017db0);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (param_2 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,param_2);
    func_0x000107c615e8(param_2);
  }
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  lStack_88 = lStack_48;
  uStack_90 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_a0);
  }
  else {
    puVar2 = &uStack_70;
    func_0x000107c6147c(puVar2,&uStack_a0,PTR___sypN_11034f1a8 + 8,
                        PTR___s10Foundation4DataVN_110350ae0,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar3 = 0;
      func_0x000107c5eb24();
      func_0x000107c613fc();
      func_0x000107c5eb20();
      uVar1 = uVar3;
      FUN_1006d3a68();
      func_0x000107c5eb1c(&uStack_a0,&UNK_110494ee8,uStack_70,uStack_68,&UNK_110494ee8,uVar1);
      func_0x000107c61574(uVar3);
      func_0x00010006c090(uStack_70,uStack_68);
      goto LAB_100665640;
    }
  }
  uStack_80 = 0;
  uStack_98 = 0xf000000000000000;
  uStack_a0 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
LAB_100665640:
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = lStack_88;
  param_1[2] = uStack_90;
  param_1[4] = uStack_80;
  return;
}



/* Entry: 10066566c; end: 100665777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10066566c(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1006654fc(&uStack_78);
  if (uStack_70 >> 0x3c < 0xf) {
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    uStack_50 = uStack_78;
    uStack_48 = uStack_70;
    lVar3 = 0;
    FUN_1006e36d4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112e37700);
    puVar1[1] = uStack_48;
    *puVar1 = uStack_50;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112e37708);
    puVar1[1] = uStack_60;
    *puVar1 = uStack_68;
    *(undefined8 *)(lVar4 + _DAT_112e37710) = uStack_58;
    FUN_1006e36f4(&uStack_50,auStack_88);
    FUN_1006e36f4(&uStack_40,auStack_88);
    FUN_1006e36f4(&uStack_50,auStack_88);
    FUN_1006e36f4(&uStack_40,auStack_88);
    plVar2 = &lStack_98;
    lStack_98 = lVar4;
    lStack_90 = lVar3;
    func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
    func_0x0001006e3730(&uStack_78);
    func_0x0001006e5814(&uStack_40);
    func_0x0001006e5814(&uStack_50);
  }
  else {
    plVar2 = (long *)0x0;
  }
  return plVar2;
}



/* Entry: 100665778; end: 10066577b; -[SCAppGroupPlistStorage objectForKey:] */

void FUN_100665778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__objectForKey__112576fa0);
  return;
}



/* Entry: 10066577c; end: 10066580f; -[SCAppGroupPlistStorage _objectForKey:] */

void FUN_10066577c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c4f988();
  func_0x000107c61180();
  lVar2 = lVar1;
  FUN_1006bd1e0();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c4d9c0(lVar2,param_2,param_3);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100665810; end: 100665937; -[SCExtensionSharedFile readData] */

void FUN_100665810(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c43414();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    puStack_38 = &UNK_10bc7f570;
    puStack_30 = &UNK_10bc7f580;
    uStack_28 = 0;
    puVar1 = PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
    func_0x000107c4692c();
    func_0x000107c4f06c(param_1);
    func_0x000107c61180();
    func_0x000107c40780(puVar1);
    func_0x000107c61170(param_1);
    uVar2 = puStack_48[5];
    func_0x000107c61174(uVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c60bcc(&uStack_50,8);
    func_0x000107c61170(uStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100665938; end: 1006659ab; -[SCExtensionSharedFile fileExists] */

undefined * FUN_100665938(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c4e430(uVar2);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c43418(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 1006659ac; end: 100665a1f; -[SCCaptionMetricsServices initWithCaptionLogger:] */

undefined1 * FUN_1006659ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126feb68;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100665a20; end: 100665a4b;  */

void FUN_100665a20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100665a4c; end: 100665a8f;  */

long FUN_100665a4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100652020();
  FUN_1006660e8();
  FUN_1006660fc(lVar1 + 0x20);
  return param_1;
}



/* Entry: 100665a90; end: 100665a93; -[SCCaptionDataProviderServicesEntryPoint begin] */

void FUN_100665a90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be396d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initCaptionFetcherProvider_11256bf50);
  return;
}



/* Entry: 100665a94; end: 100665b9f; -[SCCaptionDataProviderServicesEntryPoint _initCaptionFetcherProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100665a94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c4d77c();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277bf28);
  *(undefined **)(param_1 + _DAT_11277bf28) = puVar1;
  func_0x000107c61170(uVar2);
  puVar1 = PTR_PTR_1126dbfc8;
  func_0x000107c610f4(PTR_PTR_1126dbfc8);
  func_0x000107c45cdc();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11277bf2c));
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100665ba0; end: 100665c13; -[SCCaptionDataProviderServices initWithCaptionDataProvider:] */

undefined1 * FUN_100665ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fea28;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100665c14; end: 100665c57;  */

void FUN_100665c14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100665c58; end: 100665c5f;  */

void FUN_100665c58(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100665c60; end: 100665cb3;  */

void FUN_100665c60(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100665cb4; end: 100665cbf;  */

void FUN_100665cb4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1001f8360();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a7fd0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 100665cc0; end: 100665f73;  */

void FUN_100665cc0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1001f8360();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a7fd0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100665f74; end: 1006660e7; -[SCUrlPreviewServiceProvider provide] */

void FUN_100665f74(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_105533330;
  puStack_68 = &UNK_1108960c0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ba748;
  func_0x000107c610f4(PTR_PTR_1126ba748);
  func_0x000107c49174();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1006660e8; end: 1006660fb;  */

void FUN_1006660e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd3f88;
  param_1[1] = &PTR_DAT_110cd3fc8;
  return;
}



/* Entry: 1006660fc; end: 10066612b;  */

void FUN_1006660fc(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x4;
  func_0x000107c60e20();
  *puVar1 = 2;
  *param_1 = puVar1;
  return;
}



/* Entry: 10066612c; end: 1006661a3; -[_TtC18UrlPreviewServices18UrlPreviewServices initWithUrlPreviewProvider:composerUrlPreviewProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10066612c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11301af98) = param_3;
  *(undefined8 *)(param_1 + _DAT_11301afa0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1006661a4; end: 1006661ff;  */

void FUN_1006661a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100666200; end: 10066622f;  */

void FUN_100666200(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001006661e0();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 100666230; end: 10066626b; -[_TtC37CTPInfoStickerViewProviderFactoryImpl37CTPInfoStickerViewProviderFactoryImpl init] */

void FUN_100666230(undefined8 param_1)

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



/* Entry: 10066626c; end: 100666283;  */

void FUN_10066626c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b2e40b4(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 100666284; end: 1006662a3;  */

void FUN_100666284(void)

{
  func_0x00010064b9f4();
  FUN_10066626c();
  return;
}



/* Entry: 1006662a4; end: 1006662ab;  */

undefined8 * FUN_1006662a4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x180);
  *param_2 = uVar2;
  FUN_1006663b8(param_2 + 2,param_1 + 0x188);
  FUN_100600cc8(param_2 + 5,param_1 + 0x1a0);
  FUN_1006666e0(param_2 + 10,param_1 + 0x1c8);
  FUN_100666750(param_2 + 0xd,param_1 + 0x1e0);
  uVar1 = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined1 *)((long)param_2 + 0x84) = *(undefined1 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  return param_2;
}



/* Entry: 1006662ac; end: 100666397;  */

void FUN_1006662ac(long param_1)

{
  uint uVar1;
  undefined1 auStack_140 [8];
  uint uStack_138;
  uint uStack_b8;
  uint uStack_b4;
  
  if ((*(byte *)(*(long *)(param_1 + 0x38) + 0x10) >> 1 & 1) != 0) {
    FUN_1006662a4(&uStack_b8);
    if (uStack_b4 == 0 || uStack_b8 <= uStack_b4) {
      if (uStack_b8 == 0) {
        uStack_b8 = *(uint *)(param_1 + 0x28);
      }
      else {
        *(uint *)(param_1 + 0x28) = uStack_b8;
      }
    }
    else {
      *(uint *)(param_1 + 0x28) = uStack_b4;
      uStack_b8 = uStack_b4;
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
              (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x58),3,uStack_b8);
    FUN_1006662a4(*(undefined8 *)(param_1 + 0x38),auStack_140);
    uVar1 = uStack_138;
    func_0x000100666a98(auStack_140);
    if (1 < uVar1) {
      FUN_1006662a4(*(undefined8 *)(param_1 + 0x38),auStack_140);
      uVar1 = *(uint *)(param_1 + 0x28);
      if (uStack_138 <= *(uint *)(param_1 + 0x28)) {
        uVar1 = uStack_138;
      }
      *(uint *)(param_1 + 0x2c) = uVar1;
      func_0x000100666a98(auStack_140);
    }
    func_0x000100666a98(&uStack_b8);
  }
  return;
}



/* Entry: 100666398; end: 1006663b7;  */

void FUN_100666398(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  return;
}



/* Entry: 1006663b8; end: 1006663e7;  */

void FUN_1006663b8(void)

{
  FUN_100666398();
  FUN_100666494();
  return;
}



/* Entry: 1006663e8; end: 100666483;  */

undefined8 * FUN_1006663e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  FUN_1006663b8(param_1 + 2,param_2 + 2);
  FUN_100600cc8(param_1 + 5,param_2 + 5);
  FUN_1006666e0(param_1 + 10,param_2 + 10);
  FUN_100666750(param_1 + 0xd,param_2 + 0xd);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x84) = *(undefined1 *)((long)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return param_1;
}



/* Entry: 100666484; end: 100666493;  */

void FUN_100666484(void)

{
  return;
}



/* Entry: 100666494; end: 1006664d3;  */

void FUN_100666494(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_100666484();
  while (unaff_x21 != unaff_x19) {
    unaff_x21 = unaff_x20;
    FUN_1006664d4();
    func_0x0001006666b0();
  }
  return;
}



/* Entry: 1006664d4; end: 1006664e7;  */

undefined1  [16] FUN_1006664d4(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  int extraout_w8;
  uint uVar6;
  int extraout_w8_00;
  uint extraout_w9;
  uint extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long *plVar7;
  long *unaff_x21;
  undefined1 auVar8 [16];
  long *plStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  func_0x0001006664dc();
  puVar1 = param_1 + 1;
  if (param_2 == puVar1) {
LAB_10066653c:
    bVar4 = true;
    FUN_100666678();
    if (bVar4) {
LAB_100666568:
      if (*unaff_x21 == 0) goto LAB_100666610;
      param_1 = param_1 + 1;
    }
    else {
      func_0x0001006666b8();
      func_0x0001006666c0(*(undefined4 *)(param_1 + 4));
      uVar6 = extraout_w9;
      if (extraout_w8 != extraout_w10) {
        uVar6 = (uint)(extraout_w8 < extraout_w10);
      }
      if (uVar6 == 1) goto LAB_100666568;
LAB_1006665e4:
      func_0x000100650238();
      param_1 = unaff_x19;
    }
LAB_1006665f8:
    unaff_x21 = (long *)*param_1;
    if (unaff_x21 == (long *)0x0) {
LAB_100666610:
      plVar5 = (long *)0x58;
      func_0x000107c60e20();
      uStack_50 = 0;
      plVar7 = param_3 + 1;
      plVar5[4] = *param_3;
      plStack_60 = plVar5;
      puStack_58 = puVar1;
      func_0x0001006502bc(plVar5 + 5,plVar7);
      func_0x000100666688();
      FUN_1006502e4();
      unaff_x21 = plStack_60;
      plStack_60 = (long *)0x0;
      FUN_100650328(&plStack_60);
      goto LAB_100666658;
    }
  }
  else {
    iVar2 = (int)*param_3;
    iVar3 = (int)unaff_x21[4];
    bVar4 = *(int *)((long)param_3 + 4) < *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar3) {
      bVar4 = iVar2 < iVar3;
    }
    if (bVar4) goto LAB_10066653c;
    bVar4 = *(int *)((long)unaff_x21 + 0x24) < *(int *)((long)param_3 + 4);
    if (iVar2 != iVar3) {
      bVar4 = iVar3 < iVar2;
    }
    if (bVar4) {
      func_0x0001006666b0();
      if (puVar1 != param_1) {
        func_0x0001006666c0((int)*param_3);
        uVar6 = extraout_w9_00;
        if (extraout_w8_00 != extraout_w10_00) {
          uVar6 = (uint)(extraout_w8_00 < extraout_w10_00);
        }
        if (uVar6 == 1) goto LAB_1006665d0;
        goto LAB_1006665e4;
      }
LAB_1006665d0:
      if (unaff_x21[1] != 0) goto LAB_1006665f8;
      goto LAB_100666610;
    }
  }
  plVar7 = (long *)0x0;
LAB_100666658:
  auVar8._8_8_ = plVar7;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 1006664e8; end: 100666677;  */

undefined1  [16] FUN_1006664e8(undefined8 *param_1,undefined8 *param_2,int *param_3,long *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  int extraout_w8;
  uint uVar6;
  int extraout_w8_00;
  uint extraout_w9;
  uint extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long *plVar7;
  long *unaff_x21;
  undefined1 auVar8 [16];
  long *plStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  func_0x0001006664dc();
  puVar1 = param_1 + 1;
  if (param_2 == puVar1) {
LAB_10066653c:
    bVar4 = true;
    FUN_100666678();
    if (bVar4) {
LAB_100666568:
      if (*unaff_x21 == 0) goto LAB_100666610;
      param_1 = param_1 + 1;
    }
    else {
      func_0x0001006666b8();
      func_0x0001006666c0(*(undefined4 *)(param_1 + 4));
      uVar6 = extraout_w9;
      if (extraout_w8 != extraout_w10) {
        uVar6 = (uint)(extraout_w8 < extraout_w10);
      }
      if (uVar6 == 1) goto LAB_100666568;
LAB_1006665e4:
      func_0x000100650238();
      param_1 = unaff_x19;
    }
LAB_1006665f8:
    unaff_x21 = (long *)*param_1;
    if (unaff_x21 == (long *)0x0) {
LAB_100666610:
      plVar5 = (long *)0x58;
      func_0x000107c60e20();
      uStack_50 = 0;
      plVar7 = param_4 + 1;
      plVar5[4] = *param_4;
      plStack_60 = plVar5;
      puStack_58 = puVar1;
      func_0x0001006502bc(plVar5 + 5,plVar7);
      func_0x000100666688();
      FUN_1006502e4();
      unaff_x21 = plStack_60;
      plStack_60 = (long *)0x0;
      FUN_100650328(&plStack_60);
      goto LAB_100666658;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = (int)unaff_x21[4];
    bVar4 = param_3[1] < *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar3) {
      bVar4 = iVar2 < iVar3;
    }
    if (bVar4) goto LAB_10066653c;
    bVar4 = *(int *)((long)unaff_x21 + 0x24) < param_3[1];
    if (iVar2 != iVar3) {
      bVar4 = iVar3 < iVar2;
    }
    if (bVar4) {
      func_0x0001006666b0();
      if (puVar1 != param_1) {
        func_0x0001006666c0(*param_3);
        uVar6 = extraout_w9_00;
        if (extraout_w8_00 != extraout_w10_00) {
          uVar6 = (uint)(extraout_w8_00 < extraout_w10_00);
        }
        if (uVar6 == 1) goto LAB_1006665d0;
        goto LAB_1006665e4;
      }
LAB_1006665d0:
      if (unaff_x21[1] != 0) goto LAB_1006665f8;
      goto LAB_100666610;
    }
  }
  plVar7 = (long *)0x0;
LAB_100666658:
  auVar8._8_8_ = plVar7;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 100666678; end: 1006666df;  */

void FUN_100666678(void)

{
  return;
}



/* Entry: 1006666e0; end: 10066670f;  */

void FUN_1006666e0(void)

{
  FUN_100666398();
  FUN_100666710();
  return;
}



/* Entry: 100666710; end: 10066674f;  */

void FUN_100666710(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_100666484();
  while (unaff_x21 != unaff_x19) {
    unaff_x21 = unaff_x20;
    func_0x000107c2c95c();
    func_0x0001006666b0();
  }
  return;
}



/* Entry: 100666750; end: 10066677f;  */

void FUN_100666750(void)

{
  FUN_100666398();
  FUN_100666780();
  return;
}



/* Entry: 100666780; end: 1006667bf;  */

void FUN_100666780(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_100666484();
  while (unaff_x21 != unaff_x19) {
    unaff_x21 = unaff_x20;
    FUN_1006667c0();
    func_0x0001006666b0();
  }
  return;
}



/* Entry: 1006667c0; end: 1006667c7;  */

undefined1  [16] FUN_1006667c0(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *unaff_x19;
  int *piVar6;
  long *unaff_x21;
  undefined1 auVar7 [16];
  long *plStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  func_0x0001006664dc();
  puVar1 = param_1 + 1;
  bVar4 = true;
  if (param_2 == puVar1) {
LAB_100666808:
    FUN_100666678();
    if ((bVar4) || (func_0x0001006666b8(), *(int *)(param_1 + 4) < *param_3)) {
      if (*unaff_x21 != 0) {
        param_1 = param_1 + 1;
        goto LAB_10066688c;
      }
    }
    else {
LAB_100666878:
      FUN_100650484();
      param_1 = unaff_x19;
LAB_10066688c:
      unaff_x21 = (long *)*param_1;
      if (unaff_x21 != (long *)0x0) goto LAB_100666894;
    }
LAB_1006668a4:
    plVar5 = (long *)0x58;
    func_0x000107c60e20();
    uStack_50 = 0;
    piVar6 = param_3 + 2;
    *(int *)(plVar5 + 4) = *param_3;
    plStack_60 = plVar5;
    puStack_58 = puVar1;
    FUN_1006504d0(plVar5 + 5,piVar6);
    func_0x000100666688();
    func_0x000100650504();
    unaff_x21 = plStack_60;
    plStack_60 = (long *)0x0;
    func_0x00010065052c(&plStack_60);
  }
  else {
    iVar2 = *param_3;
    iVar3 = (int)unaff_x21[4];
    bVar4 = iVar2 == iVar3;
    if (iVar2 < iVar3) goto LAB_100666808;
    if (iVar3 < iVar2) {
      func_0x0001006666b0();
      if ((puVar1 == param_1) || (*param_3 < *(int *)(param_1 + 4))) {
        if (unaff_x21[1] != 0) goto LAB_10066688c;
        goto LAB_1006668a4;
      }
      goto LAB_100666878;
    }
LAB_100666894:
    piVar6 = (int *)0x0;
  }
  auVar7._8_8_ = piVar6;
  auVar7._0_8_ = unaff_x21;
  return auVar7;
}



/* Entry: 1006667c8; end: 10066690b;  */

undefined1  [16]
FUN_1006667c8(undefined8 *param_1,undefined8 *param_2,int *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *unaff_x19;
  undefined4 *puVar6;
  long *unaff_x21;
  undefined1 auVar7 [16];
  long *plStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  func_0x0001006664dc();
  puVar1 = param_1 + 1;
  bVar4 = true;
  if (param_2 == puVar1) {
LAB_100666808:
    FUN_100666678();
    if ((bVar4) || (func_0x0001006666b8(), *(int *)(param_1 + 4) < *param_3)) {
      if (*unaff_x21 != 0) {
        param_1 = param_1 + 1;
        goto LAB_10066688c;
      }
    }
    else {
LAB_100666878:
      FUN_100650484();
      param_1 = unaff_x19;
LAB_10066688c:
      unaff_x21 = (long *)*param_1;
      if (unaff_x21 != (long *)0x0) goto LAB_100666894;
    }
LAB_1006668a4:
    plVar5 = (long *)0x58;
    func_0x000107c60e20();
    uStack_50 = 0;
    puVar6 = param_4 + 2;
    *(undefined4 *)(plVar5 + 4) = *param_4;
    plStack_60 = plVar5;
    puStack_58 = puVar1;
    FUN_1006504d0(plVar5 + 5,puVar6);
    func_0x000100666688();
    func_0x000100650504();
    unaff_x21 = plStack_60;
    plStack_60 = (long *)0x0;
    func_0x00010065052c(&plStack_60);
  }
  else {
    iVar2 = *param_3;
    iVar3 = (int)unaff_x21[4];
    bVar4 = iVar2 == iVar3;
    if (iVar2 < iVar3) goto LAB_100666808;
    if (iVar3 < iVar2) {
      func_0x0001006666b0();
      if ((puVar1 == param_1) || (*param_3 < *(int *)(param_1 + 4))) {
        if (unaff_x21[1] != 0) goto LAB_10066688c;
        goto LAB_1006668a4;
      }
      goto LAB_100666878;
    }
LAB_100666894:
    puVar6 = (undefined4 *)0x0;
  }
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = unaff_x21;
  return auVar7;
}



/* Entry: 10066690c; end: 100666917;  */

void FUN_10066690c(void)

{
  return;
}



/* Entry: 100666918; end: 1006669e7;  */

void FUN_100666918(long param_1)

{
  char in_NG;
  char in_OV;
  long extraout_x8;
  code *extraout_x8_00;
  
  FUN_10066690c();
  if (in_NG == in_OV) {
    FUN_1006669e8();
    func_0x0001006669fc();
    func_0x000100666a08();
    if (extraout_x8 == 0) {
      func_0x000107c35870();
      func_0x000107c358a8();
      func_0x000107c358a0();
      func_0x000107c35898();
      func_0x000107c35880();
      func_0x000107c358a4();
      func_0x000107c3587c();
      func_0x000107c3588c();
      func_0x000107c35894();
      func_0x000107c358c4();
      func_0x000107c35884(*(undefined8 *)(param_1 + 0x48));
      (*extraout_x8_00)();
      func_0x000107c358dc();
    }
  }
  return;
}



/* Entry: 1006669e8; end: 100666a37;  */

void FUN_1006669e8(void)

{
  long unaff_x23;
  
                    /* WARNING: Could not recover jumptable at 0x0001006669f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x23 + 0x18))((undefined8 *)(unaff_x23 + 0x18));
  return;
}



/* Entry: 100666a38; end: 100666ad3;  */

void FUN_100666a38(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  if (param_2 != 0) {
    func_0x000100666a28();
    FUN_100666a38();
    FUN_100666a38();
    func_0x000100650590(unaff_x19 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100666ad4; end: 100666adb;  */

void FUN_100666ad4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100666adc; end: 100666b93;  */

void FUN_100666adc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000100666a28();
    FUN_100666adc();
    FUN_100666adc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100666b94; end: 100666bb7;  */

undefined8 FUN_100666b94(undefined8 param_1)

{
  func_0x000100650c64();
  return param_1;
}



/* Entry: 100666bb8; end: 100666bdf;  */

void FUN_100666bb8(undefined8 *param_1)

{
  FUN_100652020();
  *param_1 = &PTR_DAT_110cd4008;
  param_1[1] = &PTR_DAT_110cd4048;
  return;
}



/* Entry: 100666be0; end: 100666be7;  */

void FUN_100666be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100666be8; end: 100666c0b;  */

void FUN_100666be8(undefined8 *param_1)

{
  func_0x0001006549f4();
  *param_1 = &PTR_DAT_110cd4110;
  param_1[1] = &PTR_DAT_110cd4158;
  return;
}



/* Entry: 100666c0c; end: 100667553; -[CTPItemViewServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100666c0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined **ppuVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  puVar1 = PTR_PTR_1126bb1d0;
  func_0x000107c610f4();
  lVar38 = (long)_DAT_112725d14;
  lVar2 = param_1 + lVar38;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c45db0(puVar1,param_2,lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar4 = PTR_PTR_1126bb1d8;
  func_0x000107c610fc();
  puVar5 = PTR_PTR_1126ba808;
  func_0x000107c610f4();
  lVar39 = (long)_DAT_112725d18;
  lVar2 = param_1 + lVar39;
  func_0x000107c61148(lVar2);
  lVar37 = lVar2;
  func_0x000107c3e550();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_112725d1c;
  func_0x000107c61148(lVar3);
  lVar36 = lVar3;
  func_0x000107c3ea58();
  func_0x000107c61180();
  func_0x000107c459a4(puVar5,param_2,lVar37,0,0xd,0,lVar36);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar37);
  func_0x000107c61170(lVar2);
  func_0x000107c57730(puVar4,param_2,puVar5,2);
  puVar6 = PTR_PTR_1126bb1e0;
  func_0x000107c610f4();
  func_0x000107c46e18();
  func_0x000107c57730(puVar4,param_2,puVar6,10);
  puVar7 = PTR_PTR_1126bb1e8;
  func_0x000107c610f4();
  func_0x000107c46e18();
  func_0x000107c57730(puVar4,param_2,puVar7,1);
  puVar8 = PTR_PTR_1126bb1e8;
  func_0x000107c610f4();
  func_0x000107c46e18();
  func_0x000107c57730(puVar4,param_2,puVar8,6);
  lVar2 = param_1 + _DAT_112725d20;
  func_0x000107c61148();
  lVar9 = lVar2;
  func_0x000107c40c94();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar39 = param_1 + lVar39;
  func_0x000107c61148();
  lVar10 = lVar39;
  func_0x000107c45070();
  func_0x000107c61180();
  func_0x000107c61170(lVar39);
  lVar2 = param_1 + _DAT_112725d24;
  func_0x000107c61148();
  lVar11 = lVar2;
  func_0x000107c411d0();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + _DAT_112725d28;
  func_0x000107c61148();
  lVar12 = lVar2;
  func_0x000107c5bd7c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar38 = param_1 + lVar38;
  func_0x000107c61148();
  lVar13 = lVar38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar38);
  lVar38 = (long)_DAT_112725d2c;
  lVar2 = param_1 + lVar38;
  func_0x000107c61148();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_105595950;
  puStack_88 = &UNK_1108995c8;
  puVar14 = PTR_PTR_1126ae720;
  lStack_80 = lVar2;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_a0);
  func_0x000107c61180();
  lVar36 = (long)_DAT_112725d30;
  lVar3 = param_1 + lVar36;
  func_0x000107c61148();
  lVar15 = lVar3;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = param_1 + lVar36;
  func_0x000107c61148();
  lVar16 = lVar3;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = param_1 + _DAT_112725d34;
  func_0x000107c61148();
  lVar17 = lVar3;
  func_0x000107c40480();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar37 = (long)_DAT_112725d38;
  lVar3 = param_1 + lVar37;
  func_0x000107c61148();
  lVar18 = lVar3;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = param_1 + _DAT_112725d3c;
  func_0x000107c61148();
  lVar39 = lVar3;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar19 = lVar39;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar3);
  lVar39 = (long)_DAT_112725d40;
  lVar3 = param_1 + lVar39;
  func_0x000107c61148();
  lVar20 = lVar3;
  func_0x000107c4e6e8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar39 = param_1 + lVar39;
  func_0x000107c61148();
  lVar21 = lVar39;
  func_0x000107c407b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar39);
  lVar38 = param_1 + lVar38;
  func_0x000107c61148();
  lVar22 = lVar38;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar38);
  lVar3 = param_1 + _DAT_112725d44;
  func_0x000107c61148();
  lVar23 = lVar3;
  func_0x000107c3dfac();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = param_1 + _DAT_112725d48;
  func_0x000107c61148();
  lVar24 = lVar3;
  func_0x000107c42294();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = param_1 + _DAT_112725d4c;
  func_0x000107c61148();
  lVar25 = lVar3;
  func_0x000107c5d7f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = param_1 + _DAT_112725d50;
  func_0x000107c61148();
  lVar26 = lVar3;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = param_1 + _DAT_112725d54;
  func_0x000107c61148();
  lVar38 = lVar3;
  func_0x000107c5cd6c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar37 = param_1 + lVar37;
  func_0x000107c61148();
  lVar27 = lVar37;
  func_0x000107c5b4dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar37);
  lVar3 = param_1 + _DAT_112725d58;
  func_0x000107c61148();
  lVar28 = lVar3;
  func_0x000107c3f548();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = param_1 + _DAT_112725d5c;
  func_0x000107c61148();
  lVar29 = lVar3;
  func_0x000107c5c800();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar36 = param_1 + lVar36;
  func_0x000107c61148();
  lVar30 = lVar36;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c61170(lVar36);
  lVar39 = (long)_DAT_112725d60;
  lVar3 = param_1 + lVar39;
  func_0x000107c61148();
  lVar31 = lVar3;
  func_0x000107c411b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar39 = param_1 + lVar39;
  func_0x000107c61148();
  lVar36 = lVar39;
  func_0x000107c3fbc0();
  func_0x000107c61180();
  func_0x000107c61170(lVar39);
  lVar3 = param_1 + _DAT_112725d64;
  func_0x000107c61148();
  param_1 = param_1 + _DAT_112725d68;
  func_0x000107c61148();
  lVar37 = param_1;
  func_0x000107c4cb88();
  func_0x000107c61180();
  lVar39 = lVar37;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c61170(lVar37);
  func_0x000107c61170(param_1);
  puVar35 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  puStack_188 = &UNK_1055959dc;
  puStack_180 = &UNK_110899618;
  ppuVar32 = &puStack_198;
  lStack_178 = lVar10;
  lStack_170 = lVar11;
  lStack_168 = lVar12;
  lStack_160 = lVar13;
  puStack_158 = puVar14;
  lStack_150 = lVar30;
  lStack_148 = lVar17;
  lStack_140 = lVar31;
  lStack_138 = lVar36;
  lStack_130 = lVar15;
  lStack_128 = lVar16;
  lStack_120 = lVar18;
  lStack_118 = lVar19;
  lStack_110 = lVar20;
  lStack_108 = lVar21;
  lStack_100 = lVar22;
  lStack_f8 = lVar23;
  lStack_f0 = lVar24;
  lStack_e8 = lVar25;
  lStack_e0 = lVar26;
  lStack_d8 = lVar38;
  lStack_d0 = lVar29;
  lStack_c8 = lVar9;
  lStack_c0 = lVar39;
  lStack_b8 = lVar3;
  lStack_b0 = lVar27;
  lStack_a8 = lVar28;
  func_0x000107c61184();
  puVar33 = PTR_PTR_1126ae720;
  puStack_1d8 = puVar35;
  uStack_1d0 = 0xc2000000;
  puStack_1c8 = &UNK_105595d18;
  puStack_1c0 = &UNK_110899648;
  func_0x000107c61174();
  ppuStack_1a0 = ppuVar32;
  func_0x000107c61174(puVar1);
  puStack_1b8 = puVar1;
  func_0x000107c61174(puVar4);
  puStack_1b0 = puVar4;
  lStack_1a8 = lVar9;
  func_0x000107c3e4fc(puVar33,param_2,&puStack_1d8);
  func_0x000107c61180();
  puVar34 = PTR_PTR_1126ae720;
  puStack_218 = puVar35;
  uStack_210 = 0xc2000000;
  puStack_208 = &UNK_105595d8c;
  puStack_200 = &UNK_110899648;
  puStack_1f8 = puVar1;
  puStack_1f0 = puVar4;
  lStack_1e8 = lVar9;
  ppuStack_1e0 = ppuVar32;
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(ppuVar32);
  func_0x000107c3e4fc(puVar34,param_2,&puStack_218);
  func_0x000107c61180();
  puVar35 = PTR_PTR_1126bb250;
  func_0x000107c610f4(PTR_PTR_1126bb250);
  func_0x000107c47008();
  func_0x000107c61170(puVar34);
  func_0x000107c61170(puStack_1f0);
  func_0x000107c61170(puStack_1f8);
  func_0x000107c61170(ppuStack_1e0);
  func_0x000107c61170(puVar33);
  func_0x000107c61170(puStack_1b0);
  func_0x000107c61170(puStack_1b8);
  func_0x000107c61170(ppuStack_1a0);
  func_0x000107c61170(ppuVar32);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar38);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar35);
  return;
}



/* Entry: 100667554; end: 1006677df; -[CTPUniversalProtobufItemTransformer initWithCircumstanceEngine:] */

undefined1 * FUN_100667554(undefined1 *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *unaff_x20;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  if (param_1 != (undefined1 *)0x0) {
    unaff_x20 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110ade768);
    func_0x000107c61180();
    puVar1 = PTR_PTR_1126bae10;
    func_0x000107c610f4();
    puVar2 = PTR_PTR_1126bae18;
    puStack_100 = puVar1;
    func_0x000107c610f4();
    func_0x000107c4763c();
    puVar1 = PTR_PTR_1126badf8;
    puStack_e0 = puVar2;
    puStack_d8 = puVar2;
    func_0x000107c610fc();
    puVar2 = PTR_PTR_1126bae20;
    puStack_e8 = puVar1;
    puStack_d0 = puVar1;
    func_0x000107c610fc();
    puVar1 = PTR_PTR_1126bae00;
    puStack_f0 = puVar2;
    puStack_c8 = puVar2;
    func_0x000107c610f4();
    func_0x000107c4763c();
    puVar2 = PTR_PTR_1126bae28;
    puStack_f8 = puVar1;
    puStack_c0 = puVar1;
    func_0x000107c610f4();
    func_0x000107c4763c();
    puVar1 = PTR_PTR_1126bae30;
    puStack_108 = puVar2;
    puStack_b8 = puVar2;
    func_0x000107c610fc();
    puVar2 = PTR_PTR_1126bae38;
    puStack_110 = puVar1;
    puStack_b0 = puVar1;
    func_0x000107c610fc();
    puVar1 = PTR_PTR_1126bae50;
    puStack_a8 = puVar2;
    func_0x000107c610fc();
    puVar3 = PTR_PTR_1126bae58;
    puStack_a0 = puVar1;
    func_0x000107c610fc();
    puVar4 = PTR_PTR_1126bae60;
    puStack_98 = puVar3;
    func_0x000107c610f4();
    func_0x000107c4763c();
    puVar5 = PTR_PTR_1126bae68;
    puStack_90 = puVar4;
    func_0x000107c610f4();
    func_0x000107c4763c();
    puVar6 = PTR_PTR_1126bae78;
    puStack_88 = puVar5;
    func_0x000107c610f4();
    func_0x000107c4763c();
    puVar7 = PTR_PTR_1126bae80;
    puStack_80 = puVar6;
    func_0x000107c610fc();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar7;
    func_0x000107c3e17c();
    func_0x000107c61180();
    puVar9 = puStack_100;
    param_3 = puVar8;
    func_0x000107c48e74();
    uVar11 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar9;
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puStack_110);
    func_0x000107c61170(puStack_108);
    func_0x000107c61170(puStack_f8);
    func_0x000107c61170(puStack_f0);
    func_0x000107c61170(puStack_e8);
    func_0x000107c61170(puStack_e0);
    puVar1 = unaff_x20;
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  func_0x000107c60e78();
  ppuVar10 = &puStack_140;
  pcStack_118 = FUN_1006677e0;
  puStack_130 = unaff_x20;
  puStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000107c61174(param_3);
  puStack_138 = PTR_PTR_112700960;
  puStack_140 = puVar1;
  func_0x000107c61154(&puStack_140,PTR_s_init_1125d9248);
  if (ppuVar10 != (undefined **)0x0) {
    func_0x000107c61174(param_3);
    uVar11 = *(undefined8 *)((long)ppuVar10 + 8);
    *(undefined **)((long)ppuVar10 + 8) = param_3;
    func_0x000107c61170(uVar11);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)ppuVar10;
}



/* Entry: 1006677e0; end: 100667853; -[CTPProtobufEntityTransformerSnapSticker initWithMediaContentConverter:] */

undefined1 * FUN_1006677e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700960;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100667854; end: 1006678c7; -[CTPProtobufEntityTransformerCameo initWithMediaContentConverter:] */

undefined1 * FUN_100667854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700938;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006678c8; end: 1006679bb;  */

void FUN_1006678c8(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  int extraout_w10;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 **ppuStack_30;
  long *plStack_28;
  
  if ((bRam000000011383a6c0 & 1) == 0) {
    iVar1 = 0x1383a6c0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100667a30(0x11383a698);
      func_0x000107c60e4c(0x11383a6c0);
    }
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lStack_40 = param_2[1];
    lStack_48 = lVar2;
    if (lStack_40 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    puStack_38 = &UNK_10f742822;
    FUN_10011a768(0x11383a6c8);
    if (!(bool)in_ZR) {
      plStack_28 = &lStack_48;
      ppuStack_30 = &plStack_28;
      func_0x00010060f3e0(0x11383a6c8);
    }
    FUN_1000df75c(&lStack_48);
  }
  FUN_100600cc8(param_1,0x11383a698);
  return;
}



/* Entry: 1006679bc; end: 100667a2f; -[CTPProtobufEntityTransformerCustomSticker initWithMediaContentConverter:] */

undefined1 * FUN_1006679bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112700940;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100667a30; end: 100667a43;  */

void FUN_100667a30(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  return;
}



/* Entry: 100667a44; end: 100667bb3;  */

void FUN_100667a44(void)

{
  int *piVar1;
  undefined ***pppuVar2;
  code *extraout_x9;
  long lVar3;
  undefined4 auStack_118 [6];
  undefined8 uStack_100;
  int iStack_f8;
  char cStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [72];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  
  func_0x00010011a790();
  ppuStack_68 = &PTR_DAT_110cfa5a8;
  uStack_60 = 0;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_10002b838(auStack_c8,&UNK_10f742822);
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  FUN_10064bd98(auStack_b0,auStack_c8);
  FUN_100100fec(&uStack_e0);
  FUN_10064a0c4();
  func_0x00010064bdb8();
  (*extraout_x9)(&uStack_100);
  if (cStack_e8 == '\x01') {
    pppuVar2 = &ppuStack_68;
    FUN_10006369c(pppuVar2,uStack_100,iStack_f8 - (int)uStack_100);
    FUN_10002b838(auStack_118,&UNK_10f742822);
    func_0x000107c60ca0(auStack_118);
    if ((int)pppuVar2 != 0) {
      piVar1 = piStack_50;
      for (lVar3 = (long)(int)uStack_58 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
        if (*piVar1 - 1U < 5) {
          auStack_118[0] = *(undefined4 *)(&UNK_10e573238 + (ulong)(*piVar1 - 1U) * 4);
          func_0x000100650164(0x11383a698,auStack_118);
        }
        piVar1 = piVar1 + 1;
      }
    }
  }
  FUN_1002a2294(&uStack_100);
  FUN_100114924(auStack_b0);
  FUN_100667bd4(&ppuStack_68);
  return;
}



/* Entry: 100667bb4; end: 100667bd3;  */

void FUN_100667bb4(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 100667bd4; end: 100667c07;  */

long FUN_100667bd4(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_10006805c(param_1 + 0x10);
  return param_1;
}



/* Entry: 100667c08; end: 100667c1b;  */

void FUN_100667c08(void)

{
  return;
}



/* Entry: 100667c1c; end: 100667cfb;  */

void FUN_100667c1c(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x000100667c10();
  func_0x000100667cac();
  *unaff_x19 = 0;
  FUN_1006316b4();
  lVar2 = unaff_x19[2];
  lVar4 = unaff_x19[1];
  unaff_x20[2] = lVar2;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = 0;
  lVar4 = unaff_x19[3];
  unaff_x20[3] = lVar4;
  *(undefined4 *)(unaff_x20 + 4) = *(undefined4 *)(unaff_x19 + 4);
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(lVar2 + 8);
    uVar5 = unaff_x20[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar3 = uVar5 - 1 & uVar3;
    }
    else if (uVar5 <= uVar3) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar3 / uVar5;
      }
      uVar3 = uVar3 - uVar1 * uVar5;
    }
    *(long **)(*unaff_x20 + uVar3 * 8) = unaff_x20 + 2;
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 100667cfc; end: 100667d1b;  */

void FUN_100667cfc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_100651f94();
  }
  return;
}



/* Entry: 100667d1c; end: 100667d63;  */

void FUN_100667d1c(long param_1)

{
  func_0x000100651f88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100667d64; end: 100667de7;  */

undefined1 FUN_100667d64(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w10;
  long lStack_40;
  
  func_0x00010060f338();
  if (lStack_40 != 0) {
    FUN_10060f3c4();
    if (extraout_x8 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    FUN_10011a768(0x11383a7a0);
    if (!(bool)in_ZR) {
      func_0x00010060f3d0();
      func_0x00010060f3e0(0x11383a7a0,param_2,FUN_100667de8);
    }
    func_0x00010011b648();
  }
  uVar1 = uRam000000011383a798;
  func_0x00010060f454();
  return uVar1;
}



/* Entry: 100667de8; end: 100667e3b;  */

void FUN_100667de8(uint param_1)

{
  func_0x00010011a790();
  FUN_10011a800();
  func_0x00010011a808();
  FUN_10011a89c();
  func_0x00010011a8a4();
  FUN_10060f43c();
  func_0x00010060f44c();
  if ((param_1 >> 8 & 1) != 0) {
    uRam000000011383a798 = (undefined1)param_1;
  }
  func_0x00010011b634();
  return;
}



/* Entry: 100667e3c; end: 100667e67;  */

undefined8 FUN_100667e3c(undefined8 param_1)

{
  func_0x000100650c64();
  FUN_100667e68(param_1);
  return param_1;
}



/* Entry: 100667e68; end: 100667edb;  */

long FUN_100667e68(long param_1)

{
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x000107c30458();
  }
  func_0x000107c60e14();
  FUN_10006805c(param_1 + 0x78);
  FUN_10006805c(param_1 + 0x60);
  FUN_10006805c(param_1 + 0x48);
  FUN_10006805c(param_1 + 0x30);
  FUN_10006805c(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 100667edc; end: 100667f07;  */

undefined8 FUN_100667edc(undefined8 param_1)

{
  func_0x000100650c64();
  FUN_100667f08(param_1);
  return param_1;
}



/* Entry: 100667f08; end: 100667f47;  */

long FUN_100667f08(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x000107c30480();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_100667f48();
  }
  func_0x000107c60e14();
  FUN_100667f6c(param_1 + 0x48);
  FUN_100668010(param_1 + 0x30);
  FUN_100668038(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 100667f48; end: 100667f6b;  */

undefined8 FUN_100667f48(undefined8 param_1)

{
  func_0x000100650c64();
  return param_1;
}



/* Entry: 100667f6c; end: 100667f93;  */

void FUN_100667f6c(void)

{
  long extraout_x8;
  
  FUN_100650cd8();
  if (extraout_x8 != 0) {
    FUN_100667fc8();
  }
  return;
}



/* Entry: 100667f94; end: 100667fc7;  */

long FUN_100667f94(long param_1)

{
  FUN_100667f6c(param_1 + 0x38);
  FUN_100668010(param_1 + 0x20);
  FUN_100668038(param_1 + 8);
  return param_1;
}



/* Entry: 100667fc8; end: 100667fcf;  */

void FUN_100667fc8(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong uVar3;
  
  if (unaff_x19[2] == 0) {
    puVar2 = unaff_x19;
    func_0x00010006818c();
    puVar1 = unaff_x19;
    if ((*unaff_x19 & 1) != 0) {
      puVar1 = (ulong *)(*unaff_x19 + 7);
    }
    for (uVar3 = (ulong)((uint)puVar2 & ((int)(uint)puVar2 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      if ((long *)*puVar1 != (long *)0x0) {
        (**(code **)(*(long *)*puVar1 + 8))();
      }
      puVar1 = puVar1 + 1;
    }
    if ((*unaff_x19 & 1) != 0) {
      func_0x000107c60e14(*unaff_x19 - 1);
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 100667fd0; end: 100667ffb;  */

long FUN_100667fd0(long param_1)

{
  func_0x000100650c64();
  FUN_10006805c(param_1 + 0x10);
  return param_1;
}



/* Entry: 100667ffc; end: 10066800f;  */

void FUN_100667ffc(void)

{
  FUN_100667fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100668010; end: 100668037;  */

void FUN_100668010(void)

{
  long extraout_x8;
  
  FUN_100650cd8();
  if (extraout_x8 != 0) {
    FUN_100667fc8();
  }
  return;
}



/* Entry: 100668038; end: 10066805f;  */

void FUN_100668038(void)

{
  long extraout_x8;
  
  FUN_100650cd8();
  if (extraout_x8 != 0) {
    FUN_100667fc8();
  }
  return;
}



/* Entry: 100668060; end: 100668097;  */

long FUN_100668060(long param_1)

{
  func_0x000100650c64();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1000681a0();
  }
  return param_1;
}



/* Entry: 100668098; end: 1006680ab;  */

void FUN_100668098(void)

{
  FUN_100668060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1006680ac; end: 1006680df;  */

long FUN_1006680ac(long param_1)

{
  func_0x000100650c64();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_100666b94();
  }
  func_0x000107c60e14();
  return param_1;
}


