/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109e03d70; end: 109e03e4f;  */

/* WARNING: Possible PIC construction at 0x000109e03de0: Changing call to branch */

void FUN_109e03d70(long *param_1,long *param_2,undefined8 param_3,int param_4,ulong param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x22;
  ulong uVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar3 = *param_1;
  uVar5 = param_1[1];
  do {
    uVar6 = uVar5;
    if (param_4 == 0) {
      if (((param_5 & 1) == 0) && (uVar5 == 0)) {
        return;
      }
SUB_109d30b00:
      *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar5 = (ulong)*(uint *)(param_2 + 1);
      if (*(uint *)((long)param_2 + 0xc) <= *(uint *)(param_2 + 1)) {
        func_0x000107c2b01c(param_2,param_2 + 2,uVar5 + 1,0x10);
        uVar5 = (ulong)*(uint *)(param_2 + 1);
      }
      plVar1 = (long *)(*param_2 + uVar5 * 0x10);
      *plVar1 = lVar3;
      plVar1[1] = uVar6;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      return;
    }
    if (uVar5 == 0) {
      if ((int)param_5 == 0) {
        return;
      }
      uVar6 = 0;
      goto SUB_109d30b00;
    }
    lVar4 = lVar3;
    _memchr(lVar3,param_3,uVar5);
    if ((lVar4 == 0) || (uVar7 = lVar4 - lVar3, uVar7 == 0xffffffffffffffff)) goto SUB_109d30b00;
    if (((param_5 & 1) != 0) || (lVar4 != lVar3)) {
      if (uVar7 <= uVar5) {
        uVar6 = uVar7;
      }
      unaff_x30 = 0x109e03de4;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      unaff_x19 = param_2;
      unaff_x20 = lVar3;
      unaff_x21 = uVar5;
      unaff_x22 = param_5;
      unaff_x29 = puVar2;
      goto SUB_109d30b00;
    }
    if (uVar7 + 1 <= uVar5) {
      uVar6 = uVar7 + 1;
    }
    lVar3 = lVar3 + uVar6;
    uVar5 = uVar5 - uVar6;
    param_4 = param_4 + -1;
  } while( true );
}



/* Entry: 109e03e50; end: 109e03f2f;  */

undefined8 FUN_109e03e50(long *param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_2 == 0) {
    param_2 = param_1;
    FUN_109e03f30();
  }
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    pbVar5 = (byte *)*param_1;
    *param_3 = 0;
    uVar7 = (ulong)param_2 & 0xffffffff;
    lVar6 = lVar4;
    uVar8 = 0;
    do {
      if ((char)*pbVar5 < '0') break;
      uVar2 = (uint)*pbVar5;
      if (uVar2 < 0x3a) {
        iVar9 = -0x30;
      }
      else if (uVar2 < 0x61) {
        if (0x19 < uVar2 - 0x41) break;
        iVar9 = -0x37;
      }
      else {
        if (0x7a < uVar2) break;
        iVar9 = -0x57;
      }
      if ((uint)param_2 <= iVar9 + uVar2) break;
      uVar1 = uVar8 * uVar7 + (ulong)(iVar9 + uVar2);
      *param_3 = uVar1;
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar1 / uVar7;
      }
      if (uVar3 < uVar8) {
        return 1;
      }
      pbVar5 = pbVar5 + 1;
      lVar6 = lVar6 + -1;
      uVar8 = uVar1;
    } while (lVar6 != 0);
    if (lVar4 != lVar6) {
      *param_1 = (long)pbVar5;
      param_1[1] = lVar6;
      return 0;
    }
  }
  return 1;
}



/* Entry: 109e03f30; end: 109e03ff3;  */

undefined8 FUN_109e03f30(undefined8 *param_1)

{
  undefined8 uVar1;
  short *psVar2;
  byte *pbVar3;
  long lVar4;
  
  if ((ulong)param_1[1] < 2) {
    return 10;
  }
  psVar2 = (short *)*param_1;
  if ((*psVar2 == 0x7830) || (*psVar2 == 0x5830)) {
    uVar1 = 0x10;
  }
  else if ((*psVar2 == 0x6230) || (*psVar2 == 0x4230)) {
    uVar1 = 2;
  }
  else {
    if (*psVar2 != 0x6f30) {
      if ((char)*psVar2 != '0') {
        return 10;
      }
      pbVar3 = (byte *)((long)psVar2 + 1);
      if (9 < *pbVar3 - 0x30) {
        return 10;
      }
      uVar1 = 8;
      lVar4 = -1;
      goto LAB_109e03fd8;
    }
    uVar1 = 8;
  }
  pbVar3 = (byte *)(psVar2 + 1);
  lVar4 = -2;
LAB_109e03fd8:
  *param_1 = pbVar3;
  param_1[1] = param_1[1] + lVar4;
  return uVar1;
}



/* Entry: 109e03ff4; end: 109e04093;  */

uint FUN_109e03ff4(undefined8 *param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  char **ppcVar2;
  char *pcStack_38;
  long lStack_30;
  ulong uStack_28;
  
  if ((param_1[1] == 0) || (pcStack_38 = (char *)*param_1 + 1, *(char *)*param_1 != '-')) {
    FUN_109e03e50(param_1,param_2,&uStack_28);
    if (((ulong)param_1 & 1) != 0) {
      return 1;
    }
    if ((long)uStack_28 < 0) {
      return 1;
    }
    uVar1 = 0;
  }
  else {
    lStack_30 = param_1[1] + -1;
    ppcVar2 = &pcStack_38;
    FUN_109e03e50(ppcVar2,param_2,&uStack_28);
    uVar1 = (uint)ppcVar2;
    if (0x8000000000000000 < uStack_28) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) != 0) {
      return uVar1;
    }
    param_1[1] = lStack_30;
    *param_1 = pcStack_38;
    uStack_28 = -uStack_28;
  }
  *param_3 = uStack_28;
  return uVar1;
}



/* Entry: 109e04094; end: 109e0438b;  */

undefined8 FUN_109e04094(undefined8 *param_1,char **param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  long lVar13;
  ulong uStack_a0;
  uint uStack_98;
  ulong uStack_90;
  uint uStack_88;
  ulong uStack_80;
  uint uStack_78;
  char *pcStack_70;
  long lStack_68;
  
  lStack_68 = param_1[1];
  pcStack_70 = (char *)*param_1;
  if ((int)param_2 == 0) {
    param_2 = &pcStack_70;
    FUN_109e03f30();
  }
  lVar10 = lStack_68;
  pcVar11 = pcStack_70;
  if (lStack_68 == 0) {
    return 1;
  }
  while (*pcVar11 == '0') {
    lVar10 = lVar10 + -1;
    pcVar11 = pcVar11 + 1;
    if (lVar10 == 0) {
      if ((0x40 < (uint)param_3[1]) && (*param_3 != 0)) {
        __ZdaPv();
      }
      *param_3 = 0;
      *(undefined4 *)(param_3 + 1) = 0x40;
      return 0;
    }
  }
  uVar12 = 0;
  do {
    uVar3 = uVar12;
    uVar1 = 1 << (ulong)(uVar3 & 0x1f);
    uVar5 = (uint)param_2;
    uVar12 = uVar3 + 1;
  } while (uVar1 < uVar5);
  uVar2 = uVar3 * (int)lVar10;
  uVar12 = (uint)param_3[1];
  uVar8 = uVar12;
  if ((uVar12 <= uVar2) && (uVar8 = uVar2, uVar12 < uVar2)) {
    FUN_109df0638(&uStack_80,param_3,uVar2);
    if ((0x40 < (uint)param_3[1]) && (*param_3 != 0)) {
      __ZdaPv();
    }
    *param_3 = uStack_80;
    *(uint *)(param_3 + 1) = uStack_78;
  }
  uStack_78 = 1;
  uStack_80 = 0;
  uStack_88 = 1;
  uStack_90 = 0;
  if (uVar1 == uVar5) {
    uVar7 = 0;
    uVar12 = 1;
  }
  else {
    func_0x000109d301b0(&uStack_a0,uVar8,(ulong)param_2 & 0xffffffff,0);
    uVar12 = uStack_98;
    uVar7 = uStack_a0;
    uStack_80 = uStack_a0;
    uStack_78 = uStack_98;
    func_0x000109d301b0(&uStack_a0,uVar8,0,0);
    uStack_90 = uStack_a0;
    uStack_88 = uStack_98;
  }
  func_0x000109d306b8(param_3,0);
  lVar13 = 0;
  do {
    if (pcVar11[lVar13] < '0') goto LAB_109e042f0;
    uVar2 = (uint)(byte)pcVar11[lVar13];
    if (0x39 < uVar2) {
      if (uVar2 < 0x61) {
        if (uVar2 - 0x41 < 0x1a) {
          iVar4 = -0x37;
          goto LAB_109e04260;
        }
      }
      else if (uVar2 < 0x7b) {
        iVar4 = -0x57;
        goto LAB_109e04260;
      }
LAB_109e042f0:
      uVar6 = 1;
      goto LAB_109e042f4;
    }
    iVar4 = -0x30;
LAB_109e04260:
    uVar9 = (ulong)(iVar4 + uVar2);
    if (uVar5 <= iVar4 + uVar2) goto LAB_109e042f0;
    if (uVar1 == uVar5) {
      FUN_109d303fc(param_3,uVar3);
      if ((uint)param_3[1] < 0x41) {
        *param_3 = *param_3 | uVar9;
        FUN_109d301fc(param_3);
      }
      else {
        *(ulong *)*param_3 = *(ulong *)*param_3 | uVar9;
      }
    }
    else {
      FUN_109df030c(param_3,&uStack_80);
      func_0x000109d306b8(&uStack_90,uVar9);
      func_0x000109df002c(param_3,&uStack_90);
    }
    lVar13 = lVar13 + 1;
  } while (lVar10 != lVar13);
  uVar6 = 0;
LAB_109e042f4:
  if ((0x40 < uStack_88) && (uStack_90 != 0)) {
    __ZdaPv();
  }
  if (uVar12 < 0x41) {
    return uVar6;
  }
  if (uVar7 == 0) {
    return uVar6;
  }
  __ZdaPv(uVar7);
  return uVar6;
}



/* Entry: 109e0438c; end: 109e04497;  */

undefined1 * FUN_109e0438c(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_68 [56];
  
  if ((bRam00000001132fee88 & 1) == 0) {
    iVar6 = 0x132fee88;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      uRam00000001132fee80 = 0xff51afd7ed558ccd;
      if (uRam0000000113834578 != 0) {
        uRam00000001132fee80 = uRam0000000113834578;
      }
      ___cxa_guard_release(0x1132fee88);
    }
  }
  uVar12 = param_2 - (long)param_1;
  if (0x40 < uVar12) {
    uVar8 = uVar12 & 0xffffffffffffffc0;
    FUN_109d35128(auStack_68,param_1,uRam00000001132fee80);
    while (uVar8 = uVar8 - 0x40, uVar8 != 0) {
      param_1 = param_1 + 8;
      FUN_109d351b0(auStack_68,param_1);
    }
    if ((uVar12 & 0x3f) != 0) {
      FUN_109d351b0(auStack_68,param_2 + -0x40);
    }
    puVar7 = auStack_68;
    func_0x000109d356d0(puVar7,uVar12);
    return puVar7;
  }
  if (uVar12 - 4 < 5) {
    uVar8 = uRam00000001132fee80 ^ *(uint *)((long)param_1 + (uVar12 - 4));
    uVar12 = (uVar8 ^ uVar12 + (ulong)(uint)*param_1 * 8) * -0x622015f714c7d297;
    uVar12 = uVar8 ^ uVar12 >> 0x2f ^ uVar12;
  }
  else {
    if (uVar12 - 9 < 8) {
      uVar9 = *(ulong *)((long)param_1 + (uVar12 - 8));
      uVar8 = uVar9 + uVar12;
      uVar8 = uVar8 >> (uVar12 & 0x3f) | uVar8 << 0x40 - (uVar12 & 0x3f);
      uVar12 = (*param_1 ^ uRam00000001132fee80 ^ uVar8) * -0x622015f714c7d297;
      uVar12 = (uVar8 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
      return (undefined1 *)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297 ^ uVar9);
    }
    if (0xf < uVar12 - 0x11) {
      if (uVar12 < 0x21) {
        if (uVar12 == 0) {
          return (undefined1 *)(uRam00000001132fee80 ^ 0x9ae16a3b2f90404f);
        }
        uVar12 = (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (uVar12 >> 1)),(char)*param_1) *
                 -0x651e95c4d06fbfb1 ^
                 (uVar12 + (ulong)*(byte *)((long)param_1 + (uVar12 - 1)) * 4) * -0x36b62838af619aa9
                 ^ uRam00000001132fee80;
      }
      else {
        lVar3 = *(long *)((long)param_1 + (uVar12 - 0x10));
        lVar5 = *(long *)((long)param_1 + (uVar12 - 8));
        uVar10 = *param_1 + (lVar3 + uVar12) * -0x3c5a37a36834ced9;
        uVar8 = uVar10 + param_1[3];
        uVar9 = uVar10 + param_1[1];
        uVar11 = uVar9 + param_1[2];
        uVar1 = *(long *)((long)param_1 + (uVar12 - 0x20)) + param_1[2];
        uVar2 = uVar1 + lVar5;
        lVar4 = (uVar9 >> 7 | uVar9 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
                (uVar8 >> 0x34 | uVar8 * 0x1000) + (uVar11 >> 0x1f | uVar11 << 0x21);
        uVar12 = *(long *)((long)param_1 + (uVar12 - 0x18)) + uVar1;
        uVar8 = uVar12 + lVar3;
        uVar12 = (uVar8 + lVar5 + lVar4) * -0x3c5a37a36834ced9 +
                 (uVar11 + param_1[3] + (uVar1 >> 0x25 | uVar1 * 0x8000000) +
                           (uVar2 >> 0x34 | uVar2 * 0x1000) + (uVar12 >> 7 | uVar12 << 0x39) +
                           (uVar8 >> 0x1f | uVar8 << 0x21)) * -0x651e95c4d06fbfb1;
        uVar12 = ((uVar12 ^ uVar12 >> 0x2f) * -0x3c5a37a36834ced9 ^ uRam00000001132fee80) + lVar4;
      }
      return (undefined1 *)((uVar12 ^ uVar12 >> 0x2f) * -0x651e95c4d06fbfb1);
    }
    lVar4 = *(long *)((long)param_1 + (uVar12 - 8));
    uVar9 = *param_1 * -0x4b6d499041670d8d - param_1[1];
    uVar11 = lVar4 * -0x651e95c4d06fbfb1 ^ uRam00000001132fee80;
    uVar8 = param_1[1] ^ 0xc949d7c7509e6557;
    uVar8 = uRam00000001132fee80 + uVar12 + (uVar8 >> 0x14 | uVar8 << 0x2c) +
            *param_1 * -0x4b6d499041670d8d + lVar4 * 0x651e95c4d06fbfb1;
    uVar12 = ((uVar9 >> 0x2b | uVar9 * 0x200000) +
              *(long *)((long)param_1 + (uVar12 - 0x10)) * -0x3c5a37a36834ced9 +
              (uVar11 >> 0x1e | uVar11 << 0x22) ^ uVar8) * -0x622015f714c7d297;
    uVar12 = uVar8 ^ uVar12 >> 0x2f ^ uVar12;
  }
  return (undefined1 *)
         ((uVar12 * -0x622015f714c7d297 ^ uVar12 * -0x622015f714c7d297 >> 0x2f) *
         -0x622015f714c7d297);
}



/* Entry: 109e04498; end: 109e04613;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_109e04498(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined8 *unaff_x20;
  int unaff_w28;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined **appuStack_1b8 [2];
  long lStack_1a8;
  int iStack_180;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 auStack_138 [26];
  undefined **appuStack_68 [2];
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_150;
  puStack_38 = *(undefined **)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_2 + 4) == '\x06') {
    if (*(char *)((long)param_2 + 0x21) == '\x01') {
      param_2 = (undefined8 *)*param_2;
      if ((undefined *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_38) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        FUN_109d31714(appuStack_68,param_1);
        FUN_109e05844(param_2,appuStack_68);
        if (lStack_48 != lStack_58) {
          FUN_109e05520(appuStack_68);
        }
        appuStack_68[0] = &PTR_DAT_110b5c4a0;
        if ((unaff_w28 == 1) && (lStack_58 != 0)) {
          __ZdaPv();
        }
        return;
      }
      goto LAB_109e045f4;
    }
LAB_109e04540:
    unaff_x20 = auStack_138;
    uStack_140 = 0x100;
    uStack_148 = 0;
    puStack_150 = unaff_x20;
    func_0x000109d5975c(param_2,&puStack_150);
    if (param_2 == (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      func_0x000104c54c8c(param_1,param_2,ppuVar3);
    }
    param_2 = puStack_150;
    if (puStack_150 != unaff_x20) {
      _free();
    }
  }
  else {
    if ((*(char *)(param_2 + 4) != '\x04') || (*(char *)((long)param_2 + 0x21) != '\x01'))
    goto LAB_109e04540;
    plVar4 = (long *)*param_2;
    if (*(char *)((long)plVar4 + 0x17) < '\0') {
      lVar6 = *plVar4;
      uVar1 = plVar4[1];
      if ((undefined *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_38) {
        if (uVar1 < 0x17) {
          *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(param_1,lVar6,uVar1 + 1);
          return;
        }
        if (uVar1 < 0x7ffffffffffffff7) {
          lVar7 = 0x19;
          if ((uVar1 | 7) != 0x17) {
            lVar7 = (uVar1 | 7) + 1;
          }
          puVar5 = &UNK_100033e00;
        }
        else {
          puVar5 = &UNK_100033e30;
          lVar7 = lVar6;
          func_0x000104bd47d4();
        }
        uStack_50 = uVar1;
        lStack_48 = lVar6;
        puStack_40 = &stack0xfffffffffffffff0;
        puStack_38 = puVar5;
        func_0x000107c60e20(lVar7);
        return;
      }
      goto LAB_109e045f4;
    }
    lVar7 = plVar4[1];
    lVar6 = *plVar4;
    param_1[2] = plVar4[2];
    param_1[1] = lVar7;
    *param_1 = lVar6;
  }
  if ((undefined *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_38) {
    return;
  }
LAB_109e045f4:
  ___stack_chk_fail();
  if (puStack_150 != unaff_x20) {
    _free();
  }
  puVar2 = param_2;
  __Unwind_Resume(param_2);
  pcStack_158 = FUN_109e04614;
  puStack_170 = unaff_x20;
  puStack_168 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  FUN_109d37ad8(appuStack_1b8);
  FUN_109e046a0(puVar2,appuStack_1b8);
  appuStack_1b8[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_180 == 1) && (lStack_1a8 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109e04614; end: 109e0469f;  */

void FUN_109e04614(undefined8 param_1)

{
  undefined **appuStack_68 [2];
  long lStack_58;
  int iStack_30;
  
  FUN_109d37ad8(appuStack_68);
  FUN_109e046a0(param_1,appuStack_68);
  appuStack_68[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_30 == 1) && (lStack_58 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109e046a0; end: 109e04773;  */

/* WARNING: Removing unreachable block (ram,0x000109df9f18) */
/* WARNING: Removing unreachable block (ram,0x000109df9f20) */
/* WARNING: Removing unreachable block (ram,0x000109df9f78) */
/* WARNING: Removing unreachable block (ram,0x000109e05a38) */
/* WARNING: Type propagation algorithm not settling */

undefined8 ******* FUN_109e046a0(undefined8 *******param_1,undefined8 *******param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 *******pppppppuVar3;
  double *pdVar4;
  undefined8 *******pppppppuVar5;
  uint uVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 *******pppppppuVar14;
  char *pcVar15;
  undefined8 ******ppppppuVar16;
  undefined8 ******ppppppuVar17;
  byte *pbVar18;
  long lVar19;
  ulong unaff_x19;
  undefined8 *******unaff_x20;
  undefined8 *******pppppppuVar20;
  undefined8 *******unaff_x21;
  undefined8 *****pppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined1 *unaff_x22;
  undefined8 *******unaff_x23;
  undefined8 *******unaff_x24;
  undefined8 ******ppppppuVar23;
  undefined8 *******unaff_x29;
  code *pcVar24;
  code *unaff_x30;
  double dVar25;
  undefined8 *****pppppuStack_1c0;
  int iStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  undefined1 uStack_1a8;
  undefined **appuStack_1a0 [2];
  double adStack_190 [2];
  undefined **appuStack_180 [2];
  long lStack_170;
  int iStack_168;
  undefined4 uStack_164;
  undefined2 *puStack_160;
  undefined8 *******pppppppuStack_158;
  uint uStack_150;
  int aiStack_148 [4];
  undefined8 ******appppppuStack_138 [4];
  undefined8 *******pppppppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 ******ppppppuStack_100;
  long lStack_f8;
  undefined8 *******pppppppuStack_b0;
  code *pcStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 *******pppppppuStack_10;
  code *pcStack_8;
  
  pppppppuStack_10 = unaff_x29;
  pcStack_8 = unaff_x30;
code_r0x000109e046a0:
  pppppppuVar20 = param_1;
  FUN_109e04774(param_1,param_2,*param_1,param_1[1],*(char *)(param_1 + 4));
  pcVar15 = (char *)param_1[2];
  pppppppuVar14 = (undefined8 *******)param_1[3];
  pppppppuVar5 = param_2;
  switch(*(char *)((long)param_1 + 0x21)) {
  case '\x02':
    goto code_r0x000109e04814;
  case '\x03':
    if ((undefined8 *******)pcVar15 == (undefined8 *******)0x0) {
      pppppppuVar14 = (undefined8 *******)0x0;
    }
    else {
      pppppppuVar14 = (undefined8 *******)pcVar15;
      _strlen();
    }
code_r0x000109d2f728:
    *(undefined8 ********)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = pppppppuStack_10;
    *(code **)((long)register0x00000008 + -8) = pcStack_8;
    if ((undefined8 *******)((long)param_2[3] - (long)param_2[4]) < pppppppuVar14) {
      FUN_109e0560c(param_2,pcVar15,pppppppuVar14);
    }
    else if (pppppppuVar14 != (undefined8 *******)0x0) {
      _memcpy(param_2[4],pcVar15,pppppppuVar14);
      param_2[4] = (undefined8 ******)((long)param_2[4] + (long)pppppppuVar14);
    }
    return param_2;
  case '\x04':
    ppppppuVar7 = *(undefined8 *******)((long)pcVar15 + 8);
    pppppppuVar14 = *(undefined8 ********)pcVar15;
    if (-1 < (char)*(byte *)((long)pcVar15 + 0x17)) {
      ppppppuVar7 = (undefined8 ******)(ulong)*(byte *)((long)pcVar15 + 0x17);
      pppppppuVar14 = (undefined8 *******)pcVar15;
    }
    ppppppuVar16 = param_2[4];
    ppppppuVar23 = (undefined8 ******)((long)param_2[3] - (long)ppppppuVar16);
    if (ppppppuVar7 <= (undefined8 ******)((long)param_2[3] - (long)ppppppuVar16))
    goto LAB_109e05640;
    goto LAB_109e056c4;
  case '\x05':
    goto code_r0x000109d2f728;
  case '\x06':
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppppuVar14 = *(undefined8 ********)((long)pcVar15 + 8);
    FUN_109df843c(&pppppppuStack_158,*(undefined8 *******)pcVar15);
    pppppppuVar5 = pppppppuStack_158;
    if (uStack_150 != 0) {
      lVar13 = (ulong)uStack_150 << 6;
      pppppppuVar20 = pppppppuStack_158 + 4;
      do {
        if (*(int *)(pppppppuVar20 + -4) != 0) {
          if ((*(int *)(pppppppuVar20 + -4) == 2) ||
             (*(undefined8 *******)((long)pcVar15 + 0x18) <= pppppppuVar20[-1])) {
            pppppppuVar14 = (undefined8 *******)pppppppuVar20[-3];
            FUN_109d2f728(param_2,pppppppuVar14,pppppppuVar20[-2]);
          }
          else {
            pppppuVar21 = (*(undefined8 *******)((long)pcVar15 + 0x10))[(long)pppppppuVar20[-1]];
            iVar11 = *(int *)(pppppppuVar20 + 1);
            ppppppuVar23 = *pppppppuVar20;
            uStack_1a8 = *(undefined1 *)((long)pppppppuVar20 + 0xc);
            ppppppuVar7 = pppppppuVar20[2];
            ppppppuVar16 = pppppppuVar20[3];
            pppppuStack_1c0 = pppppuVar21;
            iStack_1b8 = iVar11;
            ppppppuStack_1b0 = ppppppuVar23;
            if (ppppppuVar23 == (undefined8 ******)0x0) {
              pppppppuVar14 = param_2;
              (*(code *)(*pppppuVar21)[3])(pppppuVar21,param_2,ppppppuVar7,ppppppuVar16);
            }
            else {
              FUN_109d37ad8(appuStack_1a0,&stack0xffffffffffffff38);
              (*(code *)(*pppppuVar21)[3])(pppppuVar21,appuStack_1a0,ppppppuVar7,ppppppuVar16);
              pppppppuVar14 = &pppppppuStack_b0;
              if (ppppppuVar23 == (undefined8 ******)0x0) {
                FUN_109e0560c(param_2);
              }
              else if (iVar11 == 0) {
                FUN_109e0560c(param_2,&pppppppuStack_b0);
                pppppppuVar14 = param_2;
                FUN_109e064e8(&pppppuStack_1c0,param_2,ppppppuVar23);
              }
              else if (iVar11 == 1) {
                FUN_109e064e8(&pppppuStack_1c0,param_2,(ulong)ppppppuVar23 >> 1);
                FUN_109e0560c(param_2,&pppppppuStack_b0,0);
                pppppppuVar14 = param_2;
                FUN_109e064e8(&pppppuStack_1c0,param_2,
                              (int)ppppppuVar23 - (int)((ulong)ppppppuVar23 >> 1));
              }
              else {
                FUN_109e064e8(&pppppuStack_1c0,param_2,ppppppuVar23);
                FUN_109e0560c(param_2,&pppppppuStack_b0,0);
              }
              appuStack_1a0[0] = &PTR_DAT_110b5c4a0;
              if ((iStack_168 == 1) && (adStack_190[0] != 0.0)) {
                __ZdaPv();
              }
            }
          }
        }
        pppppppuVar20 = pppppppuVar20 + 8;
        lVar13 = lVar13 + -0x40;
        pppppppuVar5 = pppppppuStack_158;
      } while (lVar13 != 0);
    }
    if (pppppppuVar5 != (undefined8 *******)aiStack_148) {
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return pppppppuVar5;
    }
    ___stack_chk_fail();
    __Unwind_Resume(pppppppuVar5);
    if ((uint)pppppppuVar14 < 0x50) {
      FUN_109e0560c();
    }
    else {
      do {
        uVar12 = (uint)pppppppuVar14;
        uVar6 = uVar12;
        if (0x4e < uVar12) {
          uVar6 = 0x4f;
        }
        FUN_109e0560c();
        pppppppuVar14 = (undefined8 *******)(ulong)(uVar12 - uVar6);
      } while (uVar12 - uVar6 != 0);
    }
    return pppppppuVar5;
  case '\a':
    ppppppuVar7 = param_2[4];
    if (ppppppuVar7 < param_2[3]) {
      param_2[4] = (undefined8 ******)((long)ppppppuVar7 + 1);
      *(char *)ppppppuVar7 = (char)pcVar15;
      return pppppppuVar20;
    }
    ppppppuVar7 = param_2[3];
    ppppppuVar16 = param_2[4];
    goto LAB_109e0558c;
  case '\b':
    pcVar15 = (char *)((ulong)pcVar15 & 0xffffffff);
    break;
  case '\t':
    pcVar15 = (char *)(long)(int)pcVar15;
    goto code_r0x000109e04804;
  case '\n':
  case '\f':
    pcVar15 = *(char **)pcVar15;
    break;
  case '\v':
  case '\r':
    pcVar15 = *(char **)pcVar15;
code_r0x000109e04804:
    pppppppuVar8 = (undefined8 *******)0x0;
    uVar10 = 0;
    pppppppuVar20 = pppppppuStack_10;
    pcVar24 = pcStack_8;
    goto code_r0x000109df9ee0;
  case '\x0e':
    ppppppuVar7 = *(undefined8 *******)pcVar15;
    iVar11 = 0;
    pppppppuVar20 = &ppppppuStack_a0;
    pppppppuVar5 = &pppppppuStack_10;
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar9 = 0;
    uVar6 = 0x43U - (int)LZCOUNT(ppppppuVar7) >> 2;
    dVar25 = 1.398043286095289e-76;
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    uStack_78 = 0x3030303030303030;
    uStack_80 = 0x3030303030303030;
    uStack_68 = 0x3030303030303030;
    lStack_70 = 0x3030303030303030;
    pppppppuVar14 = (undefined8 *******)(ulong)uVar6;
    uStack_98 = 0x3030303030303030;
    ppppppuStack_a0 = (undefined8 ******)0x3030303030303030;
    uStack_88 = 0x3030303030303030;
    uStack_90 = 0x3030303030303030;
    if (ppppppuVar7 != (undefined8 ******)0x0) {
      pbVar18 = (byte *)((long)pppppppuVar14 + (long)&ppppppuStack_a0);
      do {
        pbVar18 = pbVar18 + -1;
        *pbVar18 = (&UNK_10e043c4d)[(ulong)ppppppuVar7 & 0xf] | 0x20;
        bVar1 = (undefined8 ******)0xf < ppppppuVar7;
        ppppppuVar7 = (undefined8 ******)((ulong)ppppppuVar7 >> 4);
      } while (bVar1);
    }
    FUN_109e0560c();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return param_2;
    }
    ___stack_chk_fail();
    pdVar4 = adStack_190;
    pcStack_a8 = FUN_109df9ff4;
    pppppppuVar8 = &pppppppuStack_b0;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar6 = (uint)pppppppuVar20;
    pppppppuVar3 = (undefined8 *******)0x6;
    if (1 < uVar6) {
      pppppppuVar3 = (undefined8 *******)0x2;
    }
    pppppppuVar22 = pppppppuVar14;
    if ((uVar9 & 1) == 0) {
      pppppppuVar22 = pppppppuVar3;
    }
    pppppppuStack_10 = pppppppuVar5;
    pcStack_8 = pcStack_a8;
    pppppppuStack_b0 = pppppppuVar5;
    if (NAN(dVar25)) {
      pcVar15 = (char *)pppppppuVar20;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
        pcVar15 = "nan";
        pppppppuVar14 = (undefined8 *******)0x3;
        register0x00000008 = (BADSPACEBASE *)&ppppppuStack_a0;
        goto code_r0x000109d2f728;
      }
    }
    else if (ABS(dVar25) == INFINITY) {
      pppppppuVar14 = (undefined8 *******)0x3;
      if ((long)dVar25 < 0) {
        pppppppuVar14 = (undefined8 *******)0x4;
      }
      pcVar15 = &UNK_10f6022c8;
      if ((long)dVar25 >= 0) {
        pcVar15 = &UNK_10f40a62e;
      }
      register0x00000008 = (BADSPACEBASE *)&ppppppuStack_a0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) goto code_r0x000109d2f728;
    }
    else {
      uVar12 = 0x45;
      if (uVar6 != 1) {
        uVar12 = 0x66;
      }
      uVar2 = 0x65;
      if (uVar6 != 0) {
        uVar2 = uVar12;
      }
      unaff_x21 = (undefined8 *******)(ulong)uVar2;
      unaff_x23 = &ppppppuStack_100;
      uStack_108 = 8;
      lStack_110 = 0;
      pppppppuStack_118 = unaff_x23;
      FUN_109d37ad8(appuStack_180,&pppppppuStack_118);
      if ((ulong)(CONCAT44(uStack_164,iStack_168) - (long)puStack_160) < 2) {
        FUN_109e0560c(appuStack_180,&UNK_10f6022cd,2);
      }
      else {
        *puStack_160 = 0x2e25;
        puStack_160 = puStack_160 + 1;
      }
      uVar9 = 0;
      iVar11 = 0;
      FUN_109df9d4c(appuStack_180,pppppppuVar22,0);
      if (puStack_160 < (undefined2 *)CONCAT44(uStack_164,iStack_168)) {
        *(char *)puStack_160 = (char)uVar2;
        puStack_160 = (undefined2 *)((long)puStack_160 + 1);
      }
      else {
        FUN_109e05570(appuStack_180,unaff_x21);
      }
      func_0x000109d3acdc(&pppppppuStack_118,0);
      adStack_190[0] = dVar25 * 100.0;
      if (uVar6 != 3) {
        adStack_190[0] = dVar25;
      }
      lStack_110 = lStack_110 + -1;
      _snprintf(appppppuStack_138,0x20,pppppppuStack_118);
      pppppppuVar14 = appppppuStack_138;
      _strlen();
      pcVar15 = (char *)appppppuStack_138;
      FUN_109d2f728(param_2);
      if (uVar6 == 3) {
        ppppppuVar7 = param_2[4];
        if (ppppppuVar7 < param_2[3]) {
          param_2[4] = (undefined8 ******)((long)ppppppuVar7 + 1);
          *(undefined1 *)ppppppuVar7 = 0x25;
        }
        else {
          pcVar15 = (char *)0x25;
          FUN_109e05570(param_2);
        }
      }
      appuStack_180[0] = &PTR_DAT_110b5c4a0;
      if ((aiStack_148[0] == 1) && (lStack_170 != 0)) {
        __ZdaPv();
      }
      param_2 = pppppppuStack_118;
      if (pppppppuStack_118 != unaff_x23) {
        _free();
      }
      unaff_x20 = pppppppuVar20;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
        return param_2;
      }
    }
    ___stack_chk_fail();
    appuStack_180[0] = &PTR_DAT_110b5c4a0;
    if ((aiStack_148[0] == 1) && (lStack_170 != 0)) {
      __ZdaPv();
    }
    if (pppppppuStack_118 != unaff_x23) {
      _free();
    }
    pcVar24 = FUN_109dfa2e8;
    pppppppuVar5 = param_2;
    __Unwind_Resume();
    goto code_r0x000109dfa2e8;
  default:
    return pppppppuVar20;
  }
  pppppppuVar14 = (undefined8 *******)0x0;
  uVar9 = 0;
  iVar11 = 0;
  pdVar4 = (double *)register0x00000008;
  do {
    register0x00000008 = (BADSPACEBASE *)((long)pdVar4 + -0xd0);
    *(undefined8 ********)((long)pdVar4 + -0x40) = unaff_x24;
    *(undefined8 ********)((long)pdVar4 + -0x38) = unaff_x23;
    *(undefined1 **)((long)pdVar4 + -0x30) = unaff_x22;
    *(undefined8 ********)((long)pdVar4 + -0x28) = unaff_x21;
    *(undefined8 ********)((long)pdVar4 + -0x20) = unaff_x20;
    *(ulong *)((long)pdVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)pdVar4 + -0x10) = pppppppuStack_10;
    *(code **)((long)pdVar4 + -8) = pcStack_8;
    pppppppuVar20 = (undefined8 *******)((long)pdVar4 + -0x10);
    *(undefined8 *)((long)pdVar4 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar10 = uVar9;
    if ((ulong)pcVar15 >> 0x20 == 0) {
      pppppppuVar8 = pppppppuVar14;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pdVar4 + -0x48)) {
        pppppppuVar8 = *(undefined8 ********)((long)pdVar4 + -0x10);
        pcVar24 = *(code **)((long)pdVar4 + -8);
        unaff_x20 = *(undefined8 ********)((long)pdVar4 + -0x20);
        param_2 = *(undefined8 ********)((long)pdVar4 + -0x18);
        pppppppuVar22 = *(undefined8 ********)((long)pdVar4 + -0x30);
        unaff_x21 = *(undefined8 ********)((long)pdVar4 + -0x28);
        unaff_x24 = *(undefined8 ********)((long)pdVar4 + -0x40);
        unaff_x23 = *(undefined8 ********)((long)pdVar4 + -0x38);
code_r0x000109dfa2e8:
        *(undefined8 ********)((long)pdVar4 + -0x40) = unaff_x24;
        *(undefined8 ********)((long)pdVar4 + -0x38) = unaff_x23;
        *(undefined8 ********)((long)pdVar4 + -0x30) = pppppppuVar22;
        *(undefined8 ********)((long)pdVar4 + -0x28) = unaff_x21;
        *(undefined8 ********)((long)pdVar4 + -0x20) = unaff_x20;
        *(undefined8 ********)((long)pdVar4 + -0x18) = param_2;
        *(undefined8 ********)((long)pdVar4 + -0x10) = pppppppuVar8;
        *(code **)((long)pdVar4 + -8) = pcVar24;
        lVar13 = 0;
        *(undefined8 *)((long)pdVar4 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)((long)pdVar4 + -0x68) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x70) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x58) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x60) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x88) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x90) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x78) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x80) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xa8) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xb0) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x98) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xa0) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -200) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xd0) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xb8) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xc0) = 0x3030303030303030;
        lVar19 = 0x7f;
        do {
          uVar6 = (uint)pcVar15;
          *(byte *)((long)pdVar4 + lVar19 + -0xd0) =
               (char)pcVar15 + (char)(((ulong)pcVar15 & 0xffffffff) / 10) * -10 | 0x30;
          lVar13 = lVar13 + 0x100000000;
          lVar19 = lVar19 + -1;
          pcVar15 = (char *)(((ulong)pcVar15 & 0xffffffff) / 10);
        } while (9 < uVar6);
        pppppppuVar20 = (undefined8 *******)(lVar13 >> 0x20);
        if (iVar11 != 0) {
          ppppppuVar7 = pppppppuVar5[4];
          if (ppppppuVar7 < pppppppuVar5[3]) {
            pppppppuVar5[4] = (undefined8 ******)((long)ppppppuVar7 + 1);
            *(undefined1 *)ppppppuVar7 = 0x2d;
          }
          else {
            FUN_109e05570();
          }
        }
        pppppppuVar8 = pppppppuVar20;
        if ((int)uVar9 != 1) {
          for (; pppppppuVar8 < pppppppuVar14;
              pppppppuVar8 = (undefined8 *******)((long)pppppppuVar8 + 1)) {
            ppppppuVar7 = pppppppuVar5[4];
            if (ppppppuVar7 < pppppppuVar5[3]) {
              pppppppuVar5[4] = (undefined8 ******)((long)ppppppuVar7 + 1);
              *(undefined1 *)ppppppuVar7 = 0x30;
            }
            else {
              FUN_109e05570();
            }
          }
        }
        pppppppuVar8 = pppppppuVar20;
        if ((int)uVar9 == 1) {
          FUN_109dfa43c();
        }
        else {
          FUN_109e0560c();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pdVar4 + -0x48)) {
          return pppppppuVar5;
        }
        ___stack_chk_fail();
        *(undefined1 **)((long)pdVar4 + -0x100) = (undefined1 *)((long)pdVar4 + -0x50);
        *(undefined8 ********)((long)pdVar4 + -0xf8) = pppppppuVar20;
        *(undefined8 ********)((long)pdVar4 + -0xf0) = pppppppuVar14;
        *(ulong *)((long)pdVar4 + -0xe8) = uVar9;
        *(undefined1 **)((long)pdVar4 + -0xe0) = (undefined1 *)((long)pdVar4 + -0x10);
        *(code **)((long)pdVar4 + -0xd8) = FUN_109dfa43c;
        pcVar15 = (char *)((long)pppppppuVar8 + -1);
        FUN_109e0560c();
        if (pppppppuVar8 !=
            (undefined8 *******)(pcVar15 + (1 - (((ulong)pcVar15 / 3) * 2 + (ulong)pcVar15 / 3)))) {
          lVar13 = ((ulong)pcVar15 / 3) * -3;
          do {
            ppppppuVar7 = pppppppuVar5[4];
            if (ppppppuVar7 < pppppppuVar5[3]) {
              pppppppuVar5[4] = (undefined8 ******)((long)ppppppuVar7 + 1);
              *(undefined1 *)ppppppuVar7 = 0x2c;
            }
            else {
              FUN_109e05570();
            }
            FUN_109e0560c();
            lVar13 = lVar13 + 3;
          } while (lVar13 != 0);
        }
        return pppppppuVar5;
      }
    }
    else {
      lVar13 = 0;
      *(undefined8 *)((long)pdVar4 + -0x68) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x70) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x58) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x60) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x88) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x90) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x78) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x80) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xa8) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xb0) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x98) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xa0) = 0x3030303030303030;
      unaff_x22 = (undefined1 *)((long)pdVar4 + -0x50);
      lVar19 = 0x7f;
      *(undefined8 *)((long)pdVar4 + -200) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xd0) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xb8) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xc0) = 0x3030303030303030;
      do {
        *(byte *)((long)pdVar4 + lVar19 + -0xd0) =
             (char)pcVar15 + (char)(undefined8 *******)((ulong)pcVar15 / 10) * -10 | 0x30;
        lVar13 = lVar13 + 0x100000000;
        lVar19 = lVar19 + -1;
        bVar1 = (undefined8 *******)0x9 < pcVar15;
        pcVar15 = (char *)((ulong)pcVar15 / 10);
      } while (bVar1);
      unaff_x21 = (undefined8 *******)(lVar13 >> 0x20);
      if (iVar11 != 0) {
        ppppppuVar7 = pppppppuVar5[4];
        if (ppppppuVar7 < pppppppuVar5[3]) {
          pppppppuVar5[4] = (undefined8 ******)((long)ppppppuVar7 + 1);
          *(undefined1 *)ppppppuVar7 = 0x2d;
        }
        else {
          FUN_109e05570();
        }
      }
      if (((int)uVar9 != 1) && (unaff_x21 < pppppppuVar14)) {
        unaff_x23 = (undefined8 *******)0x30;
        unaff_x24 = unaff_x21;
        do {
          ppppppuVar7 = pppppppuVar5[4];
          if (ppppppuVar7 < pppppppuVar5[3]) {
            pppppppuVar5[4] = (undefined8 ******)((long)ppppppuVar7 + 1);
            *(undefined1 *)ppppppuVar7 = 0x30;
          }
          else {
            FUN_109e05570();
          }
          unaff_x24 = (undefined8 *******)((long)unaff_x24 + 1);
        } while (unaff_x24 < pppppppuVar14);
      }
      pcVar15 = unaff_x22 + -(long)unaff_x21;
      pppppppuVar8 = unaff_x21;
      if ((int)uVar9 == 1) {
        FUN_109dfa43c();
      }
      else {
        FUN_109e0560c();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pdVar4 + -0x48)) {
        return pppppppuVar5;
      }
    }
    pcVar24 = FUN_109df9ee0;
    ___stack_chk_fail();
    unaff_x19 = uVar9;
    unaff_x20 = pppppppuVar14;
code_r0x000109df9ee0:
    pdVar4 = (double *)register0x00000008;
    pppppppuVar14 = pppppppuVar8;
    uVar9 = uVar10;
    pppppppuStack_10 = pppppppuVar20;
    pcStack_8 = pcVar24;
    if ((long)pcVar15 < 0) {
      pcVar15 = (char *)-(long)pcVar15;
      iVar11 = 1;
    }
    else {
      iVar11 = 0;
    }
  } while( true );
LAB_109e0558c:
  if (ppppppuVar16 < ppppppuVar7) {
LAB_109e055c0:
    param_2[4] = (undefined8 ******)((long)ppppppuVar16 + 1);
    *(char *)ppppppuVar16 = (char)pcVar15;
    return param_2;
  }
  if (param_2[2] != (undefined8 ******)0x0) {
    FUN_109e05520(param_2);
    ppppppuVar16 = param_2[4];
    goto LAB_109e055c0;
  }
  if (*(int *)(param_2 + 7) == 0) {
    if (param_2[6] != (undefined8 ******)0x0) {
      FUN_109e057dc();
    }
    (*(code *)(*param_2)[9])(param_2,&stack0xffffffffffffffdf,1);
    return param_2;
  }
  FUN_109e0538c(param_2);
  ppppppuVar7 = param_2[3];
  ppppppuVar16 = param_2[4];
  goto LAB_109e0558c;
LAB_109e056c4:
  if (param_2[2] != (undefined8 ******)0x0) {
    if (ppppppuVar16 == param_2[2]) {
      if (param_2[6] != (undefined8 ******)0x0) {
        FUN_109e057dc();
      }
      uVar9 = 0;
      if (ppppppuVar23 != (undefined8 ******)0x0) {
        uVar9 = (ulong)ppppppuVar7 / (ulong)ppppppuVar23;
      }
      ppppppuVar23 = (undefined8 ******)(uVar9 * (long)ppppppuVar23);
      ppppppuVar7 = (undefined8 ******)((long)ppppppuVar7 - (long)ppppppuVar23);
      (*(code *)(*param_2)[9])(param_2,pppppppuVar14,ppppppuVar23);
      ppppppuVar16 = param_2[4];
      ppppppuVar17 = (undefined8 ******)((long)param_2[3] - (long)ppppppuVar16);
      if (ppppppuVar7 <= ppppppuVar17) {
        pppppppuVar14 = (undefined8 *******)((long)pppppppuVar14 + (long)ppppppuVar23);
        goto LAB_109e05640;
      }
    }
    else {
      FUN_109e05740(param_2,pppppppuVar14,ppppppuVar23);
      FUN_109e05520(param_2);
      ppppppuVar7 = (undefined8 ******)((long)ppppppuVar7 - (long)ppppppuVar23);
      ppppppuVar16 = param_2[4];
      ppppppuVar17 = (undefined8 ******)((long)param_2[3] - (long)ppppppuVar16);
    }
    pppppppuVar14 = (undefined8 *******)((long)pppppppuVar14 + (long)ppppppuVar23);
    ppppppuVar23 = ppppppuVar17;
    if (ppppppuVar7 <= ppppppuVar17) goto LAB_109e05640;
    goto LAB_109e056c4;
  }
  if (*(int *)(param_2 + 7) == 0) {
    if (param_2[6] != (undefined8 ******)0x0) {
      FUN_109e057dc();
    }
    (*(code *)(*param_2)[9])(param_2,pppppppuVar14,ppppppuVar7);
    return param_2;
  }
  FUN_109e0538c(param_2);
  ppppppuVar16 = param_2[4];
  ppppppuVar23 = (undefined8 ******)((long)param_2[3] - (long)ppppppuVar16);
  if (ppppppuVar7 <= ppppppuVar23) {
LAB_109e05640:
    FUN_109e05740(param_2,pppppppuVar14,ppppppuVar7);
    return param_2;
  }
  goto LAB_109e056c4;
code_r0x000109e04814:
  param_1 = (undefined8 *******)pcVar15;
  goto code_r0x000109e046a0;
}



/* Entry: 109e04774; end: 109e0486b;  */

/* WARNING: Removing unreachable block (ram,0x000109df9f18) */
/* WARNING: Removing unreachable block (ram,0x000109df9f20) */
/* WARNING: Removing unreachable block (ram,0x000109df9f78) */
/* WARNING: Removing unreachable block (ram,0x000109e05a38) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_109e04774(undefined8 *******param_1,undefined8 *******param_2,char *param_3,
             undefined8 *******param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  undefined8 *******pppppppuVar3;
  double *pdVar4;
  uint uVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  byte *pbVar17;
  long lVar18;
  ulong unaff_x19;
  undefined8 *******unaff_x20;
  undefined8 *******pppppppuVar19;
  undefined8 *******unaff_x21;
  undefined8 *****pppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined1 *unaff_x22;
  undefined8 *******unaff_x23;
  undefined8 *******unaff_x24;
  undefined8 ******ppppppuVar22;
  undefined8 *******unaff_x29;
  code *pcVar23;
  code *unaff_x30;
  double dVar24;
  undefined8 *****pppppuStack_1c0;
  int iStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  undefined1 uStack_1a8;
  undefined **appuStack_1a0 [2];
  double adStack_190 [2];
  undefined **appuStack_180 [2];
  long lStack_170;
  int iStack_168;
  undefined4 uStack_164;
  undefined2 *puStack_160;
  undefined8 *******pppppppuStack_158;
  uint uStack_150;
  int aiStack_148 [4];
  undefined8 ******appppppuStack_138 [4];
  undefined8 *******pppppppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 ******ppppppuStack_100;
  long lStack_f8;
  undefined8 *******pppppppuStack_b0;
  code *pcStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 *******pppppppuStack_10;
  code *pcStack_8;
  
  pppppppuStack_10 = unaff_x29;
  pcStack_8 = unaff_x30;
code_r0x000109e04774:
  pppppppuVar7 = param_2;
  switch(param_5) {
  case 2:
    goto FUN_109e046a0;
  case 3:
    if ((undefined8 *******)param_3 == (undefined8 *******)0x0) {
      param_4 = (undefined8 *******)0x0;
    }
    else {
      param_4 = (undefined8 *******)param_3;
      _strlen();
    }
code_r0x000109d2f728:
    *(undefined8 ********)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = pppppppuStack_10;
    *(code **)((long)register0x00000008 + -8) = pcStack_8;
    if ((undefined8 *******)((long)param_2[3] - (long)param_2[4]) < param_4) {
      FUN_109e0560c(param_2,param_3,param_4);
    }
    else if (param_4 != (undefined8 *******)0x0) {
      _memcpy(param_2[4],param_3,param_4);
      param_2[4] = (undefined8 ******)((long)param_2[4] + (long)param_4);
    }
    return param_2;
  case 4:
    ppppppuVar6 = *(undefined8 *******)((long)param_3 + 8);
    pppppppuVar7 = *(undefined8 ********)param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      ppppppuVar6 = (undefined8 ******)(ulong)*(byte *)((long)param_3 + 0x17);
      pppppppuVar7 = (undefined8 *******)param_3;
    }
    ppppppuVar15 = param_2[4];
    ppppppuVar22 = (undefined8 ******)((long)param_2[3] - (long)ppppppuVar15);
    if (ppppppuVar6 <= (undefined8 ******)((long)param_2[3] - (long)ppppppuVar15))
    goto LAB_109e05640;
    goto LAB_109e056c4;
  case 5:
    goto code_r0x000109d2f728;
  case 6:
    lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppppuVar7 = *(undefined8 ********)((long)param_3 + 8);
    FUN_109df843c(&pppppppuStack_158,*(undefined8 *******)param_3);
    pppppppuVar19 = pppppppuStack_158;
    if (uStack_150 != 0) {
      lVar13 = (ulong)uStack_150 << 6;
      pppppppuVar8 = pppppppuStack_158 + 4;
      do {
        if (*(int *)(pppppppuVar8 + -4) != 0) {
          if ((*(int *)(pppppppuVar8 + -4) == 2) ||
             (*(undefined8 *******)((long)param_3 + 0x18) <= pppppppuVar8[-1])) {
            pppppppuVar7 = (undefined8 *******)pppppppuVar8[-3];
            FUN_109d2f728(param_2,pppppppuVar7,pppppppuVar8[-2]);
          }
          else {
            pppppuVar20 = (*(undefined8 *******)((long)param_3 + 0x10))[(long)pppppppuVar8[-1]];
            iVar11 = *(int *)(pppppppuVar8 + 1);
            ppppppuVar22 = *pppppppuVar8;
            uStack_1a8 = *(undefined1 *)((long)pppppppuVar8 + 0xc);
            ppppppuVar6 = pppppppuVar8[2];
            ppppppuVar15 = pppppppuVar8[3];
            pppppuStack_1c0 = pppppuVar20;
            iStack_1b8 = iVar11;
            ppppppuStack_1b0 = ppppppuVar22;
            if (ppppppuVar22 == (undefined8 ******)0x0) {
              pppppppuVar7 = param_2;
              (*(code *)(*pppppuVar20)[3])(pppppuVar20,param_2,ppppppuVar6,ppppppuVar15);
            }
            else {
              FUN_109d37ad8(appuStack_1a0,&stack0xffffffffffffff38);
              (*(code *)(*pppppuVar20)[3])(pppppuVar20,appuStack_1a0,ppppppuVar6,ppppppuVar15);
              pppppppuVar7 = &pppppppuStack_b0;
              if (ppppppuVar22 == (undefined8 ******)0x0) {
                FUN_109e0560c(param_2);
              }
              else if (iVar11 == 0) {
                FUN_109e0560c(param_2,&pppppppuStack_b0);
                pppppppuVar7 = param_2;
                FUN_109e064e8(&pppppuStack_1c0,param_2,ppppppuVar22);
              }
              else if (iVar11 == 1) {
                FUN_109e064e8(&pppppuStack_1c0,param_2,(ulong)ppppppuVar22 >> 1);
                FUN_109e0560c(param_2,&pppppppuStack_b0,0);
                pppppppuVar7 = param_2;
                FUN_109e064e8(&pppppuStack_1c0,param_2,
                              (int)ppppppuVar22 - (int)((ulong)ppppppuVar22 >> 1));
              }
              else {
                FUN_109e064e8(&pppppuStack_1c0,param_2,ppppppuVar22);
                FUN_109e0560c(param_2,&pppppppuStack_b0,0);
              }
              appuStack_1a0[0] = &PTR_DAT_110b5c4a0;
              if ((iStack_168 == 1) && (adStack_190[0] != 0.0)) {
                __ZdaPv();
              }
            }
          }
        }
        pppppppuVar8 = pppppppuVar8 + 8;
        lVar13 = lVar13 + -0x40;
        pppppppuVar19 = pppppppuStack_158;
      } while (lVar13 != 0);
    }
    if (pppppppuVar19 != (undefined8 *******)aiStack_148) {
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return pppppppuVar19;
    }
    ___stack_chk_fail();
    __Unwind_Resume(pppppppuVar19);
    if ((uint)pppppppuVar7 < 0x50) {
      FUN_109e0560c();
    }
    else {
      do {
        uVar12 = (uint)pppppppuVar7;
        uVar5 = uVar12;
        if (0x4e < uVar12) {
          uVar5 = 0x4f;
        }
        FUN_109e0560c();
        pppppppuVar7 = (undefined8 *******)(ulong)(uVar12 - uVar5);
      } while (uVar12 - uVar5 != 0);
    }
    return pppppppuVar19;
  case 7:
    ppppppuVar6 = param_2[4];
    if (ppppppuVar6 < param_2[3]) {
      param_2[4] = (undefined8 ******)((long)ppppppuVar6 + 1);
      *(char *)ppppppuVar6 = (char)param_3;
      return param_1;
    }
    ppppppuVar6 = param_2[3];
    ppppppuVar15 = param_2[4];
    goto LAB_109e0558c;
  case 8:
    param_3 = (char *)((ulong)param_3 & 0xffffffff);
    break;
  case 9:
    param_3 = (char *)(long)(int)param_3;
    goto code_r0x000109e04804;
  case 10:
  case 0xc:
    param_3 = *(char **)param_3;
    break;
  case 0xb:
  case 0xd:
    param_3 = *(char **)param_3;
code_r0x000109e04804:
    pppppppuVar8 = (undefined8 *******)0x0;
    uVar10 = 0;
    pppppppuVar19 = pppppppuStack_10;
    pcVar23 = pcStack_8;
    goto code_r0x000109df9ee0;
  case 0xe:
    ppppppuVar6 = *(undefined8 *******)param_3;
    iVar11 = 0;
    pppppppuVar19 = &ppppppuStack_a0;
    pppppppuVar7 = &pppppppuStack_10;
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar9 = 0;
    uVar5 = 0x43U - (int)LZCOUNT(ppppppuVar6) >> 2;
    dVar24 = 1.398043286095289e-76;
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    uStack_78 = 0x3030303030303030;
    uStack_80 = 0x3030303030303030;
    uStack_68 = 0x3030303030303030;
    lStack_70 = 0x3030303030303030;
    param_4 = (undefined8 *******)(ulong)uVar5;
    uStack_98 = 0x3030303030303030;
    ppppppuStack_a0 = (undefined8 ******)0x3030303030303030;
    uStack_88 = 0x3030303030303030;
    uStack_90 = 0x3030303030303030;
    if (ppppppuVar6 != (undefined8 ******)0x0) {
      pbVar17 = (byte *)((long)param_4 + (long)&ppppppuStack_a0);
      do {
        pbVar17 = pbVar17 + -1;
        *pbVar17 = (&UNK_10e043c4d)[(ulong)ppppppuVar6 & 0xf] | 0x20;
        bVar1 = (undefined8 ******)0xf < ppppppuVar6;
        ppppppuVar6 = (undefined8 ******)((ulong)ppppppuVar6 >> 4);
      } while (bVar1);
    }
    FUN_109e0560c();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return param_2;
    }
    ___stack_chk_fail();
    pdVar4 = adStack_190;
    pcStack_a8 = FUN_109df9ff4;
    pppppppuVar8 = &pppppppuStack_b0;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar5 = (uint)pppppppuVar19;
    pppppppuVar3 = (undefined8 *******)0x6;
    if (1 < uVar5) {
      pppppppuVar3 = (undefined8 *******)0x2;
    }
    pppppppuVar21 = param_4;
    if ((uVar9 & 1) == 0) {
      pppppppuVar21 = pppppppuVar3;
    }
    pppppppuStack_10 = pppppppuVar7;
    pcStack_8 = pcStack_a8;
    pppppppuStack_b0 = pppppppuVar7;
    if (NAN(dVar24)) {
      param_3 = (char *)pppppppuVar19;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
        param_3 = "nan";
        param_4 = (undefined8 *******)0x3;
        register0x00000008 = (BADSPACEBASE *)&ppppppuStack_a0;
        goto code_r0x000109d2f728;
      }
    }
    else if (ABS(dVar24) == INFINITY) {
      param_4 = (undefined8 *******)0x3;
      if ((long)dVar24 < 0) {
        param_4 = (undefined8 *******)0x4;
      }
      param_3 = &UNK_10f6022c8;
      if ((long)dVar24 >= 0) {
        param_3 = &UNK_10f40a62e;
      }
      register0x00000008 = (BADSPACEBASE *)&ppppppuStack_a0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) goto code_r0x000109d2f728;
    }
    else {
      uVar12 = 0x45;
      if (uVar5 != 1) {
        uVar12 = 0x66;
      }
      uVar2 = 0x65;
      if (uVar5 != 0) {
        uVar2 = uVar12;
      }
      unaff_x21 = (undefined8 *******)(ulong)uVar2;
      unaff_x23 = &ppppppuStack_100;
      uStack_108 = 8;
      lStack_110 = 0;
      pppppppuStack_118 = unaff_x23;
      FUN_109d37ad8(appuStack_180,&pppppppuStack_118);
      if ((ulong)(CONCAT44(uStack_164,iStack_168) - (long)puStack_160) < 2) {
        FUN_109e0560c(appuStack_180,&UNK_10f6022cd,2);
      }
      else {
        *puStack_160 = 0x2e25;
        puStack_160 = puStack_160 + 1;
      }
      uVar9 = 0;
      iVar11 = 0;
      FUN_109df9d4c(appuStack_180,pppppppuVar21,0);
      if (puStack_160 < (undefined2 *)CONCAT44(uStack_164,iStack_168)) {
        *(char *)puStack_160 = (char)uVar2;
        puStack_160 = (undefined2 *)((long)puStack_160 + 1);
      }
      else {
        FUN_109e05570(appuStack_180,unaff_x21);
      }
      func_0x000109d3acdc(&pppppppuStack_118,0);
      adStack_190[0] = dVar24 * 100.0;
      if (uVar5 != 3) {
        adStack_190[0] = dVar24;
      }
      lStack_110 = lStack_110 + -1;
      _snprintf(appppppuStack_138,0x20,pppppppuStack_118);
      param_4 = appppppuStack_138;
      _strlen();
      param_3 = (char *)appppppuStack_138;
      FUN_109d2f728(param_2);
      if (uVar5 == 3) {
        ppppppuVar6 = param_2[4];
        if (ppppppuVar6 < param_2[3]) {
          param_2[4] = (undefined8 ******)((long)ppppppuVar6 + 1);
          *(undefined1 *)ppppppuVar6 = 0x25;
        }
        else {
          param_3 = (char *)0x25;
          FUN_109e05570(param_2);
        }
      }
      appuStack_180[0] = &PTR_DAT_110b5c4a0;
      if ((aiStack_148[0] == 1) && (lStack_170 != 0)) {
        __ZdaPv();
      }
      param_2 = pppppppuStack_118;
      if (pppppppuStack_118 != unaff_x23) {
        _free();
      }
      unaff_x20 = pppppppuVar19;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
        return param_2;
      }
    }
    ___stack_chk_fail();
    appuStack_180[0] = &PTR_DAT_110b5c4a0;
    if ((aiStack_148[0] == 1) && (lStack_170 != 0)) {
      __ZdaPv();
    }
    if (pppppppuStack_118 != unaff_x23) {
      _free();
    }
    pcVar23 = FUN_109dfa2e8;
    pppppppuVar7 = param_2;
    __Unwind_Resume();
    goto code_r0x000109dfa2e8;
  default:
    return param_1;
  }
  param_4 = (undefined8 *******)0x0;
  uVar9 = 0;
  iVar11 = 0;
  pdVar4 = (double *)register0x00000008;
  do {
    register0x00000008 = (BADSPACEBASE *)((long)pdVar4 + -0xd0);
    *(undefined8 ********)((long)pdVar4 + -0x40) = unaff_x24;
    *(undefined8 ********)((long)pdVar4 + -0x38) = unaff_x23;
    *(undefined1 **)((long)pdVar4 + -0x30) = unaff_x22;
    *(undefined8 ********)((long)pdVar4 + -0x28) = unaff_x21;
    *(undefined8 ********)((long)pdVar4 + -0x20) = unaff_x20;
    *(ulong *)((long)pdVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)pdVar4 + -0x10) = pppppppuStack_10;
    *(code **)((long)pdVar4 + -8) = pcStack_8;
    pppppppuVar19 = (undefined8 *******)((long)pdVar4 + -0x10);
    *(undefined8 *)((long)pdVar4 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar10 = uVar9;
    if ((ulong)param_3 >> 0x20 == 0) {
      pppppppuVar8 = param_4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pdVar4 + -0x48)) {
        pppppppuVar8 = *(undefined8 ********)((long)pdVar4 + -0x10);
        pcVar23 = *(code **)((long)pdVar4 + -8);
        unaff_x20 = *(undefined8 ********)((long)pdVar4 + -0x20);
        param_2 = *(undefined8 ********)((long)pdVar4 + -0x18);
        pppppppuVar21 = *(undefined8 ********)((long)pdVar4 + -0x30);
        unaff_x21 = *(undefined8 ********)((long)pdVar4 + -0x28);
        unaff_x24 = *(undefined8 ********)((long)pdVar4 + -0x40);
        unaff_x23 = *(undefined8 ********)((long)pdVar4 + -0x38);
code_r0x000109dfa2e8:
        *(undefined8 ********)((long)pdVar4 + -0x40) = unaff_x24;
        *(undefined8 ********)((long)pdVar4 + -0x38) = unaff_x23;
        *(undefined8 ********)((long)pdVar4 + -0x30) = pppppppuVar21;
        *(undefined8 ********)((long)pdVar4 + -0x28) = unaff_x21;
        *(undefined8 ********)((long)pdVar4 + -0x20) = unaff_x20;
        *(undefined8 ********)((long)pdVar4 + -0x18) = param_2;
        *(undefined8 ********)((long)pdVar4 + -0x10) = pppppppuVar8;
        *(code **)((long)pdVar4 + -8) = pcVar23;
        lVar13 = 0;
        *(undefined8 *)((long)pdVar4 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)((long)pdVar4 + -0x68) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x70) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x58) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x60) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x88) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x90) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x78) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x80) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xa8) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xb0) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0x98) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xa0) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -200) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xd0) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xb8) = 0x3030303030303030;
        *(undefined8 *)((long)pdVar4 + -0xc0) = 0x3030303030303030;
        lVar18 = 0x7f;
        do {
          uVar5 = (uint)param_3;
          *(byte *)((long)pdVar4 + lVar18 + -0xd0) =
               (char)param_3 + (char)(((ulong)param_3 & 0xffffffff) / 10) * -10 | 0x30;
          lVar13 = lVar13 + 0x100000000;
          lVar18 = lVar18 + -1;
          param_3 = (char *)(((ulong)param_3 & 0xffffffff) / 10);
        } while (9 < uVar5);
        pppppppuVar19 = (undefined8 *******)(lVar13 >> 0x20);
        if (iVar11 != 0) {
          ppppppuVar6 = pppppppuVar7[4];
          if (ppppppuVar6 < pppppppuVar7[3]) {
            pppppppuVar7[4] = (undefined8 ******)((long)ppppppuVar6 + 1);
            *(undefined1 *)ppppppuVar6 = 0x2d;
          }
          else {
            FUN_109e05570();
          }
        }
        pppppppuVar8 = pppppppuVar19;
        if ((int)uVar9 != 1) {
          for (; pppppppuVar8 < param_4; pppppppuVar8 = (undefined8 *******)((long)pppppppuVar8 + 1)
              ) {
            ppppppuVar6 = pppppppuVar7[4];
            if (ppppppuVar6 < pppppppuVar7[3]) {
              pppppppuVar7[4] = (undefined8 ******)((long)ppppppuVar6 + 1);
              *(undefined1 *)ppppppuVar6 = 0x30;
            }
            else {
              FUN_109e05570();
            }
          }
        }
        pppppppuVar8 = pppppppuVar19;
        if ((int)uVar9 == 1) {
          FUN_109dfa43c();
        }
        else {
          FUN_109e0560c();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pdVar4 + -0x48)) {
          return pppppppuVar7;
        }
        ___stack_chk_fail();
        *(undefined1 **)((long)pdVar4 + -0x100) = (undefined1 *)((long)pdVar4 + -0x50);
        *(undefined8 ********)((long)pdVar4 + -0xf8) = pppppppuVar19;
        *(undefined8 ********)((long)pdVar4 + -0xf0) = param_4;
        *(ulong *)((long)pdVar4 + -0xe8) = uVar9;
        *(undefined1 **)((long)pdVar4 + -0xe0) = (undefined1 *)((long)pdVar4 + -0x10);
        *(code **)((long)pdVar4 + -0xd8) = FUN_109dfa43c;
        pcVar14 = (char *)((long)pppppppuVar8 + -1);
        FUN_109e0560c();
        if (pppppppuVar8 !=
            (undefined8 *******)(pcVar14 + (1 - (((ulong)pcVar14 / 3) * 2 + (ulong)pcVar14 / 3)))) {
          lVar13 = ((ulong)pcVar14 / 3) * -3;
          do {
            ppppppuVar6 = pppppppuVar7[4];
            if (ppppppuVar6 < pppppppuVar7[3]) {
              pppppppuVar7[4] = (undefined8 ******)((long)ppppppuVar6 + 1);
              *(undefined1 *)ppppppuVar6 = 0x2c;
            }
            else {
              FUN_109e05570();
            }
            FUN_109e0560c();
            lVar13 = lVar13 + 3;
          } while (lVar13 != 0);
        }
        return pppppppuVar7;
      }
    }
    else {
      lVar13 = 0;
      *(undefined8 *)((long)pdVar4 + -0x68) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x70) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x58) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x60) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x88) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x90) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x78) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x80) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xa8) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xb0) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0x98) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xa0) = 0x3030303030303030;
      unaff_x22 = (undefined1 *)((long)pdVar4 + -0x50);
      lVar18 = 0x7f;
      *(undefined8 *)((long)pdVar4 + -200) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xd0) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xb8) = 0x3030303030303030;
      *(undefined8 *)((long)pdVar4 + -0xc0) = 0x3030303030303030;
      do {
        *(byte *)((long)pdVar4 + lVar18 + -0xd0) =
             (char)param_3 + (char)(undefined8 *******)((ulong)param_3 / 10) * -10 | 0x30;
        lVar13 = lVar13 + 0x100000000;
        lVar18 = lVar18 + -1;
        bVar1 = (undefined8 *******)0x9 < param_3;
        param_3 = (char *)((ulong)param_3 / 10);
      } while (bVar1);
      unaff_x21 = (undefined8 *******)(lVar13 >> 0x20);
      if (iVar11 != 0) {
        ppppppuVar6 = pppppppuVar7[4];
        if (ppppppuVar6 < pppppppuVar7[3]) {
          pppppppuVar7[4] = (undefined8 ******)((long)ppppppuVar6 + 1);
          *(undefined1 *)ppppppuVar6 = 0x2d;
        }
        else {
          FUN_109e05570();
        }
      }
      if (((int)uVar9 != 1) && (unaff_x21 < param_4)) {
        unaff_x23 = (undefined8 *******)0x30;
        unaff_x24 = unaff_x21;
        do {
          ppppppuVar6 = pppppppuVar7[4];
          if (ppppppuVar6 < pppppppuVar7[3]) {
            pppppppuVar7[4] = (undefined8 ******)((long)ppppppuVar6 + 1);
            *(undefined1 *)ppppppuVar6 = 0x30;
          }
          else {
            FUN_109e05570();
          }
          unaff_x24 = (undefined8 *******)((long)unaff_x24 + 1);
        } while (unaff_x24 < param_4);
      }
      param_3 = unaff_x22 + -(long)unaff_x21;
      pppppppuVar8 = unaff_x21;
      if ((int)uVar9 == 1) {
        FUN_109dfa43c();
      }
      else {
        FUN_109e0560c();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pdVar4 + -0x48)) {
        return pppppppuVar7;
      }
    }
    pcVar23 = FUN_109df9ee0;
    ___stack_chk_fail();
    unaff_x19 = uVar9;
    unaff_x20 = param_4;
code_r0x000109df9ee0:
    pdVar4 = (double *)register0x00000008;
    param_4 = pppppppuVar8;
    uVar9 = uVar10;
    pppppppuStack_10 = pppppppuVar19;
    pcStack_8 = pcVar23;
    if ((long)param_3 < 0) {
      param_3 = (char *)-(long)param_3;
      iVar11 = 1;
    }
    else {
      iVar11 = 0;
    }
  } while( true );
LAB_109e0558c:
  if (ppppppuVar15 < ppppppuVar6) {
LAB_109e055c0:
    param_2[4] = (undefined8 ******)((long)ppppppuVar15 + 1);
    *(char *)ppppppuVar15 = (char)param_3;
    return param_2;
  }
  if (param_2[2] != (undefined8 ******)0x0) {
    FUN_109e05520(param_2);
    ppppppuVar15 = param_2[4];
    goto LAB_109e055c0;
  }
  if (*(int *)(param_2 + 7) == 0) {
    if (param_2[6] != (undefined8 ******)0x0) {
      FUN_109e057dc();
    }
    (*(code *)(*param_2)[9])(param_2,&stack0xffffffffffffffdf,1);
    return param_2;
  }
  FUN_109e0538c(param_2);
  ppppppuVar6 = param_2[3];
  ppppppuVar15 = param_2[4];
  goto LAB_109e0558c;
LAB_109e056c4:
  if (param_2[2] != (undefined8 ******)0x0) {
    if (ppppppuVar15 == param_2[2]) {
      if (param_2[6] != (undefined8 ******)0x0) {
        FUN_109e057dc();
      }
      uVar9 = 0;
      if (ppppppuVar22 != (undefined8 ******)0x0) {
        uVar9 = (ulong)ppppppuVar6 / (ulong)ppppppuVar22;
      }
      ppppppuVar22 = (undefined8 ******)(uVar9 * (long)ppppppuVar22);
      ppppppuVar6 = (undefined8 ******)((long)ppppppuVar6 - (long)ppppppuVar22);
      (*(code *)(*param_2)[9])(param_2,pppppppuVar7,ppppppuVar22);
      ppppppuVar15 = param_2[4];
      ppppppuVar16 = (undefined8 ******)((long)param_2[3] - (long)ppppppuVar15);
      if (ppppppuVar6 <= ppppppuVar16) {
        pppppppuVar7 = (undefined8 *******)((long)pppppppuVar7 + (long)ppppppuVar22);
        goto LAB_109e05640;
      }
    }
    else {
      FUN_109e05740(param_2,pppppppuVar7,ppppppuVar22);
      FUN_109e05520(param_2);
      ppppppuVar6 = (undefined8 ******)((long)ppppppuVar6 - (long)ppppppuVar22);
      ppppppuVar15 = param_2[4];
      ppppppuVar16 = (undefined8 ******)((long)param_2[3] - (long)ppppppuVar15);
    }
    pppppppuVar7 = (undefined8 *******)((long)pppppppuVar7 + (long)ppppppuVar22);
    ppppppuVar22 = ppppppuVar16;
    if (ppppppuVar6 <= ppppppuVar16) goto LAB_109e05640;
    goto LAB_109e056c4;
  }
  if (*(int *)(param_2 + 7) == 0) {
    if (param_2[6] != (undefined8 ******)0x0) {
      FUN_109e057dc();
    }
    (*(code *)(*param_2)[9])(param_2,pppppppuVar7,ppppppuVar6);
    return param_2;
  }
  FUN_109e0538c(param_2);
  ppppppuVar15 = param_2[4];
  ppppppuVar22 = (undefined8 ******)((long)param_2[3] - (long)ppppppuVar15);
  if (ppppppuVar6 <= ppppppuVar22) {
LAB_109e05640:
    FUN_109e05740(param_2,pppppppuVar7,ppppppuVar6);
    return param_2;
  }
  goto LAB_109e056c4;
FUN_109e046a0:
  param_1 = (undefined8 *******)param_3;
  FUN_109e04774(param_3,param_2,*(undefined8 *******)param_3,
                *(undefined8 *******)((long)param_3 + 8),*(char *)((long)param_3 + 0x20));
  param_4 = *(undefined8 ********)((long)param_3 + 0x18);
  param_5 = (uint)*(byte *)((long)param_3 + 0x21);
  param_3 = (char *)*(undefined8 ********)((long)param_3 + 0x10);
  goto code_r0x000109e04774;
}



/* Entry: 109e0486c; end: 109e04977;  */

long * FUN_109e0486c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (lRam00000001138345e8 == 0) {
    param_1 = (long *)0x1138345e8;
    func_0x000107c2b010(0x1138345e8,FUN_109e04978,0x109df85bc);
  }
  if (*(char *)(lRam00000001138345e8 + 0x80) != '\x01') {
    FUN_109df7828(&UNK_10f60241e,1);
    plVar2 = (long *)0xc0;
    __Znwm();
    func_0x000107c2af50();
    *(undefined1 *)(plVar2 + 0x10) = 0;
    plVar2[0x11] = (long)&PTR_FUN_110b3fac8;
    plVar2[0x12] = 0;
    *plVar2 = (long)&PTR_FUN_110b5be10;
    plVar2[0x13] = (long)&PTR_DAT_110b5b9a8;
    plVar2[0x14] = (long)&PTR_DAT_110b3fb30;
    plVar2[0x17] = (long)(plVar2 + 0x14);
    func_0x000107c2afdc(plVar2,&UNK_10f6024ac,0x25);
    *(ushort *)((long)plVar2 + 10) = *(ushort *)((long)plVar2 + 10) & 0xffbf | 0x20;
    plVar2[4] = (long)&UNK_10f6024d2;
    plVar2[5] = 0x6d;
    func_0x000107c2afd8(plVar2);
    return plVar2;
  }
  func_0x000107c2b034();
  FUN_109e04df0();
  puVar1 = (undefined8 *)param_1[4];
  if ((ulong)(param_1[3] - (long)puVar1) < 0x2b) {
    FUN_109e0560c();
  }
  else {
    puVar1[1] = 0x71657220657a6973;
    *puVar1 = 0x2064696c61766e49;
    puVar1[3] = 0x62616c6163732061;
    puVar1[2] = 0x206e6f2074736575;
    *(undefined8 *)((long)puVar1 + 0x23) = 0x203b726f74636576;
    *(undefined8 *)((long)puVar1 + 0x1b) = 0x20656c62616c6163;
    param_1[4] = param_1[4] + 0x2b;
  }
  func_0x000109d33a04();
  if ((undefined1 *)param_1[3] != (undefined1 *)param_1[4]) {
    *(undefined1 *)param_1[4] = 10;
    param_1[4] = param_1[4] + 1;
    return param_1;
  }
  puVar3 = &UNK_10f60241c;
  uVar6 = 1;
  lVar4 = param_1[4];
  uVar7 = 0;
  if (param_1[3] == lVar4) {
    do {
      while (param_1[2] != 0) {
        if (lVar4 == param_1[2]) {
          if (param_1[6] != 0) {
            FUN_109e057dc();
          }
          uVar5 = 0;
          if (uVar7 != 0) {
            uVar5 = uVar6 / uVar7;
          }
          uVar7 = uVar5 * uVar7;
          uVar6 = uVar6 - uVar7;
          (**(code **)(*param_1 + 0x48))(param_1,puVar3,uVar7);
          lVar4 = param_1[4];
          uVar5 = param_1[3] - lVar4;
          if (uVar6 <= uVar5) {
            puVar3 = puVar3 + uVar7;
            goto LAB_109e05640;
          }
        }
        else {
          FUN_109e05740(param_1,puVar3,uVar7);
          FUN_109e05520(param_1);
          uVar6 = uVar6 - uVar7;
          lVar4 = param_1[4];
          uVar5 = param_1[3] - lVar4;
        }
        puVar3 = puVar3 + uVar7;
        uVar7 = uVar5;
        if (uVar6 <= uVar5) goto LAB_109e05640;
      }
      if ((int)param_1[7] == 0) {
        if (param_1[6] != 0) {
          FUN_109e057dc();
        }
        (**(code **)(*param_1 + 0x48))(param_1,puVar3,uVar6);
        return param_1;
      }
      FUN_109e0538c(param_1);
      lVar4 = param_1[4];
      uVar7 = param_1[3] - lVar4;
    } while (uVar7 < uVar6);
  }
LAB_109e05640:
  FUN_109e05740(param_1,puVar3,uVar6);
  return param_1;
}



/* Entry: 109e04978; end: 109e04a73;  */

undefined8 * FUN_109e04978(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  func_0x000107c2af50();
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = &PTR_FUN_110b3fac8;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110b5be10;
  puVar1[0x13] = &PTR_DAT_110b5b9a8;
  puVar1[0x14] = &PTR_DAT_110b3fb30;
  puVar1[0x17] = puVar1 + 0x14;
  func_0x000107c2afdc(puVar1,&UNK_10f6024ac,0x25);
  *(ushort *)((long)puVar1 + 10) = *(ushort *)((long)puVar1 + 10) & 0xffbf | 0x20;
  puVar1[4] = &UNK_10f6024d2;
  puVar1[5] = 0x6d;
  func_0x000107c2afd8(puVar1);
  return puVar1;
}



/* Entry: 109e04a74; end: 109e04ba7;  */

undefined8 FUN_109e04a74(ulong *param_1,char *param_2,long param_3)

{
  char **ppcVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  long lStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  ppcVar1 = &pcStack_30;
  pcStack_30 = param_2;
  lStack_28 = param_3;
  FUN_109e04ba8(ppcVar1,(long)&uStack_38 + 4);
  if (((ulong)ppcVar1 & 1) == 0) {
    if (lStack_28 == 0) {
      uStack_38 = uStack_38 >> 0x20;
      uVar2 = 0;
      goto LAB_109e04b68;
    }
    if (*pcStack_30 == '.') {
      lStack_28 = lStack_28 + -1;
      ppcVar1 = &pcStack_30;
      pcStack_30 = pcStack_30 + 1;
      FUN_109e04ba8(ppcVar1,&uStack_38);
      if (((ulong)ppcVar1 & 1) == 0) {
        if (lStack_28 == 0) {
          uStack_38 = CONCAT44((undefined4)uStack_38,uStack_38._4_4_) | 0x8000000000000000;
          uVar2 = 0;
LAB_109e04b68:
          *param_1 = uStack_38;
          param_1[1] = uVar2;
          return 0;
        }
        if (*pcStack_30 == '.') {
          lStack_28 = lStack_28 + -1;
          ppcVar1 = &pcStack_30;
          pcStack_30 = pcStack_30 + 1;
          FUN_109e04ba8(ppcVar1,(long)&uStack_40 + 4);
          if (((ulong)ppcVar1 & 1) == 0) {
            if (lStack_28 == 0) {
              uStack_38 = CONCAT44((undefined4)uStack_38,uStack_38._4_4_) | 0x8000000000000000;
              uVar2 = uStack_40 >> 0x20 | 0x80000000;
            }
            else {
              if (*pcStack_30 != '.') {
                return 1;
              }
              lStack_28 = lStack_28 + -1;
              ppcVar1 = &pcStack_30;
              pcStack_30 = pcStack_30 + 1;
              FUN_109e04ba8(ppcVar1,&uStack_40);
              if (((ulong)ppcVar1 & 1) != 0) {
                return 1;
              }
              if (lStack_28 != 0) {
                return 1;
              }
              uStack_38 = CONCAT44((undefined4)uStack_38,uStack_38._4_4_) | 0x8000000000000000;
              uVar2 = CONCAT44((undefined4)uStack_40,uStack_40._4_4_) | 0x8000000080000000;
            }
            goto LAB_109e04b68;
          }
        }
      }
    }
  }
  return 1;
}



/* Entry: 109e04ba8; end: 109e04c27;  */

undefined8 FUN_109e04ba8(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    pbVar3 = (byte *)*param_1;
    bVar1 = *pbVar3;
    *param_1 = pbVar3 + 1;
    param_1[1] = lVar5 + -1;
    if (0xfffffff5 < bVar1 - 0x3a) {
      iVar2 = bVar1 - 0x30;
      *param_2 = iVar2;
      if (lVar5 + -1 != 0) {
        pbVar4 = pbVar3 + 2;
        lVar5 = lVar5 + -2;
        pbVar3 = pbVar3 + 1;
        do {
          bVar1 = *pbVar3;
          if (bVar1 - 0x3a < 0xfffffff6) {
            return 0;
          }
          *param_1 = pbVar4;
          param_1[1] = lVar5;
          iVar2 = (uint)bVar1 + iVar2 * 10 + -0x30;
          *param_2 = iVar2;
          pbVar4 = pbVar4 + 1;
          lVar5 = lVar5 + -1;
          pbVar3 = pbVar3 + 1;
        } while (lVar5 != -1);
      }
      return 0;
    }
  }
  return 1;
}



/* Entry: 109e04c28; end: 109e04cd7;  */

long * FUN_109e04c28(long *param_1)

{
  if (lRam00000001137e7c70 == 0) {
    func_0x000107c2b010(0x1137e7c70,FUN_109e051f4,FUN_109e05370);
  }
  if (*(int *)(lRam00000001137e7c70 + 0x80) != 0) {
    if (lRam00000001137e7c70 == 0) {
      func_0x000107c2b010(0x1137e7c70,FUN_109e051f4,FUN_109e05370);
    }
    return (long *)(ulong)(*(int *)(lRam00000001137e7c70 + 0x80) == 1);
  }
                    /* WARNING: Could not recover jumptable at 0x000109e04cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return param_1;
}



/* Entry: 109e04cd8; end: 109e04def;  */

long * FUN_109e04cd8(long *param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plStack_30;
  undefined4 uStack_28;
  
  if (param_3 != 0) {
    plVar2 = param_1;
    FUN_109d2f728();
    if ((ulong)(plVar2[3] - plVar2[4]) < 2) {
      FUN_109e0560c();
    }
    else {
      *(undefined2 *)plVar2[4] = 0x203a;
      plVar2[4] = plVar2[4] + 2;
    }
  }
  uStack_28 = 2;
  if (param_4 == 0) {
    uStack_28 = 0;
  }
  plStack_30 = param_1;
  if (((param_4 & 1) == 0) && (plVar2 = param_1, FUN_109e04c28(), (int)plVar2 != 0)) {
    (**(code **)(*param_1 + 0x18))(param_1,1,1,0);
  }
  puVar1 = (undefined4 *)param_1[4];
  if ((ulong)(param_1[3] - (long)puVar1) < 7) {
    FUN_109e0560c(param_1,&UNK_10f602552,7);
  }
  else {
    *(undefined4 *)((long)puVar1 + 3) = 0x203a726f;
    *puVar1 = 0x6f727265;
    param_1[4] = param_1[4] + 7;
  }
  FUN_109e051a0(&plStack_30);
  return param_1;
}



/* Entry: 109e04df0; end: 109e04f07;  */

long * FUN_109e04df0(long *param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plStack_30;
  undefined4 uStack_28;
  
  if (param_3 != 0) {
    plVar2 = param_1;
    FUN_109d2f728();
    if ((ulong)(plVar2[3] - plVar2[4]) < 2) {
      FUN_109e0560c();
    }
    else {
      *(undefined2 *)plVar2[4] = 0x203a;
      plVar2[4] = plVar2[4] + 2;
    }
  }
  uStack_28 = 2;
  if (param_4 == 0) {
    uStack_28 = 0;
  }
  plStack_30 = param_1;
  if (((param_4 & 1) == 0) && (plVar2 = param_1, FUN_109e04c28(), (int)plVar2 != 0)) {
    (**(code **)(*param_1 + 0x18))(param_1,5,1,0);
  }
  puVar1 = (undefined8 *)param_1[4];
  if ((ulong)(param_1[3] - (long)puVar1) < 9) {
    FUN_109e0560c(param_1,&UNK_10f60255a,9);
  }
  else {
    *(undefined1 *)(puVar1 + 1) = 0x20;
    *puVar1 = 0x3a676e696e726177;
    param_1[4] = param_1[4] + 9;
  }
  FUN_109e051a0(&plStack_30);
  return param_1;
}



/* Entry: 109e04f08; end: 109e0501b;  */

long * FUN_109e04f08(long *param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plStack_30;
  undefined4 uStack_28;
  
  if (param_3 != 0) {
    plVar2 = param_1;
    FUN_109d2f728();
    if ((ulong)(plVar2[3] - plVar2[4]) < 2) {
      FUN_109e0560c();
    }
    else {
      *(undefined2 *)plVar2[4] = 0x203a;
      plVar2[4] = plVar2[4] + 2;
    }
  }
  uStack_28 = 2;
  if (param_4 == 0) {
    uStack_28 = 0;
  }
  plStack_30 = param_1;
  if (((param_4 & 1) == 0) && (plVar2 = param_1, FUN_109e04c28(), (int)plVar2 != 0)) {
    (**(code **)(*param_1 + 0x18))(param_1,0,1,0);
  }
  puVar1 = (undefined4 *)param_1[4];
  if ((ulong)(param_1[3] - (long)puVar1) < 6) {
    FUN_109e0560c(param_1,&UNK_10f602564,6);
  }
  else {
    *(undefined2 *)(puVar1 + 1) = 0x203a;
    *puVar1 = 0x65746f6e;
    param_1[4] = param_1[4] + 6;
  }
  FUN_109e051a0(&plStack_30);
  return param_1;
}



/* Entry: 109e0501c; end: 109e0512f;  */

long * FUN_109e0501c(long *param_1,undefined8 param_2,long param_3,uint param_4)

{
  long *plVar1;
  long *plStack_30;
  undefined4 uStack_28;
  
  if (param_3 != 0) {
    plVar1 = param_1;
    FUN_109d2f728();
    if ((ulong)(plVar1[3] - plVar1[4]) < 2) {
      FUN_109e0560c();
    }
    else {
      *(undefined2 *)plVar1[4] = 0x203a;
      plVar1[4] = plVar1[4] + 2;
    }
  }
  uStack_28 = 2;
  if (param_4 == 0) {
    uStack_28 = 0;
  }
  plStack_30 = param_1;
  if (((param_4 & 1) == 0) && (plVar1 = param_1, FUN_109e04c28(), (int)plVar1 != 0)) {
    (**(code **)(*param_1 + 0x18))(param_1,4,1,0);
  }
  if ((ulong)(param_1[3] - param_1[4]) < 8) {
    FUN_109e0560c(param_1,&UNK_10f60256b,8);
  }
  else {
    *(undefined8 *)param_1[4] = 0x203a6b72616d6572;
    param_1[4] = param_1[4] + 8;
  }
  FUN_109e051a0(&plStack_30);
  return param_1;
}



/* Entry: 109e05130; end: 109e0519f;  */

undefined8 *
FUN_109e05130(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = (int)*param_1;
    FUN_109e04c28();
    if (iVar1 == 0) {
      return param_1;
    }
  }
  else if (*(int *)(param_1 + 1) != 1) {
    return param_1;
  }
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_3,param_4);
  return param_1;
}



/* Entry: 109e051a0; end: 109e051f3;  */

undefined8 * FUN_109e051a0(undefined8 *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = (int)*param_1;
    FUN_109e04c28();
    if (iVar1 == 0) {
      return param_1;
    }
  }
  else if (*(int *)(param_1 + 1) != 1) {
    return param_1;
  }
  (**(code **)(*(long *)*param_1 + 0x20))();
  return param_1;
}



/* Entry: 109e051f4; end: 109e0536f;  */

undefined8 * FUN_109e051f4(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0xc0;
  __Znwm();
  if ((bRam00000001137e7c88 & 1) == 0) {
    iVar1 = 0x137e7c88;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puRam00000001137e7c90 = &UNK_10f602540;
      uRam00000001137e7c98 = 0xd;
      puRam00000001137e7ca0 = &UNK_10f60254e;
      uRam00000001137e7ca8 = 0;
      func_0x000107c2afe4();
      ___cxa_guard_release(0x1137e7c88);
    }
  }
  func_0x000107c2af50(puVar2,0,0);
  *(undefined4 *)(puVar2 + 0x10) = 0;
  puVar2[0x11] = &PTR_DAT_110b5b8e8;
  puVar2[0x12] = 0;
  *puVar2 = &PTR_FUN_110b5b798;
  puVar2[0x13] = &PTR_DAT_110b5ba08;
  puVar2[0x14] = &PTR_DAT_110b5b848;
  puVar2[0x17] = puVar2 + 0x14;
  func_0x000107c2afdc(puVar2,&DAT_10f68f0f0,5);
  FUN_109df34f0(puVar2,0x1137e7c90);
  puVar2[4] = &UNK_10f602574;
  puVar2[5] = 0x29;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  *(undefined1 *)((long)puVar2 + 0x94) = 1;
  *(undefined4 *)(puVar2 + 0x12) = 0;
  func_0x000107c2afd8(puVar2);
  return puVar2;
}



/* Entry: 109e05370; end: 109e0538b;  */

void FUN_109e05370(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109e0537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  return;
}



/* Entry: 109e0538c; end: 109e053cf;  */

void FUN_109e0538c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if (plVar2 != (long *)0x0) {
    if (param_1[4] != param_1[2]) {
      FUN_109e05520(param_1);
    }
    plVar1 = plVar2;
    __Znam();
    if (((int)param_1[7] == 1) && (param_1[2] != 0)) {
      __ZdaPv();
    }
    param_1[2] = (long)plVar1;
    param_1[3] = (long)plVar1 + (long)plVar2;
    param_1[4] = (long)plVar1;
    *(undefined4 *)(param_1 + 7) = 1;
    return;
  }
  plVar2 = param_1 + 2;
  if (param_1[4] != *plVar2) {
    FUN_109e05520(param_1);
  }
  if (((int)param_1[7] == 1) && (*plVar2 != 0)) {
    __ZdaPv();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *plVar2 = 0;
  return;
}



/* Entry: 109e053d0; end: 109e0551f;  */

long * FUN_109e053d0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long alStack_b8 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)(param_1[3] - param_1[4]);
  if (plVar9 < (long *)0x4) {
    plVar7 = (long *)0x7f;
  }
  else {
    plVar5 = param_2;
    (**(code **)(*param_2 + 8))(param_2,param_1[4],plVar9);
    uVar4 = (uint)plVar5;
    uVar1 = uVar4;
    if ((uint)plVar9 <= uVar4) {
      uVar1 = uVar4 + 1;
    }
    uVar2 = (uint)plVar9 << 1;
    if (-1 < (int)uVar4) {
      uVar2 = uVar1;
    }
    plVar7 = (long *)(ulong)uVar2;
    if (plVar7 <= plVar9) {
      param_1[4] = param_1[4] + (long)plVar7;
      goto LAB_109e054c8;
    }
  }
  plVar9 = alStack_b8;
  uStack_c0 = 0x80;
  uStack_c8 = 0;
  plStack_d0 = plVar9;
  do {
    FUN_109d596f0(&plStack_d0,plVar7);
    plVar5 = param_2;
    (**(code **)(*param_2 + 8))(param_2,plStack_d0,plVar7);
    uVar4 = (uint)plVar5;
    uVar1 = uVar4;
    if ((uint)plVar7 <= uVar4) {
      uVar1 = uVar4 + 1;
    }
    uVar2 = (uint)plVar7 << 1;
    if (-1 < (int)uVar4) {
      uVar2 = uVar1;
    }
    bVar3 = plVar7 < (long *)(ulong)uVar2;
    plVar7 = (long *)(ulong)uVar2;
  } while (bVar3);
  FUN_109e0560c(param_1,plStack_d0);
  plVar5 = plStack_d0;
  if (plStack_d0 != plVar9) {
    _free();
  }
LAB_109e054c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (plStack_d0 != plVar9) {
    _free();
  }
  __Unwind_Resume();
  lVar8 = plVar5[4];
  lVar6 = plVar5[2];
  plVar5[4] = lVar6;
  if (plVar5[6] != 0) {
    FUN_109e057dc();
  }
                    /* WARNING: Could not recover jumptable at 0x000109e0556c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x48))(plVar5,lVar6,lVar8 - lVar6);
  return plVar5;
}



/* Entry: 109e05520; end: 109e0556f;  */

void FUN_109e05520(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[4];
  lVar1 = param_1[2];
  param_1[4] = lVar1;
  if (param_1[6] != 0) {
    FUN_109e057dc();
  }
                    /* WARNING: Could not recover jumptable at 0x000109e0556c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1,lVar2 - lVar1);
  return;
}



/* Entry: 109e05570; end: 109e0560b;  */

long * FUN_109e05570(long *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uStack_21;
  
  puVar2 = (undefined1 *)param_1[3];
  puVar1 = (undefined1 *)param_1[4];
  do {
    if (puVar1 < puVar2) {
LAB_109e055c0:
      param_1[4] = (long)(puVar1 + 1);
      *puVar1 = param_2;
      return param_1;
    }
    if (param_1[2] != 0) {
      FUN_109e05520(param_1);
      puVar1 = (undefined1 *)param_1[4];
      goto LAB_109e055c0;
    }
    if ((int)param_1[7] == 0) {
      uStack_21 = param_2;
      if (param_1[6] != 0) {
        FUN_109e057dc();
      }
      (**(code **)(*param_1 + 0x48))(param_1,&uStack_21,1);
      return param_1;
    }
    FUN_109e0538c(param_1);
    puVar2 = (undefined1 *)param_1[3];
    puVar1 = (undefined1 *)param_1[4];
  } while( true );
}



/* Entry: 109e0560c; end: 109e0573f;  */

long * FUN_109e0560c(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1[4];
  uVar3 = param_1[3] - lVar1;
  if ((ulong)(param_1[3] - lVar1) < param_3) {
    do {
      while (param_1[2] != 0) {
        if (lVar1 == param_1[2]) {
          if (param_1[6] != 0) {
            FUN_109e057dc();
          }
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = param_3 / uVar3;
          }
          uVar3 = uVar2 * uVar3;
          param_3 = param_3 - uVar3;
          (**(code **)(*param_1 + 0x48))(param_1,param_2,uVar3);
          lVar1 = param_1[4];
          uVar2 = param_1[3] - lVar1;
          if (param_3 <= uVar2) {
            param_2 = param_2 + uVar3;
            goto LAB_109e05640;
          }
        }
        else {
          FUN_109e05740(param_1,param_2,uVar3);
          FUN_109e05520(param_1);
          param_3 = param_3 - uVar3;
          lVar1 = param_1[4];
          uVar2 = param_1[3] - lVar1;
        }
        param_2 = param_2 + uVar3;
        uVar3 = uVar2;
        if (param_3 <= uVar2) goto LAB_109e05640;
      }
      if ((int)param_1[7] == 0) {
        if (param_1[6] != 0) {
          FUN_109e057dc();
        }
        (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3);
        return param_1;
      }
      FUN_109e0538c(param_1);
      lVar1 = param_1[4];
      uVar3 = param_1[3] - lVar1;
    } while (uVar3 < param_3);
  }
LAB_109e05640:
  FUN_109e05740(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 109e05740; end: 109e057db;  */

void FUN_109e05740(long param_1,undefined1 *param_2,long param_3)

{
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_109e057b4;
    if (param_3 != 1) {
LAB_109e057cc:
      _memcpy(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      goto LAB_109e057b4;
    }
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 3) {
        if (param_3 != 4) goto LAB_109e057cc;
        *(undefined1 *)(*(long *)(param_1 + 0x20) + 3) = param_2[3];
      }
      *(undefined1 *)(*(long *)(param_1 + 0x20) + 2) = param_2[2];
    }
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 1) = param_2[1];
  }
  **(undefined1 **)(param_1 + 0x20) = *param_2;
LAB_109e057b4:
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_3;
  return;
}



/* Entry: 109e057dc; end: 109e05843;  */

void FUN_109e057dc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[4];
  lVar2 = param_1[2];
  if (lVar1 - lVar2 != 0) {
    param_1[4] = lVar2;
    if (param_1[6] != 0) {
      FUN_109e057dc();
    }
                    /* WARNING: Could not recover jumptable at 0x000109e05830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,lVar2,lVar1 - lVar2);
    return;
  }
  return;
}



/* Entry: 109e05844; end: 109e05b0f;  */

void FUN_109e05844(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long *plStack_1c0;
  int iStack_1b8;
  ulong uStack_1b0;
  undefined1 uStack_1a8;
  undefined **appuStack_1a0 [2];
  long lStack_190;
  int iStack_168;
  undefined1 *puStack_158;
  uint uStack_150;
  undefined1 auStack_148 [128];
  undefined1 *puStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined1 *)param_1[1];
  FUN_109df843c(&puStack_158,*param_1);
  puVar4 = puStack_158;
  if (uStack_150 != 0) {
    lVar10 = (ulong)uStack_150 << 6;
    puVar11 = (ulong *)(puStack_158 + 0x20);
    do {
      if ((int)puVar11[-4] != 0) {
        if (((int)puVar11[-4] == 2) || ((ulong)param_1[3] <= puVar11[-1])) {
          puVar5 = (undefined1 *)puVar11[-3];
          FUN_109d2f728(param_2,puVar5,puVar11[-2]);
        }
        else {
          plVar7 = *(long **)(param_1[2] + puVar11[-1] * 8);
          iVar3 = (int)puVar11[1];
          uVar9 = *puVar11;
          uStack_1a8 = *(undefined1 *)((long)puVar11 + 0xc);
          uVar1 = puVar11[2];
          uVar2 = puVar11[3];
          puVar5 = param_2;
          plStack_1c0 = plVar7;
          iStack_1b8 = iVar3;
          uStack_1b0 = uVar9;
          if (uVar9 == 0) {
            (**(code **)(*plVar7 + 0x18))(plVar7,param_2,uVar1,uVar2);
          }
          else {
            uStack_b8 = 0x40;
            uStack_c0 = 0;
            puStack_c8 = auStack_b0;
            FUN_109d37ad8(appuStack_1a0,&puStack_c8);
            (**(code **)(*plVar7 + 0x18))(plVar7,appuStack_1a0,uVar1,uVar2);
            uVar1 = uVar9 - uStack_c0;
            if (uVar9 < uStack_c0 || uVar1 == 0) {
              puVar5 = puStack_c8;
              FUN_109e0560c(param_2);
            }
            else if (iVar3 == 0) {
              FUN_109e0560c(param_2,puStack_c8);
              FUN_109e064e8(&plStack_1c0,param_2,uVar1);
            }
            else if (iVar3 == 1) {
              FUN_109e064e8(&plStack_1c0,param_2,uVar1 >> 1);
              FUN_109e0560c(param_2,puStack_c8,uStack_c0);
              FUN_109e064e8(&plStack_1c0,param_2,(int)uVar1 - (int)(uVar1 >> 1));
            }
            else {
              FUN_109e064e8(&plStack_1c0,param_2,uVar1);
              puVar5 = puStack_c8;
              FUN_109e0560c(param_2,puStack_c8,uStack_c0);
            }
            appuStack_1a0[0] = &PTR_DAT_110b5c4a0;
            if ((iStack_168 == 1) && (lStack_190 != 0)) {
              __ZdaPv();
            }
            if (puStack_c8 != auStack_b0) {
              _free();
            }
          }
        }
      }
      puVar11 = puVar11 + 8;
      lVar10 = lVar10 + -0x40;
      puVar4 = puStack_158;
    } while (lVar10 != 0);
  }
  if (puVar4 != auStack_148) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    __Unwind_Resume(puVar4);
    if ((uint)puVar5 < 0x50) {
      FUN_109e0560c();
    }
    else {
      do {
        uVar6 = (uint)puVar5;
        uVar8 = uVar6;
        if (0x4e < uVar6) {
          uVar8 = 0x4f;
        }
        FUN_109e0560c();
        puVar5 = (undefined1 *)(ulong)(uVar6 - uVar8);
      } while (uVar6 - uVar8 != 0);
    }
    return;
  }
  return;
}



/* Entry: 109e05b10; end: 109e05b77;  */

void FUN_109e05b10(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < 0x50) {
    FUN_109e0560c(param_1,&UNK_10e05bb24,param_2);
  }
  else {
    do {
      uVar1 = param_2;
      if (0x4e < param_2) {
        uVar1 = 0x4f;
      }
      FUN_109e0560c(param_1,&UNK_10e05bb24,uVar1);
      param_2 = param_2 - uVar1;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 109e05b78; end: 109e05c33;  */

undefined8 * FUN_109e05b78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b5c4a0;
  if ((*(int *)(param_1 + 7) == 1) && (param_1[2] != 0)) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 109e05c34; end: 109e05c8b;  */

void FUN_109e05c34(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_109e0560c(param_1,&UNK_10f6022e7,4);
  }
  return;
}



/* Entry: 109e05c8c; end: 109e05c93;  */

void FUN_109e05c8c(void)

{
  return;
}



/* Entry: 109e05c94; end: 109e05d83;  */

undefined8 *
FUN_109e05c94(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_c0 [144];
  
  func_0x000109e05ce0(param_2,param_3,param_4,0,2,param_5);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_110b5c518;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar3 = (uint)param_2;
  *(undefined4 *)(param_1 + 7) = 1;
  *(uint *)((long)param_1 + 0x3c) = uVar3;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar2 = param_1;
  func_0x000107c60d38();
  *(undefined4 *)((long)param_1 + 0x41) = 0;
  param_1[10] = puVar2;
  param_1[0xb] = 0;
  if ((int)uVar3 < 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 1;
    if (uVar3 < 3) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    func_0x000107c61068(param_2,0,1);
    iVar1 = *(int *)((long)param_1 + 0x3c);
    func_0x000107c60fe4(iVar1,auStack_c0);
    func_0x000100047b8c();
    *(undefined1 *)((long)param_1 + 0x42) = 0;
    *(bool *)((long)param_1 + 0x41) = iVar1 == 0 && param_2 != -1;
    if (iVar1 != 0 || param_2 == -1) {
      param_2 = 0;
    }
    param_1[0xb] = param_2;
  }
  return param_1;
}



/* Entry: 109e05d84; end: 109e05e6b;  */

undefined8 * FUN_109e05d84(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 *apuStack_98 [4];
  undefined2 uStack_78;
  undefined *apuStack_70 [4];
  undefined2 uStack_50;
  undefined1 auStack_48 [40];
  
  *param_1 = &PTR_FUN_110b5c518;
  if (-1 < *(int *)((long)param_1 + 0x3c)) {
    FUN_109e057dc(param_1);
    if (*(char *)(param_1 + 8) == '\x01') {
      uVar2 = (ulong)*(uint *)((long)param_1 + 0x3c);
      FUN_109dfb83c();
      if ((int)uVar2 != 0) {
        param_1[9] = uVar2;
        param_1[10] = param_2;
      }
    }
  }
  if (*(int *)(param_1 + 9) == 0) {
    *param_1 = &PTR_DAT_110b5c4a0;
    if ((*(int *)(param_1 + 7) == 1) && (param_1[2] != 0)) {
      __ZdaPv();
    }
    return param_1;
  }
  apuStack_70[0] = &UNK_10f6025a9;
  uStack_50 = 0x103;
  uStack_b8 = param_1[10];
  uStack_c0 = param_1[9];
  __ZNKSt3__110error_code7messageEv(auStack_b0,&uStack_c0);
  uStack_78 = 0x104;
  apuStack_98[0] = auStack_b0;
  FUN_109d35b30(auStack_48,apuStack_70,apuStack_98);
  FUN_109df7858(auStack_48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109e05e68);
  (*pcVar1)();
}



/* Entry: 109e05e6c; end: 109e05e6f;  */

undefined8 * FUN_109e05e6c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 *apuStack_98 [4];
  undefined2 uStack_78;
  undefined *apuStack_70 [4];
  undefined2 uStack_50;
  undefined1 auStack_48 [40];
  
  *param_1 = &PTR_FUN_110b5c518;
  if (-1 < *(int *)((long)param_1 + 0x3c)) {
    FUN_109e057dc(param_1);
    if (*(char *)(param_1 + 8) == '\x01') {
      uVar2 = (ulong)*(uint *)((long)param_1 + 0x3c);
      FUN_109dfb83c();
      if ((int)uVar2 != 0) {
        param_1[9] = uVar2;
        param_1[10] = param_2;
      }
    }
  }
  if (*(int *)(param_1 + 9) == 0) {
    *param_1 = &PTR_DAT_110b5c4a0;
    if ((*(int *)(param_1 + 7) == 1) && (param_1[2] != 0)) {
      __ZdaPv();
    }
    return param_1;
  }
  apuStack_70[0] = &UNK_10f6025a9;
  uStack_50 = 0x103;
  uStack_b8 = param_1[10];
  uStack_c0 = param_1[9];
  __ZNKSt3__110error_code7messageEv(auStack_b0,&uStack_c0);
  uStack_78 = 0x104;
  apuStack_98[0] = auStack_b0;
  FUN_109d35b30(auStack_48,apuStack_70,apuStack_98);
  FUN_109df7858(auStack_48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109e05e68);
  (*pcVar1)();
}



/* Entry: 109e05e70; end: 109e05e83;  */

void FUN_109e05e70(void)

{
  FUN_109e05d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109e05e84; end: 109e05f2b;  */

void FUN_109e05e84(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  
  *(ulong *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + param_3;
  do {
    uVar1 = param_3;
    if (0x7ffffffe < param_3) {
      uVar1 = 0x7fffffff;
    }
    puVar3 = (uint *)(ulong)*(uint *)(param_1 + 0x3c);
    _write(puVar3,param_2,uVar1);
    if ((long)puVar3 < 0) {
      ___error();
      if (((*puVar3 != 4) && (___error(), *puVar3 != 0x23)) && (___error(), *puVar3 != 0x23)) {
        ___error();
        uVar2 = *puVar3;
        __ZNSt3__116generic_categoryEv();
        *(ulong *)(param_1 + 0x48) = (ulong)uVar2;
        *(uint **)(param_1 + 0x50) = puVar3;
        return;
      }
    }
    else {
      param_2 = param_2 + (long)puVar3;
      param_3 = param_3 - (long)puVar3;
    }
    if (param_3 == 0) {
      return;
    }
  } while( true );
}



/* Entry: 109e05f2c; end: 109e05f7f;  */

void FUN_109e05f2c(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  FUN_109e057dc();
  puVar2 = (uint *)(ulong)*(uint *)(param_1 + 0x3c);
  _lseek(puVar2,param_2,0);
  *(uint **)(param_1 + 0x58) = puVar2;
  if (puVar2 == (uint *)0xffffffffffffffff) {
    ___error();
    uVar1 = *puVar2;
    __ZNSt3__116generic_categoryEv();
    *(ulong *)(param_1 + 0x48) = (ulong)uVar1;
    *(uint **)(param_1 + 0x50) = puVar2;
  }
  return;
}



/* Entry: 109e05f80; end: 109e05ff3;  */

void FUN_109e05f80(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x50))();
  lVar4 = param_1[4];
  lVar5 = param_1[2];
  FUN_109e05f2c(param_1,param_4);
  FUN_109e0560c(param_1,param_2,param_3);
  FUN_109e057dc();
  puVar2 = (uint *)(ulong)*(uint *)((long)param_1 + 0x3c);
  _lseek(puVar2,(long)plVar3 + (lVar4 - lVar5),0);
  param_1[0xb] = (long)puVar2;
  if (puVar2 == (uint *)0xffffffffffffffff) {
    ___error();
    uVar1 = *puVar2;
    __ZNSt3__116generic_categoryEv();
    param_1[9] = (ulong)uVar1;
    param_1[10] = (long)puVar2;
  }
  return;
}



/* Entry: 109e05ff4; end: 109e06057;  */

long FUN_109e05ff4(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_b0 [4];
  ushort uStack_ac;
  int iStack_40;
  
  iVar1 = *(int *)((long)param_1 + 0x3c);
  _fstat(iVar1,auStack_b0);
  if ((iVar1 == 0) &&
     (((uStack_ac & 0xf000) != 0x2000 ||
      ((**(code **)(*param_1 + 0x30))(), ((ulong)param_1 & 1) == 0)))) {
    lVar2 = (long)iStack_40;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 109e06058; end: 109e06077;  */

bool FUN_109e06058(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  _isatty(iVar1);
  return iVar1 != 0;
}



/* Entry: 109e06078; end: 109e060c3;  */

uint FUN_109e06078(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x44) == '\x01') {
    uVar1 = (uint)*(byte *)(param_1 + 0x43);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x3c);
    _isatty();
    if (uVar1 != 0) {
      func_0x000109dfb8d0();
    }
    *(ushort *)(param_1 + 0x43) = (ushort)uVar1 | 0x100;
  }
  return uVar1 & 1;
}



/* Entry: 109e060c4; end: 109e060c7;  */

void FUN_109e060c4(void)

{
  return;
}



/* Entry: 109e060c8; end: 109e0617f;  */

undefined8 FUN_109e060c8(undefined8 param_1)

{
  int iVar1;
  undefined4 auStack_30 [2];
  undefined8 uStack_28;
  
  auStack_30[0] = 0;
  __ZNSt3__115system_categoryEv();
  if ((bRam0000000113834660 & 1) == 0) {
    iVar1 = 0x13834660;
    uStack_28 = param_1;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_109e05c94(0x113834600,&UNK_10f6025a7,1,auStack_30,0);
      ___cxa_atexit(FUN_109e05e6c,0x113834600,0x100000000);
      ___cxa_guard_release(0x113834660);
    }
  }
  return 0x113834600;
}



/* Entry: 109e06180; end: 109e0620b;  */

undefined8 FUN_109e06180(void)

{
  int iVar1;
  
  if ((bRam0000000113834710 & 1) == 0) {
    iVar1 = 0x13834710;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138346d8 = 0;
      uRam00000001138346f8 = 0;
      uRam0000000113834700 = 0;
      uRam0000000113834708 = 1;
      uRam00000001138346e8 = 0;
      uRam00000001138346f0 = 0;
      uRam00000001138346e0 = 0;
      ppuRam00000001138346d0 = &PTR_FUN_110b5c608;
      ___cxa_atexit(FUN_109e0620c,0x1138346d0,0x100000000);
      ___cxa_guard_release(0x113834710);
    }
  }
  return 0x1138346d0;
}



/* Entry: 109e0620c; end: 109e0624f;  */

undefined8 * FUN_109e0620c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b5c4a0;
  if ((*(int *)(param_1 + 7) == 1) && (param_1[2] != 0)) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 109e06250; end: 109e062a7;  */

uint * FUN_109e06250(long param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)(ulong)*(uint *)(param_1 + 0x3c);
  _read();
  if ((long)puVar2 < 0) {
    puVar3 = puVar2;
    ___error();
    uVar1 = *puVar3;
    __ZNSt3__116generic_categoryEv();
    *(ulong *)(param_1 + 0x48) = (ulong)uVar1;
    *(uint **)(param_1 + 0x50) = puVar3;
  }
  else {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + (long)puVar2;
  }
  return puVar2;
}



/* Entry: 109e062a8; end: 109e062d7;  */

void FUN_109e062a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 109e062d8; end: 109e0631b;  */

void FUN_109e062d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b5c4a0;
  if ((*(int *)(param_1 + 7) == 1) && (param_1[2] != 0)) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109e0631c; end: 109e06337;  */

void FUN_109e0631c(void)

{
  return;
}



/* Entry: 109e06338; end: 109e063bf;  */

undefined8 * FUN_109e06338(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b5c4a0;
  if ((*(int *)(param_1 + 7) == 1) && (param_1[2] != 0)) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 109e063c0; end: 109e0640f;  */

void FUN_109e063c0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[8];
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm_110346308
  )(lVar2,(long)plVar1 + ((param_2 + param_1[4]) - param_1[2]));
  return;
}



/* Entry: 109e06410; end: 109e06427;  */

long FUN_109e06410(long param_1)

{
  long lVar1;
  
  lVar1 = (long)*(char *)(*(long *)(param_1 + 0x40) + 0x17);
  if (-1 < lVar1) {
    return lVar1;
  }
  return *(long *)(*(long *)(param_1 + 0x40) + 8);
}



/* Entry: 109e06428; end: 109e0646b;  */

void FUN_109e06428(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b5c4a0;
  if ((*(int *)(param_1 + 7) == 1) && (param_1[2] != 0)) {
    __ZdaPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109e0646c; end: 109e064df;  */

/* WARNING: Removing unreachable block (ram,0x000109dfff08) */

void FUN_109e0646c(long *param_1,long param_2)

{
  long *plVar1;
  undefined1 **ppuVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  long *plVar9;
  long *unaff_x20;
  long *plVar10;
  undefined1 *puStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar9 = (long *)param_1[8];
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x50))();
  plVar7 = (long *)((long)plVar7 + ((param_2 + param_1[4]) - param_1[2]));
  if (plVar7 <= (long *)plVar9[2]) {
    return;
  }
  plVar1 = plVar9 + 3;
  lVar8 = plVar9[2];
  if (lVar8 == -1) {
    FUN_109e00030(0xffffffffffffffff);
    goto LAB_109dffe08;
  }
  if (plVar7 < (long *)(lVar8 << 1 | 1U)) {
    plVar7 = (long *)(lVar8 * 2 + 1);
  }
  plVar10 = (long *)*plVar9;
  unaff_x19 = plVar9;
  unaff_x20 = plVar7;
  if (plVar10 == plVar1) {
    plVar4 = plVar7;
    _malloc();
    if (plVar4 == (long *)0x0) {
      if (plVar7 != (long *)0x0) goto LAB_109dffe08;
      plVar4 = (long *)0x1;
      _malloc();
      if (plVar4 == (long *)0x0) goto LAB_109dffe08;
    }
    plVar5 = plVar4;
    if (plVar4 == plVar1) {
      plVar5 = plVar9;
      func_0x000109dffc5c(plVar9,plVar4,1,plVar7,0);
      plVar10 = (long *)*plVar9;
    }
    _memcpy(plVar5,plVar10,plVar9[1]);
  }
  else {
    _realloc(plVar10,plVar7);
    if (plVar10 == (long *)0x0) {
      if (plVar7 != (long *)0x0) {
LAB_109dffe08:
        FUN_109df7a04(&UNK_10f60230e,1);
        pcStack_58 = FUN_109dffe18;
        plStack_70 = unaff_x20;
        plStack_68 = unaff_x19;
        puStack_60 = &stack0xfffffffffffffff0;
        __ZNSt3__19to_stringEm(auStack_108);
        puVar6 = auStack_108;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar6,0,&UNK_10f602320,0x30);
        uStack_e8 = puVar6[1];
        uStack_f0 = *puVar6;
        lStack_e0 = puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar6 = &uStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar6,&UNK_10f602351,0x2e);
        uStack_c8 = puVar6[1];
        uStack_d0 = *puVar6;
        lStack_c0 = puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        __ZNSt3__19to_stringEm(&puStack_120,0xffffffff);
        ppuVar2 = (undefined1 **)puStack_120;
        if (-1 < (char)bStack_109) {
          uStack_118 = (ulong)bStack_109;
          ppuVar2 = &puStack_120;
        }
        puVar6 = &uStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar6,ppuVar2,uStack_118);
        uStack_a8 = puVar6[1];
        uStack_b0 = *puVar6;
        uStack_a0 = puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar6 = &uStack_b0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar6,&DAT_10f684600,1);
        uStack_88 = puVar6[1];
        uStack_90 = *puVar6;
        uStack_80 = puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        if ((char)bStack_109 < '\0') {
          __ZdlPv(puStack_120);
        }
        if (lStack_c0 < 0) {
          __ZdlPv(uStack_d0);
        }
        if (lStack_e0 < 0) {
          __ZdlPv(uStack_f0);
        }
        if (cStack_f1 < '\0') {
          __ZdlPv(auStack_108[0]);
        }
        plVar7 = (long *)0x10;
        ___cxa_allocate_exception();
        __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
        *plVar7 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
        ___cxa_throw(plVar7,PTR___ZTISt12length_error_110352238,
                     PTR___ZNSt12length_errorD1Ev_110346170);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109dfff90);
        (*pcVar3)();
      }
      plVar10 = (long *)0x1;
      _malloc();
      if (plVar10 == (long *)0x0) goto LAB_109dffe08;
    }
    plVar5 = plVar10;
    if (plVar10 == plVar1) {
      plVar5 = plVar9;
      func_0x000109dffc5c(plVar9,plVar10,1,plVar7,plVar9[1]);
    }
  }
  *plVar9 = (long)plVar5;
  plVar9[2] = (long)plVar7;
  return;
}



/* Entry: 109e064e0; end: 109e064e7;  */

undefined8 FUN_109e064e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109e064e8; end: 109e06547;  */

void FUN_109e064e8(long param_1,long param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = *(undefined1 *)(param_1 + 0x18);
    puVar1 = *(undefined1 **)(param_2 + 0x20);
    if (puVar1 < *(undefined1 **)(param_2 + 0x18)) {
      *(undefined1 **)(param_2 + 0x20) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      FUN_109e05570(param_2);
    }
  }
  return;
}



/* Entry: 109e06548; end: 109e06a93;  */

int FUN_109e06548(undefined4 *param_1,char *param_2,uint param_3)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  ulong *puVar21;
  char *pcStack_120;
  char *pcStack_118;
  int iStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  undefined4 uStack_f0;
  undefined4 *puStack_e8;
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
  
  if (((param_3 ^ 0xffffffff) & 0x11) == 0) {
    return 0x10;
  }
  if ((param_3 >> 5 & 1) == 0) {
    pcVar3 = param_2;
    _strlen();
  }
  else {
    pcVar3 = *(char **)(param_1 + 4) + -(long)param_2;
    if (*(char **)(param_1 + 4) < param_2) {
      return 0x10;
    }
  }
  puVar4 = (undefined4 *)0x18f;
  _malloc();
  if (puVar4 == (undefined4 *)0x0) {
    return 0xc;
  }
  puVar5 = (ulong *)(((ulong)pcVar3 & 0xfffffffffffffffe) + ((ulong)pcVar3 >> 1) + 1);
  puStack_100 = puVar5;
  _calloc(puVar5,8);
  uStack_f8 = 0;
  puStack_108 = puVar5;
  if (puVar5 == (ulong *)0x0) {
    _free(puVar4);
    return 0xc;
  }
  pcStack_118 = param_2 + (long)pcVar3;
  iStack_110 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  puVar4[4] = 0x100;
  piVar20 = puVar4 + 5;
  piVar20[0] = 0;
  piVar20[1] = 0;
  *(undefined8 *)(puVar4 + 7) = 0;
  *(undefined8 *)(puVar4 + 0x24) = 0;
  *(undefined8 *)(puVar4 + 0x22) = 0;
  *(undefined8 *)(puVar4 + 0x44) = 0;
  *(undefined8 *)(puVar4 + 0x42) = 0;
  puVar4[9] = 0;
  puVar4[10] = param_3 & 0xffffff7f;
  puVar4[0x1a] = 0;
  *(undefined8 *)(puVar4 + 0x1c) = 0;
  *(undefined8 *)(puVar4 + 0x14) = 0x100000000;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined4 **)(puVar4 + 0x16) = puVar4 + 0x42;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *(undefined8 *)(puVar4 + 0x26) = 0;
  *(undefined8 *)(puVar4 + 0x2c) = 0;
  *(undefined8 *)(puVar4 + 0x2a) = 0;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined8 *)(puVar4 + 0x2e) = 0;
  *(undefined8 *)(puVar4 + 0x34) = 0;
  *(undefined8 *)(puVar4 + 0x32) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x36) = 0;
  *(undefined8 *)(puVar4 + 0x3c) = 0;
  *(undefined8 *)(puVar4 + 0x3a) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x3e) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x46) = 0;
  *(undefined8 *)(puVar4 + 0x4c) = 0;
  *(undefined8 *)(puVar4 + 0x4a) = 0;
  *(undefined8 *)(puVar4 + 0x50) = 0;
  *(undefined8 *)(puVar4 + 0x4e) = 0;
  *(undefined8 *)(puVar4 + 0x54) = 0;
  *(undefined8 *)(puVar4 + 0x52) = 0;
  *(undefined8 *)(puVar4 + 0x58) = 0;
  *(undefined8 *)(puVar4 + 0x56) = 0;
  *(undefined8 *)(puVar4 + 0x5c) = 0;
  *(undefined8 *)(puVar4 + 0x5a) = 0;
  *(undefined8 *)(puVar4 + 0x60) = 0;
  *(undefined8 *)(puVar4 + 0x5e) = 0;
  puVar4[0x1e] = 0;
  pcStack_120 = param_2;
  puStack_e8 = puVar4;
  FUN_109e06a94(&pcStack_120,0x8000000,0);
  *(ulong *)(puVar4 + 0xe) = uStack_f8 - 1;
  if ((param_3 & 1) == 0) {
    if ((param_3 >> 4 & 1) == 0) {
      FUN_109e072f8(&pcStack_120,0x80,0x80);
    }
    else {
      if ((long)pcStack_118 - (long)pcStack_120 < 1) {
        if (iStack_110 == 0) {
          iStack_110 = 0xe;
        }
        pcStack_120 = (char *)0x1137e7cb0;
        pcStack_118 = (char *)0x1137e7cb0;
      }
      lVar12 = (long)pcStack_118 - (long)pcStack_120;
      pcVar3 = pcStack_120;
      while (pcStack_120 = pcVar3, 0 < lVar12) {
        pcStack_120 = pcVar3 + 1;
        func_0x000109e083f4(&pcStack_120,(long)*pcVar3);
        pcVar3 = pcStack_120;
        lVar12 = (long)pcStack_118 - (long)pcStack_120;
      }
    }
  }
  else {
    FUN_109e06b08(&pcStack_120,0x80);
  }
  FUN_109e06a94(&pcStack_120,0x8000000,0);
  *(ulong *)(puVar4 + 0x10) = uStack_f8 - 1;
  if (iStack_110 == 0) {
    lVar12 = *(long *)(puVar4 + 0x16);
    uVar16 = 0xffffffffffffff80;
    do {
      if ((*(char *)(lVar12 + uVar16) == '\0') && (0 < *piVar20)) {
        uVar17 = *piVar20 + 7U >> 3;
        lVar18 = *(long *)(puVar4 + 8);
        do {
          if (*(char *)(lVar18 + (uVar16 & 0xff)) != '\0') {
            iVar10 = puVar4[0x15];
            puVar4[0x15] = iVar10 + 1;
            uVar2 = (undefined1)iVar10;
            *(undefined1 *)(lVar12 + uVar16) = uVar2;
            uVar11 = uVar16;
            if ((long)uVar16 < 0x7f) {
              do {
                uVar11 = uVar11 + 1;
                if (*(char *)(lVar12 + uVar11) == '\0') {
                  if (0 < *piVar20) {
                    uVar17 = *piVar20 + 7U >> 3;
                    lVar18 = *(long *)(puVar4 + 8);
                    do {
                      if (*(char *)(lVar18 + (uVar16 & 0xff)) != *(char *)(lVar18 + (uVar11 & 0xff))
                         ) goto LAB_109e06810;
                      lVar18 = lVar18 + (int)puVar4[4];
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  *(undefined1 *)(lVar12 + uVar11) = uVar2;
                }
LAB_109e06810:
              } while (uVar11 != 0x7f);
            }
            break;
          }
          lVar18 = lVar18 + (int)puVar4[4];
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x80);
  }
  *(ulong *)(puVar4 + 0xc) = uStack_f8;
  if (uStack_f8 >> 0x3d == 0) {
    puVar5 = puStack_108;
    _realloc(puStack_108,uStack_f8 << 3);
    *(ulong **)(puVar4 + 2) = puVar5;
    if (puVar5 == (ulong *)0x0) {
      if (iStack_110 == 0) {
        iStack_110 = 0xc;
      }
      pcStack_120 = (char *)0x1137e7cb0;
      pcStack_118 = (char *)0x1137e7cb0;
      *(ulong **)(puVar4 + 2) = puStack_108;
    }
    else if (iStack_110 == 0) {
      puVar21 = (ulong *)0x0;
      lVar12 = 0;
      puVar6 = puVar5 + 1;
      puVar13 = (ulong *)0x0;
LAB_109e068a4:
      puVar7 = puVar6 + 1;
      uVar16 = *puVar6;
      uVar11 = (uVar16 & 0xf8000000) - 0x10000000 >> 0x1b;
      puVar14 = puVar13;
      if (uVar11 < 0xe) {
        if ((1L << (uVar11 & 0x3f) & 0x1880U) != 0) goto LAB_109e06930;
        if ((1L << (uVar11 & 0x3f) & 0x2200U) == 0) {
          if (uVar11 == 0) {
            puVar14 = puVar6;
            if (lVar12 != 0) {
              puVar14 = puVar13;
            }
            lVar12 = lVar12 + 1;
            goto LAB_109e06930;
          }
          goto LAB_109e06918;
        }
        do {
          puVar7 = puVar6 + (uVar16 & 0x7ffffff);
          uVar16 = *puVar7;
          if ((uVar16 & 0xf8000000) == 0x60000000) goto LAB_109e06918;
          iVar10 = (int)(uVar16 & 0xf8000000);
          puVar6 = puVar7;
        } while (iVar10 == -0x78000000);
        if (iVar10 != -0x70000000) {
          puVar4[0x12] = puVar4[0x12] | 4;
          goto LAB_109e06a2c;
        }
      }
LAB_109e06918:
      if ((int)puVar4[0x1a] < lVar12) {
        puVar4[0x1a] = (int)lVar12;
        puVar21 = puVar13;
      }
      lVar12 = 0;
LAB_109e06930:
      puVar6 = puVar7;
      puVar13 = puVar14;
      if ((uVar16 & 0xf8000000) == 0x8000000) goto code_r0x000109e06940;
      goto LAB_109e068a4;
    }
  }
  else {
    *(ulong **)(puVar4 + 2) = puStack_108;
    if (iStack_110 == 0) {
      iStack_110 = 0xc;
    }
    pcStack_120 = (char *)0x1137e7cb0;
    pcStack_118 = (char *)0x1137e7cb0;
  }
  bVar1 = false;
  lVar15 = 0;
  uVar17 = puVar4[0x12];
  goto LAB_109e069b4;
code_r0x000109e06940:
  iVar10 = puVar4[0x1a];
  lVar12 = (long)iVar10;
  if (iVar10 != 0) {
    puVar9 = (undefined1 *)(lVar12 + 1);
    _malloc();
    *(undefined1 **)(puVar4 + 0x18) = puVar9;
    if (puVar9 == (undefined1 *)0x0) {
      puVar4[0x1a] = 0;
    }
    else {
      puVar8 = puVar9;
      if (0 < iVar10) {
        do {
          do {
            puVar6 = puVar21 + 1;
            uVar16 = *puVar21;
            puVar21 = puVar6;
          } while ((uVar16 & 0xf8000000) != 0x10000000);
          puVar9 = puVar8 + 1;
          *puVar8 = (char)uVar16;
          lVar18 = lVar12 + -1;
          bVar1 = 0 < lVar12;
          puVar8 = puVar9;
          lVar12 = lVar18;
        } while (lVar18 != 0 && bVar1);
      }
      *puVar9 = 0;
    }
  }
LAB_109e06a2c:
  lVar12 = 0;
  lVar18 = 0;
  do {
    puVar5 = puVar5 + 1;
    lVar15 = lVar12;
    if (lVar12 <= lVar18) {
      lVar15 = lVar18;
    }
    lVar19 = lVar12 + -1;
    iVar10 = (int)(*puVar5 & 0xf8000000);
    if (iVar10 == 0x48000000) {
      lVar12 = lVar12 + 1;
    }
    if (iVar10 != 0x50000000) {
      lVar15 = lVar18;
      lVar19 = lVar12;
    }
    lVar12 = lVar19;
    lVar18 = lVar15;
  } while ((*puVar5 & 0xf8000000) != 0x8000000);
  uVar17 = puVar4[0x12];
  if (lVar12 != 0) {
    uVar17 = uVar17 | 4;
    puVar4[0x12] = uVar17;
  }
  bVar1 = true;
LAB_109e069b4:
  *(long *)(puVar4 + 0x20) = lVar15;
  *puVar4 = 0xd245;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar4 + 0x1c);
  *(undefined4 **)(param_1 + 6) = puVar4;
  *param_1 = 0xf265;
  if ((uVar17 >> 2 & 1) == 0) {
    if (bVar1) {
      return 0;
    }
  }
  else {
    if (bVar1) {
      iStack_110 = 0xf;
    }
    pcStack_120 = (char *)0x1137e7cb0;
    pcStack_118 = (char *)0x1137e7cb0;
  }
  FUN_109e0b9b8(param_1);
  return iStack_110;
}



/* Entry: 109e06a94; end: 109e06b07;  */

void FUN_109e06a94(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) <= lVar1) {
    lVar1 = *(long *)(param_1 + 0x20) + 1;
    FUN_109e08b18(param_1,(lVar1 - (lVar1 >> 0x3f) & 0xfffffffffffffffeU) + lVar1 / 2);
    lVar1 = *(long *)(param_1 + 0x28);
  }
  *(long *)(param_1 + 0x28) = lVar1 + 1;
  *(ulong *)(*(long *)(param_1 + 0x18) + lVar1 * 8) = param_3 | param_2;
  return;
}



/* Entry: 109e06b08; end: 109e072f7;  */

void FUN_109e06b08(ulong *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  bool bVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uStack_80;
  undefined4 uStack_74;
  
  uVar19 = 0;
  bVar3 = false;
  uStack_80 = 0;
  pbVar1 = (byte *)0x1137e7cb0;
  do {
    uVar15 = param_1[5];
    pbVar11 = (byte *)*param_1;
    pbVar17 = (byte *)param_1[1];
    if ((long)pbVar17 - (long)pbVar11 < 1) {
LAB_109e071d4:
      if ((int)param_1[2] == 0) {
        *(undefined4 *)(param_1 + 2) = 0xe;
      }
      *param_1 = 0x1137e7cb0;
      param_1[1] = 0x1137e7cb0;
      pbVar11 = pbVar1;
      uVar16 = uVar15;
      pbVar17 = pbVar1;
    }
    else {
      do {
        uVar16 = param_1[5];
        if ((char)*pbVar11 == 0x7c || param_2 == (char)*pbVar11) goto LAB_109e071cc;
        pbVar18 = pbVar11 + 1;
        *param_1 = (ulong)pbVar18;
        bVar2 = *pbVar11;
        uVar9 = (uint)bVar2;
        if (bVar2 < 0x3f) {
          if (uVar9 == 0x29 || bVar2 < 0x29) {
            if (uVar9 == 0x24) {
              FUN_109e06a94(param_1,0x20000000,0);
              uVar5 = param_1[7];
              *(uint *)(uVar5 + 0x48) = *(uint *)(uVar5 + 0x48) | 2;
              *(int *)(uVar5 + 0x50) = *(int *)(uVar5 + 0x50) + 1;
            }
            else {
              if (uVar9 == 0x28) {
                if ((long)pbVar17 - (long)pbVar18 < 1) {
                  if ((int)param_1[2] == 0) {
                    *(undefined4 *)(param_1 + 2) = 8;
                  }
                  *param_1 = 0x1137e7cb0;
                  param_1[1] = 0x1137e7cb0;
                }
                lVar13 = *(long *)(param_1[7] + 0x70);
                lVar7 = lVar13 + 1;
                *(long *)(param_1[7] + 0x70) = lVar7;
                if (lVar7 < 10) {
                  param_1[lVar13 + 9] = uVar16;
                }
                FUN_109e06a94(param_1,0x68000000,lVar7);
                if (((long)(param_1[1] - (long)*param_1) < 1) || (*(char *)*param_1 != ')')) {
                  FUN_109e06b08(param_1,0x29);
                }
                if (lVar7 < 10) {
                  param_1[lVar13 + 0x13] = param_1[5];
                }
                FUN_109e06a94(param_1,0x70000000,lVar7);
                pcVar14 = (char *)*param_1;
                if ((0 < (long)(param_1[1] - (long)pcVar14)) &&
                   (*param_1 = (ulong)(pcVar14 + 1), *pcVar14 == ')')) goto LAB_109e06e64;
              }
              else if (bVar2 != 0x29) goto LAB_109e06e58;
              if ((int)param_1[2] == 0) {
                uVar10 = 8;
LAB_109e06e10:
                *(undefined4 *)(param_1 + 2) = uVar10;
              }
LAB_109e06e14:
              *param_1 = 0x1137e7cb0;
              param_1[1] = 0x1137e7cb0;
            }
          }
          else {
            if (uVar9 - 0x2a < 2) {
LAB_109e06c88:
              if ((int)param_1[2] == 0) {
                uVar10 = 0xd;
                goto LAB_109e06e10;
              }
              goto LAB_109e06e14;
            }
            if (uVar9 != 0x2e) goto LAB_109e06e58;
            if ((*(byte *)(param_1[7] + 0x28) >> 3 & 1) == 0) {
              FUN_109e06a94(param_1,0x28000000,0);
            }
            else {
              *param_1 = (ulong)&uStack_74;
              param_1[1] = (ulong)&uStack_74 | 3;
              uStack_74 = 0x5d0a5e;
              FUN_109e07974(param_1);
              *param_1 = (ulong)pbVar18;
              param_1[1] = (ulong)pbVar17;
            }
          }
LAB_109e06e64:
          bVar12 = true;
        }
        else {
          if (bVar2 < 0x5e) {
            if (bVar2 == 0x3f) goto LAB_109e06c88;
            if (uVar9 == 0x5b) {
              FUN_109e07974(param_1);
              goto LAB_109e06e64;
            }
            if (uVar9 != 0x5c) goto LAB_109e06e58;
            if ((long)pbVar17 - (long)pbVar18 < 1) {
              if ((int)param_1[2] == 0) {
                *(undefined4 *)(param_1 + 2) = 5;
              }
              param_1[1] = 0x1137e7cb0;
              pbVar18 = pbVar1;
            }
            *param_1 = (ulong)(pbVar18 + 1);
            bVar2 = *pbVar18;
            uVar5 = (ulong)(char)bVar2;
            if ((int)(char)bVar2 - 0x31U < 9) {
              uVar5 = (ulong)((int)(char)bVar2 - 0x30);
              if (param_1[uVar5 + 0x12] == 0) {
                if ((int)param_1[2] == 0) {
                  uVar10 = 6;
                  goto LAB_109e06e10;
                }
                goto LAB_109e06e14;
              }
              FUN_109e06a94(param_1,0x38000000,uVar5);
              func_0x000109e0838c(param_1,param_1[uVar5 + 8] + 1,param_1[uVar5 + 0x12]);
              FUN_109e06a94(param_1,0x40000000,uVar5);
              bVar12 = true;
              *(undefined4 *)(param_1[7] + 0x78) = 1;
              goto LAB_109e06e68;
            }
LAB_109e06e5c:
            func_0x000109e083f4(param_1,uVar5);
            goto LAB_109e06e64;
          }
          if (uVar9 != 0x5e) {
            if (uVar9 == 0x7b) {
              if ((0 < (long)pbVar17 - (long)pbVar18) && (*pbVar18 - 0x30 < 10)) {
                if ((int)param_1[2] == 0) {
                  *(undefined4 *)(param_1 + 2) = 0xd;
                }
                *param_1 = 0x1137e7cb0;
                param_1[1] = 0x1137e7cb0;
              }
            }
            else if (bVar2 == 0x7c) {
              if ((int)param_1[2] == 0) {
                uVar10 = 0xe;
                goto LAB_109e06e10;
              }
              goto LAB_109e06e14;
            }
LAB_109e06e58:
            uVar5 = (ulong)(uint)(int)(char)bVar2;
            goto LAB_109e06e5c;
          }
          FUN_109e06a94(param_1,0x18000000,0);
          bVar12 = false;
          uVar6 = *(undefined8 *)(param_1[7] + 0x48);
          *(ulong *)(param_1[7] + 0x48) = CONCAT44((int)((ulong)uVar6 >> 0x20) + 1,(int)uVar6) | 1;
        }
LAB_109e06e68:
        pbVar11 = (byte *)*param_1;
        pbVar17 = (byte *)param_1[1];
        if (0 < (long)pbVar17 - (long)pbVar11) {
          bVar2 = *pbVar11;
          if (((bVar2 - 0x2a < 2) || (bVar2 == 0x3f)) ||
             ((bVar2 == 0x7b && (((long)pbVar17 - (long)pbVar11 != 1 && (pbVar11[1] - 0x30 < 10)))))
             ) {
            *param_1 = (ulong)(pbVar11 + 1);
            if (!bVar12) {
              if ((int)param_1[2] == 0) {
                *(undefined4 *)(param_1 + 2) = 0xd;
              }
              *param_1 = 0x1137e7cb0;
              param_1[1] = 0x1137e7cb0;
            }
            if (bVar2 < 0x3f) {
              if (bVar2 == 0x2a) {
                FUN_109e078d0(param_1,0x48000000,(param_1[5] - uVar16) + 1,uVar16);
                FUN_109e06a94(param_1,0x50000000,param_1[5] - uVar16);
                FUN_109e078d0(param_1,0x58000000,(param_1[5] - uVar16) + 1,uVar16);
                lVar7 = param_1[5] - uVar16;
                uVar6 = 0x60000000;
              }
              else {
                if (bVar2 != 0x2b) goto LAB_109e07094;
                FUN_109e078d0(param_1,0x48000000,(param_1[5] - uVar16) + 1,uVar16);
                lVar7 = param_1[5] - uVar16;
                uVar6 = 0x50000000;
              }
LAB_109e07090:
              FUN_109e06a94(param_1,uVar6,lVar7);
            }
            else {
              if (bVar2 == 0x3f) {
                FUN_109e078d0(param_1,0x78000000,(param_1[5] - uVar16) + 1,uVar16);
                FUN_109e06a94(param_1,0x80000000,param_1[5] - uVar16);
                if ((int)param_1[2] == 0) {
                  *(ulong *)(param_1[3] + uVar16 * 8) =
                       *(ulong *)(param_1[3] + uVar16 * 8) & 0xf8000000 | param_1[5] - uVar16;
                }
                FUN_109e06a94(param_1,0x88000000,0);
                if ((int)param_1[2] == 0) {
                  lVar7 = param_1[3] + param_1[5] * 8;
                  *(ulong *)(lVar7 + -8) = *(ulong *)(lVar7 + -8) & 0xf8000000 | 1;
                }
                uVar6 = 0x90000000;
                lVar7 = 2;
                goto LAB_109e07090;
              }
              if (bVar2 == 0x7b) {
                puVar4 = param_1;
                FUN_109e084dc();
                pcVar14 = (char *)*param_1;
                puVar8 = puVar4;
                if ((0 < (long)(param_1[1] - (long)pcVar14)) && (*pcVar14 == ',')) {
                  *param_1 = (ulong)(pcVar14 + 1);
                  if ((byte)pcVar14[1] - 0x30 < 10) {
                    puVar8 = param_1;
                    FUN_109e084dc();
                    if ((int)puVar8 < (int)puVar4) {
                      if ((int)param_1[2] == 0) {
                        *(undefined4 *)(param_1 + 2) = 10;
                      }
                      *param_1 = 0x1137e7cb0;
                      param_1[1] = 0x1137e7cb0;
                    }
                  }
                  else {
                    puVar8 = (ulong *)0x100;
                  }
                }
                FUN_109e08570(param_1,uVar16,puVar4,puVar8);
                pcVar14 = (char *)*param_1;
                if ((long)(param_1[1] - (long)pcVar14) < 1) {
LAB_109e071b0:
                  if ((int)param_1[2] == 0) {
                    uVar10 = 9;
LAB_109e071bc:
                    *(undefined4 *)(param_1 + 2) = uVar10;
                  }
                }
                else {
                  if (*pcVar14 == '}') {
                    *param_1 = (ulong)(pcVar14 + 1);
                    goto LAB_109e07094;
                  }
                  lVar7 = ~(ulong)pcVar14 + param_1[1];
                  do {
                    pcVar14 = pcVar14 + 1;
                    *param_1 = (ulong)pcVar14;
                    if (lVar7 < 1) goto LAB_109e071b0;
                    lVar7 = lVar7 + -1;
                  } while (*pcVar14 != '}');
                  if ((int)param_1[2] == 0) {
                    uVar10 = 10;
                    goto LAB_109e071bc;
                  }
                }
                *param_1 = 0x1137e7cb0;
                param_1[1] = 0x1137e7cb0;
              }
            }
LAB_109e07094:
            pbVar11 = (byte *)*param_1;
            pbVar17 = (byte *)param_1[1];
            if (0 < (long)pbVar17 - (long)pbVar11) {
              bVar2 = *pbVar11;
              if (((bVar2 - 0x2a < 2) || (bVar2 == 0x3f)) ||
                 ((bVar2 == 0x7b && (long)pbVar17 - (long)pbVar11 != 1 && (pbVar11[1] - 0x30 < 10)))
                 ) {
                if ((int)param_1[2] == 0) {
                  *(undefined4 *)(param_1 + 2) = 0xd;
                }
                *param_1 = 0x1137e7cb0;
                param_1[1] = 0x1137e7cb0;
                pbVar11 = (byte *)0x1137e7cb0;
                pbVar17 = (byte *)0x1137e7cb0;
              }
            }
          }
        }
      } while (0 < (long)pbVar17 - (long)pbVar11);
      uVar16 = param_1[5];
LAB_109e071cc:
      if (uVar16 == uVar15) goto LAB_109e071d4;
    }
    if (((long)pbVar17 - (long)pbVar11 < 1) || (*pbVar11 != 0x7c)) {
      if (bVar3) {
        if ((int)param_1[2] == 0) {
          *(ulong *)(param_1[3] + uStack_80 * 8) =
               *(ulong *)(param_1[3] + uStack_80 * 8) & 0xf8000000 | uVar16 - uStack_80;
          uVar16 = param_1[5];
        }
        FUN_109e06a94(param_1,0x90000000,uVar16 - uVar19);
      }
      return;
    }
    *param_1 = (ulong)(pbVar11 + 1);
    if (!bVar3) {
      FUN_109e078d0(param_1,0x78000000,(uVar16 - uVar15) + 1,uVar15);
      uVar16 = param_1[5];
      uStack_80 = uVar15;
      uVar19 = uVar15;
    }
    FUN_109e06a94(param_1,0x80000000,uVar16 - uVar19);
    uVar19 = param_1[5];
    uVar15 = uVar19;
    if ((int)param_1[2] == 0) {
      *(ulong *)(param_1[3] + uStack_80 * 8) =
           *(ulong *)(param_1[3] + uStack_80 * 8) & 0xf8000000 | uVar19 - uStack_80;
      uVar15 = param_1[5];
    }
    uVar19 = uVar19 - 1;
    FUN_109e06a94(param_1,0x88000000,0);
    bVar3 = true;
    uStack_80 = uVar15;
  } while( true );
}



/* Entry: 109e072f8; end: 109e078cf;  */

void FUN_109e072f8(long *param_1,int param_2,int param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 uStack_64;
  
  lVar11 = param_1[5];
  pcVar5 = (char *)*param_1;
  pcVar9 = (char *)param_1[1];
  lVar6 = (long)pcVar9 - (long)pcVar5;
  if (0 < lVar6) {
    if (*pcVar5 == '^') {
      *param_1 = (long)(pcVar5 + 1);
      FUN_109e06a94(param_1,0x18000000,0);
      uVar16 = *(undefined8 *)(param_1[7] + 0x48);
      *(ulong *)(param_1[7] + 0x48) = CONCAT44((int)((ulong)uVar16 >> 0x20) + 1,(int)uVar16) | 1;
      pcVar5 = (char *)*param_1;
      pcVar9 = (char *)param_1[1];
      lVar6 = (long)pcVar9 - (long)pcVar5;
      if (lVar6 < 1) goto LAB_109e07890;
    }
    bVar1 = false;
    bVar10 = false;
    do {
      if (((lVar6 != 1) && (param_2 == *pcVar5)) && (param_3 == pcVar5[1])) break;
      lVar12 = param_1[5];
      pcVar14 = pcVar5 + 1;
      *param_1 = (long)pcVar14;
      uVar15 = (uint)*pcVar5;
      if (*pcVar5 == '\\') {
        pcVar5 = pcVar14;
        if ((long)pcVar9 - (long)pcVar14 < 1) {
          if ((int)param_1[2] == 0) {
            *(undefined4 *)(param_1 + 2) = 5;
          }
          param_1[1] = 0x1137e7cb0;
          pcVar9 = (char *)0x1137e7cb0;
          pcVar5 = (char *)0x1137e7cb0;
        }
        pcVar14 = pcVar5 + 1;
        *param_1 = (long)pcVar14;
        uVar15 = (int)*pcVar5 | 0x100;
      }
      if ((int)uVar15 < 0x131) {
        if ((int)uVar15 < 0x5b) {
          if (uVar15 == 0x2a) {
            if (bVar10) {
              if ((int)param_1[2] == 0) {
                *(undefined4 *)(param_1 + 2) = 0xd;
              }
              *param_1 = 0x1137e7cb0;
              param_1[1] = 0x1137e7cb0;
            }
          }
          else if (uVar15 == 0x2e) {
            if ((*(byte *)(param_1[7] + 0x28) >> 3 & 1) == 0) {
              FUN_109e06a94(param_1,0x28000000,0);
            }
            else {
              *param_1 = (long)&uStack_64;
              param_1[1] = (ulong)&uStack_64 | 3;
              uStack_64 = 0x5d0a5e;
              FUN_109e07974(param_1);
              *param_1 = (long)pcVar14;
              param_1[1] = (long)pcVar9;
            }
            goto LAB_109e07650;
          }
LAB_109e0752c:
          func_0x000109e083f4(param_1,(int)(char)uVar15);
        }
        else {
          if (uVar15 != 0x5b) {
            if (uVar15 == 0x128) {
              lVar7 = *(long *)(param_1[7] + 0x70);
              lVar6 = lVar7 + 1;
              *(long *)(param_1[7] + 0x70) = lVar6;
              if (lVar6 < 10) {
                param_1[lVar7 + 9] = lVar12;
              }
              FUN_109e06a94(param_1,0x68000000,lVar6);
              pcVar5 = (char *)*param_1;
              if ((0 < param_1[1] - (long)pcVar5) &&
                 (((param_1[1] - (long)pcVar5 == 1 || (*pcVar5 != '\\')) || (pcVar5[1] != ')')))) {
                FUN_109e072f8(param_1,0x5c,0x29);
              }
              if (lVar6 < 10) {
                param_1[lVar7 + 0x13] = param_1[5];
              }
              FUN_109e06a94(param_1,0x70000000,lVar6);
              pcVar5 = (char *)*param_1;
              if (((1 < param_1[1] - (long)pcVar5) && (*pcVar5 == '\\')) && (pcVar5[1] == ')')) {
                *param_1 = (long)(pcVar5 + 2);
                goto LAB_109e07650;
              }
            }
            else if (uVar15 != 0x129) goto LAB_109e0752c;
LAB_109e075f8:
            if ((int)param_1[2] == 0) {
              uVar4 = 8;
              goto LAB_109e07614;
            }
            goto LAB_109e07618;
          }
          FUN_109e07974(param_1);
        }
      }
      else if (uVar15 - 0x131 < 9) {
        uVar13 = (ulong)((uVar15 & 0xfffffeff) - 0x30);
        if (param_1[uVar13 + 0x12] == 0) {
          if ((int)param_1[2] == 0) {
            *(undefined4 *)(param_1 + 2) = 6;
          }
          *param_1 = 0x1137e7cb0;
          param_1[1] = 0x1137e7cb0;
        }
        else {
          FUN_109e06a94(param_1,0x38000000,uVar13);
          FUN_109e0838c(param_1,param_1[uVar13 + 8] + 1,param_1[uVar13 + 0x12]);
          FUN_109e06a94(param_1,0x40000000,uVar13);
        }
        *(undefined4 *)(param_1[7] + 0x78) = 1;
      }
      else {
        if (uVar15 != 0x17b) {
          if (uVar15 == 0x17d) goto LAB_109e075f8;
          goto LAB_109e0752c;
        }
        if ((int)param_1[2] == 0) {
          uVar4 = 0xd;
LAB_109e07614:
          *(undefined4 *)(param_1 + 2) = uVar4;
        }
LAB_109e07618:
        *param_1 = 0x1137e7cb0;
        param_1[1] = 0x1137e7cb0;
      }
LAB_109e07650:
      pcVar5 = (char *)*param_1;
      pcVar9 = (char *)param_1[1];
      lVar6 = (long)pcVar9 - (long)pcVar5;
      if (lVar6 < 1) {
LAB_109e0777c:
        if (uVar15 != 0x24) goto LAB_109e07828;
        bVar1 = true;
      }
      else {
        if (*pcVar5 == '*') {
          *param_1 = (long)(pcVar5 + 1);
          FUN_109e078d0(param_1,0x48000000,(param_1[5] - lVar12) + 1,lVar12);
          FUN_109e06a94(param_1,0x50000000,param_1[5] - lVar12);
          FUN_109e078d0(param_1,0x58000000,(param_1[5] - lVar12) + 1,lVar12);
          FUN_109e06a94(param_1,0x60000000,param_1[5] - lVar12);
          pcVar5 = (char *)*param_1;
          pcVar9 = (char *)param_1[1];
          goto LAB_109e07828;
        }
        if (((lVar6 == 1) || (*pcVar5 != '\\')) || (pcVar5[1] != '{')) goto LAB_109e0777c;
        *param_1 = (long)(pcVar5 + 2);
        plVar2 = param_1;
        FUN_109e084dc();
        pcVar5 = (char *)*param_1;
        plVar3 = plVar2;
        if ((0 < param_1[1] - (long)pcVar5) && (pbVar8 = (byte *)(pcVar5 + 1), *pcVar5 == ',')) {
          *param_1 = (long)pbVar8;
          if ((param_1[1] - (long)pbVar8 < 1) || (9 < *pbVar8 - 0x30)) {
            plVar3 = (long *)0x100;
          }
          else {
            plVar3 = param_1;
            FUN_109e084dc();
            if ((int)plVar3 < (int)plVar2) {
              if ((int)param_1[2] == 0) {
                *(undefined4 *)(param_1 + 2) = 10;
              }
              *param_1 = 0x1137e7cb0;
              param_1[1] = 0x1137e7cb0;
            }
          }
        }
        FUN_109e08570(param_1,lVar12,plVar2,plVar3);
        pcVar5 = (char *)*param_1;
        pcVar9 = (char *)param_1[1];
        lVar6 = (long)pcVar9 - (long)pcVar5;
        if (lVar6 < 2) {
          if (lVar6 == 1) goto LAB_109e077dc;
        }
        else {
          if ((*pcVar5 == '\\') && (pcVar5[1] == '}')) {
            pcVar5 = pcVar5 + 2;
            *param_1 = (long)pcVar5;
            goto LAB_109e07828;
          }
LAB_109e077dc:
          do {
            pcVar9 = pcVar5 + 1;
            lVar6 = lVar6 + -1;
            if (((lVar6 != 0) && (*pcVar5 == '\\')) && (*pcVar9 == '}')) {
              if ((int)param_1[2] != 0) goto LAB_109e0781c;
              uVar4 = 10;
              goto LAB_109e07818;
            }
            *param_1 = (long)pcVar9;
            pcVar5 = pcVar9;
          } while (0 < lVar6);
        }
        if ((int)param_1[2] == 0) {
          uVar4 = 9;
LAB_109e07818:
          *(undefined4 *)(param_1 + 2) = uVar4;
        }
LAB_109e0781c:
        *param_1 = 0x1137e7cb0;
        param_1[1] = 0x1137e7cb0;
        pcVar5 = (char *)0x1137e7cb0;
        pcVar9 = (char *)0x1137e7cb0;
LAB_109e07828:
        bVar1 = false;
        lVar6 = (long)pcVar9 - (long)pcVar5;
      }
      bVar10 = true;
    } while (0 < lVar6);
    lVar6 = param_1[5];
    if (!bVar1) goto LAB_109e07894;
    param_1[5] = lVar6 + -1;
    FUN_109e06a94(param_1,0x20000000,0);
    lVar6 = param_1[7];
    *(uint *)(lVar6 + 0x48) = *(uint *)(lVar6 + 0x48) | 2;
    *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
  }
LAB_109e07890:
  lVar6 = param_1[5];
LAB_109e07894:
  if (lVar6 == lVar11) {
    if ((int)param_1[2] == 0) {
      *(undefined4 *)(param_1 + 2) = 0xe;
    }
    *param_1 = 0x1137e7cb0;
    param_1[1] = 0x1137e7cb0;
  }
  return;
}



/* Entry: 109e078d0; end: 109e07973;  */

void FUN_109e078d0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  FUN_109e06a94();
  lVar1 = *(long *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(lVar1 + lVar3 * 8);
  plVar2 = (long *)(param_1 + 0x98);
  lVar3 = 9;
  do {
    if ((long)param_4 <= plVar2[-10]) {
      plVar2[-10] = plVar2[-10] + 1;
    }
    if ((long)param_4 <= *plVar2) {
      *plVar2 = *plVar2 + 1;
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar1 = lVar1 + param_4 * 8;
  _memmove(lVar1 + 8,lVar1,(*(long *)(param_1 + 0x28) + ~param_4) * 8);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + param_4 * 8) = uVar4;
  return;
}



/* Entry: 109e07974; end: 109e0838b;  */

void FUN_109e07974(long *param_1)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  char cVar19;
  long *plVar20;
  byte *pbVar21;
  long *plVar22;
  char *pcVar23;
  long lVar24;
  char *pcVar25;
  ulong uVar26;
  long lVar27;
  undefined *puVar28;
  undefined **ppuVar29;
  
  lVar27 = *param_1;
  if (5 < param_1[1] - lVar27) {
    lVar15 = lVar27;
    _strncmp(lVar27,&UNK_10f6025c7,6);
    if ((int)lVar15 == 0) {
      uVar14 = 0x98000000;
LAB_109e07b64:
      FUN_109e06a94(param_1,uVar14,0);
      *param_1 = *param_1 + 6;
      return;
    }
    _strncmp(lVar27,&UNK_10f6025ce,6);
    if ((int)lVar27 == 0) {
      uVar14 = 0xa0000000;
      goto LAB_109e07b64;
    }
  }
  lVar27 = param_1[7];
  iVar9 = *(int *)(lVar27 + 0x10);
  uVar10 = *(uint *)(lVar27 + 0x14);
  *(uint *)(lVar27 + 0x14) = uVar10 + 1;
  iVar8 = (int)param_1[6];
  if (iVar8 <= (int)uVar10) {
    uVar2 = iVar8 + 8;
    *(uint *)(param_1 + 6) = uVar2;
    if (iVar8 < -8) goto LAB_109e07b10;
    lVar15 = *(long *)(lVar27 + 0x18);
    _realloc(lVar15,(ulong)uVar2 << 5);
    lVar27 = param_1[7];
    if (lVar15 == 0) goto LAB_109e07b10;
    lVar24 = (long)(int)(uVar2 >> 3) * (long)iVar9;
    *(long *)(lVar27 + 0x18) = lVar15;
    lVar15 = *(long *)(lVar27 + 0x20);
    _realloc(lVar15,lVar24);
    lVar27 = param_1[7];
    if (lVar15 == 0) goto LAB_109e07b10;
    *(long *)(lVar27 + 0x20) = lVar15;
    if (0 < (int)uVar10) {
      uVar18 = 0;
      plVar20 = *(long **)(lVar27 + 0x18);
      do {
        *plVar20 = lVar15 + (long)(int)((uint)(uVar18 >> 3) & 0x1fffffff) * (long)iVar9;
        uVar18 = uVar18 + 1;
        plVar20 = plVar20 + 4;
      } while (uVar10 != uVar18);
    }
    _bzero(lVar15 + (lVar24 - iVar9),(long)iVar9);
  }
  if ((*(long *)(lVar27 + 0x18) == 0) || (*(long *)(lVar27 + 0x20) == 0)) {
LAB_109e07b10:
    _free(*(undefined8 *)(lVar27 + 0x18));
    lVar27 = param_1[7];
    *(undefined8 *)(lVar27 + 0x18) = 0;
    _free(*(undefined8 *)(lVar27 + 0x20));
    *(undefined8 *)(param_1[7] + 0x20) = 0;
    if ((int)param_1[2] == 0) {
      *(undefined4 *)(param_1 + 2) = 0xc;
    }
    *param_1 = 0x1137e7cb0;
    param_1[1] = 0x1137e7cb0;
    return;
  }
  plVar20 = (long *)(*(long *)(lVar27 + 0x18) + (long)(int)uVar10 * 0x20);
  uVar2 = uVar10 + 7;
  if (-1 < (int)uVar10) {
    uVar2 = uVar10;
  }
  lVar27 = *(long *)(lVar27 + 0x20) + (long)iVar9 * (long)((int)uVar2 >> 3);
  *plVar20 = lVar27;
  bVar7 = true;
  bVar5 = (byte)(1 << (ulong)(uVar10 & 7));
  *(byte *)(plVar20 + 1) = bVar5;
  *(undefined1 *)((long)plVar20 + 9) = 0;
  plVar20[2] = 0;
  plVar20[3] = 0;
  pbVar21 = (byte *)*param_1;
  pbVar17 = (byte *)param_1[1];
  if (0 < (long)pbVar17 - (long)pbVar21) {
    bVar4 = *pbVar21;
    bVar7 = bVar4 != 0x5e;
    if (!bVar7) {
      pbVar21 = pbVar21 + 1;
      *param_1 = (long)pbVar21;
      if ((long)pbVar17 - (long)pbVar21 < 1) {
        bVar7 = false;
        goto LAB_109e07bc4;
      }
      bVar4 = *pbVar21;
    }
    if (bVar4 == 0x5d) {
      lVar15 = 0x5d;
    }
    else {
      if (bVar4 != 0x2d) goto LAB_109e07bc4;
      lVar15 = 0x2d;
    }
    *param_1 = (long)(pbVar21 + 1);
    *(byte *)(lVar27 + lVar15) = *(byte *)(lVar27 + lVar15) | bVar5;
    *(byte *)((long)plVar20 + 9) = *(char *)((long)plVar20 + 9) + bVar4;
    pbVar21 = (byte *)*param_1;
    pbVar17 = (byte *)param_1[1];
  }
LAB_109e07bc4:
  puVar6 = PTR___DefaultRuneLocale_11034bcf8;
  lVar27 = (long)pbVar17 - (long)pbVar21;
  if (0 < lVar27) {
    pbVar3 = (byte *)0x1137e7cb0;
LAB_109e07bec:
    bVar5 = *pbVar21;
    if (bVar5 != 0x5d) {
      if ((lVar27 == 1) || (bVar5 != 0x2d)) {
        if (bVar5 == 0x2d) goto LAB_109e07dbc;
        if (bVar5 == 0x5b && lVar27 != 1) {
          if (pbVar21[1] != 0x3d) {
            if (pbVar21[1] == 0x3a) {
              pbVar21 = pbVar21 + 2;
              *param_1 = (long)pbVar21;
              if ((long)pbVar17 - (long)pbVar21 < 1) {
                if ((int)param_1[2] == 0) {
                  *(undefined4 *)(param_1 + 2) = 7;
                }
                *param_1 = 0x1137e7cb0;
                param_1[1] = 0x1137e7cb0;
                pbVar17 = pbVar3;
                pbVar21 = pbVar3;
              }
              if ((*pbVar21 == 0x5d) || (*pbVar21 == 0x2d)) {
                if ((int)param_1[2] == 0) {
                  *(undefined4 *)(param_1 + 2) = 4;
                }
                *param_1 = 0x1137e7cb0;
                param_1[1] = 0x1137e7cb0;
                pbVar17 = pbVar3;
                pbVar21 = pbVar3;
              }
              pbVar16 = pbVar21;
              if (0 < (long)pbVar17 - (long)pbVar21) {
                lVar27 = -(long)pbVar21;
                pbVar17 = pbVar21;
                do {
                  bVar5 = *pbVar17;
                  if ((long)(char)bVar5 < 0) {
                    uVar10 = (uint)bVar5;
                    ___maskrune(bVar5,0x100);
                  }
                  else {
                    uVar10 = *(uint *)(puVar6 + (long)(char)bVar5 * 4 + 0x3c) & 0x100;
                  }
                  if (uVar10 == 0) {
                    pbVar16 = (byte *)*param_1;
                    goto LAB_109e07ec8;
                  }
                  *param_1 = (long)(pbVar17 + 1);
                  lVar27 = lVar27 + -1;
                  pbVar17 = pbVar17 + 1;
                } while (0 < param_1[1] + lVar27);
                pbVar16 = (byte *)-lVar27;
              }
LAB_109e07ec8:
              ppuVar29 = &PTR_s__110b5c7a8;
              puVar28 = &DAT_10f6025d5;
LAB_109e07edc:
              puVar12 = puVar28;
              _strncmp(puVar28,pbVar21,(long)pbVar16 - (long)pbVar21);
              if (((int)puVar12 != 0) || (puVar28[(long)pbVar16 - (long)pbVar21] != '\0'))
              goto LAB_109e07ef8;
              pbVar21 = ppuVar29[-1];
              bVar5 = *pbVar21;
              while (bVar5 != 0) {
                pbVar21 = pbVar21 + 1;
                *(byte *)(*plVar20 + (ulong)bVar5) =
                     *(byte *)(*plVar20 + (ulong)bVar5) | *(byte *)(plVar20 + 1);
                *(byte *)((long)plVar20 + 9) = *(char *)((long)plVar20 + 9) + bVar5;
                bVar5 = *pbVar21;
              }
              pcVar25 = *ppuVar29;
              cVar19 = *pcVar25;
              while (cVar19 != '\0') {
                lVar15 = plVar20[2];
                pcVar23 = pcVar25;
                _strlen();
                plVar20[2] = (long)(pcVar23 + lVar15 + 1);
                lVar27 = plVar20[3];
                _realloc();
                if (lVar27 == 0) {
                  if (plVar20[3] != 0) {
                    _free();
                  }
                  plVar20[3] = 0;
                  if ((int)param_1[2] == 0) {
                    *(undefined4 *)(param_1 + 2) = 0xc;
                  }
                  *param_1 = 0x1137e7cb0;
                  param_1[1] = 0x1137e7cb0;
                }
                else {
                  plVar20[3] = lVar27;
                  func_0x000109e0ba40(lVar27 + lVar15 + -1,pcVar25,(plVar20[2] - lVar15) + 1);
                }
                pcVar23 = pcVar25;
                _strlen();
                pcVar25 = pcVar25 + (long)pcVar23 + 1;
                cVar19 = *pcVar25;
              }
              goto LAB_109e07f20;
            }
            goto LAB_109e07c2c;
          }
          pbVar21 = pbVar21 + 2;
          *param_1 = (long)pbVar21;
          if ((long)pbVar17 - (long)pbVar21 < 1) {
            if ((int)param_1[2] == 0) {
              *(undefined4 *)(param_1 + 2) = 7;
            }
            *param_1 = 0x1137e7cb0;
            param_1[1] = 0x1137e7cb0;
            pbVar21 = pbVar3;
          }
          if ((*pbVar21 == 0x5d) || (*pbVar21 == 0x2d)) {
            if ((int)param_1[2] == 0) {
              *(undefined4 *)(param_1 + 2) = 3;
            }
            *param_1 = 0x1137e7cb0;
            param_1[1] = 0x1137e7cb0;
          }
          plVar22 = param_1;
          FUN_109e08a08(param_1,0x3d);
          *(byte *)(*plVar20 + ((ulong)plVar22 & 0xff)) =
               *(byte *)(*plVar20 + ((ulong)plVar22 & 0xff)) | *(byte *)(plVar20 + 1);
          *(char *)((long)plVar20 + 9) = *(char *)((long)plVar20 + 9) + (char)plVar22;
          pbVar17 = (byte *)param_1[1];
          pbVar21 = (byte *)*param_1;
          if (param_1[1] - *param_1 < 1) {
            if ((int)param_1[2] == 0) {
              *(undefined4 *)(param_1 + 2) = 7;
            }
            *param_1 = 0x1137e7cb0;
            param_1[1] = 0x1137e7cb0;
            pbVar17 = pbVar3;
            pbVar21 = pbVar3;
          }
          if ((((long)pbVar17 - (long)pbVar21 < 2) || (*pbVar21 != 0x3d)) || (pbVar21[1] != 0x5d)) {
            if ((int)param_1[2] == 0) {
              *(undefined4 *)(param_1 + 2) = 3;
            }
            goto LAB_109e07dc8;
          }
          goto LAB_109e07f6c;
        }
LAB_109e07c2c:
        plVar22 = param_1;
        func_0x000109e08920();
        pcVar25 = (char *)*param_1;
        lVar27 = param_1[1] - (long)pcVar25;
        iVar9 = (int)plVar22;
        if ((((0 < lVar27) && (lVar27 != 1)) && (*pcVar25 == '-')) &&
           (pcVar23 = pcVar25 + 1, *pcVar23 != ']')) {
          *param_1 = (long)pcVar23;
          if ((param_1[1] - (long)pcVar23 < 1) || (*pcVar23 != '-')) {
            plVar11 = param_1;
            func_0x000109e08920();
            iVar8 = (int)plVar11;
          }
          else {
            *param_1 = (long)(pcVar25 + 2);
            iVar8 = 0x2d;
          }
          bVar1 = iVar8 < iVar9;
          iVar9 = iVar8;
          if (bVar1) goto LAB_109e07dbc;
        }
        do {
          *(byte *)(*plVar20 + ((ulong)plVar22 & 0xff)) =
               *(byte *)(*plVar20 + ((ulong)plVar22 & 0xff)) | *(byte *)(plVar20 + 1);
          *(char *)((long)plVar20 + 9) = *(char *)((long)plVar20 + 9) + (char)plVar22;
          uVar10 = (int)plVar22 + 1;
          plVar22 = (long *)(ulong)uVar10;
        } while (iVar9 + 1U != uVar10);
        pbVar21 = (byte *)*param_1;
        pbVar17 = (byte *)param_1[1];
        goto LAB_109e07dd4;
      }
      if (pbVar21[1] != 0x5d) {
LAB_109e07dbc:
        if ((int)param_1[2] == 0) {
          *(undefined4 *)(param_1 + 2) = 0xb;
        }
        goto LAB_109e07dc8;
      }
      *param_1 = (long)(pbVar21 + 1);
      *(byte *)(*plVar20 + 0x2d) = *(byte *)(*plVar20 + 0x2d) | *(byte *)(plVar20 + 1);
      *(char *)((long)plVar20 + 9) = *(char *)((long)plVar20 + 9) + '-';
      pbVar21 = (byte *)*param_1;
      pbVar17 = (byte *)param_1[1];
    }
  }
LAB_109e08088:
  if (((long)pbVar17 - (long)pbVar21 < 1) ||
     (*param_1 = (long)(pbVar21 + 1), puVar6 = PTR___DefaultRuneLocale_11034bcf8, *pbVar21 != 0x5d))
  {
    if ((int)param_1[2] == 0) {
      *(undefined4 *)(param_1 + 2) = 7;
    }
    *param_1 = 0x1137e7cb0;
    param_1[1] = 0x1137e7cb0;
  }
  else if ((int)param_1[2] == 0) {
    lVar27 = param_1[7];
    if (((*(byte *)(lVar27 + 0x28) >> 1 & 1) != 0) &&
       (uVar18 = (ulong)*(uint *)(lVar27 + 0x10), 0 < (int)*(uint *)(lVar27 + 0x10))) {
      do {
        uVar26 = uVar18 - 1;
        if ((*(byte *)(plVar20 + 1) & *(byte *)(*plVar20 + (uVar26 & 0xff))) != 0) {
          if (uVar18 < 0x81) {
            uVar10 = *(uint *)(puVar6 + uVar18 * 4 + 0x38) & 0x100;
          }
          else {
            uVar13 = uVar26;
            ___maskrune(uVar26,0x100);
            uVar10 = (uint)uVar13;
          }
          if ((uVar10 != 0) && (uVar13 = uVar26, FUN_109e0889c(), uVar26 != (uVar13 & 0xffffffff)))
          {
            *(byte *)(*plVar20 + (uVar13 & 0xff)) =
                 *(byte *)(*plVar20 + (uVar13 & 0xff)) | *(byte *)(plVar20 + 1);
            *(char *)((long)plVar20 + 9) = *(char *)((long)plVar20 + 9) + (char)uVar13;
          }
        }
        bVar1 = 1 < uVar18;
        uVar18 = uVar26;
      } while (bVar1);
      lVar27 = param_1[7];
    }
    if (!bVar7) {
      if (0 < *(int *)(lVar27 + 0x10)) {
        uVar10 = *(int *)(lVar27 + 0x10) + 1;
        do {
          lVar27 = *plVar20;
          uVar18 = (ulong)(uVar10 - 2) & 0xff;
          bVar4 = *(byte *)(lVar27 + uVar18);
          bVar5 = *(byte *)(plVar20 + 1);
          cVar19 = (char)(uVar10 - 2);
          if ((bVar5 & bVar4) == 0) {
            *(byte *)(lVar27 + uVar18) = bVar5 | bVar4;
            cVar19 = *(char *)((long)plVar20 + 9) + cVar19;
          }
          else {
            *(byte *)(lVar27 + uVar18) = bVar4 & (bVar5 ^ 0xff);
            cVar19 = *(char *)((long)plVar20 + 9) - cVar19;
          }
          *(char *)((long)plVar20 + 9) = cVar19;
          uVar10 = uVar10 - 1;
        } while (1 < uVar10);
        lVar27 = param_1[7];
      }
      if ((*(byte *)(lVar27 + 0x28) >> 3 & 1) != 0) {
        *(byte *)(*plVar20 + 10) = *(byte *)(*plVar20 + 10) & (*(byte *)(plVar20 + 1) ^ 0xff);
        *(char *)((long)plVar20 + 9) = *(char *)((long)plVar20 + 9) + -10;
        lVar27 = param_1[7];
      }
    }
    iVar9 = *(int *)(lVar27 + 0x10);
    uVar18 = (ulong)iVar9;
    if (iVar9 != 0) {
      iVar8 = 0;
      uVar26 = 0;
      do {
        if ((*(byte *)(*plVar20 + (uVar26 & 0xff)) & *(byte *)(plVar20 + 1)) != 0) {
          iVar8 = iVar8 + 1;
        }
        uVar26 = uVar26 + 1;
      } while (uVar18 != uVar26);
      if (iVar8 == 1) {
        iVar9 = 0;
        uVar26 = 0;
        do {
          if ((*(byte *)(*plVar20 + (uVar26 & 0xff)) & *(byte *)(plVar20 + 1)) != 0) {
            iVar9 = iVar9 >> 0x18;
            goto LAB_109e08380;
          }
          uVar26 = uVar26 + 1;
          iVar9 = iVar9 + 0x1000000;
        } while (uVar18 != uVar26);
        iVar9 = 0;
LAB_109e08380:
        func_0x000109e083f4(param_1,iVar9);
        goto LAB_109e08280;
      }
    }
    plVar22 = *(long **)(lVar27 + 0x18);
    if (0 < *(int *)(lVar27 + 0x14)) {
      plVar11 = plVar22;
      do {
        if ((plVar11 != plVar20) && (*(char *)((long)plVar11 + 9) == *(char *)((long)plVar20 + 9)))
        {
          uVar26 = 0;
          if (iVar9 != 0) {
            while (((*(byte *)(*plVar11 + (uVar26 & 0xff)) & *(byte *)(plVar11 + 1)) != 0) !=
                   ((*(byte *)(*plVar20 + (uVar26 & 0xff)) & *(byte *)(plVar20 + 1)) == 0)) {
              uVar26 = uVar26 + 1;
              if (uVar18 == uVar26) goto LAB_109e0833c;
            }
          }
          if (uVar26 == uVar18) {
LAB_109e0833c:
            FUN_109e08830(param_1,plVar20);
            plVar22 = *(long **)(param_1[7] + 0x18);
            plVar20 = plVar11;
            break;
          }
        }
        plVar11 = plVar11 + 4;
      } while (plVar11 < plVar22 + (long)*(int *)(lVar27 + 0x14) * 4);
    }
    if ((int)param_1[2] != 0) {
      return;
    }
    lVar27 = param_1[5];
    if (param_1[4] <= lVar27) {
      lVar27 = param_1[4] + 1;
      FUN_109e08b18(param_1,(lVar27 - (lVar27 >> 0x3f) & 0xfffffffffffffffeU) + lVar27 / 2);
      lVar27 = param_1[5];
    }
    param_1[5] = lVar27 + 1;
    *(ulong *)(param_1[3] + lVar27 * 8) =
         ((long)plVar20 - (long)plVar22) * 0x8000000 >> 0x20 | 0x30000000;
    return;
  }
LAB_109e08280:
  lVar27 = param_1[7];
  lVar15 = *(long *)(lVar27 + 0x18);
  iVar9 = *(int *)(lVar27 + 0x10);
  iVar8 = *(int *)(lVar27 + 0x14);
  if (iVar9 != 0) {
    uVar18 = 0;
    do {
      *(byte *)(*plVar20 + (uVar18 & 0xff)) =
           *(byte *)(*plVar20 + (uVar18 & 0xff)) & (*(byte *)(plVar20 + 1) ^ 0xff);
      *(char *)((long)plVar20 + 9) = *(char *)((long)plVar20 + 9) - (char)uVar18;
      uVar18 = uVar18 + 1;
    } while ((long)iVar9 != uVar18);
  }
  if ((long *)((lVar15 + (long)iVar8 * 0x20) - 0x20U) != plVar20) {
    return;
  }
  *(int *)(param_1[7] + 0x14) = *(int *)(param_1[7] + 0x14) + -1;
  return;
LAB_109e07ef8:
  puVar28 = ppuVar29[1];
  ppuVar29 = ppuVar29 + 3;
  if (puVar28 == (undefined *)0x0) goto code_r0x000109e07f04;
  goto LAB_109e07edc;
code_r0x000109e07f04:
  if ((int)param_1[2] == 0) {
    *(undefined4 *)(param_1 + 2) = 4;
  }
  *param_1 = 0x1137e7cb0;
  param_1[1] = 0x1137e7cb0;
LAB_109e07f20:
  pbVar17 = (byte *)param_1[1];
  pbVar21 = (byte *)*param_1;
  if (param_1[1] - *param_1 < 1) {
    if ((int)param_1[2] == 0) {
      *(undefined4 *)(param_1 + 2) = 7;
    }
    *param_1 = 0x1137e7cb0;
    param_1[1] = 0x1137e7cb0;
    pbVar17 = pbVar3;
    pbVar21 = pbVar3;
  }
  if ((((long)pbVar17 - (long)pbVar21 < 2) || (*pbVar21 != 0x3a)) || (pbVar21[1] != 0x5d)) {
    if ((int)param_1[2] == 0) {
      *(undefined4 *)(param_1 + 2) = 4;
    }
LAB_109e07dc8:
    *param_1 = 0x1137e7cb0;
    param_1[1] = 0x1137e7cb0;
    pbVar17 = pbVar3;
    pbVar21 = pbVar3;
  }
  else {
LAB_109e07f6c:
    pbVar21 = pbVar21 + 2;
    *param_1 = (long)pbVar21;
  }
LAB_109e07dd4:
  lVar27 = (long)pbVar17 - (long)pbVar21;
  if (lVar27 < 1) goto LAB_109e08088;
  goto LAB_109e07bec;
}



/* Entry: 109e0838c; end: 109e084db;  */

undefined8 FUN_109e0838c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  param_3 = param_3 - param_2;
  if (param_3 != 0) {
    FUN_109e08b18(param_1,*(long *)(param_1 + 0x20) + param_3);
    _memmove(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x28) * 8,
             *(long *)(param_1 + 0x18) + param_2 * 8,param_3 * 8);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
  }
  return uVar1;
}



/* Entry: 109e084dc; end: 109e0856f;  */

int FUN_109e084dc(long *param_1)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3;
  if (lVar7 < 1) {
    iVar5 = 0;
  }
  else {
    lVar6 = 0;
    iVar5 = 0;
    do {
      pbVar2 = (byte *)(lVar3 + lVar6);
      if ((9 < *pbVar2 - 0x30) || (0xff < iVar5)) goto LAB_109e08538;
      *param_1 = (long)(pbVar2 + 1);
      iVar5 = (int)(char)*pbVar2 + iVar5 * 10 + -0x30;
      lVar6 = lVar6 + 1;
      lVar4 = lVar7 + -1;
      bVar1 = 0 < lVar7;
      lVar7 = lVar4;
    } while (lVar4 != 0 && bVar1);
    lVar6 = 1;
LAB_109e08538:
    if (((int)lVar6 != 0) && (iVar5 < 0x100)) {
      return iVar5;
    }
  }
  if ((int)param_1[2] == 0) {
    *(undefined4 *)(param_1 + 2) = 10;
  }
  *param_1 = 0x1137e7cb0;
  param_1[1] = 0x1137e7cb0;
  return iVar5;
}



/* Entry: 109e08570; end: 109e0882f;  */

void FUN_109e08570(undefined8 *param_1,undefined8 *param_2,int param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 2);
  while( true ) {
    if (iVar9 != 0) {
      return;
    }
    iVar7 = (int)param_4;
    iVar9 = 2;
    if (iVar7 == 0x100) {
      iVar9 = 3;
    }
    iVar2 = iVar7;
    if (1 < iVar7) {
      iVar2 = iVar9;
    }
    while( true ) {
      lVar8 = param_1[5];
      iVar9 = 2;
      if (param_3 == 0x100) {
        iVar9 = 3;
      }
      iVar3 = param_3;
      if (1 < param_3) {
        iVar3 = iVar9;
      }
      iVar9 = iVar2 + iVar3 * 8;
      if (iVar9 != 0x13) break;
      puVar4 = param_1;
      FUN_109e0838c(param_1,param_2,lVar8);
      param_3 = param_3 + -1;
      param_2 = puVar4;
      if (*(int *)(param_1 + 2) != 0) {
        return;
      }
    }
    if (iVar9 < 9) break;
    puVar4 = param_1;
    if (iVar9 < 0xb) {
      if (iVar9 == 9) {
        return;
      }
      if (iVar9 != 10) goto LAB_109e08818;
      FUN_109e078d0(param_1,0x78000000,(lVar8 - (long)param_2) + 1,param_2);
      FUN_109e06a94(param_1,0x80000000,param_1[5] - (long)param_2);
      if (*(int *)(param_1 + 2) == 0) {
        *(ulong *)(param_1[3] + (long)param_2 * 8) =
             *(ulong *)(param_1[3] + (long)param_2 * 8) & 0xf8000000 | param_1[5] - (long)param_2;
      }
      FUN_109e06a94(param_1,0x88000000,0);
      if (*(int *)(param_1 + 2) == 0) {
        lVar1 = param_1[3] + param_1[5] * 8;
        *(ulong *)(lVar1 + -8) = *(ulong *)(lVar1 + -8) & 0xf8000000 | 1;
      }
      FUN_109e06a94(param_1,0x90000000,2);
      FUN_109e0838c(param_1,(long)param_2 + 1,lVar8 + 1);
      param_3 = 1;
    }
    else {
      if (iVar9 == 0xb) {
        FUN_109e078d0(param_1,0x48000000,(lVar8 - (long)param_2) + 1,param_2);
        uVar6 = param_1[5] - (long)param_2;
        uVar5 = 0x50000000;
        goto LAB_109e08800;
      }
      if (iVar9 != 0x12) goto LAB_109e08818;
      FUN_109e0838c(param_1,param_2,lVar8);
      param_3 = param_3 + -1;
    }
    param_4 = (ulong)(iVar7 - 1);
    iVar9 = *(int *)(param_1 + 2);
    param_2 = puVar4;
  }
  if (iVar9 - 1U < 3) {
    FUN_109e078d0(param_1,0x78000000,(lVar8 - (long)param_2) + 1,param_2);
    FUN_109e08570(param_1,(long)param_2 + 1,1,param_4);
    FUN_109e06a94(param_1,0x80000000,param_1[5] - (long)param_2);
    if (*(int *)(param_1 + 2) == 0) {
      *(ulong *)(param_1[3] + (long)param_2 * 8) =
           *(ulong *)(param_1[3] + (long)param_2 * 8) & 0xf8000000 | param_1[5] - (long)param_2;
    }
    FUN_109e06a94(param_1,0x88000000,0);
    if (*(int *)(param_1 + 2) == 0) {
      lVar8 = param_1[3] + param_1[5] * 8;
      *(ulong *)(lVar8 + -8) = *(ulong *)(lVar8 + -8) & 0xf8000000 | 1;
    }
    uVar5 = 0x90000000;
    uVar6 = 2;
LAB_109e08800:
    if (*(int *)(param_1 + 2) == 0) {
      lVar8 = param_1[5];
      if ((long)param_1[4] <= lVar8) {
        lVar8 = param_1[4] + 1;
        FUN_109e08b18(param_1,(lVar8 - (lVar8 >> 0x3f) & 0xfffffffffffffffeU) + lVar8 / 2);
        lVar8 = param_1[5];
      }
      param_1[5] = lVar8 + 1;
      *(ulong *)(param_1[3] + lVar8 * 8) = uVar6 | uVar5;
      return;
    }
    return;
  }
  if (iVar9 == 0) {
    param_1[5] = param_2;
    return;
  }
LAB_109e08818:
  *(undefined4 *)(param_1 + 2) = 0xf;
  *param_1 = 0x1137e7cb0;
  param_1[1] = 0x1137e7cb0;
  return;
}



/* Entry: 109e08830; end: 109e0889b;  */

void FUN_109e08830(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x38);
  lVar4 = *(long *)(lVar3 + 0x18);
  iVar1 = *(int *)(lVar3 + 0x10);
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      *(byte *)(*param_2 + (uVar5 & 0xff)) =
           *(byte *)(*param_2 + (uVar5 & 0xff)) & (*(byte *)(param_2 + 1) ^ 0xff);
      *(char *)((long)param_2 + 9) = *(char *)((long)param_2 + 9) - (char)uVar5;
      uVar5 = uVar5 + 1;
    } while ((long)iVar1 != uVar5);
  }
  if ((long *)(lVar4 + (long)iVar2 * 0x20 + -0x20) != param_2) {
    return;
  }
  *(int *)(*(long *)(param_1 + 0x38) + 0x14) = *(int *)(*(long *)(param_1 + 0x38) + 0x14) + -1;
  return;
}



/* Entry: 109e0889c; end: 109e08a07;  */

int FUN_109e0889c(byte param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(uint)param_1;
  if (param_1 < 0x80) {
    if ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar3 * 4 + 0x3c) >> 0xf & 1) == 0) {
      uVar1 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar3 * 4 + 0x3c) & 0x1000;
joined_r0x000109e08900:
      if (uVar1 != 0) {
        ___toupper(uVar3);
        param_1 = (byte)uVar3;
      }
      goto LAB_109e08910;
    }
  }
  else {
    uVar2 = uVar3;
    ___maskrune(uVar3,0x8000);
    if ((int)uVar2 == 0) {
      uVar2 = uVar3;
      ___maskrune(uVar3,0x1000);
      uVar1 = (uint)uVar2;
      goto joined_r0x000109e08900;
    }
  }
  ___tolower(uVar3);
  param_1 = (byte)uVar3;
LAB_109e08910:
  return (int)(char)param_1;
}



/* Entry: 109e08a08; end: 109e08b17;  */

int FUN_109e08a08(long *param_1,int param_2)

{
  char *pcVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  pcVar1 = (char *)*param_1;
  lVar5 = param_1[1] - (long)pcVar1;
  if (0 < lVar5) {
    lVar6 = 0;
    puVar7 = (undefined *)0x0;
    do {
      if ((((undefined *)(lVar5 + -1) != puVar7) && (param_2 == pcVar1[(long)puVar7])) &&
         (pcVar1[(long)(puVar7 + 1)] == ']')) {
        puVar8 = &DAT_10f60279d;
        ppuVar9 = &PTR_DAT_110b5c8e0;
        goto LAB_109e08ac4;
      }
      *param_1 = (long)(pcVar1 + (long)(puVar7 + 1));
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -1;
    } while (0 < lVar5 + lVar6);
  }
  if ((int)param_1[2] == 0) {
    uVar4 = 7;
LAB_109e08a88:
    *(undefined4 *)(param_1 + 2) = uVar4;
  }
  goto LAB_109e08a8c;
  while( true ) {
    puVar8 = *ppuVar9;
    ppuVar9 = ppuVar9 + 2;
    if (puVar8 == (undefined *)0x0) break;
LAB_109e08ac4:
    puVar2 = puVar8;
    _strncmp(puVar8,pcVar1,puVar7);
    if (((int)puVar2 == 0) && (_strlen(), puVar8 == puVar7)) {
      cVar3 = *(char *)(ppuVar9 + -1);
      goto LAB_109e08a9c;
    }
  }
  if (puVar7 == (undefined *)0x1) {
    cVar3 = *pcVar1;
    goto LAB_109e08a9c;
  }
  if ((int)param_1[2] == 0) {
    uVar4 = 3;
    goto LAB_109e08a88;
  }
LAB_109e08a8c:
  cVar3 = '\0';
  *param_1 = 0x1137e7cb0;
  param_1[1] = 0x1137e7cb0;
LAB_109e08a9c:
  return (int)cVar3;
}



/* Entry: 109e08b18; end: 109e08b7f;  */

void FUN_109e08b18(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  
  if ((long)param_1[4] < (long)param_2) {
    if (param_2 >> 0x3d == 0) {
      lVar1 = param_1[3];
      _realloc(lVar1,param_2 << 3);
      if (lVar1 != 0) {
        param_1[3] = lVar1;
        param_1[4] = param_2;
        return;
      }
    }
    if (*(int *)(param_1 + 2) == 0) {
      *(undefined4 *)(param_1 + 2) = 0xc;
    }
    *param_1 = 0x1137e7cb0;
    param_1[1] = 0x1137e7cb0;
  }
  return;
}



/* Entry: 109e08b80; end: 109e08ce3;  */

undefined * FUN_109e08b80(uint param_1,int **param_2,int **param_3,int **param_4,undefined8 param_5)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  int **ppiVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int **ppiVar14;
  int **ppiVar15;
  undefined *puVar16;
  int **ppiVar17;
  undefined8 uVar18;
  int iVar19;
  uint *puVar20;
  int **ppiVar21;
  uint uVar22;
  ulong uVar23;
  undefined *puVar24;
  int **ppiVar25;
  int **ppiVar26;
  char *pcVar27;
  undefined **ppuVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  uint uVar32;
  int *piVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  int *piStack_168;
  undefined4 uStack_160;
  long *plStack_158;
  int **ppiStack_150;
  int **ppiStack_148;
  int **ppiStack_140;
  int **ppiStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  int *apiStack_7a [6];
  undefined1 uStack_49;
  long lStack_48;
  
  uVar22 = (uint)param_5;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppiVar15 = param_3;
  ppiVar17 = param_4;
  if (param_1 == 0xff) {
    ppiVar26 = (int **)param_2[2];
    iVar19 = 0xf602a5b;
    param_2 = ppiVar26;
    _strcmp();
    uVar22 = (uint)param_5;
    if (iVar19 != 0) {
      ppiVar21 = (int **)&UNK_10f602cda;
      ppuVar28 = &PTR_DAT_110b5cef0;
      do {
        uVar22 = (uint)param_5;
        if (*(int *)(ppuVar28 + -1) == 0) goto LAB_109e08c80;
        iVar19 = (int)*ppuVar28;
        param_2 = ppiVar26;
        _strcmp();
        uVar22 = (uint)param_5;
        ppuVar28 = ppuVar28 + 3;
      } while (iVar19 != 0);
    }
    ppiVar15 = (int **)&UNK_10f602cdc;
  }
  else {
    puVar2 = (uint *)&UNK_110b5ced0;
    do {
      puVar20 = puVar2;
      uVar32 = *puVar20;
      puVar2 = puVar20 + 6;
    } while (uVar32 != 0 && uVar32 != (param_1 & 0xfffffeff));
    if ((param_1 >> 8 & 1) == 0) {
      ppiVar21 = *(int ***)(puVar20 + 4);
      goto LAB_109e08c80;
    }
    if (uVar32 != 0) {
      lVar29 = 0;
      lVar34 = *(long *)(puVar20 + 2);
      do {
        if (lVar29 == 0x31) {
          ppiVar21 = apiStack_7a;
          uStack_49 = 0;
          break;
        }
        cVar1 = *(char *)(lVar34 + lVar29);
        ppiVar21 = apiStack_7a;
        *(char *)((long)ppiVar21 + lVar29) = cVar1;
        lVar29 = lVar29 + 1;
      } while (cVar1 != '\0');
      goto LAB_109e08c80;
    }
    ppiVar15 = (int **)&UNK_10f602a52;
  }
  ppiVar21 = apiStack_7a;
  param_2 = (int **)0x32;
  _snprintf(apiStack_7a);
LAB_109e08c80:
  ppiVar26 = ppiVar21;
  _strlen();
  ppiVar4 = ppiVar26;
  if (param_4 != (int **)0x0) {
    func_0x000109e0ba40();
    ppiVar4 = param_3;
    param_2 = ppiVar21;
    ppiVar15 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined *)((long)ppiVar26 + 1);
  }
  ___stack_chk_fail();
  if (((*(int *)ppiVar4 != 0xf265) || (piVar33 = ppiVar4[3], *piVar33 != 0xd245)) ||
     ((*(byte *)(piVar33 + 0x12) >> 2 & 1) != 0)) {
    return (undefined *)0x2;
  }
  lVar29 = *(long *)(piVar33 + 0xc);
  piStack_168 = piVar33;
  ppiStack_150 = param_2;
  if (lVar29 < 0x41) {
    lVar29 = *(long *)(piVar33 + 0xe);
    uVar30 = *(ulong *)(piVar33 + 0x10);
    if ((*(byte *)(piVar33 + 10) & 4) != 0) {
      ppiVar15 = (int **)0x0;
    }
    if ((uVar22 >> 2 & 1) == 0) {
      ppiVar26 = param_2;
      _strlen();
      ppiVar21 = param_2;
    }
    else {
      ppiVar26 = (int **)ppiVar17[1];
      ppiVar21 = (int **)((long)param_2 + (long)*ppiVar17);
    }
    ppiVar4 = (int **)((long)param_2 + (long)ppiVar26);
    if (ppiVar21 <= ppiVar4) {
      pcVar27 = *(char **)(piVar33 + 0x18);
      if (pcVar27 != (char *)0x0) {
        ppiVar14 = ppiVar21;
        if (ppiVar21 < ppiVar4) {
          cVar1 = *pcVar27;
          lVar39 = ((long)ppiVar26 + (long)param_2) - (long)ppiVar21;
          lVar34 = (long)((long)ppiVar26 + (long)param_2) - (long)ppiVar21;
          ppiVar25 = ppiVar21;
          do {
            if (((*(char *)ppiVar25 == cVar1) && (piVar33[0x1a] <= lVar34)) &&
               (ppiVar10 = ppiVar25, _memcmp(ppiVar25,pcVar27), ppiVar14 = ppiVar25,
               (int)ppiVar10 == 0)) break;
            ppiVar25 = (int **)((long)ppiVar25 + 1);
            lVar34 = lVar34 + -1;
            lVar39 = lVar39 + -1;
            ppiVar14 = (int **)((long)ppiVar26 + (long)param_2);
          } while (lVar39 != 0);
        }
        if (ppiVar14 == ppiVar4) {
          return (undefined *)0x1;
        }
      }
      uStack_160 = uVar22 & 7;
      uVar36 = lVar29 + 1;
      plStack_130 = (long *)0x0;
      plStack_158 = (long *)0x0;
      lVar29 = 1L << (uVar36 & 0x3f);
      lStack_118 = 0;
      lStack_120 = 0;
      lStack_108 = 0;
      lStack_110 = 0;
      ppiStack_148 = ppiVar21;
      ppiStack_140 = ppiVar4;
LAB_109e08ea4:
      piVar8 = piStack_168;
      if (ppiStack_148 == ppiVar21) {
        uVar23 = 0x80;
      }
      else {
        uVar23 = (ulong)*(byte *)((long)ppiVar21 + -1);
      }
      piVar5 = piStack_168;
      FUN_109e0a71c(piStack_168,uVar36,uVar30,lVar29,0x84,lVar29);
      ppiVar26 = (int **)0x0;
      piVar9 = piVar5;
      do {
        if (ppiVar21 == ppiStack_140) {
          uVar35 = 0x80;
        }
        else {
          uVar35 = (ulong)*(char *)ppiVar21;
        }
        ppiVar14 = ppiVar21;
        if (piVar9 != piVar5) {
          ppiVar14 = ppiVar26;
        }
        uVar22 = (uint)uVar23;
        if (uVar22 == 0x80) {
          if ((uStack_160 & 1) == 0) goto LAB_109e08f3c;
LAB_109e08f24:
          iVar38 = 0;
          iVar19 = 0;
          iVar37 = 0x82;
        }
        else {
          if ((uVar22 != 10) || ((*(byte *)(piVar8 + 10) >> 3 & 1) == 0)) goto LAB_109e08f24;
LAB_109e08f3c:
          iVar19 = piVar8[0x13];
          iVar38 = 0x81;
          iVar37 = 0x83;
        }
        uVar32 = (uint)uVar35;
        if (uVar32 == 0x80) {
          if (((byte)uStack_160 >> 1 & 1) == 0) goto LAB_109e08f70;
        }
        else if ((uVar32 == 10) && ((*(byte *)(piVar8 + 10) >> 3 & 1) != 0)) {
LAB_109e08f70:
          iVar19 = piVar8[0x14] + iVar19;
          iVar38 = iVar37;
        }
        piVar6 = piVar9;
        if (0 < iVar19) {
          uVar3 = iVar19 + 1;
          do {
            piVar6 = piVar8;
            FUN_109e0a71c(piVar8,uVar36,uVar30,piVar9,iVar38,piVar9);
            uVar3 = uVar3 - 1;
            piVar9 = piVar6;
          } while (1 < uVar3);
        }
        if (iVar38 == 0x81) {
          if (uVar32 == 0x80) {
            iVar19 = 0x81;
          }
          else {
LAB_109e09028:
            uVar23 = (ulong)(uVar32 & 0xff);
            if ((uVar32 & 0xff) < 0x80) {
              uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar23 * 4 + 0x3c) & 0x500;
            }
            else {
              ___maskrune(uVar23,0x500);
              uVar3 = (uint)uVar23;
            }
            iVar19 = 0x85;
            if (uVar32 != 0x5f && uVar3 == 0) {
              iVar19 = iVar38;
            }
          }
          iVar38 = iVar19;
          if (uVar22 == 0x80) goto LAB_109e090b4;
          uVar23 = (ulong)(uVar22 & 0xff);
LAB_109e09074:
          if ((uint)uVar23 < 0x80) {
            uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar23 * 4 + 0x3c) & 0x500;
          }
          else {
            ___maskrune(uVar23,0x500);
            uVar3 = (uint)uVar23;
          }
          if ((uVar3 == 0) && (uVar22 != 0x5f)) goto LAB_109e090b4;
          if (iVar38 != 0x82) {
            if (uVar32 != 0x80) {
              uVar23 = (ulong)(uVar32 & 0xff);
              if ((uVar32 & 0xff) < 0x80) {
                uVar22 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar23 * 4 + 0x3c) & 0x500;
              }
              else {
                ___maskrune(uVar23,0x500);
                uVar22 = (uint)uVar23;
              }
              if ((uVar22 == 0) && (uVar32 != 0x5f)) goto LAB_109e090d8;
            }
            goto LAB_109e090b4;
          }
LAB_109e090d8:
          uVar18 = 0x86;
LAB_109e090dc:
          piVar8 = piStack_168;
          FUN_109e0a71c(piStack_168,uVar36,uVar30,piVar6,uVar18,piVar6);
          piVar6 = piVar8;
        }
        else {
          if (uVar22 != 0x80) {
            uVar23 = (ulong)(uVar22 & 0xff);
            if ((uVar22 & 0xff) < 0x80) {
              uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar23 * 4 + 0x3c) & 0x500;
            }
            else {
              uVar7 = uVar23;
              ___maskrune(uVar23,0x500);
              uVar3 = (uint)uVar7;
            }
            if (((uVar3 == 0) && (uVar22 != 0x5f)) && (uVar32 != 0x80)) goto LAB_109e09028;
            goto LAB_109e09074;
          }
LAB_109e090b4:
          if (iVar38 - 0x85U < 2) {
            uVar18 = 0x85;
            goto LAB_109e090dc;
          }
        }
        piVar8 = piStack_168;
        uVar23 = (ulong)piVar6 & 1L << (uVar30 & 0x3f);
        if ((ppiVar21 == ppiVar4) || (uVar23 != 0)) goto LAB_109e09188;
        piVar9 = piStack_168;
        FUN_109e0a71c(piStack_168,uVar36,uVar30,piVar6,uVar35,piVar5);
        ppiVar21 = (int **)((long)ppiVar21 + 1);
        uVar23 = uVar35;
        ppiVar26 = ppiVar14;
      } while( true );
    }
  }
  else {
    lVar34 = *(long *)(piVar33 + 0xe);
    lVar39 = *(long *)(piVar33 + 0x10);
    if ((*(byte *)(piVar33 + 10) & 4) != 0) {
      ppiVar15 = (int **)0x0;
    }
    if ((uVar22 >> 2 & 1) == 0) {
      ppiVar26 = param_2;
      _strlen();
      ppiVar21 = param_2;
    }
    else {
      ppiVar26 = (int **)ppiVar17[1];
      ppiVar21 = (int **)((long)param_2 + (long)*ppiVar17);
    }
    ppiVar4 = (int **)((long)param_2 + (long)ppiVar26);
    if (ppiVar21 <= ppiVar4) {
      pcVar27 = *(char **)(piVar33 + 0x18);
      if (pcVar27 != (char *)0x0) {
        ppiVar14 = ppiVar21;
        if (ppiVar21 < ppiVar4) {
          cVar1 = *pcVar27;
          lVar40 = ((long)ppiVar26 + (long)param_2) - (long)ppiVar21;
          lVar31 = (long)((long)ppiVar26 + (long)param_2) - (long)ppiVar21;
          ppiVar25 = ppiVar21;
          do {
            if (((*(char *)ppiVar25 == cVar1) && (piVar33[0x1a] <= lVar31)) &&
               (ppiVar10 = ppiVar25, _memcmp(ppiVar25,pcVar27), ppiVar14 = ppiVar25,
               (int)ppiVar10 == 0)) break;
            ppiVar25 = (int **)((long)ppiVar25 + 1);
            lVar31 = lVar31 + -1;
            lVar40 = lVar40 + -1;
            ppiVar14 = (int **)((long)ppiVar26 + (long)param_2);
          } while (lVar40 != 0);
        }
        if (ppiVar14 == ppiVar4) {
          return (undefined *)0x1;
        }
      }
      uStack_160 = uVar22 & 7;
      plStack_130 = (long *)0x0;
      plStack_158 = (long *)0x0;
      lVar31 = lVar29 << 2;
      ppiStack_148 = ppiVar21;
      ppiStack_140 = ppiVar4;
      _malloc();
      if (lVar31 == 0) {
        return (undefined *)0xc;
      }
      lVar34 = lVar34 + 1;
      lStack_110 = lVar31 + lVar29;
      lStack_108 = lVar31 + lVar29 * 2;
      uStack_128 = 4;
      lStack_100 = lVar31 + lVar29 * 3;
      lStack_120 = lVar31;
      lStack_118 = lVar31;
      _bzero(lStack_100,lVar29);
LAB_109e094a4:
      lVar40 = lStack_108;
      lVar31 = lStack_110;
      lVar29 = lStack_118;
      if (ppiStack_148 == ppiVar21) {
        uVar30 = 0x80;
      }
      else {
        uVar30 = (ulong)*(byte *)((long)ppiVar21 + -1);
      }
      _bzero(lStack_118,*(undefined8 *)(piStack_168 + 0xc));
      *(undefined1 *)(lVar29 + lVar34) = 1;
      FUN_109e0b6e8(piStack_168,lVar34,lVar39,lVar29,0x84,lVar29);
      _memmove(lVar31,lVar29,*(undefined8 *)(piStack_168 + 0xc));
      ppiVar26 = (int **)0x0;
      do {
        piVar8 = piStack_168;
        if (ppiVar21 == ppiStack_140) {
          uVar36 = 0x80;
        }
        else {
          uVar36 = (ulong)*(char *)ppiVar21;
        }
        lVar11 = lVar29;
        _memcmp(lVar29,lVar31,*(undefined8 *)(piStack_168 + 0xc));
        ppiVar14 = ppiVar21;
        if ((int)lVar11 != 0) {
          ppiVar14 = ppiVar26;
        }
        uVar22 = (uint)uVar30;
        if (uVar22 == 0x80) {
          if ((uStack_160 & 1) == 0) goto LAB_109e09578;
LAB_109e09560:
          iVar38 = 0;
          iVar19 = 0;
          iVar37 = 0x82;
        }
        else {
          if ((uVar22 != 10) || ((*(byte *)(piVar8 + 10) >> 3 & 1) == 0)) goto LAB_109e09560;
LAB_109e09578:
          iVar19 = piVar8[0x13];
          iVar38 = 0x81;
          iVar37 = 0x83;
        }
        uVar32 = (uint)uVar36;
        if (uVar32 == 0x80) {
          if (((byte)uStack_160 >> 1 & 1) == 0) goto LAB_109e095ac;
        }
        else if ((uVar32 == 10) && ((*(byte *)(piVar8 + 10) >> 3 & 1) != 0)) {
LAB_109e095ac:
          iVar19 = piVar8[0x14] + iVar19;
          iVar38 = iVar37;
        }
        if (0 < iVar19) {
          uVar3 = iVar19 + 1;
          do {
            FUN_109e0b6e8(piStack_168,lVar34,lVar39,lVar29,iVar38,lVar29);
            uVar3 = uVar3 - 1;
          } while (1 < uVar3);
        }
        if (iVar38 == 0x81) {
          if (uVar32 == 0x80) {
            iVar19 = 0x81;
          }
          else {
LAB_109e09654:
            uVar30 = (ulong)(uVar32 & 0xff);
            if ((uVar32 & 0xff) < 0x80) {
              uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar30 * 4 + 0x3c) & 0x500;
            }
            else {
              ___maskrune(uVar30,0x500);
              uVar3 = (uint)uVar30;
            }
            iVar19 = 0x85;
            if (uVar32 != 0x5f && uVar3 == 0) {
              iVar19 = iVar38;
            }
          }
          iVar38 = iVar19;
          if (uVar22 == 0x80) goto LAB_109e096e0;
          uVar30 = (ulong)(uVar22 & 0xff);
LAB_109e096a0:
          if ((uint)uVar30 < 0x80) {
            uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar30 * 4 + 0x3c) & 0x500;
          }
          else {
            ___maskrune(uVar30,0x500);
            uVar3 = (uint)uVar30;
          }
          if ((uVar3 == 0) && (uVar22 != 0x5f)) goto LAB_109e096e0;
          if (iVar38 != 0x82) {
            if (uVar32 != 0x80) {
              uVar30 = (ulong)(uVar32 & 0xff);
              if ((uVar32 & 0xff) < 0x80) {
                uVar22 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar30 * 4 + 0x3c) & 0x500;
              }
              else {
                ___maskrune(uVar30,0x500);
                uVar22 = (uint)uVar30;
              }
              if ((uVar22 == 0) && (uVar32 != 0x5f)) goto LAB_109e09700;
            }
            goto LAB_109e096e0;
          }
LAB_109e09700:
          uVar18 = 0x86;
LAB_109e09708:
          FUN_109e0b6e8(piStack_168,lVar34,lVar39,lVar29,uVar18,lVar29);
        }
        else {
          if (uVar22 != 0x80) {
            uVar30 = (ulong)(uVar22 & 0xff);
            if ((uVar22 & 0xff) < 0x80) {
              uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar30 * 4 + 0x3c) & 0x500;
            }
            else {
              uVar23 = uVar30;
              ___maskrune(uVar30,0x500);
              uVar3 = (uint)uVar23;
            }
            if (((uVar3 == 0) && (uVar22 != 0x5f)) && (uVar32 != 0x80)) goto LAB_109e09654;
            goto LAB_109e096a0;
          }
LAB_109e096e0:
          if (iVar38 - 0x85U < 2) {
            uVar18 = 0x85;
            goto LAB_109e09708;
          }
        }
        if ((ppiVar21 == ppiVar4) || (*(char *)(lVar29 + lVar39) != '\0')) goto LAB_109e097cc;
        _memmove(lVar40,lVar29,*(undefined8 *)(piStack_168 + 0xc));
        _memmove(lVar29,lVar31,*(undefined8 *)(piStack_168 + 0xc));
        FUN_109e0b6e8(piStack_168,lVar34,lVar39,lVar40,uVar36,lVar29);
        ppiVar21 = (int **)((long)ppiVar21 + 1);
        uVar30 = uVar36;
        ppiVar26 = ppiVar14;
      } while( true );
    }
  }
  return (undefined *)0x10;
LAB_109e097cc:
  ppiStack_138 = ppiVar14;
  if (*(char *)(lVar29 + lVar39) == '\0') {
    _free(plStack_158);
    puVar16 = (undefined *)0x1;
    plVar12 = plStack_130;
    goto LAB_109e099c0;
  }
  if ((ppiVar15 == (int **)0x0) && (piVar33[0x1e] == 0)) goto LAB_109e099a4;
  while( true ) {
    ppiVar26 = &piStack_168;
    ppiStack_138 = ppiVar14;
    FUN_109e0a9a8(ppiVar26,ppiVar14,ppiVar4,lVar34,lVar39);
    if (ppiVar26 != (int **)0x0) break;
    ppiVar14 = (int **)((long)ppiStack_138 + 1);
  }
  if ((ppiVar15 == (int **)0x1) && (piVar33[0x1e] == 0)) goto LAB_109e09938;
  lVar29 = *(long *)(piStack_168 + 0x1c);
  if (plStack_158 == (long *)0x0) {
    plVar12 = (long *)(lVar29 * 0x10 + 0x10);
    _malloc();
    plStack_158 = plVar12;
    if (plVar12 == (long *)0x0) {
      puVar24 = (undefined *)0xc;
      goto LAB_109e099cc;
    }
  }
  plVar12 = plStack_158;
  if (lVar29 != 0) {
    lVar31 = 2;
    if (2 < lVar29 + 1U) {
      lVar31 = lVar29 + 1;
    }
    _memset(plStack_158 + 2,0xff,lVar31 * 0x10 + -0x10);
  }
  if ((piVar33[0x1e] != 0) || ((uStack_160._1_1_ >> 2 & 1) != 0)) {
    lVar29 = *(long *)(piVar33 + 0x20);
    if ((0 < lVar29) && (plStack_130 == (long *)0x0)) {
      plVar13 = (long *)(lVar29 * 8 + 8);
      _malloc();
      plStack_130 = plVar13;
    }
    if (lVar29 < 1) goto LAB_109e098dc;
    if (plStack_130 != (long *)0x0) goto LAB_109e098dc;
    puVar16 = (undefined *)0xc;
    goto LAB_109e099c0;
  }
  ppiVar21 = &piStack_168;
  func_0x000109e0ada4(ppiVar21,ppiStack_138,ppiVar26,lVar34,lVar39);
  while( true ) {
    if (ppiVar21 != (int **)0x0) goto LAB_109e09934;
    if (ppiVar26 <= ppiStack_138) break;
    puVar16 = (undefined *)((long)ppiVar26 + -1);
    ppiVar26 = &piStack_168;
    FUN_109e0a9a8(ppiVar26,ppiStack_138,puVar16,lVar34,lVar39);
    if (ppiVar26 == (int **)0x0) break;
LAB_109e098dc:
    ppiVar21 = &piStack_168;
    func_0x000109e0b17c(ppiVar21,ppiStack_138,ppiVar26,lVar34,lVar39,0,0);
  }
  ppiVar21 = (int **)((long)ppiStack_138 + 1);
  if (ppiStack_138 == ppiVar4) {
LAB_109e09934:
    if (ppiVar15 != (int **)0x0) {
LAB_109e09938:
      *ppiVar17 = (int *)((long)ppiStack_138 - (long)ppiStack_150);
      ppiVar17[1] = (int *)((long)ppiVar26 - (long)ppiStack_150);
      if ((int **)0x1 < ppiVar15) {
        ppiVar21 = (int **)0x1;
        plVar12 = plStack_158;
        do {
          ppiVar26 = ppiVar17 + 2;
          if (*(int ***)(piStack_168 + 0x1c) < ppiVar21) {
            *ppiVar26 = (int *)0xffffffffffffffff;
            ppiVar17[3] = (int *)0xffffffffffffffff;
          }
          else {
            piVar33 = (int *)plVar12[2];
            ppiVar17[3] = (int *)plVar12[3];
            *ppiVar26 = piVar33;
          }
          ppiVar21 = (int **)((long)ppiVar21 + 1);
          plVar12 = plVar12 + 2;
          ppiVar17 = ppiVar26;
        } while (ppiVar15 != ppiVar21);
      }
    }
LAB_109e099a4:
    if (plStack_158 != (long *)0x0) {
      _free();
    }
    puVar24 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    plVar12 = plStack_130;
    if (plStack_130 != (long *)0x0) {
LAB_109e099c0:
      puVar24 = puVar16;
      _free(plVar12);
    }
LAB_109e099cc:
    _free(lStack_120);
    return puVar24;
  }
  goto LAB_109e094a4;
LAB_109e09188:
  ppiStack_138 = ppiVar14;
  if (uVar23 == 0) {
    _free(plStack_158);
    puVar16 = (undefined *)0x1;
    plVar12 = plStack_130;
    goto LAB_109e0937c;
  }
  if ((ppiVar15 == (int **)0x0) && (piVar33[0x1e] == 0)) goto LAB_109e09360;
  while( true ) {
    ppiVar26 = &piStack_168;
    ppiStack_138 = ppiVar14;
    func_0x000109e09a28(ppiVar26,ppiVar14,ppiVar4,uVar36,uVar30);
    if (ppiVar26 != (int **)0x0) break;
    ppiVar14 = (int **)((long)ppiStack_138 + 1);
  }
  if ((ppiVar15 == (int **)0x1) && (piVar33[0x1e] == 0)) goto LAB_109e092f4;
  lVar34 = *(long *)(piStack_168 + 0x1c);
  if (plStack_158 == (long *)0x0) {
    plVar12 = (long *)(lVar34 * 0x10 + 0x10);
    _malloc();
    plStack_158 = plVar12;
    if (plVar12 == (long *)0x0) {
      return (undefined *)0xc;
    }
  }
  plVar12 = plStack_158;
  if (lVar34 != 0) {
    lVar39 = 2;
    if (2 < lVar34 + 1U) {
      lVar39 = lVar34 + 1;
    }
    _memset(plStack_158 + 2,0xff,lVar39 * 0x10 + -0x10);
  }
  if ((piVar33[0x1e] != 0) || ((uStack_160._1_1_ >> 2 & 1) != 0)) {
    lVar34 = *(long *)(piVar33 + 0x20);
    if ((0 < lVar34) && (plStack_130 == (long *)0x0)) {
      plVar13 = (long *)(lVar34 * 8 + 8);
      _malloc();
      plStack_130 = plVar13;
    }
    if (lVar34 < 1) goto LAB_109e09298;
    if (plStack_130 != (long *)0x0) goto LAB_109e09298;
    puVar16 = (undefined *)0xc;
    goto LAB_109e0937c;
  }
  ppiVar21 = &piStack_168;
  func_0x000109e09dd8(ppiVar21,ppiStack_138,ppiVar26,uVar36,uVar30);
  while( true ) {
    if (ppiVar21 != (int **)0x0) goto LAB_109e092f0;
    if (ppiVar26 <= ppiStack_138) break;
    puVar16 = (undefined *)((long)ppiVar26 + -1);
    ppiVar26 = &piStack_168;
    func_0x000109e09a28(ppiVar26,ppiStack_138,puVar16,uVar36,uVar30);
    if (ppiVar26 == (int **)0x0) break;
LAB_109e09298:
    ppiVar21 = &piStack_168;
    func_0x000109e0a1b0(ppiVar21,ppiStack_138,ppiVar26,uVar36,uVar30,0,0);
  }
  ppiVar21 = (int **)((long)ppiStack_138 + 1);
  if (ppiStack_138 == ppiVar4) {
LAB_109e092f0:
    if (ppiVar15 != (int **)0x0) {
LAB_109e092f4:
      *ppiVar17 = (int *)((long)ppiStack_138 - (long)ppiStack_150);
      ppiVar17[1] = (int *)((long)ppiVar26 - (long)ppiStack_150);
      if ((int **)0x1 < ppiVar15) {
        ppiVar21 = (int **)0x1;
        plVar12 = plStack_158;
        do {
          ppiVar26 = ppiVar17 + 2;
          if (*(int ***)(piStack_168 + 0x1c) < ppiVar21) {
            *ppiVar26 = (int *)0xffffffffffffffff;
            ppiVar17[3] = (int *)0xffffffffffffffff;
          }
          else {
            piVar33 = (int *)plVar12[2];
            ppiVar17[3] = (int *)plVar12[3];
            *ppiVar26 = piVar33;
          }
          ppiVar21 = (int **)((long)ppiVar21 + 1);
          plVar12 = plVar12 + 2;
          ppiVar17 = ppiVar26;
        } while (ppiVar15 != ppiVar21);
      }
    }
LAB_109e09360:
    if (plStack_158 != (long *)0x0) {
      _free();
    }
    puVar24 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    plVar12 = plStack_130;
    if (plStack_130 != (long *)0x0) {
LAB_109e0937c:
      puVar24 = puVar16;
      _free(plVar12);
    }
    return puVar24;
  }
  goto LAB_109e08ea4;
}



/* Entry: 109e08ce4; end: 109e0a71b;  */

undefined8 FUN_109e08ce4(int *param_1,int **param_2,ulong param_3,long *param_4,uint param_5)

{
  int **ppiVar1;
  char cVar2;
  uint uVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  int **ppiVar10;
  long lVar11;
  long *plVar12;
  int **ppiVar13;
  long *plVar14;
  int **ppiVar15;
  undefined8 uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  int **ppiVar22;
  char *pcVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  int *piVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  int *piStack_d8;
  undefined4 uStack_d0;
  long *plStack_c8;
  int **ppiStack_c0;
  int **ppiStack_b8;
  int **ppiStack_b0;
  int **ppiStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if (((*param_1 != 0xf265) || (piVar27 = *(int **)(param_1 + 6), *piVar27 != 0xd245)) ||
     ((*(byte *)(piVar27 + 0x12) >> 2 & 1) != 0)) {
    return 2;
  }
  lVar24 = *(long *)(piVar27 + 0xc);
  piStack_d8 = piVar27;
  ppiStack_c0 = param_2;
  if (lVar24 < 0x41) {
    lVar24 = *(long *)(piVar27 + 0xe);
    uVar18 = *(ulong *)(piVar27 + 0x10);
    if ((*(byte *)(piVar27 + 10) & 4) != 0) {
      param_3 = 0;
    }
    if ((param_5 >> 2 & 1) == 0) {
      ppiVar4 = param_2;
      _strlen();
      ppiVar13 = param_2;
    }
    else {
      ppiVar4 = (int **)param_4[1];
      ppiVar13 = (int **)((long)param_2 + *param_4);
    }
    ppiVar1 = (int **)((long)param_2 + (long)ppiVar4);
    if (ppiVar13 <= ppiVar1) {
      pcVar23 = *(char **)(piVar27 + 0x18);
      if (pcVar23 != (char *)0x0) {
        ppiVar15 = ppiVar13;
        if (ppiVar13 < ppiVar1) {
          cVar2 = *pcVar23;
          lVar33 = ((long)ppiVar4 + (long)param_2) - (long)ppiVar13;
          lVar28 = (long)((long)ppiVar4 + (long)param_2) - (long)ppiVar13;
          ppiVar22 = ppiVar13;
          do {
            if (((*(char *)ppiVar22 == cVar2) && (piVar27[0x1a] <= lVar28)) &&
               (ppiVar10 = ppiVar22, _memcmp(ppiVar22,pcVar23), ppiVar15 = ppiVar22,
               (int)ppiVar10 == 0)) break;
            ppiVar22 = (int **)((long)ppiVar22 + 1);
            lVar28 = lVar28 + -1;
            lVar33 = lVar33 + -1;
            ppiVar15 = (int **)((long)ppiVar4 + (long)param_2);
          } while (lVar33 != 0);
        }
        if (ppiVar15 == ppiVar1) {
          return 1;
        }
      }
      uStack_d0 = param_5 & 7;
      uVar30 = lVar24 + 1;
      plStack_a0 = (long *)0x0;
      plStack_c8 = (long *)0x0;
      lVar24 = 1L << (uVar30 & 0x3f);
      lStack_88 = 0;
      lStack_90 = 0;
      lStack_78 = 0;
      lStack_80 = 0;
      ppiStack_b8 = ppiVar13;
      ppiStack_b0 = ppiVar1;
LAB_109e08ea4:
      piVar8 = piStack_d8;
      if (ppiStack_b8 == ppiVar13) {
        uVar20 = 0x80;
      }
      else {
        uVar20 = (ulong)*(byte *)((long)ppiVar13 - 1);
      }
      piVar5 = piStack_d8;
      FUN_109e0a71c(piStack_d8,uVar30,uVar18,lVar24,0x84,lVar24);
      ppiVar4 = (int **)0x0;
      piVar9 = piVar5;
      do {
        if (ppiVar13 == ppiStack_b0) {
          uVar29 = 0x80;
        }
        else {
          uVar29 = (ulong)*(char *)ppiVar13;
        }
        ppiVar15 = ppiVar13;
        if (piVar9 != piVar5) {
          ppiVar15 = ppiVar4;
        }
        uVar19 = (uint)uVar20;
        if (uVar19 == 0x80) {
          if ((uStack_d0 & 1) == 0) goto LAB_109e08f3c;
LAB_109e08f24:
          iVar32 = 0;
          iVar17 = 0;
          iVar31 = 0x82;
        }
        else {
          if ((uVar19 != 10) || ((*(byte *)(piVar8 + 10) >> 3 & 1) == 0)) goto LAB_109e08f24;
LAB_109e08f3c:
          iVar17 = piVar8[0x13];
          iVar32 = 0x81;
          iVar31 = 0x83;
        }
        uVar26 = (uint)uVar29;
        if (uVar26 == 0x80) {
          if (((byte)uStack_d0 >> 1 & 1) == 0) goto LAB_109e08f70;
        }
        else if ((uVar26 == 10) && ((*(byte *)(piVar8 + 10) >> 3 & 1) != 0)) {
LAB_109e08f70:
          iVar17 = piVar8[0x14] + iVar17;
          iVar32 = iVar31;
        }
        piVar6 = piVar9;
        if (0 < iVar17) {
          uVar3 = iVar17 + 1;
          do {
            piVar6 = piVar8;
            FUN_109e0a71c(piVar8,uVar30,uVar18,piVar9,iVar32,piVar9);
            uVar3 = uVar3 - 1;
            piVar9 = piVar6;
          } while (1 < uVar3);
        }
        if (iVar32 == 0x81) {
          if (uVar26 == 0x80) {
            iVar17 = 0x81;
          }
          else {
LAB_109e09028:
            uVar20 = (ulong)(uVar26 & 0xff);
            if ((uVar26 & 0xff) < 0x80) {
              uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar20 * 4 + 0x3c) & 0x500;
            }
            else {
              ___maskrune(uVar20,0x500);
              uVar3 = (uint)uVar20;
            }
            iVar17 = 0x85;
            if (uVar26 != 0x5f && uVar3 == 0) {
              iVar17 = iVar32;
            }
          }
          iVar32 = iVar17;
          if (uVar19 == 0x80) goto LAB_109e090b4;
          uVar20 = (ulong)(uVar19 & 0xff);
LAB_109e09074:
          if ((uint)uVar20 < 0x80) {
            uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar20 * 4 + 0x3c) & 0x500;
          }
          else {
            ___maskrune(uVar20,0x500);
            uVar3 = (uint)uVar20;
          }
          if ((uVar3 == 0) && (uVar19 != 0x5f)) goto LAB_109e090b4;
          if (iVar32 != 0x82) {
            if (uVar26 != 0x80) {
              uVar20 = (ulong)(uVar26 & 0xff);
              if ((uVar26 & 0xff) < 0x80) {
                uVar19 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar20 * 4 + 0x3c) & 0x500;
              }
              else {
                ___maskrune(uVar20,0x500);
                uVar19 = (uint)uVar20;
              }
              if ((uVar19 == 0) && (uVar26 != 0x5f)) goto LAB_109e090d8;
            }
            goto LAB_109e090b4;
          }
LAB_109e090d8:
          uVar16 = 0x86;
LAB_109e090dc:
          piVar8 = piStack_d8;
          FUN_109e0a71c(piStack_d8,uVar30,uVar18,piVar6,uVar16,piVar6);
          piVar6 = piVar8;
        }
        else {
          if (uVar19 != 0x80) {
            uVar20 = (ulong)(uVar19 & 0xff);
            if ((uVar19 & 0xff) < 0x80) {
              uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar20 * 4 + 0x3c) & 0x500;
            }
            else {
              uVar7 = uVar20;
              ___maskrune(uVar20,0x500);
              uVar3 = (uint)uVar7;
            }
            if (((uVar3 == 0) && (uVar19 != 0x5f)) && (uVar26 != 0x80)) goto LAB_109e09028;
            goto LAB_109e09074;
          }
LAB_109e090b4:
          if (iVar32 - 0x85U < 2) {
            uVar16 = 0x85;
            goto LAB_109e090dc;
          }
        }
        piVar8 = piStack_d8;
        uVar20 = (ulong)piVar6 & 1L << (uVar18 & 0x3f);
        if ((ppiVar13 == ppiVar1) || (uVar20 != 0)) goto LAB_109e09188;
        piVar9 = piStack_d8;
        FUN_109e0a71c(piStack_d8,uVar30,uVar18,piVar6,uVar29,piVar5);
        ppiVar13 = (int **)((long)ppiVar13 + 1);
        uVar20 = uVar29;
        ppiVar4 = ppiVar15;
      } while( true );
    }
  }
  else {
    lVar28 = *(long *)(piVar27 + 0xe);
    lVar33 = *(long *)(piVar27 + 0x10);
    if ((*(byte *)(piVar27 + 10) & 4) != 0) {
      param_3 = 0;
    }
    if ((param_5 >> 2 & 1) == 0) {
      ppiVar4 = param_2;
      _strlen();
      ppiVar13 = param_2;
    }
    else {
      ppiVar4 = (int **)param_4[1];
      ppiVar13 = (int **)((long)param_2 + *param_4);
    }
    ppiVar1 = (int **)((long)param_2 + (long)ppiVar4);
    if (ppiVar13 <= ppiVar1) {
      pcVar23 = *(char **)(piVar27 + 0x18);
      if (pcVar23 != (char *)0x0) {
        ppiVar15 = ppiVar13;
        if (ppiVar13 < ppiVar1) {
          cVar2 = *pcVar23;
          lVar34 = ((long)ppiVar4 + (long)param_2) - (long)ppiVar13;
          lVar25 = (long)((long)ppiVar4 + (long)param_2) - (long)ppiVar13;
          ppiVar22 = ppiVar13;
          do {
            if (((*(char *)ppiVar22 == cVar2) && (piVar27[0x1a] <= lVar25)) &&
               (ppiVar10 = ppiVar22, _memcmp(ppiVar22,pcVar23), ppiVar15 = ppiVar22,
               (int)ppiVar10 == 0)) break;
            ppiVar22 = (int **)((long)ppiVar22 + 1);
            lVar25 = lVar25 + -1;
            lVar34 = lVar34 + -1;
            ppiVar15 = (int **)((long)ppiVar4 + (long)param_2);
          } while (lVar34 != 0);
        }
        if (ppiVar15 == ppiVar1) {
          return 1;
        }
      }
      uStack_d0 = param_5 & 7;
      plStack_a0 = (long *)0x0;
      plStack_c8 = (long *)0x0;
      lVar25 = lVar24 << 2;
      ppiStack_b8 = ppiVar13;
      ppiStack_b0 = ppiVar1;
      _malloc();
      if (lVar25 == 0) {
        return 0xc;
      }
      lVar28 = lVar28 + 1;
      lStack_80 = lVar25 + lVar24;
      lStack_78 = lVar25 + lVar24 * 2;
      uStack_98 = 4;
      lStack_70 = lVar25 + lVar24 * 3;
      lStack_90 = lVar25;
      lStack_88 = lVar25;
      _bzero(lStack_70,lVar24);
LAB_109e094a4:
      lVar34 = lStack_78;
      lVar25 = lStack_80;
      lVar24 = lStack_88;
      if (ppiStack_b8 == ppiVar13) {
        uVar18 = 0x80;
      }
      else {
        uVar18 = (ulong)*(byte *)((long)ppiVar13 - 1);
      }
      _bzero(lStack_88,*(undefined8 *)(piStack_d8 + 0xc));
      *(undefined1 *)(lVar24 + lVar28) = 1;
      FUN_109e0b6e8(piStack_d8,lVar28,lVar33,lVar24,0x84,lVar24);
      _memmove(lVar25,lVar24,*(undefined8 *)(piStack_d8 + 0xc));
      ppiVar4 = (int **)0x0;
      do {
        piVar8 = piStack_d8;
        if (ppiVar13 == ppiStack_b0) {
          uVar30 = 0x80;
        }
        else {
          uVar30 = (ulong)*(char *)ppiVar13;
        }
        lVar11 = lVar24;
        _memcmp(lVar24,lVar25,*(undefined8 *)(piStack_d8 + 0xc));
        ppiVar15 = ppiVar13;
        if ((int)lVar11 != 0) {
          ppiVar15 = ppiVar4;
        }
        uVar19 = (uint)uVar18;
        if (uVar19 == 0x80) {
          if ((uStack_d0 & 1) == 0) goto LAB_109e09578;
LAB_109e09560:
          iVar32 = 0;
          iVar17 = 0;
          iVar31 = 0x82;
        }
        else {
          if ((uVar19 != 10) || ((*(byte *)(piVar8 + 10) >> 3 & 1) == 0)) goto LAB_109e09560;
LAB_109e09578:
          iVar17 = piVar8[0x13];
          iVar32 = 0x81;
          iVar31 = 0x83;
        }
        uVar26 = (uint)uVar30;
        if (uVar26 == 0x80) {
          if (((byte)uStack_d0 >> 1 & 1) == 0) goto LAB_109e095ac;
        }
        else if ((uVar26 == 10) && ((*(byte *)(piVar8 + 10) >> 3 & 1) != 0)) {
LAB_109e095ac:
          iVar17 = piVar8[0x14] + iVar17;
          iVar32 = iVar31;
        }
        if (0 < iVar17) {
          uVar3 = iVar17 + 1;
          do {
            FUN_109e0b6e8(piStack_d8,lVar28,lVar33,lVar24,iVar32,lVar24);
            uVar3 = uVar3 - 1;
          } while (1 < uVar3);
        }
        if (iVar32 == 0x81) {
          if (uVar26 == 0x80) {
            iVar17 = 0x81;
          }
          else {
LAB_109e09654:
            uVar18 = (ulong)(uVar26 & 0xff);
            if ((uVar26 & 0xff) < 0x80) {
              uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar18 * 4 + 0x3c) & 0x500;
            }
            else {
              ___maskrune(uVar18,0x500);
              uVar3 = (uint)uVar18;
            }
            iVar17 = 0x85;
            if (uVar26 != 0x5f && uVar3 == 0) {
              iVar17 = iVar32;
            }
          }
          iVar32 = iVar17;
          if (uVar19 == 0x80) goto LAB_109e096e0;
          uVar18 = (ulong)(uVar19 & 0xff);
LAB_109e096a0:
          if ((uint)uVar18 < 0x80) {
            uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar18 * 4 + 0x3c) & 0x500;
          }
          else {
            ___maskrune(uVar18,0x500);
            uVar3 = (uint)uVar18;
          }
          if ((uVar3 == 0) && (uVar19 != 0x5f)) goto LAB_109e096e0;
          if (iVar32 != 0x82) {
            if (uVar26 != 0x80) {
              uVar18 = (ulong)(uVar26 & 0xff);
              if ((uVar26 & 0xff) < 0x80) {
                uVar19 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar18 * 4 + 0x3c) & 0x500;
              }
              else {
                ___maskrune(uVar18,0x500);
                uVar19 = (uint)uVar18;
              }
              if ((uVar19 == 0) && (uVar26 != 0x5f)) goto LAB_109e09700;
            }
            goto LAB_109e096e0;
          }
LAB_109e09700:
          uVar16 = 0x86;
LAB_109e09708:
          FUN_109e0b6e8(piStack_d8,lVar28,lVar33,lVar24,uVar16,lVar24);
        }
        else {
          if (uVar19 != 0x80) {
            uVar18 = (ulong)(uVar19 & 0xff);
            if ((uVar19 & 0xff) < 0x80) {
              uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar18 * 4 + 0x3c) & 0x500;
            }
            else {
              uVar20 = uVar18;
              ___maskrune(uVar18,0x500);
              uVar3 = (uint)uVar20;
            }
            if (((uVar3 == 0) && (uVar19 != 0x5f)) && (uVar26 != 0x80)) goto LAB_109e09654;
            goto LAB_109e096a0;
          }
LAB_109e096e0:
          if (iVar32 - 0x85U < 2) {
            uVar16 = 0x85;
            goto LAB_109e09708;
          }
        }
        if ((ppiVar13 == ppiVar1) || (*(char *)(lVar24 + lVar33) != '\0')) goto LAB_109e097cc;
        _memmove(lVar34,lVar24,*(undefined8 *)(piStack_d8 + 0xc));
        _memmove(lVar24,lVar25,*(undefined8 *)(piStack_d8 + 0xc));
        FUN_109e0b6e8(piStack_d8,lVar28,lVar33,lVar34,uVar30,lVar24);
        ppiVar13 = (int **)((long)ppiVar13 + 1);
        uVar18 = uVar30;
        ppiVar4 = ppiVar15;
      } while( true );
    }
  }
  return 0x10;
LAB_109e097cc:
  ppiStack_a8 = ppiVar15;
  if (*(char *)(lVar24 + lVar33) == '\0') {
    _free(plStack_c8);
    uVar16 = 1;
    plVar12 = plStack_a0;
    goto LAB_109e099c0;
  }
  if ((param_3 == 0) && (piVar27[0x1e] == 0)) goto LAB_109e099a4;
  while( true ) {
    ppiVar4 = &piStack_d8;
    ppiStack_a8 = ppiVar15;
    FUN_109e0a9a8(ppiVar4,ppiVar15,ppiVar1,lVar28,lVar33);
    if (ppiVar4 != (int **)0x0) break;
    ppiVar15 = (int **)((long)ppiStack_a8 + 1);
  }
  if ((param_3 == 1) && (piVar27[0x1e] == 0)) goto LAB_109e09938;
  lVar24 = *(long *)(piStack_d8 + 0x1c);
  if (plStack_c8 == (long *)0x0) {
    plVar12 = (long *)(lVar24 * 0x10 + 0x10);
    _malloc();
    plStack_c8 = plVar12;
    if (plVar12 == (long *)0x0) {
      uVar21 = 0xc;
      goto LAB_109e099cc;
    }
  }
  plVar12 = plStack_c8;
  if (lVar24 != 0) {
    lVar25 = 2;
    if (2 < lVar24 + 1U) {
      lVar25 = lVar24 + 1;
    }
    _memset(plStack_c8 + 2,0xff,lVar25 * 0x10 + -0x10);
  }
  if ((piVar27[0x1e] != 0) || ((uStack_d0._1_1_ >> 2 & 1) != 0)) {
    lVar24 = *(long *)(piVar27 + 0x20);
    if ((0 < lVar24) && (plStack_a0 == (long *)0x0)) {
      plVar14 = (long *)(lVar24 * 8 + 8);
      _malloc();
      plStack_a0 = plVar14;
    }
    if (lVar24 < 1) goto LAB_109e098dc;
    if (plStack_a0 != (long *)0x0) goto LAB_109e098dc;
    uVar16 = 0xc;
    goto LAB_109e099c0;
  }
  ppiVar13 = &piStack_d8;
  func_0x000109e0ada4(ppiVar13,ppiStack_a8,ppiVar4,lVar28,lVar33);
  while( true ) {
    if (ppiVar13 != (int **)0x0) goto LAB_109e09934;
    if (ppiVar4 <= ppiStack_a8) break;
    pcVar23 = (char *)((long)ppiVar4 + -1);
    ppiVar4 = &piStack_d8;
    FUN_109e0a9a8(ppiVar4,ppiStack_a8,pcVar23,lVar28,lVar33);
    if (ppiVar4 == (int **)0x0) break;
LAB_109e098dc:
    ppiVar13 = &piStack_d8;
    func_0x000109e0b17c(ppiVar13,ppiStack_a8,ppiVar4,lVar28,lVar33,0,0);
  }
  ppiVar13 = (int **)((long)ppiStack_a8 + 1);
  if (ppiStack_a8 == ppiVar1) {
LAB_109e09934:
    if (param_3 != 0) {
LAB_109e09938:
      *param_4 = (long)ppiStack_a8 - (long)ppiStack_c0;
      param_4[1] = (long)ppiVar4 - (long)ppiStack_c0;
      if (1 < param_3) {
        uVar18 = 1;
        plVar12 = plStack_c8;
        do {
          plVar14 = param_4 + 2;
          if (*(ulong *)(piStack_d8 + 0x1c) < uVar18) {
            *plVar14 = -1;
            param_4[3] = -1;
          }
          else {
            lVar24 = plVar12[2];
            param_4[3] = plVar12[3];
            *plVar14 = lVar24;
          }
          uVar18 = uVar18 + 1;
          plVar12 = plVar12 + 2;
          param_4 = plVar14;
        } while (param_3 != uVar18);
      }
    }
LAB_109e099a4:
    if (plStack_c8 != (long *)0x0) {
      _free();
    }
    uVar21 = 0;
    uVar16 = 0;
    plVar12 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
LAB_109e099c0:
      uVar21 = uVar16;
      _free(plVar12);
    }
LAB_109e099cc:
    _free(lStack_90);
    return uVar21;
  }
  goto LAB_109e094a4;
LAB_109e09188:
  ppiStack_a8 = ppiVar15;
  if (uVar20 == 0) {
    _free(plStack_c8);
    uVar16 = 1;
    plVar12 = plStack_a0;
    goto LAB_109e0937c;
  }
  if ((param_3 == 0) && (piVar27[0x1e] == 0)) goto LAB_109e09360;
  while( true ) {
    ppiVar4 = &piStack_d8;
    ppiStack_a8 = ppiVar15;
    func_0x000109e09a28(ppiVar4,ppiVar15,ppiVar1,uVar30,uVar18);
    if (ppiVar4 != (int **)0x0) break;
    ppiVar15 = (int **)((long)ppiStack_a8 + 1);
  }
  if ((param_3 == 1) && (piVar27[0x1e] == 0)) goto LAB_109e092f4;
  lVar28 = *(long *)(piStack_d8 + 0x1c);
  if (plStack_c8 == (long *)0x0) {
    plVar12 = (long *)(lVar28 * 0x10 + 0x10);
    _malloc();
    plStack_c8 = plVar12;
    if (plVar12 == (long *)0x0) {
      return 0xc;
    }
  }
  plVar12 = plStack_c8;
  if (lVar28 != 0) {
    lVar33 = 2;
    if (2 < lVar28 + 1U) {
      lVar33 = lVar28 + 1;
    }
    _memset(plStack_c8 + 2,0xff,lVar33 * 0x10 + -0x10);
  }
  if ((piVar27[0x1e] != 0) || ((uStack_d0._1_1_ >> 2 & 1) != 0)) {
    lVar28 = *(long *)(piVar27 + 0x20);
    if ((0 < lVar28) && (plStack_a0 == (long *)0x0)) {
      plVar14 = (long *)(lVar28 * 8 + 8);
      _malloc();
      plStack_a0 = plVar14;
    }
    if (lVar28 < 1) goto LAB_109e09298;
    if (plStack_a0 != (long *)0x0) goto LAB_109e09298;
    uVar16 = 0xc;
    goto LAB_109e0937c;
  }
  ppiVar13 = &piStack_d8;
  func_0x000109e09dd8(ppiVar13,ppiStack_a8,ppiVar4,uVar30,uVar18);
  while( true ) {
    if (ppiVar13 != (int **)0x0) goto LAB_109e092f0;
    if (ppiVar4 <= ppiStack_a8) break;
    pcVar23 = (char *)((long)ppiVar4 + -1);
    ppiVar4 = &piStack_d8;
    func_0x000109e09a28(ppiVar4,ppiStack_a8,pcVar23,uVar30,uVar18);
    if (ppiVar4 == (int **)0x0) break;
LAB_109e09298:
    ppiVar13 = &piStack_d8;
    func_0x000109e0a1b0(ppiVar13,ppiStack_a8,ppiVar4,uVar30,uVar18,0,0);
  }
  ppiVar13 = (int **)((long)ppiStack_a8 + 1);
  if (ppiStack_a8 == ppiVar1) {
LAB_109e092f0:
    if (param_3 != 0) {
LAB_109e092f4:
      *param_4 = (long)ppiStack_a8 - (long)ppiStack_c0;
      param_4[1] = (long)ppiVar4 - (long)ppiStack_c0;
      if (1 < param_3) {
        uVar18 = 1;
        plVar12 = plStack_c8;
        do {
          plVar14 = param_4 + 2;
          if (*(ulong *)(piStack_d8 + 0x1c) < uVar18) {
            *plVar14 = -1;
            param_4[3] = -1;
          }
          else {
            lVar24 = plVar12[2];
            param_4[3] = plVar12[3];
            *plVar14 = lVar24;
          }
          uVar18 = uVar18 + 1;
          plVar12 = plVar12 + 2;
          param_4 = plVar14;
        } while (param_3 != uVar18);
      }
    }
LAB_109e09360:
    if (plStack_c8 != (long *)0x0) {
      _free();
    }
    uVar21 = 0;
    uVar16 = 0;
    plVar12 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
LAB_109e0937c:
      uVar21 = uVar16;
      _free(plVar12);
    }
    return uVar21;
  }
  goto LAB_109e08ea4;
}



/* Entry: 109e0a71c; end: 109e0a8e7;  */

ulong FUN_109e0a71c(long param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5,
                   ulong param_6)

{
  ulong *puVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 != param_3) {
    uVar5 = 1L << (param_2 & 0x3f);
    do {
      puVar1 = (ulong *)(*(long *)(param_1 + 8) + param_2 * 8);
      uVar4 = *puVar1;
      switch((uVar4 & 0xf8000000) - 0x8000000 >> 0x1b) {
      case 1:
        bVar3 = param_5 == (int)(char)uVar4;
        goto code_r0x000109e0a894;
      case 2:
        bVar3 = (param_5 & 0xfffffffd) == 0x81;
        goto code_r0x000109e0a894;
      case 3:
        bVar3 = (param_5 & 0xfffffffe) == 0x82;
        goto code_r0x000109e0a894;
      case 4:
        if ((int)param_5 < 0x80) {
          param_6 = param_6 | (uVar5 & param_4) << 1;
        }
        break;
      case 5:
        if (((int)param_5 < 0x80) &&
           (plVar2 = (long *)(*(long *)(param_1 + 0x18) + (uVar4 & 0x7ffffff) * 0x20),
           uVar4 = param_4,
           (*(byte *)(plVar2 + 1) & *(byte *)(*plVar2 + ((ulong)param_5 & 0xff))) != 0))
        goto code_r0x000109e0a784;
        break;
      case 6:
      case 7:
      case 8:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0x11:
        uVar4 = param_6;
code_r0x000109e0a784:
        param_6 = param_6 | (uVar5 & uVar4) << 1;
        break;
      case 9:
        uVar6 = param_6 | (uVar5 & param_6) << 1;
        uVar7 = uVar5 >> (uVar4 & 0x3f);
        param_6 = (uVar6 & uVar5) >> (uVar4 & 0x3f) | uVar6;
        if ((uVar7 & uVar6) == 0 && (param_6 & uVar7) != 0) {
          param_2 = param_2 + ~(uVar4 & 0x7ffffff);
          uVar5 = 1L << (param_2 & 0x3f);
        }
        break;
      case 10:
      case 0xe:
        param_6 = param_6 | (uVar5 & param_6) << 1;
        param_6 = (param_6 & uVar5) << (uVar4 & 0x3f) | param_6;
        break;
      case 0xf:
        if ((uVar5 & param_6) != 0) {
          uVar4 = puVar1[1];
          if ((uVar4 & 0xf8000000) == 0x90000000) {
            uVar7 = 1;
          }
          else {
            uVar7 = 1;
            do {
              uVar7 = (uVar4 & 0x7ffffff) + uVar7;
              uVar4 = puVar1[uVar7];
            } while ((uVar4 & 0xf8000000) != 0x90000000);
          }
          uVar4 = (uVar5 & param_6) << (uVar7 & 0x3f);
code_r0x000109e0a8d4:
          param_6 = uVar4 | param_6;
        }
        break;
      case 0x10:
        param_6 = param_6 | (uVar5 & param_6) << 1;
        if ((puVar1[uVar4 & 0x7ffffff] & 0xf8000000) != 0x90000000) {
          uVar4 = (param_6 & uVar5) << (uVar4 & 0x3f);
          goto code_r0x000109e0a8d4;
        }
        break;
      case 0x12:
        bVar3 = param_5 == 0x85;
        goto code_r0x000109e0a894;
      case 0x13:
        bVar3 = param_5 == 0x86;
code_r0x000109e0a894:
        if (bVar3) {
          param_6 = param_6 | (uVar5 & param_4) << 1;
        }
      }
      param_2 = param_2 + 1;
      uVar5 = uVar5 << 1;
    } while (param_2 != param_3);
  }
  return param_6;
}



/* Entry: 109e0a8e8; end: 109e0a9a7;  */

char * FUN_109e0a8e8(long param_1,char *param_2,char *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  ulong *puVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  
  pcVar3 = param_3 + -1;
  lVar5 = param_5 - param_4;
  if (lVar5 != 0 && (long)param_4 <= param_5) {
    uVar4 = ~param_4;
    puVar2 = (ulong *)(*(long *)(param_1 + 8) + param_4 * 8);
    do {
      uVar1 = (uint)*puVar2 & 0xf8000000;
      if (uVar1 != 0x70000000) {
        if (uVar1 != 0x10000000 || pcVar3 == param_2) {
          return pcVar3;
        }
        pcVar6 = param_3;
        do {
          if ((int)(char)(uint)*puVar2 == (uint)(byte)pcVar6[-1]) {
            if (param_5 <= (long)-uVar4) {
              return pcVar3;
            }
            uVar7 = puVar2[1];
            if ((uVar7 & 0xf8000000) != 0x10000000 || param_3 <= pcVar6) {
              return pcVar6 + -1;
            }
            if (*pcVar6 == (char)uVar7) {
              return pcVar3;
            }
          }
          pcVar3 = pcVar3 + -1;
          pcVar8 = pcVar6 + -2;
          pcVar6 = pcVar6 + -1;
          if (pcVar8 == param_2) {
            return param_2;
          }
        } while( true );
      }
      uVar4 = uVar4 - 1;
      lVar5 = lVar5 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar5 != 0);
  }
  return pcVar3;
}



/* Entry: 109e0a9a8; end: 109e0b6e7;  */

char * FUN_109e0a9a8(long *param_1,char *param_2,char *param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  uint uVar15;
  ulong uVar16;
  
  lVar11 = param_4;
  if (param_4 < param_5) {
    do {
      uVar8 = *(undefined8 *)(*(long *)(*param_1 + 8) + param_4 * 8);
      uVar4 = (uint)uVar8 & 0xf8000000;
      if (uVar4 != 0x70000000 && uVar4 != 0x68000000) {
        lVar11 = param_4;
        if (uVar4 != 0x10000000) break;
        if ((param_2 == param_3) || (*param_2 != (char)uVar8)) {
          return (char *)0x0;
        }
        param_2 = param_2 + 1;
      }
      param_4 = param_4 + 1;
      lVar11 = param_5;
    } while (param_5 != param_4);
  }
  lVar12 = param_1[10];
  lVar1 = param_1[0xc];
  lVar2 = param_1[0xd];
  if (param_2 == (char *)param_1[4]) {
    uVar13 = 0x80;
  }
  else {
    uVar13 = (ulong)(byte)param_2[-1];
  }
  _bzero(lVar12,*(undefined8 *)(*param_1 + 0x30));
  *(undefined1 *)(lVar12 + lVar11) = 1;
  FUN_109e0b6e8(*param_1,lVar11,param_5,lVar12,0x84,lVar12);
  pcVar14 = (char *)0x0;
  do {
    if (param_2 == (char *)param_1[5]) {
      uVar16 = 0x80;
    }
    else {
      uVar16 = (ulong)*param_2;
    }
    uVar4 = (uint)uVar13;
    if (uVar4 == 0x80) {
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        lVar7 = *param_1;
        goto LAB_109e0aae0;
      }
LAB_109e0aaf0:
      iVar10 = 0;
      iVar6 = 0;
      iVar9 = 0x82;
    }
    else {
      if ((uVar4 != 10) || (lVar7 = *param_1, (*(byte *)(lVar7 + 0x28) >> 3 & 1) == 0))
      goto LAB_109e0aaf0;
LAB_109e0aae0:
      iVar6 = *(int *)(lVar7 + 0x4c);
      iVar10 = 0x81;
      iVar9 = 0x83;
    }
    uVar15 = (uint)uVar16;
    if (uVar15 == 0x80) {
      if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
        lVar7 = *param_1;
        goto LAB_109e0ab28;
      }
    }
    else if ((uVar15 == 10) && (lVar7 = *param_1, (*(byte *)(lVar7 + 0x28) >> 3 & 1) != 0)) {
LAB_109e0ab28:
      iVar6 = *(int *)(lVar7 + 0x50) + iVar6;
      iVar10 = iVar9;
    }
    if (0 < iVar6) {
      uVar3 = iVar6 + 1;
      do {
        FUN_109e0b6e8(*param_1,lVar11,param_5,lVar12,iVar10,lVar12);
        uVar3 = uVar3 - 1;
      } while (1 < uVar3);
    }
    if (iVar10 == 0x81) {
      if (uVar15 == 0x80) {
        iVar6 = 0x81;
      }
      else {
LAB_109e0abd8:
        uVar13 = (ulong)(uVar15 & 0xff);
        if ((uVar15 & 0xff) < 0x80) {
          uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar13 * 4 + 0x3c) & 0x500;
        }
        else {
          ___maskrune(uVar13,0x500);
          uVar3 = (uint)uVar13;
        }
        iVar6 = 0x85;
        if (uVar15 != 0x5f && uVar3 == 0) {
          iVar6 = iVar10;
        }
      }
      iVar10 = iVar6;
      if (uVar4 == 0x80) goto LAB_109e0ac68;
      uVar13 = (ulong)(uVar4 & 0xff);
LAB_109e0ac24:
      if ((uint)uVar13 < 0x80) {
        uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar13 * 4 + 0x3c) & 0x500;
      }
      else {
        ___maskrune(uVar13,0x500);
        uVar3 = (uint)uVar13;
      }
      if ((uVar3 == 0) && (uVar4 != 0x5f)) goto LAB_109e0ac68;
      if (iVar10 != 0x82) {
        if (uVar15 != 0x80) {
          uVar13 = (ulong)(uVar15 & 0xff);
          if ((uVar15 & 0xff) < 0x80) {
            uVar4 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar13 * 4 + 0x3c) & 0x500;
          }
          else {
            ___maskrune(uVar13,0x500);
            uVar4 = (uint)uVar13;
          }
          if ((uVar4 == 0) && (uVar15 != 0x5f)) {
            uVar8 = 0x86;
            goto LAB_109e0ac8c;
          }
        }
        goto LAB_109e0ac68;
      }
      uVar8 = 0x86;
LAB_109e0ac8c:
      FUN_109e0b6e8(*param_1,lVar11,param_5,lVar12,uVar8,lVar12);
    }
    else {
      if (uVar4 != 0x80) {
        uVar13 = (ulong)(uVar4 & 0xff);
        if ((uVar4 & 0xff) < 0x80) {
          uVar3 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + uVar13 * 4 + 0x3c) & 0x500;
        }
        else {
          uVar5 = uVar13;
          ___maskrune(uVar13,0x500);
          uVar3 = (uint)uVar5;
        }
        if (((uVar3 == 0) && (uVar4 != 0x5f)) && (uVar15 != 0x80)) goto LAB_109e0abd8;
        goto LAB_109e0ac24;
      }
LAB_109e0ac68:
      if (iVar10 - 0x85U < 2) {
        uVar8 = 0x85;
        goto LAB_109e0ac8c;
      }
    }
    if (*(char *)(lVar12 + param_5) != '\0') {
      pcVar14 = param_2;
    }
    uVar8 = *(undefined8 *)(*param_1 + 0x30);
    lVar7 = lVar12;
    _memcmp(lVar12,lVar2,uVar8);
    if ((param_2 == param_3) || ((int)lVar7 == 0)) {
      return pcVar14;
    }
    _memmove(lVar1,lVar12,uVar8);
    _memmove(lVar12,lVar2,*(undefined8 *)(*param_1 + 0x30));
    FUN_109e0b6e8(*param_1,lVar11,param_5,lVar1,uVar16,lVar12);
    param_2 = param_2 + 1;
    uVar13 = uVar16;
  } while( true );
}



/* Entry: 109e0b6e8; end: 109e0b8f7;  */

long FUN_109e0b6e8(long param_1,long param_2,long param_3,long param_4,uint param_5,long param_6)

{
  ulong *puVar1;
  byte *pbVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 != param_3) {
    lVar7 = param_2;
    do {
      puVar1 = (ulong *)(*(long *)(param_1 + 8) + lVar7 * 8);
      uVar8 = *puVar1;
      switch((uVar8 & 0xf8000000) - 0x8000000 >> 0x1b) {
      case 1:
        if (param_5 == (int)(char)uVar8) {
code_r0x000109e0b89c:
          *(byte *)(param_6 + 1 + param_2) =
               *(byte *)(param_6 + 1 + param_2) | *(byte *)(param_4 + param_2);
        }
        break;
      case 2:
        if ((param_5 & 0xfffffffd) == 0x81) goto code_r0x000109e0b89c;
        break;
      case 3:
        if ((param_5 & 0xfffffffe) == 0x82) goto code_r0x000109e0b89c;
        break;
      case 4:
        if ((int)param_5 < 0x80) goto code_r0x000109e0b89c;
        break;
      case 5:
        if (((int)param_5 < 0x80) &&
           (plVar3 = (long *)(*(long *)(param_1 + 0x18) + (uVar8 & 0x7ffffff) * 0x20),
           (*(byte *)(plVar3 + 1) & *(byte *)(*plVar3 + ((ulong)param_5 & 0xff))) != 0))
        goto code_r0x000109e0b89c;
        break;
      case 6:
      case 7:
      case 8:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0x11:
        pbVar2 = (byte *)(param_6 + param_2);
        pbVar2[1] = pbVar2[1] | *pbVar2;
        break;
      case 9:
        pbVar2 = (byte *)(param_6 + param_2);
        pbVar2[1] = pbVar2[1] | *pbVar2;
        lVar6 = param_2 - (uVar8 & 0x7ffffff);
        bVar5 = *(byte *)(param_6 + lVar6);
        bVar4 = bVar5 | *pbVar2;
        *(byte *)(param_6 + lVar6) = bVar4;
        if (bVar5 == 0 && bVar4 != 0) {
          param_2 = lVar7 + ~(uVar8 & 0x7ffffff);
          lVar7 = param_2;
        }
        break;
      case 10:
      case 0xe:
        pbVar2 = (byte *)(param_6 + param_2);
        bVar5 = *pbVar2;
        pbVar2[1] = pbVar2[1] | bVar5;
code_r0x000109e0b77c:
        *(byte *)(param_6 + param_2 + (uVar8 & 0x7ffffff)) =
             *(byte *)(param_6 + param_2 + (uVar8 & 0x7ffffff)) | bVar5;
        break;
      case 0xf:
        pbVar2 = (byte *)(param_6 + param_2);
        if (*pbVar2 != 0) {
          uVar8 = puVar1[1];
          if ((uVar8 & 0xf8000000) == 0x90000000) {
            lVar6 = 1;
          }
          else {
            lVar6 = 1;
            do {
              lVar6 = (uVar8 & 0x7ffffff) + lVar6;
              uVar8 = puVar1[lVar6];
            } while ((uVar8 & 0xf8000000) != 0x90000000);
          }
          pbVar2[lVar6] = pbVar2[lVar6] | *pbVar2;
        }
        break;
      case 0x10:
        pbVar2 = (byte *)(param_6 + param_2);
        bVar5 = *pbVar2;
        pbVar2[1] = pbVar2[1] | bVar5;
        if ((*(ulong *)(*(long *)(param_1 + 8) + lVar7 * 8 + (uVar8 & 0x7ffffff) * 8) & 0xf8000000)
            != 0x90000000) goto code_r0x000109e0b77c;
        break;
      case 0x12:
        if (param_5 == 0x85) goto code_r0x000109e0b89c;
        break;
      case 0x13:
        if (param_5 == 0x86) goto code_r0x000109e0b89c;
      }
      lVar7 = lVar7 + 1;
      param_2 = param_2 + 1;
    } while (lVar7 != param_3);
  }
  return param_6;
}



/* Entry: 109e0b8f8; end: 109e0b9b7;  */

char * FUN_109e0b8f8(long param_1,char *param_2,char *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  ulong *puVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  
  pcVar3 = param_3 + -1;
  lVar5 = param_5 - param_4;
  if (lVar5 != 0 && (long)param_4 <= param_5) {
    uVar4 = ~param_4;
    puVar2 = (ulong *)(*(long *)(param_1 + 8) + param_4 * 8);
    do {
      uVar1 = (uint)*puVar2 & 0xf8000000;
      if (uVar1 != 0x70000000) {
        if (uVar1 != 0x10000000 || pcVar3 == param_2) {
          return pcVar3;
        }
        pcVar6 = param_3;
        do {
          if ((int)(char)(uint)*puVar2 == (uint)(byte)pcVar6[-1]) {
            if (param_5 <= (long)-uVar4) {
              return pcVar3;
            }
            uVar7 = puVar2[1];
            if ((uVar7 & 0xf8000000) != 0x10000000 || param_3 <= pcVar6) {
              return pcVar6 + -1;
            }
            if (*pcVar6 == (char)uVar7) {
              return pcVar3;
            }
          }
          pcVar3 = pcVar3 + -1;
          pcVar8 = pcVar6 + -2;
          pcVar6 = pcVar6 + -1;
          if (pcVar8 == param_2) {
            return param_2;
          }
        } while( true );
      }
      uVar4 = uVar4 - 1;
      lVar5 = lVar5 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar5 != 0);
  }
  return pcVar3;
}



/* Entry: 109e0b9b8; end: 109e0ba9f;  */

void FUN_109e0b9b8(int *param_1)

{
  int *piVar1;
  
  if (((*param_1 == 0xf265) && (piVar1 = *(int **)(param_1 + 6), piVar1 != (int *)0x0)) &&
     (*piVar1 == 0xd245)) {
    *param_1 = 0;
    *piVar1 = 0;
    if (*(long *)(piVar1 + 2) != 0) {
      _free();
    }
    if (*(long *)(piVar1 + 6) != 0) {
      _free();
    }
    if (*(long *)(piVar1 + 8) != 0) {
      _free();
    }
    if (*(long *)(piVar1 + 0x18) != 0) {
      _free();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(piVar1);
    return;
  }
  return;
}



/* Entry: 109e0baa0; end: 109e0bb2b;  */

undefined4 FUN_109e0baa0(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  FUN_109e0c14c();
  func_0x000109e0bc30();
  ppuVar2 = &PTR_DAT_110b5d068;
  lVar3 = 0xb40;
  do {
    if (param_2 <= ppuVar2[1]) {
      if (param_2 == (undefined *)0x0) {
LAB_109e0bb14:
        return *(undefined4 *)(ppuVar2 + 8);
      }
      lVar1 = (long)(*ppuVar2 + (long)ppuVar2[1]) - (long)param_2;
      _memcmp(lVar1,param_1,param_2);
      if ((int)lVar1 == 0) goto LAB_109e0bb14;
    }
    ppuVar2 = ppuVar2 + 9;
    lVar3 = lVar3 + -0x48;
    if (lVar3 == 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 109e0bb2c; end: 109e0bb4f;  */

undefined4 FUN_109e0bb2c(ulong param_1)

{
  FUN_109e0c14c();
  FUN_109e0baa0();
  return *(undefined4 *)(&UNK_10e05bbcc + (param_1 & 0xffffffff) * 4);
}



/* Entry: 109e0bb50; end: 109e0bb5f;  */

undefined4 FUN_109e0bb50(ulong param_1)

{
  return *(undefined4 *)(&UNK_10e05bc6c + (param_1 & 0xffffffff) * 4);
}



/* Entry: 109e0bb60; end: 109e0bbc3;  */

undefined8 *
FUN_109e0bb60(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 4) & 1) == 0) && (param_1[1] == param_3)) {
    if (param_1[1] != 0) {
      iVar1 = (int)*param_1;
      _memcmp();
      if (iVar1 != 0) {
        return param_1;
      }
    }
    param_1[2] = param_4;
    param_1[3] = param_5;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}



/* Entry: 109e0bbc4; end: 109e0c0bb;  */

undefined8 * FUN_109e0bbc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  long in_x6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  FUN_109e0bb60();
  FUN_109e0bb60();
  if (((*(byte *)(param_1 + 4) & 1) == 0) && (param_1[1] == in_x6)) {
    if (param_1[1] != 0) {
      uVar1 = *param_1;
      _memcmp(uVar1,in_x5);
      if ((int)uVar1 != 0) {
        return param_1;
      }
    }
    param_1[2] = in_stack_00000000;
    param_1[3] = in_stack_00000008;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}



/* Entry: 109e0c0bc; end: 109e0c14b;  */

undefined8 * FUN_109e0c0bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_109e0bb60();
  FUN_109e0bb60();
  FUN_109e0bb60();
  FUN_109e0bb60();
  if (((*(byte *)(param_1 + 4) & 1) == 0) && (param_1[1] == in_stack_00000018)) {
    if (param_1[1] != 0) {
      uVar1 = *param_1;
      _memcmp(uVar1,in_stack_00000010);
      if ((int)uVar1 != 0) {
        return param_1;
      }
    }
    param_1[2] = in_stack_00000020;
    param_1[3] = in_stack_00000028;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}



/* Entry: 109e0c14c; end: 109e0c483;  */

undefined1  [16] FUN_109e0c14c(char *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  long **pplVar3;
  long **pplVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long *plStack_30;
  ulong uStack_28;
  
  pplVar3 = &plStack_30;
  pplVar4 = &plStack_30;
  uStack_28 = param_2;
  plStack_30 = (long *)param_1;
  if (param_2 < 8) {
    if (5 < param_2) {
LAB_109e0c1c8:
      if ((int)*(long *)param_1 == 0x366d7261 && *(short *)((long)param_1 + 4) == 0x6534) {
        uVar6 = 6;
      }
      else if ((int)*(long *)param_1 == 0x366d7261 && *(char *)((long)param_1 + 4) == '4') {
LAB_109e0c31c:
        uVar6 = 5;
      }
      else {
        if ((param_2 < 10) ||
           (*(long *)param_1 != 0x5f34366863726161 || (short)*(long *)((long)param_1 + 8) != 0x3233)
           ) goto LAB_109e0c230;
        uVar6 = 10;
      }
      goto LAB_109e0c37c;
    }
    if (param_2 != 5) {
      if (param_2 < 3) {
        uVar6 = 0xffffffffffffffff;
        goto LAB_109e0c3a4;
      }
      if ((short)*(long *)param_1 == 0x7261 && *(char *)((long)param_1 + 2) == 'm')
      goto LAB_109e0c36c;
LAB_109e0c35c:
      uVar6 = 0xffffffffffffffff;
      goto LAB_109e0c3b0;
    }
    if ((int)*(long *)param_1 == 0x366d7261 && *(char *)((long)param_1 + 4) == '4') {
      uStack_28 = 5;
      uVar6 = 5;
      goto LAB_109e0c37c;
    }
LAB_109e0c230:
    if ((short)*(long *)param_1 == 0x7261 && *(char *)((long)param_1 + 2) == 'm') {
LAB_109e0c36c:
      uVar6 = 3;
      goto LAB_109e0c37c;
    }
    if ((int)*(long *)param_1 == 0x6d756874 && *(char *)((long)param_1 + 4) == 'b')
    goto LAB_109e0c31c;
    if ((param_2 < 7) ||
       ((int)*(long *)param_1 != 0x63726161 || *(int *)((long)param_1 + 3) != 0x34366863))
    goto LAB_109e0c35c;
    FUN_109e038f4(&plStack_30,&UNK_10f60315d,2,0);
    if (pplVar3 == (long **)0xffffffffffffffff) {
      uVar6 = 7;
      uVar1 = uStack_28;
      if (6 < uStack_28) {
        uVar1 = 7;
      }
      if (2 < uStack_28 - uVar1) {
        uVar5 = *(uint3 *)((long)plStack_30 + uVar1) & 0xff00ff;
        uVar2 = uVar5 >> 8 |
                ((*(uint3 *)((long)plStack_30 + uVar1) & 0xff00ff00) >> 8 | uVar5 << 8) << 0x10;
        uVar5 = (uint)(0x5f626500 < uVar2);
        if (uVar2 < 0x5f626500) {
          uVar5 = 0xffffffff;
        }
        uVar6 = 10;
        if (uVar5 != 0) {
          uVar6 = 7;
        }
      }
      goto LAB_109e0c37c;
    }
LAB_109e0c460:
    param_2 = 0;
    param_1 = "";
  }
  else {
    if (*(long *)param_1 != 0x32335f34366d7261) goto LAB_109e0c1c8;
    uVar6 = 8;
LAB_109e0c37c:
    uVar1 = uStack_28;
    if (uVar6 <= uStack_28) {
      uVar1 = uVar6;
    }
    if ((uStack_28 - uVar1 < 2) || (*(short *)((long)plStack_30 + uVar1) != 0x6265)) {
LAB_109e0c3a4:
      if (1 < uStack_28) {
LAB_109e0c3b0:
        if (*(short *)((long)plStack_30 + (uStack_28 - 2)) == 0x6265) {
          uStack_28 = uStack_28 - 2;
        }
      }
      if (uVar6 != 0xffffffffffffffff) goto LAB_109e0c3e8;
      if (uStack_28 == 0) goto LAB_109e0c46c;
    }
    else {
      uVar6 = uVar6 + 2;
LAB_109e0c3e8:
      uVar1 = uStack_28;
      if (uVar6 <= uStack_28) {
        uVar1 = uVar6;
      }
      plStack_30 = (long *)((long)plStack_30 + uVar1);
      uStack_28 = uStack_28 - uVar1;
      if (uStack_28 == 0) goto LAB_109e0c46c;
      if (((uStack_28 != 1) &&
          ((((char)*plStack_30 != 'v' || ((long)*(char *)((long)plStack_30 + 1) < 0)) ||
           ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 +
                      (long)*(char *)((long)plStack_30 + 1) * 4 + 0x3c) >> 10 & 1) == 0)))) ||
         (FUN_109e038f4(&plStack_30,&UNK_10f60315d,2,0), pplVar4 != (long **)0xffffffffffffffff))
      goto LAB_109e0c460;
    }
    param_2 = uStack_28;
    param_1 = (char *)plStack_30;
  }
LAB_109e0c46c:
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 109e0c484; end: 109e0c7eb;  */

bool FUN_109e0c484(int *param_1,ulong param_2)

{
  if (param_2 < 7) {
    if (param_2 < 5) {
      if (param_2 < 3) {
        return false;
      }
      goto LAB_109e0c508;
    }
  }
  else if (*param_1 == 0x63726161 && *(int *)((long)param_1 + 3) == 0x34366863) {
    return (bool)3;
  }
  if (*param_1 == 0x366d7261 && (char)param_1[1] == '4') {
    return (bool)3;
  }
  if (*param_1 == 0x6d756874 && (char)param_1[1] == 'b') {
    return (bool)2;
  }
LAB_109e0c508:
  return (short)*param_1 == 0x7261 && *(char *)((long)param_1 + 2) == 'm';
}



/* Entry: 109e0c7ec; end: 109e0c843;  */

undefined8 * FUN_109e0c7ec(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((*(byte *)((long)param_1 + 0x14) & 1) == 0) && (param_1[1] == param_3)) {
    if (param_1[1] != 0) {
      iVar1 = (int)*param_1;
      _memcmp();
      if (iVar1 != 0) {
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 2) = param_4;
    *(undefined1 *)((long)param_1 + 0x14) = 1;
  }
  return param_1;
}



/* Entry: 109e0c844; end: 109e0ce53;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109e0c844(long *param_1,undefined8 param_2)

{
  long **pplVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar22;
  undefined8 uVar21;
  long *plStack_108;
  long **pplStack_100;
  uint uStack_f8;
  byte bStack_f4;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long alStack_78 [8];
  long lStack_38;
  
  uVar22 = (undefined4)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109e04498(param_1,param_2);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  cVar2 = *(char *)((long)param_1 + 0x17);
  plStack_98 = (long *)*param_1;
  if (-1 < (long)cVar2) {
    plStack_98 = param_1;
  }
  lStack_90 = param_1[1];
  if (-1 < cVar2) {
    lStack_90 = (long)cVar2;
  }
  uStack_80 = 0x400000000;
  pplVar11 = &plStack_88;
  plStack_88 = alStack_78;
  FUN_109e03d70(&plStack_98,pplVar11,0x2d,3,1);
  if ((uint)uStack_80 == 0) {
LAB_109e0cd38:
    uVar4 = *(uint *)((long)param_1 + 0x2c);
    plVar9 = (long *)(ulong)uVar4;
    plVar6 = plStack_88;
  }
  else {
    uVar13 = (undefined4)*plStack_88;
    pplVar11 = (long **)plStack_88[1];
    FUN_109e0ce54();
    *(undefined4 *)(param_1 + 3) = uVar13;
    plVar6 = (long *)*plStack_88;
    pplVar1 = (long **)plStack_88[1];
    if (((pplVar1 < (long **)0x4) || ((int)*plVar6 != 0x7370696d)) ||
       ((*(int *)((undefined *)((long)plVar6 + (long)pplVar1) + -4) != 0x6c653672 &&
        (*(short *)((undefined *)((long)plVar6 + (long)pplVar1) + -2) != 0x3672)))) {
      if (pplVar1 == (long **)0x6) {
        if ((int)*plVar6 != 0x366d7261 || *(short *)((long)plVar6 + 4) != 0x6534)
        goto LAB_109e0c9b0;
        uVar13 = 0x21;
      }
      else if (pplVar1 == (long **)0x7) {
        if ((int)*plVar6 == 0x366d7261 && *(int *)((long)plVar6 + 3) == 0x63653436) {
          uVar13 = 0x22;
          goto LAB_109e0cb54;
        }
LAB_109e0c9b0:
        if ((int)*plVar6 != 0x72697073 || *(char *)((long)plVar6 + 4) != 'v') goto LAB_109e0c9d0;
        puVar17 = (undefined *)((long)plVar6 + (long)pplVar1);
        if (*(int *)(puVar17 + -4) == 0x302e3176) {
          uVar13 = 0x28;
          goto LAB_109e0cb54;
        }
        if (*(int *)(puVar17 + -4) == 0x312e3176) {
          uVar13 = 0x29;
          goto LAB_109e0cb54;
        }
        if (*(int *)(puVar17 + -4) == 0x322e3176) {
          uVar13 = 0x2a;
          goto LAB_109e0cb54;
        }
        if (*(int *)(puVar17 + -4) == 0x332e3176) {
          uVar13 = 0x2b;
          goto LAB_109e0cb54;
        }
        if (*(int *)(puVar17 + -4) == 0x342e3176) {
          uVar13 = 0x2c;
          goto LAB_109e0cb54;
        }
        bVar3 = *(int *)(puVar17 + -4) == 0x352e3176;
        uVar12 = 0x2d;
LAB_109e0cb18:
        uVar13 = 0;
        if (bVar3) {
          uVar13 = uVar12;
        }
      }
      else {
        if (pplVar1 == (long **)0xa) {
          if (*plVar6 == 0x7363707265776f70 && (short)plVar6[1] == 0x6570) {
            uVar13 = 0x27;
            goto LAB_109e0cb54;
          }
          goto LAB_109e0c9b0;
        }
        if ((long **)0x4 < pplVar1) goto LAB_109e0c9b0;
LAB_109e0c9d0:
        plVar9 = plVar6;
        pplVar11 = pplVar1;
        FUN_109e0c14c();
        iVar5 = (int)plVar9;
        if (pplVar11 == (long **)0x0) {
          if (pplVar1 < (long **)0x8) goto LAB_109e0cab8;
          puVar17 = (undefined *)((long)plVar6 + (long)pplVar1);
          if (*(long *)(puVar17 + -8) == 0x3361626d696c616b) {
            uVar13 = 0x23;
          }
          else {
            if (*(long *)(puVar17 + -8) != 0x3461626d696c616b) {
              bVar3 = *(long *)(puVar17 + -8) == 0x3561626d696c616b;
              uVar12 = 0x25;
              goto LAB_109e0cb18;
            }
            uVar13 = 0x24;
          }
        }
        else {
          FUN_109e0baa0();
          if (iVar5 - 2U < 0x26) {
            uVar13 = *(undefined4 *)(&UNK_10e05be88 + (ulong)(iVar5 - 2U) * 4);
          }
          else {
LAB_109e0cab8:
            uVar13 = 0;
          }
        }
      }
    }
    else {
      uVar13 = 0x26;
    }
LAB_109e0cb54:
    plVar6 = plStack_88;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar13;
    uVar4 = (uint)uStack_80;
    if ((uint)uStack_80 < 2) {
      puVar8 = (ulong *)*plStack_88;
      uVar15 = plStack_88[1];
      if (uVar15 < 7) {
        if (uVar15 == 4) {
          if ((int)*puVar8 == 0x7370696d) {
LAB_109e0cd28:
            uVar13 = 1;
            goto LAB_109e0cd34;
          }
        }
        else if (uVar15 == 6) {
          if ((int)*puVar8 == 0x7370696d && *(short *)((long)puVar8 + 4) == 0x3436)
          goto LAB_109e0cd30;
          pplVar11 = (long **)&UNK_10f60320f;
          puVar7 = puVar8;
          _memcmp(puVar8,&UNK_10f60320f,6);
          if ((int)puVar7 == 0) goto LAB_109e0cd28;
          pplVar11 = (long **)&UNK_10f603431;
          _memcmp(puVar8,&UNK_10f603431,6);
          if ((int)puVar8 == 0) {
            uVar13 = 1;
            goto LAB_109e0cd34;
          }
        }
        goto LAB_109e0ccd0;
      }
      if ((int)*puVar8 == 0x7370696d && *(int *)((long)puVar8 + 3) == 0x32336e73) {
        uVar13 = 2;
      }
      else if ((int)*puVar8 == 0x7370696d && *(short *)((long)puVar8 + 4) == 0x3436) {
LAB_109e0cd30:
        uVar13 = 3;
      }
      else {
        if (uVar15 < 9) {
          if (uVar15 == 8) {
            uVar15 = (*puVar8 & 0xff00ff00ff00ff00) >> 8 | (*puVar8 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
            uVar4 = (uint)(0x6d6970737236656c < uVar15);
            if (uVar15 < 0x6d6970737236656c) {
              uVar4 = 0xffffffff;
            }
            if (uVar4 == 0) {
              uVar13 = 1;
              goto LAB_109e0cd34;
            }
          }
        }
        else {
          if (*puVar8 == 0x366173697370696d && (char)puVar8[1] == '4') goto LAB_109e0cd30;
          if (*puVar8 == 0x336173697370696d && (char)puVar8[1] == '2') goto LAB_109e0cd28;
        }
LAB_109e0ccd0:
        uVar13 = 0;
      }
LAB_109e0cd34:
      *(undefined4 *)(param_1 + 5) = uVar13;
      goto LAB_109e0cd38;
    }
    uVar13 = (undefined4)plStack_88[2];
    pplVar11 = (long **)plStack_88[3];
    FUN_109e0d940();
    *(undefined4 *)(param_1 + 4) = uVar13;
    if (uVar4 == 2) goto LAB_109e0cd38;
    uVar13 = (undefined4)plVar6[4];
    pplVar11 = (long **)plVar6[5];
    func_0x000109e0db68();
    *(undefined4 *)((long)param_1 + 0x24) = uVar13;
    if (uVar4 < 4) goto LAB_109e0cd38;
    plVar9 = (long *)plVar6[6];
    pplVar11 = (long **)plVar6[7];
    plVar6 = plVar9;
    func_0x000109e0e284(plVar9,pplVar11);
    *(int *)(param_1 + 5) = (int)plVar6;
    func_0x000109e0ea44();
    uVar4 = (uint)plVar9;
    *(uint *)((long)param_1 + 0x2c) = uVar4;
    plVar6 = plStack_88;
  }
  plStack_88 = plVar6;
  if (uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000109e0cd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e05bd10)[*(uint *)(param_1 + 3)] * 4 + 0x109e0cd64))(3);
    return plVar9;
  }
  if (plVar6 != alStack_78) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (plStack_88 != alStack_78) {
    _free();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __Unwind_Resume();
  uStack_f8 = uStack_f8 & 0xffffff00;
  bStack_f4 = 0;
  if ((pplVar11 == (long **)0x4) && ((int)*plVar6 == 0x36383369)) {
    uStack_f8 = 0x25;
    bStack_f4 = 1;
  }
  plStack_108 = plVar6;
  pplStack_100 = pplVar11;
  FUN_109e0ed58(&plStack_108,&DAT_10f3b40a8,4,&UNK_10f60347d,4,&DAT_10f3b40ad,4,0x25);
  FUN_109e0ed58(&plStack_108,&UNK_10f603482,4,&UNK_10f603487,4,&UNK_10f60348c,4,0x25);
  FUN_109e0ed58(&plStack_108,&UNK_10f603491,5,&UNK_10f6032ed,6,&UNK_10f601611,7,0x26);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603241,7,0x15);
  FUN_109e0ed58(&plStack_108,&UNK_10f603497,10,&DAT_10f5b0107,3,&UNK_10f603405,5,0x15);
  FUN_109e0ed58(&plStack_108,&UNK_10f603249,9,&UNK_10f603413,5,&UNK_10f60340b,7,0x16);
  FUN_109e0ed58(&plStack_108,&UNK_10f60322b,9,&UNK_10f6034a2,3,&UNK_10f601629,5,0x17);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603235,0xb,0x18);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603419,7,0x18);
  FUN_109e0c7ec(&plStack_108,&UNK_10f601619,6,1);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6034a6,8,2);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603168,7,3);
  FUN_109e0c7ec(&plStack_108,&UNK_10f60317b,10,4);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603170,10,5);
  FUN_109e0c7ec(&plStack_108,&UNK_10f60319b,3,6);
  FUN_109e0c7ec(&plStack_108,"arm64",5,3);
  FUN_109e0c7ec(&plStack_108,&UNK_10f601620,8,5);
  FUN_109e0c7ec(&plStack_108,"arm64e",6,3);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603475,7,3);
  FUN_109e0c7ec(&plStack_108,&UNK_10f60319f,3,1);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031a3,5,2);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032ce,5,0x23);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032d4,7,0x24);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031a9,3,7);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031f5,4,0xf);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603216,6,0x14);
  uVar21 = CONCAT44(uVar22,0x10);
  puVar19 = &UNK_10f603431;
  uVar20 = 6;
  puVar17 = &UNK_10f603441;
  uVar18 = 0xb;
  FUN_109e0edb8(&plStack_108,&UNK_10f60320a,4,&UNK_10f6034af,6,&UNK_10f6034b6,0xc);
  FUN_109e0c7ec(&plStack_108,&UNK_10f60320f,6,0x11);
  FUN_109e0ed58(&plStack_108,&UNK_10f6034c3,0xe,&UNK_10f60344d,0xd,&UNK_10f603438,8,0x11,puVar17,
                uVar18,puVar19,uVar20,uVar21);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031fa,6,0x12);
  FUN_109e0edb8(&plStack_108,&UNK_10f6034d2,8,&UNK_10f603429,7,&UNK_10f60345b,0xb);
  FUN_109e0edb8(&plStack_108,&UNK_10f603201,8,&UNK_10f6034e5,9,&UNK_10f603467,0xd);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603253,4,0x19);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603186,6,0x1a);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603276,7,0x1b);
  FUN_109e0c7ec(&plStack_108,&UNK_10f60327e,7,0x1c);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031b7,7,0xc);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032be,5,0x20);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603421,7,0x20);
  FUN_109e0c7ec(&plStack_108,&UNK_10f60328c,5,0x1d);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603292,7,0x1f);
  FUN_109e0c7ec(&plStack_108,&UNK_10f60329a,7,0x1e);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603506,7,0x1e);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032c4,3,0x21);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032c8,5,0x22);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032f4,5,0x27);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603225,5,0x29);
  FUN_109e0c7ec(&plStack_108,&UNK_10f60321d,7,0x2a);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031d3,4,0x2b);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031d8,4,0x2c);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603195,5,0x2d);
  FUN_109e0c7ec(&plStack_108,&UNK_10f60318d,7,0x2e);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031c7,5,0x2f);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031bf,7,0x30);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032a9,4,0x31);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032a2,6,0x32);
  func_0x000109e0ee40(&plStack_108,&UNK_10f6032ae,7,&UNK_10f60350e,0xb,&UNK_10f60351a,0xb);
  func_0x000109e0ee40(&plStack_108,&UNK_10f6032b6,7,&UNK_10f603556,0xb,&UNK_10f603562,0xb);
  if ((((bStack_f4 & 1) == 0) && ((long **)0x6 < pplStack_100)) &&
     ((int)*plStack_108 == 0x696c616b && *(int *)((long)plStack_108 + 3) == 0x61626d69)) {
    uStack_f8 = 0x35;
    bStack_f4 = 1;
  }
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031cd,5,0x37);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603258,0xe,0x3a);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603267,0xe,0x3b);
  FUN_109e0c7ec(&plStack_108,&UNK_10f603286,5,0x36);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032dc,2,0x3c);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032df,6,0x38);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032e6,6,0x39);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031ad,4,10);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031dd,0xb,0xd);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031e9,0xb,0xe);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6031b2,4,0xb);
  FUN_109e0c7ec(&plStack_108,&UNK_10f6032fa,6,0x28);
  if (((bStack_f4 & 1) != 0) && (uStack_f8 != 0)) {
    return (long *)(ulong)uStack_f8;
  }
  if (pplVar11 < (long **)0x3) {
    return (long *)0x0;
  }
  if (((short)*plVar6 != 0x7261 || *(char *)((long)plVar6 + 2) != 'm') &&
     ((pplVar11 < (long **)0x5 ||
      (((int)*plVar6 != 0x6d756874 || *(char *)((long)plVar6 + 4) != 'b' &&
       ((pplVar11 < (long **)0x7 ||
        ((int)*plVar6 != 0x63726161 || *(int *)((long)plVar6 + 3) != 0x34366863)))))))) {
    if ((short)*plVar6 != 0x7062 || *(char *)((long)plVar6 + 2) != 'f') {
      return (long *)0x0;
    }
    func_0x000109e0c70c(plVar6,pplVar11);
    return plVar6;
  }
  plVar9 = plVar6;
  func_0x000109e0c484(plVar6,pplVar11);
  plVar10 = plVar6;
  func_0x000109e0c538(plVar6,pplVar11);
  iVar5 = (int)plVar10;
  iVar16 = (int)plVar9;
  if (iVar5 == 2) {
    if (2 < iVar16 - 1U) goto LAB_109e0d894;
    puVar17 = &UNK_10e05bf2c;
  }
  else {
    if ((iVar5 != 1) || (2 < iVar16 - 1U)) {
LAB_109e0d894:
      uVar4 = 0;
      goto LAB_109e0d898;
    }
    puVar17 = &UNK_10e05bf20;
  }
  uVar4 = *(uint *)(puVar17 + (ulong)(iVar16 - 1) * 4);
LAB_109e0d898:
  FUN_109e0c14c();
  if ((pplVar11 != (long **)0x0) &&
     (((iVar16 != 2 || (pplVar11 == (long **)0x1)) ||
      (((short)*plVar6 != 0x3276 && ((short)*plVar6 != 0x3376)))))) {
    plVar9 = plVar6;
    FUN_109e0c14c(plVar6,pplVar11);
    iVar16 = (int)plVar9;
    FUN_109e0baa0();
    FUN_109e0bb50();
    FUN_109e0bb2c(plVar6,pplVar11);
    uVar14 = 0x23;
    if (iVar5 == 2) {
      uVar14 = 0x24;
    }
    if ((int)plVar6 != 6 || iVar16 != 3) {
      uVar14 = uVar4;
    }
    return (long *)(ulong)uVar14;
  }
  return (long *)0x0;
}



/* Entry: 109e0ce54; end: 109e0d93f;  */

void FUN_109e0ce54(int *param_1,ulong param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar7;
  undefined8 uVar6;
  int *piStack_68;
  ulong uStack_60;
  uint uStack_58;
  byte bStack_54;
  
  uVar7 = (undefined4)((ulong)in_stack_ffffffffffffff70 >> 0x20);
  uStack_58 = uStack_58 & 0xffffff00;
  bStack_54 = 0;
  if ((param_2 == 4) && (*param_1 == 0x36383369)) {
    uStack_58 = 0x25;
    bStack_54 = 1;
  }
  piStack_68 = param_1;
  uStack_60 = param_2;
  FUN_109e0ed58(&piStack_68,&DAT_10f3b40a8,4,&UNK_10f60347d,4,&DAT_10f3b40ad,4,0x25);
  FUN_109e0ed58(&piStack_68,&UNK_10f603482,4,&UNK_10f603487,4,&UNK_10f60348c,4,0x25);
  FUN_109e0ed58(&piStack_68,&UNK_10f603491,5,&UNK_10f6032ed,6,&UNK_10f601611,7,0x26);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603241,7,0x15);
  FUN_109e0ed58(&piStack_68,&UNK_10f603497,10,&DAT_10f5b0107,3,&UNK_10f603405,5,0x15);
  FUN_109e0ed58(&piStack_68,&UNK_10f603249,9,&UNK_10f603413,5,&UNK_10f60340b,7,0x16);
  FUN_109e0ed58(&piStack_68,&UNK_10f60322b,9,&UNK_10f6034a2,3,&UNK_10f601629,5,0x17);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603235,0xb,0x18);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603419,7,0x18);
  FUN_109e0c7ec(&piStack_68,&UNK_10f601619,6,1);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6034a6,8,2);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603168,7,3);
  FUN_109e0c7ec(&piStack_68,&UNK_10f60317b,10,4);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603170,10,5);
  FUN_109e0c7ec(&piStack_68,&UNK_10f60319b,3,6);
  FUN_109e0c7ec(&piStack_68,"arm64",5,3);
  FUN_109e0c7ec(&piStack_68,&UNK_10f601620,8,5);
  FUN_109e0c7ec(&piStack_68,"arm64e",6,3);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603475,7,3);
  FUN_109e0c7ec(&piStack_68,&UNK_10f60319f,3,1);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031a3,5,2);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032ce,5,0x23);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032d4,7,0x24);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031a9,3,7);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031f5,4,0xf);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603216,6,0x14);
  uVar6 = CONCAT44(uVar7,0x10);
  puVar4 = &UNK_10f603431;
  uVar5 = 6;
  puVar2 = &UNK_10f603441;
  uVar3 = 0xb;
  FUN_109e0edb8(&piStack_68,&UNK_10f60320a,4,&UNK_10f6034af,6,&UNK_10f6034b6,0xc);
  FUN_109e0c7ec(&piStack_68,&UNK_10f60320f,6,0x11);
  FUN_109e0ed58(&piStack_68,&UNK_10f6034c3,0xe,&UNK_10f60344d,0xd,&UNK_10f603438,8,0x11,puVar2,uVar3
                ,puVar4,uVar5,uVar6);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031fa,6,0x12);
  FUN_109e0edb8(&piStack_68,&UNK_10f6034d2,8,&UNK_10f603429,7,&UNK_10f60345b,0xb);
  FUN_109e0edb8(&piStack_68,&UNK_10f603201,8,&UNK_10f6034e5,9,&UNK_10f603467,0xd);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603253,4,0x19);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603186,6,0x1a);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603276,7,0x1b);
  FUN_109e0c7ec(&piStack_68,&UNK_10f60327e,7,0x1c);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031b7,7,0xc);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032be,5,0x20);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603421,7,0x20);
  FUN_109e0c7ec(&piStack_68,&UNK_10f60328c,5,0x1d);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603292,7,0x1f);
  FUN_109e0c7ec(&piStack_68,&UNK_10f60329a,7,0x1e);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603506,7,0x1e);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032c4,3,0x21);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032c8,5,0x22);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032f4,5,0x27);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603225,5,0x29);
  FUN_109e0c7ec(&piStack_68,&UNK_10f60321d,7,0x2a);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031d3,4,0x2b);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031d8,4,0x2c);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603195,5,0x2d);
  FUN_109e0c7ec(&piStack_68,&UNK_10f60318d,7,0x2e);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031c7,5,0x2f);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031bf,7,0x30);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032a9,4,0x31);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032a2,6,0x32);
  func_0x000109e0ee40(&piStack_68,&UNK_10f6032ae,7,&UNK_10f60350e,0xb,&UNK_10f60351a,0xb);
  func_0x000109e0ee40(&piStack_68,&UNK_10f6032b6,7,&UNK_10f603556,0xb,&UNK_10f603562,0xb);
  if ((((bStack_54 & 1) == 0) && (6 < uStack_60)) &&
     (*piStack_68 == 0x696c616b && *(int *)((long)piStack_68 + 3) == 0x61626d69)) {
    uStack_58 = 0x35;
    bStack_54 = 1;
  }
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031cd,5,0x37);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603258,0xe,0x3a);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603267,0xe,0x3b);
  FUN_109e0c7ec(&piStack_68,&UNK_10f603286,5,0x36);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032dc,2,0x3c);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032df,6,0x38);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032e6,6,0x39);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031ad,4,10);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031dd,0xb,0xd);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031e9,0xb,0xe);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6031b2,4,0xb);
  FUN_109e0c7ec(&piStack_68,&UNK_10f6032fa,6,0x28);
  if ((((bStack_54 & 1) == 0) || (uStack_58 == 0)) && (2 < param_2)) {
    if (((short)*param_1 == 0x7261 && *(char *)((long)param_1 + 2) == 'm') ||
       ((4 < param_2 &&
        ((*param_1 == 0x6d756874 && (char)param_1[1] == 'b' ||
         ((6 < param_2 && (*param_1 == 0x63726161 && *(int *)((long)param_1 + 3) == 0x34366863))))))
       )) {
      piVar1 = param_1;
      func_0x000109e0c484(param_1,param_2);
      func_0x000109e0c538(param_1,param_2);
      FUN_109e0c14c();
      if ((param_2 != 0) &&
         ((((int)piVar1 != 2 || (param_2 == 1)) ||
          (((short)*param_1 != 0x3276 && ((short)*param_1 != 0x3376)))))) {
        FUN_109e0c14c(param_1,param_2);
        FUN_109e0baa0();
        FUN_109e0bb50();
        FUN_109e0bb2c(param_1,param_2);
      }
    }
    else if ((short)*param_1 == 0x7062 && *(char *)((long)param_1 + 2) == 'f') {
      func_0x000109e0c70c(param_1,param_2);
    }
  }
  return;
}



/* Entry: 109e0d940; end: 109e0eb9b;  */

undefined8 FUN_109e0d940(int *param_1,long param_2)

{
  if (param_2 < 4) {
    if (param_2 == 2) {
      if ((short)*param_1 == 0x6370) {
        return 2;
      }
      if ((short)*param_1 == 0x656f) {
        return 0xe;
      }
    }
    else if (param_2 == 3) {
      if ((short)*param_1 == 0x6973 && *(char *)((long)param_1 + 2) == 'e') {
        return 3;
      }
      if ((short)*param_1 == 0x7366 && *(char *)((long)param_1 + 2) == 'l') {
        return 4;
      }
      if ((short)*param_1 == 0x6269 && *(char *)((long)param_1 + 2) == 'm') {
        return 5;
      }
      if ((short)*param_1 == 0x6d69 && *(char *)((long)param_1 + 2) == 'g') {
        return 6;
      }
      if ((short)*param_1 == 0x746d && *(char *)((long)param_1 + 2) == 'i') {
        return 7;
      }
      if ((short)*param_1 == 0x7363 && *(char *)((long)param_1 + 2) == 'r') {
        return 9;
      }
      if ((short)*param_1 == 0x6d61 && *(char *)((long)param_1 + 2) == 'd') {
        return 0xb;
      }
    }
  }
  else if (param_2 == 4) {
    if (*param_1 == 0x69656373) {
      return 3;
    }
    if (*param_1 == 0x6173656d) {
      return 0xc;
    }
    if (*param_1 == 0x65737573) {
      return 0xd;
    }
  }
  else if (param_2 == 6) {
    if (*param_1 == 0x6469766e && (short)param_1[1] == 0x6169) {
      return 8;
    }
    if (*param_1 == 0x6972796d && (short)param_1[1] == 0x6461) {
      return 10;
    }
  }
  else if ((param_2 == 5) && (*param_1 == 0x6c707061 && (char)param_1[1] == 'e')) {
    return 1;
  }
  return 0;
}



/* Entry: 109e0eb9c; end: 109e0ec37;  */

undefined1  [16] FUN_109e0eb9c(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar1 = *(char *)((long)param_1 + 0x17);
  puStack_60 = (undefined8 *)*param_1;
  if (-1 < (long)cVar1) {
    puStack_60 = param_1;
  }
  lStack_58 = param_1[1];
  if (-1 < cVar1) {
    lStack_58 = (long)cVar1;
  }
  uStack_30 = CONCAT71(uStack_30._1_7_,0x2d);
  func_0x000109d39ec8(auStack_50,&puStack_60,&uStack_30,1);
  uStack_28 = uStack_38;
  uStack_30 = uStack_40;
  puStack_60._0_1_ = 0x2d;
  func_0x000109d39ec8(auStack_50,&uStack_30,&puStack_60,1);
  uStack_28 = uStack_38;
  uStack_30 = uStack_40;
  puStack_60 = (undefined8 *)CONCAT71(puStack_60._1_7_,0x2d);
  func_0x000109d39ec8(auStack_50,&uStack_30,&puStack_60,1);
  return auStack_50;
}



/* Entry: 109e0ec38; end: 109e0ed2b;  */

undefined1  [16] FUN_109e0ec38(int *param_1,ulong param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  ulong uStack_50;
  ulong uStack_48;
  
  piVar2 = param_1;
  FUN_109e0eb9c();
  uVar1 = param_1[9];
  uVar5 = (ulong)uVar1;
  uVar4 = param_2;
  func_0x000109e0c6f0(uVar5);
  if ((param_2 < uVar4) ||
     ((uVar4 != 0 && (piVar3 = piVar2, _memcmp(piVar2,uVar5,uVar4), (int)piVar3 != 0)))) {
    if (uVar1 == 0xb && 4 < param_2) {
      if (*piVar2 == 0x6f63616d && (char)piVar2[1] == 's') {
        piVar2 = (int *)((long)piVar2 + 5);
        param_2 = param_2 - 5;
      }
    }
  }
  else {
    piVar2 = (int *)((long)piVar2 + uVar4);
    param_2 = param_2 - uVar4;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_109e04a74(&uStack_50,piVar2,param_2);
  uVar4 = uStack_48 & 0x7fffffff | 0x80000000;
  if (-1 < (long)uStack_48) {
    uVar4 = uStack_48;
  }
  auVar6._0_8_ = uStack_50 | uStack_48 & 0x8000000000000000;
  auVar6._8_8_ = uVar4;
  return auVar6;
}



/* Entry: 109e0ed2c; end: 109e0ed57;  */

void FUN_109e0ed2c(long param_1,ulong param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  ulong uStack_28;
  
  if (*(int *)(param_1 + 0x24) != 0xb) {
    if ((int)param_2 == 10) {
      param_2 = (ulong)(param_3 + 4);
      param_3 = param_4;
      param_4 = 0;
    }
    else {
      param_2 = (ulong)((int)param_2 + 9);
    }
  }
  if (param_3 == 0) {
    uVar1 = param_2;
    FUN_109e0ec38();
    uStack_40 = param_2 & 0xffffffff;
    lStack_30 = param_1;
    uStack_28 = uVar1;
  }
  else {
    uStack_40 = param_2 & 0xffffffff | (ulong)param_3 << 0x20 | 0x8000000000000000;
    if (param_4 != 0) {
      FUN_109e0ec38();
      uStack_38 = (ulong)(param_4 | 0x80000000);
      lStack_30 = param_1;
      uStack_28 = param_2;
      goto LAB_109d3720c;
    }
    FUN_109e0ec38();
    lStack_30 = param_1;
    uStack_28 = param_2;
  }
  uStack_38 = 0;
LAB_109d3720c:
  FUN_109d37228(&lStack_30,&uStack_40);
  return;
}



/* Entry: 109e0ed58; end: 109e0edb7;  */

undefined8 * FUN_109e0ed58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  long in_x6;
  undefined4 in_w7;
  
  FUN_109e0c7ec();
  FUN_109e0c7ec();
  if (((*(byte *)((long)param_1 + 0x14) & 1) == 0) && (param_1[1] == in_x6)) {
    if (param_1[1] != 0) {
      uVar1 = *param_1;
      _memcmp(uVar1,in_x5);
      if ((int)uVar1 != 0) {
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 2) = in_w7;
    *(undefined1 *)((long)param_1 + 0x14) = 1;
  }
  return param_1;
}



/* Entry: 109e0edb8; end: 109e0eee3;  */

undefined8 * FUN_109e0edb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined4 in_stack_00000020;
  
  FUN_109e0c7ec();
  FUN_109e0c7ec();
  FUN_109e0c7ec();
  FUN_109e0c7ec();
  if (((*(byte *)((long)param_1 + 0x14) & 1) == 0) && (param_1[1] == in_stack_00000018)) {
    if (param_1[1] != 0) {
      uVar1 = *param_1;
      _memcmp(uVar1,in_stack_00000010);
      if ((int)uVar1 != 0) {
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 2) = in_stack_00000020;
    *(undefined1 *)((long)param_1 + 0x14) = 1;
  }
  return param_1;
}



/* Entry: 109e0eee4; end: 109e0ef67;  */

void FUN_109e0eee4(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38) + -5;
  if (**(long **)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
    do {
      _printf(&UNK_10f5881f5);
      if ((int)plVar2[7] != 0x29) {
        (**(code **)*plVar2)(plVar2);
      }
      _printf(&UNK_10f4edf8b);
      plVar1 = plVar2 + 5;
      plVar2 = (long *)*plVar1 + -5;
    } while (*(long *)*plVar1 != 0 && plVar2 != (long *)0x0);
  }
  return;
}



/* Entry: 109e0ef68; end: 109e0f6f3;  */

long * FUN_109e0ef68(long *param_1,long param_2,long *param_3,long *param_4,undefined8 *param_5,
                    undefined8 param_6)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar9 = param_3[4];
  bVar1 = *(byte *)(lVar9 + 4);
  if (bVar1 != 0x13 && bVar1 != 0x16) {
    if (((*(byte *)(lVar9 + 0xe) < 2) || (2 < bVar1 - 2)) &&
       ((*(byte *)(lVar9 + 0xe) != 1 || *(byte *)(lVar9 + 0xd) < 2) || 0xb < (bVar1 & 0xfc))) {
      FUN_109e9ed98(param_6,param_2,&UNK_10f6035b4);
    }
  }
  bVar1 = *(byte *)(param_4[4] + 4);
  if (bVar1 != 0x16) {
    if ((bVar1 & 0xfe) == 0) {
      if (*(char *)(param_4[4] + 0xd) == '\x01') goto LAB_109e0f038;
      puVar6 = &UNK_10f60360c;
    }
    else {
      puVar6 = &UNK_10f6035eb;
    }
    FUN_109e9ed98(param_6,param_2,puVar6);
  }
LAB_109e0f038:
  plVar3 = param_4;
  (**(code **)(*param_4 + 0x30))(param_4,param_1,0);
  if (plVar3 == (long *)0x0) {
    lVar9 = param_3[4];
    if (*(char *)(lVar9 + 4) != '\x13') goto LAB_109e0f5dc;
    plVar3 = param_3;
    if (*(int *)(lVar9 + 0x10) == 0) {
      plVar4 = param_3;
      (**(code **)(*param_3 + 0x40))();
      if (*(int *)(param_2 + 0xf8) == 2) {
        if (((*(uint *)(plVar4 + 8) & 0x7808) != 0x2000) ||
           (iVar8 = *(int *)(param_2 + 0x240), iVar8 == 0)) goto LAB_109e0f2f4;
LAB_109e0f2d4:
        (**(code **)(*param_3 + 0x48))();
        if (plVar3 == (long *)0x0) goto LAB_109e0f4b8;
        iVar8 = iVar8 + -1;
        goto LAB_109e0f2ec;
      }
      if (*(int *)(param_2 + 0xf8) == 1) {
        if (((*(uint *)(plVar4 + 8) & 0x7800) == 0x2000) &&
           (iVar8 = *(int *)(param_2 + 0x240), iVar8 != 0)) goto LAB_109e0f2d4;
        (**(code **)(*param_3 + 0x40))();
        if (((*(uint *)(plVar3 + 8) & 0x7800) == 0x2800) &&
           (plVar3 = param_3, (**(code **)(*param_3 + 0x40))(),
           (*(byte *)(plVar3 + 8) >> 3 & 1) == 0)) goto LAB_109e0f4b8;
      }
LAB_109e0f2f4:
      plVar3 = param_3;
      (**(code **)(*param_3 + 0x40))();
      if ((*(uint *)(plVar3 + 8) & 0x7800) == 0x1000) {
        plVar3 = param_3;
        (**(code **)(*param_3 + 0x40))();
        lVar10 = plVar3[0x11];
        lVar9 = lVar10;
        FUN_109ec85e4(lVar10,plVar3[5]);
        if (((int)lVar9 < 0) || ((int)lVar9 == *(int *)(lVar10 + 0x10) + -1)) goto LAB_109e0f4b8;
        puVar6 = &UNK_10f603678;
      }
      else {
        puVar6 = &UNK_10f603653;
      }
LAB_109e0f4ac:
      FUN_109e9ed98(param_5,param_2,puVar6);
    }
    else {
      do {
        lVar9 = *(long *)(lVar9 + 0x30);
      } while (*(char *)(lVar9 + 4) == '\x13');
      if (*(char *)(lVar9 + 4) == '\x12') {
        plVar4 = param_3;
        (**(code **)(*param_3 + 0x40))();
        if ((*(uint *)(plVar4 + 8) & 0x7800) == 0x800) {
          uVar7 = *(uint *)(param_2 + 0xec);
          if (uVar7 == 0) {
            uVar7 = *(uint *)(param_2 + 0xe8);
          }
          uVar11 = 0x13f;
          if (*(char *)(param_2 + 0xe4) == '\0') {
            uVar11 = 399;
          }
          if ((((uVar11 < uVar7) || ((*(byte *)(param_2 + 0x315) & 1) != 0)) ||
              ((*(byte *)(param_2 + 0x3bf) & 1) != 0)) || (*(char *)(param_2 + 0x379) == '\x01'))
          goto LAB_109e0f148;
LAB_109e0f470:
          (**(code **)(*param_3 + 0x40))();
          puVar6 = &UNK_10f6036c0;
          goto LAB_109e0f4ac;
        }
LAB_109e0f148:
        plVar4 = param_3;
        (**(code **)(*param_3 + 0x40))();
        if ((*(uint *)(plVar4 + 8) & 0x7800) == 0x1000) {
          uVar7 = *(uint *)(param_2 + 0xec);
          if (uVar7 == 0) {
            uVar7 = *(uint *)(param_2 + 0xe8);
          }
          if (((uVar7 < 400) || (*(char *)(param_2 + 0xe4) != '\0')) &&
             ((*(byte *)(param_2 + 0x315) & 1) == 0)) goto LAB_109e0f470;
        }
      }
      (**(code **)(*param_3 + 0x48))();
      if (plVar3 != (long *)0x0) {
        if (*(char *)(param_3[4] + 4) == '\x13') {
          iVar8 = *(int *)(param_3[4] + 0x10) + -1;
        }
        else {
          iVar8 = -2;
        }
LAB_109e0f2ec:
        *(int *)(plVar3 + 0xc) = iVar8;
      }
    }
LAB_109e0f4b8:
    for (lVar9 = param_3[4]; *(char *)(lVar9 + 4) == '\x13'; lVar9 = *(long *)(lVar9 + 0x30)) {
    }
    if (*(char *)(lVar9 + 4) == '\r') {
      cVar2 = *(char *)(param_2 + 0xe4);
      uVar7 = *(uint *)(param_2 + 0xec);
      uVar11 = uVar7;
      if (uVar7 == 0) {
        uVar11 = *(uint *)(param_2 + 0xe8);
      }
      uVar14 = 0x13f;
      if (cVar2 == '\0') {
        uVar14 = 399;
      }
      if (((uVar11 <= uVar14) && ((*(byte *)(param_2 + 0x315) & 1) == 0)) &&
         (((*(byte *)(param_2 + 0x3bf) & 1) == 0 &&
          (((*(byte *)(param_2 + 0x379) & 1) == 0 && ((*(byte *)(param_2 + 0x2f7) & 1) == 0)))))) {
        if (uVar7 == 0) {
          uVar7 = *(uint *)(param_2 + 0xe8);
        }
        uVar11 = 299;
        if (cVar2 == '\0') {
          uVar11 = 0x81;
        }
        if (uVar11 < uVar7) {
          FUN_109e9ed98(param_5,param_2,&UNK_10f6036fd);
        }
        else {
          if (cVar2 == '\0') {
            puVar6 = &UNK_10f6037c0;
          }
          else {
            puVar6 = &UNK_10f603762;
          }
          FUN_109e9f044(param_5,param_2,puVar6);
        }
      }
    }
    if (*(char *)(param_2 + 0xe4) == '\x01') {
      for (lVar9 = param_3[4]; *(char *)(lVar9 + 4) == '\x13'; lVar9 = *(long *)(lVar9 + 0x30)) {
      }
      if (*(char *)(lVar9 + 4) == '\x0f') {
        FUN_109e9ed98(param_5,param_2,&UNK_10f60381e);
      }
    }
    goto LAB_109e0f5dc;
  }
  if ((*(byte *)(param_4[4] + 4) & 0xfe) != 0) goto LAB_109e0f5dc;
  iVar8 = (int)plVar3[5];
  lVar9 = param_3[4];
  if (*(byte *)(lVar9 + 0xe) < 2) {
    if (*(byte *)(lVar9 + 0xe) != 1 || *(byte *)(lVar9 + 0xd) < 2) goto LAB_109e0f1cc;
    if ((*(uint *)(lVar9 + 4) & 0xfc) < 0xc) {
      if ((int)(uint)*(byte *)(lVar9 + 0xd) <= iVar8) goto LAB_109e0f368;
      goto LAB_109e0f28c;
    }
    uVar7 = *(uint *)(lVar9 + 4) & 0xff;
LAB_109e0f1d0:
    if (((uVar7 == 0x13) && (0 < *(int *)(lVar9 + 0x10))) && (*(int *)(lVar9 + 0x10) <= iVar8)) {
LAB_109e0f368:
      puVar6 = &UNK_10f603627;
    }
    else {
LAB_109e0f28c:
      if (-1 < iVar8) goto LAB_109e0f380;
      puVar6 = &UNK_10f60363d;
    }
    FUN_109e9ed98(param_5,param_2,puVar6);
  }
  else {
    if (2 < *(byte *)(lVar9 + 4) - 2) {
LAB_109e0f1cc:
      uVar7 = (uint)*(byte *)(lVar9 + 4);
      goto LAB_109e0f1d0;
    }
    FUN_109ec8534();
    if (iVar8 < (int)(uint)*(byte *)(lVar9 + 0xd)) goto LAB_109e0f28c;
    lVar9 = param_3[4];
    FUN_109ec8534();
    if (*(char *)(lVar9 + 0xd) != '\0') goto LAB_109e0f368;
  }
LAB_109e0f380:
  if (*(char *)(param_3[4] + 4) != '\x13') goto LAB_109e0f5dc;
  if ((int)param_3[3] == 1) {
    lVar10 = param_3[5];
    lVar9 = lVar10;
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0x18) != 2)) {
      if (*(int *)(lVar10 + 0x18) != 0) goto LAB_109e0f5dc;
      do {
        lVar9 = *(long *)(lVar9 + 0x28);
      } while (lVar9 != 0 && *(int *)(lVar9 + 0x18) == 0);
      if (*(int *)(lVar9 + 0x18) != 2) goto LAB_109e0f5dc;
    }
    lVar9 = *(long *)(lVar9 + 0x28);
    for (lVar12 = *(long *)(lVar9 + 0x20); *(char *)(lVar12 + 4) == '\x13';
        lVar12 = *(long *)(lVar12 + 0x30)) {
    }
    if (lVar12 != *(long *)(lVar9 + 0x88)) goto LAB_109e0f5dc;
    uVar13 = (ulong)*(uint *)(param_3 + 6);
    if (iVar8 <= *(int *)(*(long *)(lVar9 + 0x80) + uVar13 * 4)) goto LAB_109e0f5dc;
    *(int *)(*(long *)(lVar9 + 0x80) + uVar13 * 4) = iVar8;
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x30) + uVar13 * 0x30 + 8);
  }
  else {
    if (((int)param_3[3] != 2) || (lVar9 = param_3[5], iVar8 <= *(int *)(lVar9 + 0x60)))
    goto LAB_109e0f5dc;
    *(int *)(lVar9 + 0x60) = iVar8;
    uVar5 = *(undefined8 *)(lVar9 + 0x28);
  }
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_48 = param_5[3];
  uStack_50 = param_5[2];
  FUN_109e1588c(uVar5,iVar8 + 1,&uStack_60,param_2);
LAB_109e0f5dc:
  lVar9 = param_3[4];
  bVar1 = *(byte *)(lVar9 + 4);
  if (((bVar1 == 0x13) || (1 < *(byte *)(lVar9 + 0xe) && bVar1 - 2 < 3)) ||
     ((*(byte *)(lVar9 + 0xe) == 1 && 1 < *(byte *)(lVar9 + 0xd)) && (bVar1 & 0xfc) < 0xc)) {
    FUN_109f658b0(param_1,0x38);
    if (param_1 != (long *)0x0) {
      param_1[6] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = (long)&UNK_10e05d730;
    *param_1 = (long)&PTR_DAT_110b640d0;
    param_1[6] = (long)param_4;
    FUN_109eab364(param_1,param_3);
    param_3 = param_1;
  }
  else if (bVar1 != 0x16) {
    FUN_109f658b0(param_1,0x38);
    if (param_1 != (long *)0x0) {
      param_1[6] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = (long)&UNK_10e05d730;
    *param_1 = (long)&PTR_DAT_110b640d0;
    param_1[6] = (long)param_4;
    FUN_109eab364(param_1,param_3);
    param_1[4] = (long)&UNK_10e05d730;
    param_3 = param_1;
  }
  return param_3;
}


