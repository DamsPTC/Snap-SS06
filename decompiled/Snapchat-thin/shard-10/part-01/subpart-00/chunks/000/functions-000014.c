/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078d45e4; end: 1078d4607;  */

void FUN_1078d45e4(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001003a8c94();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 1078d48a0; end: 1078d4913;  */

undefined8 * FUN_1078d48a0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_1109e8b98;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = param_2[2];
  func_0x0001078d3edc(param_1 + 4,param_2 + 3);
  return param_1;
}



/* Entry: 1078d4d10; end: 1078d4ddf;  */

/* WARNING: Possible PIC construction at 0x0001078d4f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d4f28) */

long * FUN_1078d4d10(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined1 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_180 [56];
  undefined8 uStack_148;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f8 [56];
  long lStack_c0;
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  
  func_0x0001078d5418();
  lStack_108 = *param_3;
  lStack_100 = param_3[1];
  if (lStack_100 != 0) {
    plVar5 = (long *)(lStack_100 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = extraout_x8;
  func_0x000104c2fe00(auStack_f8,*(long *)(*(long *)(lStack_108 + 0x330) + 0x1b8) + 8);
  func_0x0001078bf398(&lStack_c0,auStack_f8);
  plVar5 = &lStack_c0;
  lVar7 = 1;
  func_0x0001077ddc48(param_1);
  func_0x0001074730f4(auStack_b8);
  func_0x000104c2f714(auStack_f8);
  plVar4 = &lStack_108;
  func_0x0001078d4c58();
  func_0x0001078d5404(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001074730f4(auStack_b8);
    func_0x000104c2f714(auStack_f8);
    func_0x0001078d4c58(&lStack_108);
    func_0x0001078d5440();
    plVar4 = &lStack_220;
    func_0x0001078d5418();
    lVar1 = *plVar5;
    lStack_1f8 = plVar5[1];
    lStack_200 = lVar1;
    uStack_148 = extraout_x8_01;
    if (lStack_1f8 != 0) {
      do {
        func_0x0001078d5428();
      } while (extraout_w10 != 0);
    }
    func_0x000104c2fe00(auStack_180,*(long *)(*(long *)(lVar1 + 0x2b0) + 0x150) + 8);
    lVar7 = lVar7 + 0x38;
    puVar6 = auStack_180;
    func_0x0001078be7f4();
    if ((lVar7 == 0) || (*(long *)(puVar6 + 0x38) == 0)) {
      func_0x00010724ef84(&lStack_1f0,auStack_180);
      func_0x0001004c3cd0(&uStack_1b8,&UNK_10f433cce,&lStack_1f0);
      extraout_x8_00[1] = uStack_1b0;
      *extraout_x8_00 = uStack_1b8;
      extraout_x8_00[2] = uStack_1a8;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1b8 = 0;
      *(undefined4 *)(extraout_x8_00 + 4) = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1f0);
      func_0x000104c2f714(auStack_180);
      plVar5 = &lStack_200;
      func_0x0001078d4c58();
      func_0x0001078d5404(uStack_148);
      if ((bool)in_ZR) {
        return plVar5;
      }
      ___stack_chk_fail();
      func_0x0001073c5f18(&lStack_1f0);
      func_0x0001078d5448();
      func_0x000104c2f714(&uStack_1b8);
      func_0x000104c2f714(auStack_180);
      plVar4 = &lStack_200;
      func_0x0001078d4c58();
      func_0x0001078d5440();
    }
    else {
      func_0x000104c2f64c(&uStack_1b8);
      lStack_210 = lVar1 + 0x208;
      uStack_208 = 1;
      func_0x00010724e404();
      lVar7 = *(long *)(lVar1 + 0x330);
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + 8) == 0) {
          if (*(long *)(lVar7 + 0x10) != 0) {
            do {
              func_0x0001078d5428();
            } while (extraout_w10_01 != 0);
          }
        }
        else {
          func_0x0001003ae9f0(&lStack_1f0);
          if (lStack_1f0 == 0) {
            lStack_220 = 0;
            lStack_218 = 0;
          }
          else {
            lStack_218 = lStack_1e8;
            lStack_220 = lVar7;
            if (lStack_1e8 != 0) {
              do {
                func_0x0001078d5428();
              } while (extraout_w10_00 != 0);
            }
          }
          func_0x0001003a90c4(&lStack_1f0);
        }
      }
      lStack_220 = 0;
      lStack_218 = 0;
    }
    if (plVar4[1] != 0) {
      func_0x0001000df548();
    }
    return plVar4;
  }
  return plVar4;
}



/* Entry: 1078d50f0; end: 1078d5123;  */

undefined8 * FUN_1078d50f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8cc8;
  func_0x0001078d5064(param_1 + 0x66);
  *param_1 = &PTR_DAT_1109b2960;
  func_0x0001078bebf8(param_1 + 0x5e);
  func_0x0001078bebf8(param_1 + 0x58);
  func_0x0001074734f0(param_1 + 0x56);
  func_0x000107276ba4(param_1 + 0x41);
  func_0x00010747396c(param_1 + 0x3d);
  func_0x00010746fdb4(param_1 + 4);
  func_0x000107473948(param_1 + 2);
  return param_1;
}



/* Entry: 1078d5350; end: 1078d5363;  */

void FUN_1078d5350(void)

{
  func_0x0001078d530c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d571c; end: 1078d5be3;  */

/* WARNING: Possible PIC construction at 0x0001078d57dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078d580c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d57e0) */
/* WARNING: Removing unreachable block (ram,0x0001078d57f0) */
/* WARNING: Removing unreachable block (ram,0x0001078d58f8) */
/* WARNING: Removing unreachable block (ram,0x0001078d57f8) */
/* WARNING: Removing unreachable block (ram,0x0001078d5810) */
/* WARNING: Removing unreachable block (ram,0x0001078d5820) */
/* WARNING: Removing unreachable block (ram,0x0001078d594c) */
/* WARNING: Removing unreachable block (ram,0x0001078d5828) */
/* WARNING: Removing unreachable block (ram,0x0001078d582c) */
/* WARNING: Removing unreachable block (ram,0x0001078d5830) */
/* WARNING: Removing unreachable block (ram,0x0001078d5834) */
/* WARNING: Removing unreachable block (ram,0x0001078d5838) */
/* WARNING: Removing unreachable block (ram,0x0001078d583c) */
/* WARNING: Removing unreachable block (ram,0x0001078d5840) */
/* WARNING: Removing unreachable block (ram,0x0001078d58d0) */
/* WARNING: Removing unreachable block (ram,0x0001078d58d8) */
/* WARNING: Removing unreachable block (ram,0x0001078d58e0) */
/* WARNING: Removing unreachable block (ram,0x0001078d58e4) */
/* WARNING: Removing unreachable block (ram,0x0001078d58ec) */
/* WARNING: Removing unreachable block (ram,0x0001078d5994) */
/* WARNING: Removing unreachable block (ram,0x0001078d59a8) */
/* WARNING: Removing unreachable block (ram,0x0001078d59b4) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a08) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a14) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a70) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a74) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a78) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a84) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a7c) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a8c) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a90) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a94) */
/* WARNING: Removing unreachable block (ram,0x0001078d5aa0) */
/* WARNING: Removing unreachable block (ram,0x0001078d5a98) */
/* WARNING: Removing unreachable block (ram,0x0001078d5aa8) */
/* WARNING: Removing unreachable block (ram,0x0001078d5ae4) */
/* WARNING: Removing unreachable block (ram,0x0001078d5b28) */
/* WARNING: Removing unreachable block (ram,0x0001078d5b90) */
/* WARNING: Removing unreachable block (ram,0x0001078d5bc4) */
/* WARNING: Removing unreachable block (ram,0x0001078d5b00) */

void FUN_1078d571c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int extraout_w10;
  long alStack_110 [7];
  undefined1 auStack_d8 [88];
  
  func_0x0001078d6b74();
  lVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001078d6b20();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2f64c(auStack_d8);
  func_0x000107279a5c();
  func_0x0001078d563c(alStack_110,*(undefined8 *)(lVar1 + 0x330));
  lVar2 = alStack_110[0];
  alStack_110[0] = 0;
  alStack_110[1] = 0;
  func_0x0001078d56d0(alStack_110);
  FUN_1077805c4(alStack_110,*(undefined8 *)(lVar1 + 0x2b0));
  func_0x000104c2f1f0(auStack_d8,alStack_110);
  func_0x0001078d6bac();
  func_0x000104c2fe00(alStack_110,*(undefined8 *)(lVar2 + 0x360));
  uVar3 = 0;
  func_0x000104c2d614();
  if ((uVar3 & 1) == 0) {
    func_0x0001078c44f4();
  }
  return;
}



/* Entry: 1078d5ea0; end: 1078d5ec7;  */

long FUN_1078d5ea0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078d607c; end: 1078d60a3;  */

long FUN_1078d607c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078d6a98; end: 1078d6b1f;  */

float FUN_1078d6a98(float param_1,long param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  
  func_0x0001078d5ce4();
  fVar1 = (param_1 - *(float *)(param_2 + 0x194)) - *(float *)(param_2 + 0x1ac);
  func_0x0001078d5c68(param_2,param_3);
  fVar2 = (fVar1 + *(float *)(param_2 + 400)) - *(float *)(param_2 + 0x1a8);
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  if (fVar1 <= *(float *)(param_2 + 0x1c0)) {
    fVar1 = *(float *)(param_2 + 0x1c0);
  }
  return fVar1 + fVar1;
}



/* Entry: 1078d7294; end: 1078d72df;  */

long FUN_1078d7294(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078d7488; end: 1078d74bb;  */

undefined8 * FUN_1078d7488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e9078;
  func_0x0001078d72bc(param_1 + 0x66);
  *param_1 = &PTR_DAT_1109b2960;
  func_0x0001078bebf8(param_1 + 0x5e);
  func_0x0001078bebf8(param_1 + 0x58);
  func_0x0001074734f0(param_1 + 0x56);
  func_0x000107276ba4(param_1 + 0x41);
  func_0x00010747396c(param_1 + 0x3d);
  func_0x00010746fdb4(param_1 + 4);
  func_0x000107473948(param_1 + 2);
  return param_1;
}



/* Entry: 1078d76fc; end: 1078d770f;  */

void FUN_1078d76fc(void)

{
  func_0x0001078d76b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d7c30; end: 1078d7c7b;  */

long FUN_1078d7c30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078d7da0; end: 1078d7dd3;  */

undefined8 * FUN_1078d7da0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e9250;
  func_0x0001078d7c58(param_1 + 0x66);
  *param_1 = &PTR_DAT_1109b2960;
  func_0x0001078bebf8(param_1 + 0x5e);
  func_0x0001078bebf8(param_1 + 0x58);
  func_0x0001074734f0(param_1 + 0x56);
  func_0x000107276ba4(param_1 + 0x41);
  func_0x00010747396c(param_1 + 0x3d);
  func_0x00010746fdb4(param_1 + 4);
  func_0x000107473948(param_1 + 2);
  return param_1;
}



/* Entry: 1078d8028; end: 1078d803b;  */

void FUN_1078d8028(void)

{
  func_0x0001078d7fd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d8558; end: 1078d857b;  */

int FUN_1078d8558(float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)(int)param_1;
  fVar3 = 255.0;
  if (fVar2 < 255.0) {
    fVar3 = fVar2;
  }
  iVar1 = 0;
  if (0.0 <= fVar2) {
    iVar1 = (int)fVar3;
  }
  return iVar1;
}



/* Entry: 1078d9320; end: 1078d935f;  */

bool FUN_1078d9320(uint param_1,uint param_2)

{
  if (param_1 < 0x80) {
    return (param_2 & *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)param_1 * 4 + 0x3c)) != 0
    ;
  }
  ___maskrune();
  return param_1 != 0;
}



/* Entry: 1078da9e4; end: 1078da9e7;  */

void FUN_1078da9e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt12length_errorD2Ev_110346178)();
  return;
}



/* Entry: 1078db010; end: 1078db0b3;  */

void FUN_1078db010(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = -4; iVar1 != 5; iVar1 = iVar1 + 1) {
    for (iVar2 = -4; iVar2 != 5; iVar2 = iVar2 + 1) {
      if ((((-1 < param_2 + iVar2) && (param_2 + iVar2 < *(int *)(param_1 + 4))) &&
          (-1 < iVar1 + param_3)) && (iVar1 + param_3 < *(int *)(param_1 + 4))) {
        func_0x0001078dbe90(param_1);
      }
    }
  }
  return;
}



/* Entry: 1078db454; end: 1078db467;  */

void FUN_1078db454(void)

{
  __ZNSt12length_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078db984; end: 1078dba47;  */

long * FUN_1078db984(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plStack_50;
  undefined1 uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_48 = 0;
  lVar1 = param_2;
  lVar2 = param_2;
  plStack_50 = param_1;
  func_0x0001078dba48();
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + lVar2 * 0x18;
  lVar2 = lVar1 + param_2 * 0x18;
  for (param_2 = param_2 * 0x18; param_2 != 0; param_2 = param_2 + -0x18) {
    func_0x000105007b50(lVar1,param_3);
    lVar1 = lVar1 + 0x18;
  }
  param_1[1] = lVar2;
  uStack_48 = 1;
  func_0x0001078dba8c(&plStack_50);
  return param_1;
}



/* Entry: 1078dbf88; end: 1078dc843;  */

/* WARNING: Type propagation algorithm not settling */

uint FUN_1078dbf88(long param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint6 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined4 *puVar14;
  ushort uVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  undefined4 *puVar25;
  ushort uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  bool bVar34;
  uint uVar35;
  uint uVar36;
  ushort uVar37;
  uint *puVar38;
  uint uVar39;
  uint uVar40;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  undefined1 auVar41 [16];
  byte bVar57;
  undefined1 auVar58 [16];
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  undefined4 *puVar15;
  undefined4 *puVar16;
  
  uVar31 = (*(uint *)(param_1 + 8) >> 0x12) - 6;
  if (3 < uVar31) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_5[0] = 0;
    param_5[1] = 0;
    if ((0xff < *(uint *)(param_1 + 0x14)) || (*(int *)(param_1 + 0x18) != 0)) {
      return 0x202;
    }
    uVar28 = uVar31 >> 2;
    if (uVar28 < 2) {
      uVar28 = 1;
    }
    uVar33 = (ulong)uVar28;
    puVar38 = (uint *)(param_1 + 0x1c);
    uVar29 = uVar33;
    puVar20 = puVar38;
    do {
      if ((*puVar20 & 0x70007) != 0x70000) {
        uVar39 = 2;
        goto LAB_1078dc070;
      }
      uVar29 = uVar29 - 1;
      puVar20 = puVar20 + 4;
    } while (uVar29 != 0);
    uVar39 = 0;
LAB_1078dc070:
    uVar35 = 0;
    uVar36 = 0;
    bVar13 = false;
    bVar11 = false;
    uVar29 = 9;
    puVar20 = puVar38;
    uVar32 = uVar33;
    do {
      uVar1 = *puVar20;
      if ((int)uVar1 < 0) {
        bVar34 = false;
        bVar12 = *(float *)(param_1 + 4 + (uVar29 & 0xfffffffd) * 4) != 1.0;
      }
      else {
        uVar18 = *(uint *)(param_1 + 4 + (uVar29 & 0xfffffffd) * 4);
        iVar30 = 1;
        if ((uVar1 & 0x40000000) == 0) {
          iVar30 = 2;
        }
        bVar12 = uVar18 < (iVar30 << (ulong)(uVar1 >> 0x10 & 0x1f)) - 1U;
        bVar34 = bVar12 && 1 < uVar18;
        bVar12 = uVar18 != 1 && (!bVar12 || 1 >= uVar18);
      }
      uVar35 = uVar35 | (uVar1 & 0x40000000) >> 0x1e;
      bVar11 = (bool)(bVar34 | bVar11);
      uVar36 = uVar36 | uVar1 >> 0x1f;
      if ((uVar1 & 0xff0000) != 0) {
        bVar13 = (bool)(bVar13 | bVar12);
      }
      uVar29 = uVar29 + 4;
      uVar32 = uVar32 - 1;
      puVar20 = puVar20 + 4;
    } while (uVar32 != 0);
    uVar1 = *(uint *)(param_1 + 0xc) & 0xff;
    uVar18 = 0x10;
    if (uVar35 == 0) {
      uVar18 = 0;
    }
    uVar40 = 0x40;
    if (uVar36 == 0) {
      uVar40 = 0;
    }
    uVar24 = 8;
    if (!bVar13) {
      uVar24 = 0;
    }
    uVar22 = 0x20;
    if (!bVar11) {
      uVar22 = 0;
    }
    uVar22 = uVar40 | uVar18 | uVar24 | uVar39 | uVar22;
    if (uVar1 == 2) {
      uVar37 = 0;
      uVar18 = uVar22 | 0x188;
      puVar20 = puVar38;
      uVar29 = uVar33;
      do {
        uVar40 = *(byte *)((long)puVar20 + 3) & 0xf;
        if (0xf < uVar40) {
          return 0x203;
        }
        uVar40 = 1 << (ulong)uVar40;
        if ((uVar40 & 0x8007) == 0) {
          if ((uVar40 & 0x6000) == 0) {
            return 0x203;
          }
          uVar37 = 1;
        }
        puVar20 = puVar20 + 4;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
      if (uVar31 < 0x24) {
        lVar21 = 0;
        uVar40 = 0;
      }
      else {
        uVar29 = 8;
        if ((uVar28 & 7) != 0) {
          uVar29 = uVar33 & 7;
        }
        lVar21 = uVar33 - uVar29;
        puVar20 = (uint *)(param_1 + 0x5c);
        lVar27 = uVar29 - uVar33;
        auVar41 = ZEXT216(0);
        auVar58 = ZEXT216(0);
        do {
          iVar30 = (puVar20[-0xc] >> 0x10 & 0xff) + 1;
          iVar3 = (puVar20[-8] >> 0x10 & 0xff) + 1;
          iVar4 = (puVar20[-4] >> 0x10 & 0xff) + 1;
          iVar7 = (puVar20[4] >> 0x10 & 0xff) + 1;
          iVar8 = (puVar20[8] >> 0x10 & 0xff) + 1;
          iVar9 = (puVar20[0xc] >> 0x10 & 0xff) + 1;
          auVar2[4] = (char)iVar30;
          auVar2._0_4_ = (puVar20[-0x10] >> 0x10 & 0xff) + 1;
          auVar2[5] = (char)((uint)iVar30 >> 8);
          auVar2._6_2_ = 0;
          auVar2[8] = (char)iVar3;
          auVar2[9] = (char)((uint)iVar3 >> 8);
          auVar2._10_2_ = 0;
          auVar2[0xc] = (char)iVar4;
          auVar2[0xd] = (char)((uint)iVar4 >> 8);
          auVar2._14_2_ = 0;
          auVar41 = NEON_umax(auVar41,auVar2,4);
          auVar5[4] = (char)iVar7;
          auVar5._0_4_ = (*puVar20 >> 0x10 & 0xff) + 1;
          auVar5[5] = (char)((uint)iVar7 >> 8);
          auVar5._6_2_ = 0;
          auVar5[8] = (char)iVar8;
          auVar5[9] = (char)((uint)iVar8 >> 8);
          auVar5._10_2_ = 0;
          auVar5[0xc] = (char)iVar9;
          auVar5[0xd] = (char)((uint)iVar9 >> 8);
          auVar5._14_2_ = 0;
          auVar58 = NEON_umax(auVar58,auVar5,4);
          puVar20 = puVar20 + 0x20;
          lVar27 = lVar27 + 8;
        } while (lVar27 != 0);
        auVar41 = NEON_umax(auVar41,auVar58,4);
        uVar40 = NEON_umaxv(auVar41,4);
      }
      lVar23 = lVar21 - uVar33;
      lVar27 = param_1 + lVar21 * 0x10 + 0x1c;
      do {
        if (uVar40 <= *(byte *)(lVar27 + 2) + 1) {
          uVar40 = *(byte *)(lVar27 + 2) + 1;
        }
        lVar27 = lVar27 + 0x10;
        bVar13 = lVar23 != -1;
        lVar23 = lVar23 + 1;
      } while (bVar13);
      func_0x0001078dc844();
      *param_6 = (uVar40 << (ulong)uVar39) >> 3;
    }
    else {
      if (uVar1 != 1) {
        return 0x203;
      }
      uVar18 = uVar22 | 4;
      if ((*(uint *)(param_1 + 0xc) & 0xff0000) != 0x20000) {
        uVar18 = uVar22;
      }
      piVar19 = (int *)(param_1 + 0x20);
      uVar29 = uVar33;
      do {
        if (*piVar19 != 0) {
          return 0x201;
        }
        uVar29 = uVar29 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar29 != 0);
      uVar37 = 0;
    }
    if (uVar1 - 1 < 2) {
      uVar17 = uVar37;
      if (uVar31 < 0x14) {
        lVar21 = 0;
      }
      else {
        if (uVar31 < 0x84) {
          lVar21 = 0;
        }
        else {
          uVar29 = 0x20;
          if ((uVar28 & 0x1f) != 0) {
            uVar29 = uVar33 & 0x1f;
          }
          lVar21 = uVar33 - uVar29;
          puVar20 = (uint *)(param_1 + 0x11c);
          lVar27 = uVar29 - uVar33;
          bVar42 = 0;
          bVar45 = 0;
          bVar48 = 0;
          bVar43 = 0;
          bVar44 = 0;
          bVar46 = 0;
          bVar47 = 0;
          bVar49 = 0;
          bVar50 = 0;
          bVar51 = 0;
          bVar52 = 0;
          bVar53 = 0;
          bVar54 = 0;
          bVar55 = 0;
          bVar56 = 0;
          bVar57 = 0;
          bVar59 = 0;
          bVar60 = 0;
          bVar61 = 0;
          bVar62 = 0;
          bVar63 = 0;
          bVar64 = 0;
          bVar65 = 0;
          bVar66 = 0;
          bVar67 = 0;
          bVar68 = 0;
          bVar69 = 0;
          bVar70 = 0;
          bVar71 = 0;
          bVar72 = 0;
          bVar73 = 0;
          bVar74 = 0;
          do {
            uVar10 = (uint6)CONCAT14(-((puVar20[-0x2c] >> 0x18 & 0xf) - 0xd < 2),
                                     -(uint)((puVar20[-0x30] >> 0x18 & 0xf) - 0xd < 2)) &
                     0xffff0000ffff;
            bVar42 = bVar42 | -((puVar20[-0x40] >> 0x18 & 0xf) - 0xd < 2);
            bVar45 = bVar45 | -((puVar20[-0x3c] >> 0x18 & 0xf) - 0xd < 2);
            bVar48 = bVar48 | -((puVar20[-0x38] >> 0x18 & 0xf) - 0xd < 2);
            bVar43 = bVar43 | -((puVar20[-0x34] >> 0x18 & 0xf) - 0xd < 2);
            bVar44 = bVar44 | (byte)uVar10;
            bVar46 = bVar46 | (byte)(uVar10 >> 0x20);
            bVar47 = bVar47 | -((puVar20[-0x28] >> 0x18 & 0xf) - 0xd < 2);
            bVar49 = bVar49 | -((puVar20[-0x24] >> 0x18 & 0xf) - 0xd < 2);
            bVar50 = bVar50 | -((puVar20[-0x20] >> 0x18 & 0xf) - 0xd < 2);
            bVar51 = bVar51 | -((puVar20[-0x1c] >> 0x18 & 0xf) - 0xd < 2);
            bVar52 = bVar52 | -((puVar20[-0x18] >> 0x18 & 0xf) - 0xd < 2);
            bVar53 = bVar53 | -((puVar20[-0x14] >> 0x18 & 0xf) - 0xd < 2);
            bVar54 = bVar54 | -((puVar20[-0x10] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar55 = bVar55 | -((puVar20[-0xc] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar56 = bVar56 | -((puVar20[-8] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar57 = bVar57 | -((puVar20[-4] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar59 = bVar59 | -((*puVar20 >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar60 = bVar60 | -((puVar20[4] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar61 = bVar61 | -((puVar20[8] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar62 = bVar62 | -((puVar20[0xc] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar63 = bVar63 | -((puVar20[0x10] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar64 = bVar64 | -((puVar20[0x14] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar65 = bVar65 | -((puVar20[0x18] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar66 = bVar66 | -((puVar20[0x1c] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar67 = bVar67 | -((puVar20[0x20] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar68 = bVar68 | -((puVar20[0x24] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar69 = bVar69 | -((puVar20[0x28] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar70 = bVar70 | -((puVar20[0x2c] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar71 = bVar71 | -((puVar20[0x30] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar72 = bVar72 | -((puVar20[0x34] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar73 = bVar73 | -((puVar20[0x38] >> 0x18 & 0xffffff0f) - 0xd < 2);
            bVar74 = bVar74 | -((puVar20[0x3c] >> 0x18 & 0xffffff0f) - 0xd < 2);
            puVar20 = puVar20 + 0x80;
            lVar27 = lVar27 + 0x20;
          } while (lVar27 != 0);
          auVar41[0] = -((char)((bVar59 | bVar42) << 7) < '\0');
          auVar41[1] = -((char)((bVar60 | bVar45) << 7) < '\0');
          auVar41[2] = -((char)((bVar61 | bVar48) << 7) < '\0');
          auVar41[3] = -((char)((bVar62 | bVar43) << 7) < '\0');
          auVar41[4] = -((char)((bVar63 | bVar44) << 7) < '\0');
          auVar41[5] = -((char)((bVar64 | bVar46) << 7) < '\0');
          auVar41[6] = -((char)((bVar65 | bVar47) << 7) < '\0');
          auVar41[7] = -((char)((bVar66 | bVar49) << 7) < '\0');
          auVar41[8] = -((char)((bVar67 | bVar50) << 7) < '\0');
          auVar41[9] = -((char)((bVar68 | bVar51) << 7) < '\0');
          auVar41[10] = -((char)((bVar69 | bVar52) << 7) < '\0');
          auVar41[0xb] = -((char)((bVar70 | bVar53) << 7) < '\0');
          auVar41[0xc] = -((char)((bVar71 | bVar54) << 7) < '\0');
          auVar41[0xd] = -((char)((bVar72 | bVar55) << 7) < '\0');
          auVar41[0xe] = -((char)((bVar73 | bVar56) << 7) < '\0');
          auVar41[0xf] = -((char)((bVar74 | bVar57) << 7) < '\0');
          bVar42 = NEON_umaxv(auVar41,1);
          uVar17 = bVar42 | uVar37;
          if (uVar29 < 5) goto LAB_1078dc4e4;
        }
        uVar17 = uVar17 ^ uVar37;
        uVar29 = 4;
        if ((uVar28 & 3) != 0) {
          uVar29 = uVar33 & 3;
        }
        uVar32 = CONCAT26(uVar17,CONCAT24(uVar17,CONCAT22(uVar17,uVar17)));
        lVar23 = uVar29 + lVar21;
        lVar27 = lVar21 * 0x10;
        lVar21 = uVar33 - uVar29;
        lVar23 = lVar23 - uVar33;
        puVar25 = (undefined4 *)(param_1 + lVar27 + 0x1c);
        do {
          uVar6 = *puVar25;
          puVar14 = puVar25 + 4;
          puVar15 = puVar25 + 8;
          puVar16 = puVar25 + 0xc;
          puVar25 = puVar25 + 0x10;
          uVar17 = (ushort)(byte)((byte)uVar32 | -(((byte)((uint)uVar6 >> 0x18) & 0xf) - 0xd < 2));
          bVar42 = (byte)(uVar32 >> 0x10) | -(((byte)((uint)*puVar14 >> 0x18) & 0xf) - 0xd < 2);
          bVar45 = (byte)(uVar32 >> 0x20) | -(((byte)((uint)*puVar15 >> 0x18) & 0xf) - 0xd < 2);
          bVar48 = (byte)(uVar32 >> 0x30) | -(((byte)((uint)*puVar16 >> 0x18) & 0xf) - 0xd < 2);
          uVar32 = (ulong)CONCAT16(bVar48,(uint6)CONCAT14(bVar45,(uint)CONCAT12(bVar42,uVar17)));
          lVar23 = lVar23 + 4;
        } while (lVar23 != 0);
        uVar17 = NEON_umaxv(CONCAT26(-(ushort)((short)((ushort)bVar48 << 0xf) < 0),
                                     CONCAT24(-(ushort)((short)((ushort)bVar45 << 0xf) < 0),
                                              CONCAT22(-(ushort)((short)((ushort)bVar42 << 0xf) < 0)
                                                       ,-(ushort)((short)(uVar17 << 0xf) < 0)))),2);
        uVar17 = uVar17 | uVar37;
      }
LAB_1078dc4e4:
      lVar23 = lVar21 - uVar33;
      lVar27 = param_1 + lVar21 * 0x10 + 0x1c;
      do {
        uVar37 = uVar17;
        uVar26 = (ushort)((*(byte *)(lVar27 + 3) & 0xf) - 0xd < 2);
        lVar27 = lVar27 + 0x10;
        bVar13 = lVar23 != -1;
        lVar23 = lVar23 + 1;
        uVar17 = uVar26 | uVar37;
      } while (bVar13);
      uVar29 = uVar33;
      puVar20 = puVar38;
      if (uVar26 == 0 && (uVar37 & 1) == 0) {
        do {
          if (uVar35 == ((*puVar20 & 0x40000000) == 0)) {
            return 0x204;
          }
          if (uVar36 == *puVar20 < 0x80000000) {
            return 0x204;
          }
          uVar29 = uVar29 - 1;
          puVar20 = puVar20 + 4;
        } while (uVar29 != 0);
      }
      if ((uVar18 >> 1 & 1) == 0) {
        bVar13 = false;
        uVar31 = 0;
        uVar28 = 0;
        uVar39 = 0xffffffff;
        do {
          while( true ) {
            uVar35 = *puVar38;
            uVar36 = uVar35 >> 0x18 & 0xf;
            puVar20 = param_5;
            if (uVar36 < 0xd) break;
            if (uVar36 != 0xf) {
              puVar20 = param_2;
              if ((uVar36 != 0xe) && (puVar20 = param_3, uVar36 != 0xd)) {
                return 0x203;
              }
              goto LAB_1078dc5dc;
            }
            uVar40 = uVar35 >> 3 & 0x1fff;
            uVar35 = (uVar35 >> 0x10 & 0xff) + 1 >> 3;
            if (uVar39 != 0xf) goto LAB_1078dc66c;
LAB_1078dc5f4:
            if (uVar40 == uVar31 - 1) {
              if ((bVar13) && ((uVar18 & 1) == 0)) {
                return 0x200;
              }
              uVar18 = uVar18 | 1;
              *puVar20 = uVar40;
            }
            else {
              if (uVar40 != uVar31 + uVar28) {
                return 0x200;
              }
              if ((bVar13) && ((uVar18 & 1) != 0)) {
                return 0x200;
              }
            }
            uVar31 = puVar20[1];
            puVar20[1] = uVar31 + uVar35;
            bVar13 = true;
            *param_6 = uVar31 + uVar35;
            uVar33 = uVar33 - 1;
            puVar38 = puVar38 + 4;
            uVar31 = uVar40;
            uVar28 = uVar35;
            if (uVar33 == 0) goto LAB_1078dc81c;
          }
          puVar20 = param_2;
          if (((uVar36 != 0) && (puVar20 = param_3, uVar36 != 1)) &&
             (puVar20 = param_4, uVar36 != 2)) {
            return 0x203;
          }
LAB_1078dc5dc:
          uVar40 = uVar35 >> 3 & 0x1fff;
          uVar35 = (uVar35 >> 0x10 & 0xff) + 1 >> 3;
          if (uVar36 == uVar39) goto LAB_1078dc5f4;
LAB_1078dc66c:
          if (puVar20[1] != 0) {
            if (uVar1 != 2) {
              return 0x200;
            }
            if (uVar36 != 0) {
              return 0x200;
            }
            if ((puVar20 == param_2) && (puVar20 = param_5, param_5[1] != 0)) {
              return 0x203;
            }
          }
          *puVar20 = uVar40;
          puVar20[1] = uVar35;
          *param_6 = uVar35;
          uVar33 = uVar33 - 1;
          puVar38 = puVar38 + 4;
          uVar31 = uVar40;
          uVar28 = uVar35;
          uVar39 = uVar36;
        } while (uVar33 != 0);
      }
      else {
        *param_6 = (uint)*(byte *)(param_1 + 0x14);
        uVar31 = 0;
        uVar28 = 0;
        uVar39 = 0xffffffff;
        uVar35 = 0;
        do {
          while( true ) {
            uVar36 = *puVar38;
            uVar40 = uVar36 >> 0x18 & 0xf;
            puVar20 = param_5;
            if (uVar40 < 0xd) break;
            if (uVar40 != 0xf) {
              puVar20 = param_2;
              if ((uVar40 != 0xe) && (puVar20 = param_3, uVar40 != 0xd)) {
                return 0x203;
              }
              goto LAB_1078dc72c;
            }
            uVar22 = uVar36 >> 3 & 0x1fff;
            uVar24 = (uVar36 >> 0x10 & 0xff) + 1;
            if (uVar39 != 0xf) goto LAB_1078dc7a4;
LAB_1078dc744:
            if (uVar22 != uVar35 - 1) {
              return 0x200;
            }
            if (((uVar36 | uVar31 + uVar28) & 7) != 0) {
              return 0x200;
            }
            uVar18 = uVar18 | 1;
            puVar20[1] = puVar20[1] + uVar24;
            uVar33 = uVar33 - 1;
            puVar38 = puVar38 + 4;
            uVar31 = uVar36 & 0xffff;
            uVar28 = uVar24;
            uVar35 = uVar22;
            if (uVar33 == 0) goto LAB_1078dc7dc;
          }
          puVar20 = param_2;
          if (((uVar40 != 0) && (puVar20 = param_3, uVar40 != 1)) &&
             (puVar20 = param_4, uVar40 != 2)) {
            return 0x203;
          }
LAB_1078dc72c:
          uVar22 = uVar36 >> 3 & 0x1fff;
          uVar24 = (uVar36 >> 0x10 & 0xff) + 1;
          if (uVar40 == uVar39) goto LAB_1078dc744;
LAB_1078dc7a4:
          uVar31 = uVar36 & 0xffff;
          if (puVar20[1] != 0) {
            if (uVar1 != 2) {
              return 0x200;
            }
            if (uVar40 != 0) {
              return 0x200;
            }
            if ((puVar20 == param_2) && (puVar20 = param_5, param_5[1] != 0)) {
              return 0x203;
            }
          }
          *puVar20 = uVar31;
          puVar20[1] = uVar24;
          uVar33 = uVar33 - 1;
          puVar38 = puVar38 + 4;
          uVar28 = uVar24;
          uVar39 = uVar40;
          uVar35 = uVar22;
        } while (uVar33 != 0);
LAB_1078dc7dc:
        if ((uVar18 & 1) != 0) {
          uVar31 = *param_6 * 8 - 8;
          *param_2 = uVar31 ^ *param_2;
          *param_3 = *param_3 ^ uVar31;
          *param_4 = *param_4 ^ uVar31;
          *param_5 = *param_5 ^ uVar31;
        }
      }
LAB_1078dc81c:
      if (uVar26 == 0 && (uVar37 & 1) == 0) {
        return uVar18;
      }
      uVar31 = param_2[1];
      if (param_2[1] <= param_3[1]) {
        uVar31 = param_3[1];
      }
      func_0x0001078dc844();
      *param_6 = uVar31;
      return uVar18;
    }
  }
  return 0x203;
}



/* Entry: 1078dd94c; end: 1078dd997;  */

undefined8 FUN_1078dd94c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((param_1 == 0) || (lVar2 = *(long *)(param_1 + 0x40), lVar2 == 0)) {
    return 0xb;
  }
  uVar1 = *(long *)(lVar2 + 0x20) + param_2;
  if ((long)uVar1 < *(long *)(lVar2 + 0x20)) {
    return 7;
  }
  if (*(ulong *)(lVar2 + 0x18) < uVar1) {
    return 7;
  }
  *(ulong *)(lVar2 + 0x20) = uVar1;
  return 0;
}



/* Entry: 1078e0464; end: 1078e0753;  */

long FUN_1078e0464(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  undefined1 (*pauVar17) [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uStack_64;
  
  lVar13 = *(long *)(param_1 + 0x18);
  if (*(long *)(lVar13 + 0x80) == 0) {
    return 10;
  }
  pcVar14 = *(char **)(param_1 + 0x88);
  puVar11 = *(uint **)(param_1 + 0x68);
  if (param_2 == (uint *)0x0) {
    param_2 = puVar11;
    _malloc();
    *(uint **)(param_1 + 0x70) = param_2;
    if (param_2 == (uint *)0x0) {
      return 0xd;
    }
    param_3 = (uint *)((long)param_2 + (long)puVar11);
    iVar15 = *(int *)(param_1 + 0x34);
  }
  else {
    if (param_3 < puVar11) {
      return 0xb;
    }
    param_3 = (uint *)((long)param_2 + (long)param_3);
    iVar15 = *(int *)(param_1 + 0x34);
  }
  if (iVar15 == 0) {
    lVar4 = 0;
  }
  else {
    uVar10 = 0;
    do {
      lVar4 = lVar13 + 0x40;
      (**(code **)(lVar13 + 0x40))(lVar4,&uStack_64,4);
      if ((int)lVar4 != 0) break;
      if (*pcVar14 == '\x01') {
        uVar1 = (uStack_64 & 0xff00ff00) >> 8 | (uStack_64 & 0xff00ff) << 8;
        uStack_64 = uVar1 >> 0x10 | uVar1 << 0x10;
      }
      if ((*(char *)(param_1 + 0x21) == '\x01') && ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
        iVar15 = *(int *)(param_1 + 0x3c);
        if (iVar15 != 0) goto LAB_1078e0540;
      }
      else {
        iVar15 = 1;
LAB_1078e0540:
        iVar16 = 0;
        uVar12 = (ulong)uStack_64;
        pauVar17 = (undefined1 (*) [16])(param_2 + 4);
        puVar11 = param_2;
        do {
          param_2 = (uint *)((long)puVar11 + uVar12);
          if (param_3 < param_2) {
            lVar4 = 0xb;
            goto LAB_1078e0718;
          }
          lVar4 = lVar13 + 0x40;
          (**(code **)(lVar13 + 0x40))(lVar4,puVar11,uVar12);
          if ((int)lVar4 != 0) goto LAB_1078e0718;
          if (*pcVar14 == '\x01') {
            if (*(int *)(lVar13 + 0x38) == 4) {
              if (3 < uStack_64) {
                uVar3 = (ulong)(uStack_64 >> 2);
                if (uStack_64 < 0x20) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = uVar3 & 0x3ffffff8;
                  puVar11 = puVar11 + uVar5;
                  uVar6 = uVar5;
                  pauVar8 = pauVar17;
                  do {
                    auVar19 = NEON_rev32(pauVar8[-1],1);
                    auVar20 = NEON_rev32(*pauVar8,1);
                    *(long *)((long)pauVar8[-1] + 8) = auVar19._8_8_;
                    *(long *)pauVar8[-1] = auVar19._0_8_;
                    *(long *)((long)*pauVar8 + 8) = auVar20._8_8_;
                    *(long *)*pauVar8 = auVar20._0_8_;
                    pauVar8 = pauVar8 + 2;
                    uVar6 = uVar6 - 8;
                  } while (uVar6 != 0);
                  if (uVar5 == uVar3) goto LAB_1078e0550;
                }
                lVar4 = uVar3 - uVar5;
                do {
                  uVar1 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
                  *puVar11 = uVar1 >> 0x10 | uVar1 << 0x10;
                  lVar4 = lVar4 + -1;
                  puVar11 = puVar11 + 1;
                } while (lVar4 != 0);
              }
            }
            else if ((*(int *)(lVar13 + 0x38) == 2) && (1 < uStack_64)) {
              uVar3 = (ulong)(uStack_64 >> 1);
              if (uStack_64 < 8) {
                uVar5 = 0;
                puVar7 = puVar11;
              }
              else {
                if (uStack_64 < 0x20) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = 0;
                  uVar5 = uVar3 & 0x7ffffff0;
                  do {
                    auVar19 = NEON_rev16(*(undefined1 (*) [16])((long)puVar11 + uVar6),1);
                    auVar20 = NEON_rev16(*(undefined1 (*) [16])((long)*pauVar17 + uVar6),1);
                    ((undefined8 *)((long)puVar11 + uVar6))[1] = auVar19._8_8_;
                    *(undefined8 *)((long)puVar11 + uVar6) = auVar19._0_8_;
                    puVar2 = (undefined8 *)((long)*pauVar17 + uVar6);
                    puVar2[1] = auVar20._8_8_;
                    *puVar2 = auVar20._0_8_;
                    uVar6 = uVar6 + 0x20;
                  } while (((ulong)uStack_64 & 0xffffffe0) != uVar6);
                  if (uVar5 == uVar3) goto LAB_1078e0550;
                  uVar6 = uVar5;
                  if ((uStack_64 >> 1 & 0xc) == 0) {
                    puVar7 = (uint *)((long)puVar11 + uVar5 * 2);
                    goto LAB_1078e06c8;
                  }
                }
                uVar5 = uVar3 & 0x7ffffffc;
                puVar7 = (uint *)((long)puVar11 + uVar5 * 2);
                lVar4 = uVar6 << 1;
                lVar9 = uVar6 - uVar5;
                do {
                  uVar18 = NEON_rev16(*(undefined8 *)((long)puVar11 + lVar4),1);
                  *(undefined8 *)((long)puVar11 + lVar4) = uVar18;
                  lVar4 = lVar4 + 8;
                  lVar9 = lVar9 + 4;
                } while (lVar9 != 0);
                if (uVar5 == uVar3) goto LAB_1078e0550;
              }
LAB_1078e06c8:
              lVar4 = uVar3 - uVar5;
              do {
                *(ushort *)puVar7 = (ushort)*puVar7 >> 8 | (ushort)*puVar7 << 8;
                lVar4 = lVar4 + -1;
                puVar7 = (uint *)((long)puVar7 + 2);
              } while (lVar4 != 0);
            }
          }
LAB_1078e0550:
          iVar16 = iVar16 + 1;
          pauVar17 = (undefined1 (*) [16])((long)*pauVar17 + uVar12);
          puVar11 = param_2;
        } while (iVar16 != iVar15);
      }
      lVar4 = 0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x34));
  }
LAB_1078e0718:
  (**(code **)(lVar13 + 0x70))(lVar13 + 0x40);
  return lVar4;
}



/* Entry: 1078e129c; end: 1078e150b;  */

long FUN_1078e129c(uint *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  uint auStack_58 [2];
  uint auStack_50 [6];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2 + 1;
  if ((7 < *param_2) && (*puVar10 == 0)) {
    uVar6 = *param_2 - 4;
    do {
      if (uVar6 < 9) {
        if ((uVar6 != 0) || ((short)param_2[2] != 2)) break;
        puVar10 = param_2 + 4;
        param_1[3] = (byte)*puVar10 + 1;
        param_1[4] = *(byte *)((long)param_2 + 0x11) + 1;
        param_1[5] = *(byte *)((long)param_2 + 0x12) + 1;
        uVar6 = param_2[5];
        if ((uVar6 & 0xff) == 0) {
          func_0x0001078dca30(param_2);
          uVar6 = param_2[5];
        }
        uVar6 = (uVar6 & 0xff) * 8;
        param_1[2] = uVar6;
        uVar6 = uVar6 + (uint)*(byte *)((long)param_2 + 0x15) * 8;
        param_1[2] = uVar6;
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[6] = 1;
        param_1[7] = 1;
        if ((char)param_2[3] < '\0') {
          *param_1 = 2;
          cVar2 = (char)param_2[3];
          if (cVar2 == -0x5d) {
            param_1[2] = uVar6 + (uint)*(byte *)((long)param_2 + 0x15) * 8;
            cVar2 = (char)param_2[3];
          }
          if (cVar2 == -0x5c) {
            param_1[6] = 2;
            param_1[7] = 2;
          }
        }
        else {
          bVar1 = *(byte *)((long)param_2 + 0x1f) & 0xf;
          if (bVar1 == 0xd) {
            *param_1 = 0x10;
          }
          else if (bVar1 == 0xe) {
            uVar6 = (param_2[2] >> 0x12) - 6 >> 2;
            if (uVar6 == 2) {
              *param_1 = 0x19;
            }
            else {
              if (uVar6 != 1) break;
              *param_1 = 8;
            }
          }
          else {
            if (((param_2[2] >> 0x12) - 6 & 0xfffffffc) == 0x18) {
              iVar5 = 0x13230a7c;
              param_3 = (uint *)0x6c;
              _memcmp();
              if (iVar5 == 0) {
                lVar7 = 1;
                *param_1 = 1;
                goto LAB_1078e148c;
              }
            }
            puVar10 = auStack_58;
            param_3 = auStack_50;
            FUN_1078dbf88();
            uVar6 = (uint)param_2;
            param_2 = puVar10;
            if (0x1ff < uVar6) break;
            if ((uVar6 >> 1 & 1) != 0) {
              *param_1 = *param_1 | 1;
            }
            if ((uVar6 >> 7 & 1) != 0) {
              *param_1 = *param_1 | 2;
            }
            if (0xff < uVar6) {
              *param_1 = *param_1 | 0x20;
            }
          }
        }
        lVar7 = 1;
        puVar10 = param_2;
        goto LAB_1078e148c;
      }
      uVar11 = puVar10[1] >> 0x10;
      puVar10 = (uint *)((long)puVar10 + ((ulong)(puVar10[1] >> 0x10) & 0xfffc));
      bVar4 = uVar11 <= uVar6;
      uVar6 = uVar6 - uVar11;
    } while (bVar4);
  }
  lVar7 = 0;
  puVar10 = param_2;
LAB_1078e148c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar7;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar7 + 0x70) != 0) {
    return 10;
  }
  lVar22 = *(long *)(lVar7 + 0x18);
  if (*(long *)(lVar22 + 0x80) == 0) {
    return 10;
  }
  lVar23 = *(long *)(lVar7 + 0xa0);
  uVar6 = *(uint *)(lVar7 + 0x88);
  if (uVar6 - 2 < 2) {
    if (*(int *)(lVar7 + 0x78) == 0) {
      uVar11 = 0x10;
      uVar3 = *(int *)(lVar7 + 0x34) - 1;
      if (0 < (int)uVar3) goto code_r0x0001078e2b44;
code_r0x0001078e2b7c:
      lVar16 = 0;
    }
    else {
      uVar11 = *(uint *)(lVar22 + 0x20) >> 3;
      if ((*(uint *)(lVar22 + 0x20) & 0x18) != 0) {
        uVar3 = uVar11;
        uVar14 = 4;
        do {
          uVar17 = uVar3;
          uVar3 = 0;
          if (uVar17 != 0) {
            uVar3 = uVar14 / uVar17;
          }
          uVar3 = uVar14 - uVar3 * uVar17;
          uVar14 = uVar17;
        } while (uVar3 != 0);
        uVar3 = uVar11 << 2;
        uVar11 = 0;
        if (uVar17 != 0) {
          uVar11 = uVar3 / uVar17;
        }
      }
      uVar3 = *(int *)(lVar7 + 0x34) - 1;
      if ((int)uVar3 < 1) goto code_r0x0001078e2b7c;
code_r0x0001078e2b44:
      uVar15 = (ulong)uVar3;
      fVar24 = (float)uVar11;
      if (uVar3 == 1) {
        lVar16 = 0;
        uVar12 = 1;
code_r0x0001078e2bf0:
        uVar15 = uVar12 + 1;
        puVar13 = (ulong *)(lVar23 + uVar12 * 0x18 + 0x30);
        do {
          lVar16 = lVar16 + (ulong)(uint)(int)((float)(int)((float)*puVar13 / fVar24) * fVar24);
          uVar15 = uVar15 - 1;
          puVar13 = puVar13 + -3;
        } while (1 < uVar15);
      }
      else {
        lVar20 = 0;
        lVar16 = 0;
        uVar12 = uVar15 & 1;
        puVar13 = (ulong *)(lVar23 + uVar15 * 0x18 + 0x18);
        uVar18 = uVar15 & 0x7ffffffe;
        do {
          lVar20 = lVar20 + (ulong)(uint)(int)((float)(int)((float)puVar13[3] / fVar24) * fVar24);
          lVar16 = lVar16 + (ulong)(uint)(int)((float)(int)((float)*puVar13 / fVar24) * fVar24);
          uVar18 = uVar18 - 2;
          puVar13 = puVar13 + -6;
        } while (uVar18 != 0);
        lVar16 = lVar16 + lVar20;
        if ((uVar15 & 0x7ffffffe) != uVar15) goto code_r0x0001078e2bf0;
      }
    }
    puVar19 = (uint *)(*(long *)(lVar23 + 0x30) + lVar16);
    if (puVar10 != (uint *)0x0) goto code_r0x0001078e2adc;
code_r0x0001078e2c34:
    puVar8 = puVar19;
    _malloc();
    *(uint **)(lVar7 + 0x70) = puVar8;
    if (puVar8 == (uint *)0x0) {
      return 0xd;
    }
  }
  else {
    if (uVar6 < 2) {
      puVar19 = *(uint **)(lVar7 + 0x68);
    }
    else {
      puVar19 = (uint *)0x0;
    }
    if (puVar10 == (uint *)0x0) goto code_r0x0001078e2c34;
code_r0x0001078e2adc:
    puVar8 = puVar10;
    if (param_3 < puVar19) {
      return 0xb;
    }
  }
  if ((uVar6 & 0xfffffffe) == 2) {
    puVar9 = *(uint **)(lVar7 + 0x68);
    _malloc();
    puVar21 = puVar9;
    if (puVar9 == (uint *)0x0) {
      return 0xd;
    }
  }
  else {
    puVar9 = (uint *)0x0;
    puVar21 = puVar8;
  }
  lVar20 = lVar22 + 0x40;
  (**(code **)(lVar22 + 0x60))(lVar20,*(undefined8 *)(lVar23 + 0x18));
  if ((int)lVar20 != 0) goto code_r0x0001078e2cc4;
  lVar20 = lVar22 + 0x40;
  (**(code **)(lVar22 + 0x40))(lVar20,puVar21,*(undefined8 *)(lVar7 + 0x68));
  if ((int)lVar20 != 0) goto code_r0x0001078e2cc4;
  if ((uVar6 & 0xfffffffe) == 2) {
    lVar20 = lVar7;
    if (*(int *)(lVar7 + 0x88) == 3) {
      func_0x0001078e3160(lVar7,puVar9,puVar8,puVar19);
    }
    else {
      if (*(int *)(lVar7 + 0x88) != 2) goto code_r0x0001078e2d58;
      func_0x0001078e2d70(lVar7,puVar9,puVar8,puVar19);
    }
    if ((int)lVar20 != 0) {
      if (puVar10 == (uint *)0x0) {
        _free(*(undefined8 *)(lVar7 + 0x70));
        *(undefined8 *)(lVar7 + 0x70) = 0;
      }
      goto code_r0x0001078e2cc4;
    }
  }
code_r0x0001078e2d58:
  (**(code **)(lVar22 + 0x70))(lVar22 + 0x40);
  lVar20 = 0;
  *(undefined8 *)(lVar23 + 0x18) = 0;
code_r0x0001078e2cc4:
  _free(puVar9);
  return lVar20;
}



/* Entry: 1078e2594; end: 1078e2d6f;  */

ulong FUN_1078e2594(int *param_1,code *param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined *puVar19;
  uint uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  undefined *puStack_a0;
  undefined *puStack_68;
  
  if ((*param_1 == 2) && (uVar14 = param_1[0x22], uVar14 < 4 && uVar14 != 1)) {
    if (param_2 == (code *)0x0) {
      return 0xb;
    }
    lVar18 = *(long *)(param_1 + 6);
    if (*(long *)(lVar18 + 0x80) != 0) {
      lVar16 = *(long *)(param_1 + 0x28);
      puVar23 = *(undefined **)(lVar16 + 0x28);
      puVar9 = puVar23;
      _malloc();
      if (puVar9 == (undefined *)0x0) {
        return 0xd;
      }
      if ((uVar14 & 0xfffffffe) == 2) {
        puVar22 = *(undefined **)(lVar16 + 0x30);
        puVar10 = puVar22;
        _malloc();
        if (puVar10 == (undefined *)0x0) {
          _free(puVar9);
          return 0xd;
        }
        if (uVar14 == 2) {
          puVar19 = &UNK_10e010ee0;
          func_0x0001000cbed8();
        }
        else {
          puVar19 = (undefined *)0x0;
        }
        iVar8 = param_1[0xd];
        puStack_a0 = puVar10;
      }
      else {
        puVar22 = (undefined *)0x0;
        puVar19 = (undefined *)0x0;
        puStack_a0 = (undefined *)0x0;
        iVar8 = param_1[0xd];
        puVar10 = puVar9;
      }
      if (-1 < (int)(iVar8 - 1U)) {
        uVar14 = iVar8 - 1U;
        do {
          uVar4 = (uint)param_1[9] >> (ulong)(uVar14 & 0x1f);
          if (uVar4 < 2) {
            uVar4 = 1;
          }
          uVar5 = (uint)param_1[10] >> (ulong)(uVar14 & 0x1f);
          if (uVar5 < 2) {
            uVar5 = 1;
          }
          uVar6 = (uint)param_1[0xb] >> (ulong)(uVar14 & 0x1f);
          if (uVar6 < 2) {
            uVar6 = 1;
          }
          lVar15 = lVar16 + 0x20 + (ulong)uVar14 * 0x18;
          puVar21 = *(undefined **)(lVar15 + 8);
          if (puVar23 < puVar21) {
            uVar11 = 1;
            goto LAB_1078e29e0;
          }
          uVar24 = (ulong)uVar14;
          uVar11 = lVar18 + 0x40;
          (**(code **)(lVar18 + 0x60))
                    (uVar11,*(long *)(*(long *)(param_1 + 0x28) + 0x18) +
                            *(long *)(*(long *)(param_1 + 0x28) + uVar24 * 0x18 + 0x20));
          if ((int)uVar11 != 0) goto LAB_1078e29e0;
          uVar11 = lVar18 + 0x40;
          (**(code **)(lVar18 + 0x40))(uVar11,puVar9,puVar21);
          if ((int)uVar11 != 0) goto LAB_1078e29e0;
          if (param_1[0x22] != 3) {
            if (param_1[0x22] != 2) goto LAB_1078e2844;
            if (*(int *)(puVar19 + 0x7170) == -1) {
              uVar13 = *(undefined8 *)(puVar19 + 0x7160);
            }
            else if (*(int *)(puVar19 + 0x7170) == 1) {
              *(undefined4 *)(puVar19 + 0x7170) = 0;
              uVar13 = *(undefined8 *)(puVar19 + 0x7160);
            }
            else {
              func_0x0001000cc08c(*(undefined8 *)(puVar19 + 0x7158));
              uVar13 = 0;
              *(undefined4 *)(puVar19 + 0x7170) = 0;
              *(undefined8 *)(puVar19 + 0x7158) = 0;
              *(undefined8 *)(puVar19 + 0x7160) = 0;
            }
            puVar12 = puVar19;
            func_0x0001000cc0fc(puVar19,puStack_a0,puVar22,puVar9,puVar21,0,0,uVar13);
            puVar21 = puVar12;
            if (puVar12 < (undefined *)0xffffffffffffff89) goto LAB_1078e2844;
            iVar8 = (int)puVar12;
            if (iVar8 == -0x46) {
LAB_1078e29d8:
              uVar11 = 0x13;
            }
            else if (iVar8 == -0x40) {
              uVar11 = 0xd;
            }
            else if (iVar8 == -0x16) {
              uVar11 = 0x14;
            }
            else {
              uVar11 = 1;
            }
            goto LAB_1078e29e0;
          }
          if (((ulong)puVar21 | (ulong)puVar22) >> 0x20 != 0) {
            return 0xb;
          }
          puVar12 = puStack_a0;
          puStack_68 = puVar22;
          func_0x0001078ddbcc(puStack_a0,&puStack_68,puVar9,puVar21);
          iVar8 = (int)puVar12;
          puVar22 = puStack_68;
          if (iVar8 != 0) {
            if (iVar8 == -4) {
              return 0xd;
            }
            if (iVar8 != -5) {
              return 1;
            }
            return 0x13;
          }
LAB_1078e2844:
          if (*(undefined **)(lVar15 + 0x10) != puVar21) goto LAB_1078e29d8;
          if ((*(char *)((long)param_1 + 0x21) == '\x01') && ((*(byte *)(param_1 + 8) & 1) == 0)) {
            fVar25 = (float)NEON_ucvtf(*(undefined4 *)(lVar18 + 0x24));
            fVar26 = (float)NEON_ucvtf(*(undefined4 *)(lVar18 + 0x28));
            uVar3 = *(uint *)(lVar18 + 0x30);
            uVar2 = uVar3;
            if (uVar3 <= (uint)(int)((float)(int)uVar4 / fVar25)) {
              uVar2 = (int)((float)(int)uVar4 / fVar25);
            }
            if (uVar3 <= (uint)(int)((float)(int)uVar5 / fVar26)) {
              uVar3 = (int)((float)(int)uVar5 / fVar26);
            }
            if (param_1[0xf] != 0) {
              uVar20 = 0;
              uVar7 = (ulong)(uVar2 * *(int *)(lVar18 + 0x20) * uVar3 >> 3);
              puVar21 = puVar10;
              do {
                uVar11 = uVar24;
                (*param_2)(uVar24,uVar20,uVar4,uVar5,uVar6,uVar7,puVar21,param_3);
                if ((int)uVar11 != 0) goto LAB_1078e29e0;
                puVar21 = puVar21 + uVar7;
                uVar20 = uVar20 + 1;
              } while (uVar20 < (uint)param_1[0xf]);
            }
          }
          else {
            (*param_2)(uVar24,0,uVar4,uVar5,uVar6,(ulong)puVar21 & 0xffffffff,puVar10,param_3);
            uVar11 = uVar24;
            if ((int)uVar24 != 0) goto LAB_1078e29e0;
          }
          bVar1 = 0 < (int)uVar14;
          uVar14 = uVar14 - 1;
        } while (bVar1);
      }
      (**(code **)(lVar18 + 0x70))(lVar18 + 0x40);
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18) = 0;
      uVar11 = 0;
LAB_1078e29e0:
      _free(puVar9);
      if (puStack_a0 != (undefined *)0x0) {
        _free(puStack_a0);
      }
      if (puVar19 == (undefined *)0x0) {
        return uVar11;
      }
      if (*(long *)(puVar19 + 29000) != 0) {
        return uVar11;
      }
      pcVar17 = *(code **)(puVar19 + 0x7128);
      uVar13 = *(undefined8 *)(puVar19 + 0x7130);
      func_0x0001000cc08c(*(undefined8 *)(puVar19 + 0x7158));
      *(undefined4 *)(puVar19 + 0x7170) = 0;
      *(undefined8 *)(puVar19 + 0x7160) = 0;
      *(undefined8 *)(puVar19 + 0x7158) = 0;
      if (*(long *)(puVar19 + 0x7178) == 0) {
        if (pcVar17 == (code *)0x0) goto LAB_1078e2a5c;
      }
      else {
        if (pcVar17 == (code *)0x0) {
          _free(*(long *)(puVar19 + 0x7178));
LAB_1078e2a5c:
          _free(puVar19);
          return uVar11;
        }
        (*pcVar17)(uVar13);
        *(undefined8 *)(puVar19 + 0x7178) = 0;
      }
      (*pcVar17)(uVar13,puVar19);
      return uVar11;
    }
  }
  return 10;
}



/* Entry: 1078e3ba4; end: 1078e525b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1078e3ba4(undefined8 *param_1,uint param_2,uint param_3,uint param_4,undefined8 *param_5,
                  uint param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint6 uVar14;
  uint6 uVar15;
  code *pcVar16;
  undefined1 uVar17;
  int iVar18;
  undefined8 uVar19;
  long ******pppppplVar20;
  long ****pppplVar21;
  long *******ppppppplVar22;
  undefined8 *extraout_x8;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 extraout_x8_00;
  long *******extraout_x8_01;
  long *******extraout_x8_02;
  long *******extraout_x8_03;
  long *******ppppppplVar25;
  long *plVar26;
  long lVar27;
  long *****ppppplVar28;
  int extraout_w9;
  ulong uVar29;
  long *****ppppplVar30;
  uint extraout_w11;
  long ******pppppplVar31;
  long *plVar32;
  long *****ppppplVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  long lVar38;
  long ******pppppplVar39;
  long *******ppppppplVar40;
  long *******ppppppplVar41;
  long *******ppppppplVar42;
  double dVar43;
  long *******ppppppplVar44;
  long *******ppppppplVar45;
  undefined1 auVar46 [16];
  double unaff_d8;
  double dVar47;
  double unaff_d9;
  double dVar48;
  double dVar49;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long ******pppppplStack_2e8;
  long ******pppppplStack_2e0;
  undefined8 uStack_2d8;
  long *******ppppppplStack_2d0;
  long *******ppppppplStack_2c8;
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  double adStack_288 [3];
  long *******ppppppplStack_270;
  undefined1 *puStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  undefined8 uStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  undefined8 uStack_200;
  double dStack_1f8;
  long *******ppppppplStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  double adStack_198 [2];
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined5 uStack_150;
  undefined3 uStack_14b;
  undefined5 uStack_148;
  undefined3 uStack_143;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_c8 [8];
  double dStack_c0;
  long *******ppppppplStack_b8;
  undefined8 uStack_a8;
  
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  if ((param_6 - 1 & param_6) != 0) {
    func_0x000107917e7c();
    func_0x00010002bf70();
    func_0x000107914d08();
LAB_1078e5068:
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1078e506c);
    (*pcVar16)();
  }
  uVar36 = param_2 + (0x1fU - (int)LZCOUNT(param_6) & 0xff);
  uVar12 = *(uint *)param_1[3] >> 0x14 & 0x1f;
  uVar17 = uVar36 == uVar12;
  if (uVar36 <= uVar12) {
    func_0x0001079161c4();
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_300 = 0;
    goto LAB_1078e500c;
  }
  func_0x000107916af4();
  uVar9 = (extraout_w9 + param_2) - extraout_w11;
  uVar12 = 1 << (ulong)((uVar9 & 0xff) - 1 & 0x1f);
  dVar48 = (double)uVar12;
  adStack_288[1] = 0.0;
  adStack_288[2] = 0.0;
  dVar49 = (unaff_d9 + 1.0) * dVar48;
  uStack_298 = 0x5a;
  uStack_290 = 0x1c;
  uStack_2a8 = 0;
  uStack_2a0 = 0x1c;
  uVar36 = 0;
  if (param_2 <= extraout_w11) {
    uVar36 = extraout_w11 - param_2;
  }
  ppppppplStack_2b8 = (long *******)0x0;
  ppppppplStack_2b0 = (long *******)0x0;
  adStack_288[0] = dVar49;
  func_0x0001078e63c8(&ppppppplStack_2b8);
  ppppppplStack_250 = (long *******)ABS(dVar49);
  ppppppplStack_260 = (long *******)(0.0 - (double)ppppppplStack_250);
  ppppppplStack_258 = ppppppplStack_260;
  ppppppplStack_248 = ppppppplStack_250;
  func_0x0001078e64e0(&ppppppplStack_1f0,&ppppppplStack_260);
  ppppppplStack_1a8 = (long *******)0x0;
  ppppppplStack_1b0 = (long *******)0x0;
  adStack_198[0] = 0.0;
  ppppppplStack_1a0 = (long *******)0x0;
  ppppppplStack_1b8 = (long *******)0x0;
  ppppppplStack_1c0 = (long *******)0x0;
  adStack_198[1] = -NAN;
  uStack_188 = uStack_188 & 0xffffffffffff0000;
  plStack_178 = (long *)0x0;
  plStack_180 = (long *)0x0;
  plStack_168 = (long *)0x0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_143 = 0;
  uStack_150 = 0;
  uStack_14b = 0;
  puStack_138 = (undefined8 *)0x0;
  uStack_140 = 0;
  uStack_128 = 0;
  puStack_130 = (undefined8 *)0x0;
  uStack_118 = 0xffffffffffffffff;
  uStack_120 = 0xffffffffffffffff;
  uStack_108 = 0xffffffffffffffff;
  uStack_110 = 0xffffffffffffffff;
  func_0x000107916358();
  dStack_c0 = dVar49;
  ppppppplStack_b8 = (long *******)&ppppppplStack_1f0;
  func_0x0001078e8dd0(adStack_288 + 1,&ppppppplStack_1c0,adStack_288,&uStack_2a0);
  func_0x0001078e67d4(&ppppppplStack_1c0);
  func_0x0001078e6cd8(&ppppppplStack_1c0);
  func_0x0001078e6f40(&ppppppplStack_1c0);
  func_0x0001078e6f98(ppppppplStack_1a8,ppppppplStack_1a0);
  FUN_1078e6fbc(&ppppppplStack_1c0);
  func_0x0001078e7ee0(&ppppppplStack_1c0);
  ppppppplVar22 = (long *******)&ppppppplStack_1c0;
  func_0x0001078e8734(ppppppplVar22,&ppppppplStack_2b8);
  iVar35 = (int)(unaff_d9 + 0.5);
  iVar18 = (1 << (ulong)(uVar36 & 0x1f)) + iVar35 * 2;
  func_0x000107917110();
  ppppppplStack_2d0 = (long *******)0x0;
  ppppppplStack_2c8 = (long *******)0x0;
  ppppppplStack_2c0 = (long *******)0x0;
  if (iVar18 != 0) {
    func_0x0001078f6208(&ppppppplStack_1c0,iVar18 * iVar18,0,&ppppppplStack_2c0);
    func_0x000107917d74();
    ppppppplVar22 = (long *******)&ppppppplStack_1c0;
    FUN_1078f625c();
  }
  dVar47 = unaff_d8 * dVar48;
  uVar36 = (extraout_w9 + param_2 & 0xff) - param_2;
  uVar4 = param_3 << (ulong)(uVar36 & 0x1f);
  uVar5 = param_4 << (ulong)(uVar36 & 0x1f);
  iVar10 = (uVar4 >> (ulong)(uVar9 & 0x1f)) - iVar35;
  uVar36 = (uVar5 >> (ulong)(uVar9 & 0x1f)) - iVar35;
  iVar35 = uVar36 + iVar18;
  ppppppplVar40 = (long *******)0x0;
  for (; (int)uVar36 < iVar35; uVar36 = uVar36 + 1) {
    for (iVar37 = iVar10; iVar37 < iVar10 + iVar18; iVar37 = iVar37 + 1) {
      if ((-1 < (int)uVar36) && ((int)uVar36 < (int)*(uint *)((long)param_1 + 0x54))) {
        uVar1 = (*(uint *)((long)param_1 + 0x54) & iVar37 >> 0x1f) + iVar37;
        uVar13 = *(uint *)param_1[3] >> 0x10 & 0xf;
        uVar11 = (*(uint *)param_1[3] >> 0x14 & 0x1f) - uVar13;
        uVar7 = uVar1 >> (ulong)(uVar11 & 0x1f);
        uVar11 = uVar36 >> (ulong)(uVar11 & 0x1f);
        ppppppplStack_1c0 =
             (long *******)CONCAT44(ppppppplStack_1c0._4_4_,(uVar11 << (ulong)uVar13) + uVar7);
        ppppppplVar22 = (long *******)(param_1 + 4);
        func_0x00010736de50(ppppppplVar22,&ppppppplStack_1c0);
        if (ppppppplVar22 != (long *******)0x0) {
          puVar23 = param_1;
          if (*(char *)((long)param_1 + 0x17) < '\0') {
            puVar23 = (undefined8 *)*param_1;
          }
          uVar7 = (uVar1 - (uVar7 << (ulong)(*(byte *)(param_1 + 9) & 0x1f))) +
                  (uVar36 - (uVar11 << (ulong)(*(byte *)(param_1 + 9) & 0x1f))) *
                  *(int *)((long)param_1 + 0x4c);
          if ((*(ulong *)((long)puVar23 +
                         (ulong)(uVar7 >> 6) * 8 + (ulong)*(uint *)((long)ppppppplVar22 + 0x14)) >>
               ((ulong)uVar7 & 0x3f) & 1) != 0) {
            uVar24 = (ulong)uVar36 + 0x9e3779b97f4a7c15 + ((ulong)uVar1 << 0x20);
            uVar24 = (uVar24 ^ uVar24 >> 0x1e) * -0x40a7b892e31b1a47;
            uVar24 = (uVar24 ^ uVar24 >> 0x1b) * -0x6b2fb644ecceee15;
            uVar24 = uVar24 ^ uVar24 >> 0x1f;
            iVar6 = -iVar37;
            if (-1 < iVar37) {
              iVar6 = iVar37;
            }
            iVar6 = iVar6 << (ulong)(uVar9 & 0x1f);
            iVar2 = -iVar6;
            if (-1 < iVar37) {
              iVar2 = iVar6;
            }
            ppppppplVar40 =
                 (long *******)
                 (dVar47 * -0.5 + dVar47 * ((double)(uVar24 & 0xffffffff) / 4294967295.0) +
                 (double)(int)((uVar12 - uVar4) + iVar2));
            adStack_198[0] =
                 dVar47 * -0.5 + dVar47 * ((double)(uVar24 >> 0x20) / 4294967295.0) +
                 (double)(int)((uVar12 - uVar5) + (uVar36 << (ulong)(uVar9 & 0x1f)));
            ppppppplStack_1b8 = (long *******)0x0;
            ppppppplStack_1c0 = (long *******)0x3ff0000000000000;
            ppppppplStack_1a0 = (long *******)0x3ff0000000000000;
            ppppppplStack_1a8 = (long *******)0x0;
            adStack_198[1] = 0.0;
            uStack_188 = 0;
            plStack_180 = (long *)0x3ff0000000000000;
            ppppppplStack_1b0 = ppppppplVar40;
            if (ppppppplStack_2c8 < ppppppplStack_2c0) {
              *ppppppplStack_2c8 = (long ******)0x0;
              ppppppplStack_2c8[1] = (long ******)0x0;
              ppppppplVar44 = ppppppplStack_2c8 + 3;
              ppppppplStack_2c8[2] = (long ******)0x0;
            }
            else {
              lVar38 = ((long)ppppppplStack_2c8 - (long)ppppppplStack_2d0) / 0x18;
              uVar24 = lVar38 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar24) {
                func_0x0001078f6188();
                goto LAB_1078e5068;
              }
              uVar8 = ((long)ppppppplStack_2c0 - (long)ppppppplStack_2d0) / 0x18;
              uVar29 = uVar8 * 2;
              if (uVar29 < uVar24 || uVar29 - uVar24 == 0) {
                uVar29 = uVar24;
              }
              if (0x555555555555554 < uVar8) {
                uVar29 = 0xaaaaaaaaaaaaaaa;
              }
              func_0x0001078f6208(&ppppppplStack_1f0,uVar29,lVar38,&ppppppplStack_2c0);
              uStack_1e0[1] = 0;
              uStack_1e0[2] = 0;
              *uStack_1e0 = 0;
              uStack_1e0 = uStack_1e0 + 3;
              func_0x0001078f6194(&ppppppplStack_2d0,&ppppppplStack_1f0);
              ppppppplVar44 = ppppppplStack_2c8;
              FUN_1078f625c(&ppppppplStack_1f0);
            }
            ppppppplVar41 = ppppppplVar44 + -3;
            ppppppplVar22 = ppppppplVar41;
            ppppppplStack_2c8 = ppppppplVar44;
            func_0x0001078f629c(ppppppplVar41,
                                ((long)ppppppplStack_2b0 - (long)ppppppplStack_2b8) / 0x30);
            pppppplVar39 = *ppppppplVar41;
            for (ppppppplVar44 = ppppppplStack_2b8; ppppppplVar44 != ppppppplStack_2b0;
                ppppppplVar44 = ppppppplVar44 + 6) {
              func_0x0001078f6400(pppppplVar39);
              ppppppplVar22 = ppppppplVar44;
              func_0x0001078f638c(ppppppplVar44,pppppplVar39,&ppppppplStack_1c0);
              if ((int)ppppppplVar22 == 0) break;
              ppppppplVar22 = (long *******)(pppppplVar39 + 3);
              func_0x0001078f4654(ppppppplVar22,
                                  ((long)ppppppplVar44[4] - (long)ppppppplVar44[3]) / 0x18);
              for (pppppplVar31 = ppppppplVar44[3]; pppppplVar31 != ppppppplVar44[4];
                  pppppplVar31 = pppppplVar31 + 3) {
                func_0x000107914d7c();
                func_0x0001078f638c();
                if ((int)ppppppplVar22 == 0) goto LAB_1078e40b0;
              }
              pppppplVar39 = pppppplVar39 + 6;
            }
          }
        }
      }
LAB_1078e40b0:
    }
  }
  if (ppppppplStack_2d0 == ppppppplStack_2c8) {
    lStack_318 = 0;
    lStack_310 = 0;
    uStack_308 = 0;
  }
  else {
    if (1 < (ulong)(((long)ppppppplStack_2c8 - (long)ppppppplStack_2d0) / 0x18)) {
      uVar24 = 1;
      do {
        lVar38 = 0;
        uVar29 = uVar24 * 2;
        do {
          func_0x000107916984();
          uVar19 = extraout_x8_00;
          func_0x0001078f6428();
          ppppppplVar22 = ppppppplStack_2d0;
          func_0x0001078f6428(ppppppplStack_2d0,ppppppplStack_2c8,uVar24 + lVar38);
          ppppppplVar44 = ppppppplVar22;
          func_0x000107914d7c();
          func_0x0001078f6454();
          ppppppplVar41 = ppppppplVar44;
          func_0x000107915320();
          func_0x0001078f6454();
          if (((int)ppppppplVar44 == 0) || (((ulong)ppppppplVar41 & 1) == 0)) {
            if ((int)ppppppplVar44 == 0) {
              func_0x000107914d7c();
              func_0x0001078f64c8();
              if (((ulong)ppppppplVar41 & 1) == 0) {
                func_0x0001078f64c8(*ppppppplVar22,ppppppplVar22[1],&ppppppplStack_1f0);
                func_0x0001078edab0(&ppppppplStack_260,&ppppppplStack_1f0);
              }
            }
            else {
              func_0x000107915320();
              func_0x0001078f64c8();
            }
            FUN_1078e652c(&ppppppplStack_260,&ppppppplStack_1f0,&ppppppplStack_228,
                          &ppppppplStack_240);
            ppppppplVar40 = ppppppplStack_240;
          }
          ppppppplStack_1b8 = (long *******)CONCAT44(uStack_1e4,uStack_1e8);
          ppppppplStack_1c0 = ppppppplStack_1f0;
          ppppppplStack_1a8 = ppppppplStack_220;
          ppppppplStack_1b0 = ppppppplStack_228;
          ppppppplStack_1a0 = ppppppplVar40;
          func_0x0001078f6640(uVar19,ppppppplVar22,&ppppppplStack_1c0,&ppppppplStack_210,
                              &ppppppplStack_260,&ppppppplStack_1f0);
          ppppppplVar22 = ppppppplStack_2d0;
          func_0x0001078f6428(ppppppplStack_2d0,ppppppplStack_2c8,lVar38);
          if (*ppppppplVar22 != (long ******)0x0) {
            func_0x0001078e63c8(ppppppplVar22);
            func_0x000107915b14();
            func_0x00010791778c();
          }
          ppppppplVar22[1] = (long ******)ppppppplStack_208;
          *ppppppplVar22 = (long ******)ppppppplStack_210;
          ppppppplVar22[2] = (long ******)uStack_200;
          ppppppplVar40 = ppppppplStack_210;
          func_0x000107916984();
          lVar38 = lVar38 + uVar29;
          ppppppplVar22 = (long *******)&ppppppplStack_210;
          func_0x000107912734();
          uVar8 = ((long)ppppppplStack_2c8 - (long)ppppppplStack_2d0) / 0x18;
        } while (uVar24 + lVar38 < uVar8);
        uVar24 = uVar29;
      } while (uVar29 < uVar8);
    }
    ppppppplVar40 = ppppppplStack_2c8;
    if ((long)ppppppplStack_2c8 - (long)ppppppplStack_2d0 == 0) {
      if (ppppppplStack_2c0 == ppppppplStack_2d0) {
        ppppppplStack_1a0 = (long *******)&ppppppplStack_2c0;
        func_0x000107917234();
        ppppppplStack_1b8 = ppppppplVar22;
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)0x0;
        ppppppplStack_1c0 = ppppppplVar22;
        *ppppppplVar22 = (long ******)0x0;
        ppppppplStack_1b0 = ppppppplVar22 + 3;
        ppppppplStack_1a8 = ppppppplVar22 + 3;
        func_0x000107917d74();
        FUN_1078f625c(&ppppppplStack_1c0);
      }
      else {
        *ppppppplStack_2c8 = (long ******)0x0;
        ppppppplStack_2c8[1] = (long ******)0x0;
        ppppppplStack_2c8[2] = (long ******)0x0;
        ppppppplStack_2c8 = ppppppplStack_2c8 + 3;
      }
    }
    else if (1 < (ulong)(((long)ppppppplStack_2c8 - (long)ppppppplStack_2d0) / 0x18)) {
      ppppppplVar40 = ppppppplStack_2d0 + 3;
      func_0x000107901640(&ppppppplStack_2d0);
    }
    ppppppplVar22 = ppppppplStack_2d0;
    ppppppplVar41 = (long *******)(dVar49 - dVar48);
    ppppppplVar42 = (long *******)0x0;
    pppppplStack_2e8 = (long ******)0x0;
    pppppplStack_2e0 = (long ******)0x0;
    uStack_2d8 = 0;
    ppppppplVar45 = (long *******)0x0;
    dVar48 = -((double)ppppppplRam0000000113726a68 * (double)ppppppplVar41);
    uVar24 = 0;
    ppppppplVar44 = ppppppplRam0000000113726a68;
    adStack_288[0] = dVar48;
    func_0x0001078e63c8();
    pppppplVar39 = *ppppppplVar22;
    pppppplVar31 = ppppppplVar22[1];
    func_0x000107917768();
    func_0x0001078f6454();
    if ((uVar24 & 1) == 0) {
      ppppppplStack_1f0 = (long *******)((ulong)ppppppplStack_1f0 & 0xffffffffffffff00);
      func_0x0001079160e0();
      for (; pppppplVar39 != pppppplVar31; pppppplVar39 = pppppplVar39 + 6) {
        pppppplVar20 = pppppplVar39;
        func_0x0001078f6498();
        if (((ulong)pppppplVar20 & 1) == 0) {
          if (*pppppplVar39 == pppppplVar39[1]) {
            ppppplVar33 = pppppplVar39[3];
            ppppplVar30 = pppppplVar39[4];
            ppppppplStack_1c0 = (long *******)((ulong)ppppppplStack_1c0 & 0xffffffffffffff00);
            for (; ppppplVar33 != ppppplVar30; ppppplVar33 = ppppplVar33 + 3) {
              if (*ppppplVar33 != ppppplVar33[1]) {
                func_0x000107901674(*ppppplVar33,ppppplVar33[1],&ppppppplStack_260);
                FUN_1078f65c4(&ppppppplStack_1c0,&ppppppplStack_260);
              }
            }
            ppppppplStack_260 = ppppppplVar44;
            ppppppplStack_258 = ppppppplVar45;
            ppppppplStack_250 = ppppppplVar41;
            ppppppplStack_248 = ppppppplVar42;
            if ((char)ppppppplStack_1c0 == '\x01') {
              ppppppplStack_258 = ppppppplStack_1b0;
              ppppppplStack_260 = ppppppplStack_1b8;
              ppppppplStack_248 = ppppppplStack_1a0;
              ppppppplStack_250 = ppppppplStack_1a8;
            }
          }
          else {
            func_0x000107901674(*pppppplVar39,pppppplVar39[1],&ppppppplStack_260);
          }
          FUN_1078f65c4(&ppppppplStack_1f0,&ppppppplStack_260);
        }
      }
      if ((char)ppppppplStack_1f0 == '\x01') {
        dVar49 = (double)CONCAT44(uStack_1e4,uStack_1e8);
        dVar43 = (double)CONCAT44(uStack_1cc,uStack_1d0);
        dVar47 = (double)CONCAT44(uStack_1d4,uStack_1d8);
        puVar23 = uStack_1e0;
      }
      else {
        dVar47 = -1.79769313486232e+308;
        dVar43 = -1.79769313486232e+308;
        dVar49 = 1.79769313486232e+308;
        puVar23 = (undefined8 *)0x7fefffffffffffff;
      }
      dStack_1f8 = ABS(dVar48);
      ppppppplVar41 = (long *******)(dVar49 - dStack_1f8);
      ppppppplVar42 = (long *******)((double)puVar23 - dStack_1f8);
      uStack_200 = (long *******)(dStack_1f8 + dVar47);
      dStack_1f8 = dStack_1f8 + dVar43;
      ppppppplStack_210 = ppppppplVar41;
      ppppppplStack_208 = ppppppplVar42;
      func_0x0001078e64e0(&ppppppplStack_1f0,&ppppppplStack_210);
      ppppppplStack_1a8 = (long *******)0x0;
      ppppppplStack_1b0 = (long *******)0x0;
      adStack_198[0] = 0.0;
      ppppppplStack_1a0 = (long *******)0x0;
      ppppppplStack_1b8 = (long *******)0x0;
      ppppppplStack_1c0 = (long *******)0x0;
      adStack_198[1] = -NAN;
      uStack_188 = uStack_188 & 0xffffffffffff0000;
      plStack_178 = (long *)0x0;
      plStack_180 = (long *)0x0;
      plStack_168 = (long *)0x0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      uStack_148 = 0;
      uStack_143 = 0;
      uStack_150 = 0;
      uStack_14b = 0;
      puStack_138 = (undefined8 *)0x0;
      uStack_140 = 0;
      uStack_128 = 0;
      puStack_130 = (undefined8 *)0x0;
      ppppppplVar40 = (long *******)0xffffffffffffffff;
      ppppppplVar44 = (long *******)0xffffffffffffffff;
      uStack_118 = 0xffffffffffffffff;
      uStack_120 = 0xffffffffffffffff;
      uStack_108 = 0xffffffffffffffff;
      uStack_110 = 0xffffffffffffffff;
      func_0x000107916358();
      dStack_c0 = dVar48;
      ppppppplStack_b8 = (long *******)&ppppppplStack_1f0;
      for (pppppplVar39 = *ppppppplVar22; uVar17 = ppppppplVar22[1] <= pppppplVar39,
          pppppplVar39 != ppppppplVar22[1]; pppppplVar39 = pppppplVar39 + 6) {
        func_0x0001078e8f24(&ppppppplStack_1c0,dVar48 < 0.0);
        ppppplVar33 = *pppppplVar39;
        func_0x0001079161f0(ppppplVar33,pppppplVar39[1]);
        func_0x000107901aa4(&ppppppplStack_1c0,ppppplVar33,pppppplVar39,0,
                            pppppplVar39[4] != pppppplVar39[3]);
        ppppplVar30 = pppppplVar39[4];
        for (ppppplVar33 = pppppplVar39[3]; ppppplVar33 != ppppplVar30;
            ppppplVar33 = ppppplVar33 + 3) {
          func_0x0001078e8f24(&ppppppplStack_1c0,0.0 <= dVar48);
          pppplVar21 = *ppppplVar33;
          func_0x0001079161f0(pppplVar21,ppppplVar33[1]);
          func_0x000107901aa4(&ppppppplStack_1c0,pppplVar21,ppppplVar33,1,0);
        }
      }
      func_0x0001078e67d4(&ppppppplStack_1c0);
      ppppppplVar22 = ppppppplStack_1a8;
      puStack_268 = auStack_c8;
      ppppppplStack_270 = (long *******)&ppppppplStack_1a8;
      func_0x000107917008(ppppppplStack_1a0);
      ppppppplVar45 = extraout_x8_01;
      if ((bool)uVar17) {
        func_0x000107917008();
        ppppppplVar45 = extraout_x8_02;
        if (!(bool)uVar17) goto LAB_1078e45bc;
        ppppppplStack_228 = (long *******)0x0;
        ppppppplStack_220 = (long *******)0x0;
        uStack_218 = 0;
        ppppppplStack_240 = (long *******)0x0;
        uStack_238 = 0;
        uStack_230 = 0;
        func_0x000107916078();
        ppppppplVar25 = extraout_x8_03;
        ppppppplStack_260 = ppppppplVar40;
        ppppppplStack_258 = ppppppplVar44;
        ppppppplStack_250 = ppppppplVar41;
        ppppppplStack_248 = ppppppplVar42;
        for (ppppppplVar45 = ppppppplVar22; plVar26 = plStack_168, plVar32 = plStack_168,
            ppppppplVar45 != ppppppplVar25; ppppppplVar45 = ppppppplVar45 + 0x36) {
          if (*(char *)(ppppppplVar45 + 0x34) == '\x01') {
            func_0x0001078e9c18(&ppppppplStack_260,ppppppplVar45);
            func_0x0001078eda1c(&ppppppplStack_228,ppppppplVar22);
            ppppppplVar25 = ppppppplStack_1a0;
          }
          ppppppplVar22 = ppppppplVar22 + 0x36;
        }
        for (; plVar26 != plStack_160; plVar26 = plVar26 + 0xb) {
          func_0x000107917f50(&ppppppplStack_260);
          func_0x000107902bb0(&ppppppplStack_240,plVar32);
          plVar32 = plVar32 + 0xb;
        }
        FUN_1079027cc(&ppppppplStack_260,&ppppppplStack_228,&ppppppplStack_240,0,&ppppppplStack_270)
        ;
        func_0x000107902fd8(&ppppppplStack_240);
        func_0x0001078ee0a0(&ppppppplStack_228);
        ppppppplVar40 = ppppppplStack_1a8;
        ppppppplVar45 = ppppppplStack_1a0;
      }
      else {
LAB_1078e45bc:
        for (; ppppppplVar40 = ppppppplStack_1a8, plVar26 = plStack_168,
            ppppppplVar22 != ppppppplVar45; ppppppplVar22 = ppppppplVar22 + 0x36) {
          for (; plVar26 != plStack_160; plVar26 = plVar26 + 0xb) {
            func_0x0001079029d8(&ppppppplStack_1a8,ppppppplVar22,plVar26);
          }
          ppppppplVar45 = ppppppplStack_1a0;
        }
      }
      for (; ppppppplVar40 != ppppppplVar45; ppppppplVar40 = ppppppplVar40 + 0x36) {
        if (*(char *)(ppppppplVar40 + 0x34) == '\x01') {
          if (0.0 <= dStack_c0) {
            if (0 < (long)ppppppplVar40[0x35]) goto LAB_1078e4668;
          }
          else if ((long)ppppppplVar40[0x35] < 1) {
LAB_1078e4668:
            *(undefined1 *)(ppppppplVar40 + 0x34) = 0;
          }
        }
      }
      dVar49 = dStack_c0;
      func_0x0001078e6cd8(&ppppppplStack_1c0);
      func_0x0001078e6f40(&ppppppplStack_1c0);
      func_0x0001078e6f98(ppppppplStack_1a8,ppppppplStack_1a0);
      FUN_1078e6fbc(&ppppppplStack_1c0);
      ppppppplVar22 = ppppppplStack_1a8;
      if (uStack_188._1_1_ == '\x01') {
        for (; ppppppplVar22 != ppppppplStack_1a0; ppppppplVar22 = ppppppplVar22 + 0x36) {
          if (*(char *)(ppppppplVar22 + 0x34) == '\x01') {
            pppppplVar39 = ppppppplVar22[0x33];
            for (lVar38 = 0; lVar38 != 0x170; lVar38 = lVar38 + 0xb8) {
              pppppplVar31 = *(long *******)((long)ppppppplVar22 + lVar38 + 0x88);
              if (pppppplVar31 == (long ******)0xffffffffffffffff) {
                pppppplVar31 = *(long *******)((long)ppppppplVar22 + lVar38 + 0x80);
              }
              if ((pppppplVar31 == pppppplVar39) &&
                 (*(char *)((long)ppppppplStack_1c0 +
                           *(long *)((long)ppppppplVar22 + lVar38 + 0x50) * 0x100 + 0x5a) == '\x01')
                 ) {
                *(undefined1 *)((long)ppppppplVar22 + lVar38 + 0x90) = 0;
              }
            }
          }
        }
      }
      func_0x0001078e7ee0(&ppppppplStack_1c0);
      plVar26 = plStack_180;
      if (dVar48 < 0.0) {
        for (; puVar23 = puStack_138, plVar26 != plStack_178; plVar26 = plVar26 + 4) {
          if (((*(byte *)((long)plVar26 + 0x1a) & 1) == 0) &&
             ((*(byte *)((long)plVar26 + 0x19) & 1) == 0)) {
            FUN_1078f47a4(*plVar26,plVar26[1]);
          }
        }
        for (; plVar26 = plStack_180, puVar23 != puStack_130; puVar23 = puVar23 + 3) {
          FUN_1078f47a4(*puVar23,puVar23[1]);
        }
        for (; plVar26 != plStack_178; plVar26 = plVar26 + 4) {
          if ((((*(byte *)((long)plVar26 + 0x1a) & 1) == 0) &&
              ((*(byte *)((long)plVar26 + 0x19) & 1) == 0)) && (plVar26[1] != *plVar26)) {
            func_0x0001078f47f8(*plVar26);
            if (dVar49 < 0.0) {
              lVar38 = 0;
              for (plVar32 = plStack_168; plVar32 != plStack_160; plVar32 = plVar32 + 0xb) {
                if (*plVar32 != plVar32[1]) {
                  iVar18 = (int)plVar32 + 0x18;
                  func_0x000107914c6c();
                  func_0x0001078edf30();
                  if (iVar18 != 0) {
                    func_0x000107914c6c();
                    func_0x000107914d7c();
                    func_0x0001078f4838();
                    if (iVar18 != -1) {
                      if ((char)plVar32[10] == '\x01') {
                        lVar38 = lVar38 + -1;
                      }
                      else {
                        if (*(char *)((long)plVar32 + 0x51) != '\x01') goto LAB_1078e4830;
                        lVar38 = lVar38 + 1;
                      }
                    }
                  }
                }
              }
              if (lVar38 < 1) {
                *(undefined1 *)((long)plVar26 + 0x1b) = 1;
              }
            }
          }
LAB_1078e4830:
        }
      }
      ppppppplVar40 = &pppppplStack_2e8;
      func_0x0001078e8734(&ppppppplStack_1c0);
      func_0x000107917110();
    }
    ppppppplStack_260 = (long *******)0x0;
    ppppppplStack_258 = (long *******)0x0;
    ppppppplStack_250 = (long *******)0x0;
    lVar38 = (long)pppppplStack_2e0 - (long)pppppplStack_2e8;
    pppppplVar39 = pppppplStack_2e8;
    ppppppplVar22 = ppppppplStack_260;
    if (lVar38 != 0) {
      ppppppplVar22 = (long *******)&ppppppplStack_260;
      func_0x000107903050(ppppppplVar22,lVar38 / 0x30);
      func_0x0001079030e0(&ppppppplStack_1c0,ppppppplVar22,
                          ((long)ppppppplStack_258 - (long)ppppppplStack_260) / 0x30,
                          &ppppppplStack_250);
      ppppppplVar22 = (long *******)((long)ppppppplStack_1b0 + lVar38);
      for (; lVar38 != 0; lVar38 = lVar38 + -0x30) {
        ppppppplStack_1b0[3] = (long ******)0x0;
        ppppppplStack_1b0[2] = (long ******)0x0;
        ppppppplStack_1b0[5] = (long ******)0x0;
        ppppppplStack_1b0[4] = (long ******)0x0;
        ppppppplStack_1b0[1] = (long ******)0x0;
        *ppppppplStack_1b0 = (long ******)0x0;
        ppppppplStack_1b0 = ppppppplStack_1b0 + 6;
      }
      ppppppplVar40 = (long *******)&ppppppplStack_1c0;
      ppppppplStack_1b0 = ppppppplVar22;
      func_0x00010790307c(&ppppppplStack_260);
      FUN_107903128(&ppppppplStack_1c0);
      pppppplVar39 = pppppplStack_2e8;
      ppppppplVar22 = ppppppplStack_260;
    }
    for (; ppppppplVar44 = ppppppplStack_258, ppppppplVar41 = ppppppplStack_260,
        pppppplVar39 != pppppplStack_2e0; pppppplVar39 = pppppplVar39 + 6) {
      func_0x0001079031ec(ppppppplVar22 + 3);
      ppppppplVar22[1] = *ppppppplVar22;
      func_0x00010790319c(pppppplVar39,ppppppplVar22);
      ppppppplVar40 = (long *******)(((long)pppppplVar39[4] - (long)pppppplVar39[3]) / 0x18);
      func_0x0001079033b4(ppppppplVar22 + 3);
      for (ppppplVar33 = pppppplVar39[3]; ppppplVar33 != pppppplVar39[4];
          ppppplVar33 = ppppplVar33 + 3) {
        func_0x000107914d7c();
        func_0x00010790319c();
      }
      ppppppplVar22 = ppppppplVar22 + 6;
    }
    for (; ppppppplVar41 != ppppppplVar44; ppppppplVar41 = ppppppplVar41 + 6) {
      ppppppplVar40 = (long *******)*ppppppplVar41;
      func_0x0001078e630c(ppppppplVar40,ppppppplVar41[1]);
      func_0x0001078e6378(ppppppplVar41,ppppppplVar40,ppppppplVar41[1]);
      pppppplVar31 = ppppppplVar41[4];
      for (pppppplVar39 = ppppppplVar41[3]; pppppplVar39 != pppppplVar31;
          pppppplVar39 = pppppplVar39 + 3) {
        ppppppplVar40 = (long *******)*pppppplVar39;
        func_0x0001078e630c(ppppppplVar40,pppppplVar39[1]);
        func_0x0001078e6378(pppppplVar39,ppppppplVar40,pppppplVar39[1]);
      }
    }
    ppppppplStack_1f0 = (long *******)0x0;
    uVar14 = CONCAT24((short)param_6,param_6) & 0xffff0000ffff;
    uVar15 = CONCAT24((short)param_6,param_6) & 0xffff0000ffff;
    uStack_1e0._4_4_ = (undefined4)uVar15;
    uStack_1d8 = (uint)(ushort)(uVar15 >> 0x20);
    uStack_1e4 = (undefined4)uVar14;
    uStack_1e0._0_4_ = (uint)(ushort)(uVar14 >> 0x20);
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1cc = 0;
    ppppppplStack_208 = (long *******)0x0;
    uStack_200 = (long *******)0x0;
    ppppppplStack_210 = (long *******)0x0;
    ppppppplStack_228 = (long *******)&ppppppplStack_210;
    ppppppplStack_220 = (long *******)((ulong)ppppppplStack_220 & 0xffffffffffffff00);
    ppppppplVar22 = (long *******)0x5;
    FUN_107903354();
    lVar27 = 0;
    uStack_200 = ppppppplVar22 + (long)ppppppplVar40;
    for (lVar38 = 0; lVar38 != 0x28; lVar38 = lVar38 + 8) {
      *(undefined8 *)((long)ppppppplVar22 + lVar38) =
           *(undefined8 *)((long)&ppppppplStack_1f0 + lVar38);
      lVar27 = lVar27 + -8;
    }
    ppppppplStack_208 = (long *******)((long)ppppppplVar22 - lVar27);
    ppppppplStack_220._0_1_ = 1;
    ppppppplStack_210 = ppppppplVar22;
    func_0x000107903618(&ppppppplStack_228);
    func_0x000107903654(&ppppppplStack_1c0,&ppppppplStack_210);
    ppppppplStack_228 = (long *******)&ppppppplStack_1a8;
    ppppppplStack_1a8 = (long *******)0x0;
    ppppppplStack_1a0 = (long *******)0x0;
    adStack_198[0] = 0.0;
    ppppppplStack_220 = (long *******)CONCAT71(ppppppplStack_220._1_7_,1);
    func_0x0001079036dc(&ppppppplStack_228);
    func_0x000107903640(&ppppppplStack_210);
    lStack_310 = 0;
    uStack_308 = 0;
    lStack_318 = 0;
    func_0x000107903738(&ppppppplStack_1c0,&ppppppplStack_260,&ppppppplStack_210,&lStack_318,
                        &ppppppplStack_228,&ppppppplStack_1f0);
    func_0x0001079126fc(&ppppppplStack_1c0);
    func_0x000107912f54(&ppppppplStack_260);
    func_0x000107912734(&pppppplStack_2e8);
  }
  func_0x000107912764(&ppppppplStack_2d0);
  func_0x000107912734(&ppppppplStack_2b8);
  uVar17 = lStack_318 == lStack_310;
  if ((bool)uVar17) {
    func_0x00010002b838(extraout_x8,"");
  }
  else {
    if (param_7 == 0) {
      ppppppplStack_260 = (long *******)0x0;
      ppppppplStack_258 = (long *******)0x0;
      ppppppplStack_250 = (long *******)0x0;
      ppppppplVar22 = (long *******)0x120;
      __Znwm();
      ppppppplVar22[3] = (long ******)0x0;
      ppppppplVar22[2] = (long ******)0x0;
      ppppppplVar22[9] = (long ******)0x0;
      ppppppplVar22[8] = (long ******)0x0;
      ppppppplVar40 = ppppppplVar22 + 0xb;
      *ppppppplVar40 = (long ******)(ppppppplVar22 + 2);
      ppppppplVar22[10] = (long ******)0x0;
      ppppppplVar22[5] = (long ******)0x0;
      ppppppplVar22[4] = (long ******)0x0;
      ppppppplVar22[7] = (long ******)0x0;
      ppppppplVar22[6] = (long ******)0x0;
      ppppppplVar22[1] = (long ******)0x0;
      *ppppppplVar22 = (long ******)0x0;
      ppppppplVar22[0xd] = (long ******)0x0;
      ppppppplVar22[0xe] = (long ******)0x0;
      ppppppplVar22[0xf] = (long ******)(ppppppplVar22 + 5);
      ppppppplVar22[0xc] = (long ******)0x0;
      ppppppplVar22[0x11] = (long ******)0x0;
      ppppppplVar22[0x12] = (long ******)0x0;
      ppppppplVar22[0x13] = (long ******)(ppppppplVar22 + 8);
      ppppppplVar22[0x10] = (long ******)0x0;
      ppppppplVar22[0x15] = (long ******)0x0;
      ppppppplVar22[0x14] = (long ******)0x0;
      ppppppplVar22[0x17] = (long ******)0x0;
      ppppppplVar22[0x16] = (long ******)0x0;
      ppppppplVar22[0x20] = (long ******)0x0;
      ppppppplVar22[0x1f] = (long ******)0x0;
      ppppppplVar22[0x18] = (long ******)0x2;
      ppppppplVar22[0x1b] = (long ******)0x0;
      ppppppplVar22[0x1a] = (long ******)0x0;
      *(undefined4 *)(ppppppplVar22 + 0x19) = 0;
      ppppppplVar22[0x1d] = (long ******)0x0;
      ppppppplVar22[0x1c] = (long ******)0x0;
      *(undefined4 *)(ppppppplVar22 + 0x1e) = 0x3f800000;
      ppppppplVar22[0x22] = (long ******)0x0;
      ppppppplVar22[0x21] = (long ******)0x0;
      *(undefined4 *)(ppppppplVar22 + 0x23) = 0x3f800000;
      func_0x000107912b14(ppppppplVar40,0xf,2);
      uVar24 = param_5[1];
      puVar23 = (undefined8 *)*param_5;
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        uVar24 = (ulong)*(byte *)((long)param_5 + 0x17);
        puVar23 = param_5;
      }
      func_0x000107912b90(ppppppplVar40,1,puVar23,uVar24);
      func_0x000107912b14(ppppppplVar40,5,param_6);
      ppppppplVar44 = (long *******)0x8;
      __Znwm();
      ppppppplStack_258 = ppppppplVar44 + 1;
      *ppppppplVar44 = (long ******)ppppppplVar22;
      ppppppplStack_260 = ppppppplVar44;
      ppppppplStack_250 = ppppppplStack_258;
      ppppppplStack_1c0 = ppppppplVar22;
      func_0x000107912dd0(&ppppppplStack_1b8,ppppppplVar40,2);
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_14b = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      plStack_168 = (long *)0x0;
      uStack_170 = 0;
      plStack_178 = (long *)0x0;
      plStack_180 = (long *)0x0;
      uStack_188 = 0;
      adStack_198[1] = 0.0;
      adStack_198[0] = 0.0;
      func_0x000107912b14(&ppppppplStack_1b8,3,3);
      lVar27 = lStack_310;
      for (lVar38 = lStack_318; uVar17 = lVar38 == lVar27, !(bool)uVar17; lVar38 = lVar38 + 0x30) {
        func_0x000107912988(&ppppppplStack_1c0,lVar38);
        lVar3 = *(long *)(lVar38 + 0x20);
        for (lVar34 = *(long *)(lVar38 + 0x18); lVar34 != lVar3; lVar34 = lVar34 + 0x18) {
          func_0x000107912988(&ppppppplStack_1c0,lVar34);
        }
      }
      if (ppppppplStack_1b8 != (long *******)0x0) {
        if (plStack_178 != (long *)0x0) {
          func_0x000107912ea4(&plStack_178);
        }
        if (adStack_198[0] != 0.0) {
          func_0x000107912ea4(adStack_198);
        }
        func_0x000107912ea4(&ppppppplStack_1b8);
        ppppppplStack_1c0[0x17] = (long ******)((long)ppppppplStack_1c0[0x17] + 1);
      }
      func_0x000107916984();
      pppppplVar39 = *ppppppplVar44;
      if (*pppppplVar39 == (long *****)0x0) {
        ppppplVar33 = (long *****)(long)*(char *)((long)pppppplVar39 + 0x27);
        if ((long)ppppplVar33 < 0) {
          ppppplVar33 = pppppplVar39[3];
        }
        ppppplVar30 = (long *****)(long)*(char *)((long)pppppplVar39 + 0x3f);
        if ((long)ppppplVar30 < 0) {
          ppppplVar30 = pppppplVar39[6];
        }
        ppppplVar28 = (long *****)(long)*(char *)((long)pppppplVar39 + 0x57);
        if ((long)ppppplVar28 < 0) {
          ppppplVar28 = pppppplVar39[9];
        }
        ppppplVar28 = (long *****)((long)ppppplVar30 + (long)ppppplVar33 + (long)ppppplVar28);
      }
      else {
        ppppplVar28 = pppppplVar39[1];
      }
      ppppppplStack_1f0 = (long *******)&ppppppplStack_210;
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      uStack_1e0._0_4_ = 0;
      uStack_1e0._4_4_ = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      func_0x000107912e38(&ppppppplStack_210,ppppplVar28 + 1);
      pppppplVar39 = *ppppppplVar44;
      if (*pppppplVar39 == (long *****)0x0) {
        if (pppppplVar39[0x17] != (long *****)0x0) {
          ppppplVar33 = pppppplVar39[3];
          if (-1 < (char)*(byte *)((long)pppppplVar39 + 0x27)) {
            ppppplVar33 = (long *****)(ulong)*(byte *)((long)pppppplVar39 + 0x27);
          }
          ppppplVar30 = pppppplVar39[6];
          if (-1 < (char)*(byte *)((long)pppppplVar39 + 0x3f)) {
            ppppplVar30 = (long *****)(ulong)*(byte *)((long)pppppplVar39 + 0x3f);
          }
          ppppplVar28 = pppppplVar39[9];
          if (-1 < (char)*(byte *)((long)pppppplVar39 + 0x57)) {
            ppppplVar28 = (long *****)(ulong)*(byte *)((long)pppppplVar39 + 0x57);
          }
          func_0x000107912bcc(&ppppppplStack_1f0,3,
                              (long)ppppplVar30 + (long)ppppplVar33 + (long)ppppplVar28);
          func_0x00010791830c();
          func_0x000107912e38();
          func_0x000107917c84();
          func_0x000107917c84();
          uVar17 = *(char *)((long)pppppplVar39 + 0x57) == '\0';
          func_0x000107917c84();
        }
      }
      else {
        func_0x000107912b90(&ppppppplStack_1f0,3,*pppppplVar39,pppppplVar39[1]);
      }
      func_0x000107912c4c(&ppppppplStack_1f0);
      func_0x000107912d58(&ppppppplStack_1c0);
      func_0x000107912ec4(&ppppppplStack_260);
    }
    else {
      dVar48 = (double)(uint)(1 << (ulong)(param_2 & 0x1f));
      ppppppplStack_1c0 = (long *******)((double)param_3 / dVar48);
      auVar46 = NEON_fmov(0x3ff0000000000000,8);
      ppppppplStack_1b8 = (long *******)((double)param_4 / dVar48);
      ppppppplStack_1b0 = (long *******)(auVar46._8_8_ / (dVar48 * (double)param_6));
      ppppppplStack_1f0 = (long *******)0x0;
      uStack_1e8 = 0;
      uStack_1e4 = 0;
      uStack_1e0._0_4_ = 0;
      uStack_1e0._4_4_ = 0;
      func_0x0001078f629c(&ppppppplStack_1f0,(lStack_310 - lStack_318) / 0x30);
      ppppppplVar22 = ppppppplStack_1f0;
      for (lVar38 = lStack_318; lVar38 != lStack_310; lVar38 = lVar38 + 0x30) {
        func_0x0001078f6400(ppppppplVar22);
        func_0x000107915260();
        func_0x0001079128ac();
        func_0x0001078f4654(ppppppplVar22 + 3,
                            (*(long *)(lVar38 + 0x20) - *(long *)(lVar38 + 0x18)) / 0x18);
        for (lVar27 = *(long *)(lVar38 + 0x18); lVar27 != *(long *)(lVar38 + 0x20);
            lVar27 = lVar27 + 0x18) {
          func_0x000107914d7c();
          func_0x0001079128ac();
        }
        ppppppplVar22 = ppppppplVar22 + 6;
      }
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppppppplStack_260,&UNK_10f434d0f,param_5);
      func_0x00010048a6c8(&ppppppplStack_210,&ppppppplStack_260,&UNK_10f434d42);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppplStack_260);
      func_0x0001079172e4(&ppppppplStack_210);
      ppppppplVar40 = (long *******)CONCAT44(uStack_1e4,uStack_1e8);
      for (ppppppplVar22 = ppppppplStack_1f0; ppppppplVar22 != ppppppplVar40;
          ppppppplVar22 = ppppppplVar22 + 6) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&ppppppplStack_210,&DAT_10f434d94);
        func_0x0001079172e4(&ppppppplStack_210);
        FUN_107912794(&ppppppplStack_210,ppppppplVar22);
        pppppplVar39 = ppppppplVar22[3];
        pppppplVar31 = ppppppplVar22[4];
        if (pppppplVar39 != pppppplVar31) {
          func_0x0001079172dc(&ppppppplStack_210);
          pppppplVar39 = ppppppplVar22[3];
          pppppplVar31 = ppppppplVar22[4];
        }
        for (; pppppplVar39 != pppppplVar31; pppppplVar39 = pppppplVar39 + 3) {
          func_0x00010791830c();
          FUN_107912794();
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&ppppppplStack_210,0x5d);
        func_0x0001079172dc(&ppppppplStack_210);
      }
      uVar17 = uStack_200._7_1_ == 0;
      ppppppplVar22 = ppppppplStack_208;
      ppppppplVar40 = ppppppplStack_210;
      if (-1 < (long)uStack_200) {
        ppppppplVar22 = (long *******)(ulong)uStack_200._7_1_;
        ppppppplVar40 = (long *******)&ppppppplStack_210;
      }
      *(undefined1 *)((long)ppppppplVar40 + (long)ppppppplVar22 + -1) = 0x5d;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&ppppppplStack_210,&UNK_10f434d98);
      func_0x000107912734(&ppppppplStack_1f0);
    }
    func_0x000100066230(&uStack_300,&ppppppplStack_210);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppplStack_210);
    extraout_x8[1] = uStack_2f8;
    *extraout_x8 = uStack_300;
    extraout_x8[2] = uStack_2f0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_300 = 0;
  }
  func_0x000107917e90();
LAB_1078e500c:
  puVar23 = &uStack_300;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar23);
  func_0x000107913564(uStack_a8);
  if ((bool)uVar17) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107902fd8(&ppppppplStack_240);
  func_0x0001078ee0a0(&ppppppplStack_228);
  func_0x000107917110();
  func_0x000107912734(&pppppplStack_2e8);
  func_0x000107912764(&ppppppplStack_2d0);
  func_0x000107912734(&ppppppplStack_2b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_300);
  __Unwind_Resume(puVar23);
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078e61dc; end: 1078e6377;  */

void FUN_1078e61dc(long param_1,long param_2,uint *param_3)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  
  if (1 < param_2) {
    uVar7 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 3 <= (long)uVar7) {
      lVar11 = (long)param_3 - param_1 >> 2;
      uVar1 = lVar11 + 1;
      puVar8 = (uint *)(param_1 + uVar1 * 8);
      uVar10 = lVar11 + 2;
      if ((long)uVar10 < param_2) {
        uVar12 = puVar8[2];
        uVar3 = *puVar8;
        bVar6 = puVar8[1] < puVar8[3];
        if (uVar3 != uVar12) {
          bVar6 = uVar3 < uVar12;
        }
        puVar9 = puVar8 + 2;
        if (!bVar6) {
          puVar9 = puVar8;
          uVar10 = uVar1;
          uVar12 = uVar3;
        }
      }
      else {
        puVar9 = puVar8;
        uVar10 = uVar1;
        uVar12 = *puVar8;
      }
      bVar6 = puVar9[1] < param_3[1];
      if (uVar12 != *param_3) {
        bVar6 = uVar12 < *param_3;
      }
      if (!bVar6) {
        uVar3 = *param_3;
        uVar5 = param_3[1];
        do {
          puVar8 = puVar9;
          *param_3 = uVar12;
          param_3[1] = puVar8[1];
          if ((long)uVar7 < (long)uVar10) break;
          uVar1 = uVar10 << 1 | 1;
          puVar2 = (uint *)(param_1 + uVar1 * 8);
          uVar10 = uVar10 * 2 + 2;
          if ((long)uVar10 < param_2) {
            uVar12 = puVar2[2];
            uVar4 = *puVar2;
            bVar6 = puVar2[1] < puVar2[3];
            if (uVar4 != uVar12) {
              bVar6 = uVar4 < uVar12;
            }
            puVar9 = puVar2 + 2;
            if (!bVar6) {
              puVar9 = puVar2;
              uVar10 = uVar1;
              uVar12 = uVar4;
            }
          }
          else {
            puVar9 = puVar2;
            uVar10 = uVar1;
            uVar12 = *puVar2;
          }
          bVar6 = puVar9[1] < uVar5;
          if (uVar12 != uVar3) {
            bVar6 = uVar12 < uVar3;
          }
          param_3 = puVar8;
        } while (!bVar6);
        *puVar8 = uVar3;
        puVar8[1] = uVar5;
      }
    }
  }
  return;
}



/* Entry: 1078e652c; end: 1078e65db;  */

void FUN_1078e652c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  double dVar3;
  double dVar4;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x000107913cd4();
  dVar3 = ABS(*(double *)(CONCAT44(uVar2,uVar1) + 0x18) - ((double *)CONCAT44(uVar2,uVar1))[1]);
  dVar4 = ABS(*(double *)(CONCAT44(uVar2,uVar1) + 0x10) - *(double *)CONCAT44(uVar2,uVar1));
  if (dVar4 <= dVar3) {
    dVar4 = dVar3;
  }
  func_0x000107914cfc();
  dVar3 = 1.0;
  if (((((uVar1 & 1) == 0) && (dVar4 < 10000000.0)) && (dVar4 != INFINITY)) && (!NAN(dVar4))) {
    func_0x0001078e6648(10000000.0 / dVar4 + 0.5);
    dVar3 = (double)CONCAT44(uVar2,uVar1);
  }
  *param_4 = dVar3;
  *unaff_x20 = *unaff_x21;
  unaff_x20[1] = unaff_x21[1];
  func_0x0001078e6648(0xc15312d000000000);
  *unaff_x19 = CONCAT44(uVar2,uVar1);
  unaff_x19[1] = CONCAT44(uVar2,uVar1);
  return;
}



/* Entry: 1078e6784; end: 1078e6793;  */

undefined * FUN_1078e6784(void)

{
  return &UNK_10f434652;
}



/* Entry: 1078e6fbc; end: 1078e7edf;  */

void FUN_1078e6fbc(long ******param_1,long ******param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  undefined1 uVar9;
  long ******pppppplVar10;
  undefined *puVar11;
  undefined4 extraout_w8;
  undefined4 uVar12;
  undefined8 extraout_x8;
  long ******pppppplVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *puVar14;
  undefined8 extraout_x8_05;
  long ****pppplVar15;
  long *plVar16;
  long ****pppplVar17;
  long *****extraout_x8_06;
  long *****extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  undefined8 *extraout_x9_04;
  undefined8 *puVar18;
  ulong uVar19;
  long extraout_x10;
  long ******pppppplVar20;
  long lVar21;
  long lVar22;
  long extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *puVar23;
  long *****ppppplVar24;
  uint uVar25;
  long *****ppppplVar26;
  int *piVar27;
  long lVar28;
  long *****ppppplVar29;
  long lVar30;
  long ******pppppplVar31;
  long *****ppppplVar32;
  long lVar33;
  long ******pppppplVar34;
  long ******pppppplVar35;
  long lVar36;
  int iVar37;
  long ******unaff_x25;
  long ******unaff_x26;
  long ******pppppplVar38;
  long *plVar39;
  long *****unaff_x28;
  long ******unaff_x30;
  long ******pppppplVar40;
  long *****ppppplVar41;
  double dVar42;
  double dVar43;
  long ******in_register_00005008;
  long ******pppppplVar44;
  long ******in_register_00005028;
  undefined8 uVar45;
  double dVar46;
  long ******pppppplVar47;
  long ******pppppplVar48;
  undefined8 in_stack_00000090;
  long ****pppplStack_4e0;
  long ****pppplStack_4d8;
  long *plStack_4d0;
  long *****ppppplStack_4c8;
  long *****ppppplStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long *****ppppplStack_478;
  long ****pppplStack_470;
  undefined8 uStack_468;
  long ****pppplStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  long ****pppplStack_448;
  long ****pppplStack_440;
  long *****ppppplStack_430;
  long *****ppppplStack_428;
  long *****ppppplStack_420;
  long *****ppppplStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 **ppuStack_390;
  undefined *puStack_388;
  long *****ppppplStack_380;
  long *****ppppplStack_378;
  long *****ppppplStack_370;
  long ****pppplStack_368;
  long *****ppppplStack_360;
  long *****ppppplStack_358;
  ulong uStack_350;
  uint uStack_344;
  long ***ppplStack_340;
  long *****ppppplStack_338;
  uint uStack_330;
  undefined1 uStack_329;
  long *plStack_328;
  long alStack_320 [2];
  long *****ppppplStack_310;
  long *****ppppplStack_308;
  long *****ppppplStack_300;
  long *****ppppplStack_2f8;
  long *****ppppplStack_2f0;
  long *****ppppplStack_2e8;
  long lStack_2e0;
  long *****ppppplStack_2d8;
  long ****pppplStack_2d0;
  ulong uStack_2c8;
  long ****pppplStack_2c0;
  undefined1 *puStack_2b8;
  long ****pppplStack_2b0;
  long ****pppplStack_2a8;
  long *****ppppplStack_2a0;
  long *****ppppplStack_298;
  long *****ppppplStack_290;
  long *****ppppplStack_288;
  long ****pppplStack_280;
  undefined1 *puStack_270;
  long *****ppppplStack_268;
  long *****ppppplStack_260;
  long *****ppppplStack_258;
  long **pplStack_250;
  long *****ppppplStack_248;
  long *****ppppplStack_240;
  long ****pppplStack_238;
  undefined1 *puStack_230;
  undefined8 uStack_228;
  long ****pppplStack_210;
  long *****ppppplStack_208;
  long *****ppppplStack_200;
  long *****ppppplStack_1f8;
  long *****ppppplStack_1f0;
  long *****ppppplStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *****ppppplStack_1d0;
  long ****pppplStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long *****ppppplStack_1a0;
  long ****pppplStack_198;
  long *****ppppplStack_190;
  ulong uStack_188;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  long *****ppppplStack_170;
  long *****ppppplStack_168;
  long *****ppppplStack_160;
  long *****ppppplStack_158;
  long *****ppppplStack_150;
  long *****ppppplStack_148;
  long ****pppplStack_140;
  long *****ppppplStack_138;
  long *****ppppplStack_130;
  long *****ppppplStack_128;
  long *****ppppplStack_120;
  long *****ppppplStack_118;
  undefined8 uStack_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  undefined8 uStack_f8;
  long *****ppppplStack_f0;
  long *****ppppplStack_e8;
  long *****appppplStack_e0 [2];
  long *****appppplStack_d0 [2];
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  long *****ppppplStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long *****ppppplStack_50;
  long *****ppppplStack_48;
  long ****pppplStack_40;
  long ***appplStack_38 [2];
  long lStack_28;
  undefined8 uStack_20;
  long ****pppplStack_18;
  undefined8 uStack_10;
  
  func_0x000107915964();
  pppplStack_198 = (long ****)0x0;
  func_0x000107913ca4();
  ppppplStack_1a0 = *(long ******)(param_3 + 0x108);
  ppppplStack_190 = (long *****)&ppppplStack_b8;
  ppppplStack_b8 = (long *****)0x0;
  ppppplStack_b0 = (long *****)0x0;
  ppppplStack_178 = (long *****)(param_3 + 0x18);
  ppppplVar29 = (long *****)*ppppplStack_178;
  pppppplVar31 = (long ******)(param_3 + 0x40);
  ppppplStack_108 = (long *****)0x0;
  ppppplVar32 = *(long ******)(param_3 + 0x20);
  lStack_1b0 = param_3;
  ppppplStack_c0 = ppppplStack_190;
  uStack_10 = extraout_x8;
  for (; ppppplVar29 != ppppplVar32; ppppplVar29 = ppppplVar29 + 0x36) {
    if (*(int *)(ppppplVar29 + 2) == 7) {
      for (lVar36 = 0x38; lVar36 != 0x1a8; lVar36 = lVar36 + 0xb8) {
        in_register_00005008 = (long ******)((undefined8 *)((long)ppppplVar29 + lVar36))[1];
        param_1 = *(long *******)((long)ppppplVar29 + lVar36);
        ppppplStack_50 = (long *****)param_1;
        ppppplStack_48 = (long *****)in_register_00005008;
        func_0x0001078eefe8(&ppppplStack_c0,&ppppplStack_50);
        unaff_x30 = &ppppplStack_108;
        func_0x00010737fce0();
      }
      pppplStack_198 = (long ****)ppppplStack_108;
    }
    func_0x000107918714();
  }
  lVar36 = *(long *)(lStack_1b0 + 0x18);
  lStack_1a8 = *(long *)(lStack_1b0 + 0x20);
  ppppplStack_170 = (long *****)(lVar36 + 0xe8);
  ppppplStack_158 = (long *****)lVar36;
  while (lVar36 != lStack_1a8) {
    if (*(int *)(lVar36 + 0x10) != 2 && *(int *)(lVar36 + 0x10) != 7) {
      pppplStack_140 = (long ****)(lVar36 + 0x28);
      ppppplStack_148 = (long *****)(lVar36 + 0x30);
      pppppplVar13 = (long ******)0x28;
      uStack_188 = lVar36;
      while (pppppplVar13 != (long ******)0x198) {
        unaff_x30 = *(long *******)((long)pppppplVar13 + uStack_188 + 0x10);
        pppppplVar10 = &ppppplStack_c0;
        ppppplStack_180 = (long *****)pppppplVar13;
        func_0x0001078ef0b4(pppppplVar10,unaff_x30,
                            *(undefined8 *)((long)pppppplVar13 + uStack_188 + 0x18));
        if ((long ******)ppppplStack_190 != pppppplVar10) {
          ppppplStack_168 = pppppplVar10[7];
          pppppplVar13 = (long ******)pppppplVar10[6];
          while (pppppplVar13 != (long ******)ppppplStack_168) {
            unaff_x25 = (long ******)0x0;
            ppppplStack_160 = *pppppplVar13;
            ppppplStack_130 =
                 (long *****)((long)ppppplStack_158 + (long)ppppplStack_160 * 0x1b0 + 0x30);
            ppppplStack_138 = ppppplStack_170 + (long)ppppplStack_160 * 0x36;
            ppppplStack_150 = (long *****)pppppplVar13;
            for (lVar36 = 0; ppppplVar29 = ppppplStack_148, lVar36 != 2; lVar36 = lVar36 + 1) {
              unaff_x26 = (long ******)(pppplStack_140 + lVar36 * 0x17);
              ppppplVar32 = unaff_x26[2];
              ppppplVar24 = unaff_x26[3];
              lVar33 = 2;
              pppppplVar13 = (long ******)ppppplStack_130;
              pppppplVar10 = (long ******)ppppplStack_138;
              do {
                if (ppppplVar24 == pppppplVar13[2] && ppppplVar32 == pppppplVar13[1]) {
                  iVar37 = (int)unaff_x26 + 8;
                  unaff_x30 = pppppplVar13;
                  func_0x000107917fbc();
                  if (iVar37 != 0) {
                    pppppplVar38 = (long ******)(ppppplVar29 + lVar36 * -0x17 + 0x17);
                    unaff_x30 = pppppplVar10;
                    func_0x000107917fbc();
                    unaff_x25 = (long ******)((long)unaff_x25 + ((ulong)pppppplVar38 & 0xffffffff));
                  }
                }
                pppppplVar10 = pppppplVar10 + -0x17;
                pppppplVar13 = pppppplVar13 + 0x17;
                lVar33 = lVar33 + -1;
              } while (lVar33 != 0);
            }
            if (unaff_x25 == (long ******)0x2) {
              *(undefined1 *)((long)ppppplStack_158 + (long)ppppplStack_160 * 0x1b0 + 0x20) = 1;
            }
            unaff_x28 = (long *****)0x2;
            pppppplVar13 = (long ******)(ppppplStack_150 + 1);
          }
        }
        pppppplVar13 = (long ******)(ppppplStack_180 + 0x17);
      }
    }
    func_0x000107918714();
    lVar36 = extraout_x9 + 0x1b0;
  }
  func_0x0001078ef198(ppppplStack_b8);
  pppppplVar13 = (long ******)0x0;
  lVar36 = *(long *)(lStack_1b0 + 0x18);
  lVar33 = *(long *)(lStack_1b0 + 0x20);
  ppppplStack_108 = (long *****)0x0;
  ppppplStack_100 = (long *****)0x0;
  uStack_f8 = 0;
  for (; ppppplVar29 = ppppplStack_100, pppppplVar10 = (long ******)ppppplStack_108,
      lVar36 != lVar33; lVar36 = lVar36 + 0x1b0) {
    if ((*(byte *)(lVar36 + 0x20) & 1) == 0) {
      func_0x0001078e9abc(&ppppplStack_50,lVar36,ppppplStack_1a0);
      ppppplStack_b0 = ppppplStack_48;
      ppppplStack_b8 = ppppplStack_50;
      unaff_x30 = &ppppplStack_c0;
      param_1 = (long ******)ppppplStack_50;
      in_register_00005008 = (long ******)ppppplStack_48;
      ppppplStack_c0 = (long *****)pppppplVar13;
      func_0x0001078ef3f4(&ppppplStack_108);
    }
    pppppplVar13 = (long ******)((long)pppppplVar13 + 1);
  }
  if (ppppplStack_108 != ppppplStack_100) {
    func_0x00010791752c(((long)ppppplStack_100 - (long)ppppplStack_108) / 0x18);
    func_0x000107915320();
    func_0x0001078ef4dc();
  }
  pppppplVar38 = (long ******)0x0;
  pppppplVar13 = (long ******)0x0;
  ppppplStack_120 = (long *****)0x0;
  ppppplStack_118 = (long *****)0x0;
  uStack_110 = 0;
  for (; ppppplVar32 = ppppplStack_118, pppppplVar34 = pppppplVar10,
      pppppplVar10 != (long ******)ppppplVar29; pppppplVar10 = pppppplVar10 + 3) {
    while (ppppplVar32 = ppppplStack_118, unaff_x26 = pppppplVar34 + 3,
          unaff_x26 != (long ******)ppppplVar29) {
      uVar19 = (long)pppppplVar10[2] - (long)pppppplVar34[5];
      if (1 < (long)uVar19) break;
      uVar6 = (long)pppppplVar10[1] - (long)pppppplVar34[4];
      uVar7 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar7 = uVar6;
      }
      uVar6 = -uVar19;
      if (-1 < (long)uVar19) {
        uVar6 = uVar19;
      }
      pppppplVar34 = unaff_x26;
      if (uVar7 < 2 && uVar6 < 2) {
        unaff_x28 = (long *****)0x0;
        for (pppppplVar35 = pppppplVar13; pppppplVar35 != (long ******)ppppplStack_118;
            pppppplVar35 = pppppplVar35 + 6) {
          uVar7 = (long)pppppplVar35[4] - (long)pppppplVar10[1];
          uVar19 = -uVar7;
          if (-1 < (long)uVar7) {
            uVar19 = uVar7;
          }
          uVar6 = (long)pppppplVar35[5] - (long)pppppplVar10[2];
          uVar7 = -uVar6;
          if (-1 < (long)uVar6) {
            uVar7 = uVar6;
          }
          if (uVar19 < 2 && uVar7 < 2) goto LAB_1078e7354;
          unaff_x28 = (long *****)((long)unaff_x28 + 1);
        }
        ppppplStack_48 = (long *****)0x0;
        pppplStack_40 = (long ****)0x0;
        appplStack_38[0] = (long ***)0x0;
        ppppplStack_50 = (long *****)&ppppplStack_48;
        func_0x0001078efe34(&ppppplStack_c0,&ppppplStack_50);
        in_register_00005008 = (long ******)pppppplVar10[2];
        param_1 = (long ******)pppppplVar10[1];
        uStack_98 = SUB84(in_register_00005008,0);
        uStack_94 = (undefined4)((ulong)in_register_00005008 >> 0x20);
        unaff_x30 = &ppppplStack_c0;
        ppppplStack_a0 = (long *****)param_1;
        func_0x0001078efca0(&ppppplStack_120);
        unaff_x28 = (long *****)(((long)ppppplVar32 - (long)pppppplVar13) / 0x30);
        func_0x000107917190();
        func_0x0001078f005c(&ppppplStack_50);
        pppppplVar38 = (long ******)ppppplStack_120;
LAB_1078e7354:
        pppppplVar13 = pppppplVar38;
        ppppplStack_c0 = *pppppplVar10;
        func_0x000107917df4();
        ppppplStack_c0 = *unaff_x26;
        func_0x000107917df4();
        unaff_x25 = (long ******)ppppplVar32;
        pppppplVar38 = pppppplVar13;
      }
    }
  }
  pppppplVar34 = (long ******)0x1;
  for (pppppplVar10 = (long ******)ppppplStack_120; pppppplVar10 != (long ******)ppppplVar32;
      pppppplVar10 = pppppplVar10 + 6) {
    ppppplStack_c0 = (long *****)pppppplVar34;
    FUN_1078ef1d8(ppppplStack_178 + 0x19,&ppppplStack_c0);
    unaff_x30 = pppppplVar10;
    func_0x0001078ef25c();
    pppppplVar34 = (long ******)((long)pppppplVar34 + 1);
  }
  func_0x0001078f01c0(&ppppplStack_120);
  pppppplVar10 = &ppppplStack_108;
  func_0x0001078f0200();
  lVar30 = *(long *)(lStack_1b0 + 0xf0);
  lVar36 = *(long *)(lStack_1b0 + 0x18);
  lVar33 = *(long *)(lStack_1b0 + 0x20);
  if (lVar30 != 0) {
    for (; lVar36 != lVar33; lVar36 = lVar36 + 0x1b0) {
      *(undefined8 *)(lVar36 + 0x18) = 0xffffffffffffffff;
    }
    pppppplVar34 = (long ******)(lStack_1b0 + 0xe8);
    pppppplVar13 = *(long *******)(lStack_1b0 + 0xe0);
    while (pppppplVar13 != pppppplVar34) {
      pppppplVar10 = (long ******)pppppplVar13[5];
      while (pppppplVar10 != pppppplVar13 + 6) {
        (*ppppplStack_178)[(long)pppppplVar10[4] * 0x36 + 3] = (long ***)pppppplVar13[4];
        func_0x00010002c7d4();
      }
      func_0x000107915114();
      pppppplVar13 = pppppplVar10;
    }
    pppppplVar13 = (long ******)0x1;
    pppppplVar35 = (long ******)ppppplStack_178[0x19];
    while (pppppplVar35 != pppppplVar34) {
      pppppplVar10 = (long ******)pppppplVar35[5];
      unaff_x25 = pppppplVar35 + 6;
      while( true ) {
        if (pppppplVar10 == unaff_x25) goto LAB_1078e74c0;
        func_0x000107917828(pppppplVar10[4]);
        lVar36 = extraout_x9_00 + extraout_x8_00 * 0x1b0;
        if ((*(int *)(lVar36 + 0x28) == 1) && (*(int *)(lVar36 + 0xe0) == 1)) break;
        func_0x00010002c7d4();
      }
      pppppplVar10 = (long ******)pppppplVar35[5];
      while (pppppplVar10 != unaff_x25) {
        func_0x000107917828(pppppplVar10[4]);
        *(undefined1 *)(extraout_x9_01 + extraout_x8_01 * 0x1b0 + 0x21) = 1;
        func_0x00010002c7d4();
      }
LAB_1078e74c0:
      func_0x000107915114();
      pppppplVar35 = pppppplVar10;
    }
    lVar36 = *(long *)(lStack_1b0 + 0x18);
    lVar33 = *(long *)(lStack_1b0 + 0x20);
  }
  uVar25 = 0;
  for (lVar21 = lVar36; lVar21 != lVar33; lVar21 = lVar21 + 0x1b0) {
    iVar37 = *(int *)(lVar21 + 0x28);
    if (iVar37 == 3) {
      if (*(int *)(lVar21 + 0xe0) == 3) {
LAB_1078e752c:
        *(undefined1 *)(lVar21 + 0x20) = 1;
        *(undefined8 *)(lVar21 + 0x18) = 0xffffffffffffffff;
      }
    }
    else if (iVar37 == 2) {
      if (*(int *)(lVar21 + 0xe0) == 2) goto LAB_1078e752c;
    }
    else if (iVar37 == 0) {
      if (*(int *)(lVar21 + 0xe0) == 0) goto LAB_1078e752c;
    }
    else if ((iVar37 == 4) && ((*(byte *)(lVar21 + 0x20) & 1) == 0)) {
      uVar25 = *(int *)(lVar21 + 0xe0) == 4 | uVar25;
    }
  }
  uStack_188 = CONCAT44(uStack_188._4_4_,uVar25);
  pppppplVar35 = (long ******)0x0;
  ppppplStack_100 = (long *****)0x0;
  uStack_f8 = 0;
  ppppplStack_158 = (long *****)&ppppplStack_100;
  ppppplStack_108 = (long *****)&ppppplStack_100;
  pppppplVar34 = (long ******)(lVar36 + 0xe8);
  for (; lVar36 != lVar33; lVar36 = lVar36 + 0x1b0) {
    if ((*(byte *)(lVar36 + 0x20) & 1) == 0) {
      unaff_x25 = (long ******)0x0;
      unaff_x26 = pppppplVar34;
      for (lVar33 = 0; lVar33 != 0x170; lVar33 = lVar33 + 0xb8) {
        pppppplVar38 = (long ******)(lVar36 + lVar33);
        pppplStack_40 = (long ****)pppppplVar38[8];
        in_register_00005008 = (long ******)pppppplVar38[7];
        param_1 = (long ******)pppppplVar38[6];
        pppppplVar10 = &ppppplStack_108;
        ppppplStack_50 = (long *****)param_1;
        ppppplStack_48 = (long *****)in_register_00005008;
        func_0x0001078ee2d8(pppppplVar10,&ppppplStack_50);
        ppppplStack_a0 = (long *****)(pppppplVar38 + 5);
        ppppplStack_b0 = (long *****)((ulong)ppppplStack_b0 & 0xffffffffffffff00);
        unaff_x30 = &ppppplStack_c0;
        ppppplStack_c0 = (long *****)pppppplVar35;
        ppppplStack_b8 = (long *****)unaff_x25;
        ppppplStack_a8 = (long *****)unaff_x26;
        func_0x0001078ee390();
        unaff_x25 = (long ******)((long)unaff_x25 + 1);
        unaff_x26 = unaff_x26 + -0x17;
      }
      lVar33 = *(long *)(lStack_1b0 + 0x20);
      pppppplVar13 = (long ******)0x170;
    }
    pppppplVar35 = (long ******)((long)pppppplVar35 + 1);
    pppppplVar34 = pppppplVar34 + 0x36;
  }
  pppppplVar34 = (long ******)0x28;
  pppppplVar35 = (long ******)ppppplStack_108;
  while (pppppplVar35 != (long ******)ppppplStack_158) {
    pppppplVar10 = (long ******)pppppplVar35[7];
    unaff_x30 = (long ******)pppppplVar35[8];
    ppppplStack_c0 = ppppplStack_178;
    ppppplStack_a8 = ppppplStack_1a0;
    ppppplStack_b8 = (long *****)pppppplVar31;
    ppppplStack_b0 = (long *****)pppppplVar31;
    ppppplStack_a0 = (long *****)&ppppplStack_50;
    if (pppppplVar10 != unaff_x30) {
      func_0x0001078f0224(pppppplVar10,unaff_x30,&ppppplStack_c0,
                          LZCOUNT(((long)unaff_x30 - (long)pppppplVar10) / 0x28) << 1 ^ 0x7e,1);
    }
    func_0x000107915114();
    pppppplVar35 = pppppplVar10;
  }
  pppppplVar35 = (long ******)ppppplStack_108;
  if (lVar30 != 0) {
    pppppplVar35 = *(long *******)(lStack_1b0 + 0xe0);
    pppplStack_140 = appplStack_38;
    ppppplStack_170 = &pppplStack_18;
    ppppplStack_168 = (long *****)(lStack_1b0 + 0xe8);
    ppppplStack_180 = (long *****)&ppppplStack_b8;
    in_register_00005008 = (long ******)0xffffffffffffffff;
    param_1 = (long ******)0x0;
    ppppplStack_128 = (long *****)0xffffffffffffffff;
    ppppplStack_130 = (long *****)0x0;
    while (pppppplVar35 != (long ******)ppppplStack_168) {
      ppppplStack_50 = (long *****)0x0;
      ppppplStack_48 = (long *****)0x0;
      pppplStack_40 = (long ****)0x0;
      lStack_28 = 0;
      uStack_20 = 0;
      ppppplStack_160 = (long *****)pppppplVar35;
      if (pppppplVar35[7] != (long *****)0x0) {
        pppppplVar13 = (long ******)pppppplVar35[5];
        ppppplStack_150 = (long *****)(pppppplVar35 + 6);
        bVar8 = true;
        while (pppppplVar13 != (long ******)ppppplStack_150) {
          pppppplVar10 = (long ******)pppppplVar13[4];
          ppppplStack_148 = (long *****)pppppplVar13;
          func_0x000107917990(ppppplStack_178);
          pppppplVar38 = (long ******)(extraout_x8_02 + (long)pppppplVar10 * extraout_x9_02);
          if (bVar8) {
            in_register_00005008 = (long ******)pppppplVar38[1];
            param_1 = (long ******)*pppppplVar38;
            ppppplStack_f0 = (long *****)param_1;
            ppppplStack_e8 = (long *****)in_register_00005008;
          }
          ppppplStack_138 = (long *****)(pppppplVar38 + 5);
          for (lVar36 = 0; lVar36 != 2; lVar36 = lVar36 + 1) {
            pppppplVar20 = (long ******)(ppppplStack_138 + lVar36 * 0x17);
            pppppplVar35 = pppppplVar31;
            func_0x0001078f0bd8(pppppplVar31,pppppplVar31,pppppplVar20 + 1,&ppppplStack_120,
                                appppplStack_d0,appppplStack_e0);
            ppppplVar24 = appppplStack_d0[0];
            pppppplVar34 = (long ******)appppplStack_e0[0];
            ppppplVar29 = pppppplVar20[6];
            ppppplVar32 = pppppplVar20[7];
            pppppplVar13 = appppplStack_e0;
            if (ppppplVar29 != ppppplVar32) {
              pppppplVar13 = appppplStack_d0;
            }
            pppppplVar13 = (long ******)pppppplVar13[1];
            iVar37 = -1;
            pppppplVar47 = (long ******)ppppplStack_120;
            pppppplVar48 = (long ******)ppppplStack_118;
            while ((pppppplVar40 = pppppplVar47, pppppplVar44 = pppppplVar48, func_0x000107914814(),
                   -10 < iVar37 + 1 && (((ulong)pppppplVar35 & 1) != 0))) {
              func_0x000107916884();
              iVar37 = iVar37 + -1;
              pppppplVar47 = pppppplVar40;
              pppppplVar48 = pppppplVar44;
            }
            if (ppppplVar29 != ppppplVar32) {
              pppppplVar34 = (long ******)ppppplVar24;
            }
            iVar37 = 1;
            ppppplStack_120 = (long *****)pppppplVar47;
            ppppplStack_118 = (long *****)pppppplVar48;
            while( true ) {
              func_0x0001079183bc();
              func_0x000107914814();
              if ((int)pppppplVar35 == 0 || 9 < iVar37 - 1U) break;
              func_0x000107916884();
              iVar37 = iVar37 + 1;
              pppppplVar13 = pppppplVar44;
              pppppplVar34 = pppppplVar40;
            }
            ppppplStack_b8 = ppppplStack_118;
            ppppplStack_c0 = ppppplStack_120;
            ppppplStack_a8 = ppppplStack_128;
            ppppplStack_b0 = ppppplStack_130;
            uStack_8c = 0;
            uStack_88 = 0;
            uStack_94 = 0;
            uStack_90 = 0;
            uStack_84 = 0;
            param_2 = (long ******)ppppplStack_120;
            in_register_00005028 = (long ******)ppppplStack_118;
            ppppplStack_a0 = (long *****)pppppplVar10;
            uStack_98 = (int)lVar36;
            func_0x0001079169fc(*(undefined4 *)pppppplVar20);
            func_0x000107917e00();
            if (bVar8) {
              pppplStack_140[1] = (long ***)ppppplStack_118;
              *pppplStack_140 = (long ***)ppppplStack_120;
              lStack_28 = lStack_28 + 1;
            }
            ppppplStack_a8 = ppppplStack_128;
            ppppplStack_b0 = ppppplStack_130;
            uStack_94 = 1;
            uStack_90 = 0;
            uStack_8c = 0;
            uStack_88 = 0;
            uStack_84 = 0;
            param_1 = (long ******)ppppplStack_130;
            in_register_00005008 = (long ******)ppppplStack_128;
            ppppplStack_c0 = (long *****)pppppplVar34;
            ppppplStack_b8 = (long *****)pppppplVar13;
            ppppplStack_a0 = (long *****)pppppplVar10;
            uStack_98 = (int)lVar36;
            func_0x0001079169fc(*(undefined4 *)pppppplVar20);
            func_0x000107917e00();
            bVar8 = false;
          }
          pppppplVar13 = (long ******)ppppplStack_148;
          func_0x00010002c7d4();
          bVar8 = false;
        }
        ppppplStack_b8 = (long *****)&ppppplStack_f0;
        ppppplStack_c0 = (long *****)pppplStack_140;
        ppppplStack_b0 = ppppplStack_170;
        pppppplVar35 = (long ******)ppppplStack_50;
        func_0x0001078f0e60(ppppplStack_50,ppppplStack_48,&ppppplStack_c0);
        pppppplVar34 = (long ******)ppppplStack_48;
        pppppplVar10 = (long ******)ppppplStack_50;
        ppppplVar29 = (long *****)0x0;
        unaff_x26 = (long ******)(((long)ppppplStack_48 - (long)ppppplStack_50) / 0x70);
        unaff_x25 = (long ******)(ppppplStack_50 + 2);
        for (pppppplVar13 = (long ******)0x0; unaff_x26 != pppppplVar13;
            pppppplVar13 = (long ******)((long)pppppplVar13 + 1)) {
          if (pppppplVar13 != (long ******)0x0) {
            func_0x000107916794();
            ppppplVar29 = (long *****)((long)ppppplVar29 + ((ulong)pppppplVar35 & 0xffffffff));
          }
          *unaff_x25 = ppppplVar29;
          unaff_x25 = unaff_x25 + 0xe;
        }
        *ppppplStack_180 = (long ****)0x0;
        ppppplStack_180[1] = (long ****)0x0;
        ppppplStack_c0 = ppppplStack_180;
        for (unaff_x28 = (long *****)0x0;
            unaff_x28 < (long *****)(((long)pppppplVar34 - (long)pppppplVar10) / 0x70);
            unaff_x28 = (long *****)((long)unaff_x28 + 1)) {
          if (*(int *)((long)pppppplVar10 + (long)unaff_x28 * 0x70 + 0x2c) == 0) {
            unaff_x25 = (long ******)pppppplVar10[(long)unaff_x28 * 0xe + 0xd];
            pppppplVar35 = &ppppplStack_c0;
            func_0x000107916764();
            if (pppppplVar35 == (long ******)0x0) {
              pppppplVar38 = (long ******)pppppplVar10[(long)unaff_x28 * 0xe + 2];
              pppppplVar13 = (long ******)0x1;
              ppppplVar29 = unaff_x28;
              ppppplStack_148 = (long *****)(pppppplVar10 + (long)unaff_x28 * 0xe + 0xd);
              ppppplStack_138 = (long *****)pppppplVar38;
              while( true ) {
                ppppplVar32 = ppppplVar29;
                do {
                  ppppplVar29 = (long *****)0x0;
                  if ((long)ppppplVar32 + 1U <
                      (ulong)(((long)pppppplVar34 - (long)pppppplVar10) / 0x70)) {
                    ppppplVar29 = (long *****)((long)ppppplVar32 + 1);
                  }
                  ppppplVar32 = ppppplVar29;
                } while ((long ******)pppppplVar10[(long)ppppplVar29 * 0xe + 0xd] != unaff_x25);
                unaff_x26 = pppppplVar10 + (long)ppppplVar29 * 0xe;
                if ((long ******)unaff_x26[2] != pppppplVar38 && (int)pppppplVar13 == 0) {
                  func_0x000107915320();
                  ppppplVar32 = ppppplStack_138;
                  func_0x0001078f1b0c();
                  func_0x0001078f1b0c(ppppplStack_50,ppppplStack_48,(long)ppppplVar32 + 1,
                                      pppppplVar38,2);
                }
                if (ppppplVar29 == unaff_x28) break;
                if (*(int *)((long)unaff_x26 + 0x2c) == 1) {
                  pppppplVar13 = (long ******)0x0;
                }
                else if (*(int *)((long)unaff_x26 + 0x2c) == 0) {
                  ppppplStack_138 = unaff_x26[2];
                  pppppplVar13 = (long ******)0x1;
                }
                pppppplVar38 = (long ******)unaff_x26[2];
                pppppplVar10 = (long ******)ppppplStack_50;
                pppppplVar34 = (long ******)ppppplStack_48;
              }
              func_0x0001078f1ad0(&ppppplStack_c0,ppppplStack_148);
              pppppplVar10 = (long ******)ppppplStack_50;
              pppppplVar34 = (long ******)ppppplStack_48;
            }
          }
        }
        func_0x000107917190();
        lVar30 = ((long)ppppplStack_48 - (long)ppppplStack_50) / 0x70;
        lVar36 = lVar30 + 1;
        piVar1 = (int *)((long)ppppplStack_50 + 0x2c);
        lVar22 = 0;
        lVar21 = 0;
        piVar27 = piVar1;
        for (lVar33 = 0; lVar30 != lVar33; lVar33 = lVar33 + 1) {
          lVar28 = *(long *)(piVar27 + -7);
          lVar2 = lVar28;
          if (lVar28 <= lVar22) {
            lVar2 = lVar22;
          }
          if ((*piVar27 == 1) && (*(long *)(piVar27 + 3) != 0 && *(long *)(piVar27 + 1) == 0)) {
            lVar36 = lVar28 + 1;
          }
          lVar3 = lVar33;
          if (lVar21 != 0 || lVar28 != lVar36) {
            lVar3 = lVar21;
          }
          piVar27 = piVar27 + 0x1c;
          lVar22 = lVar2;
          lVar21 = lVar3;
        }
        ppppplVar29 = (long *****)0x0;
        unaff_x30 = (long ******)0x0;
        pppppplVar10 = (long ******)(lVar22 + 1);
        for (lVar36 = lVar30; lVar36 != 0; lVar36 = lVar36 + -1) {
          lVar33 = 0;
          if (lVar21 + 1 != lVar30) {
            lVar33 = lVar21 + 1;
          }
          pppppplVar35 = (long ******)ppppplStack_50[lVar21 * 0xe + 2];
          if (pppppplVar35 != unaff_x30) {
            if (pppppplVar35 == pppppplVar10) {
              ppppplVar29 = (long *****)((long)ppppplVar29 + 1);
              pppppplVar10 = (long ******)(lVar22 + 1);
            }
            unaff_x30 = pppppplVar35;
            if (*(int *)((long)ppppplStack_50 + lVar21 * 0x70 + 0x2c) == 1) {
              pppppplVar20 = (long ******)0x0;
              if ((long)pppppplVar35 < lVar22) {
                pppppplVar20 = (long ******)((long)pppppplVar35 + 1);
              }
              pppppplVar35 = pppppplVar10;
              if ((long *****)ppppplStack_50[lVar21 * 0xe + 7] != (long *****)0x0) {
                pppppplVar35 = pppppplVar20;
              }
              if ((long *****)ppppplStack_50[lVar21 * 0xe + 6] == (long *****)0x0) {
                pppppplVar10 = pppppplVar35;
              }
            }
          }
          ppppplStack_50[lVar21 * 0xe + 3] = (long ****)ppppplVar29;
          lVar21 = lVar33;
        }
        ppppplVar29 = (long *****)0x0;
        lVar33 = 0;
        for (lVar36 = lVar30; lVar36 != 0; lVar36 = lVar36 + -1) {
          lVar21 = lVar33;
          if ((lVar33 < *(long *)(piVar1 + -7)) && (*piVar1 == 1)) {
            uVar25 = (uint)(*(long *)(piVar1 + 1) == 0 && *(long *)(piVar1 + 3) != 0);
            lVar21 = *(long *)(piVar1 + -7);
            if (uVar25 == 0) {
              lVar21 = lVar33;
            }
            ppppplVar29 = (long *****)((long)ppppplVar29 + (ulong)uVar25);
          }
          piVar1 = piVar1 + 0x1c;
          lVar33 = lVar21;
        }
        ppppplStack_160[8] = (long ****)ppppplVar29;
        ppppplVar32 = (long *****)*ppppplStack_178;
        pppppplVar10 = (long ******)(ppppplStack_50 + 6);
        for (; lVar30 != 0; lVar30 = lVar30 + -1) {
          ppppplVar24 = pppppplVar10[-2];
          lVar36 = (long)*(int *)(pppppplVar10 + -1);
          if (ppppplVar29 == (long *****)0x0) {
            *(undefined1 *)(ppppplVar32 + (long)ppppplVar24 * 0x36 + lVar36 * 0x17 + 0x12) = 0;
          }
          if (*(int *)((long)pppppplVar10 + -4) == 1) {
            ppppplVar41 = *pppppplVar10;
            ppppplVar26 = *pppppplVar10;
            ppppplVar32[(long)ppppplVar24 * 0x36 + lVar36 * 0x17 + 0x14] =
                 (long ****)pppppplVar10[1];
            ppppplVar32[(long)ppppplVar24 * 0x36 + lVar36 * 0x17 + 0x13] = (long ****)ppppplVar41;
            in_register_00005008 = (long ******)pppppplVar10[-3];
            param_1 = (long ******)pppppplVar10[-4];
            ppppplVar32[(long)ppppplVar24 * 0x36 + lVar36 * 0x17 + 0x16] =
                 (long ****)in_register_00005008;
            ppppplVar32[(long)ppppplVar24 * 0x36 + lVar36 * 0x17 + 0x15] = (long ****)param_1;
            if (ppppplVar26 != (long *****)0x0) {
              *(undefined1 *)(ppppplVar32 + (long)ppppplVar24 * 0x36 + lVar36 * 0x17 + 0x12) = 0;
            }
          }
          pppppplVar10 = pppppplVar10 + 0xe;
        }
      }
      func_0x000107916380();
      pppppplVar35 = (long ******)ppppplStack_160;
      func_0x00010002c7d4();
    }
    pppppplVar31 = (long ******)ppppplStack_178[0x19];
    while (pppppplVar31 != (long ******)ppppplStack_168) {
      pppppplVar13 = pppppplVar31 + 6;
      pppppplVar10 = pppppplVar35;
      pppppplVar35 = (long ******)pppppplVar31[5];
      while (pppppplVar31 = pppppplVar35, pppppplVar35 = pppppplVar10,
            uVar9 = pppppplVar31 == pppppplVar13, !(bool)uVar9) {
        func_0x000107915114();
        pppppplVar10 = pppppplVar35;
        func_0x000107917828(pppppplVar31[4]);
        func_0x000107918248(extraout_x9_03 + extraout_x8_03 * 0x1b0);
        pppppplVar34 = pppppplVar31;
        if ((bool)uVar9) {
          func_0x000107915a0c();
          func_0x0001078f1b98();
        }
      }
      func_0x000107914fec();
      pppppplVar31 = pppppplVar35;
    }
    pppppplVar10 = (long ******)ppppplStack_178[0x19];
    while (pppppplVar31 = pppppplVar10, pppppplVar10 = pppppplVar35,
          pppppplVar35 = (long ******)ppppplStack_108, pppppplVar31 != (long ******)ppppplStack_168)
    {
      func_0x000107914fec();
      pppppplVar35 = pppppplVar10;
      if (pppppplVar31[7] == (long *****)0x1) {
        (*ppppplStack_178)[(long)pppppplVar31[5][4] * 0x36 + 3] = (long ***)0xffffffffffffffff;
        pppppplVar35 = (long ******)(ppppplStack_178 + 0x19);
        func_0x0001078f1c0c();
        unaff_x30 = pppppplVar31;
      }
    }
  }
  while (uVar9 = pppppplVar35 == (long ******)ppppplStack_158, !(bool)uVar9) {
    pppppplVar34 = (long ******)pppppplVar35[7];
    pppppplVar31 = (long ******)pppppplVar35[8];
    if ((long)pppppplVar31 - (long)pppppplVar34 != 0) {
      ppppplStack_b0 = (long *****)(((long)pppppplVar31 - (long)pppppplVar34) / 0x28);
      ppppplStack_a8 = (long *****)0x0;
      ppppplStack_c0 = (long *****)pppppplVar34;
      ppppplStack_b8 = (long *****)pppppplVar34;
      func_0x000107917e38();
      for (; pppppplVar34 != pppppplVar31; pppppplVar34 = pppppplVar34 + 5) {
        unaff_x26 = (long ******)*ppppplStack_178;
        pppppplVar38 = (long ******)*pppppplVar34;
        ppppplVar29 = pppppplVar34[1];
        if (pppppplVar38 == (long ******)*ppppplStack_b8) {
          func_0x000107917e38();
        }
        pppppplVar13 = unaff_x26 + (long)pppppplVar38 * 0x36 + (long)ppppplVar29 * 0x17 + 5;
        unaff_x28 = unaff_x26[(long)pppppplVar38 * 0x36 + 3];
        while ((unaff_x25 = (long ******)ppppplStack_b8, pppppplVar31 = (long ******)*ppppplStack_b8
               , 0 < (long)unaff_x28 && pppppplVar38 != pppppplVar31 &&
               (unaff_x28 == unaff_x26[(long)pppppplVar31 * 0x36 + 3]))) {
          pppppplVar10 = unaff_x26 + (long)pppppplVar38 * 0x36 + (long)ppppplVar29 * 0x17 + 6;
          unaff_x30 = unaff_x26 + (long)pppppplVar31 * 0x36 + (long)ppppplStack_b8[1] * 0x17 + 6;
          FUN_1078eeda4();
          if ((int)pppppplVar10 == 0) break;
          func_0x000107917e38();
        }
        ppppplVar32 = unaff_x25[1];
        unaff_x26[(long)pppppplVar38 * 0x36 + (long)ppppplVar29 * 0x17 + 0x10] =
             (long *****)pppppplVar31;
        unaff_x26[(long)pppppplVar38 * 0x36 + (long)ppppplVar29 * 0x17 + 0xf] =
             (long *****)unaff_x25[4][4];
        if (unaff_x26[(long)pppppplVar38 * 0x36 + (long)ppppplVar29 * 0x17 + 9] ==
            unaff_x26[(long)pppppplVar31 * 0x36 + (long)ppppplVar32 * 0x17 + 9]) {
          pppppplVar10 = unaff_x26 + (long)pppppplVar38 * 0x36 + (long)ppppplVar29 * 0x17 + 0xb;
          unaff_x30 = unaff_x26 + (long)pppppplVar31 * 0x36 + (long)ppppplVar32 * 0x17 + 0xb;
          func_0x0001078eca54();
          if ((int)pppppplVar10 != 0) {
            unaff_x26[(long)pppppplVar38 * 0x36 + (long)ppppplVar29 * 0x17 + 0x11] = *unaff_x25;
          }
        }
        pppppplVar31 = (long ******)pppppplVar35[8];
      }
    }
    func_0x000107914fec();
    pppppplVar35 = pppppplVar10;
  }
  if ((uStack_188 & 1) != 0) {
    puVar18 = *(undefined8 **)(lStack_1b0 + 0x20);
    lVar36 = 0x1b0;
    puVar14 = *(undefined8 **)(lStack_1b0 + 0x18);
    for (puVar23 = puVar14; uVar9 = puVar23 == puVar18, !(bool)uVar9; puVar23 = puVar23 + 0x36) {
      param_1 = (long ******)puVar23[0xe];
      in_register_00005008 = (long ******)0x0;
      if ((double)param_1 == 0.0) {
        param_1 = (long ******)puVar23[0x25];
        in_register_00005008 = (long ******)0x0;
        if ((double)param_1 == 0.0) {
          lVar33 = puVar23[0x11];
          if (lVar33 == -1) {
            lVar33 = puVar23[0x10];
          }
          lVar30 = puVar23[0x28];
          if (lVar30 == -1) {
            lVar30 = puVar23[0x27];
          }
          if (((-1 < lVar33) && (-1 < lVar30)) && (lVar33 != lVar30)) {
            param_1 = (long ******)*puVar23;
            in_register_00005008 = (long ******)0x0;
            param_2 = (long ******)puVar23[1];
            in_register_00005028 = (long ******)0x0;
            uVar45 = *(undefined8 *)((long)puVar14 + lVar33 * lVar36);
            func_0x00010791509c();
            *(undefined8 *)(extraout_x11 + 0x70) = uVar45;
            func_0x000107915078();
            extraout_x11_00[0x25] = param_1;
            puVar14 = extraout_x8_04;
            puVar18 = extraout_x9_04;
            lVar36 = extraout_x10;
            puVar23 = extraout_x11_00;
          }
        }
      }
    }
  }
  ppppplVar29 = ppppplStack_100;
  func_0x0001078eefac();
  func_0x000107913564(uStack_10);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  pppppplVar31 = &ppppplStack_108;
  func_0x0001078f0200();
  func_0x000107914aac();
  uStack_1e0 = 0xb8;
  uStack_1d8 = 0x1b0;
  puStack_1b8 = &SUB_1078e7ee0;
  pppppplVar10 = pppppplVar31;
  pppplStack_210 = (long ****)unaff_x28;
  ppppplStack_208 = (long *****)pppppplVar38;
  ppppplStack_200 = (long *****)unaff_x26;
  ppppplStack_1f8 = (long *****)unaff_x25;
  ppppplStack_1f0 = (long *****)pppppplVar13;
  ppppplStack_1e8 = (long *****)pppppplVar34;
  ppppplStack_1d0 = (long *****)pppppplVar35;
  pppplStack_1c8 = (long ****)ppppplVar29;
  puStack_1c0 = &stack0x00000090;
  func_0x000107913ca4();
  alStack_320[0] = 0;
  alStack_320[1] = 0;
  plStack_328 = alStack_320;
  uStack_228 = extraout_x8_05;
  func_0x0001078e648c(pppppplVar10 + 0x11);
  ppppplStack_360 = (long *****)(pppppplVar31 + 8);
  pppplStack_368 = (long ****)pppppplVar31[0x21];
  ppppplStack_370 = (long *****)(pppppplVar31 + 0x1f);
  ppppplStack_380 = (long *****)(pppppplVar31 + 3);
  ppppplStack_378 = (long *****)(pppppplVar31 + 0x1c);
  pppplStack_2d0 = (long ****)0x0;
  uStack_2c8 = 0;
  puStack_2b8 = &uStack_329;
  lStack_2e0 = 0;
  ppppplStack_2e8 = (long *****)0x0;
  pppppplVar13 = (long ******)0x0;
  ppppplStack_358 = (long *****)pppppplVar31;
  ppppplStack_310 = ppppplStack_360;
  ppppplStack_308 = ppppplStack_360;
  ppppplStack_300 = ppppplStack_380;
  ppppplStack_2f8 = ppppplStack_378;
  ppppplStack_2f0 = (long *****)&ppppplStack_2e8;
  ppppplStack_2d8 = &pppplStack_2d0;
  pppplStack_2c0 = pppplStack_368;
  func_0x0001078f1e00();
  pppplStack_2d0 = (long ****)0x0;
  uStack_2c8 = 0;
  ppppplStack_2d8 = &pppplStack_2d0;
  for (ppppplVar29 = (long *****)0x0; ppppplVar32 = (long *****)*ppppplStack_300,
      ppppplVar29 < (long *****)(((long)ppppplStack_300[1] - (long)ppppplVar32) / 0x1b0);
      ppppplVar29 = (long *****)((long)ppppplVar29 + 1)) {
    for (lVar36 = 0; lVar36 != 0x170; lVar36 = lVar36 + 0xb8) {
      lVar33 = lVar36 + (long)ppppplVar29 * 0x1b0 + 0x28;
      ppppplStack_290 = *(long ******)((long)ppppplVar32 + lVar33 + 0x18);
      in_register_00005008 = *(long *******)((long)ppppplVar32 + lVar33 + 0x10);
      param_1 = *(long *******)((long)ppppplVar32 + lVar33 + 8);
      pppppplVar31 = (long ******)ppppplStack_2e8;
      pppppplVar10 = &ppppplStack_2e8;
      pppppplVar38 = &ppppplStack_2e8;
      ppppplStack_2a0 = (long *****)param_1;
      ppppplStack_298 = (long *****)in_register_00005008;
      if ((long ******)ppppplStack_2e8 != (long ******)0x0) {
        do {
          while( true ) {
            pppppplVar10 = pppppplVar31;
            pppppplVar13 = &ppppplStack_2a0;
            func_0x0001079166ec();
            if ((int)pppppplVar13 == 0) break;
            pppppplVar31 = (long ******)*pppppplVar10;
            pppppplVar38 = pppppplVar10;
            if ((long ******)*pppppplVar10 == (long ******)0x0) goto code_r0x0001078e8018;
          }
          pppppplVar13 = pppppplVar10 + 4;
          FUN_1078ee35c(pppppplVar13,&ppppplStack_2a0);
          if ((int)pppppplVar13 == 0) goto code_r0x0001078e806c;
          pppppplVar31 = (long ******)pppppplVar10[1];
        } while ((long ******)pppppplVar10[1] != (long ******)0x0);
        pppppplVar38 = pppppplVar10 + 1;
      }
code_r0x0001078e8018:
      func_0x000107917b94();
      pppppplVar13[5] = ppppplStack_298;
      pppppplVar13[4] = ppppplStack_2a0;
      pppppplVar13[6] = ppppplStack_290;
      pppppplVar13[7] = (long *****)0xffffffffffffffff;
      pppppplVar31 = pppppplVar13;
      param_1 = (long ******)ppppplStack_2a0;
      in_register_00005008 = (long ******)ppppplStack_298;
      func_0x0001079155ec();
      pppppplVar31[2] = (long *****)pppppplVar10;
      *pppppplVar38 = (long *****)pppppplVar31;
      if ((long ******)*ppppplStack_2f0 != (long ******)0x0) {
        ppppplStack_2f0 = (long *****)*ppppplStack_2f0;
      }
      func_0x00010002c5b0(ppppplStack_2e8,pppppplVar13);
      lStack_2e0 = lStack_2e0 + 1;
      pppppplVar10 = pppppplVar13;
code_r0x0001078e806c:
      pppppplVar13 = pppppplVar10 + 8;
      unaff_x30 = (long ******)&pppplStack_2a8;
      pppplStack_2a8 = (long ****)ppppplVar29;
      func_0x0001078ef1d0();
    }
  }
  pppplStack_2b0 = (long ****)0x1;
  pppppplVar31 = (long ******)ppppplStack_2f0;
  while (pppppplVar10 = (long ******)ppppplStack_2f0, pppppplVar31 != &ppppplStack_2e8) {
    pppppplVar13 = &ppppplStack_310;
    unaff_x30 = (long ******)&pppplStack_2b0;
    func_0x0001078f1cac(pppppplVar13,unaff_x30,pppppplVar31 + 4,pppppplVar31 + 7,0xffffffffffffffff)
    ;
    func_0x000107914fec();
    pppppplVar31 = pppppplVar13;
  }
  while (pppppplVar10 != &ppppplStack_2e8) {
    pppppplVar13 = (long ******)pppppplVar10[8];
    while (pppppplVar13 != pppppplVar10 + 9) {
      ppppplVar29 = pppppplVar13[4];
      ppppplVar32 = (long *****)*ppppplStack_300;
      if ((((ulong)ppppplVar32[(long)ppppplVar29 * 0x36 + 4] & 1) == 0) &&
         (*(int *)(ppppplVar32 + (long)ppppplVar29 * 0x36 + 5) != 3 ||
          *(int *)(ppppplVar32 + (long)ppppplVar29 * 0x36 + 0x1c) != 3)) {
        ppppplVar24 = pppppplVar10[4];
        lVar36 = 0x170;
        ppppplVar29 = ppppplVar32 + (long)ppppplVar29 * 0x36;
        do {
          if ((((long *****)ppppplVar29[6] == ppppplVar24) &&
              ((long *****)ppppplVar29[8] == pppppplVar10[6])) &&
             ((long *****)ppppplVar29[7] == pppppplVar10[5])) {
            ppppplVar29[0x17] = (long ****)pppppplVar10[7];
          }
          lVar36 = lVar36 + -0xb8;
          ppppplVar29 = ppppplVar29 + 0x17;
        } while (lVar36 != 0);
      }
      func_0x00010002c7d4();
    }
    func_0x000107914fec();
    pppppplVar10 = pppppplVar13;
  }
  lVar36 = 0x170;
  for (pppppplVar31 = (long ******)0x0; pppppplVar10 = (long ******)ppppplStack_2d8,
      pppppplVar31 < (long ******)(((long)ppppplStack_300[1] - (long)*ppppplStack_300) / 0x1b0);
      pppppplVar31 = (long ******)((long)pppppplVar31 + 1)) {
    puVar23 = (undefined8 *)((long)*ppppplStack_300 + lVar36);
    ppppplStack_2a0 = (long *****)pppppplVar31;
    if (0 < (long)puVar23[-0x2b]) {
      ppppplStack_2a0 = (long *****)-puVar23[-0x2b];
    }
    puVar14 = puVar23 + -0x17;
    ppppplVar29 = (long *****)*puVar14;
    if (ppppplVar29 == (long *****)0xffffffffffffffff) {
      ppppplVar29 = (long *****)0xffffffffffffffff;
    }
    else {
      func_0x000107915f7c();
      *pppppplVar13 = ppppplVar29;
      func_0x000107915f7c();
      pppppplVar13 = pppppplVar13 + 2;
      func_0x000107916d48();
      ppppplVar29 = (long *****)*puVar14;
    }
    ppppplVar32 = (long *****)*puVar23;
    if (ppppplVar32 == (long *****)0xffffffffffffffff) {
      ppppplVar24 = (long *****)0xffffffffffffffff;
    }
    else {
      ppppplVar24 = ppppplVar29;
      if (ppppplVar29 != ppppplVar32) {
        func_0x000107915f70();
        *pppppplVar13 = ppppplVar32;
        func_0x000107915f70();
        pppppplVar13 = pppppplVar13 + 2;
        func_0x000107916d48();
        ppppplVar29 = (long *****)*puVar14;
        ppppplVar24 = (long *****)*puVar23;
      }
    }
    if ((ppppplVar24 != (long *****)0xffffffffffffffff &&
        ppppplVar29 != (long *****)0xffffffffffffffff) && ppppplVar29 != ppppplVar24) {
      func_0x000107915f7c();
      pppppplVar13 = pppppplVar13 + 5;
      func_0x0001078f1f2c(pppppplVar13,puVar23);
      pppppplVar10 = pppppplVar13;
      func_0x000107915f70();
      pppppplVar10 = pppppplVar10 + 5;
      func_0x0001078f1f2c(pppppplVar10,puVar14);
      unaff_x30 = (long ******)ppppplStack_2a0;
      pppppplVar38 = pppppplVar13 + 1;
      func_0x0001078f1ad8(pppppplVar38,ppppplStack_2a0);
      if (pppppplVar38 == (long ******)0x0) {
        *pppppplVar13 = (long *****)((long)*pppppplVar13 + 1);
        func_0x000107916d48(pppppplVar13 + 1);
        unaff_x30 = (long ******)ppppplStack_2a0;
      }
      pppppplVar13 = pppppplVar10 + 1;
      func_0x0001078f1ad8();
      if (pppppplVar13 == (long ******)0x0) {
        func_0x00010791753c();
        pppppplVar13 = pppppplVar10 + 1;
        func_0x000107916d48();
      }
    }
    lVar36 = lVar36 + 0x1b0;
  }
  while (pppppplVar10 != (long ******)&pppplStack_2d0) {
    if (pppppplVar10[0xc] == (long *****)0x0) {
code_r0x0001078e832c:
      uVar12 = 1;
    }
    else {
      if (pppppplVar10[0xc] != (long *****)0x1) {
        pppplVar15 = (long ****)0x0;
        pppppplVar13 = (long ******)pppppplVar10[10];
        bVar8 = true;
        while (pppppplVar13 != pppppplVar10 + 0xb) {
          if ((pppppplVar13[5] != (long *****)0x1) ||
             ((pppplVar17 = pppppplVar13[6][4], !bVar8 &&
              (pppplVar17 = pppplVar15, pppplVar15 != pppppplVar13[6][4]))))
          goto code_r0x0001078e8334;
          pppplVar15 = pppplVar17;
          func_0x00010002c7d4();
          bVar8 = false;
        }
        goto code_r0x0001078e832c;
      }
      func_0x0001079173ac(pppppplVar10[10]);
      uVar12 = extraout_w8;
    }
    *(undefined4 *)(pppppplVar10 + 6) = uVar12;
code_r0x0001078e8334:
    func_0x000107914fec();
    pppppplVar10 = pppppplVar13;
  }
  uVar19 = 0;
  do {
    if (uStack_2c8 <= uVar19) break;
    uStack_344 = 0;
    uStack_350 = uVar19 + 1;
    pppppplVar31 = (long ******)ppppplStack_2d8;
    while (pppppplVar31 != (long ******)&pppplStack_2d0) {
      if (*(int *)(pppppplVar31 + 6) == 0) {
        pppplVar15 = (long ****)0x0;
        pppppplVar10 = pppppplVar31 + 0xb;
        uStack_330 = 1;
        pppppplVar38 = (long ******)pppppplVar31[10];
        while (pppppplVar38 != pppppplVar10) {
          ppppplVar29 = pppppplVar38[4];
          pppppplVar34 = (long ******)&pppplStack_2d0;
          pppppplVar35 = (long ******)&pppplStack_2d0;
          while (pppppplVar20 = (long ******)*pppppplVar34, pppppplVar20 != (long ******)0x0) {
            lVar36 = 8;
            if ((long)ppppplVar29 <= (long)pppppplVar20[4]) {
              lVar36 = 0;
            }
            pppppplVar34 = (long ******)((long)pppppplVar20 + lVar36);
            if ((long)ppppplVar29 <= (long)pppppplVar20[4]) {
              pppppplVar35 = pppppplVar20;
            }
          }
          if (((long ******)&pppplStack_2d0 == pppppplVar35) ||
             ((long)ppppplVar29 < (long)pppppplVar35[4])) goto code_r0x0001078e84f8;
          uVar9 = pppppplVar38[5] != (long *****)0x0;
          if (pppppplVar38[5] != (long *****)0x1) {
            if (*(int *)(pppppplVar35 + 6) != 2) goto code_r0x0001078e84f8;
            pppppplVar13 = &ppppplStack_2a0;
            unaff_x30 = pppppplVar31 + 7;
            func_0x0001078efe58();
            ppplStack_340 = (long ***)pppplVar15;
            ppppplStack_338 = (long *****)pppppplVar10;
            pppppplVar10 = pppppplVar35 + 8;
            pppppplVar34 = (long ******)pppppplVar35[7];
            while (pppppplVar34 != pppppplVar10) {
              pppplStack_2a8 = (long ****)pppppplVar34[4];
              pppppplVar13 = &ppppplStack_2a0;
              unaff_x30 = (long ******)&pppplStack_2a8;
              func_0x0001078f1ffc();
              func_0x000107915114();
              pppppplVar34 = pppppplVar13;
            }
            if (ppppplStack_290 != (long *****)0x1) {
code_r0x0001078e84f4:
              func_0x000107917bac();
              goto code_r0x0001078e84f8;
            }
            pppppplVar34 = (long ******)pppppplVar35[7];
            while (ppppplVar29 = ppppplStack_2f8, uVar9 = pppppplVar10 <= pppppplVar34,
                  pppppplVar34 != pppppplVar10) {
              if ((long)pppppplVar34[4] < 0) {
                unaff_x30 = (long ******)-(long)pppppplVar34[4];
                pppppplVar13 = (long ******)ppppplStack_2f8;
                FUN_1078f2064();
                if ((long ******)(ppppplVar29 + 1) != pppppplVar13) {
                  pppppplVar34 = pppppplVar13 + 6;
                  pppppplVar20 = (long ******)pppppplVar13[5];
                  while (pppppplVar20 != pppppplVar34) {
                    func_0x0001079166f4();
                    if ((int)pppppplVar13 == 0) goto code_r0x0001078e84f4;
                    func_0x00010791598c();
                    pppppplVar20 = pppppplVar13;
                  }
                }
              }
              else {
                func_0x0001079166f4();
                if (((ulong)pppppplVar13 & 1) == 0) goto code_r0x0001078e84f4;
              }
              func_0x000107915114();
              pppppplVar34 = pppppplVar13;
            }
            func_0x000107917bac();
            pppppplVar10 = (long ******)ppppplStack_338;
            pppplVar15 = (long ****)ppplStack_340;
          }
          func_0x000107915f64(*(undefined4 *)(pppppplVar35 + 6));
          if ((bool)uVar9) {
            if ((uStack_330 & 1) == 0) {
              if (pppplVar15 != pppppplVar38[6][4]) goto code_r0x0001078e84f8;
              uStack_330 = 0;
            }
            else {
              uStack_330 = 0;
              pppplVar15 = pppppplVar38[6][4];
            }
          }
          func_0x000107916674();
          pppppplVar38 = pppppplVar13;
        }
        uStack_344 = 1;
        *(undefined4 *)(pppppplVar31 + 6) = 1;
      }
code_r0x0001078e84f8:
      func_0x000107914fec();
      pppppplVar31 = pppppplVar13;
    }
    uVar19 = uStack_350;
  } while ((uStack_344 & 1) != 0);
  ppppplVar24 = ppppplStack_358;
  ppppplVar32 = (long *****)ppppplStack_300[1];
  for (ppppplVar29 = (long *****)*ppppplStack_300; ppppplVar29 != ppppplVar32;
      ppppplVar29 = ppppplVar29 + 0x36) {
    for (lVar36 = 0x28; lVar36 != 0x198; lVar36 = lVar36 + 0xb8) {
      lVar33 = *(long *)((long)ppppplVar29 + lVar36 + 0x90);
      pppppplVar13 = (long ******)&pppplStack_2d0;
      pppppplVar31 = (long ******)&pppplStack_2d0;
      while (pppppplVar10 = (long ******)*pppppplVar31, pppppplVar10 != (long ******)0x0) {
        lVar30 = 8;
        if (lVar33 <= (long)pppppplVar10[4]) {
          lVar30 = 0;
        }
        pppppplVar31 = (long ******)((long)pppppplVar10 + lVar30);
        if (lVar33 <= (long)pppppplVar10[4]) {
          pppppplVar13 = pppppplVar10;
        }
      }
      if (((long ******)&pppplStack_2d0 != pppppplVar13) && ((long)pppppplVar13[4] <= lVar33)) {
        *(bool *)((long)ppppplVar29 + lVar36 + 0x98) = *(int *)(pppppplVar13 + 6) == 1;
      }
    }
  }
  ppppplVar26 = (long *****)ppppplStack_358[4];
  ppppplVar32 = (long *****)ppppplStack_358[3];
  for (ppppplVar29 = ppppplVar32; ppppplVar29 != ppppplVar26; ppppplVar29 = ppppplVar29 + 0x36) {
    *(undefined4 *)(ppppplVar29 + 0x19) = 0;
    *(undefined2 *)((long)ppppplVar29 + 0xcc) = 0;
    *(undefined4 *)(ppppplVar29 + 0x30) = 0;
    *(undefined2 *)((long)ppppplVar29 + 0x184) = 0;
  }
  ppppplStack_298 = ppppplStack_360;
  ppppplStack_290 = ppppplStack_380;
  ppppplStack_288 = ppppplStack_378;
  pppplStack_280 = pppplStack_368;
  puStack_270 = &uStack_329;
  ppppplStack_268 = ppppplStack_360;
  ppppplStack_260 = ppppplStack_360;
  ppppplStack_258 = ppppplStack_380;
  pplStack_250 = &plStack_328;
  ppppplStack_248 = ppppplStack_378;
  ppppplStack_240 = ppppplStack_370;
  pppplStack_238 = pppplStack_368;
  pppplStack_2a8 = (long ****)(((long)ppppplStack_358[0x12] - (long)ppppplStack_358[0x11]) / 0x18);
  ppppplStack_2a0 = ppppplStack_360;
  pppplStack_2b0 = (long ****)CONCAT71(pppplStack_2b0._1_7_,1);
  puStack_230 = puStack_270;
  for (uVar19 = 0; uVar7 = ((long)ppppplVar26 - (long)ppppplVar32) / 0x1b0, uVar9 = uVar19 == uVar7,
      uVar19 < uVar7; uVar19 = uVar19 + 1) {
    if (((ulong)ppppplVar32[uVar19 * 0x36 + 4] & 1) == 0) {
      if (*(int *)(ppppplVar32 + uVar19 * 0x36 + 5) == 3) {
        if (*(int *)(ppppplVar32 + uVar19 * 0x36 + 0x1c) != 3) goto code_r0x0001078e86a8;
      }
      else if ((*(int *)(ppppplVar32 + uVar19 * 0x36 + 5) == 4) &&
              (*(int *)(ppppplVar32 + uVar19 * 0x36 + 0x1c) == 4)) {
        param_1 = (long ******)ppppplVar32[uVar19 * 0x36 + 0xe];
        in_register_00005008 = (long ******)0x0;
        param_2 = (long ******)ppppplVar32[uVar19 * 0x36 + 0x25];
        in_register_00005028 = (long ******)0x0;
        func_0x000107915914(&ppppplStack_2a0);
        func_0x0001078f20b0();
      }
      else {
code_r0x0001078e86a8:
        for (iVar37 = 0; iVar37 != 2; iVar37 = iVar37 + 1) {
          func_0x000107915914(&ppppplStack_2a0);
          func_0x0001078f20b0();
        }
      }
    }
    ppppplVar32 = (long *****)ppppplVar24[3];
    ppppplVar26 = (long *****)ppppplVar24[4];
  }
  func_0x0001078f4748(&ppppplStack_310);
  func_0x0001078f4774(alStack_320[0]);
  func_0x000107913564(uStack_228);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078f4748(&ppppplStack_310);
  lVar36 = alStack_320[0];
  func_0x0001078f4774();
  func_0x000107914aac();
  puVar11 = &SUB_1078e8734;
  func_0x0001079175f0();
  pppppplVar31 = (long ******)0x0;
  pppplStack_470 = (long ****)0x0;
  uStack_468 = 0;
  ppppplVar29 = (long *****)(lVar36 + 0x40);
  ppppplStack_478 = &pppplStack_470;
  ppuStack_390 = &puStack_1c0;
  puStack_388 = puVar11;
  for (pppplVar15 = *ppppplVar29; pppplVar15 != *(long *****)(lVar36 + 0x48);
      pppplVar15 = pppplVar15 + 4) {
    if ((((*(byte *)((long)pppplVar15 + 0x1a) & 1) == 0) &&
        ((*(byte *)((long)pppplVar15 + 0x19) & 1) == 0)) &&
       ((*(byte *)((long)pppplVar15 + 0x1b) & 1) == 0)) {
      ppppplStack_4c0 = (long *****)((ulong)ppppplStack_4c0 & 0xffffffffffff0000);
      uStack_4b8 = 0xffffffffffffffff;
      uStack_4b0 = 0xffffffffffffffff;
      uStack_4a8 = 0xffffffffffffffff;
      uStack_4a0 = 0xbff0000000000000;
      uStack_490 = 0;
      uStack_488 = 0;
      uStack_498 = 0;
      ppplVar4 = *pppplVar15;
      ppplVar5 = pppplVar15[1];
      func_0x000107915260();
      func_0x0001078f47f8();
      ppppplStack_4c8 = (long *****)param_1;
      if (ppplVar4 == ppplVar5) {
        pppplStack_4e0 = (long ****)((ulong)pppplStack_4e0 & 0xffffffffffffff00);
      }
      else {
        func_0x0001079187d8();
        ppppplStack_430 = (long *****)0x0;
        ppppplStack_420 = (long *****)0xffffffffffffffff;
        ppppplStack_428 = (long *****)pppppplVar31;
        func_0x000107917e84();
        func_0x000107917ed4();
      }
      func_0x0001078f4acc(&uStack_498);
    }
    pppppplVar31 = (long ******)((long)pppppplVar31 + 1);
  }
  pppppplVar31 = (long ******)0x0;
  plVar16 = (long *)(lVar36 + 0x88);
  for (plVar39 = (long *)*plVar16; plVar39 != *(long **)(lVar36 + 0x90); plVar39 = plVar39 + 3) {
    ppppplStack_4c0 = (long *****)((ulong)ppppplStack_4c0 & 0xffffffffffff0000);
    uStack_4b8 = 0xffffffffffffffff;
    uStack_4b0 = 0xffffffffffffffff;
    uStack_4a8 = 0xffffffffffffffff;
    uStack_4a0 = 0xbff0000000000000;
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_498 = 0;
    lVar33 = *plVar39;
    lVar30 = plVar39[1];
    func_0x000107915260();
    func_0x0001078f4c40();
    ppppplStack_4c8 = (long *****)param_1;
    if (lVar33 == lVar30) {
      pppplStack_4e0 = (long ****)((ulong)pppplStack_4e0 & 0xffffffffffffff00);
    }
    else {
      func_0x0001079187d8();
      ppppplStack_430 = (long *****)0x2;
      ppppplStack_420 = (long *****)0xffffffffffffffff;
      ppppplStack_428 = (long *****)pppppplVar31;
      func_0x000107917e84();
      func_0x000107917ed4();
    }
    func_0x0001078f4acc(&uStack_498);
    pppppplVar31 = (long ******)((long)pppppplVar31 + 1);
  }
  pppplStack_460 = (long ****)0x0;
  uStack_458 = 0;
  uStack_450 = 0;
  func_0x0001078f4c9c(&pppplStack_448,uStack_468);
  lVar33 = 0;
  pppppplVar31 = (long ******)ppppplStack_478;
  do {
    bVar8 = &pppplStack_470 <= pppppplVar31;
    if (pppppplVar31 == (long ******)&pppplStack_470) {
      pppplStack_4d8 = (long ****)&pppplStack_460;
      ppppplStack_4c8 = (long *****)&ppppplStack_478;
      uStack_4b8 = CONCAT71(uStack_4b8._1_7_,1);
      pppplStack_4e0 = (long ****)ppppplVar29;
      plStack_4d0 = plVar16;
      ppppplStack_4c0 = (long *****)(lVar36 + 0xf8);
      func_0x000107917008(pppplStack_440);
      ppppplVar32 = extraout_x8_06;
      if (bVar8) {
        uStack_410 = 0;
        uStack_408 = 0;
        uStack_400 = 0;
        func_0x000107916078();
        ppppplVar24 = extraout_x8_07;
        ppppplVar32 = (long *****)pppplStack_448;
        ppppplStack_430 = (long *****)param_1;
        ppppplStack_428 = (long *****)in_register_00005008;
        ppppplStack_420 = (long *****)param_2;
        ppppplStack_418 = (long *****)in_register_00005028;
        for (; (long *****)pppplStack_448 != ppppplVar24; pppplStack_448 = pppplStack_448 + 9) {
          func_0x000107917f50(&ppppplStack_430);
          func_0x0001078f503c(&uStack_410,ppppplVar32);
          ppppplVar32 = ppppplVar32 + 9;
          ppppplVar24 = (long *****)pppplStack_440;
        }
        func_0x0001078f4de4(&ppppplStack_430,&uStack_410,0,&pppplStack_4e0);
        func_0x0001078f57e8(&uStack_410);
      }
      else {
        while ((long *****)pppplStack_448 != ppppplVar32) {
          pppplStack_448 = pppplStack_448 + 9;
          for (ppppplVar24 = (long *****)pppplStack_448; ppppplVar24 != ppppplVar32;
              ppppplVar24 = ppppplVar24 + 9) {
            func_0x000107915378(&pppplStack_4e0);
            func_0x0001078f4ea8();
            ppppplVar32 = (long *****)pppplStack_440;
          }
        }
      }
      pppppplVar31 = (long ******)&pppplStack_448;
      func_0x0001078f4d7c();
      pppppplVar13 = (long ******)ppppplStack_478;
      while (pppppplVar10 = (long ******)ppppplStack_478,
            pppppplVar13 != (long ******)&pppplStack_470) {
        ppppplVar32 = (long *****)-(double)pppppplVar13[10];
        if (*(char *)(pppppplVar13 + 0xb) == '\0') {
          ppppplVar32 = pppppplVar13[10];
        }
        func_0x000107914cfc();
        if ((int)pppppplVar31 == 0) {
          pppppplVar10 = pppppplVar13 + 0xc;
          if ((long)*pppppplVar10 < 0) {
            FUN_1078ed088(ppppplVar32,0);
            if ((int)pppppplVar31 != 0) {
              *(undefined1 *)(pppppplVar13 + 0xb) = 1;
            }
          }
          else {
            pppppplVar38 = &ppppplStack_478;
            func_0x0001078f49f8(pppppplVar38,pppppplVar10);
            pppppplVar34 = pppppplVar38;
            func_0x000107916430(*(undefined1 *)(pppppplVar13 + 0xb),pppppplVar13[10]);
            FUN_1078ed088(0);
            pppppplVar31 = pppppplVar34;
            FUN_1078ed088(0,pppppplVar38[3]);
            if (((int)pppppplVar34 != 0) && ((int)pppppplVar31 != 0)) {
              *(undefined1 *)((long)pppppplVar13 + 0x59) = 1;
            }
            if ((((ulong)pppppplVar34 & 1) != 0) || (*(char *)((long)pppppplVar13 + 0x59) == '\x01')
               ) {
              *pppppplVar10 = (long *****)0xffffffffffffffff;
            }
          }
        }
        else {
          *(undefined1 *)((long)pppppplVar13 + 0x59) = 1;
        }
        func_0x000107914fec();
        pppppplVar13 = pppppplVar31;
      }
      while (pppppplVar10 != (long ******)&pppplStack_470) {
        if (-1 < (long)pppppplVar10[0xc]) {
          pppppplVar31 = &ppppplStack_478;
          func_0x0001078f49f8();
          func_0x000107917e48();
        }
        func_0x000107914fec();
        pppppplVar10 = pppppplVar31;
      }
      pppppplVar31 = (long ******)&pppplStack_460;
      func_0x0001078e8d68();
      ppppplStack_430 = (long *****)0x0;
      ppppplStack_428 = (long *****)0x0;
      ppppplStack_420 = (long *****)0x0;
      pppppplVar13 = (long ******)ppppplStack_478;
      while (pppppplVar13 != (long ******)&pppplStack_470) {
        if (((*(byte *)((long)pppppplVar13 + 0x59) & 1) == 0) &&
           (pppppplVar13[0xc] == (long *****)0xffffffffffffffff)) {
          dVar42 = 0.0;
          ppppplStack_4c8 = (long *****)0x0;
          plStack_4d0 = (long *)0x0;
          uStack_4b8 = 0;
          ppppplStack_4c0 = (long *****)0x0;
          pppplStack_4d8 = (long ****)0x0;
          pppplStack_4e0 = (long ****)0x0;
          func_0x0001078f5a58(&pppplStack_4e0,*ppppplVar29,0,*plVar16,pppppplVar13[4],
                              pppppplVar13[5],*(undefined1 *)(pppppplVar13 + 0xb),0);
          for (ppppplVar32 = pppppplVar13[0x10]; ppppplVar32 != pppppplVar13[0x11];
              ppppplVar32 = ppppplVar32 + 3) {
            pppppplVar31 = &ppppplStack_478;
            func_0x0001078f5cdc(pppppplVar31,ppppplVar32);
            if (((long ******)&pppplStack_470 != pppppplVar31) &&
               ((*(byte *)((long)pppppplVar31 + 0x59) & 1) == 0)) {
              func_0x0001078f5a58(&pppplStack_4e0,*ppppplVar29,0,*plVar16,*ppppplVar32,
                                  ppppplVar32[1],*(undefined1 *)(pppppplVar31 + 0xb),1);
            }
          }
          ppppplVar32 = &pppplStack_4e0;
          func_0x0001078f5d38();
          if ((long *****)0x3 < ppppplVar32) {
            ppppplVar32 = (long *****)pppplStack_4e0;
            func_0x0001078f4c40(pppplStack_4e0,pppplStack_4d8);
            ppppplVar24 = ppppplStack_4c0;
            dVar46 = 0.0;
            dVar43 = dVar42;
            for (pppppplVar31 = (long ******)ppppplStack_4c8;
                pppppplVar31 != (long ******)ppppplVar24; pppppplVar31 = pppppplVar31 + 3) {
              ppppplVar32 = *pppppplVar31;
              func_0x0001078f4c40(ppppplVar32,pppppplVar31[1]);
              dVar46 = dVar46 + dVar43;
            }
            func_0x000107914cfc();
            if ((((ulong)ppppplVar32 & 1) == 0) && (0.0 < dVar42 + dVar46)) {
              func_0x0001078f5d68(unaff_x30,&pppplStack_4e0);
            }
          }
          pppppplVar31 = (long ******)&pppplStack_4e0;
          func_0x0001078e6404();
        }
        func_0x000107914fec();
        pppppplVar13 = pppppplVar31;
      }
      func_0x0001078e8d68(&ppppplStack_430);
      func_0x0001078f605c(pppplStack_470);
      return;
    }
    ppppplVar32 = pppppplVar31[10];
    func_0x000107916430(*(undefined1 *)(pppppplVar31 + 0xb));
    pppplVar15 = pppplStack_448;
    param_1 = (long ******)ABS((double)ppppplVar32);
    in_register_00005008 = (long ******)0x0;
    puVar23 = (undefined8 *)((long)pppplStack_448 + lVar33);
    ppppplVar24 = pppppplVar31[5];
    ppppplVar32 = pppppplVar31[4];
    puVar23[2] = pppppplVar31[6];
    puVar23[1] = ppppplVar24;
    *puVar23 = ppppplVar32;
    puVar23[3] = param_2;
    puVar23[4] = param_1;
    ppppplVar24 = pppppplVar31[4];
    ppppplVar32 = ppppplVar29;
    if (ppppplVar24 == (long *****)0x0) {
code_r0x0001078e8910:
      pppplVar17 = *ppppplVar32 + (long)pppppplVar31[5] * 4;
code_r0x0001078e892c:
      FUN_1078f4d90(*pppplVar17,pppplVar17[1],(long)pppplStack_448 + lVar33 + 0x28);
    }
    else {
      if (ppppplVar24 == (long *****)0x2) {
        pppplVar17 = (long ****)(*plVar16 + (long)pppppplVar31[5] * 0x18);
        goto code_r0x0001078e892c;
      }
      if (ppppplVar24 == (long *****)0x1) {
        ppppplVar32 = &pppplStack_460;
        goto code_r0x0001078e8910;
      }
    }
    pppppplVar31 = (long ******)((long)pppplVar15 + lVar33 + 0x28);
    func_0x0001078e9c64();
    func_0x000107914fec();
    lVar33 = lVar33 + 0x48;
  } while( true );
}



/* Entry: 1078e96d4; end: 1078e9777;  */

void FUN_1078e96d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  func_0x000107917aac();
  func_0x000107914d64();
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
    uVar4 = *unaff_x20;
    puVar3[1] = unaff_x20[1];
    *puVar3 = uVar4;
    puVar3 = puVar3 + 2;
  }
  else {
    func_0x000107918350((long)puVar3 - *unaff_x19 >> 4);
    func_0x0001078e9778();
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    if (param_1 != 0) {
      func_0x0001078e97fc();
    }
    puVar3 = (undefined8 *)(param_1 + (lVar2 - lVar1));
    uVar4 = *unaff_x20;
    puVar3[1] = unaff_x20[1];
    *puVar3 = uVar4;
    func_0x000107915724();
    func_0x0001078e97b8();
    puVar3 = (undefined8 *)unaff_x19[1];
    func_0x000107917d8c();
  }
  unaff_x19[1] = (long)puVar3;
  return;
}



/* Entry: 1078e9a54; end: 1078e9abb;  */

long FUN_1078e9a54(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = *(long *)(lVar2 + -0x18);
  if ((*(long *)(lVar2 + -0x20) != lVar1) &&
     (*(long *)(param_1 + 0xb8) == *(long *)(*(long *)(param_1 + 8) + -200))) {
    uVar3 = *param_2;
    *(undefined8 *)(lVar1 + -8) = param_2[1];
    *(undefined8 *)(lVar1 + -0x10) = uVar3;
  }
  *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  FUN_1078e96d4((long *)(lVar2 + -0x20));
  return *(long *)(lVar2 + -0x18) - *(long *)(lVar2 + -0x20) >> 4;
}



/* Entry: 1078e9de4; end: 1078ea1b3;  */

/* WARNING: Type propagation algorithm not settling */

double FUN_1078e9de4(double param_1,double param_2,double param_3,double param_4,double param_5,
                    undefined8 *param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  ulong uVar11;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  uint uVar12;
  ulong uVar13;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  uint uVar14;
  long extraout_x10;
  double *extraout_x10_00;
  ulong uVar15;
  ulong extraout_x10_01;
  long lVar16;
  long extraout_x11;
  long extraout_x11_00;
  double *extraout_x11_01;
  double *pdVar17;
  double *extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 in_b2;
  undefined1 uVar22;
  undefined1 in_register_00005041;
  undefined1 uVar23;
  undefined1 in_register_00005042;
  undefined1 uVar24;
  undefined1 in_register_00005043;
  undefined1 uVar25;
  undefined1 in_register_00005044;
  undefined1 uVar26;
  undefined1 in_register_00005045;
  undefined1 uVar27;
  undefined1 in_register_00005046;
  undefined1 uVar28;
  undefined1 in_register_00005047;
  undefined1 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  long lVar33;
  double dVar34;
  double dVar35;
  long lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double adStack_1a8 [4];
  double dStack_188;
  double dStack_120;
  double dStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double adStack_100 [8];
  double adStack_c0 [8];
  double adStack_80 [4];
  
  dVar39 = (double)CONCAT17(in_register_00005047,
                            CONCAT16(in_register_00005046,
                                     CONCAT15(in_register_00005045,
                                              CONCAT14(in_register_00005044,
                                                       CONCAT13(in_register_00005043,
                                                                CONCAT12(in_register_00005042,
                                                                         CONCAT11(
                                                  in_register_00005041,in_b2)))))));
  dVar30 = (double)CONCAT17(in_register_00005047,
                            CONCAT16(in_register_00005046,
                                     CONCAT15(in_register_00005045,
                                              CONCAT14(in_register_00005044,
                                                       CONCAT13(in_register_00005043,
                                                                CONCAT12(in_register_00005042,
                                                                         CONCAT11(
                                                  in_register_00005041,in_b2))))))) - param_4;
  dVar35 = param_3 - param_5;
  dVar19 = param_1 - param_4;
  dVar21 = param_2 - param_5;
  adStack_1a8[0] = dVar21;
  func_0x0001078ea1b4(dVar19,dVar35,adStack_1a8 + 1);
  *param_6 = adStack_1a8[1];
  adStack_80[0] = dVar19 * dVar35;
  dVar31 = dVar30 * adStack_1a8[0];
  uVar22 = SUB81(dVar31,0);
  uVar23 = (undefined1)((ulong)dVar31 >> 8);
  uVar24 = (undefined1)((ulong)dVar31 >> 0x10);
  uVar25 = (undefined1)((ulong)dVar31 >> 0x18);
  uVar26 = (undefined1)((ulong)dVar31 >> 0x20);
  uVar27 = (undefined1)((ulong)dVar31 >> 0x28);
  uVar28 = (undefined1)((ulong)dVar31 >> 0x30);
  uVar29 = (undefined1)((ulong)dVar31 >> 0x38);
  dVar20 = adStack_80[0] - dVar31;
  dVar38 = ABS(adStack_80[0]) + ABS(dVar31);
  if (((ABS(adStack_80[0] - dVar31) < dVar38 * 3.3306690738754716e-16) &&
      ((adStack_80[0] <= 0.0 || (0.0 < dVar31)))) && ((0.0 <= adStack_80[0] || (dVar31 < 0.0)))) {
    dVar20 = dVar19 * dVar35 - adStack_80[0];
    dVar31 = dVar21 * dVar30 - dVar31;
    func_0x0001078ea1f0();
    adStack_80[1] = dVar20;
    adStack_80[2] =
         (double)CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(uVar25,
                                                  CONCAT12(uVar24,CONCAT11(uVar23,uVar22)))))));
    adStack_80[3] = dVar31;
    dVar20 = 0.0;
    for (lVar10 = 0; lVar10 != 0x20; lVar10 = lVar10 + 8) {
      dVar20 = dVar20 + *(double *)((long)adStack_80 + lVar10);
    }
    dVar31 = ABS(dVar20);
    if (dVar31 < dVar38 * 2.2204460492503146e-16) {
      dVar32 = dVar39 - dVar30;
      dVar39 = (dVar32 - param_4) + (dVar39 - (dVar30 + dVar32));
      dVar32 = ((param_3 - dVar35) - param_5) + (param_3 - (dVar35 + (param_3 - dVar35)));
      dVar40 = ((param_1 - dVar19) - param_4) + (param_1 - (dVar19 + (param_1 - dVar19)));
      dVar41 = ((param_2 - adStack_1a8[0]) - param_5) +
               (param_2 - (adStack_1a8[0] + (param_2 - adStack_1a8[0])));
      lVar10 = -(ulong)(dVar40 == 0.0);
      lVar16 = -(ulong)(dVar41 == 0.0);
      lVar33 = -(ulong)(dVar39 == 0.0);
      lVar36 = -(ulong)(dVar32 == 0.0);
      auVar2[1] = ~(byte)((ulong)lVar10 >> 8);
      auVar2[0] = ~(byte)lVar10;
      auVar2[2] = ~(byte)((ulong)lVar10 >> 0x10);
      auVar2[3] = ~(byte)((ulong)lVar10 >> 0x18);
      auVar2[4] = ~(byte)lVar16;
      auVar2[5] = ~(byte)((ulong)lVar16 >> 8);
      auVar2[6] = ~(byte)((ulong)lVar16 >> 0x10);
      auVar2[7] = ~(byte)((ulong)lVar16 >> 0x18);
      auVar2[8] = ~(byte)lVar33;
      auVar2[9] = ~(byte)((ulong)lVar33 >> 8);
      auVar2[10] = ~(byte)((ulong)lVar33 >> 0x10);
      auVar2[0xb] = ~(byte)((ulong)lVar33 >> 0x18);
      auVar2[0xc] = ~(byte)lVar36;
      auVar2[0xd] = ~(byte)((ulong)lVar36 >> 8);
      auVar2[0xe] = ~(byte)((ulong)lVar36 >> 0x10);
      auVar2[0xf] = ~(byte)((ulong)lVar36 >> 0x18);
      uVar14 = NEON_umaxv(auVar2,4);
      if ((uVar14 & 1) != 0) {
        dVar37 = dVar35 * dVar40;
        dVar34 = dVar30 * dVar41;
        uVar22 = SUB81(dVar34,0);
        uVar23 = (undefined1)((ulong)dVar34 >> 8);
        uVar24 = (undefined1)((ulong)dVar34 >> 0x10);
        uVar25 = (undefined1)((ulong)dVar34 >> 0x18);
        uVar26 = (undefined1)((ulong)dVar34 >> 0x20);
        uVar27 = (undefined1)((ulong)dVar34 >> 0x28);
        uVar28 = (undefined1)((ulong)dVar34 >> 0x30);
        uVar29 = (undefined1)((ulong)dVar34 >> 0x38);
        dVar20 = ((dVar37 + dVar19 * dVar32) - (dVar34 + dVar39 * dVar21)) + dVar20;
        if (ABS(dVar20) < dVar31 * 3.3306690738754706e-16 + dVar38 * 1.1093356479670487e-31) {
          dVar31 = dVar40 * dVar35 - dVar37;
          dVar34 = dVar41 * dVar30 - dVar34;
          func_0x0001078ea1f0();
          adStack_1a8[3] =
               (double)CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(
                                                  uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22)))))
                                               ));
          pdVar8 = adStack_80;
          adStack_1a8[1] = dVar37;
          adStack_1a8[2] = dVar31;
          dStack_188 = dVar34;
          func_0x0001078ea258(pdVar8,adStack_1a8 + 1,adStack_c0);
          dVar30 = dVar19 * dVar32;
          dVar35 = dVar19 * dVar32 - dVar30;
          dVar31 = dVar21 * dVar39;
          uVar22 = SUB81(dVar31,0);
          uVar23 = (undefined1)((ulong)dVar31 >> 8);
          uVar24 = (undefined1)((ulong)dVar31 >> 0x10);
          uVar25 = (undefined1)((ulong)dVar31 >> 0x18);
          uVar26 = (undefined1)((ulong)dVar31 >> 0x20);
          uVar27 = (undefined1)((ulong)dVar31 >> 0x28);
          uVar28 = (undefined1)((ulong)dVar31 >> 0x30);
          uVar29 = (undefined1)((ulong)dVar31 >> 0x38);
          dVar31 = dVar21 * dVar39 - dVar31;
          func_0x0001078ea1f0();
          adStack_1a8[3] =
               (double)CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(
                                                  uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22)))))
                                               ));
          dVar19 = dVar40 * dVar32;
          dVar21 = dVar40 * dVar32 - dVar19;
          dVar20 = dVar39 * dVar41;
          uVar22 = SUB81(dVar20,0);
          uVar23 = (undefined1)((ulong)dVar20 >> 8);
          uVar24 = (undefined1)((ulong)dVar20 >> 0x10);
          uVar25 = (undefined1)((ulong)dVar20 >> 0x18);
          uVar26 = (undefined1)((ulong)dVar20 >> 0x20);
          uVar27 = (undefined1)((ulong)dVar20 >> 0x28);
          uVar28 = (undefined1)((ulong)dVar20 >> 0x30);
          uVar29 = (undefined1)((ulong)dVar20 >> 0x38);
          dVar20 = dVar41 * dVar39 - dVar20;
          adStack_1a8[1] = dVar30;
          adStack_1a8[2] = dVar35;
          dStack_188 = dVar31;
          func_0x0001078ea1f0();
          uStack_110 = CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(
                                                  uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22)))))
                                               ));
          pdVar9 = adStack_1a8 + 1;
          dStack_120 = dVar19;
          dStack_118 = dVar21;
          dStack_108 = dVar20;
          func_0x0001078ea258(pdVar9,&dStack_120,adStack_100);
          dVar31 = ABS(adStack_100[0]);
          dVar39 = ABS(adStack_c0[0]);
          bVar6 = dVar31 <= dVar39;
          uVar13 = (ulong)bVar6;
          uVar14 = (uint)(dVar39 < dVar31);
          if (dVar39 < dVar31) {
            adStack_100[0] = adStack_c0[0];
          }
          iVar18 = (int)pdVar8;
          bVar3 = false;
          bVar4 = true;
          bVar5 = false;
          if ((int)(uint)(dVar39 < dVar31) < iVar18) {
            uVar7 = (uint)pdVar9;
            uVar12 = (uint)bVar6;
            bVar5 = SBORROW4(uVar7,uVar12);
            bVar3 = (int)(uVar7 - uVar12) < 0;
            bVar4 = uVar7 == uVar12;
          }
          if (bVar4 || bVar3 != bVar5) {
            uVar11 = 0;
            dVar20 = adStack_100[0];
          }
          else {
            lVar10 = 8;
            if (dVar39 < dVar31) {
              lVar10 = 0;
            }
            dVar19 = *(double *)((long)adStack_100 + lVar10);
            dVar20 = ABS(dVar19);
            lVar10 = 0;
            if (dVar39 < dVar31) {
              lVar10 = 8;
            }
            dVar21 = *(double *)((long)adStack_c0 + lVar10);
            dVar30 = ABS(dVar21);
            uVar7 = 2;
            if (dVar39 < dVar31) {
              uVar12 = uVar7;
              uVar7 = 1;
            }
            else {
              uVar12 = 1;
            }
            uVar22 = SUB81(dVar21,0);
            uVar23 = (undefined1)((ulong)dVar21 >> 8);
            uVar24 = (undefined1)((ulong)dVar21 >> 0x10);
            uVar25 = (undefined1)((ulong)dVar21 >> 0x18);
            uVar26 = (undefined1)((ulong)dVar21 >> 0x20);
            uVar27 = (undefined1)((ulong)dVar21 >> 0x28);
            uVar28 = (undefined1)((ulong)dVar21 >> 0x30);
            uVar29 = (undefined1)((ulong)dVar21 >> 0x38);
            if (dVar20 <= dVar30) {
              uVar22 = SUB81(dVar19,0);
              uVar23 = (undefined1)((ulong)dVar19 >> 8);
              uVar24 = (undefined1)((ulong)dVar19 >> 0x10);
              uVar25 = (undefined1)((ulong)dVar19 >> 0x18);
              uVar26 = (undefined1)((ulong)dVar19 >> 0x20);
              uVar27 = (undefined1)((ulong)dVar19 >> 0x28);
              uVar28 = (undefined1)((ulong)dVar19 >> 0x30);
              uVar29 = (undefined1)((ulong)dVar19 >> 0x38);
            }
            uVar1 = (uint)bVar6;
            if (dVar20 <= dVar30) {
              uVar1 = uVar7;
            }
            uVar13 = (ulong)uVar1;
            if (dVar20 <= dVar30) {
              uVar12 = uVar14;
            }
            uVar15 = (ulong)uVar12;
            dVar20 = adStack_100[0] +
                     (double)CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,
                                                  CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,
                                                  uVar22)))))));
            adStack_100[0] =
                 adStack_100[0] -
                 (dVar20 - (double)CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,
                                                  CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,
                                                  uVar22))))))));
            if (adStack_100[0] != 0.0) {
              adStack_1a8[1] = adStack_100[0];
            }
            uVar11 = (ulong)(adStack_100[0] != 0.0);
            pdVar8 = adStack_100;
            pdVar17 = adStack_c0;
            while( true ) {
              uVar14 = (uint)uVar15;
              bVar6 = false;
              bVar3 = false;
              if ((int)uVar14 < iVar18) {
                bVar3 = SBORROW4((int)uVar13,(int)pdVar9);
                bVar6 = (int)uVar13 - (int)pdVar9 < 0;
              }
              if (bVar6 == bVar3) break;
              dVar20 = pdVar8[uVar13 & 0xffffffff];
              dVar39 = pdVar17[uVar15 & 0xffffffff];
              bVar6 = ABS(dVar20) == ABS(dVar39);
              uVar22 = SUB81(dVar20,0);
              uVar23 = (undefined1)((ulong)dVar20 >> 8);
              uVar24 = (undefined1)((ulong)dVar20 >> 0x10);
              uVar25 = (undefined1)((ulong)dVar20 >> 0x18);
              uVar26 = (undefined1)((ulong)dVar20 >> 0x20);
              uVar27 = (undefined1)((ulong)dVar20 >> 0x28);
              uVar28 = (undefined1)((ulong)dVar20 >> 0x30);
              uVar29 = (undefined1)((ulong)dVar20 >> 0x38);
              if (ABS(dVar39) < ABS(dVar20)) {
                uVar22 = SUB81(dVar39,0);
                uVar23 = (undefined1)((ulong)dVar39 >> 8);
                uVar24 = (undefined1)((ulong)dVar39 >> 0x10);
                uVar25 = (undefined1)((ulong)dVar39 >> 0x18);
                uVar26 = (undefined1)((ulong)dVar39 >> 0x20);
                uVar27 = (undefined1)((ulong)dVar39 >> 0x28);
                uVar28 = (undefined1)((ulong)dVar39 >> 0x30);
                uVar29 = (undefined1)((ulong)dVar39 >> 0x38);
              }
              func_0x000107916bd8();
              uVar11 = extraout_x8_01;
              uVar13 = extraout_x9_01;
              uVar15 = extraout_x10_01;
              pdVar8 = extraout_x11_01;
              pdVar17 = extraout_x12;
              if (!bVar6) {
                *(ulong *)(extraout_x13_00 + (extraout_x8_01 & 0xffffffff) * 8) =
                     CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(uVar25
                                                  ,CONCAT12(uVar24,CONCAT11(uVar23,uVar22)))))));
                uVar11 = (ulong)((int)extraout_x8_01 + 1);
              }
            }
          }
          lVar16 = (long)(int)uVar14;
          lVar10 = (long)iVar18;
          while (bVar6 = lVar16 == lVar10, lVar16 < lVar10) {
            dVar39 = adStack_c0[lVar16];
            uVar22 = SUB81(dVar39,0);
            uVar23 = (undefined1)((ulong)dVar39 >> 8);
            uVar24 = (undefined1)((ulong)dVar39 >> 0x10);
            uVar25 = (undefined1)((ulong)dVar39 >> 0x18);
            uVar26 = (undefined1)((ulong)dVar39 >> 0x20);
            uVar27 = (undefined1)((ulong)dVar39 >> 0x28);
            uVar28 = (undefined1)((ulong)dVar39 >> 0x30);
            uVar29 = (undefined1)((ulong)dVar39 >> 0x38);
            func_0x0001079159b0();
            uVar11 = extraout_x8;
            uVar13 = extraout_x9;
            lVar10 = extraout_x10;
            lVar16 = extraout_x11;
            if (!bVar6) {
              adStack_1a8[(long)(int)extraout_x8 + 1] =
                   (double)CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(
                                                  uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22)))))
                                                  ));
              uVar11 = (ulong)((int)extraout_x8 + 1);
            }
          }
          lVar16 = (long)(int)uVar13;
          lVar10 = (long)(int)pdVar9;
          pdVar9 = adStack_100;
          while (bVar6 = lVar16 == lVar10, lVar16 < lVar10) {
            dVar39 = pdVar9[lVar16];
            uVar22 = SUB81(dVar39,0);
            uVar23 = (undefined1)((ulong)dVar39 >> 8);
            uVar24 = (undefined1)((ulong)dVar39 >> 0x10);
            uVar25 = (undefined1)((ulong)dVar39 >> 0x18);
            uVar26 = (undefined1)((ulong)dVar39 >> 0x20);
            uVar27 = (undefined1)((ulong)dVar39 >> 0x28);
            uVar28 = (undefined1)((ulong)dVar39 >> 0x30);
            uVar29 = (undefined1)((ulong)dVar39 >> 0x38);
            func_0x0001079159b0();
            uVar11 = extraout_x8_00;
            lVar10 = extraout_x9_00;
            pdVar9 = extraout_x10_00;
            lVar16 = extraout_x13;
            if (!bVar6) {
              *(ulong *)(extraout_x11_00 + (long)(int)extraout_x8_00 * 8) =
                   CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,CONCAT13(uVar25,
                                                  CONCAT12(uVar24,CONCAT11(uVar23,uVar22)))))));
              uVar11 = (ulong)((int)extraout_x8_00 + 1);
            }
          }
          if (dVar20 == 0.0 && (int)uVar11 != 0) {
            dVar20 = adStack_1a8[(int)uVar11];
          }
        }
      }
    }
  }
  return dVar20;
}



/* Entry: 1078eb418; end: 1078eb44b;  */

void FUN_1078eb418(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107913cd4();
  uVar1 = *param_1;
  func_0x0001078eb5a0(uVar1,*(undefined8 *)(unaff_x21 + 0x10));
  func_0x0001079182f8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1078eb724; end: 1078eb8f7;  */

void FUN_1078eb724(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153d8();
  func_0x0001079132d8();
  func_0x000107913724();
  func_0x0001078eb44c();
  func_0x000107913740();
  func_0x0001078eb44c();
  func_0x0001079155d4();
  uVar3 = 1;
  if ((bool)in_ZR) goto LAB_1078eb7f8;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_1078eb770:
    func_0x000107913f30();
    func_0x0001078eb8f8();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar1)) goto LAB_1078eb770;
    func_0x000107914c84();
    func_0x0001078eb95c();
    func_0x000107915ee0();
    func_0x0001078eb610();
    func_0x00010791354c();
    func_0x0001078eb954();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x000107914c84();
      func_0x0001078eb95c();
      func_0x000107913880();
      func_0x0001078eb954();
      func_0x000107913894();
      func_0x0001078eb954();
      goto LAB_1078eb7f8;
    }
  }
  func_0x000107913f20();
  func_0x0001078eb8f8();
  func_0x000107913f10();
  func_0x0001078eb8f8();
LAB_1078eb7f8:
  func_0x0001079155c8();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x000107915ee0();
      func_0x0001078eb95c();
      func_0x000107913a34();
      func_0x0001078eb954();
      func_0x000107913650();
      func_0x0001078eb954();
    }
    else {
      func_0x000107914708();
      func_0x0001078eb8f8();
      func_0x000107913ec0();
      func_0x0001078eb8f8();
    }
  }
  func_0x000107914d34(0);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913ea0(), (bool)in_CY)) {
    func_0x0001079139c4();
    func_0x0001078eb954();
  }
  else {
    func_0x0001079146f8();
    func_0x0001078eb8f8();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar2)) {
    func_0x00010791386c(&stack0x000000b0);
    func_0x0001078eb954();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078eb8f8();
  }
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return;
}



/* Entry: 1078ebd68; end: 1078ebd6f;  */

bool FUN_1078ebd68(int param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long *unaff_x19;
  int unaff_w20;
  undefined8 uStack_30;
  
  func_0x0001079166d8(-param_1);
  cVar1 = SCARRY4(unaff_w20,1);
  cVar2 = unaff_w20 + 1 < 0;
  bVar3 = unaff_w20 == -1;
  if (bVar3) {
    func_0x000107916574(uStack_30);
    bVar3 = !bVar3 && cVar2 == cVar1;
  }
  else if (unaff_w20 == 1) {
    bVar3 = uStack_30 < *unaff_x19;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 1078ec0bc; end: 1078ec28b;  */

void FUN_1078ec0bc(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double extraout_x8;
  double extraout_x9;
  double dVar6;
  long unaff_x19;
  int *unaff_x20;
  double dVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000028;
  double in_stack_00000030;
  undefined8 in_stack_00000038;
  double in_stack_00000050;
  double in_stack_00000058;
  double in_stack_00000060;
  double in_stack_00000068;
  double in_stack_00000070;
  double in_stack_00000078;
  undefined1 in_stack_00000080;
  
  func_0x0001079188e0();
  func_0x000107914d64();
  iVar4 = (int)&stack0x00000028;
  func_0x0001078ec2c4();
  in_stack_00000028 = 1;
  dVar5 = *param_3;
  dVar6 = param_3[2];
  func_0x000107916cb4(param_3[1] * param_3[1] + dVar5 * dVar5,
                      param_3[3] * param_3[3] + dVar6 * dVar6,param_3[6] / 1000000.0);
  func_0x00010791668c();
  if (iVar4 == 0) {
    dVar7 = (double)(long)param_3[7];
    uVar8 = 0;
    func_0x0001079180b8(dVar7,(double)(long)param_3[8],*(undefined8 *)*param_5,dVar6);
    dVar6 = param_3[5];
    dVar5 = extraout_x8;
  }
  else {
    dVar7 = (double)(long)param_3[4];
    uVar8 = 0;
    func_0x0001079180b8(dVar7,(double)(long)param_3[5],*(undefined8 *)*param_4,dVar5);
    dVar5 = param_3[8];
    dVar6 = extraout_x9;
  }
  in_stack_00000030 = dVar7;
  in_stack_00000038 = uVar8;
  if (dVar6 == 0.0 && dVar5 == 0.0) {
    func_0x0001078ecf54(&stack0x00000030,param_4);
    func_0x0001078ecf54(&stack0x00000030,param_5);
  }
  in_stack_00000080 = 1;
  in_stack_00000058 = param_3[5];
  in_stack_00000050 = param_3[4];
  in_stack_00000060 = param_3[6];
  in_stack_00000070 = param_3[8];
  in_stack_00000068 = param_3[7];
  in_stack_00000078 = param_3[9];
  iVar4 = *unaff_x20;
  iVar1 = unaff_x20[2];
  if (iVar4 != 0 || iVar1 != 0) {
    iVar2 = unaff_x20[1];
    iVar3 = unaff_x20[3];
    if (iVar2 == 0 && iVar3 == 0) {
      func_0x0001078ed108();
      goto LAB_1078ec26c;
    }
    if (iVar2 == 0 && iVar1 == 0) {
      func_0x0001078ed158();
      goto LAB_1078ec26c;
    }
    if (iVar4 == 0 && iVar3 == 0) {
      func_0x0001078ed178();
      goto LAB_1078ec26c;
    }
    if ((iVar1 == 0) || (iVar4 == 0)) {
      func_0x0001078ed198(unaff_x19 + 0x98);
      goto LAB_1078ec26c;
    }
    if (iVar3 == 0) {
      func_0x0001078ed1e8();
      goto LAB_1078ec26c;
    }
    if (iVar2 == 0) {
      func_0x0001078ed208();
      goto LAB_1078ec26c;
    }
  }
  func_0x0001078ed0b8(unaff_x19 + 0x98);
LAB_1078ec26c:
  func_0x000107917f58();
  return;
}



/* Entry: 1078ecb60; end: 1078ecce7;  */

void FUN_1078ecb60(ulong *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 auStack_30 [16];
  
  *param_1 = param_2;
  uVar3 = *param_3;
  param_1[1] = uVar3;
  if (uVar3 == 0) {
    func_0x0001078eced4(auStack_30);
    func_0x000107917930();
    func_0x0001079153bc();
LAB_1078eccd4:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1078eccd8);
    (*pcVar2)();
  }
  if (param_2 == 0) {
    uVar4 = 1;
  }
  else {
    lVar1 = 0;
    if (uVar3 != 0) {
      lVar1 = -0x8000000000000000 / (long)uVar3;
    }
    uVar4 = param_2;
    do {
      uVar9 = uVar4;
      uVar4 = 0x8000000000000000 - lVar1 * uVar3;
    } while (uVar9 == 0x8000000000000000);
    lVar1 = 0;
    if (uVar9 != 0) {
      lVar1 = -0x8000000000000000 / (long)uVar9;
    }
    uVar4 = uVar3;
    do {
      uVar5 = uVar4;
      uVar4 = 0x8000000000000000 - lVar1 * uVar9;
    } while (uVar5 == 0x8000000000000000);
    uVar4 = -uVar9;
    if (-1 < (long)uVar9) {
      uVar4 = uVar9;
    }
    uVar9 = -uVar5;
    if (-1 < (long)uVar5) {
      uVar9 = uVar5;
    }
    uVar5 = uVar4;
    if (uVar9 <= uVar4) {
      uVar5 = uVar9;
    }
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    uVar9 = uVar5;
    if ((uVar4 != 0) && (uVar9 = uVar4, uVar5 != 0)) {
      uVar9 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      uVar5 = uVar5 >> (uVar9 & 0x3f);
      uVar6 = (uint)uVar7;
      uVar8 = (uint)uVar9;
      if (uVar8 <= uVar6) {
        uVar6 = uVar8;
      }
      uVar4 = uVar4 >> (uVar7 & 0x3f);
      while (1 < (long)uVar5) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar4 / uVar5;
        }
        uVar9 = uVar4 - uVar9 * uVar5;
        uVar4 = uVar5 - uVar9;
        if (uVar9 == 0) goto LAB_1078ecc60;
        uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> (LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) & 0x3fU);
        uVar5 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar7 = (long)uVar4 >> (LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) & 0x3fU);
        uVar5 = uVar9;
        if ((long)uVar7 <= (long)uVar9) {
          uVar5 = uVar7;
        }
        uVar4 = uVar9;
        if ((long)uVar9 <= (long)uVar7) {
          uVar4 = uVar7;
        }
      }
      if (uVar5 == 1) {
        uVar4 = 1;
      }
LAB_1078ecc60:
      uVar9 = uVar4 << ((ulong)uVar6 & 0x3f);
    }
    uVar5 = 0;
    if (uVar9 != 0) {
      uVar5 = (long)param_2 / (long)uVar9;
    }
    uVar4 = 0;
    if (uVar9 != 0) {
      uVar4 = (long)uVar3 / (long)uVar9;
    }
    *param_1 = uVar5;
    param_1[1] = uVar4;
    if (uVar4 == 0x8000000000000000) {
      func_0x0001078ecef4(auStack_30);
      func_0x000107917930();
      func_0x0001079153bc();
      goto LAB_1078eccd4;
    }
    if (-1 < (long)uVar4) {
      return;
    }
    *param_1 = -uVar5;
    uVar4 = -uVar4;
  }
  param_1[1] = uVar4;
  return;
}



/* Entry: 1078ece04; end: 1078ece23;  */

long FUN_1078ece04(long param_1)

{
  func_0x0001053010fc(param_1 + 0x10);
  __ZNSt12domain_errorD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 1078ed088; end: 1078ed0b7;  */

uint FUN_1078ed088(double param_1,double param_2,uint param_3)

{
  if (param_1 < param_2) {
    func_0x0001078e65dc(param_2,param_1);
    return param_3 ^ 1;
  }
  return 0;
}



/* Entry: 1078ed470; end: 1078ed48f;  */

void FUN_1078ed470(long param_1)

{
  func_0x0001078eca54(param_1 + 0x40,param_1 + 0x78);
  return;
}



/* Entry: 1078edbc0; end: 1078edc37;  */

void FUN_1078edbc0(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  uint uVar2;
  ulong uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint unaff_w23;
  ulong unaff_x24;
  undefined8 uVar4;
  undefined8 *unaff_x27;
  
  func_0x000107917384();
  func_0x0001079133e4();
  while (func_0x000107915ebc(), !(bool)in_ZR) {
    uVar4 = *unaff_x27;
    func_0x000107914c6c();
    uVar3 = unaff_x24;
    func_0x0001078edf30();
    func_0x000107914c6c();
    uVar2 = unaff_w23;
    func_0x0001078edf30();
    if (((uVar3 & 1) != 0) || (uVar2 != 0)) {
      uVar1 = unaff_x19;
      if (((uint)uVar3 & uVar2) == 0) {
        uVar1 = unaff_x21;
      }
      in_ZR = (uint)uVar3 == 0;
      if ((bool)in_ZR) {
        uVar1 = unaff_x20;
      }
      func_0x0001078eda1c(uVar1,uVar4);
    }
    unaff_x27 = unaff_x27 + 1;
  }
  return;
}



/* Entry: 1078edfec; end: 1078ee01f;  */

void FUN_1078edfec(void)

{
  undefined1 in_ZR;
  
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x0001078eda98();
  }
  return;
}



/* Entry: 1078ee35c; end: 1078ee38f;  */

bool FUN_1078ee35c(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  bVar1 = SBORROW8(lVar3,lVar4);
  bVar2 = lVar3 - lVar4 < 0;
  if (lVar3 == lVar4) {
    lVar3 = param_1[1];
    lVar4 = param_2[1];
    bVar1 = SBORROW8(lVar3,lVar4);
    bVar2 = lVar3 - lVar4 < 0;
    if (lVar3 == lVar4) {
      bVar1 = SBORROW8(param_1[2],param_2[2]);
      bVar2 = param_1[2] - param_2[2] < 0;
    }
  }
  return bVar2 != bVar1;
}



/* Entry: 1078eeda4; end: 1078eee4f;  */

bool FUN_1078eeda4(long *param_1,long *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[3] == param_2[3])) && (param_1[2] == param_2[2])) &&
     (param_1[4] == param_2[4])) {
    return param_1[1] == param_2[1];
  }
  return false;
}



/* Entry: 1078ef1d8; end: 1078ef25b;  */

long FUN_1078ef1d8(long param_1)

{
  char in_NG;
  char in_OV;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107914110();
  lVar1 = extraout_x8;
  while (lVar1 != 0) {
    while (func_0x000107914c2c(), in_NG == in_OV) {
      in_OV = SBORROW8(extraout_x8_00,unaff_x21);
      in_NG = extraout_x8_00 - unaff_x21 < 0;
      if (unaff_x21 <= extraout_x8_00) goto LAB_1078ef250;
      if (*(long *)(unaff_x20 + 8) == 0) goto LAB_1078ef224;
    }
    func_0x000107915c94();
    lVar1 = extraout_x8_01;
  }
LAB_1078ef224:
  func_0x000107914cc4();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(long *)(param_1 + 0x20) = unaff_x21;
  *(undefined8 **)(param_1 + 0x28) = (undefined8 *)(param_1 + 0x30);
  func_0x000107913628();
  if (extraout_x8_02 != 0) {
    *unaff_x19 = extraout_x8_02;
  }
  func_0x000107913f98();
  func_0x0001004d7750();
  unaff_x20 = param_1;
LAB_1078ef250:
  return unaff_x20 + 0x28;
}



/* Entry: 1078efabc; end: 1078efbdf;  */

/* WARNING: Possible PIC construction at 0x0001078efccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078efd38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078efcd0) */
/* WARNING: Removing unreachable block (ram,0x0001078efd3c) */
/* WARNING: Removing unreachable block (ram,0x0001078efd48) */
/* WARNING: Removing unreachable block (ram,0x0001078efd5c) */
/* WARNING: Removing unreachable block (ram,0x0001078efd84) */
/* WARNING: Removing unreachable block (ram,0x0001078efd78) */
/* WARNING: Removing unreachable block (ram,0x0001078efd8c) */
/* WARNING: Removing unreachable block (ram,0x0001078efda8) */
/* WARNING: Removing unreachable block (ram,0x0001078efdac) */
/* WARNING: Removing unreachable block (ram,0x0001079133d0) */
/* WARNING: Removing unreachable block (ram,0x0001078efd64) */

void FUN_1078efabc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long lVar10;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *puVar11;
  long lVar12;
  long extraout_x10_01;
  long extraout_x10_02;
  undefined8 *puVar13;
  long extraout_x11;
  long lVar14;
  long extraout_x12;
  long extraout_x13;
  long unaff_x19;
  ulong unaff_x24;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar7 = param_2;
  func_0x000107913c90();
  uStack_38 = extraout_x8;
  func_0x00010791645c((long)puVar7 - param_1);
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078efb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedb8ce)[extraout_x8_00] * 4 + 0x1078efb08))(1);
    return;
  }
  puVar7 = (undefined8 *)(unaff_x19 + 0x18);
  func_0x000107915b84();
  func_0x0001078ef964();
  func_0x00010791766c();
  puVar13 = (undefined8 *)(unaff_x19 + 0x48);
  puVar8 = (undefined8 *)(unaff_x19 + 0x30);
  while( true ) {
    cVar2 = SBORROW8((long)puVar13,(long)param_2);
    cVar3 = (long)puVar13 - (long)param_2 < 0;
    uVar4 = puVar13 == param_2;
    if ((bool)uVar4) break;
    func_0x000107918214();
    puVar11 = extraout_x10;
    if (!(bool)uVar4 && cVar3 == cVar2) {
      uStack_48 = extraout_x10[1];
      uStack_50 = *extraout_x10;
      do {
        func_0x00010791724c();
        if ((bool)uVar4) {
          uVar4 = true;
          break;
        }
        uVar4 = extraout_x11 == *(long *)(extraout_x13 + 0x28);
      } while (!(bool)uVar4 && *(long *)(extraout_x13 + 0x28) <= extraout_x11);
      func_0x000107917810();
      puVar11 = extraout_x10_00;
      if ((bool)uVar4) {
        func_0x0001079176f0(extraout_x10_00 + 3);
        goto LAB_1078efbbc;
      }
    }
    puVar13 = puVar11 + 3;
    puVar8 = puVar11;
  }
  param_1 = 1;
  uVar4 = 1;
LAB_1078efbbc:
  func_0x000107913564(uStack_38);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  puStack_78 = &UNK_1078efbe0;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107913ca4();
  cVar2 = SBORROW8((long)puVar7,2);
  lVar10 = (long)puVar7 + -2;
  cVar3 = lVar10 < 0;
  uVar4 = lVar10 == 0;
  if ((1 < (long)puVar7) && (func_0x0001079176d8(lVar10), cVar3 == cVar2)) {
    func_0x000107916ab4();
    lVar10 = extraout_x9;
    if (cVar3 != cVar2) {
      lVar10 = 0x18;
      if (*(long *)(extraout_x9 + 0x10) <= *(long *)(extraout_x9 + 0x28)) {
        lVar10 = 0;
      }
      lVar10 = extraout_x9 + lVar10;
    }
    lVar14 = *(long *)(lVar10 + 0x10);
    lVar12 = param_3[2];
    cVar3 = SBORROW8(lVar14,lVar12);
    lVar10 = lVar14 - lVar12;
    uVar4 = lVar14 == lVar12;
    if (lVar14 <= lVar12) {
      uVar16 = param_3[1];
      uVar15 = *param_3;
      do {
        cVar2 = lVar10 < 0;
        func_0x000107916b0c();
        lVar12 = extraout_x10_01;
        if (cVar2 != cVar3) break;
        func_0x0001079171e0();
        lVar10 = extraout_x9_00;
        if (cVar2 != cVar3) {
          lVar10 = extraout_x12;
          if (*(long *)(extraout_x9_00 + 0x10) <= *(long *)(extraout_x9_00 + 0x28)) {
            lVar10 = 0;
          }
          lVar10 = extraout_x9_00 + lVar10;
        }
        lVar14 = *(long *)(lVar10 + 0x10);
        cVar3 = SBORROW8(lVar14,extraout_x10_02);
        lVar10 = lVar14 - extraout_x10_02;
        uVar4 = lVar14 == extraout_x10_02;
        lVar12 = extraout_x10_02;
      } while (lVar14 <= extraout_x10_02);
      param_3[1] = uVar16;
      *param_3 = uVar15;
      param_3[2] = lVar12;
    }
  }
  func_0x000107913564(extraout_x8_01);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &SUB_1078efca0;
  func_0x000107917a38();
  ppuStack_60 = &puStack_80;
  puStack_58 = puVar9;
  func_0x000107914d70();
  uVar6 = *(ulong *)(param_1 + 8);
  bVar1 = *(ulong *)(unaff_x19 + 0x10) <= uVar6;
  bVar5 = uVar6 == *(ulong *)(unaff_x19 + 0x10);
  if (!bVar1) goto LAB_10002bf68;
  func_0x0001079146e8(0x555555555555555);
  if (bVar1 && !bVar5) {
    func_0x0001078efe28();
    puVar8 = puVar7;
code_r0x0001078efdbc:
    func_0x000104bd35f4();
  }
  else {
    func_0x000107913dbc();
    func_0x000107916a48();
    if (unaff_x24 != 0) {
      puVar8 = puVar7;
      if (extraout_x8_02 < unaff_x24) goto code_r0x0001078efdbc;
      uVar6 = unaff_x24 * 0x30;
      __Znwm();
    }
    func_0x000107915248();
    puVar8 = puVar7;
  }
LAB_10002bf68:
  func_0x0001078efde4();
  uVar15 = puVar8[4];
  *(undefined8 *)(uVar6 + 0x28) = puVar8[5];
  *(undefined8 *)(uVar6 + 0x20) = uVar15;
  return;
}



/* Entry: 1078efea0; end: 1078efeeb;  */

void FUN_1078efea0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  while (param_2 != param_3) {
    lVar1 = param_2 + 0x20;
    lVar2 = param_2 + 0x20;
    param_2 = param_1;
    func_0x0001078efeec(param_1,param_1 + 8,lVar1,lVar2);
    func_0x000107916674();
  }
  return;
}



/* Entry: 1078f0668; end: 1078f083f;  */

ulong FUN_1078f0668(ulong param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *unaff_x19;
  ulong *unaff_x20;
  int iVar17;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x30;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long lStack_40;
  ulong uStack_38;
  long lStack_30;
  ulong uStack_28;
  
  func_0x000107918984();
  func_0x000107913cd4();
  func_0x000107914ce8();
  if ((param_1 & 1) == 0) {
    plVar7 = (long *)(unaff_x23 + 8);
    plVar9 = (long *)(unaff_x22 + 8);
    func_0x000107915194(plVar7,plVar9,unaff_x30);
    lVar11 = *plVar7;
    lVar14 = *plVar9;
    bVar5 = SBORROW8(lVar11,lVar14);
    bVar4 = lVar11 - lVar14 < 0;
    if (lVar11 == lVar14) {
      lVar11 = plVar7[1];
      lVar14 = plVar9[1];
      bVar5 = SBORROW8(lVar11,lVar14);
      bVar4 = lVar11 - lVar14 < 0;
      if (lVar11 == lVar14) {
        lVar11 = plVar7[2];
        lVar14 = plVar9[2];
        bVar5 = SBORROW8(lVar11,lVar14);
        bVar4 = lVar11 - lVar14 < 0;
        if (lVar11 == lVar14) {
          lVar11 = plVar7[4];
          lVar14 = plVar9[4];
          bVar5 = SBORROW8(lVar11,lVar14);
          bVar4 = lVar11 - lVar14 < 0;
          if (lVar11 == lVar14) {
            bVar5 = SBORROW8(plVar7[3],plVar9[3]);
            bVar4 = plVar7[3] - plVar9[3] < 0;
          }
        }
      }
    }
    return (ulong)(bVar4 != bVar5);
  }
  func_0x000107917d54();
  if ((param_1 & 1) == 0) {
    func_0x000107915fb0();
    func_0x000107915194();
    if (50.0 <= ABS(*(double *)(param_1 + 0x10) - *(double *)(param_2 + 0x10))) {
      return (ulong)(*(double *)(param_1 + 0x10) < *(double *)(param_2 + 0x10));
    }
    func_0x000107916810();
    func_0x00010791723c();
    bVar4 = false;
    lVar11 = 0;
    if (uStack_28 != 0) {
      lVar11 = lStack_30 / (long)uStack_28;
    }
    uVar13 = lStack_30 - lVar11 * uStack_28;
    lVar14 = 0;
    if (uStack_38 != 0) {
      lVar14 = lStack_40 / (long)uStack_38;
    }
    uVar16 = lStack_40 - lVar14 * uStack_38;
    uVar8 = (long)uVar13 >> 0x3f;
    uVar15 = 0;
    if (uStack_28 != 0) {
      uVar15 = (((uVar13 & (uVar8 ^ 0xffffffffffffffff)) - uVar13) + uVar8) / uStack_28;
    }
    lVar11 = lVar11 - (uVar15 - uVar8);
    uVar1 = (long)uVar16 >> 0x3f;
    uVar3 = 0;
    if (uStack_38 != 0) {
      uVar3 = (((uVar16 & (uVar1 ^ 0xffffffffffffffff)) - uVar16) + uVar1) / uStack_38;
    }
    lVar14 = lVar14 - (uVar3 - uVar1);
    uVar13 = uVar13 + (uVar15 - uVar8) * uStack_28;
    uVar8 = uVar16 + (uVar3 - uVar1) * uStack_38;
    while( true ) {
      if (lVar11 != lVar14) {
        bVar5 = lVar11 < lVar14;
        if (bVar4) {
          bVar5 = lVar14 < lVar11;
        }
        return (ulong)bVar5;
      }
      if ((uVar13 == 0) || (uVar8 == 0)) break;
      bVar4 = (bool)(bVar4 ^ 1);
      lVar11 = 0;
      if (uVar13 != 0) {
        lVar11 = (long)uStack_28 / (long)uVar13;
      }
      uVar15 = uStack_28 - lVar11 * uVar13;
      lVar14 = 0;
      if (uVar8 != 0) {
        lVar14 = (long)uStack_38 / (long)uVar8;
      }
      uVar16 = uStack_38 - lVar14 * uVar8;
      uStack_28 = uVar13;
      uStack_38 = uVar8;
      uVar13 = uVar15;
      uVar8 = uVar16;
    }
    uVar12 = 0;
    if (uVar13 != uVar8) {
      uVar12 = (uint)((uVar13 != 0) != !bVar4);
    }
    return (ulong)uVar12;
  }
  lVar14 = *(long *)*unaff_x21 + *unaff_x20 * 0x1b0;
  lVar11 = *(long *)*unaff_x21 + *unaff_x19 * 0x1b0;
  if ((*(int *)(lVar14 + 0x10) == 2) && (*(int *)(lVar11 + 0x10) == 2)) {
    func_0x0001079174cc();
    func_0x0001078f0a80();
    func_0x0001079184e0();
    func_0x0001078f0a80();
    func_0x0001079184f4();
    func_0x0001078f0a80();
    func_0x000107915150();
    func_0x000107914cdc();
    uVar13 = param_1;
    func_0x000107915150();
    func_0x000107914ca4();
    iVar6 = (int)uVar13;
    iVar17 = (int)param_1;
    bVar4 = SBORROW4(iVar17,iVar6);
    iVar2 = iVar17 - iVar6;
    if (iVar17 == iVar6) {
      func_0x000107916d34(in_stack_00000030,in_stack_00000038);
      func_0x000107914ca4();
      uVar8 = uVar13;
      func_0x000107914cdc(in_stack_00000010,in_stack_00000018,in_stack_00000000,in_stack_00000008);
      iVar6 = (int)uVar8;
      iVar17 = (int)uVar13;
      bVar4 = SBORROW4(iVar6,iVar17);
      iVar2 = iVar6 - iVar17;
      if (iVar6 == iVar17) {
        func_0x0001079151cc();
        goto LAB_1078f082c;
      }
    }
    uVar8 = (ulong)(iVar2 < 0 != bVar4);
    goto LAB_1078f082c;
  }
  if (*(int *)(lVar14 + 0x28) == 3) {
    bVar4 = *(int *)(lVar14 + 0xe0) != 3;
  }
  else {
    bVar4 = true;
  }
  if (*(int *)(lVar11 + 0x28) == 3) {
    bVar5 = *(int *)(lVar11 + 0xe0) == 3;
  }
  else {
    bVar5 = false;
  }
  if (bVar4 || bVar5) {
    if ((bool)(bVar4 & bVar5)) {
      uVar8 = 0;
      goto LAB_1078f082c;
    }
    if (*(int *)(lVar14 + 0x28) == 1) {
      uVar12 = (uint)(*(int *)(lVar14 + 0xe0) != 1);
    }
    else {
      uVar12 = 1;
    }
    if (*(int *)(lVar11 + 0x28) == 1) {
      uVar10 = (uint)(*(int *)(lVar11 + 0xe0) == 1);
    }
    else {
      uVar10 = 0;
    }
    if (uVar12 != 0 || uVar10 != 0) {
      uVar8 = (ulong)((uint)(*unaff_x20 < *unaff_x19) & (uVar12 & uVar10 ^ 0xffffffff));
      goto LAB_1078f082c;
    }
  }
  uVar8 = 1;
LAB_1078f082c:
  func_0x000107915194();
  return uVar8;
}



/* Entry: 1078f0c44; end: 1078f0ca3;  */

void FUN_1078f0c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStack_48;
  
  iVar1 = (int)&uStack_48;
  func_0x0001078ea1b4(param_1,param_3,param_2);
  func_0x0001079185dc(uStack_48);
  func_0x000107916d2c();
  if (iVar1 != 0) {
    func_0x000107915908();
    func_0x000107916d2c();
  }
  return;
}



/* Entry: 1078f1558; end: 1078f1653;  */

void FUN_1078f1558(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int unaff_w19;
  int unaff_w21;
  undefined8 *unaff_x22;
  undefined1 auStack_d0 [112];
  
  func_0x0001079144b8();
  func_0x000107915de8(*param_4);
  func_0x0001079138a8();
  func_0x000107916494();
  iVar1 = (int)param_2;
  func_0x0001079138a8();
  func_0x000107915254();
  func_0x0001078f1458();
  if ((param_2 & 1) == 0) {
    if (iVar1 == 0) {
      return;
    }
    func_0x000107913a24();
    func_0x000107913d48();
    func_0x000107914a80();
    func_0x000107914d4c(*unaff_x22);
    func_0x0001004d77a8();
    func_0x0001078f1458();
    if (unaff_w19 == 0) {
      return;
    }
    func_0x000107913cf0(auStack_d0);
    func_0x000107913cfc();
    func_0x000107915a64();
  }
  else {
    if (iVar1 == 0) {
      func_0x000107913cf0(auStack_d0);
      func_0x000107913cfc();
      func_0x000107913e60();
      func_0x000107914d4c(*unaff_x22);
      func_0x000107915254();
      func_0x0001078f1458();
      if (unaff_w21 == 0) {
        return;
      }
      func_0x000107913a24();
    }
    else {
      func_0x000107913cf0(auStack_d0);
    }
    func_0x000107913d48();
    func_0x0001079168c0();
  }
  func_0x000107914a98();
  return;
}



/* Entry: 1078f1bb8; end: 1078f1c0b;  */

long FUN_1078f1bb8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010002c7d4();
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  func_0x00010530d618(param_1[1],param_2);
  return lVar1;
}



/* Entry: 1078f2064; end: 1078f20af;  */

long * FUN_1078f2064(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = plVar1;
  plVar4 = plVar1;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar2 = 8;
    if (param_2 <= plVar5[4]) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= plVar5[4]) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < plVar3[4])) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 1078f34b0; end: 1078f354f;  */

undefined8 FUN_1078f34b0(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  
  if ((char)param_1[7] != '\x01') {
    return 0;
  }
  func_0x000107915f10();
  func_0x000107914d58();
  plVar2 = (long *)param_1[2];
  uVar7 = 0xffffffff;
  lVar9 = -1;
  lVar8 = -1;
  for (plVar6 = (long *)param_1[1]; plVar6 != plVar2; plVar6 = plVar6 + 4) {
    lVar3 = *param_1;
    lVar5 = plVar6[2];
    func_0x0001078f1ad8(lVar3,lVar5);
    if (lVar3 == 0) {
      uVar1 = param_4;
      if (lVar9 != lVar5) {
        uVar1 = 1;
      }
      if ((-1 < lVar8) && ((uVar1 & 1) != 0)) goto LAB_1078f3544;
      lVar8 = *plVar6;
      uVar7 = (undefined4)plVar6[1];
      lVar9 = lVar5;
    }
  }
  if (lVar8 < 0) {
LAB_1078f3544:
    uVar4 = 0;
  }
  else {
    *unaff_x20 = lVar8;
    *unaff_x19 = uVar7;
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 1078f3f78; end: 1078f40d7;  */

void FUN_1078f3f78(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  long unaff_x24;
  int unaff_w25;
  undefined1 auStack_c0 [112];
  
  func_0x000107914410();
  func_0x00010791645c();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078f3fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedb8f2)[extraout_x8] * 4 + 0x1078f3fc0))(1);
    return;
  }
  func_0x000107914f98();
  func_0x0001078f3d34();
  func_0x000107917118();
  lVar3 = unaff_x19 + 0x150;
  do {
    if (lVar3 == unaff_x21) {
      return;
    }
    func_0x000107914d4c(*unaff_x20);
    func_0x000107915320();
    func_0x0001078f3c30();
    if ((int)param_1 != 0) {
      func_0x000107913ce4(auStack_c0);
      lVar4 = unaff_x24;
      do {
        lVar1 = unaff_x19 + lVar4;
        func_0x000107914a98(lVar1 + 0x150,lVar1 + 0xe0);
        param_1 = unaff_x19;
        if (lVar4 == -0xe0) goto LAB_1078f4094;
        func_0x000107914d4c(*unaff_x20);
        uVar2 = 0;
        func_0x0001078f3c30(auStack_c0,lVar1 + 0x70);
        lVar4 = lVar4 + -0x70;
      } while ((uVar2 & 1) != 0);
      param_1 = unaff_x19 + lVar4 + 0x150;
LAB_1078f4094:
      func_0x000107914a98();
      unaff_w25 = unaff_w25 + 1;
      if (unaff_w25 == 8) {
        func_0x0001079171c8(lVar3 + 0x70);
        return;
      }
    }
    lVar3 = lVar3 + 0x70;
    unaff_x24 = unaff_x24 + 0x70;
  } while( true );
}



/* Entry: 1078f43dc; end: 1078f4407;  */

void FUN_1078f43dc(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long lVar3;
  long extraout_x9_00;
  long extraout_x10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x0001078f44b8();
    func_0x000107917aac();
    func_0x000107914c78();
    lVar4 = *param_1;
    lVar1 = param_1[1];
    func_0x0001079174dc(*(undefined8 *)(param_2 + 8));
    lVar5 = extraout_x8 + extraout_x9 * extraout_x10;
    lVar2 = lVar5;
    lVar3 = lVar4;
    while (lVar3 != lVar1) {
      func_0x0001079161c4(lVar2);
      func_0x0001079138d4();
      lVar2 = extraout_x8_00 + 0x18;
      lVar3 = extraout_x9_00 + 0x18;
    }
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
      func_0x00010791667c();
    }
    func_0x0001078f453c(&stack0xfffffffffffffff0);
    *(long *)(unaff_x19 + 8) = lVar5;
    unaff_x20[1] = *unaff_x20;
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
    func_0x00010791351c();
    return;
  }
  func_0x00010791756c();
  return;
}



/* Entry: 1078f47a4; end: 1078f47f7;  */

double FUN_1078f47a4(double param_1,double *param_2,double *param_3)

{
  bool bVar1;
  undefined8 extraout_x8;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  
  func_0x000107913ca4();
  bVar1 = param_2 == param_3;
  pdVar3 = param_3;
  if (!bVar1) {
    while( true ) {
      pdVar2 = pdVar3 + -2;
      bVar1 = param_2 == pdVar2;
      if (pdVar2 <= param_2) break;
      dVar4 = param_2[1];
      param_1 = *param_2;
      dVar5 = *pdVar2;
      param_2[1] = pdVar3[-1];
      *param_2 = dVar5;
      pdVar3[-1] = dVar4;
      *pdVar2 = param_1;
      param_2 = param_2 + 2;
      pdVar3 = pdVar2;
    }
  }
  func_0x000107913564(extraout_x8);
  if (!bVar1) {
    ___stack_chk_fail();
    dVar4 = 0.0;
    if (0x3f < (ulong)((long)param_3 - (long)param_2)) {
      while (pdVar3 = param_2 + 2, pdVar3 != param_3) {
        dVar4 = dVar4 + (param_2[1] - param_2[3]) * (*param_2 + *pdVar3);
        param_2 = pdVar3;
      }
      dVar4 = dVar4 * 0.5;
    }
    return dVar4;
  }
  return param_1;
}



/* Entry: 1078f4b88; end: 1078f4bdb;  */

void FUN_1078f4b88(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
    func_0x00010791778c();
  }
  return;
}



/* Entry: 1078f4d90; end: 1078f4de3;  */

void FUN_1078f4d90(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 *param_5)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x000107913d34();
  param_5[1] = in_register_00005008;
  *param_5 = param_1;
  param_5[3] = in_register_00005028;
  param_5[2] = param_2;
  if (param_3 != param_4) {
    func_0x00010791434c();
    for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x10) {
      func_0x0001004d77a8();
      func_0x0001078e9c18();
    }
  }
  return;
}



/* Entry: 1078f523c; end: 1078f5267;  */

void FUN_1078f523c(void)

{
  undefined1 in_ZR;
  
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107916f44();
  }
  return;
}



/* Entry: 1078f57c0; end: 1078f57c7;  */

void FUN_1078f57c0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [48];
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
  undefined1 auStack_50 [32];
  
  func_0x000107913cb4();
  uVar4 = *param_1;
  func_0x0001079143ec(uVar4,param_1[2]);
  uStack_88 = param_1[1];
  uStack_70 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = uVar4;
  uStack_68 = uStack_88;
  uStack_60 = uVar4;
  uStack_58 = uStack_78;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x0001078f50b8();
  func_0x000107913794();
  func_0x0001078f50b8();
  func_0x0001079155d4();
  uVar3 = 1;
  if ((bool)in_ZR) goto code_r0x0001078f5418;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
code_r0x0001078f5388:
    func_0x000107913f30();
    func_0x0001078f552c();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar1)) goto code_r0x0001078f5388;
    func_0x0001078f5590(auStack_d8);
    func_0x000107913df4();
    FUN_1078f523c();
    func_0x000107915b2c();
    func_0x00010791354c();
    func_0x0001078f5588();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x0001078f5590(auStack_d8);
      func_0x000107915338();
      func_0x000107913880(auStack_50);
      func_0x0001078f5588();
      func_0x000107913894(auStack_50);
      func_0x0001078f5588();
      goto code_r0x0001078f5418;
    }
  }
  func_0x000107913f20();
  func_0x0001078f552c();
  func_0x000107913f10();
  func_0x0001078f552c();
code_r0x0001078f5418:
  func_0x0001079155c8();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x0001078f5590(auStack_120);
      func_0x000107915338();
      func_0x000107913adc(auStack_50,&uStack_a8);
      func_0x0001078f5588();
      func_0x000107913858(auStack_50);
      func_0x0001078f5588();
    }
    else {
      func_0x000107914858();
      func_0x0001078f552c();
      func_0x000107913ec0();
      func_0x0001078f552c();
    }
  }
  func_0x000107914d34(uStack_a0);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913ea0(), (bool)in_CY)) {
    func_0x000107913a0c();
    func_0x0001078f5588();
  }
  else {
    func_0x000107914848();
    func_0x0001078f552c();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar2)) {
    func_0x00010791386c(&uStack_90);
    func_0x0001078f5588();
  }
  else {
    func_0x000107913eb0();
    func_0x0001078f552c();
  }
  func_0x000107915a84();
  func_0x000107915ac4();
  func_0x000107915a70();
  func_0x000107915af4();
  func_0x000107915ae4();
  func_0x000107915b24();
  return;
}



/* Entry: 1078f5a9c; end: 1078f5b83;  */

long * FUN_1078f5a9c(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long *unaff_x19;
  long *plVar1;
  long *unaff_x21;
  
  func_0x000107914d70();
  if ((param_3 & 1) == 0) {
    func_0x000107914da4();
    func_0x0001078f5ba8();
    plVar1 = unaff_x19;
    if ((param_4 & 1) != 0) {
LAB_1078f5afc:
      func_0x000107914c90(plVar1);
      FUN_1078f47a4();
      return unaff_x19;
    }
  }
  else if (0x30 < (ulong)(unaff_x21[1] - *unaff_x21)) {
    func_0x000107914c0c();
    func_0x0001078f4654();
    func_0x0001078f5ba8();
    param_1 = unaff_x21;
    if (param_4 != 0) {
      plVar1 = (long *)(unaff_x19[4] + -0x18);
      goto LAB_1078f5afc;
    }
  }
  return param_1;
}



/* Entry: 1078f5f1c; end: 1078f5f43;  */

void FUN_1078f5f1c(void)

{
  uint extraout_w8;
  
  func_0x00010002bfa0();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001078e6458();
  }
  return;
}



/* Entry: 1078f625c; end: 1078f629b;  */

void FUN_1078f625c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107918860();
  while (func_0x00010791814c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x18;
    func_0x000107912734();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078f65c4; end: 1078f65eb;  */

void FUN_1078f65c4(byte *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pdVar1 = (double *)(param_1 + 8);
  if ((*param_1 & 1) != 0) {
    dVar4 = *param_2;
    dVar2 = *pdVar1;
    if (dVar4 < *pdVar1) {
      *pdVar1 = dVar4;
      dVar2 = dVar4;
    }
    dVar3 = *(double *)(param_1 + 0x18);
    if (*(double *)(param_1 + 0x18) < dVar4) {
      *(double *)(param_1 + 0x18) = dVar4;
      dVar3 = dVar4;
    }
    dVar6 = param_2[1];
    dVar4 = *(double *)(param_1 + 0x10);
    if (dVar6 < *(double *)(param_1 + 0x10)) {
      *(double *)(param_1 + 0x10) = dVar6;
      dVar4 = dVar6;
    }
    dVar5 = *(double *)(param_1 + 0x20);
    if (*(double *)(param_1 + 0x20) < dVar6) {
      *(double *)(param_1 + 0x20) = dVar6;
      dVar5 = dVar6;
    }
    dVar6 = param_2[2];
    if (dVar6 < dVar2) {
      *pdVar1 = dVar6;
    }
    if (dVar3 < dVar6) {
      *(double *)(param_1 + 0x18) = dVar6;
    }
    dVar2 = param_2[3];
    if (dVar2 < dVar4) {
      *(double *)(param_1 + 0x10) = dVar2;
    }
    if (dVar5 < dVar2) {
      *(double *)(param_1 + 0x20) = dVar2;
    }
    return;
  }
  dVar2 = *param_2;
  dVar3 = param_2[3];
  dVar4 = param_2[2];
  *(double *)(param_1 + 0x10) = param_2[1];
  *pdVar1 = dVar2;
  *(double *)(param_1 + 0x20) = dVar3;
  *(double *)(param_1 + 0x18) = dVar4;
  *param_1 = 1;
  return;
}



/* Entry: 1078f8d94; end: 1078f91b7;  */

void FUN_1078f8d94(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x21;
  undefined8 *puVar1;
  
  func_0x000107913cd4();
  param_3[1] = *param_3;
  for (param_1 = (undefined8 *)*param_1; param_1 != *(undefined8 **)(unaff_x21 + 8);
      param_1 = param_1 + 6) {
    func_0x000107914d88(*param_1,param_1[1]);
    func_0x0001078f8e50();
    for (puVar1 = (undefined8 *)param_1[3]; puVar1 != (undefined8 *)param_1[4]; puVar1 = puVar1 + 3)
    {
      func_0x000107914d88(*puVar1,puVar1[1]);
      func_0x0001078f8e50();
    }
  }
  return;
}



/* Entry: 1078f96c8; end: 1078f96cb;  */

void FUN_1078f96c8(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  param_1[1] = 0x7ff8000000000000;
  *param_1 = 0x7ff8000000000000;
  param_1[3] = 0x8000000000000000;
  param_1[2] = 0x8000000000000000;
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107916f34();
  }
  return;
}



/* Entry: 1078fa82c; end: 1078fa863;  */

undefined8 * FUN_1078fa82c(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    func_0x0001078fa77c(*param_1);
    func_0x000107917364();
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return param_1 + 4;
}



/* Entry: 1078fac84; end: 1078facbf;  */

undefined4 FUN_1078fac84(long *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 extraout_w8;
  long unaff_x19;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  func_0x000107917350();
  puVar8 = (undefined8 *)param_1[3];
  FUN_1078fa82c();
  lVar5 = *(long *)(unaff_x19 + 8);
  FUN_1078fa82c();
  lVar6 = puVar8[1];
  lVar7 = *param_1;
  func_0x000107915e78(*puVar8);
  dVar9 = (double)lVar5;
  dVar10 = (double)lVar6;
  dVar11 = (double)lVar7;
  func_0x000107917da8();
  cVar4 = NAN(dVar9);
  uVar3 = dVar9 == 0.0;
  cVar2 = dVar9 < 0.0;
  if (!(bool)uVar3) {
    func_0x000107915fcc();
    if (cVar2 == cVar4) {
      if (dVar9 <= 0.0) {
        return 0xffffffff;
      }
      return 1;
    }
    func_0x000107914b3c();
    uVar1 = extraout_w8;
    if (!(bool)uVar3 && cVar2 == cVar4) {
      uVar1 = 1;
    }
    if (dVar10 < dVar11) {
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1078fafd4; end: 1078fb027;  */

void FUN_1078fafd4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x0001078fae78();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 1078fb500; end: 1078fb53f;  */

long FUN_1078fb500(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *extraout_x8;
  
  lVar1 = param_3 - *(long *)(param_2 + 0x18);
  if (param_3 < *(long *)(param_2 + 0x18)) {
    plVar2 = (long *)(param_1 + *(long *)(param_2 + 8) * 0x30);
    if (-1 < *(long *)(param_2 + 0x10)) {
      func_0x000107915928(lVar1);
      plVar2 = extraout_x8;
    }
    lVar1 = lVar1 + (plVar2[1] - *plVar2 >> 4) + -1;
  }
  return lVar1;
}



/* Entry: 1078fbd80; end: 1078fbdbf;  */

int FUN_1078fbd80(ulong param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 uVar5;
  int extraout_w8;
  int extraout_w9;
  
  if (param_2 - param_1 < 0x40) {
    return -1;
  }
  func_0x000107916af4();
  do {
    uVar1 = param_1 + 0x10;
    uVar5 = uVar1 == param_2;
    if ((bool)uVar5) break;
    func_0x000107915908();
    func_0x0001078f48b8();
    uVar4 = param_1 & 1;
    param_1 = uVar1;
  } while (uVar4 != 0);
  func_0x0001079184b8();
  iVar2 = -extraout_w9;
  if ((bool)uVar5) {
    iVar2 = extraout_w9;
  }
  iVar3 = 0;
  if (extraout_w8 == 0) {
    iVar3 = iVar2;
  }
  return iVar3;
}



/* Entry: 1078fc664; end: 1078fc6cf;  */

undefined8 FUN_1078fc664(long *param_1,long *param_2,long *param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long extraout_x8;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((*param_3 != 0) && (param_1 = param_2, *param_3 != 1)) {
    return 0;
  }
  plVar4 = (long *)(*param_1 + param_3[1] * 0x30);
  lVar3 = param_3[3];
  if (-1 < param_3[2]) {
    func_0x000107916bf8();
    lVar3 = extraout_x8;
    plVar4 = extraout_x9;
  }
  uVar5 = (plVar4[1] - *plVar4 >> 4) - 1;
  lVar1 = 0;
  if (uVar5 != 0) {
    lVar1 = (lVar3 + param_4) / (long)uVar5;
  }
  lVar3 = (lVar3 + param_4) - lVar1 * uVar5;
  puVar2 = (undefined8 *)(*plVar4 + ((uVar5 & lVar3 >> 0x3f) + lVar3) * 0x10);
  uVar6 = *puVar2;
  param_5[1] = puVar2[1];
  *param_5 = uVar6;
  return 1;
}



/* Entry: 1078fcaf0; end: 1078fcc0b;  */

long FUN_1078fcaf0(long param_1)

{
  char in_NG;
  char in_OV;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x000107914110();
  lVar1 = extraout_x8;
  while (lVar1 != 0) {
    while (func_0x000107914c2c(), unaff_x22 = unaff_x20, in_NG == in_OV) {
      in_OV = SBORROW8(extraout_x8_00,unaff_x21);
      in_NG = extraout_x8_00 - unaff_x21 < 0;
      if (unaff_x21 <= extraout_x8_00) goto LAB_1078fcb7c;
      if (*(long *)(unaff_x20 + 8) == 0) goto LAB_1078fcb3c;
    }
    func_0x000107915c94();
    lVar1 = extraout_x8_01;
  }
LAB_1078fcb3c:
  func_0x00010791612c();
  func_0x00010791733c();
  func_0x000107916e58(0xffffffffffffffff);
  *(undefined8 *)(extraout_x8_02 + 0x40) = 0;
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(extraout_x8_02 + 0x40);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 **)(param_1 + 0x50) = (undefined8 *)(param_1 + 0x58);
  func_0x000107913628();
  if (extraout_x8_03 != 0) {
    *unaff_x19 = extraout_x8_03;
  }
  func_0x000107913f98();
  func_0x0001004d7750();
  unaff_x20 = unaff_x22;
LAB_1078fcb7c:
  return unaff_x20 + 0x28;
}



/* Entry: 1078fe2cc; end: 1078fe347;  */

/* WARNING: Possible PIC construction at 0x0001078fe340: Changing call to branch */

long FUN_1078fe2cc(long param_1,long param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined1 in_CY;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  long lVar2;
  long extraout_x10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x30;
  
  func_0x000107917a38();
  func_0x000107914d70();
  func_0x000107918318();
  if (!(bool)in_CY) {
    func_0x000107914ebc();
LAB_1078fe334:
    unaff_x19[1] = unaff_x24;
    return param_1;
  }
  func_0x0001079157d8();
  if (extraout_x10 == 0) {
    func_0x000107914bbc();
    unaff_x24 = extraout_x8;
    if ((bool)in_CY) {
      unaff_x24 = extraout_x9;
    }
    if (unaff_x24 >> 0x3b == 0) {
      func_0x000107917dec();
      lVar2 = param_1 + unaff_x24 * 0x20;
      func_0x000107914ebc(param_1 + unaff_x22);
      func_0x000107913970();
      *unaff_x19 = extraout_x8_00 + unaff_x23 * -0x20;
      unaff_x19[1] = unaff_x24;
      unaff_x19[2] = lVar2;
      if (unaff_x20 != 0) {
        func_0x000107914d94();
      }
      goto LAB_1078fe334;
    }
    func_0x000104bd35f4();
  }
  func_0x000107913ad0();
  piVar1 = (int *)(param_1 + 0x2c);
  lVar2 = (param_2 - param_1) / 0x70;
  while( true ) {
    if (lVar2 == 0) {
      return -1;
    }
    if (((*(long *)(piVar1 + -3) == unaff_x30) && (piVar1[-1] == param_4)) && (*piVar1 == 1)) break;
    piVar1 = piVar1 + 0x1c;
    lVar2 = lVar2 + -1;
  }
  return *(long *)(piVar1 + -7);
}



/* Entry: 1078fe5dc; end: 1078fe673;  */

void FUN_1078fe5dc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  func_0x000107914d64();
  func_0x00010791839c();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x000107913d98();
      if (!bVar2) {
        func_0x000107916c70();
      }
      func_0x0001079181a8();
      param_2 = unaff_x21;
    }
    else {
      lVar3 = (long)(uVar1 - param_2) >> 2;
      if (uVar1 - param_2 == 0) {
        lVar3 = 1;
      }
      func_0x00010791877c();
      func_0x0001078fe698();
      func_0x000107915b70(lVar3 * 2 + 6);
      func_0x0001079135d8();
      func_0x0001078fe674();
      func_0x0001079135c0();
      func_0x0001078fe6e4();
      param_2 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(param_2 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(param_2 + -8);
  return;
}



/* Entry: 1078ff798; end: 1078ff7cb;  */

/* WARNING: Possible PIC construction at 0x0001078ffb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ffc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ffc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ffc38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ffc44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ffbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078ffbdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078ffbd4) */
/* WARNING: Removing unreachable block (ram,0x0001078ffbd8) */
/* WARNING: Removing unreachable block (ram,0x0001078ffc48) */
/* WARNING: Removing unreachable block (ram,0x0001078ffc4c) */
/* WARNING: Removing unreachable block (ram,0x0001078ffc3c) */
/* WARNING: Removing unreachable block (ram,0x0001078ffc40) */
/* WARNING: Removing unreachable block (ram,0x0001078ffc84) */
/* WARNING: Removing unreachable block (ram,0x0001078ffc98) */
/* WARNING: Removing unreachable block (ram,0x0001078ffb54) */
/* WARNING: Removing unreachable block (ram,0x0001078ffb58) */
/* WARNING: Removing unreachable block (ram,0x0001078ffbe0) */

undefined8 FUN_1078ff798(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  undefined8 uVar9;
  ulong unaff_x20;
  ulong unaff_x21;
  long lVar10;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined1 *puVar6;
  
  if (((ulong)(param_2[1] - *param_2) < 0x80) || (99 < param_4)) goto code_r0x0001078ffa94;
  uVar1 = 0x78 < (ulong)(param_3[1] - *param_3);
  uVar3 = param_3[1] - *param_3 == 0x79;
  if (!(bool)uVar1) goto code_r0x0001078ffa94;
  func_0x0001079188cc();
  func_0x0001079136f4();
  func_0x0001079153e4();
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  func_0x0001079132d8();
  func_0x0001079136bc();
  func_0x0001079136d8();
  func_0x0001079155d4();
  uVar4 = 1;
  param_2 = param_1;
  if ((bool)uVar3) {
code_r0x0001078ffbe4:
    func_0x0001079155c8();
    if ((bool)uVar4) {
      func_0x0001079181f0();
      if (0x7f < unaff_x21) {
code_r0x0001078ffc5c:
        uVar3 = 0x62 < unaff_x20;
        if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar3)) {
          func_0x0001079139c4();
          func_0x0001078ffd14();
          if (((ulong)param_2 & 1) != 0) {
            func_0x000107913e90();
            if (((!(bool)uVar3) || (bVar2 = 0x62 < unaff_x20, 99 < unaff_x20)) ||
               (func_0x000107913e80(), !bVar2)) {
              func_0x000107913eb0();
              goto code_r0x0001078ffa94;
            }
            uVar7 = 0;
            func_0x00010791386c();
            func_0x0001078ffd14();
            if ((uVar7 & 1) != 0) {
              uVar9 = 1;
              goto code_r0x0001078ffcc8;
            }
          }
          goto code_r0x0001078ffcc4;
        }
      }
      func_0x0001079146f8();
code_r0x0001078ffa94:
      lVar10 = *param_2;
      bVar2 = lVar10 == param_2[1];
      if ((!bVar2) && (func_0x0001079174bc(), !bVar2)) {
        func_0x00010791589c();
        lVar8 = extraout_x8;
        for (; uVar3 = lVar10 == lVar8, !(bool)uVar3; lVar10 = lVar10 + 8) {
          while (func_0x000107916f18(), !(bool)uVar3) {
            func_0x00010791415c();
            func_0x0001078fe9c0();
            if (((ulong)param_2 & 1) == 0) {
              return 0;
            }
          }
          lVar8 = *(long *)(unaff_x21 + 8);
        }
      }
      return 1;
    }
    func_0x0001079158a8();
    if (((!(bool)uVar1) || (func_0x000107913ed0(), !(bool)uVar1)) ||
       ((bVar2 = 0x62 < unaff_x20, 99 < unaff_x20 || (func_0x000107914e34(), !bVar2)))) {
      func_0x000107914708();
      goto code_r0x0001078ffa94;
    }
    func_0x000107915ee0();
    func_0x0001078f9724();
    func_0x000107913a34();
    func_0x0001078ffd14();
    if ((int)param_2 != 0) {
      func_0x000107913650();
      func_0x0001078ffd14();
      if (((ulong)param_2 & 1) != 0) goto code_r0x0001078ffc5c;
    }
  }
  else {
    func_0x0001079158b4();
    param_2 = param_1;
    if (((!(bool)uVar1) || (uVar3 = 0x62 < unaff_x20, 99 < unaff_x20)) ||
       (func_0x000107913f00(), param_2 = param_1, !(bool)uVar3)) {
      func_0x000107913f30();
      goto code_r0x0001078ffa94;
    }
    func_0x000107913d24();
    func_0x0001078f96f8();
    func_0x00010791354c();
    func_0x0001078ffd14();
    if (((ulong)param_1 & 1) != 0) {
      func_0x000107913ef0();
      param_2 = param_1;
      if ((((bool)uVar3) && (func_0x000107913ee0(), param_2 = param_1, (bool)uVar3)) &&
         (unaff_x20 < 100)) {
        uVar1 = 0x78 < unaff_x21;
        uVar4 = unaff_x21 == 0x79;
        if ((bool)uVar1) {
          func_0x000107914c84();
          func_0x0001078f9724();
          puVar6 = (undefined1 *)register0x00000008;
          func_0x000107913880();
          iVar5 = (int)puVar6;
          func_0x0001078ffd14();
          if (iVar5 != 0) {
            func_0x000107913894();
            func_0x0001078ffd14();
            param_2 = (long *)register0x00000008;
            if (((ulong)register0x00000008 & 1) != 0) goto code_r0x0001078ffbe4;
          }
          goto code_r0x0001078ffcc4;
        }
      }
      func_0x000107913f20();
      goto code_r0x0001078ffa94;
    }
  }
code_r0x0001078ffcc4:
  uVar9 = 0;
code_r0x0001078ffcc8:
  func_0x00010791502c();
  func_0x000107915070();
  func_0x000107915008();
  func_0x0001079150b0();
  func_0x00010791508c();
  func_0x000107915094();
  return uVar9;
}



/* Entry: 1078ffd1c; end: 1078ffd63;  */

void FUN_1078ffd1c(uint param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  
  func_0x000107917a38();
  func_0x000107915584();
  lVar1 = extraout_x8;
  do {
    if (*unaff_x19 == *unaff_x23) {
LAB_1078ffd58:
      *unaff_x19 = lVar1;
      return;
    }
    func_0x000107916c48();
    if ((param_1 & 1) == 0) {
      lVar1 = *unaff_x22;
      goto LAB_1078ffd58;
    }
    func_0x000107915e90();
    lVar1 = extraout_x8_00;
  } while( true );
}



/* Entry: 107900170; end: 1079001bf;  */

long FUN_107900170(long param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm(0x38);
  func_0x000107900258();
  func_0x00010530126c(lVar1 + 0x10,param_1 + 0x10);
  return lVar1;
}



/* Entry: 1079002e8; end: 10790036b;  */

void FUN_1079002e8(void)

{
  undefined1 in_CY;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001079164a8();
  while (func_0x000107914570(), (bool)in_CY) {
    func_0x000107915cc4();
    func_0x000107914e7c();
  }
  if (extraout_x8 == 1) {
    lVar1 = 10;
  }
  else {
    if (extraout_x8 != 2) goto LAB_107900338;
    lVar1 = 0x14;
  }
  unaff_x19[4] = lVar1;
LAB_107900338:
  while (unaff_x20 != unaff_x21) {
    func_0x0001079163e8();
  }
  lVar1 = unaff_x19[1];
  lVar2 = unaff_x19[2];
  while (lVar2 != lVar1) {
    func_0x000107915c58();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1079006f8; end: 107900757;  */

void FUN_1079006f8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107914c78();
  func_0x000107918678();
  func_0x0001079007a0();
  func_0x0001079007a0(unaff_x20 + 0x28,*(undefined8 *)(unaff_x19 + 0x18),
                      *(undefined8 *)(unaff_x19 + 0x20));
  func_0x000107917960();
  return;
}



/* Entry: 1079009b0; end: 1079009ef;  */

double FUN_1079009b0(double *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (0x3f < (ulong)((long)param_2 - (long)param_1)) {
    while (pdVar1 = param_1 + 2, pdVar1 != param_2) {
      dVar2 = dVar2 + (param_1[1] - param_1[3]) * (*param_1 + *pdVar1);
      param_1 = pdVar1;
    }
    dVar2 = dVar2 * 0.5;
  }
  return dVar2;
}



/* Entry: 107900e4c; end: 107900e77;  */

void FUN_107900e4c(void)

{
  undefined1 in_ZR;
  
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107916f44();
  }
  return;
}



/* Entry: 1079013d0; end: 1079013d7;  */

void FUN_1079013d0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [48];
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
  undefined1 auStack_50 [32];
  
  func_0x000107913cb4();
  uVar4 = *param_1;
  func_0x0001079143ec(uVar4,param_1[2]);
  uStack_88 = param_1[1];
  uStack_70 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = uVar4;
  uStack_68 = uStack_88;
  uStack_60 = uVar4;
  uStack_58 = uStack_78;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x000107900cc8();
  func_0x000107913794();
  func_0x000107900cc8();
  func_0x0001079155d4();
  uVar3 = 1;
  if ((bool)in_ZR) goto code_r0x000107901028;
  uVar3 = extraout_x9 - extraout_x8 == 0x80;
  uVar1 = 0;
  if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
code_r0x000107900f98:
    func_0x000107913f30();
    func_0x00010790113c();
  }
  else {
    uVar1 = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar1)) goto code_r0x000107900f98;
    func_0x0001079011a0(auStack_d8);
    func_0x000107913df4();
    FUN_107900e4c();
    func_0x000107915b2c();
    func_0x00010791354c();
    func_0x000107901198();
  }
  func_0x000107913ef0();
  in_CY = 0;
  if (((bool)uVar1) && (func_0x000107913ee0(), in_CY = 0, (bool)uVar1)) {
    in_CY = 0x62 < unaff_x20;
    uVar3 = unaff_x20 == 99;
    if ((unaff_x20 < 100) && (func_0x000107914718(), (bool)in_CY)) {
      func_0x0001079011a0(auStack_d8);
      func_0x000107915338();
      func_0x000107913880(auStack_50);
      func_0x000107901198();
      func_0x000107913894(auStack_50);
      func_0x000107901198();
      goto code_r0x000107901028;
    }
  }
  func_0x000107913f20();
  func_0x00010790113c();
  func_0x000107913f10();
  func_0x00010790113c();
code_r0x000107901028:
  func_0x0001079155c8();
  if (!(bool)uVar3) {
    func_0x000107914d40();
    if (((((bool)in_CY) && (func_0x000107913ed0(), (bool)in_CY)) &&
        (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
      func_0x0001079011a0(auStack_120);
      func_0x000107915338();
      func_0x000107913adc(auStack_50,&uStack_a8);
      func_0x000107901198();
      func_0x000107913858(auStack_50);
      func_0x000107901198();
    }
    else {
      func_0x000107914858();
      func_0x00010790113c();
      func_0x000107913ec0();
      func_0x00010790113c();
    }
  }
  func_0x000107914d34(uStack_a0);
  if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913ea0(), (bool)in_CY)) {
    func_0x000107913a0c();
    func_0x000107901198();
  }
  else {
    func_0x000107914848();
    func_0x00010790113c();
  }
  func_0x000107913e90();
  if ((((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar2)) {
    func_0x00010791386c(&uStack_90);
    func_0x000107901198();
  }
  else {
    func_0x000107913eb0();
    func_0x00010790113c();
  }
  func_0x000107915a84();
  func_0x000107915ac4();
  func_0x000107915a70();
  func_0x000107915af4();
  func_0x000107915ae4();
  func_0x000107915b24();
  return;
}



/* Entry: 1079016c8; end: 107901aa3;  */

long ** FUN_1079016c8(long param_1,long param_2,undefined8 param_3,double *param_4)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long **pplVar6;
  ulong uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long **pplVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 in_d3;
  double dVar12;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  double adStack_d0 [2];
  long **pplStack_c0;
  undefined1 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  
  lStack_e8 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  plVar10 = (long *)(param_2 - param_1);
  lVar4 = param_1;
  if ((long *)0x20 < plVar10) {
    dVar12 = *param_4;
    func_0x0001079186e8();
    func_0x000107901f0c();
    if ((int)lVar4 == 0) {
      adStack_d0[0] = (ABS(dVar12) / 1000.0) * (ABS(dVar12) / 1000.0);
      plStack_b0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      lStack_a0 = 0;
      pplStack_c0 = &plStack_b0;
      uStack_b8 = 0;
      if (param_2 != param_1) {
        if ((long)plVar10 < 0) {
          func_0x000107902014();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x107901a4c);
          (*pcVar2)();
        }
        plVar5 = plVar10;
        __Znwm();
        lStack_a0 = (long)plVar5 + (long)plVar10;
        plStack_a8 = plVar5;
        for (; plStack_b0 = plVar5, param_1 != param_2; param_1 = param_1 + 0x10) {
          *plStack_a8 = param_1;
          *(undefined1 *)(plStack_a8 + 1) = 0;
          plStack_a8 = plStack_a8 + 2;
        }
      }
      uStack_b8 = 1;
      func_0x000107902020(&pplStack_c0);
      pplStack_c0 = (long **)CONCAT44(pplStack_c0._4_4_,2);
      *(undefined1 *)(plStack_b0 + 1) = 1;
      *(undefined1 *)(plStack_a8 + -1) = 1;
      func_0x000107901f5c(plStack_b0,plStack_a8,adStack_d0,&pplStack_c0);
      for (plVar10 = plStack_b0; plVar10 != plStack_a8; plVar10 = plVar10 + 2) {
        if ((char)plVar10[1] == '\x01') {
          FUN_1078e96d4(&lStack_e8,*plVar10);
        }
      }
      iVar3 = (int)&plStack_b0;
      func_0x000107902048();
      goto LAB_107901820;
    }
  }
  iVar3 = (int)lVar4;
  func_0x0001079186e8();
  func_0x000107901f28();
LAB_107901820:
  lVar9 = lStack_e0;
  lVar4 = lStack_e8;
  func_0x0001079161e4();
  func_0x000107901f0c();
  if (iVar3 != 0) {
    func_0x0001078f3294(&lStack_e8,1);
    lVar4 = lStack_e8;
    lVar9 = lStack_e0;
  }
  if ((ulong)(lVar9 - lVar4) < 0x31) {
    pplVar8 = (long **)0x2;
  }
  else if (0.0 <= *param_4) {
    plStack_b0 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    lStack_a0 = 0;
    pplVar6 = &plStack_b0;
    func_0x0001079023a4();
    uVar7 = 1;
    pplVar8 = (long **)0x2;
    lVar11 = lVar4;
    while (lVar11 = lVar11 + 0x10, lVar11 != lVar9) {
      plStack_a8 = plStack_b0;
      func_0x000107917100(*param_4);
      if ((int)pplVar6 != 2) {
        pplVar8 = pplVar6;
        if ((int)pplVar6 == 1) break;
        if ((uVar7 & 1) == 0) {
          func_0x000107918590();
          func_0x000107915780();
        }
        func_0x000107915884();
        func_0x0001079024fc();
        pplVar8 = (long **)0x0;
        func_0x000107918408(0);
        uVar1 = uVar7 & 1;
        uVar7 = extraout_x8_01;
        if (uVar1 != 0) {
          pplVar8 = (long **)0x0;
          func_0x000107918750();
          uVar7 = extraout_x8_02;
        }
      }
    }
    func_0x000107917dd4();
    if ((int)pplVar8 == 0) {
      func_0x000107918514(*(undefined8 *)(lVar9 + -0x20),*(undefined8 *)(lVar9 + -0x18),*param_4,
                          in_d3,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
      func_0x000107916240();
    }
  }
  else {
    plStack_b0 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    lStack_a0 = 0;
    pplVar6 = &plStack_b0;
    func_0x0001079023a4();
    lVar11 = lVar9 + -0x10;
    uVar7 = 1;
    pplVar8 = (long **)0x2;
    while (lVar11 != lVar4) {
      plStack_a8 = plStack_b0;
      lVar11 = lVar11 + -0x10;
      func_0x000107917100(*param_4);
      if ((int)pplVar6 != 2) {
        pplVar8 = pplVar6;
        if ((int)pplVar6 == 1) break;
        if ((uVar7 & 1) == 0) {
          func_0x000107918590();
          func_0x000107915780();
        }
        func_0x000107915884();
        func_0x0001079024fc();
        pplVar8 = (long **)0x0;
        func_0x000107918408(0);
        uVar1 = uVar7 & 1;
        uVar7 = extraout_x8;
        if (uVar1 != 0) {
          pplVar8 = (long **)0x0;
          func_0x000107918750();
          uVar7 = extraout_x8_00;
        }
      }
    }
    func_0x000107917dd4();
    if ((int)pplVar8 == 0) {
      func_0x000107918514(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),*param_4,in_d3
                          ,*(undefined8 *)(lVar9 + -0x20),*(undefined8 *)(lVar9 + -0x18));
      func_0x000107916240();
    }
  }
  if (lVar9 != lVar4 && (int)pplVar8 == 2) {
    func_0x000107915914(lStack_e8);
    func_0x0001078e8dd0();
  }
  func_0x0001078e64cc(&lStack_e8);
  return pplVar8;
}



/* Entry: 10790205c; end: 1079023a3;  */

void FUN_10790205c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,double param_7,double param_8,ulong param_9,double *param_10,
                  double *param_11,double *param_12,undefined8 *param_13,byte *param_14,
                  undefined8 param_15,undefined8 param_16,double param_17)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  double dStack_88;
  
  dVar6 = *param_10;
  dVar5 = param_10[1];
  uVar3 = param_9;
  func_0x0001078e9d94(param_1,param_2,dVar6);
  iVar2 = (int)uVar3;
  if (iVar2 == -1) {
    dVar4 = *param_11;
    dVar7 = param_11[1];
    dVar9 = *param_12;
    dVar8 = param_12[1];
    func_0x000107917e18(-((dVar8 - param_8) * (dVar4 - param_3)) +
                        (param_7 - dVar9) * (param_4 - dVar7));
    if (((int)uVar3 != 0) &&
       (func_0x000107917e18(-((dVar5 - (dVar7 + dVar8) * 0.5) * (dVar4 - param_3)) +
                            ((dVar4 + dVar9) * 0.5 - dVar6) * (param_4 - dVar7)), (uVar3 & 1) != 0))
    {
      return;
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x0001078e65dc(dVar4,dVar9);
    if (((int)uVar3 == 0) || (func_0x0001078e65dc(dVar7,dVar8), (uVar3 & 1) == 0)) {
      func_0x000107917ee8();
      dVar5 = param_11[1] - param_10[1];
      _atan2(dVar5,*param_11 - *param_10,param_11[1],*param_12,param_12[1]);
      dVar6 = dVar5;
      func_0x0001079183bc();
      _atan2();
      for (; dVar5 < dVar6; dVar6 = dVar6 + -6.283185307179586) {
      }
      dVar7 = (double)NEON_ucvtf(*param_13);
      uVar3 = (ulong)(((dVar5 - dVar6) * dVar7) / 6.283185307179586);
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      dVar7 = (double)uVar3;
      dVar6 = (dVar5 - dVar6) / dVar7;
      while (uVar3 = uVar3 - 1, uVar3 != 0) {
        dVar5 = dVar5 - dVar6;
        dVar4 = *param_10;
        dVar8 = dVar5;
        ___sincos_stret();
        dVar7 = dVar4 + dVar7 * ABS(param_17);
        dStack_88 = param_10[1] + dVar8 * ABS(param_17);
        dStack_90 = dVar7;
        FUN_1078e96d4(&uStack_a8,&dStack_90);
      }
      func_0x000107916474();
      func_0x0001079025bc(param_9,1,param_10,&uStack_a8);
    }
  }
  else if (iVar2 == 1) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x000107917ee8();
    func_0x000107917ef4();
    func_0x0001079167a8();
    uStack_a0 = uStack_a8;
    func_0x000107917ef4();
    func_0x000107916474();
    func_0x0001079167a8();
  }
  else {
    func_0x0001078f1930(param_1,param_2,dVar6,dVar5,param_5,param_6);
    if (iVar2 == 1) {
      return;
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uVar1 = param_17 == 0.0;
    dVar7 = ABS(param_17);
    if (0.0 <= param_17) {
      dVar7 = param_17;
    }
    param_2 = param_2 - dVar5;
    _atan2(param_2,param_1 - dVar6);
    param_2 = param_2 + -1.5707963267948966;
    func_0x0001078e65dc(dVar7,dVar7);
    if (iVar2 == 0) {
      dVar4 = 0.5;
      dVar9 = (dVar7 - dVar7) * 0.5;
      dVar8 = param_2;
      ___sincos_stret();
      dStack_90 = dVar6 + dVar4 * dVar9;
      dStack_88 = dVar5 + dVar8 * dVar9;
      func_0x000107902684(param_2,(dVar7 + dVar7) * 0.5,*(undefined8 *)param_14,&dStack_90,
                          &uStack_a8);
    }
    else {
      func_0x000107902684(param_2,dVar7,*(undefined8 *)param_14,param_10,&uStack_a8);
    }
    if ((*param_14 & 1) != 0) {
      func_0x000107916474();
    }
    func_0x000107915c1c();
    if (!(bool)uVar1) {
      func_0x0001079025bc(param_9,2,param_10,&uStack_a8);
    }
    *(undefined1 *)(*(long *)(param_9 + 0x48) + -8) = 1;
  }
  func_0x0001078e64cc(&uStack_a8);
  return;
}



/* Entry: 1079027cc; end: 1079029d7;  */

void FUN_1079027cc(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [120];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107913cb4();
  uVar3 = *param_1;
  uVar4 = 0;
  func_0x0001079143ec(uVar3,param_1[2]);
  uVar6 = param_1[1];
  uVar5 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = uVar3;
  uStack_88 = uVar6;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  uStack_60 = uVar3;
  uStack_58 = uStack_78;
  func_0x0001079132d8();
  func_0x0001079139f4();
  func_0x000107902c2c();
  func_0x000107913794();
  func_0x000107902c98();
  func_0x0001079155d4();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107913f00(), !(bool)uVar2)) goto LAB_107902834;
      func_0x000107916ef0();
      func_0x000107913df4();
      FUN_107902f98();
      func_0x000107915b2c();
      func_0x00010791354c();
      func_0x000107902d04();
    }
    else {
LAB_107902834:
      func_0x000107913f30();
      func_0x000107902f14();
    }
    func_0x000107913ef0();
    in_CY = false;
    if (((bool)uVar2) && (func_0x000107913ee0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          func_0x000107916ef0();
          func_0x000107915338();
          func_0x000107913880(&uStack_50);
          func_0x000107902d04();
          func_0x000107913894(&uStack_50);
          func_0x000107902d04();
          goto LAB_1079028bc;
        }
      }
    }
    func_0x000107913f20();
    func_0x000107902f14();
    func_0x000107913f10();
    func_0x000107902f14();
  }
LAB_1079028bc:
  func_0x0001079155c8();
  if ((bool)in_ZR) {
    func_0x0001079185d0();
LAB_10790292c:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_107902934;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107913ed0(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x000107914858();
      func_0x000107902f14();
      func_0x000107913ec0();
      func_0x000107902f14();
      goto LAB_10790292c;
    }
    func_0x000107913d34();
    uStack_50 = uVar3;
    uStack_48 = uVar4;
    uStack_40 = uVar5;
    uStack_38 = uVar6;
    func_0x000107915510();
    func_0x000107915b2c();
    func_0x000107913adc(auStack_140,&uStack_a8);
    func_0x000107902d04();
    func_0x000107913650();
    func_0x000107902d04();
LAB_107902934:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107913ea0(), (bool)uVar2)) {
      func_0x000107913a0c();
      func_0x000107902d04();
      goto LAB_107902958;
    }
  }
  func_0x000107914848();
  func_0x000107902f14();
LAB_107902958:
  func_0x000107913e90();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107913e80(), bVar1)) {
    func_0x00010791386c(&uStack_90);
    func_0x000107902d04();
  }
  else {
    func_0x000107913eb0();
    func_0x000107902f14();
  }
  func_0x000107902fd8(auStack_120);
  func_0x000107916e90();
  func_0x000107916cd8();
  func_0x000107915aec();
  func_0x000107915adc();
  func_0x000107915b1c();
  return;
}



/* Entry: 107902f98; end: 107902fcf;  */

void FUN_107902f98(void)

{
  undefined1 in_ZR;
  
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x0001078edab0();
  }
  return;
}



/* Entry: 107903128; end: 10790319b;  */

void FUN_107903128(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107918860();
  while (func_0x00010791814c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x30;
    func_0x0001079126fc();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107903354; end: 1079033b3;  */

void FUN_107903354(ulong param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x00010791464c();
    return;
  }
  func_0x000104bd35f4();
  func_0x000107915b9c();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x000107915c58();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1079036ac; end: 107903737;  */

void FUN_1079036ac(undefined8 param_1,ulong param_2)

{
  undefined4 extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_var;
  
  func_0x000107914b0c();
  if (param_2 < CONCAT44(extraout_var,extraout_w8)) {
    func_0x000107918878();
    func_0x00010790356c();
    func_0x000107918118();
    return;
  }
  func_0x000107903560();
  func_0x00010002bfa0();
  if ((extraout_w8_00 & 1) == 0) {
    func_0x000107903704();
  }
  return;
}



/* Entry: 107906618; end: 10790693f;  */

void FUN_107906618(int *param_1,int *param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uStack_138;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  undefined2 uStack_70;
  
  if (8 < (ulong)((long)param_2 - (long)param_1)) {
    uVar24 = param_4[1];
    uVar23 = *param_4;
    uVar7 = param_4[2];
    if (param_2 != param_1) {
      uVar6 = 0;
      uVar8 = 0;
      uVar11 = 0;
      uVar12 = 0;
      lVar20 = 0;
      lVar16 = 0;
      uStack_c0 = 0xffffffffffffffff;
      uStack_b8 = 0xffffffffffffffff;
      uStack_c8 = 0xffffffffffffffff;
      lStack_a0 = -1;
      lStack_98 = -1;
      uStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
      iVar10 = 0x7fffffff;
      iVar22 = -0x80000000;
      lStack_78 = -1;
      iVar19 = -0x80000000;
      iVar9 = 0x7fffffff;
      bVar15 = 1;
      uStack_70 = 0;
      uStack_a8 = 0x8000000080000000;
      uStack_b0 = 0x7fffffff7fffffff;
      uStack_d0 = 0;
      uStack_138 = (param_3[1] - *param_3) / 0x68;
      iVar18 = *param_1;
      iVar21 = param_1[1];
      piVar3 = param_1;
      while (piVar5 = piVar3 + 2, piVar5 != param_2) {
        iVar1 = *piVar5;
        iVar2 = piVar3[3];
        uVar13 = (uint)(iVar21 < iVar2);
        if (iVar2 < iVar21) {
          uVar13 = 0xffffffff;
        }
        uVar14 = (uint)(iVar18 < iVar1);
        if (iVar1 < iVar18) {
          uVar14 = 0xffffffff;
        }
        if (iVar1 == iVar18) {
          bVar4 = iVar21 == iVar2;
          if (bVar4) {
            uVar13 = 0xffffff9d;
          }
          uVar14 = 0;
          if (bVar4) {
            uVar14 = 0xffffff9d;
          }
          uVar17 = (uint)bVar4;
          if (uStack_90 == 0) goto LAB_1079067a0;
LAB_107906744:
          if ((uVar14 != uVar12 || 10 < uStack_90) || uVar13 != uVar11) {
            if (uVar8 == 0) {
              uStack_138 = (param_3[1] - *param_3) / 0x68;
            }
            func_0x000107906940(param_3,&uStack_d0);
            uStack_70 = 0;
            goto LAB_1079067a0;
          }
          if (iVar1 < iVar9) {
            uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar1);
            iVar9 = iVar1;
          }
          if (iVar19 < iVar1) {
            uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar1);
            iVar19 = iVar1;
          }
          if (iVar2 < iVar10) {
            uStack_b0 = CONCAT44(iVar2,(undefined4)uStack_b0);
            iVar10 = iVar2;
          }
        }
        else {
          uVar17 = 0;
          if (uStack_90 != 0) goto LAB_107906744;
LAB_1079067a0:
          uStack_80 = (undefined1)uVar17;
          if (uVar17 == 0 && !(bool)(bVar15 ^ 1)) {
            bVar15 = 0;
            uStack_70 = 1;
          }
          uStack_d0 = CONCAT44(uVar13,uVar14);
          iVar9 = iVar18;
          if (iVar1 < iVar18) {
            iVar9 = iVar1;
          }
          iVar19 = iVar18;
          if (iVar18 < iVar1) {
            iVar19 = iVar1;
          }
          uStack_a8 = CONCAT44(iVar21,iVar19);
          iVar10 = iVar21;
          if (iVar2 < iVar21) {
            iVar10 = iVar2;
          }
          uStack_b0 = CONCAT44(iVar10,iVar9);
          uStack_90 = 0;
          uStack_b8 = uVar7;
          lStack_88 = (long)param_2 - (long)param_1 >> 3;
          uStack_c8 = uVar23;
          uStack_c0 = uVar24;
          lStack_78 = lVar16;
          lStack_a0 = lVar20;
          iVar22 = iVar21;
          uVar11 = uVar13;
          uVar12 = uVar14;
          uVar8 = uVar17;
          uVar6 = uVar17;
        }
        if (iVar22 < iVar2) {
          uStack_a8 = CONCAT44(iVar2,(undefined4)uStack_a8);
          iVar22 = iVar2;
        }
        lVar20 = lVar20 + 1;
        uStack_90 = uStack_90 + 1;
        lVar16 = lVar16 + (ulong)(uVar17 ^ 1);
        iVar18 = iVar1;
        iVar21 = iVar2;
        piVar3 = piVar5;
        lStack_98 = lVar20;
      }
      if (uStack_90 != 0) {
        if (uVar6 == 0) {
          uStack_138 = (param_3[1] - *param_3) / 0x68;
        }
        func_0x000107906940(param_3,&uStack_d0);
      }
      if ((uStack_138 < (ulong)((param_3[1] - *param_3) / 0x68)) &&
         (lVar20 = *param_3 + uStack_138 * 0x68, (*(byte *)(lVar20 + 0x50) & 1) == 0)) {
        *(undefined1 *)(lVar20 + 0x61) = 1;
      }
    }
  }
  return;
}



/* Entry: 107906fd0; end: 107906fdb;  */

void FUN_107906fd0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107913ad0();
  func_0x000107913cd4();
  uVar1 = *param_1;
  func_0x0001079072d4(uVar1,*(undefined4 *)(unaff_x21 + 8));
  func_0x0001079187c4();
  *(undefined4 *)(unaff_x20 + 8) = uVar1;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 107907344; end: 1079073ab;  */

void FUN_107907344(undefined8 param_1)

{
  undefined1 in_ZR;
  long *unaff_x21;
  
  func_0x00010791462c();
  while (func_0x000107915a18(), !(bool)in_ZR) {
    func_0x000107917f18(param_1,*unaff_x21 + 0x20);
    unaff_x21 = unaff_x21 + 1;
  }
  return;
}



/* Entry: 107907c10; end: 1079081b3;  */

long * FUN_107907c10(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  long *plVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  int iVar27;
  undefined4 uVar28;
  undefined8 extraout_x8;
  long *plVar29;
  int extraout_w9;
  uint uVar30;
  long *unaff_x19;
  ulong uVar31;
  uint uVar32;
  double dVar33;
  uint uStack_180;
  uint uStack_160;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  int *piStack_118;
  int *piStack_110;
  int *piStack_108;
  int *piStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ushort auStack_e8 [13];
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_80;
  
  func_0x0001079175f0();
  func_0x000107913c90();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[6] = param_3;
  param_1[7] = param_2;
  piVar8 = *(int **)(param_2 + 0x10);
  piStack_100 = *(int **)(param_2 + 0x18);
  piVar19 = *(int **)(param_3 + 0x10);
  piStack_110 = *(int **)(param_3 + 0x18);
  iVar17 = *piVar8;
  iVar22 = piVar8[1];
  iVar23 = *piStack_100;
  iVar24 = piStack_100[1];
  iVar20 = *piVar19;
  iVar25 = piVar19[1];
  iVar21 = *piStack_110;
  iVar27 = piStack_110[1];
  uStack_138 = 0x100000000;
  dStack_130 = 0.0;
  uStack_128 = 0x100000000;
  uStack_120 = 0;
  uVar9 = iVar24 - iVar22;
  uVar10 = iVar27 - iVar25;
  uVar11 = iVar23 - iVar17;
  uVar12 = iVar21 - iVar20;
  bVar14 = uVar12 == 0;
  bVar15 = iVar27 == iVar25;
  uStack_160 = (uint)(bVar14 && bVar15);
  piStack_118 = piVar19;
  piStack_108 = piVar8;
  uStack_80 = extraout_x8;
  if ((uVar11 != 0 || iVar24 != iVar22) || (!bVar14 || !bVar15)) {
    iVar13 = iVar17;
    if (iVar23 <= iVar17) {
      iVar13 = iVar23;
    }
    iVar5 = iVar17;
    if (iVar17 <= iVar23) {
      iVar5 = iVar23;
    }
    iVar6 = iVar20;
    if (iVar21 <= iVar20) {
      iVar6 = iVar21;
    }
    iVar7 = iVar20;
    if (iVar20 <= iVar21) {
      iVar7 = iVar21;
    }
    uVar16 = iVar6 <= iVar5 && iVar7 == iVar13;
    if (iVar6 <= iVar5 && iVar13 <= iVar7) {
      iVar13 = iVar22;
      if (iVar24 <= iVar22) {
        iVar13 = iVar24;
      }
      iVar5 = iVar22;
      if (iVar22 <= iVar24) {
        iVar5 = iVar24;
      }
      iVar6 = iVar25;
      if (iVar27 <= iVar25) {
        iVar6 = iVar27;
      }
      iVar7 = iVar25;
      if (iVar25 <= iVar27) {
        iVar7 = iVar27;
      }
      uVar16 = iVar6 <= iVar5 && iVar7 == iVar13;
      if (iVar6 <= iVar5 && iVar13 <= iVar7) {
        func_0x000107918194();
        func_0x0001079172b8();
        uStack_180 = uStack_160;
        func_0x000107918194();
        func_0x00010790827c();
        uStack_f8 = CONCAT44(uStack_180,uStack_160);
        uVar16 = uStack_180 * uStack_160 == 1;
        if (!(bool)uVar16) {
          uVar30 = uStack_180;
          func_0x0001079187b0();
          func_0x00010790827c();
          uVar32 = uVar30;
          func_0x0001079187b0();
          func_0x00010790827c();
          uStack_f0 = CONCAT44(uVar32,uVar30);
          uVar16 = uVar32 * uVar30 == 1;
          if (!(bool)uVar16) {
            if ((uStack_180 != 0 || uStack_160 != 0) || (uVar30 != 0 || uVar32 != 0)) {
              iVar13 = uVar12 * uVar9 - uVar10 * uVar11;
              uVar16 = iVar13 == 0;
              if ((bool)uVar16) {
                uVar32 = 0;
                uVar30 = 0;
                uStack_180 = 0;
                uStack_160 = 0;
                uStack_f8 = 0;
                uStack_f0 = 0;
                goto LAB_107907e68;
              }
              uStack_138 = CONCAT44(uVar10 * uVar11 - uVar12 * uVar9,
                                    uVar12 * (iVar22 - iVar25) + uVar10 * (iVar20 - iVar17));
              func_0x00010790831c(&uStack_138);
              uStack_128 = CONCAT44(iVar13,(iVar17 - iVar20) * uVar9 + (iVar25 - iVar22) * uVar11);
              func_0x00010790831c(&uStack_128);
              dVar33 = dStack_130;
LAB_107907f34:
              iVar17 = (int)auStack_e8;
              func_0x0001079082e4();
              auStack_e8[0] = 1;
              auStack_e8[1] = 0;
              auStack_e8[2] = 0;
              auStack_e8[3] = 0;
              func_0x000107916cb4((double)(uVar9 * uVar9 + uVar11 * uVar11),
                                  (double)(uVar10 * uVar10 + uVar12 * uVar12),dVar33 / 1000000.0);
              func_0x00010791668c();
              if (iVar17 == 0) {
                iVar23 = (int)(uStack_128 >> 0x20);
                func_0x000107908d68(auStack_e8 + 4,&piStack_118,uVar12,uVar10,
                                    uStack_128 & 0xffffffff,uStack_128 >> 0x20);
                iVar17 = (int)(uStack_138 >> 0x20);
              }
              else {
                iVar17 = (int)(uStack_138 >> 0x20);
                func_0x000107908d68(auStack_e8 + 4,&piStack_108,uVar11,uVar9,uStack_138 & 0xffffffff
                                    ,uStack_138 >> 0x20);
                iVar23 = (int)(uStack_128 >> 0x20);
              }
              if (iVar17 == 0 && iVar23 == 0) {
                func_0x000107908cac(auStack_e8 + 4,&piStack_108);
                func_0x000107908cac(auStack_e8 + 4,&piStack_118);
              }
              uStack_b0 = 1;
              uStack_c8 = SUB82(dStack_130,0);
              uStack_c6 = (undefined6)((ulong)dStack_130 >> 0x10);
              auStack_e8[0xc] = (ushort)uStack_138;
              uStack_ce = (undefined6)(uStack_138 >> 0x10);
              uStack_b8 = uStack_120;
              uStack_c0 = (undefined2)uStack_128;
              uStack_be = (undefined6)(uStack_128 >> 0x10);
              if (uStack_160 == 0 && uVar30 == 0) {
                func_0x00010791799c();
LAB_1079080a8:
                func_0x0001078ed0b8();
              }
              else if (uStack_180 == 0 && uVar32 == 0) {
                func_0x00010791799c();
                func_0x0001078ed108();
              }
              else {
                if (uStack_180 == 0 && uVar30 == 0) {
                  uVar16 = uVar32 == 1;
                  uVar28 = 1;
                  if (!(bool)uVar16) {
                    uVar28 = 0xffffffff;
                  }
                  *(undefined2 *)(unaff_x19 + 0x15) = 0x61;
                  uVar26 = 0xffffffff00000001;
                }
                else {
                  if (uStack_160 != 0 || uVar32 != 0) {
                    if (uVar30 == 0) {
                      func_0x00010791799c();
                    }
                    else {
                      if (uStack_160 != 0) {
                        func_0x00010791799c();
                        if (uVar32 == 0) {
                          func_0x0001078ed1e8();
                        }
                        else {
                          if (extraout_w9 != 0) goto LAB_1079080a8;
                          func_0x0001078ed208();
                        }
                        goto LAB_107908190;
                      }
                      func_0x00010791799c();
                    }
                    func_0x0001078ed198();
                    goto LAB_107908190;
                  }
                  uVar16 = uVar30 == 1;
                  uVar28 = 1;
                  if (!(bool)uVar16) {
                    uVar28 = 0xffffffff;
                  }
                  *(undefined2 *)(unaff_x19 + 0x15) = 0x61;
                  uVar26 = 0x1ffffffff;
                }
                *(undefined8 *)((long)unaff_x19 + 0xac) = uVar26;
                *(undefined4 *)((long)unaff_x19 + 0xb4) = uVar28;
                *(undefined4 *)(unaff_x19 + 0x17) = uVar28;
                *(undefined8 *)((long)unaff_x19 + 0xc4) = uStack_f0;
                *(undefined8 *)((long)unaff_x19 + 0xbc) = uStack_f8;
                *(undefined8 *)((long)unaff_x19 + 0xcc) = uVar26;
              }
LAB_107908190:
              plVar18 = unaff_x19 + 8;
              func_0x000107914ab4(plVar18,auStack_e8);
              goto LAB_107907dd4;
            }
LAB_107907e68:
            uVar1 = -uVar11;
            if (-1 < (int)uVar11) {
              uVar1 = uVar11;
            }
            uVar2 = -uVar9;
            if (-1 < (int)uVar9) {
              uVar2 = uVar9;
            }
            uVar3 = -uVar12;
            if (-1 < (int)uVar12) {
              uVar3 = uVar12;
            }
            uVar4 = -uVar10;
            if (-1 < (int)uVar10) {
              uVar4 = uVar10;
            }
            if (uVar11 != 0 || iVar24 != iVar22) {
              if (!bVar14 || !bVar15) {
                if (uVar1 <= uVar3) {
                  uVar3 = uVar1;
                }
                if (uVar2 <= uVar4) {
                  uVar4 = uVar2;
                }
                uVar16 = uVar3 == uVar4;
                if ((bool)uVar16) {
                  if (uVar3 == 0) {
                    dVar33 = 0.0;
                    goto LAB_107907f34;
                  }
LAB_1079080cc:
                  iVar24 = iVar23;
                  iVar27 = iVar21;
                  iVar22 = iVar17;
                  iVar25 = iVar20;
                }
                else if (uVar4 < uVar3) goto LAB_1079080cc;
                plVar18 = unaff_x19 + 8;
                func_0x000107908468(plVar18,&piStack_108,&piStack_118,iVar22,iVar24,iVar25,iVar27);
                goto LAB_107907dd4;
              }
              uVar16 = uVar1 == uVar2;
              if (uVar1 < uVar2) {
                iVar23 = iVar24;
                iVar17 = iVar22;
                iVar20 = iVar25;
              }
              uVar26 = 0;
              iVar21 = iVar17;
            }
            else {
              uVar16 = uVar3 == uVar4;
              iVar23 = iVar21;
              if (uVar3 < uVar4) {
                iVar23 = iVar27;
                iVar17 = iVar22;
                iVar20 = iVar25;
              }
              uVar26 = 1;
              piVar19 = piVar8;
              iVar21 = iVar20;
              iVar20 = iVar17;
            }
            plVar18 = unaff_x19 + 8;
            func_0x000107908368(plVar18,piVar19,iVar20,iVar21,iVar23,uVar26);
            goto LAB_107907dd4;
          }
        }
      }
    }
  }
  else {
    uVar16 = iVar17 == iVar20 && iVar22 == iVar25;
    if (iVar17 == iVar20 && iVar22 == iVar25) {
      plVar18 = unaff_x19 + 8;
      func_0x0001079082e4();
      auStack_e8[5] = 0;
      auStack_e8[6] = 0;
      auStack_e8[7] = 0;
      auStack_e8[8] = 0;
      auStack_e8[1] = 0;
      auStack_e8[2] = 0;
      auStack_e8[3] = 0;
      auStack_e8[4] = 0;
      uStack_ce = 0;
      uStack_c8 = 0;
      auStack_e8[9] = 0;
      auStack_e8[10] = 0;
      auStack_e8[0xb] = 0;
      auStack_e8[0xc] = 0;
      uStack_c6 = 0;
      uStack_c0 = 0;
      *(undefined8 *)((long)unaff_x19 + 0xb2) = 0;
      *(ulong *)((long)unaff_x19 + 0xaa) = (ulong)auStack_e8[0];
      unaff_x19[8] = 1;
      *(int *)(unaff_x19 + 9) = iVar17;
      *(int *)((long)unaff_x19 + 0x4c) = iVar22;
      *(undefined2 *)(unaff_x19 + 0x15) = 0x30;
      *(undefined8 *)((long)unaff_x19 + 0xc2) = 0;
      *(undefined8 *)((long)unaff_x19 + 0xba) = 0;
      *(undefined8 *)((long)unaff_x19 + 0xcc) = 0;
      *(undefined8 *)((long)unaff_x19 + 0xc4) = 0;
      goto LAB_107907dd4;
    }
  }
  plVar18 = unaff_x19 + 8;
  func_0x00010790822c();
LAB_107907dd4:
  unaff_x19[0x1b] = param_4;
  unaff_x19[0x1c] = param_5;
  func_0x000107913564(uStack_80);
  if ((bool)uVar16) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  if ((*(byte *)(plVar18 + 9) & 1) == 0) {
    iVar17 = *(int *)plVar18[3];
    iVar23 = ((int *)plVar18[3])[1];
    for (uVar31 = 0;
        (plVar29 = (long *)plVar18[4],
        iVar17 == (int)*plVar29 && iVar23 == *(int *)((long)plVar29 + 4) &&
        (uVar31 < *(ulong *)(*plVar18 + 0x48))); uVar31 = uVar31 + 1) {
      func_0x0001079092b0(plVar18 + 4);
    }
    plVar18[8] = *plVar29;
    *(undefined1 *)(plVar18 + 9) = 1;
  }
  return plVar18 + 8;
}



/* Entry: 107908994; end: 107908b1b;  */

undefined1  [16] FUN_107908994(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  
  if ((bRam0000000113726a90 & 1) == 0) {
    iVar2 = 0x13726a90;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam0000000113726aa8 = 0x100000001;
      func_0x00010790831c();
      ___cxa_guard_release(0x113726a90);
    }
  }
  auVar1._8_8_ = uRam0000000113726ab0;
  auVar1._0_8_ = uRam0000000113726aa8;
  return auVar1;
}



/* Entry: 107909034; end: 107909057;  */

void FUN_107909034(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1079092e8; end: 10790930b;  */

void FUN_1079092e8(long param_1)

{
  func_0x000107914c90();
  if (param_1 != 0) {
    func_0x000107914de8();
  }
  return;
}



/* Entry: 10790976c; end: 1079097cb;  */

void FUN_10790976c(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  uVar1 = param_3 == 99;
  if ((param_3 < 100) &&
     (uVar1 = param_2[1] - *param_2 == 0x79, 0x78 < (ulong)(param_2[1] - *param_2))) {
    func_0x000107913fec(param_1,param_2,param_3 + 1);
    func_0x0001079135a4();
    func_0x0001079134a0();
    func_0x000107915c1c();
    if (!(bool)uVar1) {
      func_0x000107917308();
      func_0x000107915144();
      func_0x000107914d88();
      func_0x0001079095fc();
      func_0x0001079148c4();
      func_0x000107914aa0();
      func_0x0001079096bc();
      func_0x0001079148b4();
      func_0x000107914aa0();
      func_0x0001079096bc();
    }
    func_0x00010791658c();
    func_0x000107914d88();
    func_0x0001079095fc();
    func_0x0001079165f8();
    func_0x000107914d88();
    func_0x0001079095fc();
    func_0x0001079151e0();
    func_0x00010791518c();
    func_0x000107915024();
    return;
  }
  func_0x000107915d78(param_2,param_4);
  if (!(bool)uVar1) {
    func_0x000107914c78();
    lVar2 = extraout_x8;
    while (unaff_x21 != lVar2) {
      func_0x000107915d6c();
      lVar2 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar2) {
        func_0x00010791460c();
        func_0x0001079093a0();
        lVar2 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}


