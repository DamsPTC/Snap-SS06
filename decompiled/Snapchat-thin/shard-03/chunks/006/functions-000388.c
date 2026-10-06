/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a31918; end: 102a31933; -[SCFeatureMusicPickerV2Handler musicPickerV2DidDestroy] */

/* WARNING: Possible PIC construction at 0x000102a319d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a319d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a31918(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_110588798;
  pcVar1 = *(code **)(param_1 + _DAT_112ee2988);
  puVar2 = &UNK_1105886e0;
  func_0x000107c613fc(&UNK_1105886e0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110588798,0x21,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = 1;
  puVar3[0x20] = 2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  (*pcVar1)(0x102a31fa4,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102a31934; end: 102a319fb;  */

/* WARNING: Possible PIC construction at 0x000102a319d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a319d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a31934(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ee2988);
  puVar2 = &UNK_1105886e0;
  func_0x000107c613fc(&UNK_1105886e0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(param_3,0x21,7);
  *(undefined **)(param_3 + 0x10) = puVar2;
  *(undefined8 *)(param_3 + 0x18) = param_4;
  *(undefined1 *)(param_3 + 0x20) = param_5;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  (*pcVar1)(param_6,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102a319fc; end: 102a31bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a319fc(long param_1,long param_2,char param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  bVar5 = *(byte *)(param_1 + _DAT_112ee2980);
  if (bVar5 == 2) {
    bVar5 = 0;
  }
  else if (bVar5 == 3) {
    func_0x000107c61170();
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112ee2980) = 3;
  if (param_3 == '\0') {
    if (param_2 == 0) {
      pcVar1 = *(code **)(param_1 + _DAT_112ee2998);
      uVar4 = ((undefined8 *)(param_1 + _DAT_112ee2998))[1];
      func_0x000107c6157c(uVar4);
      (*pcVar1)(0);
      func_0x000107c61574(uVar4);
    }
    uVar2 = param_1 + _DAT_112ee2978;
    func_0x000107c61618();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c61150();
      if ((uVar3 & 1) != 0) {
        func_0x000107c4d234(uVar2);
      }
      func_0x000107c615e8(uVar2);
    }
  }
  else {
    if (param_3 == '\x01') {
      pcVar1 = *(code **)(param_1 + _DAT_112ee2990);
      uVar4 = ((undefined8 *)(param_1 + _DAT_112ee2990))[1];
      func_0x000107c6157c(uVar4);
      (*pcVar1)(param_2);
      func_0x000107c61574(uVar4);
      pcVar1 = *(code **)(param_1 + _DAT_112ee29b0);
      uVar4 = ((undefined8 *)(param_1 + _DAT_112ee29b0))[1];
      func_0x000107c6157c(uVar4);
      (*pcVar1)(bVar5 & 1);
      func_0x000107c61574(uVar4);
      pcVar1 = *(code **)(param_1 + _DAT_112ee29a0);
      uVar4 = ((undefined8 *)(param_1 + _DAT_112ee29a0))[1];
      func_0x000107c6157c(uVar4);
      (*pcVar1)();
      goto LAB_102a31bd4;
    }
    pcVar1 = *(code **)(param_1 + _DAT_112ee29b0);
    uVar4 = ((undefined8 *)(param_1 + _DAT_112ee29b0))[1];
    func_0x000107c6157c(uVar4);
    if (param_2 == 0) {
      bVar5 = bVar5 & 1;
    }
    else {
      bVar5 = 0;
    }
    (*pcVar1)(bVar5);
    func_0x000107c61574(uVar4);
  }
  pcVar1 = *(code **)(param_1 + _DAT_112ee29a0);
  uVar4 = ((undefined8 *)(param_1 + _DAT_112ee29a0))[1];
  func_0x000107c6157c(uVar4);
  (*pcVar1)();
LAB_102a31bd4:
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 102a31bf8; end: 102a31c17;  */

void FUN_102a31bf8(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 102a31c18; end: 102a31c4b;  */

void FUN_102a31c18(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a31c4c; end: 102a31d0f; -[SCFeatureMusicPickerV2Handler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a31c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a31ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a31ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a31ca8) */
/* WARNING: Removing unreachable block (ram,0x000102a31c80) */
/* WARNING: Removing unreachable block (ram,0x000102a31cd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a31c4c(long param_1)

{
  func_0x000102a31cec(param_1 + _DAT_112ee2978);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee2988 + 8));
  return;
}



/* Entry: 102a31d10; end: 102a31d2f;  */

void FUN_102a31d10(void)

{
  func_0x000107c61168(&PTR_PTR_112881588);
  return;
}



/* Entry: 102a31d30; end: 102a31ed3;  */

int FUN_102a31d30(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    param_2 = param_2 + 3;
    uVar3 = 2;
    if (0xfffeff < param_2) {
      uVar3 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar3 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar3;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar3 = (uint)param_1[1], param_1[1] != 0)) goto LAB_102a31d98;
    }
    else if (uVar1 == 2) {
      uVar3 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_102a31d98:
        return ((uint)*param_1 | uVar3 << 8) - 3;
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) goto LAB_102a31d98;
    }
  }
  uVar3 = 0;
  if (1 < *param_1) {
    uVar3 = (*param_1 + 0x7ffffffe & 0x7fffffff) + 1;
  }
  iVar2 = 0;
  if (1 < uVar3) {
    iVar2 = uVar3 - 2;
  }
  return iVar2;
}



/* Entry: 102a31ed4; end: 102a31eff;  */

void FUN_102a31ed4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a31f00; end: 102a31f1b;  */

void FUN_102a31f00(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102a31f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 102a31f1c; end: 102a31f37;  */

void FUN_102a31f1c(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102a31f38; end: 102a31f4b;  */

void FUN_102a31f38(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102a31f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102a31f4c; end: 102a31f7b;  */

void FUN_102a31f4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_102a31bf8(*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a31f7c; end: 102a31f97;  */

void FUN_102a31f7c(long param_1,long param_2)

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



/* Entry: 102a31f98; end: 102a31feb; -[SCFeatureMusicPickerV2Handler musicPickerV2DidDismissRequestingScrubberWithSelection:] */

/* WARNING: Possible PIC construction at 0x000102a318e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a318e8) */

void FUN_102a31f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102a31724(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102a31fec; end: 102a32073;  */

void FUN_102a31fec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c610f8();
  uVar1 = uStack_38;
  func_0x00010017da58(uStack_38,param_2);
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 102a32074; end: 102a320a3;  */

undefined1  [16] FUN_102a32074(void)

{
  return ZEXT816(0x110588b50);
}



/* Entry: 102a320a4; end: 102a320ff;  */

void FUN_102a320a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001005c3364();
  func_0x000107c610f8();
  uVar1 = uStack_38;
  FUN_102a32224();
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102a32100; end: 102a3213f;  */

undefined8 FUN_102a32100(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_102a32224(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102a32140; end: 102a32187; -[_TtC33ReplyQuotingCameraContextServices35SCCameraUIScopedReplyQuotingContext replyQuotingCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a32140(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee29e8;
  func_0x000107c61428(param_1 + _DAT_112ee29e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a32188; end: 102a321df; -[_TtC33ReplyQuotingCameraContextServices35SCCameraUIScopedReplyQuotingContext setReplyQuotingCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a32188(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee29e8;
  func_0x000107c61428(param_1 + _DAT_112ee29e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102a321e0; end: 102a32213;  */

void FUN_102a321e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a32214; end: 102a32223; -[_TtC33ReplyQuotingCameraContextServices35SCCameraUIScopedReplyQuotingContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a32214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ee29e8);
  return;
}



/* Entry: 102a32224; end: 102a3234f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a32224(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c614f0();
  lVar1 = _DAT_112ee29e8;
  func_0x000107c61614(unaff_x20 + _DAT_112ee29e8,0);
  lVar4 = _DAT_113082498;
  func_0x000107c61428(param_1 + _DAT_113082498,auStack_58,0,0);
  param_1 = param_1 + lVar4;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c61428(unaff_x20 + lVar1,auStack_70,1,0);
    func_0x000107c61604(unaff_x20 + lVar1,0);
  }
  else {
    puVar3 = PTR_PTR_1126d5c70;
    func_0x000107c61168(PTR_PTR_1126d5c70);
    lVar4 = param_1;
    func_0x000107c6148c(param_1,puVar3);
    if (lVar4 == 0) {
      func_0x000107c61170(param_1);
      func_0x0001048d9980(0xd000000000000057,0x800000010f0e3e90);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a32350);
      (*pcVar2)();
    }
    func_0x000107c61428(unaff_x20 + lVar1,auStack_70,1,0);
    func_0x000107c61604(unaff_x20 + lVar1,lVar4);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a32350; end: 102a3235f;  */

undefined1  [16] FUN_102a32350(void)

{
  return ZEXT816(0x110588c58);
}



/* Entry: 102a32360; end: 102a3236f; -[SCCameraViewfinderGeometrySnapshotStore currentSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a32360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ee2a20));
  return;
}



/* Entry: 102a32370; end: 102a323a3;  */

void FUN_102a32370(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a323a4; end: 102a323b3; -[SCCameraViewfinderGeometrySnapshotStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a323a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee2a20));
  return;
}



/* Entry: 102a323b4; end: 102a32403;  */

void FUN_102a323b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x0001005c6b00(0);
  func_0x000107c610f8();
  func_0x000103af3264(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102a32404; end: 102a32447;  */

undefined1  [16] FUN_102a32404(void)

{
  return ZEXT816(0x110588d20);
}



/* Entry: 102a32448; end: 102a3255b;  */

undefined * FUN_102a32448(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x0001000cad14();
  uVar1 = 0x112ee2a70;
  func_0x0001000285a8(0x112ee2a70,&UNK_10db0dc28);
  puVar2 = &UNK_100847168;
  func_0x0001000cb480(&UNK_100847168,0,uVar1);
  func_0x000107c61574(unaff_x20);
  func_0x0001000285a8(0x112ee2a78,&UNK_10db0dc30);
  puVar3 = &UNK_110588e70;
  func_0x000107c613fc(&UNK_110588e70,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  puVar2 = &UNK_1008462a0;
  func_0x0001000823a8(&UNK_1008462a0,puVar3);
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  puVar4 = puVar3;
  func_0x0001000cad14();
  func_0x0001005db164(puVar3,puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar2);
  return puVar3;
}



/* Entry: 102a3255c; end: 102a3258b;  */

void FUN_102a3255c(void)

{
  func_0x0001005db144();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a3258c; end: 102a3259b;  */

undefined1  [16] FUN_102a3258c(void)

{
  return ZEXT816(0x110588e98);
}



/* Entry: 102a3259c; end: 102a3262b; -[_TtC41CameraFeatureLayoutServicesImplementationP33_13ABE80AA61DF42884218A03B636293E28CameraFeatureLayoutContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a3259c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ee2aa8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar4 != (long *)0x0) {
    func_0x000107c61170(plVar4);
  }
  return (undefined1 *)plVar4;
}



/* Entry: 102a3262c; end: 102a3265f;  */

void FUN_102a3262c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a32660; end: 102a32673; -[_TtC41CameraFeatureLayoutServicesImplementationP33_13ABE80AA61DF42884218A03B636293E28CameraFeatureLayoutContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a32660(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ee2aa8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ee2aa8))[1]);
    return;
  }
  return;
}



/* Entry: 102a32674; end: 102a3268b; -[_TtC41CameraFeatureLayoutServicesImplementation30DefaultCameraFeatureLayoutImpl handsFreeCloseButtonContainer] */

void FUN_102a32674(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a3268c; end: 102a326a3; -[_TtC41CameraFeatureLayoutServicesImplementation30DefaultCameraFeatureLayoutImpl toolbarAccessoryViewContainer] */

void FUN_102a3268c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a326a4; end: 102a326ab; -[_TtC41CameraFeatureLayoutServicesImplementation30DefaultCameraFeatureLayoutImpl layoutIfNeeded] */

void FUN_102a326a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 102a326ac; end: 102a32737;  */

void FUN_102a326ac(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102a32738; end: 102a3279b;  */

long FUN_102a32738(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102a3279c; end: 102a3287b;  */

undefined8 * FUN_102a3279c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61434();
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar3);
  return param_1;
}



/* Entry: 102a3287c; end: 102a328cf;  */

undefined8 * FUN_102a3287c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 102a328d0; end: 102a32967;  */

int FUN_102a328d0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a32968; end: 102a32a17;  */

undefined8 FUN_102a32968(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 2) {
    func_0x000107c3ec1c(param_2);
    func_0x000107c61180();
    func_0x000107c5cbe4(param_3);
    func_0x000107c61180();
    uVar2 = 0xc024000000000000;
  }
  else {
    func_0x000107c5cbe4(param_2);
    func_0x000107c61180();
    func_0x000107c3ec1c(param_3);
    func_0x000107c61180();
    uVar2 = 0x4024000000000000;
  }
  uVar1 = param_2;
  func_0x000107c40284(uVar2,param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102a32a18; end: 102a32a7b;  */

long FUN_102a32a18(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102a32a7c; end: 102a32b5b;  */

undefined8 * FUN_102a32a7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61434();
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar3);
  return param_1;
}



/* Entry: 102a32b5c; end: 102a32baf;  */

undefined8 * FUN_102a32b5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 102a32bb0; end: 102a32c67;  */

int FUN_102a32bb0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a32c68; end: 102a32d87;  */

void FUN_102a32c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x25);
  uStack_50 = uStack_68;
  uStack_48 = uStack_60;
  func_0x000107c5fb78(0xd000000000000023,0x800000010f0e3f80);
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x000107c603d0(&uStack_68,&uStack_50,&UNK_1106d0040,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_48);
  uVar2 = (uint)((ulong)param_1 >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  uVar1 = (undefined1)param_1;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      *(undefined1 *)(unaff_x20 + 0x28) = uVar1;
      return;
    }
    *(undefined1 *)(unaff_x20 + 0x41) = uVar1;
    *(byte *)(unaff_x20 + 0x42) = (byte)((ulong)param_1 >> 8) & 1;
  }
  else {
    if (uVar3 == 2) {
      *(undefined1 *)(unaff_x20 + 0x29) = uVar1;
      uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined8 *)(unaff_x20 + 0x30) = param_2;
      *(undefined8 *)(unaff_x20 + 0x38) = param_3;
      func_0x000107c615f0(param_3);
      func_0x000107c615e8(uVar4);
      uStack_68 = param_2;
      goto LAB_102a32d68;
    }
    *(undefined1 *)(unaff_x20 + 0x40) = uVar1;
  }
  uStack_68 = CONCAT71(uStack_68._1_7_,uVar1);
LAB_102a32d68:
  func_0x0001002a64a8(&uStack_68);
  return;
}



/* Entry: 102a32d88; end: 102a32dc3;  */

void FUN_102a32d88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a32dc4; end: 102a32e3b; -[_TtC24CameraModeActivationImpl30CameraModeActivationController updateCameraModeWith:] */

void FUN_102a32dc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  lVar1 = param_3;
  func_0x000103afc15c();
  FUN_102a32c68();
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  if (lVar1 < -0x4000000000000000) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2,param_2);
    return;
  }
  return;
}



/* Entry: 102a32e3c; end: 102a32e6b; -[_TtC24CameraModeActivationImpl30CameraModeActivationController fullScreenLensModeStateObjc] */

void FUN_102a32e3c(long param_1)

{
  func_0x00010080b714(0);
  func_0x000103afbcf8(*(undefined1 *)(param_1 + 0x41));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a32e6c; end: 102a32e73; -[_TtC24CameraModeActivationImpl30CameraModeActivationController shouldBlockFullScreenLensSwipeToDismissObjc] */

undefined1 FUN_102a32e6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x42);
}



/* Entry: 102a32e74; end: 102a32ea3; -[_TtC24CameraModeActivationImpl30CameraModeActivationController timerModeStateObjc] */

void FUN_102a32e74(long param_1)

{
  func_0x00010080b714(0);
  func_0x000103afbcf8(*(undefined1 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a32ea4; end: 102a32ed3; -[_TtC24CameraModeActivationImpl30CameraModeActivationController continuousCaptureModeStateObjc] */

void FUN_102a32ea4(long param_1)

{
  func_0x00010080b714(0);
  func_0x000103afbcf8(*(undefined1 *)(param_1 + 0x29));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a32ed4; end: 102a32edb; -[_TtC24CameraModeActivationImpl30CameraModeActivationController continuousCaptureWorkflowStateObjc] */

undefined8 FUN_102a32ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 102a32edc; end: 102a32f13;  */

void FUN_102a32edc(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *param_1 = puVar1;
  return;
}



/* Entry: 102a32f14; end: 102a32f2b; -[_TtC24CameraModeActivationImpl30CameraModeActivationController continuousCaptureTimelineConfigurationObjc] */

void FUN_102a32f14(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a32f2c; end: 102a32f5b; -[_TtC24CameraModeActivationImpl30CameraModeActivationController handsFreeCameraModeStateObjc] */

void FUN_102a32f2c(long param_1)

{
  func_0x00010080b714(0);
  func_0x000103afbcf8(*(undefined1 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a32f5c; end: 102a32f63; -[_TtC24CameraModeActivationImpl30CameraModeActivationController isHDModeHardwareToggleInProgressObjc] */

undefined1 FUN_102a32f5c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x43);
}



/* Entry: 102a32f64; end: 102a32f6b; -[_TtC24CameraModeActivationImpl30CameraModeActivationController setIsHDModeHardwareToggleInProgressObjc:] */

void FUN_102a32f64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x43) = param_3;
  return;
}



/* Entry: 102a32f6c; end: 102a32f8b;  */

void FUN_102a32f6c(void)

{
  FUN_102a32c68();
  return;
}



/* Entry: 102a32f8c; end: 102a33017;  */

void FUN_102a32f8c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 102a33018; end: 102a33037;  */

void FUN_102a33018(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 102a33038; end: 102a33073;  */

void FUN_102a33038(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  func_0x0001006881cc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1105891a0;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 102a33074; end: 102a33083;  */

void FUN_102a33074(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a33084; end: 102a331d3;  */

void FUN_102a33084(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112ee2d20,&UNK_10db0def0);
  func_0x000107c613fc();
  puVar1 = &UNK_100806280;
  func_0x0001000bdd8c(&UNK_100806280,0);
  uVar5 = 0x112ee2d28;
  func_0x0001000285a8(0x112ee2d28,&UNK_10db0def8);
  puVar2 = &UNK_100806394;
  func_0x0001000cb480(&UNK_100806394,0,uVar5);
  puVar3 = puVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(puVar2);
  uVar5 = 0x112ee2d30;
  func_0x0001000285a8(0x112ee2d30,&UNK_10db0df00);
  pcVar4 = FUN_102a33038;
  func_0x0001000cb480(FUN_102a33038,0,uVar5);
  uVar5 = 0;
  func_0x0001005c2930(0);
  func_0x000107c610f8();
  func_0x000100688de8(puVar3,pcVar4,uVar5);
  func_0x000107c61574(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102a331d4; end: 102a3323b;  */

void FUN_102a331d4(void)

{
  return;
}



/* Entry: 102a3323c; end: 102a3328f;  */

undefined8 FUN_102a3323c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001005dc850(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102a33290; end: 102a332cb;  */

void FUN_102a33290(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102a33688();
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 102a332cc; end: 102a33317;  */

void FUN_102a332cc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102a33318; end: 102a3333b;  */

void FUN_102a33318(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a3333c; end: 102a33347;  */

undefined1  [16] FUN_102a3333c(void)

{
  return ZEXT816(0);
}



/* Entry: 102a33348; end: 102a33387;  */

void FUN_102a33348(void)

{
  func_0x0001043da7bc(0x102a333d0);
  func_0x0001043da474(FUN_102a333d8);
  return;
}



/* Entry: 102a33388; end: 102a333d7;  */

void FUN_102a33388(long param_1,long param_2)

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



/* Entry: 102a333d8; end: 102a3343f;  */

void FUN_102a333d8(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_102a33688();
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 102a33440; end: 102a3365f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a33440(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = _DAT_112ee2fb8;
  lVar9 = (long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x68))
            (lVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3)
  ;
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0e4050);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar10 + 8))(lVar9,lVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112ee2fc0;
  uVar5 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112ee2fc8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ee2fd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ee2fd8) = param_1;
  puVar6 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  puVar4 = &UNK_110589520;
  func_0x000107c613fc(&UNK_110589520,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar6);
  uStack_80 = 0x102a33a94;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110589538;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  ppuVar8 = ppuVar7;
  func_0x000107c60bc4();
  func_0x000107c6157c(puVar4);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar8);
  puVar2 = puStack_78;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar2);
  return puVar6;
}



/* Entry: 102a33660; end: 102a33687; -[_TtC24SCCameraReplySnapRecency27CameraReplySnapRecencyStore initWithPreferences:] */

void FUN_102a33660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102a33440();
  return;
}



/* Entry: 102a33688; end: 102a33837;  */

void FUN_102a33688(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000102a3371c(param_1);
  return;
}



/* Entry: 102a33838; end: 102a338df; -[_TtC24SCCameraReplySnapRecency27CameraReplySnapRecencyStore recordReplySnapCapture] */

void FUN_102a33838(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c61174(param_2);
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000102a3371c(param_1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102a338e0; end: 102a3391b; -[_TtC24SCCameraReplySnapRecency27CameraReplySnapRecencyStore lastReplySnapCaptureTime] */

undefined8 FUN_102a338e0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_102a3391c();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 102a3391c; end: 102a33a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102a3391c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined8 uStack_60;
  char cStack_58;
  
  uVar2 = 0x112dc10e8;
  func_0x0001000285a8(0x112dc10e8,&UNK_10d97dc20);
  func_0x000100087bd4(&uStack_60,0x102a33b04,auStack_90,uVar2);
  if (cStack_58 == '\x01') {
    lVar1 = *(long *)(unaff_x20 + _DAT_112ee2fd8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar2 = 0xd000000000000023;
      func_0x000107c5fadc(0xd000000000000023,0x800000010f0e4080);
      lVar3 = lVar1;
      func_0x000107c4d9c0();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar2);
      if (lVar3 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
        lVar1 = lVar3;
        func_0x000107c6148c(lVar3,puVar4);
        if (lVar1 != 0) {
          func_0x000107c4223c();
        }
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000100087bd4(&uStack_60,0x102a33b44,auStack_90,PTR___sSdN_11034dd90);
  }
  return uStack_60;
}



/* Entry: 102a33a68; end: 102a33ae7; -[_TtC24SCCameraReplySnapRecency27CameraReplySnapRecencyStore clearReplySnapRecord] */

void FUN_102a33a68(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102a3371c(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a33ae8; end: 102a33b7f;  */

void FUN_102a33ae8(long param_1,long param_2)

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



/* Entry: 102a33b80; end: 102a33bb3;  */

void FUN_102a33b80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a33bb4; end: 102a33bfb; -[_TtC24SCCameraReplySnapRecency27CameraReplySnapRecencyStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a33bb4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ee2fd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ee2fb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee2fc0));
  return;
}



/* Entry: 102a33bfc; end: 102a33c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a33bfc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(lVar1 + _DAT_112ee2fc8) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined1 *)(lVar1 + _DAT_112ee2fd0) = 1;
  return;
}



/* Entry: 102a33c24; end: 102a33ce7;  */

/* WARNING: Possible PIC construction at 0x000102a33cc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a33cc8) */

void FUN_102a33c24(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  dVar3 = *(double *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    if (0.0 < dVar3) {
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(dVar3);
    }
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f0e4080);
    func_0x000107c56bcc(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102a33ce8; end: 102a33cef;  */

void FUN_102a33ce8(long param_1,long param_2)

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



/* Entry: 102a33cf0; end: 102a34593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102a33cf0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             long param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 ***pppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 ****ppppuVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 unaff_x20;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 ***apppuStack_98 [3];
  long lStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  func_0x000107c613fc();
  pppuVar3 = *(undefined8 ****)(param_6 + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pppuVar3 == (undefined8 ***)0x0) {
LAB_102a33dec:
    uVar23 = 0;
    FUN_102a34734(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = PTR_PTR_1126abdb8;
    func_0x000107c610f8(PTR_PTR_1126abdb8);
    func_0x000107c471cc();
    func_0x000107c61170(uVar23);
    func_0x000107c42c20(param_8);
    func_0x000107c61170(param_8);
  }
  else {
    lVar4 = param_7;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    lVar6 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar6 == 0) {
      func_0x000107c615e8(pppuVar3);
      goto LAB_102a33dec;
    }
    lVar4 = lVar6;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    if (*(long *)(param_1 + _DAT_113082430) == 1) {
      uVar23 = 4;
LAB_102a33e44:
      func_0x0001005e32f0(0);
      func_0x000107c613fc();
      lVar6 = 8;
      func_0x0001005e3310(8,uVar23);
      pcVar7 = PTR_PTR_1126b1600;
      func_0x000107c61168();
      func_0x000107c6157c(lVar6);
      func_0x000107c5aa18();
      func_0x000107c61180();
      pcVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (pcVar7 != (char *)0x0) {
        pcVar8 = pcVar7;
        func_0x0001005e3364();
        if (*pcVar8 == '\x01') {
          FUN_102a345c8();
          func_0x000107c613fc();
          pcVar8[0x18] = '\x03';
          pcVar8[0x19] = '\0';
          pcVar8[0x1a] = '\0';
          pcVar8[0x1b] = '\0';
          pcVar8[0x1c] = '\0';
          pcVar8[0x1d] = '\0';
          pcVar8[0x1e] = '\0';
          pcVar8[0x1f] = '\0';
          pcVar8[0x10] = '\x01';
          pcVar8[0x11] = '\0';
          pcVar8[0x12] = '\0';
          pcVar8[0x13] = '\0';
          pcVar8[0x14] = '\0';
          pcVar8[0x15] = '\0';
          pcVar8[0x16] = '\0';
          pcVar8[0x17] = '\0';
          pcVar9 = pcVar8;
          func_0x0001000298f0();
          func_0x000107c61428();
          uVar24 = *(undefined8 *)pcVar9;
          uVar23 = 0;
          func_0x0001005e33a0(0);
          func_0x000107c613fc();
          FUN_102a37844(pcVar7,uVar24,uVar23);
          *(char **)(pcVar8 + 0x20) = pcVar7;
          func_0x000107c61174(uVar24);
        }
        else {
          func_0x000107c61170(pcVar7);
          pcVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
      }
      func_0x0001005e3370(0);
      func_0x000107c613fc();
      pppuVar10 = pppuVar3;
      func_0x0001005e3390();
      apppuStack_98[0] = pppuVar10;
      func_0x0001000285a8(0x112ee3008,&UNK_10db0e190);
      func_0x000107c613fc();
      ppppuVar11 = apppuStack_98;
      func_0x0001005f3ccc(ppppuVar11,pcVar8);
      func_0x0001000285a8(0x112e38b68,&UNK_10da23398);
      uVar24 = *(undefined8 *)(param_2 + _DAT_113091b80);
      func_0x000107c6157c(pppuVar10);
      func_0x000107c61174();
      func_0x000107c615f0(pppuVar3);
      uVar23 = uVar24;
      func_0x0001000b637c();
      func_0x000107c61170(uVar24);
      func_0x0001000285a8(0x112d3b3f8,&UNK_10d904aa0);
      uVar12 = *(undefined8 *)(param_1 + _DAT_113082480);
      func_0x000107c61174();
      uVar24 = uVar12;
      func_0x0001000b637c();
      func_0x000107c61170(uVar12);
      func_0x0001000285a8(0x112ee3010,&UNK_10db0e2d0);
      uVar13 = *(undefined8 *)(param_2 + _DAT_113091b70);
      func_0x000107c5bc9c();
      func_0x000107c61180();
      uVar12 = uVar13;
      func_0x0001000b637c();
      func_0x000107c61170(uVar13);
      uVar13 = param_5;
      func_0x000107c4afc4();
      func_0x000107c61180();
      puVar5 = PTR_PTR_1126af680;
      func_0x000107c61168();
      func_0x000107c5a9f0();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x102a34594);
        (*pcVar25)();
      }
      lVar14 = 0;
      func_0x0001005f6070();
      lVar15 = lVar14;
      func_0x000107c610f8();
      lVar2 = _DAT_112ee31d0;
      uVar16 = 0;
      func_0x0001005f60b4();
      func_0x000107c613fc();
      func_0x000107c615f0(lVar4);
      ppppuVar17 = ppppuVar11;
      func_0x000107c6157c();
      func_0x0001005f60d4();
      *(undefined8 *****)(lVar15 + lVar2) = ppppuVar17;
      lVar2 = _DAT_112ee31d8;
      func_0x000107c613fc(uVar16,0x20,7);
      func_0x0001005f60d4();
      *(undefined8 *)(lVar15 + lVar2) = uVar16;
      lVar2 = _DAT_112ee31e0;
      uVar16 = 0;
      func_0x00010006a340();
      func_0x000107c613fc();
      func_0x00010006a360();
      *(undefined8 *)(lVar15 + lVar2) = uVar16;
      *(undefined1 *)(lVar15 + _DAT_112ee31e8) = 0;
      puVar1 = (undefined8 *)(lVar15 + _DAT_112ee31f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      *(undefined8 *****)(lVar15 + _DAT_112ee31f8) = ppppuVar11;
      *(undefined8 *)(lVar15 + _DAT_112ee3200) = uVar13;
      *(long *)(lVar15 + _DAT_112ee3208) = lVar6;
      *(long *)(lVar15 + _DAT_112ee3210) = lVar4;
      *(undefined **)(lVar15 + _DAT_112ee3218) = puVar5;
      uVar16 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      uVar18 = uVar16;
      func_0x000107c61538();
      func_0x000107c61538(uVar16,0x112ee3058);
      apppuStack_98[0] = ppppuVar11;
      alStack_70[0] = lVar6;
      func_0x0001000285a8(0x112ee3088,&UNK_10db0e198);
      func_0x000107c613fc();
      func_0x000107c61580(lVar6,2);
      func_0x000107c615f4(lVar4,2);
      func_0x000107c61580(ppppuVar11,2);
      func_0x000107c61174(uVar13);
      func_0x000107c61174(puVar5);
      ppppuVar17 = apppuStack_98;
      func_0x000100614580(0,ppppuVar17,alStack_70,uVar18,uVar16,lVar4);
      *(undefined8 *****)(lVar15 + _DAT_112ee3290) = ppppuVar17;
      plVar19 = &lStack_80;
      lStack_80 = lVar15;
      lStack_78 = lVar14;
      func_0x000107c61154(plVar19,PTR_s_init_1125d9248);
      func_0x000107c61180();
      plVar20 = (long *)&UNK_1008547f0;
      func_0x0001000bfde0(&UNK_1008547f0,0,PTR___sSbN_11034dd40);
      func_0x000107c61428(lVar6 + 0x30,apppuStack_98,0,0);
      if (*(long *)(lVar6 + 0x30) == 4) {
        puVar21 = &UNK_110589698;
        func_0x000107c613fc(&UNK_110589698,0x18,7);
        func_0x000107c61614(puVar21 + 0x10,plVar19);
        puVar22 = &UNK_1105896c0;
        func_0x000107c613fc(&UNK_1105896c0,0x20,7);
        *(undefined **)(puVar22 + 0x10) = puVar21;
        *(long **)(puVar22 + 0x18) = plVar20;
        pcVar25 = *(code **)(*plVar20 + 0x60);
        func_0x000107c6157c(plVar20);
        uVar16 = 0x102a345b0;
        puVar21 = puVar22;
        (*pcVar25)(0x102a345b0);
        func_0x000107c61574(puVar22);
        uVar18 = uVar16;
        func_0x000107c614f0(uVar16);
        (**(code **)(puVar21 + 0x18))
                  (*(undefined8 *)((long)plVar19 + _DAT_112ee31d0),uVar18,puVar21);
        func_0x000107c61574(uVar12);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(puVar5);
        func_0x000107c615e8(lVar4);
        func_0x000107c61574(plVar20);
        func_0x000107c61170(plVar19);
        func_0x000107c615e8(uVar16);
      }
      else {
        func_0x000100619b88(uVar12,uVar23,plVar20);
        func_0x000107c61574(uVar12);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(puVar5);
        func_0x000107c615e8(lVar4);
        func_0x000107c61574(plVar20);
        func_0x000107c61170(plVar19);
      }
      func_0x000107c61574(lVar6);
      func_0x000107c61574(ppppuVar11);
      func_0x000107c61574(uVar23);
      func_0x000107c61574(uVar24);
      puVar5 = PTR_PTR_1126abdb8;
      func_0x000107c610f8(PTR_PTR_1126abdb8);
      func_0x000107c471cc();
      func_0x000107c42c20(param_8);
      func_0x000107c61170(param_8);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(plVar19);
      func_0x000107c61574(ppppuVar11);
      func_0x000107c61574(pppuVar10);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(pppuVar3);
      func_0x000107c61574(lVar6);
      goto LAB_102a34534;
    }
    if (*(long *)(param_1 + _DAT_113082430) == 3) {
      uVar23 = 3;
      goto LAB_102a33e44;
    }
    uVar23 = 0;
    FUN_102a34734(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = PTR_PTR_1126abdb8;
    func_0x000107c610f8(PTR_PTR_1126abdb8);
    func_0x000107c471cc();
    func_0x000107c61170(uVar23);
    func_0x000107c42c20(param_8);
    func_0x000107c61170(param_8);
    func_0x000107c615e8(lVar4);
    func_0x000107c615e8(pppuVar3);
  }
  func_0x000107c61170(puVar5);
LAB_102a34534:
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  return unaff_x20;
}



/* Entry: 102a34594; end: 102a345c7;  */

void FUN_102a34594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a345c8; end: 102a3469f;  */

void FUN_102a345c8(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x0001005e33a0();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ee3198;
  plVar5 = (long *)&UNK_10db0e1f0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102a346a0; end: 102a346ab;  */

bool FUN_102a346a0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a346ac; end: 102a346e7; -[_TtC30LensPlatformLoggersIntegration30LensCarouselFunnelNullWorkflow init] */

void FUN_102a346ac(undefined8 param_1)

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



/* Entry: 102a346e8; end: 102a3471b;  */

void FUN_102a346e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a3471c; end: 102a34723; -[_TtC30LensPlatformLoggersIntegration30LensCarouselFunnelNullWorkflow wasInterrupted] */

undefined8 FUN_102a3471c(void)

{
  return 0;
}



/* Entry: 102a34724; end: 102a3472b; -[_TtC30LensPlatformLoggersIntegration30LensCarouselFunnelNullWorkflow lensCarouselUsableTime] */

undefined8 FUN_102a34724(void)

{
  return 0;
}



/* Entry: 102a3472c; end: 102a34733; -[_TtC30LensPlatformLoggersIntegration30LensCarouselFunnelNullWorkflow lensSessionId] */

void FUN_102a3472c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102a34734; end: 102a34753;  */

void FUN_102a34734(void)

{
  func_0x000107c61168(&PTR_PTR_112881a60);
  return;
}


