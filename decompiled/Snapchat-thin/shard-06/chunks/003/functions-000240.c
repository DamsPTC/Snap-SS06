/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047e09c4; end: 1047e09c7; -[SCAdClickPositionInfo copyWithZone:] */

void FUN_1047e09c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047e09c8; end: 1047e0af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e09c8(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fc38);
  uVar1 = 0x495449534f505f58;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495449534f505f58,0xea00000000004e4f);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fc40);
  uVar1 = 0x495449534f505f59;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495449534f505f59,0xea00000000004e4f);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fc48);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20ea10);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fc50);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20ea30);
  func_0x00010bf92e80(uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047e0af8; end: 1047e0b47; -[SCAdClickPositionInfo encodeWithCoder:] */

void FUN_1047e0af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047e09c8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047e0b48; end: 1047e0b87;  */

undefined8 FUN_1047e0b48(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047e0c60(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047e0b88; end: 1047e0bc3; -[SCAdClickPositionInfo initWithCoder:] */

undefined8 FUN_1047e0b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047e0c60();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047e0bc4; end: 1047e0bdf; -[SCAdClickPositionInfo description] */

void FUN_1047e0bc4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047e0be0; end: 1047e0c5b; -[SCAdClickPositionInfo init] */

void FUN_1047e0be0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdClickPositionInfoWrapper.swift"
             ,0x2c,2,0x59,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047e0c28);
  (*pcVar1)();
}



/* Entry: 1047e0c5c; end: 1047e0c5f; -[SCAdClickPositionInfo .cxx_destruct] */

void FUN_1047e0c5c(void)

{
  return;
}



/* Entry: 1047e0c60; end: 1047e0d7f;  */

void FUN_1047e0c60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0x495449534f505f58;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495449534f505f58,0xea00000000004e4f);
  func_0x00010bf66da0(param_2);
  uVar4 = param_1;
  _objc_release(uVar3);
  uVar1 = 0x495449534f505f59;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495449534f505f59,0xea00000000004e4f);
  func_0x00010bf66da0(param_2);
  uVar3 = uVar4;
  _objc_release(uVar1);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20ea10);
  func_0x00010bf66da0(param_2);
  uVar1 = uVar3;
  _objc_release(uVar2);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20ea30);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c063690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,uVar4,uVar3,uVar1);
  return;
}



/* Entry: 1047e0d80; end: 1047e0d9f;  */

void FUN_1047e0d80(void)

{
  _objc_opt_self(&PTR_PTR_1129d61d0);
  return;
}



/* Entry: 1047e0da0; end: 1047e0da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e0da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fc38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc48) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc50) = param_4;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e0da4; end: 1047e0dd3;  */

void FUN_1047e0da4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e14a0(param_1);
  return;
}



/* Entry: 1047e0dd4; end: 1047e1037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e0dd4(void)

{
  long unaff_x20;
  long lVar1;
  double dVar2;
  undefined1 auStack_138 [72];
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  __ss6HasherVABycfC(auStack_a8);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308fc80));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308fc88));
  lVar1 = *(long *)(unaff_x20 + _DAT_11308fc90);
  __ss6HasherVABycfC(auStack_f0);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc38) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc38);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc40) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc40);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc48) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc48);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc50) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc50);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_11308fc98);
  __ss6HasherVABycfC(auStack_138);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc38) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc38);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc40) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc40);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc48) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc48);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc50) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc50);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308fca0) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_11308fca0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308fca8) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_11308fca8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  lVar1 = *(long *)(unaff_x20 + _DAT_11308fcb0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_a8);
    _objc_release(lVar1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308fcb8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047e1038; end: 1047e124b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047e1038(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  long lStack_a8;
  undefined8 auStack_a0 [3];
  long lStack_88;
  
  lVar15 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_a0);
  if (lStack_88 == 0) {
    func_0x00010006e7f4(auStack_a0);
  }
  else {
    plVar9 = &lStack_a8;
    _swift_dynamicCast(plVar9,auStack_a0,PTR___sypN_11034f1a8 + 8,lVar15,6);
    if (((ulong)plVar9 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11308fc80);
      iVar2 = *(int *)(lStack_a8 + _DAT_11308fc80);
      iVar3 = *(int *)(unaff_x20 + _DAT_11308fc88);
      iVar4 = *(int *)(lStack_a8 + _DAT_11308fc88);
      uVar13 = *(undefined8 *)(lStack_a8 + _DAT_11308fc90);
      uVar10 = 0;
      FUN_1047e0d80();
      auStack_a0[0] = uVar13;
      lStack_88 = uVar10;
      _objc_retain(uVar13);
      uVar7 = 0;
      FUN_1047e0630();
      func_0x00010006e7f4(auStack_a0);
      auStack_a0[0] = *(undefined8 *)(lStack_a8 + _DAT_11308fc98);
      lStack_88 = uVar10;
      _objc_retain();
      uVar8 = 0;
      FUN_1047e0630();
      func_0x00010006e7f4(auStack_a0);
      dVar16 = *(double *)(unaff_x20 + _DAT_11308fca0);
      dVar17 = *(double *)(lStack_a8 + _DAT_11308fca0);
      dVar18 = *(double *)(unaff_x20 + _DAT_11308fca8);
      dVar19 = *(double *)(lStack_a8 + _DAT_11308fca8);
      lVar14 = *(long *)(unaff_x20 + _DAT_11308fcb0);
      lVar15 = *(long *)(lStack_a8 + _DAT_11308fcb0);
      uVar12 = (uint)(lVar14 == 0 && lVar15 == 0);
      if ((lVar14 != 0) && (lVar15 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar15);
        _objc_retain(lVar14);
        lVar11 = lVar14;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar12 = (uint)lVar11;
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      lVar15 = *(long *)(unaff_x20 + _DAT_11308fcb8);
      lVar14 = *(long *)(lStack_a8 + _DAT_11308fcb8);
      _objc_release(lStack_a8);
      bVar5 = false;
      if ((((uint)(iVar1 == iVar2 && iVar3 == iVar4) & uVar7 & uVar8) == 1) &&
         (bVar5 = false, !NAN(dVar16) && !NAN(dVar17))) {
        bVar5 = dVar16 == dVar17;
      }
      bVar6 = false;
      if ((bVar5) && (bVar6 = false, !NAN(dVar18) && !NAN(dVar19))) {
        bVar6 = dVar18 == dVar19;
      }
      if (bVar6) {
        return uVar12 & lVar15 == lVar14;
      }
    }
  }
  return 0;
}



/* Entry: 1047e124c; end: 1047e125b; -[SCAdClickSwipeInfo swipeSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e124c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fc80);
}



/* Entry: 1047e125c; end: 1047e126b; -[SCAdClickSwipeInfo swipeFailureReason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e125c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fc88);
}



/* Entry: 1047e126c; end: 1047e127b; -[SCAdClickSwipeInfo startSwipePositionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e126c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fc90));
  return;
}



/* Entry: 1047e127c; end: 1047e128b; -[SCAdClickSwipeInfo endSwipePositionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e127c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fc98));
  return;
}



/* Entry: 1047e128c; end: 1047e129b; -[SCAdClickSwipeInfo startSwipeTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e128c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fca0);
}



/* Entry: 1047e129c; end: 1047e12ab; -[SCAdClickSwipeInfo endSwipeTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e129c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fca8);
}



/* Entry: 1047e12ac; end: 1047e12bb; -[SCAdClickSwipeInfo hintDisplayTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e12ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fcb0));
  return;
}



/* Entry: 1047e12bc; end: 1047e12cb; -[SCAdClickSwipeInfo peekAttachmentMaxDistancePt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e12bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fcb8);
}



/* Entry: 1047e12cc; end: 1047e13a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e12cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fc80) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc88) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc90) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc98) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11308fca0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308fca8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fcb0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11308fcb8) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e13a8; end: 1047e149f; -[SCAdClickSwipeInfo initWithSwipeSource:swipeFailureReason:startSwipePositionInfo:endSwipePositionInfo:startSwipeTimestampMs:endSwipeTimestampMs:hintDisplayTimestampMs:peekAttachmentMaxDistancePt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e13a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_3;
  _swift_getObjectType();
  *(undefined8 *)(param_3 + _DAT_11308fc80) = param_5;
  *(undefined8 *)(param_3 + _DAT_11308fc88) = param_6;
  *(undefined8 *)(param_3 + _DAT_11308fc90) = param_7;
  *(undefined8 *)(param_3 + _DAT_11308fc98) = param_8;
  *(undefined8 *)(param_3 + _DAT_11308fca0) = param_1;
  *(undefined8 *)(param_3 + _DAT_11308fca8) = param_2;
  *(undefined8 *)(param_3 + _DAT_11308fcb0) = param_9;
  *(undefined8 *)(param_3 + _DAT_11308fcb8) = param_10;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = param_3;
  lStack_68 = lVar2;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_msgSendSuper2(&lStack_70,puVar1);
  return;
}



/* Entry: 1047e14a0; end: 1047e1653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e14a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  _swift_getObjectType();
  uVar5 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11308fc80) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308fc88) = uVar5;
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = param_1[4];
  uVar8 = param_1[5];
  lVar1 = 0;
  FUN_1047e0d80();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11308fc38) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_11308fc40) = uVar6;
  *(undefined8 *)(lVar2 + _DAT_11308fc48) = uVar7;
  *(undefined8 *)(lVar2 + _DAT_11308fc50) = uVar8;
  plVar3 = &lStack_90;
  lStack_90 = lVar2;
  lStack_88 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308fc90) = plVar3;
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  uVar7 = param_1[8];
  uVar8 = param_1[9];
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11308fc38) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_11308fc40) = uVar6;
  *(undefined8 *)(lVar2 + _DAT_11308fc48) = uVar7;
  *(undefined8 *)(lVar2 + _DAT_11308fc50) = uVar8;
  plVar3 = &lStack_a0;
  lStack_a0 = lVar2;
  lStack_98 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  puVar4 = (undefined *)0x0;
  *(long **)(unaff_x20 + _DAT_11308fc98) = plVar3;
  uVar5 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_11308fca0) = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_11308fca8) = uVar5;
  if (*(char *)(param_1 + 0xd) != '\x01') {
    uVar5 = param_1[0xc];
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar5);
  }
  *(undefined **)(unaff_x20 + _DAT_11308fcb0) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_11308fcb8) = param_1[0xe];
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e1654; end: 1047e1687; -[SCAdClickSwipeInfo hash] */

undefined8 FUN_1047e1654(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047e0dd4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047e1688; end: 1047e1707; -[SCAdClickSwipeInfo isEqual:] */

uint FUN_1047e1688(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047e1038(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047e1708; end: 1047e170b; -[SCAdClickSwipeInfo copyWithZone:] */

void FUN_1047e1708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047e170c; end: 1047e1953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e170c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0x4f535f4550495753;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f535f4550495753,0xec00000045435255);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20ea80);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20eaa0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20eac0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fca0);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20eae0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fca8);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20eb00);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20eb20);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f20eb40);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047e1954; end: 1047e19a3; -[SCAdClickSwipeInfo encodeWithCoder:] */

void FUN_1047e1954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047e170c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047e19a4; end: 1047e19d3;  */

void FUN_1047e19a4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e19d4(param_1);
  return;
}



/* Entry: 1047e19d4; end: 1047e1deb;  */

undefined8 FUN_1047e19d4(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 unaff_x20;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0x4f535f4550495753;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f535f4550495753,0xec00000045435255);
  uVar3 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar2);
  if (uVar3 < 3) {
    uVar2 = 0xd000000000000014;
    uVar9 = 0xf20ea80;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014);
    uVar3 = param_1;
    func_0x00010bf66f40(param_1);
    _objc_release(uVar2);
    FUN_1046af348(uVar3);
    if ((uVar9 & 0xff) != 1) {
      uVar2 = 0xd000000000000019;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20eaa0);
      uVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (uVar3 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar3);
        _swift_unknownObjectRelease(uVar3);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
LAB_1047e1cf0:
        _objc_release(param_1);
        func_0x00010006e7f4(&uStack_90);
        goto LAB_1047e1b9c;
      }
      uVar2 = 0;
      FUN_1047e0d80(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar4 = &uStack_b8;
      _swift_dynamicCast(puVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar2,6);
      uVar3 = uStack_b8;
      if (((ulong)puVar4 & 1) != 0) {
        uVar5 = 0xd000000000000017;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20eac0)
        ;
        uVar6 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if (uVar6 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar6);
          _swift_unknownObjectRelease(uVar6);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          _objc_release(param_1);
          param_1 = uVar3;
          goto LAB_1047e1cf0;
        }
        puVar4 = &uStack_b8;
        uVar5 = uStack_a0;
        _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar2,6);
        uVar6 = uStack_b8;
        if (((ulong)puVar4 & 1) != 0) {
          uVar7 = 0xd000000000000018;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000018,0x800000010f20eae0);
          func_0x00010bf66da0(param_1);
          uVar2 = uVar5;
          _objc_release(uVar7);
          uVar7 = 0xd000000000000016;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000016,0x800000010f20eb00);
          func_0x00010bf66da0(param_1);
          _objc_release(uVar7);
          uVar7 = 0xd000000000000019;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000019,0x800000010f20eb20);
          uVar8 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          if (uVar8 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,uVar8);
            _swift_unknownObjectRelease(uVar8);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010006e7f4(&uStack_90);
            uVar8 = 0;
          }
          else {
            uVar7 = 0;
            func_0x0001002ed07c(0);
            puVar4 = &uStack_b8;
            _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar7,6);
            uVar8 = uStack_b8;
            if ((int)puVar4 == 0) {
              uVar8 = 0;
            }
          }
          uVar7 = 0xd00000000000001f;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd00000000000001f,0x800000010f20eb40);
          func_0x00010bf66f40(param_1);
          _objc_release(uVar7);
          func_0x00010c04fc40(uVar5,uVar2);
          _objc_release(param_1);
          _objc_release(uVar6);
          _objc_release(uVar8);
          _objc_release(uVar3);
          return unaff_x20;
        }
        _objc_release(param_1);
        param_1 = uVar3;
      }
    }
  }
  _objc_release(param_1);
LAB_1047e1b9c:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047e1dec; end: 1047e1e13; -[SCAdClickSwipeInfo initWithCoder:] */

void FUN_1047e1dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047e19d4();
  return;
}



/* Entry: 1047e1e14; end: 1047e1e57; -[SCAdClickSwipeInfo description] */

void FUN_1047e1e14(undefined8 param_1)

{
  undefined1 auStack_98 [120];
  
  _objc_retain();
  FUN_1047e1f1c(auStack_98);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047e1e58; end: 1047e1ed3; -[SCAdClickSwipeInfo init] */

void FUN_1047e1e58(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdClickSwipeInfoWrapper.swift",
             0x29,2,0x8a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047e1ea0);
  (*pcVar1)();
}



/* Entry: 1047e1ed4; end: 1047e1f1b; -[SCAdClickSwipeInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e1ed4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fc90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fc98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308fcb0));
  return;
}



/* Entry: 1047e1f1c; end: 1047e205f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e1f1c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar4 = *(undefined8 *)(param_3 + _DAT_11308fc80);
  uVar5 = *(undefined8 *)(param_3 + _DAT_11308fc88);
  lVar2 = *(long *)(param_3 + _DAT_11308fc90);
  uVar9 = *(undefined8 *)(lVar2 + _DAT_11308fc38);
  uVar10 = *(undefined8 *)(lVar2 + _DAT_11308fc40);
  uVar11 = *(undefined8 *)(lVar2 + _DAT_11308fc48);
  uVar12 = *(undefined8 *)(lVar2 + _DAT_11308fc50);
  lVar2 = *(long *)(param_3 + _DAT_11308fc98);
  uVar13 = *(undefined8 *)(lVar2 + _DAT_11308fc38);
  uVar14 = *(undefined8 *)(lVar2 + _DAT_11308fc40);
  uVar6 = *(undefined8 *)(lVar2 + _DAT_11308fc48);
  uVar8 = *(undefined8 *)(lVar2 + _DAT_11308fc50);
  uVar15 = *(undefined8 *)(param_3 + _DAT_11308fca0);
  uVar7 = *(undefined8 *)(param_3 + _DAT_11308fca8);
  bVar1 = *(long *)(param_3 + _DAT_11308fcb0) == 0;
  if (bVar1) {
    param_2 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  uVar3 = *(undefined8 *)(param_3 + _DAT_11308fcb8);
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  param_1[4] = uVar11;
  param_1[5] = uVar12;
  param_1[6] = uVar13;
  param_1[7] = uVar14;
  param_1[8] = uVar6;
  param_1[9] = uVar8;
  param_1[10] = uVar15;
  param_1[0xb] = uVar7;
  param_1[0xc] = param_2;
  *(bool *)(param_1 + 0xd) = bVar1;
  param_1[0xe] = uVar3;
  return;
}



/* Entry: 1047e2060; end: 1047e207f;  */

void FUN_1047e2060(void)

{
  _objc_opt_self(&PTR_PTR_1129d62b8);
  return;
}



/* Entry: 1047e2080; end: 1047e216f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e2080(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  long lStack_60;
  long lStack_58;
  
  _objc_allocWithZone();
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  lVar1 = 0;
  FUN_1047e0d80();
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11308fc38) = uVar4;
  *(undefined8 *)(lVar2 + _DAT_11308fc40) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_11308fc48) = uVar6;
  *(undefined8 *)(lVar2 + _DAT_11308fc50) = uVar7;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11308fce8) = plVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11308fcf0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11308fcf8) = param_1[5];
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e2170; end: 1047e23a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e2170(void)

{
  long unaff_x20;
  long lVar1;
  double dVar2;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  lVar1 = *(long *)(unaff_x20 + _DAT_11308fce8);
  __ss6HasherVABycfC(auStack_d0);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc38) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc38);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc40) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc40);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc48) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc48);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  dVar2 = 0.0;
  if (*(double *)(lVar1 + _DAT_11308fc50) != 0.0) {
    dVar2 = *(double *)(lVar1 + _DAT_11308fc50);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308fcf0) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_11308fcf0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308fcf8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047e23a8; end: 1047e23b7; -[SCAdClickTapInfo tapPositionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e23a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fce8));
  return;
}



/* Entry: 1047e23b8; end: 1047e23c7; -[SCAdClickTapInfo tapTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e23b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fcf0);
}



/* Entry: 1047e23c8; end: 1047e23d7; -[SCAdClickTapInfo tapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e23c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fcf8);
}



/* Entry: 1047e23d8; end: 1047e2453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e23d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fce8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fcf0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308fcf8) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e2454; end: 1047e24db; -[SCAdClickTapInfo initWithTapPositionInfo:tapTimestampMs:tapSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e2454(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_11308fce8) = param_4;
  *(undefined8 *)(param_2 + _DAT_11308fcf0) = param_1;
  *(undefined8 *)(param_2 + _DAT_11308fcf8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1047e24dc; end: 1047e24fb; -[SCAdClickTapInfo hash] */

void FUN_1047e24dc(void)

{
  FUN_1047e2170();
  return;
}



/* Entry: 1047e24fc; end: 1047e257b; -[SCAdClickTapInfo isEqual:] */

uint FUN_1047e24fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001047e22a0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047e257c; end: 1047e257f; -[SCAdClickTapInfo copyWithZone:] */

void FUN_1047e257c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047e2580; end: 1047e2677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e2580(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20eb90);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fcf0);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20ebb0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0x52554f535f504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52554f535f504154,0xea00000000004543);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047e2678; end: 1047e26c7; -[SCAdClickTapInfo encodeWithCoder:] */

void FUN_1047e2678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047e2580(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047e26c8; end: 1047e26f7;  */

void FUN_1047e26c8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e26f8(param_1);
  return;
}



/* Entry: 1047e26f8; end: 1047e28d3;  */

undefined8 FUN_1047e26f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20eb90);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    uVar3 = 0;
    uVar1 = uStack_80;
    FUN_1047e0d80(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar3 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20ebb0);
      func_0x00010bf66da0(param_1);
      _objc_release(uVar3);
      uVar3 = 0x52554f535f504154;
      uVar5 = 0x4543;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52554f535f504154);
      lVar2 = param_1;
      func_0x00010bf66f40(param_1);
      _objc_release(uVar3);
      func_0x0001046afabc(lVar2);
      if ((uVar5 & 0xff) != 1) {
        func_0x00010c050740(uVar1);
        _objc_release(param_1);
        _objc_release(uStack_98);
        return unaff_x20;
      }
      _objc_release(uStack_98);
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047e28d4; end: 1047e28fb; -[SCAdClickTapInfo initWithCoder:] */

void FUN_1047e28d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047e26f8();
  return;
}



/* Entry: 1047e28fc; end: 1047e2917; -[SCAdClickTapInfo description] */

void FUN_1047e28fc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047e2918; end: 1047e2993; -[SCAdClickTapInfo init] */

void FUN_1047e2918(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdClickTapInfoWrapper.swift",0x27
             ,2,0x53,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047e2960);
  (*pcVar1)();
}



/* Entry: 1047e2994; end: 1047e29a3; -[SCAdClickTapInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e2994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308fce8));
  return;
}



/* Entry: 1047e29a4; end: 1047e29c3;  */

void FUN_1047e29a4(void)

{
  _objc_opt_self(&PTR_PTR_1129d63c0);
  return;
}



/* Entry: 1047e29c4; end: 1047e2a1f; -[SCAdMediaCollection headline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e29c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308fd28))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308fd28);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e2a20; end: 1047e2a2f; -[SCAdMediaCollection defaultAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e2a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fd30));
  return;
}



/* Entry: 1047e2a30; end: 1047e2a7f; -[SCAdMediaCollection items] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e2a30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308fd38);
  FUN_1047e57bc(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047e2a80; end: 1047e2a8f; -[SCAdMediaCollection defaultAttachmentPositionIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e2a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fd40));
  return;
}



/* Entry: 1047e2a90; end: 1047e2b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e2a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fd28);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11308fd30) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308fd38) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308fd40) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e2b24; end: 1047e2c03; -[SCAdMediaCollection initWithHeadline:defaultAttachment:items:defaultAttachmentPositionIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e2b24(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  uVar4 = 0;
  FUN_1047e57bc(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar4);
  plVar1 = (long *)(param_1 + _DAT_11308fd28);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11308fd30) = param_4;
  *(undefined8 *)(param_1 + _DAT_11308fd38) = param_5;
  *(undefined8 *)(param_1 + _DAT_11308fd40) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 1047e2c04; end: 1047e2c33;  */

void FUN_1047e2c04(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e2c34(param_1);
  return;
}



/* Entry: 1047e2c34; end: 1047e32a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047e2c34(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puStack_138;
  long alStack_130 [8];
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  lVar5 = 0;
  alStack_130[0] = lVar7;
  FUN_104723a94();
  lStack_c0 = *(long *)(lVar5 + -8);
  alStack_130[3] = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(&stack0xfffffffffffffec0 + lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = 0;
  lStack_b8 = (long)puVar17 - extraout_x12;
  FUN_10472f4dc();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar19 = ((long)puVar17 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar19 - extraout_x12_00;
  lVar7 = 0x112db3e90;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar13 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_01;
  uVar14 = param_1[1];
  uVar20 = *param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11308fd28);
  puVar2[1] = param_1[1];
  *puVar2 = uVar20;
  lVar7 = 0;
  func_0x00010471853c();
  alStack_130[1] = lVar7;
  func_0x0001047e4618((long)param_1 + (long)*(int *)(lVar7 + 0x14),lVar13,0x112db3e90,&UNK_10d95e3e0
                     );
  pcStack_d8 = *(code **)(lVar18 + 0x30);
  lVar7 = lVar13;
  lStack_c8 = lVar6;
  (*pcStack_d8)(lVar13,1,lVar6);
  if ((int)lVar7 == 1) {
    _swift_bridgeObjectRetain(uVar14);
    lVar7 = 0;
  }
  else {
    func_0x0001047e4660(lVar13,lVar16,FUN_10472f4dc);
    func_0x0001047e4598(lVar16,lVar19,FUN_10472f4dc);
    FUN_1047e6de0(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar14);
    lVar7 = lVar19;
    FUN_1047e5f10();
    func_0x0001047e45dc(lVar16,FUN_10472f4dc);
  }
  *(long *)(unaff_x20 + _DAT_11308fd30) = lVar7;
  lVar7 = *(long *)((long)param_1 + (long)*(int *)(alStack_130[1] + 0x18));
  lVar6 = *(long *)(lVar7 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 != 0) {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_138 = param_1;
    alStack_130[2] = lVar16;
    func_0x0001046c735c(0,lVar6,0);
    lVar7 = lVar7 + ((ulong)*(byte *)(lStack_c0 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lStack_c0 + 0x50) ^ 0xffffffffffffffff));
    lStack_e0 = *(long *)(lStack_c0 + 0x48);
    lVar13 = alStack_130[3];
    lStack_c0 = lVar19;
    do {
      puVar11 = puStack_70;
      lVar18 = lStack_b8;
      lVar16 = lStack_c0;
      func_0x0001047e4598(lVar7,lStack_b8,FUN_104723a94);
      func_0x0001047e4598(lVar18,puVar17,FUN_104723a94);
      lVar19 = 0;
      FUN_1047e57bc();
      lVar18 = lVar19;
      _objc_allocWithZone();
      plVar8 = (long *)0x0;
      lVar15 = *(long *)((long)alStack_130 + lVar5 + 0x20);
      if (lVar15 != 1) {
        lStack_e8 = lVar19;
        alStack_130[4] = *puVar17;
        alStack_130[5] = *(undefined8 *)((long)&puStack_138 + lVar5);
        lVar13 = *(long *)((long)alStack_130 + lVar5);
        alStack_130[6] = *(undefined8 *)((long)alStack_130 + lVar5 + 8);
        uVar14 = *(undefined8 *)((long)alStack_130 + lVar5 + 0x10);
        uStack_f0 = *(undefined8 *)((long)alStack_130 + lVar5 + 0x18);
        lVar19 = 0;
        FUN_1047fc144();
        alStack_130[7] = lVar19;
        _objc_allocWithZone();
        plVar8 = (long *)0x0;
        if (lVar13 != 1) {
          lVar9 = 0;
          FUN_1047fcc14();
          lVar16 = lVar9;
          _objc_allocWithZone();
          *(long *)(lVar16 + _DAT_113090438) = alStack_130[4];
          puVar2 = (undefined8 *)(lVar16 + _DAT_113090440);
          *puVar2 = alStack_130[5];
          puVar2[1] = lVar13;
          puVar2 = (undefined8 *)(lVar16 + _DAT_113090448);
          *puVar2 = alStack_130[6];
          puVar2[1] = uVar14;
          puVar4 = PTR_s_init_1125d9248;
          lStack_b0 = lVar16;
          lStack_a8 = lVar9;
          _swift_bridgeObjectRetain(lVar13);
          _swift_bridgeObjectRetain(uVar14);
          lVar16 = lStack_c0;
          plVar8 = &lStack_b0;
          _objc_msgSendSuper2(plVar8,puVar4);
        }
        *(long **)(lVar19 + _DAT_113090400) = plVar8;
        puVar2 = (undefined8 *)(lVar19 + _DAT_113090408);
        *puVar2 = uStack_f0;
        puVar2[1] = lVar15;
        puVar4 = PTR_s_init_1125d9248;
        lStack_98 = alStack_130[7];
        lStack_a0 = lVar19;
        _swift_bridgeObjectRetain(lVar15);
        plVar8 = &lStack_a0;
        _objc_msgSendSuper2(plVar8,puVar4);
        lVar19 = lStack_e8;
        lVar13 = alStack_130[3];
      }
      lVar9 = lStack_d0;
      *(long **)(lVar18 + _DAT_11308fd78) = plVar8;
      func_0x0001047e4618((long)puVar17 + (long)*(int *)(lVar13 + 0x14),lStack_d0,0x112db3e90,
                          &UNK_10d95e3e0);
      lVar10 = lVar9;
      (*pcStack_d8)(lVar9,1,lStack_c8);
      lVar15 = alStack_130[2];
      if ((int)lVar10 == 1) {
        lVar16 = 0;
      }
      else {
        lStack_e8 = lVar6;
        func_0x0001047e4660(lVar9,alStack_130[2],FUN_10472f4dc);
        func_0x0001047e4598(lVar15,lVar16,FUN_10472f4dc);
        FUN_1047e6de0(0);
        _objc_allocWithZone();
        FUN_1047e5f10();
        lVar6 = lStack_e8;
        func_0x0001047e45dc(lVar15,FUN_10472f4dc);
      }
      *(long *)(lVar18 + _DAT_11308fd80) = lVar16;
      puVar2 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar13 + 0x18));
      uVar14 = puVar2[1];
      uVar20 = *puVar2;
      puVar3 = (undefined8 *)(lVar18 + _DAT_11308fd88);
      puVar3[1] = puVar2[1];
      *puVar3 = uVar20;
      *(undefined8 *)(lVar18 + _DAT_11308fd90) =
           *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar13 + 0x1c));
      puVar4 = PTR_s_init_1125d9248;
      lStack_80 = lVar18;
      lStack_78 = lVar19;
      _swift_bridgeObjectRetain(uVar14);
      plVar8 = &lStack_80;
      _objc_msgSendSuper2(plVar8,puVar4);
      func_0x0001047e45dc(lStack_b8,FUN_104723a94);
      func_0x0001047e45dc(puVar17,FUN_104723a94);
      uVar1 = *(ulong *)(puVar11 + 0x10);
      puStack_70 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        func_0x0001046c735c(1 < *(ulong *)(puVar11 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
      *(long **)(puStack_70 + uVar1 * 8 + 0x20) = plVar8;
      lVar7 = lVar7 + lStack_e0;
      lVar6 = lVar6 + -1;
      param_1 = puStack_138;
      puVar11 = puStack_70;
    } while (lVar6 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_11308fd38) = puVar11;
  if (*(char *)((long)param_1 + (long)*(int *)(alStack_130[1] + 0x1c) + 8) == '\x01') {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308fd40) = puVar11;
  lStack_88 = alStack_130[0];
  puVar12 = auStack_90;
  _objc_msgSendSuper2(puVar12,PTR_s_init_1125d9248);
  func_0x0001047e45dc(param_1,0x10471853c);
  return puVar12;
}



/* Entry: 1047e32a8; end: 1047e32db; -[SCAdMediaCollection hash] */

undefined8 FUN_1047e32a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047e32dc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047e32dc; end: 1047e3423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e32dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fd28))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fd28);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308fd30) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047e580c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fd38);
  uVar2 = 0;
  FUN_1047e57bc(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308fd40);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047e3424; end: 1047e365b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047e3424(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lStack_78;
  long alStack_70 [4];
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x0001047e4618(param_1,alStack_70,0x112d387f8,&UNK_10d902650);
  if (alStack_70[3] == 0) {
    func_0x00010006e7f4(alStack_70);
  }
  else {
    plVar1 = &lStack_78;
    _swift_dynamicCast(plVar1,alStack_70,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar4 = ((long *)(unaff_x20 + _DAT_11308fd28))[1];
      lVar5 = ((long *)(lStack_78 + _DAT_11308fd28))[1];
      uVar8 = (uint)(lVar4 == 0 && lVar5 == 0);
      if (lVar4 != 0 && lVar5 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_11308fd28);
        if (lVar2 == *(long *)(lStack_78 + _DAT_11308fd28) && lVar4 == lVar5) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar2;
        }
      }
      if (*(long *)(unaff_x20 + _DAT_11308fd30) == 0) {
        uVar9 = (uint)(*(long *)(lStack_78 + _DAT_11308fd30) == 0);
      }
      else {
        lVar4 = *(long *)(lStack_78 + _DAT_11308fd30);
        if (lVar4 == 0) {
          lVar5 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar5 = 0;
          FUN_1047e6de0();
        }
        alStack_70[0] = lVar4;
        alStack_70[3] = lVar5;
        _objc_retain(lVar4);
        uVar9 = 0;
        FUN_1047e5958();
        func_0x00010006e7f4(alStack_70);
      }
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11308fd38);
      uVar10 = *(undefined8 *)(lStack_78 + _DAT_11308fd38);
      _swift_bridgeObjectRetain(uVar10);
      func_0x00010470d350(uVar7,uVar10);
      _swift_bridgeObjectRelease(uVar10);
      lVar5 = *(long *)(unaff_x20 + _DAT_11308fd40);
      lVar4 = *(long *)(lStack_78 + _DAT_11308fd40);
      if (lVar5 == 0) {
        lVar2 = lVar4;
        _objc_retain(lVar4);
        _objc_release(lStack_78);
        if (lVar4 != 0) {
          uVar6 = 0;
          goto LAB_1047e3614;
        }
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
        lVar2 = lStack_78;
        if (lVar4 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar4);
          _objc_retain(lVar5);
          lVar3 = lVar5;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar6 = (uint)lVar3;
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
LAB_1047e3614:
        _objc_release(lVar2);
      }
      if ((uVar8 & uVar9 & 1) != 0) {
        uVar6 = (uint)uVar7 & uVar6;
        goto LAB_1047e363c;
      }
    }
  }
  uVar6 = 0;
LAB_1047e363c:
  return uVar6 & 1;
}



/* Entry: 1047e365c; end: 1047e36db; -[SCAdMediaCollection isEqual:] */

uint FUN_1047e365c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047e3424(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047e36dc; end: 1047e36df; -[SCAdMediaCollection copyWithZone:] */

void FUN_1047e36dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047e36e0; end: 1047e3853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e36e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11308fd28))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fd28);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454e494c44414548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454e494c44414548,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20ec00);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308fd38);
  uVar1 = 0;
  FUN_1047e57bc(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,uVar1);
  uVar1 = 0x534d455449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534d455449,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20ec20);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047e3854; end: 1047e38a3; -[SCAdMediaCollection encodeWithCoder:] */

void FUN_1047e3854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047e36e0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047e38a4; end: 1047e38d3;  */

void FUN_1047e38a4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e38d4(param_1);
  return;
}



/* Entry: 1047e38d4; end: 1047e3cbf;  */

undefined8 FUN_1047e38d4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)&uStack_b0;
  iVar3 = (int)&uStack_b0;
  uVar10 = 0;
  iVar4 = (int)&uStack_b0;
  uVar5 = 0x454e494c44414548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454e494c44414548,0xe800000000000000);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar6 = 0;
    uVar5 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_a8;
    uVar5 = uStack_b0;
    if (iVar2 == 0) {
      uVar5 = 0;
      lVar6 = 0;
    }
  }
  uVar7 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20ec00);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    FUN_1047e6de0(0);
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar7,6);
    uVar7 = uStack_b0;
    if (iVar3 == 0) {
      uVar7 = 0;
    }
  }
  uVar9 = 0x534d455449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x534d455449,0xe500000000000000);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    _objc_release(uVar7);
    _swift_bridgeObjectRelease(lVar6);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar9 = 0x11308fd48;
    func_0x0001000285a8(0x11308fd48,&UNK_10dd35c80);
    _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar9,6);
    uVar9 = uStack_b0;
    if ((uVar10 & 1) != 0) {
      uVar11 = 0xd000000000000021;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20ec20);
      lVar8 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      if (lVar8 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
        _swift_unknownObjectRelease(lVar8);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        func_0x00010006e7f4(&uStack_80);
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        func_0x0001002ed07c(0);
        _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar11,6);
        uVar11 = uStack_b0;
        if (iVar4 == 0) {
          uVar11 = 0;
        }
      }
      if (lVar6 == 0) {
        uVar5 = 0;
      }
      else {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar6);
        _swift_bridgeObjectRelease(lVar6);
      }
      uVar12 = 0;
      FUN_1047e57bc(0);
      uVar13 = uVar9;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar9,uVar12);
      _swift_bridgeObjectRelease(uVar9);
      func_0x00010c01a320();
      _objc_release(uVar5);
      _objc_release(uVar13);
      _objc_release(param_1);
      _objc_release(uVar11);
      _objc_release(uVar7);
      return unaff_x20;
    }
    _objc_release(param_1);
    _objc_release(uVar7);
    _swift_bridgeObjectRelease(lVar6);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047e3cc0; end: 1047e3ce7; -[SCAdMediaCollection initWithCoder:] */

void FUN_1047e3cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047e38d4();
  return;
}



/* Entry: 1047e3ce8; end: 1047e3d73; -[SCAdMediaCollection description] */

void FUN_1047e3ce8(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x00010471853c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1047e3d74(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001047e45dc(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      0x10471853c);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047e3d74; end: 1047e44bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e3d74(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x8;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  long lStack_800;
  undefined8 *puStack_7f8;
  long lStack_7f0;
  ulong uStack_7e8;
  undefined8 *puStack_7e0;
  long lStack_7d8;
  ulong uStack_7d0;
  undefined8 uStack_7c8;
  ulong uStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  ulong uStack_7a8;
  undefined *puStack_7a0;
  ulong uStack_798;
  undefined1 auStack_790 [608];
  undefined *puStack_530;
  undefined1 auStack_528 [608];
  undefined1 auStack_2c8 [616];
  
  lVar6 = 0;
  FUN_104723a94();
  lStack_7b8 = *(long *)(lVar6 + -8);
  lStack_7d8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_7b8 + 0x40));
  puVar19 = (undefined8 *)((long)&lStack_800 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)(param_2 + _DAT_11308fd28);
  uVar11 = puVar1[1];
  uVar12 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar12;
  lVar6 = _DAT_11308fd30;
  lVar7 = 0;
  func_0x00010471853c();
  lVar15 = (long)*(int *)(lVar7 + 0x14);
  lVar6 = *(long *)(param_2 + lVar6);
  lStack_800 = lVar7;
  puStack_7f8 = param_1;
  lStack_7f0 = param_2;
  if (lVar6 == 0) {
    lVar6 = 0;
    FUN_10472f4dc();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)param_1 + lVar15,1,1,lVar6);
    _swift_bridgeObjectRetain(uVar11);
  }
  else {
    _swift_bridgeObjectRetain(uVar11);
    _objc_retain(lVar6);
    FUN_1047e5bc0((long)param_1 + lVar15);
    lVar6 = 0;
    FUN_10472f4dc();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)param_1 + lVar15,0,1,lVar6);
  }
  lVar6 = lStack_7d8;
  uVar20 = *(ulong *)(lStack_7f0 + _DAT_11308fd38);
  if (uVar20 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar20 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar20) {
      uVar16 = uVar20;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    puStack_530 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001046c7390(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1047e44c0);
      (*pcVar10)();
    }
    uVar17 = 0;
    uStack_7c0 = uVar20 & 0xc000000000000001;
    puVar18 = puStack_530;
    uStack_7e8 = uVar20;
    puStack_7e0 = puVar19;
    uStack_7d0 = uVar16;
    do {
      if (uStack_7c0 == 0) {
        uVar8 = *(ulong *)(uVar20 + uVar17 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar8 = uVar17;
        func_0x000103b9ce88(uVar17,uVar20);
      }
      lVar7 = *(long *)(uVar8 + _DAT_11308fd78);
      if (lVar7 == 0) {
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[6] = 1;
      }
      else {
        lVar15 = *(long *)(lVar7 + _DAT_113090400);
        if (lVar15 == 0) {
          *puVar19 = 0;
          puVar19[1] = 0;
          puVar19[3] = 0;
          puVar19[4] = 0;
          puVar19[2] = 1;
        }
        else {
          *puVar19 = *(undefined8 *)(lVar15 + _DAT_113090438);
          puVar1 = (undefined8 *)(lVar15 + _DAT_113090440);
          uVar12 = puVar1[1];
          uVar11 = *puVar1;
          puVar19[2] = puVar1[1];
          puVar19[1] = uVar11;
          puVar1 = (undefined8 *)(lVar15 + _DAT_113090448);
          uVar11 = puVar1[1];
          uVar22 = *puVar1;
          puVar19[4] = puVar1[1];
          puVar19[3] = uVar22;
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(uVar12);
        }
        puVar1 = (undefined8 *)(lVar7 + _DAT_113090408);
        uVar11 = puVar1[1];
        uVar12 = *puVar1;
        puVar19[6] = puVar1[1];
        puVar19[5] = uVar12;
        _swift_bridgeObjectRetain(uVar11);
      }
      lVar7 = (long)puVar19 + (long)*(int *)(lVar6 + 0x14);
      lVar15 = *(long *)(uVar8 + _DAT_11308fd80);
      if (lVar15 == 0) {
        lVar15 = 0;
        FUN_10472f4dc();
        (**(code **)(*(long *)(lVar15 + -8) + 0x38))(lVar7,1,1,lVar15);
      }
      else {
        lVar13 = *(long *)(lVar15 + _DAT_11308fdc0);
        uStack_7a8 = uVar8;
        uStack_798 = uVar17;
        if (lVar13 == 0) {
          lVar13 = 0;
          FUN_104739264();
          (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar7,1,1,lVar13);
          _objc_retain(lVar15);
        }
        else {
          _objc_retain(lVar15);
          _objc_retain(lVar13);
          func_0x0001047e75ac(lVar7);
          lVar13 = 0;
          FUN_104739264();
          (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar7,0,1,lVar13);
        }
        lVar13 = _DAT_11308fdc8;
        lVar9 = 0;
        FUN_10472f4dc();
        lVar14 = (long)*(int *)(lVar9 + 0x14);
        if (*(long *)(lVar15 + lVar13) == 0) {
          func_0x000101551a34(auStack_790);
          _memcpy(lVar7 + lVar14,auStack_790,0x260);
        }
        else {
          _objc_retain();
          FUN_104833ab4(auStack_528);
          _memcpy(lVar7 + lVar14,auStack_528,0x260);
          func_0x000101553e8c(lVar7 + lVar14);
        }
        iVar4 = *(int *)(lVar9 + 0x18);
        bVar3 = *(long *)(lVar15 + _DAT_11308fdd0) == 0;
        puStack_7a0 = puVar18;
        if (!bVar3) {
          _objc_retain();
          FUN_1047dc600(lVar7 + iVar4);
        }
        lVar13 = 0;
        FUN_10470fbcc();
        (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar7 + iVar4,bVar3,1,lVar13);
        lVar13 = _DAT_113090f88;
        puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar9 + 0x1c));
        lVar14 = *(long *)(lVar15 + _DAT_11308fdd8);
        if (lVar14 == 0) {
          lVar13 = 0;
          FUN_10475cf44();
          pcVar10 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
          uVar11 = 1;
        }
        else {
          puVar19 = (undefined8 *)(lVar14 + _DAT_113090f78);
          uStack_7c8 = puVar19[1];
          uVar11 = *puVar19;
          puVar1[1] = puVar19[1];
          *puVar1 = uVar11;
          uVar11 = *(undefined8 *)(lVar14 + _DAT_113090f80);
          uVar12 = ((undefined8 *)(lVar14 + _DAT_113090f80))[1];
          puVar1[2] = uVar11;
          puVar1[3] = uVar12;
          lVar6 = 0;
          FUN_10475cf44();
          lVar21 = (long)*(int *)(lVar6 + 0x18);
          lVar13 = *(long *)(lVar14 + lVar13);
          lStack_7b0 = lVar6;
          if (lVar13 == 0) {
            lVar6 = 0;
            FUN_104739264();
            (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)puVar1 + lVar21,1,1,lVar6);
            _swift_bridgeObjectRetain(uStack_7c8);
            _objc_retain(lVar14);
            func_0x00010006c00c(uVar11,uVar12);
          }
          else {
            _swift_bridgeObjectRetain(uStack_7c8);
            _objc_retain(lVar14);
            func_0x00010006c00c(uVar11,uVar12);
            _objc_retain(lVar13);
            func_0x0001047e75ac((long)puVar1 + lVar21);
            lVar6 = 0;
            FUN_104739264();
            (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)puVar1 + lVar21,0,1,lVar6);
          }
          lVar6 = lStack_7d8;
          puVar19 = puStack_7e0;
          uVar20 = uStack_7e8;
          lVar13 = (long)*(int *)(lStack_7b0 + 0x1c);
          if (*(long *)(lVar14 + _DAT_113090f90) == 0) {
            _objc_release(lVar14);
            func_0x000101551a34(auStack_790);
            _memcpy((long)puVar1 + lVar13,auStack_790,0x260);
          }
          else {
            _objc_retain();
            FUN_104833ab4(auStack_2c8);
            _memcpy((long)puVar1 + lVar13,auStack_2c8,0x260);
            func_0x000101553e8c((long)puVar1 + lVar13);
            _objc_release(lVar14);
          }
          pcVar10 = *(code **)(*(long *)(lStack_7b0 + -8) + 0x38);
          uVar11 = 0;
          lVar13 = lStack_7b0;
        }
        (*pcVar10)(puVar1,uVar11,1,lVar13);
        uVar16 = uStack_7d0;
        uVar11 = *(undefined8 *)(lVar15 + _DAT_11308fde0);
        _objc_release(lVar15);
        *(undefined8 *)(lVar7 + *(int *)(lVar9 + 0x20)) = uVar11;
        (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar7,0,1,lVar9);
        uVar8 = uStack_7a8;
        uVar17 = uStack_798;
        puVar18 = puStack_7a0;
      }
      puVar1 = (undefined8 *)(uVar8 + _DAT_11308fd88);
      uVar11 = puVar1[1];
      uVar12 = *puVar1;
      puVar5 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar6 + 0x18));
      puVar5[1] = puVar1[1];
      *puVar5 = uVar12;
      uVar12 = *(undefined8 *)(uVar8 + _DAT_11308fd90);
      _swift_bridgeObjectRetain(uVar11);
      _objc_release(uVar8);
      *(undefined8 *)((long)puVar19 + (long)*(int *)(lVar6 + 0x1c)) = uVar12;
      uVar8 = *(ulong *)(puVar18 + 0x10);
      puStack_530 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar8) {
        func_0x0001046c7390(1 < *(ulong *)(puVar18 + 0x18),uVar8 + 1,1);
      }
      puVar18 = puStack_530;
      uVar17 = uVar17 + 1;
      *(ulong *)(puStack_530 + 0x10) = uVar8 + 1;
      func_0x0001047e4660(puVar19,puStack_530 +
                                  *(long *)(lStack_7b8 + 0x48) * uVar8 +
                                  ((ulong)*(byte *)(lStack_7b8 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lStack_7b8 + 0x50) ^ 0xffffffffffffffff)),
                          FUN_104723a94);
    } while (uVar16 != uVar17);
  }
  lVar6 = lStack_7f0;
  *(undefined **)((long)puStack_7f8 + (long)*(int *)(lStack_800 + 0x18)) = puVar18;
  plVar2 = (long *)((long)puStack_7f8 + (long)*(int *)(lStack_800 + 0x1c));
  lVar7 = *(long *)(lStack_7f0 + _DAT_11308fd40);
  if (lVar7 == 0) {
    _objc_release(lStack_7f0);
    *plVar2 = 0;
    *(undefined1 *)(plVar2 + 1) = 1;
  }
  else {
    func_0x00010c067fc0();
    *plVar2 = lVar7;
    *(undefined1 *)(plVar2 + 1) = 0;
    _objc_release(lVar6);
  }
  return;
}



/* Entry: 1047e44c0; end: 1047e453b; -[SCAdMediaCollection init] */

void FUN_1047e44c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaCollectionWrapper.swift",
             0x2a,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047e4508);
  (*pcVar1)();
}



/* Entry: 1047e453c; end: 1047e46a3; -[SCAdMediaCollection .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e453c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fd28 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308fd30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308fd38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308fd40));
  return;
}



/* Entry: 1047e46a4; end: 1047e46c3;  */

void FUN_1047e46a4(void)

{
  _objc_opt_self(&PTR_PTR_1129d64a0);
  return;
}



/* Entry: 1047e46c4; end: 1047e46f3;  */

void FUN_1047e46c4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e49ec(param_1);
  return;
}



/* Entry: 1047e46f4; end: 1047e480b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e46f4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_2 + _DAT_11308fd78) == 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    uStack_48 = 1;
  }
  else {
    FUN_1047fc030(&uStack_78);
    param_1[1] = uStack_70;
    *param_1 = uStack_78;
    param_1[3] = uStack_60;
    param_1[2] = uStack_68;
    param_1[5] = uStack_50;
    param_1[4] = uStack_58;
  }
  param_1[6] = uStack_48;
  lVar6 = _DAT_11308fd80;
  lVar5 = 0;
  FUN_104723a94();
  iVar3 = *(int *)(lVar5 + 0x14);
  bVar2 = *(long *)(param_2 + lVar6) == 0;
  if (!bVar2) {
    _objc_retain();
    FUN_1047e5bc0((long)param_1 + (long)iVar3);
  }
  lVar6 = 0;
  FUN_10472f4dc();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)param_1 + (long)iVar3,bVar2,1,lVar6);
  puVar1 = (undefined8 *)(param_2 + _DAT_11308fd88);
  uVar7 = puVar1[1];
  uVar8 = *puVar1;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
  puVar4[1] = puVar1[1];
  *puVar4 = uVar8;
  uVar8 = *(undefined8 *)(param_2 + _DAT_11308fd90);
  _swift_bridgeObjectRetain(uVar7);
  _objc_release(param_2);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c)) = uVar8;
  return;
}



/* Entry: 1047e480c; end: 1047e481b; -[SCAdMediaCollectionItem itemIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e480c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fd78));
  return;
}



/* Entry: 1047e481c; end: 1047e482b; -[SCAdMediaCollectionItem itemAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e481c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308fd80));
  return;
}



/* Entry: 1047e482c; end: 1047e4887; -[SCAdMediaCollectionItem title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e482c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308fd88))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308fd88);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047e4888; end: 1047e4897; -[SCAdMediaCollectionItem dpaProductId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047e4888(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308fd90);
}



/* Entry: 1047e4898; end: 1047e492b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e4898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308fd78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308fd80) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308fd88);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308fd90) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047e492c; end: 1047e49eb; -[SCAdMediaCollectionItem initWithItemIcon:itemAttachment:title:dpaProductId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e492c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11308fd78) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308fd80) = param_4;
  plVar1 = (long *)(param_1 + _DAT_11308fd88);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11308fd90) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1047e49ec; end: 1047e4cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1047e49ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_10472f4dc();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar7 - extraout_x12;
  lVar13 = 0x112db3e90;
  func_0x0001000285a8(0x112db3e90,&UNK_10d95e3e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar12 - extraout_x8_00;
  plVar5 = (long *)0x0;
  lVar14 = param_1[6];
  if (lVar14 != 1) {
    uStack_c8 = *param_1;
    uStack_c0 = param_1[1];
    lVar8 = param_1[2];
    uStack_b8 = param_1[3];
    uVar9 = param_1[4];
    uVar15 = param_1[5];
    lVar6 = 0;
    lStack_b0 = lVar11;
    lStack_a8 = lVar4;
    lStack_a0 = lVar7;
    FUN_1047fc144();
    lVar4 = lVar6;
    _objc_allocWithZone();
    plVar5 = (long *)0x0;
    if (lVar8 != 1) {
      lVar7 = 0;
      FUN_1047fcc14();
      lVar11 = lVar7;
      uStack_d0 = uVar15;
      _objc_allocWithZone();
      *(undefined8 *)(lVar11 + _DAT_113090438) = uStack_c8;
      puVar1 = (undefined8 *)(lVar11 + _DAT_113090440);
      *puVar1 = uStack_c0;
      puVar1[1] = lVar8;
      puVar1 = (undefined8 *)(lVar11 + _DAT_113090448);
      *puVar1 = uStack_b8;
      puVar1[1] = uVar9;
      puVar3 = PTR_s_init_1125d9248;
      lStack_90 = lVar11;
      lStack_88 = lVar7;
      _swift_bridgeObjectRetain(lVar8);
      _swift_bridgeObjectRetain(uVar9);
      uVar15 = uStack_d0;
      plVar5 = &lStack_90;
      _objc_msgSendSuper2(plVar5,puVar3);
    }
    *(long **)(lVar4 + _DAT_113090400) = plVar5;
    puVar1 = (undefined8 *)(lVar4 + _DAT_113090408);
    *puVar1 = uVar15;
    puVar1[1] = lVar14;
    puVar3 = PTR_s_init_1125d9248;
    lStack_80 = lVar4;
    lStack_78 = lVar6;
    _swift_bridgeObjectRetain(lVar14);
    plVar5 = &lStack_80;
    _objc_msgSendSuper2(plVar5,puVar3);
    lVar4 = lStack_a8;
    lVar11 = lStack_b0;
    lVar7 = lStack_a0;
  }
  *(long **)(unaff_x20 + _DAT_11308fd78) = plVar5;
  lVar8 = 0;
  FUN_104723a94();
  func_0x0001047e5774((long)param_1 + (long)*(int *)(lVar8 + 0x14),lVar13,0x112db3e90,&UNK_10d95e3e0
                     );
  lVar14 = lVar13;
  (**(code **)(lVar11 + 0x30))(lVar13,1,lVar4);
  lVar4 = 0;
  if ((int)lVar14 != 1) {
    func_0x000104723a50(lVar13,lVar12);
    func_0x0001047e56f4(lVar12,lVar7);
    FUN_1047e6de0(0);
    _objc_allocWithZone();
    FUN_1047e5f10();
    func_0x0001047e5738(lVar12,FUN_10472f4dc);
    lVar4 = lVar7;
  }
  *(long *)(unaff_x20 + _DAT_11308fd80) = lVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x18));
  uVar9 = puVar1[1];
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11308fd88);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  *(undefined8 *)(unaff_x20 + _DAT_11308fd90) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x1c));
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar9);
  puVar10 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar10,puVar3);
  func_0x0001047e5738(param_1,FUN_104723a94);
  return puVar10;
}



/* Entry: 1047e4cf4; end: 1047e4d27; -[SCAdMediaCollectionItem hash] */

undefined8 FUN_1047e4cf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047e4d28();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047e4d28; end: 1047e4e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e4d28(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_11308fd78) == 0) {
    param_1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047fb684();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (*(long *)(unaff_x20 + _DAT_11308fd80) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047e580c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308fd88))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fd88);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308fd90));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047e4e3c; end: 1047e5023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047e4e3c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lStack_68;
  long alStack_60 [4];
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x0001047e5774(param_1,alStack_60,0x112d387f8,&UNK_10d902650);
  if (alStack_60[3] == 0) {
    func_0x00010006e7f4(alStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,alStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_11308fd78) == 0) {
        uVar5 = (uint)(*(long *)(lStack_68 + _DAT_11308fd78) == 0);
      }
      else {
        lVar6 = *(long *)(lStack_68 + _DAT_11308fd78);
        if (lVar6 == 0) {
          lVar2 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          lVar2 = 0;
          FUN_1047fc144();
        }
        alStack_60[0] = lVar6;
        alStack_60[3] = lVar2;
        _objc_retain(lVar6);
        uVar5 = 0;
        func_0x0001047fb744();
        func_0x00010006e7f4(alStack_60);
      }
      if (*(long *)(unaff_x20 + _DAT_11308fd80) == 0) {
        uVar4 = (uint)(*(long *)(lStack_68 + _DAT_11308fd80) == 0);
      }
      else {
        lVar6 = *(long *)(lStack_68 + _DAT_11308fd80);
        if (lVar6 == 0) {
          lVar2 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          lVar2 = 0;
          FUN_1047e6de0();
        }
        alStack_60[0] = lVar6;
        alStack_60[3] = lVar2;
        _objc_retain(lVar6);
        uVar4 = 0;
        FUN_1047e5958();
        func_0x00010006e7f4(alStack_60);
      }
      lVar6 = ((long *)(unaff_x20 + _DAT_11308fd88))[1];
      lVar2 = ((long *)(lStack_68 + _DAT_11308fd88))[1];
      uVar7 = (uint)(lVar6 == 0 && lVar2 == 0);
      if ((lVar6 != 0) && (lVar2 != 0)) {
        lVar3 = *(long *)(unaff_x20 + _DAT_11308fd88);
        if ((lVar3 == *(long *)(lStack_68 + _DAT_11308fd88)) && (lVar6 == lVar2)) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar3;
        }
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11308fd90);
      lVar2 = *(long *)(lStack_68 + _DAT_11308fd90);
      _objc_release(lStack_68);
      if ((uVar5 & uVar4 & 1) != 0) {
        return uVar7 & lVar6 == lVar2;
      }
    }
  }
  return 0;
}



/* Entry: 1047e5024; end: 1047e50a3; -[SCAdMediaCollectionItem isEqual:] */

uint FUN_1047e5024(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047e4e3c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047e50a4; end: 1047e50a7; -[SCAdMediaCollectionItem copyWithZone:] */

void FUN_1047e50a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047e50a8; end: 1047e5203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047e50a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x4f43495f4d455449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f43495f4d455449,0xe90000000000004e);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5454415f4d455449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5454415f4d455449,0xef544e454d484341);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308fd88))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308fd88);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x444f52505f415044;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444f52505f415044,0xee0044495f544355);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047e5204; end: 1047e5253; -[SCAdMediaCollectionItem encodeWithCoder:] */

void FUN_1047e5204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047e50a8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047e5254; end: 1047e5283;  */

void FUN_1047e5254(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047e5284(param_1);
  return;
}



/* Entry: 1047e5284; end: 1047e5577;  */

undefined8 FUN_1047e5284(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  iVar4 = (int)&uStack_a0;
  uVar5 = 0x4f43495f4d455449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f43495f4d455449,0xe90000000000004e);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar6 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    FUN_1047fc144(0);
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar5,6);
    uVar5 = uStack_a0;
    if (iVar2 == 0) {
      uVar5 = 0;
    }
  }
  uVar7 = 0x5454415f4d455449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5454415f4d455449,0xef544e454d484341);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar6 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    FUN_1047e6de0(0);
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,uVar7,6);
    uVar7 = uStack_a0;
    if (iVar3 == 0) {
      uVar7 = 0;
    }
  }
  uVar8 = 0x454c544954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c544954,0xe500000000000000);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (lVar6 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_98;
    uVar8 = uStack_a0;
    if (iVar4 != 0) goto LAB_1047e54b8;
  }
  lVar6 = 0;
  uVar8 = 0;
LAB_1047e54b8:
  uVar9 = 0x444f52505f415044;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444f52505f415044,0xee0044495f544355);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar9);
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  func_0x00010c01fde0();
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar7);
  return unaff_x20;
}



/* Entry: 1047e5578; end: 1047e559f; -[SCAdMediaCollectionItem initWithCoder:] */

void FUN_1047e5578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047e5284();
  return;
}



/* Entry: 1047e55a0; end: 1047e562b; -[SCAdMediaCollectionItem description] */

void FUN_1047e55a0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_104723a94();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1047e46f4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001047e5738(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_104723a94);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


