/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109cf31c0; end: 109cf3943;  */

undefined1  [16] FUN_109cf31c0(undefined8 *param_1,long param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  uint uVar19;
  int *piVar20;
  long lVar21;
  undefined8 *puVar23;
  uint *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined4 uVar29;
  long lVar30;
  undefined4 *puVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  int *piStack_a0;
  undefined8 uStack_90;
  int *piStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uVar22;
  
  if (param_3 < 0x15) {
    if (param_3 == 0xd) {
      if ((*(byte *)(param_2 + 0x16) >> 4 & 1) == 0) {
        uVar19 = 0;
        if (*(int *)(param_2 + 0x1f0) != 0) {
          uVar19 = 3;
        }
      }
      else {
        uVar19 = *(uint *)(param_2 + 0x1c8);
        uVar33 = uVar19 - 1;
        if (uVar33 == 0) {
          uVar33 = 3;
        }
        if (uVar19 != 0) {
          uVar19 = uVar33;
        }
      }
      uVar22 = (ulong)uVar19;
      puVar24 = (uint *)*param_1;
      lVar21 = param_1[1];
      uVar32 = (ulong)*puVar24;
      uVar34 = puVar24[1];
      uVar33 = puVar24[2];
      uVar19 = puVar24[3];
      uStack_c0 = CONCAT44(uVar34,uVar19);
      uStack_b8 = CONCAT44(uVar33,*puVar24);
      if ((int)((ulong)(lVar21 - (long)puVar24) >> 4) < 2) goto LAB_109cf36c0;
      uVar32 = 1;
      do {
        lVar28 = 0;
        puVar1 = puVar24 + uVar32 * 4;
        uStack_d8 = CONCAT44(puVar1[1],puVar1[3]);
        uStack_d0 = CONCAT44(puVar1[2],*puVar1);
        do {
          if (uVar22 << 2 == lVar28) {
            *(int *)((long)&uStack_c0 + uVar22 * 4) =
                 *(int *)((long)&uStack_c0 + uVar22 * 4) + *(int *)((long)&uStack_d8 + uVar22 * 4);
          }
          else if (*(int *)((long)&uStack_c0 + lVar28) != *(int *)((long)&uStack_d8 + lVar28)) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (&uStack_a8,&UNK_10f5aa8d9,*(ulong *)(param_2 + 0xf8) & 0xfffffffffffffffc);
            func_0x000109259240(&uStack_90,&uStack_a8,&UNK_10f5aa8ee);
            func_0x000109259240(&uStack_78,&uStack_90,&UNK_10f5aa8f2);
            FUN_109cd8934(&uStack_78);
            goto LAB_109cf3824;
          }
          lVar28 = lVar28 + 4;
        } while (lVar28 != 0x10);
        uVar32 = uVar32 + 1;
      } while (uVar32 != ((ulong)(lVar21 - (long)puVar24) >> 4 & 0x7fffffff));
LAB_109cf34ec:
      uVar32 = uStack_b8 & 0xffffffff;
      uVar33 = uStack_b8._4_4_;
      uVar34 = uStack_c0._4_4_;
      uVar19 = (uint)uStack_c0;
LAB_109cf36c0:
      auVar35._0_8_ = uVar32 | (ulong)uVar34 << 0x20;
      auVar35._12_4_ = uVar19;
      auVar35._8_4_ = uVar33;
      return auVar35;
    }
    if (param_3 == 0x13) {
      piVar20 = (int *)*param_1;
      uVar19 = piVar20[3];
      uVar33 = *piVar20 * piVar20[1] * piVar20[2];
      uVar32 = 1;
      uVar34 = 1;
      goto LAB_109cf36c0;
    }
  }
  else {
    if (param_3 == 0x15) {
      lVar21 = 0;
      piVar20 = (int *)*param_1;
      lVar26 = (long)*(int *)(param_2 + 0x88);
      lVar27 = (long)*(int *)(param_2 + 0x78);
      iVar8 = *(int *)(param_2 + 0x38);
      lVar25 = *(long *)(param_2 + 0x40);
      lVar28 = *(long *)(param_2 + 0x90) + lVar26 * 4;
      if (param_4 != 1 || 0 >= lVar26) {
        lVar28 = *(long *)(param_2 + 0x80) + lVar27 * 4;
      }
      do {
        lVar30 = lVar28 + -0x10;
        if ((param_4 == 1 && 0 < lVar26 ||
             (param_4 == 0 && lVar27 != 0) && (param_4 != 0 || -1 < lVar27)) ||
           (lVar30 = lVar25, iVar8 == 4)) {
LAB_109cf3304:
          uVar29 = *(undefined4 *)(lVar30 + lVar21);
LAB_109cf3308:
          *(undefined4 *)((long)&uStack_c0 + lVar21) = uVar29;
        }
        else if (iVar8 == 3) {
          lVar30 = lVar25 + -4;
          if (lVar21 != 0) goto LAB_109cf3304;
          uVar29 = 1;
          goto LAB_109cf3308;
        }
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0x10);
      uVar3 = (uint)uStack_b8;
      if (param_4 != 1) {
        uVar3 = uStack_b8._4_4_;
      }
      uVar32 = (ulong)uVar3;
      uVar33 = uStack_b8._4_4_;
      uVar34 = uStack_c0._4_4_;
      if (param_4 != 1) {
        uVar33 = uStack_c0._4_4_;
        uVar34 = (uint)uStack_b8;
      }
      uVar19 = (uint)uStack_c0;
      if (piVar20[2] * piVar20[3] * piVar20[1] * *piVar20 ==
          uVar34 * uVar3 * uVar33 * (uint)uStack_c0) goto LAB_109cf36c0;
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_a8,&UNK_10f5aa8d9,*(ulong *)(param_2 + 0xf8) & 0xfffffffffffffffc);
      func_0x000109259240(&uStack_90,&uStack_a8,&UNK_10f5aa8ee);
      func_0x000109259240(&uStack_78,&uStack_90,&UNK_10f5aa947);
      FUN_109cd8934(&uStack_78);
      goto LAB_109cf3824;
    }
    if (param_3 == 0x16) {
      if (param_4 == 0) {
        puVar24 = (uint *)*param_1;
        uVar33 = puVar24[2];
        uVar19 = puVar24[3];
        uVar3 = *puVar24;
        uVar34 = puVar24[1];
        uStack_78 = CONCAT44(uVar33,uVar19);
        uStack_70 = (int *)CONCAT44(uVar3,uVar34);
        if (*(int *)(param_2 + 0x58) < 1) {
          uVar2 = uVar33;
          uVar13 = uVar3;
          uVar14 = uVar34;
          if (*(int *)(param_2 + 0x148) == 1) {
            uVar2 = uVar34;
            uVar13 = uVar33;
            uVar14 = uVar3;
          }
          if (1 < *(int *)(param_2 + 0x148) - 2U) {
            uVar3 = uVar2;
            uVar34 = uVar13;
            uVar33 = uVar14;
          }
          uVar32 = (ulong)uVar3;
        }
        else {
          uVar18 = 0;
          FUN_109d03770();
          lVar21 = 0;
          uStack_90 = param_2;
          piStack_88 = (int *)uVar18;
          do {
            *(undefined4 *)((long)&uStack_c0 + lVar21) =
                 *(undefined4 *)((long)&uStack_78 + (ulong)*(uint *)((long)&uStack_90 + lVar21) * 4)
            ;
            lVar21 = lVar21 + 4;
          } while (lVar21 != 0x10);
          uVar32 = uStack_b8 >> 0x20;
          uVar33 = uStack_c0._4_4_;
          uVar34 = (uint)uStack_b8;
          uVar19 = (uint)uStack_c0;
        }
        goto LAB_109cf36c0;
      }
      if (param_4 != 1) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&uStack_a8,&UNK_10f5aa8d9,*(ulong *)(param_2 + 0xf8) & 0xfffffffffffffffc);
        func_0x000109259240(&uStack_90,&uStack_a8,&UNK_10f5aa8ee);
        func_0x000109259240(&uStack_78,&uStack_90,&UNK_10f5aa911);
        FUN_109cd8934(&uStack_78);
        goto LAB_109cf3824;
      }
      puVar24 = (uint *)*param_1;
      uVar3 = *puVar24;
      uVar34 = puVar24[1];
      uVar33 = puVar24[2];
      uVar19 = puVar24[3];
      uStack_78 = CONCAT44(uVar34,uVar19);
      uStack_70 = (int *)CONCAT44(uVar33,uVar3);
      if (*(int *)(param_2 + 0x68) < 1) {
        uVar2 = uVar34;
        uVar13 = uVar33;
        uVar14 = uVar3;
        if (*(uint *)(param_2 + 0x148) == 3) {
          uVar2 = uVar33;
          uVar13 = uVar3;
          uVar14 = uVar34;
        }
        if (1 < *(uint *)(param_2 + 0x148)) {
          uVar3 = uVar2;
          uVar34 = uVar13;
          uVar33 = uVar14;
        }
        uVar32 = (ulong)uVar3;
        goto LAB_109cf36c0;
      }
      uVar18 = 1;
      FUN_109d03770();
      lVar21 = 0;
      uStack_90 = param_2;
      piStack_88 = (int *)uVar18;
      do {
        *(undefined4 *)((long)&uStack_c0 + lVar21) =
             *(undefined4 *)((long)&uStack_78 + (ulong)*(uint *)((long)&uStack_90 + lVar21) * 4);
        lVar21 = lVar21 + 4;
      } while (lVar21 != 0x10);
      goto LAB_109cf34ec;
    }
    if (param_3 == 0x28) {
      if (*(int *)(param_2 + 0x48) == 2) {
        puVar31 = (undefined4 *)*param_1;
        puVar17 = puVar31;
        FUN_109d036b0();
        uStack_78._4_4_ = puVar31[1];
        uStack_78._0_4_ = puVar31[3];
        uStack_70 = (int *)CONCAT44(puVar31[2],*puVar31);
        uVar33 = (int)puVar17 - (int)((ulong)param_2 >> 0x20);
        *(uint *)((long)&uStack_78 + (long)(int)param_2 * 4) =
             uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU);
        uVar32 = (ulong)uStack_70 & 0xffffffff;
        uVar33 = uStack_70._4_4_;
        uVar34 = uStack_78._4_4_;
        uVar19 = (uint)uStack_78;
      }
      else {
        func_0x0001093ed64c(&uStack_78,param_2 + 0x98);
        func_0x0001093ed64c(&uStack_90,param_2 + 0xa8);
        func_0x0001093ed64c(&uStack_a8,param_2 + 0xb8);
        iVar9 = *piStack_88 - *uStack_70;
        iVar8 = -iVar9;
        if (-1 < iVar9) {
          iVar8 = iVar9;
        }
        iVar4 = *piStack_a0;
        iVar6 = piStack_a0[1];
        iVar9 = -iVar4;
        if (-1 < iVar4) {
          iVar9 = iVar4;
        }
        iVar10 = piStack_88[1] - uStack_70[1];
        iVar4 = -iVar10;
        if (-1 < iVar10) {
          iVar4 = iVar10;
        }
        iVar10 = -iVar6;
        if (-1 < iVar6) {
          iVar10 = iVar6;
        }
        iVar11 = piStack_88[2] - uStack_70[2];
        iVar6 = -iVar11;
        if (-1 < iVar11) {
          iVar6 = iVar11;
        }
        iVar5 = piStack_a0[2];
        iVar7 = piStack_a0[3];
        iVar11 = -iVar5;
        if (-1 < iVar5) {
          iVar11 = iVar5;
        }
        iVar12 = piStack_88[3] - uStack_70[3];
        iVar5 = -iVar12;
        if (-1 < iVar12) {
          iVar5 = iVar12;
        }
        iVar12 = -iVar7;
        if (-1 < iVar7) {
          iVar12 = iVar7;
        }
        if ((0 < uStack_a8._4_4_) && (*(long *)(piStack_a0 + -2) == 0)) {
          __ZdlPv();
        }
        if ((0 < uStack_90._4_4_) && (*(long *)(piStack_88 + -2) == 0)) {
          __ZdlPv();
        }
        uVar19 = 0;
        if (iVar9 != 0) {
          uVar19 = (iVar8 + iVar9 + -1) / iVar9;
        }
        uVar34 = 0;
        if (iVar10 != 0) {
          uVar34 = (iVar10 + iVar4 + -1) / iVar10;
        }
        uVar33 = 0;
        if (iVar11 != 0) {
          uVar33 = (iVar11 + iVar6 + -1) / iVar11;
        }
        uVar32 = (ulong)uVar33;
        uVar33 = 0;
        if (iVar12 != 0) {
          uVar33 = (iVar12 + iVar5 + -1) / iVar12;
        }
        if ((0 < (int)uStack_78._4_4_) && (*(long *)(uStack_70 + -2) == 0)) {
          __ZdlPv();
        }
      }
      goto LAB_109cf36c0;
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_d8,&UNK_10f5aa8d9,*(ulong *)(param_2 + 0xf8) & 0xfffffffffffffffc);
  func_0x000109259240(&uStack_c0,&uStack_d8,&UNK_10f5aa8ee);
  func_0x000109259240(&uStack_a8,&uStack_c0,&DAT_10f638984);
  puVar23 = (undefined8 *)(*(ulong *)(param_2 + 0x100) & 0xfffffffffffffffc);
  uVar32 = puVar23[1];
  puVar15 = (undefined8 *)*puVar23;
  if (-1 < (char)*(byte *)((long)puVar23 + 0x17)) {
    uVar32 = (ulong)*(byte *)((long)puVar23 + 0x17);
    puVar15 = puVar23;
  }
  puVar23 = &uStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar23,puVar15,uVar32);
  piStack_88 = (int *)puVar23[1];
  uStack_90 = *puVar23;
  uStack_80 = puVar23[2];
  puVar23[1] = 0;
  puVar23[2] = 0;
  *puVar23 = 0;
  func_0x000109259240(&uStack_78,&uStack_90,&UNK_10f5aa967);
  FUN_109cd8934(&uStack_78);
LAB_109cf3824:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x109cf3828);
  (*pcVar16)();
}



/* Entry: 109cf3944; end: 109cf46a3;  */

/* WARNING: Possible PIC construction at 0x000109cf4350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109cf4354) */
/* WARNING: Removing unreachable block (ram,0x000109cf4514) */
/* WARNING: Removing unreachable block (ram,0x000109cf435c) */

void FUN_109cf3944(undefined8 param_1,int *param_2,ulong param_3,int param_4,undefined4 *param_5)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 **ppuVar3;
  byte bVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  uint uVar20;
  long lVar21;
  ulong unaff_x19;
  int *piVar22;
  int *unaff_x20;
  undefined4 *unaff_x21;
  undefined4 *puVar23;
  ulong unaff_x22;
  int iVar24;
  int *piVar25;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  bVar4 = *(byte *)(param_5 + 0x28);
  if (param_4 < 0x16) {
    if (param_4 == 0xd) {
      uVar20 = (uint)(*(int *)(param_3 + 0x1f0) != 0);
      if ((*(byte *)(param_3 + 0x16) & 0x10) != 0) {
        uVar20 = *(uint *)(param_3 + 0x1c8);
      }
      if (uVar20 == 3) {
        if (3 < bVar4) {
          if (param_2[0x23] == 0x3d4) {
            uVar6 = *(ulong *)(param_2 + 0x20);
          }
          else {
            func_0x000109c819a4(param_2);
            param_2[0x23] = 0x3d4;
            uVar6 = *(ulong *)(param_2 + 2);
            if ((uVar6 & 1) != 0) {
              uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
            }
            func_0x000109cb979c();
            *(ulong *)(param_2 + 0x20) = uVar6;
          }
          uVar13 = 0xffffffffffffffff;
          goto LAB_109cf43b0;
        }
      }
      else {
        if (uVar20 != 2) {
          if (uVar20 != 0) {
            if (param_2[0x23] == 0x140) {
              uVar6 = *(ulong *)(param_2 + 0x20);
            }
            else {
              func_0x000109c819a4(param_2);
              param_2[0x23] = 0x140;
              uVar6 = *(ulong *)(param_2 + 2);
              if ((uVar6 & 1) != 0) {
                uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
              }
              func_0x000109cb97ec();
              *(ulong *)(param_2 + 0x20) = uVar6;
            }
            *(undefined1 *)(uVar6 + 0x10) = 0;
            return;
          }
          if (1 < bVar4) {
            if (bVar4 < 4) {
              if (param_2[0x23] == 500) {
                uVar6 = *(ulong *)(param_2 + 0x20);
              }
              else {
                func_0x000109c819a4(param_2);
                param_2[0x23] = 500;
                uVar6 = *(ulong *)(param_2 + 2);
                if ((uVar6 & 1) != 0) {
                  uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
                }
                func_0x000109cba8f4();
                *(ulong *)(param_2 + 0x20) = uVar6;
              }
              puVar8 = *(undefined **)(uVar6 + 8);
              if (((ulong)puVar8 & 1) != 0) {
                puVar8 = *(undefined **)((ulong)puVar8 & 0xfffffffffffffffe);
              }
              puVar7 = &DAT_10f517e11;
              uVar14 = *(ulong *)(uVar6 + 0x48);
              if ((uVar14 & 3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)
                  PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_1103462b8
                )(uVar14 & 0xfffffffffffffffc);
                return;
              }
              if (puVar8 == (undefined *)0x0) {
                func_0x000107c39894(&DAT_10f517e11,6);
              }
              else {
                func_0x00010b4bf054();
                puVar7 = puVar8;
              }
              *(ulong *)(uVar6 + 0x48) = (ulong)puVar7;
              return;
            }
            if (param_2[0x23] == 0x3d4) {
              uVar6 = *(ulong *)(param_2 + 0x20);
            }
            else {
              func_0x000109c819a4(param_2);
              param_2[0x23] = 0x3d4;
              uVar6 = *(ulong *)(param_2 + 2);
              if ((uVar6 & 1) != 0) {
                uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
              }
              func_0x000109cb979c();
              *(ulong *)(param_2 + 0x20) = uVar6;
            }
            uVar13 = 0xfffffffffffffffb;
LAB_109cf43b0:
            *(undefined8 *)(uVar6 + 0x10) = uVar13;
            return;
          }
          puVar8 = &UNK_10f5aa998;
          unaff_x20 = param_2;
          goto LAB_109cf468c;
        }
        if (3 < bVar4) {
          if (param_2[0x23] == 0x3d4) {
            uVar6 = *(ulong *)(param_2 + 0x20);
          }
          else {
            func_0x000109c819a4(param_2);
            param_2[0x23] = 0x3d4;
            uVar6 = *(ulong *)(param_2 + 2);
            if ((uVar6 & 1) != 0) {
              uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
            }
            func_0x000109cb979c();
            *(ulong *)(param_2 + 0x20) = uVar6;
          }
          uVar13 = 0xfffffffffffffffe;
          goto LAB_109cf43b0;
        }
      }
LAB_109cf4604:
      puVar8 = &UNK_10f5aa2d8;
      unaff_x20 = param_2;
    }
    else {
      if (param_4 == 0x13) {
        if (param_2[0x23] == 0x12d) {
          uVar6 = *(ulong *)(param_2 + 0x20);
        }
        else {
          func_0x000109c819a4(param_2);
          param_2[0x23] = 0x12d;
          uVar6 = *(ulong *)(param_2 + 2);
          if ((uVar6 & 1) != 0) {
            uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
          }
          func_0x000109cb92f0();
          *(ulong *)(param_2 + 0x20) = uVar6;
        }
        *(undefined4 *)(uVar6 + 0x10) = 0;
        return;
      }
      if (param_4 != 0x15) goto LAB_109cf4620;
      if (param_2[0x23] == 300) {
        unaff_x21 = *(undefined4 **)(param_2 + 0x20);
      }
      else {
        func_0x000109c819a4(param_2);
        param_2[0x23] = 300;
        unaff_x21 = *(undefined4 **)(param_2 + 2);
        if (((ulong)unaff_x21 & 1) != 0) {
          unaff_x21 = *(undefined4 **)((ulong)unaff_x21 & 0xfffffffffffffffe);
        }
        func_0x000109cb7d28();
        *(undefined4 **)(param_2 + 0x20) = unaff_x21;
      }
      unaff_x21[9] = 0;
      unaff_x20 = unaff_x21 + 4;
      uVar20 = *(uint *)(param_3 + 0x38);
      if ((int)uVar20 < 1) {
        iVar10 = *(int *)(param_3 + 0x78);
        iVar24 = iVar10;
        if (3 < iVar10) {
          iVar24 = 4;
        }
        if (iVar10 < 5) {
          lVar21 = *(long *)(param_3 + 0x80);
        }
        else {
          lVar17 = 0;
          lVar21 = *(long *)(param_3 + 0x80);
          do {
            if (*(int *)(lVar21 + lVar17) != 1) {
              puVar8 = &UNK_10f5aaa3e;
              goto LAB_109cf468c;
            }
            lVar17 = lVar17 + 4;
          } while ((ulong)(iVar10 - 4) << 2 != lVar17);
        }
        FUN_109cf4774(&uStack_70,lVar21 + (long)iVar10 * 4 + (long)iVar24 * -4);
        if (unaff_x20 != (int *)&uStack_70) {
          plVar18 = (long *)(unaff_x21 + 6);
          plVar16 = plVar18;
          if (unaff_x21[5] != 0) {
            plVar16 = (long *)(*plVar18 + -8);
          }
          ppuVar3 = &puStack_68;
          if (uStack_70._4_4_ != 0) {
            ppuVar3 = (undefined8 **)(puStack_68 + -1);
          }
          if ((undefined8 *)*plVar16 == *ppuVar3) {
            lVar17 = 0;
            do {
              uVar5 = *(undefined1 *)((long)unaff_x20 + lVar17);
              *(undefined1 *)((long)unaff_x20 + lVar17) = *(undefined1 *)((long)&uStack_70 + lVar17)
              ;
              *(undefined1 *)((long)&uStack_70 + lVar17) = uVar5;
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0x10);
          }
          else {
            *unaff_x20 = 0;
            iVar24 = (int)uStack_70;
            if ((int)uStack_70 != 0) {
              if ((int)unaff_x21[5] < (int)uStack_70) {
                func_0x00010598df1c(unaff_x20,0,uStack_70 & 0xffffffff);
                lVar17 = (long)*unaff_x20;
                iVar10 = *unaff_x20 + iVar24;
              }
              else {
                lVar17 = 0;
                iVar10 = (int)uStack_70;
              }
              *unaff_x20 = iVar10;
              if (0 < iVar24) {
                uVar20 = iVar24 + 1;
                puVar12 = puStack_68;
                puVar19 = (undefined8 *)(*plVar18 + lVar17 * 8);
                do {
                  *puVar19 = *puVar12;
                  uVar20 = uVar20 - 1;
                  puVar12 = puVar12 + 1;
                  puVar19 = puVar19 + 1;
                } while (1 < uVar20);
              }
            }
          }
        }
LAB_109cf42f4:
        if ((0 < uStack_70._4_4_) && (puStack_68[-1] == 0)) {
          __ZdlPv();
        }
        return;
      }
      if (uVar20 - 3 < 2) {
        FUN_109cf4774(&uStack_70,*(long *)(param_3 + 0x40),
                      *(long *)(param_3 + 0x40) + (ulong)uVar20 * 4);
        if (unaff_x20 != (int *)&uStack_70) {
          plVar18 = (long *)(unaff_x21 + 6);
          plVar16 = plVar18;
          if (unaff_x21[5] != 0) {
            plVar16 = (long *)(*plVar18 + -8);
          }
          ppuVar3 = &puStack_68;
          if (uStack_70._4_4_ != 0) {
            ppuVar3 = (undefined8 **)(puStack_68 + -1);
          }
          if ((undefined8 *)*plVar16 == *ppuVar3) {
            lVar17 = 0;
            do {
              uVar5 = *(undefined1 *)((long)unaff_x20 + lVar17);
              *(undefined1 *)((long)unaff_x20 + lVar17) = *(undefined1 *)((long)&uStack_70 + lVar17)
              ;
              *(undefined1 *)((long)&uStack_70 + lVar17) = uVar5;
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0x10);
          }
          else {
            *unaff_x20 = 0;
            iVar24 = (int)uStack_70;
            if ((int)uStack_70 != 0) {
              if ((int)unaff_x21[5] < (int)uStack_70) {
                func_0x00010598df1c(unaff_x20,0,uStack_70 & 0xffffffff);
                lVar17 = (long)*unaff_x20;
                iVar10 = *unaff_x20 + iVar24;
              }
              else {
                lVar17 = 0;
                iVar10 = (int)uStack_70;
              }
              *unaff_x20 = iVar10;
              if (0 < iVar24) {
                uVar20 = iVar24 + 1;
                puVar12 = puStack_68;
                puVar19 = (undefined8 *)(*plVar18 + lVar17 * 8);
                do {
                  *puVar19 = *puVar12;
                  uVar20 = uVar20 - 1;
                  puVar12 = puVar12 + 1;
                  puVar19 = puVar19 + 1;
                } while (1 < uVar20);
              }
            }
          }
        }
        goto LAB_109cf42f4;
      }
      puVar8 = &UNK_10f5aa9ee;
    }
  }
  else if (param_4 == 0x16) {
    if (param_2[0x23] == 0x136) {
      puVar23 = *(undefined4 **)(param_2 + 0x20);
    }
    else {
      func_0x000109c819a4(param_2);
      param_2[0x23] = 0x136;
      puVar23 = *(undefined4 **)(param_2 + 2);
      if (((ulong)puVar23 & 1) != 0) {
        puVar23 = *(undefined4 **)((ulong)puVar23 & 0xfffffffffffffffe);
      }
      func_0x000109cb862c();
      *(undefined4 **)(param_2 + 0x20) = puVar23;
    }
    if (0 < *(int *)(param_3 + 0x58)) {
      uVar6 = 0;
      FUN_109d03770();
      uStack_70 = 0;
      puStack_68 = (undefined8 *)0x0;
      func_0x0001087675dc(&uStack_70,0,4);
      lVar17 = (long)(int)uStack_70;
      uStack_70 = CONCAT44(uStack_70._4_4_,4);
      puVar2 = puStack_68 + lVar17;
      puVar2[1] = param_3 >> 0x20;
      *puVar2 = param_3 & 0xffffffff;
      puVar2[3] = uVar6 >> 0x20;
      puVar2[2] = uVar6 & 0xffffffff;
      piVar22 = puVar23 + 4;
      if (piVar22 != (int *)&uStack_70) {
        plVar18 = (long *)(puVar23 + 6);
        plVar16 = plVar18;
        if (puVar23[5] != 0) {
          plVar16 = (long *)(*plVar18 + -8);
        }
        ppuVar3 = &puStack_68;
        if (uStack_70._4_4_ != 0) {
          ppuVar3 = (undefined8 **)(puStack_68 + -1);
        }
        if ((undefined8 *)*plVar16 == *ppuVar3) {
          lVar17 = 0;
          do {
            uVar5 = *(undefined1 *)((long)piVar22 + lVar17);
            *(undefined1 *)((long)piVar22 + lVar17) = *(undefined1 *)((long)&uStack_70 + lVar17);
            *(undefined1 *)((long)&uStack_70 + lVar17) = uVar5;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0x10);
        }
        else {
          *piVar22 = 0;
          if ((int)puVar23[5] < 4) {
            func_0x0001087675dc(piVar22,0,4);
            lVar17 = (long)*piVar22;
            iVar24 = *piVar22 + 4;
          }
          else {
            lVar17 = 0;
            iVar24 = 4;
          }
          *piVar22 = iVar24;
          uVar20 = 5;
          puVar12 = puStack_68;
          puVar19 = (undefined8 *)(*plVar18 + lVar17 * 8);
          do {
            *puVar19 = *puVar12;
            uVar20 = uVar20 - 1;
            puVar12 = puVar12 + 1;
            puVar19 = puVar19 + 1;
          } while (1 < uVar20);
        }
      }
      goto LAB_109cf42f4;
    }
    iVar24 = *(int *)(param_3 + 0x148);
    if (iVar24 - 2U < 2) {
      piVar22 = puVar23 + 4;
      iVar24 = *piVar22;
      iVar10 = puVar23[5];
      if (iVar24 == iVar10) {
        func_0x0001087675dc(piVar22,iVar10,iVar10 + 1);
        iVar24 = puVar23[4];
        iVar10 = puVar23[5];
      }
      lVar17 = *(long *)(puVar23 + 6);
      iVar15 = iVar24 + 1;
      puVar23[4] = iVar15;
      *(undefined8 *)(lVar17 + (long)iVar24 * 8) = 0;
      if (iVar15 == iVar10) {
        func_0x0001087675dc(piVar22,iVar10,iVar10 + 1);
        lVar17 = *(long *)(puVar23 + 6);
        iVar15 = puVar23[4];
        iVar10 = puVar23[5];
      }
      iVar24 = iVar15 + 1;
      *piVar22 = iVar24;
      *(undefined8 *)(lVar17 + (long)iVar15 * 8) = 1;
      if (iVar24 == iVar10) {
        func_0x0001087675dc(piVar22,iVar10,iVar10 + 1);
        lVar17 = *(long *)(puVar23 + 6);
        iVar24 = puVar23[4];
        iVar10 = puVar23[5];
      }
      iVar15 = iVar24 + 1;
      *piVar22 = iVar15;
      *(undefined8 *)(lVar17 + (long)iVar24 * 8) = 2;
      if (iVar15 == iVar10) {
        func_0x0001087675dc(piVar22,iVar10,iVar10 + 1);
        iVar15 = puVar23[4];
        lVar17 = *(long *)(puVar23 + 6);
      }
      *piVar22 = iVar15 + 1;
      uVar13 = 3;
LAB_109cf41ac:
      *(undefined8 *)(lVar17 + (long)iVar15 * 8) = uVar13;
      return;
    }
    if (iVar24 == 1) {
      FUN_109cf46a4(puVar23,0);
      FUN_109cf46a4(puVar23,3);
      FUN_109cf46a4(puVar23,1);
      puVar7 = (undefined *)0x2;
      goto code_r0x000109cf46a4;
    }
    if (iVar24 == 0) {
      piVar22 = puVar23 + 4;
      iVar24 = *piVar22;
      iVar10 = puVar23[5];
      if (iVar24 == iVar10) {
        func_0x0001087675dc(piVar22,iVar10,iVar10 + 1);
        iVar24 = puVar23[4];
        iVar10 = puVar23[5];
      }
      lVar17 = *(long *)(puVar23 + 6);
      iVar15 = iVar24 + 1;
      puVar23[4] = iVar15;
      *(undefined8 *)(lVar17 + (long)iVar24 * 8) = 0;
      if (iVar15 == iVar10) {
        func_0x0001087675dc(piVar22,iVar10,iVar10 + 1);
        lVar17 = *(long *)(puVar23 + 6);
        iVar15 = puVar23[4];
        iVar10 = puVar23[5];
      }
      iVar24 = iVar15 + 1;
      *piVar22 = iVar24;
      *(undefined8 *)(lVar17 + (long)iVar15 * 8) = 2;
      if (iVar24 == iVar10) {
        func_0x0001087675dc(piVar22,iVar10,iVar10 + 1);
        lVar17 = *(long *)(puVar23 + 6);
        iVar24 = puVar23[4];
        iVar10 = puVar23[5];
      }
      iVar15 = iVar24 + 1;
      *piVar22 = iVar15;
      *(undefined8 *)(lVar17 + (long)iVar24 * 8) = 3;
      if (iVar15 == iVar10) {
        func_0x0001087675dc(piVar22,iVar10,iVar10 + 1);
        iVar15 = puVar23[4];
        lVar17 = *(long *)(puVar23 + 6);
      }
      *piVar22 = iVar15 + 1;
      uVar13 = 1;
      goto LAB_109cf41ac;
    }
    puVar8 = &UNK_10f5aaa69;
    unaff_x20 = param_2;
    unaff_x21 = puVar23;
  }
  else {
    if (param_4 == 0x28) {
      if (param_2[0x23] == 0x15e) {
        unaff_x22 = *(ulong *)(param_2 + 0x20);
      }
      else {
        func_0x000109c819a4(param_2);
        param_2[0x23] = 0x15e;
        unaff_x22 = *(ulong *)(param_2 + 2);
        if ((unaff_x22 & 1) != 0) {
          unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
        }
        func_0x000109cb780c();
        *(ulong *)(param_2 + 0x20) = unaff_x22;
      }
      if (*(int *)(param_3 + 0x48) == 2) {
        *(undefined4 *)(unaff_x22 + 0x28) = 0;
        *(long *)(unaff_x22 + 0x10) = (long)**(int **)(param_3 + 0x50);
        *(long *)(unaff_x22 + 0x18) = (long)*(int *)(*(long *)(param_3 + 0x50) + 4);
        *(undefined8 *)(unaff_x22 + 0x20) = 1;
        return;
      }
      uVar6 = *(ulong *)(param_2 + 4);
      puVar2 = (ulong *)(param_2 + 4);
      if ((uVar6 & 1) != 0) {
        puVar2 = (ulong *)(uVar6 + 7);
      }
      puVar23 = param_5;
      FUN_109cf8a0c(param_5,*puVar2);
      lVar17 = 0;
      bVar9 = false;
      uStack_70 = CONCAT44(puVar23[1],puVar23[3]);
      puStack_68 = (undefined8 *)CONCAT44(puVar23[2],*puVar23);
      do {
        if (((*(int *)(*(long *)(param_3 + 0xc0) + lVar17 * 4) != 1) ||
            (0 < *(int *)(*(long *)(param_3 + 0xa0) + lVar17 * 4))) ||
           (*(int *)(*(long *)(param_3 + 0xb0) + lVar17 * 4) <
            *(int *)((long)&uStack_70 + lVar17 * 4))) {
          unaff_x21 = param_5;
          if (bVar9) {
            puVar8 = &UNK_10f5aaa84;
            unaff_x20 = param_2;
            goto LAB_109cf468c;
          }
          *(long *)(unaff_x22 + 0x10) = (long)*(int *)(*(long *)(param_3 + 0xa0) + lVar17 * 4);
          *(long *)(unaff_x22 + 0x18) = (long)*(int *)(*(long *)(param_3 + 0xb0) + lVar17 * 4);
          uVar20 = *(uint *)(*(long *)(param_3 + 0xc0) + lVar17 * 4);
          if ((((int)uVar20 < 1) ||
              (iVar24 = *(int *)(*(long *)(param_3 + 0xa0) + lVar17 * 4),
              *(int *)(*(long *)(param_3 + 0xb0) + lVar17 * 4) <= iVar24)) || (iVar24 < 0)) {
            puVar8 = &UNK_10f5aaaab;
            unaff_x20 = param_2;
            goto LAB_109cf468c;
          }
          *(ulong *)(unaff_x22 + 0x20) = (ulong)uVar20;
          iVar24 = (int)lVar17;
          if (iVar24 < 2) {
            if (iVar24 != 0) {
              bVar9 = true;
              *(undefined4 *)(unaff_x22 + 0x28) = 1;
              goto LAB_109cf3bf8;
            }
            *(undefined4 *)(unaff_x22 + 0x28) = 0;
            func_0x000107c2827c(param_5 + 0x12,*(ulong *)(param_2 + 0x1c) & 0xfffffffffffffffc,
                                *(ulong *)(param_2 + 0x1c) & 0xfffffffffffffffc);
          }
          else if (iVar24 == 2) {
            *(undefined4 *)(unaff_x22 + 0x28) = 2;
          }
          else {
            *(undefined4 *)(unaff_x22 + 0x28) = 0;
          }
          bVar9 = true;
        }
LAB_109cf3bf8:
        lVar17 = lVar17 + 1;
        if (lVar17 == 4) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0x4b) {
      if (3 < bVar4) {
        if (param_2[0x23] == 0x3cf) {
          uVar6 = *(ulong *)(param_2 + 0x20);
        }
        else {
          func_0x000109c819a4(param_2);
          param_2[0x23] = 0x3cf;
          uVar6 = *(ulong *)(param_2 + 2);
          if ((uVar6 & 1) != 0) {
            uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
          }
          func_0x000109cb7600();
          *(ulong *)(param_2 + 0x20) = uVar6;
        }
        piVar22 = (int *)(uVar6 + 0x10);
        piVar25 = *(int **)(param_3 + 0x50);
        iVar24 = *(int *)(param_3 + 0x48);
        lVar17 = (long)iVar24;
        uStack_70 = 0;
        puStack_68 = (undefined8 *)0x0;
        if (iVar24 < 1) {
          uStack_70._0_4_ = iVar24;
          uStack_70._4_4_ = 0;
          if (iVar24 == 0) {
            bVar9 = true;
            goto LAB_109cf3f30;
          }
          lVar21 = 0;
        }
        else {
          func_0x0001087675dc(&uStack_70,0,lVar17);
          lVar21 = (long)(int)uStack_70;
          uStack_70._0_4_ = iVar24;
        }
        lVar11 = lVar17 << 2;
        plVar18 = puStack_68 + lVar21;
        do {
          *plVar18 = (long)*piVar25;
          lVar11 = lVar11 + -4;
          plVar18 = plVar18 + 1;
          piVar25 = piVar25 + 1;
        } while (lVar11 != 0);
        bVar9 = false;
LAB_109cf3f30:
        uStack_70._0_4_ = iVar24;
        if (piVar22 != (int *)&uStack_70) {
          plVar18 = (long *)(uVar6 + 0x18);
          plVar16 = plVar18;
          if (*(int *)(uVar6 + 0x14) != 0) {
            plVar16 = (long *)(*plVar18 + -8);
          }
          ppuVar3 = &puStack_68;
          if (uStack_70._4_4_ != 0) {
            ppuVar3 = (undefined8 **)(puStack_68 + -1);
          }
          if ((undefined8 *)*plVar16 == *ppuVar3) {
            lVar17 = 0;
            do {
              uVar5 = *(undefined1 *)((long)piVar22 + lVar17);
              *(undefined1 *)((long)piVar22 + lVar17) = *(undefined1 *)((long)&uStack_70 + lVar17);
              *(undefined1 *)((long)&uStack_70 + lVar17) = uVar5;
              lVar17 = lVar17 + 1;
            } while (lVar17 != 0x10);
          }
          else {
            *piVar22 = 0;
            if (!bVar9) {
              if (*(int *)(uVar6 + 0x14) < iVar24) {
                func_0x0001087675dc(piVar22,0,lVar17);
                lVar17 = (long)*piVar22;
                iVar10 = *piVar22 + iVar24;
              }
              else {
                lVar17 = 0;
                iVar10 = iVar24;
              }
              *piVar22 = iVar10;
              if (0 < iVar24) {
                uVar20 = iVar24 + 1;
                puVar12 = puStack_68;
                puVar19 = (undefined8 *)(*plVar18 + lVar17 * 8);
                do {
                  *puVar19 = *puVar12;
                  uVar20 = uVar20 - 1;
                  puVar12 = puVar12 + 1;
                  puVar19 = puVar19 + 1;
                } while (1 < uVar20);
              }
            }
          }
        }
        if ((0 < uStack_70._4_4_) && (puStack_68[-1] == 0)) {
          __ZdlPv();
        }
        iVar24 = **(int **)(param_3 + 0xf0);
        if (iVar24 == 2) {
          uVar13 = 0xffffffffffffffff;
        }
        else if (iVar24 == 1) {
          uVar13 = 0xfffffffffffffffe;
        }
        else if (iVar24 == 0) {
          uVar13 = 0xfffffffffffffffb;
        }
        else {
          uVar13 = 0xfffffffffffffffd;
        }
        *(undefined8 *)(uVar6 + 0x28) = uVar13;
        return;
      }
      goto LAB_109cf4604;
    }
LAB_109cf4620:
    puVar8 = &UNK_10f5aab42;
    unaff_x20 = param_2;
  }
LAB_109cf468c:
  puVar23 = (undefined4 *)&UNK_10e03fad1;
  puVar7 = &UNK_10f5a9c71;
  func_0x00010952d0c4(&UNK_10e03fad1,&UNK_10f5a9c71,puVar8);
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  unaff_x30 = FUN_109cf46a4;
  func_0x000104bd46a0();
  register0x00000008 = (BADSPACEBASE *)&uStack_70;
  unaff_x19 = param_3;
  unaff_x29 = puVar1;
code_r0x000109cf46a4:
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined4 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  piVar22 = puVar23 + 4;
  iVar24 = *piVar22;
  iVar10 = puVar23[5];
  if (iVar24 == iVar10) {
    func_0x0001087675dc(piVar22,iVar10,iVar10 + 1);
    iVar24 = *piVar22;
  }
  puVar23[4] = iVar24 + 1;
  *(undefined **)(*(long *)(puVar23 + 6) + (long)iVar24 * 8) = puVar7;
  return;
}



/* Entry: 109cf46a4; end: 109cf46ff;  */

void FUN_109cf46a4(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x10);
  iVar2 = *piVar3;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar2 == iVar1) {
    func_0x0001087675dc(piVar3,iVar1,iVar1 + 1);
    iVar2 = *piVar3;
  }
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 8) = param_2;
  return;
}



/* Entry: 109cf4700; end: 109cf4773;  */

void FUN_109cf4700(void)

{
  return;
}



/* Entry: 109cf4774; end: 109cf47fb;  */

int * FUN_109cf4774(int *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  ulong uVar6;
  
  uVar6 = (ulong)((long)param_3 - (long)param_2) >> 2;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    lVar3 = 0;
    lVar1 = 0;
  }
  else {
    func_0x00010598df1c(param_1,0,uVar6);
    lVar1 = (long)*param_1;
    lVar3 = *(long *)(param_1 + 2);
  }
  *param_1 = iVar5;
  if (param_3 != param_2) {
    puVar2 = (ulong *)(lVar3 + lVar1 * 8);
    do {
      puVar4 = param_2 + 1;
      *puVar2 = (ulong)*param_2;
      puVar2 = puVar2 + 1;
      param_2 = puVar4;
    } while (puVar4 != param_3);
  }
  return param_1;
}



/* Entry: 109cf47fc; end: 109cf4c6f;  */

void FUN_109cf47fc(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  bVar1 = *(byte *)(param_5 + 0xa0);
  if (*(int *)(param_2 + 0x8c) == 0xdc) {
    uVar3 = *(ulong *)(param_2 + 0x80);
  }
  else {
    func_0x000109c819a4(param_2);
    *(undefined4 *)(param_2 + 0x8c) = 0xdc;
    uVar3 = *(ulong *)(param_2 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000109cb72ec();
    *(ulong *)(param_2 + 0x80) = uVar3;
  }
  iVar5 = (int)param_4;
  if (0x4b < iVar5) {
    if (iVar5 < 0x55) {
      if (iVar5 < 0x52) {
        if (iVar5 == 0x4c) {
          *(undefined8 *)(uVar3 + 0x10) = 0x4000000000000003;
          return;
        }
        if (iVar5 != 0x50) goto LAB_109cf4bd0;
        if (3 < bVar1) {
          if (*(int *)(param_2 + 0x8c) == 0x339) goto LAB_109cf4b1c;
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0x339;
          uVar3 = *(ulong *)(param_2 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          func_0x000109cb8e60();
          goto LAB_109cf4b18;
        }
      }
      else if (iVar5 == 0x52) {
        if (3 < bVar1) {
          if (*(int *)(param_2 + 0x8c) == 0x438) goto LAB_109cf4b1c;
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0x438;
          uVar3 = *(ulong *)(param_2 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          func_0x000109cb9388();
          goto LAB_109cf4b18;
        }
      }
      else {
        if (iVar5 != 0x53) goto LAB_109cf4bd0;
        if (3 < bVar1) {
          if (*(int *)(param_2 + 0x8c) == 0x316) {
            return;
          }
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0x316;
          uVar3 = *(ulong *)(param_2 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          func_0x000109cb94b4();
          goto LAB_109cf4a40;
        }
      }
    }
    else if (iVar5 < 0x58) {
      if (iVar5 == 0x55) {
        if (3 < bVar1) {
          if (*(int *)(param_2 + 0x8c) == 0x33e) goto LAB_109cf4b1c;
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0x33e;
          uVar3 = *(ulong *)(param_2 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          func_0x000109cb8fcc();
          goto LAB_109cf4b18;
        }
      }
      else {
        if (iVar5 != 0x57) goto LAB_109cf4bd0;
        if (3 < bVar1) {
          if (*(int *)(param_2 + 0x8c) == 0x352) {
            return;
          }
          func_0x000109c819a4(param_2);
          *(undefined4 *)(param_2 + 0x8c) = 0x352;
          uVar3 = *(ulong *)(param_2 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          func_0x000109cb8d74();
          goto LAB_109cf4a40;
        }
      }
    }
    else if (iVar5 == 0x58) {
      if (3 < bVar1) {
        if (*(int *)(param_2 + 0x8c) == 0x340) goto LAB_109cf4b1c;
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x340;
        uVar3 = *(ulong *)(param_2 + 8);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        func_0x000109cb9014();
LAB_109cf4b18:
        *(ulong *)(param_2 + 0x80) = uVar3;
LAB_109cf4b1c:
        *(undefined4 *)(uVar3 + 0x10) = *(undefined4 *)(param_3 + 0x1e0);
        return;
      }
    }
    else {
      if (iVar5 != 0x59) goto LAB_109cf4bd0;
      if (3 < bVar1) {
        if (*(int *)(param_2 + 0x8c) == 0x33b) goto LAB_109cf4b1c;
        func_0x000109c819a4(param_2);
        *(undefined4 *)(param_2 + 0x8c) = 0x33b;
        uVar3 = *(ulong *)(param_2 + 8);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        func_0x000109cb8ea8();
        goto LAB_109cf4b18;
      }
    }
    goto LAB_109cf4bb0;
  }
  switch(iVar5) {
  case 0x1b:
    *(undefined4 *)(uVar3 + 0x10) = 0;
    return;
  case 0x1c:
    uVar4 = 1;
    goto code_r0x000109cf4a54;
  case 0x1d:
    uVar4 = 2;
code_r0x000109cf4a54:
    *(undefined4 *)(uVar3 + 0x10) = uVar4;
    *(undefined4 *)(uVar3 + 0x18) = *(undefined4 *)(param_3 + 0x128);
    return;
  case 0x1e:
    uVar4 = 3;
    goto code_r0x000109cf4a00;
  case 0x1f:
    uVar4 = 4;
    break;
  case 0x20:
    uVar4 = 5;
    break;
  case 0x21:
    uVar4 = 6;
    break;
  case 0x22:
    uVar4 = 7;
code_r0x000109cf4a00:
    *(undefined4 *)(uVar3 + 0x10) = uVar4;
    *(undefined4 *)(uVar3 + 0x14) = *(undefined4 *)(param_3 + 0x1e0);
    return;
  default:
    goto LAB_109cf4bd0;
  case 0x2c:
    if (3 < bVar1) {
      if (*(int *)(param_2 + 0x8c) == 0x2c6) {
        return;
      }
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x2c6;
      uVar3 = *(ulong *)(param_2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x000109cb7968();
LAB_109cf4a40:
      *(ulong *)(param_2 + 0x80) = uVar3;
      return;
    }
    goto LAB_109cf4bb0;
  case 0x2d:
    if (3 < bVar1) {
      if (*(int *)(param_2 + 0x8c) == 0x2cb) {
        return;
      }
      func_0x000109c819a4(param_2);
      *(undefined4 *)(param_2 + 0x8c) = 0x2cb;
      uVar3 = *(ulong *)(param_2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x000109cb96b8();
      goto LAB_109cf4a40;
    }
LAB_109cf4bb0:
    func_0x00010952d0c4(&UNK_10e03fb66,&UNK_10f5a9c71,&UNK_10f5aa2d8);
LAB_109cf4bd0:
    __ZNSt3__19to_stringEi(auStack_78,param_4);
    func_0x00010928a5e0(auStack_60,&UNK_10f5aab5b,auStack_78);
    func_0x000109259240(auStack_48,auStack_60,&UNK_10f4939da);
    FUN_109cd45b4(&UNK_10e03fb66,&UNK_10f5a9c71,auStack_48);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109cf4c24);
    (*pcVar2)();
  }
  *(undefined4 *)(uVar3 + 0x10) = uVar4;
  return;
}



/* Entry: 109cf4c70; end: 109cf4ccb;  */

void FUN_109cf4c70(void)

{
  return;
}



/* Entry: 109cf4ccc; end: 109cf4d53;  */

undefined1 * FUN_109cf4ccc(undefined1 *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = 1;
  __Znwm();
  *(undefined8 *)(param_1 + 8) = uVar1;
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  puVar2[5] = 0;
  *puVar2 = &PTR_FUN_110b3d598;
  puVar2[2] = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 5) = 0x3f800000;
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  return param_1;
}



/* Entry: 109cf4d54; end: 109cf558b;  */

void FUN_109cf4d54(char *param_1,long *param_2,long *param_3,long param_4,char *param_5)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  byte *pbVar7;
  long ****pppplVar8;
  long *plVar9;
  long ***ppplVar10;
  ulong uVar11;
  long lVar12;
  long **pplVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long *plStack_4d8;
  long ***ppplStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long ***ppplStack_4b0;
  long *plStack_4a8;
  undefined4 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  undefined8 uStack_480;
  long *plStack_478;
  long ***ppplStack_470;
  long *plStack_468;
  undefined8 uStack_460;
  long **pplStack_458;
  long **pplStack_450;
  undefined8 uStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar16 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar16 == 0) {
    func_0x00010952d0c4(&UNK_10e03fbce,&UNK_10f5aa38f,&UNK_10f5aab7b);
  }
  else {
    FUN_109cdb82c(&ppplStack_4d0,param_2,*param_1,param_5[1]);
    if (*param_1 == '\x01') {
      bVar2 = param_1[1];
      uVar15 = (uint)bVar2;
      FUN_109d01288();
      if (uVar15 == 0) goto LAB_109cf4ebc;
      ppplStack_470 = (long ***)CONCAT71(ppplStack_470._1_7_,bVar2);
      pbVar7 = &UNK_10e040089;
      FUN_109d0136c(&UNK_10e040089,&ppplStack_470);
      plVar1 = plStack_4c8;
      ppplVar10 = ppplStack_4d0;
      bVar2 = *pbVar7;
      ppplStack_470 = ppplStack_4d0;
      plStack_468 = plStack_4c8;
      if (plStack_4c8 != (long *)0x0) {
        plVar9 = plStack_4c8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pppplVar8 = (long ****)ppplStack_4d0;
      FUN_109d0c540(ppplStack_4d0,bVar2);
      if ((int)pppplVar8 == 0) {
        if (plVar1 != (long *)0x0) {
          plVar9 = plVar1 + 1;
          do {
            lVar12 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        goto LAB_109cf4ebc;
      }
      if ((9 < bVar2) || ((1 << (ulong)(bVar2 & 0x1f) & 600U) == 0)) goto LAB_109cf5424;
      FUN_109d0c5f4(ppplVar10,param_4);
      if (plVar1 != (long *)0x0) {
        plVar9 = plVar1 + 1;
        do {
          lVar12 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
    else {
LAB_109cf4ebc:
      FUN_109d0118c(&plStack_478,*(undefined8 *)(param_1 + 8),&ppplStack_4d0);
      cVar4 = *param_1;
      cVar3 = param_1[1];
      uStack_4a0 = *(undefined4 *)param_5;
      if (param_5[0x1f] < '\0') {
        func_0x000107c3192c(&uStack_498,*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10)
                           );
      }
      else {
        uStack_490 = *(undefined8 *)(param_5 + 0x10);
        uStack_498 = *(undefined8 *)(param_5 + 8);
        lStack_488 = *(long *)(param_5 + 0x18);
      }
      uStack_480 = *(undefined8 *)(param_5 + 0x20);
      FUN_109d00ff0(&plStack_4d8);
      plVar1 = plStack_4d8;
      if (plStack_4d8 != (long *)0x0) {
        *(char *)((long)plStack_4d8 + 9) = cVar4;
      }
      if (cVar3 == '\x02') {
        *(undefined1 *)(plStack_4d8 + 0x14) = uStack_4a0._2_1_;
      }
      if (lStack_488 < 0) {
        __ZdlPv(uStack_498);
      }
      plStack_468 = (long *)0x0;
      uStack_460 = 0;
      ppplStack_470 = (long ***)0x0;
      func_0x000109379218(&ppplStack_470,*param_3,param_3[1],
                          (param_3[1] - *param_3 >> 3) * 0x2e8ba2e8ba2e8ba3);
      pplStack_458 = (long **)0x0;
      pplStack_450 = (long **)0x0;
      uStack_448 = 0;
      func_0x000109379218(&pplStack_458,param_3[3],param_3[4],
                          (param_3[4] - param_3[3] >> 3) * 0x2e8ba2e8ba2e8ba3);
      if (*(char *)((long)param_3 + 0x47) < '\0') {
        func_0x000107c3192c(&lStack_440,param_3[6],param_3[7]);
      }
      else {
        lStack_438 = param_3[7];
        lStack_440 = param_3[6];
        lStack_430 = param_3[8];
      }
      pppplVar8 = &ppplStack_470;
      FUN_109cd2fbc(pppplVar8,1);
      if ((((ulong)pppplVar8 & 1) == 0) &&
         (pppplVar8 = (long ****)ppplStack_4d0, (*(code *)(*ppplStack_4d0)[4])(),
         pppplVar8 != &ppplStack_470)) {
        func_0x0001099ae0bc(&ppplStack_470,*pppplVar8,pppplVar8[1],
                            ((long)pppplVar8[1] - (long)*pppplVar8 >> 3) * 0x2e8ba2e8ba2e8ba3);
      }
      ppplVar10 = (long ***)pplStack_458;
      if (pplStack_458 == pplStack_450) {
LAB_109cf5040:
        (*(code *)(*ppplStack_4d0)[5])();
        if (&pplStack_458 != ppplStack_4d0) {
          func_0x0001099ae0bc(&pplStack_458,*ppplStack_4d0,ppplStack_4d0[1],
                              ((long)ppplStack_4d0[1] - (long)*ppplStack_4d0 >> 3) *
                              0x2e8ba2e8ba2e8ba3);
        }
      }
      else {
        do {
          pplVar13 = (long **)(long)*(char *)((long)ppplVar10 + 0x17);
          if ((long)pplVar13 < 0) {
            pplVar13 = ppplVar10[1];
          }
          if (pplVar13 == (long **)0x0) goto LAB_109cf5040;
          ppplVar10 = ppplVar10 + 0xb;
        } while (ppplVar10 != (long ***)pplStack_450);
      }
      FUN_109d00ebc(plVar1,&ppplStack_470);
      if (lStack_430 < 0) {
        __ZdlPv(lStack_440);
      }
      ppplStack_4b0 = &pplStack_458;
      func_0x000109378cec(&ppplStack_4b0);
      ppplStack_4b0 = (long ***)&ppplStack_470;
      func_0x000109378cec(&ppplStack_4b0);
      if (*param_5 == '\x01') {
        __ZNSt3__18ios_base5clearEj((long)param_2 + *(long *)(*param_2 + -0x18),0);
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(param_2,1,0xffffffff);
        uStack_3f0 = 0;
        uStack_408 = 0;
        uStack_410 = 0;
        uStack_3f8 = 0;
        uStack_400 = 0;
        uStack_428 = 0;
        lStack_430 = 0;
        uStack_418 = 0;
        uStack_420 = 0;
        uStack_448 = 0;
        pplStack_450 = (long **)0x0;
        lStack_438 = 0;
        lStack_440 = 0;
        plStack_468 = (long *)0x0;
        ppplStack_470 = (long ***)0x0;
        pplStack_458 = (long **)0x0;
        uStack_460 = 0;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
                  (param_2,&ppplStack_470);
        uVar16 = 0;
        while (plVar9 = param_2,
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl
                        (param_2,&ppplStack_470,0x400),
              (*(byte *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 0x20) & 5) == 0) {
          lVar12 = 0;
          uVar11 = 0;
          do {
            uVar11 = uVar11 * 0x40 + 0x9e3779b9 + (uVar11 >> 2) +
                     *(long *)((long)&ppplStack_470 + lVar12) ^ uVar11;
            lVar12 = lVar12 + 8;
          } while (lVar12 != 0x400);
          uVar16 = uVar16 * 0x40 + 0x9e3779b9 + (uVar16 >> 2) + uVar11 ^ uVar16;
        }
        if (param_2[1] != 0) {
          pppplVar8 = &ppplStack_470;
          func_0x000109549058(pppplVar8);
          uVar16 = uVar16 * 0x40 + 0x9e3779b9 + (uVar16 >> 2) + (long)pppplVar8 ^ uVar16;
        }
        (**(code **)(*plVar1 + 0x38))(plVar1,uVar16);
      }
      uVar16 = *(ulong *)(param_5 + 0x10);
      if (-1 < param_5[0x1f]) {
        uVar16 = (ulong)(byte)param_5[0x1f];
      }
      if (uVar16 != 0) {
        (**(code **)(*plVar1 + 0x48))(plVar1,param_5 + 8);
      }
      for (iVar14 = 0; plVar1 = plStack_478, plVar9 = plStack_478,
          (**(code **)(*plStack_478 + 0x20))(), iVar14 < (int)plVar9; iVar14 = iVar14 + 1) {
        (**(code **)(*plVar1 + 0x28))(&ppplStack_470,plVar1,iVar14);
        FUN_109ceb9a0(&ppplStack_4b0,*(undefined8 *)(param_1 + 0x10),
                      *(undefined4 *)(ppplStack_470 + 1));
        plVar9 = plStack_4d8;
        (*(code *)(*ppplStack_4b0)[4])
                  (&plStack_4b8,ppplStack_4b0,ppplStack_470,param_1[1],plStack_4d8,plVar1);
        plStack_4c0 = plStack_4b8;
        plStack_4b8 = (long *)0x0;
        (**(code **)(*plVar9 + 0x30))(plVar9,&plStack_4c0);
        plVar1 = plStack_4c0;
        plStack_4c0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_4b8;
        plStack_4b8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_4a8;
        if (plStack_4a8 != (long *)0x0) {
          plVar9 = plStack_4a8 + 1;
          do {
            lVar12 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar1 = plStack_468;
        if (plStack_468 != (long *)0x0) {
          plVar9 = plStack_468 + 1;
          do {
            lVar12 = *plVar9;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = lVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_468 + 0x10))(plStack_468);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
      if ((*(byte *)(plStack_4d8 + 8) & 1) == 0) {
        (**(code **)(*plStack_4d8 + 0x58))(plStack_4d8);
        *(undefined1 *)(plStack_4d8 + 8) = 1;
      }
      (**(code **)(*plVar1 + 8))(plVar1);
      if ((param_1[1] == '\x01') && (param_5[3] == '\x01')) {
        FUN_109cfc078(plStack_4d8,param_4);
      }
      else {
        (**(code **)(*plStack_4d8 + 0x18))(plStack_4d8,param_4);
      }
      (**(code **)(*plStack_4d8 + 8))(plStack_4d8);
    }
    if (plStack_4c8 != (long *)0x0) {
      plVar1 = plStack_4c8 + 1;
      do {
        lVar12 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_4c8 + 0x10))(plStack_4c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_4c8);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_109cf5424:
  func_0x00010952d0c4(&UNK_10e03fbce,&UNK_10f5aa38f,&UNK_10f5aabac);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109cf5448);
  (*pcVar6)();
}



/* Entry: 109cf558c; end: 109cf563b;  */

long FUN_109cf558c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109cf563c; end: 109cf56ef;  */

undefined8 * FUN_109cf563c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_110b3e1b8;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *puVar1 = &PTR_DAT_110b30d40;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((long)puVar1 + 0x1d) = 0;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return param_1;
}



/* Entry: 109cf56f0; end: 109cf575f;  */

undefined8 * FUN_109cf56f0(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  func_0x0001094a866c(param_1 + 0xf);
  FUN_109cf9c2c(param_1 + 0xe,0);
  func_0x000107c2826c(param_1 + 9);
  puStack_28 = param_1 + 5;
  *param_1 = &PTR_DAT_110b3e3c8;
  FUN_109cd42a0(&puStack_28);
  puStack_28 = param_1 + 2;
  func_0x000109cd4310(&puStack_28);
  return param_1;
}



/* Entry: 109cf5760; end: 109cf5763;  */

undefined8 * FUN_109cf5760(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  func_0x0001094a866c(param_1 + 0xf);
  FUN_109cf9c2c(param_1 + 0xe,0);
  func_0x000107c2826c(param_1 + 9);
  puStack_28 = param_1 + 5;
  *param_1 = &PTR_DAT_110b3e3c8;
  FUN_109cd42a0(&puStack_28);
  puStack_28 = param_1 + 2;
  func_0x000109cd4310(&puStack_28);
  return param_1;
}



/* Entry: 109cf5764; end: 109cf5777;  */

void FUN_109cf5764(void)

{
  FUN_109cf56f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cf5778; end: 109cf5deb;  */

void FUN_109cf5778(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long *unaff_x25;
  uint uVar20;
  float fVar21;
  long lVar22;
  undefined8 uVar23;
  long *plStack_80;
  undefined8 uStack_78;
  
  *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x20) = 1;
  if (3 < *(byte *)(param_1 + 0xa0)) {
    lVar15 = *(long *)(param_1 + 0x70);
    if (*(int *)(lVar15 + 0x30) == 500) {
      uVar5 = *(ulong *)(lVar15 + 0x28);
    }
    else {
      func_0x000109c78218(lVar15);
      *(undefined4 *)(lVar15 + 0x30) = 500;
      uVar5 = *(ulong *)(lVar15 + 8);
      if ((uVar5 & 1) != 0) {
        uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      }
      func_0x000109cbae88();
      *(ulong *)(lVar15 + 0x28) = uVar5;
    }
    *(undefined4 *)(uVar5 + 0x50) = 1;
  }
  plVar1 = (long *)(param_1 + 0x78);
  FUN_109cedc2c(plVar1);
  puVar16 = *(uint **)(param_1 + 0x10);
  puVar3 = *(uint **)(param_1 + 0x18);
  if (puVar16 != puVar3) {
    plVar2 = (long *)(param_1 + 0x88);
    do {
      lVar15 = *(long *)(param_1 + 0x70);
      *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | 1;
      uVar5 = *(ulong *)(lVar15 + 0x18);
      if (uVar5 == 0) {
        uVar5 = *(ulong *)(lVar15 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x000109c79eb8();
        *(ulong *)(lVar15 + 0x18) = uVar5;
      }
      lVar15 = uVar5 + 0x18;
      func_0x000107c303b0(lVar15,&UNK_109c79e60);
      uVar5 = *(ulong *)(lVar15 + 8);
      if ((uVar5 & 1) != 0) {
        uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(lVar15 + 0x18,puVar16,uVar5);
      *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | 1;
      uVar5 = *(ulong *)(lVar15 + 0x28);
      if (uVar5 == 0) {
        uVar5 = *(ulong *)(lVar15 + 8);
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        func_0x000109c6fe50();
        *(ulong *)(lVar15 + 0x28) = uVar5;
      }
      if (*(int *)(uVar5 + 0x24) == 5) {
        uVar19 = *(ulong *)(uVar5 + 0x18);
      }
      else {
        func_0x000109c6f0f0(uVar5);
        *(undefined4 *)(uVar5 + 0x24) = 5;
        uVar19 = *(ulong *)(uVar5 + 8);
        if ((uVar19 & 1) != 0) {
          uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
        }
        func_0x000109c6fdf4();
        *(ulong *)(uVar5 + 0x18) = uVar19;
      }
      *(undefined4 *)(uVar19 + 0x24) = 0x10020;
      puVar6 = puVar16;
      FUN_109cd3018();
      if (puVar6[3] != 1) {
        puVar7 = &UNK_10e03fc10;
        func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aabf8,&UNK_10f5aac1a);
        func_0x0001094a8f4c(&plStack_80,uVar5);
        __Unwind_Resume();
        uVar8 = *(undefined8 *)(puVar7 + 0x70);
        func_0x000109c78e44(uVar8);
        uVar23 = uVar8;
        __Znam();
        _bzero();
        func_0x00010b4d1758(*(undefined8 *)(puVar7 + 0x70),uVar23,uVar8);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(uVar5,uVar23,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdaPv_110352250)(uVar23);
        return;
      }
      if (*(byte *)(param_1 + 0xa0) < 4) {
        iVar10 = *(int *)(uVar19 + 0x10);
      }
      else {
        iVar10 = *(int *)(uVar19 + 0x10);
        iVar9 = *(int *)(uVar19 + 0x14);
        if (iVar10 == iVar9) {
          func_0x00010598df1c(uVar19 + 0x10,iVar9,iVar9 + 1);
          iVar10 = *(int *)(uVar19 + 0x10);
          iVar9 = *(int *)(uVar19 + 0x14);
        }
        lVar15 = *(long *)(uVar19 + 0x18);
        iVar13 = iVar10 + 1;
        *(int *)(uVar19 + 0x10) = iVar13;
        *(undefined8 *)(lVar15 + (long)iVar10 * 8) = 1;
        if (iVar13 == iVar9) {
          func_0x00010598df1c(uVar19 + 0x10,iVar9,iVar9 + 1);
          iVar13 = *(int *)(uVar19 + 0x10);
          lVar15 = *(long *)(uVar19 + 0x18);
        }
        iVar10 = iVar13 + 1;
        *(int *)(uVar19 + 0x10) = iVar10;
        *(undefined8 *)(lVar15 + (long)iVar13 * 8) = 1;
      }
      uVar20 = puVar6[2];
      iVar9 = *(int *)(uVar19 + 0x14);
      if (iVar10 == iVar9) {
        func_0x00010598df1c(uVar19 + 0x10,iVar10,iVar10 + 1);
        iVar10 = *(int *)(uVar19 + 0x10);
        iVar9 = *(int *)(uVar19 + 0x14);
      }
      lVar15 = *(long *)(uVar19 + 0x18);
      iVar13 = iVar10 + 1;
      *(int *)(uVar19 + 0x10) = iVar13;
      *(ulong *)(lVar15 + (long)iVar10 * 8) = (ulong)uVar20;
      uVar20 = puVar6[1];
      if (iVar13 == iVar9) {
        func_0x00010598df1c(uVar19 + 0x10,iVar9,iVar9 + 1);
        lVar15 = *(long *)(uVar19 + 0x18);
        iVar13 = *(int *)(uVar19 + 0x10);
        iVar9 = *(int *)(uVar19 + 0x14);
      }
      iVar10 = iVar13 + 1;
      *(int *)(uVar19 + 0x10) = iVar10;
      *(ulong *)(lVar15 + (long)iVar13 * 8) = (ulong)uVar20;
      uVar20 = *puVar6;
      uVar5 = (ulong)uVar20;
      if (iVar10 == iVar9) {
        func_0x00010598df1c(uVar19 + 0x10,iVar9,iVar9 + 1);
        iVar10 = *(int *)(uVar19 + 0x10);
        lVar15 = *(long *)(uVar19 + 0x18);
        uVar20 = *puVar6;
      }
      *(int *)(uVar19 + 0x10) = iVar10 + 1;
      *(ulong *)(lVar15 + (long)iVar10 * 8) = uVar5;
      uVar23 = *(undefined8 *)(puVar6 + 1);
      uVar4 = puVar6[3];
      plVar14 = plVar1;
      func_0x000107c31944(plVar1,puVar16);
      plVar17 = *(long **)(param_1 + 0x80);
      if (plVar17 != (long *)0x0) {
        uVar5 = (long)plVar17 - 1;
        if (((ulong)plVar17 & uVar5) == 0) {
          unaff_x25 = (long *)(uVar5 & (ulong)plVar14);
        }
        else {
          unaff_x25 = plVar14;
          if (plVar17 <= plVar14) {
            uVar19 = 0;
            if (plVar17 != (long *)0x0) {
              uVar19 = (ulong)plVar14 / (ulong)plVar17;
            }
            unaff_x25 = (long *)((long)plVar14 - uVar19 * (long)plVar17);
          }
        }
        plVar11 = *(long **)(*plVar1 + (long)unaff_x25 * 8);
        if (plVar11 != (long *)0x0) {
          for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
            plVar12 = (long *)plVar11[1];
            if (plVar12 == plVar14) {
              plVar12 = plVar1;
              func_0x000104c4fbc4(plVar1,plVar11 + 2,puVar16);
              if (((ulong)plVar12 & 1) != 0) goto LAB_109cf5b9c;
            }
            else {
              if (((ulong)plVar17 & uVar5) == 0) {
                plVar12 = (long *)((ulong)plVar12 & uVar5);
              }
              else if (plVar17 <= plVar12) {
                uVar19 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar19 = (ulong)plVar12 / (ulong)plVar17;
                }
                plVar12 = (long *)((long)plVar12 - uVar19 * (long)plVar17);
              }
              if (plVar12 != unaff_x25) break;
            }
          }
        }
      }
      plVar11 = (long *)0x38;
      __Znwm();
      uStack_78 = 0;
      *plVar11 = 0;
      plVar11[1] = (long)plVar14;
      plStack_80 = plVar1;
      if (*(char *)((long)puVar16 + 0x17) < '\0') {
        func_0x000107c3192c(plVar11 + 2,*(undefined8 *)puVar16,*(undefined8 *)(puVar16 + 2));
      }
      else {
        lVar22 = *(long *)(puVar16 + 2);
        lVar15 = *(long *)puVar16;
        plVar11[4] = *(long *)(puVar16 + 4);
        plVar11[3] = lVar22;
        plVar11[2] = lVar15;
      }
      *(uint *)(plVar11 + 5) = uVar20;
      *(undefined8 *)((long)plVar11 + 0x2c) = uVar23;
      *(uint *)((long)plVar11 + 0x34) = uVar4;
      uStack_78 = CONCAT71(uStack_78._1_7_,1);
      fVar21 = (float)(*(long *)(param_1 + 0x90) + 1);
      if ((plVar17 == (long *)0x0) || (*(float *)(param_1 + 0x98) * (float)plVar17 < fVar21)) {
        uVar5 = 1;
        if ((long *)0x2 < plVar17) {
          uVar5 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
        }
        uVar5 = uVar5 | (long)plVar17 << 1;
        uVar19 = (ulong)(fVar21 / *(float *)(param_1 + 0x98));
        if (uVar5 <= uVar19) {
          uVar5 = uVar19;
        }
        func_0x0001094a8d40(plVar1,uVar5);
        plVar17 = *(long **)(param_1 + 0x80);
        if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
          unaff_x25 = (long *)((long)plVar17 - 1U & (ulong)plVar14);
        }
        else {
          unaff_x25 = plVar14;
          if (plVar17 <= plVar14) {
            uVar5 = 0;
            if (plVar17 != (long *)0x0) {
              uVar5 = (ulong)plVar14 / (ulong)plVar17;
            }
            unaff_x25 = (long *)((long)plVar14 - uVar5 * (long)plVar17);
          }
        }
      }
      lVar15 = *plVar1;
      plVar14 = *(long **)(lVar15 + (long)unaff_x25 * 8);
      if (plVar14 == (long *)0x0) {
        *plVar11 = *plVar2;
        *plVar2 = (long)plVar11;
        *(long **)(lVar15 + (long)unaff_x25 * 8) = plVar2;
        if (*plVar11 != 0) {
          plVar14 = *(long **)(*plVar11 + 8);
          if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
            plVar14 = (long *)((ulong)plVar14 & (long)plVar17 - 1U);
          }
          else if (plVar17 <= plVar14) {
            uVar5 = 0;
            if (plVar17 != (long *)0x0) {
              uVar5 = (ulong)plVar14 / (ulong)plVar17;
            }
            plVar14 = (long *)((long)plVar14 - uVar5 * (long)plVar17);
          }
          *(long **)(*plVar1 + (long)plVar14 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar14;
        *plVar14 = (long)plVar11;
      }
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
LAB_109cf5b9c:
      puVar16 = puVar16 + 0x16;
    } while (puVar16 != puVar3);
  }
  lVar22 = *(long *)(param_1 + 0x30);
  for (lVar15 = *(long *)(param_1 + 0x28); lVar15 != lVar22; lVar15 = lVar15 + 0x68) {
    lVar18 = *(long *)(param_1 + 0x70);
    *(uint *)(lVar18 + 0x10) = *(uint *)(lVar18 + 0x10) | 1;
    uVar5 = *(ulong *)(lVar18 + 0x18);
    if (uVar5 == 0) {
      uVar5 = *(ulong *)(lVar18 + 8);
      if ((uVar5 & 1) != 0) {
        uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      }
      func_0x000109c79eb8();
      *(ulong *)(lVar18 + 0x18) = uVar5;
    }
    lVar18 = uVar5 + 0x30;
    func_0x000107c303b0(lVar18,&UNK_109c79e60);
    uVar5 = *(ulong *)(lVar18 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(lVar18 + 0x18,lVar15,uVar5);
    *(uint *)(lVar18 + 0x10) = *(uint *)(lVar18 + 0x10) | 1;
    uVar5 = *(ulong *)(lVar18 + 0x28);
    if (uVar5 == 0) {
      uVar5 = *(ulong *)(lVar18 + 8);
      if ((uVar5 & 1) != 0) {
        uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
      }
      func_0x000109c6fe50();
      *(ulong *)(lVar18 + 0x28) = uVar5;
    }
    if (*(int *)(uVar5 + 0x24) == 5) {
      uVar19 = *(ulong *)(uVar5 + 0x18);
    }
    else {
      func_0x000109c6f0f0(uVar5);
      *(undefined4 *)(uVar5 + 0x24) = 5;
      uVar19 = *(ulong *)(uVar5 + 8);
      if ((uVar19 & 1) != 0) {
        uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
      }
      func_0x000109c6fdf4();
      *(ulong *)(uVar5 + 0x18) = uVar19;
    }
    *(undefined4 *)(uVar19 + 0x24) = 0x10020;
  }
  return;
}



/* Entry: 109cf5dec; end: 109cf5e67;  */

void FUN_109cf5dec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x000109c78e44(uVar1);
  uVar2 = uVar1;
  __Znam();
  _bzero();
  func_0x00010b4d1758(*(undefined8 *)(param_1 + 0x70),uVar2,uVar1);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(param_2,uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(uVar2);
  return;
}



/* Entry: 109cf5e68; end: 109cf5e8f;  */

undefined4 FUN_109cf5e68(long param_1)

{
  undefined **ppuVar1;
  
  if (*(int *)(*(long *)(param_1 + 0x70) + 0x30) == 500) {
    ppuVar1 = *(undefined ***)(*(long *)(param_1 + 0x70) + 0x28);
  }
  else {
    ppuVar1 = &PTR_PTR_1132f1948;
  }
  return *(undefined4 *)(ppuVar1 + 4);
}



/* Entry: 109cf5e90; end: 109cf5eaf;  */

/* WARNING: Removing unreachable block (ram,0x000109cf6524) */
/* WARNING: Removing unreachable block (ram,0x000109cf68d0) */
/* WARNING: Removing unreachable block (ram,0x000109cf6554) */
/* WARNING: Removing unreachable block (ram,0x000109cf6534) */
/* WARNING: Removing unreachable block (ram,0x000109cf68e0) */
/* WARNING: Removing unreachable block (ram,0x000109cf6568) */
/* WARNING: Removing unreachable block (ram,0x000109cf6900) */
/* WARNING: Removing unreachable block (ram,0x000109cf6910) */

void FUN_109cf5e90(void)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 ******ppppppuVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long *plVar14;
  ulong *puVar15;
  ulong uVar16;
  int iVar17;
  ulong *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  int iVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong *puVar26;
  long lVar27;
  long lVar28;
  undefined **ppuVar29;
  long lVar30;
  ulong uVar31;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 *****pppppuStack_158;
  ulong uStack_150;
  byte bStack_141;
  undefined8 *****pppppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  ulong auStack_128 [3];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  
  puVar21 = &UNK_10e03fc67;
  plVar14 = (long *)&UNK_10f5aac4b;
  FUN_109ceaea0();
  lVar27 = *plVar14;
  uVar9 = *(ulong *)(lVar27 + 0x10);
  if (uVar9 == 0) {
    puVar12 = (ulong *)&UNK_10e03f766;
    puVar21 = &UNK_10f5aa42b;
    puVar19 = &UNK_10f5aa439;
    goto LAB_109cf6144;
  }
  ___dynamic_cast(uVar9,&PTR_DAT_11087fc08,&PTR_DAT_110b3a688,0);
  lVar23 = *(long *)(puVar21 + 0x70);
  if (*(int *)(lVar23 + 0x30) == 500) {
    uVar10 = *(ulong *)(lVar23 + 0x28);
  }
  else {
    func_0x000109c78218(lVar23);
    *(undefined4 *)(lVar23 + 0x30) = 500;
    uVar10 = *(ulong *)(lVar23 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x000109cbae88();
    *(ulong *)(lVar23 + 0x28) = uVar10;
    lVar23 = *(long *)(puVar21 + 0x70);
  }
  if (*(int *)(uVar10 + 0x20) == 0) {
    ppuVar20 = &PTR_PTR_1132f05f8;
    if (*(undefined ***)(lVar23 + 0x18) != (undefined **)0x0) {
      ppuVar20 = *(undefined ***)(lVar23 + 0x18);
    }
    if ((*(int *)(ppuVar20 + 4) == 1) && (*(int *)(uVar9 + 0x18) != 0)) {
      puVar19 = ppuVar20[3];
      ppuVar20 = ppuVar20 + 3;
      if (((ulong)puVar19 & 1) != 0) {
        ppuVar20 = (undefined **)(puVar19 + 7);
      }
      puVar24 = (undefined8 *)(*(ulong *)(*ppuVar20 + 0x18) & 0xfffffffffffffffc);
      uVar10 = *(ulong *)(uVar9 + 0x10);
      puVar12 = (ulong *)(uVar9 + 0x10);
      if ((uVar10 & 1) != 0) {
        puVar12 = (ulong *)(uVar10 + 7);
      }
      puVar25 = (undefined8 *)*puVar12;
      bVar4 = *(byte *)((long)puVar24 + 0x17);
      uVar10 = puVar24[1];
      if (-1 < (char)bVar4) {
        uVar10 = (ulong)bVar4;
      }
      bVar5 = *(byte *)((long)puVar25 + 0x17);
      uVar16 = puVar25[1];
      if (-1 < (char)bVar5) {
        uVar16 = (ulong)bVar5;
      }
      if (uVar10 == uVar16) {
        puVar11 = (undefined8 *)*puVar24;
        if (-1 < (char)bVar4) {
          puVar11 = puVar24;
        }
        puVar2 = (undefined8 *)*puVar25;
        if (-1 < (char)bVar5) {
          puVar2 = puVar25;
        }
        _memcmp(puVar11,puVar2);
        if ((int)puVar11 == 0) goto LAB_109cf5ff0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar25,puVar24);
      lVar23 = *(long *)(puVar21 + 0x70);
    }
  }
LAB_109cf5ff0:
  if (*(int *)(lVar23 + 0x30) == 500) {
    uVar10 = *(ulong *)(lVar23 + 0x28);
  }
  else {
    func_0x000109c78218(lVar23);
    *(undefined4 *)(lVar23 + 0x30) = 500;
    uVar10 = *(ulong *)(lVar23 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x000109cbae88();
    *(ulong *)(lVar23 + 0x28) = uVar10;
  }
  puVar12 = (ulong *)(uVar10 + 0x18);
  uVar16 = *(ulong *)(uVar9 + 8);
  if ((uVar16 & 1) != 0) {
    uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
  }
  if (*(ulong *)(uVar10 + 0x28) == uVar16) {
    uVar16 = *puVar12;
    if ((uVar16 & 1) != 0) {
      iVar17 = *(int *)(uVar16 - 1);
      lVar23 = (long)iVar17;
      if (iVar17 <= *(int *)(uVar10 + 0x24)) {
        puVar13 = (ulong *)(uVar16 + 7);
        iVar22 = *(int *)(uVar10 + 0x20);
        if (iVar22 < iVar17) {
          puVar26 = puVar13 + iVar22;
          goto LAB_109cf60c0;
        }
        goto LAB_109cf60c8;
      }
      goto LAB_109cf603c;
    }
    if (uVar16 != 0) goto LAB_109cf603c;
    iVar22 = *(int *)(uVar10 + 0x20);
    puVar13 = puVar12;
    if (iVar22 < 0) {
      lVar23 = 0;
      puVar26 = puVar12 + iVar22;
LAB_109cf60c0:
      puVar13[lVar23] = *puVar26;
    }
LAB_109cf60c8:
    *(int *)(uVar10 + 0x20) = iVar22 + 1;
    puVar13[iVar22] = uVar9;
    uVar9 = *puVar12;
    if ((uVar9 & 1) != 0) {
      *(int *)(uVar9 - 1) = *(int *)(uVar9 - 1) + 1;
    }
  }
  else {
LAB_109cf603c:
    FUN_109cf9c54(puVar12,uVar9);
  }
  if ((*(byte *)(lVar27 + 0xd) & 1) != 0) {
    *(undefined1 *)(lVar27 + 0xd) = 0;
    return;
  }
  puVar12 = (ulong *)&UNK_10e03eb43;
  puVar21 = &UNK_10f5a9c25;
  puVar19 = &UNK_10f5a9c3a;
LAB_109cf6144:
  func_0x00010952d0c4(puVar12,puVar21,puVar19);
  iVar17 = 0;
  lStack_178 = 0;
  lStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_160 = 0x3f800000;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_190 = 0x3f800000;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  do {
    uStack_210 = CONCAT44(uStack_210._4_4_,iVar17);
    uVar9 = puVar12[0xe];
    if (*(int *)(uVar9 + 0x30) == 500) {
      uVar10 = *(ulong *)(uVar9 + 0x28);
      if (*(int *)(uVar10 + 0x20) <= iVar17) break;
    }
    else {
      if (iRam00000001132f1968 <= iVar17) break;
      func_0x000109c78218(uVar9);
      *(undefined4 *)(uVar9 + 0x30) = 500;
      uVar10 = *(ulong *)(uVar9 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cbae88();
      *(ulong *)(uVar9 + 0x28) = uVar10;
      iVar17 = (int)uStack_210;
    }
    uVar9 = *(ulong *)(uVar10 + 0x18);
    puVar13 = (ulong *)(uVar10 + 0x18);
    if ((uVar9 & 1) != 0) {
      puVar13 = (ulong *)(uVar9 + (long)iVar17 * 8 + 7);
    }
    uVar9 = *puVar13;
    iVar17 = *(int *)(uVar9 + 0x8c);
    if (((iVar17 == 0x96) || (iVar17 == 0x1a4)) || (iVar17 == 400)) {
      func_0x000108a5413c(&uStack_1e0,&uStack_210);
      iVar17 = *(int *)(uVar9 + 0x8c);
    }
    if (iVar17 == 0x15e) {
      puVar13 = puVar12 + 9;
      func_0x0001067e045c(puVar13,*(ulong *)(uVar9 + 0x70) & 0xfffffffffffffffc);
      if (puVar13 != (ulong *)0x0) {
        func_0x000108a5413c(&uStack_1e0,&uStack_210);
      }
    }
    puVar26 = (ulong *)(uVar9 + 0x10);
    puVar13 = puVar26;
    if ((*puVar26 & 1) != 0) {
      puVar13 = (ulong *)(*puVar26 + 7);
    }
    if (*(int *)(uVar9 + 0x18) != 0) {
      lVar27 = (long)*(int *)(uVar9 + 0x18) << 3;
      do {
        func_0x000107c2827c(&uStack_1b0,*puVar13,*puVar13);
        lVar27 = lVar27 + -8;
        puVar13 = puVar13 + 1;
      } while (lVar27 != 0);
    }
    iVar17 = *(int *)(uVar9 + 0x8c);
    if (iVar17 == 200) {
      uVar10 = *(ulong *)(uVar9 + 0x28);
      puVar13 = (ulong *)(uVar9 + 0x28);
      if ((uVar10 & 1) != 0) {
        puVar13 = (ulong *)(uVar10 + 7);
      }
      func_0x000107c2827c(&lStack_180,*puVar13,*puVar13);
      iVar17 = *(int *)(uVar9 + 0x8c);
    }
    if (iVar17 == 0x78) {
      if ((*puVar26 & 1) != 0) {
        puVar26 = (ulong *)(*puVar26 + 7);
      }
      plVar14 = &lStack_180;
      func_0x0001067e045c(plVar14,*puVar26);
      if (plVar14 != (long *)0x0) {
        if (*(int *)(uVar9 + 0x8c) == 0x78) {
          uVar10 = *(ulong *)(uVar9 + 0x80);
        }
        else {
          func_0x000109c819a4(uVar9);
          *(undefined4 *)(uVar9 + 0x8c) = 0x78;
          uVar10 = *(ulong *)(uVar9 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000109cba600();
          *(ulong *)(uVar9 + 0x80) = uVar10;
        }
        *(undefined1 *)(uVar10 + 0x40) = 0;
      }
    }
    iVar17 = (int)uStack_210 + 1;
  } while( true );
  while (lStack_1b8 != 0) {
    lStack_1b8 = lStack_1b8 + -1;
    iVar17 = *(int *)(*(long *)(uStack_1d8 + ((ulong)(lStack_1c0 + lStack_1b8) >> 10) * 8) +
                     (lStack_1c0 + lStack_1b8 & 0x3ffU) * 4);
    lVar27 = (long)iVar17;
    FUN_109cf9fd8(&uStack_1e0,1);
    uVar9 = puVar12[0xe];
    if (*(int *)(uVar9 + 0x30) == 500) {
      uVar10 = *(ulong *)(uVar9 + 0x28);
    }
    else {
      func_0x000109c78218(uVar9);
      *(undefined4 *)(uVar9 + 0x30) = 500;
      uVar10 = *(ulong *)(uVar9 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cbae88();
      *(ulong *)(uVar9 + 0x28) = uVar10;
    }
    uVar9 = *(ulong *)(uVar10 + 0x18);
    puVar13 = (ulong *)(uVar10 + 0x18);
    if ((uVar9 & 1) != 0) {
      puVar13 = (ulong *)(uVar9 + lVar27 * 8 + 7);
    }
    uVar9 = *puVar13;
    iVar22 = *(int *)(uVar9 + 0x8c);
    if (0 < *(int *)(uVar9 + 0x30)) {
      lVar23 = 0;
      puVar13 = (ulong *)(uVar9 + 0x28);
      do {
        puVar26 = puVar13;
        if ((*puVar13 & 1) != 0) {
          puVar26 = (ulong *)(*puVar13 + lVar23 * 8 + 7);
        }
        puVar26 = (ulong *)*puVar26;
        FUN_109cf8a98(auStack_128,puVar26);
        puVar18 = auStack_128;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar18,"_",1);
        uStack_108 = puVar18[1];
        uStack_110 = *puVar18;
        uStack_100 = puVar18[2];
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_140,lVar27);
        uVar10 = uStack_138;
        ppppppuVar7 = (undefined8 ******)pppppuStack_140;
        if (-1 < (char)bStack_129) {
          uVar10 = (ulong)bStack_129;
          ppppppuVar7 = &pppppuStack_140;
        }
        puVar18 = &uStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar18,ppppppuVar7,uVar10);
        uStack_e8 = puVar18[1];
        uStack_f0 = *puVar18;
        uStack_e0 = puVar18[2];
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = 0;
        puVar18 = &uStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar18,"_",1);
        uStack_c8 = puVar18[1];
        uStack_d0 = *puVar18;
        uStack_c0 = puVar18[2];
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_158,lVar23);
        uVar10 = uStack_150;
        ppppppuVar7 = (undefined8 ******)pppppuStack_158;
        if (-1 < (char)bStack_141) {
          uVar10 = (ulong)bStack_141;
          ppppppuVar7 = &pppppuStack_158;
        }
        puVar18 = &uStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar18,ppppppuVar7,uVar10);
        uStack_208 = puVar18[1];
        uStack_210 = *puVar18;
        uStack_200 = puVar18[2];
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = 0;
        if ((char)bStack_141 < '\0') {
          __ZdlPv(pppppuStack_158);
        }
        if ((char)bStack_129 < '\0') {
          __ZdlPv(pppppuStack_140);
        }
        puVar18 = puVar12;
        FUN_109cf8a0c(puVar12,puVar26);
        if (iVar22 == 0x96) {
          puVar24 = &uStack_1b0;
          func_0x0001067e045c(puVar24,puVar26);
          if (((puVar24 != (undefined8 *)0x0) || (*(int *)((long)puVar18 + 0xc) != 1)) ||
             (*(int *)((long)puVar18 + 4) != 1)) goto LAB_109cf65f8;
        }
        else {
          if ((iVar22 == 0x1a4) || (iVar22 == 400)) {
            puVar24 = &uStack_1b0;
            func_0x0001067e045c(puVar24,puVar26);
            if (puVar24 == (undefined8 *)0x0) goto LAB_109cf675c;
LAB_109cf65f8:
            FUN_109cf8c4c(puVar12[0xe],&uStack_210,puVar26,puVar18,0);
          }
          else {
            if (iVar22 != 0x15e) goto LAB_109cf65f8;
            func_0x000109cf8fc8(puVar12[0xe],&uStack_210,puVar26);
          }
          puVar18 = (ulong *)(*(ulong *)(uVar9 + 0x70) & 0xfffffffffffffffc);
          bVar4 = *(byte *)((long)puVar18 + 0x17);
          uVar10 = puVar18[1];
          if (-1 < (char)bVar4) {
            uVar10 = (ulong)bVar4;
          }
          bVar5 = *(byte *)((long)puVar26 + 0x17);
          uVar16 = puVar26[1];
          if (-1 < (char)bVar5) {
            uVar16 = (ulong)bVar5;
          }
          if (uVar10 == uVar16) {
            puVar15 = (ulong *)*puVar18;
            if (-1 < (char)bVar4) {
              puVar15 = puVar18;
            }
            puVar18 = (ulong *)*puVar26;
            if (-1 < (char)bVar5) {
              puVar18 = puVar26;
            }
            _memcmp(puVar15,puVar18);
            if ((int)puVar15 == 0) {
              uVar10 = *(ulong *)(uVar9 + 8);
              if ((uVar10 & 1) != 0) {
                uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
              }
              func_0x000107c30248(uVar9 + 0x70,&uStack_210,uVar10);
            }
          }
          puVar26 = puVar13;
          if ((*puVar13 & 1) != 0) {
            puVar26 = (ulong *)(*puVar13 + lVar23 * 8 + 7);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (*puVar26,&uStack_210);
          ppuVar20 = &PTR_PTR_1132f1948;
          if (*(int *)(puVar12[0xe] + 0x30) == 500) {
            ppuVar20 = *(undefined ***)(puVar12[0xe] + 0x28);
          }
          iVar6 = *(int *)(ppuVar20 + 4);
          if ((int)(lVar27 + 1) < iVar6 + -1) {
            lVar28 = (long)iVar6 + -1;
            lVar30 = (long)iVar6 << 3;
            do {
              uVar10 = puVar12[0xe];
              if (*(int *)(uVar10 + 0x30) == 500) {
                uVar16 = *(ulong *)(uVar10 + 0x28);
              }
              else {
                func_0x000109c78218(uVar10);
                *(undefined4 *)(uVar10 + 0x30) = 500;
                uVar16 = *(ulong *)(uVar10 + 8);
                if ((uVar16 & 1) != 0) {
                  uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
                }
                func_0x000109cbae88();
                *(ulong *)(uVar10 + 0x28) = uVar16;
              }
              puVar26 = (ulong *)(uVar16 + 0x18);
              lVar1 = *puVar26 + lVar30;
              puVar18 = puVar26;
              if ((*puVar26 & 1) != 0) {
                puVar26 = (ulong *)(lVar1 + -9);
                puVar18 = (ulong *)(lVar1 + -1);
              }
              uVar10 = *puVar18;
              *puVar18 = *puVar26;
              *puVar26 = uVar10;
              lVar28 = lVar28 + -1;
              lVar30 = lVar30 + -8;
            } while (lVar27 + 1 < lVar28);
          }
        }
LAB_109cf675c:
        if ((long)uStack_200 < 0) {
          __ZdlPv(uStack_210);
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)(uVar9 + 0x30));
    }
    if (0 < *(int *)(uVar9 + 0x18)) {
      lVar23 = 0;
      puVar13 = (ulong *)(uVar9 + 0x10);
      do {
        puVar26 = puVar13;
        if ((*puVar13 & 1) != 0) {
          puVar26 = (ulong *)(*puVar13 + lVar23 * 8 + 7);
        }
        uVar16 = *puVar26;
        FUN_109cf8a98(auStack_128,uVar16);
        puVar26 = auStack_128;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar26,"_",1);
        uStack_108 = puVar26[1];
        uStack_110 = *puVar26;
        uStack_100 = puVar26[2];
        puVar26[1] = 0;
        puVar26[2] = 0;
        *puVar26 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_140,lVar27);
        uVar10 = uStack_138;
        ppppppuVar7 = (undefined8 ******)pppppuStack_140;
        if (-1 < (char)bStack_129) {
          uVar10 = (ulong)bStack_129;
          ppppppuVar7 = &pppppuStack_140;
        }
        puVar26 = &uStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar26,ppppppuVar7,uVar10);
        uStack_e8 = puVar26[1];
        uStack_f0 = *puVar26;
        uStack_e0 = puVar26[2];
        puVar26[1] = 0;
        puVar26[2] = 0;
        *puVar26 = 0;
        puVar26 = &uStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar26,"_",1);
        uStack_c8 = puVar26[1];
        uStack_d0 = *puVar26;
        uStack_c0 = puVar26[2];
        puVar26[1] = 0;
        puVar26[2] = 0;
        *puVar26 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_158,lVar23);
        uVar10 = uStack_150;
        ppppppuVar7 = (undefined8 ******)pppppuStack_158;
        if (-1 < (char)bStack_141) {
          uVar10 = (ulong)bStack_141;
          ppppppuVar7 = &pppppuStack_158;
        }
        puVar26 = &uStack_d0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar26,ppppppuVar7,uVar10);
        uStack_208 = puVar26[1];
        uStack_210 = *puVar26;
        uStack_200 = puVar26[2];
        puVar26[1] = 0;
        puVar26[2] = 0;
        *puVar26 = 0;
        if ((char)bStack_141 < '\0') {
          __ZdlPv(pppppuStack_158);
        }
        if ((char)bStack_129 < '\0') {
          __ZdlPv(pppppuStack_140);
        }
        puVar26 = puVar12;
        FUN_109cf8a0c(puVar12,uVar16);
        uVar31 = puVar26[1];
        uVar10 = *puVar26;
        if (iVar22 == 0x96) {
          uStack_d0._4_4_ = (int)(uVar10 >> 0x20);
          uStack_c8._4_4_ = (int)(uVar31 >> 0x20);
          uStack_c8 = CONCAT44(uStack_c8._4_4_ * uStack_d0._4_4_,(int)uVar31);
          uStack_d0._0_4_ = (int)uVar10;
          uStack_d0 = CONCAT44(1,(int)uStack_d0);
LAB_109cf696c:
          FUN_109cf8c4c(puVar12[0xe],uVar16,&uStack_210,&uStack_d0,1);
        }
        else {
          uStack_d0 = uVar10;
          uStack_c8 = uVar31;
          if (iVar22 != 0x15e) goto LAB_109cf696c;
          func_0x000109cf8fc8(puVar12[0xe],uVar16,&uStack_210);
        }
        puVar26 = puVar13;
        if ((*puVar13 & 1) != 0) {
          puVar26 = (ulong *)(*puVar13 + lVar23 * 8 + 7);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*puVar26,&uStack_210);
        ppuVar20 = &PTR_PTR_1132f1948;
        if (*(int *)(puVar12[0xe] + 0x30) == 500) {
          ppuVar20 = *(undefined ***)(puVar12[0xe] + 0x28);
        }
        iVar6 = *(int *)(ppuVar20 + 4);
        if (iVar17 < iVar6 + -1) {
          lVar28 = (long)iVar6 + -1;
          lVar30 = (long)iVar6 << 3;
          do {
            uVar10 = puVar12[0xe];
            if (*(int *)(uVar10 + 0x30) == 500) {
              uVar16 = *(ulong *)(uVar10 + 0x28);
            }
            else {
              func_0x000109c78218(uVar10);
              *(undefined4 *)(uVar10 + 0x30) = 500;
              uVar16 = *(ulong *)(uVar10 + 8);
              if ((uVar16 & 1) != 0) {
                uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
              }
              func_0x000109cbae88();
              *(ulong *)(uVar10 + 0x28) = uVar16;
            }
            puVar26 = (ulong *)(uVar16 + 0x18);
            lVar1 = *puVar26 + lVar30;
            puVar18 = puVar26;
            if ((*puVar26 & 1) != 0) {
              puVar26 = (ulong *)(lVar1 + -9);
              puVar18 = (ulong *)(lVar1 + -1);
            }
            uVar10 = *puVar18;
            *puVar18 = *puVar26;
            *puVar26 = uVar10;
            lVar28 = lVar28 + -1;
            lVar30 = lVar30 + -8;
          } while (lVar27 < lVar28);
        }
        if ((long)uStack_200 < 0) {
          __ZdlPv(uStack_210);
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)(uVar9 + 0x18));
    }
  }
  iVar17 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_1b8 = 0;
  do {
    uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar17);
    uVar9 = puVar12[0xe];
    if (*(int *)(uVar9 + 0x30) == 500) {
      uVar10 = *(ulong *)(uVar9 + 0x28);
      if (*(int *)(uVar10 + 0x20) <= iVar17) break;
    }
    else {
      if (iRam00000001132f1968 <= iVar17) break;
      func_0x000109c78218(uVar9);
      *(undefined4 *)(uVar9 + 0x30) = 500;
      uVar10 = *(ulong *)(uVar9 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cbae88();
      *(ulong *)(uVar9 + 0x28) = uVar10;
      iVar17 = (int)uStack_d0;
    }
    uVar9 = *(ulong *)(uVar10 + 0x18);
    puVar13 = (ulong *)(uVar10 + 0x18);
    if ((uVar9 & 1) != 0) {
      puVar13 = (ulong *)(uVar9 + (long)iVar17 * 8 + 7);
    }
    if (*(int *)(*puVar13 + 0x8c) == 0x1ae) {
      func_0x000108a5413c(&uStack_210,&uStack_d0);
      iVar17 = (int)uStack_d0;
    }
    iVar17 = iVar17 + 1;
  } while( true );
  if (lStack_1e8 != 0) {
    FUN_109cf7124(puVar12,&uStack_210);
  }
  FUN_109cedc2c(puVar12 + 0xf);
  func_0x0001098b5494(&uStack_210);
  func_0x0001098b5494(&uStack_1e0);
  func_0x000107c2826c(&uStack_1b0);
  func_0x000107c2826c(&lStack_180);
  lStack_180 = 0;
  lStack_178 = 0;
  uStack_170 = 0;
  uVar9 = puVar12[0xe];
  if (*(int *)(uVar9 + 0x30) == 500) {
    uVar10 = *(ulong *)(uVar9 + 0x28);
  }
  else {
    func_0x000109c78218(uVar9);
    *(undefined4 *)(uVar9 + 0x30) = 500;
    uVar10 = *(ulong *)(uVar9 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x000109cbae88();
    *(ulong *)(uVar9 + 0x28) = uVar10;
  }
  uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
  iVar17 = *(int *)(uVar10 + 0x20);
  if (0 < iVar17) {
    iVar22 = 0;
    do {
      uVar9 = *(ulong *)(uVar10 + 0x18);
      puVar13 = (ulong *)(uVar10 + 0x18);
      if ((uVar9 & 1) != 0) {
        puVar13 = (ulong *)(uVar9 + (long)iVar22 * 8 + 7);
      }
      uVar9 = *puVar13;
      if (*(int *)(uVar9 + 0x8c) == 0x136) {
        uVar3 = *(uint *)(*(long *)(uVar9 + 0x80) + 0x10);
        if (0 < (int)uVar3) {
          uVar16 = 0;
          do {
            if (uVar16 != *(ulong *)(*(long *)(*(long *)(uVar9 + 0x80) + 0x18) + uVar16 * 8))
            goto LAB_109cf6c58;
            uVar16 = uVar16 + 1;
          } while (uVar3 != uVar16);
        }
        if (*(int *)(uVar9 + 0x18) != 1) {
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaef1);
          goto LAB_109cf6fc8;
        }
        func_0x00010923b3a0(&lStack_180,&uStack_1e0);
        iVar17 = *(int *)(uVar10 + 0x20);
        iVar22 = (int)uStack_1e0;
      }
LAB_109cf6c58:
      iVar22 = iVar22 + 1;
      uStack_1e0 = CONCAT44(uStack_1e0._4_4_,iVar22);
    } while (iVar22 < iVar17);
  }
  FUN_109cf9190(&uStack_1e0,puVar12);
  FUN_109cf93e4(puVar12,&lStack_180,&uStack_1e0);
  FUN_109cf9190(&uStack_210,puVar12);
  if (lStack_1c8 != 0) {
    func_0x000109cfa07c(lStack_1d0);
    lStack_1d0 = 0;
    if (uStack_1d8 != 0) {
      uVar9 = 0;
      do {
        *(undefined8 *)(uStack_1e0 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uStack_1d8 != uVar9);
    }
    lStack_1c8 = 0;
  }
  uVar9 = uStack_1e0;
  uStack_1e0 = uStack_210;
  uStack_210 = 0;
  if (uVar9 != 0) {
    __ZdlPv();
  }
  uStack_1d8 = uStack_208;
  uStack_208 = 0;
  lStack_1d0 = uStack_200;
  lStack_1c8 = lStack_1f8;
  lStack_1c0 = CONCAT44(lStack_1c0._4_4_,(undefined4)uStack_1f0);
  if (lStack_1f8 != 0) {
    uVar9 = *(ulong *)(uStack_200 + 8);
    if ((uStack_1d8 & uStack_1d8 - 1) == 0) {
      uVar9 = uVar9 & uStack_1d8 - 1;
    }
    else if (uStack_1d8 <= uVar9) {
      uVar16 = 0;
      if (uStack_1d8 != 0) {
        uVar16 = uVar9 / uStack_1d8;
      }
      uVar9 = uVar9 - uVar16 * uStack_1d8;
    }
    *(long **)(uStack_1e0 + uVar9 * 8) = &lStack_1d0;
    uStack_200 = 0;
    lStack_1f8 = 0;
  }
  func_0x000109cfa07c(uStack_200);
  uVar9 = uStack_210;
  uStack_210 = 0;
  if (uVar9 != 0) {
    __ZdlPv();
  }
  iVar17 = *(int *)(uVar10 + 0x20);
  if (0 < iVar17) {
    lVar27 = 0;
    puVar13 = (ulong *)(uVar10 + 0x18);
    do {
      puVar26 = puVar13;
      if ((*puVar13 & 1) != 0) {
        puVar26 = (ulong *)(*puVar13 + lVar27 * 8 + 7);
      }
      uVar9 = *puVar26;
      if (*(int *)(uVar9 + 0x8c) == 300) {
        if (*(int *)(uVar9 + 0x18) != 1) {
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaef1);
          goto LAB_109cf6fc8;
        }
        uVar16 = *(ulong *)(uVar9 + 0x10);
        puVar26 = (ulong *)(uVar9 + 0x10);
        if ((uVar16 & 1) != 0) {
          puVar26 = (ulong *)(uVar16 + 7);
        }
        puVar26 = (ulong *)*puVar26;
        puVar18 = &uStack_1e0;
        FUN_109cfa508(puVar18,puVar26);
        if (puVar18 == (ulong *)0x0) {
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaf22);
          goto LAB_109cf6fc8;
        }
        uVar3 = (uint)puVar18[5];
        uStack_210 = CONCAT44(uStack_210._4_4_,uVar3);
        if ((int)uVar3 < 0) {
          ppuVar20 = &PTR_PTR_1132f05f8;
          if (*(undefined ***)(puVar12[0xe] + 0x18) != (undefined **)0x0) {
            ppuVar20 = *(undefined ***)(puVar12[0xe] + 0x18);
          }
          puVar21 = ppuVar20[3];
          ppuVar29 = ppuVar20 + 3;
          if (((ulong)puVar21 & 1) != 0) {
            ppuVar29 = (undefined **)(puVar21 + 7);
          }
          if (*(int *)(ppuVar20 + 4) != 0) {
            iVar17 = 0;
            bVar4 = *(byte *)((long)puVar26 + 0x17);
            uVar9 = puVar26[1];
            if (-1 < (char)bVar4) {
              uVar9 = (ulong)bVar4;
            }
            lVar23 = (long)*(int *)(ppuVar20 + 4) << 3;
            do {
              puVar18 = (ulong *)(*(ulong *)(*ppuVar29 + 0x18) & 0xfffffffffffffffc);
              bVar5 = *(byte *)((long)puVar18 + 0x17);
              uVar16 = puVar18[1];
              if (-1 < (char)bVar5) {
                uVar16 = (ulong)bVar5;
              }
              if (uVar16 == uVar9) {
                puVar15 = (ulong *)*puVar18;
                if (-1 < (char)bVar5) {
                  puVar15 = puVar18;
                }
                puVar18 = (ulong *)*puVar26;
                if (-1 < (char)bVar4) {
                  puVar18 = puVar26;
                }
                _memcmp(puVar15,puVar18,uVar9);
                if ((int)puVar15 == 0) {
                  iVar17 = iVar17 + 1;
                }
              }
              ppuVar29 = ppuVar29 + 1;
              lVar23 = lVar23 + -8;
            } while (lVar23 != 0);
            if (iVar17 == 1) goto LAB_109cf6ebc;
          }
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaf55);
LAB_109cf6fc8:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x109cf6fcc);
          (*pcVar8)();
        }
        puVar26 = puVar13;
        if ((*puVar13 & 1) != 0) {
          puVar26 = (ulong *)(*puVar13 + (ulong)uVar3 * 8 + 7);
        }
        if ((*(int *)(*puVar26 + 0x8c) == 300) && (*(int *)((long)puVar18 + 0x2c) == 1)) {
          func_0x00010923b3a0(&lStack_180,&uStack_210);
        }
LAB_109cf6ebc:
        iVar17 = *(int *)(uVar10 + 0x20);
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < iVar17);
  }
  __ZNSt3__16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_(lStack_180,lStack_178,&uStack_210);
  FUN_109cf93e4(puVar12,&lStack_180,&uStack_1e0);
  func_0x000109cfa07c(lStack_1d0);
  uVar9 = uStack_1e0;
  uStack_1e0 = 0;
  if (uVar9 != 0) {
    __ZdlPv();
  }
  if (lStack_180 != 0) {
    lStack_178 = lStack_180;
    __ZdlPv();
  }
  return;
}



/* Entry: 109cf5eb0; end: 109cf614b;  */

/* WARNING: Removing unreachable block (ram,0x000109cf6524) */
/* WARNING: Removing unreachable block (ram,0x000109cf68d0) */
/* WARNING: Removing unreachable block (ram,0x000109cf6554) */
/* WARNING: Removing unreachable block (ram,0x000109cf6534) */
/* WARNING: Removing unreachable block (ram,0x000109cf68e0) */
/* WARNING: Removing unreachable block (ram,0x000109cf6568) */
/* WARNING: Removing unreachable block (ram,0x000109cf6900) */
/* WARNING: Removing unreachable block (ram,0x000109cf6910) */

void FUN_109cf5eb0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 ******ppppppuVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long *plVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined *puVar17;
  int iVar18;
  ulong *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  int iVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong *puVar26;
  long lVar27;
  long lVar28;
  undefined **ppuVar29;
  long lVar30;
  ulong uVar31;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 *****pppppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  undefined8 *****pppppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  ulong auStack_118 [3];
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  
  lVar27 = *param_2;
  uVar9 = *(ulong *)(lVar27 + 0x10);
  if (uVar9 == 0) {
    puVar12 = (ulong *)&UNK_10e03f766;
    puVar20 = &UNK_10f5aa42b;
    puVar17 = &UNK_10f5aa439;
    goto LAB_109cf6144;
  }
  ___dynamic_cast(uVar9,&PTR_DAT_11087fc08,&PTR_DAT_110b3a688,0);
  lVar23 = *(long *)(param_1 + 0x70);
  if (*(int *)(lVar23 + 0x30) == 500) {
    uVar10 = *(ulong *)(lVar23 + 0x28);
  }
  else {
    func_0x000109c78218(lVar23);
    *(undefined4 *)(lVar23 + 0x30) = 500;
    uVar10 = *(ulong *)(lVar23 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x000109cbae88();
    *(ulong *)(lVar23 + 0x28) = uVar10;
    lVar23 = *(long *)(param_1 + 0x70);
  }
  if (*(int *)(uVar10 + 0x20) == 0) {
    ppuVar21 = &PTR_PTR_1132f05f8;
    if (*(undefined ***)(lVar23 + 0x18) != (undefined **)0x0) {
      ppuVar21 = *(undefined ***)(lVar23 + 0x18);
    }
    if ((*(int *)(ppuVar21 + 4) == 1) && (*(int *)(uVar9 + 0x18) != 0)) {
      puVar20 = ppuVar21[3];
      ppuVar21 = ppuVar21 + 3;
      if (((ulong)puVar20 & 1) != 0) {
        ppuVar21 = (undefined **)(puVar20 + 7);
      }
      puVar24 = (undefined8 *)(*(ulong *)(*ppuVar21 + 0x18) & 0xfffffffffffffffc);
      uVar10 = *(ulong *)(uVar9 + 0x10);
      puVar12 = (ulong *)(uVar9 + 0x10);
      if ((uVar10 & 1) != 0) {
        puVar12 = (ulong *)(uVar10 + 7);
      }
      puVar25 = (undefined8 *)*puVar12;
      bVar4 = *(byte *)((long)puVar24 + 0x17);
      uVar10 = puVar24[1];
      if (-1 < (char)bVar4) {
        uVar10 = (ulong)bVar4;
      }
      bVar5 = *(byte *)((long)puVar25 + 0x17);
      uVar16 = puVar25[1];
      if (-1 < (char)bVar5) {
        uVar16 = (ulong)bVar5;
      }
      if (uVar10 == uVar16) {
        puVar11 = (undefined8 *)*puVar24;
        if (-1 < (char)bVar4) {
          puVar11 = puVar24;
        }
        puVar2 = (undefined8 *)*puVar25;
        if (-1 < (char)bVar5) {
          puVar2 = puVar25;
        }
        _memcmp(puVar11,puVar2);
        if ((int)puVar11 == 0) goto LAB_109cf5ff0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar25,puVar24);
      lVar23 = *(long *)(param_1 + 0x70);
    }
  }
LAB_109cf5ff0:
  if (*(int *)(lVar23 + 0x30) == 500) {
    uVar10 = *(ulong *)(lVar23 + 0x28);
  }
  else {
    func_0x000109c78218(lVar23);
    *(undefined4 *)(lVar23 + 0x30) = 500;
    uVar10 = *(ulong *)(lVar23 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x000109cbae88();
    *(ulong *)(lVar23 + 0x28) = uVar10;
  }
  puVar12 = (ulong *)(uVar10 + 0x18);
  uVar16 = *(ulong *)(uVar9 + 8);
  if ((uVar16 & 1) != 0) {
    uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
  }
  if (*(ulong *)(uVar10 + 0x28) == uVar16) {
    uVar16 = *puVar12;
    if ((uVar16 & 1) != 0) {
      iVar18 = *(int *)(uVar16 - 1);
      lVar23 = (long)iVar18;
      if (iVar18 <= *(int *)(uVar10 + 0x24)) {
        puVar13 = (ulong *)(uVar16 + 7);
        iVar22 = *(int *)(uVar10 + 0x20);
        if (iVar22 < iVar18) {
          puVar26 = puVar13 + iVar22;
          goto LAB_109cf60c0;
        }
        goto LAB_109cf60c8;
      }
      goto LAB_109cf603c;
    }
    if (uVar16 != 0) goto LAB_109cf603c;
    iVar22 = *(int *)(uVar10 + 0x20);
    puVar13 = puVar12;
    if (iVar22 < 0) {
      lVar23 = 0;
      puVar26 = puVar12 + iVar22;
LAB_109cf60c0:
      puVar13[lVar23] = *puVar26;
    }
LAB_109cf60c8:
    *(int *)(uVar10 + 0x20) = iVar22 + 1;
    puVar13[iVar22] = uVar9;
    uVar9 = *puVar12;
    if ((uVar9 & 1) != 0) {
      *(int *)(uVar9 - 1) = *(int *)(uVar9 - 1) + 1;
    }
  }
  else {
LAB_109cf603c:
    FUN_109cf9c54(puVar12,uVar9);
  }
  if ((*(byte *)(lVar27 + 0xd) & 1) != 0) {
    *(undefined1 *)(lVar27 + 0xd) = 0;
    return;
  }
  puVar12 = (ulong *)&UNK_10e03eb43;
  puVar20 = &UNK_10f5a9c25;
  puVar17 = &UNK_10f5a9c3a;
LAB_109cf6144:
  func_0x00010952d0c4(puVar12,puVar20,puVar17);
  iVar18 = 0;
  lStack_168 = 0;
  lStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_150 = 0x3f800000;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_180 = 0x3f800000;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  lStack_1a8 = 0;
  lStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  do {
    uStack_200 = CONCAT44(uStack_200._4_4_,iVar18);
    uVar9 = puVar12[0xe];
    if (*(int *)(uVar9 + 0x30) == 500) {
      uVar10 = *(ulong *)(uVar9 + 0x28);
      if (*(int *)(uVar10 + 0x20) <= iVar18) break;
    }
    else {
      if (iRam00000001132f1968 <= iVar18) break;
      func_0x000109c78218(uVar9);
      *(undefined4 *)(uVar9 + 0x30) = 500;
      uVar10 = *(ulong *)(uVar9 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cbae88();
      *(ulong *)(uVar9 + 0x28) = uVar10;
      iVar18 = (int)uStack_200;
    }
    uVar9 = *(ulong *)(uVar10 + 0x18);
    puVar13 = (ulong *)(uVar10 + 0x18);
    if ((uVar9 & 1) != 0) {
      puVar13 = (ulong *)(uVar9 + (long)iVar18 * 8 + 7);
    }
    uVar9 = *puVar13;
    iVar18 = *(int *)(uVar9 + 0x8c);
    if (((iVar18 == 0x96) || (iVar18 == 0x1a4)) || (iVar18 == 400)) {
      func_0x000108a5413c(&uStack_1d0,&uStack_200);
      iVar18 = *(int *)(uVar9 + 0x8c);
    }
    if (iVar18 == 0x15e) {
      puVar13 = puVar12 + 9;
      func_0x0001067e045c(puVar13,*(ulong *)(uVar9 + 0x70) & 0xfffffffffffffffc);
      if (puVar13 != (ulong *)0x0) {
        func_0x000108a5413c(&uStack_1d0,&uStack_200);
      }
    }
    puVar26 = (ulong *)(uVar9 + 0x10);
    puVar13 = puVar26;
    if ((*puVar26 & 1) != 0) {
      puVar13 = (ulong *)(*puVar26 + 7);
    }
    if (*(int *)(uVar9 + 0x18) != 0) {
      lVar27 = (long)*(int *)(uVar9 + 0x18) << 3;
      do {
        func_0x000107c2827c(&uStack_1a0,*puVar13,*puVar13);
        lVar27 = lVar27 + -8;
        puVar13 = puVar13 + 1;
      } while (lVar27 != 0);
    }
    iVar18 = *(int *)(uVar9 + 0x8c);
    if (iVar18 == 200) {
      uVar10 = *(ulong *)(uVar9 + 0x28);
      puVar13 = (ulong *)(uVar9 + 0x28);
      if ((uVar10 & 1) != 0) {
        puVar13 = (ulong *)(uVar10 + 7);
      }
      func_0x000107c2827c(&lStack_170,*puVar13,*puVar13);
      iVar18 = *(int *)(uVar9 + 0x8c);
    }
    if (iVar18 == 0x78) {
      if ((*puVar26 & 1) != 0) {
        puVar26 = (ulong *)(*puVar26 + 7);
      }
      plVar14 = &lStack_170;
      func_0x0001067e045c(plVar14,*puVar26);
      if (plVar14 != (long *)0x0) {
        if (*(int *)(uVar9 + 0x8c) == 0x78) {
          uVar10 = *(ulong *)(uVar9 + 0x80);
        }
        else {
          func_0x000109c819a4(uVar9);
          *(undefined4 *)(uVar9 + 0x8c) = 0x78;
          uVar10 = *(ulong *)(uVar9 + 8);
          if ((uVar10 & 1) != 0) {
            uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
          }
          func_0x000109cba600();
          *(ulong *)(uVar9 + 0x80) = uVar10;
        }
        *(undefined1 *)(uVar10 + 0x40) = 0;
      }
    }
    iVar18 = (int)uStack_200 + 1;
  } while( true );
  while (lStack_1a8 != 0) {
    lStack_1a8 = lStack_1a8 + -1;
    iVar18 = *(int *)(*(long *)(uStack_1c8 + ((ulong)(lStack_1b0 + lStack_1a8) >> 10) * 8) +
                     (lStack_1b0 + lStack_1a8 & 0x3ffU) * 4);
    lVar27 = (long)iVar18;
    FUN_109cf9fd8(&uStack_1d0,1);
    uVar9 = puVar12[0xe];
    if (*(int *)(uVar9 + 0x30) == 500) {
      uVar10 = *(ulong *)(uVar9 + 0x28);
    }
    else {
      func_0x000109c78218(uVar9);
      *(undefined4 *)(uVar9 + 0x30) = 500;
      uVar10 = *(ulong *)(uVar9 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cbae88();
      *(ulong *)(uVar9 + 0x28) = uVar10;
    }
    uVar9 = *(ulong *)(uVar10 + 0x18);
    puVar13 = (ulong *)(uVar10 + 0x18);
    if ((uVar9 & 1) != 0) {
      puVar13 = (ulong *)(uVar9 + lVar27 * 8 + 7);
    }
    uVar9 = *puVar13;
    iVar22 = *(int *)(uVar9 + 0x8c);
    if (0 < *(int *)(uVar9 + 0x30)) {
      lVar23 = 0;
      puVar13 = (ulong *)(uVar9 + 0x28);
      do {
        puVar26 = puVar13;
        if ((*puVar13 & 1) != 0) {
          puVar26 = (ulong *)(*puVar13 + lVar23 * 8 + 7);
        }
        puVar26 = (ulong *)*puVar26;
        FUN_109cf8a98(auStack_118,puVar26);
        puVar19 = auStack_118;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar19,"_",1);
        uStack_f8 = puVar19[1];
        uStack_100 = *puVar19;
        uStack_f0 = puVar19[2];
        puVar19[1] = 0;
        puVar19[2] = 0;
        *puVar19 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_130,lVar27);
        uVar10 = uStack_128;
        ppppppuVar7 = (undefined8 ******)pppppuStack_130;
        if (-1 < (char)bStack_119) {
          uVar10 = (ulong)bStack_119;
          ppppppuVar7 = &pppppuStack_130;
        }
        puVar19 = &uStack_100;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar19,ppppppuVar7,uVar10);
        uStack_d8 = puVar19[1];
        uStack_e0 = *puVar19;
        uStack_d0 = puVar19[2];
        puVar19[1] = 0;
        puVar19[2] = 0;
        *puVar19 = 0;
        puVar19 = &uStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar19,"_",1);
        uStack_b8 = puVar19[1];
        uStack_c0 = *puVar19;
        uStack_b0 = puVar19[2];
        puVar19[1] = 0;
        puVar19[2] = 0;
        *puVar19 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_148,lVar23);
        uVar10 = uStack_140;
        ppppppuVar7 = (undefined8 ******)pppppuStack_148;
        if (-1 < (char)bStack_131) {
          uVar10 = (ulong)bStack_131;
          ppppppuVar7 = &pppppuStack_148;
        }
        puVar19 = &uStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar19,ppppppuVar7,uVar10);
        uStack_1f8 = puVar19[1];
        uStack_200 = *puVar19;
        uStack_1f0 = puVar19[2];
        puVar19[1] = 0;
        puVar19[2] = 0;
        *puVar19 = 0;
        if ((char)bStack_131 < '\0') {
          __ZdlPv(pppppuStack_148);
        }
        if ((char)bStack_119 < '\0') {
          __ZdlPv(pppppuStack_130);
        }
        puVar19 = puVar12;
        FUN_109cf8a0c(puVar12,puVar26);
        if (iVar22 == 0x96) {
          puVar24 = &uStack_1a0;
          func_0x0001067e045c(puVar24,puVar26);
          if (((puVar24 != (undefined8 *)0x0) || (*(int *)((long)puVar19 + 0xc) != 1)) ||
             (*(int *)((long)puVar19 + 4) != 1)) goto LAB_109cf65f8;
        }
        else {
          if ((iVar22 == 0x1a4) || (iVar22 == 400)) {
            puVar24 = &uStack_1a0;
            func_0x0001067e045c(puVar24,puVar26);
            if (puVar24 == (undefined8 *)0x0) goto LAB_109cf675c;
LAB_109cf65f8:
            FUN_109cf8c4c(puVar12[0xe],&uStack_200,puVar26,puVar19,0);
          }
          else {
            if (iVar22 != 0x15e) goto LAB_109cf65f8;
            func_0x000109cf8fc8(puVar12[0xe],&uStack_200,puVar26);
          }
          puVar19 = (ulong *)(*(ulong *)(uVar9 + 0x70) & 0xfffffffffffffffc);
          bVar4 = *(byte *)((long)puVar19 + 0x17);
          uVar10 = puVar19[1];
          if (-1 < (char)bVar4) {
            uVar10 = (ulong)bVar4;
          }
          bVar5 = *(byte *)((long)puVar26 + 0x17);
          uVar16 = puVar26[1];
          if (-1 < (char)bVar5) {
            uVar16 = (ulong)bVar5;
          }
          if (uVar10 == uVar16) {
            puVar15 = (ulong *)*puVar19;
            if (-1 < (char)bVar4) {
              puVar15 = puVar19;
            }
            puVar19 = (ulong *)*puVar26;
            if (-1 < (char)bVar5) {
              puVar19 = puVar26;
            }
            _memcmp(puVar15,puVar19);
            if ((int)puVar15 == 0) {
              uVar10 = *(ulong *)(uVar9 + 8);
              if ((uVar10 & 1) != 0) {
                uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
              }
              func_0x000107c30248(uVar9 + 0x70,&uStack_200,uVar10);
            }
          }
          puVar26 = puVar13;
          if ((*puVar13 & 1) != 0) {
            puVar26 = (ulong *)(*puVar13 + lVar23 * 8 + 7);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (*puVar26,&uStack_200);
          ppuVar21 = &PTR_PTR_1132f1948;
          if (*(int *)(puVar12[0xe] + 0x30) == 500) {
            ppuVar21 = *(undefined ***)(puVar12[0xe] + 0x28);
          }
          iVar6 = *(int *)(ppuVar21 + 4);
          if ((int)(lVar27 + 1) < iVar6 + -1) {
            lVar28 = (long)iVar6 + -1;
            lVar30 = (long)iVar6 << 3;
            do {
              uVar10 = puVar12[0xe];
              if (*(int *)(uVar10 + 0x30) == 500) {
                uVar16 = *(ulong *)(uVar10 + 0x28);
              }
              else {
                func_0x000109c78218(uVar10);
                *(undefined4 *)(uVar10 + 0x30) = 500;
                uVar16 = *(ulong *)(uVar10 + 8);
                if ((uVar16 & 1) != 0) {
                  uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
                }
                func_0x000109cbae88();
                *(ulong *)(uVar10 + 0x28) = uVar16;
              }
              puVar26 = (ulong *)(uVar16 + 0x18);
              lVar1 = *puVar26 + lVar30;
              puVar19 = puVar26;
              if ((*puVar26 & 1) != 0) {
                puVar26 = (ulong *)(lVar1 + -9);
                puVar19 = (ulong *)(lVar1 + -1);
              }
              uVar10 = *puVar19;
              *puVar19 = *puVar26;
              *puVar26 = uVar10;
              lVar28 = lVar28 + -1;
              lVar30 = lVar30 + -8;
            } while (lVar27 + 1 < lVar28);
          }
        }
LAB_109cf675c:
        if ((long)uStack_1f0 < 0) {
          __ZdlPv(uStack_200);
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)(uVar9 + 0x30));
    }
    if (0 < *(int *)(uVar9 + 0x18)) {
      lVar23 = 0;
      puVar13 = (ulong *)(uVar9 + 0x10);
      do {
        puVar26 = puVar13;
        if ((*puVar13 & 1) != 0) {
          puVar26 = (ulong *)(*puVar13 + lVar23 * 8 + 7);
        }
        uVar16 = *puVar26;
        FUN_109cf8a98(auStack_118,uVar16);
        puVar26 = auStack_118;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar26,"_",1);
        uStack_f8 = puVar26[1];
        uStack_100 = *puVar26;
        uStack_f0 = puVar26[2];
        puVar26[1] = 0;
        puVar26[2] = 0;
        *puVar26 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_130,lVar27);
        uVar10 = uStack_128;
        ppppppuVar7 = (undefined8 ******)pppppuStack_130;
        if (-1 < (char)bStack_119) {
          uVar10 = (ulong)bStack_119;
          ppppppuVar7 = &pppppuStack_130;
        }
        puVar26 = &uStack_100;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar26,ppppppuVar7,uVar10);
        uStack_d8 = puVar26[1];
        uStack_e0 = *puVar26;
        uStack_d0 = puVar26[2];
        puVar26[1] = 0;
        puVar26[2] = 0;
        *puVar26 = 0;
        puVar26 = &uStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar26,"_",1);
        uStack_b8 = puVar26[1];
        uStack_c0 = *puVar26;
        uStack_b0 = puVar26[2];
        puVar26[1] = 0;
        puVar26[2] = 0;
        *puVar26 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_148,lVar23);
        uVar10 = uStack_140;
        ppppppuVar7 = (undefined8 ******)pppppuStack_148;
        if (-1 < (char)bStack_131) {
          uVar10 = (ulong)bStack_131;
          ppppppuVar7 = &pppppuStack_148;
        }
        puVar26 = &uStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar26,ppppppuVar7,uVar10);
        uStack_1f8 = puVar26[1];
        uStack_200 = *puVar26;
        uStack_1f0 = puVar26[2];
        puVar26[1] = 0;
        puVar26[2] = 0;
        *puVar26 = 0;
        if ((char)bStack_131 < '\0') {
          __ZdlPv(pppppuStack_148);
        }
        if ((char)bStack_119 < '\0') {
          __ZdlPv(pppppuStack_130);
        }
        puVar26 = puVar12;
        FUN_109cf8a0c(puVar12,uVar16);
        uVar31 = puVar26[1];
        uVar10 = *puVar26;
        if (iVar22 == 0x96) {
          uStack_c0._4_4_ = (int)(uVar10 >> 0x20);
          uStack_b8._4_4_ = (int)(uVar31 >> 0x20);
          uStack_b8 = CONCAT44(uStack_b8._4_4_ * uStack_c0._4_4_,(int)uVar31);
          uStack_c0._0_4_ = (int)uVar10;
          uStack_c0 = CONCAT44(1,(int)uStack_c0);
LAB_109cf696c:
          FUN_109cf8c4c(puVar12[0xe],uVar16,&uStack_200,&uStack_c0,1);
        }
        else {
          uStack_c0 = uVar10;
          uStack_b8 = uVar31;
          if (iVar22 != 0x15e) goto LAB_109cf696c;
          func_0x000109cf8fc8(puVar12[0xe],uVar16,&uStack_200);
        }
        puVar26 = puVar13;
        if ((*puVar13 & 1) != 0) {
          puVar26 = (ulong *)(*puVar13 + lVar23 * 8 + 7);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*puVar26,&uStack_200);
        ppuVar21 = &PTR_PTR_1132f1948;
        if (*(int *)(puVar12[0xe] + 0x30) == 500) {
          ppuVar21 = *(undefined ***)(puVar12[0xe] + 0x28);
        }
        iVar6 = *(int *)(ppuVar21 + 4);
        if (iVar18 < iVar6 + -1) {
          lVar28 = (long)iVar6 + -1;
          lVar30 = (long)iVar6 << 3;
          do {
            uVar10 = puVar12[0xe];
            if (*(int *)(uVar10 + 0x30) == 500) {
              uVar16 = *(ulong *)(uVar10 + 0x28);
            }
            else {
              func_0x000109c78218(uVar10);
              *(undefined4 *)(uVar10 + 0x30) = 500;
              uVar16 = *(ulong *)(uVar10 + 8);
              if ((uVar16 & 1) != 0) {
                uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
              }
              func_0x000109cbae88();
              *(ulong *)(uVar10 + 0x28) = uVar16;
            }
            puVar26 = (ulong *)(uVar16 + 0x18);
            lVar1 = *puVar26 + lVar30;
            puVar19 = puVar26;
            if ((*puVar26 & 1) != 0) {
              puVar26 = (ulong *)(lVar1 + -9);
              puVar19 = (ulong *)(lVar1 + -1);
            }
            uVar10 = *puVar19;
            *puVar19 = *puVar26;
            *puVar26 = uVar10;
            lVar28 = lVar28 + -1;
            lVar30 = lVar30 + -8;
          } while (lVar27 < lVar28);
        }
        if ((long)uStack_1f0 < 0) {
          __ZdlPv(uStack_200);
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)(uVar9 + 0x18));
    }
  }
  iVar18 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_1a8 = 0;
  do {
    uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar18);
    uVar9 = puVar12[0xe];
    if (*(int *)(uVar9 + 0x30) == 500) {
      uVar10 = *(ulong *)(uVar9 + 0x28);
      if (*(int *)(uVar10 + 0x20) <= iVar18) break;
    }
    else {
      if (iRam00000001132f1968 <= iVar18) break;
      func_0x000109c78218(uVar9);
      *(undefined4 *)(uVar9 + 0x30) = 500;
      uVar10 = *(ulong *)(uVar9 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      func_0x000109cbae88();
      *(ulong *)(uVar9 + 0x28) = uVar10;
      iVar18 = (int)uStack_c0;
    }
    uVar9 = *(ulong *)(uVar10 + 0x18);
    puVar13 = (ulong *)(uVar10 + 0x18);
    if ((uVar9 & 1) != 0) {
      puVar13 = (ulong *)(uVar9 + (long)iVar18 * 8 + 7);
    }
    if (*(int *)(*puVar13 + 0x8c) == 0x1ae) {
      func_0x000108a5413c(&uStack_200,&uStack_c0);
      iVar18 = (int)uStack_c0;
    }
    iVar18 = iVar18 + 1;
  } while( true );
  if (lStack_1d8 != 0) {
    FUN_109cf7124(puVar12,&uStack_200);
  }
  FUN_109cedc2c(puVar12 + 0xf);
  func_0x0001098b5494(&uStack_200);
  func_0x0001098b5494(&uStack_1d0);
  func_0x000107c2826c(&uStack_1a0);
  func_0x000107c2826c(&lStack_170);
  lStack_170 = 0;
  lStack_168 = 0;
  uStack_160 = 0;
  uVar9 = puVar12[0xe];
  if (*(int *)(uVar9 + 0x30) == 500) {
    uVar10 = *(ulong *)(uVar9 + 0x28);
  }
  else {
    func_0x000109c78218(uVar9);
    *(undefined4 *)(uVar9 + 0x30) = 500;
    uVar10 = *(ulong *)(uVar9 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    func_0x000109cbae88();
    *(ulong *)(uVar9 + 0x28) = uVar10;
  }
  uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
  iVar18 = *(int *)(uVar10 + 0x20);
  if (0 < iVar18) {
    iVar22 = 0;
    do {
      uVar9 = *(ulong *)(uVar10 + 0x18);
      puVar13 = (ulong *)(uVar10 + 0x18);
      if ((uVar9 & 1) != 0) {
        puVar13 = (ulong *)(uVar9 + (long)iVar22 * 8 + 7);
      }
      uVar9 = *puVar13;
      if (*(int *)(uVar9 + 0x8c) == 0x136) {
        uVar3 = *(uint *)(*(long *)(uVar9 + 0x80) + 0x10);
        if (0 < (int)uVar3) {
          uVar16 = 0;
          do {
            if (uVar16 != *(ulong *)(*(long *)(*(long *)(uVar9 + 0x80) + 0x18) + uVar16 * 8))
            goto LAB_109cf6c58;
            uVar16 = uVar16 + 1;
          } while (uVar3 != uVar16);
        }
        if (*(int *)(uVar9 + 0x18) != 1) {
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaef1);
          goto LAB_109cf6fc8;
        }
        func_0x00010923b3a0(&lStack_170,&uStack_1d0);
        iVar18 = *(int *)(uVar10 + 0x20);
        iVar22 = (int)uStack_1d0;
      }
LAB_109cf6c58:
      iVar22 = iVar22 + 1;
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,iVar22);
    } while (iVar22 < iVar18);
  }
  FUN_109cf9190(&uStack_1d0,puVar12);
  FUN_109cf93e4(puVar12,&lStack_170,&uStack_1d0);
  FUN_109cf9190(&uStack_200,puVar12);
  if (lStack_1b8 != 0) {
    func_0x000109cfa07c(lStack_1c0);
    lStack_1c0 = 0;
    if (uStack_1c8 != 0) {
      uVar9 = 0;
      do {
        *(undefined8 *)(uStack_1d0 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uStack_1c8 != uVar9);
    }
    lStack_1b8 = 0;
  }
  uVar9 = uStack_1d0;
  uStack_1d0 = uStack_200;
  uStack_200 = 0;
  if (uVar9 != 0) {
    __ZdlPv();
  }
  uStack_1c8 = uStack_1f8;
  uStack_1f8 = 0;
  lStack_1c0 = uStack_1f0;
  lStack_1b8 = lStack_1e8;
  lStack_1b0 = CONCAT44(lStack_1b0._4_4_,(undefined4)uStack_1e0);
  if (lStack_1e8 != 0) {
    uVar9 = *(ulong *)(uStack_1f0 + 8);
    if ((uStack_1c8 & uStack_1c8 - 1) == 0) {
      uVar9 = uVar9 & uStack_1c8 - 1;
    }
    else if (uStack_1c8 <= uVar9) {
      uVar16 = 0;
      if (uStack_1c8 != 0) {
        uVar16 = uVar9 / uStack_1c8;
      }
      uVar9 = uVar9 - uVar16 * uStack_1c8;
    }
    *(long **)(uStack_1d0 + uVar9 * 8) = &lStack_1c0;
    uStack_1f0 = 0;
    lStack_1e8 = 0;
  }
  func_0x000109cfa07c(uStack_1f0);
  uVar9 = uStack_200;
  uStack_200 = 0;
  if (uVar9 != 0) {
    __ZdlPv();
  }
  iVar18 = *(int *)(uVar10 + 0x20);
  if (0 < iVar18) {
    lVar27 = 0;
    puVar13 = (ulong *)(uVar10 + 0x18);
    do {
      puVar26 = puVar13;
      if ((*puVar13 & 1) != 0) {
        puVar26 = (ulong *)(*puVar13 + lVar27 * 8 + 7);
      }
      uVar9 = *puVar26;
      if (*(int *)(uVar9 + 0x8c) == 300) {
        if (*(int *)(uVar9 + 0x18) != 1) {
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaef1);
          goto LAB_109cf6fc8;
        }
        uVar16 = *(ulong *)(uVar9 + 0x10);
        puVar26 = (ulong *)(uVar9 + 0x10);
        if ((uVar16 & 1) != 0) {
          puVar26 = (ulong *)(uVar16 + 7);
        }
        puVar26 = (ulong *)*puVar26;
        puVar19 = &uStack_1d0;
        FUN_109cfa508(puVar19,puVar26);
        if (puVar19 == (ulong *)0x0) {
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaf22);
          goto LAB_109cf6fc8;
        }
        uVar3 = (uint)puVar19[5];
        uStack_200 = CONCAT44(uStack_200._4_4_,uVar3);
        if ((int)uVar3 < 0) {
          ppuVar21 = &PTR_PTR_1132f05f8;
          if (*(undefined ***)(puVar12[0xe] + 0x18) != (undefined **)0x0) {
            ppuVar21 = *(undefined ***)(puVar12[0xe] + 0x18);
          }
          puVar20 = ppuVar21[3];
          ppuVar29 = ppuVar21 + 3;
          if (((ulong)puVar20 & 1) != 0) {
            ppuVar29 = (undefined **)(puVar20 + 7);
          }
          if (*(int *)(ppuVar21 + 4) != 0) {
            iVar18 = 0;
            bVar4 = *(byte *)((long)puVar26 + 0x17);
            uVar9 = puVar26[1];
            if (-1 < (char)bVar4) {
              uVar9 = (ulong)bVar4;
            }
            lVar23 = (long)*(int *)(ppuVar21 + 4) << 3;
            do {
              puVar19 = (ulong *)(*(ulong *)(*ppuVar29 + 0x18) & 0xfffffffffffffffc);
              bVar5 = *(byte *)((long)puVar19 + 0x17);
              uVar16 = puVar19[1];
              if (-1 < (char)bVar5) {
                uVar16 = (ulong)bVar5;
              }
              if (uVar16 == uVar9) {
                puVar15 = (ulong *)*puVar19;
                if (-1 < (char)bVar5) {
                  puVar15 = puVar19;
                }
                puVar19 = (ulong *)*puVar26;
                if (-1 < (char)bVar4) {
                  puVar19 = puVar26;
                }
                _memcmp(puVar15,puVar19,uVar9);
                if ((int)puVar15 == 0) {
                  iVar18 = iVar18 + 1;
                }
              }
              ppuVar29 = ppuVar29 + 1;
              lVar23 = lVar23 + -8;
            } while (lVar23 != 0);
            if (iVar18 == 1) goto LAB_109cf6ebc;
          }
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaf55);
LAB_109cf6fc8:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x109cf6fcc);
          (*pcVar8)();
        }
        puVar26 = puVar13;
        if ((*puVar13 & 1) != 0) {
          puVar26 = (ulong *)(*puVar13 + (ulong)uVar3 * 8 + 7);
        }
        if ((*(int *)(*puVar26 + 0x8c) == 300) && (*(int *)((long)puVar19 + 0x2c) == 1)) {
          func_0x00010923b3a0(&lStack_170,&uStack_200);
        }
LAB_109cf6ebc:
        iVar18 = *(int *)(uVar10 + 0x20);
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < iVar18);
  }
  __ZNSt3__16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_(lStack_170,lStack_168,&uStack_200);
  FUN_109cf93e4(puVar12,&lStack_170,&uStack_1d0);
  func_0x000109cfa07c(lStack_1c0);
  uVar9 = uStack_1d0;
  uStack_1d0 = 0;
  if (uVar9 != 0) {
    __ZdlPv();
  }
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  return;
}



/* Entry: 109cf614c; end: 109cf7123;  */

/* WARNING: Removing unreachable block (ram,0x000109cf6524) */
/* WARNING: Removing unreachable block (ram,0x000109cf68d0) */
/* WARNING: Removing unreachable block (ram,0x000109cf6554) */
/* WARNING: Removing unreachable block (ram,0x000109cf6534) */
/* WARNING: Removing unreachable block (ram,0x000109cf68e0) */
/* WARNING: Removing unreachable block (ram,0x000109cf6568) */
/* WARNING: Removing unreachable block (ram,0x000109cf6900) */
/* WARNING: Removing unreachable block (ram,0x000109cf6910) */

void FUN_109cf614c(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 ******ppppppuVar6;
  code *pcVar7;
  ulong uVar8;
  ulong *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  int iVar13;
  ulong *puVar14;
  int iVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  undefined **ppuVar24;
  long lVar25;
  ulong uVar26;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 *****pppppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined8 *****pppppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  ulong auStack_d8 [3];
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  iVar13 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_110 = 0x3f800000;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_140 = 0x3f800000;
  lStack_178 = 0;
  lStack_180 = 0;
  lStack_168 = 0;
  lStack_170 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  do {
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,iVar13);
    uVar18 = param_1[0xe];
    if (*(int *)(uVar18 + 0x30) == 500) {
      uVar8 = *(ulong *)(uVar18 + 0x28);
      if (*(int *)(uVar8 + 0x20) <= iVar13) break;
    }
    else {
      if (iRam00000001132f1968 <= iVar13) break;
      func_0x000109c78218(uVar18);
      *(undefined4 *)(uVar18 + 0x30) = 500;
      uVar8 = *(ulong *)(uVar18 + 8);
      if ((uVar8 & 1) != 0) {
        uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
      }
      func_0x000109cbae88();
      *(ulong *)(uVar18 + 0x28) = uVar8;
      iVar13 = (int)uStack_1c0;
    }
    uVar18 = *(ulong *)(uVar8 + 0x18);
    puVar9 = (ulong *)(uVar8 + 0x18);
    if ((uVar18 & 1) != 0) {
      puVar9 = (ulong *)(uVar18 + (long)iVar13 * 8 + 7);
    }
    uVar18 = *puVar9;
    iVar13 = *(int *)(uVar18 + 0x8c);
    if (((iVar13 == 0x96) || (iVar13 == 0x1a4)) || (iVar13 == 400)) {
      func_0x000108a5413c(&uStack_190,&uStack_1c0);
      iVar13 = *(int *)(uVar18 + 0x8c);
    }
    if (iVar13 == 0x15e) {
      puVar9 = param_1 + 9;
      func_0x0001067e045c(puVar9,*(ulong *)(uVar18 + 0x70) & 0xfffffffffffffffc);
      if (puVar9 != (ulong *)0x0) {
        func_0x000108a5413c(&uStack_190,&uStack_1c0);
      }
    }
    puVar21 = (ulong *)(uVar18 + 0x10);
    puVar9 = puVar21;
    if ((*puVar21 & 1) != 0) {
      puVar9 = (ulong *)(*puVar21 + 7);
    }
    if (*(int *)(uVar18 + 0x18) != 0) {
      lVar19 = (long)*(int *)(uVar18 + 0x18) << 3;
      do {
        func_0x000107c2827c(&uStack_160,*puVar9,*puVar9);
        lVar19 = lVar19 + -8;
        puVar9 = puVar9 + 1;
      } while (lVar19 != 0);
    }
    iVar13 = *(int *)(uVar18 + 0x8c);
    if (iVar13 == 200) {
      uVar8 = *(ulong *)(uVar18 + 0x28);
      puVar9 = (ulong *)(uVar18 + 0x28);
      if ((uVar8 & 1) != 0) {
        puVar9 = (ulong *)(uVar8 + 7);
      }
      func_0x000107c2827c(&lStack_130,*puVar9,*puVar9);
      iVar13 = *(int *)(uVar18 + 0x8c);
    }
    if (iVar13 == 0x78) {
      if ((*puVar21 & 1) != 0) {
        puVar21 = (ulong *)(*puVar21 + 7);
      }
      plVar10 = &lStack_130;
      func_0x0001067e045c(plVar10,*puVar21);
      if (plVar10 != (long *)0x0) {
        if (*(int *)(uVar18 + 0x8c) == 0x78) {
          uVar8 = *(ulong *)(uVar18 + 0x80);
        }
        else {
          func_0x000109c819a4(uVar18);
          *(undefined4 *)(uVar18 + 0x8c) = 0x78;
          uVar8 = *(ulong *)(uVar18 + 8);
          if ((uVar8 & 1) != 0) {
            uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
          }
          func_0x000109cba600();
          *(ulong *)(uVar18 + 0x80) = uVar8;
        }
        *(undefined1 *)(uVar8 + 0x40) = 0;
      }
    }
    iVar13 = (int)uStack_1c0 + 1;
  } while( true );
  while (lStack_168 != 0) {
    lStack_168 = lStack_168 + -1;
    iVar13 = *(int *)(*(long *)(uStack_188 + ((ulong)(lStack_170 + lStack_168) >> 10) * 8) +
                     (lStack_170 + lStack_168 & 0x3ffU) * 4);
    lVar19 = (long)iVar13;
    FUN_109cf9fd8(&uStack_190,1);
    uVar18 = param_1[0xe];
    if (*(int *)(uVar18 + 0x30) == 500) {
      uVar8 = *(ulong *)(uVar18 + 0x28);
    }
    else {
      func_0x000109c78218(uVar18);
      *(undefined4 *)(uVar18 + 0x30) = 500;
      uVar8 = *(ulong *)(uVar18 + 8);
      if ((uVar8 & 1) != 0) {
        uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
      }
      func_0x000109cbae88();
      *(ulong *)(uVar18 + 0x28) = uVar8;
    }
    uVar18 = *(ulong *)(uVar8 + 0x18);
    puVar9 = (ulong *)(uVar8 + 0x18);
    if ((uVar18 & 1) != 0) {
      puVar9 = (ulong *)(uVar18 + lVar19 * 8 + 7);
    }
    uVar18 = *puVar9;
    iVar15 = *(int *)(uVar18 + 0x8c);
    if (0 < *(int *)(uVar18 + 0x30)) {
      lVar20 = 0;
      puVar9 = (ulong *)(uVar18 + 0x28);
      do {
        puVar21 = puVar9;
        if ((*puVar9 & 1) != 0) {
          puVar21 = (ulong *)(*puVar9 + lVar20 * 8 + 7);
        }
        puVar21 = (ulong *)*puVar21;
        FUN_109cf8a98(auStack_d8,puVar21);
        puVar14 = auStack_d8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar14,"_",1);
        uStack_b8 = puVar14[1];
        uStack_c0 = *puVar14;
        uStack_b0 = puVar14[2];
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_f0,lVar19);
        uVar8 = uStack_e8;
        ppppppuVar6 = (undefined8 ******)pppppuStack_f0;
        if (-1 < (char)bStack_d9) {
          uVar8 = (ulong)bStack_d9;
          ppppppuVar6 = &pppppuStack_f0;
        }
        puVar14 = &uStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar14,ppppppuVar6,uVar8);
        uStack_98 = puVar14[1];
        uStack_a0 = *puVar14;
        uStack_90 = puVar14[2];
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        puVar14 = &uStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar14,"_",1);
        uStack_78 = puVar14[1];
        uStack_80 = *puVar14;
        uStack_70 = puVar14[2];
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_108,lVar20);
        uVar8 = uStack_100;
        ppppppuVar6 = (undefined8 ******)pppppuStack_108;
        if (-1 < (char)bStack_f1) {
          uVar8 = (ulong)bStack_f1;
          ppppppuVar6 = &pppppuStack_108;
        }
        puVar14 = &uStack_80;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar14,ppppppuVar6,uVar8);
        uStack_1b8 = puVar14[1];
        uStack_1c0 = *puVar14;
        uStack_1b0 = puVar14[2];
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        if ((char)bStack_f1 < '\0') {
          __ZdlPv(pppppuStack_108);
        }
        if ((char)bStack_d9 < '\0') {
          __ZdlPv(pppppuStack_f0);
        }
        puVar14 = param_1;
        FUN_109cf8a0c(param_1,puVar21);
        if (iVar15 == 0x96) {
          puVar11 = &uStack_160;
          func_0x0001067e045c(puVar11,puVar21);
          if (((puVar11 != (undefined8 *)0x0) || (*(int *)((long)puVar14 + 0xc) != 1)) ||
             (*(int *)((long)puVar14 + 4) != 1)) goto LAB_109cf65f8;
        }
        else {
          if ((iVar15 == 0x1a4) || (iVar15 == 400)) {
            puVar11 = &uStack_160;
            func_0x0001067e045c(puVar11,puVar21);
            if (puVar11 == (undefined8 *)0x0) goto LAB_109cf675c;
LAB_109cf65f8:
            FUN_109cf8c4c(param_1[0xe],&uStack_1c0,puVar21,puVar14,0);
          }
          else {
            if (iVar15 != 0x15e) goto LAB_109cf65f8;
            func_0x000109cf8fc8(param_1[0xe],&uStack_1c0,puVar21);
          }
          puVar14 = (ulong *)(*(ulong *)(uVar18 + 0x70) & 0xfffffffffffffffc);
          bVar3 = *(byte *)((long)puVar14 + 0x17);
          uVar8 = puVar14[1];
          if (-1 < (char)bVar3) {
            uVar8 = (ulong)bVar3;
          }
          bVar4 = *(byte *)((long)puVar21 + 0x17);
          uVar22 = puVar21[1];
          if (-1 < (char)bVar4) {
            uVar22 = (ulong)bVar4;
          }
          if (uVar8 == uVar22) {
            puVar12 = (ulong *)*puVar14;
            if (-1 < (char)bVar3) {
              puVar12 = puVar14;
            }
            puVar14 = (ulong *)*puVar21;
            if (-1 < (char)bVar4) {
              puVar14 = puVar21;
            }
            _memcmp(puVar12,puVar14);
            if ((int)puVar12 == 0) {
              uVar8 = *(ulong *)(uVar18 + 8);
              if ((uVar8 & 1) != 0) {
                uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
              }
              func_0x000107c30248(uVar18 + 0x70,&uStack_1c0,uVar8);
            }
          }
          puVar21 = puVar9;
          if ((*puVar9 & 1) != 0) {
            puVar21 = (ulong *)(*puVar9 + lVar20 * 8 + 7);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (*puVar21,&uStack_1c0);
          ppuVar16 = &PTR_PTR_1132f1948;
          if (*(int *)(param_1[0xe] + 0x30) == 500) {
            ppuVar16 = *(undefined ***)(param_1[0xe] + 0x28);
          }
          iVar5 = *(int *)(ppuVar16 + 4);
          if ((int)(lVar19 + 1) < iVar5 + -1) {
            lVar23 = (long)iVar5 + -1;
            lVar25 = (long)iVar5 << 3;
            do {
              uVar8 = param_1[0xe];
              if (*(int *)(uVar8 + 0x30) == 500) {
                uVar22 = *(ulong *)(uVar8 + 0x28);
              }
              else {
                func_0x000109c78218(uVar8);
                *(undefined4 *)(uVar8 + 0x30) = 500;
                uVar22 = *(ulong *)(uVar8 + 8);
                if ((uVar22 & 1) != 0) {
                  uVar22 = *(ulong *)(uVar22 & 0xfffffffffffffffe);
                }
                func_0x000109cbae88();
                *(ulong *)(uVar8 + 0x28) = uVar22;
              }
              puVar21 = (ulong *)(uVar22 + 0x18);
              lVar1 = *puVar21 + lVar25;
              puVar14 = puVar21;
              if ((*puVar21 & 1) != 0) {
                puVar21 = (ulong *)(lVar1 + -9);
                puVar14 = (ulong *)(lVar1 + -1);
              }
              uVar8 = *puVar14;
              *puVar14 = *puVar21;
              *puVar21 = uVar8;
              lVar23 = lVar23 + -1;
              lVar25 = lVar25 + -8;
            } while (lVar19 + 1 < lVar23);
          }
        }
LAB_109cf675c:
        if ((long)uStack_1b0 < 0) {
          __ZdlPv(uStack_1c0);
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)(uVar18 + 0x30));
    }
    if (0 < *(int *)(uVar18 + 0x18)) {
      lVar20 = 0;
      puVar9 = (ulong *)(uVar18 + 0x10);
      do {
        puVar21 = puVar9;
        if ((*puVar9 & 1) != 0) {
          puVar21 = (ulong *)(*puVar9 + lVar20 * 8 + 7);
        }
        uVar22 = *puVar21;
        FUN_109cf8a98(auStack_d8,uVar22);
        puVar21 = auStack_d8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar21,"_",1);
        uStack_b8 = puVar21[1];
        uStack_c0 = *puVar21;
        uStack_b0 = puVar21[2];
        puVar21[1] = 0;
        puVar21[2] = 0;
        *puVar21 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_f0,lVar19);
        uVar8 = uStack_e8;
        ppppppuVar6 = (undefined8 ******)pppppuStack_f0;
        if (-1 < (char)bStack_d9) {
          uVar8 = (ulong)bStack_d9;
          ppppppuVar6 = &pppppuStack_f0;
        }
        puVar21 = &uStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar21,ppppppuVar6,uVar8);
        uStack_98 = puVar21[1];
        uStack_a0 = *puVar21;
        uStack_90 = puVar21[2];
        puVar21[1] = 0;
        puVar21[2] = 0;
        *puVar21 = 0;
        puVar21 = &uStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar21,"_",1);
        uStack_78 = puVar21[1];
        uStack_80 = *puVar21;
        uStack_70 = puVar21[2];
        puVar21[1] = 0;
        puVar21[2] = 0;
        *puVar21 = 0;
        __ZNSt3__19to_stringEi(&pppppuStack_108,lVar20);
        uVar8 = uStack_100;
        ppppppuVar6 = (undefined8 ******)pppppuStack_108;
        if (-1 < (char)bStack_f1) {
          uVar8 = (ulong)bStack_f1;
          ppppppuVar6 = &pppppuStack_108;
        }
        puVar21 = &uStack_80;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar21,ppppppuVar6,uVar8);
        uStack_1b8 = puVar21[1];
        uStack_1c0 = *puVar21;
        uStack_1b0 = puVar21[2];
        puVar21[1] = 0;
        puVar21[2] = 0;
        *puVar21 = 0;
        if ((char)bStack_f1 < '\0') {
          __ZdlPv(pppppuStack_108);
        }
        if ((char)bStack_d9 < '\0') {
          __ZdlPv(pppppuStack_f0);
        }
        puVar21 = param_1;
        FUN_109cf8a0c(param_1,uVar22);
        uVar26 = puVar21[1];
        uVar8 = *puVar21;
        if (iVar15 == 0x96) {
          uStack_80._4_4_ = (int)(uVar8 >> 0x20);
          uStack_78._4_4_ = (int)(uVar26 >> 0x20);
          uStack_78 = CONCAT44(uStack_78._4_4_ * uStack_80._4_4_,(int)uVar26);
          uStack_80._0_4_ = (int)uVar8;
          uStack_80 = CONCAT44(1,(int)uStack_80);
LAB_109cf696c:
          FUN_109cf8c4c(param_1[0xe],uVar22,&uStack_1c0,&uStack_80,1);
        }
        else {
          uStack_80 = uVar8;
          uStack_78 = uVar26;
          if (iVar15 != 0x15e) goto LAB_109cf696c;
          func_0x000109cf8fc8(param_1[0xe],uVar22,&uStack_1c0);
        }
        puVar21 = puVar9;
        if ((*puVar9 & 1) != 0) {
          puVar21 = (ulong *)(*puVar9 + lVar20 * 8 + 7);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*puVar21,&uStack_1c0);
        ppuVar16 = &PTR_PTR_1132f1948;
        if (*(int *)(param_1[0xe] + 0x30) == 500) {
          ppuVar16 = *(undefined ***)(param_1[0xe] + 0x28);
        }
        iVar5 = *(int *)(ppuVar16 + 4);
        if (iVar13 < iVar5 + -1) {
          lVar23 = (long)iVar5 + -1;
          lVar25 = (long)iVar5 << 3;
          do {
            uVar8 = param_1[0xe];
            if (*(int *)(uVar8 + 0x30) == 500) {
              uVar22 = *(ulong *)(uVar8 + 0x28);
            }
            else {
              func_0x000109c78218(uVar8);
              *(undefined4 *)(uVar8 + 0x30) = 500;
              uVar22 = *(ulong *)(uVar8 + 8);
              if ((uVar22 & 1) != 0) {
                uVar22 = *(ulong *)(uVar22 & 0xfffffffffffffffe);
              }
              func_0x000109cbae88();
              *(ulong *)(uVar8 + 0x28) = uVar22;
            }
            puVar21 = (ulong *)(uVar22 + 0x18);
            lVar1 = *puVar21 + lVar25;
            puVar14 = puVar21;
            if ((*puVar21 & 1) != 0) {
              puVar21 = (ulong *)(lVar1 + -9);
              puVar14 = (ulong *)(lVar1 + -1);
            }
            uVar8 = *puVar14;
            *puVar14 = *puVar21;
            *puVar21 = uVar8;
            lVar23 = lVar23 + -1;
            lVar25 = lVar25 + -8;
          } while (lVar19 < lVar23);
        }
        if ((long)uStack_1b0 < 0) {
          __ZdlPv(uStack_1c0);
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)(uVar18 + 0x18));
    }
  }
  iVar13 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_168 = 0;
  do {
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar13);
    uVar18 = param_1[0xe];
    if (*(int *)(uVar18 + 0x30) == 500) {
      uVar8 = *(ulong *)(uVar18 + 0x28);
      if (*(int *)(uVar8 + 0x20) <= iVar13) break;
    }
    else {
      if (iRam00000001132f1968 <= iVar13) break;
      func_0x000109c78218(uVar18);
      *(undefined4 *)(uVar18 + 0x30) = 500;
      uVar8 = *(ulong *)(uVar18 + 8);
      if ((uVar8 & 1) != 0) {
        uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
      }
      func_0x000109cbae88();
      *(ulong *)(uVar18 + 0x28) = uVar8;
      iVar13 = (int)uStack_80;
    }
    uVar18 = *(ulong *)(uVar8 + 0x18);
    puVar9 = (ulong *)(uVar8 + 0x18);
    if ((uVar18 & 1) != 0) {
      puVar9 = (ulong *)(uVar18 + (long)iVar13 * 8 + 7);
    }
    if (*(int *)(*puVar9 + 0x8c) == 0x1ae) {
      func_0x000108a5413c(&uStack_1c0,&uStack_80);
      iVar13 = (int)uStack_80;
    }
    iVar13 = iVar13 + 1;
  } while( true );
  if (lStack_198 != 0) {
    FUN_109cf7124(param_1,&uStack_1c0);
  }
  FUN_109cedc2c(param_1 + 0xf);
  func_0x0001098b5494(&uStack_1c0);
  func_0x0001098b5494(&uStack_190);
  func_0x000107c2826c(&uStack_160);
  func_0x000107c2826c(&lStack_130);
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_120 = 0;
  uVar18 = param_1[0xe];
  if (*(int *)(uVar18 + 0x30) == 500) {
    uVar8 = *(ulong *)(uVar18 + 0x28);
  }
  else {
    func_0x000109c78218(uVar18);
    *(undefined4 *)(uVar18 + 0x30) = 500;
    uVar8 = *(ulong *)(uVar18 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    func_0x000109cbae88();
    *(ulong *)(uVar18 + 0x28) = uVar8;
  }
  uStack_190 = uStack_190 & 0xffffffff00000000;
  iVar13 = *(int *)(uVar8 + 0x20);
  if (0 < iVar13) {
    iVar15 = 0;
    do {
      uVar18 = *(ulong *)(uVar8 + 0x18);
      puVar9 = (ulong *)(uVar8 + 0x18);
      if ((uVar18 & 1) != 0) {
        puVar9 = (ulong *)(uVar18 + (long)iVar15 * 8 + 7);
      }
      uVar18 = *puVar9;
      if (*(int *)(uVar18 + 0x8c) == 0x136) {
        uVar2 = *(uint *)(*(long *)(uVar18 + 0x80) + 0x10);
        if (0 < (int)uVar2) {
          uVar22 = 0;
          do {
            if (uVar22 != *(ulong *)(*(long *)(*(long *)(uVar18 + 0x80) + 0x18) + uVar22 * 8))
            goto LAB_109cf6c58;
            uVar22 = uVar22 + 1;
          } while (uVar2 != uVar22);
        }
        if (*(int *)(uVar18 + 0x18) != 1) {
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaef1);
          goto LAB_109cf6fc8;
        }
        func_0x00010923b3a0(&lStack_130,&uStack_190);
        iVar13 = *(int *)(uVar8 + 0x20);
        iVar15 = (int)uStack_190;
      }
LAB_109cf6c58:
      iVar15 = iVar15 + 1;
      uStack_190 = CONCAT44(uStack_190._4_4_,iVar15);
    } while (iVar15 < iVar13);
  }
  FUN_109cf9190(&uStack_190,param_1);
  FUN_109cf93e4(param_1,&lStack_130,&uStack_190);
  FUN_109cf9190(&uStack_1c0,param_1);
  if (lStack_178 != 0) {
    func_0x000109cfa07c(lStack_180);
    lStack_180 = 0;
    if (uStack_188 != 0) {
      uVar18 = 0;
      do {
        *(undefined8 *)(uStack_190 + uVar18 * 8) = 0;
        uVar18 = uVar18 + 1;
      } while (uStack_188 != uVar18);
    }
    lStack_178 = 0;
  }
  uVar18 = uStack_190;
  uStack_190 = uStack_1c0;
  uStack_1c0 = 0;
  if (uVar18 != 0) {
    __ZdlPv();
  }
  uStack_188 = uStack_1b8;
  uStack_1b8 = 0;
  lStack_180 = uStack_1b0;
  lStack_178 = lStack_1a8;
  lStack_170 = CONCAT44(lStack_170._4_4_,(undefined4)uStack_1a0);
  if (lStack_1a8 != 0) {
    uVar18 = *(ulong *)(uStack_1b0 + 8);
    if ((uStack_188 & uStack_188 - 1) == 0) {
      uVar18 = uVar18 & uStack_188 - 1;
    }
    else if (uStack_188 <= uVar18) {
      uVar22 = 0;
      if (uStack_188 != 0) {
        uVar22 = uVar18 / uStack_188;
      }
      uVar18 = uVar18 - uVar22 * uStack_188;
    }
    *(long **)(uStack_190 + uVar18 * 8) = &lStack_180;
    uStack_1b0 = 0;
    lStack_1a8 = 0;
  }
  func_0x000109cfa07c(uStack_1b0);
  uVar18 = uStack_1c0;
  uStack_1c0 = 0;
  if (uVar18 != 0) {
    __ZdlPv();
  }
  iVar13 = *(int *)(uVar8 + 0x20);
  if (0 < iVar13) {
    lVar19 = 0;
    puVar9 = (ulong *)(uVar8 + 0x18);
    do {
      puVar21 = puVar9;
      if ((*puVar9 & 1) != 0) {
        puVar21 = (ulong *)(*puVar9 + lVar19 * 8 + 7);
      }
      uVar18 = *puVar21;
      if (*(int *)(uVar18 + 0x8c) == 300) {
        if (*(int *)(uVar18 + 0x18) != 1) {
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaef1);
          goto LAB_109cf6fc8;
        }
        uVar22 = *(ulong *)(uVar18 + 0x10);
        puVar21 = (ulong *)(uVar18 + 0x10);
        if ((uVar22 & 1) != 0) {
          puVar21 = (ulong *)(uVar22 + 7);
        }
        puVar21 = (ulong *)*puVar21;
        puVar14 = &uStack_190;
        FUN_109cfa508(puVar14,puVar21);
        if (puVar14 == (ulong *)0x0) {
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaf22);
          goto LAB_109cf6fc8;
        }
        uVar2 = (uint)puVar14[5];
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar2);
        if ((int)uVar2 < 0) {
          ppuVar16 = &PTR_PTR_1132f05f8;
          if (*(undefined ***)(param_1[0xe] + 0x18) != (undefined **)0x0) {
            ppuVar16 = *(undefined ***)(param_1[0xe] + 0x18);
          }
          puVar17 = ppuVar16[3];
          ppuVar24 = ppuVar16 + 3;
          if (((ulong)puVar17 & 1) != 0) {
            ppuVar24 = (undefined **)(puVar17 + 7);
          }
          if (*(int *)(ppuVar16 + 4) != 0) {
            iVar13 = 0;
            bVar3 = *(byte *)((long)puVar21 + 0x17);
            uVar18 = puVar21[1];
            if (-1 < (char)bVar3) {
              uVar18 = (ulong)bVar3;
            }
            lVar20 = (long)*(int *)(ppuVar16 + 4) << 3;
            do {
              puVar14 = (ulong *)(*(ulong *)(*ppuVar24 + 0x18) & 0xfffffffffffffffc);
              bVar4 = *(byte *)((long)puVar14 + 0x17);
              uVar22 = puVar14[1];
              if (-1 < (char)bVar4) {
                uVar22 = (ulong)bVar4;
              }
              if (uVar22 == uVar18) {
                puVar12 = (ulong *)*puVar14;
                if (-1 < (char)bVar4) {
                  puVar12 = puVar14;
                }
                puVar14 = (ulong *)*puVar21;
                if (-1 < (char)bVar3) {
                  puVar14 = puVar21;
                }
                _memcmp(puVar12,puVar14,uVar18);
                if ((int)puVar12 == 0) {
                  iVar13 = iVar13 + 1;
                }
              }
              ppuVar24 = ppuVar24 + 1;
              lVar20 = lVar20 + -8;
            } while (lVar20 != 0);
            if (iVar13 == 1) goto LAB_109cf6ebc;
          }
          func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aaedb,&UNK_10f5aaf55);
LAB_109cf6fc8:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x109cf6fcc);
          (*pcVar7)();
        }
        puVar21 = puVar9;
        if ((*puVar9 & 1) != 0) {
          puVar21 = (ulong *)(*puVar9 + (ulong)uVar2 * 8 + 7);
        }
        if ((*(int *)(*puVar21 + 0x8c) == 300) && (*(int *)((long)puVar14 + 0x2c) == 1)) {
          func_0x00010923b3a0(&lStack_130,&uStack_1c0);
        }
LAB_109cf6ebc:
        iVar13 = *(int *)(uVar8 + 0x20);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar13);
  }
  __ZNSt3__16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_(lStack_130,lStack_128,&uStack_1c0);
  FUN_109cf93e4(param_1,&lStack_130,&uStack_190);
  func_0x000109cfa07c(lStack_180);
  uVar18 = uStack_190;
  uStack_190 = 0;
  if (uVar18 != 0) {
    __ZdlPv();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  return;
}



/* Entry: 109cf7124; end: 109cf8a0b;  */

/* WARNING: Removing unreachable block (ram,0x000109cf89ec) */
/* WARNING: Removing unreachable block (ram,0x000109cf7b6c) */
/* WARNING: Removing unreachable block (ram,0x000109cf7dd0) */
/* WARNING: Removing unreachable block (ram,0x000109cf72fc) */
/* WARNING: Removing unreachable block (ram,0x000109cf7c8c) */
/* WARNING: Removing unreachable block (ram,0x000109cf7410) */
/* WARNING: Removing unreachable block (ram,0x000109cf72dc) */
/* WARNING: Removing unreachable block (ram,0x000109cf7b5c) */
/* WARNING: Removing unreachable block (ram,0x000109cf84d4) */
/* WARNING: Removing unreachable block (ram,0x000109cf7b7c) */
/* WARNING: Removing unreachable block (ram,0x000109cf730c) */
/* WARNING: Removing unreachable block (ram,0x000109cf84e4) */
/* WARNING: Removing unreachable block (ram,0x000109cf89fc) */
/* WARNING: Removing unreachable block (ram,0x000109cf84f4) */
/* WARNING: Removing unreachable block (ram,0x000109cf7b8c) */
/* WARNING: Removing unreachable block (ram,0x000109cf7b9c) */
/* WARNING: Removing unreachable block (ram,0x000109cf8504) */
/* WARNING: Removing unreachable block (ram,0x000109cf7cac) */
/* WARNING: Removing unreachable block (ram,0x000109cf7cbc) */
/* WARNING: Removing unreachable block (ram,0x000109cf8514) */

undefined1  [16] FUN_109cf7124(ulong *******param_1,ulong *******param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 ******ppppppuVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  ulong *****pppppuVar7;
  ulong *******pppppppuVar8;
  ulong *****pppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  ulong *******pppppppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong ******ppppppuVar20;
  ulong ****ppppuVar21;
  ulong ***pppuVar22;
  undefined **ppuVar23;
  undefined8 *puVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  ulong ****ppppuVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  long *plVar35;
  long *unaff_x26;
  long lVar36;
  ulong ****ppppuVar37;
  undefined *puVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  long *aplStack_2a8 [3];
  undefined8 ******ppppppuStack_210;
  ulong uStack_208;
  byte bStack_1f9;
  undefined8 ******ppppppuStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  undefined8 ******ppppppuStack_1e0;
  undefined8 *****pppppuStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined8 ******ppppppuStack_1c0;
  undefined8 *****pppppuStack_1b8;
  undefined8 *****pppppuStack_1b0;
  ulong ******ppppppuStack_1a0;
  undefined8 *****pppppuStack_198;
  undefined8 *****pppppuStack_190;
  ulong ******ppppppuStack_180;
  ulong *****pppppuStack_178;
  ulong *****pppppuStack_170;
  ulong ******ppppppuStack_160;
  ulong *****pppppuStack_158;
  ulong *****pppppuStack_150;
  ulong ******ppppppuStack_140;
  ulong *****pppppuStack_138;
  ulong *****pppppuStack_130;
  ulong ******ppppppuStack_120;
  ulong *****pppppuStack_118;
  ulong *****pppppuStack_110;
  ulong *****pppppuStack_100;
  ulong *****pppppuStack_f8;
  ulong *****pppppuStack_f0;
  ulong ****ppppuStack_e0;
  ulong ****ppppuStack_d8;
  ulong ****ppppuStack_d0;
  ulong ****ppppuStack_c0;
  ulong ****ppppuStack_b8;
  ulong ****ppppuStack_b0;
  ulong ***pppuStack_a0;
  ulong ***pppuStack_98;
  ulong ***pppuStack_90;
  ulong ****ppppuStack_80;
  ulong ****ppppuStack_78;
  ulong ****ppppuStack_70;
  
  if (3 < *(byte *)(param_1 + 0x14)) {
    ppppppuVar20 = param_2[5];
    pppppppuVar11 = param_1;
    pppppppuVar10 = param_2;
    while (ppppppuVar20 != (ulong ******)0x0) {
      uVar26 = (long)param_2[4] + (long)ppppppuVar20 + -1;
      iVar5 = *(int *)((long)param_2[1][uVar26 >> 10] + (uVar26 & 0x3ff) * 4);
      lVar36 = (long)iVar5;
      param_2[5] = (ulong ******)((long)ppppppuVar20 + -1);
      FUN_109cf9fd8(param_2,1);
      ppppppuVar20 = param_1[0xe];
      if (*(int *)(ppppppuVar20 + 6) == 500) {
        pppppuVar9 = ppppppuVar20[5];
      }
      else {
        func_0x000109c78218(ppppppuVar20);
        *(undefined4 *)(ppppppuVar20 + 6) = 500;
        pppppuVar9 = ppppppuVar20[1];
        if (((ulong)pppppuVar9 & 1) != 0) {
          pppppuVar9 = *(ulong ******)((ulong)pppppuVar9 & 0xfffffffffffffffe);
        }
        func_0x000109cbae88();
        ppppppuVar20[5] = pppppuVar9;
      }
      ppppuVar21 = pppppuVar9[3];
      pppppuVar9 = pppppuVar9 + 3;
      if (((ulong)ppppuVar21 & 1) != 0) {
        pppppuVar9 = (ulong *****)((long)ppppuVar21 + lVar36 * 8 + 7);
      }
      ppppuVar30 = *pppppuVar9;
      ppppuVar37 = ppppuVar30 + 5;
      ppppuVar21 = ppppuVar37;
      if (((ulong)*ppppuVar37 & 1) != 0) {
        ppppuVar21 = (ulong ****)((long)*ppppuVar37 + 0xf);
      }
      pppuVar22 = *ppppuVar21;
      if (*(char *)((long)pppuVar22 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppuStack_80,*pppuVar22,pppuVar22[1]);
      }
      else {
        ppppuStack_78 = (ulong ****)pppuVar22[1];
        ppppuStack_80 = (ulong ****)*pppuVar22;
        ppppuStack_70 = (ulong ****)pppuVar22[2];
      }
      FUN_109cf8a98(&pppppuStack_100,&ppppuStack_80);
      ppppppuVar20 = &pppppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppuVar20,"_",1);
      ppppuStack_d8 = (ulong ****)ppppppuVar20[1];
      ppppuStack_e0 = (ulong ****)*ppppppuVar20;
      ppppuStack_d0 = (ulong ****)ppppppuVar20[2];
      ppppppuVar20[1] = (ulong *****)0x0;
      ppppppuVar20[2] = (ulong *****)0x0;
      *ppppppuVar20 = (ulong *****)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_120,lVar36);
      ppppppuVar20 = (ulong ******)pppppuStack_118;
      pppppppuVar10 = (ulong *******)ppppppuStack_120;
      if (-1 < (long)pppppuStack_110) {
        ppppppuVar20 = (ulong ******)((ulong)pppppuStack_110 >> 0x38);
        pppppppuVar10 = &ppppppuStack_120;
      }
      pppppuVar9 = &ppppuStack_e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar9,pppppppuVar10,ppppppuVar20);
      ppppuStack_b8 = pppppuVar9[1];
      ppppuStack_c0 = *pppppuVar9;
      ppppuStack_b0 = pppppuVar9[2];
      pppppuVar9[1] = (ulong ****)0x0;
      pppppuVar9[2] = (ulong ****)0x0;
      *pppppuVar9 = (ulong ****)0x0;
      pppppuVar9 = &ppppuStack_c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar9,&UNK_10f5aad2a,10);
      pppuStack_98 = (ulong ***)pppppuVar9[1];
      pppuStack_a0 = (ulong ***)*pppppuVar9;
      pppuStack_90 = (ulong ***)pppppuVar9[2];
      pppppuVar9[1] = (ulong ****)0x0;
      pppppuVar9[2] = (ulong ****)0x0;
      *pppppuVar9 = (ulong ****)0x0;
      if ((long)pppppuStack_110 < 0) {
        __ZdlPv(ppppppuStack_120);
      }
      func_0x000107c303b4(ppppuVar37);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      ppppuVar21 = ppppuVar37;
      if (((ulong)*ppppuVar37 & 1) != 0) {
        ppppuVar21 = (ulong ****)((long)*ppppuVar37 + 0x17);
      }
      pppuVar22 = *ppppuVar21;
      if (*(char *)((long)pppuVar22 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppuStack_c0,*pppuVar22,pppuVar22[1]);
      }
      else {
        ppppuStack_b8 = (ulong ****)pppuVar22[1];
        ppppuStack_c0 = (ulong ****)*pppuVar22;
        ppppuStack_b0 = (ulong ****)pppuVar22[2];
      }
      FUN_109cf8a98(&ppppppuStack_140,&ppppuStack_c0);
      pppppppuVar10 = &ppppppuStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,"_",1);
      pppppuStack_118 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_120 = *pppppppuVar10;
      pppppuStack_110 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_160,lVar36);
      ppppppuVar20 = (ulong ******)pppppuStack_158;
      pppppppuVar10 = (ulong *******)ppppppuStack_160;
      if (-1 < (long)pppppuStack_150) {
        ppppppuVar20 = (ulong ******)((ulong)pppppuStack_150 >> 0x38);
        pppppppuVar10 = &ppppppuStack_160;
      }
      pppppppuVar11 = &ppppppuStack_120;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar11,pppppppuVar10,ppppppuVar20);
      pppppuStack_f8 = (ulong *****)pppppppuVar11[1];
      pppppuStack_100 = (ulong *****)*pppppppuVar11;
      pppppuStack_f0 = (ulong *****)pppppppuVar11[2];
      pppppppuVar11[1] = (ulong ******)0x0;
      pppppppuVar11[2] = (ulong ******)0x0;
      *pppppppuVar11 = (ulong ******)0x0;
      ppppppuVar20 = &pppppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppuVar20,&UNK_10f5aad35,10);
      ppppuStack_d8 = (ulong ****)ppppppuVar20[1];
      ppppuStack_e0 = (ulong ****)*ppppppuVar20;
      ppppuStack_d0 = (ulong ****)ppppppuVar20[2];
      ppppppuVar20[1] = (ulong *****)0x0;
      ppppppuVar20[2] = (ulong *****)0x0;
      *ppppppuVar20 = (ulong *****)0x0;
      if ((long)pppppuStack_150 < 0) {
        __ZdlPv(ppppppuStack_160);
      }
      if ((long)pppppuStack_110 < 0) {
        __ZdlPv(ppppppuStack_120);
      }
      if ((long)pppppuStack_130 < 0) {
        __ZdlPv(ppppppuStack_140);
      }
      func_0x000107c303b4(ppppuVar37);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      FUN_109cf8a98(&ppppppuStack_160,&ppppuStack_80);
      pppppppuVar10 = &ppppppuStack_160;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,"_",1);
      pppppuStack_138 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_140 = *pppppppuVar10;
      pppppuStack_130 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_180,lVar36);
      ppppppuVar20 = (ulong ******)pppppuStack_178;
      pppppppuVar10 = (ulong *******)ppppppuStack_180;
      if (-1 < (long)pppppuStack_170) {
        ppppppuVar20 = (ulong ******)((ulong)pppppuStack_170 >> 0x38);
        pppppppuVar10 = &ppppppuStack_180;
      }
      pppppppuVar11 = &ppppppuStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar11,pppppppuVar10,ppppppuVar20);
      pppppuStack_118 = (ulong *****)pppppppuVar11[1];
      ppppppuStack_120 = *pppppppuVar11;
      pppppuStack_110 = (ulong *****)pppppppuVar11[2];
      pppppppuVar11[1] = (ulong ******)0x0;
      pppppppuVar11[2] = (ulong ******)0x0;
      *pppppppuVar11 = (ulong ******)0x0;
      pppppppuVar10 = &ppppppuStack_120;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,&UNK_10f5aad40,10);
      pppppuStack_f8 = (ulong *****)pppppppuVar10[1];
      pppppuStack_100 = (ulong *****)*pppppppuVar10;
      pppppuStack_f0 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      if ((long)pppppuStack_110 < 0) {
        __ZdlPv(ppppppuStack_120);
      }
      if ((long)pppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      if ((long)pppppuStack_130 < 0) {
        __ZdlPv(ppppppuStack_140);
      }
      if ((long)pppppuStack_150 < 0) {
        __ZdlPv(ppppppuStack_160);
      }
      ppppuVar21 = ppppuVar37;
      if (((ulong)*ppppuVar37 & 1) != 0) {
        ppppuVar21 = (ulong ****)((long)*ppppuVar37 + 0xf);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*ppppuVar21,&pppppuStack_100);
      FUN_109cf8a98(&ppppppuStack_180,&ppppuStack_c0);
      pppppppuVar10 = &ppppppuStack_180;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,"_",1);
      pppppuStack_158 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_160 = *pppppppuVar10;
      pppppuStack_150 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_1a0,lVar36);
      ppppppuVar3 = (undefined8 ******)pppppuStack_198;
      pppppppuVar10 = (ulong *******)ppppppuStack_1a0;
      if (-1 < (long)pppppuStack_190) {
        ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_190 >> 0x38);
        pppppppuVar10 = &ppppppuStack_1a0;
      }
      pppppppuVar11 = &ppppppuStack_160;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar11,pppppppuVar10,ppppppuVar3);
      pppppuStack_138 = (ulong *****)pppppppuVar11[1];
      ppppppuStack_140 = *pppppppuVar11;
      pppppuStack_130 = (ulong *****)pppppppuVar11[2];
      pppppppuVar11[1] = (ulong ******)0x0;
      pppppppuVar11[2] = (ulong ******)0x0;
      *pppppppuVar11 = (ulong ******)0x0;
      pppppppuVar10 = &ppppppuStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,&UNK_10f5aad4b,10);
      pppppuStack_118 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_120 = *pppppppuVar10;
      pppppuStack_110 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      if ((long)pppppuStack_130 < 0) {
        __ZdlPv(ppppppuStack_140);
      }
      if ((long)pppppuStack_190 < 0) {
        __ZdlPv(ppppppuStack_1a0);
      }
      if ((long)pppppuStack_150 < 0) {
        __ZdlPv(ppppppuStack_160);
      }
      if ((long)pppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      ppppuVar21 = ppppuVar37;
      if (((ulong)*ppppuVar37 & 1) != 0) {
        ppppuVar21 = (ulong ****)((long)*ppppuVar37 + 0x17);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*ppppuVar21,&ppppppuStack_120);
      FUN_109cf8a98(&ppppppuStack_1a0,&ppppuStack_80);
      pppppppuVar10 = &ppppppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,"_",1);
      pppppuStack_178 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_180 = *pppppppuVar10;
      pppppuStack_170 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_1c0,lVar36);
      ppppppuVar3 = (undefined8 ******)pppppuStack_1b8;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1c0;
      if (-1 < (long)pppppuStack_1b0) {
        ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_1b0 >> 0x38);
        pppppppuVar12 = &ppppppuStack_1c0;
      }
      pppppppuVar10 = &ppppppuStack_180;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,pppppppuVar12,ppppppuVar3);
      pppppuStack_158 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_160 = *pppppppuVar10;
      pppppuStack_150 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      pppppppuVar10 = &ppppppuStack_160;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,&UNK_10f5aad56,9);
      pppppuStack_138 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_140 = *pppppppuVar10;
      pppppuStack_130 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      if ((long)pppppuStack_150 < 0) {
        __ZdlPv(ppppppuStack_160);
      }
      if ((long)pppppuStack_1b0 < 0) {
        __ZdlPv(ppppppuStack_1c0);
      }
      if ((long)pppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      if ((long)pppppuStack_190 < 0) {
        __ZdlPv(ppppppuStack_1a0);
      }
      func_0x000109cf8b30(param_1[0xe],&pppppuStack_100,&pppuStack_a0,&ppppppuStack_140);
      FUN_109cf8a98(&ppppppuStack_1c0,&ppppuStack_c0);
      pppppppuVar12 = &ppppppuStack_1c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar12,"_",1);
      pppppuStack_198 = pppppppuVar12[1];
      ppppppuStack_1a0 = *pppppppuVar12;
      pppppuStack_190 = pppppppuVar12[2];
      pppppppuVar12[1] = (undefined8 ******)0x0;
      pppppppuVar12[2] = (undefined8 ******)0x0;
      *pppppppuVar12 = (undefined8 ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_1e0,lVar36);
      ppppppuVar3 = (undefined8 ******)pppppuStack_1d8;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1e0;
      if (-1 < (long)pppppuStack_1d0) {
        ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_1d0 >> 0x38);
        pppppppuVar12 = &ppppppuStack_1e0;
      }
      pppppppuVar10 = &ppppppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,pppppppuVar12,ppppppuVar3);
      pppppuStack_178 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_180 = *pppppppuVar10;
      pppppuStack_170 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      pppppppuVar10 = &ppppppuStack_180;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,&UNK_10f5aad60,9);
      pppppuStack_158 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_160 = *pppppppuVar10;
      pppppuStack_150 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      if ((long)pppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      if ((long)pppppuStack_1d0 < 0) {
        __ZdlPv(ppppppuStack_1e0);
      }
      if ((long)pppppuStack_190 < 0) {
        __ZdlPv(ppppppuStack_1a0);
      }
      if ((long)pppppuStack_1b0 < 0) {
        __ZdlPv(ppppppuStack_1c0);
      }
      func_0x000109cf8b30(param_1[0xe],&ppppppuStack_120,&ppppuStack_e0,&ppppppuStack_160);
      ppppuVar21 = ppppuVar37;
      if (((ulong)*ppppuVar37 & 1) != 0) {
        ppppuVar21 = (ulong ****)((long)*ppppuVar37 + 7);
      }
      pppuVar22 = *ppppuVar21;
      if (*(char *)((long)pppuVar22 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppppuStack_180,*pppuVar22,pppuVar22[1]);
      }
      else {
        pppppuStack_178 = (ulong *****)pppuVar22[1];
        ppppppuStack_180 = (ulong ******)*pppuVar22;
        pppppuStack_170 = (ulong *****)pppuVar22[2];
      }
      FUN_109cf8a98(&ppppppuStack_1f8,&ppppppuStack_180);
      pppppppuVar12 = &ppppppuStack_1f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar12,"_",1);
      pppppuStack_1d8 = pppppppuVar12[1];
      ppppppuStack_1e0 = *pppppppuVar12;
      pppppuStack_1d0 = pppppppuVar12[2];
      pppppppuVar12[1] = (undefined8 ******)0x0;
      pppppppuVar12[2] = (undefined8 ******)0x0;
      *pppppppuVar12 = (undefined8 ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_210,lVar36);
      uVar26 = uStack_208;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_210;
      if (-1 < (char)bStack_1f9) {
        uVar26 = (ulong)bStack_1f9;
        pppppppuVar12 = &ppppppuStack_210;
      }
      pppppppuVar13 = &ppppppuStack_1e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar13,pppppppuVar12,uVar26);
      pppppuStack_1b8 = pppppppuVar13[1];
      ppppppuStack_1c0 = *pppppppuVar13;
      pppppuStack_1b0 = pppppppuVar13[2];
      pppppppuVar13[1] = (undefined8 ******)0x0;
      pppppppuVar13[2] = (undefined8 ******)0x0;
      *pppppppuVar13 = (undefined8 ******)0x0;
      pppppppuVar12 = &ppppppuStack_1c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar12,&UNK_10f5aad6a,0xc);
      pppppuStack_198 = pppppppuVar12[1];
      ppppppuStack_1a0 = *pppppppuVar12;
      pppppuStack_190 = pppppppuVar12[2];
      pppppppuVar12[1] = (undefined8 ******)0x0;
      pppppppuVar12[2] = (undefined8 ******)0x0;
      *pppppppuVar12 = (undefined8 ******)0x0;
      if ((long)pppppuStack_1b0 < 0) {
        __ZdlPv(ppppppuStack_1c0);
      }
      if ((char)bStack_1f9 < '\0') {
        __ZdlPv(ppppppuStack_210);
      }
      if ((long)pppppuStack_1d0 < 0) {
        __ZdlPv(ppppppuStack_1e0);
      }
      if ((char)bStack_1e1 < '\0') {
        __ZdlPv(ppppppuStack_1f8);
      }
      pppppppuVar10 = param_1;
      FUN_109cf8a0c(param_1,&ppppppuStack_180);
      FUN_109cf8c4c(param_1[0xe],&ppppppuStack_1a0,&ppppppuStack_180,pppppppuVar10,0);
      pppppppuVar10 = param_1;
      FUN_109cf8a0c(param_1,&ppppuStack_80);
      FUN_109cf8c4c(param_1[0xe],&ppppppuStack_140,&ppppuStack_80,pppppppuVar10,0);
      pppppppuVar10 = param_1;
      FUN_109cf8a0c(param_1,&ppppuStack_c0);
      FUN_109cf8c4c(param_1[0xe],&ppppppuStack_160,&ppppuStack_c0,pppppppuVar10,0);
      if (((ulong)*ppppuVar37 & 1) != 0) {
        ppppuVar37 = (ulong ****)((long)*ppppuVar37 + 7);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*ppppuVar37,&ppppppuStack_1a0);
      pppuVar22 = ppppuVar30[1];
      if (((ulong)pppuVar22 & 1) != 0) {
        pppuVar22 = *(ulong ****)((ulong)pppuVar22 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(ppppuVar30 + 0xe,&ppppppuStack_1a0,pppuVar22);
      ppuVar23 = &PTR_PTR_1132f1948;
      if (*(int *)(param_1[0xe] + 6) == 500) {
        ppuVar23 = (undefined **)param_1[0xe][5];
      }
      iVar4 = *(int *)(ppuVar23 + 4);
      if (iVar5 + 1 < iVar4 + -5) {
        lVar33 = (long)iVar4 + -5;
        lVar29 = (long)iVar4 * 8 + -0x28;
        do {
          lVar31 = 5;
          lVar32 = lVar29;
          do {
            ppppppuVar20 = param_1[0xe];
            if (*(int *)(ppppppuVar20 + 6) == 500) {
              pppppuVar9 = ppppppuVar20[5];
            }
            else {
              func_0x000109c78218(ppppppuVar20);
              *(undefined4 *)(ppppppuVar20 + 6) = 500;
              pppppuVar9 = ppppppuVar20[1];
              if (((ulong)pppppuVar9 & 1) != 0) {
                pppppuVar9 = *(ulong ******)((ulong)pppppuVar9 & 0xfffffffffffffffe);
              }
              func_0x000109cbae88();
              ppppppuVar20[5] = pppppuVar9;
            }
            pppppuVar9 = pppppuVar9 + 3;
            ppppuVar21 = *pppppuVar9;
            pppppuVar7 = pppppuVar9;
            if (((ulong)ppppuVar21 & 1) != 0) {
              pppppuVar9 = (ulong *****)((long)ppppuVar21 + lVar32 + -1);
              pppppuVar7 = (ulong *****)((long)ppppuVar21 + lVar32 + 7);
            }
            ppppuVar21 = *pppppuVar7;
            *pppppuVar7 = *pppppuVar9;
            *pppppuVar9 = ppppuVar21;
            lVar32 = lVar32 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar33 = lVar33 + -1;
          lVar29 = lVar29 + -8;
        } while (iVar5 + 1 < (int)lVar33);
      }
      if ((long)pppppuStack_190 < 0) {
        __ZdlPv(ppppppuStack_1a0);
      }
      if ((long)pppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      if ((long)pppppuStack_150 < 0) {
        __ZdlPv(ppppppuStack_160);
      }
      if ((long)pppppuStack_130 < 0) {
        __ZdlPv(ppppppuStack_140);
      }
      if ((long)pppppuStack_110 < 0) {
        __ZdlPv(ppppppuStack_120);
      }
      pppppppuVar11 = (ulong *******)(ppppuVar30 + 2);
      pppppppuVar10 = pppppppuVar11;
      if (((ulong)*pppppppuVar11 & 1) != 0) {
        pppppppuVar10 = (ulong *******)((long)*pppppppuVar11 + 7);
      }
      ppppppuVar20 = *pppppppuVar10;
      if (*(char *)((long)ppppppuVar20 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppuStack_80,*ppppppuVar20,ppppppuVar20[1]);
      }
      else {
        ppppuStack_78 = (ulong ****)ppppppuVar20[1];
        ppppuStack_80 = (ulong ****)*ppppppuVar20;
        ppppuStack_70 = (ulong ****)ppppppuVar20[2];
      }
      FUN_109cf8a98(&pppppuStack_100,&ppppuStack_80);
      ppppppuVar20 = &pppppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppuVar20,"_",1);
      ppppuStack_d8 = (ulong ****)ppppppuVar20[1];
      ppppuStack_e0 = (ulong ****)*ppppppuVar20;
      ppppuStack_d0 = (ulong ****)ppppppuVar20[2];
      ppppppuVar20[1] = (ulong *****)0x0;
      ppppppuVar20[2] = (ulong *****)0x0;
      *ppppppuVar20 = (ulong *****)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_120,lVar36);
      ppppppuVar20 = (ulong ******)pppppuStack_118;
      pppppppuVar10 = (ulong *******)ppppppuStack_120;
      if (-1 < (long)pppppuStack_110) {
        ppppppuVar20 = (ulong ******)((ulong)pppppuStack_110 >> 0x38);
        pppppppuVar10 = &ppppppuStack_120;
      }
      pppppuVar9 = &ppppuStack_e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar9,pppppppuVar10,ppppppuVar20);
      ppppuStack_b8 = pppppuVar9[1];
      ppppuStack_c0 = *pppppuVar9;
      ppppuStack_b0 = pppppuVar9[2];
      pppppuVar9[1] = (ulong ****)0x0;
      pppppuVar9[2] = (ulong ****)0x0;
      *pppppuVar9 = (ulong ****)0x0;
      pppppuVar9 = &ppppuStack_c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar9,&UNK_10f5aad77,0xb);
      pppuStack_98 = (ulong ***)pppppuVar9[1];
      pppuStack_a0 = (ulong ***)*pppppuVar9;
      pppuStack_90 = (ulong ***)pppppuVar9[2];
      pppppuVar9[1] = (ulong ****)0x0;
      pppppuVar9[2] = (ulong ****)0x0;
      *pppppuVar9 = (ulong ****)0x0;
      if ((long)pppppuStack_110 < 0) {
        __ZdlPv(ppppppuStack_120);
      }
      pppppppuVar10 = param_1;
      FUN_109cf8a0c(param_1,&ppppuStack_80);
      FUN_109cf8c4c(param_1[0xe],&ppppuStack_80,&pppuStack_a0,pppppppuVar10,1);
      pppppppuVar10 = pppppppuVar11;
      if (((ulong)*pppppppuVar11 & 1) != 0) {
        pppppppuVar10 = (ulong *******)((long)*pppppppuVar11 + 0xf);
      }
      ppppppuVar20 = *pppppppuVar10;
      if (*(char *)((long)ppppppuVar20 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppuStack_c0,*ppppppuVar20,ppppppuVar20[1]);
      }
      else {
        ppppuStack_b8 = (ulong ****)ppppppuVar20[1];
        ppppuStack_c0 = (ulong ****)*ppppppuVar20;
        ppppuStack_b0 = (ulong ****)ppppppuVar20[2];
      }
      FUN_109cf8a98(&ppppppuStack_140,&ppppuStack_c0);
      pppppppuVar10 = &ppppppuStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,"_",1);
      pppppuStack_118 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_120 = *pppppppuVar10;
      pppppuStack_110 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_160,lVar36);
      ppppppuVar20 = (ulong ******)pppppuStack_158;
      pppppppuVar10 = (ulong *******)ppppppuStack_160;
      if (-1 < (long)pppppuStack_150) {
        ppppppuVar20 = (ulong ******)((ulong)pppppuStack_150 >> 0x38);
        pppppppuVar10 = &ppppppuStack_160;
      }
      pppppppuVar14 = &ppppppuStack_120;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar14,pppppppuVar10,ppppppuVar20);
      pppppuStack_f8 = (ulong *****)pppppppuVar14[1];
      pppppuStack_100 = (ulong *****)*pppppppuVar14;
      pppppuStack_f0 = (ulong *****)pppppppuVar14[2];
      pppppppuVar14[1] = (ulong ******)0x0;
      pppppppuVar14[2] = (ulong ******)0x0;
      *pppppppuVar14 = (ulong ******)0x0;
      ppppppuVar20 = &pppppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppuVar20,&UNK_10f5aad83,8);
      ppppuStack_d8 = (ulong ****)ppppppuVar20[1];
      ppppuStack_e0 = (ulong ****)*ppppppuVar20;
      ppppuStack_d0 = (ulong ****)ppppppuVar20[2];
      ppppppuVar20[1] = (ulong *****)0x0;
      ppppppuVar20[2] = (ulong *****)0x0;
      *ppppppuVar20 = (ulong *****)0x0;
      if ((long)pppppuStack_150 < 0) {
        __ZdlPv(ppppppuStack_160);
      }
      if ((long)pppppuStack_110 < 0) {
        __ZdlPv(ppppppuStack_120);
      }
      if ((long)pppppuStack_130 < 0) {
        __ZdlPv(ppppppuStack_140);
      }
      pppppppuVar10 = param_1;
      FUN_109cf8a0c(param_1,&ppppuStack_c0);
      FUN_109cf8c4c(param_1[0xe],&ppppuStack_c0,&ppppuStack_e0,pppppppuVar10,1);
      pppppppuVar10 = pppppppuVar11;
      if (((ulong)*pppppppuVar11 & 1) != 0) {
        pppppppuVar10 = (ulong *******)((long)*pppppppuVar11 + 0x17);
      }
      ppppppuVar20 = *pppppppuVar10;
      if (*(char *)((long)ppppppuVar20 + 0x17) < '\0') {
        func_0x000107c3192c(&pppppuStack_100,*ppppppuVar20,ppppppuVar20[1]);
      }
      else {
        pppppuStack_f8 = ppppppuVar20[1];
        pppppuStack_100 = *ppppppuVar20;
        pppppuStack_f0 = ppppppuVar20[2];
      }
      FUN_109cf8a98(&ppppppuStack_180,&pppppuStack_100);
      pppppppuVar10 = &ppppppuStack_180;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,"_",1);
      pppppuStack_158 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_160 = *pppppppuVar10;
      pppppuStack_150 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_1a0,lVar36);
      ppppppuVar3 = (undefined8 ******)pppppuStack_198;
      pppppppuVar10 = (ulong *******)ppppppuStack_1a0;
      if (-1 < (long)pppppuStack_190) {
        ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_190 >> 0x38);
        pppppppuVar10 = &ppppppuStack_1a0;
      }
      pppppppuVar14 = &ppppppuStack_160;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar14,pppppppuVar10,ppppppuVar3);
      pppppuStack_138 = (ulong *****)pppppppuVar14[1];
      ppppppuStack_140 = *pppppppuVar14;
      pppppuStack_130 = (ulong *****)pppppppuVar14[2];
      pppppppuVar14[1] = (ulong ******)0x0;
      pppppppuVar14[2] = (ulong ******)0x0;
      *pppppppuVar14 = (ulong ******)0x0;
      pppppppuVar10 = &ppppppuStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,&UNK_10f5aad83,8);
      pppppuStack_118 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_120 = *pppppppuVar10;
      pppppuStack_110 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      if ((long)pppppuStack_130 < 0) {
        __ZdlPv(ppppppuStack_140);
      }
      if ((long)pppppuStack_190 < 0) {
        __ZdlPv(ppppppuStack_1a0);
      }
      if ((long)pppppuStack_150 < 0) {
        __ZdlPv(ppppppuStack_160);
      }
      if ((long)pppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      pppppppuVar10 = param_1;
      FUN_109cf8a0c(param_1,&pppppuStack_100);
      FUN_109cf8c4c(param_1[0xe],&pppppuStack_100,&ppppppuStack_120,pppppppuVar10,1);
      FUN_109cf8a98(&ppppppuStack_1a0,&ppppuStack_c0);
      pppppppuVar10 = &ppppppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,"_",1);
      pppppuStack_178 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_180 = *pppppppuVar10;
      pppppuStack_170 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_1c0,lVar36);
      ppppppuVar3 = (undefined8 ******)pppppuStack_1b8;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1c0;
      if (-1 < (long)pppppuStack_1b0) {
        ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_1b0 >> 0x38);
        pppppppuVar12 = &ppppppuStack_1c0;
      }
      pppppppuVar10 = &ppppppuStack_180;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,pppppppuVar12,ppppppuVar3);
      pppppuStack_158 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_160 = *pppppppuVar10;
      pppppuStack_150 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      pppppppuVar10 = &ppppppuStack_160;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,&UNK_10f5aad40,10);
      pppppuStack_138 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_140 = *pppppppuVar10;
      pppppuStack_130 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      if ((long)pppppuStack_150 < 0) {
        __ZdlPv(ppppppuStack_160);
      }
      if ((long)pppppuStack_1b0 < 0) {
        __ZdlPv(ppppppuStack_1c0);
      }
      if ((long)pppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      if ((long)pppppuStack_190 < 0) {
        __ZdlPv(ppppppuStack_1a0);
      }
      FUN_109cf8a98(&ppppppuStack_1c0,&ppppuStack_c0);
      pppppppuVar12 = &ppppppuStack_1c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar12,"_",1);
      pppppuStack_198 = pppppppuVar12[1];
      ppppppuStack_1a0 = *pppppppuVar12;
      pppppuStack_190 = pppppppuVar12[2];
      pppppppuVar12[1] = (undefined8 ******)0x0;
      pppppppuVar12[2] = (undefined8 ******)0x0;
      *pppppppuVar12 = (undefined8 ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_1e0,lVar36);
      ppppppuVar3 = (undefined8 ******)pppppuStack_1d8;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1e0;
      if (-1 < (long)pppppuStack_1d0) {
        ppppppuVar3 = (undefined8 ******)((ulong)pppppuStack_1d0 >> 0x38);
        pppppppuVar12 = &ppppppuStack_1e0;
      }
      pppppppuVar10 = &ppppppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,pppppppuVar12,ppppppuVar3);
      pppppuStack_178 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_180 = *pppppppuVar10;
      pppppuStack_170 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      pppppppuVar10 = &ppppppuStack_180;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,&UNK_10f5aad2a,10);
      pppppuStack_158 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_160 = *pppppppuVar10;
      pppppuStack_150 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      if ((long)pppppuStack_170 < 0) {
        __ZdlPv(ppppppuStack_180);
      }
      if ((long)pppppuStack_1d0 < 0) {
        __ZdlPv(ppppppuStack_1e0);
      }
      if ((long)pppppuStack_190 < 0) {
        __ZdlPv(ppppppuStack_1a0);
      }
      if ((long)pppppuStack_1b0 < 0) {
        __ZdlPv(ppppppuStack_1c0);
      }
      FUN_109cf8ea8(param_1[0xe],&ppppuStack_e0,&ppppppuStack_140,&ppppppuStack_160);
      FUN_109cf8a98(&ppppppuStack_1e0,&pppppuStack_100);
      pppppppuVar12 = &ppppppuStack_1e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar12,"_",1);
      pppppuStack_1b8 = pppppppuVar12[1];
      ppppppuStack_1c0 = *pppppppuVar12;
      pppppuStack_1b0 = pppppppuVar12[2];
      pppppppuVar12[1] = (undefined8 ******)0x0;
      pppppppuVar12[2] = (undefined8 ******)0x0;
      *pppppppuVar12 = (undefined8 ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_1f8,lVar36);
      uVar26 = uStack_1f0;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_1f8;
      if (-1 < (char)bStack_1e1) {
        uVar26 = (ulong)bStack_1e1;
        pppppppuVar12 = &ppppppuStack_1f8;
      }
      pppppppuVar13 = &ppppppuStack_1c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar13,pppppppuVar12,uVar26);
      pppppuStack_198 = pppppppuVar13[1];
      ppppppuStack_1a0 = *pppppppuVar13;
      pppppuStack_190 = pppppppuVar13[2];
      pppppppuVar13[1] = (undefined8 ******)0x0;
      pppppppuVar13[2] = (undefined8 ******)0x0;
      *pppppppuVar13 = (undefined8 ******)0x0;
      pppppppuVar10 = &ppppppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar10,&UNK_10f5aad40,10);
      pppppuStack_178 = (ulong *****)pppppppuVar10[1];
      ppppppuStack_180 = *pppppppuVar10;
      pppppuStack_170 = (ulong *****)pppppppuVar10[2];
      pppppppuVar10[1] = (ulong ******)0x0;
      pppppppuVar10[2] = (ulong ******)0x0;
      *pppppppuVar10 = (ulong ******)0x0;
      if ((long)pppppuStack_190 < 0) {
        __ZdlPv(ppppppuStack_1a0);
      }
      if ((char)bStack_1e1 < '\0') {
        __ZdlPv(ppppppuStack_1f8);
      }
      if ((long)pppppuStack_1b0 < 0) {
        __ZdlPv(ppppppuStack_1c0);
      }
      if ((long)pppppuStack_1d0 < 0) {
        __ZdlPv(ppppppuStack_1e0);
      }
      FUN_109cf8a98(&ppppppuStack_1f8,&pppppuStack_100);
      pppppppuVar12 = &ppppppuStack_1f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar12,"_",1);
      pppppuStack_1d8 = pppppppuVar12[1];
      ppppppuStack_1e0 = *pppppppuVar12;
      pppppuStack_1d0 = pppppppuVar12[2];
      pppppppuVar12[1] = (undefined8 ******)0x0;
      pppppppuVar12[2] = (undefined8 ******)0x0;
      *pppppppuVar12 = (undefined8 ******)0x0;
      __ZNSt3__19to_stringEi(&ppppppuStack_210,lVar36);
      uVar26 = uStack_208;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_210;
      if (-1 < (char)bStack_1f9) {
        uVar26 = (ulong)bStack_1f9;
        pppppppuVar12 = &ppppppuStack_210;
      }
      pppppppuVar13 = &ppppppuStack_1e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar13,pppppppuVar12,uVar26);
      pppppuStack_1b8 = pppppppuVar13[1];
      ppppppuStack_1c0 = *pppppppuVar13;
      pppppuStack_1b0 = pppppppuVar13[2];
      pppppppuVar13[1] = (undefined8 ******)0x0;
      pppppppuVar13[2] = (undefined8 ******)0x0;
      *pppppppuVar13 = (undefined8 ******)0x0;
      pppppppuVar12 = &ppppppuStack_1c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar12,&UNK_10f5aad2a,10);
      pppppuStack_198 = pppppppuVar12[1];
      ppppppuStack_1a0 = *pppppppuVar12;
      pppppuStack_190 = pppppppuVar12[2];
      pppppppuVar12[1] = (undefined8 ******)0x0;
      pppppppuVar12[2] = (undefined8 ******)0x0;
      *pppppppuVar12 = (undefined8 ******)0x0;
      if ((long)pppppuStack_1b0 < 0) {
        __ZdlPv(ppppppuStack_1c0);
      }
      if ((char)bStack_1f9 < '\0') {
        __ZdlPv(ppppppuStack_210);
      }
      if ((long)pppppuStack_1d0 < 0) {
        __ZdlPv(ppppppuStack_1e0);
      }
      if ((char)bStack_1e1 < '\0') {
        __ZdlPv(ppppppuStack_1f8);
      }
      FUN_109cf8ea8(param_1[0xe],&ppppppuStack_120,&ppppppuStack_180,&ppppppuStack_1a0);
      pppppppuVar10 = pppppppuVar11;
      if (((ulong)*pppppppuVar11 & 1) != 0) {
        pppppppuVar10 = (ulong *******)((long)*pppppppuVar11 + 7);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*pppppppuVar10,&pppuStack_a0);
      pppppppuVar10 = pppppppuVar11;
      if (((ulong)*pppppppuVar11 & 1) != 0) {
        pppppppuVar10 = (ulong *******)((long)*pppppppuVar11 + 0xf);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*pppppppuVar10,&ppppppuStack_140);
      pppppppuVar10 = pppppppuVar11;
      if (((ulong)*pppppppuVar11 & 1) != 0) {
        pppppppuVar10 = (ulong *******)((long)*pppppppuVar11 + 0x17);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (*pppppppuVar10,&ppppppuStack_180);
      func_0x000107c303b4(pppppppuVar11);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      func_0x000107c303b4(pppppppuVar11);
      pppppppuVar10 = &ppppppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      ppuVar23 = &PTR_PTR_1132f1948;
      if (*(int *)(param_1[0xe] + 6) == 500) {
        ppuVar23 = (undefined **)param_1[0xe][5];
      }
      iVar4 = *(int *)(ppuVar23 + 4);
      if (iVar5 < iVar4 + -5) {
        lVar29 = (long)iVar4 + -5;
        lVar36 = (long)iVar4 * 8 + -0x28;
        do {
          lVar32 = 5;
          lVar33 = lVar36;
          do {
            ppppppuVar20 = param_1[0xe];
            if (*(int *)(ppppppuVar20 + 6) == 500) {
              pppppuVar9 = ppppppuVar20[5];
            }
            else {
              func_0x000109c78218(ppppppuVar20);
              *(undefined4 *)(ppppppuVar20 + 6) = 500;
              pppppuVar9 = ppppppuVar20[1];
              if (((ulong)pppppuVar9 & 1) != 0) {
                pppppuVar9 = *(ulong ******)((ulong)pppppuVar9 & 0xfffffffffffffffe);
              }
              func_0x000109cbae88();
              ppppppuVar20[5] = pppppuVar9;
            }
            pppppppuVar11 = (ulong *******)(pppppuVar9 + 3);
            ppppppuVar20 = *pppppppuVar11;
            pppppppuVar14 = pppppppuVar11;
            pppppppuVar8 = pppppppuVar11;
            if (((ulong)ppppppuVar20 & 1) != 0) {
              pppppppuVar14 = (ulong *******)((long)ppppppuVar20 + lVar33 + -1);
              pppppppuVar8 = (ulong *******)((long)ppppppuVar20 + lVar33 + 7);
            }
            ppppppuVar20 = *pppppppuVar8;
            *pppppppuVar8 = *pppppppuVar14;
            *pppppppuVar14 = ppppppuVar20;
            lVar33 = lVar33 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar29 = lVar29 + -1;
          lVar36 = lVar36 + -8;
        } while (iVar5 < (int)lVar29);
      }
      if ((long)pppppuStack_190 < 0) {
        pppppppuVar11 = (ulong *******)ppppppuStack_1a0;
        __ZdlPv(ppppppuStack_1a0);
      }
      if ((long)pppppuStack_170 < 0) {
        pppppppuVar11 = (ulong *******)ppppppuStack_180;
        __ZdlPv(ppppppuStack_180);
      }
      if ((long)pppppuStack_150 < 0) {
        pppppppuVar11 = (ulong *******)ppppppuStack_160;
        __ZdlPv(ppppppuStack_160);
      }
      if ((long)pppppuStack_130 < 0) {
        pppppppuVar11 = (ulong *******)ppppppuStack_140;
        __ZdlPv(ppppppuStack_140);
      }
      if ((long)pppppuStack_110 < 0) {
        pppppppuVar11 = (ulong *******)ppppppuStack_120;
        __ZdlPv(ppppppuStack_120);
      }
      ppppppuVar20 = param_2[5];
    }
    auVar40._8_8_ = pppppppuVar10;
    auVar40._0_8_ = pppppppuVar11;
    return auVar40;
  }
  puVar15 = &UNK_10e03fc10;
  puVar16 = &UNK_10f5aacd5;
  func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aacd5,&UNK_10f5aace2);
  __Unwind_Resume();
  puVar15 = puVar15 + 0x78;
  FUN_109cedb48();
  if (puVar15 != (undefined *)0x0) {
    auVar41._8_8_ = puVar16;
    auVar41._0_8_ = puVar15 + 0x28;
    return auVar41;
  }
  puVar16 = &UNK_10e03fc67;
  puVar15 = &UNK_10f5aac54;
  puVar17 = (undefined8 *)&UNK_10f5aac5d;
  func_0x00010952d0c4(&UNK_10e03fc67,&UNK_10f5aac54);
  auVar6._4_4_ = -(uint)((int)((ulong)*puVar17 >> 0x20) != 0);
  auVar6._0_4_ = -(uint)((int)*puVar17 != 0);
  auVar6._8_4_ = -(uint)((int)puVar17[1] != 0);
  auVar6._12_4_ = -(uint)((int)((ulong)puVar17[1] >> 0x20) != 0);
  uVar39 = NEON_umaxv(auVar6,4);
  if ((uVar39 & 1) == 0) {
    puVar17 = (undefined8 *)&UNK_10e03fc10;
    puVar24 = (undefined8 *)&UNK_10f5aac9e;
    func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aac9e,&UNK_10f5aaca7);
    uVar26 = puVar24[1];
    if (-1 < (char)*(byte *)((long)puVar24 + 0x17)) {
      uVar26 = (ulong)*(byte *)((long)puVar24 + 0x17);
    }
    puVar18 = (undefined8 *)(uVar26 + 0x11);
    func_0x000104c4f768();
    puVar2 = (undefined8 *)*puVar17;
    if (-1 < *(char *)((long)puVar17 + 0x17)) {
      puVar2 = puVar17;
    }
    if (uVar26 != 0) {
      puVar18 = (undefined8 *)*puVar24;
      if (-1 < *(char *)((long)puVar24 + 0x17)) {
        puVar18 = puVar24;
      }
      puVar17 = puVar2;
      _memmove(puVar2,puVar18,uVar26);
    }
    puVar2 = (undefined8 *)((long)puVar2 + uVar26);
    puVar2[1] = 0x4b38793245453338;
    *puVar2 = 0x787374454137755f;
    *(undefined2 *)(puVar2 + 2) = 100;
    auVar42._8_8_ = puVar18;
    auVar42._0_8_ = puVar17;
    return auVar42;
  }
  plVar1 = (long *)(puVar16 + 0x78);
  plVar28 = plVar1;
  func_0x000107c31944();
  plVar35 = *(long **)(puVar16 + 0x80);
  if (plVar35 != (long *)0x0) {
    puVar38 = (undefined *)((long)plVar35 + -1);
    if (((ulong)plVar35 & (ulong)puVar38) == 0) {
      unaff_x26 = (long *)((ulong)puVar38 & (ulong)plVar28);
    }
    else {
      unaff_x26 = plVar28;
      if (plVar35 <= plVar28) {
        uVar26 = 0;
        if (plVar35 != (long *)0x0) {
          uVar26 = (ulong)plVar28 / (ulong)plVar35;
        }
        unaff_x26 = (long *)((long)plVar28 - uVar26 * (long)plVar35);
      }
    }
    puVar24 = *(undefined8 **)(*plVar1 + (long)unaff_x26 * 8);
    if (puVar24 != (undefined8 *)0x0) {
      for (plVar34 = (long *)*puVar24; plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
        plVar25 = (long *)plVar34[1];
        if (plVar25 == plVar28) {
          plVar25 = plVar1;
          func_0x000104c4fbc4(plVar1,plVar34 + 2,puVar15);
          if (((ulong)plVar25 & 1) != 0) {
            uVar19 = 0;
            goto LAB_109cf9ed0;
          }
        }
        else {
          if (((ulong)plVar35 & (ulong)puVar38) == 0) {
            plVar25 = (long *)((ulong)plVar25 & (ulong)puVar38);
          }
          else if (plVar35 <= plVar25) {
            uVar26 = 0;
            if (plVar35 != (long *)0x0) {
              uVar26 = (ulong)plVar25 / (ulong)plVar35;
            }
            plVar25 = (long *)((long)plVar25 - uVar26 * (long)plVar35);
          }
          if (plVar25 != unaff_x26) break;
        }
      }
    }
  }
  FUN_109cf9f20(aplStack_2a8,plVar1,plVar28,puVar15,puVar17);
  if ((plVar35 == (long *)0x0) ||
     (*(float *)(puVar16 + 0x98) * (float)plVar35 < (float)(*(long *)(puVar16 + 0x90) + 1))) {
    uVar26 = 1;
    if ((long *)0x2 < plVar35) {
      uVar26 = (ulong)(((ulong)plVar35 & (ulong)((long)plVar35 + -1)) != 0);
    }
    uVar26 = uVar26 | (long)plVar35 << 1;
    uVar27 = (ulong)((float)(*(long *)(puVar16 + 0x90) + 1) / *(float *)(puVar16 + 0x98));
    if (uVar26 <= uVar27) {
      uVar26 = uVar27;
    }
    func_0x0001094a8d40(plVar1,uVar26);
    plVar35 = *(long **)(puVar16 + 0x80);
    if (((ulong)plVar35 & (ulong)((long)plVar35 + -1)) == 0) {
      unaff_x26 = (long *)((ulong)((long)plVar35 + -1) & (ulong)plVar28);
    }
    else {
      unaff_x26 = plVar28;
      if (plVar35 <= plVar28) {
        uVar26 = 0;
        if (plVar35 != (long *)0x0) {
          uVar26 = (ulong)plVar28 / (ulong)plVar35;
        }
        unaff_x26 = (long *)((long)plVar28 - uVar26 * (long)plVar35);
      }
    }
  }
  lVar36 = *plVar1;
  plVar28 = *(long **)(lVar36 + (long)unaff_x26 * 8);
  if (plVar28 == (long *)0x0) {
    plVar28 = (long *)(puVar16 + 0x88);
    *aplStack_2a8[0] = *plVar28;
    *plVar28 = (long)aplStack_2a8[0];
    *(long **)(lVar36 + (long)unaff_x26 * 8) = plVar28;
    if (*aplStack_2a8[0] != 0) {
      plVar28 = *(long **)(*aplStack_2a8[0] + 8);
      if (((ulong)plVar35 & (ulong)((long)plVar35 + -1)) == 0) {
        plVar28 = (long *)((ulong)plVar28 & (ulong)((long)plVar35 + -1));
      }
      else if (plVar35 <= plVar28) {
        uVar26 = 0;
        if (plVar35 != (long *)0x0) {
          uVar26 = (ulong)plVar28 / (ulong)plVar35;
        }
        plVar28 = (long *)((long)plVar28 - uVar26 * (long)plVar35);
      }
      *(long **)(*plVar1 + (long)plVar28 * 8) = aplStack_2a8[0];
    }
  }
  else {
    *aplStack_2a8[0] = *plVar28;
    *plVar28 = (long)aplStack_2a8[0];
  }
  *(long *)(puVar16 + 0x90) = *(long *)(puVar16 + 0x90) + 1;
  uVar19 = 1;
  plVar34 = aplStack_2a8[0];
LAB_109cf9ed0:
  auVar43._8_8_ = uVar19;
  auVar43._0_8_ = plVar34;
  return auVar43;
}



/* Entry: 109cf8a0c; end: 109cf8a97;  */

undefined1  [16] FUN_109cf8a0c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x26;
  undefined *puVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long *aplStack_88 [3];
  
  param_1 = param_1 + 0x78;
  FUN_109cedb48();
  if (param_1 != 0) {
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = param_1 + 0x28;
    return auVar19;
  }
  puVar4 = &UNK_10e03fc67;
  puVar6 = &UNK_10f5aac54;
  puVar5 = (undefined8 *)&UNK_10f5aac5d;
  func_0x00010952d0c4(&UNK_10e03fc67,&UNK_10f5aac54);
  auVar3._4_4_ = -(uint)((int)((ulong)*puVar5 >> 0x20) != 0);
  auVar3._0_4_ = -(uint)((int)*puVar5 != 0);
  auVar3._8_4_ = -(uint)((int)puVar5[1] != 0);
  auVar3._12_4_ = -(uint)((int)((ulong)puVar5[1] >> 0x20) != 0);
  uVar18 = NEON_umaxv(auVar3,4);
  if ((uVar18 & 1) == 0) {
    puVar5 = (undefined8 *)&UNK_10e03fc10;
    puVar9 = (undefined8 *)&UNK_10f5aac9e;
    func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aac9e,&UNK_10f5aaca7);
    uVar11 = puVar9[1];
    if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)puVar9 + 0x17);
    }
    puVar7 = (undefined8 *)(uVar11 + 0x11);
    func_0x000104c4f768();
    puVar2 = (undefined8 *)*puVar5;
    if (-1 < *(char *)((long)puVar5 + 0x17)) {
      puVar2 = puVar5;
    }
    if (uVar11 != 0) {
      puVar7 = (undefined8 *)*puVar9;
      if (-1 < *(char *)((long)puVar9 + 0x17)) {
        puVar7 = puVar9;
      }
      puVar5 = puVar2;
      _memmove(puVar2,puVar7,uVar11);
    }
    puVar2 = (undefined8 *)((long)puVar2 + uVar11);
    puVar2[1] = 0x4b38793245453338;
    *puVar2 = 0x787374454137755f;
    *(undefined2 *)(puVar2 + 2) = 100;
    auVar20._8_8_ = puVar7;
    auVar20._0_8_ = puVar5;
    return auVar20;
  }
  plVar1 = (long *)(puVar4 + 0x78);
  plVar14 = plVar1;
  func_0x000107c31944();
  plVar16 = *(long **)(puVar4 + 0x80);
  if (plVar16 != (long *)0x0) {
    puVar17 = (undefined *)((long)plVar16 + -1);
    if (((ulong)plVar16 & (ulong)puVar17) == 0) {
      unaff_x26 = (long *)((ulong)puVar17 & (ulong)plVar14);
    }
    else {
      unaff_x26 = plVar14;
      if (plVar16 <= plVar14) {
        uVar11 = 0;
        if (plVar16 != (long *)0x0) {
          uVar11 = (ulong)plVar14 / (ulong)plVar16;
        }
        unaff_x26 = (long *)((long)plVar14 - uVar11 * (long)plVar16);
      }
    }
    puVar9 = *(undefined8 **)(*plVar1 + (long)unaff_x26 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar9; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        plVar10 = (long *)plVar15[1];
        if (plVar10 == plVar14) {
          plVar10 = plVar1;
          func_0x000104c4fbc4(plVar1,plVar15 + 2,puVar6);
          if (((ulong)plVar10 & 1) != 0) {
            uVar8 = 0;
            goto LAB_109cf9ed0;
          }
        }
        else {
          if (((ulong)plVar16 & (ulong)puVar17) == 0) {
            plVar10 = (long *)((ulong)plVar10 & (ulong)puVar17);
          }
          else if (plVar16 <= plVar10) {
            uVar11 = 0;
            if (plVar16 != (long *)0x0) {
              uVar11 = (ulong)plVar10 / (ulong)plVar16;
            }
            plVar10 = (long *)((long)plVar10 - uVar11 * (long)plVar16);
          }
          if (plVar10 != unaff_x26) break;
        }
      }
    }
  }
  FUN_109cf9f20(aplStack_88,plVar1,plVar14,puVar6,puVar5);
  if ((plVar16 == (long *)0x0) ||
     (*(float *)(puVar4 + 0x98) * (float)plVar16 < (float)(*(long *)(puVar4 + 0x90) + 1))) {
    uVar11 = 1;
    if ((long *)0x2 < plVar16) {
      uVar11 = (ulong)(((ulong)plVar16 & (ulong)((long)plVar16 + -1)) != 0);
    }
    uVar11 = uVar11 | (long)plVar16 << 1;
    uVar13 = (ulong)((float)(*(long *)(puVar4 + 0x90) + 1) / *(float *)(puVar4 + 0x98));
    if (uVar11 <= uVar13) {
      uVar11 = uVar13;
    }
    func_0x0001094a8d40(plVar1,uVar11);
    plVar16 = *(long **)(puVar4 + 0x80);
    if (((ulong)plVar16 & (ulong)((long)plVar16 + -1)) == 0) {
      unaff_x26 = (long *)((ulong)((long)plVar16 + -1) & (ulong)plVar14);
    }
    else {
      unaff_x26 = plVar14;
      if (plVar16 <= plVar14) {
        uVar11 = 0;
        if (plVar16 != (long *)0x0) {
          uVar11 = (ulong)plVar14 / (ulong)plVar16;
        }
        unaff_x26 = (long *)((long)plVar14 - uVar11 * (long)plVar16);
      }
    }
  }
  lVar12 = *plVar1;
  plVar14 = *(long **)(lVar12 + (long)unaff_x26 * 8);
  if (plVar14 == (long *)0x0) {
    plVar14 = (long *)(puVar4 + 0x88);
    *aplStack_88[0] = *plVar14;
    *plVar14 = (long)aplStack_88[0];
    *(long **)(lVar12 + (long)unaff_x26 * 8) = plVar14;
    if (*aplStack_88[0] != 0) {
      plVar14 = *(long **)(*aplStack_88[0] + 8);
      if (((ulong)plVar16 & (ulong)((long)plVar16 + -1)) == 0) {
        plVar14 = (long *)((ulong)plVar14 & (ulong)((long)plVar16 + -1));
      }
      else if (plVar16 <= plVar14) {
        uVar11 = 0;
        if (plVar16 != (long *)0x0) {
          uVar11 = (ulong)plVar14 / (ulong)plVar16;
        }
        plVar14 = (long *)((long)plVar14 - uVar11 * (long)plVar16);
      }
      *(long **)(*plVar1 + (long)plVar14 * 8) = aplStack_88[0];
    }
  }
  else {
    *aplStack_88[0] = *plVar14;
    *plVar14 = (long)aplStack_88[0];
  }
  *(long *)(puVar4 + 0x90) = *(long *)(puVar4 + 0x90) + 1;
  uVar8 = 1;
  plVar15 = aplStack_88[0];
LAB_109cf9ed0:
  auVar21._8_8_ = uVar8;
  auVar21._0_8_ = plVar15;
  return auVar21;
}



/* Entry: 109cf8a98; end: 109cf8c4b;  */

void FUN_109cf8a98(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uStack_31;
  
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  func_0x000104c4f768(param_1,uVar2 + 0x11,&uStack_31);
  plVar3 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar3 = param_1;
  }
  if (uVar2 != 0) {
    plVar4 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar4 = param_2;
    }
    _memmove(plVar3,plVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)plVar3 + uVar2);
  puVar1[1] = 0x4b38793245453338;
  *puVar1 = 0x787374454137755f;
  *(undefined2 *)(puVar1 + 2) = 100;
  return;
}



/* Entry: 109cf8c4c; end: 109cf8ea7;  */

void FUN_109cf8c4c(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  
  if (*(int *)(param_1 + 0x30) == 500) {
    uVar2 = *(ulong *)(param_1 + 0x28);
  }
  else {
    func_0x000109c78218(param_1);
    *(undefined4 *)(param_1 + 0x30) = 500;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000109cbae88();
    *(ulong *)(param_1 + 0x28) = uVar2;
  }
  lVar5 = uVar2 + 0x18;
  func_0x000107c303b0(lVar5,&SUB_109cbaee0);
  func_0x000107c303b4(lVar5 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x000107c303b4(lVar5 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  uVar2 = *(ulong *)(lVar5 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(lVar5 + 0x70,param_3,uVar2);
  if (*(int *)(lVar5 + 0x8c) == 300) {
    uVar2 = *(ulong *)(lVar5 + 0x80);
  }
  else {
    func_0x000109c819a4(lVar5);
    *(undefined4 *)(lVar5 + 0x8c) = 300;
    uVar2 = *(ulong *)(lVar5 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000109cb7d28();
    *(ulong *)(lVar5 + 0x80) = uVar2;
  }
  piVar8 = (int *)(uVar2 + 0x10);
  iVar6 = *piVar8;
  *(undefined4 *)(uVar2 + 0x24) = 0;
  uVar1 = param_4[3];
  iVar4 = *(int *)(uVar2 + 0x14);
  if (iVar6 == iVar4) {
    func_0x00010598df1c(piVar8,iVar4,iVar4 + 1);
    iVar6 = *piVar8;
  }
  lVar5 = *(long *)(uVar2 + 0x18);
  iVar4 = iVar6 + 1;
  *(int *)(uVar2 + 0x10) = iVar4;
  *(ulong *)(lVar5 + (long)iVar6 * 8) = (ulong)uVar1;
  if (param_5 == 0) {
    iVar3 = *(int *)(uVar2 + 0x14);
    if (iVar4 == iVar3) {
      func_0x00010598df1c(piVar8,iVar4,iVar6 + 2);
      lVar5 = *(long *)(uVar2 + 0x18);
      iVar4 = *(int *)(uVar2 + 0x10);
      iVar3 = *(int *)(uVar2 + 0x14);
    }
    iVar6 = iVar4 + 1;
    *piVar8 = iVar6;
    *(undefined8 *)(lVar5 + (long)iVar4 * 8) = 1;
    uVar1 = param_4[1];
    if (iVar6 == iVar3) {
      func_0x00010598df1c(piVar8,iVar3,iVar3 + 1);
      lVar5 = *(long *)(uVar2 + 0x18);
      iVar6 = *(int *)(uVar2 + 0x10);
      iVar3 = *(int *)(uVar2 + 0x14);
    }
    iVar4 = iVar6 + 1;
    *piVar8 = iVar4;
    *(ulong *)(lVar5 + (long)iVar6 * 8) = (ulong)uVar1;
    uVar7 = (ulong)*param_4;
  }
  else {
    uVar1 = *param_4;
    iVar3 = *(int *)(uVar2 + 0x14);
    if (iVar4 == iVar3) {
      func_0x00010598df1c(piVar8,iVar4,iVar6 + 2);
      lVar5 = *(long *)(uVar2 + 0x18);
      iVar4 = *(int *)(uVar2 + 0x10);
      iVar3 = *(int *)(uVar2 + 0x14);
    }
    iVar6 = iVar4 + 1;
    *piVar8 = iVar6;
    *(ulong *)(lVar5 + (long)iVar4 * 8) = (ulong)uVar1;
    if (iVar6 == iVar3) {
      func_0x00010598df1c(piVar8,iVar3,iVar3 + 1);
      lVar5 = *(long *)(uVar2 + 0x18);
      iVar6 = *(int *)(uVar2 + 0x10);
      iVar3 = *(int *)(uVar2 + 0x14);
    }
    iVar4 = iVar6 + 1;
    *piVar8 = iVar4;
    uVar7 = 1;
    *(undefined8 *)(lVar5 + (long)iVar6 * 8) = 1;
  }
  if (iVar4 == iVar3) {
    func_0x00010598df1c(piVar8,iVar3,iVar3 + 1);
    iVar4 = *(int *)(uVar2 + 0x10);
    lVar5 = *(long *)(uVar2 + 0x18);
  }
  *piVar8 = iVar4 + 1;
  *(ulong *)(lVar5 + (long)iVar4 * 8) = uVar7;
  return;
}



/* Entry: 109cf8ea8; end: 109cf918f;  */

void FUN_109cf8ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x30) == 500) {
    uVar1 = *(ulong *)(param_1 + 0x28);
  }
  else {
    func_0x000109c78218(param_1);
    *(undefined4 *)(param_1 + 0x30) = 500;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109cbae88();
    *(ulong *)(param_1 + 0x28) = uVar1;
  }
  lVar2 = uVar1 + 0x18;
  func_0x000107c303b0(lVar2,&SUB_109cbaee0);
  func_0x000107c303b4(lVar2 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x000107c303b4(lVar2 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x000107c303b4(lVar2 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  uVar1 = *(ulong *)(lVar2 + 8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(lVar2 + 0x70,param_3,uVar1);
  if (*(int *)(lVar2 + 0x8c) == 0x3cf) {
    uVar1 = *(ulong *)(lVar2 + 0x80);
  }
  else {
    func_0x000109c819a4(lVar2);
    *(undefined4 *)(lVar2 + 0x8c) = 0x3cf;
    uVar1 = *(ulong *)(lVar2 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109cb7600();
    *(ulong *)(lVar2 + 0x80) = uVar1;
  }
  *(undefined8 *)(uVar1 + 0x30) = 2;
  *(undefined8 *)(uVar1 + 0x28) = 0xfffffffffffffffb;
  return;
}



/* Entry: 109cf9190; end: 109cf93e3;  */

void FUN_109cf9190(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  lVar4 = *(long *)(param_2 + 0x70);
  if (*(int *)(lVar4 + 0x30) == 500) {
    ppuVar8 = *(undefined ***)(lVar4 + 0x28);
  }
  else {
    ppuVar8 = &PTR_PTR_1132f1948;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (0 < *(int *)(ppuVar8 + 4)) {
    lVar4 = 0;
    do {
      puVar5 = ppuVar8[3];
      ppuVar7 = ppuVar8 + 3;
      if (((ulong)puVar5 & 1) != 0) {
        ppuVar7 = (undefined **)(puVar5 + lVar4 * 8 + 7);
      }
      puVar5 = *ppuVar7;
      if (0 < *(int *)(puVar5 + 0x30)) {
        lVar9 = 0;
        lVar10 = 8;
        do {
          uVar6 = *(ulong *)(puVar5 + 0x28);
          puVar1 = (ulong *)(puVar5 + 0x28);
          if ((uVar6 & 1) != 0) {
            puVar1 = (ulong *)(uVar6 + lVar10 + -1);
          }
          uStack_78 = 0;
          uStack_80 = 0xffffffff;
          puVar3 = param_1;
          FUN_109cfa0c0(param_1,*puVar1,*puVar1,&uStack_80);
          if (-1 < *(int *)(puVar3 + 5)) {
            func_0x00010952d0c4(&UNK_10e03fc67,&UNK_10f5aad8c,&UNK_10f5aada0);
            goto LAB_109cf93c0;
          }
          *(int *)(puVar3 + 5) = (int)lVar4;
          lVar9 = lVar9 + 1;
          lVar10 = lVar10 + 8;
        } while (lVar9 < *(int *)(puVar5 + 0x30));
      }
      if (0 < *(int *)(puVar5 + 0x18)) {
        lVar9 = 0;
        lVar10 = 8;
        do {
          uVar6 = *(ulong *)(puVar5 + 0x10);
          puVar1 = (ulong *)(puVar5 + 0x10);
          if ((uVar6 & 1) != 0) {
            puVar1 = (ulong *)(uVar6 + lVar10 + -1);
          }
          uStack_78 = 0;
          uStack_80 = 0xffffffff;
          puVar3 = param_1;
          FUN_109cfa0c0(param_1,*puVar1,*puVar1,&uStack_80);
          *(int *)((long)puVar3 + 0x2c) = *(int *)((long)puVar3 + 0x2c) + 1;
          lVar9 = lVar9 + 1;
          lVar10 = lVar10 + 8;
        } while (lVar9 < *(int *)(puVar5 + 0x18));
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(ppuVar8 + 4));
    lVar4 = *(long *)(param_2 + 0x70);
  }
  ppuVar8 = &PTR_PTR_1132f05f8;
  if (*(undefined ***)(lVar4 + 0x18) != (undefined **)0x0) {
    ppuVar8 = *(undefined ***)(lVar4 + 0x18);
  }
  puVar5 = ppuVar8[6];
  ppuVar7 = ppuVar8 + 6;
  if (((ulong)puVar5 & 1) != 0) {
    ppuVar7 = (undefined **)(puVar5 + 7);
  }
  if (*(int *)(ppuVar8 + 7) != 0) {
    lVar4 = (long)*(int *)(ppuVar8 + 7) << 3;
    do {
      puVar3 = param_1;
      FUN_109cfa508(param_1,*(ulong *)(*ppuVar7 + 0x18) & 0xfffffffffffffffc);
      if (puVar3 == (undefined8 *)0x0) {
        func_0x00010952d0c4(&UNK_10e03fc67,&UNK_10f5aad8c,&UNK_10f5aade0);
LAB_109cf93c0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109cf93c4);
        (*pcVar2)();
      }
      *(undefined1 *)(puVar3 + 6) = 1;
      lVar4 = lVar4 + -8;
      ppuVar7 = ppuVar7 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109cf93e4; end: 109cf993b;  */

void FUN_109cf93e4(long param_1,long *param_2,long *param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_71;
  long alStack_70 [2];
  
  if (*param_2 == param_2[1]) {
    return;
  }
  lVar14 = *(long *)(param_1 + 0x70);
  if (*(int *)(lVar14 + 0x30) == 500) {
    uVar21 = *(ulong *)(lVar14 + 0x28);
  }
  else {
    func_0x000109c78218(lVar14);
    *(undefined4 *)(lVar14 + 0x30) = 500;
    uVar21 = *(ulong *)(lVar14 + 8);
    if ((uVar21 & 1) != 0) {
      uVar21 = *(ulong *)(uVar21 & 0xfffffffffffffffe);
    }
    func_0x000109cbae88();
    *(ulong *)(lVar14 + 0x28) = uVar21;
  }
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  lStack_e0 = 0;
  uStack_d0 = 0x3f800000;
  if (1 < (int)*(uint *)(uVar21 + 0x20)) {
    puVar2 = (ulong *)(uVar21 + 0x18);
    lVar14 = param_2[1];
    uVar11 = (ulong)*(uint *)(uVar21 + 0x20);
LAB_109cf9480:
    uVar15 = uVar11 - 1;
    if ((*param_2 == lVar14) || (uVar15 != *(uint *)(lVar14 + -4))) goto LAB_109cf9634;
    puVar3 = puVar2;
    if ((*puVar2 & 1) != 0) {
      puVar3 = (ulong *)(*puVar2 + uVar15 * 8 + 7);
    }
    uVar22 = *puVar3;
    if (*(int *)(uVar22 + 0x18) == 1) {
      if (*(int *)(uVar22 + 0x30) == 1) {
        puVar23 = (ulong *)(uVar22 + 0x28);
        puVar3 = puVar23;
        if ((*puVar23 & 1) != 0) {
          puVar3 = (ulong *)(*puVar23 + 7);
        }
        uVar19 = *puVar3;
        plVar16 = param_3;
        func_0x000107c31944(param_3,uVar19);
        plVar12 = (long *)param_3[1];
        if (plVar12 != (long *)0x0) {
          uVar18 = (long)plVar12 - 1;
          if (((ulong)plVar12 & uVar18) == 0) {
            plVar13 = (long *)(uVar18 & (ulong)plVar16);
          }
          else {
            plVar13 = plVar16;
            if (plVar12 <= plVar16) {
              uVar4 = 0;
              if (plVar12 != (long *)0x0) {
                uVar4 = (ulong)plVar16 / (ulong)plVar12;
              }
              plVar13 = (long *)((long)plVar16 - uVar4 * (long)plVar12);
            }
          }
          plVar9 = *(long **)(*param_3 + (long)plVar13 * 8);
          if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
            do {
              plVar10 = (long *)plVar9[1];
              if (plVar16 == plVar10) {
                plVar10 = param_3;
                func_0x000104c4fbc4(param_3,plVar9 + 2,uVar19);
                if (((ulong)plVar10 & 1) != 0) goto LAB_109cf959c;
              }
              else {
                if (((ulong)plVar12 & uVar18) == 0) {
                  plVar10 = (long *)((ulong)plVar10 & uVar18);
                }
                else if (plVar12 <= plVar10) {
                  uVar4 = 0;
                  if (plVar12 != (long *)0x0) {
                    uVar4 = (ulong)plVar10 / (ulong)plVar12;
                  }
                  plVar10 = (long *)((long)plVar10 - uVar4 * (long)plVar12);
                }
                if (plVar10 != plVar13) break;
              }
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) break;
            } while( true );
          }
        }
        func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aae0f,&UNK_10f5aae81);
      }
      else {
        func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aae0f,&UNK_10f5aae4e);
      }
    }
    else {
      func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aae0f,&UNK_10f5aae1c);
    }
LAB_109cf98d4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109cf98d8);
    (*pcVar5)();
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_80 = 0x3f800000;
LAB_109cf973c:
  func_0x000107c2826c(&uStack_a0);
  iVar8 = *(int *)(uVar21 + 0x20);
  if (0 < iVar8) {
    lVar14 = 0;
    do {
      uVar11 = *(ulong *)(uVar21 + 0x18);
      puVar2 = (ulong *)(uVar21 + 0x18);
      if ((uVar11 & 1) != 0) {
        puVar2 = (ulong *)(uVar11 + lVar14 * 8 + 7);
      }
      uVar11 = *puVar2;
      if (0 < *(int *)(uVar11 + 0x18)) {
        lVar17 = 0;
        puVar2 = (ulong *)(uVar11 + 0x10);
        lVar20 = 8;
        do {
          puVar3 = puVar2;
          if ((*puVar2 & 1) != 0) {
            puVar3 = (ulong *)(*puVar2 + lVar20 + -1);
          }
          puVar6 = &uStack_f0;
          FUN_109ce5028(puVar6,*puVar3);
          if (puVar6 != (undefined8 *)0x0) {
            puVar3 = puVar2;
            if ((*puVar2 & 1) != 0) {
              puVar3 = (ulong *)(*puVar2 + lVar20 + -1);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (*puVar3,puVar6 + 5);
          }
          lVar17 = lVar17 + 1;
          lVar20 = lVar20 + 8;
        } while (lVar17 < *(int *)(uVar11 + 0x18));
        iVar8 = *(int *)(uVar21 + 0x20);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar8);
  }
  func_0x000104c4f944(&uStack_f0);
  return;
LAB_109cf959c:
  if ((*(byte *)(plVar9 + 6) & 1) == 0) {
    uVar19 = *(ulong *)(uVar22 + 0x10);
    if ((*(ulong *)(uVar22 + 0x28) & 1) != 0) {
      puVar23 = (ulong *)(*(ulong *)(uVar22 + 0x28) + 7);
    }
    uVar18 = *puVar23;
    puVar3 = (ulong *)(uVar22 + 0x10);
    if ((uVar19 & 1) != 0) {
      puVar3 = (ulong *)(uVar19 + 7);
    }
    FUN_109cfa5ec(&uStack_f0,uVar18,uVar18,*puVar3);
    if ((uVar18 & 1) == 0) {
      func_0x00010952d0c4(&UNK_10e03fc10,&UNK_10f5aae0f,&UNK_10f5aaeb3);
      goto LAB_109cf98d4;
    }
    if (*(long *)(uVar21 + 0x28) == 0) {
      puVar3 = puVar2;
      if ((*puVar2 & 1) != 0) {
        puVar3 = (ulong *)(*puVar2 + 7);
      }
      if ((long *)puVar3[uVar15] != (long *)0x0) {
        (**(code **)(*(long *)puVar3[uVar15] + 8))();
      }
    }
    func_0x00010b4d370c(puVar2,uVar15,1);
  }
  lVar14 = param_2[1] + -4;
  param_2[1] = lVar14;
LAB_109cf9634:
  bVar1 = uVar11 < 3;
  uVar11 = uVar15;
  if (bVar1) goto code_r0x000109cf963c;
  goto LAB_109cf9480;
code_r0x000109cf963c:
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_80 = 0x3f800000;
  for (plVar16 = (long *)lStack_e0; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
    if (*(char *)((long)plVar16 + 0x3f) < '\0') {
      func_0x000107c3192c(&lStack_c0,plVar16[5],plVar16[6]);
    }
    else {
      uStack_b8 = plVar16[6];
      lStack_c0 = plVar16[5];
      lStack_b0 = plVar16[7];
    }
    puVar6 = &uStack_f0;
    FUN_109ce5028(puVar6,&lStack_c0);
    while (puVar6 != (undefined8 *)0x0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&lStack_c0,puVar6 + 5);
      puVar7 = puVar6 + 2;
      func_0x000107c2827c(&uStack_a0,puVar7,puVar6 + 2);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x00010952d0c4(&DAT_10f5aaf92,&UNK_10f5aaf99,&UNK_10f5aafaf);
        goto LAB_109cf98d4;
      }
      puVar6 = &uStack_f0;
      FUN_109ce5028(puVar6,&lStack_c0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar16 + 5,&lStack_c0)
    ;
    for (plVar12 = (long *)lStack_90; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      alStack_70[0] = (long)(plVar12 + 2);
      puVar6 = &uStack_f0;
      FUN_109cf993c(puVar6,alStack_70[0],&UNK_10dd5b8f9,alStack_70,&uStack_71);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (puVar6 + 5,&lStack_c0);
    }
    func_0x000107c283f4(&uStack_a0);
    if (lStack_b0 < 0) {
      __ZdlPv(lStack_c0);
    }
  }
  goto LAB_109cf973c;
}



/* Entry: 109cf993c; end: 109cf9b87;  */

undefined1  [16]
FUN_109cf993c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_109cf9b44;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_109cf9b88(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    func_0x000104c4f9b8(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_109cf9b44:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 109cf9b88; end: 109cf9c2b;  */

void FUN_109cf9b88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    puVar1[4] = param_5[2];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109cf9c2c; end: 109cf9c53;  */

void FUN_109cf9c2c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000109c78a04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109cf9c54; end: 109cf9ccf;  */

void FUN_109cf9c54(ulong *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  
  if ((param_3 == (long *)0x0) && (param_4 != (long *)0x0)) {
    if (param_2 != (long *)0x0) {
      func_0x00010b4d8014(param_4,param_2,&UNK_1053a933c);
    }
  }
  else if (param_4 != param_3) {
    func_0x000109cbaee0();
    (**(code **)(*param_4 + 0x20))();
    param_2 = param_4;
  }
  uVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    func_0x000100064580(param_1,1);
code_r0x0001053a9270:
    uVar3 = *param_1;
  }
  else {
    puVar2 = param_1;
    func_0x0001053a91c8();
    uVar3 = param_1[1];
    if ((int)puVar2 != 0) {
      func_0x0001053a95e4(*param_1);
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_00;
      }
      if (((long *)*puVar2 != (long *)0x0) && (param_1[2] == 0)) {
        (**(code **)(*(long *)*puVar2 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar2 = param_1;
    func_0x00010006818c();
    uVar1 = (int)uVar3 == (int)puVar2;
    if ((int)uVar3 < (int)puVar2) {
      uVar1 = (*param_1 & 1) == 0;
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar3 = *puVar2;
      func_0x00010006818c(param_1);
      func_0x0001053a95e4(*param_1);
      puVar2 = param_1;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_01;
      }
      *puVar2 = uVar3;
      goto code_r0x0001053a9270;
    }
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar3);
code_r0x0001053a9278:
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    param_1 = extraout_x9;
  }
  *param_1 = (ulong)param_2;
  return;
}



/* Entry: 109cf9cd0; end: 109cf9f1f;  */

undefined1  [16]
FUN_109cf9cd0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_109cf9ed0;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  FUN_109cf9f20(aplStack_78,param_1,plVar6,param_3,param_4);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    func_0x0001094a8d40(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_109cf9ed0:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 109cf9f20; end: 109cf9fd7;  */

void FUN_109cf9f20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar2 = *param_4;
    puVar1[3] = param_4[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_4[2];
  }
  uVar2 = *param_5;
  puVar1[6] = param_5[1];
  puVar1[5] = uVar2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109cf9fd8; end: 109cfa0bf;  */

uint FUN_109cf9fd8(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar3 != *(long *)(param_1 + 8)) {
    lVar2 = (lVar3 - *(long *)(param_1 + 8)) * 0x80 + -1;
  }
  uVar4 = lVar2 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  if (uVar4 < 0x400) {
    param_2 = 1;
  }
  uVar1 = 0;
  if (uVar4 < 0x800) {
    uVar1 = param_2;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)(lVar3 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  return uVar1 ^ 1;
}



/* Entry: 109cfa0c0; end: 109cfa4d3;  */

long * FUN_109cfa0c0(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x26;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x26 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x26) break;
        }
      }
    }
  }
  plVar5 = (long *)0x38;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[5] = *param_4;
  *(int *)(plVar5 + 6) = (int)param_4[1];
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_109cfa3d4;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_109cfa25c:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109cfa4ac);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_109cfa25c;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x26 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x26 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_109cfa3d4:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x26 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 109cfa4d4; end: 109cfa507;  */

void FUN_109cfa4d4(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109cfa508; end: 109cfa5eb;  */

long FUN_109cfa508(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109cfa5ec; end: 109cfa82f;  */

undefined1  [16]
FUN_109cfa5ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_109cfa7ec;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  FUN_109cfa830(aplStack_78,param_1,plVar6,param_3,param_4);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    func_0x000104c4f9b8(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_109cfa7ec:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 109cfa830; end: 109cfa8ab;  */

void FUN_109cfa830(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  func_0x0001093ec120(puVar1 + 2,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109cfa8ac; end: 109cfab3b;  */

long * FUN_109cfa8ac(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined4 uStack_64;
  
  lVar11 = *param_2;
  lVar17 = param_2[1];
  *param_1 = lVar11;
  param_1[1] = lVar17;
  if (lVar17 != 0) {
    plVar15 = (long *)(lVar17 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar11 = *param_1;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  plVar15 = param_1 + 7;
  param_1[8] = 0;
  *plVar15 = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  uVar14 = *(ulong *)(lVar11 + 0x68);
  puVar16 = (ulong *)(lVar11 + 0x68);
  if ((uVar14 & 1) != 0) {
    puVar16 = (ulong *)(uVar14 + 7);
  }
  if (*(int *)(lVar11 + 0x70) != 0) {
    lVar11 = (long)*(int *)(lVar11 + 0x70) << 3;
    do {
      ppuVar1 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(*puVar16 + 0x48) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(*puVar16 + 0x48);
      }
      puVar18 = ppuVar1[0x20];
      uStack_64 = 0x53;
      puVar8 = (undefined8 *)&uStack_64;
      FUN_109ce555c();
      puVar12 = (ulong *)((ulong)puVar18 & 0xfffffffffffffffc);
      bVar3 = *(byte *)((long)puVar12 + 0x17);
      uVar14 = puVar12[1];
      if (-1 < (char)bVar3) {
        uVar14 = (ulong)bVar3;
      }
      bVar4 = *(byte *)((long)puVar8 + 0x17);
      uVar13 = puVar8[1];
      if (-1 < (char)bVar4) {
        uVar13 = (ulong)bVar4;
      }
      if (uVar14 == uVar13) {
        puVar9 = (ulong *)*puVar12;
        if (-1 < (char)bVar3) {
          puVar9 = puVar12;
        }
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < (char)bVar4) {
          puVar2 = puVar8;
        }
        _memcmp(puVar9,puVar2);
        if ((int)puVar9 == 0) {
          lVar11 = *param_2;
          if (*(int *)(lVar11 + 0x70) < 1) {
            return param_1;
          }
          lVar17 = 0;
          do {
            uVar14 = *(ulong *)(lVar11 + 0x68);
            puVar16 = (ulong *)(lVar11 + 0x68);
            if ((uVar14 & 1) != 0) {
              puVar16 = (ulong *)(uVar14 + lVar17 * 8 + 7);
            }
            uVar14 = *puVar16;
            if (0 < *(int *)(uVar14 + 0x38)) {
              lVar11 = 0;
              lVar19 = 8;
              do {
                uVar13 = *(ulong *)(uVar14 + 0x30);
                puVar16 = (ulong *)(uVar14 + 0x30);
                if ((uVar13 & 1) != 0) {
                  puVar16 = (ulong *)(uVar13 + lVar19 + -1);
                }
                uVar13 = *puVar16;
                FUN_109cfb260(param_1 + 2,uVar13,uVar13,lVar17);
                if ((uVar13 & 1) == 0) {
                  func_0x00010952d0c4(&UNK_10e03fc94,&UNK_10f5aafc7,&UNK_10f5aaeb3);
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x109cfab0c);
                  (*pcVar7)();
                }
                lVar11 = lVar11 + 1;
                lVar19 = lVar19 + 8;
              } while (lVar11 < *(int *)(uVar14 + 0x38));
            }
            if (0 < *(int *)(uVar14 + 0x20)) {
              lVar11 = 0;
              lVar19 = 8;
              do {
                uVar13 = *(ulong *)(uVar14 + 0x18);
                puVar16 = (ulong *)(uVar14 + 0x18);
                if ((uVar13 & 1) != 0) {
                  puVar16 = (ulong *)(uVar13 + lVar19 + -1);
                }
                uVar13 = *puVar16;
                plVar10 = plVar15;
                FUN_109cfb260(plVar15,uVar13,uVar13,lVar17);
                if ((uVar13 & 1) == 0) {
                  *(undefined4 *)(plVar10 + 5) = 0xffffffff;
                }
                lVar11 = lVar11 + 1;
                lVar19 = lVar19 + 8;
              } while (lVar11 < *(int *)(uVar14 + 0x20));
            }
            lVar17 = lVar17 + 1;
            lVar11 = *param_2;
          } while (lVar17 < *(int *)(lVar11 + 0x70));
          return param_1;
        }
      }
      puVar16 = puVar16 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  return param_1;
}



/* Entry: 109cfab3c; end: 109cfac63;  */

void FUN_109cfab3c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uStack_54;
  
  puVar7 = (ulong *)(*param_1 + 0x68);
  uVar8 = *puVar7;
  if ((uVar8 & 1) != 0) {
    puVar7 = (ulong *)(uVar8 + 7);
  }
  iVar4 = *(int *)(*param_1 + 0x70);
  if (iVar4 != 0) {
    lVar10 = (long)iVar4 << 3;
    do {
      uVar9 = *puVar7;
      *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 1;
      uVar8 = *(ulong *)(uVar9 + 0x48);
      if (uVar8 == 0) {
        uVar8 = *(ulong *)(uVar9 + 8);
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        func_0x000109c0fb5c();
        *(ulong *)(uVar9 + 0x48) = uVar8;
      }
      puVar11 = (undefined8 *)(*(ulong *)(uVar8 + 0x100) & 0xfffffffffffffffc);
      uStack_54 = 0x53;
      puVar5 = (undefined8 *)&uStack_54;
      FUN_109ce555c();
      bVar2 = *(byte *)((long)puVar11 + 0x17);
      uVar8 = puVar11[1];
      if (-1 < (char)bVar2) {
        uVar8 = (ulong)bVar2;
      }
      bVar3 = *(byte *)((long)puVar5 + 0x17);
      uVar1 = puVar5[1];
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
      }
      if (uVar8 == uVar1) {
        puVar6 = (undefined8 *)*puVar11;
        if (-1 < (char)bVar2) {
          puVar6 = puVar11;
        }
        puVar11 = (undefined8 *)*puVar5;
        if (-1 < (char)bVar3) {
          puVar11 = puVar5;
        }
        _memcmp(puVar6,puVar11);
        if ((int)puVar6 == 0) {
          FUN_109cfacb0(param_1,uVar9,param_2,param_3);
        }
      }
      puVar7 = puVar7 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  return;
}



/* Entry: 109cfac64; end: 109cfacaf;  */

void FUN_109cfac64(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000109c0fb5c();
    *(ulong *)(param_1 + 0x48) = uVar1;
  }
  return;
}



/* Entry: 109cfacb0; end: 109cfafa3;  */

void FUN_109cfacb0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong *puVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*(int *)(param_2 + 0x38) == 1 && *(int *)(param_2 + 0x20) == 1) {
    lVar5 = param_1;
    FUN_109cfafa4();
    lVar6 = param_1;
    func_0x000109cfb054(param_1,param_2);
    lVar7 = lVar6;
    FUN_109cfb0f8(0x3f3504f3,0);
    if ((((int)lVar7 != 0) && (lVar7 = lVar5, FUN_109cfb0f8(0x3f800000,0x3f800000), (int)lVar7 != 0)
        ) && (lVar7 = param_1, FUN_109cfafa4(param_1,lVar5), lVar7 != 0)) {
      ppuVar1 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(lVar7 + 0x48) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(lVar7 + 0x48);
      }
      puVar15 = (undefined8 *)((ulong)ppuVar1[0x20] & 0xfffffffffffffffc);
      uStack_64 = 0x10;
      puVar8 = (undefined8 *)&uStack_64;
      FUN_109ce555c();
      bVar3 = *(byte *)((long)puVar15 + 0x17);
      uVar14 = puVar15[1];
      if (-1 < (char)bVar3) {
        uVar14 = (ulong)bVar3;
      }
      bVar4 = *(byte *)((long)puVar8 + 0x17);
      uVar12 = puVar8[1];
      if (-1 < (char)bVar4) {
        uVar12 = (ulong)bVar4;
      }
      if (uVar14 == uVar12) {
        puVar9 = (undefined8 *)*puVar15;
        if (-1 < (char)bVar3) {
          puVar9 = puVar15;
        }
        puVar15 = (undefined8 *)*puVar8;
        if (-1 < (char)bVar4) {
          puVar15 = puVar8;
        }
        _memcmp(puVar9,puVar15);
        if ((((int)puVar9 == 0) && (*(int *)(lVar7 + 0x38) == 1)) &&
           ((*(int *)(lVar7 + 0x20) == 2 && (*(int *)((long)ppuVar1 + 0x144) == 0)))) {
          lVar10 = param_1;
          FUN_109cfafa4(param_1,lVar7);
          lVar11 = lVar10;
          FUN_109cfb0f8(0x3f000000,0);
          if ((((int)lVar11 != 0) && (func_0x000109cfb054(param_1,lVar6), param_1 != 0)) &&
             (*(int *)(param_1 + 0x38) == 1)) {
            uVar14 = *(ulong *)(param_1 + 0x30);
            puVar2 = (ulong *)(param_1 + 0x30);
            if ((uVar14 & 1) != 0) {
              puVar2 = (ulong *)(uVar14 + 7);
            }
            if (*(int *)(lVar7 + 0x20) == 2) {
              uVar14 = *puVar2;
              puVar16 = (ulong *)(lVar7 + 0x18);
              puVar2 = puVar16;
              if ((*puVar16 & 1) != 0) {
                puVar2 = (ulong *)(*puVar16 + 7);
              }
              uVar12 = *puVar2;
              func_0x0001098e20bc(uVar12,uVar14);
              if ((uVar12 & 1) == 0) {
                if ((*puVar16 & 1) != 0) {
                  puVar16 = (ulong *)(*puVar16 + 0xf);
                }
                uVar12 = *puVar16;
                func_0x0001098e20bc(uVar12,uVar14);
                if ((int)uVar12 == 0) {
                  return;
                }
              }
              lVar11 = param_2;
              FUN_109cfac64();
              uStack_68 = 0x5a;
              puVar13 = &uStack_68;
              FUN_109ce555c(puVar13);
              *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 2;
              uVar14 = *(ulong *)(lVar11 + 8);
              if ((uVar14 & 1) != 0) {
                uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
              }
              func_0x000107c30248(lVar11 + 0x100,puVar13,uVar14);
              ppuVar1 = &PTR_PTR_1132eca28;
              if (*(undefined ***)(lVar5 + 0x48) != (undefined **)0x0) {
                ppuVar1 = *(undefined ***)(lVar5 + 0x48);
              }
              func_0x000107c2827c(param_3,(ulong)ppuVar1[0x1f] & 0xfffffffffffffffc,
                                  (ulong)ppuVar1[0x1f] & 0xfffffffffffffffc);
              ppuVar1 = &PTR_PTR_1132eca28;
              if (*(undefined ***)(lVar7 + 0x48) != (undefined **)0x0) {
                ppuVar1 = *(undefined ***)(lVar7 + 0x48);
              }
              func_0x000107c2827c(param_3,(ulong)ppuVar1[0x1f] & 0xfffffffffffffffc,
                                  (ulong)ppuVar1[0x1f] & 0xfffffffffffffffc);
              ppuVar1 = &PTR_PTR_1132eca28;
              if (*(undefined ***)(lVar10 + 0x48) != (undefined **)0x0) {
                ppuVar1 = *(undefined ***)(lVar10 + 0x48);
              }
              func_0x000107c2827c(param_3,(ulong)ppuVar1[0x1f] & 0xfffffffffffffffc,
                                  (ulong)ppuVar1[0x1f] & 0xfffffffffffffffc);
              ppuVar1 = &PTR_PTR_1132eca28;
              if (*(undefined ***)(lVar6 + 0x48) != (undefined **)0x0) {
                ppuVar1 = *(undefined ***)(lVar6 + 0x48);
              }
              func_0x000107c2827c(param_3,(ulong)ppuVar1[0x1f] & 0xfffffffffffffffc,
                                  (ulong)ppuVar1[0x1f] & 0xfffffffffffffffc);
              uVar14 = *(ulong *)(lVar10 + 0x30);
              puVar2 = (ulong *)(lVar10 + 0x30);
              if ((uVar14 & 1) != 0) {
                puVar2 = (ulong *)(uVar14 + 7);
              }
              uVar14 = *(ulong *)(param_2 + 0x30);
              puVar16 = (ulong *)(param_2 + 0x30);
              if ((uVar14 & 1) != 0) {
                puVar16 = (ulong *)(uVar14 + 7);
              }
              FUN_109cfa5ec(param_4,*puVar2,*puVar2,*puVar16);
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 109cfafa4; end: 109cfb0f7;  */

ulong FUN_109cfafa4(float param_1,float param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 uStack_84;
  
  if (*(int *)(param_4 + 0x38) == 1) {
    uVar12 = *(ulong *)(param_4 + 0x30);
    puVar1 = (ulong *)(param_4 + 0x30);
    if ((uVar12 & 1) != 0) {
      puVar1 = (ulong *)(uVar12 + 7);
    }
    plVar6 = param_3 + 7;
    func_0x0001094ccb54(plVar6,*puVar1);
    if (plVar6 != (long *)0x0) {
      if ((int)*(uint *)(plVar6 + 5) < 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(ulong *)(*param_3 + 0x68);
        puVar1 = (ulong *)(*param_3 + 0x68);
        if ((uVar12 & 1) != 0) {
          puVar1 = (ulong *)(uVar12 + (ulong)*(uint *)(plVar6 + 5) * 8 + 7);
        }
        uVar12 = *puVar1;
      }
      return uVar12;
    }
    puVar11 = &UNK_10f5ab012;
  }
  else {
    puVar11 = &UNK_10f5aafe1;
  }
  plVar6 = (long *)&UNK_10e03fcca;
  puVar8 = &UNK_10f5aafd7;
  func_0x00010952d0c4(&UNK_10e03fcca,&UNK_10f5aafd7,puVar11);
  if (*(int *)(puVar8 + 0x20) == 1) {
    uVar12 = *(ulong *)(puVar8 + 0x18);
    puVar1 = (ulong *)(puVar8 + 0x18);
    if ((uVar12 & 1) != 0) {
      puVar1 = (ulong *)(uVar12 + 7);
    }
    plVar7 = plVar6 + 2;
    func_0x0001094ccb54(plVar7,*puVar1);
    if (plVar7 != (long *)0x0) {
      uVar12 = *(ulong *)(*plVar6 + 0x68);
      puVar1 = (ulong *)(*plVar6 + 0x68);
      if ((uVar12 & 1) != 0) {
        puVar1 = (ulong *)(uVar12 + (long)(int)plVar7[5] * 8 + 7);
      }
      return *puVar1;
    }
    puVar11 = &UNK_10f5ab012;
  }
  else {
    puVar11 = &UNK_10f5ab04d;
  }
  puVar8 = &UNK_10e03fcca;
  func_0x00010952d0c4(&UNK_10e03fcca,&UNK_10f5ab043,puVar11);
  if (puVar8 != (undefined *)0x0) {
    ppuVar2 = &PTR_PTR_1132eca28;
    if (*(undefined ***)(puVar8 + 0x48) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(puVar8 + 0x48);
    }
    puVar13 = (undefined8 *)((ulong)ppuVar2[0x20] & 0xfffffffffffffffc);
    uStack_84 = 8;
    puVar9 = (undefined8 *)&uStack_84;
    FUN_109ce555c();
    bVar4 = *(byte *)((long)puVar13 + 0x17);
    uVar12 = puVar13[1];
    if (-1 < (char)bVar4) {
      uVar12 = (ulong)bVar4;
    }
    bVar5 = *(byte *)((long)puVar9 + 0x17);
    uVar3 = puVar9[1];
    if (-1 < (char)bVar5) {
      uVar3 = (ulong)bVar5;
    }
    if (uVar12 == uVar3) {
      puVar10 = (undefined8 *)*puVar13;
      if (-1 < (char)bVar4) {
        puVar10 = puVar13;
      }
      puVar13 = (undefined8 *)*puVar9;
      if (-1 < (char)bVar5) {
        puVar13 = puVar9;
      }
      _memcmp(puVar10,puVar13);
      if ((((int)puVar10 == 0) && (*(int *)(puVar8 + 0x38) == 1)) && (*(int *)(puVar8 + 0x20) == 1))
      {
        if (1e-06 <= ABS(*(float *)(ppuVar2 + 0x3c) - param_1)) {
          return (ulong)(ABS(*(float *)((long)ppuVar2 + 0x1e4) - param_2) < 1e-06);
        }
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 109cfb0f8; end: 109cfb207;  */

bool FUN_109cfb0f8(float param_1,float param_2,long param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_44;
  
  if (param_3 != 0) {
    ppuVar1 = &PTR_PTR_1132eca28;
    if (*(undefined ***)(param_3 + 0x48) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_3 + 0x48);
    }
    puVar8 = (undefined8 *)((ulong)ppuVar1[0x20] & 0xfffffffffffffffc);
    uStack_44 = 8;
    puVar6 = (undefined8 *)&uStack_44;
    FUN_109ce555c();
    bVar4 = *(byte *)((long)puVar8 + 0x17);
    uVar2 = puVar8[1];
    if (-1 < (char)bVar4) {
      uVar2 = (ulong)bVar4;
    }
    bVar5 = *(byte *)((long)puVar6 + 0x17);
    uVar3 = puVar6[1];
    if (-1 < (char)bVar5) {
      uVar3 = (ulong)bVar5;
    }
    if (uVar2 == uVar3) {
      puVar7 = (undefined8 *)*puVar8;
      if (-1 < (char)bVar4) {
        puVar7 = puVar8;
      }
      puVar8 = (undefined8 *)*puVar6;
      if (-1 < (char)bVar5) {
        puVar8 = puVar6;
      }
      _memcmp(puVar7,puVar8);
      if ((((int)puVar7 == 0) && (*(int *)(param_3 + 0x38) == 1)) && (*(int *)(param_3 + 0x20) == 1)
         ) {
        if (1e-06 <= ABS(*(float *)(ppuVar1 + 0x3c) - param_1)) {
          return ABS(*(float *)((long)ppuVar1 + 0x1e4) - param_2) < 1e-06;
        }
        return true;
      }
    }
  }
  return false;
}



/* Entry: 109cfb208; end: 109cfb25f;  */

long FUN_109cfb208(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109cfb260; end: 109cfb4f7;  */

undefined1  [16] FUN_109cfb260(long *param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_109cfb498;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  plVar7 = (long *)0x30;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar7 + 2,*param_3,param_3[1]);
  }
  else {
    lVar4 = *param_3;
    plVar7[3] = param_3[1];
    plVar7[2] = lVar4;
    plVar7[4] = param_3[2];
  }
  *(undefined4 *)(plVar7 + 5) = param_4;
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    func_0x0001092afd6c(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_109cfb498:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 109cfb4f8; end: 109cfb5d7;  */

undefined8 * FUN_109cfb4f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_110b3e248;
  puVar1 = (undefined8 *)0x108;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b3e2d8;
  puVar1[4] = 0;
  puVar1[3] = &PTR_DAT_110b2bad8;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  puVar1[0x1d] = &DAT_11383d918;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  param_1[9] = puVar1 + 3;
  param_1[10] = puVar1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  return param_1;
}



/* Entry: 109cfb5d8; end: 109cfba63;  */

ulong * FUN_109cfb5d8(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  long *plVar6;
  ulong **ppuVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  int iVar17;
  ulong uVar18;
  ulong *puStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long alStack_e8 [2];
  char cStack_d1;
  undefined8 ***pppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined2 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = (ulong)&PTR_FUN_110b3e248;
  lVar11 = *param_2;
  uVar14 = *(ulong *)(lVar11 + 0x10);
  puStack_138 = param_1 + 9;
  param_1[10] = *(ulong *)(lVar11 + 0x18);
  *puStack_138 = uVar14;
  if (*(long *)(lVar11 + 0x18) != 0) {
    plVar6 = (long *)(*(long *)(lVar11 + 0x18) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_140 = param_1 + 0xb;
  param_1[0xc] = 0;
  *puStack_140 = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  puStack_130 = param_1;
  func_0x000109d00224();
  plVar6 = (long *)*param_2;
  (**(code **)(*plVar6 + 0x20))();
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 0x28))();
  puVar16 = &uStack_120;
  FUN_109cd31ac(&uStack_120,plVar6,param_2);
  FUN_109cdfa10(param_1 + 2);
  puVar1 = puStack_130;
  puStack_130[3] = uStack_118;
  puStack_130[2] = uStack_120;
  puStack_130[4] = uStack_110;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_120 = 0;
  puVar15 = &uStack_108;
  func_0x000109cdfa74(puStack_130 + 5);
  puVar1[6] = uStack_100;
  puVar1[5] = uStack_108;
  puVar1[7] = uStack_f8;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_108 = 0;
  puStack_b0 = puVar15;
  FUN_109cd42a0(&puStack_b0);
  puStack_b0 = puVar16;
  func_0x000109cd4310(&puStack_b0);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = CONCAT44(uStack_100._4_4_,0x3f800000);
  uStack_a8 = 0;
  puStack_b0 = (ulong *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3f800000;
  puVar12 = (ulong *)(puVar1[9] + 0x68);
  uVar14 = *puVar12;
  if ((uVar14 & 1) != 0) {
    puVar12 = (ulong *)(uVar14 + 7);
  }
  iVar17 = *(int *)(puVar1[9] + 0x70);
  if (iVar17 != 0) {
    puStack_128 = puVar12 + iVar17;
    do {
      uVar18 = *puVar12;
      uVar14 = *(ulong *)(uVar18 + 0x18);
      puVar16 = (ulong *)(uVar18 + 0x18);
      if ((uVar14 & 1) != 0) {
        puVar16 = (ulong *)(uVar14 + 7);
      }
      if (*(int *)(uVar18 + 0x20) != 0) {
        lVar11 = (long)*(int *)(uVar18 + 0x20) << 3;
        do {
          uVar14 = *puVar16;
          ppuVar7 = &puStack_b0;
          FUN_109ce5028(ppuVar7,uVar14);
          if (ppuVar7 != (ulong **)0x0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (uVar14,ppuVar7 + 5);
          }
          puVar16 = puVar16 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      uVar14 = *(ulong *)(uVar18 + 0x30);
      puVar16 = (ulong *)(uVar18 + 0x30);
      if ((uVar14 & 1) != 0) {
        puVar16 = (ulong *)(uVar14 + 7);
      }
      if (*(int *)(uVar18 + 0x38) != 0) {
        puVar1 = puVar16 + *(int *)(uVar18 + 0x38);
        do {
          plVar6 = (long *)*puVar16;
          puVar8 = &uStack_120;
          func_0x0001067e045c(puVar8,plVar6);
          if (puVar8 != (ulong *)0x0) {
            if (*(char *)((long)plVar6 + 0x17) < '\0') {
              func_0x000107c3192c(&pppuStack_d0,*plVar6,plVar6[1]);
            }
            else {
              uStack_c8 = plVar6[1];
              pppuStack_d0 = (undefined8 ***)*plVar6;
              uStack_c0 = plVar6[2];
            }
            iVar17 = 0;
            do {
              __ZNSt3__19to_stringEi(alStack_e8,iVar17);
              uVar14 = uStack_c8;
              ppppuVar5 = (undefined8 ****)pppuStack_d0;
              if (-1 < (long)uStack_c0) {
                uVar14 = uStack_c0 >> 0x38;
                ppppuVar5 = &pppuStack_d0;
              }
              plVar9 = alStack_e8;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                        (plVar9,0,ppppuVar5,uVar14);
              puVar15 = (ulong *)*plVar9;
              uStack_88 = (undefined7)plVar9[1];
              uStack_81 = (undefined1)*(undefined8 *)((long)plVar9 + 0xf);
              uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)plVar9 + 0xf) >> 8);
              uVar2 = *(undefined1 *)((long)plVar9 + 0x17);
              plVar9[1] = 0;
              plVar9[2] = 0;
              *plVar9 = 0;
              if (*(char *)((long)plVar6 + 0x17) < '\0') {
                __ZdlPv(*plVar6);
              }
              *plVar6 = (long)puVar15;
              plVar6[1] = CONCAT17(uStack_81,uStack_88);
              *(ulong *)((long)plVar6 + 0xf) = CONCAT71(uStack_80,uStack_81);
              *(undefined1 *)((long)plVar6 + 0x17) = uVar2;
              if (cStack_d1 < '\0') {
                __ZdlPv(alStack_e8[0]);
              }
              puVar8 = &uStack_120;
              func_0x0001067e045c(puVar8,plVar6);
              iVar17 = iVar17 + 1;
            } while (puVar8 != (ulong *)0x0);
            FUN_109d003fc(&puStack_b0,&pppuStack_d0,&pppuStack_d0,plVar6);
            if (*(int *)(uVar18 + 0x38) == 1) {
              *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) | 1;
              uVar14 = *(ulong *)(uVar18 + 0x48);
              if (uVar14 == 0) {
                uVar14 = *(ulong *)(uVar18 + 8);
                if ((uVar14 & 1) != 0) {
                  uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
                }
                func_0x000109c0fb5c();
                *(ulong *)(uVar18 + 0x48) = uVar14;
              }
              *(uint *)(uVar14 + 0x10) = *(uint *)(uVar14 + 0x10) | 1;
              puVar10 = *(undefined8 **)(uVar14 + 8);
              if (((ulong)puVar10 & 1) != 0) {
                puVar10 = *(undefined8 **)((ulong)puVar10 & 0xfffffffffffffffe);
              }
              if (((uint)*(undefined8 *)(uVar14 + 0xf8) >> 1 & 1) == 0) {
                if (puVar10 == (undefined8 *)0x0) {
                  puVar10 = (undefined8 *)0x18;
                  __Znwm();
                  uVar13 = 2;
                }
                else {
                  func_0x00010b4d80a4();
                  uVar13 = 3;
                }
                *puVar10 = 0;
                puVar10[1] = 0;
                puVar10[2] = 0;
                *(ulong *)(uVar14 + 0xf8) = uVar13 | (ulong)puVar10;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            }
            if ((long)uStack_c0 < 0) {
              __ZdlPv(pppuStack_d0);
            }
          }
          func_0x000107c2827c(&uStack_120,plVar6,plVar6);
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar1);
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puStack_128);
  }
  func_0x000104c4f944(&puStack_b0);
  puVar12 = &uStack_120;
  func_0x000107c2826c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puStack_130;
  }
  ___stack_chk_fail();
  func_0x000109d001a8(puStack_140);
  FUN_109cfb208(puStack_138);
  FUN_109d00d24(puStack_130);
  __Unwind_Resume();
  pcStack_148 = FUN_109cfba64;
  puStack_160 = puVar16;
  puStack_158 = puVar15;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000109d001a8(puVar12 + 0xb);
  FUN_109cfb208(puVar12 + 9);
  puStack_168 = puVar12 + 5;
  *puVar12 = (ulong)&PTR_DAT_110b3e3c8;
  FUN_109cd42a0(&puStack_168);
  puStack_168 = puVar12 + 2;
  func_0x000109cd4310(&puStack_168);
  return puVar12;
}



/* Entry: 109cfba64; end: 109cfbb2b;  */

undefined8 * FUN_109cfba64(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  FUN_109d001a8(param_1 + 0xb);
  FUN_109cfb208(param_1 + 9);
  puStack_28 = param_1 + 5;
  *param_1 = &PTR_DAT_110b3e3c8;
  FUN_109cd42a0(&puStack_28);
  puStack_28 = param_1 + 2;
  func_0x000109cd4310(&puStack_28);
  return param_1;
}



/* Entry: 109cfbb2c; end: 109cfbda7;  */

void FUN_109cfbb2c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  char cStack_59;
  long *plStack_58;
  
  FUN_109cd3a7c(&lStack_a0,param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x48);
  if (0 < *(int *)(lVar4 + 0xa0)) {
    func_0x0001053936e4(lVar4 + 0x98);
    lVar4 = *(long *)(param_1 + 0x48);
  }
  if (0 < *(int *)(lVar4 + 0x58)) {
    func_0x00010598fd84(lVar4 + 0x50);
    lVar4 = *(long *)(param_1 + 0x48);
  }
  *(undefined4 *)(lVar4 + 0x18) = 0;
  lVar5 = lStack_a0;
  if (lStack_a0 != lStack_98) {
    do {
      lVar4 = *(long *)(param_1 + 0x48) + 0x98;
      func_0x000107c303b0(lVar4,&UNK_109c0fb98);
      FUN_109cfbda8(lVar5,lVar4);
      func_0x000107c303b4(*(long *)(param_1 + 0x48) + 0x50);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      lVar7 = *(long *)(param_1 + 0x48);
      uVar1 = *(undefined4 *)(lVar5 + 0x24);
      piVar6 = (int *)(lVar7 + 0x18);
      iVar2 = *piVar6;
      iVar3 = *(int *)(lVar7 + 0x1c);
      lVar4 = lVar7;
      if (iVar2 == iVar3) {
        func_0x000107c282d8(piVar6,iVar3,iVar3 + 1);
        iVar2 = *piVar6;
        lVar4 = *(long *)(param_1 + 0x48);
      }
      *(int *)(lVar7 + 0x18) = iVar2 + 1;
      *(undefined4 *)(*(long *)(lVar7 + 0x20) + (long)iVar2 * 4) = uVar1;
      uVar1 = *(undefined4 *)(lVar5 + 0x20);
      piVar6 = (int *)(lVar4 + 0x18);
      iVar3 = *piVar6;
      iVar2 = *(int *)(lVar4 + 0x1c);
      lVar7 = lVar4;
      if (iVar3 == iVar2) {
        func_0x000107c282d8(piVar6,iVar2,iVar2 + 1);
        iVar3 = *piVar6;
        lVar7 = *(long *)(param_1 + 0x48);
      }
      *(int *)(lVar4 + 0x18) = iVar3 + 1;
      *(undefined4 *)(*(long *)(lVar4 + 0x20) + (long)iVar3 * 4) = uVar1;
      uVar1 = *(undefined4 *)(lVar5 + 0x1c);
      piVar6 = (int *)(lVar7 + 0x18);
      iVar3 = *piVar6;
      iVar2 = *(int *)(lVar7 + 0x1c);
      lVar4 = lVar7;
      if (iVar3 == iVar2) {
        func_0x000107c282d8(piVar6,iVar2,iVar2 + 1);
        iVar3 = *piVar6;
        lVar4 = *(long *)(param_1 + 0x48);
      }
      *(int *)(lVar7 + 0x18) = iVar3 + 1;
      *(undefined4 *)(*(long *)(lVar7 + 0x20) + (long)iVar3 * 4) = uVar1;
      uVar1 = *(undefined4 *)(lVar5 + 0x18);
      piVar6 = (int *)(lVar4 + 0x18);
      iVar3 = *piVar6;
      iVar2 = *(int *)(lVar4 + 0x1c);
      if (iVar3 == iVar2) {
        func_0x000107c282d8(piVar6,iVar2,iVar2 + 1);
        iVar3 = *piVar6;
      }
      *(int *)(lVar4 + 0x18) = iVar3 + 1;
      *(undefined4 *)(*(long *)(lVar4 + 0x20) + (long)iVar3 * 4) = uVar1;
      lVar5 = lVar5 + 0x58;
    } while (lVar5 != lStack_98);
    lVar4 = *(long *)(param_1 + 0x48);
  }
  if (0 < *(int *)(lVar4 + 0xb8)) {
    func_0x0001053936e4(lVar4 + 0xb0);
  }
  for (; lStack_88 != uStack_80; lStack_88 = lStack_88 + 0x58) {
    lVar4 = *(long *)(param_1 + 0x48) + 0xb0;
    func_0x000107c303b0(lVar4,&UNK_109c0fb98);
    FUN_109cfbda8(lStack_88,lVar4);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(uStack_70);
  }
  plStack_58 = &lStack_88;
  func_0x000109378cec(&plStack_58);
  plStack_58 = &lStack_a0;
  func_0x000109378cec(&plStack_58);
  return;
}



/* Entry: 109cfbda8; end: 109cfc077;  */

void FUN_109cfbda8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  long *plVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  undefined **appuStack_3f8 [2];
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined1 auStack_3d8 [56];
  undefined8 uStack_3a0;
  char cStack_389;
  undefined **appuStack_378 [19];
  undefined **ppuStack_2b0;
  undefined1 auStack_2a8 [24];
  uint auStack_290 [96];
  undefined **appuStack_110 [19];
  long lStack_78;
  undefined8 uStack_40;
  undefined4 *puStack_38;
  
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  uVar8 = *(ulong *)(param_2 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(param_2 + 0x28,param_1,uVar8);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  uVar8 = *(ulong *)(param_2 + 0x30);
  if (uVar8 == 0) {
    uVar8 = *(ulong *)(param_2 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    func_0x000109c0fa34();
    *(ulong *)(param_2 + 0x30) = uVar8;
  }
  uVar10 = 0;
  *(undefined4 *)(uVar8 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  uVar14 = *(uint *)(uVar8 + 0x10);
  *(uint *)(uVar8 + 0x10) = uVar14 | 8;
  *(undefined4 *)(uVar8 + 0x18) = *(undefined4 *)(param_1 + 0x20);
  *(uint *)(uVar8 + 0x10) = uVar14 | 9;
  *(undefined4 *)(uVar8 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  *(uint *)(uVar8 + 0x10) = uVar14 | 0xd;
  *(undefined4 *)(uVar8 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(uint *)(uVar8 + 0x10) = uVar14 | 0xf;
  piVar16 = (int *)&UNK_10e03fe34;
  while( true ) {
    for (; piVar17 = (int *)(&UNK_10e03fdbc + uVar10 * 8), *piVar17 < *(int *)(param_1 + 0x28);
        uVar10 = uVar10 * 2 + 2) {
      piVar17 = piVar16;
      if (6 < uVar10) goto LAB_109cfbeb0;
    }
    if (6 < uVar10) break;
    uVar10 = uVar10 << 1 | 1;
    piVar16 = piVar17;
  }
LAB_109cfbeb0:
  if ((piVar17 != (int *)&UNK_10e03fe34) && (*piVar17 <= *(int *)(param_1 + 0x28))) {
    *(int *)(param_2 + 0x38) = piVar17[1];
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
    if (*(char *)(param_1 + 0x50) == '\x01') {
      puVar21 = *(undefined4 **)(param_1 + 0x38);
      puVar13 = *(undefined4 **)(param_1 + 0x40);
      uVar8 = (ulong)((long)puVar13 - (long)puVar21) >> 2;
      uStack_40 = 0;
      puStack_38 = (undefined4 *)0x0;
      iVar18 = (int)uVar8;
      if (iVar18 < 1) {
        lVar11 = 0;
        iVar9 = 0;
      }
      else {
        func_0x000107c282d8(&uStack_40,0,uVar8);
        lVar11 = (long)(int)uStack_40;
        iVar9 = uStack_40._4_4_;
      }
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar18);
      if (puVar21 != puVar13) {
        puVar12 = puStack_38 + lVar11;
        do {
          puVar19 = puVar21 + 1;
          *puVar12 = *puVar21;
          puVar12 = puVar12 + 1;
          puVar21 = puVar19;
        } while (puVar19 != puVar13);
      }
      piVar16 = (int *)(param_2 + 0x18);
      if (piVar16 != (int *)&uStack_40) {
        plVar1 = (long *)(param_2 + 0x20);
        plVar15 = plVar1;
        if (*(int *)(param_2 + 0x1c) != 0) {
          plVar15 = (long *)(*plVar1 + -8);
        }
        plVar2 = (long *)((ulong)&uStack_40 | 8);
        if (iVar9 != 0) {
          plVar2 = (long *)(puStack_38 + -2);
        }
        if (*plVar15 == *plVar2) {
          puVar21 = *(undefined4 **)(param_2 + 0x20);
          uVar20 = *(undefined8 *)piVar16;
          *(undefined4 **)(param_2 + 0x20) = puStack_38;
          *(undefined8 *)piVar16 = uStack_40;
          uStack_40 = uVar20;
          puStack_38 = puVar21;
        }
        else {
          *piVar16 = 0;
          if (iVar18 != 0) {
            if (*(int *)(param_2 + 0x1c) < iVar18) {
              func_0x000107c282d8(piVar16,0,uVar8);
              lVar11 = (long)*piVar16;
              uVar8 = (ulong)(uint)(*piVar16 + iVar18);
            }
            else {
              lVar11 = 0;
            }
            *piVar16 = (int)uVar8;
            if (0 < iVar18) {
              uVar14 = iVar18 + 1;
              puVar21 = puStack_38;
              puVar13 = (undefined4 *)(*plVar1 + lVar11 * 4);
              do {
                *puVar13 = *puVar21;
                uVar14 = uVar14 - 1;
                puVar21 = puVar21 + 1;
                puVar13 = puVar13 + 1;
              } while (1 < uVar14);
            }
          }
        }
      }
      if ((0 < uStack_40._4_4_) && (*(long *)(puStack_38 + -2) == 0)) {
        __ZdlPv();
      }
    }
    return;
  }
  puVar4 = &UNK_10f5ab3a4;
  puVar6 = puVar4;
  func_0x00010952d0c4(&UNK_10f5ab3a4,&UNK_10f5ab3a4,&UNK_10f5ab3b9);
  func_0x000104bd46a0();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d14f44(&ppuStack_2b0,puVar6,4);
  uVar14 = *(uint *)((long)auStack_290 + (long)ppuStack_2b0[-3]);
  if ((uVar14 & 5) == 0) {
    func_0x00010b4d16a0(*(undefined8 *)(puVar4 + 0x48),&ppuStack_2b0);
    uVar14 = *(uint *)((long)auStack_290 + (long)ppuStack_2b0[-3]);
  }
  if ((uVar14 & 5) != 0) {
    FUN_109d00278(&UNK_10e03fd10,&UNK_10f5ab081,puVar6);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109cfc188);
    (*pcVar3)();
  }
  ppuStack_2b0 = &PTR_DAT_11087cb40;
  appuStack_110[0] = &PTR_DAT_11087cb68;
  func_0x000107c28018(auStack_2a8);
  ppuVar7 = &PTR_PTR_11087cb80;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_2b0,&PTR_PTR_11087cb80);
  pppuVar5 = appuStack_110;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    func_0x000107c28010(&ppuStack_2b0);
    __Unwind_Resume();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(ppuVar7,&UNK_10e040e24,4);
    func_0x0001092a988c(appuStack_3f8);
    func_0x00010b4d16a0(pppuVar5[9],&ppuStack_3e8);
    FUN_109d15960(appuStack_3f8,ppuVar7);
    appuStack_3f8[0] = &PTR_SUB_1108a5a38;
    ppuStack_3e8 = &PTR_DAT_1108a5a60;
    appuStack_378[0] = &PTR_DAT_1108a5a88;
    ppuStack_3e0 = &PTR_DAT_11088d7b0;
    if (cStack_389 < '\0') {
      __ZdlPv(uStack_3a0);
    }
    ppuStack_3e0 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_3d8);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_3f8,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_378);
    return;
  }
  return;
}



/* Entry: 109cfc078; end: 109cfc1ab;  */

void FUN_109cfc078(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  uint uVar4;
  undefined **appuStack_3b8 [2];
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined1 auStack_398 [56];
  undefined8 uStack_360;
  char cStack_349;
  undefined **appuStack_338 [19];
  undefined **ppuStack_270;
  undefined1 auStack_268 [24];
  uint auStack_250 [96];
  undefined **appuStack_d0 [19];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d14f44(&ppuStack_270,param_2,4);
  uVar4 = *(uint *)((long)auStack_250 + (long)ppuStack_270[-3]);
  if ((uVar4 & 5) == 0) {
    func_0x00010b4d16a0(*(undefined8 *)(param_1 + 0x48),&ppuStack_270);
    uVar4 = *(uint *)((long)auStack_250 + (long)ppuStack_270[-3]);
  }
  if ((uVar4 & 5) == 0) {
    ppuStack_270 = &PTR_DAT_11087cb40;
    appuStack_d0[0] = &PTR_DAT_11087cb68;
    func_0x000107c28018(auStack_268);
    ppuVar3 = &PTR_PTR_11087cb80;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_270,&PTR_PTR_11087cb80);
    pppuVar2 = appuStack_d0;
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c28010(&ppuStack_270);
    __Unwind_Resume();
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(ppuVar3,&UNK_10e040e24,4);
    func_0x0001092a988c(appuStack_3b8);
    func_0x00010b4d16a0(pppuVar2[9],&ppuStack_3a8);
    FUN_109d15960(appuStack_3b8,ppuVar3);
    appuStack_3b8[0] = &PTR_SUB_1108a5a38;
    ppuStack_3a8 = &PTR_DAT_1108a5a60;
    appuStack_338[0] = &PTR_DAT_1108a5a88;
    ppuStack_3a0 = &PTR_DAT_11088d7b0;
    if (cStack_349 < '\0') {
      __ZdlPv(uStack_360);
    }
    ppuStack_3a0 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_398);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_3b8,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_338);
    return;
  }
  FUN_109d00278(&UNK_10e03fd10,&UNK_10f5ab081,param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109cfc188);
  (*pcVar1)();
}



/* Entry: 109cfc1ac; end: 109cfc2a3;  */

void FUN_109cfc1ac(long param_1,undefined8 param_2)

{
  undefined **appuStack_148 [2];
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(param_2,&UNK_10e040e24,4);
  func_0x0001092a988c(appuStack_148);
  func_0x00010b4d16a0(*(undefined8 *)(param_1 + 0x48),&ppuStack_138);
  FUN_109d15960(appuStack_148,param_2);
  appuStack_148[0] = &PTR_SUB_1108a5a38;
  ppuStack_138 = &PTR_DAT_1108a5a60;
  appuStack_c8[0] = &PTR_DAT_1108a5a88;
  ppuStack_130 = &PTR_DAT_11088d7b0;
  if (cStack_d9 < '\0') {
    __ZdlPv(uStack_f0);
  }
  ppuStack_130 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_128);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_148,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_c8);
  return;
}



/* Entry: 109cfc2a4; end: 109cfc333;  */

void FUN_109cfc2a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(lVar1 + 0xe0) = param_2;
  *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 8;
  return;
}



/* Entry: 109cfc334; end: 109cfc403;  */

void FUN_109cfc334(undefined8 *param_1,long param_2,int param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  
  puVar7 = (ulong *)(*(long *)(param_2 + 0x48) + 0x68);
  uVar9 = *puVar7;
  if ((uVar9 & 1) != 0) {
    puVar7 = (ulong *)(uVar9 + (long)param_3 * 8 + 7);
  }
  uVar9 = *puVar7;
  ppuVar8 = *(undefined ***)(uVar9 + 0x48);
  ppuVar1 = &PTR_PTR_1132eca28;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar1 = ppuVar8;
  }
  puVar4 = (undefined4 *)((ulong)ppuVar1[0x20] & 0xfffffffffffffffc);
  FUN_109ce6364();
  uVar2 = *puVar4;
  uVar3 = *(undefined1 *)(param_2 + 8);
  puVar5 = (undefined8 *)0x18;
  __Znwm();
  *(undefined4 *)(puVar5 + 1) = uVar2;
  *(undefined1 *)((long)puVar5 + 0xc) = uVar3;
  *puVar5 = &PTR_FUN_110b3d078;
  *(undefined1 *)((long)puVar5 + 0xd) = 0;
  puVar5[2] = uVar9;
  *param_1 = puVar5;
  puVar6 = (undefined8 *)0x20;
  __Znwm();
  *puVar6 = &PTR_FUN_110b3e328;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = puVar5;
  param_1[1] = puVar6;
  return;
}



/* Entry: 109cfc404; end: 109cfc5db;  */

void FUN_109cfc404(long param_1,long *param_2,undefined8 param_3,undefined *param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  long *plVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  ulong *puVar22;
  long lVar23;
  ulong *puVar24;
  ulong *unaff_x23;
  long lVar25;
  ulong *puVar26;
  ulong *puVar27;
  undefined1 auStack_140 [24];
  long alStack_128 [3];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  
  lVar23 = *param_2;
  lVar7 = *(long *)(lVar23 + 0x10);
  if (lVar7 == 0) {
    puVar9 = (ulong *)&UNK_10e03f766;
    puVar12 = &UNK_10f5aa42b;
    puVar14 = &UNK_10f5aa439;
  }
  else {
    param_4 = (undefined *)0x0;
    ___dynamic_cast(lVar7,&PTR_DAT_11087fc08,&PTR_DAT_110b2bd50);
    lVar8 = *(long *)(param_1 + 0x48) + 0x68;
    func_0x000107c303b0(lVar8,&UNK_109c0fbf8);
    if (*(int *)(lVar7 + 0x20) != 0) {
      lVar25 = (long)*(int *)(lVar7 + 0x20) << 3;
      do {
        func_0x000107c303b4(lVar8 + 0x18);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        lVar25 = lVar25 + -8;
      } while (lVar25 != 0);
    }
    uVar19 = *(ulong *)(lVar7 + 0x30);
    unaff_x23 = (ulong *)(lVar7 + 0x30);
    if ((uVar19 & 1) != 0) {
      unaff_x23 = (ulong *)(uVar19 + 7);
    }
    if (*(int *)(lVar7 + 0x38) != 0) {
      lVar25 = (long)*(int *)(lVar7 + 0x38) << 3;
      do {
        unaff_x23 = unaff_x23 + 1;
        func_0x000107c303b4(lVar8 + 0x30);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        lVar25 = lVar25 + -8;
      } while (lVar25 != 0);
    }
    *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 1;
    uVar19 = *(ulong *)(lVar7 + 0x48);
    if (uVar19 == 0) {
      uVar19 = *(ulong *)(lVar7 + 8);
      if ((uVar19 & 1) != 0) {
        uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
      }
      func_0x000109c0fb5c();
      *(ulong *)(lVar7 + 0x48) = uVar19;
    }
    uVar20 = *(ulong *)(lVar8 + 8);
    if ((uVar20 & 1) != 0) {
      uVar20 = *(ulong *)(uVar20 & 0xfffffffffffffffe);
    }
    if ((uVar20 == 0) && (*(long *)(lVar8 + 0x48) != 0)) {
      func_0x000109c0877c();
      __ZdlPv();
    }
    if (uVar19 == 0) {
      uVar15 = *(uint *)(lVar8 + 0x10) & 0xfffffffe;
    }
    else {
      uVar13 = *(ulong *)(uVar19 + 8);
      if ((uVar13 & 1) != 0) {
        uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
      }
      if (uVar20 != uVar13) {
        func_0x00010b4cf42c(uVar20,uVar19);
        uVar19 = uVar20;
      }
      uVar15 = *(uint *)(lVar8 + 0x10) | 1;
    }
    *(uint *)(lVar8 + 0x10) = uVar15;
    *(ulong *)(lVar8 + 0x48) = uVar19;
    if ((*(byte *)(lVar23 + 0xd) & 1) != 0) {
      *(undefined1 *)(lVar23 + 0xd) = 0;
      return;
    }
    puVar9 = (ulong *)&UNK_10e03eb43;
    puVar12 = &UNK_10f5a9c25;
    puVar14 = &UNK_10f5a9c3a;
  }
  func_0x00010952d0c4();
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[3] = 0;
  puVar9[2] = 0;
  *(undefined4 *)(puVar9 + 4) = 0x3f800000;
  for (; puVar14 != param_4; puVar14 = puVar14 + 0x58) {
    FUN_109cf9cd0(puVar9,puVar14);
  }
  if (0 < *(int *)(*(long *)(puVar12 + 0x48) + 0x70)) {
    iVar21 = 0;
    puVar1 = puVar9 + 2;
    do {
      FUN_109cfc334(&lStack_d0,puVar12,iVar21);
      plVar11 = plStack_c8;
      lVar7 = lStack_d0;
      lStack_e0 = lStack_d0;
      plStack_d8 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar16 = plStack_c8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar23 = *(long *)(lStack_d0 + 0x10);
      if (lVar23 == 0) {
        func_0x00010952d0c4(&UNK_10e03f766,&UNK_10f5aa42b,&UNK_10f5aa439);
LAB_109cfcc04:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109cfcc08);
        (*pcVar6)();
      }
      ___dynamic_cast(lVar23,&PTR_DAT_11087fc08,&PTR_DAT_110b2bd50,0);
      lStack_f8 = 0;
      lStack_f0 = 0;
      uStack_e8 = 0;
      FUN_109ced9f4(&lStack_f8,(long)*(int *)(lVar23 + 0x20));
      uVar19 = *(ulong *)(lVar23 + 0x18);
      puVar27 = (ulong *)(lVar23 + 0x18);
      if ((uVar19 & 1) != 0) {
        puVar27 = (ulong *)(uVar19 + 7);
      }
      if (*(int *)(lVar23 + 0x20) != 0) {
        puVar10 = puVar27 + *(int *)(lVar23 + 0x20);
LAB_109cfc6f4:
        uVar19 = *puVar27;
        puVar22 = puVar9;
        func_0x000107c31944(puVar9,uVar19);
        puVar24 = (ulong *)puVar9[1];
        if (puVar24 != (ulong *)0x0) {
          unaff_x23 = (ulong *)((long)puVar24 + -1);
          if (((ulong)puVar24 & (ulong)unaff_x23) == 0) {
            puVar26 = (ulong *)((ulong)unaff_x23 & (ulong)puVar22);
          }
          else {
            puVar26 = puVar22;
            if (puVar24 <= puVar22) {
              uVar20 = 0;
              if (puVar24 != (ulong *)0x0) {
                uVar20 = (ulong)puVar22 / (ulong)puVar24;
              }
              puVar26 = (ulong *)((long)puVar22 - uVar20 * (long)puVar24);
            }
          }
          plVar16 = *(long **)(*puVar9 + (long)puVar26 * 8);
          if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
            do {
              puVar17 = (ulong *)plVar16[1];
              if (puVar17 == puVar22) {
                puVar17 = puVar9;
                func_0x000104c4fbc4(puVar9,plVar16 + 2,uVar19);
                if (((ulong)puVar17 & 1) != 0) goto LAB_109cfc7a4;
              }
              else {
                if (((ulong)puVar24 & (ulong)unaff_x23) == 0) {
                  puVar17 = (ulong *)((ulong)puVar17 & (ulong)unaff_x23);
                }
                else if (puVar24 <= puVar17) {
                  uVar20 = 0;
                  if (puVar24 != (ulong *)0x0) {
                    uVar20 = (ulong)puVar17 / (ulong)puVar24;
                  }
                  puVar17 = (ulong *)((long)puVar17 - uVar20 * (long)puVar24);
                }
                if (puVar17 != puVar26) break;
              }
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) break;
            } while( true );
          }
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_140,&UNK_10f5ab09f,uVar19);
        func_0x000109259240(alStack_128,auStack_140,&UNK_10f5ab0af);
        ppuVar2 = &PTR_PTR_1132eca28;
        if (*(undefined ***)(lVar23 + 0x48) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(lVar23 + 0x48);
        }
        puVar18 = (undefined8 *)((ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
        uVar19 = puVar18[1];
        puVar5 = (undefined8 *)*puVar18;
        if (-1 < (char)*(byte *)((long)puVar18 + 0x17)) {
          uVar19 = (ulong)*(byte *)((long)puVar18 + 0x17);
          puVar5 = puVar18;
        }
        plVar11 = alStack_128;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar11,puVar5,uVar19);
        lStack_108 = plVar11[1];
        lStack_110 = *plVar11;
        lStack_100 = plVar11[2];
        plVar11[1] = 0;
        plVar11[2] = 0;
        *plVar11 = 0;
        func_0x000109259240(&puStack_c0,&lStack_110,&DAT_10f638984);
        FUN_109cd8934(&puStack_c0);
        goto LAB_109cfcc04;
      }
LAB_109cfc7bc:
      FUN_109d014cc(&lStack_110,lVar7,&lStack_f8,1);
      if (*(int *)(lVar23 + 0x38) != (int)((ulong)(lStack_108 - lStack_110) >> 4)) {
        ppuVar2 = &PTR_PTR_1132eca28;
        if (*(undefined ***)(lVar23 + 0x48) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(lVar23 + 0x48);
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_128,&UNK_10f5ab0c3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(&puStack_c0,alStack_128,&DAT_10f638984);
        FUN_109cd8934(&puStack_c0);
        goto LAB_109cfcc04;
      }
      if (0 < *(int *)(lVar23 + 0x38)) {
        lVar7 = 0;
        do {
          lVar8 = lStack_110;
          uVar19 = *(ulong *)(lVar23 + 0x30);
          puVar27 = (ulong *)(lVar23 + 0x30);
          if ((uVar19 & 1) != 0) {
            puVar27 = (ulong *)(uVar19 + lVar7 * 8 + 7);
          }
          puVar27 = (ulong *)*puVar27;
          puVar10 = puVar9;
          func_0x000107c31944(puVar9,puVar27);
          puVar22 = (ulong *)puVar9[1];
          if (puVar22 != (ulong *)0x0) {
            uVar19 = (long)puVar22 - 1;
            if (((ulong)puVar22 & uVar19) == 0) {
              unaff_x23 = (ulong *)(uVar19 & (ulong)puVar10);
            }
            else {
              unaff_x23 = puVar10;
              if (puVar22 <= puVar10) {
                uVar20 = 0;
                if (puVar22 != (ulong *)0x0) {
                  uVar20 = (ulong)puVar10 / (ulong)puVar22;
                }
                unaff_x23 = (ulong *)((long)puVar10 - uVar20 * (long)puVar22);
              }
            }
            plVar16 = *(long **)(*puVar9 + (long)unaff_x23 * 8);
            if (plVar16 != (long *)0x0) {
              for (plVar16 = (long *)*plVar16; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
                puVar24 = (ulong *)plVar16[1];
                if (puVar24 == puVar10) {
                  puVar24 = puVar9;
                  func_0x000104c4fbc4(puVar9,plVar16 + 2,puVar27);
                  if (((ulong)puVar24 & 1) != 0) goto LAB_109cfca18;
                }
                else {
                  if (((ulong)puVar22 & uVar19) == 0) {
                    puVar24 = (ulong *)((ulong)puVar24 & uVar19);
                  }
                  else if (puVar22 <= puVar24) {
                    uVar20 = 0;
                    if (puVar22 != (ulong *)0x0) {
                      uVar20 = (ulong)puVar24 / (ulong)puVar22;
                    }
                    puVar24 = (ulong *)((long)puVar24 - uVar20 * (long)puVar22);
                  }
                  if (puVar24 != unaff_x23) break;
                }
              }
            }
          }
          puVar24 = (ulong *)0x38;
          __Znwm();
          uStack_b0 = 0;
          *puVar24 = 0;
          puVar24[1] = (ulong)puVar10;
          puStack_c0 = puVar24;
          puStack_b8 = puVar9;
          if (*(char *)((long)puVar27 + 0x17) < '\0') {
            func_0x000107c3192c(puVar24 + 2,*puVar27,puVar27[1]);
          }
          else {
            uVar20 = puVar27[1];
            uVar19 = *puVar27;
            puVar24[4] = puVar27[2];
            puVar24[3] = uVar20;
            puVar24[2] = uVar19;
          }
          puVar27 = (ulong *)(lVar8 + lVar7 * 0x10);
          uVar19 = *puVar27;
          puVar24[6] = puVar27[1];
          puVar24[5] = uVar19;
          uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
          if ((puVar22 == (ulong *)0x0) ||
             (*(float *)(puVar9 + 4) * (float)puVar22 < (float)(puVar9[3] + 1))) {
            uVar19 = 1;
            if ((ulong *)0x2 < puVar22) {
              uVar19 = (ulong)(((ulong)puVar22 & (long)puVar22 - 1U) != 0);
            }
            uVar19 = uVar19 | (long)puVar22 << 1;
            uVar20 = (ulong)((float)(puVar9[3] + 1) / *(float *)(puVar9 + 4));
            if (uVar19 <= uVar20) {
              uVar19 = uVar20;
            }
            func_0x0001094a8d40(puVar9,uVar19);
            puVar22 = (ulong *)puVar9[1];
            if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
              unaff_x23 = (ulong *)((long)puVar22 - 1U & (ulong)puVar10);
            }
            else {
              unaff_x23 = puVar10;
              if (puVar22 <= puVar10) {
                uVar19 = 0;
                if (puVar22 != (ulong *)0x0) {
                  uVar19 = (ulong)puVar10 / (ulong)puVar22;
                }
                unaff_x23 = (ulong *)((long)puVar10 - uVar19 * (long)puVar22);
              }
            }
          }
          uVar19 = *puVar9;
          puVar27 = *(ulong **)(uVar19 + (long)unaff_x23 * 8);
          if (puVar27 == (ulong *)0x0) {
            *puStack_c0 = *puVar1;
            *puVar1 = (ulong)puStack_c0;
            *(ulong **)(uVar19 + (long)unaff_x23 * 8) = puVar1;
            if (*puStack_c0 != 0) {
              puVar27 = *(ulong **)(*puStack_c0 + 8);
              if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
                puVar27 = (ulong *)((ulong)puVar27 & (long)puVar22 - 1U);
              }
              else if (puVar22 <= puVar27) {
                uVar19 = 0;
                if (puVar22 != (ulong *)0x0) {
                  uVar19 = (ulong)puVar27 / (ulong)puVar22;
                }
                puVar27 = (ulong *)((long)puVar27 - uVar19 * (long)puVar22);
              }
              *(ulong **)(*puVar9 + (long)puVar27 * 8) = puStack_c0;
            }
          }
          else {
            *puStack_c0 = *puVar27;
            *puVar27 = (ulong)puStack_c0;
          }
          puVar9[3] = puVar9[3] + 1;
LAB_109cfca18:
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(lVar23 + 0x38));
      }
      if (lStack_110 != 0) {
        lStack_108 = lStack_110;
        __ZdlPv();
      }
      if (lStack_f8 != 0) {
        lStack_f0 = lStack_f8;
        __ZdlPv();
      }
      if (plVar11 != (long *)0x0) {
        plVar16 = plVar11 + 1;
        do {
          lVar7 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar16 = plStack_c8 + 1;
        do {
          lVar7 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < *(int *)(*(long *)(puVar12 + 0x48) + 0x70));
  }
  return;
LAB_109cfc7a4:
  func_0x000109ceda80(&lStack_f8,plVar16 + 5);
  puVar27 = puVar27 + 1;
  if (puVar27 == puVar10) goto LAB_109cfc7bc;
  goto LAB_109cfc6f4;
}



/* Entry: 109cfc5dc; end: 109cfcd3b;  */

void FUN_109cfc5dc(long *param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong *puVar17;
  long lVar18;
  int iVar19;
  long *plVar20;
  long *unaff_x23;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_100 [24];
  long alStack_e8 [3];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  for (; param_3 != param_4; param_3 = param_3 + 0x58) {
    FUN_109cf9cd0(param_1,param_3,param_3,param_3 + 0x18);
  }
  if (0 < *(int *)(*(long *)(param_2 + 0x48) + 0x70)) {
    iVar19 = 0;
    plVar9 = param_1 + 2;
    do {
      FUN_109cfc334(&lStack_90,param_2,iVar19);
      plVar6 = plStack_88;
      lVar18 = lStack_90;
      lStack_a0 = lStack_90;
      plStack_98 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar16 = plStack_88 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar8 = *(long *)(lStack_90 + 0x10);
      if (lVar8 == 0) {
        func_0x00010952d0c4(&UNK_10e03f766,&UNK_10f5aa42b,&UNK_10f5aa439);
LAB_109cfcc04:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x109cfcc08);
        (*pcVar7)();
      }
      ___dynamic_cast(lVar8,&PTR_DAT_11087fc08,&PTR_DAT_110b2bd50,0);
      lStack_b8 = 0;
      lStack_b0 = 0;
      uStack_a8 = 0;
      FUN_109ced9f4(&lStack_b8,(long)*(int *)(lVar8 + 0x20));
      uVar13 = *(ulong *)(lVar8 + 0x18);
      puVar17 = (ulong *)(lVar8 + 0x18);
      if ((uVar13 & 1) != 0) {
        puVar17 = (ulong *)(uVar13 + 7);
      }
      if (*(int *)(lVar8 + 0x20) != 0) {
        puVar1 = puVar17 + *(int *)(lVar8 + 0x20);
LAB_109cfc6f4:
        uVar13 = *puVar17;
        plVar16 = param_1;
        func_0x000107c31944(param_1,uVar13);
        plVar20 = (long *)param_1[1];
        if (plVar20 != (long *)0x0) {
          unaff_x23 = (long *)((long)plVar20 + -1);
          if (((ulong)plVar20 & (ulong)unaff_x23) == 0) {
            plVar21 = (long *)((ulong)unaff_x23 & (ulong)plVar16);
          }
          else {
            plVar21 = plVar16;
            if (plVar20 <= plVar16) {
              uVar14 = 0;
              if (plVar20 != (long *)0x0) {
                uVar14 = (ulong)plVar16 / (ulong)plVar20;
              }
              plVar21 = (long *)((long)plVar16 - uVar14 * (long)plVar20);
            }
          }
          plVar10 = *(long **)(*param_1 + (long)plVar21 * 8);
          if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
            do {
              plVar11 = (long *)plVar10[1];
              if (plVar11 == plVar16) {
                plVar11 = param_1;
                func_0x000104c4fbc4(param_1,plVar10 + 2,uVar13);
                if (((ulong)plVar11 & 1) != 0) goto LAB_109cfc7a4;
              }
              else {
                if (((ulong)plVar20 & (ulong)unaff_x23) == 0) {
                  plVar11 = (long *)((ulong)plVar11 & (ulong)unaff_x23);
                }
                else if (plVar20 <= plVar11) {
                  uVar14 = 0;
                  if (plVar20 != (long *)0x0) {
                    uVar14 = (ulong)plVar11 / (ulong)plVar20;
                  }
                  plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar20);
                }
                if (plVar11 != plVar21) break;
              }
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) break;
            } while( true );
          }
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_100,&UNK_10f5ab09f,uVar13);
        func_0x000109259240(alStack_e8,auStack_100,&UNK_10f5ab0af);
        ppuVar2 = &PTR_PTR_1132eca28;
        if (*(undefined ***)(lVar8 + 0x48) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(lVar8 + 0x48);
        }
        puVar12 = (undefined8 *)((ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
        uVar13 = puVar12[1];
        puVar5 = (undefined8 *)*puVar12;
        if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) {
          uVar13 = (ulong)*(byte *)((long)puVar12 + 0x17);
          puVar5 = puVar12;
        }
        plVar9 = alStack_e8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar9,puVar5,uVar13);
        lStack_c8 = plVar9[1];
        lStack_d0 = *plVar9;
        lStack_c0 = plVar9[2];
        plVar9[1] = 0;
        plVar9[2] = 0;
        *plVar9 = 0;
        func_0x000109259240(&plStack_80,&lStack_d0,&DAT_10f638984);
        FUN_109cd8934(&plStack_80);
        goto LAB_109cfcc04;
      }
LAB_109cfc7bc:
      FUN_109d014cc(&lStack_d0,lVar18,&lStack_b8,1);
      if (*(int *)(lVar8 + 0x38) != (int)((ulong)(lStack_c8 - lStack_d0) >> 4)) {
        ppuVar2 = &PTR_PTR_1132eca28;
        if (*(undefined ***)(lVar8 + 0x48) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(lVar8 + 0x48);
        }
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_e8,&UNK_10f5ab0c3,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
        func_0x000109259240(&plStack_80,alStack_e8,&DAT_10f638984);
        FUN_109cd8934(&plStack_80);
        goto LAB_109cfcc04;
      }
      if (0 < *(int *)(lVar8 + 0x38)) {
        lVar18 = 0;
        do {
          lVar15 = lStack_d0;
          uVar13 = *(ulong *)(lVar8 + 0x30);
          puVar17 = (ulong *)(lVar8 + 0x30);
          if ((uVar13 & 1) != 0) {
            puVar17 = (ulong *)(uVar13 + lVar18 * 8 + 7);
          }
          plVar21 = (long *)*puVar17;
          plVar16 = param_1;
          func_0x000107c31944(param_1,plVar21);
          plVar20 = (long *)param_1[1];
          if (plVar20 != (long *)0x0) {
            uVar13 = (long)plVar20 - 1;
            if (((ulong)plVar20 & uVar13) == 0) {
              unaff_x23 = (long *)(uVar13 & (ulong)plVar16);
            }
            else {
              unaff_x23 = plVar16;
              if (plVar20 <= plVar16) {
                uVar14 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar14 = (ulong)plVar16 / (ulong)plVar20;
                }
                unaff_x23 = (long *)((long)plVar16 - uVar14 * (long)plVar20);
              }
            }
            plVar10 = *(long **)(*param_1 + (long)unaff_x23 * 8);
            if (plVar10 != (long *)0x0) {
              for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
                plVar11 = (long *)plVar10[1];
                if (plVar11 == plVar16) {
                  plVar11 = param_1;
                  func_0x000104c4fbc4(param_1,plVar10 + 2,plVar21);
                  if (((ulong)plVar11 & 1) != 0) goto LAB_109cfca18;
                }
                else {
                  if (((ulong)plVar20 & uVar13) == 0) {
                    plVar11 = (long *)((ulong)plVar11 & uVar13);
                  }
                  else if (plVar20 <= plVar11) {
                    uVar14 = 0;
                    if (plVar20 != (long *)0x0) {
                      uVar14 = (ulong)plVar11 / (ulong)plVar20;
                    }
                    plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar20);
                  }
                  if (plVar11 != unaff_x23) break;
                }
              }
            }
          }
          plVar10 = (long *)0x38;
          __Znwm();
          uStack_70 = 0;
          *plVar10 = 0;
          plVar10[1] = (long)plVar16;
          plStack_80 = plVar10;
          plStack_78 = param_1;
          if (*(char *)((long)plVar21 + 0x17) < '\0') {
            func_0x000107c3192c(plVar10 + 2,*plVar21,plVar21[1]);
          }
          else {
            lVar23 = plVar21[1];
            lVar22 = *plVar21;
            plVar10[4] = plVar21[2];
            plVar10[3] = lVar23;
            plVar10[2] = lVar22;
          }
          plVar21 = (long *)(lVar15 + lVar18 * 0x10);
          lVar15 = *plVar21;
          plVar10[6] = plVar21[1];
          plVar10[5] = lVar15;
          uStack_70 = CONCAT71(uStack_70._1_7_,1);
          if ((plVar20 == (long *)0x0) ||
             (*(float *)(param_1 + 4) * (float)plVar20 < (float)(param_1[3] + 1))) {
            uVar13 = 1;
            if ((long *)0x2 < plVar20) {
              uVar13 = (ulong)(((ulong)plVar20 & (long)plVar20 - 1U) != 0);
            }
            uVar13 = uVar13 | (long)plVar20 << 1;
            uVar14 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
            if (uVar13 <= uVar14) {
              uVar13 = uVar14;
            }
            func_0x0001094a8d40(param_1,uVar13);
            plVar20 = (long *)param_1[1];
            if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
              unaff_x23 = (long *)((long)plVar20 - 1U & (ulong)plVar16);
            }
            else {
              unaff_x23 = plVar16;
              if (plVar20 <= plVar16) {
                uVar13 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar13 = (ulong)plVar16 / (ulong)plVar20;
                }
                unaff_x23 = (long *)((long)plVar16 - uVar13 * (long)plVar20);
              }
            }
          }
          lVar15 = *param_1;
          plVar16 = *(long **)(lVar15 + (long)unaff_x23 * 8);
          if (plVar16 == (long *)0x0) {
            *plStack_80 = *plVar9;
            *plVar9 = (long)plStack_80;
            *(long **)(lVar15 + (long)unaff_x23 * 8) = plVar9;
            if (*plStack_80 != 0) {
              plVar16 = *(long **)(*plStack_80 + 8);
              if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
                plVar16 = (long *)((ulong)plVar16 & (long)plVar20 - 1U);
              }
              else if (plVar20 <= plVar16) {
                uVar13 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar13 = (ulong)plVar16 / (ulong)plVar20;
                }
                plVar16 = (long *)((long)plVar16 - uVar13 * (long)plVar20);
              }
              *(long **)(*param_1 + (long)plVar16 * 8) = plStack_80;
            }
          }
          else {
            *plStack_80 = *plVar16;
            *plVar16 = (long)plStack_80;
          }
          param_1[3] = param_1[3] + 1;
LAB_109cfca18:
          lVar18 = lVar18 + 1;
        } while (lVar18 < *(int *)(lVar8 + 0x38));
      }
      if (lStack_d0 != 0) {
        lStack_c8 = lStack_d0;
        __ZdlPv();
      }
      if (lStack_b8 != 0) {
        lStack_b0 = lStack_b8;
        __ZdlPv();
      }
      if (plVar6 != (long *)0x0) {
        plVar16 = plVar6 + 1;
        do {
          lVar18 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar16 = plStack_88 + 1;
        do {
          lVar18 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < *(int *)(*(long *)(param_2 + 0x48) + 0x70));
  }
  return;
LAB_109cfc7a4:
  func_0x000109ceda80(&lStack_b8,plVar10 + 5);
  puVar17 = puVar17 + 1;
  if (puVar17 == puVar1) goto LAB_109cfc7bc;
  goto LAB_109cfc6f4;
}



/* Entry: 109cfcd3c; end: 109cfcef7;  */

void FUN_109cfcd3c(long param_1,long *param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined8 **ppuStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long alStack_98 [3];
  undefined8 uStack_80;
  char cStack_69;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_51;
  
  FUN_109cd3a7c(&puStack_b0,param_1 + 0x10);
  if ((*(byte *)(*(long *)(param_1 + 0x48) + 0x10) >> 2 & 1) != 0) {
    ppuVar1 = (undefined8 **)*param_2;
    ppuVar2 = (undefined8 **)param_2[1];
    ppuVar3 = ppuVar1;
    puVar4 = puStack_b0;
    if ((long)ppuVar2 - (long)ppuVar1 != lStack_a8 - (long)puStack_b0) {
LAB_109cfceb8:
      FUN_109cd880c(&UNK_10f5ab10f);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109cfcec8);
      (*pcVar5)();
    }
    for (; ppuVar1 != ppuVar2; ppuVar1 = ppuVar1 + 0xb) {
      plStack_d8 = (long *)(ppuVar3 + 3);
      puStack_60 = puVar4 + 3;
      puVar6 = &uStack_51;
      ppuStack_e0 = ppuVar3;
      puStack_68 = puVar4;
      FUN_109cffd20(puVar6,&ppuStack_e0,&puStack_68);
      if ((int)puVar6 == 0) goto LAB_109cfceb8;
      ppuVar3 = ppuVar3 + 0xb;
      puVar4 = puVar4 + 0xb;
    }
  }
  FUN_109cd31ac(&ppuStack_e0,param_2,alStack_98);
  FUN_109cdfa10(param_1 + 0x10);
  *(long **)(param_1 + 0x18) = plStack_d8;
  *(undefined8 ***)(param_1 + 0x10) = ppuStack_e0;
  *(undefined8 *)(param_1 + 0x20) = uStack_d0;
  plStack_d8 = (long *)0x0;
  uStack_d0 = 0;
  ppuStack_e0 = (undefined8 **)0x0;
  func_0x000109cdfa74(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uStack_c0;
  *(undefined8 *)(param_1 + 0x28) = uStack_c8;
  *(undefined8 *)(param_1 + 0x38) = uStack_b8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  puStack_68 = &uStack_c8;
  FUN_109cd42a0(&puStack_68);
  puStack_68 = &ppuStack_e0;
  func_0x000109cd4310(&puStack_68);
  FUN_109cfc5dc(&ppuStack_e0,param_1,*param_2,param_2[1]);
  FUN_109cfcef8(param_1,&ppuStack_e0);
  func_0x0001094a866c(&ppuStack_e0);
  if (cStack_69 < '\0') {
    __ZdlPv(uStack_80);
  }
  ppuStack_e0 = (undefined8 **)alStack_98;
  func_0x000109378cec(&ppuStack_e0);
  ppuStack_e0 = &puStack_b0;
  func_0x000109378cec(&ppuStack_e0);
  return;
}



/* Entry: 109cfcef8; end: 109cfd167;  */

/* WARNING: Removing unreachable block (ram,0x000109cfd820) */

void FUN_109cfcef8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *****pppppuVar4;
  long *plVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  int *piVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  ulong *puVar17;
  ulong *puVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong uVar21;
  int *piVar22;
  undefined4 *puVar23;
  uint uVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  undefined1 auStack_240 [80];
  undefined1 auStack_1f0 [80];
  undefined8 ****ppppuStack_1a0;
  long lStack_198;
  long lStack_190;
  int aiStack_188 [2];
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined1 auStack_174 [4];
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  ulong *puStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  char cStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_90;
  undefined4 uStack_88;
  long *aplStack_78 [2];
  char cStack_61;
  
  plVar28 = *(long **)(param_1 + 0x28);
  lVar19 = *(long *)(param_1 + 0x30);
joined_r0x000109cfcf28:
  lStack_c8 = param_2;
  if (plVar28 == (long *)lVar19) {
    FUN_109cfbb2c(param_1);
    return;
  }
  FUN_109cedb48(param_2,plVar28);
  if (param_2 == 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (aplStack_78,&UNK_10f5ab1d0,plVar28);
    func_0x000109259240(&uStack_c0,aplStack_78,&DAT_10f638984);
    FUN_109cd8934(&uStack_c0);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x109cfd11c);
    (*pcVar10)();
  }
  puVar17 = (ulong *)(*(long *)(param_1 + 0x48) + 0xb0);
  uVar21 = *puVar17;
  if ((uVar21 & 1) != 0) {
    puVar17 = (ulong *)(uVar21 + 7);
  }
  iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0xb8);
  if (iVar7 == 0) {
    iStack_b0 = 1;
  }
  else {
    uVar24 = (uint)(char)*(byte *)((long)plVar28 + 0x17);
    uVar21 = plVar28[1];
    if (-1 < (int)uVar24) {
      uVar21 = (ulong)*(byte *)((long)plVar28 + 0x17);
    }
    lVar29 = (long)iVar7 << 3;
    do {
      uVar27 = *puVar17;
      puVar18 = (ulong *)(*(ulong *)(uVar27 + 0x28) & 0xfffffffffffffffc);
      bVar6 = *(byte *)((long)puVar18 + 0x17);
      uVar25 = puVar18[1];
      if (-1 < (char)bVar6) {
        uVar25 = (ulong)bVar6;
      }
      if (uVar25 == uVar21) {
        puVar26 = (ulong *)*puVar18;
        if (-1 < (char)bVar6) {
          puVar26 = puVar18;
        }
        plVar5 = (long *)*plVar28;
        if (-1 < (int)uVar24) {
          plVar5 = plVar28;
        }
        _memcmp(puVar26,plVar5,uVar21);
        if ((int)puVar26 == 0) {
          uVar25 = 0;
          iVar7 = *(int *)(uVar27 + 0x38);
          piVar13 = (int *)&DAT_10e03feac;
          goto LAB_109cfd000;
        }
      }
      puVar17 = puVar17 + 1;
      lVar29 = lVar29 + -8;
    } while (lVar29 != 0);
    iStack_b0 = 1;
  }
  goto LAB_109cfd05c;
LAB_109cfd000:
  piVar22 = (int *)(&UNK_10e03fe34 + uVar25 * 8);
  if (*piVar22 < iVar7) {
    piVar22 = piVar13;
    if (6 < uVar25) goto LAB_109cfd03c;
    uVar25 = uVar25 * 2 + 2;
    goto LAB_109cfd000;
  }
  if (uVar25 < 7) {
    uVar25 = uVar25 << 1 | 1;
    piVar13 = piVar22;
    goto LAB_109cfd000;
  }
LAB_109cfd03c:
  if ((piVar22 == (int *)&DAT_10e03feac) || (iVar7 < *piVar22)) {
    puVar11 = &UNK_10f5ab3eb;
    puVar15 = puVar11;
    func_0x00010952d0c4(&UNK_10f5ab3eb,&UNK_10f5ab3eb,&UNK_10f5a35e0);
    if (cStack_a9 < '\0') {
      __ZdlPv(uStack_c0);
    }
    if (cStack_61 < '\0') {
      __ZdlPv(aplStack_78[0]);
    }
    puVar12 = puVar11;
    __Unwind_Resume();
    puStack_128 = &UNK_10e03fe34;
    uStack_f8 = 1;
    pcStack_d8 = FUN_109cfd168;
    uStack_158 = 0;
    uStack_160 = 0;
    lStack_148 = 0;
    lStack_150 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    iVar7 = *(int *)(*(long *)(puVar12 + 0x48) + 0x70);
    aiStack_188[0] = 0;
    puStack_130 = puVar17;
    uStack_120 = (ulong)uVar24;
    lStack_118 = lVar29;
    lStack_110 = lVar19;
    uStack_108 = uVar21;
    lStack_100 = param_2;
    lStack_f0 = param_1;
    puStack_e8 = puVar11;
    puStack_e0 = &stack0xfffffffffffffff0;
    if (iVar7 < 1) goto LAB_109cfd884;
    goto LAB_109cfd1b4;
  }
  iStack_b0 = piVar22[1];
LAB_109cfd05c:
  uStack_b8 = *(undefined8 *)(param_2 + 0x30);
  uStack_c0 = *(undefined8 *)(param_2 + 0x28);
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_88 = 1;
  plVar5 = plVar28 + 3;
  if ((char)plVar28[0xb] == '\x01') {
    aplStack_78[0] = plVar5;
    FUN_109cffe4c(aplStack_78,plVar5,&uStack_c0);
  }
  else {
    FUN_109cd3f0c(plVar5,&uStack_c0);
    *(undefined1 *)(plVar28 + 0xb) = 1;
  }
  FUN_109cd3fa0(&uStack_c0);
  plVar28 = plVar28 + 0xd;
  param_2 = lStack_c8;
  goto joined_r0x000109cfcf28;
LAB_109cfd1b4:
  uVar21 = *(ulong *)(*(long *)(puVar12 + 0x48) + 0x68);
  puVar17 = (ulong *)(*(long *)(puVar12 + 0x48) + 0x68);
  if ((uVar21 & 1) != 0) {
    puVar17 = (ulong *)(uVar21 + (long)aiStack_188[0] * 8 + 7);
  }
  uVar21 = *puVar17;
  ppuVar3 = &PTR_PTR_1132eca28;
  if (*(undefined ***)(uVar21 + 0x48) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(uVar21 + 0x48);
  }
  piVar13 = (int *)((ulong)ppuVar3[0x20] & 0xfffffffffffffffc);
  FUN_109ce6364();
  iVar16 = *piVar13;
  if (iVar16 == 0x15 || iVar16 == 0x13) {
    uVar25 = *(ulong *)(uVar21 + 0x18);
    puVar17 = (ulong *)(uVar21 + 0x18);
    if ((uVar25 & 1) != 0) {
      puVar17 = (ulong *)(uVar25 + 7);
    }
    uVar25 = *puVar17;
    puVar11 = puVar15;
    FUN_109cedb48(puVar15,uVar25);
    if (puVar11 == (undefined *)0x0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_240,&UNK_10f5ab171,uVar25);
      func_0x000109259240(auStack_1f0,auStack_240,&DAT_10f638984);
      FUN_109cd8934(auStack_1f0);
      goto LAB_109cfd920;
    }
    if ((iVar16 != 0x13) ||
       ((*(int *)(puVar11 + 0x30) != 1 &&
        ((*(int *)(puVar11 + 0x2c) != 1 || (*(int *)(puVar11 + 0x28) != 1)))))) {
      uVar25 = *(ulong *)(uVar21 + 0x30);
      puVar17 = (ulong *)(uVar21 + 0x30);
      if ((uVar25 & 1) != 0) {
        puVar17 = (ulong *)(uVar25 + 7);
      }
      uVar21 = *puVar17;
      puVar14 = puVar15;
      FUN_109cedb48(puVar15,uVar21);
      if (puVar14 == (undefined *)0x0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_240,&UNK_10f5ab18b,uVar21);
        func_0x000109259240(auStack_1f0,auStack_240,&DAT_10f638984);
        FUN_109cd8934(auStack_1f0);
        goto LAB_109cfd920;
      }
      if (iVar16 == 0x15) {
        iVar16 = *(int *)(puVar11 + 0x30);
        if (((*(int *)(puVar11 + 0x34) == *(int *)(puVar14 + 0x34)) &&
            ((iVar16 == *(int *)(puVar14 + 0x30) ||
             ((((iVar16 == 1 && (*(int *)(puVar14 + 0x2c) == 1)) && (*(int *)(puVar14 + 0x28) == 1))
              || ((*(int *)(puVar11 + 0x2c) == 1 &&
                  (*(int *)(puVar14 + 0x30) == 1 && *(int *)(puVar11 + 0x28) == 1)))))))) ||
           ((iVar16 == 1 &&
            ((*(int *)(puVar14 + 0x30) == 1 ||
             (((*(int *)(puVar14 + 0x34) == 1 && (*(int *)(puVar14 + 0x2c) == 1)) &&
              (*(int *)(puVar14 + 0x28) == 1)))))))) goto LAB_109cfd378;
        if (*(int *)(puVar11 + 0x34) == 1) {
          if ((*(int *)(puVar11 + 0x2c) == 1) && (*(int *)(puVar11 + 0x28) == 1)) {
            if (*(int *)(puVar14 + 0x30) != 1) goto LAB_109cfd354;
            goto LAB_109cfd378;
          }
        }
        else if ((*(int *)(puVar11 + 0x2c) == 1) && (*(int *)(puVar11 + 0x28) == 1)) {
LAB_109cfd354:
          if ((*(int *)(puVar14 + 0x2c) == 1) && (*(int *)(puVar14 + 0x28) == 1))
          goto LAB_109cfd378;
        }
      }
      func_0x000108a5413c(&uStack_170,aiStack_188);
    }
  }
LAB_109cfd378:
  aiStack_188[0] = aiStack_188[0] + 1;
  if (iVar7 <= aiStack_188[0]) {
    do {
      if (lStack_148 == 0) {
LAB_109cfd884:
        func_0x0001098b5494(&uStack_170);
        return;
      }
      lStack_148 = lStack_148 + -1;
      iVar7 = *(int *)(*(long *)(lStack_168 + ((ulong)(lStack_150 + lStack_148) >> 10) * 8) +
                      (lStack_150 + lStack_148 & 0x3ffU) * 4);
      FUN_109cf9fd8(&uStack_170,1);
      uVar21 = *(ulong *)(*(long *)(puVar12 + 0x48) + 0x68);
      puVar17 = (ulong *)(*(long *)(puVar12 + 0x48) + 0x68);
      if ((uVar21 & 1) != 0) {
        puVar17 = (ulong *)(uVar21 + (long)iVar7 * 8 + 7);
      }
      uVar21 = *puVar17;
      puVar18 = (ulong *)(uVar21 + 0x18);
      puVar17 = puVar18;
      if ((*puVar18 & 1) != 0) {
        puVar17 = (ulong *)(*puVar18 + 7);
      }
      uVar25 = *puVar17;
      puVar26 = (ulong *)(uVar21 + 0x30);
      puVar17 = puVar26;
      if ((*puVar26 & 1) != 0) {
        puVar17 = (ulong *)(*puVar26 + 7);
      }
      plVar28 = (long *)*puVar17;
      ppuVar3 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(uVar21 + 0x48) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(uVar21 + 0x48);
      }
      piVar13 = (int *)((ulong)ppuVar3[0x20] & 0xfffffffffffffffc);
      FUN_109ce6364();
      iVar16 = *piVar13;
      uVar27 = plVar28[1];
      if (-1 < (char)*(byte *)((long)plVar28 + 0x17)) {
        uVar27 = (ulong)*(byte *)((long)plVar28 + 0x17);
      }
      func_0x000104c4f768(aiStack_188,uVar27 + 0x14,auStack_1f0);
      if (uVar27 != 0) {
        plVar5 = (long *)*plVar28;
        if (-1 < *(char *)((long)plVar28 + 0x17)) {
          plVar5 = plVar28;
        }
        _memmove(aiStack_188,plVar5,uVar27);
      }
      *(undefined8 *)((long)&uStack_180 + uVar27) = 0x676e31646e31665f;
      *(undefined8 *)((long)aiStack_188 + uVar27) = 0x6574756d7265705f;
      *(undefined4 *)((long)&uStack_178 + uVar27) = 0x306d336e;
      auStack_174[uVar27] = 0;
      if (iVar16 == 0x15) {
        uVar27 = plVar28[1];
        if (-1 < (char)*(byte *)((long)plVar28 + 0x17)) {
          uVar27 = (ulong)*(byte *)((long)plVar28 + 0x17);
        }
        func_0x000104c4f768(&ppppuStack_1a0,uVar27 + 0x14,auStack_1f0);
        pppppuVar4 = (undefined8 *****)ppppuStack_1a0;
        if (-1 < lStack_190) {
          pppppuVar4 = &ppppuStack_1a0;
        }
        if (uVar27 != 0) {
          plVar5 = (long *)*plVar28;
          if (-1 < *(char *)((long)plVar28 + 0x17)) {
            plVar5 = plVar28;
          }
          _memmove(pppppuVar4,plVar5,uVar27);
        }
        puVar1 = (undefined8 *)((long)pppppuVar4 + uVar27);
        puVar1[1] = 0x676e31646e31665f;
        *puVar1 = 0x657061687365725f;
        *(undefined4 *)(puVar1 + 2) = 0x306d336e;
        *(undefined1 *)((long)puVar1 + 0x14) = 0;
      }
      else if (*(char *)((long)plVar28 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppuStack_1a0,*plVar28,plVar28[1]);
      }
      else {
        lStack_198 = plVar28[1];
        ppppuStack_1a0 = (undefined8 ****)*plVar28;
        lStack_190 = plVar28[2];
      }
      FUN_109cfd9e8(auStack_1f0,uVar25,aiStack_188,*(undefined4 *)(*(long *)(puVar12 + 0x48) + 0xe8)
                    ,1);
      FUN_109cfdb4c(puVar12,uVar21,auStack_1f0,aiStack_188);
      FUN_109d007e0(*(long *)(puVar12 + 0x48) + 0x68,auStack_1f0);
      lVar19 = *(long *)(puVar12 + 0x48);
      iVar8 = *(int *)(lVar19 + 0x70);
      if (iVar7 < iVar8 + -1) {
        lVar19 = (long)iVar8 + -1;
        lVar29 = (long)iVar8 << 3;
        do {
          puVar17 = (ulong *)(*(long *)(puVar12 + 0x48) + 0x68);
          lVar2 = *puVar17 + lVar29;
          puVar9 = puVar17;
          if ((*puVar17 & 1) != 0) {
            puVar17 = (ulong *)(lVar2 + -9);
            puVar9 = (ulong *)(lVar2 + -1);
          }
          uVar25 = *puVar9;
          *puVar9 = *puVar17;
          *puVar17 = uVar25;
          lVar19 = lVar19 + -1;
          lVar29 = lVar29 + -8;
        } while (iVar7 < lVar19);
        lVar19 = *(long *)(puVar12 + 0x48);
      }
      if (iVar16 == 0x15) {
        FUN_109cfd9e8(auStack_240,&ppppuStack_1a0,plVar28,*(undefined4 *)(lVar19 + 0xe8),0);
        FUN_109cfdb4c(puVar12,uVar21,auStack_240,&ppppuStack_1a0);
        FUN_109d007e0(*(long *)(puVar12 + 0x48) + 0x68,auStack_240);
        iVar8 = *(int *)(*(long *)(puVar12 + 0x48) + 0x70);
        if (iVar7 + 2 < iVar8 + -1) {
          lVar19 = (long)iVar8 + -1;
          lVar29 = (long)iVar8 << 3;
          do {
            puVar17 = (ulong *)(*(long *)(puVar12 + 0x48) + 0x68);
            lVar2 = *puVar17 + lVar29;
            puVar9 = puVar17;
            if ((*puVar17 & 1) != 0) {
              puVar17 = (ulong *)(lVar2 + -9);
              puVar9 = (ulong *)(lVar2 + -1);
            }
            uVar25 = *puVar9;
            *puVar9 = *puVar17;
            *puVar17 = uVar25;
            lVar19 = lVar19 + -1;
            lVar29 = lVar29 + -8;
          } while (iVar7 + 2 < lVar19);
        }
        func_0x000109c0d344(auStack_240);
        lVar19 = *(long *)(puVar12 + 0x48);
      }
      iVar7 = *(int *)(lVar19 + 0xe8);
      if ((*puVar18 & 1) != 0) {
        puVar18 = (ulong *)(*puVar18 + 7);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(*puVar18,aiStack_188)
      ;
      if (iVar16 == 0x15) {
        if ((*puVar26 & 1) != 0) {
          puVar26 = (ulong *)(*puVar26 + 7);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*puVar26,&ppppuStack_1a0);
        *(uint *)(uVar21 + 0x10) = *(uint *)(uVar21 + 0x10) | 1;
        uVar25 = *(ulong *)(uVar21 + 0x48);
        if (uVar25 == 0) {
          uVar25 = *(ulong *)(uVar21 + 8);
          if ((uVar25 & 1) != 0) {
            uVar25 = *(ulong *)(uVar25 & 0xfffffffffffffffe);
          }
          func_0x000109c0fb5c();
          *(ulong *)(uVar21 + 0x48) = uVar25;
        }
        *(uint *)(uVar25 + 0x10) = *(uint *)(uVar25 + 0x10) | 1;
        uVar21 = *(ulong *)(uVar25 + 8);
        if ((uVar21 & 1) != 0) {
          uVar21 = *(ulong *)(uVar21 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(uVar25 + 0xf8,&ppppuStack_1a0,uVar21);
        if (iVar7 == 1) {
          piVar13 = (int *)(uVar25 + 0x38);
          *piVar13 = 0;
          iVar7 = *(int *)(uVar25 + 0x78);
          if (iVar7 != 0) {
            if (*(int *)(uVar25 + 0x3c) < iVar7) {
              func_0x000107c29104(piVar13,0,iVar7);
              lVar19 = (long)*piVar13;
              iVar16 = *piVar13 + iVar7;
            }
            else {
              lVar19 = 0;
              iVar16 = iVar7;
            }
            *(int *)(uVar25 + 0x38) = iVar16;
            if (0 < iVar7) {
              uVar24 = iVar7 + 1;
              puVar20 = *(undefined4 **)(uVar25 + 0x80);
              puVar23 = (undefined4 *)(*(long *)(uVar25 + 0x40) + lVar19 * 4);
              do {
                *puVar23 = *puVar20;
                uVar24 = uVar24 - 1;
                puVar20 = puVar20 + 1;
                puVar23 = puVar23 + 1;
              } while (1 < uVar24);
            }
          }
        }
        else {
          if (iVar7 != 3) {
            FUN_109cd880c(&UNK_10f5ab3cb);
LAB_109cfd920:
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x109cfd924);
            (*pcVar10)();
          }
          piVar13 = (int *)(uVar25 + 0x38);
          *piVar13 = 0;
          iVar7 = *(int *)(uVar25 + 0x88);
          if (iVar7 != 0) {
            if (*(int *)(uVar25 + 0x3c) < iVar7) {
              func_0x000107c29104(piVar13,0,iVar7);
              lVar19 = (long)*piVar13;
              iVar16 = *piVar13 + iVar7;
            }
            else {
              lVar19 = 0;
              iVar16 = iVar7;
            }
            *(int *)(uVar25 + 0x38) = iVar16;
            if (0 < iVar7) {
              uVar24 = iVar7 + 1;
              puVar20 = *(undefined4 **)(uVar25 + 0x90);
              puVar23 = (undefined4 *)(*(long *)(uVar25 + 0x40) + lVar19 * 4);
              do {
                *puVar23 = *puVar20;
                uVar24 = uVar24 - 1;
                puVar20 = puVar20 + 1;
                puVar23 = puVar23 + 1;
              } while (1 < uVar24);
            }
          }
        }
        *(undefined4 *)(uVar25 + 0x78) = 0;
        *(undefined4 *)(uVar25 + 0x88) = 0;
      }
      func_0x000109c0d344(auStack_1f0);
      if (lStack_190 < 0) {
        __ZdlPv(ppppuStack_1a0);
      }
    } while( true );
  }
  goto LAB_109cfd1b4;
}



/* Entry: 109cfd168; end: 109cfd9e7;  */

/* WARNING: Removing unreachable block (ram,0x000109cfd820) */

void FUN_109cfd168(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong *puVar21;
  long *plVar22;
  ulong *puVar23;
  undefined1 auStack_170 [80];
  undefined1 auStack_120 [80];
  undefined8 ***pppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  int aiStack_b8 [2];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [4];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x70);
  aiStack_b8[0] = 0;
  if (0 < iVar7) {
    do {
      puVar15 = (ulong *)(*(long *)(param_1 + 0x48) + 0x68);
      uVar20 = *puVar15;
      if ((uVar20 & 1) != 0) {
        puVar15 = (ulong *)(uVar20 + (long)aiStack_b8[0] * 8 + 7);
      }
      uVar20 = *puVar15;
      ppuVar3 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(uVar20 + 0x48) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(uVar20 + 0x48);
      }
      piVar11 = (int *)((ulong)ppuVar3[0x20] & 0xfffffffffffffffc);
      FUN_109ce6364();
      iVar12 = *piVar11;
      if (iVar12 == 0x15 || iVar12 == 0x13) {
        uVar16 = *(ulong *)(uVar20 + 0x18);
        puVar15 = (ulong *)(uVar20 + 0x18);
        if ((uVar16 & 1) != 0) {
          puVar15 = (ulong *)(uVar16 + 7);
        }
        uVar16 = *puVar15;
        lVar13 = param_2;
        FUN_109cedb48(param_2,uVar16);
        if (lVar13 == 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (auStack_170,&UNK_10f5ab171,uVar16);
          func_0x000109259240(auStack_120,auStack_170,&DAT_10f638984);
          FUN_109cd8934(auStack_120);
          goto LAB_109cfd920;
        }
        if ((iVar12 != 0x13) ||
           ((*(int *)(lVar13 + 0x30) != 1 &&
            ((*(int *)(lVar13 + 0x2c) != 1 || (*(int *)(lVar13 + 0x28) != 1)))))) {
          uVar16 = *(ulong *)(uVar20 + 0x30);
          puVar15 = (ulong *)(uVar20 + 0x30);
          if ((uVar16 & 1) != 0) {
            puVar15 = (ulong *)(uVar16 + 7);
          }
          uVar20 = *puVar15;
          lVar17 = param_2;
          FUN_109cedb48(param_2,uVar20);
          if (lVar17 == 0) {
            __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                      (auStack_170,&UNK_10f5ab18b,uVar20);
            func_0x000109259240(auStack_120,auStack_170,&DAT_10f638984);
            FUN_109cd8934(auStack_120);
            goto LAB_109cfd920;
          }
          if (iVar12 == 0x15) {
            iVar12 = *(int *)(lVar13 + 0x30);
            if (((*(int *)(lVar13 + 0x34) == *(int *)(lVar17 + 0x34)) &&
                ((iVar12 == *(int *)(lVar17 + 0x30) ||
                 ((((iVar12 == 1 && (*(int *)(lVar17 + 0x2c) == 1)) &&
                   (*(int *)(lVar17 + 0x28) == 1)) ||
                  ((*(int *)(lVar13 + 0x2c) == 1 &&
                   (*(int *)(lVar17 + 0x30) == 1 && *(int *)(lVar13 + 0x28) == 1)))))))) ||
               ((iVar12 == 1 &&
                ((*(int *)(lVar17 + 0x30) == 1 ||
                 (((*(int *)(lVar17 + 0x34) == 1 && (*(int *)(lVar17 + 0x2c) == 1)) &&
                  (*(int *)(lVar17 + 0x28) == 1)))))))) goto LAB_109cfd378;
            if (*(int *)(lVar13 + 0x34) == 1) {
              if ((*(int *)(lVar13 + 0x2c) == 1) && (*(int *)(lVar13 + 0x28) == 1)) {
                if (*(int *)(lVar17 + 0x30) != 1) goto LAB_109cfd354;
                goto LAB_109cfd378;
              }
            }
            else if ((*(int *)(lVar13 + 0x2c) == 1) && (*(int *)(lVar13 + 0x28) == 1)) {
LAB_109cfd354:
              if ((*(int *)(lVar17 + 0x2c) == 1) && (*(int *)(lVar17 + 0x28) == 1))
              goto LAB_109cfd378;
            }
          }
          func_0x000108a5413c(&uStack_a0,aiStack_b8);
        }
      }
LAB_109cfd378:
      aiStack_b8[0] = aiStack_b8[0] + 1;
    } while (aiStack_b8[0] < iVar7);
    while (lStack_78 != 0) {
      lStack_78 = lStack_78 + -1;
      iVar7 = *(int *)(*(long *)(lStack_98 + ((ulong)(lStack_80 + lStack_78) >> 10) * 8) +
                      (lStack_80 + lStack_78 & 0x3ffU) * 4);
      FUN_109cf9fd8(&uStack_a0,1);
      puVar15 = (ulong *)(*(long *)(param_1 + 0x48) + 0x68);
      uVar20 = *puVar15;
      if ((uVar20 & 1) != 0) {
        puVar15 = (ulong *)(uVar20 + (long)iVar7 * 8 + 7);
      }
      uVar20 = *puVar15;
      puVar23 = (ulong *)(uVar20 + 0x18);
      puVar15 = puVar23;
      if ((*puVar23 & 1) != 0) {
        puVar15 = (ulong *)(*puVar23 + 7);
      }
      uVar16 = *puVar15;
      puVar21 = (ulong *)(uVar20 + 0x30);
      puVar15 = puVar21;
      if ((*puVar21 & 1) != 0) {
        puVar15 = (ulong *)(*puVar21 + 7);
      }
      plVar22 = (long *)*puVar15;
      ppuVar3 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(uVar20 + 0x48) != (undefined **)0x0) {
        ppuVar3 = *(undefined ***)(uVar20 + 0x48);
      }
      piVar11 = (int *)((ulong)ppuVar3[0x20] & 0xfffffffffffffffc);
      FUN_109ce6364();
      iVar12 = *piVar11;
      uVar4 = plVar22[1];
      if (-1 < (char)*(byte *)((long)plVar22 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)plVar22 + 0x17);
      }
      func_0x000104c4f768(aiStack_b8,uVar4 + 0x14,auStack_120);
      if (uVar4 != 0) {
        plVar6 = (long *)*plVar22;
        if (-1 < *(char *)((long)plVar22 + 0x17)) {
          plVar6 = plVar22;
        }
        _memmove(aiStack_b8,plVar6,uVar4);
      }
      *(undefined8 *)((long)&uStack_b0 + uVar4) = 0x676e31646e31665f;
      *(undefined8 *)((long)aiStack_b8 + uVar4) = 0x6574756d7265705f;
      *(undefined4 *)((long)&uStack_a8 + uVar4) = 0x306d336e;
      auStack_a4[uVar4] = 0;
      if (iVar12 == 0x15) {
        uVar4 = plVar22[1];
        if (-1 < (char)*(byte *)((long)plVar22 + 0x17)) {
          uVar4 = (ulong)*(byte *)((long)plVar22 + 0x17);
        }
        func_0x000104c4f768(&pppuStack_d0,uVar4 + 0x14,auStack_120);
        ppppuVar5 = (undefined8 ****)pppuStack_d0;
        if (-1 < lStack_c0) {
          ppppuVar5 = &pppuStack_d0;
        }
        if (uVar4 != 0) {
          plVar6 = (long *)*plVar22;
          if (-1 < *(char *)((long)plVar22 + 0x17)) {
            plVar6 = plVar22;
          }
          _memmove(ppppuVar5,plVar6,uVar4);
        }
        puVar1 = (undefined8 *)((long)ppppuVar5 + uVar4);
        puVar1[1] = 0x676e31646e31665f;
        *puVar1 = 0x657061687365725f;
        *(undefined4 *)(puVar1 + 2) = 0x306d336e;
        *(undefined1 *)((long)puVar1 + 0x14) = 0;
      }
      else if (*(char *)((long)plVar22 + 0x17) < '\0') {
        func_0x000107c3192c(&pppuStack_d0,*plVar22,plVar22[1]);
      }
      else {
        lStack_c8 = plVar22[1];
        pppuStack_d0 = (undefined8 ***)*plVar22;
        lStack_c0 = plVar22[2];
      }
      FUN_109cfd9e8(auStack_120,uVar16,aiStack_b8,*(undefined4 *)(*(long *)(param_1 + 0x48) + 0xe8),
                    1);
      FUN_109cfdb4c(param_1,uVar20,auStack_120,aiStack_b8);
      FUN_109d007e0(*(long *)(param_1 + 0x48) + 0x68,auStack_120);
      lVar13 = *(long *)(param_1 + 0x48);
      iVar8 = *(int *)(lVar13 + 0x70);
      if (iVar7 < iVar8 + -1) {
        lVar13 = (long)iVar8 + -1;
        lVar17 = (long)iVar8 << 3;
        do {
          puVar15 = (ulong *)(*(long *)(param_1 + 0x48) + 0x68);
          lVar2 = *puVar15 + lVar17;
          puVar9 = puVar15;
          if ((*puVar15 & 1) != 0) {
            puVar15 = (ulong *)(lVar2 + -9);
            puVar9 = (ulong *)(lVar2 + -1);
          }
          uVar16 = *puVar9;
          *puVar9 = *puVar15;
          *puVar15 = uVar16;
          lVar13 = lVar13 + -1;
          lVar17 = lVar17 + -8;
        } while (iVar7 < lVar13);
        lVar13 = *(long *)(param_1 + 0x48);
      }
      if (iVar12 == 0x15) {
        FUN_109cfd9e8(auStack_170,&pppuStack_d0,plVar22,*(undefined4 *)(lVar13 + 0xe8),0);
        FUN_109cfdb4c(param_1,uVar20,auStack_170,&pppuStack_d0);
        FUN_109d007e0(*(long *)(param_1 + 0x48) + 0x68,auStack_170);
        iVar8 = *(int *)(*(long *)(param_1 + 0x48) + 0x70);
        if (iVar7 + 2 < iVar8 + -1) {
          lVar13 = (long)iVar8 + -1;
          lVar17 = (long)iVar8 << 3;
          do {
            puVar15 = (ulong *)(*(long *)(param_1 + 0x48) + 0x68);
            lVar2 = *puVar15 + lVar17;
            puVar9 = puVar15;
            if ((*puVar15 & 1) != 0) {
              puVar15 = (ulong *)(lVar2 + -9);
              puVar9 = (ulong *)(lVar2 + -1);
            }
            uVar16 = *puVar9;
            *puVar9 = *puVar15;
            *puVar15 = uVar16;
            lVar13 = lVar13 + -1;
            lVar17 = lVar17 + -8;
          } while (iVar7 + 2 < lVar13);
        }
        func_0x000109c0d344(auStack_170);
        lVar13 = *(long *)(param_1 + 0x48);
      }
      iVar7 = *(int *)(lVar13 + 0xe8);
      if ((*puVar23 & 1) != 0) {
        puVar23 = (ulong *)(*puVar23 + 7);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(*puVar23,aiStack_b8);
      if (iVar12 == 0x15) {
        if ((*puVar21 & 1) != 0) {
          puVar21 = (ulong *)(*puVar21 + 7);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*puVar21,&pppuStack_d0);
        *(uint *)(uVar20 + 0x10) = *(uint *)(uVar20 + 0x10) | 1;
        uVar16 = *(ulong *)(uVar20 + 0x48);
        if (uVar16 == 0) {
          uVar16 = *(ulong *)(uVar20 + 8);
          if ((uVar16 & 1) != 0) {
            uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
          }
          func_0x000109c0fb5c();
          *(ulong *)(uVar20 + 0x48) = uVar16;
        }
        *(uint *)(uVar16 + 0x10) = *(uint *)(uVar16 + 0x10) | 1;
        uVar20 = *(ulong *)(uVar16 + 8);
        if ((uVar20 & 1) != 0) {
          uVar20 = *(ulong *)(uVar20 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(uVar16 + 0xf8,&pppuStack_d0,uVar20);
        if (iVar7 == 1) {
          piVar11 = (int *)(uVar16 + 0x38);
          *piVar11 = 0;
          iVar7 = *(int *)(uVar16 + 0x78);
          if (iVar7 != 0) {
            if (*(int *)(uVar16 + 0x3c) < iVar7) {
              func_0x000107c29104(piVar11,0,iVar7);
              lVar13 = (long)*piVar11;
              iVar12 = *piVar11 + iVar7;
            }
            else {
              lVar13 = 0;
              iVar12 = iVar7;
            }
            *(int *)(uVar16 + 0x38) = iVar12;
            if (0 < iVar7) {
              uVar19 = iVar7 + 1;
              puVar14 = *(undefined4 **)(uVar16 + 0x80);
              puVar18 = (undefined4 *)(*(long *)(uVar16 + 0x40) + lVar13 * 4);
              do {
                *puVar18 = *puVar14;
                uVar19 = uVar19 - 1;
                puVar14 = puVar14 + 1;
                puVar18 = puVar18 + 1;
              } while (1 < uVar19);
            }
          }
        }
        else {
          if (iVar7 != 3) {
            FUN_109cd880c(&UNK_10f5ab3cb);
LAB_109cfd920:
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x109cfd924);
            (*pcVar10)();
          }
          piVar11 = (int *)(uVar16 + 0x38);
          *piVar11 = 0;
          iVar7 = *(int *)(uVar16 + 0x88);
          if (iVar7 != 0) {
            if (*(int *)(uVar16 + 0x3c) < iVar7) {
              func_0x000107c29104(piVar11,0,iVar7);
              lVar13 = (long)*piVar11;
              iVar12 = *piVar11 + iVar7;
            }
            else {
              lVar13 = 0;
              iVar12 = iVar7;
            }
            *(int *)(uVar16 + 0x38) = iVar12;
            if (0 < iVar7) {
              uVar19 = iVar7 + 1;
              puVar14 = *(undefined4 **)(uVar16 + 0x90);
              puVar18 = (undefined4 *)(*(long *)(uVar16 + 0x40) + lVar13 * 4);
              do {
                *puVar18 = *puVar14;
                uVar19 = uVar19 - 1;
                puVar14 = puVar14 + 1;
                puVar18 = puVar18 + 1;
              } while (1 < uVar19);
            }
          }
        }
        *(undefined4 *)(uVar16 + 0x78) = 0;
        *(undefined4 *)(uVar16 + 0x88) = 0;
      }
      func_0x000109c0d344(auStack_120);
      if (lStack_c0 < 0) {
        __ZdlPv(pppuStack_d0);
      }
    }
  }
  func_0x0001098b5494(&uStack_a0);
  return;
}



/* Entry: 109cfd9e8; end: 109cfdb4b;  */

void FUN_109cfd9e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5
                  )

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  param_1[7] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_DAT_110b2ba88;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  lVar2 = 0;
  func_0x000109c0fb5c();
  param_1[9] = lVar2;
  func_0x000107c303b4(param_1 + 3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  func_0x000107c303b4(param_1 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 1;
  uVar3 = *(ulong *)(lVar2 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(lVar2 + 0xf8,param_3,uVar3);
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 2;
  uVar3 = *(ulong *)(lVar2 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b4bf088(lVar2 + 0x100,&UNK_10f5a4cb5,7,uVar3);
  if (param_4 == 1) {
    if (param_5 == 0) {
      uVar4 = 3;
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    if (param_4 != 3) {
      FUN_109cd880c(&UNK_10f5ab3cb);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109cfdb38);
      (*pcVar1)();
    }
    if (param_5 != 0) {
      *(undefined4 *)(lVar2 + 0x148) = 0;
      goto LAB_109cfdaec;
    }
    uVar4 = 1;
  }
  *(undefined4 *)(lVar2 + 0x148) = uVar4;
LAB_109cfdaec:
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0x10000;
  return;
}



/* Entry: 109cfdb4c; end: 109cfe0fb;  */

void FUN_109cfdb4c(long param_1,long param_2,long param_3,long *param_4)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong unaff_x26;
  ulong uVar18;
  float fVar19;
  undefined4 uVar20;
  
  ppuVar1 = &PTR_PTR_1132eca28;
  if (*(undefined ***)(param_2 + 0x48) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x48);
  }
  if (*(char *)((long)ppuVar1 + 0x1a4) != '\x01') {
    return;
  }
  if (*(int *)((long)ppuVar1 + 0x194) != 2) {
    return;
  }
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
  uVar6 = *(ulong *)(param_3 + 0x48);
  if (uVar6 == 0) {
    uVar6 = *(ulong *)(param_3 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000109c0fb5c();
    *(ulong *)(param_3 + 0x48) = uVar6;
  }
  *(undefined1 *)(uVar6 + 0x1a4) = 1;
  *(uint *)(uVar6 + 0x14) = *(uint *)(uVar6 + 0x14) | 0x80;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
  uVar6 = *(ulong *)(param_3 + 0x48);
  if (uVar6 == 0) {
    uVar6 = *(ulong *)(param_3 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000109c0fb5c();
    *(ulong *)(param_3 + 0x48) = uVar6;
  }
  *(undefined4 *)(uVar6 + 0x194) = 2;
  *(uint *)(uVar6 + 0x14) = *(uint *)(uVar6 + 0x14) | 8;
  ppuVar1 = &PTR_PTR_1132eca28;
  if (*(undefined ***)(param_2 + 0x48) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x48);
  }
  uVar20 = *(undefined4 *)(ppuVar1 + 0x40);
  uVar2 = *(undefined4 *)(ppuVar1 + 0x34);
  bVar3 = *(byte *)((long)ppuVar1 + 0x204);
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
  uVar6 = *(ulong *)(param_3 + 0x48);
  if (uVar6 == 0) {
    uVar6 = *(ulong *)(param_3 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000109c0fb5c();
    *(ulong *)(param_3 + 0x48) = uVar6;
  }
  *(undefined4 *)(uVar6 + 0x1a0) = uVar2;
  *(uint *)(uVar6 + 0x14) = *(uint *)(uVar6 + 0x14) | 0x40;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
  uVar6 = *(ulong *)(param_3 + 0x48);
  if (uVar6 == 0) {
    uVar6 = *(ulong *)(param_3 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000109c0fb5c();
    *(ulong *)(param_3 + 0x48) = uVar6;
  }
  *(undefined4 *)(uVar6 + 0x200) = uVar20;
  *(uint *)(uVar6 + 0x18) = *(uint *)(uVar6 + 0x18) | 8;
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
  uVar6 = *(ulong *)(param_3 + 0x48);
  if (uVar6 == 0) {
    uVar6 = *(ulong *)(param_3 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000109c0fb5c();
    *(ulong *)(param_3 + 0x48) = uVar6;
  }
  *(uint *)(uVar6 + 0x204) = (uint)bVar3;
  *(uint *)(uVar6 + 0x18) = *(uint *)(uVar6 + 0x18) | 0x10;
  uVar6 = param_1 + 0x58;
  func_0x000107c31944(uVar6,param_4);
  uVar17 = *(ulong *)(param_1 + 0x60);
  if (uVar17 != 0) {
    uVar18 = uVar17 - 1;
    if ((uVar17 & uVar18) == 0) {
      unaff_x26 = uVar18 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar17 <= uVar6) {
        uVar10 = 0;
        if (uVar17 != 0) {
          uVar10 = uVar6 / uVar17;
        }
        unaff_x26 = uVar6 - uVar10 * uVar17;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x58) + unaff_x26 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar9; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        uVar10 = plVar16[1];
        if (uVar10 == uVar6) {
          uVar10 = param_1 + 0x58;
          func_0x000104c4fbc4(uVar10,plVar16 + 2,param_4);
          if ((uVar10 & 1) != 0) goto LAB_109cfe028;
        }
        else {
          if ((uVar17 & uVar18) == 0) {
            uVar10 = uVar10 & uVar18;
          }
          else if (uVar17 <= uVar10) {
            uVar11 = 0;
            if (uVar17 != 0) {
              uVar11 = uVar10 / uVar17;
            }
            uVar10 = uVar10 - uVar11 * uVar17;
          }
          if (uVar10 != unaff_x26) break;
        }
      }
    }
  }
  plVar16 = (long *)0x38;
  __Znwm();
  *plVar16 = 0;
  plVar16[1] = uVar6;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(plVar16 + 2,*param_4,param_4[1]);
  }
  else {
    lVar7 = *param_4;
    plVar16[3] = param_4[1];
    plVar16[2] = lVar7;
    plVar16[4] = param_4[2];
  }
  *(undefined4 *)(plVar16 + 6) = 0;
  plVar16[5] = 0;
  fVar19 = (float)(*(long *)(param_1 + 0x70) + 1);
  if ((uVar17 != 0) && (fVar19 <= *(float *)(param_1 + 0x78) * (float)uVar17)) goto LAB_109cfdfb4;
  uVar18 = 1;
  if (2 < uVar17) {
    uVar18 = (ulong)((uVar17 & uVar17 - 1) != 0);
  }
  uVar18 = uVar18 | uVar17 << 1;
  uVar17 = (ulong)(fVar19 / *(float *)(param_1 + 0x78));
  if (uVar18 <= uVar17) {
    uVar18 = uVar17;
  }
  if (uVar18 - 1 == 0) {
    uVar18 = 2;
  }
  else if ((uVar18 & uVar18 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar17 = *(ulong *)(param_1 + 0x60);
  if (uVar17 < uVar18) {
LAB_109cfde3c:
    if (uVar18 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109cfe0d4);
      (*pcVar5)();
    }
    lVar7 = uVar18 << 3;
    __Znwm();
    lVar8 = *(long *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar7;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    uVar17 = 0;
    *(ulong *)(param_1 + 0x60) = uVar18;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x58) + uVar17 * 8) = 0;
      uVar17 = uVar17 + 1;
    } while (uVar18 != uVar17);
    plVar12 = *(long **)(param_1 + 0x68);
    uVar17 = uVar18;
    if (plVar12 != (long *)0x0) {
      uVar10 = plVar12[1];
      uVar11 = uVar18 - 1;
      if ((uVar18 & uVar11) == 0) {
        uVar10 = uVar10 & uVar11;
      }
      else if (uVar18 <= uVar10) {
        uVar15 = 0;
        if (uVar18 != 0) {
          uVar15 = uVar10 / uVar18;
        }
        uVar10 = uVar10 - uVar15 * uVar18;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x58) + uVar10 * 8) = (undefined8 *)(param_1 + 0x68);
      plVar13 = (long *)*plVar12;
      while (plVar13 != (long *)0x0) {
        uVar15 = plVar13[1];
        if ((uVar18 & uVar11) == 0) {
          uVar15 = uVar15 & uVar11;
        }
        else if (uVar18 <= uVar15) {
          uVar4 = 0;
          if (uVar18 != 0) {
            uVar4 = uVar15 / uVar18;
          }
          uVar15 = uVar15 - uVar4 * uVar18;
        }
        plVar14 = plVar13;
        if (uVar15 != uVar10) {
          lVar7 = *(long *)(param_1 + 0x58);
          if (*(long *)(lVar7 + uVar15 * 8) == 0) {
            *(long **)(lVar7 + uVar15 * 8) = plVar12;
            uVar10 = uVar15;
          }
          else {
            *plVar12 = *plVar13;
            *plVar13 = **(undefined8 **)(lVar7 + uVar15 * 8);
            **(long **)(lVar7 + uVar15 * 8) = (long)plVar13;
            plVar14 = plVar12;
          }
        }
        plVar12 = plVar14;
        plVar13 = (long *)*plVar14;
      }
    }
  }
  else if (uVar18 < uVar17) {
    uVar10 = (ulong)((float)*(ulong *)(param_1 + 0x70) / *(float *)(param_1 + 0x78));
    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar10) {
      uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
    }
    if (uVar18 <= uVar10) {
      uVar18 = uVar10;
    }
    if (uVar18 < uVar17) {
      if (uVar18 != 0) goto LAB_109cfde3c;
      lVar7 = *(long *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = *(ulong *)(param_1 + 0x60);
    }
  }
  if ((uVar17 & uVar17 - 1) == 0) {
    unaff_x26 = uVar17 - 1 & uVar6;
  }
  else {
    unaff_x26 = uVar6;
    if (uVar17 <= uVar6) {
      uVar18 = 0;
      if (uVar17 != 0) {
        uVar18 = uVar6 / uVar17;
      }
      unaff_x26 = uVar6 - uVar18 * uVar17;
    }
  }
LAB_109cfdfb4:
  lVar7 = *(long *)(param_1 + 0x58);
  plVar12 = *(long **)(lVar7 + unaff_x26 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)(param_1 + 0x68);
    *plVar16 = *plVar12;
    *plVar12 = (long)plVar16;
    *(long **)(lVar7 + unaff_x26 * 8) = plVar12;
    if (*plVar16 != 0) {
      uVar6 = *(ulong *)(*plVar16 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar6 = uVar6 & uVar17 - 1;
      }
      else if (uVar17 <= uVar6) {
        uVar18 = 0;
        if (uVar17 != 0) {
          uVar18 = uVar6 / uVar17;
        }
        uVar6 = uVar6 - uVar18 * uVar17;
      }
      *(long **)(*(long *)(param_1 + 0x58) + uVar6 * 8) = plVar16;
    }
  }
  else {
    *plVar16 = *plVar12;
    *plVar12 = (long)plVar16;
  }
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
LAB_109cfe028:
  *(undefined4 *)(plVar16 + 5) = uVar20;
  *(undefined4 *)((long)plVar16 + 0x2c) = uVar2;
  *(byte *)(plVar16 + 6) = bVar3;
  return;
}



/* Entry: 109cfe0fc; end: 109cfefb3;  */

void FUN_109cfe0fc(float *param_1)

{
  ulong *puVar1;
  undefined **ppuVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  ulong *puVar14;
  undefined **ppuVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined8 **ppuVar18;
  long lVar19;
  long *plVar20;
  ulong *puVar21;
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  ulong uVar24;
  ulong *puVar25;
  int iVar26;
  ulong uVar27;
  long *plVar28;
  undefined8 **ppuVar29;
  ulong *puVar30;
  long *plVar31;
  bool bVar32;
  long lVar33;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_170;
  undefined1 auStack_168 [15];
  char cStack_159;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 *puStack_e0;
  undefined8 **ppuStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  float fStack_c0;
  undefined8 *apuStack_b0 [6];
  
  ppuVar22 = (undefined8 **)(param_1 + 0x12);
  puVar12 = *ppuVar22;
  if (*(char *)((long)param_1 + 9) == '\x04') {
    uVar16 = 3;
  }
  else {
    if (*(char *)((long)param_1 + 9) == '\b') {
      *(undefined4 *)(puVar12 + 0x1d) = 3;
      *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) | 0x10;
      FUN_109cd3a7c(&uStack_1a0,param_1 + 4);
      FUN_109cfc5dc(apuStack_b0,param_1,uStack_1a0,plStack_198);
      if (cStack_159 < '\0') {
        __ZdlPv(uStack_170);
      }
      puStack_e0 = &uStack_188;
      func_0x000109378cec(&puStack_e0);
      puStack_e0 = &uStack_1a0;
      func_0x000109378cec(&puStack_e0);
      FUN_109cfcef8(param_1,apuStack_b0);
      FUN_109cfd168(param_1,apuStack_b0);
      FUN_109cfefe4(param_1);
      FUN_109cff368(param_1);
      goto LAB_109cfedb8;
    }
    uVar16 = 1;
  }
  *(undefined4 *)(puVar12 + 0x1d) = uVar16;
  *(uint *)(puVar12 + 2) = *(uint *)(puVar12 + 2) | 0x10;
  FUN_109cd3a7c(&uStack_1a0,param_1 + 4);
  FUN_109cfc5dc(apuStack_b0,param_1,uStack_1a0,plStack_198);
  if (cStack_159 < '\0') {
    __ZdlPv(uStack_170);
  }
  puStack_e0 = &uStack_188;
  func_0x000109378cec(&puStack_e0);
  puStack_e0 = &uStack_1a0;
  func_0x000109378cec(&puStack_e0);
  ppuStack_d8 = (undefined8 **)0x0;
  puStack_e0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  fStack_c0 = 1.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_f0 = 0x3f800000;
  puVar14 = *ppuVar22 + 0xd;
  uVar17 = *puVar14;
  if ((uVar17 & 1) != 0) {
    puVar14 = (ulong *)(uVar17 + 7);
  }
  iVar26 = *(int *)(*ppuVar22 + 0xe);
  if (iVar26 != 0) {
    puVar25 = puVar14 + iVar26;
    ppuVar23 = ppuVar22;
    do {
      uVar17 = *puVar14;
      ppuVar2 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(uVar17 + 0x48) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(uVar17 + 0x48);
      }
      plVar28 = (long *)((ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
      ppuVar29 = &puStack_e0;
      func_0x000107c31944(ppuVar29,plVar28);
      ppuVar18 = ppuStack_d8;
      if (ppuStack_d8 != (undefined8 **)0x0) {
        uVar27 = (long)ppuStack_d8 - 1;
        if (((ulong)ppuStack_d8 & uVar27) == 0) {
          ppuVar23 = (undefined8 **)(uVar27 & (ulong)ppuVar29);
        }
        else {
          ppuVar23 = ppuVar29;
          if (ppuStack_d8 <= ppuVar29) {
            uVar24 = 0;
            if (ppuStack_d8 != (undefined8 **)0x0) {
              uVar24 = (ulong)ppuVar29 / (ulong)ppuStack_d8;
            }
            ppuVar23 = (undefined8 **)((long)ppuVar29 - uVar24 * (long)ppuStack_d8);
          }
        }
        if ((long *)puStack_e0[(long)ppuVar23] != (long *)0x0) {
          for (plVar31 = *(long **)puStack_e0[(long)ppuVar23]; plVar31 != (long *)0x0;
              plVar31 = (long *)*plVar31) {
            ppuVar13 = (undefined8 **)plVar31[1];
            if (ppuVar13 == ppuVar29) {
              ppuVar13 = &puStack_e0;
              func_0x000104c4fbc4(ppuVar13,plVar31 + 2,plVar28);
              if (((ulong)ppuVar13 & 1) != 0) goto LAB_109cfe60c;
            }
            else {
              if (((ulong)ppuVar18 & uVar27) == 0) {
                ppuVar13 = (undefined8 **)((ulong)ppuVar13 & uVar27);
              }
              else if (ppuVar18 <= ppuVar13) {
                uVar24 = 0;
                if (ppuVar18 != (undefined8 **)0x0) {
                  uVar24 = (ulong)ppuVar13 / (ulong)ppuVar18;
                }
                ppuVar13 = (undefined8 **)((long)ppuVar13 - uVar24 * (long)ppuVar18);
              }
              if (ppuVar13 != ppuVar23) break;
            }
          }
        }
      }
      plVar31 = (long *)0x30;
      __Znwm();
      *plVar31 = 0;
      plVar31[1] = (long)ppuVar29;
      if (*(char *)((long)plVar28 + 0x17) < '\0') {
        func_0x000107c3192c(plVar31 + 2,*plVar28,plVar28[1]);
      }
      else {
        lVar33 = plVar28[1];
        lVar19 = *plVar28;
        plVar31[4] = plVar28[2];
        plVar31[3] = lVar33;
        plVar31[2] = lVar19;
      }
      plVar31[5] = uVar17;
      if ((ppuVar18 == (undefined8 **)0x0) || (fStack_c0 * (float)ppuVar18 < (float)(uStack_c8 + 1))
         ) {
        uVar27 = 1;
        if ((undefined8 **)0x2 < ppuVar18) {
          uVar27 = (ulong)(((ulong)ppuVar18 & (long)ppuVar18 - 1U) != 0);
        }
        ppuVar23 = (undefined8 **)(uVar27 | (long)ppuVar18 << 1);
        ppuVar18 = (undefined8 **)(long)((float)(uStack_c8 + 1) / fStack_c0);
        if (ppuVar23 <= ppuVar18) {
          ppuVar23 = ppuVar18;
        }
        if ((long)ppuVar23 - 1U == 0) {
          ppuVar23 = (undefined8 **)0x2;
        }
        else if (((ulong)ppuVar23 & (long)ppuVar23 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        ppuVar18 = ppuStack_d8;
        if (ppuStack_d8 < ppuVar23) {
LAB_109cfe420:
          if ((ulong)ppuVar23 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_109cfee9c;
          }
          puVar12 = (undefined8 *)((long)ppuVar23 << 3);
          __Znwm();
          bVar32 = puStack_e0 != (undefined8 *)0x0;
          puStack_e0 = puVar12;
          if (bVar32) {
            __ZdlPv();
          }
          ppuVar18 = (undefined8 **)0x0;
          do {
            puStack_e0[(long)ppuVar18] = 0;
            ppuVar18 = (undefined8 **)((long)ppuVar18 + 1);
          } while (ppuVar23 != ppuVar18);
          ppuStack_d8 = ppuVar23;
          if (plStack_d0 != (long *)0x0) {
            ppuVar18 = (undefined8 **)plStack_d0[1];
            uVar27 = (long)ppuVar23 - 1;
            if (((ulong)ppuVar23 & uVar27) == 0) {
              ppuVar18 = (undefined8 **)((ulong)ppuVar18 & uVar27);
            }
            else if (ppuVar23 <= ppuVar18) {
              uVar24 = 0;
              if (ppuVar23 != (undefined8 **)0x0) {
                uVar24 = (ulong)ppuVar18 / (ulong)ppuVar23;
              }
              ppuVar18 = (undefined8 **)((long)ppuVar18 - uVar24 * (long)ppuVar23);
            }
            puStack_e0[(long)ppuVar18] = &plStack_d0;
            plVar28 = (long *)*plStack_d0;
            plVar5 = plStack_d0;
            while (plVar28 != (long *)0x0) {
              ppuVar13 = (undefined8 **)plVar28[1];
              if (((ulong)ppuVar23 & uVar27) == 0) {
                ppuVar13 = (undefined8 **)((ulong)ppuVar13 & uVar27);
              }
              else if (ppuVar23 <= ppuVar13) {
                uVar24 = 0;
                if (ppuVar23 != (undefined8 **)0x0) {
                  uVar24 = (ulong)ppuVar13 / (ulong)ppuVar23;
                }
                ppuVar13 = (undefined8 **)((long)ppuVar13 - uVar24 * (long)ppuVar23);
              }
              plVar20 = plVar28;
              if (ppuVar13 != ppuVar18) {
                if (puStack_e0[(long)ppuVar13] == 0) {
                  puStack_e0[(long)ppuVar13] = plVar5;
                  ppuVar18 = ppuVar13;
                }
                else {
                  *plVar5 = *plVar28;
                  *plVar28 = *(long *)puStack_e0[(long)ppuVar13];
                  *(long **)puStack_e0[(long)ppuVar13] = plVar28;
                  plVar20 = plVar5;
                }
              }
              plVar5 = plVar20;
              plVar28 = (long *)*plVar20;
            }
          }
        }
        else if (ppuVar23 < ppuStack_d8) {
          ppuVar13 = (undefined8 **)(long)((float)uStack_c8 / fStack_c0);
          if ((ppuStack_d8 < (undefined8 **)0x3) ||
             (((ulong)ppuStack_d8 & (long)ppuStack_d8 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((undefined8 **)0x1 < ppuVar13) {
            ppuVar13 = (undefined8 **)(1L << (-LZCOUNT((long)ppuVar13 + -1) & 0x3fU));
          }
          puVar12 = puStack_e0;
          if (ppuVar23 <= ppuVar13) {
            ppuVar23 = ppuVar13;
          }
          if (ppuVar23 < ppuVar18) {
            if (ppuVar23 != (undefined8 **)0x0) goto LAB_109cfe420;
            puStack_e0 = (undefined8 *)0x0;
            if (puVar12 != (undefined8 *)0x0) {
              __ZdlPv();
            }
            ppuStack_d8 = (undefined8 **)0x0;
          }
        }
        ppuVar18 = ppuStack_d8;
        if (((ulong)ppuStack_d8 & (long)ppuStack_d8 - 1U) == 0) {
          ppuVar23 = (undefined8 **)((long)ppuStack_d8 - 1U & (ulong)ppuVar29);
        }
        else {
          ppuVar23 = ppuVar29;
          if (ppuStack_d8 <= ppuVar29) {
            uVar27 = 0;
            if (ppuStack_d8 != (undefined8 **)0x0) {
              uVar27 = (ulong)ppuVar29 / (ulong)ppuStack_d8;
            }
            ppuVar23 = (undefined8 **)((long)ppuVar29 - uVar27 * (long)ppuStack_d8);
          }
        }
      }
      plVar28 = (long *)puStack_e0[(long)ppuVar23];
      if (plVar28 == (long *)0x0) {
        *plVar31 = (long)plStack_d0;
        puStack_e0[(long)ppuVar23] = &plStack_d0;
        plStack_d0 = plVar31;
        if (*plVar31 != 0) {
          ppuVar29 = *(undefined8 ***)(*plVar31 + 8);
          if (((ulong)ppuVar18 & (long)ppuVar18 - 1U) == 0) {
            ppuVar29 = (undefined8 **)((ulong)ppuVar29 & (long)ppuVar18 - 1U);
          }
          else if (ppuVar18 <= ppuVar29) {
            uVar27 = 0;
            if (ppuVar18 != (undefined8 **)0x0) {
              uVar27 = (ulong)ppuVar29 / (ulong)ppuVar18;
            }
            ppuVar29 = (undefined8 **)((long)ppuVar29 - uVar27 * (long)ppuVar18);
          }
          puStack_e0[(long)ppuVar29] = plVar31;
        }
      }
      else {
        *plVar31 = *plVar28;
        *plVar28 = (long)plVar31;
      }
      uStack_c8 = uStack_c8 + 1;
LAB_109cfe60c:
      ppuVar15 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(uVar17 + 0x48) != (undefined **)0x0) {
        ppuVar15 = *(undefined ***)(uVar17 + 0x48);
      }
      piVar7 = (int *)((ulong)ppuVar15[0x20] & 0xfffffffffffffffc);
      FUN_109ce6364();
      iVar26 = *piVar7;
      if (iVar26 < 0x23) {
        if (0x12 < iVar26) {
          if (iVar26 != 0x13 && iVar26 != 0x15) goto LAB_109cfe848;
          goto LAB_109cfe790;
        }
        if (iVar26 == 8) {
          if ((ABS(*(float *)(ppuVar15 + 0x3c) + -1.0) < 1e-06) &&
             (*(float *)((long)ppuVar15 + 0x1e4) == 0.0)) goto LAB_109cfe790;
        }
        else if ((iVar26 == 0xd) && (*(int *)(uVar17 + 0x20) == 1)) goto LAB_109cfe790;
      }
      else {
        if (iVar26 < 0x28) {
          if (iVar26 != 0x23) {
            if (iVar26 == 0x25) {
              uVar27 = *(ulong *)(uVar17 + 0x18);
              puVar21 = (ulong *)(uVar17 + 0x18);
              if ((uVar27 & 1) != 0) {
                puVar21 = (ulong *)(uVar27 + 7);
              }
              uVar24 = *puVar21;
              uVar27 = *(ulong *)(uVar17 + 0x30);
              puVar21 = (ulong *)(uVar17 + 0x30);
              if ((uVar27 & 1) != 0) {
                puVar21 = (ulong *)(uVar27 + 7);
              }
              ppuVar23 = (undefined8 **)*puVar21;
              pfVar8 = param_1 + 0x16;
              FUN_109cfff68(pfVar8,uVar24);
              if (pfVar8 != (float *)0x0) {
                pfVar8 = param_1 + 0x16;
                FUN_109cfff68(pfVar8,ppuVar23);
                if (pfVar8 != (float *)0x0) {
                  pfVar8 = param_1;
                  FUN_109cffc84(param_1,uVar24);
                  pfVar9 = param_1;
                  FUN_109cffc84(param_1,ppuVar23);
                  if (((*(char *)(pfVar8 + 2) == *(char *)(pfVar9 + 2)) && (pfVar8[1] == pfVar9[1]))
                     && (ABS(*pfVar8 - *pfVar9) < 1e-06)) goto LAB_109cfe790;
                }
              }
            }
            goto LAB_109cfe848;
          }
        }
        else if (iVar26 == 0x28) {
          if (*(int *)(ppuVar15 + 0x17) != 0) {
            lVar19 = (long)*(int *)(ppuVar15 + 0x17) << 2;
            piVar7 = (int *)ppuVar15[0x18];
            do {
              if (*piVar7 != 1) goto LAB_109cfe848;
              lVar19 = lVar19 + -4;
              piVar7 = piVar7 + 1;
            } while (lVar19 != 0);
          }
        }
        else if (iVar26 != 0x56) goto LAB_109cfe848;
LAB_109cfe790:
        if ((*(int *)(uVar17 + 0x38) != 1) || (*(int *)(uVar17 + 0x20) != 1)) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&uStack_140,&DAT_10f638984,(ulong)ppuVar2[0x20] & 0xfffffffffffffffc);
          func_0x000109259240(&uStack_1a0,&uStack_140,&UNK_10f5ab1eb);
          FUN_109cd8934(&uStack_1a0);
          goto LAB_109cfee9c;
        }
        uVar27 = *(ulong *)(uVar17 + 0x18);
        puVar21 = (ulong *)(uVar17 + 0x18);
        if ((uVar27 & 1) != 0) {
          puVar21 = (ulong *)(uVar27 + 7);
        }
        uVar24 = *puVar21;
        uVar27 = *(ulong *)(uVar17 + 0x30);
        puVar21 = (ulong *)(uVar17 + 0x30);
        if ((uVar27 & 1) != 0) {
          puVar21 = (ulong *)(uVar27 + 7);
        }
        uVar17 = *puVar21;
        ppuVar23 = apuStack_b0;
        FUN_109cedb48(ppuVar23,uVar24);
        if (ppuVar23 == (undefined8 **)0x0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&uStack_140,&UNK_10f5ab171,uVar24);
          func_0x000109259240(&uStack_1a0,&uStack_140,&DAT_10f638984);
          FUN_109cd8934(&uStack_1a0);
          goto LAB_109cfee9c;
        }
        ppuVar18 = apuStack_b0;
        FUN_109cedb48(ppuVar18,uVar17);
        if (ppuVar18 == (undefined8 **)0x0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&uStack_140,&UNK_10f5ab18b,uVar17);
          func_0x000109259240(&uStack_1a0,&uStack_140,&DAT_10f638984);
          FUN_109cd8934(&uStack_1a0);
          goto LAB_109cfee9c;
        }
        if ((((*(int *)(ppuVar23 + 5) == *(int *)(ppuVar18 + 5)) &&
             (*(int *)((long)ppuVar23 + 0x2c) == *(int *)((long)ppuVar18 + 0x2c))) &&
            (*(int *)(ppuVar23 + 6) == *(int *)(ppuVar18 + 6))) &&
           (*(int *)((long)ppuVar23 + 0x34) == *(int *)((long)ppuVar18 + 0x34))) {
          func_0x000107c2827c(&uStack_110,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc,
                              (ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
        }
      }
LAB_109cfe848:
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar25);
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_120 = 0x3f800000;
  if (*(char *)((long)param_1 + 9) == '\a') {
    FUN_109cfa8ac(&uStack_1a0,ppuVar22);
    FUN_109cfab3c(&uStack_1a0,&uStack_110,&uStack_140);
    func_0x0001092b0b8c(auStack_168);
    func_0x0001092b0b8c(&uStack_190);
    if (plStack_198 != (long *)0x0) {
      plVar28 = plStack_198 + 1;
      do {
        lVar19 = *plVar28;
        cVar3 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar32) {
          *plVar28 = lVar19 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_198);
      }
    }
  }
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_180 = 0x3f800000;
  lVar33 = *(long *)(param_1 + 0xc);
  for (lVar19 = *(long *)(param_1 + 10); lVar19 != lVar33; lVar19 = lVar19 + 0x68) {
    func_0x000107c2827c(&uStack_1a0,lVar19,lVar19);
  }
  plVar28 = plStack_100;
  if (plStack_100 != (long *)0x0) {
LAB_109cfe958:
    ppuVar18 = &puStack_e0;
    func_0x000107c31944(ppuVar18,plVar28 + 2);
    ppuVar23 = ppuStack_d8;
    if (ppuStack_d8 != (undefined8 **)0x0) {
      uVar17 = (long)ppuStack_d8 - 1;
      if (((ulong)ppuStack_d8 & uVar17) == 0) {
        ppuVar29 = (undefined8 **)(uVar17 & (ulong)ppuVar18);
      }
      else {
        ppuVar29 = ppuVar18;
        if (ppuStack_d8 <= ppuVar18) {
          uVar27 = 0;
          if (ppuStack_d8 != (undefined8 **)0x0) {
            uVar27 = (ulong)ppuVar18 / (ulong)ppuStack_d8;
          }
          ppuVar29 = (undefined8 **)((long)ppuVar18 - uVar27 * (long)ppuStack_d8);
        }
      }
      if (((long *)puStack_e0[(long)ppuVar29] != (long *)0x0) &&
         (plVar31 = *(long **)puStack_e0[(long)ppuVar29], plVar31 != (long *)0x0)) {
        do {
          ppuVar13 = (undefined8 **)plVar31[1];
          if (ppuVar13 == ppuVar18) {
            ppuVar13 = &puStack_e0;
            func_0x000104c4fbc4(ppuVar13,plVar31 + 2,plVar28 + 2);
            if (((ulong)ppuVar13 & 1) != 0) goto LAB_109cfea04;
          }
          else {
            if (((ulong)ppuVar23 & uVar17) == 0) {
              ppuVar13 = (undefined8 **)((ulong)ppuVar13 & uVar17);
            }
            else if (ppuVar23 <= ppuVar13) {
              uVar27 = 0;
              if (ppuVar23 != (undefined8 **)0x0) {
                uVar27 = (ulong)ppuVar13 / (ulong)ppuVar23;
              }
              ppuVar13 = (undefined8 **)((long)ppuVar13 - uVar27 * (long)ppuVar23);
            }
            if (ppuVar13 != ppuVar29) break;
          }
          plVar31 = (long *)*plVar31;
          if (plVar31 == (long *)0x0) break;
        } while( true );
      }
    }
    func_0x000109262df8(&UNK_10f639994);
LAB_109cfee9c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109cfeea0);
    (*pcVar6)();
  }
LAB_109cfea5c:
  puVar12 = *ppuVar22;
  puVar25 = puVar12 + 0xd;
  puVar14 = puVar25;
  if ((*puVar25 & 1) != 0) {
    puVar14 = (ulong *)(*puVar25 + 7);
  }
  iVar26 = *(int *)(puVar12 + 0xe);
  puVar30 = puVar14 + iVar26;
  puVar21 = puVar30;
  if (iVar26 != 0) {
    lVar19 = (long)iVar26 * 8;
    do {
      lVar19 = lVar19 + -8;
      ppuVar2 = &PTR_PTR_1132eca28;
      if (*(undefined ***)(*puVar14 + 0x48) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(*puVar14 + 0x48);
      }
      puVar10 = &uStack_110;
      func_0x0001067e045c(puVar10,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
      if (puVar10 != (undefined8 *)0x0) {
        puVar21 = puVar14;
        if ((puVar14 != puVar30) && (puVar14 + 1 != puVar30)) {
          lVar33 = 8;
          do {
            ppuVar15 = *(undefined ***)(*(long *)((long)puVar14 + lVar33) + 0x48);
            ppuVar2 = &PTR_PTR_1132eca28;
            if (ppuVar15 != (undefined **)0x0) {
              ppuVar2 = ppuVar15;
            }
            puVar10 = &uStack_110;
            func_0x0001067e045c(puVar10,(ulong)ppuVar2[0x1f] & 0xfffffffffffffffc);
            if (puVar10 == (undefined8 *)0x0) {
              uVar17 = *(ulong *)((long)puVar14 + lVar33);
              uVar27 = *puVar21;
              if (uVar27 != uVar17) {
                uVar24 = *(ulong *)(uVar27 + 8);
                if ((uVar24 & 1) != 0) {
                  uVar24 = *(ulong *)(uVar24 & 0xfffffffffffffffe);
                }
                uVar11 = *(ulong *)(uVar17 + 8);
                if ((uVar11 & 1) != 0) {
                  uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
                }
                if (uVar24 == uVar11) {
                  func_0x000109c0d8cc(uVar27,uVar17);
                }
                else {
                  func_0x000109c0d3b4(uVar27);
                  func_0x000109c0d800(uVar27,uVar17);
                }
              }
              puVar21 = puVar21 + 1;
            }
            lVar33 = lVar33 + 8;
            lVar19 = lVar19 + -8;
          } while (lVar19 != 0);
        }
        break;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar30);
  }
  puVar14 = puVar25;
  if ((puVar12[0xd] & 1) != 0) {
    puVar14 = (ulong *)(puVar12[0xd] + 7);
  }
  uVar17 = (ulong)((long)puVar21 - (long)puVar14) >> 3;
  iVar26 = (int)uVar17;
  uVar4 = *(int *)(puVar12 + 0xe) - iVar26;
  if (0 < (int)uVar4) {
    puVar14 = puVar14 + iVar26;
    lVar19 = puVar12[0xf];
    uVar27 = (ulong)uVar4;
    do {
      if ((lVar19 == 0) && ((long *)*puVar14 != (long *)0x0)) {
        (**(code **)(*(long *)*puVar14 + 8))();
      }
      puVar14 = puVar14 + 1;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
    func_0x00010b4d370c(puVar25,uVar17,(ulong)uVar4);
  }
  puVar14 = *ppuVar22 + 0xd;
  uVar17 = *puVar14;
  if ((uVar17 & 1) != 0) {
    puVar14 = (ulong *)(uVar17 + 7);
  }
  iVar26 = *(int *)(*ppuVar22 + 0xe);
  if (iVar26 != 0) {
    puVar25 = puVar14 + iVar26;
    do {
      uVar17 = *puVar14;
      puVar30 = (ulong *)(uVar17 + 0x30);
      puVar21 = puVar30;
      if ((*puVar30 & 1) != 0) {
        puVar21 = (ulong *)(*puVar30 + 7);
      }
      if (*(int *)(uVar17 + 0x38) != 0) {
        bVar32 = false;
        puVar1 = puVar21 + *(int *)(uVar17 + 0x38);
        do {
          while( true ) {
            uVar27 = *puVar21;
            puVar12 = &uStack_140;
            func_0x000104c5e210(puVar12,uVar27);
            if (puVar12 != (undefined8 *)0x0) break;
            puVar21 = puVar21 + 1;
            if (puVar21 == puVar1) {
              if (!bVar32) goto LAB_109cfecf0;
              goto LAB_109cfec9c;
            }
          }
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (uVar27,puVar12 + 5);
            puVar12 = &uStack_140;
            func_0x000104c5e210(puVar12,uVar27);
          } while (puVar12 != (undefined8 *)0x0);
          puVar21 = puVar21 + 1;
          bVar32 = true;
        } while (puVar21 != puVar1);
LAB_109cfec9c:
        *(uint *)(uVar17 + 0x10) = *(uint *)(uVar17 + 0x10) | 1;
        uVar27 = *(ulong *)(uVar17 + 0x48);
        if (uVar27 == 0) {
          uVar27 = *(ulong *)(uVar17 + 8);
          if ((uVar27 & 1) != 0) {
            uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
          }
          func_0x000109c0fb5c();
          *(ulong *)(uVar17 + 0x48) = uVar27;
        }
        if ((*puVar30 & 1) != 0) {
          puVar30 = (ulong *)(*puVar30 + 7);
        }
        uVar24 = *puVar30;
        *(uint *)(uVar27 + 0x10) = *(uint *)(uVar27 + 0x10) | 1;
        uVar11 = *(ulong *)(uVar27 + 8);
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        func_0x000107c30248(uVar27 + 0xf8,uVar24,uVar11);
      }
LAB_109cfecf0:
      uVar27 = *(ulong *)(uVar17 + 0x18);
      puVar21 = (ulong *)(uVar17 + 0x18);
      if ((uVar27 & 1) != 0) {
        puVar21 = (ulong *)(uVar27 + 7);
      }
      if (*(int *)(uVar17 + 0x20) != 0) {
        puVar30 = puVar21 + *(int *)(uVar17 + 0x20);
        do {
          uVar17 = *puVar21;
          puVar12 = &uStack_140;
          func_0x000104c5e210(puVar12,uVar17);
          while (puVar12 != (undefined8 *)0x0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (uVar17,puVar12 + 5);
            puVar12 = &uStack_140;
            func_0x000104c5e210(puVar12,uVar17);
          }
          puVar21 = puVar21 + 1;
        } while (puVar21 != puVar30);
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar25);
  }
  FUN_109cfcef8(param_1,apuStack_b0);
  FUN_109cfd168(param_1,apuStack_b0);
  FUN_109cfefe4(param_1);
  FUN_109cff368(param_1);
  func_0x000107c2826c(&uStack_1a0);
  func_0x000104c4f944(&uStack_140);
  func_0x000107c2826c(&uStack_110);
  FUN_109d009e8(&puStack_e0);
LAB_109cfedb8:
  func_0x0001094a866c(apuStack_b0);
  return;
LAB_109cfea04:
  puVar14 = (ulong *)(plVar31[5] + 0x18);
  uVar17 = *puVar14;
  if ((uVar17 & 1) != 0) {
    puVar14 = (ulong *)(uVar17 + 7);
  }
  uVar27 = *puVar14;
  puVar14 = (ulong *)(plVar31[5] + 0x30);
  uVar17 = *puVar14;
  if ((uVar17 & 1) != 0) {
    puVar14 = (ulong *)(uVar17 + 7);
  }
  uVar24 = *puVar14;
  puVar12 = &uStack_1a0;
  func_0x0001067e045c(puVar12,uVar24);
  uVar17 = uVar27;
  if (puVar12 != (undefined8 *)0x0) {
    uVar17 = uVar24;
    uVar24 = uVar27;
  }
  FUN_109cfa5ec(&uStack_140,uVar24,uVar24,uVar17);
  plVar28 = (long *)*plVar28;
  if (plVar28 == (long *)0x0) goto LAB_109cfea5c;
  goto LAB_109cfe958;
}



/* Entry: 109cfefb4; end: 109cfefe3;  */

long FUN_109cfefb4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x0001092b0b8c(param_1 + 0x38);
  func_0x0001092b0b8c(param_1 + 0x10);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109cfefe4; end: 109cff367;  */

void FUN_109cfefe4(float *param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 ****ppppuVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ulong *puVar8;
  code *pcVar9;
  uint *puVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong *puVar23;
  long *plVar24;
  undefined **ppuVar25;
  ulong *puVar26;
  int iVar27;
  undefined *puVar28;
  undefined4 uVar29;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long lStack_218;
  undefined4 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined4 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 ***apppuStack_188 [2];
  char cStack_171;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined4 uStack_120;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  
  puVar17 = (ulong *)(*(long *)(param_1 + 0x12) + 0x68);
  uVar19 = *puVar17;
  if ((uVar19 & 1) != 0) {
    puVar17 = (ulong *)(uVar19 + 7);
  }
  iVar27 = *(int *)(*(long *)(param_1 + 0x12) + 0x70);
  if (iVar27 != 0) {
    puVar1 = puVar17 + iVar27;
    do {
      uVar19 = *puVar17;
      *(uint *)(uVar19 + 0x10) = *(uint *)(uVar19 + 0x10) | 1;
      ppuVar25 = *(undefined ***)(uVar19 + 0x48);
      if (ppuVar25 == (undefined **)0x0) {
        ppuVar25 = *(undefined ***)(uVar19 + 8);
        if (((ulong)ppuVar25 & 1) != 0) {
          ppuVar25 = *(undefined ***)((ulong)ppuVar25 & 0xfffffffffffffffe);
        }
        func_0x000109c0fb5c();
        *(undefined ***)(uVar19 + 0x48) = ppuVar25;
      }
      ppuVar3 = &PTR_PTR_1132eca28;
      if (ppuVar25 != (undefined **)0x0) {
        ppuVar3 = ppuVar25;
      }
      puVar28 = ppuVar3[0x20];
      puVar10 = (uint *)((ulong)puVar28 & 0xfffffffffffffffc);
      FUN_109ce6364();
      if ((*(char *)((long)ppuVar25 + 0x1a4) == '\x01') && (*(int *)((long)ppuVar25 + 0x194) == 2))
      {
        uVar5 = *puVar10;
        uVar18 = (ulong)uVar5;
        if ((uVar5 == 0x24) &&
           ((*(int *)((long)ppuVar25 + 0x19c) == 2 && (*(int *)(ppuVar25 + 0x33) == 1)))) {
          *(uint *)(ppuVar25 + 2) = *(uint *)(ppuVar25 + 2) | 2;
          puVar28 = ppuVar25[1];
          if (((ulong)puVar28 & 1) != 0) {
            puVar28 = *(undefined **)((ulong)puVar28 & 0xfffffffffffffffe);
          }
          func_0x00010b4bf088(ppuVar25 + 0x20,&UNK_10f5a3b8e,4,puVar28);
          *(undefined4 *)((long)ppuVar25 + 0x124) = 3;
          ppuVar25[0x33] = (undefined *)0x0;
          ppuVar25[2] = (undefined *)((ulong)ppuVar25[2] & 0xffffffcfffffffff | 0x80);
        }
        else if (*(char *)((long)param_1 + 9) == '\x04') {
          if (uVar5 < 0x24) {
            if ((1L << (uVar18 & 0x3f) & 0x800680018U) == 0) {
              if (uVar18 == 0x10) goto LAB_109cff1e8;
              if (uVar18 != 0x1a) goto LAB_109cff1f8;
              if (*(int *)(ppuVar25 + 0x3f) != 0) goto LAB_109cff238;
            }
LAB_109cff140:
            uVar18 = *(ulong *)(uVar19 + 0x18);
            puVar26 = (ulong *)(uVar19 + 0x18);
            if ((uVar18 & 1) != 0) {
              puVar26 = (ulong *)(uVar18 + 7);
            }
            uVar18 = *(ulong *)(uVar19 + 0x30);
            puVar23 = (ulong *)(uVar19 + 0x30);
            if ((uVar18 & 1) != 0) {
              puVar23 = (ulong *)(uVar18 + 7);
            }
            uVar19 = *puVar23;
            pfVar11 = param_1;
            FUN_109cffc84(param_1,*puVar26);
            pfVar12 = param_1;
            FUN_109cffc84(param_1,uVar19);
            if (((0.001 < ABS(*pfVar11 - *pfVar12)) || (pfVar11[1] != pfVar12[1])) ||
               (*(char *)(pfVar11 + 2) != *(char *)(pfVar12 + 2))) {
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_a0,&UNK_10f5ab21e,(ulong)puVar28 & 0xfffffffffffffffc);
              func_0x000109259240(auStack_88,auStack_a0,&UNK_10f5ab235);
              FUN_109cd8934(auStack_88);
              goto LAB_109cff310;
            }
          }
          else {
LAB_109cff1f8:
            if (uVar5 == 1) {
              if (*(int *)((long)ppuVar25 + 0x124) == 3) goto LAB_109cff140;
            }
            else if (uVar5 == 2) goto LAB_109cff208;
LAB_109cff238:
            lVar20 = 0;
            while (*(uint *)(&UNK_10e03fd68 + lVar20) != uVar5) {
              lVar20 = lVar20 + 4;
              if (lVar20 == 0x54) goto LAB_109cff2ac;
            }
            if (lVar20 == 0x54) {
LAB_109cff2ac:
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_a0,&UNK_10f5ab349,(ulong)puVar28 & 0xfffffffffffffffc);
              func_0x000109259240(auStack_88,auStack_a0,&UNK_10f5ab356);
              FUN_109cd8934(auStack_88);
LAB_109cff310:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x109cff314);
              (*pcVar9)();
            }
          }
        }
        else if (uVar5 == 2) {
LAB_109cff208:
          puVar28 = ppuVar25[4];
          ppuVar25 = ppuVar25 + 4;
          if (((ulong)puVar28 & 1) != 0) {
            ppuVar25 = (undefined **)(puVar28 + 7);
          }
          if (*(int *)(*ppuVar25 + 0x18) != 1) {
LAB_109cff320:
            puVar13 = (undefined4 *)&UNK_10f5ab2ea;
            FUN_109cd880c();
            if (cStack_71 < '\0') {
              __ZdlPv(auStack_88[0]);
            }
            if (cStack_89 < '\0') {
              __ZdlPv(auStack_a0[0]);
            }
            __Unwind_Resume();
            uStack_1f8 = 0;
            uStack_200 = 0;
            lStack_1e8 = 0;
            lStack_1f0 = 0;
            uStack_1e0 = 0x3f800000;
            uStack_228 = 0;
            uStack_230 = 0;
            lStack_218 = 0;
            plStack_220 = (long *)0x0;
            uStack_210 = 0x3f800000;
            uStack_258 = 0;
            uStack_260 = 0;
            uStack_248 = 0;
            plStack_250 = (long *)0x0;
            uStack_240 = 0x3f800000;
            puVar17 = (ulong *)(*(long *)(puVar13 + 0x12) + 0x68);
            uVar19 = *puVar17;
            if ((uVar19 & 1) != 0) {
              puVar17 = (ulong *)(uVar19 + 7);
            }
            iVar27 = *(int *)(*(long *)(puVar13 + 0x12) + 0x70);
            if (iVar27 != 0) {
              puVar1 = puVar17 + iVar27;
              do {
                uVar18 = *puVar17;
                uVar19 = *(ulong *)(uVar18 + 0x18);
                puVar26 = (ulong *)(uVar18 + 0x18);
                if ((uVar19 & 1) != 0) {
                  puVar26 = (ulong *)(uVar19 + 7);
                }
                if (*(int *)(uVar18 + 0x20) != 0) {
                  lVar20 = (long)*(int *)(uVar18 + 0x20) << 3;
                  do {
                    uVar19 = *puVar26;
                    uVar14 = *(undefined8 *)(uVar18 + 0x48);
                    FUN_109d0004c(uVar14,1);
                    puVar15 = &uStack_260;
                    if ((int)uVar14 == 0) {
                      puVar15 = &uStack_230;
                    }
                    func_0x000107c2827c(puVar15,uVar19,uVar19);
                    lVar20 = lVar20 + -8;
                    puVar26 = puVar26 + 1;
                  } while (lVar20 != 0);
                }
                uVar19 = *(ulong *)(uVar18 + 0x48);
                FUN_109d0004c(uVar19,0);
                if ((uVar19 & 1) == 0) {
                  uVar19 = *(ulong *)(uVar18 + 0x30);
                  puVar26 = (ulong *)(uVar18 + 0x30);
                  if ((uVar19 & 1) != 0) {
                    puVar26 = (ulong *)(uVar19 + 7);
                  }
                  if (*(int *)(uVar18 + 0x38) != 0) {
                    lVar20 = (long)*(int *)(uVar18 + 0x38) << 3;
                    do {
                      func_0x000107c2827c(&uStack_200,*puVar26,*puVar26);
                      lVar20 = lVar20 + -8;
                      puVar26 = puVar26 + 1;
                    } while (lVar20 != 0);
                  }
                }
                puVar17 = puVar17 + 1;
              } while (puVar17 != puVar1);
              if (lStack_218 != 0) {
                uStack_138 = 0;
                uStack_140 = 0;
                lStack_128 = 0;
                uStack_130 = 0;
                uStack_120 = 0x3f800000;
                plVar24 = plStack_220;
                if (plStack_220 != (long *)0x0) {
                  do {
                    puVar15 = &uStack_200;
                    func_0x0001067e045c(puVar15,plVar24 + 2);
                    if (puVar15 == (undefined8 *)0x0) {
                      func_0x000107c2827c(&uStack_140,plVar24 + 2,plVar24 + 2);
                    }
                    plVar24 = (long *)*plVar24;
                  } while (plVar24 != (long *)0x0);
                  if (lStack_128 != 0) {
                    uStack_168 = 0;
                    uStack_170 = 0;
                    uStack_158 = 0;
                    uStack_160 = 0;
                    uStack_150 = 0x3f800000;
                    lVar20 = *(long *)(puVar13 + 0x12);
                    if (0 < *(int *)(lVar20 + 0x70)) {
                      iVar27 = 0;
                      do {
                        uVar19 = *(ulong *)(lVar20 + 0x68);
                        puVar17 = (ulong *)(lVar20 + 0x68);
                        if ((uVar19 & 1) != 0) {
                          puVar17 = (ulong *)(uVar19 + (long)iVar27 * 8 + 7);
                        }
                        uVar18 = *puVar17;
                        uVar19 = *(ulong *)(uVar18 + 0x48);
                        FUN_109d0004c(uVar19,1);
                        if ((uVar19 & 1) == 0) {
                          uVar19 = *(ulong *)(uVar18 + 0x18);
                          puVar17 = (ulong *)(uVar18 + 0x18);
                          if ((uVar19 & 1) != 0) {
                            puVar17 = (ulong *)(uVar19 + 7);
                          }
                          if (*(int *)(uVar18 + 0x20) != 0) {
                            puVar1 = puVar17 + *(int *)(uVar18 + 0x20);
                            do {
                              puVar26 = (ulong *)*puVar17;
                              puVar15 = &uStack_170;
                              FUN_109ce5028(puVar15,puVar26);
                              if (puVar15 == (undefined8 *)0x0) {
                                puVar15 = &uStack_140;
                                func_0x0001067e045c(puVar15,puVar26);
                                if (puVar15 != (undefined8 *)0x0) {
                                  uVar19 = puVar26[1];
                                  if (-1 < (char)*(byte *)((long)puVar26 + 0x17)) {
                                    uVar19 = (ulong)*(byte *)((long)puVar26 + 0x17);
                                  }
                                  func_0x000104c4f768(apppuStack_188,uVar19 + 0x15,&ppuStack_1d8);
                                  ppppuVar4 = (undefined8 ****)apppuStack_188[0];
                                  if (-1 < cStack_171) {
                                    ppppuVar4 = apppuStack_188;
                                  }
                                  if (uVar19 != 0) {
                                    puVar23 = (ulong *)*puVar26;
                                    if (-1 < *(char *)((long)puVar26 + 0x17)) {
                                      puVar23 = puVar26;
                                    }
                                    _memmove(ppppuVar4,puVar23,uVar19);
                                  }
                                  puVar15 = (undefined8 *)((long)ppppuVar4 + uVar19);
                                  puVar15[1] = 0x6e31646e31665f65;
                                  *puVar15 = 0x7a69746e6175715f;
                                  *(undefined8 *)((long)puVar15 + 0xd) = 0x306d336e676e3164;
                                  *(undefined1 *)((long)puVar15 + 0x15) = 0;
                                  ppuStack_1d8 = &PTR_DAT_110b2ba88;
                                  uStack_1d0 = 0;
                                  uStack_1c0 = 0;
                                  uStack_1b0 = 0;
                                  uStack_1b8 = 0;
                                  uStack_1a0 = 0;
                                  uStack_1a8 = 0;
                                  lStack_190 = 0;
                                  uStack_198 = 0;
                                  uStack_1c8 = 1;
                                  lVar20 = 0;
                                  func_0x000109c0fb5c();
                                  lStack_190 = lVar20;
                                  func_0x000107c303b4(&uStack_1c0);
                                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                            ();
                                  func_0x000107c303b4(&uStack_1a8);
                                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                            ();
                                  *(uint *)(lVar20 + 0x10) = *(uint *)(lVar20 + 0x10) | 1;
                                  uVar19 = *(ulong *)(lVar20 + 8);
                                  if ((uVar19 & 1) != 0) {
                                    uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
                                  }
                                  func_0x000107c30248(lVar20 + 0xf8,apppuStack_188,uVar19);
                                  *(uint *)(lVar20 + 0x10) = *(uint *)(lVar20 + 0x10) | 2;
                                  uVar19 = *(ulong *)(lVar20 + 8);
                                  if ((uVar19 & 1) != 0) {
                                    uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
                                  }
                                  func_0x00010b4bf088(lVar20 + 0x100,&UNK_10f5a5823,8,uVar19);
                                  puVar16 = puVar13;
                                  FUN_109cffc84(puVar13,puVar26);
                                  uVar29 = *puVar16;
                                  bVar6 = *(byte *)(puVar16 + 2);
                                  *(undefined4 *)(lVar20 + 0x1a0) = puVar16[1];
                                  *(undefined4 *)(lVar20 + 0x200) = uVar29;
                                  *(uint *)(lVar20 + 0x204) = (uint)bVar6;
                                  *(ulong *)(lVar20 + 0x14) =
                                       *(ulong *)(lVar20 + 0x14) | 0x1800000040;
                                  FUN_109d00a80(&uStack_170,puVar26,puVar26,apppuStack_188);
                                  FUN_109d007e0(*(long *)(puVar13 + 0x12) + 0x68,&ppuStack_1d8);
                                  iVar7 = *(int *)(*(long *)(puVar13 + 0x12) + 0x70);
                                  if (iVar27 < iVar7 + -1) {
                                    lVar20 = (long)iVar7 + -1;
                                    lVar22 = (long)iVar7 << 3;
                                    do {
                                      puVar23 = (ulong *)(*(long *)(puVar13 + 0x12) + 0x68);
                                      lVar2 = *puVar23 + lVar22;
                                      puVar8 = puVar23;
                                      if ((*puVar23 & 1) != 0) {
                                        puVar23 = (ulong *)(lVar2 + -9);
                                        puVar8 = (ulong *)(lVar2 + -1);
                                      }
                                      uVar19 = *puVar8;
                                      *puVar8 = *puVar23;
                                      *puVar23 = uVar19;
                                      lVar20 = lVar20 + -1;
                                      lVar22 = lVar22 + -8;
                                    } while (iVar27 < lVar20);
                                  }
                                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                            (puVar26,apppuStack_188);
                                  func_0x000109c0d344(&ppuStack_1d8);
                                  if (cStack_171 < '\0') {
                                    __ZdlPv(apppuStack_188[0]);
                                  }
                                  iVar27 = iVar27 + 1;
                                }
                              }
                              else {
                                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                          (puVar26,puVar15 + 5);
                              }
                              puVar17 = puVar17 + 1;
                            } while (puVar17 != puVar1);
                          }
                        }
                        iVar27 = iVar27 + 1;
                        lVar20 = *(long *)(puVar13 + 0x12);
                      } while (iVar27 < *(int *)(lVar20 + 0x70));
                    }
                    func_0x000104c4f944(&uStack_170);
                  }
                }
                func_0x000107c2826c(&uStack_140);
              }
            }
            if (lStack_1e8 != 0) {
              uStack_138 = 0;
              uStack_140 = 0;
              lStack_128 = 0;
              uStack_130 = 0;
              uStack_120 = 0x3f800000;
              for (plVar24 = (long *)lStack_1f0; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24)
              {
                puVar15 = &uStack_230;
                func_0x0001067e045c(puVar15,plVar24 + 2);
                if (puVar15 == (undefined8 *)0x0) {
                  func_0x000107c2827c(&uStack_140,plVar24 + 2,plVar24 + 2);
                }
              }
              lVar22 = *(long *)(puVar13 + 0xc);
              for (lVar20 = *(long *)(puVar13 + 10); plVar24 = plStack_250, lVar20 != lVar22;
                  lVar20 = lVar20 + 0x68) {
                puVar15 = &uStack_200;
                func_0x0001067e045c(puVar15,lVar20);
                if (puVar15 != (undefined8 *)0x0) {
                  func_0x000107c2827c(&uStack_140,lVar20,lVar20);
                }
              }
              for (; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
                puVar15 = &uStack_200;
                func_0x0001067e045c(puVar15,plVar24 + 2);
                if (puVar15 != (undefined8 *)0x0) {
                  func_0x000107c2827c(&uStack_140,plVar24 + 2,plVar24 + 2);
                }
              }
              if (lStack_128 != 0) {
                uStack_168 = 0;
                uStack_170 = 0;
                uStack_158 = 0;
                uStack_160 = 0;
                uStack_150 = 0x3f800000;
                lVar20 = *(long *)(puVar13 + 0x12);
                if (0 < *(int *)(lVar20 + 0x70)) {
                  iVar27 = 0;
                  do {
                    uVar19 = *(ulong *)(lVar20 + 0x68);
                    puVar17 = (ulong *)(lVar20 + 0x68);
                    if ((uVar19 & 1) != 0) {
                      puVar17 = (ulong *)(uVar19 + (long)iVar27 * 8 + 7);
                    }
                    uVar18 = *puVar17;
                    *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) | 1;
                    uVar19 = *(ulong *)(uVar18 + 0x48);
                    if (uVar19 == 0) {
                      uVar19 = *(ulong *)(uVar18 + 8);
                      if ((uVar19 & 1) != 0) {
                        uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
                      }
                      func_0x000109c0fb5c();
                      *(ulong *)(uVar18 + 0x48) = uVar19;
                    }
                    uVar21 = uVar19;
                    FUN_109d0004c(uVar19,1);
                    if ((uVar21 & 1) == 0) {
                      uVar21 = *(ulong *)(uVar18 + 0x18);
                      puVar17 = (ulong *)(uVar18 + 0x18);
                      if ((uVar21 & 1) != 0) {
                        puVar17 = (ulong *)(uVar21 + 7);
                      }
                      if (*(int *)(uVar18 + 0x20) != 0) {
                        lVar20 = (long)*(int *)(uVar18 + 0x20) << 3;
                        do {
                          uVar21 = *puVar17;
                          puVar15 = &uStack_170;
                          FUN_109ce5028(puVar15,uVar21);
                          if (puVar15 != (undefined8 *)0x0) {
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                      (uVar21,puVar15 + 5);
                          }
                          puVar17 = puVar17 + 1;
                          lVar20 = lVar20 + -8;
                        } while (lVar20 != 0);
                      }
                    }
                    uVar21 = *(ulong *)(uVar18 + 0x48);
                    FUN_109d0004c(uVar21,0);
                    if ((uVar21 & 1) == 0) {
                      uVar21 = *(ulong *)(uVar18 + 0x30);
                      puVar17 = (ulong *)(uVar18 + 0x30);
                      if ((uVar21 & 1) != 0) {
                        puVar17 = (ulong *)(uVar21 + 7);
                      }
                      if (*(int *)(uVar18 + 0x38) != 0) {
                        puVar1 = puVar17 + *(int *)(uVar18 + 0x38);
                        do {
                          puVar26 = (ulong *)*puVar17;
                          puVar15 = &uStack_140;
                          func_0x0001067e045c(puVar15,puVar26);
                          if (puVar15 != (undefined8 *)0x0) {
                            uVar18 = puVar26[1];
                            if (-1 < (char)*(byte *)((long)puVar26 + 0x17)) {
                              uVar18 = (ulong)*(byte *)((long)puVar26 + 0x17);
                            }
                            func_0x000104c4f768(apppuStack_188,uVar18 + 0x17,&ppuStack_1d8);
                            ppppuVar4 = (undefined8 ****)apppuStack_188[0];
                            if (-1 < cStack_171) {
                              ppppuVar4 = apppuStack_188;
                            }
                            if (uVar18 != 0) {
                              puVar23 = (ulong *)*puVar26;
                              if (-1 < *(char *)((long)puVar26 + 0x17)) {
                                puVar23 = puVar26;
                              }
                              _memmove(ppppuVar4,puVar23,uVar18);
                            }
                            puVar15 = (undefined8 *)((long)ppppuVar4 + uVar18);
                            puVar15[1] = 0x646e31665f657a69;
                            *puVar15 = 0x746e61757165645f;
                            *(undefined8 *)((long)puVar15 + 0xf) = 0x306d336e676e3164;
                            *(undefined1 *)((long)puVar15 + 0x17) = 0;
                            ppuStack_1d8 = &PTR_DAT_110b2ba88;
                            uStack_1d0 = 0;
                            uStack_1c0 = 0;
                            uStack_1b0 = 0;
                            uStack_1b8 = 0;
                            uStack_1a0 = 0;
                            uStack_1a8 = 0;
                            lStack_190 = 0;
                            uStack_198 = 0;
                            uStack_1c8 = 1;
                            lVar20 = 0;
                            func_0x000109c0fb5c();
                            lStack_190 = lVar20;
                            func_0x000107c303b4(&uStack_1c0);
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                      ();
                            func_0x000107c303b4(&uStack_1a8);
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                      ();
                            *(uint *)(lVar20 + 0x10) = *(uint *)(lVar20 + 0x10) | 1;
                            uVar18 = *(ulong *)(lVar20 + 8);
                            if ((uVar18 & 1) != 0) {
                              uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
                            }
                            func_0x000107c30248(lVar20 + 0xf8,puVar26,uVar18);
                            *(uint *)(lVar20 + 0x10) = *(uint *)(lVar20 + 0x10) | 2;
                            uVar18 = *(ulong *)(lVar20 + 8);
                            if ((uVar18 & 1) != 0) {
                              uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
                            }
                            func_0x00010b4bf088(lVar20 + 0x100,&UNK_10f5a5818,10,uVar18);
                            FUN_109d00a80(&uStack_170,puVar26,puVar26,apppuStack_188);
                            FUN_109d007e0(*(long *)(puVar13 + 0x12) + 0x68,&ppuStack_1d8);
                            iVar7 = *(int *)(*(long *)(puVar13 + 0x12) + 0x70);
                            iVar27 = iVar27 + 1;
                            if (iVar27 < iVar7 + -1) {
                              lVar20 = (long)iVar7 + -1;
                              lVar22 = (long)iVar7 << 3;
                              do {
                                puVar23 = (ulong *)(*(long *)(puVar13 + 0x12) + 0x68);
                                lVar2 = *puVar23 + lVar22;
                                puVar8 = puVar23;
                                if ((*puVar23 & 1) != 0) {
                                  puVar23 = (ulong *)(lVar2 + -9);
                                  puVar8 = (ulong *)(lVar2 + -1);
                                }
                                uVar18 = *puVar8;
                                *puVar8 = *puVar23;
                                *puVar23 = uVar18;
                                lVar20 = lVar20 + -1;
                                lVar22 = lVar22 + -8;
                              } while (iVar27 < lVar20);
                            }
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                      (puVar26,apppuStack_188);
                            *(uint *)(uVar19 + 0x10) = *(uint *)(uVar19 + 0x10) | 1;
                            uVar18 = *(ulong *)(uVar19 + 8);
                            if ((uVar18 & 1) != 0) {
                              uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
                            }
                            func_0x000107c30248(uVar19 + 0xf8,apppuStack_188,uVar18);
                            func_0x000109c0d344(&ppuStack_1d8);
                            if (cStack_171 < '\0') {
                              __ZdlPv(apppuStack_188[0]);
                            }
                          }
                          puVar17 = puVar17 + 1;
                        } while (puVar17 != puVar1);
                      }
                    }
                    iVar27 = iVar27 + 1;
                    lVar20 = *(long *)(puVar13 + 0x12);
                  } while (iVar27 < *(int *)(lVar20 + 0x70));
                }
                func_0x000104c4f944(&uStack_170);
              }
              func_0x000107c2826c(&uStack_140);
            }
            func_0x000109d00224(puVar13 + 0x16);
            func_0x000107c2826c(&uStack_260);
            func_0x000107c2826c(&uStack_230);
            func_0x000107c2826c(&uStack_200);
            return;
          }
        }
        else {
          if (uVar5 != 0x10) goto LAB_109cff238;
LAB_109cff1e8:
          if (2 < *(uint *)((long)ppuVar25 + 0x144)) {
            FUN_109cd880c(&UNK_10f5ab288);
            goto LAB_109cff320;
          }
        }
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar1);
  }
  return;
}



/* Entry: 109cff368; end: 109cffc83;  */

void FUN_109cff368(undefined4 *param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  byte bVar4;
  int iVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *puVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  undefined4 uVar20;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long lStack_178;
  undefined4 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined4 uStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 **appuStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined4 uStack_80;
  
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_148 = 0;
  lStack_150 = 0;
  uStack_140 = 0x3f800000;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_170 = 0x3f800000;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1a0 = 0x3f800000;
  puVar10 = (ulong *)(*(long *)(param_1 + 0x12) + 0x68);
  uVar11 = *puVar10;
  if ((uVar11 & 1) != 0) {
    puVar10 = (ulong *)(uVar11 + 7);
  }
  iVar17 = *(int *)(*(long *)(param_1 + 0x12) + 0x70);
  if (iVar17 != 0) {
    puVar1 = puVar10 + iVar17;
    do {
      uVar18 = *puVar10;
      uVar11 = *(ulong *)(uVar18 + 0x18);
      puVar16 = (ulong *)(uVar18 + 0x18);
      if ((uVar11 & 1) != 0) {
        puVar16 = (ulong *)(uVar11 + 7);
      }
      if (*(int *)(uVar18 + 0x20) != 0) {
        lVar19 = (long)*(int *)(uVar18 + 0x20) << 3;
        do {
          uVar11 = *puVar16;
          uVar7 = *(undefined8 *)(uVar18 + 0x48);
          FUN_109d0004c(uVar7,1);
          puVar8 = &uStack_1c0;
          if ((int)uVar7 == 0) {
            puVar8 = &uStack_190;
          }
          func_0x000107c2827c(puVar8,uVar11,uVar11);
          lVar19 = lVar19 + -8;
          puVar16 = puVar16 + 1;
        } while (lVar19 != 0);
      }
      uVar11 = *(ulong *)(uVar18 + 0x48);
      FUN_109d0004c(uVar11,0);
      if ((uVar11 & 1) == 0) {
        uVar11 = *(ulong *)(uVar18 + 0x30);
        puVar16 = (ulong *)(uVar18 + 0x30);
        if ((uVar11 & 1) != 0) {
          puVar16 = (ulong *)(uVar11 + 7);
        }
        if (*(int *)(uVar18 + 0x38) != 0) {
          lVar19 = (long)*(int *)(uVar18 + 0x38) << 3;
          do {
            func_0x000107c2827c(&uStack_160,*puVar16,*puVar16);
            lVar19 = lVar19 + -8;
            puVar16 = puVar16 + 1;
          } while (lVar19 != 0);
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
    if (lStack_178 != 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = 0x3f800000;
      plVar15 = plStack_180;
      if (plStack_180 != (long *)0x0) {
        do {
          puVar8 = &uStack_160;
          func_0x0001067e045c(puVar8,plVar15 + 2);
          if (puVar8 == (undefined8 *)0x0) {
            func_0x000107c2827c(&uStack_a0,plVar15 + 2,plVar15 + 2);
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
        if (lStack_88 != 0) {
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_b0 = 0x3f800000;
          lVar19 = *(long *)(param_1 + 0x12);
          if (0 < *(int *)(lVar19 + 0x70)) {
            iVar17 = 0;
            do {
              uVar11 = *(ulong *)(lVar19 + 0x68);
              puVar10 = (ulong *)(lVar19 + 0x68);
              if ((uVar11 & 1) != 0) {
                puVar10 = (ulong *)(uVar11 + (long)iVar17 * 8 + 7);
              }
              uVar18 = *puVar10;
              uVar11 = *(ulong *)(uVar18 + 0x48);
              FUN_109d0004c(uVar11,1);
              if ((uVar11 & 1) == 0) {
                uVar11 = *(ulong *)(uVar18 + 0x18);
                puVar10 = (ulong *)(uVar18 + 0x18);
                if ((uVar11 & 1) != 0) {
                  puVar10 = (ulong *)(uVar11 + 7);
                }
                if (*(int *)(uVar18 + 0x20) != 0) {
                  puVar1 = puVar10 + *(int *)(uVar18 + 0x20);
                  do {
                    puVar16 = (ulong *)*puVar10;
                    puVar8 = &uStack_d0;
                    FUN_109ce5028(puVar8,puVar16);
                    if (puVar8 == (undefined8 *)0x0) {
                      puVar8 = &uStack_a0;
                      func_0x0001067e045c(puVar8,puVar16);
                      if (puVar8 != (undefined8 *)0x0) {
                        uVar11 = puVar16[1];
                        if (-1 < (char)*(byte *)((long)puVar16 + 0x17)) {
                          uVar11 = (ulong)*(byte *)((long)puVar16 + 0x17);
                        }
                        func_0x000104c4f768(appuStack_e8,uVar11 + 0x15,&ppuStack_138);
                        pppuVar3 = (undefined8 ***)appuStack_e8[0];
                        if (-1 < cStack_d1) {
                          pppuVar3 = appuStack_e8;
                        }
                        if (uVar11 != 0) {
                          puVar14 = (ulong *)*puVar16;
                          if (-1 < *(char *)((long)puVar16 + 0x17)) {
                            puVar14 = puVar16;
                          }
                          _memmove(pppuVar3,puVar14,uVar11);
                        }
                        puVar8 = (undefined8 *)((long)pppuVar3 + uVar11);
                        puVar8[1] = 0x6e31646e31665f65;
                        *puVar8 = 0x7a69746e6175715f;
                        *(undefined8 *)((long)puVar8 + 0xd) = 0x306d336e676e3164;
                        *(undefined1 *)((long)puVar8 + 0x15) = 0;
                        ppuStack_138 = &PTR_DAT_110b2ba88;
                        uStack_130 = 0;
                        uStack_120 = 0;
                        uStack_110 = 0;
                        uStack_118 = 0;
                        uStack_100 = 0;
                        uStack_108 = 0;
                        lStack_f0 = 0;
                        uStack_f8 = 0;
                        uStack_128 = 1;
                        lVar19 = 0;
                        func_0x000109c0fb5c();
                        lStack_f0 = lVar19;
                        func_0x000107c303b4(&uStack_120);
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
                        func_0x000107c303b4(&uStack_108);
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
                        *(uint *)(lVar19 + 0x10) = *(uint *)(lVar19 + 0x10) | 1;
                        uVar11 = *(ulong *)(lVar19 + 8);
                        if ((uVar11 & 1) != 0) {
                          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
                        }
                        func_0x000107c30248(lVar19 + 0xf8,appuStack_e8,uVar11);
                        *(uint *)(lVar19 + 0x10) = *(uint *)(lVar19 + 0x10) | 2;
                        uVar11 = *(ulong *)(lVar19 + 8);
                        if ((uVar11 & 1) != 0) {
                          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
                        }
                        func_0x00010b4bf088(lVar19 + 0x100,&UNK_10f5a5823,8,uVar11);
                        puVar9 = param_1;
                        FUN_109cffc84(param_1,puVar16);
                        uVar20 = *puVar9;
                        bVar4 = *(byte *)(puVar9 + 2);
                        *(undefined4 *)(lVar19 + 0x1a0) = puVar9[1];
                        *(undefined4 *)(lVar19 + 0x200) = uVar20;
                        *(uint *)(lVar19 + 0x204) = (uint)bVar4;
                        *(ulong *)(lVar19 + 0x14) = *(ulong *)(lVar19 + 0x14) | 0x1800000040;
                        FUN_109d00a80(&uStack_d0,puVar16,puVar16,appuStack_e8);
                        FUN_109d007e0(*(long *)(param_1 + 0x12) + 0x68,&ppuStack_138);
                        iVar5 = *(int *)(*(long *)(param_1 + 0x12) + 0x70);
                        if (iVar17 < iVar5 + -1) {
                          lVar19 = (long)iVar5 + -1;
                          lVar13 = (long)iVar5 << 3;
                          do {
                            puVar14 = (ulong *)(*(long *)(param_1 + 0x12) + 0x68);
                            lVar2 = *puVar14 + lVar13;
                            puVar6 = puVar14;
                            if ((*puVar14 & 1) != 0) {
                              puVar14 = (ulong *)(lVar2 + -9);
                              puVar6 = (ulong *)(lVar2 + -1);
                            }
                            uVar11 = *puVar6;
                            *puVar6 = *puVar14;
                            *puVar14 = uVar11;
                            lVar19 = lVar19 + -1;
                            lVar13 = lVar13 + -8;
                          } while (iVar17 < lVar19);
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                  (puVar16,appuStack_e8);
                        func_0x000109c0d344(&ppuStack_138);
                        if (cStack_d1 < '\0') {
                          __ZdlPv(appuStack_e8[0]);
                        }
                        iVar17 = iVar17 + 1;
                      }
                    }
                    else {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                (puVar16,puVar8 + 5);
                    }
                    puVar10 = puVar10 + 1;
                  } while (puVar10 != puVar1);
                }
              }
              iVar17 = iVar17 + 1;
              lVar19 = *(long *)(param_1 + 0x12);
            } while (iVar17 < *(int *)(lVar19 + 0x70));
          }
          func_0x000104c4f944(&uStack_d0);
        }
      }
      func_0x000107c2826c(&uStack_a0);
    }
  }
  if (lStack_148 != 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    for (plVar15 = (long *)lStack_150; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      puVar8 = &uStack_190;
      func_0x0001067e045c(puVar8,plVar15 + 2);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x000107c2827c(&uStack_a0,plVar15 + 2,plVar15 + 2);
      }
    }
    lVar13 = *(long *)(param_1 + 0xc);
    for (lVar19 = *(long *)(param_1 + 10); plVar15 = plStack_1b0, lVar19 != lVar13;
        lVar19 = lVar19 + 0x68) {
      puVar8 = &uStack_160;
      func_0x0001067e045c(puVar8,lVar19);
      if (puVar8 != (undefined8 *)0x0) {
        func_0x000107c2827c(&uStack_a0,lVar19,lVar19);
      }
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      puVar8 = &uStack_160;
      func_0x0001067e045c(puVar8,plVar15 + 2);
      if (puVar8 != (undefined8 *)0x0) {
        func_0x000107c2827c(&uStack_a0,plVar15 + 2,plVar15 + 2);
      }
    }
    if (lStack_88 != 0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0x3f800000;
      lVar19 = *(long *)(param_1 + 0x12);
      if (0 < *(int *)(lVar19 + 0x70)) {
        iVar17 = 0;
        do {
          uVar11 = *(ulong *)(lVar19 + 0x68);
          puVar10 = (ulong *)(lVar19 + 0x68);
          if ((uVar11 & 1) != 0) {
            puVar10 = (ulong *)(uVar11 + (long)iVar17 * 8 + 7);
          }
          uVar18 = *puVar10;
          *(uint *)(uVar18 + 0x10) = *(uint *)(uVar18 + 0x10) | 1;
          uVar11 = *(ulong *)(uVar18 + 0x48);
          if (uVar11 == 0) {
            uVar11 = *(ulong *)(uVar18 + 8);
            if ((uVar11 & 1) != 0) {
              uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
            }
            func_0x000109c0fb5c();
            *(ulong *)(uVar18 + 0x48) = uVar11;
          }
          uVar12 = uVar11;
          FUN_109d0004c(uVar11,1);
          if ((uVar12 & 1) == 0) {
            uVar12 = *(ulong *)(uVar18 + 0x18);
            puVar10 = (ulong *)(uVar18 + 0x18);
            if ((uVar12 & 1) != 0) {
              puVar10 = (ulong *)(uVar12 + 7);
            }
            if (*(int *)(uVar18 + 0x20) != 0) {
              lVar19 = (long)*(int *)(uVar18 + 0x20) << 3;
              do {
                uVar12 = *puVar10;
                puVar8 = &uStack_d0;
                FUN_109ce5028(puVar8,uVar12);
                if (puVar8 != (undefined8 *)0x0) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (uVar12,puVar8 + 5);
                }
                puVar10 = puVar10 + 1;
                lVar19 = lVar19 + -8;
              } while (lVar19 != 0);
            }
          }
          uVar12 = *(ulong *)(uVar18 + 0x48);
          FUN_109d0004c(uVar12,0);
          if ((uVar12 & 1) == 0) {
            uVar12 = *(ulong *)(uVar18 + 0x30);
            puVar10 = (ulong *)(uVar18 + 0x30);
            if ((uVar12 & 1) != 0) {
              puVar10 = (ulong *)(uVar12 + 7);
            }
            if (*(int *)(uVar18 + 0x38) != 0) {
              puVar1 = puVar10 + *(int *)(uVar18 + 0x38);
              do {
                puVar16 = (ulong *)*puVar10;
                puVar8 = &uStack_a0;
                func_0x0001067e045c(puVar8,puVar16);
                if (puVar8 != (undefined8 *)0x0) {
                  uVar18 = puVar16[1];
                  if (-1 < (char)*(byte *)((long)puVar16 + 0x17)) {
                    uVar18 = (ulong)*(byte *)((long)puVar16 + 0x17);
                  }
                  func_0x000104c4f768(appuStack_e8,uVar18 + 0x17,&ppuStack_138);
                  pppuVar3 = (undefined8 ***)appuStack_e8[0];
                  if (-1 < cStack_d1) {
                    pppuVar3 = appuStack_e8;
                  }
                  if (uVar18 != 0) {
                    puVar14 = (ulong *)*puVar16;
                    if (-1 < *(char *)((long)puVar16 + 0x17)) {
                      puVar14 = puVar16;
                    }
                    _memmove(pppuVar3,puVar14,uVar18);
                  }
                  puVar8 = (undefined8 *)((long)pppuVar3 + uVar18);
                  puVar8[1] = 0x646e31665f657a69;
                  *puVar8 = 0x746e61757165645f;
                  *(undefined8 *)((long)puVar8 + 0xf) = 0x306d336e676e3164;
                  *(undefined1 *)((long)puVar8 + 0x17) = 0;
                  ppuStack_138 = &PTR_DAT_110b2ba88;
                  uStack_130 = 0;
                  uStack_120 = 0;
                  uStack_110 = 0;
                  uStack_118 = 0;
                  uStack_100 = 0;
                  uStack_108 = 0;
                  lStack_f0 = 0;
                  uStack_f8 = 0;
                  uStack_128 = 1;
                  lVar19 = 0;
                  func_0x000109c0fb5c();
                  lStack_f0 = lVar19;
                  func_0x000107c303b4(&uStack_120);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
                  func_0x000107c303b4(&uStack_108);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
                  *(uint *)(lVar19 + 0x10) = *(uint *)(lVar19 + 0x10) | 1;
                  uVar18 = *(ulong *)(lVar19 + 8);
                  if ((uVar18 & 1) != 0) {
                    uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
                  }
                  func_0x000107c30248(lVar19 + 0xf8,puVar16,uVar18);
                  *(uint *)(lVar19 + 0x10) = *(uint *)(lVar19 + 0x10) | 2;
                  uVar18 = *(ulong *)(lVar19 + 8);
                  if ((uVar18 & 1) != 0) {
                    uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
                  }
                  func_0x00010b4bf088(lVar19 + 0x100,&UNK_10f5a5818,10,uVar18);
                  FUN_109d00a80(&uStack_d0,puVar16,puVar16,appuStack_e8);
                  FUN_109d007e0(*(long *)(param_1 + 0x12) + 0x68,&ppuStack_138);
                  iVar5 = *(int *)(*(long *)(param_1 + 0x12) + 0x70);
                  iVar17 = iVar17 + 1;
                  if (iVar17 < iVar5 + -1) {
                    lVar19 = (long)iVar5 + -1;
                    lVar13 = (long)iVar5 << 3;
                    do {
                      puVar14 = (ulong *)(*(long *)(param_1 + 0x12) + 0x68);
                      lVar2 = *puVar14 + lVar13;
                      puVar6 = puVar14;
                      if ((*puVar14 & 1) != 0) {
                        puVar14 = (ulong *)(lVar2 + -9);
                        puVar6 = (ulong *)(lVar2 + -1);
                      }
                      uVar18 = *puVar6;
                      *puVar6 = *puVar14;
                      *puVar14 = uVar18;
                      lVar19 = lVar19 + -1;
                      lVar13 = lVar13 + -8;
                    } while (iVar17 < lVar19);
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (puVar16,appuStack_e8);
                  *(uint *)(uVar11 + 0x10) = *(uint *)(uVar11 + 0x10) | 1;
                  uVar18 = *(ulong *)(uVar11 + 8);
                  if ((uVar18 & 1) != 0) {
                    uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
                  }
                  func_0x000107c30248(uVar11 + 0xf8,appuStack_e8,uVar18);
                  func_0x000109c0d344(&ppuStack_138);
                  if (cStack_d1 < '\0') {
                    __ZdlPv(appuStack_e8[0]);
                  }
                }
                puVar10 = puVar10 + 1;
              } while (puVar10 != puVar1);
            }
          }
          iVar17 = iVar17 + 1;
          lVar19 = *(long *)(param_1 + 0x12);
        } while (iVar17 < *(int *)(lVar19 + 0x70));
      }
      func_0x000104c4f944(&uStack_d0);
    }
    func_0x000107c2826c(&uStack_a0);
  }
  func_0x000109d00224(param_1 + 0x16);
  func_0x000107c2826c(&uStack_1c0);
  func_0x000107c2826c(&uStack_190);
  func_0x000107c2826c(&uStack_160);
  return;
}



/* Entry: 109cffc84; end: 109cffd1f;  */

long FUN_109cffc84(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  param_1 = param_1 + 0x58;
  FUN_109cfff68();
  if (param_1 != 0) {
    return param_1 + 0x28;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_50,&UNK_10f5ab400,param_2);
  func_0x000109259240(auStack_38,auStack_50,&DAT_10f638984);
  FUN_109cd8934(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109cffcec);
  (*pcVar1)();
}



/* Entry: 109cffd20; end: 109cffda3;  */

void FUN_109cffd20(void)

{
  FUN_109cffda4();
  return;
}



/* Entry: 109cffda4; end: 109cffe17;  */

bool FUN_109cffda4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_2;
  plVar6 = (long *)*param_3;
  bVar3 = *(byte *)((long)plVar7 + 0x17);
  uVar1 = plVar7[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)plVar6 + 0x17);
  uVar2 = plVar6[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 == uVar2) {
    plVar5 = (long *)*plVar7;
    if (-1 < (char)bVar3) {
      plVar5 = plVar7;
    }
    plVar7 = (long *)*plVar6;
    if (-1 < (char)bVar4) {
      plVar7 = plVar6;
    }
    _memcmp(plVar5,plVar7);
    return (int)plVar5 == 0;
  }
  return false;
}



/* Entry: 109cffe18; end: 109cffe4b;  */

void FUN_109cffe18(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109cffe4c; end: 109cfff67;  */

void FUN_109cffe4c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)*param_1;
  if (*(int *)(puVar2 + 7) == 1) {
    uVar4 = param_3[1];
    uVar3 = *param_3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
    param_2[1] = uVar4;
    *param_2 = uVar3;
    cVar1 = *(char *)(param_2 + 6);
    if (cVar1 == *(char *)(param_3 + 6)) {
      if (cVar1 != '\0') {
        func_0x00010869edb0(param_2 + 3,param_3 + 3);
        func_0x000107426f80();
        func_0x00010869ed88();
        return;
      }
    }
    else if (cVar1 == '\0') {
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      uVar3 = param_3[3];
      param_2[4] = param_3[4];
      param_2[3] = uVar3;
      param_2[5] = param_3[5];
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      *(undefined1 *)(param_2 + 6) = 1;
    }
    else {
      if (param_2[3] != 0) {
        param_2[4] = param_2[3];
        __ZdlPv();
      }
      *(undefined1 *)(param_2 + 6) = 0;
    }
  }
  else {
    FUN_109cd3fa0(puVar2);
    uVar4 = param_3[1];
    uVar3 = *param_3;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + 2);
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    if (*(char *)(param_3 + 6) == '\x01') {
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      uVar3 = param_3[3];
      puVar2[4] = param_3[4];
      puVar2[3] = uVar3;
      puVar2[5] = param_3[5];
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      *(undefined1 *)(puVar2 + 6) = 1;
    }
    *(undefined4 *)(puVar2 + 7) = 1;
  }
  return;
}



/* Entry: 109cfff68; end: 109d0004b;  */

long FUN_109cfff68(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109d0004c; end: 109d0016b;  */

byte FUN_109d0004c(undefined **param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  
  ppuVar1 = &PTR_PTR_1132eca28;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  piVar5 = (int *)((ulong)ppuVar1[0x20] & 0xfffffffffffffffc);
  FUN_109ce6364();
  if (*(char *)((long)ppuVar1 + 0x1a4) == '\x01') {
    bVar3 = *(int *)((long)ppuVar1 + 0x194) != 2;
  }
  else {
    bVar3 = true;
  }
  iVar2 = *piVar5;
  if (param_2 == 0) {
    if (iVar2 == 0x26) {
      return 1;
    }
    bVar4 = iVar2 == 0x25;
  }
  else {
    if (iVar2 == 0x25) {
      return 1;
    }
    bVar4 = iVar2 == 0x26;
  }
  return !bVar4 & bVar3;
}



/* Entry: 109d0016c; end: 109d0017b;  */

void FUN_109d0016c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3e2d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d0017c; end: 109d0019b;  */

void FUN_109d0017c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b3e2d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d0019c; end: 109d001a7;  */

long FUN_109d0019c(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000109c0e85c(param_1 + 0x18);
  return param_1 + 0x18;
}



/* Entry: 109d001a8; end: 109d00277;  */

long * FUN_109d001a8(long *param_1)

{
  long lVar1;
  
  func_0x000109d001e0(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109d00278; end: 109d0034b;  */

void FUN_109d00278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,param_1);
  func_0x000107c31940(auStack_60,param_2);
  FUN_109d00350(uVar2,auStack_48,auStack_60,param_3);
  ___cxa_throw(uVar2,&PTR_DAT_110b3e378,FUN_109d0034c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d002f4);
  (*pcVar1)();
}



/* Entry: 109d0034c; end: 109d0034f;  */

void FUN_109d0034c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109d00350; end: 109d003e7;  */

undefined8 *
FUN_109d00350(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_48,&UNK_10f5ab42b,param_4);
  func_0x00010954ada4(param_1,param_2,param_3,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *param_1 = &PTR_FUN_110b3e3a0;
  return param_1;
}



/* Entry: 109d003e8; end: 109d003fb;  */

void FUN_109d003e8(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d003fc; end: 109d0063f;  */

undefined1  [16]
FUN_109d003fc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_109d005fc;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  FUN_109d00640(aplStack_78,param_1,plVar6,param_3,param_4);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    func_0x000104c4f9b8(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_109d005fc:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 109d00640; end: 109d0071b;  */

void FUN_109d00640(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar2 = *param_4;
    puVar1[3] = param_4[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_4[2];
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 5,*param_5,param_5[1]);
  }
  else {
    uVar2 = *param_5;
    puVar1[6] = param_5[1];
    puVar1[5] = uVar2;
    puVar1[7] = param_5[2];
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109d0071c; end: 109d0071f;  */

void FUN_109d0071c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109d00720; end: 109d00733;  */

void FUN_109d00720(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d00734; end: 109d0074b;  */

void FUN_109d00734(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109d00744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 109d0074c; end: 109d00783;  */

undefined8 FUN_109d0074c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b3e368);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d00784; end: 109d00787;  */

void FUN_109d00784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d00788; end: 109d007df;  */

long FUN_109d00788(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109d007e0; end: 109d0094b;  */

void FUN_109d007e0(ulong *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  iVar3 = (int)param_1[1];
  uVar5 = *param_1;
  if ((uVar5 & 1) == 0) {
    if (iVar3 < (int)(uint)(uVar5 != 0)) {
LAB_109d0082c:
      *(int *)(param_1 + 1) = iVar3 + 1;
      if ((uVar5 & 1) != 0) {
        param_1 = (ulong *)(uVar5 + (long)iVar3 * 8 + 7);
      }
      uVar5 = *param_1;
      if (uVar5 != param_2) {
        uVar6 = *(ulong *)(uVar5 + 8);
        if ((uVar6 & 1) != 0) {
          uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
        }
        uVar8 = *(ulong *)(param_2 + 8);
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        if (uVar6 == uVar8) {
          lVar4 = 0;
          uVar7 = *(undefined8 *)(uVar5 + 8);
          *(undefined8 *)(uVar5 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(param_2 + 8) = uVar7;
          uVar1 = *(undefined4 *)(uVar5 + 0x10);
          *(undefined4 *)(uVar5 + 0x10) = *(undefined4 *)(param_2 + 0x10);
          *(undefined4 *)(param_2 + 0x10) = uVar1;
          do {
            uVar2 = *(undefined1 *)(uVar5 + 0x18 + lVar4);
            *(undefined1 *)(uVar5 + 0x18 + lVar4) = *(undefined1 *)(param_2 + 0x18 + lVar4);
            *(undefined1 *)(param_2 + 0x18 + lVar4) = uVar2;
            lVar4 = lVar4 + 1;
          } while (lVar4 != 0x10);
          lVar4 = 0;
          do {
            uVar2 = *(undefined1 *)(uVar5 + 0x30 + lVar4);
            *(undefined1 *)(uVar5 + 0x30 + lVar4) = *(undefined1 *)(param_2 + 0x30 + lVar4);
            *(undefined1 *)(param_2 + 0x30 + lVar4) = uVar2;
            lVar4 = lVar4 + 1;
          } while (lVar4 != 0x10);
          uVar7 = *(undefined8 *)(uVar5 + 0x48);
          *(undefined8 *)(uVar5 + 0x48) = *(undefined8 *)(param_2 + 0x48);
          *(undefined8 *)(param_2 + 0x48) = uVar7;
          return;
        }
        func_0x000109c0d3b4(uVar5);
        func_0x000109c0d800(uVar5,param_2);
      }
      return;
    }
    if (uVar5 == 0) goto LAB_109d00894;
  }
  else {
    if (iVar3 < *(int *)(uVar5 - 1)) goto LAB_109d0082c;
    if (*(int *)(uVar5 - 1) <= *(int *)((long)param_1 + 0xc)) goto LAB_109d00894;
  }
  func_0x000107c303a8(param_1,1);
  uVar5 = *param_1;
LAB_109d00894:
  if ((uVar5 & 1) != 0) {
    *(int *)(uVar5 - 1) = *(int *)(uVar5 - 1) + 1;
  }
  uVar5 = param_1[2];
  if (uVar5 == 0) {
    uVar5 = 0x50;
    __Znwm();
  }
  else {
    func_0x00010b4d80e0(uVar5,0x50);
  }
  FUN_109d0094c();
  uVar6 = param_1[1];
  *(int *)(param_1 + 1) = (int)uVar6 + 1;
  if ((*param_1 & 1) != 0) {
    param_1 = (ulong *)(*param_1 + (long)(int)uVar6 * 8 + 7);
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 109d0094c; end: 109d009e7;  */

undefined8 * FUN_109d0094c(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  *param_1 = &PTR_DAT_110b2ba88;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  if (param_1 != param_3) {
    if ((param_2 & 1) != 0) {
      param_2 = *(ulong *)(param_2 & 0xfffffffffffffffe);
    }
    uVar1 = param_3[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (param_2 == uVar1) {
      func_0x000109c0d8cc(param_1,param_3);
    }
    else {
      func_0x000109c0d3b4(param_1);
      func_0x000109c0d800(param_1,param_3);
    }
  }
  return param_1;
}



/* Entry: 109d009e8; end: 109d00a4b;  */

long * FUN_109d009e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109d00a4c; end: 109d00a7f;  */

void FUN_109d00a4c(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109d00a80; end: 109d00d23;  */

void FUN_109d00a80(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  
  plVar5 = param_1;
  func_0x000107c31944();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          plVar2 = param_1;
          func_0x000104c4fbc4(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar1 = (long *)0x40;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar1[3] = param_3[1];
    plVar1[2] = lVar3;
    plVar1[4] = param_3[2];
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 5,*param_4,param_4[1]);
  }
  else {
    lVar3 = *param_4;
    plVar1[6] = param_4[1];
    plVar1[5] = lVar3;
    plVar1[7] = param_4[2];
  }
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    func_0x000104c4f9b8(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 109d00d24; end: 109d00d77;  */

undefined8 * FUN_109d00d24(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 5;
  *param_1 = &PTR_DAT_110b3e3c8;
  FUN_109cd42a0(&puStack_28);
  puStack_28 = param_1 + 2;
  func_0x000109cd4310(&puStack_28);
  return param_1;
}



/* Entry: 109d00d78; end: 109d00ebb;  */

void FUN_109d00d78(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined ***unaff_x22;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined ***pppuStack_2b8;
  undefined1 *puStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined ***pppuStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined **ppuStack_280;
  undefined1 auStack_278 [24];
  uint auStack_260 [96];
  undefined **appuStack_e0 [19];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109d14f44(&ppuStack_280,param_2,4);
  uVar5 = *(uint *)((long)auStack_260 + (long)ppuStack_280[-3]);
  if ((uVar5 & 5) == 0) {
    (**(code **)(*param_1 + 0x10))(param_1,&ppuStack_280);
    uVar5 = *(uint *)((long)auStack_260 + (long)ppuStack_280[-3]);
    unaff_x22 = &ppuStack_280;
  }
  if ((uVar5 & 5) == 0) {
    ppuStack_280 = &PTR_DAT_11087cb40;
    appuStack_e0[0] = &PTR_DAT_11087cb68;
    func_0x000107c28018(auStack_278);
    ppuVar4 = &PTR_PTR_11087cb80;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_280,&PTR_PTR_11087cb80);
    pppuVar2 = appuStack_e0;
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c28010(&ppuStack_280);
    pppuVar3 = pppuVar2;
    __Unwind_Resume();
    uStack_2a8 = 5;
    pcStack_288 = FUN_109d00ebc;
    puStack_2b0 = (undefined1 *)unaff_x22;
    plStack_2a0 = param_1;
    pppuStack_298 = pppuVar2;
    puStack_290 = &stack0xfffffffffffffff0;
    FUN_109cd31ac(&ppuStack_2f0,ppuVar4,ppuVar4 + 3);
    FUN_109cdfa10(pppuVar3 + 2);
    pppuVar3[3] = ppuStack_2e8;
    pppuVar3[2] = ppuStack_2f0;
    pppuVar3[4] = ppuStack_2e0;
    ppuStack_2e8 = (undefined **)0x0;
    ppuStack_2e0 = (undefined **)0x0;
    ppuStack_2f0 = (undefined **)0x0;
    func_0x000109cdfa74(pppuVar3 + 5);
    pppuVar3[6] = ppuStack_2d0;
    pppuVar3[5] = ppuStack_2d8;
    pppuVar3[7] = ppuStack_2c8;
    ppuStack_2d0 = (undefined **)0x0;
    ppuStack_2c8 = (undefined **)0x0;
    ppuStack_2d8 = (undefined **)0x0;
    pppuStack_2b8 = &ppuStack_2d8;
    FUN_109cd42a0(&pppuStack_2b8);
    pppuStack_2b8 = &ppuStack_2f0;
    func_0x000109cd4310(&pppuStack_2b8);
    (*(code *)(*pppuVar3)[0xc])(pppuVar3);
    return;
  }
  FUN_109d00278(&UNK_10e03ffd4,&UNK_10f5ab443,param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109d00e98);
  (*pcVar1)();
}



/* Entry: 109d00ebc; end: 109d00f6b;  */

void FUN_109d00ebc(long *param_1,long param_2)

{
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_38;
  
  FUN_109cd31ac(&lStack_70,param_2,param_2 + 0x18);
  FUN_109cdfa10(param_1 + 2);
  param_1[3] = lStack_68;
  param_1[2] = lStack_70;
  param_1[4] = lStack_60;
  lStack_68 = 0;
  lStack_60 = 0;
  lStack_70 = 0;
  func_0x000109cdfa74(param_1 + 5);
  param_1[6] = lStack_50;
  param_1[5] = lStack_58;
  param_1[7] = lStack_48;
  lStack_50 = 0;
  lStack_48 = 0;
  lStack_58 = 0;
  plStack_38 = &lStack_58;
  FUN_109cd42a0(&plStack_38);
  plStack_38 = &lStack_70;
  func_0x000109cd4310(&plStack_38);
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}



/* Entry: 109d00f6c; end: 109d00feb;  */

void FUN_109d00f6c(void)

{
  FUN_109ceaea0(&UNK_10e04002d,&UNK_10f5ab44f);
  FUN_109ceaea0(&UNK_10e03ffd4,&UNK_10f5ab462);
  FUN_109ceaea0(&UNK_10e03ffd4,&UNK_10f5ab475);
  FUN_109ceaea0(&UNK_10e04002d,&UNK_10f5ab481);
  return;
}



/* Entry: 109d00fec; end: 109d00fef;  */

void FUN_109d00fec(void)

{
  return;
}


