/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000923d8; end: 000923e3;  */

void FUN_000923d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_00841634);
  return;
}



/* Entry: 000923e4; end: 0009242f;  */

void FUN_000923e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_00092368(param_1);
  return;
}



/* Entry: 00092430; end: 00092507;  */

undefined1  [16] FUN_00092430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00092aa0(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  _swift_retain(lVar2);
  FUN_00092634(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_007d4770;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d4770,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  _swift_release(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 00092508; end: 0009250f;  */

void FUN_00092508(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 00092510; end: 00092543;  */

void FUN_00092510(long param_1)

{
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 00092544; end: 00092553;  */

void FUN_00092544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841694);
  return;
}



/* Entry: 00092554; end: 00092597;  */

void FUN_00092554(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_0099b8e8 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 00092598; end: 0009259b;  */

void FUN_00092598(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 0009259c; end: 00092633;  */

void FUN_0009259c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___sBbWV_0099ae78 + 0x40;
    puStack_38 = PTR___syycWV_0099b8e8 + 0x40;
    puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_28 = puStack_30;
    _swift_initClassMetadata2(param_1,0,5,&lStack_48,param_1 + 0x58);
  }
  return;
}



/* Entry: 00092634; end: 00092687;  */

undefined8 FUN_00092634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_00092688(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 00092688; end: 00092733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_00b64858);
  lVar2 = _DAT_00aea4c8;
  uVar3 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,*(undefined8 *)(lVar4 + 0x50));
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_00aea4d8;
  uVar3 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)((long)unaff_x20 + _DAT_00aea4e0) = param_1;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_00aea4d0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Entry: 00092734; end: 000927b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092734(undefined8 param_1)

{
  undefined1 auStack_60 [16];
  char cStack_31;
  
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(&cStack_31,0x92b50,auStack_60,PTR___sSbN_0099b220);
  if (cStack_31 == '\x01') {
    FUN_000a08b0(param_1);
  }
  return;
}



/* Entry: 000927b4; end: 00092917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000927b4(byte *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x8;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(*param_2 + 0x50);
  lStack_b8 = *(long *)(lVar7 + -8);
  plVar2 = param_2;
  pbStack_a8 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar1 = _DAT_00aea4c8;
  _swift_beginAccess((long)plVar2 + _DAT_00aea4c8,auStack_78,0,0);
  uVar6 = *(undefined8 *)((long)param_2 + lVar1);
  uVar3 = 0;
  uStack_b0 = param_3;
  plStack_90 = param_2;
  uStack_88 = param_3;
  __sSaMa(0,lVar7);
  _swift_bridgeObjectRetain(uVar6);
  puVar4 = PTR___sSayxGSTsMc_0099b1f0;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar3);
  uVar5 = 0;
  __sSTsE8contains5whereS2b7ElementQzKXE_tKF(FUN_00092b68,auStack_a0,uVar3,puVar4);
  _swift_bridgeObjectRelease(uVar6);
  if ((uVar5 & 1) == 0) {
    (**(code **)(lStack_b8 + 0x10))
              (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uStack_b0,lVar7);
    _swift_beginAccess((long)param_2 + lVar1,auStack_a0,0x21,0);
    __sSa6appendyyxnF(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar3);
    _swift_endAccess(auStack_a0);
  }
  *pbStack_a8 = ((byte)uVar5 ^ 0xff) & 1;
  return;
}



/* Entry: 00092918; end: 0009297f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092918(void)

{
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_00092b38);
  FUN_000a08f8();
  return;
}



/* Entry: 00092980; end: 000929f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092980(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  _swift_beginAccess((long)param_1 + _DAT_00aea4c8,auStack_48,0x21,0);
  uVar1 = 0;
  __sSaMa(0,*(undefined8 *)(lVar2 + 0x50));
  __sSa9removeAll15keepingCapacityySb_tF(0,uVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Entry: 000929f8; end: 00092a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000929f8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_00b64858;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_00aea4c8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aea4d0 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aea4d8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aea4e0));
  return;
}



/* Entry: 00092a7c; end: 00092a9f;  */

void FUN_00092a7c(void)

{
  FUN_000929f8();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00092aa0; end: 00092aab;  */

void FUN_00092aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841700);
  return;
}



/* Entry: 00092aac; end: 00092af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092aac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64858;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00092af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00092af8; end: 00092b37;  */

void FUN_00092af8(void)

{
  FUN_00092734();
  return;
}



/* Entry: 00092b38; end: 00092b67;  */

void FUN_00092b38(void)

{
  FUN_00092980();
  return;
}



/* Entry: 00092b68; end: 00092ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00092b68(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + _DAT_00aea4d0))
            (param_1,*(undefined8 *)(unaff_x20 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 00092ba4; end: 00092bef;  */

void FUN_00092ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_00092368(param_1);
  return;
}



/* Entry: 00092bf0; end: 00092cc7;  */

undefined1  [16] FUN_00092bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00093228(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  _swift_retain(lVar2);
  FUN_00092e04(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_007d4838;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d4838,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  _swift_release(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 00092cc8; end: 00092ccf;  */

void FUN_00092cc8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 00092cd0; end: 00092d03;  */

void FUN_00092cd0(long param_1)

{
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 00092d04; end: 00092d13;  */

void FUN_00092d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841750);
  return;
}



/* Entry: 00092d14; end: 00092d57;  */

void FUN_00092d14(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_0099b8e8 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 00092d58; end: 00092d5b;  */

void FUN_00092d58(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00092d5c; end: 00092e03;  */

void FUN_00092d5c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x50);
    lVar1 = 0x13f;
    __sSqMa();
    if (uVar2 < 0x40) {
      lStack_40 = *(long *)(lVar1 + -8) + 0x40;
      puStack_38 = PTR___syycWV_0099b8e8 + 0x40;
      puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
      puStack_28 = puStack_30;
      _swift_initClassMetadata2(param_1,0,5,&lStack_48,param_1 + 0x58);
    }
  }
  return;
}



/* Entry: 00092e04; end: 00092e57;  */

undefined8 FUN_00092e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_00092e58(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 00092e58; end: 00092f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_00b64860);
  (**(code **)(*(long *)(*(long *)(lVar3 + 0x50) + -8) + 0x38))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),1,1);
  lVar3 = *(long *)(*unaff_x20 + 0x70);
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)((long)unaff_x20 + lVar3) = uVar2;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)) = param_1;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Entry: 00092f10; end: 00093133;  */

void FUN_00092f10(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x50);
  lVar1 = 0;
  uStack_a0 = param_1;
  __sSqMa(0,lVar5);
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  lVar6 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar6 - extraout_x12;
  lVar3 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  uVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_98 = *(undefined8 *)((long)unaff_x20 + *(long *)(lVar4 + 0x70));
  __s11SwiftSCLock4LockC4lockyyF();
  lVar7 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar7,auStack_78,0,0);
  (**(code **)(lVar11 + 0x10))(lVar9,(long)unaff_x20 + lVar7,lVar1);
  lVar4 = lVar9;
  (**(code **)(lVar3 + 0x30))(lVar9,1,lVar5);
  if ((int)lVar4 == 1) {
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
    uVar10 = uStack_a0;
  }
  else {
    (**(code **)(lVar3 + 0x20))(uVar8,lVar9,lVar5);
    uVar10 = uStack_a0;
    uVar2 = uVar8;
    (**(code **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)))(uVar8,uStack_a0);
    if ((uVar2 & 1) != 0) {
      func_0x001d46c8();
      (**(code **)(lVar3 + 8))(uVar8,lVar5);
      return;
    }
    (**(code **)(lVar3 + 8))(uVar8,lVar5);
  }
  (**(code **)(lVar3 + 0x10))(lVar6,uVar10,lVar5);
  (**(code **)(lVar3 + 0x38))(lVar6,0,1,lVar5);
  _swift_beginAccess((long)unaff_x20 + lVar7,auStack_90,0x21,0);
  (**(code **)(lVar11 + 0x28))((long)unaff_x20 + lVar7,lVar6,lVar1);
  _swift_endAccess(auStack_90);
  func_0x001d46c8();
  FUN_000a08b0(uVar10);
  return;
}



/* Entry: 00093134; end: 0009315b;  */

void FUN_00093134(void)

{
  FUN_000a08f8();
  return;
}



/* Entry: 0009315c; end: 00093203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009315c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar2 = _DAT_00b64860;
  lVar3 = *unaff_x20;
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  lVar2 = 0;
  __sSqMa(0,*(undefined8 *)(lVar3 + 0x50));
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68) + 8));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  return;
}



/* Entry: 00093204; end: 00093227;  */

void FUN_00093204(void)

{
  FUN_0009315c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00093228; end: 00093233;  */

void FUN_00093228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008417bc);
  return;
}



/* Entry: 00093234; end: 0009327f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093234(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64860;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x0009327c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00093280; end: 000932bf;  */

void FUN_00093280(void)

{
  FUN_00092f10();
  return;
}



/* Entry: 000932c0; end: 0009330b;  */

void FUN_000932c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_00092368(param_1);
  return;
}



/* Entry: 0009330c; end: 000933c3;  */

void FUN_0009330c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  code *pcVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  FUN_0009d91c();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  pcVar5 = *(code **)(**(long **)(unaff_x20 + 0x10) + 0x58);
  func_0x00013b10(uVar1,uVar2);
  (*pcVar5)(param_1,param_2,param_3);
  lVar4 = 0;
  FUN_0009e004();
  _swift_allocObject();
  *(long *)(lVar4 + 0x10) = lVar3;
  *(undefined ***)(lVar4 + 0x18) = &PTR_DAT_009a7c40;
  *(undefined8 *)(lVar4 + 0x20) = param_1;
  *(undefined8 *)(lVar4 + 0x28) = param_2;
  return;
}



/* Entry: 000933c4; end: 000933cb;  */

void FUN_000933c4(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
    return;
  }
  return;
}



/* Entry: 000933cc; end: 00093403;  */

void FUN_000933cc(long param_1)

{
  FUN_00092370();
  FUN_00013a64(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 00093404; end: 00093413;  */

void FUN_00093404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_0084180c);
  return;
}



/* Entry: 00093414; end: 00093453;  */

void FUN_00093414(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_007d4888;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 00093454; end: 000934b3;  */

void FUN_00093454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_00092368(param_1);
  return;
}



/* Entry: 000934b4; end: 000935af;  */

undefined1  [16] FUN_000934b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *unaff_x20;
  code *pcVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_58;
  
  plVar9 = (long *)unaff_x20[2];
  uVar5 = 0;
  FUN_000938e4(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar3 = unaff_x20[4];
  lVar2 = unaff_x20[5];
  lVar4 = unaff_x20[6];
  FUN_00093670(lVar1,lVar3);
  FUN_00093670(lVar2,lVar4);
  FUN_00093718(param_2,lVar1,lVar3,lVar2,lVar4);
  pcVar8 = *(code **)(*plVar9 + 0x58);
  puVar6 = &DAT_007d4990;
  uStack_58 = param_2;
  _swift_getWitnessTable(&DAT_007d4990,uVar5);
  puVar7 = &uStack_58;
  (*pcVar8)(puVar7,uVar5,puVar6);
  _swift_release(param_2);
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = puVar7;
  return auVar10;
}



/* Entry: 000935b0; end: 000935cb;  */

/* WARNING: Possible PIC construction at 0x000935bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000935c0) */

void FUN_000935b0(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
    return;
  }
  return;
}



/* Entry: 000935cc; end: 00093603;  */

long FUN_000935cc(long param_1)

{
  FUN_00092370();
  func_0x00093680(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  func_0x00093680(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return param_1;
}



/* Entry: 00093604; end: 0009361f;  */

void FUN_00093604(undefined8 param_1)

{
  FUN_000935cc();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x38,7);
  return;
}



/* Entry: 00093620; end: 0009362f;  */

void FUN_00093620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841878);
  return;
}



/* Entry: 00093630; end: 0009366f;  */

void FUN_00093630(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = &UNK_007d48f8;
  puStack_18 = &UNK_007d48f8;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 00093670; end: 00093693;  */

void FUN_00093670(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_0099bb30)(param_2);
    return;
  }
  return;
}



/* Entry: 00093694; end: 00093717;  */

void FUN_00093694(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_30 = &UNK_007d4950;
    puStack_28 = &UNK_007d4950;
    _swift_initClassMetadata2(param_1,0,4,&lStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 00093718; end: 000937a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00093718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b64868);
  *(undefined8 *)(unaff_x20 + _DAT_00aea7b8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aea7c0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aea7c8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  return unaff_x20;
}



/* Entry: 000937a8; end: 000937ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000937a8(undefined8 param_1)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + _DAT_00aea7c0) != (code *)0x0) {
    (**(code **)(unaff_x20 + _DAT_00aea7c0))();
  }
  FUN_000a08b0(param_1);
  return;
}



/* Entry: 00093800; end: 000938bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093800(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + _DAT_00aea7c8) != (code *)0x0) {
    (**(code **)(unaff_x20 + _DAT_00aea7c8))();
  }
  FUN_000a08f8();
  return;
}



/* Entry: 000938c0; end: 000938e3;  */

void FUN_000938c0(void)

{
  func_0x00093848();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000938e4; end: 000938ef;  */

void FUN_000938e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008418e4);
  return;
}



/* Entry: 000938f0; end: 0009393b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000938f0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64868;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00093938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 0009393c; end: 0009397b;  */

void FUN_0009393c(void)

{
  FUN_000937a8();
  return;
}



/* Entry: 0009397c; end: 0009398b;  */

void FUN_0009397c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(param_2);
    return;
  }
  return;
}



/* Entry: 0009398c; end: 000939d7;  */

void FUN_0009398c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_00092368(param_1);
  return;
}



/* Entry: 000939d8; end: 00093aaf;  */

undefined1  [16] FUN_000939d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00093db4(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  _swift_retain(lVar2);
  FUN_00093c40(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_007d4a40;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d4a40,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  _swift_release(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 00093ab0; end: 00093ab7;  */

void FUN_00093ab0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 00093ab8; end: 00093aeb;  */

void FUN_00093ab8(long param_1)

{
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 00093aec; end: 00093b5f;  */

long * __s17SwiftSCObservable10ObservableC6filteryACyxGSbxcF(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_00093b60(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  FUN_00092368(lVar1);
  _swift_retain();
  _swift_retain(param_2);
  return unaff_x20;
}



/* Entry: 00093b60; end: 00093b6f;  */

void FUN_00093b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841934);
  return;
}



/* Entry: 00093b70; end: 00093bb3;  */

void FUN_00093b70(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_0099b8e8 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 00093bb4; end: 00093bb7;  */

void FUN_00093bb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00093bb8; end: 00093c3f;  */

void FUN_00093bb8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_28 = PTR___syycWV_0099b8e8 + 0x40;
    _swift_initClassMetadata2(param_1,0,3,&lStack_38,param_1 + 0x58);
  }
  return;
}



/* Entry: 00093c40; end: 00093d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00093c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b64870);
  *(undefined8 *)(unaff_x20 + _DAT_00aea8f8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aea900);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return unaff_x20;
}



/* Entry: 00093d04; end: 00093d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093d04(void)

{
  FUN_000a08f8();
  return;
}



/* Entry: 00093d90; end: 00093db3;  */

void FUN_00093d90(void)

{
  func_0x00093d2c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00093db4; end: 00093dbf;  */

void FUN_00093db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008419a0);
  return;
}



/* Entry: 00093dc0; end: 00093e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093dc0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64870;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00093e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00093e0c; end: 00093e4b;  */

void FUN_00093e0c(void)

{
  func_0x00093cb0();
  return;
}



/* Entry: 00093e4c; end: 00093e97;  */

void FUN_00093e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_00092368(param_1);
  return;
}



/* Entry: 00093e98; end: 00093f6f;  */

undefined1  [16] FUN_00093e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00094830(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  FUN_000a0834(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  _swift_retain(lVar2);
  FUN_000940a8(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_007d4b08;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d4b08,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  _swift_release(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 00093f70; end: 00093f77;  */

void FUN_00093f70(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 00093f78; end: 00093fab;  */

void FUN_00093f78(long param_1)

{
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 00093fac; end: 00093fbb;  */

void FUN_00093fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008419f0);
  return;
}



/* Entry: 00093fbc; end: 00093fff;  */

void FUN_00093fbc(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_0099b8e8 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 00094000; end: 00094003;  */

void FUN_00094000(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00094004; end: 000940a7;  */

void FUN_00094004(long param_1,ulong param_2)

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
    puStack_50 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_48 = PTR___syycWV_0099b8e8 + 0x40;
    puStack_38 = PTR___sBbWV_0099ae78 + 0x40;
    puStack_28 = &UNK_007d4ac8;
    puStack_40 = puStack_50;
    puStack_30 = puStack_38;
    _swift_initClassMetadata2(param_1,0,7,&lStack_58,param_1 + 0x60);
  }
  return;
}



/* Entry: 000940a8; end: 000940fb;  */

undefined8 FUN_000940a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_000940fc(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 000940fc; end: 00094213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000940fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_00b64878);
  lVar2 = _DAT_00aeaa40;
  uVar3 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_00aeaa48;
  uVar4 = 0;
  FUN_000a1210(0,*(undefined8 *)(lVar7 + 0x58));
  uVar3 = 0xaeab08;
  func_0x000115a8(0xaeab08,&UNK_007d4d30);
  puVar5 = &UNK_007d5d10;
  _swift_getWitnessTable(&UNK_007d5d10,uVar4);
  uVar6 = uVar4;
  __sS2Dyxq_GycfC(uVar4,uVar3,puVar5);
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar6;
  lVar2 = _DAT_00aeaa50;
  __sS2hyxGycfC(uVar4,puVar5);
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar4;
  *(undefined1 *)((long)unaff_x20 + _DAT_00aeaa58) = 0;
  *(undefined8 *)((long)unaff_x20 + _DAT_00aeaa30) = param_1;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_00aeaa38);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Entry: 00094214; end: 00094477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00094214(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long **pplVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long **pplStack_90;
  long lStack_88;
  long *aplStack_80 [3];
  long *plStack_68;
  
  lVar9 = *unaff_x20;
  (**(code **)((long)unaff_x20 + _DAT_00aeaa38))();
  lVar1 = 0;
  FUN_000a1210(0,*(undefined8 *)(lVar9 + 0x58));
  uVar7 = *(undefined8 *)((long)unaff_x20 + _DAT_00aeaa30);
  puVar2 = &UNK_009a6130;
  _swift_allocObject(&UNK_009a6130,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  puVar3 = &UNK_009a6158;
  _swift_allocObject(&UNK_009a6158,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x50);
  *(undefined **)(puVar3 + 0x18) = puVar2;
  _swift_retain(param_1);
  _swift_retain(uVar7);
  plVar4 = param_1;
  FUN_000a142c(param_1,uVar7,FUN_00094910,puVar3);
  _swift_release(uVar7);
  pcVar8 = *(code **)(*param_1 + 0x58);
  puVar2 = &DAT_007d5d50;
  aplStack_80[0] = plVar4;
  _swift_getWitnessTable(&DAT_007d5d50,lVar1);
  pplVar5 = aplStack_80;
  lVar9 = lVar1;
  (*pcVar8)(pplVar5,lVar1,puVar2);
  __s11SwiftSCLock4LockC4lockyyF();
  plStack_68 = plVar4;
  _swift_beginAccess((long)unaff_x20 + _DAT_00aeaa50,aplStack_80,0x21,0);
  puVar2 = &UNK_007d5d10;
  _swift_getWitnessTable(&UNK_007d5d10,lVar1);
  uVar7 = 0;
  __sShMa(0,lVar1,puVar2);
  __sSh6removeyxSgxF(&pplStack_90,&plStack_68,uVar7);
  _swift_endAccess(aplStack_80);
  if (pplStack_90 == (long **)0x0) {
    pplStack_90 = pplVar5;
    lStack_88 = lVar9;
    plStack_68 = plVar4;
    _swift_beginAccess((long)unaff_x20 + _DAT_00aeaa48,aplStack_80,0x21,0);
    _swift_retain(plVar4);
    _swift_unknownObjectRetain(pplVar5);
    uVar7 = 0xaeab08;
    FUN_00016c74(0xaeab08,&UNK_007d4d30);
    uVar6 = 0;
    __sSDMa(0,lVar1,uVar7,puVar2);
    __sSDyq_Sgxcis(&pplStack_90,&plStack_68,uVar6);
    _swift_endAccess(aplStack_80);
  }
  else {
    _swift_release();
    _swift_getObjectType(pplVar5);
    (**(code **)(lVar9 + 8))();
  }
  func_0x001d46c8();
  _swift_release(param_1);
  _swift_release(plVar4);
  _swift_unknownObjectRelease(pplVar5);
  return;
}



/* Entry: 00094478; end: 000944d3;  */

void FUN_00094478(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_000944d4(param_1);
    _swift_release(param_2);
  }
  return;
}



/* Entry: 000944d4; end: 00094687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000944d4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *unaff_x20;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long alStack_60 [2];
  
  lVar8 = *unaff_x20;
  __s11SwiftSCLock4LockC4lockyyF();
  lVar1 = _DAT_00aeaa48;
  uStack_68 = param_1;
  _swift_beginAccess((long)unaff_x20 + _DAT_00aeaa48,auStack_80,0x21,0);
  uVar2 = 0xff;
  FUN_000a1210(0xff,*(undefined8 *)(lVar8 + 0x58));
  uVar6 = 0xaeab08;
  FUN_00016c74(0xaeab08,&UNK_007d4d30);
  puVar3 = &UNK_007d5d10;
  _swift_getWitnessTable(&UNK_007d5d10,uVar2);
  uVar4 = 0;
  __sSDMa(0,uVar2,uVar6,puVar3);
  __sSD11removeValue6forKeyq_Sgx_tF(alStack_60,&uStack_68,uVar4);
  _swift_endAccess(auStack_80);
  if (alStack_60[0] == 0) {
    uStack_68 = param_1;
    _swift_beginAccess((long)unaff_x20 + _DAT_00aeaa50,auStack_80,0x21,0);
    uVar6 = 0;
    __sShMa(0,uVar2,puVar3);
    _swift_retain(param_1);
    __sSh6insertySb8inserted_x17memberAfterInserttxnF(alStack_60,&uStack_68,uVar6);
    _swift_endAccess(auStack_80);
    _swift_release(alStack_60[0]);
  }
  else {
    _swift_unknownObjectRelease();
    if (*(char *)((long)unaff_x20 + _DAT_00aeaa58) == '\x01') {
      uVar7 = *(ulong *)((long)unaff_x20 + lVar1);
      uVar5 = uVar7;
      _swift_bridgeObjectRetain();
      __sSD7isEmptySbvg();
      _swift_bridgeObjectRelease(uVar7);
      func_0x001d46c8();
      if ((uVar5 & 1) == 0) {
        return;
      }
      FUN_000a08f8();
      return;
    }
  }
  func_0x001d46c8();
  return;
}



/* Entry: 00094688; end: 00094777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00094688(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar7 = *unaff_x20;
  __s11SwiftSCLock4LockC4lockyyF();
  *(undefined1 *)((long)unaff_x20 + _DAT_00aeaa58) = 1;
  lVar1 = _DAT_00aeaa48;
  _swift_beginAccess((long)unaff_x20 + _DAT_00aeaa48,auStack_58,0,0);
  uVar6 = *(ulong *)((long)unaff_x20 + lVar1);
  uVar2 = 0;
  FUN_000a1210(0,*(undefined8 *)(lVar7 + 0x58));
  _swift_bridgeObjectRetain(uVar6);
  uVar3 = 0xaeab08;
  func_0x000115a8(0xaeab08,&UNK_007d4d30);
  puVar4 = &UNK_007d5d10;
  _swift_getWitnessTable(&UNK_007d5d10,uVar2);
  uVar5 = uVar6;
  __sSD7isEmptySbvg(uVar6,uVar2,uVar3,puVar4);
  _swift_bridgeObjectRelease(uVar6);
  func_0x001d46c8();
  if ((uVar5 & 1) != 0) {
    FUN_000a08f8();
  }
  return;
}



/* Entry: 00094778; end: 0009480b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00094778(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_00b64878;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aeaa30));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aeaa38 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aeaa40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_00aeaa48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_00aeaa50));
  return;
}



/* Entry: 0009480c; end: 0009482f;  */

void FUN_0009480c(void)

{
  FUN_00094778();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00094830; end: 0009483b;  */

void FUN_00094830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841a5c);
  return;
}



/* Entry: 0009483c; end: 00094887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009483c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64878;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00094884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00094888; end: 000948c7;  */

void FUN_00094888(void)

{
  FUN_00094214();
  return;
}



/* Entry: 000948c8; end: 0009490f;  */

void FUN_000948c8(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00094910; end: 00094917;  */

void FUN_00094910(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_000944d4(param_1);
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 00094918; end: 00094963;  */

void FUN_00094918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_00092368(param_1);
  return;
}



/* Entry: 00094964; end: 00094a3b;  */

undefined1  [16] FUN_00094964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00094f40(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  FUN_000a0834(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  _swift_retain(lVar2);
  FUN_00094b78(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_007d4c08;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d4c08,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  _swift_release(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}


