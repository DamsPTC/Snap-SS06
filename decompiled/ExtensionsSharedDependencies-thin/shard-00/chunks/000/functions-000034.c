/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000a0834; end: 000a08a3;  */

void FUN_000a0834(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,param_2,param_1,&UNK_00842b70,&UNK_00842b78);
  FUN_000a08a4(0,uVar1);
  _swift_allocObject();
  FUN_000a0c0c();
  return;
}



/* Entry: 000a08a4; end: 000a08af;  */

void FUN_000a08a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_00842b10);
  return;
}



/* Entry: 000a08b0; end: 000a08f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a08b0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + _DAT_00aec548);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00aec548))[1];
  _swift_retain(uVar2);
  (*pcVar1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  return;
}



/* Entry: 000a08f8; end: 000a092f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a08f8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + _DAT_00aec550);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00aec550))[1];
  _swift_retain(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  return;
}



/* Entry: 000a0930; end: 000a0943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a0930(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00777b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation4UUIDV2eeoiySbAC_ACtFZ_0099c480)
            (param_1 + _DAT_00b648e8,param_2 + _DAT_00b648e8);
  return;
}



/* Entry: 000a0944; end: 000a0ad3;  */

undefined1  [16] FUN_000a0944(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &UNK_009a8810;
  _swift_allocObject(&UNK_009a8810,uVar5 + lVar3,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_000a0e68;
  return auVar6;
}



/* Entry: 000a0ad4; end: 000a0b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a0ad4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_00b648e8;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aec548 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aec550 + 8));
  return;
}



/* Entry: 000a0b3c; end: 000a0b5f;  */

void FUN_000a0b3c(void)

{
  FUN_000a0ad4();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000a0b60; end: 000a0bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a0b60(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648e8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000a0ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 000a0bac; end: 000a0beb;  */

void FUN_000a0bac(void)

{
  FUN_000a08b0();
  return;
}



/* Entry: 000a0bec; end: 000a0c0b;  */

uint FUN_000a0bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_000a0930(uVar1,*param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 000a0c0c; end: 000a0d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a0c0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  uVar3 = param_1;
  uVar4 = uVar6;
  FUN_000a0944(param_1,uVar6,param_2,param_3);
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_00aec548);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  func_0x000a0a0c(param_1,uVar6,param_2,param_3);
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_00aec550);
  *puVar1 = param_1;
  puVar1[1] = uVar6;
  (**(code **)(param_3 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  (**(code **)(lVar7 + 0x20))
            ((long)unaff_x20 + _DAT_00b648e8,
             &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Entry: 000a0d0c; end: 000a0d5b;  */

void FUN_000a0d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_000a0c0c(param_1,param_2,param_3);
  return;
}



/* Entry: 000a0d5c; end: 000a0d5f;  */

void FUN_000a0d5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 000a0d60; end: 000a0ddb;  */

void FUN_000a0d60(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___syycWV_0099b8e8 + 0x40;
    puStack_28 = puStack_30;
    _swift_initClassMetadata2(param_1,0,3,&lStack_38,param_1 + 0x58);
  }
  return;
}



/* Entry: 000a0ddc; end: 000a0ddf;  */

void FUN_000a0ddc(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000a0de0; end: 000a0e17;  */

void FUN_000a0de0(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x20))(uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 000a0e18; end: 000a0e67;  */

void FUN_000a0e18(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000a0e68; end: 000a0e9f;  */

void FUN_000a0e68(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x18))(uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 000a0ea0; end: 000a0ea7;  */

void FUN_000a0ea0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000a0ea8; end: 000a0f33;  */

void FUN_000a0ea8(long param_1,ulong param_2)

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
    puStack_38 = &UNK_007d5c90;
    puStack_28 = PTR___syycWV_0099b8e8 + 0x40;
    puStack_30 = &UNK_007d5ca8;
    _swift_initClassMetadata2(param_1,0,4,&lStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 000a0f34; end: 000a0f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a0f34(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00aec600);
  *(undefined8 *)(unaff_x20 + _DAT_00aec600) = 0;
  _swift_release(uVar2);
  pcVar1 = *(code **)(unaff_x20 + _DAT_00aec610);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00aec610))[1];
  _swift_retain(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  return;
}



/* Entry: 000a0f90; end: 000a107f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000a0f90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = (long)puVar3 - extraout_x12;
  pcVar6 = *(code **)(lVar5 + 0x10);
  (*pcVar6)(lVar4,param_1 + _DAT_00b648f0,lVar1);
  (*pcVar6)(puVar3,param_2 + _DAT_00b648f0,lVar1);
  lVar2 = lVar4;
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(lVar4,puVar3);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(puVar3,lVar1);
  (*pcVar6)(lVar4,lVar1);
  return (uint)lVar2 & 1;
}



/* Entry: 000a1080; end: 000a10cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a1080(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_00aec608;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_000a08b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(lVar1);
    return;
  }
  return;
}



/* Entry: 000a10cc; end: 000a1177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a10cc(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,unaff_x20 + _DAT_00b648f0,lVar1);
  FUN_000a148c();
  __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar1,puVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 000a1178; end: 000a11eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a1178(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_00b648f0;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aec600));
  _swift_weakDestroy(unaff_x20 + _DAT_00aec608);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aec610 + 8));
  return;
}



/* Entry: 000a11ec; end: 000a120f;  */

void FUN_000a11ec(void)

{
  FUN_000a1178();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000a1210; end: 000a121b;  */

void FUN_000a1210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_00842b98);
  return;
}



/* Entry: 000a121c; end: 000a1257;  */

void FUN_000a121c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_000a10cc(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000a1258; end: 000a12a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a1258(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648f0;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000a12a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 000a12a4; end: 000a135f;  */

void FUN_000a12a4(void)

{
  FUN_000a1080();
  return;
}



/* Entry: 000a1360; end: 000a137f;  */

uint FUN_000a1360(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_000a0f90(uVar1,*param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 000a1380; end: 000a138f;  */

void FUN_000a1380(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_0099baa8)(&UNK_007d5ce8,param_1);
  return;
}



/* Entry: 000a1390; end: 000a142b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a1390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b648f0);
  lVar2 = _DAT_00aec600;
  *(undefined8 *)(unaff_x20 + _DAT_00aec600) = 0;
  lVar3 = _DAT_00aec608;
  _swift_weakInit(unaff_x20 + _DAT_00aec608,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  _swift_release(uVar4);
  _swift_weakAssign(unaff_x20 + lVar3,param_2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aec610);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Entry: 000a142c; end: 000a148b;  */

void FUN_000a142c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_allocObject();
  FUN_000a1390(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 000a148c; end: 000a14cf;  */

void FUN_000a148c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000aec6c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s10Foundation4UUIDVMa(0xff);
  puVar2 = PTR___s10Foundation4UUIDVSHAAMc_0099c4b8;
  _swift_getWitnessTable(PTR___s10Foundation4UUIDVSHAAMc_0099c4b8,uVar1);
  puRam0000000000aec6c0 = puVar2;
  return;
}



/* Entry: 000a14d0; end: 000a1507;  */

void FUN_000a14d0(undefined8 param_1)

{
  _swift_allocObject();
  FUN_000a1508(param_1);
  return;
}



/* Entry: 000a1508; end: 000a161b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a1508(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uStack_48;
  
  lVar5 = *unaff_x20;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_00b648f8);
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa0)) = 0;
  lVar6 = *(long *)(*unaff_x20 + 0xa8);
  uVar1 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)((long)unaff_x20 + lVar6) = uVar1;
  lVar6 = *(long *)(*unaff_x20 + 0xb0);
  lVar5 = *(long *)(lVar5 + 0x88);
  uVar2 = 0;
  FUN_000a06c4(0,lVar5);
  uVar1 = uVar2;
  func_0x000a016c();
  *(undefined8 *)((long)unaff_x20 + lVar6) = uVar1;
  FUN_0009ff9c(0,lVar5);
  puVar3 = &DAT_007d5be0;
  uStack_48 = uVar1;
  _swift_getWitnessTable(&DAT_007d5be0,uVar2);
  puVar4 = &uStack_48;
  FUN_000a0090(puVar4,uVar2,puVar3);
  *(undefined8 **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb8)) = puVar4;
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98),param_1,lVar5);
  FUN_0009ea40();
  return;
}



/* Entry: 000a161c; end: 000a180b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a161c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar1 = _DAT_00b648f8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar1,lVar2);
  (**(code **)(*(long *)(*(long *)(lVar3 + 0x88) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa8)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb0)));
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)
            (*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb8)));
  return;
}



/* Entry: 000a180c; end: 000a182b;  */

void FUN_000a180c(void)

{
  func_0x000a16ac();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000a182c; end: 000a189f;  */

void FUN_000a182c(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_000a1c50,auStack_50,PTR___sytN_0099b8e0 + 8);
  func_0x0009fee0(param_1);
  return;
}



/* Entry: 000a18a0; end: 000a191b;  */

void FUN_000a18a0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x98);
  _swift_beginAccess((long)param_1 + lVar2,auStack_58,0x21,0);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x88) + -8) + 0x18))((long)param_1 + lVar2,param_2);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 000a191c; end: 000a1acb;  */

undefined1  [16] FUN_000a191c(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  
  lVar3 = *(long *)(*unaff_x20 + 0x88);
  lVar2 = 0;
  auStack_a0[0] = param_1;
  _swift_getTupleTypeMetadata2(0,lVar3,PTR___sSbN_0099b220,0,0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)auStack_a0 - extraout_x8;
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  lVar5 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_000a01a0(param_1,param_2,param_3);
  uStack_80 = param_2;
  lStack_78 = param_3;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(lVar6,0xa1c68,auStack_90,lVar2);
  cVar1 = *(char *)(lVar6 + *(int *)(lVar2 + 0x30));
  (**(code **)(lVar4 + 0x20))(lVar5,lVar6,lVar3);
  (**(code **)(param_3 + 0x18))(lVar5,param_2,param_3);
  if (cVar1 == '\x01') {
    (**(code **)(param_3 + 0x20))(param_2,param_3);
  }
  FUN_0009e6f0(0,lVar3);
  _swift_retain();
  func_0x0009e784();
  (**(code **)(lVar4 + 8))(lVar5,lVar3);
  auVar7._8_8_ = &PTR_DAT_009a7e80;
  auVar7._0_8_ = unaff_x20;
  return auVar7;
}



/* Entry: 000a1acc; end: 000a1b73;  */

void FUN_000a1acc(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_2;
  lVar3 = *(long *)(lVar4 + 0x88);
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,lVar3,PTR___sSbN_0099b220,0,0);
  iVar1 = *(int *)(lVar2 + 0x30);
  lVar2 = *(long *)(lVar4 + 0x98);
  _swift_beginAccess((long)param_2 + lVar2,auStack_58,0,0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,(long)param_2 + lVar2,lVar3);
  *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)((long)param_2 + *(long *)(*param_2 + 0xa0));
  return;
}



/* Entry: 000a1b74; end: 000a1b9b;  */

void FUN_000a1b74(void)

{
  func_0x000a01ac();
  return;
}



/* Entry: 000a1b9c; end: 000a1be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a1b9c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b648f8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000a1be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 000a1be8; end: 000a1c27;  */

void FUN_000a1be8(void)

{
  FUN_000a182c();
  return;
}



/* Entry: 000a1c28; end: 000a1c4f;  */

void FUN_000a1c28(undefined1 *param_1)

{
  long *unaff_x20;
  
  *param_1 = *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa0));
  return;
}



/* Entry: 000a1c50; end: 000a1c83;  */

void FUN_000a1c50(void)

{
  long unaff_x20;
  
  FUN_000a18a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 000a1c84; end: 000a1c87;  */

void FUN_000a1c84(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 000a1c88; end: 000a1d2f;  */

void FUN_000a1c88(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x88);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      lStack_48 = *(long *)(lVar1 + -8) + 0x40;
      puStack_40 = &UNK_007d5da8;
      puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
      puStack_30 = puStack_38;
      puStack_28 = puStack_38;
      _swift_initClassMetadata2(param_1,0,6,&lStack_50,param_1 + 0x90);
    }
  }
  return;
}



/* Entry: 000a1d30; end: 000a1d3b;  */

void FUN_000a1d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842be8);
  return;
}



/* Entry: 000a1d3c; end: 000a1d6b;  */

void FUN_000a1d3c(void)

{
  _swift_allocObject();
  FUN_000a1d6c();
  return;
}



/* Entry: 000a1d6c; end: 000a1ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a1d6c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 **ppuStack_48;
  
  lVar7 = *unaff_x20;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_00b64900);
  *(undefined1 *)((long)unaff_x20 + _DAT_00aec770) = 0;
  lVar1 = _DAT_00aec778;
  uVar8 = *(undefined8 *)(lVar7 + 0x88);
  uVar2 = 0;
  FUN_000a06c4(0,uVar8);
  uVar3 = uVar2;
  func_0x000a016c();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar3;
  lVar7 = _DAT_00aec780;
  uVar3 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)((long)unaff_x20 + lVar7) = uVar3;
  FUN_0009ff9c(0,uVar8);
  uVar3 = 0;
  FUN_000a08a4(0,uVar8);
  ppuStack_48 = *(undefined8 ***)((long)unaff_x20 + lVar1);
  puVar4 = &DAT_007d5be0;
  _swift_getWitnessTable(&DAT_007d5be0,uVar2);
  pppuVar5 = &ppuStack_48;
  FUN_000a0d0c(pppuVar5,uVar2,puVar4);
  puVar4 = &DAT_007d5c00;
  ppuStack_48 = pppuVar5;
  _swift_getWitnessTable(&DAT_007d5c00,uVar3);
  pppuVar6 = &ppuStack_48;
  FUN_000a0090(pppuVar6,uVar3,puVar4);
  _swift_release(pppuVar5);
  *(undefined8 ****)((long)unaff_x20 + _DAT_00aec788) = pppuVar6;
  FUN_0009ea40();
  return;
}



/* Entry: 000a1ea4; end: 000a1f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a1ea4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_00b64900;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aec778));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aec780));
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + _DAT_00aec788));
  return;
}



/* Entry: 000a1f0c; end: 000a204b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_000a1f0c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  byte bStack_31;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_00aec780);
  _swift_retain(lVar3);
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(&bStack_31,FUN_000a2234);
  _swift_release();
  if ((bStack_31 & 1) == 0) {
    func_0x000a1fe4();
  }
  func_0x0009ea4c();
  lVar1 = _DAT_00b64900;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar3 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(lVar3 + _DAT_00aec778));
  _swift_release(*(undefined8 *)(lVar3 + _DAT_00aec780));
  _swift_release(*(undefined8 *)(lVar3 + _DAT_00aec788));
  return lVar3;
}



/* Entry: 000a204c; end: 000a206b;  */

void FUN_000a204c(void)

{
  FUN_000a1f0c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000a206c; end: 000a2093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a206c(void)

{
  func_0x0009fee0();
  return;
}



/* Entry: 000a2094; end: 000a217f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2094(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  char cStack_51;
  
  lVar1 = *unaff_x20;
  uStack_70 = param_2;
  lStack_68 = param_3;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(&cStack_51,0xa225c,auStack_80,PTR___sSbN_0099b220);
  if (cStack_51 == '\x01') {
    (**(code **)(param_3 + 0x20))(param_2,param_3);
  }
  FUN_000a01a0(param_1,param_2,param_3);
  FUN_0009e6f0(0,*(undefined8 *)(lVar1 + 0x88));
  _swift_retain();
  func_0x0009e784();
  return;
}



/* Entry: 000a2180; end: 000a21a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2180(void)

{
  func_0x000a01ac();
  return;
}



/* Entry: 000a21a8; end: 000a21f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a21a8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64900;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000a21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 000a21f4; end: 000a2233;  */

void FUN_000a21f4(void)

{
  FUN_000a206c();
  return;
}



/* Entry: 000a2234; end: 000a2277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2234(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(unaff_x20 + _DAT_00aec770);
  return;
}



/* Entry: 000a2278; end: 000a22ff;  */

void FUN_000a2278(long param_1,ulong param_2)

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
    puStack_40 = &UNK_007d5df8;
    puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    _swift_initClassMetadata2(param_1,0,5,&lStack_48,param_1 + 0x90);
  }
  return;
}



/* Entry: 000a2300; end: 000a230b;  */

void FUN_000a2300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00842c60);
  return;
}



/* Entry: 000a230c; end: 000a2343;  */

void FUN_000a230c(undefined8 param_1)

{
  _swift_allocObject();
  FUN_000a25a8(param_1);
  return;
}



/* Entry: 000a2344; end: 000a241f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2344(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(FUN_000a2994,auStack_50,PTR___sytN_0099b8e0 + 8);
  func_0x0009fee0(param_1);
  return;
}



/* Entry: 000a2420; end: 000a25a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2420(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_78;
  char cStack_68;
  undefined7 uStack_67;
  
  lVar5 = *unaff_x20;
  FUN_000a01a0();
  uVar6 = *(undefined8 *)(lVar5 + 0x88);
  uVar2 = 0;
  uStack_80 = param_2;
  lStack_78 = param_3;
  __sSaMa(0,uVar6);
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(&cStack_68,FUN_000a29c0,auStack_90,uVar2);
  uVar1 = CONCAT71(uStack_67,cStack_68);
  uVar4 = uVar6;
  FUN_000a2a20(param_1,uVar6,param_2,param_3);
  puVar3 = PTR___sSayxGSTsMc_0099b1f0;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar2);
  __sSTsE7forEachyyy7ElementQzKXEKF(param_1,uVar4,uVar2,puVar3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(uVar4);
  uStack_80 = param_2;
  lStack_78 = param_3;
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(&cStack_68,FUN_000a2ae8,auStack_90,PTR___sSbN_0099b220);
  if (cStack_68 == '\x01') {
    (**(code **)(param_3 + 0x20))(param_2,param_3);
  }
  FUN_0009e6f0(0,uVar6);
  _swift_retain();
  func_0x0009e784();
  return;
}



/* Entry: 000a25a8; end: 000a26bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a25a8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  
  lVar6 = *unaff_x20;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_00b64908);
  lVar1 = _DAT_00aec850;
  uVar7 = *(undefined8 *)(lVar6 + 0x88);
  uVar2 = uVar7;
  __sS2ayxGycfC();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)((long)unaff_x20 + _DAT_00aec858) = 0;
  lVar1 = _DAT_00aec838;
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_00aec848;
  uVar3 = 0;
  FUN_000a06c4(0,uVar7);
  uVar2 = uVar3;
  func_0x000a016c();
  *(undefined8 *)((long)unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)((long)unaff_x20 + _DAT_00aec860) = param_1;
  FUN_0009ff9c(0,uVar7);
  puVar4 = &DAT_007d5be0;
  uStack_48 = uVar2;
  _swift_getWitnessTable(&DAT_007d5be0,uVar3);
  puVar5 = &uStack_48;
  FUN_000a0090(puVar5,uVar3,puVar4);
  *(undefined8 **)((long)unaff_x20 + _DAT_00aec840) = puVar5;
  FUN_0009ea40();
  return;
}



/* Entry: 000a26bc; end: 000a2733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a26bc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_00b64908;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_00aec850));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aec838));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00aec848));
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + _DAT_00aec840));
  return;
}



/* Entry: 000a2734; end: 000a281b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_000a2734(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  byte bStack_31;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_00aec838);
  _swift_retain(lVar3);
  __s11SwiftSCLock4LockC7protectyxxyKXEKlF(&bStack_31,FUN_000a2bb4);
  _swift_release();
  if ((bStack_31 & 1) == 0) {
    func_0x000a23b8();
  }
  func_0x0009ea4c();
  lVar1 = _DAT_00b64908;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar3 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + _DAT_00aec850));
  _swift_release(*(undefined8 *)(lVar3 + _DAT_00aec838));
  _swift_release(*(undefined8 *)(lVar3 + _DAT_00aec848));
  _swift_release(*(undefined8 *)(lVar3 + _DAT_00aec840));
  return lVar3;
}



/* Entry: 000a281c; end: 000a283b;  */

void FUN_000a281c(void)

{
  FUN_000a2734();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000a283c; end: 000a2993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a283c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(*param_1 + 0x88);
  lVar8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(puVar7);
  lVar1 = _DAT_00aec850;
  _swift_beginAccess((long)param_1 + _DAT_00aec850,auStack_78,0x21,0);
  uVar2 = 0;
  __sSaMa(0,lVar6);
  __sSa6appendyyxnF(puVar7,uVar2);
  _swift_endAccess(auStack_78);
  lVar5 = *(long *)((long)param_1 + lVar1);
  lVar3 = lVar5;
  _swift_bridgeObjectRetain();
  __sSa5countSivg();
  _swift_bridgeObjectRelease(lVar5);
  if (*(long *)((long)param_1 + _DAT_00aec860) < lVar3) {
    _swift_beginAccess((long)param_1 + lVar1,auStack_78,0x21,0);
    puVar4 = PTR___sSayxGSmsMc_0099b210;
    _swift_getWitnessTable(PTR___sSayxGSmsMc_0099b210,uVar2);
    __sSmsE11removeFirst7ElementQzyF(puVar7,uVar2,puVar4);
    _swift_endAccess(auStack_78);
    (**(code **)(lVar8 + 8))(puVar7,lVar6);
  }
  return;
}



/* Entry: 000a2994; end: 000a29ab;  */

void FUN_000a2994(void)

{
  long unaff_x20;
  
  FUN_000a283c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 000a29ac; end: 000a29bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a29ac(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_00aec858) = 1;
  return;
}



/* Entry: 000a29c0; end: 000a2a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a29c0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00aec850;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar2 + _DAT_00aec850,auStack_48,0,0);
  *param_1 = *(undefined8 *)(lVar2 + lVar1);
  _swift_bridgeObjectRetain();
  return;
}



/* Entry: 000a2a20; end: 000a2ae7;  */

undefined1  [16] FUN_000a2a20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &UNK_009a8c30;
  _swift_allocObject(&UNK_009a8c30,uVar5 + lVar3,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_000a2ccc;
  return auVar6;
}



/* Entry: 000a2ae8; end: 000a2aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2ae8(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(*(long *)(unaff_x20 + 0x20) + _DAT_00aec858);
  return;
}



/* Entry: 000a2b00; end: 000a2b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2b00(void)

{
  func_0x000a01ac();
  return;
}



/* Entry: 000a2b28; end: 000a2b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2b28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64908;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x000a2b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 000a2b74; end: 000a2bb3;  */

void FUN_000a2b74(void)

{
  FUN_000a2344();
  return;
}



/* Entry: 000a2bb4; end: 000a2bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2bb4(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(unaff_x20 + _DAT_00aec858);
  return;
}



/* Entry: 000a2bcc; end: 000a2c6f;  */

void FUN_000a2bcc(long param_1,ulong param_2)

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
    puStack_50 = PTR___sBi64_WV_0099ae80 + 0x40;
    puStack_48 = PTR___sBbWV_0099ae78 + 0x40;
    puStack_40 = &UNK_007d5e40;
    puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_30 = puStack_38;
    puStack_28 = puStack_38;
    _swift_initClassMetadata2(param_1,0,7,&lStack_58,param_1 + 0x90);
  }
  return;
}



/* Entry: 000a2c70; end: 000a2c7b;  */

void FUN_000a2c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_00842cd8);
  return;
}



/* Entry: 000a2c7c; end: 000a2ccb;  */

void FUN_000a2c7c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000a2ccc; end: 000a2d03;  */

void FUN_000a2ccc(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x18))(uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 000a2d04; end: 000a2d0b;  */

undefined8 FUN_000a2d04(void)

{
  return 1;
}



/* Entry: 000a2d0c; end: 000a2dab;  */

void FUN_000a2d0c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000a2dac; end: 000a2daf;  */

void FUN_000a2dac(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aec910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d5e60;
  _swift_getWitnessTable(&UNK_007d5e60,&UNK_009a8cf0);
  puRam0000000000aec910 = puVar1;
  return;
}



/* Entry: 000a2db0; end: 000a2def;  */

void FUN_000a2db0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aec910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d5e60;
  _swift_getWitnessTable(&UNK_007d5e60,&UNK_009a8cf0);
  puRam0000000000aec910 = puVar1;
  return;
}



/* Entry: 000a2df0; end: 000a2eeb;  */

void FUN_000a2df0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 000a2eec; end: 000a2fa7;  */

void FUN_000a2eec(undefined8 param_1)

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
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar2 = 0xff;
  __ss6ResultOMa(0xff,uVar5,uVar1,PTR___ss5ErrorWS_0099b720);
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
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000a2fa8,0,0);
  return;
}



/* Entry: 000a2fa8; end: 000a30c3;  */

void FUN_000a2fa8(void)

{
  long lVar1;
  segment_command *psVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  FUN_000a3708(uVar6);
  (**(code **)(lVar1 + 0x30))(uVar6,1,uVar5);
  if ((int)uVar6 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))
              (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28));
    psVar2 = &segment_command_00000020;
    _swift_task_alloc();
    *(segment_command **)(unaff_x22 + 0x50) = psVar2;
    psVar2->cmd = (int)unaff_x22;
    psVar2->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
    *(code **)psVar2->segname = FUN_000a30c4;
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
    pcVar4 = section_00000068.sectname + 8;
    _swift_task_alloc();
    *(char **)(psVar2->segname + 8) = pcVar4;
    *(segment_command **)pcVar4 = psVar2;
    *(code **)(pcVar4 + 8) = FUN_001d4208;
                    /* WARNING: Could not recover jumptable at 0x001d4204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_001d4244(pcVar4,uVar3,0,0,FUN_000a317c,uVar6,uVar5);
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
                    /* WARNING: Could not recover jumptable at 0x000a30c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000a30c4; end: 000a3113;  */

void FUN_000a30c4(void)

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
                    /* WARNING: Could not recover jumptable at 0x000a3110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 000a3114; end: 000a317b;  */

void FUN_000a3114(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  puVar1 = &UNK_009a8df0;
  _swift_allocObject(&UNK_009a8df0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  FUN_000a3798(0,1,0xa36bc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar1);
  return;
}



/* Entry: 000a317c; end: 000a3183;  */

void FUN_000a317c(undefined8 param_1)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  puVar1 = &UNK_009a8df0;
  _swift_allocObject(&UNK_009a8df0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  FUN_000a3798(0,1,0xa36bc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar1);
  return;
}



/* Entry: 000a3184; end: 000a322f;  */

void FUN_000a3184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x12;
  
  uVar1 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  uVar2 = 0;
  __ss6ResultOMa(0,param_3,uVar1,PTR___ss5ErrorWS_0099b720);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffd0 + -extraout_x12,param_1,uVar2);
  FUN_00087fac(&stack0xffffffffffffffd0 + -extraout_x12,param_2,uVar2);
  return;
}



/* Entry: 000a3230; end: 000a32d3;  */

void FUN_000a3230(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  dword *pdVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar6 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar3 = 0;
  __ss6ResultOMa(0,uVar6,uVar2,PTR___ss5ErrorWS_0099b720);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar4;
  pdVar5 = &segment_command_00000020.nsects;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x30) = pdVar5;
  *(long *)pdVar5 = unaff_x22;
  *(code **)(pdVar5 + 2) = FUN_000a32d4;
  *(ulong *)(pdVar5 + 4) = uVar4;
  *(long **)(pdVar5 + 6) = unaff_x20;
  uVar6 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = 0xae60d0;
  FUN_00016c74(0xae60d0,&UNK_007ccdd0);
  lVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar6,uVar2,PTR___ss5ErrorWS_0099b720);
  *(long *)(pdVar5 + 8) = lVar3;
  lVar1 = 0;
  __sSqMa(0,lVar3);
  *(long *)(pdVar5 + 10) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(pdVar5 + 0xc) = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar5 + 0xe) = uVar4;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(pdVar5 + 0x10) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar5 + 0x12) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000a2fa8,0,0);
  return;
}



/* Entry: 000a32d4; end: 000a331b;  */

void FUN_000a32d4(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000a331c,0,0);
  return;
}



/* Entry: 000a331c; end: 000a337f;  */

/* WARNING: Removing unreachable block (ram,0x000a3350) */

void FUN_000a331c(void)

{
  long unaff_x22;
  
  FUN_00057a00(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),unaff_x22 + 0x10)
  ;
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000a337c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


