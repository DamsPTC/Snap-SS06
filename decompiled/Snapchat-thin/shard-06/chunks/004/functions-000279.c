/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048852bc; end: 1048852ff;  */

void FUN_1048852bc(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 104885300; end: 104885303;  */

void FUN_104885300(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 104885304; end: 10488538f;  */

void FUN_104885304(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_48 = PTR___sBoWV_11034d678 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x58);
  lVar1 = 0x13f;
  puStack_40 = puStack_48;
  puStack_38 = puStack_48;
  __sSqMa();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dd3c318;
    _swift_initClassMetadata2(param_1,0,5,&puStack_48,param_1 + 0x60);
  }
  return;
}



/* Entry: 104885390; end: 1048854cf;  */

void FUN_104885390(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  __sSqMa(0,param_4);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  plVar2 = (long *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (plVar2 != (long *)0x0) {
    lVar3 = plVar2[4];
    _swift_retain(lVar3);
    func_0x00010006c804();
    _swift_release(lVar3);
    lVar3 = *(long *)(param_4 + -8);
    (**(code **)(lVar3 + 0x10))(puVar4,param_1,param_4);
    (**(code **)(lVar3 + 0x38))(puVar4,0,1,param_4);
    lVar3 = *(long *)(*plVar2 + 0x78);
    _swift_beginAccess((long)plVar2 + lVar3,auStack_80,0x21,0);
    (**(code **)(lVar5 + 0x28))((long)plVar2 + lVar3,puVar4,lVar1);
    _swift_endAccess(auStack_80);
    lVar1 = plVar2[4];
    _swift_retain(lVar1);
    func_0x000100070bfc();
    _swift_release(plVar2);
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 1048854d0; end: 10488552b;  */

void FUN_1048854d0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_10488552c(param_1);
    _swift_release(param_2);
  }
  return;
}



/* Entry: 10488552c; end: 10488575f;  */

void FUN_10488552c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x12;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lStack_98 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  lVar4 = 0;
  uStack_90 = param_1;
  _swift_getTupleTypeMetadata2(0,lStack_98,lVar1,0,0);
  lStack_88 = *(long *)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = *(long *)(lVar1 + -8);
  puStack_a0 = auStack_b0 + -extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)(auStack_b0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_a8 = lVar7;
  __sSqMa(0,lVar1);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar7 - extraout_x12;
  func_0x00010006c804();
  lVar4 = *(long *)(*unaff_x20 + 0x78);
  _swift_beginAccess((long)unaff_x20 + lVar4,auStack_78,0,0);
  pcVar10 = *(code **)(lVar9 + 0x10);
  (*pcVar10)(lVar11,(long)unaff_x20 + lVar4,lVar5);
  func_0x000100070bfc();
  (*pcVar10)(lVar7,lVar11,lVar5);
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar1);
  lVar4 = lStack_a8;
  if ((int)lVar6 == 1) {
    pcVar10 = *(code **)(lVar9 + 8);
    (*pcVar10)(lVar11,lVar5);
    (*pcVar10)(lVar7,lVar5);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lStack_a8,lVar7,lVar1);
    lVar6 = lStack_80;
    puVar3 = puStack_a0;
    iVar2 = *(int *)(lStack_80 + 0x30);
    (**(code **)(*(long *)(lStack_98 + -8) + 0x10))(puStack_a0,uStack_90);
    (**(code **)(lVar8 + 0x10))(puVar3 + iVar2,lVar4,lVar1);
    func_0x000100087f6c(puVar3);
    (**(code **)(lStack_88 + 8))(puVar3,lVar6);
    (**(code **)(lVar8 + 8))(lVar4,lVar1);
    (**(code **)(lVar9 + 8))(lVar11,lVar5);
  }
  return;
}



/* Entry: 104885760; end: 1048857b3;  */

void FUN_104885760(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_1048857b4();
    _swift_release(param_1);
  }
  return;
}



/* Entry: 1048857b4; end: 10488582b;  */

void FUN_1048857b4(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  plVar1 = (long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    _swift_getObjectType(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    _swift_unknownObjectRetain(lVar3);
    (*pcVar5)(lVar2,lVar4);
    _swift_unknownObjectRelease(lVar3);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 10488582c; end: 1048858ef;  */

void FUN_10488582c(void)

{
  long unaff_x20;
  
  func_0x000100087bd4(FUN_104885924,*(undefined8 *)(unaff_x20 + 0x18),PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1048858f0; end: 104885913;  */

void FUN_1048858f0(void)

{
  func_0x000104885878();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104885914; end: 104885923;  */

void FUN_104885914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e821510);
  return;
}



/* Entry: 104885924; end: 10488593b;  */

void FUN_104885924(void)

{
  func_0x0001007b79fc();
  return;
}



/* Entry: 10488593c; end: 104885c3b;  */

void FUN_10488593c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *unaff_x20;
  lVar2 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  lVar3 = 0;
  func_0x00010006a340();
  lVar12 = lVar3;
  _swift_allocObject();
  func_0x00010006a360();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long *)(lVar2 + 0x10) = lVar12;
  *(undefined **)(lVar2 + 0x18) = puVar8;
  unaff_x20[3] = lVar2;
  _swift_allocObject(lVar3,0x18,7);
  func_0x00010006a360();
  unaff_x20[4] = lVar3;
  lVar12 = *(long *)(lVar13 + 0x58);
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78),1,1,lVar12);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  *puVar1 = 0;
  puVar1[1] = 0;
  unaff_x20[2] = param_3;
  puVar8 = &UNK_1107aa9a8;
  puVar4 = puVar8;
  _swift_allocObject(&UNK_1107aa9a8,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar5 = &UNK_1107aa9d0;
  _swift_allocObject(&UNK_1107aa9d0,0x28,7);
  uVar14 = *(undefined8 *)(lVar13 + 0x50);
  *(undefined8 *)(puVar5 + 0x10) = uVar14;
  *(long *)(puVar5 + 0x18) = lVar12;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  _swift_retain(param_3);
  _swift_retain();
  _swift_retain(puVar4);
  pcVar6 = FUN_104885c8c;
  puVar7 = puVar5;
  func_0x0001000b6504();
  _swift_release(puVar4);
  _swift_release(puVar5);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  uVar10 = *puVar1;
  *puVar1 = pcVar6;
  puVar1[1] = puVar7;
  _swift_unknownObjectRetain(pcVar6);
  _swift_unknownObjectRelease(uVar10);
  _swift_getObjectType(pcVar6);
  lVar2 = unaff_x20[3];
  pcVar11 = *(code **)(puVar7 + 0x10);
  _swift_retain(lVar2);
  (*pcVar11)();
  _swift_release(lVar2);
  puVar7 = puVar8;
  _swift_allocObject(&UNK_1107aa9a8,0x18,7);
  _swift_weakInit(puVar7 + 0x10);
  puVar5 = &UNK_1107aa9f8;
  _swift_allocObject(&UNK_1107aa9f8,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar14;
  *(long *)(puVar5 + 0x18) = lVar12;
  *(undefined **)(puVar5 + 0x20) = puVar7;
  _swift_allocObject(&UNK_1107aa9a8,0x18,7);
  _swift_weakInit(puVar8 + 0x10);
  _swift_retain(puVar7);
  _swift_release();
  puVar4 = &UNK_1107aaa20;
  _swift_allocObject(&UNK_1107aaa20,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar14;
  *(long *)(puVar4 + 0x18) = lVar12;
  *(undefined **)(puVar4 + 0x20) = puVar8;
  _swift_retain(puVar8);
  uVar10 = 0x104885c98;
  puVar9 = puVar5;
  func_0x0001000d4d28(0x104885c98,puVar5,0x104885ca4,puVar4);
  _swift_release(puVar7);
  _swift_release(puVar8);
  _swift_release(puVar5);
  _swift_release(puVar4);
  _swift_getObjectType(uVar10);
  lVar12 = unaff_x20[3];
  pcVar11 = *(code **)(puVar9 + 0x10);
  _swift_retain(lVar12);
  (*pcVar11)();
  _swift_unknownObjectRelease(pcVar6);
  _swift_unknownObjectRelease(uVar10);
  _swift_release(lVar12);
  return;
}



/* Entry: 104885c3c; end: 104885c8b;  */

void FUN_104885c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_10488593c(param_1,param_2,param_3);
  return;
}



/* Entry: 104885c8c; end: 104885cef;  */

void FUN_104885c8c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar1 = 0;
  __sSqMa(0,lVar4,*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  _swift_beginAccess(lVar3 + 0x10,auStack_68,0,0);
  plVar2 = (long *)(lVar3 + 0x10);
  _swift_weakLoadStrong();
  if (plVar2 != (long *)0x0) {
    lVar3 = plVar2[4];
    _swift_retain(lVar3);
    func_0x00010006c804();
    _swift_release(lVar3);
    lVar3 = *(long *)(lVar4 + -8);
    (**(code **)(lVar3 + 0x10))(puVar5,param_1,lVar4);
    (**(code **)(lVar3 + 0x38))(puVar5,0,1,lVar4);
    lVar4 = *(long *)(*plVar2 + 0x78);
    _swift_beginAccess((long)plVar2 + lVar4,auStack_80,0x21,0);
    (**(code **)(lVar6 + 0x28))((long)plVar2 + lVar4,puVar5,lVar1);
    _swift_endAccess(auStack_80);
    lVar4 = plVar2[4];
    _swift_retain(lVar4);
    func_0x000100070bfc();
    _swift_release(plVar2);
    _swift_release(lVar4);
  }
  return;
}



/* Entry: 104885cf0; end: 104885d2b;  */

void FUN_104885cf0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 104885d2c; end: 104885d9f;  */

/* WARNING: Possible PIC construction at 0x000104885d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104885d70) */

void FUN_104885d2c(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_retain(uVar2);
  (*pcVar1)();
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104885da0; end: 104885def;  */

long FUN_104885da0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001000b6d30();
  _swift_allocObject();
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  func_0x000100b64c10(param_1,param_2);
  return lVar1;
}



/* Entry: 104885df0; end: 104885df3;  */

long FUN_104885df0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001000b6d30();
  _swift_allocObject();
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  func_0x000100b64c10(param_1,param_2);
  return lVar1;
}



/* Entry: 104885df4; end: 104885e2f;  */

void FUN_104885df4(void)

{
  undefined1 auStack_60 [16];
  
  _swift_getObjectType();
  func_0x000100087bd4(&UNK_100625438,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 104885e30; end: 104885e87;  */

long FUN_104885e30(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  _swift_allocObject();
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Entry: 104885e88; end: 104885ef3;  */

void FUN_104885e88(void)

{
  long unaff_x20;
  
  func_0x000100087bd4(FUN_104885ef4);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104885ef4; end: 104885f07;  */

void FUN_104885ef4(void)

{
  func_0x000100c82464();
  return;
}



/* Entry: 104885f08; end: 104885f5b;  */

void FUN_104885f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  _swift_getObjectType();
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 104885f5c; end: 104885fa3;  */

void FUN_104885f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _swift_allocObject(param_4,0x30,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_6;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  *(undefined8 *)(param_4 + 0x28) = param_3;
  return;
}



/* Entry: 104885fa4; end: 104885fdf;  */

void FUN_104885fa4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104885fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104885fe0; end: 104886043;  */

void FUN_104885fe0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  __sScT6cancelyyF();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104886044; end: 104886063;  */

void FUN_104886044(void)

{
  FUN_104885fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104886064; end: 10488607f;  */

void FUN_104886064(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)
            (unaff_x20[2],*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58),
             *(undefined8 *)(lVar1 + 0x60));
  return;
}



/* Entry: 104886080; end: 1048860c3;  */

void FUN_104886080(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x68);
  return;
}



/* Entry: 1048860c4; end: 1048860cf;  */

void FUN_1048860c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e821670);
  return;
}



/* Entry: 1048860d0; end: 104886127;  */

long FUN_1048860d0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  _swift_allocObject();
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Entry: 104886128; end: 1048861bb;  */

void FUN_104886128(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar2 + 0x28);
    do {
      lVar2 = plVar5[-1];
      lVar1 = *plVar5;
      lVar3 = lVar2;
      _swift_getObjectType(lVar2);
      pcVar6 = *(code **)(lVar1 + 8);
      _swift_unknownObjectRetain(lVar2);
      (*pcVar6)(lVar3,lVar1);
      _swift_unknownObjectRelease(lVar2);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar2 = *(long *)(unaff_x20 + 0x10);
  }
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1048861bc; end: 1048862ff;  */

void FUN_1048861bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
    do {
      lVar1 = plVar5[-1];
      lVar2 = *plVar5;
      lVar3 = lVar1;
      _swift_getObjectType(lVar1);
      pcVar6 = *(code **)(lVar2 + 8);
      _swift_unknownObjectRetain(lVar1);
      (*pcVar6)(lVar3,lVar2);
      _swift_unknownObjectRelease(lVar1);
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 104886300; end: 10488630f;  */

void FUN_104886300(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104886310; end: 104886357;  */

void FUN_104886310(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  func_0x0001000b64ac(param_1,param_2);
  return;
}



/* Entry: 104886358; end: 104886373;  */

void FUN_104886358(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104886374; end: 1048863f3;  */

void FUN_104886374(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  (**(code **)(param_3 + 0x20))(param_2,param_3);
  func_0x0001000b66c4(0,*(undefined8 *)(lVar1 + 0x88));
  _swift_retain();
  func_0x0001000b6858();
  return;
}



/* Entry: 1048863f4; end: 104886423;  */

void FUN_1048863f4(void)

{
  _swift_allocObject();
  func_0x000100087bcc();
  return;
}



/* Entry: 104886424; end: 10488643f;  */

void FUN_104886424(undefined8 param_1)

{
  func_0x0001000b6d7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x10,7);
  return;
}



/* Entry: 104886440; end: 104886477;  */

void FUN_104886440(void)

{
  long unaff_x20;
  
  FUN_104886478(0,*(undefined8 *)(unaff_x20 + 0x50));
  _swift_allocObject();
  func_0x000100087bcc();
  return;
}



/* Entry: 104886478; end: 104886487;  */

void FUN_104886478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e821884);
  return;
}



/* Entry: 104886488; end: 1048864bb;  */

void FUN_104886488(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + 0x90);
  return;
}



/* Entry: 1048864bc; end: 1048864f3;  */

void FUN_1048864bc(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000100087bcc();
  return;
}



/* Entry: 1048864f4; end: 1048865e7;  */

void FUN_1048864f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x88);
  uVar3 = uVar4;
  FUN_1048865e8(param_1,uVar4,param_2,param_3);
  uVar1 = 0;
  __sSaMa(0,uVar4);
  puVar2 = PTR___sSayxGSTsMc_11034dd08;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar1);
  __sSTsE7forEachyyy7ElementQzKXEKF(param_1,uVar3,uVar1,puVar2);
  _swift_release(uVar3);
  (**(code **)(param_3 + 0x20))(param_2,param_3);
  func_0x0001000b66c4(0,uVar4);
  _swift_retain();
  func_0x0001000b6858();
  return;
}



/* Entry: 1048865e8; end: 1048866af;  */

undefined1  [16]
FUN_1048865e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &UNK_1107ab020;
  _swift_allocObject(&UNK_1107ab020,uVar5 + lVar3,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_104886790;
  return auVar6;
}



/* Entry: 1048866b0; end: 1048866b7;  */

void FUN_1048866b0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1048866b8; end: 10488673b;  */

void FUN_1048866b8(long param_1)

{
  func_0x0001000b6d7c();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x18,7);
  return;
}



/* Entry: 10488673c; end: 10488674b;  */

void FUN_10488673c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8218e0);
  return;
}



/* Entry: 10488674c; end: 10488678f;  */

void FUN_10488674c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBbWV_11034d660 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x90);
  return;
}



/* Entry: 104886790; end: 1048867c7;  */

void FUN_104886790(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x18))(uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 1048867c8; end: 104886813;  */

void FUN_1048867c8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined1 *)(unaff_x20 + 0x20) = param_3;
  func_0x000100087bcc();
  return;
}



/* Entry: 104886814; end: 104886977;  */

void FUN_104886814(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar11 = *unaff_x20;
  lVar7 = *(long *)(param_2 + -8);
  lVar10 = *(long *)(lVar7 + 0x40);
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1,param_1);
  lVar9 = (long)&lStack_70 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = unaff_x20[2];
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  (**(code **)(lVar7 + 0x10))(lVar9);
  uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1107ab118;
  _swift_allocObject(&UNK_1107ab118,uVar8 + lVar10,uVar6 | 7);
  uVar12 = *(undefined8 *)(lVar11 + 0x88);
  *(undefined8 *)(puVar3 + 0x10) = uVar12;
  *(long *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  (**(code **)(lVar7 + 0x20))(puVar3 + uVar8,lVar9,param_2);
  func_0x00010075a04c(lVar1,(char)lVar2,FUN_1048869e4,puVar3);
  _swift_release(puVar3);
  uVar4 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar5 = 0xff;
  __ss6ResultOMa(0xff,uVar12,uVar4,PTR___ss5ErrorWS_11034ee10);
  func_0x0001000b66c4(0,uVar5);
  _swift_retain();
  func_0x0001000b6858();
  return;
}



/* Entry: 104886978; end: 104886993;  */

void FUN_104886978(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104886994; end: 1048869c7;  */

long FUN_104886994(long param_1)

{
  func_0x0001000b6d7c();
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 1048869c8; end: 1048869e3;  */

void FUN_1048869c8(undefined8 param_1)

{
  FUN_104886994();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x21,7);
  return;
}



/* Entry: 1048869e4; end: 104886a4b;  */

void FUN_1048869e4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  (**(code **)(lVar2 + 0x18))(param_1,uVar1,lVar2);
  (**(code **)(lVar2 + 0x20))(uVar1,lVar2);
  return;
}



/* Entry: 104886a4c; end: 104886a63;  */

void FUN_104886a4c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104886a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x88) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90));
  return;
}



/* Entry: 104886a64; end: 104886abf;  */

void FUN_104886a64(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __sScS12ContinuationVMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104886ac0; end: 104886afb;  */

void FUN_104886ac0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __sScS12ContinuationVMa(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  __sScS12ContinuationV6finishyyF(uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 104886afc; end: 104886b37;  */

void FUN_104886afc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104886b38; end: 104886b77;  */

undefined1  [16] FUN_104886b38(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1107ab358;
  _swift_allocObject(&UNK_1107ab358,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = 0x104886b7c;
  return auVar2;
}



/* Entry: 104886b78; end: 104886b7f;  */

void FUN_104886b78(void)

{
  return;
}



/* Entry: 104886b80; end: 104886bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104886b80(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154e8;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000104886bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 104886bd0; end: 104886c2f;  */

void FUN_104886bd0(void)

{
  FUN_104886b80();
  return;
}



/* Entry: 104886c30; end: 104886c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104886c30(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb524c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation4UUIDV2eeoiySbAC_ACtFZ_110350c10)
            (param_1 + _DAT_1138154e8,param_2 + _DAT_1138154e8);
  return;
}



/* Entry: 104886c44; end: 104886c63;  */

uint FUN_104886c44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_104886c30(uVar1,*param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 104886c64; end: 104886d93;  */

void FUN_104886c64(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x000100855770(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104886d94; end: 104886f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104886d94(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar1 = _DAT_1138154f8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar1,lVar2);
  (**(code **)(*(long *)(*(long *)(lVar3 + 0x88) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa8)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb0)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb8)));
  return;
}



/* Entry: 104886f84; end: 104886fa3;  */

void FUN_104886f84(void)

{
  func_0x000104886e24();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104886fa4; end: 104886fcb;  */

void FUN_104886fa4(void)

{
  func_0x000100c82538();
  return;
}



/* Entry: 104886fcc; end: 104887017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104886fcc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154f8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000104887014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 104887018; end: 104887057;  */

void FUN_104887018(void)

{
  func_0x0001007d6d78();
  return;
}



/* Entry: 104887058; end: 1048870bf;  */

void FUN_104887058(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x98);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x88) + -8) + 0x10))(param_1,(long)unaff_x20 + lVar2);
  return;
}



/* Entry: 1048870c0; end: 1048870ff;  */

void FUN_1048870c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113096a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3cb28;
  _swift_getWitnessTable(&UNK_10dd3cb28,&UNK_1107abaf0);
  puRam0000000113096a88 = puVar1;
  return;
}



/* Entry: 104887100; end: 104887127;  */

void FUN_104887100(undefined1 *param_1)

{
  long *unaff_x20;
  
  *param_1 = *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa0));
  return;
}



/* Entry: 104887128; end: 1048871e7;  */

void FUN_104887128(void)

{
  _swift_allocObject();
  func_0x0001000c2754();
  return;
}



/* Entry: 1048871e8; end: 104887233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048871e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815500;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000104887230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 104887234; end: 1048872ab;  */

void FUN_104887234(void)

{
  func_0x0001002a64a8();
  return;
}



/* Entry: 1048872ac; end: 104887313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048872ac(void)

{
  func_0x000100087bd4(FUN_104887494);
  func_0x000100c7f50c();
  return;
}



/* Entry: 104887314; end: 10488738b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104887314(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_113815508;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_113096c18));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113096c00));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113096c10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_113096c08));
  return;
}



/* Entry: 10488738c; end: 104887473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10488738c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  byte bStack_31;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_113096c00);
  _swift_retain(lVar3);
  func_0x000100087bd4(&bStack_31,FUN_10488755c);
  _swift_release();
  if ((bStack_31 & 1) == 0) {
    FUN_1048872ac();
  }
  func_0x0001000b6d7c();
  lVar1 = _DAT_113815508;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar3 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + _DAT_113096c18));
  _swift_release(*(undefined8 *)(lVar3 + _DAT_113096c00));
  _swift_release(*(undefined8 *)(lVar3 + _DAT_113096c10));
  _swift_release(*(undefined8 *)(lVar3 + _DAT_113096c08));
  return lVar3;
}



/* Entry: 104887474; end: 104887493;  */

void FUN_104887474(void)

{
  FUN_10488738c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104887494; end: 1048874a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104887494(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_113096c20) = 1;
  return;
}



/* Entry: 1048874a8; end: 1048874cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048874a8(void)

{
  func_0x000100c82538();
  return;
}



/* Entry: 1048874d0; end: 10488751b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048874d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815508;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000104887518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 10488751c; end: 10488755b;  */

void FUN_10488751c(void)

{
  func_0x000100087c34();
  return;
}



/* Entry: 10488755c; end: 104887577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10488755c(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(unaff_x20 + _DAT_113096c20);
  return;
}



/* Entry: 104887578; end: 104887617;  */

void FUN_104887578(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104887618; end: 10488761b;  */

void FUN_104887618(void)

{
  undefined *puVar1;
  
  if (puRam0000000113096cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3cac0;
  _swift_getWitnessTable(&UNK_10dd3cac0,&UNK_1107abaf0);
  puRam0000000113096cd8 = puVar1;
  return;
}



/* Entry: 10488761c; end: 10488765b;  */

void FUN_10488761c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113096cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3cac0;
  _swift_getWitnessTable(&UNK_10dd3cac0,&UNK_1107abaf0);
  puRam0000000113096cd8 = puVar1;
  return;
}



/* Entry: 10488765c; end: 104887757;  */

void FUN_10488765c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104887758; end: 104887813;  */

void FUN_104887758(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long **)(unaff_x22 + 0x18) = unaff_x20;
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0xff;
  __ss6ResultOMa(0xff,uVar5,uVar1,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  lVar3 = 0;
  __sSqMa(0,lVar2);
  *(long *)(unaff_x22 + 0x28) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104887814,0,0);
  return;
}



/* Entry: 104887814; end: 10488792f;  */

void FUN_104887814(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  FUN_104888eec(uVar6);
  (**(code **)(lVar1 + 0x30))(uVar6,1,uVar5);
  if ((int)uVar6 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))
              (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28));
    plVar2 = (long *)0x20;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_104887930;
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
    plVar4 = (long *)0x70;
    _swift_task_alloc();
    plVar2[2] = (long)plVar4;
    *plVar4 = (long)plVar2;
    plVar4[1] = (long)FUN_104894f24;
                    /* WARNING: Could not recover jumptable at 0x000104894f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_104167d8c)(plVar4,uVar3,0,0,FUN_1048879e8,uVar6,uVar5);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x40) + 0x20);
  (*pcVar7)(uVar6,*(undefined8 *)(unaff_x22 + 0x38),uVar5);
  (*pcVar7)(uVar3,uVar6,uVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010488792c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104887930; end: 10488797f;  */

void FUN_104887930(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x50));
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x48));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010488797c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 104887980; end: 1048879e7;  */

void FUN_104887980(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  puVar1 = &UNK_1107abc18;
  _swift_allocObject(&UNK_1107abc18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x00010075a04c(0,1,FUN_104888130,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1048879e8; end: 1048879ef;  */

void FUN_1048879e8(undefined8 param_1)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  puVar1 = &UNK_1107abc18;
  _swift_allocObject(&UNK_1107abc18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x00010075a04c(0,1,FUN_104888130,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1048879f0; end: 104887a9b;  */

void FUN_1048879f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0;
  __ss6ResultOMa(0,param_3,uVar1,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffd0 + -extraout_x12,param_1,uVar2);
  func_0x000103969044(&stack0xffffffffffffffd0 + -extraout_x12,param_2,uVar2);
  return;
}



/* Entry: 104887a9c; end: 104887b3f;  */

void FUN_104887a9c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar6 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0;
  __ss6ResultOMa(0,uVar6,uVar2,PTR___ss5ErrorWS_11034ee10);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar4;
  plVar5 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_104887b40;
  plVar5[2] = uVar4;
  plVar5[3] = (long)unaff_x20;
  uVar6 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar6,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar5[4] = lVar3;
  lVar1 = 0;
  __sSqMa(0,lVar3);
  plVar5[5] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar5[6] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[7] = uVar4;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[8] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[9] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104887814,0,0);
  return;
}



/* Entry: 104887b40; end: 104887b87;  */

void FUN_104887b40(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104887b88,0,0);
  return;
}


