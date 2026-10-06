/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103be82fc; end: 103be831b;  */

void FUN_103be82fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103be831c; end: 103be833b;  */

/* WARNING: Possible PIC construction at 0x000103be71e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be7248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be7258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be71e8) */
/* WARNING: Removing unreachable block (ram,0x000103be725c) */
/* WARNING: Removing unreachable block (ram,0x000103be71f4) */
/* WARNING: Removing unreachable block (ram,0x000103be7280) */
/* WARNING: Removing unreachable block (ram,0x000103be7228) */
/* WARNING: Removing unreachable block (ram,0x000103be724c) */

void FUN_103be831c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  if (*(int *)(unaff_x20 + 0x10) == 3) {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,3,*(undefined8 *)(unaff_x20 + 0x18));
    puVar2 = puVar1;
    func_0x000107c5ed90();
    func_0x000107c48fd4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 103be833c; end: 103be834b; -[_TtC17SCSnapDocServices17SCSnapDocServices snapDocOperaParser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be833c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5de8));
  return;
}



/* Entry: 103be834c; end: 103be83af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be834c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5de0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5de8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103be83b0; end: 103be840b; -[_TtC17SCSnapDocServices17SCSnapDocServices init] */

void FUN_103be83b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapDocServices.SCSnapDocServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103be83dc);
  (*pcVar1)();
}



/* Entry: 103be840c; end: 103be8443; -[_TtC17SCSnapDocServices17SCSnapDocServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103be8428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be842c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103be840c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5de0));
  return;
}



/* Entry: 103be8444; end: 103be8893;  */

undefined8 FUN_103be8444(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (*(char *)(param_1 + 2) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 103be8894; end: 103be893f;  */

void FUN_103be8894(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103be8940; end: 103be8943;  */

void FUN_103be8940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc634b0;
  func_0x000107c61520(&UNK_10dc634b0,&UNK_1106e5e88);
  puRam0000000112ff5e18 = puVar1;
  return;
}



/* Entry: 103be8944; end: 103be8983;  */

void FUN_103be8944(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc634b0;
  func_0x000107c61520(&UNK_10dc634b0,&UNK_1106e5e88);
  puRam0000000112ff5e18 = puVar1;
  return;
}



/* Entry: 103be8984; end: 103be8b0b;  */

void FUN_103be8984(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103be8b0c; end: 103be8bb7;  */

void FUN_103be8b0c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103be8bb8; end: 103be8bcb;  */

ulong FUN_103be8bb8(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 103be8bcc; end: 103be8c0b;  */

void FUN_103be8bcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63528;
  func_0x000107c61520(&UNK_10dc63528,&UNK_1106e5f78);
  puRam0000000112ff5e20 = puVar1;
  return;
}



/* Entry: 103be8c0c; end: 103be8c0f;  */

void FUN_103be8c0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc635c8;
  func_0x000107c61520(&UNK_10dc635c8,&UNK_1106e6008);
  puRam0000000112ff5e28 = puVar1;
  return;
}



/* Entry: 103be8c10; end: 103be8c4f;  */

void FUN_103be8c10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc635c8;
  func_0x000107c61520(&UNK_10dc635c8,&UNK_1106e6008);
  puRam0000000112ff5e28 = puVar1;
  return;
}



/* Entry: 103be8c50; end: 103be8c53;  */

void FUN_103be8c50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63668;
  func_0x000107c61520(&UNK_10dc63668,&UNK_1106e6098);
  puRam0000000112ff5e30 = puVar1;
  return;
}



/* Entry: 103be8c54; end: 103be8c93;  */

void FUN_103be8c54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63668;
  func_0x000107c61520(&UNK_10dc63668,&UNK_1106e6098);
  puRam0000000112ff5e30 = puVar1;
  return;
}



/* Entry: 103be8c94; end: 103be8f4f;  */

void FUN_103be8c94(void)

{
  return;
}



/* Entry: 103be8f50; end: 103be8f87;  */

/* WARNING: Possible PIC construction at 0x000103be8f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be8f74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be8f68) */
/* WARNING: Removing unreachable block (ram,0x000103be8f78) */

void FUN_103be8f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103be8f88; end: 103be90df;  */

undefined8 * FUN_103be8f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar4 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar4;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103be90e0; end: 103be915b;  */

undefined8 * FUN_103be90e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar2 = param_2[10];
  uVar3 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar1;
  return param_1;
}



/* Entry: 103be915c; end: 103be920f;  */

int FUN_103be915c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103be9210; end: 103be926b;  */

undefined8 * FUN_103be9210(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 103be926c; end: 103be92a7;  */

undefined8 * FUN_103be926c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 103be92a8; end: 103be92db;  */

undefined1  [16] FUN_103be92a8(void)

{
  return ZEXT816(0x1106e61b0);
}



/* Entry: 103be92dc; end: 103be93ab;  */

undefined8 * FUN_103be92dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x000103be92b8(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 103be93ac; end: 103be93f3;  */

undefined8 * FUN_103be93ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  func_0x000103be92d4(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 103be93f4; end: 103be94e3;  */

int FUN_103be93f4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103be94e4; end: 103be95ab;  */

undefined8 * FUN_103be94e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x000102f4a26c(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 103be95ac; end: 103be95f7;  */

undefined8 * FUN_103be95ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  func_0x000103be94dc(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 103be95f8; end: 103be96ab;  */

int FUN_103be95f8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103be96ac; end: 103be96e7;  */

undefined8 * FUN_103be96ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 103be96e8; end: 103be9753;  */

undefined8 * FUN_103be96e8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103be9754; end: 103be9797;  */

undefined8 * FUN_103be9754(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103be9798; end: 103be97a7;  */

undefined1  [16] FUN_103be9798(void)

{
  return ZEXT816(0x1106e6458);
}



/* Entry: 103be97a8; end: 103be9837;  */

/* WARNING: Possible PIC construction at 0x000103be97bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be97cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be97f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103be9818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be97f8) */
/* WARNING: Removing unreachable block (ram,0x000103be9804) */
/* WARNING: Removing unreachable block (ram,0x000103be9810) */
/* WARNING: Removing unreachable block (ram,0x000103be982c) */
/* WARNING: Removing unreachable block (ram,0x000103be9818) */
/* WARNING: Removing unreachable block (ram,0x000103be97d0) */
/* WARNING: Removing unreachable block (ram,0x000103be97e4) */
/* WARNING: Removing unreachable block (ram,0x000103be97f0) */
/* WARNING: Removing unreachable block (ram,0x000103be97c0) */
/* WARNING: Removing unreachable block (ram,0x000103be981c) */

void FUN_103be97a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103be9838; end: 103be9cc3;  */

undefined8 * FUN_103be9838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[2];
  uVar4 = param_2[5];
  uVar5 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  param_1[5] = uVar4;
  param_1[4] = uVar5;
  uVar4 = param_2[6];
  param_1[6] = uVar4;
  uVar6 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar6;
  uVar6 = param_2[9];
  uVar5 = param_2[10];
  param_1[9] = uVar6;
  param_1[10] = uVar5;
  uVar5 = param_2[0xb];
  param_1[0xb] = uVar5;
  cVar2 = *(char *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar5);
  if (cVar2 == -1) {
    uVar6 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar6;
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar5;
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  }
  else {
    uVar6 = param_2[0xc];
    uVar4 = param_2[0xd];
    uVar5 = param_2[0xe];
    uVar1 = param_2[0xf];
    func_0x000103be92b8(uVar6,uVar4,uVar5,uVar1,cVar2);
    param_1[0xc] = uVar6;
    param_1[0xd] = uVar4;
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar1;
    *(char *)(param_1 + 0x10) = cVar2;
  }
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar6;
  cVar2 = *(char *)(param_2 + 0x16);
  func_0x000107c61434();
  if (cVar2 == -1) {
    uVar6 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + 0xa1);
    *(undefined8 *)((long)param_1 + 0xa9) = *(undefined8 *)((long)param_2 + 0xa9);
    *(undefined8 *)((long)param_1 + 0xa1) = uVar6;
  }
  else {
    uVar6 = param_2[0x13];
    uVar5 = param_2[0x14];
    uVar4 = param_2[0x15];
    func_0x000102f4a26c(uVar6,uVar5,uVar4,cVar2);
    param_1[0x13] = uVar6;
    param_1[0x14] = uVar5;
    param_1[0x15] = uVar4;
    *(char *)(param_1 + 0x16) = cVar2;
  }
  *(undefined1 *)((long)param_1 + 0xb1) = *(undefined1 *)((long)param_2 + 0xb1);
  lVar3 = param_2[0x18];
  if (lVar3 == 0) {
    uVar6 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar6;
    uVar6 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar6;
  }
  else {
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = lVar3;
    uVar6 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = uVar6;
    func_0x000107c61434();
    func_0x000107c61434(uVar6);
  }
  return param_1;
}



/* Entry: 103be9cc4; end: 103be9ecb;  */

undefined8 * FUN_103be9cc4(undefined8 *param_1)

{
  func_0x000103be92d4(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return param_1;
}



/* Entry: 103be9ecc; end: 103be9f97;  */

int FUN_103be9ecc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x36] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103be9f98; end: 103bea003;  */

/* WARNING: Possible PIC construction at 0x000103be9fac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103be9fb0) */

void FUN_103be9f98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103bea004; end: 103bea077;  */

undefined8 * FUN_103bea004(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 103bea078; end: 103bea0c3;  */

undefined8 * FUN_103bea078(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 103bea0c4; end: 103bea15f;  */

int FUN_103bea0c4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103bea160; end: 103bea193;  */

undefined8 * FUN_103bea160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103bea194; end: 103bea1ef;  */

undefined8 * FUN_103bea194(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 103bea1f0; end: 103bea22b;  */

undefined8 * FUN_103bea1f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 103bea22c; end: 103bea2c3;  */

int FUN_103bea22c(int *param_1,int param_2)

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



/* Entry: 103bea2c4; end: 103bea2f7;  */

undefined8 * FUN_103bea2c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103bea2f8; end: 103bea34b;  */

undefined8 * FUN_103bea2f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 103bea34c; end: 103bea387;  */

undefined8 * FUN_103bea34c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 103bea388; end: 103bea41f;  */

int FUN_103bea388(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103bea420; end: 103bea487;  */

/* WARNING: Possible PIC construction at 0x000103bea434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bea45c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bea438) */
/* WARNING: Removing unreachable block (ram,0x000103bea44c) */
/* WARNING: Removing unreachable block (ram,0x000103bea458) */
/* WARNING: Removing unreachable block (ram,0x000103bea460) */
/* WARNING: Removing unreachable block (ram,0x000103bea46c) */
/* WARNING: Removing unreachable block (ram,0x000103bea478) */

void FUN_103bea420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103bea488; end: 103bea7c7;  */

undefined8 * FUN_103bea488(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  cVar2 = *(char *)(param_2 + 7);
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  if (cVar2 == -1) {
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar4;
  }
  else {
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar3 = param_2[6];
    func_0x000102f4a26c(uVar4,uVar5,uVar3,cVar2);
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar3;
    *(char *)(param_1 + 7) = cVar2;
  }
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  cVar2 = *(char *)(param_2 + 0xe);
  func_0x000107c61434();
  if (cVar2 == -1) {
    uVar4 = param_2[10];
    uVar3 = param_2[0xd];
    uVar5 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar5;
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  }
  else {
    uVar4 = param_2[10];
    uVar3 = param_2[0xb];
    uVar5 = param_2[0xc];
    uVar1 = param_2[0xd];
    func_0x000103be92b8(uVar4,uVar3,uVar5,uVar1,cVar2);
    param_1[10] = uVar4;
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar5;
    param_1[0xd] = uVar1;
    *(char *)(param_1 + 0xe) = cVar2;
  }
  *(undefined1 *)((long)param_1 + 0x71) = *(undefined1 *)((long)param_2 + 0x71);
  uVar4 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar4;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103bea7c8; end: 103bea8d3;  */

undefined8 * FUN_103bea7c8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  func_0x000107c6142c(uVar2);
  uVar6 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  func_0x000107c6142c(uVar2);
  if (*(char *)(param_1 + 7) == -1) {
LAB_103bea840:
    uVar6 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
    *(undefined8 *)((long)param_1 + 0x29) = uVar6;
  }
  else {
    cVar1 = *(char *)(param_2 + 7);
    if (cVar1 == -1) {
      func_0x000103be9cf8(param_1 + 4);
      goto LAB_103bea840;
    }
    uVar4 = param_2[6];
    uVar6 = param_1[4];
    uVar2 = param_1[5];
    uVar3 = param_1[6];
    uVar5 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    param_1[6] = uVar4;
    *(char *)(param_1 + 7) = cVar1;
    func_0x000103be94dc(uVar6,uVar2,uVar3);
  }
  uVar6 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  func_0x000107c6142c(uVar2);
  if (*(char *)(param_1 + 0xe) != -1) {
    cVar1 = *(char *)(param_2 + 0xe);
    if (cVar1 != -1) {
      uVar6 = param_1[10];
      uVar3 = param_1[0xb];
      uVar2 = param_1[0xc];
      uVar4 = param_1[0xd];
      uVar5 = param_2[10];
      uVar8 = param_2[0xd];
      uVar7 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar5;
      param_1[0xd] = uVar8;
      param_1[0xc] = uVar7;
      *(char *)(param_1 + 0xe) = cVar1;
      func_0x000103be92d4(uVar6,uVar3,uVar2,uVar4);
      goto LAB_103bea8ac;
    }
    FUN_103be9cc4(param_1 + 10);
  }
  uVar6 = param_2[10];
  uVar3 = param_2[0xd];
  uVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar6;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar2;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
LAB_103bea8ac:
  *(undefined1 *)((long)param_1 + 0x71) = *(undefined1 *)((long)param_2 + 0x71);
  uVar6 = param_2[0x10];
  uVar2 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar6;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103bea8d4; end: 103bea98b;  */

int FUN_103bea8d4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103bea98c; end: 103bea9df;  */

/* WARNING: Possible PIC construction at 0x000103bea9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bea9b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bea9a4) */
/* WARNING: Removing unreachable block (ram,0x000103bea9b4) */
/* WARNING: Removing unreachable block (ram,0x000103bea9d4) */
/* WARNING: Removing unreachable block (ram,0x000103bea9c0) */
/* WARNING: Removing unreachable block (ram,0x000103be94dc) */

void FUN_103bea98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103bea9e0; end: 103beabdf;  */

undefined8 * FUN_103bea9e0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  uVar4 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar4;
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  cVar1 = *(char *)(param_2 + 10);
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  if (cVar1 == -1) {
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x49) = *(undefined8 *)((long)param_2 + 0x49);
    *(undefined8 *)((long)param_1 + 0x41) = uVar4;
  }
  else {
    uVar4 = param_2[7];
    uVar3 = param_2[8];
    uVar2 = param_2[9];
    func_0x000102f4a26c(uVar4,uVar3,uVar2,cVar1);
    param_1[7] = uVar4;
    param_1[8] = uVar3;
    param_1[9] = uVar2;
    *(char *)(param_1 + 10) = cVar1;
  }
  return param_1;
}



/* Entry: 103beabe0; end: 103beac8f;  */

undefined8 * FUN_103beabe0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar3);
  uVar3 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  func_0x000107c6142c(uVar2);
  if (*(char *)(param_1 + 10) != -1) {
    cVar1 = *(char *)(param_2 + 10);
    if (cVar1 != -1) {
      uVar5 = param_2[9];
      uVar3 = param_1[7];
      uVar2 = param_1[8];
      uVar4 = param_1[9];
      uVar6 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar6;
      param_1[9] = uVar5;
      *(char *)(param_1 + 10) = cVar1;
      func_0x000103be94dc(uVar3,uVar2,uVar4);
      return param_1;
    }
    func_0x000103be9cf8(param_1 + 7);
  }
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x49) = *(undefined8 *)((long)param_2 + 0x49);
  *(undefined8 *)((long)param_1 + 0x41) = uVar3;
  return param_1;
}



/* Entry: 103beac90; end: 103bead3f;  */

int FUN_103beac90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103bead40; end: 103bead7f;  */

/* WARNING: Possible PIC construction at 0x000103bead54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bead64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bead58) */
/* WARNING: Removing unreachable block (ram,0x000103bead68) */

void FUN_103bead40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103bead80; end: 103beadfb;  */

undefined8 * FUN_103bead80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 103beadfc; end: 103beaec7;  */

undefined8 * FUN_103beadfc(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103beaec8; end: 103beaf3b;  */

undefined8 * FUN_103beaec8(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103beaf3c; end: 103beafe7;  */

int FUN_103beaf3c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103beafe8; end: 103beb02f;  */

/* WARNING: Possible PIC construction at 0x000103beaffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103beb00c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103beb01c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103beb010) */
/* WARNING: Removing unreachable block (ram,0x000103beb000) */
/* WARNING: Removing unreachable block (ram,0x000103beb020) */

void FUN_103beafe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103beb030; end: 103beb0bb;  */

undefined8 * FUN_103beb030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 103beb0bc; end: 103beb1a7;  */

undefined8 * FUN_103beb0bc(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103beb1a8; end: 103beb22b;  */

undefined8 * FUN_103beb1a8(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103beb22c; end: 103beb2eb;  */

int FUN_103beb22c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103beb2ec; end: 103beb327;  */

undefined8 * FUN_103beb2ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 103beb328; end: 103beb38b;  */

undefined8 * FUN_103beb328(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103beb38c; end: 103beb3cf;  */

undefined8 * FUN_103beb38c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103beb3d0; end: 103beb477;  */

int FUN_103beb3d0(ulong *param_1,int param_2)

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



/* Entry: 103beb478; end: 103beb4ab;  */

undefined8 * FUN_103beb478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 103beb4ac; end: 103beb507;  */

undefined8 * FUN_103beb4ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103beb508; end: 103beb543;  */

undefined8 * FUN_103beb508(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103beb544; end: 103beb783;  */

int FUN_103beb544(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103beb784; end: 103beb89f;  */

void FUN_103beb784(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar8 = *(long *)(unaff_x22 + 0x110);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x100);
  uVar2 = puVar4[8];
  uVar3 = puVar4[9];
  uVar10 = puVar4[6];
  *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
  uVar11 = puVar4[7];
  *(undefined8 *)(unaff_x22 + 0x128) = uVar11;
  uVar12 = puVar4[4];
  *(undefined8 *)(unaff_x22 + 0x130) = uVar12;
  uVar13 = puVar4[5];
  *(undefined8 *)(unaff_x22 + 0x138) = uVar13;
  uVar14 = puVar4[2];
  *(undefined8 *)(unaff_x22 + 0x140) = uVar14;
  uVar15 = puVar4[3];
  *(undefined8 *)(unaff_x22 + 0x148) = uVar15;
  uVar7 = *puVar4;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar7;
  uVar9 = puVar4[1];
  *(undefined8 *)(unaff_x22 + 0x158) = uVar9;
  FUN_103bebba4(puVar4,unaff_x22 + 0x60);
  piVar6 = *(int **)(lVar8 + 0x40);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar14;
  *(undefined8 *)(unaff_x22 + 200) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined **)(unaff_x22 + 0x168) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x22 + 0x170) = 0;
  *(int **)(unaff_x22 + 0x160) = piVar6;
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x178) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103beb8a0;
                    /* WARNING: Could not recover jumptable at 0x000103beb89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x108),
             *(undefined8 *)(unaff_x22 + 0x110));
  return;
}



/* Entry: 103beb8a0; end: 103beb903;  */

void FUN_103beb8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x180) = param_1;
  *(undefined8 *)(lVar2 + 0x188) = param_2;
  *(undefined8 *)(lVar2 + 400) = param_3;
  *(long *)(lVar2 + 0x198) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x178));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103beb904;
  }
  else {
    pcVar1 = FUN_103bebb64;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103beb904; end: 103bebb63;  */

void FUN_103beb904(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x22;
  long lVar20;
  
  lVar18 = *(long *)(unaff_x22 + 0x180);
  lVar16 = *(long *)(unaff_x22 + 0x168);
  uVar14 = *(ulong *)(lVar18 + 0x10);
  lVar20 = *(long *)(lVar16 + 0x10);
  if (SCARRY8(lVar20,uVar14)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x103bebb58);
    (*pcVar9)();
  }
  func_0x000107c61434(lVar18);
  func_0x000107c61558();
  lVar17 = *(long *)(unaff_x22 + 0x168);
  if (((int)lVar16 == 0) ||
     (uVar11 = *(ulong *)(lVar17 + 0x18) >> 1, (long)uVar11 < (long)(lVar20 + uVar14))) {
    FUN_103becd4c();
    uVar11 = *(ulong *)(lVar16 + 0x18) >> 1;
    lVar18 = *(long *)(lVar18 + 0x10);
    lVar17 = lVar16;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x10);
  }
  if (lVar18 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x180));
    if (uVar14 != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103bebb5c);
      (*pcVar9)();
    }
  }
  else {
    if (uVar11 - *(long *)(lVar17 + 0x10) < uVar14) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x103bebb60);
      (*pcVar9)();
    }
    lVar16 = *(long *)(unaff_x22 + 0x180);
    func_0x000107c6140c(lVar17 + *(long *)(lVar17 + 0x10) * 0x20 + 0x20,lVar16 + 0x20,uVar14,
                        &UNK_1106e6610);
    func_0x000107c6142c(lVar16);
    if (uVar14 != 0) {
      if (SCARRY8(*(long *)(lVar17 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103bebb64);
        (*pcVar9)();
      }
      *(ulong *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + uVar14;
    }
  }
  uVar14 = *(ulong *)(unaff_x22 + 0x188);
  uVar11 = *(ulong *)(unaff_x22 + 400);
  func_0x0001012b5aa0(unaff_x22 + 0xb0);
  uVar14 = uVar14 & 0xffffffffffff;
  if ((uVar11 & 0x2000000000000000) != 0) {
    uVar14 = uVar11 >> 0x38 & 0xf;
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x180);
  if (uVar14 == 0) {
    uVar19 = *(undefined8 *)(unaff_x22 + 400);
    func_0x000107c6142c(uVar15);
    func_0x000107c6142c(uVar19);
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar16 = *(long *)(unaff_x22 + 0x170);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar8);
    func_0x000107c6142c(uVar15);
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
    *(undefined8 *)(unaff_x22 + 200) = uVar6;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar7;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar8;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar13;
    *(ulong *)(unaff_x22 + 0xf8) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xe8);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xe0);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xf8);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xf0);
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xc0);
    if (lVar16 != 99) {
      *(long *)(unaff_x22 + 0x168) = lVar17;
      *(long *)(unaff_x22 + 0x170) = *(long *)(unaff_x22 + 0x170) + 1;
      piVar12 = *(int **)(unaff_x22 + 0x160);
      iVar1 = *piVar12;
      plVar10 = (long *)(ulong)(uint)piVar12[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x178) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_103beb8a0;
                    /* WARNING: Could not recover jumptable at 0x000103bebb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar12))
                (plVar10,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x108),
                 *(undefined8 *)(unaff_x22 + 0x110));
      return;
    }
    func_0x0001012b5aa0(unaff_x22 + 0xb0);
  }
                    /* WARNING: Could not recover jumptable at 0x000103bebae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar17);
  return;
}



/* Entry: 103bebb64; end: 103bebba3;  */

void FUN_103bebb64(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x0001012b5aa0(unaff_x22 + 0xb0);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103bebba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bebba4; end: 103bebbdf;  */

undefined8 FUN_103bebba4(undefined8 param_1,undefined8 param_2)

{
  FUN_103bead80(param_2,param_1);
  return param_2;
}



/* Entry: 103bebbe0; end: 103bebbfb;  */

void FUN_103bebbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x140) = param_3;
  *(undefined8 *)(unaff_x22 + 0x148) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x130) = param_1;
  *(undefined8 *)(unaff_x22 + 0x138) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bebbfc,0,0);
  return;
}



/* Entry: 103bebbfc; end: 103bebd0f;  */

void FUN_103bebbfc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x140);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x130);
  uVar2 = puVar5[10];
  uVar3 = puVar5[0xb];
  *(undefined8 *)(unaff_x22 + 0x150) = puVar5[8];
  *(undefined8 *)(unaff_x22 + 0x158) = puVar5[9];
  *(undefined8 *)(unaff_x22 + 0x160) = puVar5[6];
  *(undefined8 *)(unaff_x22 + 0x168) = puVar5[7];
  *(undefined8 *)(unaff_x22 + 0x170) = puVar5[4];
  *(undefined8 *)(unaff_x22 + 0x178) = puVar5[5];
  *(undefined8 *)(unaff_x22 + 0x180) = puVar5[2];
  *(undefined8 *)(unaff_x22 + 0x188) = puVar5[3];
  *(undefined8 *)(unaff_x22 + 400) = *puVar5;
  *(undefined8 *)(unaff_x22 + 0x198) = puVar5[1];
  FUN_103bece54(puVar5,unaff_x22 + 0x70);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  piVar7 = *(int **)(lVar8 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
  *(undefined **)(unaff_x22 + 0x1b0) = puVar4;
  *(int **)(unaff_x22 + 0x1a0) = piVar7;
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x120);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103bebd10;
                    /* WARNING: Could not recover jumptable at 0x000103bebd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (plVar6,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x138),
             *(undefined8 *)(unaff_x22 + 0x140));
  return;
}



/* Entry: 103bebd10; end: 103bebd73;  */

void FUN_103bebd10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x1c0) = param_1;
  *(undefined8 *)(lVar2 + 0x1c8) = param_2;
  *(undefined8 *)(lVar2 + 0x1d0) = param_3;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1b8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103bebd74;
  }
  else {
    pcVar1 = FUN_103bebfc4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103bebd74; end: 103bebfc3;  */

void FUN_103bebd74(void)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar10 = *(long *)(unaff_x22 + 0x1c0);
  lVar8 = *(long *)(unaff_x22 + 0x1b0);
  uVar6 = *(ulong *)(lVar10 + 0x10);
  lVar12 = *(long *)(lVar8 + 0x10);
  if (SCARRY8(lVar12,uVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103bebfb8);
    (*pcVar2)();
  }
  func_0x000107c61434(lVar10);
  func_0x000107c61558();
  lVar9 = *(long *)(unaff_x22 + 0x1b0);
  if (((int)lVar8 == 0) ||
     (uVar4 = *(ulong *)(lVar9 + 0x18) >> 1, (long)uVar4 < (long)(lVar12 + uVar6))) {
    FUN_103becd4c();
    uVar4 = *(ulong *)(lVar8 + 0x18) >> 1;
    lVar10 = *(long *)(lVar10 + 0x10);
    lVar9 = lVar8;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  if (lVar10 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1c0));
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bebfbc);
      (*pcVar2)();
    }
  }
  else {
    if (uVar4 - *(long *)(lVar9 + 0x10) < uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bebfc0);
      (*pcVar2)();
    }
    lVar8 = *(long *)(unaff_x22 + 0x1c0);
    func_0x000107c6140c(lVar9 + *(long *)(lVar9 + 0x10) * 0x20 + 0x20,lVar8 + 0x20,uVar6,
                        &UNK_1106e6610);
    func_0x000107c6142c(lVar8);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar9 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bebfc4);
        (*pcVar2)();
      }
      *(ulong *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + uVar6;
    }
  }
  uVar6 = *(ulong *)(unaff_x22 + 0x1c8);
  uVar4 = *(ulong *)(unaff_x22 + 0x1d0);
  func_0x0001012b6980(unaff_x22 + 0xd0);
  uVar6 = uVar6 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar6 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1d0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1c0));
    func_0x000107c6142c(uVar7);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x158);
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x198));
    func_0x000107c61434(uVar11);
    func_0x000107c61434(uVar13);
    func_0x000107c61434(uVar14);
    func_0x000107c61434(uVar15);
    func_0x000107c6142c(uVar7);
    lVar8 = *(long *)(unaff_x22 + 0x1a8) + 1;
    *(long *)(unaff_x22 + 0x1a8) = lVar8;
    *(long *)(unaff_x22 + 0x1b0) = lVar9;
    *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x198);
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 400);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x178);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x170);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x168);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x160);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x150);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x1c8);
    *(ulong *)(unaff_x22 + 0x128) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xe8);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xe0);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x118);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x110);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x128);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x120);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xf8);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xf0);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x100);
    if (lVar8 != 100) {
      piVar5 = *(int **)(unaff_x22 + 0x1a0);
      iVar1 = *piVar5;
      plVar3 = (long *)(ulong)(uint)piVar5[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1b8) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_103bebd10;
                    /* WARNING: Could not recover jumptable at 0x000103bebfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar5))
                (plVar3,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x138),
                 *(undefined8 *)(unaff_x22 + 0x140));
      return;
    }
    func_0x0001012b6980(unaff_x22 + 0xd0);
  }
                    /* WARNING: Could not recover jumptable at 0x000103bebf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar9);
  return;
}



/* Entry: 103bebfc4; end: 103bec003;  */

void FUN_103bebfc4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  func_0x0001012b6980(unaff_x22 + 0xd0);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103bec000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bec004; end: 103bec023;  */

void FUN_103bec004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bec024,0,0);
  return;
}



/* Entry: 103bec024; end: 103bec107;  */

void FUN_103bec024(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  piVar4 = *(int **)(*(long *)(unaff_x22 + 0x28) + 0x60);
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  *(undefined **)(unaff_x22 + 0x50) = puVar2;
  *(int **)(unaff_x22 + 0x38) = piVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = 0;
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103bec0a4;
                    /* WARNING: Could not recover jumptable at 0x000103bec0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),0,0,
             *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 103bec108; end: 103bec2db;  */

void FUN_103bec108(void)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x60);
  lVar7 = *(long *)(unaff_x22 + 0x50);
  uVar6 = *(ulong *)(lVar9 + 0x10);
  lVar11 = *(long *)(lVar7 + 0x10);
  if (SCARRY8(lVar11,uVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103bec2d0);
    (*pcVar2)();
  }
  func_0x000107c61434(lVar9);
  func_0x000107c61558();
  lVar8 = *(long *)(unaff_x22 + 0x50);
  if (((int)lVar7 == 0) ||
     (uVar4 = *(ulong *)(lVar8 + 0x18) >> 1, (long)uVar4 < (long)(lVar11 + uVar6))) {
    FUN_103bece90();
    uVar4 = *(ulong *)(lVar7 + 0x18) >> 1;
    lVar9 = *(long *)(lVar9 + 0x10);
    lVar8 = lVar7;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  if (lVar9 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x60));
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bec2d4);
      (*pcVar2)();
    }
  }
  else {
    if (uVar4 - *(long *)(lVar8 + 0x10) < uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bec2d8);
      (*pcVar2)();
    }
    lVar7 = *(long *)(unaff_x22 + 0x60);
    func_0x000107c6140c(lVar8 + *(long *)(lVar8 + 0x10) * 0x28 + 0x20,lVar7 + 0x20,uVar6,
                        &UNK_1106e6588);
    func_0x000107c6142c(lVar7);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar8 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bec2dc);
        (*pcVar2)();
      }
      *(ulong *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + uVar6;
    }
  }
  uVar6 = *(ulong *)(unaff_x22 + 0x68);
  uVar4 = *(ulong *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c6142c(uVar10);
  uVar6 = uVar6 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar6 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    uVar4 = *(ulong *)(unaff_x22 + 0x70);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar7 = *(long *)(unaff_x22 + 0x48) + 1;
    *(long *)(unaff_x22 + 0x48) = lVar7;
    *(long *)(unaff_x22 + 0x50) = lVar8;
    *(ulong *)(unaff_x22 + 0x40) = uVar4;
    if (lVar7 != 100) {
      piVar5 = *(int **)(unaff_x22 + 0x38);
      iVar1 = *piVar5;
      plVar3 = (long *)(ulong)(uint)piVar5[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x58) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = 0x103bec0a4;
                    /* WARNING: Could not recover jumptable at 0x000103bec298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar5))
                (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),uVar10,uVar4,
                 *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
      return;
    }
  }
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103bec2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar8);
  return;
}



/* Entry: 103bec2dc; end: 103bec31b;  */

void FUN_103bec2dc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103bec318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bec31c; end: 103bec3cf;  */

void FUN_103bec31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x268) = unaff_x20;
  *(long *)(unaff_x22 + 0x260) = param_7;
  *(undefined8 *)(unaff_x22 + 600) = param_6;
  *(undefined8 *)(unaff_x22 + 0x250) = param_5;
  *(undefined8 *)(unaff_x22 + 0x248) = param_4;
  *(undefined8 *)(unaff_x22 + 0x240) = param_3;
  *(undefined8 *)(unaff_x22 + 0x238) = param_2;
  *(undefined8 *)(unaff_x22 + 0x230) = param_1;
  piVar3 = *(int **)(param_7 + 0x38);
  *(int **)(unaff_x22 + 0x270) = piVar3;
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x278) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103bec3d0;
                    /* WARNING: Could not recover jumptable at 0x000103bec3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0xe8,param_2,param_3,0,param_6,param_7)
  ;
  return;
}



/* Entry: 103bec3d0; end: 103bec48b;  */

void FUN_103bec3d0(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x278));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000103bec414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 8))();
    return;
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x120);
  piVar3 = *(int **)(*(long *)(lVar5 + 0x260) + 0x18);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(lVar5 + 0x280) = plVar2;
  *plVar2 = lVar6;
  plVar2[1] = (long)FUN_103bec48c;
                    /* WARNING: Could not recover jumptable at 0x000103bec488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (lVar5 + 0x1e8,*(undefined8 *)(lVar5 + 0x238),*(undefined8 *)(lVar5 + 0x240),uVar4,
             *(undefined8 *)(lVar5 + 0x248),*(undefined8 *)(lVar5 + 0x250),
             *(undefined8 *)(lVar5 + 600),*(undefined8 *)(lVar5 + 0x260));
  return;
}



/* Entry: 103bec48c; end: 103bec51b;  */

void FUN_103bec48c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x280));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x218) = *(undefined8 *)(lVar2 + 0x1f0);
    *(undefined8 *)(lVar2 + 0x210) = *(undefined8 *)(lVar2 + 0x1e8);
    func_0x000100bcb1dc(lVar2 + 0x210);
    *(undefined8 *)(lVar2 + 0x228) = *(undefined8 *)(lVar2 + 0x200);
    *(undefined8 *)(lVar2 + 0x220) = *(undefined8 *)(lVar2 + 0x1f8);
    func_0x000100bcb1dc(lVar2 + 0x220);
    func_0x0001012b6798(lVar2 + 0xe8);
    pcVar1 = FUN_103bec51c;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x103beca00;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103bec51c; end: 103bec58f;  */

void FUN_103bec51c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x270);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x288) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103bec590;
                    /* WARNING: Could not recover jumptable at 0x000103bec58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x238),
             *(undefined8 *)(unaff_x22 + 0x240),0,*(undefined8 *)(unaff_x22 + 600),
             *(undefined8 *)(unaff_x22 + 0x260));
  return;
}



/* Entry: 103bec590; end: 103bec657;  */

void FUN_103bec590(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar5 + 0x290) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x288));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103bec658,0,0);
    return;
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x48);
  piVar3 = *(int **)(*(long *)(lVar5 + 0x260) + 0x70);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(lVar5 + 0x298) = plVar2;
  *plVar2 = lVar6;
  plVar2[1] = (long)FUN_103bec6c0;
                    /* WARNING: Could not recover jumptable at 0x000103bec654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,lVar5 + 0x1c0,*(undefined8 *)(lVar5 + 0x238),*(undefined8 *)(lVar5 + 0x240),
             uVar4,1,*(undefined8 *)(lVar5 + 600),*(undefined8 *)(lVar5 + 0x260));
  return;
}



/* Entry: 103bec658; end: 103bec6bf;  */

void FUN_103bec658(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c614ac(0);
  *(undefined8 *)(unaff_x22 + 0x2b0) = 1;
  *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x290);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2b8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103bec798;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(200000000)
  ;
  return;
}



/* Entry: 103bec6c0; end: 103bec727;  */

void FUN_103bec6c0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x298));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x2e8) = 0;
    func_0x0001012b6798(lVar2 + 0x10);
    pcVar1 = FUN_103bec9b8;
  }
  else {
    pcVar1 = FUN_103bec728;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103bec728; end: 103bec797;  */

void FUN_103bec728(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c614ac(0);
  func_0x0001012b6798(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x2b0) = 1;
  *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x2a0);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2b8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103bec798;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(200000000)
  ;
  return;
}


