/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104880768; end: 1048807b3;  */

void FUN_104880768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 1048807b4; end: 10488088f;  */

undefined1  [16] FUN_1048807b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar3 = 0;
  func_0x0001007dbe74(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xa8));
  func_0x0001000b693c(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  _swift_retain(lVar2);
  func_0x0001007dc004(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_10dd3b878;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_10dd3b878,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  _swift_release(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 104880890; end: 104880897;  */

void FUN_104880890(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104880898; end: 1048808cb;  */

void FUN_104880898(long param_1)

{
  func_0x0001000d2374();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 1048808cc; end: 10488093f;  */

long * FUN_1048808cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_104880940(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  func_0x0001000c0ea8(lVar1);
  _swift_retain();
  _swift_retain(param_2);
  return unaff_x20;
}



/* Entry: 104880940; end: 10488094f;  */

void FUN_104880940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8210f4);
  return;
}



/* Entry: 104880950; end: 104880993;  */

void FUN_104880950(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 104880994; end: 1048809db;  */

void FUN_104880994(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 1048809dc; end: 104880a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048809dc(void)

{
  func_0x000100c7f554();
  return;
}



/* Entry: 104880a24; end: 104880a7b;  */

void FUN_104880a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x0001000c0ea8(param_2);
  return;
}



/* Entry: 104880a7c; end: 104880b83;  */

undefined1  [16] FUN_104880a7c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 **ppuVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  plVar7 = *(long **)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_104881414(0);
  (**(code **)(lVar8 + 0x10))(puVar2,param_1,param_2);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_unknownObjectRetain(uVar5);
  FUN_104880d64(uVar9,puVar2,uVar5);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar3 = &DAT_10dd3bfd0;
  puStack_68 = puVar2;
  _swift_getWitnessTable(&DAT_10dd3bfd0,uVar1);
  ppuVar4 = &puStack_68;
  (*pcVar6)(ppuVar4,uVar1,puVar3);
  _swift_release(puVar2);
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = ppuVar4;
  return auVar10;
}



/* Entry: 104880b84; end: 104880b8b;  */

void FUN_104880b84(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104880b8c; end: 104880bbf;  */

void FUN_104880b8c(long param_1)

{
  func_0x0001000d2374();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 104880bc0; end: 104880c3b;  */

long * FUN_104880bc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_104880c3c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  func_0x0001000c0ea8();
  _swift_retain();
  _swift_unknownObjectRetain(param_2);
  return unaff_x20;
}



/* Entry: 104880c3c; end: 104880c4b;  */

void FUN_104880c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e82121c);
  return;
}



/* Entry: 104880c4c; end: 104880c97;  */

void FUN_104880c4c(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_20 = &UNK_10dd3bf18;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 104880c98; end: 104880c9b;  */

void FUN_104880c98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 104880c9c; end: 104880d63;  */

void FUN_104880c9c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    uVar3 = *(ulong *)(param_1 + 0x50);
    uVar2 = 0x13f;
    _swift_checkMetadataState();
    if (uVar3 < 0x40) {
      lStack_40 = *(long *)(uVar2 - 8) + 0x40;
      puStack_38 = &UNK_10dd3bf78;
      puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
      lVar1 = 0x13f;
      func_0x000104881420(0x13f,uVar2,*(undefined8 *)(param_1 + 0x58));
      if (uVar2 < 0x40) {
        lStack_28 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initClassMetadata2(param_1,0,5,&lStack_48,param_1 + 0x60);
      }
    }
  }
  return;
}



/* Entry: 104880d64; end: 104880dbf;  */

undefined8 FUN_104880d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_104880dc0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 104880dc0; end: 104880e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104880dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar3 = *unaff_x20;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_1138154c0);
  lVar4 = *(long *)(*unaff_x20 + 0x80);
  lVar1 = *(long *)(lVar3 + 0x50);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar3 + 0x58),lVar1,&UNK_10e821b74,&UNK_10e821b7c);
  lVar3 = 0;
  __sSqMa(0,uVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)unaff_x20 + lVar4,1,2,lVar3);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),param_2,lVar1);
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)) = param_1;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)) = param_3;
  return;
}



/* Entry: 104880e9c; end: 104881077;  */

void FUN_104880e9c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar7 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar7 + 0x50);
  lVar2 = *(long *)(lVar7 + 0x58);
  lVar3 = 0;
  func_0x000104881420(0,uVar1,lVar2);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + -extraout_x8;
  (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar7 + 0x68),param_1,uVar1,lVar2);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,uVar1,&UNK_10e821b74,&UNK_10e821b7c);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar9,1,1,lVar7);
  lVar4 = 0;
  __sSqMa(0,lVar7);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar9,0,2,lVar4);
  lVar7 = *(long *)(*unaff_x20 + 0x80);
  _swift_beginAccess((long)unaff_x20 + lVar7,auStack_78,0x21,0);
  (**(code **)(lVar10 + 0x28))((long)unaff_x20 + lVar7,puVar9,lVar3);
  _swift_endAccess(auStack_78);
  lVar3 = *unaff_x20;
  uVar8 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar3 + 0x70));
  _swift_getObjectType(uVar8);
  uVar11 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar3 + 0x78));
  puVar5 = &UNK_1107aa1f0;
  _swift_allocObject(&UNK_1107aa1f0,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  puVar6 = &UNK_1107aa268;
  _swift_allocObject(&UNK_1107aa268,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(long *)(puVar6 + 0x18) = lVar2;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  _swift_retain(puVar5);
  FUN_10488b6c8(uVar11,FUN_104883940,puVar6,uVar8);
  _swift_release(puVar5);
  _swift_release(puVar6);
  return;
}



/* Entry: 104881078; end: 104881347;  */

void FUN_104881078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_3,param_2,&UNK_10e821b74,&UNK_10e821b7c);
  lStack_b0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar2 = 0;
  lStack_b8 = (long)&lStack_c0 - extraout_x8;
  __sSqMa(0,lVar1);
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = ((long)&lStack_c0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12;
  lVar3 = 0;
  func_0x000104881420(0,param_2,param_3);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar10 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar10 - extraout_x12_00;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  plVar4 = (long *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (plVar4 != (long *)0x0) {
    lVar11 = *(long *)(*plVar4 + 0x80);
    lStack_c0 = lVar10;
    _swift_beginAccess((long)plVar4 + lVar11,auStack_90,0,0);
    (**(code **)(lVar7 + 0x10))(lVar12,(long)plVar4 + lVar11,lVar3);
    lVar10 = lVar12;
    (**(code **)(lVar13 + 0x30))(lVar12,2,lVar2);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar13 + 0x20))(lVar8,lVar12,lVar2);
      (**(code **)(lVar13 + 0x10))(lVar9,lVar8,lVar2);
      lVar12 = lStack_b0;
      lVar5 = lVar9;
      (**(code **)(lStack_b0 + 0x30))(lVar9,1,lVar1);
      lVar10 = lStack_b8;
      if ((int)lVar5 != 1) {
        (**(code **)(lVar12 + 0x20))(lStack_b8,lVar9,lVar1);
        FUN_104880e9c(lVar10);
        _swift_release(plVar4);
        (**(code **)(lVar12 + 8))(lVar10,lVar1);
        (**(code **)(lVar13 + 8))(lVar8,lVar2);
        return;
      }
      pcVar6 = *(code **)(lVar13 + 8);
      (*pcVar6)(lVar8,lVar2);
      (*pcVar6)(lVar9,lVar2);
      lVar1 = lStack_c0;
      (**(code **)(lVar13 + 0x38))(lStack_c0,1,2,lVar2);
      _swift_beginAccess((long)plVar4 + lVar11,auStack_a8,0x21,0);
      (**(code **)(lVar7 + 0x28))((long)plVar4 + lVar11,lVar1,lVar3);
      _swift_endAccess(auStack_a8);
    }
    _swift_release(plVar4);
  }
  return;
}



/* Entry: 104881348; end: 1048813ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104881348(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar2 = _DAT_1138154c0;
  lVar3 = *unaff_x20;
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  lVar1 = *(long *)(lVar3 + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),lVar1);
  _swift_unknownObjectRelease(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  lVar4 = *(long *)(*unaff_x20 + 0x80);
  lVar2 = 0;
  func_0x000104881420(0,lVar1,*(undefined8 *)(lVar3 + 0x58));
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar4,lVar2);
  return;
}



/* Entry: 1048813f0; end: 104881413;  */

void FUN_1048813f0(void)

{
  FUN_104881348();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104881414; end: 104881433;  */

void FUN_104881414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e821288);
  return;
}



/* Entry: 104881434; end: 1048814a7;  */

void FUN_104881434(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  lVar2 = 0x13f;
  __sSqMa();
  if (uVar1 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar2 + -8) + 0x40,2);
  }
  return;
}



/* Entry: 1048814a8; end: 1048817db;  */

long * FUN_1048814a8(long *param_1,uint *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  lVar11 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar11 + 0x54);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  uVar6 = *(ulong *)(lVar11 + 0x40);
  if (uVar2 == 0) {
    uVar6 = uVar6 + 1;
  }
  uVar10 = (uint)uVar6;
  uVar7 = uVar6;
  if (uVar3 < 2) {
    if (uVar10 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar10 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar10 << 3 & 0x1f);
      uVar7 = 2;
      if (0xfffe < uVar8) {
        uVar7 = 4;
      }
      if (uVar8 < 0xff) {
        uVar7 = (ulong)(uVar8 != 0);
      }
    }
    else {
      uVar7 = 1;
    }
    uVar7 = uVar7 + uVar6;
  }
  uVar9 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  if ((7 < (uint)uVar9 || 0x18 < uVar7) || (*(uint *)(lVar11 + 0x50) & 0x100000) != 0) {
    lVar4 = *(long *)param_2;
    *param_1 = lVar4;
    _swift_retain();
    return (long *)(lVar4 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  if (uVar3 < 2) {
    if (uVar10 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar10 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar10 << 3 & 0x1f);
      if (uVar8 < 0xff) {
        if (uVar8 == 0) goto LAB_104881614;
        goto LAB_1048815d0;
      }
      if (uVar8 < 0xffff) {
        uVar8 = (uint)*(ushort *)((long)param_2 + uVar6);
      }
      else {
        uVar8 = *(uint *)((long)param_2 + uVar6);
      }
    }
    else {
LAB_1048815d0:
      uVar8 = (uint)*(byte *)((long)param_2 + uVar6);
    }
    if (uVar8 != 0) {
      uVar2 = 0;
      if (uVar10 < 4) {
        uVar2 = uVar8 - 1 << (ulong)((uVar10 & 3) << 3);
      }
      if (uVar10 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar10 < 4) {
          uVar8 = uVar10;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_2;
          }
          else {
            uVar8 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_2;
        }
        else {
          uVar8 = *param_2;
        }
      }
      if (uVar3 + (uVar8 | uVar2) != -1) goto LAB_104881638;
      goto LAB_10488170c;
    }
  }
LAB_104881614:
  if (1 < uVar2) {
    puVar5 = param_2;
    (**(code **)(lVar11 + 0x30))(param_2,uVar2,lVar4);
    iVar1 = 0;
    if ((int)puVar5 != 0) {
      iVar1 = (int)puVar5 + -1;
    }
    if (iVar1 != 0) {
LAB_104881638:
      if (uVar3 < 2) {
        if (uVar10 < 4) {
          uVar3 = (~(-1 << (ulong)(uVar10 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar10 << 3 & 0x1f);
          uVar7 = 2;
          if (0xfffe < uVar3) {
            uVar7 = 4;
          }
          if (uVar3 < 0xff) {
            uVar7 = (ulong)(uVar3 != 0);
          }
        }
        else {
          uVar7 = 1;
        }
        uVar6 = uVar7 + uVar6;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar6);
      return param_1;
    }
  }
LAB_10488170c:
  puVar5 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar11 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    _memcpy(param_1,param_2,uVar6);
  }
  if (1 < uVar3) {
    return param_1;
  }
  if (uVar10 < 4) {
    uVar3 = (~(-1 << (ulong)(uVar10 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar10 << 3 & 0x1f);
    if (0xfe < uVar3) {
      if (0xfffe < uVar3) {
        *(undefined4 *)((long)param_1 + uVar6) = 0;
        return param_1;
      }
      *(undefined2 *)((long)param_1 + uVar6) = 0;
      return param_1;
    }
    if (uVar3 == 0) {
      return param_1;
    }
  }
  *(undefined1 *)((long)param_1 + uVar6) = 0;
  return param_1;
}



/* Entry: 1048817dc; end: 104881963;  */

void FUN_1048817dc(uint *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  lVar10 = *(long *)(lVar5 + -8);
  uVar3 = *(uint *)(lVar10 + 0x54);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar3 - 1;
  }
  uVar8 = *(ulong *)(lVar10 + 0x40);
  if (uVar3 == 0) {
    uVar8 = uVar8 + 1;
  }
  if (uVar1 < 2) {
    uVar7 = (uint)uVar8;
    uVar4 = uVar7 << 3;
    if (uVar7 < 4) {
      uVar9 = (~(-1 << (ulong)(uVar4 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar4 & 0x1f);
      if (uVar9 < 0xff) {
        if (uVar9 == 0) goto LAB_1048818a8;
        goto LAB_104881868;
      }
      if (uVar9 < 0xffff) {
        uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
      }
      else {
        uVar9 = *(uint *)((long)param_1 + uVar8);
      }
    }
    else {
LAB_104881868:
      uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
    }
    if (uVar9 != 0) {
      uVar3 = 0;
      if (uVar7 < 4) {
        uVar3 = uVar9 - 1 << (ulong)(uVar4 & 0x1f);
      }
      if (uVar7 != 0) {
        uVar4 = 4;
        if (uVar7 < 4) {
          uVar4 = uVar7;
        }
        if ((int)uVar4 < 3) {
          if (uVar4 == 1) {
            uVar8 = (ulong)(byte)*param_1;
          }
          else {
            uVar8 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar4 == 3) {
          uVar8 = (ulong)(uint3)*param_1;
        }
        else {
          uVar8 = (ulong)*param_1;
        }
      }
      if (uVar1 + ((uint)uVar8 | uVar3) != -1) {
        return;
      }
      goto LAB_104881920;
    }
  }
LAB_1048818a8:
  if (1 < uVar3) {
    puVar6 = param_1;
    (**(code **)(lVar10 + 0x30))(param_1,uVar3,lVar5);
    iVar2 = 0;
    if ((int)puVar6 != 0) {
      iVar2 = (int)puVar6 + -1;
    }
    if (iVar2 != 0) {
      return;
    }
  }
LAB_104881920:
  puVar6 = param_1;
  (**(code **)(lVar10 + 0x30))(param_1,1,lVar5);
  if ((int)puVar6 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104881960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 8))(param_1,lVar5);
  return;
}



/* Entry: 104881964; end: 104881bff;  */

long FUN_104881964(long param_1,uint *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  lVar10 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar10 + 0x54);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  lVar6 = *(long *)(lVar10 + 0x40);
  if (uVar2 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar9 = (uint)lVar6;
  if (uVar3 < 2) {
    if (uVar9 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      if (uVar8 < 0xff) {
        if (uVar8 == 0) goto LAB_104881a38;
        goto LAB_1048819f4;
      }
      if (uVar8 < 0xffff) {
        uVar8 = (uint)*(ushort *)((long)param_2 + lVar6);
      }
      else {
        uVar8 = *(uint *)((long)param_2 + lVar6);
      }
    }
    else {
LAB_1048819f4:
      uVar8 = (uint)*(byte *)((long)param_2 + lVar6);
    }
    if (uVar8 != 0) {
      uVar2 = 0;
      if (uVar9 < 4) {
        uVar2 = uVar8 - 1 << (ulong)((uVar9 & 3) << 3);
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar9 < 4) {
          uVar8 = uVar9;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_2;
          }
          else {
            uVar8 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_2;
        }
        else {
          uVar8 = *param_2;
        }
      }
      if (uVar3 + (uVar8 | uVar2) != -1) goto LAB_104881a5c;
      goto LAB_104881b30;
    }
  }
LAB_104881a38:
  if (1 < uVar2) {
    puVar5 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,uVar2,lVar4);
    iVar1 = 0;
    if ((int)puVar5 != 0) {
      iVar1 = (int)puVar5 + -1;
    }
    if (iVar1 != 0) {
LAB_104881a5c:
      if (uVar3 < 2) {
        if (uVar9 < 4) {
          uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
          uVar7 = 2;
          if (0xfffe < uVar3) {
            uVar7 = 4;
          }
          if (uVar3 < 0xff) {
            uVar7 = (ulong)(uVar3 != 0);
          }
        }
        else {
          uVar7 = 1;
        }
        lVar6 = uVar7 + lVar6;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar6);
      return param_1;
    }
  }
LAB_104881b30:
  puVar5 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    _memcpy(param_1,param_2,lVar6);
  }
  if (1 < uVar3) {
    return param_1;
  }
  if (uVar9 < 4) {
    uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
    if (0xfe < uVar3) {
      if (0xfffe < uVar3) {
        *(undefined4 *)(param_1 + lVar6) = 0;
        return param_1;
      }
      *(undefined2 *)(param_1 + lVar6) = 0;
      return param_1;
    }
    if (uVar3 == 0) {
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + lVar6) = 0;
  return param_1;
}



/* Entry: 104881c00; end: 10488216f;  */

uint * FUN_104881c00(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  lVar13 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar13 + 0x54);
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar4 - 1;
  }
  lVar9 = *(long *)(lVar13 + 0x40);
  if (uVar4 == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar12 = (uint)lVar9;
  if (uVar5 < 2) {
    if (uVar12 < 4) {
      uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
      if (uVar11 < 0xff) {
        if (uVar11 == 0) goto LAB_104881cd8;
        goto LAB_104881c94;
      }
      if (uVar11 < 0xffff) {
        uVar11 = (uint)*(ushort *)((long)param_1 + lVar9);
      }
      else {
        uVar11 = *(uint *)((long)param_1 + lVar9);
      }
    }
    else {
LAB_104881c94:
      uVar11 = (uint)*(byte *)((long)param_1 + lVar9);
    }
    if (uVar11 == 0) goto LAB_104881cd8;
    uVar2 = 0;
    if (uVar12 < 4) {
      uVar2 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
    }
    if (uVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 4;
      if (uVar12 < 4) {
        uVar11 = uVar12;
      }
      if ((int)uVar11 < 3) {
        if (uVar11 == 1) {
          uVar11 = (uint)(byte)*param_1;
        }
        else {
          uVar11 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*param_1;
      }
      else {
        uVar11 = *param_1;
      }
    }
    if ((uVar11 | uVar2) + uVar5 == -1) goto LAB_104881de0;
LAB_104881d6c:
    if (uVar12 < 4) {
      uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
      if (0xfe < uVar11) {
        if (uVar11 < 0xffff) {
          uVar11 = (uint)*(ushort *)((long)param_2 + lVar9);
        }
        else {
          uVar11 = *(uint *)((long)param_2 + lVar9);
        }
        goto LAB_104881da0;
      }
      if (uVar11 != 0) goto LAB_104881d9c;
LAB_104881ebc:
      if (uVar4 < 2) goto LAB_104881ee4;
      pcVar14 = *(code **)(lVar13 + 0x30);
      goto LAB_104881ec8;
    }
LAB_104881d9c:
    uVar11 = (uint)*(byte *)((long)param_2 + lVar9);
LAB_104881da0:
    if (uVar11 == 0) goto LAB_104881ebc;
    uVar4 = 0;
    if (uVar12 < 4) {
      uVar4 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
    }
    if (uVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 4;
      if (uVar12 < 4) {
        uVar11 = uVar12;
      }
      if ((int)uVar11 < 3) {
        if (uVar11 == 1) {
          uVar11 = (uint)(byte)*param_2;
        }
        else {
          uVar11 = (uint)(ushort)*param_2;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*param_2;
      }
      else {
        uVar11 = *param_2;
      }
    }
    if (uVar5 + (uVar11 | uVar4) == -1) goto LAB_104881ee4;
LAB_1048820dc:
    if (1 < uVar5) goto LAB_104882130;
    if (3 < uVar12) goto LAB_104881eb4;
LAB_1048820ec:
    uVar5 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
    uVar10 = 2;
    if (0xfffe < uVar5) {
      uVar10 = 4;
    }
    if (uVar5 < 0xff) {
      uVar10 = (ulong)(uVar5 != 0);
    }
LAB_10488212c:
    lVar9 = uVar10 + lVar9;
  }
  else {
LAB_104881cd8:
    if (1 < uVar4) {
      pcVar14 = *(code **)(lVar13 + 0x30);
      puVar7 = param_1;
      (*pcVar14)(param_1,uVar4,lVar6);
      if (1 < (uint)puVar7) {
        if (uVar5 < 2) goto LAB_104881d6c;
LAB_104881ec8:
        puVar7 = param_2;
        (*pcVar14)(param_2,uVar4,lVar6);
        iVar3 = 0;
        if ((int)puVar7 != 0) {
          iVar3 = (int)puVar7 + -1;
        }
        if (iVar3 == 0) {
LAB_104881ee4:
          puVar7 = param_2;
          (**(code **)(lVar13 + 0x30))(param_2,1,lVar6);
          if ((int)puVar7 == 0) {
            (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar6);
            (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar6);
          }
          else {
            _memcpy(param_1,param_2,lVar9);
          }
          if (1 < uVar5) {
            return param_1;
          }
          if (uVar12 < 4) {
            uVar5 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >>
                    (ulong)(uVar12 << 3 & 0x1f);
            if (0xfe < uVar5) {
              if (0xfffe < uVar5) {
                pbVar1 = (byte *)((long)param_1 + lVar9);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                return param_1;
              }
              ((byte *)((long)param_1 + lVar9))[0] = 0;
              ((byte *)((long)param_1 + lVar9))[1] = 0;
              return param_1;
            }
            if (uVar5 == 0) {
              return param_1;
            }
          }
          *(byte *)((long)param_1 + lVar9) = 0;
          return param_1;
        }
        goto LAB_1048820dc;
      }
    }
    if (uVar5 < 2) {
LAB_104881de0:
      if (uVar12 < 4) {
        uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
        if (uVar11 < 0xff) {
          if (uVar11 == 0) goto LAB_104881e54;
          goto LAB_104881e10;
        }
        if (uVar11 < 0xffff) {
          uVar11 = (uint)*(ushort *)((long)param_2 + lVar9);
        }
        else {
          uVar11 = *(uint *)((long)param_2 + lVar9);
        }
      }
      else {
LAB_104881e10:
        uVar11 = (uint)*(byte *)((long)param_2 + lVar9);
      }
      if (uVar11 == 0) goto LAB_104881e54;
      uVar4 = 0;
      if (uVar12 < 4) {
        uVar4 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
      }
      if (uVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 4;
        if (uVar12 < 4) {
          uVar11 = uVar12;
        }
        if ((int)uVar11 < 3) {
          if (uVar11 == 1) {
            uVar11 = (uint)(byte)*param_2;
          }
          else {
            uVar11 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar11 == 3) {
          uVar11 = (uint)(uint3)*param_2;
        }
        else {
          uVar11 = *param_2;
        }
      }
      if (uVar5 + (uVar11 | uVar4) != -1) {
LAB_104881e7c:
        puVar7 = param_1;
        (**(code **)(lVar13 + 0x30))(param_1,1,lVar6);
        if ((int)puVar7 == 0) {
          (**(code **)(lVar13 + 8))(param_1,lVar6);
        }
        if (1 < uVar5) goto LAB_104882130;
        if (uVar12 < 4) goto LAB_1048820ec;
LAB_104881eb4:
        uVar10 = 1;
        goto LAB_10488212c;
      }
    }
    else {
LAB_104881e54:
      if (1 < uVar4) {
        puVar7 = param_2;
        (**(code **)(lVar13 + 0x30))(param_2,uVar4,lVar6);
        iVar3 = 0;
        if ((int)puVar7 != 0) {
          iVar3 = (int)puVar7 + -1;
        }
        if (iVar3 != 0) goto LAB_104881e7c;
      }
    }
    pcVar14 = *(code **)(lVar13 + 0x30);
    puVar7 = param_1;
    (*pcVar14)(param_1,1,lVar6);
    puVar8 = param_2;
    (*pcVar14)(param_2,1,lVar6);
    if ((int)puVar7 == 0) {
      if ((int)puVar8 == 0) {
        (**(code **)(lVar13 + 0x18))(param_1,param_2,lVar6);
        return param_1;
      }
      (**(code **)(lVar13 + 8))(param_1,lVar6);
    }
    else if ((int)puVar8 == 0) {
      (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar6);
      (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar6);
      return param_1;
    }
  }
LAB_104882130:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar9);
  return param_1;
}



/* Entry: 104882170; end: 10488240b;  */

long FUN_104882170(long param_1,uint *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  lVar10 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar10 + 0x54);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  lVar6 = *(long *)(lVar10 + 0x40);
  if (uVar2 == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar9 = (uint)lVar6;
  if (uVar3 < 2) {
    if (uVar9 < 4) {
      uVar8 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      if (uVar8 < 0xff) {
        if (uVar8 == 0) goto LAB_104882244;
        goto LAB_104882200;
      }
      if (uVar8 < 0xffff) {
        uVar8 = (uint)*(ushort *)((long)param_2 + lVar6);
      }
      else {
        uVar8 = *(uint *)((long)param_2 + lVar6);
      }
    }
    else {
LAB_104882200:
      uVar8 = (uint)*(byte *)((long)param_2 + lVar6);
    }
    if (uVar8 != 0) {
      uVar2 = 0;
      if (uVar9 < 4) {
        uVar2 = uVar8 - 1 << (ulong)((uVar9 & 3) << 3);
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar9 < 4) {
          uVar8 = uVar9;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_2;
          }
          else {
            uVar8 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_2;
        }
        else {
          uVar8 = *param_2;
        }
      }
      if (uVar3 + (uVar8 | uVar2) != -1) goto LAB_104882268;
      goto LAB_10488233c;
    }
  }
LAB_104882244:
  if (1 < uVar2) {
    puVar5 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,uVar2,lVar4);
    iVar1 = 0;
    if ((int)puVar5 != 0) {
      iVar1 = (int)puVar5 + -1;
    }
    if (iVar1 != 0) {
LAB_104882268:
      if (uVar3 < 2) {
        if (uVar9 < 4) {
          uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
          uVar7 = 2;
          if (0xfffe < uVar3) {
            uVar7 = 4;
          }
          if (uVar3 < 0xff) {
            uVar7 = (ulong)(uVar3 != 0);
          }
        }
        else {
          uVar7 = 1;
        }
        lVar6 = uVar7 + lVar6;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar6);
      return param_1;
    }
  }
LAB_10488233c:
  puVar5 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar4);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    _memcpy(param_1,param_2,lVar6);
  }
  if (1 < uVar3) {
    return param_1;
  }
  if (uVar9 < 4) {
    uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
    if (0xfe < uVar3) {
      if (0xfffe < uVar3) {
        *(undefined4 *)(param_1 + lVar6) = 0;
        return param_1;
      }
      *(undefined2 *)(param_1 + lVar6) = 0;
      return param_1;
    }
    if (uVar3 == 0) {
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + lVar6) = 0;
  return param_1;
}



/* Entry: 10488240c; end: 10488297b;  */

uint * FUN_10488240c(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  lVar13 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar13 + 0x54);
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar4 - 1;
  }
  lVar9 = *(long *)(lVar13 + 0x40);
  if (uVar4 == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar12 = (uint)lVar9;
  if (uVar5 < 2) {
    if (uVar12 < 4) {
      uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
      if (uVar11 < 0xff) {
        if (uVar11 == 0) goto LAB_1048824e4;
        goto LAB_1048824a0;
      }
      if (uVar11 < 0xffff) {
        uVar11 = (uint)*(ushort *)((long)param_1 + lVar9);
      }
      else {
        uVar11 = *(uint *)((long)param_1 + lVar9);
      }
    }
    else {
LAB_1048824a0:
      uVar11 = (uint)*(byte *)((long)param_1 + lVar9);
    }
    if (uVar11 == 0) goto LAB_1048824e4;
    uVar2 = 0;
    if (uVar12 < 4) {
      uVar2 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
    }
    if (uVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 4;
      if (uVar12 < 4) {
        uVar11 = uVar12;
      }
      if ((int)uVar11 < 3) {
        if (uVar11 == 1) {
          uVar11 = (uint)(byte)*param_1;
        }
        else {
          uVar11 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*param_1;
      }
      else {
        uVar11 = *param_1;
      }
    }
    if ((uVar11 | uVar2) + uVar5 == -1) goto LAB_1048825ec;
LAB_104882578:
    if (uVar12 < 4) {
      uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
      if (0xfe < uVar11) {
        if (uVar11 < 0xffff) {
          uVar11 = (uint)*(ushort *)((long)param_2 + lVar9);
        }
        else {
          uVar11 = *(uint *)((long)param_2 + lVar9);
        }
        goto LAB_1048825ac;
      }
      if (uVar11 != 0) goto LAB_1048825a8;
LAB_1048826c8:
      if (uVar4 < 2) goto LAB_1048826f0;
      pcVar14 = *(code **)(lVar13 + 0x30);
      goto LAB_1048826d4;
    }
LAB_1048825a8:
    uVar11 = (uint)*(byte *)((long)param_2 + lVar9);
LAB_1048825ac:
    if (uVar11 == 0) goto LAB_1048826c8;
    uVar4 = 0;
    if (uVar12 < 4) {
      uVar4 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
    }
    if (uVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 4;
      if (uVar12 < 4) {
        uVar11 = uVar12;
      }
      if ((int)uVar11 < 3) {
        if (uVar11 == 1) {
          uVar11 = (uint)(byte)*param_2;
        }
        else {
          uVar11 = (uint)(ushort)*param_2;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = (uint)(uint3)*param_2;
      }
      else {
        uVar11 = *param_2;
      }
    }
    if (uVar5 + (uVar11 | uVar4) == -1) goto LAB_1048826f0;
LAB_1048828e8:
    if (1 < uVar5) goto LAB_10488293c;
    if (3 < uVar12) goto LAB_1048826c0;
LAB_1048828f8:
    uVar5 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
    uVar10 = 2;
    if (0xfffe < uVar5) {
      uVar10 = 4;
    }
    if (uVar5 < 0xff) {
      uVar10 = (ulong)(uVar5 != 0);
    }
LAB_104882938:
    lVar9 = uVar10 + lVar9;
  }
  else {
LAB_1048824e4:
    if (1 < uVar4) {
      pcVar14 = *(code **)(lVar13 + 0x30);
      puVar7 = param_1;
      (*pcVar14)(param_1,uVar4,lVar6);
      if (1 < (uint)puVar7) {
        if (uVar5 < 2) goto LAB_104882578;
LAB_1048826d4:
        puVar7 = param_2;
        (*pcVar14)(param_2,uVar4,lVar6);
        iVar3 = 0;
        if ((int)puVar7 != 0) {
          iVar3 = (int)puVar7 + -1;
        }
        if (iVar3 == 0) {
LAB_1048826f0:
          puVar7 = param_2;
          (**(code **)(lVar13 + 0x30))(param_2,1,lVar6);
          if ((int)puVar7 == 0) {
            (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar6);
            (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar6);
          }
          else {
            _memcpy(param_1,param_2,lVar9);
          }
          if (1 < uVar5) {
            return param_1;
          }
          if (uVar12 < 4) {
            uVar5 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >>
                    (ulong)(uVar12 << 3 & 0x1f);
            if (0xfe < uVar5) {
              if (0xfffe < uVar5) {
                pbVar1 = (byte *)((long)param_1 + lVar9);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                return param_1;
              }
              ((byte *)((long)param_1 + lVar9))[0] = 0;
              ((byte *)((long)param_1 + lVar9))[1] = 0;
              return param_1;
            }
            if (uVar5 == 0) {
              return param_1;
            }
          }
          *(byte *)((long)param_1 + lVar9) = 0;
          return param_1;
        }
        goto LAB_1048828e8;
      }
    }
    if (uVar5 < 2) {
LAB_1048825ec:
      if (uVar12 < 4) {
        uVar11 = (~(-1 << (ulong)(uVar12 << 3 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar12 << 3 & 0x1f);
        if (uVar11 < 0xff) {
          if (uVar11 == 0) goto LAB_104882660;
          goto LAB_10488261c;
        }
        if (uVar11 < 0xffff) {
          uVar11 = (uint)*(ushort *)((long)param_2 + lVar9);
        }
        else {
          uVar11 = *(uint *)((long)param_2 + lVar9);
        }
      }
      else {
LAB_10488261c:
        uVar11 = (uint)*(byte *)((long)param_2 + lVar9);
      }
      if (uVar11 == 0) goto LAB_104882660;
      uVar4 = 0;
      if (uVar12 < 4) {
        uVar4 = uVar11 - 1 << (ulong)((uVar12 & 3) << 3);
      }
      if (uVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 4;
        if (uVar12 < 4) {
          uVar11 = uVar12;
        }
        if ((int)uVar11 < 3) {
          if (uVar11 == 1) {
            uVar11 = (uint)(byte)*param_2;
          }
          else {
            uVar11 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar11 == 3) {
          uVar11 = (uint)(uint3)*param_2;
        }
        else {
          uVar11 = *param_2;
        }
      }
      if (uVar5 + (uVar11 | uVar4) != -1) {
LAB_104882688:
        puVar7 = param_1;
        (**(code **)(lVar13 + 0x30))(param_1,1,lVar6);
        if ((int)puVar7 == 0) {
          (**(code **)(lVar13 + 8))(param_1,lVar6);
        }
        if (1 < uVar5) goto LAB_10488293c;
        if (uVar12 < 4) goto LAB_1048828f8;
LAB_1048826c0:
        uVar10 = 1;
        goto LAB_104882938;
      }
    }
    else {
LAB_104882660:
      if (1 < uVar4) {
        puVar7 = param_2;
        (**(code **)(lVar13 + 0x30))(param_2,uVar4,lVar6);
        iVar3 = 0;
        if ((int)puVar7 != 0) {
          iVar3 = (int)puVar7 + -1;
        }
        if (iVar3 != 0) goto LAB_104882688;
      }
    }
    pcVar14 = *(code **)(lVar13 + 0x30);
    puVar7 = param_1;
    (*pcVar14)(param_1,1,lVar6);
    puVar8 = param_2;
    (*pcVar14)(param_2,1,lVar6);
    if ((int)puVar7 == 0) {
      if ((int)puVar8 == 0) {
        (**(code **)(lVar13 + 0x28))(param_1,param_2,lVar6);
        return param_1;
      }
      (**(code **)(lVar13 + 8))(param_1,lVar6);
    }
    else if ((int)puVar8 == 0) {
      (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar6);
      (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar6);
      return param_1;
    }
  }
LAB_10488293c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar9);
  return param_1;
}



/* Entry: 10488297c; end: 104882b2b;  */

int FUN_10488297c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  uVar1 = 0;
  if (2 < uVar2) {
    uVar1 = uVar2 - 3;
  }
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (uVar2 == 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar3 < 2) {
    if ((uint)uVar7 < 4) {
      uVar6 = (uint)uVar7 << 3;
      uVar3 = (~(-1 << (ulong)(uVar6 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar6 & 0x1f);
      uVar8 = 2;
      if (0xfffe < uVar3) {
        uVar8 = 4;
      }
      if (uVar3 < 0xff) {
        uVar8 = (ulong)(uVar3 != 0);
      }
    }
    else {
      uVar8 = 1;
    }
    uVar7 = uVar8 + uVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_104882ab0;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar9 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_104882ab0;
      goto LAB_104882a48;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_104882a48:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar2) + 1;
  }
LAB_104882ab0:
  if (uVar2 < 4) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  if (2 < (uint)param_1) {
    return (uint)param_1 - 3;
  }
  return 0;
}



/* Entry: 104882b2c; end: 104882dfb;  */

void FUN_104882b2c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  byte bVar13;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  lVar7 = *(long *)(lVar4 + -8);
  uVar8 = *(uint *)(lVar7 + 0x54);
  uVar2 = 0;
  if (uVar8 != 0) {
    uVar2 = uVar8 - 1;
  }
  uVar5 = 0;
  if (2 < uVar8) {
    uVar5 = uVar8 - 3;
  }
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar11 = lVar6;
  if (uVar8 == 0) {
    lVar11 = lVar6 + 1;
  }
  if (uVar2 < 2) {
    if ((uint)lVar11 < 4) {
      uVar10 = (uint)lVar11 << 3;
      uVar10 = (~(-1 << (ulong)(uVar10 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar10 & 0x1f);
      uVar9 = 2;
      if (0xfffe < uVar10) {
        uVar9 = 4;
      }
      if (uVar10 < 0xff) {
        uVar9 = (ulong)(uVar10 != 0);
      }
    }
    else {
      uVar9 = 1;
    }
    lVar11 = uVar9 + lVar11;
  }
  uVar10 = (uint)lVar11;
  if (param_3 < uVar5 || param_3 - uVar5 == 0) {
    bVar13 = 0;
  }
  else if (uVar10 < 4) {
    uVar1 = ((param_3 - uVar5) + ~(-1 << (ulong)(uVar10 << 3 & 0x1f)) >> (ulong)(uVar10 << 3 & 0x1f)
            ) + 1;
    bVar13 = 2;
    if (0xffff < uVar1) {
      bVar13 = 4;
    }
    if (uVar1 < 0x100) {
      bVar13 = 1 < uVar1;
    }
  }
  else {
    bVar13 = 1;
  }
  if (uVar5 < param_2) {
    param_2 = param_2 + ~uVar5;
    if (uVar10 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar11);
        uVar3 = (undefined2)uVar2;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar11);
      *param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar13 < 2) {
      if (bVar13 != 0) {
        *(char *)((long)param_1 + lVar11) = (char)iVar12;
      }
    }
    else if (bVar13 == 2) {
      *(short *)((long)param_1 + lVar11) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + lVar11) = iVar12;
    }
  }
  else {
    if (bVar13 < 2) {
      if (bVar13 != 0) {
        *(undefined1 *)((long)param_1 + lVar11) = 0;
      }
    }
    else if (bVar13 == 2) {
      *(undefined2 *)((long)param_1 + lVar11) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar11) = 0;
    }
    if ((param_2 != 0) && (3 < uVar8)) {
      if (param_2 + 2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000104882d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(param_1,param_2 + 3,uVar8,lVar4);
        return;
      }
      uVar5 = (uint)lVar6;
      uVar8 = 0xffffffff;
      if (uVar5 < 4) {
        uVar8 = ~(-1 << (ulong)((uVar5 & 3) << 3));
      }
      if (uVar5 != 0) {
        uVar8 = uVar8 & (param_2 - uVar2) + 1;
        uVar2 = 4;
        if (uVar5 < 4) {
          uVar2 = uVar5;
        }
        _bzero(param_1);
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            *(char *)param_1 = (char)uVar8;
          }
          else {
            *(short *)param_1 = (short)uVar8;
          }
        }
        else if (uVar2 == 3) {
          *(short *)param_1 = (short)uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar8 >> 0x10);
        }
        else {
          *param_1 = uVar8;
        }
      }
    }
  }
  return;
}



/* Entry: 104882dfc; end: 104882f43;  */

int FUN_104882dfc(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  lVar6 = *(long *)(lVar5 + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar2 - 1;
  }
  uVar8 = *(ulong *)(lVar6 + 0x40);
  if (uVar2 == 0) {
    uVar8 = uVar8 + 1;
  }
  if (1 < uVar1) goto LAB_104882ec4;
  uVar7 = (uint)uVar8;
  uVar3 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar9 = (~(-1 << (ulong)(uVar3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar3 & 0x1f);
    if (uVar9 < 0xff) {
      if (uVar9 == 0) goto LAB_104882ec4;
      goto LAB_104882e84;
    }
    if (uVar9 < 0xffff) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar8);
    }
  }
  else {
LAB_104882e84:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar8);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar7 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar3 = 4;
      if (uVar7 < 4) {
        uVar3 = uVar7;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar8 = (ulong)(byte)*param_1;
        }
        else {
          uVar8 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar8 = (ulong)(uint3)*param_1;
      }
      else {
        uVar8 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar8 | uVar2) + 1;
  }
LAB_104882ec4:
  if (uVar2 < 2) {
    iVar4 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x30))(param_1,uVar2,lVar5);
    iVar4 = 0;
    if ((int)param_1 != 0) {
      iVar4 = (int)param_1 + -1;
    }
  }
  return iVar4;
}



/* Entry: 104882f44; end: 104882f47;  */

void FUN_104882f44(void)

{
  return;
}



/* Entry: 104882f48; end: 10488312b;  */

void FUN_104882f48(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),&UNK_10e821b74,
             &UNK_10e821b7c);
  bVar5 = 0;
  lVar7 = *(long *)(lVar6 + -8);
  uVar2 = *(uint *)(lVar7 + 0x54);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar2 - 1;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  if (uVar2 == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar9 = (uint)lVar8;
  if (uVar1 < 2) {
    if (uVar9 < 4) {
      uVar3 = (~(-1 << (ulong)(uVar9 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar9 << 3 & 0x1f);
      bVar5 = 2;
      if (0xfffe < uVar3) {
        bVar5 = 4;
      }
      if (uVar3 < 0xff) {
        bVar5 = uVar3 != 0;
      }
    }
    else {
      bVar5 = 1;
    }
  }
  if (uVar1 < param_2) {
    param_2 = param_2 + ~uVar1;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar8);
        uVar4 = (undefined2)uVar1;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar8);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + lVar8) = (char)iVar10;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + lVar8) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar8) = iVar10;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar8) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar8) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar8) = 0;
    }
    if ((param_2 != 0) && (1 < uVar2)) {
                    /* WARNING: Could not recover jumptable at 0x0001048830c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x38))(param_1,param_2 + 1,uVar2,lVar6);
      return;
    }
  }
  return;
}



/* Entry: 10488312c; end: 104883487;  */

void FUN_10488312c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar7 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar7 + 0x50);
  uVar2 = *(undefined8 *)(lVar7 + 0x58);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,&UNK_10e821b74,&UNK_10e821b7c);
  lVar11 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar10 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar7 + 0x70));
  _swift_getObjectType();
  puVar4 = &UNK_1107aa1f0;
  uStack_68 = uVar8;
  _swift_allocObject(&UNK_1107aa1f0,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  (**(code **)(lVar11 + 0x10))(auStack_70 + -extraout_x8,param_1,lVar3);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar9 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1107aa240;
  _swift_allocObject(&UNK_1107aa240,uVar9 + lVar10,uVar6 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  (**(code **)(lVar11 + 0x20))(puVar5 + uVar9,auStack_70 + -extraout_x8,lVar3);
  _swift_retain(puVar4);
  func_0x00010090569c(FUN_1048838dc,puVar5,uStack_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  return;
}



/* Entry: 104883488; end: 10488353f;  */

void FUN_104883488(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  uVar3 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar4 + 0x70));
  _swift_getObjectType(uVar3);
  puVar1 = &UNK_1107aa1f0;
  _swift_allocObject(&UNK_1107aa1f0,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &UNK_1107aa218;
  _swift_allocObject(&UNK_1107aa218,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar4 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(lVar4 + 0x58);
  *(undefined **)(puVar2 + 0x20) = puVar1;
  _swift_retain(puVar1);
  func_0x00010090569c(FUN_1048838d0,puVar2,uVar3);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 104883540; end: 104883843;  */

void FUN_104883540(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_3,param_2,&UNK_10e821b74,&UNK_10e821b7c);
  lStack_c8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar2 = 0;
  lStack_c0 = (long)&lStack_d0 - extraout_x8;
  __sSqMa(0,lVar1);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = ((long)&lStack_d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar8 - extraout_x12;
  lVar3 = 0;
  uStack_b0 = param_2;
  func_0x000104881420(0,param_2,param_3);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar6 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  plVar4 = (long *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar7 = *(long *)(*plVar4 + 0x80);
  lStack_d0 = param_3;
  _swift_beginAccess((long)plVar4 + lVar7,auStack_90,0,0);
  (**(code **)(lVar11 + 0x10))(lVar6,(long)plVar4 + lVar7,lVar3);
  lVar5 = lVar6;
  (**(code **)(lVar9 + 0x30))(lVar6,2,lVar2);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))(lVar12,lVar6,lVar2);
    (**(code **)(lVar9 + 0x10))(lVar8,lVar12,lVar2);
    lVar6 = lStack_c8;
    lVar5 = lVar8;
    (**(code **)(lStack_c8 + 0x30))(lVar8,1,lVar1);
    if ((int)lVar5 == 1) {
      pcVar10 = *(code **)(lVar9 + 8);
      (*pcVar10)(lVar12,lVar2);
      (*pcVar10)(lVar8,lVar2);
    }
    else {
      (**(code **)(lVar6 + 0x20))(lStack_c0,lVar8,lVar1);
      (**(code **)(lStack_d0 + 0x18))(*(undefined8 *)(*plVar4 + 0x68),lStack_c0,uStack_b0);
      (**(code **)(lVar6 + 8))(lStack_c0,lVar1);
      (**(code **)(lVar9 + 8))(lVar12,lVar2);
    }
  }
  else if ((int)lVar5 != 1) goto LAB_10488381c;
  lVar1 = lStack_b8;
  (**(code **)(lVar9 + 0x38))(lStack_b8,2,2,lVar2);
  _swift_beginAccess((long)plVar4 + lVar7,auStack_a8,0x21,0);
  (**(code **)(lVar11 + 0x28))((long)plVar4 + lVar7,lVar1,lVar3);
  _swift_endAccess(auStack_a8);
  (**(code **)(lStack_d0 + 0x20))(*(undefined8 *)(*plVar4 + 0x68),uStack_b0);
LAB_10488381c:
  _swift_release(plVar4);
  return;
}



/* Entry: 104883844; end: 10488388f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104883844(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154c0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00010488388c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 104883890; end: 1048838cf;  */

void FUN_104883890(void)

{
  FUN_10488312c();
  return;
}



/* Entry: 1048838d0; end: 1048838db;  */

void FUN_1048838d0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar6,uVar1,&UNK_10e821b74,&UNK_10e821b7c);
  lStack_c8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar3 = 0;
  lStack_c0 = (long)&lStack_d0 - extraout_x8;
  __sSqMa(0,lVar2);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = ((long)&lStack_d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar9 - extraout_x12;
  lVar4 = 0;
  uStack_b0 = uVar1;
  func_0x000104881420(0,uVar1,lVar6);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_00;
  _swift_beginAccess(lVar7 + 0x10,auStack_78,0,0);
  plVar5 = (long *)(lVar7 + 0x10);
  _swift_weakLoadStrong();
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar7 = *(long *)(*plVar5 + 0x80);
  lStack_d0 = lVar6;
  _swift_beginAccess((long)plVar5 + lVar7,auStack_90,0,0);
  (**(code **)(lVar12 + 0x10))(lVar8,(long)plVar5 + lVar7,lVar4);
  lVar6 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,2,lVar3);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x20))(lVar13,lVar8,lVar3);
    (**(code **)(lVar10 + 0x10))(lVar9,lVar13,lVar3);
    lVar6 = lStack_c8;
    lVar8 = lVar9;
    (**(code **)(lStack_c8 + 0x30))(lVar9,1,lVar2);
    if ((int)lVar8 == 1) {
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(lVar13,lVar3);
      (*pcVar11)(lVar9,lVar3);
    }
    else {
      (**(code **)(lVar6 + 0x20))(lStack_c0,lVar9,lVar2);
      (**(code **)(lStack_d0 + 0x18))(*(undefined8 *)(*plVar5 + 0x68),lStack_c0,uStack_b0);
      (**(code **)(lVar6 + 8))(lStack_c0,lVar2);
      (**(code **)(lVar10 + 8))(lVar13,lVar3);
    }
  }
  else if ((int)lVar6 != 1) goto LAB_10488381c;
  lVar6 = lStack_b8;
  (**(code **)(lVar10 + 0x38))(lStack_b8,2,2,lVar3);
  _swift_beginAccess((long)plVar5 + lVar7,auStack_a8,0x21,0);
  (**(code **)(lVar12 + 0x28))((long)plVar5 + lVar7,lVar6,lVar4);
  _swift_endAccess(auStack_a8);
  (**(code **)(lStack_d0 + 0x20))(*(undefined8 *)(*plVar5 + 0x68),uStack_b0);
LAB_10488381c:
  _swift_release(plVar5);
  return;
}



/* Entry: 1048838dc; end: 10488393f;  */

void FUN_1048838dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,&UNK_10e821b74,&UNK_10e821b7c);
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar7 = unaff_x20 + (uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff));
  lVar3 = 0;
  func_0x000104881420(0,uVar1,uVar2);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar11 - extraout_x12;
  _swift_beginAccess(lVar8 + 0x10,auStack_78,0,0);
  plVar4 = (long *)(lVar8 + 0x10);
  _swift_weakLoadStrong();
  if (plVar4 != (long *)0x0) {
    lVar13 = *(long *)(*plVar4 + 0x80);
    _swift_beginAccess((long)plVar4 + lVar13,auStack_90,0,0);
    (**(code **)(lVar12 + 0x10))(lVar10,(long)plVar4 + lVar13,lVar3);
    lVar5 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,uVar2,uVar1,&UNK_10e821b74,&UNK_10e821b7c);
    lVar6 = 0;
    __sSqMa(0,lVar5);
    lVar14 = *(long *)(lVar6 + -8);
    lVar8 = lVar10;
    (**(code **)(lVar14 + 0x30))(lVar10,2,lVar6);
    if ((int)lVar8 == 0) {
      lVar8 = *(long *)(lVar5 + -8);
      (**(code **)(lVar8 + 0x10))(puVar11,lVar7,lVar5);
      (**(code **)(lVar8 + 0x38))(puVar11,0,1,lVar5);
      (**(code **)(lVar14 + 0x38))(puVar11,0,2,lVar6);
      _swift_beginAccess((long)plVar4 + lVar13,auStack_a8,0x21,0);
      (**(code **)(lVar12 + 0x28))((long)plVar4 + lVar13,puVar11,lVar3);
      _swift_endAccess(auStack_a8);
      _swift_release(plVar4);
      (**(code **)(lVar14 + 8))(lVar10,lVar6);
    }
    else {
      if ((int)lVar8 == 1) {
        FUN_104880e9c(lVar7);
      }
      _swift_release(plVar4);
    }
  }
  return;
}



/* Entry: 104883940; end: 104883953;  */

void FUN_104883940(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,&UNK_10e821b74,&UNK_10e821b7c);
  lStack_b0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar4 = 0;
  lStack_b8 = (long)&lStack_c0 - extraout_x8;
  __sSqMa(0,lVar3);
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = ((long)&lStack_c0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12;
  lVar5 = 0;
  func_0x000104881420(0,uVar1,uVar2);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - extraout_x12_00;
  _swift_beginAccess(lVar7 + 0x10,auStack_78,0,0);
  plVar6 = (long *)(lVar7 + 0x10);
  _swift_weakLoadStrong();
  if (plVar6 != (long *)0x0) {
    lVar13 = *(long *)(*plVar6 + 0x80);
    lStack_c0 = lVar12;
    _swift_beginAccess((long)plVar6 + lVar13,auStack_90,0,0);
    (**(code **)(lVar9 + 0x10))(lVar14,(long)plVar6 + lVar13,lVar5);
    lVar7 = lVar14;
    (**(code **)(lVar15 + 0x30))(lVar14,2,lVar4);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 0x20))(lVar10,lVar14,lVar4);
      (**(code **)(lVar15 + 0x10))(lVar11,lVar10,lVar4);
      lVar12 = lStack_b0;
      lVar14 = lVar11;
      (**(code **)(lStack_b0 + 0x30))(lVar11,1,lVar3);
      lVar7 = lStack_b8;
      if ((int)lVar14 != 1) {
        (**(code **)(lVar12 + 0x20))(lStack_b8,lVar11,lVar3);
        FUN_104880e9c(lVar7);
        _swift_release(plVar6);
        (**(code **)(lVar12 + 8))(lVar7,lVar3);
        (**(code **)(lVar15 + 8))(lVar10,lVar4);
        return;
      }
      pcVar8 = *(code **)(lVar15 + 8);
      (*pcVar8)(lVar10,lVar4);
      (*pcVar8)(lVar11,lVar4);
      lVar3 = lStack_c0;
      (**(code **)(lVar15 + 0x38))(lStack_c0,1,2,lVar4);
      _swift_beginAccess((long)plVar6 + lVar13,auStack_a8,0x21,0);
      (**(code **)(lVar9 + 0x28))((long)plVar6 + lVar13,lVar3,lVar5);
      _swift_endAccess(auStack_a8);
    }
    _swift_release(plVar6);
  }
  return;
}



/* Entry: 104883954; end: 1048839f3;  */

void FUN_104883954(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048839f4; end: 104883a03;  */

void FUN_1048839f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104883a04; end: 104883a5b;  */

void FUN_104883a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_2);
  return;
}



/* Entry: 104883a5c; end: 104883b4f;  */

undefined1  [16] FUN_104883a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  
  plVar7 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_104884308(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  func_0x0001000b693c(param_2,param_3);
  lVar8 = unaff_x20[3];
  lVar5 = unaff_x20[4];
  _swift_unknownObjectRetain(lVar5);
  uVar2 = param_2;
  FUN_104884734(lVar8,param_2,lVar5);
  _swift_release(param_2);
  _swift_unknownObjectRelease(lVar5);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar3 = &DAT_10dd3c1b8;
  uStack_58 = uVar2;
  _swift_getWitnessTable(&DAT_10dd3c1b8,uVar1);
  puVar4 = &uStack_58;
  (*pcVar6)(puVar4,uVar1,puVar3);
  _swift_release(uVar2);
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 104883b50; end: 104883b57;  */

void FUN_104883b50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104883b58; end: 104883b8b;  */

void FUN_104883b58(long param_1)

{
  func_0x0001000d2374();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 104883b8c; end: 104883c07;  */

long * FUN_104883b8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_104883c08(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  func_0x0001000c0ea8();
  _swift_retain();
  _swift_unknownObjectRetain(param_2);
  return unaff_x20;
}



/* Entry: 104883c08; end: 104883c17;  */

void FUN_104883c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e82133c);
  return;
}



/* Entry: 104883c18; end: 104883c57;  */

void FUN_104883c18(void)

{
  undefined *puVar1;
  
  if (puRam0000000113095c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3bff0;
  _swift_getWitnessTable(&UNK_10dd3bff0,&UNK_1107aa308);
  puRam0000000113095c00 = puVar1;
  return;
}



/* Entry: 104883c58; end: 104883d47;  */

uint FUN_104883c58(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 104883d48; end: 104883d93;  */

void FUN_104883d48(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_18 = &UNK_10dd3c0e8;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 104883d94; end: 104883d97;  */

void FUN_104883d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 104883d98; end: 104883e3f;  */

void FUN_104883d98(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = &UNK_10dd3c148;
    puStack_48 = PTR___sBoWV_11034d678 + 0x40;
    puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_30 = &UNK_10dd3c160;
    puStack_28 = &UNK_10dd3c178;
    puStack_38 = puStack_48;
    _swift_initClassMetadata2(param_1,0,7,&lStack_58,param_1 + 0x58);
  }
  return;
}



/* Entry: 104883e40; end: 104884063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104883e40(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar10 = *unaff_x20;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = _DAT_113095ca8;
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)((long)unaff_x20 + _DAT_113095ca8);
  if (lVar8 != 0) {
    _swift_retain(lVar8);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar8);
  }
  puVar3 = &UNK_1107aa518;
  _swift_allocObject(&UNK_1107aa518,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &UNK_1107aa540;
  _swift_allocObject(&UNK_1107aa540,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x50);
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_70 = FUN_10488452c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1107aa558;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar6 = ppuVar5;
  func_0x0001001c7eec();
  _swift_retain(puVar3);
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar11 = uVar9;
  func_0x0001001c7f30();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar7,&puStack_98,uVar9,uVar11,lVar2,ppuVar6);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC5flags5blockAcA0abC5FlagsV_yyXBtcfc(puVar7,ppuVar5);
  puVar4 = puStack_68;
  _swift_release(puVar3);
  _swift_release(puVar4);
  uVar9 = *(undefined8 *)((long)unaff_x20 + lVar1);
  *(undefined1 **)((long)unaff_x20 + lVar1) = puVar7;
  _swift_retain(puVar7);
  _swift_release(uVar9);
  uVar9 = *(undefined8 *)((long)unaff_x20 + _DAT_113095c88);
  _swift_getObjectType(uVar9);
  uVar11 = *(undefined8 *)((long)unaff_x20 + _DAT_113095c98);
  _swift_retain(puVar7);
  FUN_10488b6c8(uVar11,0x104884550,puVar7,uVar9);
  _swift_release_n(puVar7,2);
  return;
}



/* Entry: 104884064; end: 1048840bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104884064(void)

{
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + _DAT_113095ca0),FUN_1048844d4,auStack_50,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1048840c0; end: 1048841b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048840c0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar3 = *(long *)(*param_1 + 0x50);
  plVar1 = param_1;
  func_0x0001048844ec();
  lVar2 = 0;
  __ss6ResultOMa(0,lVar3,&UNK_1107aa308,plVar1);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  if ((*(byte *)((long)param_1 + _DAT_113095cb0) & 1) == 0) {
    FUN_104883e40();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar4,param_2,lVar3);
    _swift_storeEnumTagMultiPayload(puVar4,lVar2,0);
    func_0x000100087f6c(puVar4);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 1048841b4; end: 104884207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048841b4(void)

{
  func_0x000100087bd4(FUN_1048843a0);
  return;
}



/* Entry: 104884208; end: 104884263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104884208(long param_1)

{
  long lVar1;
  
  lVar1 = _DAT_113095cb0;
  if ((*(byte *)(param_1 + _DAT_113095cb0) & 1) == 0) {
    func_0x00010488447c();
    func_0x000100c7f554();
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  return;
}



/* Entry: 104884264; end: 1048842e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104884264(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_1138154c8;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_113095c88));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113095c90));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113095ca0));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113095ca8));
  return;
}



/* Entry: 1048842e4; end: 104884307;  */

void FUN_1048842e4(void)

{
  FUN_104884264();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104884308; end: 104884313;  */

void FUN_104884308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8213a8);
  return;
}



/* Entry: 104884314; end: 10488435f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104884314(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154c8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00010488435c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 104884360; end: 10488439f;  */

void FUN_104884360(void)

{
  FUN_104884064();
  return;
}



/* Entry: 1048843a0; end: 1048843b7;  */

void FUN_1048843a0(void)

{
  FUN_104884208();
  return;
}



/* Entry: 1048843b8; end: 10488440b;  */

void FUN_1048843b8(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_10488440c();
    _swift_release(param_1);
  }
  return;
}



/* Entry: 10488440c; end: 1048844d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10488440c(void)

{
  long unaff_x20;
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + _DAT_113095c88));
  func_0x000100bc7fa4();
  func_0x000100087bd4(FUN_10488464c);
  return;
}



/* Entry: 1048844d4; end: 10488452b;  */

void FUN_1048844d4(void)

{
  long unaff_x20;
  
  FUN_1048840c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10488452c; end: 104884553;  */

void FUN_10488452c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_10488440c();
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 104884554; end: 10488464b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104884554(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(*param_1 + 0x50);
  plVar2 = param_1;
  func_0x0001048844ec();
  lVar3 = 0;
  __ss6ResultOMa(0,uVar4,&UNK_1107aa308,plVar2);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_113095cb0;
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  if ((*(byte *)((long)param_1 + _DAT_113095cb0) & 1) == 0) {
    _swift_storeEnumTagMultiPayload(puVar5,lVar3,1);
    func_0x000100087f6c(puVar5);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
    func_0x00010488447c();
    func_0x000100c7f554();
    *(undefined1 *)((long)param_1 + lVar1) = 1;
  }
  return;
}



/* Entry: 10488464c; end: 104884663;  */

void FUN_10488464c(void)

{
  FUN_104884554();
  return;
}



/* Entry: 104884664; end: 104884733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104884664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_1138154c8);
  lVar1 = _DAT_113095ca0;
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113095ca8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113095cb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113095c90) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113095c98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113095c88) = param_3;
  _swift_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  FUN_104883e40();
  return;
}



/* Entry: 104884734; end: 10488478b;  */

void FUN_104884734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_104884664(param_1,param_2,param_3);
  return;
}



/* Entry: 10488478c; end: 104884843;  */

undefined1  [16] FUN_10488478c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  code *pcVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_48;
  
  plVar5 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_104885020(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  func_0x0001000b693c(param_2,param_3);
  func_0x0001048849b8();
  pcVar4 = *(code **)(*plVar5 + 0x58);
  puVar2 = &DAT_10dd3c260;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_10dd3c260,uVar1);
  puVar3 = &uStack_48;
  (*pcVar4)(puVar3,uVar1,puVar2);
  _swift_release(param_2);
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 104884844; end: 10488487b;  */

void FUN_104884844(undefined8 param_1)

{
  _swift_allocObject();
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10488487c; end: 104884897;  */

void FUN_10488487c(undefined8 param_1)

{
  func_0x0001000d2374();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x18,7);
  return;
}



/* Entry: 104884898; end: 1048848f7;  */

void FUN_104884898(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = 0;
  FUN_1048848f8(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x0001000c2068(param_1);
  _swift_allocObject(uVar1,0x18,7);
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 1048848f8; end: 104884907;  */

void FUN_1048848f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8213f8);
  return;
}



/* Entry: 104884908; end: 10488493b;  */

void FUN_104884908(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 10488493c; end: 10488493f;  */

void FUN_10488493c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 104884940; end: 104884a07;  */

void FUN_104884940(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&lStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 104884a08; end: 104884c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104884a08(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puVar4;
  
  lVar10 = *unaff_x20;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_98 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar11 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_a8 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(lVar10 + 0x50);
  lVar3 = *(long *)(lVar14 + -8);
  lVar10 = *(long *)(lVar3 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar12 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  _objc_opt_self();
  iVar1 = (int)puVar4;
  func_0x00010c077480();
  if (iVar1 == 0) {
    uVar5 = 0;
    func_0x0001000295c4();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar4 = &UNK_1107aa728;
    uStack_b0 = uVar5;
    _swift_allocObject(&UNK_1107aa728,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    (**(code **)(lVar3 + 0x10))(lVar15,param_1,lVar14);
    uVar9 = (ulong)*(byte *)(lVar3 + 0x50);
    uVar13 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    puVar6 = &UNK_1107aa7a0;
    _swift_allocObject(&UNK_1107aa7a0,uVar13 + lVar10,uVar9 | 7);
    *(long *)(puVar6 + 0x10) = lVar14;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    (**(code **)(lVar3 + 0x20))(puVar6 + uVar13,lVar15,lVar14);
    uStack_70 = 0x1048850dc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1107aa7b8;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    __Block_copy(ppuVar7);
    puVar4 = puStack_68;
    _swift_release(puStack_68);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar5 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = uVar5;
    func_0x0001001c7f30();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&puStack_90,uVar5,uVar8,lVar2,puVar4);
    uVar5 = uStack_b0;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar11,ppuVar7);
    __Block_release(ppuVar7);
    _objc_release(uVar5);
    (**(code **)(lStack_98 + 8))(lVar11,lVar2);
    (**(code **)(lStack_a8 + 8))(lVar12,lStack_a0);
  }
  else {
    func_0x000100087f6c(param_1);
  }
  return;
}



/* Entry: 104884c9c; end: 104884d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104884c9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_113095de8);
    _swift_retain(uVar1);
    _swift_release(param_1);
    func_0x000100087f6c(param_2);
    _swift_release(uVar1);
  }
  return;
}



/* Entry: 104884d1c; end: 104884f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104884d1c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puVar4;
  
  lVar12 = *unaff_x20;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  _objc_opt_self();
  iVar1 = (int)puVar4;
  func_0x00010c077480();
  if (iVar1 == 0) {
    uVar5 = 0;
    func_0x0001000295c4(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar4 = &UNK_1107aa728;
    _swift_allocObject(&UNK_1107aa728,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    puVar6 = &UNK_1107aa750;
    _swift_allocObject(&UNK_1107aa750,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(lVar12 + 0x50);
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcStack_70 = FUN_1048850b8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1107aa768;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    __Block_copy(ppuVar7);
    puVar4 = puStack_68;
    _swift_release(puStack_68);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar9 = uVar8;
    func_0x0001001c7f30();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&puStack_90,uVar8,uVar9,lVar2,puVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar11,lVar10,ppuVar7);
    __Block_release(ppuVar7);
    _objc_release(uVar5);
    (**(code **)(lVar13 + 8))(lVar10,lVar2);
    (**(code **)(lVar14 + 8))(lVar11,lVar3);
  }
  else {
    func_0x000100c7f554();
  }
  return;
}



/* Entry: 104884f3c; end: 104884ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104884f3c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_113095de8);
    _swift_retain(uVar1);
    _swift_release(param_1);
    func_0x000100c7f554();
    _swift_release(uVar1);
  }
  return;
}



/* Entry: 104884ffc; end: 10488501f;  */

void FUN_104884ffc(void)

{
  func_0x000104884fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104885020; end: 10488502b;  */

void FUN_104885020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e821454);
  return;
}



/* Entry: 10488502c; end: 104885077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10488502c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154d0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000104885074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 104885078; end: 1048850b7;  */

void FUN_104885078(void)

{
  FUN_104884a08();
  return;
}



/* Entry: 1048850b8; end: 1048850ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048850b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_113095de8);
    _swift_retain(uVar2);
    _swift_release(lVar1);
    func_0x000100c7f554();
    _swift_release(uVar2);
  }
  return;
}



/* Entry: 104885100; end: 104885147;  */

void FUN_104885100(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 104885148; end: 1048851fb;  */

undefined1  [16] FUN_104885148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  
  FUN_104885914(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  _swift_retain(lVar1);
  _swift_retain(lVar2);
  func_0x0001000b693c(param_2,param_3);
  lVar3 = lVar1;
  FUN_104885c3c(lVar1,lVar2,param_2);
  _swift_release(lVar1);
  _swift_release(lVar2);
  _swift_release(param_2);
  auVar4._8_8_ = &PTR_DAT_1107aa978;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 1048851fc; end: 104885203;  */

void FUN_1048851fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104885204; end: 104885237;  */

void FUN_104885204(long param_1)

{
  func_0x0001000d2374();
  _swift_release(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x20,7);
  return;
}



/* Entry: 104885238; end: 1048852ab;  */

long * FUN_104885238(long *param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_1048852ac(0,*(undefined8 *)(*unaff_x20 + 0x50),*(undefined8 *)(*param_1 + 0x50));
  _swift_allocObject();
  *(long **)(lVar1 + 0x18) = param_1;
  func_0x0001000c0ea8();
  _swift_retain();
  _swift_retain(param_1);
  return unaff_x20;
}



/* Entry: 1048852ac; end: 1048852bb;  */

void FUN_1048852ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8214a4);
  return;
}


