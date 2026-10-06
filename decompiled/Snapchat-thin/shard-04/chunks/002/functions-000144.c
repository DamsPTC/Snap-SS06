/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031eb698; end: 1031eb6cf;  */

undefined * FUN_1031eb698(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031ea1dc();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1031eb6d0; end: 1031eb707;  */

void FUN_1031eb6d0(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  func_0x000107c61170(param_1[1]);
  func_0x000107c61170(param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[4]);
  return;
}



/* Entry: 1031eb708; end: 1031eb80f;  */

undefined8 * FUN_1031eb708(undefined8 *param_1,undefined8 *param_2)

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
  uVar3 = param_2[4];
  param_1[4] = uVar3;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1031eb810; end: 1031eb87b;  */

undefined8 * FUN_1031eb810(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  return param_1;
}



/* Entry: 1031eb87c; end: 1031eb91f;  */

int FUN_1031eb87c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x2a) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031eb920; end: 1031eb94f;  */

/* WARNING: Possible PIC construction at 0x0001031eb934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031eb938) */

void FUN_1031eb920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1031eb950; end: 1031eba2f;  */

undefined8 * FUN_1031eb950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1031eba30; end: 1031eba83;  */

undefined8 * FUN_1031eba30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1031eba84; end: 1031ebb27;  */

int FUN_1031eba84(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031ebb28; end: 1031ebb57;  */

/* WARNING: Possible PIC construction at 0x0001031ebb44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ebb48) */

void FUN_1031ebb28(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 1031ebb58; end: 1031ebc2f;  */

undefined8 * FUN_1031ebb58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1031ebc30; end: 1031ebc83;  */

undefined8 * FUN_1031ebc30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1031ebc84; end: 1031ebd23;  */

int FUN_1031ebc84(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031ebd24; end: 1031ebe3b;  */

undefined1 FUN_1031ebd24(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b0 [32];
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
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_b0[0] = 2;
  }
  return auStack_b0[0];
}



/* Entry: 1031ebe3c; end: 1031ebf67;  */

undefined8 FUN_1031ebe3c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_b0 [4];
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
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar5 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_1031ec38c(0,0x112d7a520,&PTR_PTR_1126b2390);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_b0[0] = 0;
  }
  return auStack_b0[0];
}



/* Entry: 1031ebf68; end: 1031ec083;  */

undefined8 FUN_1031ebf68(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_b0 [4];
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
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar5 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x0001044c1b10(0);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_b0[0] = 0;
  }
  return auStack_b0[0];
}



/* Entry: 1031ec084; end: 1031ec16b;  */

/* WARNING: Possible PIC construction at 0x0001031ec118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ec11c) */

ulong FUN_1031ec084(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  lVar3 = *param_2;
  if (uVar2 == 0) {
    if (lVar3 == 0) {
LAB_1031ec100:
      uVar2 = param_1[1];
      if ((uVar2 == param_2[1] && param_1[2] == param_2[2]) &&
         (uVar2 = param_1[3], uVar2 == param_2[3] && param_1[4] == param_2[4])) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return uVar2;
    }
  }
  else if (lVar3 != 0) {
    FUN_1031ed314(0);
    func_0x000107c61174(lVar3);
    func_0x000107c61174();
    uVar1 = uVar2;
    func_0x000107c60118();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar3);
    if ((uVar1 & 1) != 0) goto LAB_1031ec100;
  }
  return 0;
}



/* Entry: 1031ec16c; end: 1031ec1a7;  */

void FUN_1031ec16c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031ec1a8; end: 1031ec1d3;  */

void FUN_1031ec1a8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Entry: 1031ec1d4; end: 1031ec227;  */

int FUN_1031ec1d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031ec228; end: 1031ec26f;  */

undefined8 FUN_1031ec228(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1031ec270; end: 1031ec273;  */

void FUN_1031ec270(void)

{
  return;
}



/* Entry: 1031ec274; end: 1031ec2e3;  */

void FUN_1031ec274(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031eaa5c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58)
                ,*(undefined1 *)(unaff_x20 + 0x60),*(undefined1 *)(unaff_x20 + 0x61),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1031ec2e4; end: 1031ec2ff;  */

void FUN_1031ec2e4(long param_1,long param_2)

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



/* Entry: 1031ec300; end: 1031ec38b;  */

void FUN_1031ec300(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031ec38c; end: 1031ec3cb;  */

void FUN_1031ec38c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1031ec3cc; end: 1031ec3e7;  */

void FUN_1031ec3cc(long param_1,long param_2)

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



/* Entry: 1031ec3e8; end: 1031ec507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1031ec3e8(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((param_2 & 1) != 0) {
    if (*(char *)(param_1 + _DAT_11307fbd8) == '\x01') {
      lVar5 = -0x2fffffffffffffe6;
      func_0x000107c5fadc(0xd00000000000001a,0x800000010f130c20);
      uVar3 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010f130c40);
      uVar6 = 0;
      func_0x000107c5fe40(0);
      lVar4 = lVar5;
      uVar7 = uVar3;
      func_0x0001000f6108(lVar5,uVar3,uVar6);
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar6);
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c5faec(lVar4);
        func_0x000107c61170(lVar4);
        auVar12._8_8_ = uVar7;
        auVar12._0_8_ = lVar5;
        return auVar12;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ed584);
      (*pcVar1)();
    }
    uVar8 = ((ulong *)(param_1 + _DAT_11307fbb8))[1];
    if (uVar8 != 0) {
      uVar9 = *(ulong *)(param_1 + _DAT_11307fbb8);
      uVar2 = uVar9 & 0xffffffffffff;
      if ((uVar8 & 0x2000000000000000) != 0) {
        uVar2 = uVar8 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        uVar2 = uVar8;
        func_0x000107c61434(uVar8);
        func_0x0001031ed584();
        lVar4 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar4 + 0x18) = 2;
        *(undefined8 *)(lVar4 + 0x10) = 1;
        *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
        lVar5 = lVar4;
        func_0x00010075bbf0();
        *(long *)(lVar4 + 0x40) = lVar5;
        *(ulong *)(lVar4 + 0x20) = uVar9;
        *(ulong *)(lVar4 + 0x28) = uVar8;
        uVar8 = param_2;
        func_0x000107c5fb00(uVar2,param_2,lVar4);
        func_0x000107c6142c(param_2);
        auVar10._8_8_ = uVar8;
        auVar10._0_8_ = uVar2;
        return auVar10;
      }
    }
  }
  lVar5 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f130c90);
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f130c40);
  uVar6 = 0;
  func_0x000107c5fe40(0);
  lVar4 = lVar5;
  uVar7 = uVar3;
  func_0x0001000f6108(lVar5,uVar3,uVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar11._8_8_ = uVar7;
    auVar11._0_8_ = lVar5;
    return auVar11;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ed4b8);
  (*pcVar1)();
}



/* Entry: 1031ec508; end: 1031ec583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031ec508(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f4b9a8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f4b9a8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b0870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1031ec584; end: 1031ec597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031ec584(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f4b9b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4b9b0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1031ec598();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1031ec598; end: 1031ec6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031ec598(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  cVar2 = *(char *)(param_1 + _DAT_112f4b9a0);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar3);
  uVar1 = 0x3d;
  if (cVar2 == '\0') {
    uVar1 = 0xd5;
  }
  func_0x000107c5af88(puVar4,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c59c78(puVar3,param_2,puVar4);
  func_0x000107c61170(puVar4);
  uVar1 = 7;
  if (*(char *)(param_1 + _DAT_112f4b998) == '\0') {
    uVar1 = 0x16;
  }
  func_0x000107c5a100(puVar3,param_2,uVar1);
  func_0x000107c5251c(puVar3,param_2,1);
  func_0x000107c5670c(0x3fe6666666666666,puVar3);
  func_0x000107c56ba8(puVar3,param_2,1);
  func_0x000107c61170(puVar3);
  func_0x000107c61174(puVar3);
  func_0x000107c5381c(0x443b8000);
  func_0x000107c5a050(puVar3,param_2,0);
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 1031ec6c0; end: 1031ec6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031ec6c0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f4b9b8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4b9b8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    (*(code *)0x1031ec734)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1031ec6d4; end: 1031ec82f;  */

long FUN_1031ec6d4(long *param_1,code *param_2)

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



/* Entry: 1031ec830; end: 1031ecc9f;  */

/* WARNING: Possible PIC construction at 0x0001031ec8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ec90c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ec968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ec9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ec9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031eca18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031eca4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ecaa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ecae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ecb1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ecb78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ecbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ecc08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ecc3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ecc0c) */
/* WARNING: Removing unreachable block (ram,0x0001031ecbd0) */
/* WARNING: Removing unreachable block (ram,0x0001031ecb7c) */
/* WARNING: Removing unreachable block (ram,0x0001031ecb20) */
/* WARNING: Removing unreachable block (ram,0x0001031ecaec) */
/* WARNING: Removing unreachable block (ram,0x0001031ecaac) */
/* WARNING: Removing unreachable block (ram,0x0001031eca50) */
/* WARNING: Removing unreachable block (ram,0x0001031eca1c) */
/* WARNING: Removing unreachable block (ram,0x0001031ec9e4) */
/* WARNING: Removing unreachable block (ram,0x0001031ec9b0) */
/* WARNING: Removing unreachable block (ram,0x0001031ec96c) */
/* WARNING: Removing unreachable block (ram,0x0001031ec910) */
/* WARNING: Removing unreachable block (ram,0x0001031ec8dc) */
/* WARNING: Removing unreachable block (ram,0x0001031ecc40) */

void FUN_1031ec830(void)

{
  long lVar1;
  
  func_0x000107c5a050();
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar1 = 0x112d360b8;
  FUN_1031ed334(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x17;
  *(undefined8 *)(lVar1 + 0x10) = 0xb;
  FUN_1031ec508();
  func_0x000107c3f764();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1031ecca0; end: 1031ecd1b; -[_TtC36SCContextDirectShareActionItemPlugin25DirectShareActionItemView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ecca0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f4b9a8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4b9b0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4b9b8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextDirectShareActionItemPlugin/DirectShareActionItemView.swift",0x44,2,
                      0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ecd1c);
  (*pcVar1)();
}



/* Entry: 1031ecd1c; end: 1031ed26b;  */

/* WARNING: Possible PIC construction at 0x0001031ecd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ece78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ecf2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ecf54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ecffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ed00c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ed028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ed03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ed058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ed040) */
/* WARNING: Removing unreachable block (ram,0x0001031ed02c) */
/* WARNING: Removing unreachable block (ram,0x0001031ed010) */
/* WARNING: Removing unreachable block (ram,0x0001031ed000) */
/* WARNING: Removing unreachable block (ram,0x0001031ecf58) */
/* WARNING: Removing unreachable block (ram,0x0001031ed03c) */
/* WARNING: Removing unreachable block (ram,0x0001031ecf84) */
/* WARNING: Removing unreachable block (ram,0x0001031ecf30) */
/* WARNING: Removing unreachable block (ram,0x0001031ece7c) */
/* WARNING: Removing unreachable block (ram,0x0001031ecd8c) */
/* WARNING: Removing unreachable block (ram,0x0001031ece80) */
/* WARNING: Removing unreachable block (ram,0x0001031ece84) */
/* WARNING: Removing unreachable block (ram,0x0001031eced4) */
/* WARNING: Removing unreachable block (ram,0x0001031ed050) */
/* WARNING: Removing unreachable block (ram,0x0001031ed054) */
/* WARNING: Removing unreachable block (ram,0x0001031ecee0) */
/* WARNING: Removing unreachable block (ram,0x0001031ecdb4) */
/* WARNING: Removing unreachable block (ram,0x0001031ed05c) */

void FUN_1031ecd1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2ec0;
  func_0x000107c610f8(PTR_PTR_1126c2ec0);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c46150(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1031ed26c; end: 1031ed2cb; -[_TtC36SCContextDirectShareActionItemPlugin25DirectShareActionItemView initWithFrame:] */

void FUN_1031ed26c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextDirectShareActionItemPlugin.DirectShareActionItemView",0x3e,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ed298);
  (*pcVar1)();
}



/* Entry: 1031ed2cc; end: 1031ed313; -[_TtC36SCContextDirectShareActionItemPlugin25DirectShareActionItemView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031ed2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ed2ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ed2cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4b9a8));
  return;
}



/* Entry: 1031ed314; end: 1031ed333;  */

void FUN_1031ed314(void)

{
  func_0x000107c61168(&PTR_PTR_1128c24a8);
  return;
}



/* Entry: 1031ed334; end: 1031ed3ab;  */

void FUN_1031ed334(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1031ed3ac(0,param_1,param_2);
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



/* Entry: 1031ed3ac; end: 1031ed3eb;  */

void FUN_1031ed3ac(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1031ed3ec; end: 1031ed64f;  */

undefined1  [16] FUN_1031ed3ec(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f130c90);
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f130c40);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ed4b8);
  (*pcVar1)();
}



/* Entry: 1031ed650; end: 1031ed69b;  */

void FUN_1031ed650(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1031ed69c,param_1);
  return;
}



/* Entry: 1031ed69c; end: 1031ed70b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ed69c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112fc2130);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170();
  param_1[3] = &UNK_110621a98;
  FUN_1031ed71c();
  param_1[4] = lStack_38;
  *param_1 = uVar1;
  return;
}



/* Entry: 1031ed70c; end: 1031ed71b;  */

undefined1  [16] FUN_1031ed70c(void)

{
  return ZEXT816(0x1106219a0);
}



/* Entry: 1031ed71c; end: 1031ed75b;  */

void FUN_1031ed71c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b9e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9b4e0;
  func_0x000107c61520(&DAT_10db9b4e0,&UNK_110621a98);
  puRam0000000112f4b9e8 = puVar1;
  return;
}



/* Entry: 1031ed75c; end: 1031ed7a3;  */

void FUN_1031ed75c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x00010326c18c();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed3af8;
  uVar2 = param_3;
  func_0x000107c5faec();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = ppuVar1;
  param_1[3] = uVar2;
  return;
}



/* Entry: 1031ed7a4; end: 1031ed857;  */

long FUN_1031ed7a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  lVar5 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  uVar6 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar5 + 0x38) = uVar6;
  *(undefined ***)(lVar5 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  uVar6 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar5 + 0x60) = uVar6;
  *(undefined ***)(lVar5 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar5 + 0x48) = uVar2;
  *(undefined8 *)(lVar5 + 0x50) = uVar4;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return lVar5;
}



/* Entry: 1031ed858; end: 1031ed96f;  */

code * FUN_1031ed858(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  pcVar1 = FUN_1031ed970;
  func_0x0001000c0ebc(FUN_1031ed970,0);
  pcVar2 = FUN_1031eda50;
  func_0x0001000bfde0(FUN_1031eda50,0,PTR___sSSN_11034da80);
  func_0x000107c61574(pcVar1);
  puVar3 = PTR___sSSSQsWP_11034da98;
  func_0x0001000c2068(PTR___sSSSQsWP_11034da98);
  func_0x000107c61574(pcVar2);
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar4 = 0x14;
  (**(code **)(lStack_38 + 8))(0x14,uStack_40,lStack_38);
  uVar5 = uVar4;
  func_0x0001006c733c();
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  func_0x0001000834e4(auStack_58);
  uVar4 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  pcVar1 = FUN_1031edcf4;
  func_0x0001000bfde0(FUN_1031edcf4,0,uVar4);
  func_0x000107c61574(uVar5);
  return pcVar1;
}



/* Entry: 1031ed970; end: 1031eda4f;  */

uint FUN_1031ed970(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_1[2];
  lVar2 = param_1[3];
  lVar6 = param_1[4];
  puVar3 = &UNK_10db9b5e0;
  func_0x000107c614e0(&UNK_10db9b5e0);
  if (lVar1 == 0) {
    func_0x000107c61574();
  }
  else {
    func_0x000107c61434(lVar1);
    func_0x000107c61434(lVar2);
    FUN_1031ee034(lVar4,lVar1,lVar5,lVar2,lVar6,puVar3);
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(lVar2);
    func_0x000107c6142c(lVar1);
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c40110(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      lVar4 = lVar5;
      func_0x000107c4a324(lVar5);
      func_0x000107c61170(lVar5);
      return (uint)lVar4 ^ 1;
    }
  }
  return 1;
}



/* Entry: 1031eda50; end: 1031edb1f;  */

void FUN_1031eda50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar3 = *param_2;
  lVar6 = param_2[1];
  uVar5 = param_2[2];
  uVar1 = param_2[3];
  uVar7 = param_2[4];
  puVar2 = &UNK_10db9b5b8;
  func_0x000107c614e0(&UNK_10db9b5b8);
  if (lVar6 == 0) {
    func_0x000107c61574();
    uVar5 = 0;
    lVar6 = -0x2000000000000000;
  }
  else {
    func_0x000107c61434(lVar6);
    func_0x000107c61434(uVar1);
    lVar4 = lVar6;
    FUN_1031ee148(uVar3,lVar6,uVar5,uVar1,uVar7,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(lVar6);
    uVar5 = 0;
    if (lVar4 != 0) {
      uVar5 = uVar3;
    }
    lVar6 = -0x2000000000000000;
    if (lVar4 != 0) {
      lVar6 = lVar4;
    }
  }
  *param_1 = uVar5;
  param_1[1] = lVar6;
  return;
}



/* Entry: 1031edb20; end: 1031edcf3;  */

void FUN_1031edb20(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2bf;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined2 uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1cf;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_11f;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6f;
  
  uVar2 = param_2;
  uVar5 = param_3;
  FUN_1031ee25c();
  uStack_270 = param_4;
  func_0x0001031e60f0(&uStack_270);
  uStack_138 = uStack_1e8;
  uStack_140 = uStack_1f0;
  uStack_130 = uStack_1e0;
  uStack_11f = uStack_1cf;
  uStack_178 = uStack_228;
  uStack_180 = uStack_230;
  uStack_168 = uStack_218;
  uStack_170 = uStack_220;
  uStack_158 = uStack_208;
  uStack_160 = uStack_210;
  uStack_148 = uStack_1f8;
  uStack_150 = uStack_200;
  uStack_1b8 = uStack_268;
  uStack_1c0 = uStack_270;
  uStack_1a8 = uStack_258;
  uStack_1b0 = uStack_260;
  uStack_198 = uStack_248;
  uStack_1a0 = uStack_250;
  uStack_188 = uStack_238;
  uStack_190 = uStack_240;
  func_0x0001031e6100(&uStack_1c0);
  uStack_88 = uStack_138;
  uStack_90 = uStack_140;
  uStack_80 = uStack_130;
  uStack_6f = uStack_11f;
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  uStack_a8 = uStack_158;
  uStack_b0 = uStack_160;
  uStack_98 = uStack_148;
  uStack_a0 = uStack_150;
  uStack_108 = uStack_1b8;
  uStack_110 = uStack_1c0;
  uStack_f8 = uStack_1a8;
  uStack_100 = uStack_1b0;
  uStack_e8 = uStack_198;
  uStack_f0 = uStack_1a0;
  uStack_d8 = uStack_188;
  uStack_e0 = uStack_190;
  puVar3 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(param_4);
  uVar4 = param_2;
  uVar6 = param_3;
  func_0x000107c5fadc();
  func_0x000107c41f60();
  func_0x000107c61180();
  func_0x000107c61170();
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x0001031ee328();
  }
  else {
    uVar4 = 0;
    uVar6 = 1;
  }
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 0x6172656d6163;
  uStack_388 = 0xe600000000000000;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_2d8 = uStack_88;
  uStack_2e0 = uStack_90;
  uStack_2d0 = uStack_80;
  uStack_2bf = uStack_6f;
  uStack_318 = uStack_c8;
  uStack_320 = uStack_d0;
  uStack_308 = uStack_b8;
  uStack_310 = uStack_c0;
  uStack_2f8 = uStack_a8;
  uStack_300 = uStack_b0;
  uStack_2e8 = uStack_98;
  uStack_2f0 = uStack_a0;
  uStack_358 = uStack_108;
  uStack_360 = uStack_110;
  uStack_348 = uStack_f8;
  uStack_350 = uStack_100;
  uStack_338 = uStack_e8;
  uStack_340 = uStack_f0;
  uStack_328 = uStack_d8;
  uStack_330 = uStack_e0;
  uStack_2a8 = 1;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_288 = 0x200;
  uStack_378 = uVar2;
  uStack_370 = uVar5;
  puStack_2a0 = puVar3;
  uStack_280 = uVar4;
  uStack_278 = uVar6;
  FUN_1031ee258(&uStack_3a0);
  func_0x000107c610b4(param_1,&uStack_3a0,0x130);
  return;
}



/* Entry: 1031edcf4; end: 1031edd3b;  */

void FUN_1031edcf4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_150 [304];
  
  FUN_1031edb20(auStack_150,*param_2,param_2[1],param_2[2]);
  func_0x000107c610b4(param_1,auStack_150,0x130);
  return;
}



/* Entry: 1031edd3c; end: 1031edd43;  */

code * FUN_1031edd3c(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  pcVar1 = FUN_1031ed970;
  func_0x0001000c0ebc(FUN_1031ed970,0);
  pcVar2 = FUN_1031eda50;
  func_0x0001000bfde0(FUN_1031eda50,0,PTR___sSSN_11034da80);
  func_0x000107c61574(pcVar1);
  puVar3 = PTR___sSSSQsWP_11034da98;
  func_0x0001000c2068(PTR___sSSSQsWP_11034da98);
  func_0x000107c61574(pcVar2);
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar4 = 0x14;
  (**(code **)(lStack_38 + 8))(0x14,uStack_40,lStack_38);
  uVar5 = uVar4;
  func_0x0001006c733c();
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  func_0x0001000834e4(auStack_58);
  uVar4 = 0x112f4b9f0;
  func_0x0001000285a8(0x112f4b9f0,&UNK_10db9be60);
  pcVar1 = FUN_1031edcf4;
  func_0x0001000bfde0(FUN_1031edcf4,0,uVar4);
  func_0x000107c61574(uVar5);
  return pcVar1;
}



/* Entry: 1031edd44; end: 1031edd67;  */

void FUN_1031edd44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031edd68();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031edd68; end: 1031edda7;  */

void FUN_1031edd68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4b9f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9b508;
  func_0x000107c61520(&DAT_10db9b508,&UNK_110621a98);
  puRam0000000112f4b9f8 = puVar1;
  return;
}



/* Entry: 1031edda8; end: 1031eddab;  */

void FUN_1031edda8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ba00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ba08;
  func_0x00010002969c(0x112f4ba08,&UNK_10db9b500);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ba00 = puVar2;
  return;
}



/* Entry: 1031eddac; end: 1031eddfb;  */

void FUN_1031eddac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ba00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ba08;
  func_0x00010002969c(0x112f4ba08,&UNK_10db9b500);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ba00 = puVar2;
  return;
}



/* Entry: 1031eddfc; end: 1031ede13;  */

undefined ** FUN_1031eddfc(void)

{
  return &PTR_DAT_110621a58;
}



/* Entry: 1031ede14; end: 1031ede4b;  */

undefined * FUN_1031ede14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031ed71c();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1031ede4c; end: 1031ede5b;  */

undefined1  [16] FUN_1031ede4c(void)

{
  return ZEXT816(0x110621a98);
}



/* Entry: 1031ede5c; end: 1031edeeb;  */

long FUN_1031ede5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031edeec; end: 1031edf57;  */

undefined8 * FUN_1031edeec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1031edf58; end: 1031edf9b;  */

undefined8 * FUN_1031edf58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1031edf9c; end: 1031ee033;  */

int FUN_1031edf9c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031ee034; end: 1031ee147;  */

undefined8
FUN_1031ee034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_a0 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_a0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c614bc(&uStack_60,&uStack_50,param_6);
  uStack_80 = uStack_60;
  uStack_78 = uStack_58;
  func_0x000107c61434(uStack_58);
  puVar2 = &uStack_80;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_5 == 0) {
    func_0x000107c6142c(uStack_58);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(auStack_a0,param_5);
    func_0x000107c615e8(param_5);
    func_0x000107c6142c(uStack_58);
    func_0x000100102924(auStack_a0,&uStack_80);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x0001013c5ec8(0);
  func_0x000107c6147c(auStack_a0,&uStack_80,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_a0[0] = 0;
  }
  return auStack_a0[0];
}



/* Entry: 1031ee148; end: 1031ee257;  */

undefined1  [16]
FUN_1031ee148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_a0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c614bc(&uStack_60,&uStack_50,param_6);
  uStack_80 = uStack_60;
  uStack_78 = uStack_58;
  func_0x000107c61434(uStack_58);
  puVar2 = &uStack_80;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_5 == 0) {
    func_0x000107c6142c(uStack_58);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&uStack_a0,param_5);
    func_0x000107c615e8(param_5);
    func_0x000107c6142c(uStack_58);
    func_0x000100102924(&uStack_a0,&uStack_80);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_a0,&uStack_80,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  auVar4._8_8_ = uStack_98;
  auVar4._0_8_ = uStack_a0;
  return auVar4;
}



/* Entry: 1031ee258; end: 1031ee25b;  */

void FUN_1031ee258(void)

{
  return;
}



/* Entry: 1031ee25c; end: 1031ee537;  */

undefined1  [16] FUN_1031ee25c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f130d10);
  uVar3 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f130cd0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ee328);
  (*pcVar1)();
}



/* Entry: 1031ee538; end: 1031ee547;  */

undefined1  [16] FUN_1031ee538(void)

{
  return ZEXT816(0x110621c28);
}



/* Entry: 1031ee548; end: 1031ee587;  */

void FUN_1031ee548(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ba50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9b698;
  func_0x000107c61520(&DAT_10db9b698,&UNK_110621da0);
  puRam0000000112f4ba50 = puVar1;
  return;
}



/* Entry: 1031ee588; end: 1031ee697;  */

code * FUN_1031ee588(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c5fadc();
  uVar4 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar4 = param_3;
  }
  func_0x000107c4da08();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  if (unaff_x20 != 0) {
    func_0x0001000285a8(0x112f4ba58,&UNK_10db9b658);
    lVar2 = unaff_x20;
    func_0x0001000b637c(unaff_x20);
    func_0x000107c61170(unaff_x20);
    puVar3 = &UNK_110621cf0;
    func_0x000107c613fc(&UNK_110621cf0,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_5;
    func_0x000107c61174(param_5);
    pcVar1 = FUN_1031ee71c;
    func_0x0001000bfde0(FUN_1031ee71c,puVar3,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar3);
    return pcVar1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ee698);
  (*pcVar1)();
}



/* Entry: 1031ee698; end: 1031ee71b;  */

void FUN_1031ee698(undefined1 *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = *param_2;
  func_0x000107c43638();
  func_0x000107c61180();
  lVar3 = lVar1;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b5b98;
    func_0x000107c61168(PTR_PTR_1126b5b98);
    func_0x000107c6148c(lVar1,puVar2);
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar1);
      lVar3 = 0;
    }
  }
  lVar1 = lVar3;
  func_0x000107c307dc();
  func_0x000107c61170(lVar3);
  *param_1 = (char)lVar1;
  return;
}



/* Entry: 1031ee71c; end: 1031ee723;  */

void FUN_1031ee71c(undefined1 *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = *param_2;
  func_0x000107c43638();
  func_0x000107c61180();
  lVar3 = lVar1;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b5b98;
    func_0x000107c61168(PTR_PTR_1126b5b98);
    func_0x000107c6148c(lVar1,puVar2);
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar1);
      lVar3 = 0;
    }
  }
  lVar1 = lVar3;
  func_0x000107c307dc();
  func_0x000107c61170(lVar3);
  *param_1 = (char)lVar1;
  return;
}



/* Entry: 1031ee724; end: 1031ee78f;  */

void FUN_1031ee724(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010326c18c();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0def8;
  uVar3 = param_3;
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0ead8;
  uVar4 = uVar3;
  func_0x000107c5faec();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = ppuVar1;
  param_1[3] = uVar3;
  param_1[4] = ppuVar2;
  param_1[5] = uVar4;
  return;
}



/* Entry: 1031ee790; end: 1031ee963;  */

long FUN_1031ee790(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  lVar7 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 6;
  *(undefined8 *)(lVar7 + 0x10) = 3;
  uVar8 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar7 + 0x38) = uVar8;
  *(undefined ***)(lVar7 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x20) = uVar1;
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
  uVar8 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar7 + 0x60) = uVar8;
  *(undefined ***)(lVar7 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x48) = uVar2;
  *(undefined8 *)(lVar7 + 0x50) = uVar5;
  *(undefined8 *)(lVar7 + 0x88) = uVar8;
  *(undefined ***)(lVar7 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x70) = uVar3;
  *(undefined8 *)(lVar7 + 0x78) = uVar6;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  return lVar7;
}



/* Entry: 1031ee964; end: 1031eeaaf;  */

uint FUN_1031ee964(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_50 = param_1[6];
  puVar4 = &UNK_10db9b780;
  func_0x000107c614e0(&UNK_10db9b780);
  uVar3 = uStack_58;
  uVar2 = uStack_68;
  lVar1 = lStack_78;
  if (lStack_78 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_b0 = uStack_80;
    lStack_a8 = lStack_78;
    uStack_a0 = uStack_70;
    uStack_98 = uStack_68;
    uStack_90 = uStack_60;
    uStack_88 = uStack_58;
    func_0x000107c61434(lStack_78);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    puVar5 = &uStack_b0;
    FUN_1031ef9f8(puVar5,&uStack_80,puVar4);
    func_0x000107c61574(puVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(lVar1);
    if (((ulong)puVar5 & 1) != 0) {
      puVar4 = &UNK_10db9b7a0;
      func_0x000107c614e0(&UNK_10db9b7a0);
      func_0x000107c61434(lVar1);
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar3);
      puVar5 = &uStack_b0;
      FUN_1031ef9f8(puVar5,&uStack_80,puVar4);
      func_0x000107c61574(puVar4);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(lVar1);
      uVar6 = 1;
      if (((uint)puVar5 & 0xff) != 2) {
        uVar6 = (uint)puVar5 ^ 1;
      }
      goto LAB_1031eea94;
    }
  }
  uVar6 = 0;
LAB_1031eea94:
  return uVar6 & 1;
}



/* Entry: 1031eeab0; end: 1031eed4b;  */

void FUN_1031eeab0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_d0 = param_2[6];
  puVar7 = &UNK_10db9b758;
  func_0x000107c614e0(&UNK_10db9b758);
  uVar6 = uStack_d8;
  uVar5 = uStack_e0;
  uVar4 = uStack_e8;
  uVar3 = uStack_f0;
  lVar2 = lStack_f8;
  uVar1 = uStack_100;
  if (lStack_f8 == 0) {
    func_0x000107c61574();
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = uStack_100;
    lStack_90 = lStack_f8;
    uStack_88 = uStack_f0;
    uStack_80 = uStack_e8;
    uStack_78 = uStack_e0;
    uStack_70 = uStack_d8;
    func_0x000107c61434(lStack_f8);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar6);
    puVar8 = &uStack_98;
    param_3 = &uStack_100;
    FUN_1031efb10(puVar8,param_3,puVar7);
    func_0x000107c61574(puVar7);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(lVar2);
  }
  puVar10 = puVar8;
  func_0x000107b2883c();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  if (puVar10 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    puVar8 = param_3;
  }
  else {
    puVar9 = puVar10;
    func_0x000107c5faec();
    puVar8 = param_3;
    func_0x000107c61170(puVar10);
    puVar10 = param_3;
  }
  *param_1 = puVar9;
  param_1[1] = puVar10;
  puVar7 = &UNK_10db9b758;
  func_0x000107c614e0(&UNK_10db9b758);
  if (lVar2 == 0) {
    func_0x000107c61574();
    puVar10 = (undefined8 *)0x0;
  }
  else {
    uStack_c8 = uVar1;
    lStack_c0 = lVar2;
    uStack_b8 = uVar3;
    uStack_b0 = uVar4;
    uStack_a8 = uVar5;
    uStack_a0 = uVar6;
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar6);
    puVar10 = &uStack_c8;
    puVar8 = &uStack_100;
    FUN_1031efb10(puVar10,puVar8,puVar7);
    func_0x000107c61574(puVar7);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(lVar2);
  }
  puVar9 = puVar10;
  func_0x000107b288cc();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  if (puVar9 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar10 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
  }
  param_1[2] = puVar10;
  param_1[3] = puVar8;
  puVar7 = &UNK_10db9b758;
  func_0x000107c614e0(&UNK_10db9b758);
  if (lVar2 == 0) {
    func_0x000107c61574();
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uStack_130 = uVar1;
    lStack_128 = lVar2;
    uStack_120 = uVar3;
    uStack_118 = uVar4;
    uStack_110 = uVar5;
    uStack_108 = uVar6;
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar6);
    puVar10 = &uStack_130;
    FUN_1031efb10(puVar10,&uStack_100,puVar7);
    func_0x000107c61574(puVar7);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(lVar2);
    if (puVar10 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = puVar10;
      func_0x000107c42b54();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
    }
  }
  param_1[4] = puVar8;
  return;
}



/* Entry: 1031eed4c; end: 1031eee67;  */

uint FUN_1031eed4c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = param_1[2];
  uVar9 = param_1[3];
  uVar7 = param_1[4];
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  uVar8 = param_2[4];
  if (param_1[1] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar5 = *param_1;
    if ((uVar5 != *param_2 || param_1[1] != uVar1) && (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar9 == 0) {
    if (uVar2 == 0) goto LAB_1031eedd8;
  }
  else if ((uVar2 != 0) &&
          (((uVar6 == uVar3 && (uVar9 == uVar2)) ||
           (func_0x000107c605b8(uVar6,uVar9,uVar3,uVar2,0), (uVar6 & 1) != 0)))) {
LAB_1031eedd8:
    uVar4 = (uint)(uVar7 == 0 && uVar8 == 0);
    if (uVar7 == 0) {
      return uVar4;
    }
    if (uVar8 != 0) {
      FUN_1031efc40(0,0x112f4bad0,&PTR_PTR_1126b5b20);
      func_0x000107c61174(uVar7);
      func_0x000107c61174(uVar8);
      uVar9 = uVar7;
      func_0x000107c60118(uVar7,uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      return (uint)uVar9 & 1;
    }
    return uVar4;
  }
  return 0;
}



/* Entry: 1031eee68; end: 1031ef03b;  */

void FUN_1031eee68(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 auStack_2b0 [296];
  undefined1 auStack_188 [296];
  
  uVar9 = *param_1;
  lVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar11 = param_1[4];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    if (lVar2 != 0) {
      uVar5 = uVar11;
      func_0x000107c61174(uVar11);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (param_3 != 0) {
        lVar6 = param_2;
        func_0x000107c614f0(param_2);
        FUN_1031ee588(uVar9,lVar2,uVar1,uVar3,uVar11,param_3,lVar6);
        func_0x000107c61170(param_3);
        puVar7 = PTR___sSbSQsWP_11034dd50;
        func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
        func_0x000107c61574(uVar9);
        puVar8 = (undefined8 *)0x112d755d0;
        func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
        FUN_10326da44();
        uVar9 = *puVar8;
        func_0x000107c61174(uVar9);
        pcVar4 = FUN_1031ef048;
        FUN_10326d7dc(FUN_1031ef048,0,uVar9);
        func_0x000107c61170(uVar9);
        pcVar10 = pcVar4;
        func_0x0001006c733c(pcVar4);
        func_0x000107c61574(puVar7);
        func_0x000107c61574(pcVar4);
        uVar9 = 0x112f4ba68;
        func_0x0001000285a8(0x112f4ba68,&UNK_10db9b680);
        func_0x0001000bfde0(FUN_1031ef324,0,uVar9);
        func_0x000107c615e8(param_2);
        func_0x000107c61170(uVar5);
        func_0x000107c61574(pcVar10);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1031ef03c);
      (*pcVar4)();
    }
    func_0x000107c615e8();
  }
  func_0x0001000285a8(0x112f4bac8,&UNK_10db9b748);
  FUN_1031ef9c8(auStack_188);
  func_0x000107c610b4(auStack_2b0,auStack_188,0x128);
  func_0x000100854cb0(auStack_2b0);
  return;
}



/* Entry: 1031ef03c; end: 1031ef047;  */

void FUN_1031ef03c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined1 auStack_2b0 [296];
  undefined1 auStack_188 [296];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar11 = *param_1;
  lVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar13 = param_1[4];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    if (lVar2 != 0) {
      uVar6 = uVar13;
      func_0x000107c61174(uVar13);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar7 != 0) {
        lVar8 = lVar5;
        func_0x000107c614f0(lVar5);
        FUN_1031ee588(uVar11,lVar2,uVar1,uVar3,uVar13,lVar7,lVar8);
        func_0x000107c61170(lVar7);
        puVar9 = PTR___sSbSQsWP_11034dd50;
        func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
        func_0x000107c61574(uVar11);
        puVar10 = (undefined8 *)0x112d755d0;
        func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
        FUN_10326da44();
        uVar11 = *puVar10;
        func_0x000107c61174(uVar11);
        pcVar4 = FUN_1031ef048;
        FUN_10326d7dc(FUN_1031ef048,0,uVar11);
        func_0x000107c61170(uVar11);
        pcVar12 = pcVar4;
        func_0x0001006c733c(pcVar4);
        func_0x000107c61574(puVar9);
        func_0x000107c61574(pcVar4);
        uVar11 = 0x112f4ba68;
        func_0x0001000285a8(0x112f4ba68,&UNK_10db9b680);
        func_0x0001000bfde0(FUN_1031ef324,0,uVar11);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(uVar6);
        func_0x000107c61574(pcVar12);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1031ef03c);
      (*pcVar4)();
    }
    func_0x000107c615e8();
  }
  func_0x0001000285a8(0x112f4bac8,&UNK_10db9b748);
  FUN_1031ef9c8(auStack_188);
  func_0x000107c610b4(auStack_2b0,auStack_188,0x128);
  func_0x000100854cb0(auStack_2b0);
  return;
}



/* Entry: 1031ef048; end: 1031ef09b;  */

undefined8 FUN_1031ef048(void)

{
  undefined8 uVar1;
  
  if (lRam0000000112f4bb70 != -1) {
    func_0x000107c61568(0x112f4bb70,FUN_1031efd80);
  }
  uVar1 = uRam0000000113807100;
  func_0x000107c61174(uRam0000000113807100);
  return uVar1;
}



/* Entry: 1031ef09c; end: 1031ef323;  */

void FUN_1031ef09c(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_24f;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_167;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined2 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6f;
  
  uVar1 = param_2;
  lVar3 = param_3;
  FUN_1031efc8c();
  if ((param_2 & 1) == 0) {
    if (param_3 != 0) {
      lStack_2f0 = param_3;
      func_0x0001031e60f0(&lStack_2f0);
      uStack_1b8 = uStack_268;
      uStack_1c0 = uStack_270;
      uStack_1b0 = uStack_260;
      uStack_19f = (undefined7)uStack_24f;
      uStack_198 = (undefined1)((ulong)uStack_24f >> 0x38);
      uStack_1f8 = uStack_2a8;
      uStack_200 = uStack_2b0;
      uStack_1e8 = uStack_298;
      uStack_1f0 = uStack_2a0;
      uStack_1d8 = uStack_288;
      uStack_1e0 = uStack_290;
      uStack_1c8 = uStack_278;
      uStack_1d0 = uStack_280;
      uStack_238 = uStack_2e8;
      lStack_240 = lStack_2f0;
      uStack_228 = uStack_2d8;
      uStack_230 = uStack_2e0;
      lStack_218 = uStack_2c8;
      uStack_220 = uStack_2d0;
      lStack_208 = uStack_2b8;
      uStack_210 = uStack_2c0;
      func_0x0001031e6100(&lStack_240);
      uStack_88 = uStack_1b8;
      uStack_90 = uStack_1c0;
      uStack_80 = uStack_1b0;
      uStack_6f = CONCAT17(uStack_198,uStack_19f);
      uStack_c8 = uStack_1f8;
      uStack_d0 = uStack_200;
      uStack_b8 = uStack_1e8;
      uStack_c0 = uStack_1f0;
      uStack_a8 = uStack_1d8;
      uStack_b0 = uStack_1e0;
      uStack_98 = uStack_1c8;
      uStack_a0 = uStack_1d0;
      uStack_108 = uStack_238;
      lStack_110 = lStack_240;
      uStack_f8 = uStack_228;
      uStack_100 = uStack_230;
      uStack_e8 = lStack_218;
      uStack_f0 = uStack_220;
      uStack_d8 = lStack_208;
      uStack_e0 = uStack_210;
      func_0x000107c61174(param_3);
      goto LAB_1031ef23c;
    }
  }
  else if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c482a8(0x3fed1d1d1d1d1d1d,0x3fce9e9e9e9e9e9f,0x3fd3d3d3d3d3d3d4,0x3ff0000000000000)
    ;
    func_0x000107c45158();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lStack_2f0 = param_3;
    func_0x0001031e60f0(&lStack_2f0);
    uStack_1b8 = uStack_268;
    uStack_1c0 = uStack_270;
    uStack_1b0 = uStack_260;
    uStack_19f = (undefined7)uStack_24f;
    uStack_198 = (undefined1)((ulong)uStack_24f >> 0x38);
    uStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_238 = uStack_2e8;
    lStack_240 = lStack_2f0;
    uStack_228 = uStack_2d8;
    uStack_230 = uStack_2e0;
    lStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    lStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    func_0x0001031e6100(&lStack_240);
    uStack_88 = uStack_1b8;
    uStack_90 = uStack_1c0;
    uStack_80 = uStack_1b0;
    uStack_6f = CONCAT17(uStack_198,uStack_19f);
    uStack_c8 = uStack_1f8;
    uStack_d0 = uStack_200;
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_108 = uStack_238;
    lStack_110 = lStack_240;
    uStack_f8 = uStack_228;
    uStack_100 = uStack_230;
    uStack_e8 = lStack_218;
    uStack_f0 = uStack_220;
    uStack_d8 = lStack_208;
    uStack_e0 = uStack_210;
    goto LAB_1031ef23c;
  }
  func_0x0001031e60c4(&lStack_110);
LAB_1031ef23c:
  uStack_190 = uStack_98;
  uStack_198 = (undefined1)uStack_a0;
  uStack_197 = (undefined7)((ulong)uStack_a0 >> 8);
  uStack_180 = uStack_88;
  uStack_188 = uStack_90;
  uStack_178 = uStack_80;
  uStack_167 = uStack_6f;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = uStack_b8;
  uStack_1b8 = uStack_c0;
  uStack_1a0 = (undefined1)uStack_a8;
  uStack_19f = (undefined7)((ulong)uStack_a8 >> 8);
  uStack_1a8 = (undefined1)uStack_b0;
  uStack_1a7 = (undefined7)((ulong)uStack_b0 >> 8);
  uStack_200 = uStack_108;
  lStack_208 = lStack_110;
  uStack_1f0 = uStack_f8;
  uStack_1f8 = uStack_100;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  puVar2 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c42e08();
  func_0x000107c61180();
  uStack_120 = 1;
  if ((param_2 & 1) != 0) {
    uStack_120 = 2;
  }
  lStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0x657469726f766166;
  uStack_228 = 0xe800000000000000;
  uStack_150 = 1;
  uStack_158 = 0;
  uStack_210 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0x100;
  uStack_128 = 0;
  uStack_220 = uVar1;
  lStack_218 = lVar3;
  puStack_148 = puVar2;
  FUN_1031efc3c(&lStack_240);
  func_0x000107c610b4(param_1,&lStack_240,0x128);
  return;
}



/* Entry: 1031ef324; end: 1031ef36b;  */

void FUN_1031ef324(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_148 [296];
  
  FUN_1031ef09c(auStack_148,*param_2,*(undefined8 *)(param_2 + 8));
  func_0x000107c610b4(param_1,auStack_148,0x128);
  return;
}



/* Entry: 1031ef36c; end: 1031ef483;  */

undefined8 FUN_1031ef36c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  
  uVar6 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  pcVar2 = FUN_1031ee964;
  func_0x0001000c0ebc(param_1,FUN_1031ee964,0);
  uVar3 = 0x112f4ba60;
  func_0x0001000285a8(0x112f4ba60,&UNK_10db9b678);
  pcVar4 = FUN_1031eeab0;
  func_0x0001000bfde0(FUN_1031eeab0,0,uVar3);
  func_0x000107c61574(pcVar2);
  pcVar2 = FUN_1031eed4c;
  func_0x00010487de38(FUN_1031eed4c,0);
  func_0x000107c61574(pcVar4);
  puVar5 = &UNK_110621e58;
  func_0x000107c613fc(&UNK_110621e58,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar7);
  uVar3 = 0x112f4ba68;
  func_0x0001000285a8(0x112f4ba68,&UNK_10db9b680);
  uVar6 = 0x1031efc88;
  func_0x00010068b194(0x1031efc88,puVar5,uVar3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(puVar5);
  return uVar6;
}



/* Entry: 1031ef484; end: 1031ef4a7;  */

void FUN_1031ef484(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031ef4a8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031ef4a8; end: 1031ef4e7;  */

void FUN_1031ef4a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ba70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9b6c0;
  func_0x000107c61520(&DAT_10db9b6c0,&UNK_110621da0);
  puRam0000000112f4ba70 = puVar1;
  return;
}



/* Entry: 1031ef4e8; end: 1031ef4eb;  */

void FUN_1031ef4e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ba78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ba80;
  func_0x00010002969c(0x112f4ba80,&UNK_10db9b6b8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ba78 = puVar2;
  return;
}



/* Entry: 1031ef4ec; end: 1031ef53b;  */

void FUN_1031ef4ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4ba78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4ba80;
  func_0x00010002969c(0x112f4ba80,&UNK_10db9b6b8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4ba78 = puVar2;
  return;
}



/* Entry: 1031ef53c; end: 1031ef553;  */

undefined ** FUN_1031ef53c(void)

{
  return &PTR_DAT_110621d08;
}



/* Entry: 1031ef554; end: 1031ef58b;  */

undefined * FUN_1031ef554(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031ee548();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1031ef58c; end: 1031ef5bb;  */

void FUN_1031ef58c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  func_0x000107c61170(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1[2]);
  return;
}



/* Entry: 1031ef5bc; end: 1031ef67b;  */

undefined8 * FUN_1031ef5bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar2);
  return param_1;
}



/* Entry: 1031ef67c; end: 1031ef6c7;  */

undefined8 * FUN_1031ef67c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1031ef6c8; end: 1031ef75f;  */

int FUN_1031ef6c8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031ef760; end: 1031ef7bb;  */

long FUN_1031ef760(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031ef7bc; end: 1031ef89b;  */

undefined8 * FUN_1031ef7bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1031ef89c; end: 1031ef8ef;  */

undefined8 * FUN_1031ef89c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1031ef8f0; end: 1031ef993;  */

int FUN_1031ef8f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031ef994; end: 1031ef9c7;  */

void FUN_1031ef994(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


