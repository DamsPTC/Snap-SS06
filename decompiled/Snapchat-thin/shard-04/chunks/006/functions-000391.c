/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103688540; end: 1036885ef;  */

int FUN_103688540(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1036885f0; end: 1036886bf;  */

undefined8 * FUN_1036885f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar2 = param_2[4];
  uVar1 = param_2[5];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 1036886c0; end: 10368870f;  */

undefined8 * FUN_1036886c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103688710; end: 10368871f;  */

undefined1  [16] FUN_103688710(void)

{
  return ZEXT816(0x110678d98);
}



/* Entry: 103688720; end: 1036887e7;  */

undefined8 * FUN_103688720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 1036887e8; end: 10368882f;  */

undefined8 * FUN_1036887e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_1[4];
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x00010006c090(uVar3,uVar1);
  return param_1;
}



/* Entry: 103688830; end: 1036888ef;  */

int FUN_103688830(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1036888f0; end: 103688937;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1036888f0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[5] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_103685efc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],&SUB_10006c090);
  }
  uVar1 = param_1[6];
  uVar2 = (uint)((ulong)param_1[7] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[7] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103688938; end: 103688b2b;  */

undefined8 * FUN_103688938(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[5];
  if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
  }
  else {
    uVar4 = *param_2;
    uVar6 = param_2[1];
    uVar5 = param_2[2];
    uVar1 = param_2[3];
    uVar3 = param_2[4];
    FUN_103685efc(uVar4,uVar6,uVar5,uVar1,uVar3,uVar2,&SUB_10006c00c);
    *param_1 = uVar4;
    param_1[1] = uVar6;
    param_1[2] = uVar5;
    param_1[3] = uVar1;
    param_1[4] = uVar3;
    param_1[5] = uVar2;
  }
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  func_0x00010006c00c(uVar4,uVar5);
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  return param_1;
}



/* Entry: 103688b2c; end: 103688bfb;  */

undefined8 * FUN_103688b2c(undefined8 *param_1)

{
  FUN_103685efc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],&SUB_10006c090);
  return param_1;
}



/* Entry: 103688bfc; end: 103688cbf;  */

int FUN_103688bfc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103688cc0; end: 103688ceb;  */

void FUN_103688cc0(undefined8 *param_1)

{
  FUN_103685efc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],&SUB_10006c090);
  return;
}



/* Entry: 103688cec; end: 103688deb;  */

undefined8 * FUN_103688cec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  FUN_103685efc(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,&SUB_10006c00c);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  return param_1;
}



/* Entry: 103688dec; end: 103688e3b;  */

undefined8 * FUN_103688dec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  FUN_103685efc(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6,&SUB_10006c090);
  return param_1;
}



/* Entry: 103688e3c; end: 103688f1b;  */

uint FUN_103688e3c(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 2;
  }
  return (uint)(((*(ulong *)(param_1 + 10) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0);
}



/* Entry: 103688f1c; end: 10368901b;  */

void FUN_103688f1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f838b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf71e4;
  func_0x000107c61520(&DAT_10dbf71e4,&UNK_110678ed0);
  puRam0000000112f838b8 = puVar1;
  return;
}



/* Entry: 10368901c; end: 103689077;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10368901c(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103689078; end: 1036890bf;  */

void FUN_103689078(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf7690,0x3f,2);
  uRam000000011380b938 = uStack_38;
  uRam000000011380b930 = uStack_40;
  uRam000000011380b948 = uStack_28;
  uRam000000011380b940 = uStack_30;
  uRam000000011380b958 = uStack_18;
  uRam000000011380b950 = uStack_20;
  return;
}



/* Entry: 1036890c0; end: 10368918b;  */

void FUN_1036890c0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_103689158;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x40);
          goto LAB_103689158;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x30);
        }
        else {
          if (lVar1 != 4) goto LAB_103689168;
          pcVar3 = *(code **)(param_3 + 0x40);
        }
LAB_103689158:
        (*pcVar3)();
      }
LAB_103689168:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10368918c; end: 10368926b;  */

void FUN_10368918c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
       ((*(long *)(unaff_x20[2] + 0x10) == 0 ||
        ((**(code **)(param_3 + 0x130))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)))) &&
      ((unaff_x20[3] == 0 || ((**(code **)(param_3 + 0x10))(3,param_2,param_3), unaff_x21 == 0))))
     && ((*(long *)(unaff_x20[4] + 0x10) == 0 ||
         ((**(code **)(param_3 + 0x130))(unaff_x20[4],4,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 10368926c; end: 1036892bb;  */

/* WARNING: Possible PIC construction at 0x000103689688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010368968c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10368926c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  double *pdVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  double *pdVar27;
  byte *pbVar28;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar29;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar15 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  lVar22 = param_1[2];
  lVar26 = param_2[2];
  lVar19 = *(long *)(lVar22 + 0x10);
  if (lVar19 == *(long *)(lVar26 + 0x10)) {
    if (lVar19 != 0 && lVar22 != lVar26) {
      pdVar23 = (double *)(lVar22 + 0x20);
      pdVar27 = (double *)(lVar26 + 0x20);
      do {
        if (*pdVar23 != *pdVar27) {
          return (byte *)0x0;
        }
        lVar19 = lVar19 + -1;
        pdVar23 = pdVar23 + 1;
        pdVar27 = pdVar27 + 1;
      } while (lVar19 != 0);
    }
    if ((double)param_1[3] == (double)param_2[3]) {
      lVar22 = param_1[4];
      lVar26 = param_2[4];
      lVar19 = *(long *)(lVar22 + 0x10);
      if (lVar19 == *(long *)(lVar26 + 0x10)) {
        if (lVar19 != 0 && lVar22 != lVar26) {
          pdVar23 = (double *)(lVar22 + 0x20);
          pdVar27 = (double *)(lVar26 + 0x20);
          do {
            if (*pdVar23 != *pdVar27) {
              return (byte *)0x0;
            }
            lVar19 = lVar19 + -1;
            pdVar23 = pdVar23 + 1;
            pdVar27 = pdVar27 + 1;
          } while (lVar19 != 0);
        }
        pbVar10 = (byte *)param_1[5];
        pbVar29 = (byte *)param_1[6];
        lVar19 = param_2[5];
        uVar16 = param_2[6];
        puVar7 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(byte **)(puVar7 + -0x48) = unaff_x25;
          *(byte **)(puVar7 + -0x40) = unaff_x24;
          *(byte **)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = unaff_x20;
          *(byte **)(puVar7 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar7 + -8) = unaff_x30;
          *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)pbVar29 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar24 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar29;
          if ((ulong)pbVar29 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar29 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar21 = (ulong)pbVar29 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar24 == 0) {
              uVar25 = uVar16 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar18 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar24 == 2) {
              uVar25 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar21 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
              if (uVar18 < 2) {
                if (uVar18 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar29;
                  puVar7[-0x67] = (char)((ulong)pbVar29 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar29 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar29 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar29 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar29 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar29 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar29;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar13 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar13) {
                      pbVar13 = unaff_x23;
                    }
                    pbVar13 = pbVar13 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar13 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar22 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar22;
                if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar29;
                if (pbVar10 == (byte *)0x0) {
                  pbVar13 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar29 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
            return pbVar9;
          }
          func_0x000107c60e78();
          *(byte **)(puVar7 + -0xc0) = unaff_x24;
          *(byte **)(puVar7 + -0xb8) = unaff_x23;
          *(ulong *)(puVar7 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
          *(ulong *)(puVar7 + -0xa0) = unaff_x20;
          *(byte **)(puVar7 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
          pbVar12 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar28 = *(byte **)(pbVar9 + 0x18);
          bVar30 = pbVar9[0x28];
          pbVar29 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar30 < 3) {
            if (bVar30 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar30 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar17 = *(byte **)(pbVar13 + 0x10);
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar29;
              if ((pbVar10 == pbVar15) && (pbVar29 == pbVar17)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              lVar19 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar28 != (byte *)0x0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar19);
                  func_0x000107c61174();
                  pbVar12 = pbVar28;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar28);
                  func_0x000107c61170(lVar19);
                  pbVar28 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
          }
          lVar22 = *(long *)(pbVar9 + 0x20);
          if (bVar30 < 5) {
            if (bVar30 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar29, pbVar14 = pbVar28, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar17 = *(byte **)(pbVar13 + 0x18),
                 pbVar29 == *(byte **)(pbVar13 + 0x10) && pbVar28 == *(byte **)(pbVar13 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar13[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar19 = *(long *)(pbVar13 + 0x20);
            if (pbVar29 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar17 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar29;
              if ((pbVar10 != pbVar15) || (pbVar29 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar28 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar28,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar28 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar30 != 5) {
            if ((((pbVar28 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar22 == 0) && pbVar29 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar30 = pbVar13[8] | (byte)lVar19;
              bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar38 = pbVar13[0x10] | (byte)lVar22;
              bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar46[1] = bVar31;
              auVar46[0] = bVar30;
              auVar46[2] = bVar32;
              auVar46[3] = bVar33;
              auVar46[4] = bVar34;
              auVar46[5] = bVar35;
              auVar46[6] = bVar36;
              auVar46[7] = bVar37;
              auVar46[8] = bVar38;
              auVar46[9] = bVar39;
              auVar46[10] = bVar40;
              auVar46[0xb] = bVar41;
              auVar46[0xc] = bVar42;
              auVar46[0xd] = bVar43;
              auVar46[0xe] = bVar44;
              auVar46[0xf] = bVar45;
              auVar3[1] = bVar31;
              auVar3[0] = bVar30;
              auVar3[2] = bVar32;
              auVar3[3] = bVar33;
              auVar3[4] = bVar34;
              auVar3[5] = bVar35;
              auVar3[6] = bVar36;
              auVar3[7] = bVar37;
              auVar3[8] = bVar38;
              auVar3[9] = bVar39;
              auVar3[10] = bVar40;
              auVar3[0xb] = bVar41;
              auVar3[0xc] = bVar42;
              auVar3[0xd] = bVar43;
              auVar3[0xe] = bVar44;
              auVar3[0xf] = bVar45;
              auVar46 = NEON_ext(auVar46,auVar3,8,1);
              if (CONCAT17(bVar37 | auVar46[7],
                           CONCAT16(bVar36 | auVar46[6],
                                    CONCAT15(bVar35 | auVar46[5],
                                             CONCAT14(bVar34 | auVar46[4],
                                                      CONCAT13(bVar33 | auVar46[3],
                                                               CONCAT12(bVar32 | auVar46[2],
                                                                        CONCAT11(bVar31 | auVar46[1]
                                                                                 ,bVar30 | auVar46[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar28 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar29 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar30 = pbVar13[8] | (byte)lVar19;
            bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar38 = pbVar13[0x10] | (byte)lVar22;
            bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar31;
            auVar1[0] = bVar30;
            auVar1[2] = bVar32;
            auVar1[3] = bVar33;
            auVar1[4] = bVar34;
            auVar1[5] = bVar35;
            auVar1[6] = bVar36;
            auVar1[7] = bVar37;
            auVar1[8] = bVar38;
            auVar1[9] = bVar39;
            auVar1[10] = bVar40;
            auVar1[0xb] = bVar41;
            auVar1[0xc] = bVar42;
            auVar1[0xd] = bVar43;
            auVar1[0xe] = bVar44;
            auVar1[0xf] = bVar45;
            auVar2[1] = bVar31;
            auVar2[0] = bVar30;
            auVar2[2] = bVar32;
            auVar2[3] = bVar33;
            auVar2[4] = bVar34;
            auVar2[5] = bVar35;
            auVar2[6] = bVar36;
            auVar2[7] = bVar37;
            auVar2[8] = bVar38;
            auVar2[9] = bVar39;
            auVar2[10] = bVar40;
            auVar2[0xb] = bVar41;
            auVar2[0xc] = bVar42;
            auVar2[0xd] = bVar43;
            auVar2[0xe] = bVar44;
            auVar2[0xf] = bVar45;
            auVar46 = NEON_ext(auVar1,auVar2,8,1);
            lVar19 = CONCAT17(bVar37 | auVar46[7],
                              CONCAT16(bVar36 | auVar46[6],
                                       CONCAT15(bVar35 | auVar46[5],
                                                CONCAT14(bVar34 | auVar46[4],
                                                         CONCAT13(bVar33 | auVar46[3],
                                                                  CONCAT12(bVar32 | auVar46[2],
                                                                           CONCAT11(bVar31 | auVar46
                                                  [1],bVar30 | auVar46[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar22,uVar11);
          if (((ulong)pbVar12 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
          unaff_x20 = *(ulong *)(puVar7 + -0xa0);
          unaff_x19 = *(byte **)(puVar7 + -0x98);
          unaff_x22 = *(ulong *)(puVar7 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
          unaff_x24 = *(byte **)(puVar7 + -0xc0);
          unaff_x23 = *(byte **)(puVar7 + -0xb8);
          puVar7 = puVar7 + -0x80;
        } while( true );
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 1036892bc; end: 1036892eb;  */

undefined1  [16] FUN_1036892bc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 1036892ec; end: 10368931f;  */

void FUN_1036892ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 103689320; end: 103689333;  */

undefined1  [16] FUN_103689320(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x103689330;
  return auVar1;
}



/* Entry: 103689334; end: 10368935b;  */

void FUN_103689334(void)

{
  FUN_1036890c0();
  return;
}



/* Entry: 10368935c; end: 10368935f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10368935c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103689360; end: 103689397;  */

uint FUN_103689360(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_103689ae4();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103689398; end: 1036893ef;  */

uint FUN_103689398(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_103689658(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1036893f0; end: 10368948f;  */

/* WARNING: Possible PIC construction at 0x00010368943c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010368944c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103689440) */
/* WARNING: Removing unreachable block (ram,0x000103689450) */

void FUN_1036893f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f838f0 != -1) {
    func_0x000107c61568(0x112f838f0,FUN_103689078);
  }
  uVar5 = uRam000000011380b958;
  uVar4 = uRam000000011380b950;
  uVar3 = uRam000000011380b948;
  uVar2 = uRam000000011380b940;
  uVar1 = uRam000000011380b938;
  *param_1 = uRam000000011380b930;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103689490; end: 1036894cb;  */

void FUN_103689490(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f83910;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f83910,&UNK_10dbf7680);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1036894cc; end: 1036895ff;  */

void FUN_1036894cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_50 = unaff_x20[3];
  uStack_48 = unaff_x20[4];
  uStack_58 = unaff_x20[2];
  uStack_60 = unaff_x20[1];
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103689600; end: 103689657;  */

uint FUN_103689600(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_103689658(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103689658; end: 10368974b;  */

/* WARNING: Possible PIC construction at 0x000103689688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010368968c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103689658(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  double *pdVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  double *pdVar27;
  byte *pbVar28;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar29;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar15 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  lVar22 = param_1[2];
  lVar26 = param_2[2];
  lVar19 = *(long *)(lVar22 + 0x10);
  if (lVar19 == *(long *)(lVar26 + 0x10)) {
    if (lVar19 != 0 && lVar22 != lVar26) {
      pdVar23 = (double *)(lVar22 + 0x20);
      pdVar27 = (double *)(lVar26 + 0x20);
      do {
        if (*pdVar23 != *pdVar27) {
          return (byte *)0x0;
        }
        lVar19 = lVar19 + -1;
        pdVar23 = pdVar23 + 1;
        pdVar27 = pdVar27 + 1;
      } while (lVar19 != 0);
    }
    if ((double)param_1[3] == (double)param_2[3]) {
      lVar22 = param_1[4];
      lVar26 = param_2[4];
      lVar19 = *(long *)(lVar22 + 0x10);
      if (lVar19 == *(long *)(lVar26 + 0x10)) {
        if (lVar19 != 0 && lVar22 != lVar26) {
          pdVar23 = (double *)(lVar22 + 0x20);
          pdVar27 = (double *)(lVar26 + 0x20);
          do {
            if (*pdVar23 != *pdVar27) {
              return (byte *)0x0;
            }
            lVar19 = lVar19 + -1;
            pdVar23 = pdVar23 + 1;
            pdVar27 = pdVar27 + 1;
          } while (lVar19 != 0);
        }
        pbVar10 = (byte *)param_1[5];
        pbVar29 = (byte *)param_1[6];
        lVar19 = param_2[5];
        uVar16 = param_2[6];
        puVar7 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(byte **)(puVar7 + -0x48) = unaff_x25;
          *(byte **)(puVar7 + -0x40) = unaff_x24;
          *(byte **)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = unaff_x20;
          *(byte **)(puVar7 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar7 + -8) = unaff_x30;
          *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)pbVar29 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar24 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar29;
          if ((ulong)pbVar29 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar29 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar21 = (ulong)pbVar29 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar24 == 0) {
              uVar25 = uVar16 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar18 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar24 == 2) {
              uVar25 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar21 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
              if (uVar18 < 2) {
                if (uVar18 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar29;
                  puVar7[-0x67] = (char)((ulong)pbVar29 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar29 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar29 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar29 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar29 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar29 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar29;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar13 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar13) {
                      pbVar13 = unaff_x23;
                    }
                    pbVar13 = pbVar13 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar13 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar22 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar22;
                if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar29;
                if (pbVar10 == (byte *)0x0) {
                  pbVar13 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar29 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
            return pbVar9;
          }
          func_0x000107c60e78();
          *(byte **)(puVar7 + -0xc0) = unaff_x24;
          *(byte **)(puVar7 + -0xb8) = unaff_x23;
          *(ulong *)(puVar7 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
          *(ulong *)(puVar7 + -0xa0) = unaff_x20;
          *(byte **)(puVar7 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
          pbVar12 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar28 = *(byte **)(pbVar9 + 0x18);
          bVar30 = pbVar9[0x28];
          pbVar29 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar30 < 3) {
            if (bVar30 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar30 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar17 = *(byte **)(pbVar13 + 0x10);
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar29;
              if ((pbVar10 == pbVar15) && (pbVar29 == pbVar17)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              lVar19 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar28 != (byte *)0x0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar19);
                  func_0x000107c61174();
                  pbVar12 = pbVar28;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar28);
                  func_0x000107c61170(lVar19);
                  pbVar28 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
          }
          lVar22 = *(long *)(pbVar9 + 0x20);
          if (bVar30 < 5) {
            if (bVar30 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar29, pbVar14 = pbVar28, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar17 = *(byte **)(pbVar13 + 0x18),
                 pbVar29 == *(byte **)(pbVar13 + 0x10) && pbVar28 == *(byte **)(pbVar13 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar13[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar19 = *(long *)(pbVar13 + 0x20);
            if (pbVar29 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar17 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar29;
              if ((pbVar10 != pbVar15) || (pbVar29 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar28 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar28,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar28 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar30 != 5) {
            if ((((pbVar28 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar22 == 0) && pbVar29 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar30 = pbVar13[8] | (byte)lVar19;
              bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar38 = pbVar13[0x10] | (byte)lVar22;
              bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar46[1] = bVar31;
              auVar46[0] = bVar30;
              auVar46[2] = bVar32;
              auVar46[3] = bVar33;
              auVar46[4] = bVar34;
              auVar46[5] = bVar35;
              auVar46[6] = bVar36;
              auVar46[7] = bVar37;
              auVar46[8] = bVar38;
              auVar46[9] = bVar39;
              auVar46[10] = bVar40;
              auVar46[0xb] = bVar41;
              auVar46[0xc] = bVar42;
              auVar46[0xd] = bVar43;
              auVar46[0xe] = bVar44;
              auVar46[0xf] = bVar45;
              auVar3[1] = bVar31;
              auVar3[0] = bVar30;
              auVar3[2] = bVar32;
              auVar3[3] = bVar33;
              auVar3[4] = bVar34;
              auVar3[5] = bVar35;
              auVar3[6] = bVar36;
              auVar3[7] = bVar37;
              auVar3[8] = bVar38;
              auVar3[9] = bVar39;
              auVar3[10] = bVar40;
              auVar3[0xb] = bVar41;
              auVar3[0xc] = bVar42;
              auVar3[0xd] = bVar43;
              auVar3[0xe] = bVar44;
              auVar3[0xf] = bVar45;
              auVar46 = NEON_ext(auVar46,auVar3,8,1);
              if (CONCAT17(bVar37 | auVar46[7],
                           CONCAT16(bVar36 | auVar46[6],
                                    CONCAT15(bVar35 | auVar46[5],
                                             CONCAT14(bVar34 | auVar46[4],
                                                      CONCAT13(bVar33 | auVar46[3],
                                                               CONCAT12(bVar32 | auVar46[2],
                                                                        CONCAT11(bVar31 | auVar46[1]
                                                                                 ,bVar30 | auVar46[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar28 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar29 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar30 = pbVar13[8] | (byte)lVar19;
            bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar38 = pbVar13[0x10] | (byte)lVar22;
            bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar31;
            auVar1[0] = bVar30;
            auVar1[2] = bVar32;
            auVar1[3] = bVar33;
            auVar1[4] = bVar34;
            auVar1[5] = bVar35;
            auVar1[6] = bVar36;
            auVar1[7] = bVar37;
            auVar1[8] = bVar38;
            auVar1[9] = bVar39;
            auVar1[10] = bVar40;
            auVar1[0xb] = bVar41;
            auVar1[0xc] = bVar42;
            auVar1[0xd] = bVar43;
            auVar1[0xe] = bVar44;
            auVar1[0xf] = bVar45;
            auVar2[1] = bVar31;
            auVar2[0] = bVar30;
            auVar2[2] = bVar32;
            auVar2[3] = bVar33;
            auVar2[4] = bVar34;
            auVar2[5] = bVar35;
            auVar2[6] = bVar36;
            auVar2[7] = bVar37;
            auVar2[8] = bVar38;
            auVar2[9] = bVar39;
            auVar2[10] = bVar40;
            auVar2[0xb] = bVar41;
            auVar2[0xc] = bVar42;
            auVar2[0xd] = bVar43;
            auVar2[0xe] = bVar44;
            auVar2[0xf] = bVar45;
            auVar46 = NEON_ext(auVar1,auVar2,8,1);
            lVar19 = CONCAT17(bVar37 | auVar46[7],
                              CONCAT16(bVar36 | auVar46[6],
                                       CONCAT15(bVar35 | auVar46[5],
                                                CONCAT14(bVar34 | auVar46[4],
                                                         CONCAT13(bVar33 | auVar46[3],
                                                                  CONCAT12(bVar32 | auVar46[2],
                                                                           CONCAT11(bVar31 | auVar46
                                                  [1],bVar30 | auVar46[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar22,uVar11);
          if (((ulong)pbVar12 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
          unaff_x20 = *(ulong *)(puVar7 + -0xa0);
          unaff_x19 = *(byte **)(puVar7 + -0x98);
          unaff_x22 = *(ulong *)(puVar7 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
          unaff_x24 = *(byte **)(puVar7 + -0xc0);
          unaff_x23 = *(byte **)(puVar7 + -0xb8);
          puVar7 = puVar7 + -0x80;
        } while( true );
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 10368974c; end: 10368978b;  */

void FUN_10368974c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f838f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf75b0;
  func_0x000107c61520(&UNK_10dbf75b0,&UNK_110679108);
  puRam0000000112f838f8 = puVar1;
  return;
}



/* Entry: 10368978c; end: 1036897af;  */

void FUN_10368978c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036897b0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1036897b0; end: 1036897ef;  */

void FUN_1036897b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf7588;
  func_0x000107c61520(&UNK_10dbf7588,&UNK_110679108);
  puRam0000000112f83900 = puVar1;
  return;
}



/* Entry: 1036897f0; end: 10368981b;  */

void FUN_1036897f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10368974c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103685c04();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10368981c; end: 10368981f;  */

void FUN_10368981c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf75f0;
  func_0x000107c61520(&UNK_10dbf75f0,&UNK_110679108);
  puRam0000000112f83908 = puVar1;
  return;
}



/* Entry: 103689820; end: 10368985f;  */

void FUN_103689820(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf75f0;
  func_0x000107c61520(&UNK_10dbf75f0,&UNK_110679108);
  puRam0000000112f83908 = puVar1;
  return;
}



/* Entry: 103689860; end: 1036898c3;  */

long FUN_103689860(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1036898c4; end: 103689933;  */

undefined8 * FUN_1036898c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar2;
  uVar4 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar3,uVar4);
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  return param_1;
}



/* Entry: 103689934; end: 1036899d3;  */

undefined8 * FUN_103689934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[3] = param_2[3];
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[5];
  uVar2 = param_2[6];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[5];
  uVar3 = param_1[6];
  param_1[5] = uVar4;
  param_1[6] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 1036899d4; end: 103689a3f;  */

undefined8 * FUN_1036899d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103689a40; end: 103689ae3;  */

int FUN_103689a40(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103689ae4; end: 103689b6b;  */

void FUN_103689ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf755c;
  func_0x000107c61520(&DAT_10dbf755c,&UNK_110679108);
  puRam0000000112f83918 = puVar1;
  return;
}



/* Entry: 103689b6c; end: 103689c1f;  */

/* WARNING: Removing unreachable block (ram,0x000103689c1c) */

void FUN_103689b6c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110790c80,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103689c20; end: 103689c7b;  */

void FUN_103689c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103689c7c();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103689c7c; end: 103689cff;  */

void FUN_103689c7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x18);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,1,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103689d00; end: 103689d3f;  */

uint FUN_103689d00(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar5 = param_1[3];
  uVar3 = param_1[2];
  uVar9 = param_1[5];
  uVar7 = param_1[4];
  lVar6 = param_2[3];
  uVar4 = param_2[2];
  uVar10 = param_2[5];
  uVar8 = param_2[4];
  uStack_a0 = uVar4;
  lStack_98 = lVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar3;
  lStack_78 = lVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (lVar5 == 0) {
    if (lVar6 == 0) {
      FUN_10368acd4(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_10368acd4(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
LAB_10368aecc:
      func_0x000101597ae4(uVar3,lVar5,uVar7,uVar9);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_10368aeec;
    }
LAB_10368ae20:
    FUN_10368acd4(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    FUN_10368acd4(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    func_0x000101597ae4(uVar3,lVar5,uVar7,uVar9);
    uVar3 = uVar4;
    lVar5 = lVar6;
    uVar7 = uVar8;
    uVar9 = uVar10;
  }
  else {
    if (lVar6 == 0) goto LAB_10368ae20;
    if (((uVar3 == uVar4) && (lVar5 == lVar6)) ||
       (uVar2 = uVar3, func_0x000107c605b8(uVar3,lVar5,uVar4,lVar6,0), (uVar2 & 1) != 0)) {
      FUN_10368acd4(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_10368acd4(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
      func_0x000101597ae4(uVar4,lVar6,uVar8,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_10368aecc;
    }
    else {
      FUN_10368acd4(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_10368acd4(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar4,lVar6,uVar8,uVar10);
    }
  }
  func_0x000101597ae4(uVar3,lVar5,uVar7,uVar9);
  uVar1 = 0;
LAB_10368aeec:
  return uVar1 & 1;
}



/* Entry: 103689d40; end: 103689d6f;  */

undefined1  [16] FUN_103689d40(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103689d70; end: 103689da3;  */

void FUN_103689d70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103689da4; end: 103689db7;  */

undefined8 FUN_103689da4(void)

{
  return 0x103689db4;
}



/* Entry: 103689db8; end: 103689dcb;  */

void FUN_103689db8(void)

{
  FUN_103689b6c();
  return;
}



/* Entry: 103689dcc; end: 103689e03;  */

void FUN_103689dcc(void)

{
  FUN_103689c20();
  return;
}



/* Entry: 103689e04; end: 103689e07;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103689e04(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103689e08; end: 103689e3f;  */

uint FUN_103689e08(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010368c468();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103689e40; end: 103689e87;  */

uint FUN_103689e40(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_10368ad1c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103689e88; end: 103689f27;  */

/* WARNING: Possible PIC construction at 0x000103689ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103689ee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103689ed8) */
/* WARNING: Removing unreachable block (ram,0x000103689ee8) */

void FUN_103689e88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f83920 != -1) {
    func_0x000107c61568(0x112f83920,0x103689b24);
  }
  uVar5 = uRam000000011380b988;
  uVar4 = uRam000000011380b980;
  uVar3 = uRam000000011380b978;
  uVar2 = uRam000000011380b970;
  uVar1 = uRam000000011380b968;
  *param_1 = uRam000000011380b960;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103689f28; end: 103689f63;  */

void FUN_103689f28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f839a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f839a0,&UNK_10dbf7a18);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103689f64; end: 10368a067;  */

void FUN_103689f64(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10368a068; end: 10368a0e3;  */

uint FUN_10368a068(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10368ad1c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10368a0e4; end: 10368a12f;  */

void FUN_10368a0e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 10368a130; end: 10368a143;  */

void FUN_10368a130(void)

{
  func_0x000100076224();
  return;
}



/* Entry: 10368a144; end: 10368a177;  */

void FUN_10368a144(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  return;
}



/* Entry: 10368a178; end: 10368a1a7;  */

undefined1  [16] FUN_10368a178(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10368a1a8; end: 10368a1db;  */

void FUN_10368a1a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10368a1dc; end: 10368a1ef;  */

undefined8 FUN_10368a1dc(void)

{
  return 0x10368a1ec;
}



/* Entry: 10368a1f0; end: 10368a223;  */

void FUN_10368a1f0(void)

{
  FUN_10368a0e4();
  return;
}



/* Entry: 10368a224; end: 10368a227;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10368a224(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10368a228; end: 10368a25f;  */

uint FUN_10368a228(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010368c428();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10368a260; end: 10368a26b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10368a260(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar24 = *param_1;
  uVar16 = param_1[1];
  pbVar10 = (byte *)*unaff_x20;
  pbVar25 = (byte *)unaff_x20[1];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(undefined8 **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(undefined8 **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10368a26c; end: 10368a30b;  */

/* WARNING: Possible PIC construction at 0x00010368a2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010368a2c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010368a2bc) */
/* WARNING: Removing unreachable block (ram,0x00010368a2cc) */

void FUN_10368a26c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f83930 != -1) {
    func_0x000107c61568(0x112f83930,0x10368a0ac);
  }
  uVar5 = uRam000000011380b9b8;
  uVar4 = uRam000000011380b9b0;
  uVar3 = uRam000000011380b9a8;
  uVar2 = uRam000000011380b9a0;
  uVar1 = uRam000000011380b998;
  *param_1 = uRam000000011380b990;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10368a30c; end: 10368a347;  */

void FUN_10368a30c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f83990;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f83990,&UNK_10dbf7a10);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10368a348; end: 10368a43b;  */

void FUN_10368a348(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fa50(auStack_88,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10368a43c; end: 10368a44f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10368a43c(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar10 = (byte *)*param_1;
  pbVar25 = (byte *)param_1[1];
  lVar24 = *param_2;
  uVar16 = param_2[1];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10368a450; end: 10368a497;  */

void FUN_10368a450(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf7a20,0x31,2);
  uRam000000011380b9c8 = uStack_38;
  uRam000000011380b9c0 = uStack_40;
  uRam000000011380b9d8 = uStack_28;
  uRam000000011380b9d0 = uStack_30;
  uRam000000011380b9e8 = uStack_18;
  uRam000000011380b9e0 = uStack_20;
  return;
}



/* Entry: 10368a498; end: 10368a5c3;  */

void FUN_10368a498(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      puVar3 = &UNK_110790980;
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015cabb8();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110679698;
          goto LAB_10368a520;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x38;
          goto LAB_10368a520;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x50;
        }
        else {
          if (lVar1 != 4) goto LAB_10368a534;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x68;
        }
LAB_10368a520:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_10368a534:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10368a5c4; end: 10368a667;  */

void FUN_10368a5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10368a668();
  if (unaff_x21 == 0) {
    FUN_10368a6f0();
    FUN_10368a778();
    FUN_10368a800();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10368a668; end: 10368a6ef;  */

void FUN_10368a668(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x20);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015cabb8();
    (*pcVar1)(&uStack_70,1,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10368a6f0; end: 10368a777;  */

void FUN_10368a6f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x48);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10368a778; end: 10368a7ff;  */

void FUN_10368a778(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x60);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,3,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10368a800; end: 10368a887;  */

void FUN_10368a800(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x78);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10368a888; end: 10368a8db;  */

uint FUN_10368a888(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 auStack_1c8 [3];
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar12 = param_1[3];
  uVar10 = param_1[2];
  uVar18 = param_1[5];
  lVar16 = param_1[4];
  uVar5 = param_1[6];
  uVar13 = param_2[3];
  uVar11 = param_2[2];
  uVar19 = param_2[5];
  lVar17 = param_2[4];
  uVar9 = param_2[6];
  uStack_110 = uVar11;
  uStack_108 = uVar13;
  lStack_100 = lVar17;
  uStack_f8 = uVar19;
  uStack_f0 = uVar9;
  uStack_e0 = uVar10;
  uStack_d8 = uVar12;
  lStack_d0 = lVar16;
  uStack_c8 = uVar18;
  uStack_c0 = uVar5;
  if (lVar16 == 0) {
    if (lVar17 != 0) goto LAB_10368b0fc;
    FUN_10368acd4(&uStack_e0,&uStack_90,0x112db8098,&UNK_10d966ff0);
    FUN_10368acd4(&uStack_110,&uStack_90,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar10,uVar12,0,uVar18,uVar5);
LAB_10368b1c4:
    uVar14 = param_1[8];
    uVar5 = param_1[7];
    uVar6 = param_1[9];
    uVar15 = param_2[8];
    uVar9 = param_2[7];
    uVar8 = param_2[9];
    uStack_1f0 = uVar5;
    uStack_1e8 = uVar14;
    uStack_1e0 = uVar6;
    uStack_130 = uVar9;
    uStack_128 = uVar15;
    uStack_120 = uVar8;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_10368b254;
      if ((float)uVar5 == (float)uVar9) {
        FUN_10368acd4(&uStack_1f0,&uStack_150,0x112db6358,&UNK_10d961e20);
        FUN_10368acd4(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
        uVar3 = uVar14;
        func_0x000100e25fcc(uVar14,uVar6,uVar15,uVar8);
        func_0x000101553ccc(uVar9,uVar15,uVar8);
        if ((uVar3 & 1) != 0) goto LAB_10368b2f8;
      }
      else {
        FUN_10368acd4(&uStack_1f0,&uStack_150,0x112db6358,&UNK_10d961e20);
        puVar2 = &uStack_130;
        puVar4 = &uStack_150;
LAB_10368b5b4:
        FUN_10368acd4(puVar2,puVar4,0x112db6358,&UNK_10d961e20);
        func_0x000101553ccc(uVar9,uVar15,uVar8);
      }
    }
    else {
      if (0xe < uVar8 >> 0x3c) {
        FUN_10368acd4(&uStack_1f0,&uStack_150,0x112db6358,&UNK_10d961e20);
        FUN_10368acd4(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
LAB_10368b2f8:
        func_0x000101553ccc(uVar5,uVar14,uVar6);
        uVar14 = param_1[0xb];
        uVar5 = param_1[10];
        uVar6 = param_1[0xc];
        uVar15 = param_2[0xb];
        uVar9 = param_2[10];
        uVar8 = param_2[0xc];
        uStack_170 = uVar9;
        uStack_168 = uVar15;
        uStack_160 = uVar8;
        uStack_150 = uVar5;
        uStack_148 = uVar14;
        uStack_140 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_10368b388;
          if ((float)uVar5 != (float)uVar9) {
            FUN_10368acd4(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
            puVar2 = &uStack_170;
            puVar4 = &uStack_190;
            goto LAB_10368b5b4;
          }
          FUN_10368acd4(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
          FUN_10368acd4(&uStack_170,&uStack_190,0x112db6358,&UNK_10d961e20);
          uVar3 = uVar14;
          func_0x000100e25fcc(uVar14,uVar6,uVar15,uVar8);
          func_0x000101553ccc(uVar9,uVar15,uVar8);
          if ((uVar3 & 1) == 0) goto LAB_10368b5dc;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_10368b388:
            FUN_10368acd4(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
            puVar2 = &uStack_170;
            puVar4 = &uStack_190;
            uVar3 = uVar6;
            uVar7 = uVar14;
            uVar10 = uVar5;
            uVar6 = uVar8;
            uVar14 = uVar15;
            uVar5 = uVar9;
            goto LAB_10368b4e0;
          }
          FUN_10368acd4(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
          FUN_10368acd4(&uStack_170,&uStack_190,0x112db6358,&UNK_10d961e20);
        }
        func_0x000101553ccc(uVar5,uVar14,uVar6);
        uVar14 = param_1[0xe];
        uVar5 = param_1[0xd];
        uVar6 = param_1[0xf];
        uVar15 = param_2[0xe];
        uVar9 = param_2[0xd];
        uVar8 = param_2[0xf];
        uStack_1b0 = uVar9;
        uStack_1a8 = uVar15;
        uStack_1a0 = uVar8;
        uStack_190 = uVar5;
        uStack_188 = uVar14;
        uStack_180 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_10368b4bc;
          if ((float)uVar5 != (float)uVar9) {
            FUN_10368acd4(&uStack_190,auStack_1c8,0x112db6358,&UNK_10d961e20);
            puVar2 = &uStack_1b0;
            puVar4 = auStack_1c8;
            goto LAB_10368b5b4;
          }
          FUN_10368acd4(&uStack_190,auStack_1c8,0x112db6358,&UNK_10d961e20);
          FUN_10368acd4(&uStack_1b0,auStack_1c8,0x112db6358,&UNK_10d961e20);
          uVar3 = uVar14;
          func_0x000100e25fcc(uVar14,uVar6,uVar15,uVar8);
          func_0x000101553ccc(uVar9,uVar15,uVar8);
          if ((uVar3 & 1) == 0) goto LAB_10368b5dc;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_10368b4bc:
            FUN_10368acd4(&uStack_190,auStack_1c8,0x112db6358,&UNK_10d961e20);
            puVar2 = &uStack_1b0;
            puVar4 = auStack_1c8;
            uVar3 = uVar6;
            uVar7 = uVar14;
            uVar10 = uVar5;
            uVar6 = uVar8;
            uVar14 = uVar15;
            uVar5 = uVar9;
            goto LAB_10368b4e0;
          }
          FUN_10368acd4(&uStack_190,auStack_1c8,0x112db6358,&UNK_10d961e20);
          FUN_10368acd4(&uStack_1b0,auStack_1c8,0x112db6358,&UNK_10d961e20);
        }
        func_0x000101553ccc(uVar5,uVar14,uVar6);
        uVar5 = *param_1;
        func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar5;
        goto LAB_10368b5e4;
      }
LAB_10368b254:
      FUN_10368acd4(&uStack_1f0,&uStack_150,0x112db6358,&UNK_10d961e20);
      puVar2 = &uStack_130;
      puVar4 = &uStack_150;
      uVar3 = uVar6;
      uVar7 = uVar14;
      uVar10 = uVar5;
      uVar6 = uVar8;
      uVar14 = uVar15;
      uVar5 = uVar9;
LAB_10368b4e0:
      FUN_10368acd4(puVar2,puVar4,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar10,uVar7,uVar3);
    }
LAB_10368b5dc:
    func_0x000101553ccc(uVar5,uVar14,uVar6);
  }
  else if (lVar17 == 0) {
LAB_10368b0fc:
    FUN_10368acd4(&uStack_e0,&uStack_90,0x112db8098,&UNK_10d966ff0);
    FUN_10368acd4(&uStack_110,&uStack_90,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar10,uVar12,lVar16,uVar18,uVar5);
    func_0x000101553bdc(uVar11,uVar13,lVar17,uVar19,uVar9);
  }
  else {
    uStack_88 = (undefined1)uVar13;
    uStack_b0 = (undefined1)uVar12;
    uStack_b8 = uVar10;
    lStack_a8 = lVar16;
    uStack_a0 = uVar18;
    uStack_98 = uVar5;
    uStack_90 = uVar11;
    lStack_80 = lVar17;
    uStack_78 = uVar19;
    uStack_70 = uVar9;
    FUN_10368acd4(&uStack_e0,&uStack_1f0,0x112db8098,&UNK_10d966ff0);
    FUN_10368acd4(&uStack_110,&uStack_1f0,0x112db8098,&UNK_10d966ff0);
    puVar2 = &uStack_b8;
    FUN_10368c758(puVar2,&uStack_90);
    func_0x000101553bdc(uVar11,uVar13,lVar17,uVar19,uVar9);
    func_0x000101553bdc(uVar10,uVar12,lVar16,uVar18,uVar5);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10368b1c4;
  }
  uVar1 = 0;
LAB_10368b5e4:
  return uVar1 & 1;
}



/* Entry: 10368a8dc; end: 10368a90b;  */

undefined1  [16] FUN_10368a8dc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10368a90c; end: 10368a93f;  */

void FUN_10368a90c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10368a940; end: 10368a953;  */

undefined8 FUN_10368a940(void)

{
  return 0x10368a950;
}



/* Entry: 10368a954; end: 10368a967;  */

void FUN_10368a954(void)

{
  FUN_10368a498();
  return;
}



/* Entry: 10368a968; end: 10368a9af;  */

void FUN_10368a968(void)

{
  FUN_10368a5c4();
  return;
}



/* Entry: 10368a9b0; end: 10368a9b3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10368a9b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10368a9b4; end: 10368a9eb;  */

uint FUN_10368a9b4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10368c3e8();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10368a9ec; end: 10368aa5b;  */

uint FUN_10368a9ec(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_28 = param_1[0xf];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  FUN_10368aff8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 10368aa5c; end: 10368aafb;  */

/* WARNING: Possible PIC construction at 0x00010368aaa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010368aab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010368aaac) */
/* WARNING: Removing unreachable block (ram,0x00010368aabc) */

void FUN_10368aa5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f83940 != -1) {
    func_0x000107c61568(0x112f83940,FUN_10368a450);
  }
  uVar5 = uRam000000011380b9e8;
  uVar4 = uRam000000011380b9e0;
  uVar3 = uRam000000011380b9d8;
  uVar2 = uRam000000011380b9d0;
  uVar1 = uRam000000011380b9c8;
  *param_1 = uRam000000011380b9c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10368aafc; end: 10368ab37;  */

void FUN_10368aafc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f83980;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f83980,&UNK_10dbf7a08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10368ab38; end: 10368ac63;  */

void FUN_10368ab38(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_f8 [72];
  undefined8 uStack_b0;
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
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_38 = unaff_x20[0xf];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  func_0x000107c6068c(auStack_f8,0);
  func_0x000107c5fa50(auStack_f8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10368ac64; end: 10368acd3;  */

uint FUN_10368ac64(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_28 = param_2[0xf];
  uStack_30 = param_2[0xe];
  FUN_10368aff8(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 10368acd4; end: 10368ad1b;  */

undefined8 FUN_10368acd4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10368ad1c; end: 10368af77;  */

uint FUN_10368ad1c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar5 = param_1[3];
  uVar3 = param_1[2];
  uVar9 = param_1[5];
  uVar7 = param_1[4];
  lVar6 = param_2[3];
  uVar4 = param_2[2];
  uVar10 = param_2[5];
  uVar8 = param_2[4];
  uStack_a0 = uVar4;
  lStack_98 = lVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar3;
  lStack_78 = lVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (lVar5 == 0) {
    if (lVar6 == 0) {
      FUN_10368acd4(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_10368acd4(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
LAB_10368aecc:
      func_0x000101597ae4(uVar3,lVar5,uVar7,uVar9);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_10368aeec;
    }
LAB_10368ae20:
    FUN_10368acd4(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    FUN_10368acd4(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    func_0x000101597ae4(uVar3,lVar5,uVar7,uVar9);
    uVar3 = uVar4;
    lVar5 = lVar6;
    uVar7 = uVar8;
    uVar9 = uVar10;
  }
  else {
    if (lVar6 == 0) goto LAB_10368ae20;
    if (((uVar3 == uVar4) && (lVar5 == lVar6)) ||
       (uVar2 = uVar3, func_0x000107c605b8(uVar3,lVar5,uVar4,lVar6,0), (uVar2 & 1) != 0)) {
      FUN_10368acd4(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_10368acd4(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
      func_0x000101597ae4(uVar4,lVar6,uVar8,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_10368aecc;
    }
    else {
      FUN_10368acd4(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_10368acd4(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar4,lVar6,uVar8,uVar10);
    }
  }
  func_0x000101597ae4(uVar3,lVar5,uVar7,uVar9);
  uVar1 = 0;
LAB_10368aeec:
  return uVar1 & 1;
}



/* Entry: 10368af78; end: 10368aff7;  */

void FUN_10368af78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf7748;
  func_0x000107c61520(&UNK_10dbf7748,&UNK_1106793e0);
  puRam0000000112f83928 = puVar1;
  return;
}



/* Entry: 10368aff8; end: 10368b607;  */

uint FUN_10368aff8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 auStack_1c8 [3];
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar12 = param_1[3];
  uVar10 = param_1[2];
  uVar18 = param_1[5];
  lVar16 = param_1[4];
  uVar5 = param_1[6];
  uVar13 = param_2[3];
  uVar11 = param_2[2];
  uVar19 = param_2[5];
  lVar17 = param_2[4];
  uVar9 = param_2[6];
  uStack_110 = uVar11;
  uStack_108 = uVar13;
  lStack_100 = lVar17;
  uStack_f8 = uVar19;
  uStack_f0 = uVar9;
  uStack_e0 = uVar10;
  uStack_d8 = uVar12;
  lStack_d0 = lVar16;
  uStack_c8 = uVar18;
  uStack_c0 = uVar5;
  if (lVar16 == 0) {
    if (lVar17 != 0) goto LAB_10368b0fc;
    FUN_10368acd4(&uStack_e0,&uStack_90,0x112db8098,&UNK_10d966ff0);
    FUN_10368acd4(&uStack_110,&uStack_90,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar10,uVar12,0,uVar18,uVar5);
LAB_10368b1c4:
    uVar14 = param_1[8];
    uVar5 = param_1[7];
    uVar6 = param_1[9];
    uVar15 = param_2[8];
    uVar9 = param_2[7];
    uVar8 = param_2[9];
    uStack_1f0 = uVar5;
    uStack_1e8 = uVar14;
    uStack_1e0 = uVar6;
    uStack_130 = uVar9;
    uStack_128 = uVar15;
    uStack_120 = uVar8;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_10368b254;
      if ((float)uVar5 == (float)uVar9) {
        FUN_10368acd4(&uStack_1f0,&uStack_150,0x112db6358,&UNK_10d961e20);
        FUN_10368acd4(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
        uVar3 = uVar14;
        func_0x000100e25fcc(uVar14,uVar6,uVar15,uVar8);
        func_0x000101553ccc(uVar9,uVar15,uVar8);
        if ((uVar3 & 1) != 0) goto LAB_10368b2f8;
      }
      else {
        FUN_10368acd4(&uStack_1f0,&uStack_150,0x112db6358,&UNK_10d961e20);
        puVar2 = &uStack_130;
        puVar4 = &uStack_150;
LAB_10368b5b4:
        FUN_10368acd4(puVar2,puVar4,0x112db6358,&UNK_10d961e20);
        func_0x000101553ccc(uVar9,uVar15,uVar8);
      }
    }
    else {
      if (0xe < uVar8 >> 0x3c) {
        FUN_10368acd4(&uStack_1f0,&uStack_150,0x112db6358,&UNK_10d961e20);
        FUN_10368acd4(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
LAB_10368b2f8:
        func_0x000101553ccc(uVar5,uVar14,uVar6);
        uVar14 = param_1[0xb];
        uVar5 = param_1[10];
        uVar6 = param_1[0xc];
        uVar15 = param_2[0xb];
        uVar9 = param_2[10];
        uVar8 = param_2[0xc];
        uStack_170 = uVar9;
        uStack_168 = uVar15;
        uStack_160 = uVar8;
        uStack_150 = uVar5;
        uStack_148 = uVar14;
        uStack_140 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_10368b388;
          if ((float)uVar5 != (float)uVar9) {
            FUN_10368acd4(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
            puVar2 = &uStack_170;
            puVar4 = &uStack_190;
            goto LAB_10368b5b4;
          }
          FUN_10368acd4(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
          FUN_10368acd4(&uStack_170,&uStack_190,0x112db6358,&UNK_10d961e20);
          uVar3 = uVar14;
          func_0x000100e25fcc(uVar14,uVar6,uVar15,uVar8);
          func_0x000101553ccc(uVar9,uVar15,uVar8);
          if ((uVar3 & 1) == 0) goto LAB_10368b5dc;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_10368b388:
            FUN_10368acd4(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
            puVar2 = &uStack_170;
            puVar4 = &uStack_190;
            uVar3 = uVar6;
            uVar7 = uVar14;
            uVar10 = uVar5;
            uVar6 = uVar8;
            uVar14 = uVar15;
            uVar5 = uVar9;
            goto LAB_10368b4e0;
          }
          FUN_10368acd4(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
          FUN_10368acd4(&uStack_170,&uStack_190,0x112db6358,&UNK_10d961e20);
        }
        func_0x000101553ccc(uVar5,uVar14,uVar6);
        uVar14 = param_1[0xe];
        uVar5 = param_1[0xd];
        uVar6 = param_1[0xf];
        uVar15 = param_2[0xe];
        uVar9 = param_2[0xd];
        uVar8 = param_2[0xf];
        uStack_1b0 = uVar9;
        uStack_1a8 = uVar15;
        uStack_1a0 = uVar8;
        uStack_190 = uVar5;
        uStack_188 = uVar14;
        uStack_180 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_10368b4bc;
          if ((float)uVar5 != (float)uVar9) {
            FUN_10368acd4(&uStack_190,auStack_1c8,0x112db6358,&UNK_10d961e20);
            puVar2 = &uStack_1b0;
            puVar4 = auStack_1c8;
            goto LAB_10368b5b4;
          }
          FUN_10368acd4(&uStack_190,auStack_1c8,0x112db6358,&UNK_10d961e20);
          FUN_10368acd4(&uStack_1b0,auStack_1c8,0x112db6358,&UNK_10d961e20);
          uVar3 = uVar14;
          func_0x000100e25fcc(uVar14,uVar6,uVar15,uVar8);
          func_0x000101553ccc(uVar9,uVar15,uVar8);
          if ((uVar3 & 1) == 0) goto LAB_10368b5dc;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_10368b4bc:
            FUN_10368acd4(&uStack_190,auStack_1c8,0x112db6358,&UNK_10d961e20);
            puVar2 = &uStack_1b0;
            puVar4 = auStack_1c8;
            uVar3 = uVar6;
            uVar7 = uVar14;
            uVar10 = uVar5;
            uVar6 = uVar8;
            uVar14 = uVar15;
            uVar5 = uVar9;
            goto LAB_10368b4e0;
          }
          FUN_10368acd4(&uStack_190,auStack_1c8,0x112db6358,&UNK_10d961e20);
          FUN_10368acd4(&uStack_1b0,auStack_1c8,0x112db6358,&UNK_10d961e20);
        }
        func_0x000101553ccc(uVar5,uVar14,uVar6);
        uVar5 = *param_1;
        func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar5;
        goto LAB_10368b5e4;
      }
LAB_10368b254:
      FUN_10368acd4(&uStack_1f0,&uStack_150,0x112db6358,&UNK_10d961e20);
      puVar2 = &uStack_130;
      puVar4 = &uStack_150;
      uVar3 = uVar6;
      uVar7 = uVar14;
      uVar10 = uVar5;
      uVar6 = uVar8;
      uVar14 = uVar15;
      uVar5 = uVar9;
LAB_10368b4e0:
      FUN_10368acd4(puVar2,puVar4,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar10,uVar7,uVar3);
    }
LAB_10368b5dc:
    func_0x000101553ccc(uVar5,uVar14,uVar6);
  }
  else if (lVar17 == 0) {
LAB_10368b0fc:
    FUN_10368acd4(&uStack_e0,&uStack_90,0x112db8098,&UNK_10d966ff0);
    FUN_10368acd4(&uStack_110,&uStack_90,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar10,uVar12,lVar16,uVar18,uVar5);
    func_0x000101553bdc(uVar11,uVar13,lVar17,uVar19,uVar9);
  }
  else {
    uStack_88 = (undefined1)uVar13;
    uStack_b0 = (undefined1)uVar12;
    uStack_b8 = uVar10;
    lStack_a8 = lVar16;
    uStack_a0 = uVar18;
    uStack_98 = uVar5;
    uStack_90 = uVar11;
    lStack_80 = lVar17;
    uStack_78 = uVar19;
    uStack_70 = uVar9;
    FUN_10368acd4(&uStack_e0,&uStack_1f0,0x112db8098,&UNK_10d966ff0);
    FUN_10368acd4(&uStack_110,&uStack_1f0,0x112db8098,&UNK_10d966ff0);
    puVar2 = &uStack_b8;
    FUN_10368c758(puVar2,&uStack_90);
    func_0x000101553bdc(uVar11,uVar13,lVar17,uVar19,uVar9);
    func_0x000101553bdc(uVar10,uVar12,lVar16,uVar18,uVar5);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10368b1c4;
  }
  uVar1 = 0;
LAB_10368b5e4:
  return uVar1 & 1;
}



/* Entry: 10368b608; end: 10368b647;  */

void FUN_10368b608(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f83948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf78f8;
  func_0x000107c61520(&UNK_10dbf78f8,&UNK_1106794e0);
  puRam0000000112f83948 = puVar1;
  return;
}


