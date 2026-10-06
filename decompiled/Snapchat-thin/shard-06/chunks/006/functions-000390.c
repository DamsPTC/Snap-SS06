/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a8b720; end: 104a8b727;  */

undefined1  [16]
FUN_104a8b720(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a8b728; end: 104a8ce3f;  */

/* WARNING: Removing unreachable block (ram,0x000104a8c010) */
/* WARNING: Removing unreachable block (ram,0x000104a8b7e0) */
/* WARNING: Removing unreachable block (ram,0x000104a8b784) */
/* WARNING: Removing unreachable block (ram,0x000104a8bdac) */
/* WARNING: Removing unreachable block (ram,0x000104a8c4bc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104a8b728(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong *param_5)

{
  int *piVar1;
  undefined8 *******pppppppuVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  ulong *puVar6;
  ulong ******ppppppuVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong ******ppppppuVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong *****pppppuVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  ulong uStack_190;
  float fStack_184;
  long lStack_180;
  long lStack_178;
  ulong *****pppppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_151;
  ulong *****pppppuStack_150;
  ulong *****pppppuStack_148;
  ulong *****pppppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong *****pppppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong *****pppppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong *****pppppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong *****pppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong *****pppppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *****pppppuStack_a8;
  ulong *****pppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  ulong ******ppppppuStack_90;
  ulong ******ppppppuStack_88;
  ulong ******ppppppuStack_80;
  ulong ******ppppppuStack_78;
  ulong *****apppppuStack_70 [2];
  
  lVar14 = param_4 + 0x20;
  func_0x00010002b024(&pppppppuStack_98,&DAT_10f3980f5);
  func_0x000100484044(lVar14,&pppppppuStack_98);
  if (param_4 + 0x28 == lVar14) {
    *param_1 = 0;
    return;
  }
  lStack_180 = 0;
  lStack_178 = 0;
  fStack_184 = 0.0;
  if (*(int *)(lVar14 + 0x38) == 5) {
    pppppppuStack_b0 = (ulong *******)0x0;
    pppppuStack_a8 = (ulong *****)0x0;
    pppppuStack_a0 = (ulong *****)0x0;
    func_0x00010002b024(&pppppppuStack_98,&DAT_10f398151);
    lVar8 = lVar14 + 0x58;
    lVar13 = lVar8;
    func_0x000100484044(lVar8,&pppppppuStack_98);
    lVar14 = lVar14 + 0x60;
    if (lVar14 == lVar13) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      pppppuStack_c8 = (ulong *****)0x0;
      FUN_104ab5920(&pppppuStack_f8,2,"field:maxAttempts error:required field missing",0x2e,
                    &pppppuStack_110,&pppppuStack_c8);
      if (pppppuStack_a8 < pppppuStack_a0) {
LAB_104a8b984:
        *pppppuStack_a8 = (ulong ****)pppppuStack_f8;
        pppppuStack_f8 = (ulong *****)0x36;
        pppppuStack_a8 = pppppuStack_a8 + 1;
      }
      else {
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_104a83ee4(&pppppppuStack_b0);
          goto LAB_104a8cb4c;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_f8;
        pppppuStack_f8 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_104a84040(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_f8 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
LAB_104a8bb10:
      pppppppuStack_98 = (undefined8 *******)&pppppuStack_c8;
      func_0x000100482b64(&pppppppuStack_98);
      uVar18 = 0;
    }
    else {
      if (*(int *)(lVar13 + 0x38) != 3) {
        uStack_c0 = 0;
        uStack_b8 = 0;
        pppppuStack_c8 = (ulong *****)0x0;
        FUN_104ab5920(&pppppuStack_f8,2,"field:maxAttempts error:should be of type number",0x30,
                      &pppppuStack_110,&pppppuStack_c8);
        if (pppppuStack_a8 < pppppuStack_a0) goto LAB_104a8b984;
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_104a83ee4(&pppppppuStack_b0);
          goto LAB_104a8cb4c;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_f8;
        pppppuStack_f8 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_104a84040(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_f8 & 1) != 0) {
          func_0x00010084dad0();
        }
        goto LAB_104a8bb10;
      }
      plVar5 = (long *)(lVar13 + 0x40);
      if (*(char *)(lVar13 + 0x57) < '\0') {
        plVar5 = (long *)*plVar5;
      }
      uVar18 = (uint)plVar5;
      FUN_104a6f25c();
      if ((int)uVar18 < 2) {
        uStack_c0 = 0;
        uStack_b8 = 0;
        pppppuStack_c8 = (ulong *****)0x0;
        FUN_104ab5920(&pppppuStack_f8,2,"field:maxAttempts error:should be at least 2",0x2c,
                      &pppppuStack_110,&pppppuStack_c8);
        if (pppppuStack_a8 < pppppuStack_a0) {
          *pppppuStack_a8 = (ulong ****)pppppuStack_f8;
          pppppuStack_f8 = (ulong *****)0x36;
          pppppuStack_a8 = pppppuStack_a8 + 1;
        }
        else {
          lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
          uVar11 = lVar13 + 1;
          if (uVar11 >> 0x3d != 0) {
            FUN_104a83ee4(&pppppppuStack_b0);
            goto LAB_104a8cb4c;
          }
          ppppppuVar7 = &pppppuStack_a0;
          uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
          if (uVar12 <= uVar11) {
            uVar12 = uVar11;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
            uVar12 = 0x1fffffffffffffff;
          }
          ppppppuStack_78 = ppppppuVar7;
          if (uVar12 == 0) {
            pppppppuStack_98 = (undefined8 *******)0x0;
          }
          else {
            FUN_104a83ef8();
            pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
          }
          ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
          ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
          ppppppuVar7 = ppppppuStack_90 + 1;
          *ppppppuStack_90 = pppppuStack_f8;
          pppppuStack_f8 = (ulong *****)0x36;
          ppppppuStack_88 = ppppppuVar7;
          FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
          pppppuVar16 = pppppuStack_a8;
          FUN_104a84040(&pppppppuStack_98);
          pppppuStack_a8 = pppppuVar16;
          if (((ulong)pppppuStack_f8 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        pppppppuStack_98 = (undefined8 *******)&pppppuStack_c8;
        func_0x000100482b64(&pppppppuStack_98);
      }
      else if (5 < uVar18) {
        uVar18 = 5;
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_service_config.cc"
                            ,0xb8,2,"service config: clamped retryPolicy.maxAttempts at %d");
      }
    }
    lVar13 = lVar8;
    FUN_104ac973c(lVar8,"initialBackoff",0xe,&lStack_178,&pppppppuStack_b0,1);
    iVar4 = 0;
    if (lStack_178 == 0) {
      iVar4 = (int)lVar13;
    }
    if (iVar4 == 1) {
      uStack_d8 = 0;
      uStack_d0 = 0;
      pppppuStack_e0 = (ulong *****)0x0;
      FUN_104ab5920(&pppppuStack_110,2,"field:initialBackoff error:must be greater than 0",0x31,
                    &pppppuStack_128,&pppppuStack_e0);
      if (pppppuStack_a8 < pppppuStack_a0) {
        *pppppuStack_a8 = (ulong ****)pppppuStack_110;
        pppppuStack_110 = (ulong *****)0x36;
        pppppuStack_a8 = pppppuStack_a8 + 1;
      }
      else {
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_104a83ee4(&pppppppuStack_b0);
          goto LAB_104a8cb4c;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_110;
        pppppuStack_110 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_104a84040(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_110 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      pppppppuStack_98 = (undefined8 *******)&pppppuStack_e0;
      func_0x000100482b64(&pppppppuStack_98);
    }
    lVar13 = lVar8;
    FUN_104ac973c(lVar8,"maxBackoff",10,&lStack_180,&pppppppuStack_b0,1);
    iVar4 = 0;
    if (lStack_180 == 0) {
      iVar4 = (int)lVar13;
    }
    if (iVar4 == 1) {
      uStack_f0 = 0;
      uStack_e8 = 0;
      pppppuStack_f8 = (ulong *****)0x0;
      FUN_104ab5920(&pppppuStack_128,2,"field:maxBackoff error:must be greater than 0",0x2d,
                    &pppppuStack_140,&pppppuStack_f8);
      if (pppppuStack_a8 < pppppuStack_a0) {
        *pppppuStack_a8 = (ulong ****)pppppuStack_128;
        pppppuStack_128 = (ulong *****)0x36;
        pppppuStack_a8 = pppppuStack_a8 + 1;
      }
      else {
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_104a83ee4(&pppppppuStack_b0);
          goto LAB_104a8cb4c;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_128;
        pppppuStack_128 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_104a84040(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_128 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      pppppppuStack_98 = (undefined8 *******)&pppppuStack_f8;
      func_0x000100482b64(&pppppppuStack_98);
    }
    func_0x00010002b024(&pppppppuStack_98,"backoffMultiplier");
    lVar13 = lVar8;
    func_0x000100484044(lVar8,&pppppppuStack_98);
    if (lVar14 == lVar13) {
      uStack_108 = 0;
      uStack_100 = 0;
      pppppuStack_110 = (ulong *****)0x0;
      FUN_104ab5920(&pppppuStack_140,2,"field:backoffMultiplier error:required field missing",0x34,
                    &pppppuStack_170,&pppppuStack_110);
      if (pppppuStack_a8 < pppppuStack_a0) {
LAB_104a8bfc4:
        *pppppuStack_a8 = (ulong ****)pppppuStack_140;
        pppppuStack_140 = (ulong *****)0x36;
        pppppuStack_a8 = pppppuStack_a8 + 1;
      }
      else {
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_104a83ee4(&pppppppuStack_b0);
          goto LAB_104a8cb4c;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_140;
        pppppuStack_140 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_104a84040(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_140 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
LAB_104a8bfd8:
      pppppppuStack_98 = (undefined8 *******)&pppppuStack_110;
      func_0x000100482b64(&pppppppuStack_98);
    }
    else {
      if (*(int *)(lVar13 + 0x38) != 3) {
        uStack_108 = 0;
        uStack_100 = 0;
        pppppuStack_110 = (ulong *****)0x0;
        FUN_104ab5920(&pppppuStack_140,2,"field:backoffMultiplier error:should be of type number",
                      0x36,&pppppuStack_170,&pppppuStack_110);
        if (pppppuStack_a8 < pppppuStack_a0) goto LAB_104a8bfc4;
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_104a83ee4(&pppppppuStack_b0);
          goto LAB_104a8cb4c;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_140;
        pppppuStack_140 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_104a84040(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_140 & 1) != 0) {
          func_0x00010084dad0();
        }
        goto LAB_104a8bfd8;
      }
      plVar5 = (long *)(lVar13 + 0x40);
      if (*(char *)(lVar13 + 0x57) < '\0') {
        plVar5 = (long *)*plVar5;
      }
      _sscanf(plVar5,&DAT_10f2e3e8d);
      if ((int)plVar5 != 1) {
        uStack_108 = 0;
        uStack_100 = 0;
        pppppuStack_110 = (ulong *****)0x0;
        FUN_104ab5920(&pppppuStack_140,2,"field:backoffMultiplier error:failed to parse",0x2d,
                      &pppppuStack_170,&pppppuStack_110);
        if (pppppuStack_a8 < pppppuStack_a0) goto LAB_104a8bfc4;
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_104a83ee4(&pppppppuStack_b0);
          goto LAB_104a8cb4c;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_140;
        pppppuStack_140 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_104a84040(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_140 & 1) != 0) {
          func_0x00010084dad0();
        }
        goto LAB_104a8bfd8;
      }
      if (fStack_184 <= 0.0) {
        uStack_108 = 0;
        uStack_100 = 0;
        pppppuStack_110 = (ulong *****)0x0;
        FUN_104ab5920(&pppppuStack_140,2,"field:backoffMultiplier error:must be greater than 0",0x34
                      ,&pppppuStack_170,&pppppuStack_110);
        if (pppppuStack_a8 < pppppuStack_a0) goto LAB_104a8bfc4;
        lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar13 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_104a83ee4(&pppppppuStack_b0);
          goto LAB_104a8cb4c;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_140;
        pppppuStack_140 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_104a84040(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_140 & 1) != 0) {
          func_0x00010084dad0();
        }
        goto LAB_104a8bfd8;
      }
    }
    func_0x00010002b024(&pppppppuStack_98,"retryableStatusCodes");
    lVar13 = lVar8;
    func_0x000100484044(lVar8,&pppppppuStack_98);
    if (lVar14 == lVar13) {
LAB_104a8c470:
      uVar19 = 0;
    }
    else {
      if (*(int *)(lVar13 + 0x38) != 6) {
        uStack_120 = 0;
        uStack_118 = 0;
        pppppuStack_128 = (ulong *****)0x0;
        FUN_104ab5920(&pppppuStack_170,2,"field:retryableStatusCodes error:must be of type array",
                      0x36,apppppuStack_70,&pppppuStack_128);
        if (pppppuStack_a8 < pppppuStack_a0) {
          *pppppuStack_a8 = (ulong ****)pppppuStack_170;
          pppppuStack_170 = (ulong *****)0x36;
          pppppuStack_a8 = pppppuStack_a8 + 1;
        }
        else {
          lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
          uVar11 = lVar13 + 1;
          if (uVar11 >> 0x3d != 0) {
            FUN_104a83ee4(&pppppppuStack_b0);
            goto LAB_104a8cb4c;
          }
          ppppppuVar7 = &pppppuStack_a0;
          uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
          if (uVar12 <= uVar11) {
            uVar12 = uVar11;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
            uVar12 = 0x1fffffffffffffff;
          }
          ppppppuStack_78 = ppppppuVar7;
          if (uVar12 == 0) {
            pppppppuStack_98 = (undefined8 *******)0x0;
          }
          else {
            FUN_104a83ef8();
            pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
          }
          ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar13);
          ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
          ppppppuVar7 = ppppppuStack_90 + 1;
          *ppppppuStack_90 = pppppuStack_170;
          pppppuStack_170 = (ulong *****)0x36;
          ppppppuStack_88 = ppppppuVar7;
          FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
          pppppuVar16 = pppppuStack_a8;
          FUN_104a84040(&pppppppuStack_98);
          pppppuStack_a8 = pppppuVar16;
          if (((ulong)pppppuStack_170 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        pppppppuStack_98 = (undefined8 *******)&pppppuStack_128;
        func_0x000100482b64(&pppppppuStack_98);
        goto LAB_104a8c470;
      }
      piVar17 = *(int **)(lVar13 + 0x70);
      piVar1 = *(int **)(lVar13 + 0x78);
      if (piVar17 == piVar1) goto LAB_104a8c470;
      uVar19 = 0;
      do {
        if (*piVar17 == 4) {
          puVar6 = (ulong *)(piVar17 + 2);
          if (*(char *)((long)piVar17 + 0x1f) < '\0') {
            puVar6 = (ulong *)*puVar6;
          }
          FUN_104ab13b0(puVar6,&pppppuStack_148);
          if (((ulong)puVar6 & 1) == 0) {
            uStack_138 = 0;
            uStack_130 = 0;
            pppppuStack_140 = (ulong *****)0x0;
            FUN_104ab5920(apppppuStack_70,2,
                          "field:retryableStatusCodes error:failed to parse status code",0x3c,
                          &pppppuStack_150,&pppppuStack_140);
            if (pppppuStack_a8 < pppppuStack_a0) {
              *pppppuStack_a8 = (ulong ****)apppppuStack_70[0];
              apppppuStack_70[0] = (ulong *****)0x36;
              pppppuStack_a8 = pppppuStack_a8 + 1;
            }
            else {
              lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
              uVar11 = lVar13 + 1;
              if (uVar11 >> 0x3d != 0) {
                FUN_104a83ee4(&pppppppuStack_b0);
                goto LAB_104a8cb4c;
              }
              uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
              if (uVar12 <= uVar11) {
                uVar12 = uVar11;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
                uVar12 = 0x1fffffffffffffff;
              }
              if (uVar12 == 0) {
                ppppppuVar7 = (ulong ******)0x0;
                ppppppuStack_78 = &pppppuStack_a0;
              }
              else {
                ppppppuVar7 = &pppppuStack_a0;
                ppppppuStack_78 = &pppppuStack_a0;
                FUN_104a83ef8();
              }
              ppppppuStack_90 = ppppppuVar7 + lVar13;
              ppppppuStack_80 = ppppppuVar7 + uVar12;
              ppppppuVar10 = ppppppuStack_90 + 1;
              pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
              *ppppppuStack_90 = apppppuStack_70[0];
              apppppuStack_70[0] = (ulong *****)0x36;
              ppppppuStack_88 = ppppppuVar10;
              FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
              pppppuVar16 = pppppuStack_a8;
              FUN_104a84040(&pppppppuStack_98);
              pppppuStack_a8 = pppppuVar16;
              if (((ulong)apppppuStack_70[0] & 1) != 0) {
                func_0x00010084dad0();
              }
            }
            pppppppuVar2 = (undefined8 *******)&pppppuStack_140;
            goto LAB_104a8c264;
          }
          uVar19 = 1 << (ulong)((uint)pppppuStack_148 & 0x1f) | uVar19;
        }
        else {
          uStack_120 = 0;
          uStack_118 = 0;
          pppppuStack_128 = (ulong *****)0x0;
          FUN_104ab5920(apppppuStack_70,2,
                        "field:retryableStatusCodes error:status codes should be of type string",
                        0x46,&pppppuStack_148,&pppppuStack_128);
          pppppppuVar2 = (undefined8 *******)&pppppuStack_128;
          if (pppppuStack_a8 < pppppuStack_a0) {
            *pppppuStack_a8 = (ulong ****)apppppuStack_70[0];
            apppppuStack_70[0] = (ulong *****)0x36;
            pppppuStack_a8 = pppppuStack_a8 + 1;
          }
          else {
            lVar13 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
            uVar11 = lVar13 + 1;
            if (uVar11 >> 0x3d != 0) {
              FUN_104a83ee4(&pppppppuStack_b0);
              goto LAB_104a8cb4c;
            }
            uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
              uVar12 = 0x1fffffffffffffff;
            }
            if (uVar12 == 0) {
              ppppppuVar7 = (ulong ******)0x0;
              ppppppuStack_78 = &pppppuStack_a0;
            }
            else {
              ppppppuVar7 = &pppppuStack_a0;
              ppppppuStack_78 = &pppppuStack_a0;
              FUN_104a83ef8();
            }
            ppppppuStack_90 = ppppppuVar7 + lVar13;
            ppppppuStack_80 = ppppppuVar7 + uVar12;
            ppppppuVar10 = ppppppuStack_90 + 1;
            pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
            *ppppppuStack_90 = apppppuStack_70[0];
            apppppuStack_70[0] = (ulong *****)0x36;
            ppppppuStack_88 = ppppppuVar10;
            FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
            pppppuVar16 = pppppuStack_a8;
            FUN_104a84040(&pppppppuStack_98);
            pppppuStack_a8 = pppppuVar16;
            if (((ulong)apppppuStack_70[0] & 1) != 0) {
              func_0x00010084dad0();
            }
          }
LAB_104a8c264:
          pppppppuStack_98 = pppppppuVar2;
          func_0x000100482b64(&pppppppuStack_98);
        }
        piVar17 = piVar17 + 0x14;
      } while (piVar17 != piVar1);
    }
    func_0x000100480b50(param_3,"grpc.experimental.enable_hedging",0);
    if ((int)param_3 == 0) {
      if (uVar19 == 0) {
        uStack_168 = 0;
        uStack_160 = 0;
        pppppuStack_170 = (ulong *****)0x0;
        FUN_104ab5920(&pppppuStack_148,2,"field:retryableStatusCodes error:must be non-empty",0x32,
                      &pppppuStack_150,&pppppuStack_170);
        if (pppppuStack_a8 < pppppuStack_a0) {
LAB_104a8c5f8:
          *pppppuStack_a8 = (ulong ****)pppppuStack_148;
          pppppuStack_148 = (ulong *****)0x36;
LAB_104a8c650:
          pppppuStack_a8 = pppppuStack_a8 + 1;
        }
        else {
          lVar14 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
          uVar11 = lVar14 + 1;
          if (uVar11 >> 0x3d != 0) {
            FUN_104a83ee4(&pppppppuStack_b0);
            goto LAB_104a8cb4c;
          }
          ppppppuVar7 = &pppppuStack_a0;
          uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
          if (uVar12 <= uVar11) {
            uVar12 = uVar11;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
            uVar12 = 0x1fffffffffffffff;
          }
          ppppppuStack_78 = ppppppuVar7;
          if (uVar12 == 0) {
            pppppppuStack_98 = (undefined8 *******)0x0;
          }
          else {
            FUN_104a83ef8();
            pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
          }
          ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar14);
          ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
          ppppppuVar7 = ppppppuStack_90 + 1;
          *ppppppuStack_90 = pppppuStack_148;
          pppppuStack_148 = (ulong *****)0x36;
          ppppppuStack_88 = ppppppuVar7;
          FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
          pppppuVar16 = pppppuStack_a8;
          FUN_104a84040(&pppppppuStack_98);
          pppppuStack_a8 = pppppuVar16;
          if (((ulong)pppppuStack_148 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        goto LAB_104a8c654;
      }
LAB_104a8c664:
      uVar15 = 0;
      pppppuVar16 = (ulong *****)0x0;
    }
    else {
      func_0x00010002b024(&pppppppuStack_98,"perAttemptRecvTimeout");
      func_0x000100484044(lVar8,&pppppppuStack_98);
      if (lVar14 == lVar8) {
        if (uVar19 != 0) goto LAB_104a8c664;
        uStack_168 = 0;
        uStack_160 = 0;
        pppppuStack_170 = (ulong *****)0x0;
        FUN_104ab5920(&pppppuStack_148,2,
                      "field:retryableStatusCodes error:must be non-empty if perAttemptRecvTimeout not present"
                      ,0x57,&pppppuStack_150,&pppppuStack_170);
        if (pppppuStack_a8 < pppppuStack_a0) goto LAB_104a8c5f8;
        lVar14 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar14 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_104a83ee4(&pppppppuStack_b0);
          goto LAB_104a8cb4c;
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar14);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_148;
        pppppuStack_148 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_104a84040(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_148 & 1) != 0) {
          func_0x00010084dad0();
        }
LAB_104a8c654:
        pppppppuStack_98 = (undefined8 *******)&pppppuStack_170;
        func_0x000100482b64(&pppppppuStack_98);
        goto LAB_104a8c664;
      }
      pppppuStack_148 = (ulong *****)0x0;
      uVar11 = lVar8 + 0x38;
      FUN_104ac923c(uVar11,&pppppuStack_148);
      if ((uVar11 & 1) == 0) {
        uStack_168 = 0;
        uStack_160 = 0;
        pppppuStack_170 = (ulong *****)0x0;
        FUN_104ab5920(&pppppuStack_150,2,
                      "field:perAttemptRecvTimeout error:type must be STRING of the form given by google.proto.Duration."
                      ,0x61,&uStack_151,&pppppuStack_170);
        if (pppppuStack_a8 < pppppuStack_a0) {
          *pppppuStack_a8 = (ulong ****)pppppuStack_150;
          pppppuStack_150 = (ulong *****)0x36;
          goto LAB_104a8c650;
        }
        lVar14 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
        uVar11 = lVar14 + 1;
        if (uVar11 >> 0x3d != 0) {
          FUN_104a83ee4(&pppppppuStack_b0);
LAB_104a8cb4c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104a8cb50);
          (*pcVar3)();
        }
        ppppppuVar7 = &pppppuStack_a0;
        uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
          uVar12 = 0x1fffffffffffffff;
        }
        ppppppuStack_78 = ppppppuVar7;
        if (uVar12 == 0) {
          pppppppuStack_98 = (undefined8 *******)0x0;
        }
        else {
          FUN_104a83ef8();
          pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
        }
        ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar14);
        ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
        ppppppuVar7 = ppppppuStack_90 + 1;
        *ppppppuStack_90 = pppppuStack_150;
        pppppuStack_150 = (ulong *****)0x36;
        ppppppuStack_88 = ppppppuVar7;
        FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
        pppppuVar16 = pppppuStack_a8;
        FUN_104a84040(&pppppppuStack_98);
        pppppuStack_a8 = pppppuVar16;
        if (((ulong)pppppuStack_150 & 1) != 0) {
          func_0x00010084dad0();
        }
        goto LAB_104a8c654;
      }
      pppppuVar16 = pppppuStack_148;
      if (pppppuStack_148 == (ulong *****)0x0) {
        uStack_168 = 0;
        uStack_160 = 0;
        pppppuStack_170 = (ulong *****)0x0;
        FUN_104ab5920(&pppppuStack_150,2,"field:perAttemptRecvTimeout error:must be greater than 0",
                      0x38,&uStack_151,&pppppuStack_170);
        if (pppppuStack_a8 < pppppuStack_a0) {
          *pppppuStack_a8 = (ulong ****)pppppuStack_150;
          pppppuStack_150 = (ulong *****)0x36;
          pppppuStack_a8 = pppppuStack_a8 + 1;
        }
        else {
          lVar14 = (long)pppppuStack_a8 - (long)pppppppuStack_b0 >> 3;
          uVar11 = lVar14 + 1;
          if (uVar11 >> 0x3d != 0) {
            FUN_104a83ee4(&pppppppuStack_b0);
            goto LAB_104a8cb4c;
          }
          ppppppuVar7 = &pppppuStack_a0;
          uVar12 = (long)pppppuStack_a0 - (long)pppppppuStack_b0 >> 2;
          if (uVar12 <= uVar11) {
            uVar12 = uVar11;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_a0 - (long)pppppppuStack_b0)) {
            uVar12 = 0x1fffffffffffffff;
          }
          ppppppuStack_78 = ppppppuVar7;
          if (uVar12 == 0) {
            pppppppuStack_98 = (undefined8 *******)0x0;
          }
          else {
            FUN_104a83ef8();
            pppppppuStack_98 = (undefined8 *******)ppppppuVar7;
          }
          ppppppuStack_90 = (ulong ******)(pppppppuStack_98 + lVar14);
          ppppppuStack_80 = (ulong ******)(pppppppuStack_98 + uVar12);
          ppppppuVar7 = ppppppuStack_90 + 1;
          *ppppppuStack_90 = pppppuStack_150;
          pppppuStack_150 = (ulong *****)0x36;
          ppppppuStack_88 = ppppppuVar7;
          FUN_104a83e70(&pppppppuStack_b0,&pppppppuStack_98);
          pppppuVar16 = pppppuStack_a8;
          FUN_104a84040(&pppppppuStack_98);
          pppppuStack_a8 = pppppuVar16;
          if (((ulong)pppppuStack_150 & 1) != 0) {
            func_0x00010084dad0();
          }
        }
        pppppppuStack_98 = (undefined8 *******)&pppppuStack_170;
        func_0x000100482b64(&pppppppuStack_98);
        pppppuVar16 = (ulong *****)0x0;
      }
      uVar15 = 1;
    }
    FUN_104a8ce48(&uStack_190,&pppppppuStack_98,&DAT_10f3980f5,0xb,&pppppppuStack_b0);
    pppppppuStack_98 = &pppppppuStack_b0;
    func_0x000100482b64(&pppppppuStack_98);
  }
  else {
    ppppppuStack_90 = (ulong ******)0x0;
    ppppppuStack_88 = (ulong ******)0x0;
    pppppppuStack_98 = (undefined8 *******)0x0;
    FUN_104ab5920(&uStack_190,2,"field:retryPolicy error:should be of type object",0x30,
                  &pppppuStack_c8,&pppppppuStack_98);
    pppppppuStack_b0 = (ulong *******)&pppppppuStack_98;
    func_0x000100482b64(&pppppppuStack_b0);
    uVar19 = 0;
    uVar15 = 0;
    pppppuVar16 = (ulong *****)0x0;
    uVar18 = 0;
  }
  uVar11 = uStack_190;
  uVar12 = *param_5;
  if (uStack_190 != uVar12) {
    *param_5 = uStack_190;
    uStack_190 = 0x36;
    if ((uVar12 & 1) == 0) goto LAB_104a8c6cc;
    func_0x00010084dad0();
    uVar12 = uStack_190;
  }
  if ((uVar12 & 1) != 0) {
    func_0x00010084dad0();
  }
  uVar11 = *param_5;
LAB_104a8c6cc:
  if (uVar11 == 0) {
    puVar9 = (undefined8 *)0x38;
    __Znwm();
    *puVar9 = &PTR_DAT_1107c3178;
    *(uint *)(puVar9 + 1) = uVar18;
    puVar9[2] = lStack_178;
    puVar9[3] = lStack_180;
    *(float *)(puVar9 + 4) = fStack_184;
    *(uint *)((long)puVar9 + 0x24) = uVar19;
    puVar9[5] = pppppuVar16;
    puVar9[6] = uVar15;
  }
  else {
    puVar9 = (undefined8 *)0x0;
  }
  *param_1 = puVar9;
  return;
}



/* Entry: 104a8ce40; end: 104a8ce47;  */

void FUN_104a8ce40(void)

{
  return;
}



/* Entry: 104a8ce48; end: 104a8cee7;  */

void FUN_104a8ce48(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = 0;
  if (param_5[1] - *param_5 != 0) {
    FUN_104aba878(&lStack_38,2,param_3,param_4,param_2,param_5[1] - *param_5 >> 3);
    if (lStack_38 != 0) {
      *param_1 = lStack_38;
    }
    lVar1 = *param_5;
    lVar2 = param_5[1];
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -8;
        FUN_104a713e4(param_5 + 2,lVar2);
      } while (lVar2 != lVar1);
    }
    param_5[1] = lVar1;
  }
  return;
}



/* Entry: 104a8cee8; end: 104a8cef7;  */

void FUN_104a8cee8(void)

{
  return;
}



/* Entry: 104a8cef8; end: 104a8d013;  */

undefined8 * FUN_104a8cef8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c31b0;
  plVar4 = (long *)param_1[5];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104a8d014; end: 104a8d03f;  */

long FUN_104a8d014(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  do {
    lVar7 = param_1;
    param_1 = *(long *)(lVar7 + 0x28);
  } while (*(long *)(lVar7 + 0x28) != 0);
  plVar1 = (long *)(lVar7 + 0x20);
  while( true ) {
    lVar8 = *plVar1;
    lVar2 = lVar8 + *(long *)(lVar7 + 0x18);
    lVar3 = *(long *)(lVar7 + 0x10);
    if (lVar2 <= *(long *)(lVar7 + 0x10)) {
      lVar3 = lVar2;
    }
    lVar4 = 0;
    if (-1 < lVar2) {
      lVar4 = lVar3;
    }
    if (lVar4 == lVar8) break;
    while (*plVar1 == lVar8) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        return lVar4;
      }
    }
    ClearExclusiveLocal();
  }
  return lVar8;
}



/* Entry: 104a8d040; end: 104a8d0ef;  */

undefined8 * FUN_104a8d040(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001136a1de8 & 1) == 0) {
    iVar1 = 0x136a1de8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x58;
      __Znwm();
      puVar2[10] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      func_0x000100460318();
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[8] = puVar2 + 9;
      puRam00000001136a1de0 = puVar2;
      ___cxa_guard_release(0x1136a1de8);
    }
  }
  return puRam00000001136a1de0;
}



/* Entry: 104a8d0f0; end: 104a8d2cb;  */

void FUN_104a8d0f0(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  long *plStack_58;
  
  func_0x000100460448();
  lVar3 = param_2 + 0x40;
  lVar5 = lVar3;
  FUN_104a8d2cc(lVar3,param_3);
  if (param_2 + 0x48 == lVar5) {
    lVar5 = 0;
LAB_104a8d16c:
    bVar6 = true;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x38);
    if (lVar5 == 0) goto LAB_104a8d16c;
    if ((*(long *)(lVar5 + 0x10) == param_4) && (*(long *)(lVar5 + 0x18) == param_5))
    goto LAB_104a8d22c;
    bVar6 = false;
  }
  plVar2 = (long *)0x30;
  __Znwm();
  plVar4 = plVar2 + 1;
  *plVar4 = 1;
  *plVar2 = (long)&PTR_FUN_1107c31b0;
  plVar2[2] = param_4;
  plVar2[3] = param_5;
  plVar2[5] = 0;
  if (bVar6) {
    plVar2[4] = param_4;
  }
  else {
    plVar2[4] = (long)(((double)*(long *)(lVar5 + 0x20) / (double)*(long *)(lVar5 + 0x10)) *
                      (double)param_4);
    do {
      cVar1 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(long **)(lVar5 + 0x28) = plVar2;
  }
  plStack_58 = plVar2;
  func_0x000104a8d358(lVar3,param_3,param_3,&plStack_58);
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar1 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_58 + 8))();
    }
  }
  lVar5 = *(long *)(lVar3 + 0x38);
LAB_104a8d22c:
  plVar2 = (long *)(lVar5 + 8);
  do {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = *plVar2 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = lVar5;
  func_0x000100466b80(param_2);
  return;
}



/* Entry: 104a8d2cc; end: 104a8d493;  */

long * FUN_104a8d2cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      FUN_104a77514(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (FUN_104a77514(param_1,param_2,plVar3 + 4), (int)param_1 == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}



/* Entry: 104a8d494; end: 104a8d503;  */

void FUN_104a8d494(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x000104a8d558(lVar1 + 0x20,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 104a8d504; end: 104a8d65f;  */

void FUN_104a8d504(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 104a8d660; end: 104a8d667;  */

void FUN_104a8d660(void)

{
  return;
}



/* Entry: 104a8d668; end: 104a8d68b;  */

void FUN_104a8d668(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1107c3200;
  return;
}



/* Entry: 104a8d68c; end: 104a8d68f;  */

void FUN_104a8d68c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a8d690; end: 104a8d6cb;  */

long FUN_104a8d690(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c32c8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a8d6cc; end: 104a8d6d7;  */

undefined ** FUN_104a8d6cc(void)

{
  return &PTR_DAT_1107c32c8;
}



/* Entry: 104a8d6d8; end: 104a8d7ab;  */

void FUN_104a8d6d8(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_2 + 8);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  lVar5 = *plVar6;
  if (lVar5 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6;
      (**(code **)(*plVar6 + 0x20))(plVar6,*(undefined8 *)(param_3 + 0x18));
      goto LAB_104a8d738;
    }
  }
  plVar4 = (long *)0x0;
LAB_104a8d738:
  *puVar1 = *(undefined8 *)(param_3 + 0x10);
  puVar1[1] = plVar6;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = plVar4;
  puVar1[3] = puVar1 + 4;
  *(undefined8 **)(*(long *)(param_3 + 0x10) + 0x40) = puVar1 + 1;
  *param_1 = 0;
  return;
}



/* Entry: 104a8d7ac; end: 104a8d80f;  */

void FUN_104a8d7ac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(*plVar5 + 0x40) = 0;
  func_0x0001004d9fa0(plVar5 + 3,plVar5[4]);
  plVar5 = (long *)plVar5[1];
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
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104a8d80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104a8d810; end: 104a8da37;  */

void FUN_104a8d810(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  long *plStack_40;
  ulong uStack_38;
  
  plVar9 = *(long **)(param_2 + 8);
  *plVar9 = 0;
  lVar4 = *(long *)(param_3 + 8);
  func_0x000100481218(lVar4,"grpc.service_config");
  if (lVar4 != 0) {
    uStack_38 = 0;
    uVar8 = *(undefined8 *)(param_3 + 8);
    lVar5 = lVar4;
    _strlen(lVar4);
    func_0x0001004820e0(&plStack_40,uVar8,lVar4,lVar5,&uStack_38);
    if (uStack_38 == 0) {
      plVar6 = (long *)*plVar9;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      *plVar9 = (long)plStack_40;
    }
    else {
      uStack_60 = uStack_38;
      if ((uStack_38 & 1) != 0) {
        piVar7 = (int *)(uStack_38 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_104aba950(auStack_58,&uStack_60);
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/service_config_channel_arg_filter.cc"
                          ,0x40,2,"%s");
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      if ((uStack_60 & 1) != 0) {
        func_0x00010084dad0();
      }
      if (plStack_40 != (long *)0x0) {
        plVar9 = plStack_40 + 1;
        do {
          lVar4 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 + -1 == 0) {
          (**(code **)(*plStack_40 + 8))();
        }
      }
    }
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 104a8da38; end: 104a8da6b;  */

void FUN_104a8da38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)**(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104a8da68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104a8da6c; end: 104a8daf3;  */

undefined8 * FUN_104a8da6c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c32e8;
  func_0x00010048650c(param_1[3]);
  plVar4 = (long *)param_1[2];
  do {
    lVar5 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x000100836ca4();
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104a8daf4; end: 104a8daf7;  */

undefined8 * FUN_104a8daf4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c32e8;
  func_0x00010048650c(param_1[3]);
  plVar4 = (long *)param_1[2];
  do {
    lVar5 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x000100836ca4();
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104a8daf8; end: 104a8db0b;  */

void FUN_104a8daf8(void)

{
  FUN_104a8da6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a8db0c; end: 104a8db5f;  */

void FUN_104a8db0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0;
  func_0x0001008daf18();
  *(undefined8 *)(lVar1 + 0x70) = param_2;
  *(undefined8 *)(lVar1 + 0x78) = param_3;
  plVar2 = *(long **)(param_1 + 0x10);
  func_0x0001004868b0(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x000104a8db5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))();
  return;
}



/* Entry: 104a8db60; end: 104a8db6f;  */

long FUN_104a8db60(long param_1)

{
  return *(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x50;
}



/* Entry: 104a8db70; end: 104a8dbe3;  */

void FUN_104a8db70(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  func_0x000100836fa4(param_1 + 10,0,param_1[1]);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104a8dbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 104a8dbe4; end: 104a8dc57;  */

void FUN_104a8dbe4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 0x50);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 104a8dc58; end: 104a8ddcf;  */

void FUN_104a8dc58(long *param_1,ulong *param_2,int *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plStack_90;
  undefined8 *puStack_88;
  ulong uStack_50;
  long *plStack_48;
  int iStack_3c;
  long *plStack_38;
  
  lVar6 = param_1[7];
  if (lVar6 == 0) {
    func_0x00010bdaa254();
    plVar4 = param_1;
    puVar5 = param_2;
    goto LAB_104a8dd98;
  }
  iStack_3c = 0;
  puVar5 = (ulong *)param_1[8];
  plVar10 = (long *)*param_2;
  plStack_48 = plVar10;
  if (((ulong)plVar10 & 1) == 0) {
    if (plVar10 != (long *)0x0) goto LAB_104a8dcc4;
    if ((*(byte *)(lVar6 + 1) >> 2 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)*(uint *)(lVar6 + 0x188) | 0x100000000;
    }
    iStack_3c = 2;
    plVar4 = param_1;
    if ((uVar7 & 0x100000000) != 0) {
      iStack_3c = (int)uVar7;
    }
  }
  else {
    piVar8 = (int *)((long)plVar10 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_104a8dcc4:
    param_3 = &iStack_3c;
    param_4 = (undefined8 *)0x0;
    plStack_38 = plVar10;
    func_0x000100831658(&plStack_38,puVar5,param_3,0,0,0);
    plVar4 = plStack_38;
    if (((ulong)plStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (((ulong)plVar10 & 1) != 0) {
      func_0x00010084dad0();
      plVar4 = plVar10;
    }
  }
  if (*(long *)(*param_1 + 0x20) != 0) {
    if (iStack_3c == 0) {
      func_0x000100831b64(*(long *)(*param_1 + 0x20) + 0xa0);
    }
    else {
      FUN_104aac0bc();
    }
    lVar6 = param_1[6];
    uStack_50 = *param_2;
    if ((uStack_50 & 1) != 0) {
      piVar8 = (int *)(uStack_50 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x00010082b8d4(&plStack_38,lVar6,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
LAB_104a8dd98:
  func_0x00010bdaa288();
  FUN_104bd46a0();
  FUN_104bd46a0();
  FUN_104bd46a0();
  func_0x0001004bdf74(&plStack_38);
  func_0x0001004bdf74(&plStack_48);
  __Unwind_Resume();
  plVar10 = plVar4;
  FUN_104a8ee08();
  if (plVar4 + 1 == plVar10) {
    FUN_104a8df10(&puStack_88,puVar5,param_3);
    puVar9 = puStack_88;
    FUN_104a8f21c(plVar4,param_3,param_3,&puStack_88);
    puVar3 = puStack_88;
    puStack_88 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)();
    }
  }
  else {
    puVar9 = (undefined8 *)plVar10[7];
  }
  plStack_90 = (long *)*param_4;
  *param_4 = 0;
  FUN_104a8e034(puVar9,&plStack_90);
  if (plStack_90 != (long *)0x0) {
    plVar4 = plStack_90 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plStack_90 + 8))();
    }
  }
  return;
}



/* Entry: 104a8ddd0; end: 104a8df0f;  */

void FUN_104a8ddd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plStack_40;
  undefined8 *puStack_38;
  
  lVar5 = param_1;
  FUN_104a8ee08(param_1,param_3);
  if (param_1 + 8 == lVar5) {
    FUN_104a8df10(&puStack_38,param_2,param_3);
    puVar6 = puStack_38;
    FUN_104a8f21c(param_1,param_3,param_3,&puStack_38);
    puVar4 = puStack_38;
    puStack_38 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
    }
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x38);
  }
  plStack_40 = (long *)*param_4;
  *param_4 = 0;
  FUN_104a8e034(puVar6,&plStack_40);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_40 + 8))();
    }
  }
  return;
}



/* Entry: 104a8df10; end: 104a8e033;  */

void FUN_104a8df10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar4 = 0x70;
  __Znwm();
  plStack_38 = (long *)*param_2;
  *param_2 = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000100033dac(&uStack_50,*param_3,param_3[1]);
  }
  else {
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    lStack_40 = param_3[2];
  }
  FUN_104a8ee94(uVar4,&plStack_38,&uStack_50);
  *param_1 = uVar4;
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_38 + 0x10))();
    }
  }
  return;
}



/* Entry: 104a8e034; end: 104a8e173;  */

void FUN_104a8e034(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plStack_40;
  long *plStack_38;
  
  uVar4 = 0x28;
  __Znwm(0x28);
  plStack_38 = (long *)0x0;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_38 = (long *)*param_2;
  }
  func_0x0001004d7f6c(uVar4,&plStack_38,*(undefined4 *)(param_1 + 0x48),param_1 + 0x50);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_38 + 8))();
    }
  }
  plStack_40 = (long *)*param_2;
  *param_2 = 0;
  func_0x0001004d8680(param_1 + 0x58,&plStack_40);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_40 + 8))();
    }
  }
  return;
}



/* Entry: 104a8e174; end: 104a8e1fb;  */

void FUN_104a8e174(long *param_1,int param_2,ulong *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  ulong *puStack_38;
  
  plVar5 = param_1;
  puVar9 = param_3;
  FUN_104a8ee08();
  if (param_1 + 1 != plVar5) {
    puStack_38 = param_3;
    FUN_104a8ecd4(plVar5[7] + 0x58,&puStack_38);
    if (*(long *)(plVar5[7] + 0x68) == 0) {
      func_0x000104a8f490(param_1,plVar5);
      FUN_104a8ec14(plVar5 + 4);
      __ZdlPv(plVar5);
    }
    return;
  }
  func_0x00010bdaa340();
  plStack_60 = param_1;
  if (param_2 != 2) {
    *(int *)(plVar5 + 9) = param_2;
    uVar6 = plVar5[10];
    uVar10 = *puVar9;
    if (uVar10 != uVar6) {
      if ((uVar10 & 1) != 0) {
        piVar11 = (int *)(uVar10 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = *piVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar10 = *puVar9;
      }
      plVar5[10] = uVar10;
      if ((uVar6 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    func_0x0001004dbc40(plVar5 + 0xb,(int)plVar5[9],puVar9);
    puVar7 = (undefined8 *)plVar5[8];
    plVar5[8] = 0;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)();
    }
    return;
  }
  if ((int)plVar5[9] != 1) {
    *(undefined4 *)(plVar5 + 9) = 1;
    uVar6 = plVar5[10];
    uVar10 = *puVar9;
    if (uVar10 != uVar6) {
      if ((uVar10 & 1) != 0) {
        piVar11 = (int *)(uVar10 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = *piVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar10 = *puVar9;
      }
      plVar5[10] = uVar10;
      if ((uVar6 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    func_0x0001004dbc40(plVar5 + 0xb,(int)plVar5[9],puVar9);
  }
  if (plVar5[8] == 0) {
    if (*(char *)((long)plVar5 + 0x3f) < '\0') {
      func_0x000100033dac(&lStack_80,plVar5[5],plVar5[6]);
    }
    else {
      lStack_78 = plVar5[6];
      lStack_80 = plVar5[5];
      lStack_70 = plVar5[7];
    }
    lVar12 = plVar5[4];
    plStack_88 = (long *)0x0;
    if (*(long *)(lVar12 + 0x210) != 0) {
      plVar1 = (long *)(*(long *)(lVar12 + 0x210) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_88 = *(long **)(lVar12 + 0x210);
      lVar12 = plVar5[4];
    }
    uVar2 = *(undefined8 *)(lVar12 + 0x138);
    if (*(long *)(lVar12 + 0x140) == 0) {
      plStack_90 = (long *)0x0;
    }
    else {
      plVar1 = (long *)(*(long *)(lVar12 + 0x140) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_90 = *(long **)(lVar12 + 0x140);
    }
    plVar1 = plVar5 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_98 = plVar5;
    FUN_104a82468(&puStack_68,&lStack_80,&plStack_88,uVar2,&plStack_90,&plStack_98);
    puVar7 = puStack_68;
    puStack_68 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)plVar5[8];
    plVar5[8] = (long)puVar7;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)();
      puVar7 = puStack_68;
      puStack_68 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)();
      }
    }
    if (plStack_98 == (long *)0x0) goto LAB_104a8eacc;
    plVar5 = plStack_98 + 1;
    do {
      lVar12 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = plStack_98;
    if (lVar12 + -1 != 0) goto LAB_104a8eacc;
  }
  else {
    func_0x00010bdaa4d8();
  }
  (**(code **)(*plVar5 + 0x10))();
LAB_104a8eacc:
  if (plStack_90 != (long *)0x0) {
    plVar5 = plStack_90 + 1;
    do {
      lVar12 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plStack_90 + 8))();
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar5 = plStack_88 + 1;
    do {
      lVar12 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plStack_88 + 8))();
    }
  }
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  return;
}



/* Entry: 104a8e1fc; end: 104a8e2f7;  */

void FUN_104a8e1fc(long *param_1,int param_2,ulong *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 *puStack_28;
  
  if (param_2 != 2) {
    *(int *)(param_1 + 9) = param_2;
    uVar5 = param_1[10];
    uVar8 = *param_3;
    if (uVar8 != uVar5) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = *piVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar8 = *param_3;
      }
      param_1[10] = uVar8;
      if ((uVar5 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    func_0x0001004dbc40(param_1 + 0xb,(int)param_1[9],param_3);
    puVar6 = (undefined8 *)param_1[8];
    param_1[8] = 0;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
    return;
  }
  if ((int)param_1[9] != 1) {
    *(undefined4 *)(param_1 + 9) = 1;
    uVar5 = param_1[10];
    uVar8 = *param_3;
    if (uVar8 != uVar5) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = *piVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar8 = *param_3;
      }
      param_1[10] = uVar8;
      if ((uVar5 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    func_0x0001004dbc40(param_1 + 0xb,(int)param_1[9],param_3);
  }
  if (param_1[8] == 0) {
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      func_0x000100033dac(&lStack_40,param_1[5],param_1[6]);
    }
    else {
      lStack_38 = param_1[6];
      lStack_40 = param_1[5];
      lStack_30 = param_1[7];
    }
    lVar10 = param_1[4];
    plStack_48 = (long *)0x0;
    if (*(long *)(lVar10 + 0x210) != 0) {
      plVar1 = (long *)(*(long *)(lVar10 + 0x210) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_48 = *(long **)(lVar10 + 0x210);
      lVar10 = param_1[4];
    }
    uVar2 = *(undefined8 *)(lVar10 + 0x138);
    if (*(long *)(lVar10 + 0x140) == 0) {
      plStack_50 = (long *)0x0;
    }
    else {
      plVar1 = (long *)(*(long *)(lVar10 + 0x140) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_50 = *(long **)(lVar10 + 0x140);
    }
    plVar1 = param_1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_58 = param_1;
    FUN_104a82468(&puStack_28,&lStack_40,&plStack_48,uVar2,&plStack_50,&plStack_58);
    puVar6 = puStack_28;
    puStack_28 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)param_1[8];
    param_1[8] = (long)puVar6;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)();
      puVar6 = puStack_28;
      puStack_28 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)();
      }
    }
    if (plStack_58 == (long *)0x0) goto LAB_104a8eacc;
    plVar1 = plStack_58 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    param_1 = plStack_58;
    if (lVar10 + -1 != 0) goto LAB_104a8eacc;
  }
  else {
    func_0x00010bdaa4d8();
  }
  (**(code **)(*param_1 + 0x10))();
LAB_104a8eacc:
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plStack_50 + 8))();
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plStack_48 + 8))();
    }
  }
  if (lStack_30 < 0) {
    __ZdlPv(lStack_40);
  }
  return;
}



/* Entry: 104a8e2f8; end: 104a8e333;  */

long * FUN_104a8e2f8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 104a8e334; end: 104a8e53f;  */

long * FUN_104a8e334(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  long lVar9;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar4 = param_1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *plVar4 = (long)&PTR_FUN_1107c3308;
    lVar9 = plVar4[0x28];
    if (lVar9 != 0) {
      func_0x00010047e7b4((undefined1 *)((long)register0x00000008 + -0x48),"Subchannel destroyed");
      func_0x00010047e7e4(lVar9 + 0xc0,1,(undefined1 *)((long)register0x00000008 + -0x48));
      func_0x0001004dbc38(plVar4[0x28],4);
    }
    func_0x00010048650c(plVar4[0x26]);
    puVar5 = (undefined8 *)plVar4[0x2a];
    plVar4[0x2a] = 0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
    func_0x000100748390(plVar4[0x27]);
    func_0x00010046df8c();
    FUN_104a8f848(plVar4 + 0x70,plVar4[0x71]);
    plVar6 = (long *)plVar4[0x42];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_104a8ebcc(plVar4 + 0x3f,plVar4[0x40]);
    unaff_x20 = plVar4 + 0x3d;
    lVar9 = plVar4[0x3d];
    FUN_104a8ec64(plVar4 + 0x3c);
    plVar4[0x3d] = 0;
    plVar4[0x3e] = 0;
    plVar4[0x3c] = (long)unaff_x20;
    if ((plVar4[0x3b] & 1U) != 0) {
      func_0x00010084dad0();
    }
    func_0x0001005a5f48(plVar4 + 0x32);
    plVar6 = (long *)plVar4[0x2d];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    puVar5 = (undefined8 *)plVar4[0x2a];
    plVar4[0x2a] = 0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
    plVar6 = (long *)plVar4[0x28];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    func_0x0001004d6d80(plVar4 + 3);
    param_1 = (long *)plVar4[2];
    if (param_1 != (long *)0x0) {
      plVar6 = param_1 + 1;
      do {
        lVar8 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*param_1 + 8))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    iVar7 = (int)lVar9;
    while (iVar7 != 0) {
      FUN_104bd46a0();
      iVar7 = (int)lVar9;
    }
    unaff_x30 = FUN_104a8e540;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = plVar4;
  }
  return plVar4;
}



/* Entry: 104a8e540; end: 104a8e543;  */

long * FUN_104a8e540(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *unaff_x19;
  long lVar9;
  long *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar6 = param_1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *plVar6 = (long)&PTR_FUN_1107c3308;
    lVar9 = plVar6[0x28];
    if (lVar9 != 0) {
      func_0x00010047e7b4((undefined1 *)((long)register0x00000008 + -0x48),"Subchannel destroyed");
      func_0x00010047e7e4(lVar9 + 0xc0,1,(undefined1 *)((long)register0x00000008 + -0x48));
      func_0x0001004dbc38(plVar6[0x28],4);
    }
    func_0x00010048650c(plVar6[0x26]);
    puVar4 = (undefined8 *)plVar6[0x2a];
    plVar6[0x2a] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
    }
    func_0x000100748390(plVar6[0x27]);
    func_0x00010046df8c();
    FUN_104a8f848(plVar6 + 0x70,plVar6[0x71]);
    plVar5 = (long *)plVar6[0x42];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    FUN_104a8ebcc(plVar6 + 0x3f,plVar6[0x40]);
    unaff_x20 = plVar6 + 0x3d;
    lVar9 = plVar6[0x3d];
    FUN_104a8ec64(plVar6 + 0x3c);
    plVar6[0x3d] = 0;
    plVar6[0x3e] = 0;
    plVar6[0x3c] = (long)unaff_x20;
    if ((plVar6[0x3b] & 1U) != 0) {
      func_0x00010084dad0();
    }
    func_0x0001005a5f48(plVar6 + 0x32);
    plVar5 = (long *)plVar6[0x2d];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    puVar4 = (undefined8 *)plVar6[0x2a];
    plVar6[0x2a] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
    }
    plVar5 = (long *)plVar6[0x28];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    func_0x0001004d6d80(plVar6 + 3);
    param_1 = (long *)plVar6[2];
    if (param_1 != (long *)0x0) {
      plVar5 = param_1 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*param_1 + 8))();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    iVar7 = (int)lVar9;
    while (iVar7 != 0) {
      FUN_104bd46a0();
      iVar7 = (int)lVar9;
    }
    unaff_x30 = FUN_104a8e540;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = plVar6;
  }
  return plVar6;
}



/* Entry: 104a8e544; end: 104a8e557;  */

void FUN_104a8e544(void)

{
  FUN_104a8e334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a8e558; end: 104a8e607;  */

void FUN_104a8e558(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plStack_38;
  
  func_0x000100460448(param_1 + 400);
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x18))();
  if (plVar1 != (long *)0x0) {
    func_0x000104abe9c0(*(undefined8 *)(param_1 + 0x138));
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    plStack_38 = param_3;
    FUN_104a8ecd4(param_1 + 0x1e0,&plStack_38);
  }
  else {
    FUN_104a8e174(param_1 + 0x1f8,param_2,param_3);
  }
  func_0x000100466b80(param_1 + 400);
  return;
}



/* Entry: 104a8e608; end: 104a8e72f;  */

void FUN_104a8e608(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  
  plVar1 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000100460448(param_1 + 0x32);
  plVar4 = param_1 + 0x43;
  func_0x0001004c54f8();
  iVar5 = *(int *)((long)param_1 + 0x1d4);
  if (iVar5 == 3) {
    FUN_104ab2050();
    (**(code **)(*plVar4 + 0x58))();
    if ((int)plVar4 != 0) {
      FUN_104a8e730(param_1);
      goto LAB_104a8e694;
    }
    iVar5 = *(int *)((long)param_1 + 0x1d4);
  }
  if (iVar5 == 1) {
    func_0x000100460dc4();
    lVar6 = *plVar4;
    func_0x0001004671a4();
    param_1[0x6c] = lVar6;
  }
LAB_104a8e694:
  func_0x000100466b80(param_1 + 0x32);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a8e6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104a8e730; end: 104a8e7fb;  */

void FUN_104a8e730(long param_1)

{
  ulong auStack_38 [2];
  char cStack_21;
  
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    FUN_104a8fd88(auStack_38,param_1 + 0x18);
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                        ,899,1,"subchannel %p %s: backoff delay elapsed, reporting IDLE");
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
    auStack_38[0] = 0;
    func_0x0001004dbb24(param_1,0,auStack_38);
    if ((auStack_38[0] & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104a8e7fc; end: 104a8e94f;  */

void FUN_104a8e7fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 0x18,param_1);
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  func_0x000100460448(param_1 + 400);
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    puVar6 = *(undefined8 **)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = 0;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
    }
    plVar5 = *(long **)(param_1 + 0x210);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    *(undefined8 *)(param_1 + 0x210) = 0;
    FUN_104a8ebcc(param_1 + 0x1f8,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(long *)(param_1 + 0x1f8) = param_1 + 0x200;
    *(undefined8 *)(param_1 + 0x200) = 0;
    func_0x000100466b80(param_1 + 400);
    return;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                      ,0x335,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104a8e910);
  (*pcVar4)();
}



/* Entry: 104a8e950; end: 104a8e9a3;  */

void FUN_104a8e950(long param_1)

{
  func_0x000100460448(param_1 + 400);
  FUN_104a8e730(param_1);
  func_0x000100466b80(param_1 + 400);
  return;
}



/* Entry: 104a8e9a4; end: 104a8eb8f;  */

void FUN_104a8e9a4(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 *puStack_28;
  
  if (param_1[8] == 0) {
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      func_0x000100033dac(&lStack_40,param_1[5],param_1[6]);
    }
    else {
      lStack_38 = param_1[6];
      lStack_40 = param_1[5];
      lStack_30 = param_1[7];
    }
    lVar7 = param_1[4];
    plStack_48 = (long *)0x0;
    if (*(long *)(lVar7 + 0x210) != 0) {
      plVar1 = (long *)(*(long *)(lVar7 + 0x210) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_48 = *(long **)(lVar7 + 0x210);
      lVar7 = param_1[4];
    }
    uVar2 = *(undefined8 *)(lVar7 + 0x138);
    if (*(long *)(lVar7 + 0x140) == 0) {
      plStack_50 = (long *)0x0;
    }
    else {
      plVar1 = (long *)(*(long *)(lVar7 + 0x140) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_50 = *(long **)(lVar7 + 0x140);
    }
    plVar1 = param_1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_58 = param_1;
    FUN_104a82468(&puStack_28,&lStack_40,&plStack_48,uVar2,&plStack_50,&plStack_58);
    puVar5 = puStack_28;
    puStack_28 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)param_1[8];
    param_1[8] = (long)puVar5;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
      puVar5 = puStack_28;
      puStack_28 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)();
      }
    }
    if (plStack_58 == (long *)0x0) goto LAB_104a8eacc;
    plVar1 = plStack_58 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    param_1 = plStack_58;
    if (lVar7 + -1 != 0) goto LAB_104a8eacc;
  }
  else {
    func_0x00010bdaa4d8();
  }
  (**(code **)(*param_1 + 0x10))();
LAB_104a8eacc:
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plStack_50 + 8))();
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plStack_48 + 8))();
    }
  }
  if (lStack_30 < 0) {
    __ZdlPv(lStack_40);
  }
  return;
}



/* Entry: 104a8eb90; end: 104a8ebcb;  */

long * FUN_104a8eb90(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 104a8ebcc; end: 104a8ec13;  */

void FUN_104a8ebcc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_104a8ebcc(param_1,*param_2);
    FUN_104a8ebcc(param_1,param_2[1]);
    FUN_104a8ec14(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 104a8ec14; end: 104a8ec63;  */

void FUN_104a8ec14(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[3];
  param_1[3] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 104a8ec64; end: 104a8ecd3;  */

void FUN_104a8ec64(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_104a8ec64(param_1,*param_2);
    FUN_104a8ec64(param_1,param_2[1]);
    plVar4 = (long *)param_2[5];
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 104a8ecd4; end: 104a8ed37;  */

undefined8 FUN_104a8ecd4(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar3;
    do {
      plVar1 = plVar4 + 1;
      if (*param_2 <= (ulong)plVar4[4]) {
        plVar2 = plVar4;
        plVar1 = plVar4;
      }
      plVar4 = (long *)*plVar1;
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && ((ulong)plVar2[4] <= *param_2)) {
      FUN_104a8ed38();
      return 1;
    }
  }
  return 0;
}



/* Entry: 104a8ed38; end: 104a8ee07;  */

undefined8 FUN_104a8ed38(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  func_0x000104a8ed98();
  plVar4 = *(long **)(param_2 + 0x28);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 104a8ee08; end: 104a8ee93;  */

long * FUN_104a8ee08(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      FUN_104a77514(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (FUN_104a77514(param_1,param_2,plVar3 + 4), (int)param_1 == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}



/* Entry: 104a8ee94; end: 104a8efcb;  */

undefined8 * FUN_104a8ee94(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  plVar2 = param_1 + 4;
  *plVar2 = 0;
  *param_1 = &PTR_FUN_1107c33b8;
  param_1[1] = 1;
  *plVar2 = *param_2;
  *param_2 = 0;
  uVar4 = param_3[1];
  uVar3 = *param_3;
  param_1[7] = param_3[2];
  param_1[6] = uVar4;
  param_1[5] = uVar3;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  iVar1 = *(int *)(*plVar2 + 0x1d4);
  param_1[0xc] = 0;
  param_1[8] = 0;
  if (iVar1 == 2) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 9) = iVar1;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = param_1 + 0xc;
  if (*(int *)(*plVar2 + 0x1d4) == 2) {
    FUN_104a8e9a4(param_1);
  }
  return param_1;
}



/* Entry: 104a8efcc; end: 104a8f04b;  */

void FUN_104a8efcc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  FUN_104a8ec64(param_1 + 0xb,param_1[0xc]);
  param_1[0xb] = (long)(param_1 + 0xc);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar4 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar1 = param_1 + 1;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a8f044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104a8f04c; end: 104a8f04f;  */

undefined8 * FUN_104a8f04c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_1107c33b8;
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  param_1[4] = 0;
  FUN_104a8ec64(param_1 + 0xb,param_1[0xc]);
  param_1[0xb] = param_1 + 0xc;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((param_1[10] & 1) != 0) {
    func_0x00010084dad0();
  }
  puVar5 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_1107c7418;
  func_0x0001004c05d4(param_1 + 2);
  return param_1;
}



/* Entry: 104a8f050; end: 104a8f063;  */

void FUN_104a8f050(void)

{
  FUN_104a8f120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a8f064; end: 104a8f11f;  */

void FUN_104a8f064(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  
  lVar1 = *(long *)(param_1 + 0x20) + 400;
  func_0x000100460448(lVar1);
  if (((int)param_2 != 4) && (*(long *)(param_1 + 0x40) != 0)) {
    *(int *)(param_1 + 0x48) = (int)param_2;
    uVar4 = *(ulong *)(param_1 + 0x50);
    uVar5 = *param_3;
    if (uVar5 != uVar4) {
      if ((uVar5 & 1) != 0) {
        piVar6 = (int *)(uVar5 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar5 = *param_3;
      }
      *(ulong *)(param_1 + 0x50) = uVar5;
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    func_0x0001004dbc40(param_1 + 0x58,param_2,param_3);
  }
  func_0x000100466b80(lVar1);
  return;
}



/* Entry: 104a8f120; end: 104a8f21b;  */

undefined8 * FUN_104a8f120(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_1107c33b8;
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  param_1[4] = 0;
  FUN_104a8ec64(param_1 + 0xb,param_1[0xc]);
  param_1[0xb] = param_1 + 0xc;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((param_1[10] & 1) != 0) {
    func_0x00010084dad0();
  }
  puVar5 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_1107c7418;
  func_0x0001004c05d4(param_1 + 2);
  return param_1;
}



/* Entry: 104a8f21c; end: 104a8f357;  */

undefined1  [16]
FUN_104a8f21c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x000104a8f2bc(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_104a8f358(alStack_60,param_1,param_3,param_4);
    FUN_104a8f3f8(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x000104a8f44c(alStack_60,0);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 104a8f358; end: 104a8f3f7;  */

void FUN_104a8f358(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000100033dac((undefined8 *)(lVar1 + 0x20),*param_3,param_3[1]);
  }
  else {
    uVar2 = *param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_3[1];
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(undefined8 *)(lVar1 + 0x30) = param_3[2];
  }
  uVar2 = *param_4;
  *param_4 = 0;
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 104a8f3f8; end: 104a8f4ff;  */

void FUN_104a8f3f8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 104a8f500; end: 104a8f613;  */

void FUN_104a8f500(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  
  puVar2 = param_1 + 3;
  puVar8 = (ulong *)param_1[2];
  if (puVar8 == (ulong *)*puVar2) {
    uVar7 = *param_1;
    uVar5 = param_1[1];
    if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
      uVar5 = (long)((long)puVar8 - uVar7) >> 2;
      if ((long)puVar8 - uVar7 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      func_0x0001004d847c();
      puVar1 = puVar2 + (uVar5 >> 2);
      uVar7 = param_1[2] - (long)param_1[1];
      puVar8 = puVar1;
      if (uVar7 != 0) {
        puVar8 = (ulong *)((long)puVar1 + (uVar7 & 0xfffffffffffffff8));
        lVar9 = ((long)uVar7 >> 3) << 3;
        puVar6 = (ulong *)param_1[1];
        puVar10 = puVar1;
        do {
          *puVar10 = *puVar6;
          lVar9 = lVar9 + -8;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar7 = *param_1;
      *param_1 = (ulong)puVar2;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar8;
      param_1[3] = (ulong)(puVar2 + uVar3);
      if (uVar7 != 0) {
        __ZdlPv(uVar7);
        puVar8 = (ulong *)param_1[2];
      }
    }
    else {
      lVar4 = (long)(uVar5 - uVar7) >> 3;
      lVar9 = lVar4 + 2;
      if (-2 < lVar4) {
        lVar9 = lVar4 + 1;
      }
      lVar11 = uVar5 + (lVar9 >> 1) * -8;
      lVar4 = (long)puVar8 - uVar5;
      if (lVar4 != 0) {
        _memmove(lVar11,uVar5,lVar4);
        puVar8 = (ulong *)param_1[1];
      }
      puVar2 = puVar8 + -(lVar9 >> 1);
      puVar8 = (ulong *)(lVar11 + lVar4);
      param_1[1] = (ulong)puVar2;
      param_1[2] = (ulong)puVar8;
    }
  }
  *puVar8 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 104a8f614; end: 104a8f847;  */

void FUN_104a8f614(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)*param_1) {
    puVar1 = (ulong *)(param_1 + 3);
    uVar6 = *puVar1;
    uVar3 = param_1[2];
    if (uVar3 < uVar6) {
      lVar7 = (long)(uVar6 - uVar3) >> 3;
      lVar4 = lVar7 + 2;
      if (-2 < lVar7) {
        lVar4 = lVar7 + 1;
      }
      puVar8 = puVar2 + (lVar4 >> 1);
      if (uVar3 - (long)puVar2 != 0) {
        _memmove(puVar8,puVar2,uVar3 - (long)puVar2);
        puVar2 = (undefined8 *)param_1[2];
      }
      param_1[1] = (long)puVar8;
      param_1[2] = (long)(puVar2 + (lVar4 >> 1));
      puVar2 = puVar8;
    }
    else {
      lVar4 = (long)(uVar6 - (long)puVar2) >> 2;
      if (uVar6 - (long)puVar2 == 0) {
        lVar4 = 1;
      }
      lVar7 = lVar4 * 2;
      func_0x0001004d847c();
      puVar2 = (undefined8 *)((long)puVar1 + (lVar7 + 6U & 0xfffffffffffffff8));
      uVar3 = param_1[2] - param_1[1];
      puVar8 = puVar2;
      if (uVar3 != 0) {
        puVar8 = (undefined8 *)((long)puVar2 + (uVar3 & 0xfffffffffffffff8));
        lVar7 = ((long)uVar3 >> 3) << 3;
        puVar5 = (undefined8 *)param_1[1];
        puVar9 = puVar2;
        do {
          *puVar9 = *puVar5;
          lVar7 = lVar7 + -8;
          puVar5 = puVar5 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar2;
      param_1[2] = (long)puVar8;
      param_1[3] = (long)(puVar1 + lVar4);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar2 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar2[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 104a8f848; end: 104a8f993;  */

void FUN_104a8f848(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_104a8f848(param_1,*param_2);
    FUN_104a8f848(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 104a8f994; end: 104a8f9f7;  */

void FUN_104a8f994(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_DAT_1107c3408;
  param_2[1] = 0;
  uVar4 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *(undefined8 *)(param_1 + 8);
  }
  param_2[1] = uVar4;
  return;
}



/* Entry: 104a8f9f8; end: 104a8fa47;  */

void FUN_104a8f9f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104a8fa48; end: 104a8faf7;  */

void FUN_104a8fa48(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001004b62b4(&uStack_38,0);
  func_0x000100460de4(auStack_80);
  FUN_104a8e950(*(undefined8 *)(param_1 + 8));
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000100467a48(auStack_80);
  func_0x0001004b6ddc(&uStack_38);
  return;
}



/* Entry: 104a8faf8; end: 104a8fb33;  */

long FUN_104a8faf8(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c3468);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a8fb34; end: 104a8fb43;  */

undefined ** FUN_104a8fb34(void)

{
  return &PTR_DAT_1107c3468;
}



/* Entry: 104a8fb44; end: 104a8fb57;  */

void FUN_104a8fb44(void)

{
  FUN_104a8fc8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a8fb58; end: 104a8fc8b;  */

void FUN_104a8fb58(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plStack_38;
  
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x000100460448(lVar6 + 400);
  if ((param_2 - 3U < 2) && (plVar4 = *(long **)(lVar6 + 0x210), plVar4 != (long *)0x0)) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
    *(undefined8 *)(lVar6 + 0x210) = 0;
    if (*(long *)(lVar6 + 0x140) != 0) {
      plStack_38 = (long *)0x0;
      func_0x0001008dae9c(*(long *)(lVar6 + 0x140),&plStack_38);
      if (plStack_38 != (long *)0x0) {
        plVar4 = plStack_38 + 1;
        do {
          lVar5 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(*plStack_38 + 8))();
        }
      }
    }
    func_0x0001004dbb24(lVar6,0,param_3);
    func_0x0001004c54f8(lVar6 + 0x218);
  }
  func_0x000100466b80(lVar6 + 400);
  return;
}



/* Entry: 104a8fc8c; end: 104a8fd03;  */

undefined8 * FUN_104a8fc8c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c3488;
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  param_1[4] = 0;
  *param_1 = &PTR_FUN_1107c7418;
  func_0x0001004c05d4(param_1 + 2);
  return param_1;
}



/* Entry: 104a8fd04; end: 104a8fd23;  */

void FUN_104a8fd04(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a8fd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 104a8fd24; end: 104a8fd87;  */

ulong FUN_104a8fd24(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x80) < *(uint *)(param_2 + 0x80)) {
LAB_104a8fd40:
    uVar1 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x80) <= *(uint *)(param_2 + 0x80)) {
      lVar2 = param_1;
      _memcmp();
      if ((int)lVar2 < 0) goto LAB_104a8fd40;
      if ((int)lVar2 == 0) {
        uVar1 = *(ulong *)(param_1 + 0x88);
        func_0x000104aa9f08(uVar1,*(undefined8 *)(param_2 + 0x88));
        return uVar1 >> 0x1f & 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 104a8fd88; end: 104a8ff3f;  */

long * FUN_104a8fd88(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 **ppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long alStack_b8 [4];
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001004d4034(alStack_b8);
  if (alStack_b8[0] == 0) {
    plVar6 = alStack_b8;
    func_0x0001004d5530();
    if (*(char *)((long)plVar6 + 0x17) < '\0') {
      func_0x000100033dac(&ppuStack_d0,*plVar6,plVar6[1]);
    }
    else {
      uStack_c8 = plVar6[1];
      ppuStack_d0 = (undefined8 **)*plVar6;
      uStack_c0 = plVar6[2];
    }
  }
  else {
    func_0x00010ae77430(&ppuStack_d0,alStack_b8,1);
  }
  uVar4 = uStack_c0;
  uVar3 = uStack_c8;
  ppuVar2 = ppuStack_d0;
  uVar1 = uStack_c0 >> 0x38;
  FUN_104aaa098(&ppuStack_e8,*(undefined8 *)(param_2 + 0x88));
  uStack_80 = uVar3;
  ppuStack_88 = ppuVar2;
  if (-1 < (long)uVar4) {
    uStack_80 = uVar1;
    ppuStack_88 = &ppuStack_d0;
  }
  pcStack_98 = "{address=";
  uStack_90 = 9;
  uStack_60 = uStack_e0;
  ppuStack_68 = ppuStack_e8;
  if (-1 < (char)bStack_d1) {
    uStack_60 = (ulong)bStack_d1;
    ppuStack_68 = &ppuStack_e8;
  }
  pcStack_78 = ", args=";
  uStack_70 = 7;
  puStack_58 = &DAT_10f2da10d;
  uStack_50 = 1;
  plVar6 = (long *)0x5;
  func_0x00010ae8c7e0(param_1,&pcStack_98);
  if ((char)bStack_d1 < '\0') {
    __ZdlPv(ppuStack_e8);
  }
  if ((long)uStack_c0 < 0) {
    __ZdlPv(ppuStack_d0);
  }
  plVar5 = alStack_b8;
  func_0x00010047c7d4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if ((char)bStack_d1 < '\0') {
      __ZdlPv(ppuStack_e8);
    }
    if ((long)uStack_c0 < 0) {
      __ZdlPv(ppuStack_d0);
    }
    func_0x00010047c7d4(alStack_b8);
    __Unwind_Resume();
    uVar7 = (uint)(plVar6 < plVar5);
    if (plVar5 < plVar6) {
      uVar7 = 0xffffffff;
    }
    return (long *)(ulong)uVar7;
  }
  return plVar5;
}



/* Entry: 104a8ff40; end: 104a8ff53;  */

uint FUN_104a8ff40(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 104a8ff54; end: 104a901d7;  */

undefined8 *
FUN_104a8ff54(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             char *param_5)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  *param_1 = &PTR_FUN_1107c3518;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[2] = *param_2;
  *param_2 = 0;
  param_1[3] = param_3;
  param_1[4] = param_5;
  func_0x0001007414f4(&plStack_48,*(undefined8 *)(param_1[2] + 0x18));
  lVar8 = plStack_48[2];
  plVar3 = (long *)plStack_48[3];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcVar2 = "SubchannelStreamClient";
  if (param_5 != (char *)0x0) {
    pcVar2 = param_5;
  }
  pcVar6 = pcVar2;
  lStack_68 = lVar8;
  plStack_60 = plVar3;
  _strlen(pcVar2);
  FUN_104acb990(param_1 + 5,lVar8,pcVar2,pcVar6);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_48 + 8))();
    }
  }
  func_0x000100460318(param_1 + 7);
  uVar7 = *param_4;
  *param_4 = 0;
  param_1[0x10] = 0;
  param_1[0xf] = uVar7;
  lStack_68 = 1000;
  uStack_58 = 0x3fc999999999999a;
  plStack_60 = (long *)0x3ff999999999999a;
  uStack_50 = 120000;
  func_0x0001004bf25c(param_1 + 0x11,&lStack_68);
  *(undefined1 *)(param_1 + 0x45) = 0;
  if (param_1[4] != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0x49,1,"%s %p: created SubchannelStreamClient");
  }
  param_1[0x42] = FUN_104a901d8;
  param_1[0x43] = param_1;
  param_1[0x44] = 0;
  FUN_104a902c0(param_1);
  return param_1;
}



/* Entry: 104a901d8; end: 104a902bf;  */

void FUN_104a901d8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x000100460448(param_1 + 7);
  *(undefined1 *)(param_1 + 0x45) = 0;
  if (((param_1[0xf] != 0) && (*param_2 == 0)) && (param_1[0x10] == 0)) {
    if (param_1[4] != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                          ,0x98,1,"%s %p: SubchannelStreamClient restarting health check call");
    }
    FUN_104a90540(param_1);
  }
  func_0x000100466b80(param_1 + 7);
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a9027c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104a902c0; end: 104a90313;  */

void FUN_104a902c0(long param_1)

{
  func_0x000100460448(param_1 + 0x38);
  FUN_104a90540(param_1);
  func_0x000100466b80(param_1 + 0x38);
  return;
}



/* Entry: 104a90314; end: 104a9034f;  */

long * FUN_104a90314(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 104a90350; end: 104a90353;  */

undefined8 *
FUN_104a90350(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             char *param_5)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  *param_1 = &PTR_FUN_1107c3518;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[2] = *param_2;
  *param_2 = 0;
  param_1[3] = param_3;
  param_1[4] = param_5;
  func_0x0001007414f4(&plStack_48,*(undefined8 *)(param_1[2] + 0x18));
  lVar8 = plStack_48[2];
  plVar3 = (long *)plStack_48[3];
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcVar2 = "SubchannelStreamClient";
  if (param_5 != (char *)0x0) {
    pcVar2 = param_5;
  }
  pcVar6 = pcVar2;
  lStack_68 = lVar8;
  plStack_60 = plVar3;
  _strlen(pcVar2);
  FUN_104acb990(param_1 + 5,lVar8,pcVar2,pcVar6);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_48 + 8))();
    }
  }
  func_0x000100460318(param_1 + 7);
  uVar7 = *param_4;
  *param_4 = 0;
  param_1[0x10] = 0;
  param_1[0xf] = uVar7;
  lStack_68 = 1000;
  uStack_58 = 0x3fc999999999999a;
  plStack_60 = (long *)0x3ff999999999999a;
  uStack_50 = 120000;
  func_0x0001004bf25c(param_1 + 0x11,&lStack_68);
  *(undefined1 *)(param_1 + 0x45) = 0;
  if (param_1[4] != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0x49,1,"%s %p: created SubchannelStreamClient");
  }
  param_1[0x42] = FUN_104a901d8;
  param_1[0x43] = param_1;
  param_1[0x44] = 0;
  FUN_104a902c0(param_1);
  return param_1;
}



/* Entry: 104a90354; end: 104a9042f;  */

undefined8 * FUN_104a90354(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_1107c3518;
  if (param_1[4] != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0x52,1,"%s %p: destroying SubchannelStreamClient");
  }
  puVar4 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar5 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x0001005a5f48(param_1 + 7);
  func_0x000100487bf4(param_1 + 5);
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104a90430; end: 104a90433;  */

undefined8 * FUN_104a90430(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_1107c3518;
  if (param_1[4] != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0x52,1,"%s %p: destroying SubchannelStreamClient");
  }
  puVar4 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar5 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x0001005a5f48(param_1 + 7);
  func_0x000100487bf4(param_1 + 5);
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104a90434; end: 104a90447;  */

void FUN_104a90434(void)

{
  FUN_104a90354();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a90448; end: 104a9053f;  */

void FUN_104a90448(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[4] != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0x59,1,"%s %p: SubchannelStreamClient shutting down");
  }
  func_0x000100460448(param_1 + 7);
  plVar3 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puVar4 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  if ((char)param_1[0x45] != '\0') {
    func_0x0001005a5960(param_1 + 0x3a);
  }
  func_0x000100466b80(param_1 + 7);
  plVar3 = param_1 + 1;
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a9051c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104a90540; end: 104a906ab;  */

void FUN_104a90540(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  long extraout_x8;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined1 uStack_151;
  ulong uStack_150;
  ulong uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  char cStack_109;
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar4 = (long *)param_2[0xf];
  if (plVar4 == (long *)0x0) {
    return;
  }
  if (param_2[0x10] == 0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
    plVar4 = param_2 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar5 = 0xd98;
    __Znwm();
    FUN_104a90e00();
    if (param_2 != (long *)0x0) {
      plVar4 = param_2 + 1;
      do {
        lVar13 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*param_2 + 0x10))();
      }
    }
    puVar6 = (undefined8 *)param_2[0x10];
    param_2[0x10] = lVar5;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)();
      lVar5 = param_2[0x10];
    }
    lVar13 = param_2[4];
    if (lVar13 != 0) goto LAB_104a9061c;
  }
  else {
    func_0x00010bdaa568();
    lVar13 = extraout_x8;
LAB_104a9061c:
    lStack_50 = lVar13;
    plStack_48 = param_2;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0x74,1,"%s %p: SubchannelStreamClient created CallState %p");
    lVar5 = param_2[0x10];
  }
  plStack_48 = *(long **)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(lVar5 + 8);
  lVar14 = *(long *)(lVar13 + 0x10);
  if (lVar14 == 0) {
    plStack_a0 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(lVar14 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = *(long **)(lVar13 + 0x10);
  }
  lStack_98 = lVar5 + 0x10;
  plStack_90 = (long *)0x1;
  uStack_88 = 0x1c;
  pcStack_80 = "/grpc.health.v1.Health/Watch";
  func_0x000100467750();
  plStack_100 = plStack_a0;
  uStack_c0 = *(undefined8 *)(lVar5 + 0x20);
  uStack_68 = 0x7fffffffffffffff;
  lVar13 = lVar5 + 0x88;
  lStack_b0 = lVar5 + 0x28;
  uStack_148 = 0;
  plStack_a0 = (long *)0x0;
  lStack_f8 = lStack_98;
  uStack_e8 = uStack_88;
  plStack_f0 = plStack_90;
  uStack_d8 = uStack_78;
  pcStack_e0 = pcStack_80;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_78 = 0;
  pcStack_80 = (char *)0x0;
  uStack_c8 = 0x7fffffffffffffff;
  uStack_d0 = param_1;
  lStack_b8 = lVar13;
  uStack_70 = param_1;
  uStack_60 = uStack_c0;
  lStack_58 = lVar13;
  lStack_50 = lStack_b0;
  func_0x0001008db56c(&plStack_120,&plStack_100,&uStack_148);
  plVar4 = plStack_120;
  plStack_120 = (long *)0x0;
  *(long **)(lVar5 + 0xd8) = plVar4;
  func_0x0001008dbe00(&plStack_120);
  if ((long *)0x1 < plStack_f0) {
    do {
      lVar14 = *plStack_f0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
      if (bVar2) {
        *plStack_f0 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plStack_f0[1])();
    }
  }
  if (plStack_100 != (long *)0x0) {
    plVar4 = plStack_100 + 1;
    do {
      lVar14 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plStack_100 + 8))();
    }
  }
  *(code **)(lVar5 + 0xd80) = FUN_104a912a4;
  *(long *)(lVar5 + 0xd88) = lVar5;
  *(undefined8 *)(lVar5 + 0xd90) = 0;
  func_0x0001008dbe30(*(undefined8 *)(lVar5 + 0xd8),lVar5 + 0xd78);
  if (uStack_148 == 0) {
    if (*(long *)(*(long *)(lVar5 + 8) + 0x78) != 0) {
      *(long *)(lVar5 + 0x180) = lVar13;
      *(long *)(lVar5 + 400) = lVar5 + 0xe0;
      func_0x000104a8dbfc(&plStack_120,*(undefined8 *)(lVar5 + 0xd8),&uStack_151,"on_complete");
      plStack_120 = (long *)0x0;
      func_0x0001008dbe00(&plStack_120);
      *(code **)(lVar5 + 0x250) = FUN_104a91358;
      *(long *)(lVar5 + 600) = lVar5;
      *(undefined8 *)(lVar5 + 0x260) = 0;
      *(long *)(lVar5 + 0x188) = lVar5 + 0x248;
      (**(code **)(**(long **)(*(long *)(lVar5 + 8) + 0x78) + 0x10))(&plStack_120);
      func_0x0001004b8034(lVar5 + 0x268,&plStack_120);
      if ((long *)0x1 < plStack_120) {
        do {
          lVar13 = *plStack_120;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar2) {
            *plStack_120 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_120[1])();
        }
      }
      if (uStack_148 != 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                            ,0xf3,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a90bb4);
        (*pcVar3)();
      }
      *(long *)(lVar5 + 0xe0) = lVar5 + 0x268;
      *(undefined4 *)(lVar5 + 0xe8) = 0;
      *(undefined8 *)(lVar5 + 0xf0) = 0;
      *(byte *)(lVar5 + 0x198) = *(byte *)(lVar5 + 0x198) | 1;
      (**(code **)(**(long **)(*(long *)(lVar5 + 8) + 0x78) + 0x28))(&plStack_120);
      uStack_138 = uStack_118;
      plStack_140 = plStack_120;
      uStack_128 = uStack_108;
      func_0x0001008603ac(lVar5 + 0x470,&plStack_140);
      if ((long *)0x1 < plStack_140) {
        do {
          lVar13 = *plStack_140;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_140,0x10);
          if (bVar2) {
            *plStack_140 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 + -1 == 0) {
          (*(code *)plStack_140[1])();
        }
      }
      *(long *)(lVar5 + 0x108) = lVar5 + 0x470;
      *(long *)(lVar5 + 0xf8) = lVar5 + 0x598;
      *(byte *)(lVar5 + 0x198) = *(byte *)(lVar5 + 0x198) | 6;
      *(long *)(lVar5 + 0x118) = lVar5 + 0x7a0;
      *(undefined8 *)(lVar5 + 0x120) = 0;
      *(undefined8 *)(lVar5 + 0x130) = 0;
      *(undefined8 *)(lVar5 + 0x138) = 0;
      func_0x000104a8dbfc(&plStack_120,*(undefined8 *)(lVar5 + 0xd8),&uStack_151,
                          "recv_initial_metadata_ready");
      plStack_120 = (long *)0x0;
      func_0x0001008dbe00(&plStack_120);
      *(undefined8 *)(lVar5 + 0x9b0) = 0x104a913c0;
      *(long *)(lVar5 + 0x9b8) = lVar5;
      *(undefined8 *)(lVar5 + 0x9c0) = 0;
      *(long *)(lVar5 + 0x128) = lVar5 + 0x9a8;
      *(byte *)(lVar5 + 0x198) = *(byte *)(lVar5 + 0x198) | 8;
      *(long *)(lVar5 + 0x140) = lVar5 + 0x9c8;
      *(undefined8 *)(lVar5 + 0x150) = 0;
      func_0x000104a8dbfc(&plStack_120,*(undefined8 *)(lVar5 + 0xd8),&uStack_151,
                          "recv_message_ready");
      plStack_120 = (long *)0x0;
      func_0x0001008dbe00(&plStack_120);
      *(undefined8 *)(lVar5 + 0xb00) = 0x104a91418;
      *(long *)(lVar5 + 0xb08) = lVar5;
      *(undefined8 *)(lVar5 + 0xb10) = 0;
      *(long *)(lVar5 + 0x158) = lVar5 + 0xaf8;
      *(byte *)(lVar5 + 0x198) = *(byte *)(lVar5 + 0x198) | 0x10;
      FUN_104a91448(lVar5,lVar5 + 0x188);
      iVar11 = (int)lVar5 + 0x208;
      *(long *)(lVar5 + 0x210) = lVar5 + 0xe0;
      *(long *)(lVar5 + 0x160) = lVar5 + 0xb20;
      *(long *)(lVar5 + 0x168) = lVar5 + 0xd28;
      *(code **)(lVar5 + 0xd60) = FUN_104a914c4;
      *(long *)(lVar5 + 0xd68) = lVar5;
      *(undefined8 *)(lVar5 + 0xd70) = 0;
      *(long *)(lVar5 + 0x170) = lVar5 + 0xd58;
      *(byte *)(lVar5 + 0x218) = *(byte *)(lVar5 + 0x218) | 0x20;
      FUN_104a91448(lVar5);
      goto LAB_104a90ae0;
    }
    uStack_150 = 0;
  }
  else {
    uStack_150 = uStack_148;
    if ((uStack_148 & 1) != 0) {
      piVar12 = (int *)(uStack_148 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar2) {
          *piVar12 = *piVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_104aba950(&plStack_120,&uStack_150);
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                      ,0xdf,2,
                      "SubchannelStreamClient %p CallState %p: error creating stream on subchannel (%s); will retry"
                     );
  if (cStack_109 < '\0') {
    __ZdlPv(plStack_120);
  }
  if ((uStack_150 & 1) != 0) {
    func_0x00010084dad0();
  }
  iVar11 = 1;
  FUN_104a912b8(lVar5);
LAB_104a90ae0:
  if ((uStack_148 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((long *)0x1 < plStack_90) {
    do {
      lVar13 = *plStack_90;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar2) {
        *plStack_90 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  plVar4 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar7 = plStack_a0 + 1;
    do {
      lVar13 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plStack_a0 + 8))();
    }
  }
  if ((long *)*(long *)PTR____stack_chk_guard_11034bdc0 == plStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    FUN_104bd46a0();
    if (cStack_109 < '\0') {
      __ZdlPv(plStack_120);
    }
    func_0x0001004bdf74(&uStack_150);
    func_0x0001004bdf74(&uStack_148);
    FUN_104a7735c(&plStack_a0);
  }
  __Unwind_Resume();
  plVar7 = (long *)plVar4[0xf];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,plVar4);
  }
  plVar7 = plVar4 + 0x11;
  func_0x0001004db8b4();
  if (plVar4[4] != 0) {
    pcVar8 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
    ;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0x80,1,"%s %p: SubchannelStreamClient health check call lost...");
    func_0x000100460dc4();
    uVar9 = *(undefined8 *)pcVar8;
    func_0x0001004671a4(uVar9);
    plVar10 = plVar7;
    FUN_104a90d9c(plVar7,uVar9);
    if ((long)plVar10 < 1) {
      pcVar8 = "%s %p: ... retrying immediately.";
      uVar9 = 0x87;
    }
    else {
      pcVar8 = "%s %p: ... will retry in %lldms.";
      uVar9 = 0x84;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,uVar9,1,pcVar8);
  }
  plVar10 = plVar4 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = *plVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined1 *)(plVar4 + 0x45) = 1;
                    /* WARNING: Trying to construct memory range beyond end of address space: ram */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000113815c30)(plVar4 + 0x3a,plVar7,plVar4 + 0x41);
  return;
}



/* Entry: 104a906ac; end: 104a90c9b;  */

void FUN_104a906ac(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined1 uStack_151;
  ulong uStack_150;
  ulong uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  char cStack_109;
  undefined8 uStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_2 + 8);
  lVar12 = *(long *)(lVar10 + 0x10);
  if (lVar12 == 0) {
    plStack_a0 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(lVar12 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = *(long **)(lVar10 + 0x10);
  }
  lStack_98 = param_2 + 0x10;
  plStack_90 = (long *)0x1;
  uStack_88 = 0x1c;
  pcStack_80 = "/grpc.health.v1.Health/Watch";
  func_0x000100467750();
  plStack_100 = plStack_a0;
  uStack_c0 = *(undefined8 *)(param_2 + 0x20);
  uStack_68 = 0x7fffffffffffffff;
  lVar10 = param_2 + 0x88;
  lStack_b0 = param_2 + 0x28;
  uStack_148 = 0;
  plStack_a0 = (long *)0x0;
  lStack_f8 = lStack_98;
  uStack_e8 = uStack_88;
  plStack_f0 = plStack_90;
  uStack_d8 = uStack_78;
  pcStack_e0 = pcStack_80;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_78 = 0;
  pcStack_80 = (char *)0x0;
  uStack_c8 = 0x7fffffffffffffff;
  uStack_d0 = param_1;
  lStack_b8 = lVar10;
  uStack_70 = param_1;
  uStack_60 = uStack_c0;
  lStack_58 = lVar10;
  lStack_50 = lStack_b0;
  func_0x0001008db56c(&plStack_120,&plStack_100,&uStack_148);
  plVar4 = plStack_120;
  plStack_120 = (long *)0x0;
  *(long **)(param_2 + 0xd8) = plVar4;
  func_0x0001008dbe00(&plStack_120);
  if ((long *)0x1 < plStack_f0) {
    do {
      lVar12 = *plStack_f0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
      if (bVar2) {
        *plStack_f0 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_f0[1])();
    }
  }
  if (plStack_100 != (long *)0x0) {
    plVar4 = plStack_100 + 1;
    do {
      lVar12 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plStack_100 + 8))();
    }
  }
  *(code **)(param_2 + 0xd80) = FUN_104a912a4;
  *(long *)(param_2 + 0xd88) = param_2;
  *(undefined8 *)(param_2 + 0xd90) = 0;
  func_0x0001008dbe30(*(undefined8 *)(param_2 + 0xd8),param_2 + 0xd78);
  if (uStack_148 == 0) {
    if (*(long *)(*(long *)(param_2 + 8) + 0x78) != 0) {
      *(long *)(param_2 + 0x180) = lVar10;
      *(long *)(param_2 + 400) = param_2 + 0xe0;
      func_0x000104a8dbfc(&plStack_120,*(undefined8 *)(param_2 + 0xd8),&uStack_151,"on_complete");
      plStack_120 = (long *)0x0;
      func_0x0001008dbe00(&plStack_120);
      *(code **)(param_2 + 0x250) = FUN_104a91358;
      *(long *)(param_2 + 600) = param_2;
      *(undefined8 *)(param_2 + 0x260) = 0;
      *(long *)(param_2 + 0x188) = param_2 + 0x248;
      (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x78) + 0x10))(&plStack_120);
      func_0x0001004b8034(param_2 + 0x268,&plStack_120);
      if ((long *)0x1 < plStack_120) {
        do {
          lVar10 = *plStack_120;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_120,0x10);
          if (bVar2) {
            *plStack_120 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 + -1 == 0) {
          (*(code *)plStack_120[1])();
        }
      }
      if (uStack_148 != 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                            ,0xf3,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104a90bb4);
        (*pcVar3)();
      }
      *(long *)(param_2 + 0xe0) = param_2 + 0x268;
      *(undefined4 *)(param_2 + 0xe8) = 0;
      *(undefined8 *)(param_2 + 0xf0) = 0;
      *(byte *)(param_2 + 0x198) = *(byte *)(param_2 + 0x198) | 1;
      (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x78) + 0x28))(&plStack_120);
      uStack_138 = uStack_118;
      plStack_140 = plStack_120;
      uStack_128 = uStack_108;
      func_0x0001008603ac(param_2 + 0x470,&plStack_140);
      if ((long *)0x1 < plStack_140) {
        do {
          lVar10 = *plStack_140;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plStack_140,0x10);
          if (bVar2) {
            *plStack_140 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 + -1 == 0) {
          (*(code *)plStack_140[1])();
        }
      }
      *(long *)(param_2 + 0x108) = param_2 + 0x470;
      *(long *)(param_2 + 0xf8) = param_2 + 0x598;
      *(byte *)(param_2 + 0x198) = *(byte *)(param_2 + 0x198) | 6;
      *(long *)(param_2 + 0x118) = param_2 + 0x7a0;
      *(undefined8 *)(param_2 + 0x120) = 0;
      *(undefined8 *)(param_2 + 0x130) = 0;
      *(undefined8 *)(param_2 + 0x138) = 0;
      func_0x000104a8dbfc(&plStack_120,*(undefined8 *)(param_2 + 0xd8),&uStack_151,
                          "recv_initial_metadata_ready");
      plStack_120 = (long *)0x0;
      func_0x0001008dbe00(&plStack_120);
      *(undefined8 *)(param_2 + 0x9b0) = 0x104a913c0;
      *(long *)(param_2 + 0x9b8) = param_2;
      *(undefined8 *)(param_2 + 0x9c0) = 0;
      *(long *)(param_2 + 0x128) = param_2 + 0x9a8;
      *(byte *)(param_2 + 0x198) = *(byte *)(param_2 + 0x198) | 8;
      *(long *)(param_2 + 0x140) = param_2 + 0x9c8;
      *(undefined8 *)(param_2 + 0x150) = 0;
      func_0x000104a8dbfc(&plStack_120,*(undefined8 *)(param_2 + 0xd8),&uStack_151,
                          "recv_message_ready");
      plStack_120 = (long *)0x0;
      func_0x0001008dbe00(&plStack_120);
      *(undefined8 *)(param_2 + 0xb00) = 0x104a91418;
      *(long *)(param_2 + 0xb08) = param_2;
      *(undefined8 *)(param_2 + 0xb10) = 0;
      *(long *)(param_2 + 0x158) = param_2 + 0xaf8;
      *(byte *)(param_2 + 0x198) = *(byte *)(param_2 + 0x198) | 0x10;
      FUN_104a91448(param_2,param_2 + 0x188);
      iVar9 = (int)param_2 + 0x208;
      *(long *)(param_2 + 0x210) = param_2 + 0xe0;
      *(long *)(param_2 + 0x160) = param_2 + 0xb20;
      *(long *)(param_2 + 0x168) = param_2 + 0xd28;
      *(code **)(param_2 + 0xd60) = FUN_104a914c4;
      *(long *)(param_2 + 0xd68) = param_2;
      *(undefined8 *)(param_2 + 0xd70) = 0;
      *(long *)(param_2 + 0x170) = param_2 + 0xd58;
      *(byte *)(param_2 + 0x218) = *(byte *)(param_2 + 0x218) | 0x20;
      FUN_104a91448(param_2);
      goto LAB_104a90ae0;
    }
    uStack_150 = 0;
  }
  else {
    uStack_150 = uStack_148;
    if ((uStack_148 & 1) != 0) {
      piVar11 = (int *)(uStack_148 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_104aba950(&plStack_120,&uStack_150);
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                      ,0xdf,2,
                      "SubchannelStreamClient %p CallState %p: error creating stream on subchannel (%s); will retry"
                     );
  if (cStack_109 < '\0') {
    __ZdlPv(plStack_120);
  }
  if ((uStack_150 & 1) != 0) {
    func_0x00010084dad0();
  }
  iVar9 = 1;
  FUN_104a912b8(param_2);
LAB_104a90ae0:
  if ((uStack_148 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((long *)0x1 < plStack_90) {
    do {
      lVar10 = *plStack_90;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar2) {
        *plStack_90 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  plVar4 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar5 = plStack_a0 + 1;
    do {
      lVar10 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plStack_a0 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    FUN_104bd46a0();
    if (cStack_109 < '\0') {
      __ZdlPv(plStack_120);
    }
    func_0x0001004bdf74(&uStack_150);
    func_0x0001004bdf74(&uStack_148);
    FUN_104a7735c(&plStack_a0);
  }
  __Unwind_Resume();
  plVar5 = (long *)plVar4[0xf];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar4);
  }
  plVar5 = plVar4 + 0x11;
  func_0x0001004db8b4();
  if (plVar4[4] != 0) {
    pcVar6 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
    ;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0x80,1,"%s %p: SubchannelStreamClient health check call lost...");
    func_0x000100460dc4();
    uVar7 = *(undefined8 *)pcVar6;
    func_0x0001004671a4(uVar7);
    plVar8 = plVar5;
    FUN_104a90d9c(plVar5,uVar7);
    if ((long)plVar8 < 1) {
      pcVar6 = "%s %p: ... retrying immediately.";
      uVar7 = 0x87;
    }
    else {
      pcVar6 = "%s %p: ... will retry in %lldms.";
      uVar7 = 0x84;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,uVar7,1,pcVar6);
  }
  plVar8 = plVar4 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined1 *)(plVar4 + 0x45) = 1;
                    /* WARNING: Trying to construct memory range beyond end of address space: ram */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000113815c30)(plVar4 + 0x3a,plVar5,plVar4 + 0x41);
  return;
}



/* Entry: 104a90c9c; end: 104a90d9b;  */

void FUN_104a90c9c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
  }
  lVar4 = param_1 + 0x88;
  func_0x0001004db8b4();
  if (*(long *)(param_1 + 0x20) != 0) {
    pcVar5 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
    ;
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0x80,1,"%s %p: SubchannelStreamClient health check call lost...");
    func_0x000100460dc4();
    uVar6 = *(undefined8 *)pcVar5;
    func_0x0001004671a4(uVar6);
    lVar7 = lVar4;
    FUN_104a90d9c(lVar4,uVar6);
    if (lVar7 < 1) {
      pcVar5 = "%s %p: ... retrying immediately.";
      uVar6 = 0x87;
    }
    else {
      pcVar5 = "%s %p: ... will retry in %lldms.";
      uVar6 = 0x84;
    }
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,uVar6,1,pcVar5);
  }
  plVar3 = (long *)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined1 *)(param_1 + 0x228) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100480ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam0000000113815c30)(param_1 + 0x1d0,lVar4,param_1 + 0x208);
  return;
}



/* Entry: 104a90d9c; end: 104a90dff;  */

long FUN_104a90d9c(ulong param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x7fffffffffffffff;
  if ((((param_1 != 0x7fffffffffffffff) && (param_2 != -0x7fffffffffffffff)) &&
      (lVar1 = -0x8000000000000000, param_1 != 0x8000000000000000)) &&
     (param_2 != -0x8000000000000000)) {
    if ((long)param_1 < 1) {
      if (-param_2 < (long)(-0x8000000000000000 - param_1)) {
        return -0x8000000000000000;
      }
    }
    else if ((long)(param_1 ^ 0x7fffffffffffffff) < -param_2) {
      return 0x7fffffffffffffff;
    }
    lVar1 = param_1 - param_2;
  }
  return lVar1;
}



/* Entry: 104a90e00; end: 104a90ffb;  */

undefined8 * FUN_104a90e00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_1107c3540;
  param_1[1] = 0;
  param_1[1] = *param_2;
  *param_2 = 0;
  func_0x0001004dc3b0();
  param_1[2] = param_3;
  param_1[3] = param_2;
  uVar1 = *(undefined8 *)(param_1[1] + 0x10);
  FUN_104a8db60();
  FUN_104acb138();
  param_1[4] = uVar1;
  func_0x0001004b7d50(param_1 + 5);
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x114) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = param_1 + 0x11;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((long)param_1 + 0x1d1) = 0;
  *(undefined8 *)((long)param_1 + 0x1c9) = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x8b] = param_1[4];
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x1c] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((long)param_1 + 0x211) = 0;
  *(undefined8 *)((long)param_1 + 0x209) = 0;
  func_0x0001004b800c(param_1 + 0x8e);
  uVar1 = param_1[4];
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xf1] = uVar1;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0x132] = uVar1;
  param_1[0x134] = 0;
  param_1[0x133] = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined1 *)(param_1 + 0x15e) = 0;
  *(undefined2 *)(param_1 + 0x163) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  param_1[0x1a2] = uVar1;
  param_1[0x1a4] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1a9] = 0;
  return param_1;
}



/* Entry: 104a90ffc; end: 104a9102b;  */

long FUN_104a90ffc(long param_1)

{
  if ((*(ulong *)(param_1 + 0x98) & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a9102c; end: 104a91157;  */

undefined8 * FUN_104a9102c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_1107c3540;
  if (*(long *)(param_1[1] + 0x20) != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0xb6,1,"%s %p: SubchannelStreamClient destroying CallState %p");
  }
  lVar6 = 0;
  do {
    pcVar5 = *(code **)((long)param_1 + lVar6 + 0x90);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*(undefined8 *)((long)param_1 + lVar6 + 0x88));
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x50);
  func_0x0001004be0b8(param_1 + 5,0);
  func_0x0001004e2bc8(param_1 + 0x164);
  func_0x0001008373f8(param_1 + 0x139);
  func_0x0001004e2bc8(param_1 + 0xf4);
  func_0x0001004e2bc8(param_1 + 0xb3);
  func_0x0001008301a4(param_1 + 0x8e);
  func_0x0001004e2bc8(param_1 + 0x4d);
  if ((param_1[0x2f] & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x00010083742c(param_1 + 5);
  FUN_104a91990(param_1 + 4,0);
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 104a91158; end: 104a9115b;  */

undefined8 * FUN_104a91158(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_1107c3540;
  if (*(long *)(param_1[1] + 0x20) != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0xb6,1,"%s %p: SubchannelStreamClient destroying CallState %p");
  }
  lVar6 = 0;
  do {
    pcVar5 = *(code **)((long)param_1 + lVar6 + 0x90);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*(undefined8 *)((long)param_1 + lVar6 + 0x88));
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x50);
  func_0x0001004be0b8(param_1 + 5,0);
  func_0x0001004e2bc8(param_1 + 0x164);
  func_0x0001008373f8(param_1 + 0x139);
  func_0x0001004e2bc8(param_1 + 0xf4);
  func_0x0001004e2bc8(param_1 + 0xb3);
  func_0x0001008301a4(param_1 + 0x8e);
  func_0x0001004e2bc8(param_1 + 0x4d);
  if ((param_1[0x2f] & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x00010083742c(param_1 + 5);
  FUN_104a91990(param_1 + 4,0);
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 104a9115c; end: 104a9116f;  */

void FUN_104a9115c(void)

{
  FUN_104a9102c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a91170; end: 104a911d3;  */

void FUN_104a91170(long param_1)

{
  ulong uStack_28;
  
  uStack_28 = 4;
  FUN_104aba128(param_1 + 0x28,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  FUN_104a911d4(param_1);
  return;
}



/* Entry: 104a911d4; end: 104a912a3;  */

void FUN_104a911d4(long param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  pcVar1 = (char *)(param_1 + 0xb19);
  do {
    if (*pcVar1 != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000104a8dbfc(&uStack_28,*(undefined8 *)(param_1 + 0xd8),&uStack_29,"cancel");
  uStack_28 = 0;
  func_0x0001008dbe00(&uStack_28);
  puVar4 = (undefined8 *)0x30;
  func_0x000100460200();
  *puVar4 = FUN_104a91688;
  puVar4[1] = param_1;
  puVar4[3] = &UNK_1004be1e0;
  puVar4[4] = puVar4;
  puVar4[5] = 0;
  uStack_38 = 0;
  func_0x0001004bd618(param_1 + 0x28,puVar4 + 2,&uStack_38,"health_cancel");
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a912a4; end: 104a912b7;  */

void FUN_104a912a4(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104a912b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}



/* Entry: 104a912b8; end: 104a91357;  */

void FUN_104a912b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 uStack_21;
  
  if (*(undefined8 **)(param_1[1] + 0x80) == param_1) {
    *(undefined8 *)(param_1[1] + 0x80) = 0;
    puVar1 = param_1;
    (**(code **)*param_1)();
    if ((int)param_2 != 0) {
      if (*(long *)(param_1[1] + 0x78) == 0) {
        func_0x00010bdaa5a0();
        FUN_104bd46a0();
        pcStack_38 = FUN_104a91358;
        uStack_50 = param_2;
        puStack_48 = param_1;
        puStack_40 = &stack0xfffffffffffffff0;
        func_0x000100612044(puVar1 + 5,"on_complete");
        func_0x00010083228c(puVar1 + 0x4d);
        func_0x0001004e2b40(puVar1 + 0x8b);
        func_0x00010083228c(puVar1 + 0xb3);
        func_0x0001004e2b40(puVar1 + 0xf1);
        func_0x000104a8dc38(puVar1[0x1b],&uStack_51,"on_complete");
        return;
      }
      if ((*(byte *)(param_1 + 0x163) & 1) == 0) {
        FUN_104a90c9c();
      }
      else {
        func_0x0001004c54f8(param_1[1] + 0x88);
        FUN_104a90540(param_1[1]);
      }
    }
  }
  func_0x000104a8dc38(param_1[0x1b],&uStack_21,"call_ended");
  return;
}



/* Entry: 104a91358; end: 104a91447;  */

void FUN_104a91358(long param_1)

{
  undefined1 uStack_21;
  
  func_0x000100612044(param_1 + 0x28,"on_complete");
  func_0x00010083228c(param_1 + 0x268);
  func_0x0001004e2b40(param_1 + 0x458);
  func_0x00010083228c(param_1 + 0x598);
  func_0x0001004e2b40(param_1 + 0x788);
  func_0x000104a8dc38(*(undefined8 *)(param_1 + 0xd8),&uStack_21,"on_complete");
  return;
}



/* Entry: 104a91448; end: 104a914c3;  */

void FUN_104a91448(long param_1,long param_2)

{
  ulong uStack_28;
  
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0xd8);
  *(code **)(param_2 + 0x28) = FUN_104a91634;
  *(long *)(param_2 + 0x30) = param_2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  uStack_28 = 0;
  func_0x0001004bd618(param_1 + 0x28,param_2 + 0x20,&uStack_28,"start_subchannel_batch");
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a914c4; end: 104a91633;  */

void FUN_104a914c4(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  ulong uStack_30;
  int iStack_24;
  
  func_0x000100612044(param_1 + 0x28,"recv_trailing_metadata_ready");
  if ((*(byte *)(param_1 + 0xb21) >> 2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)*(uint *)(param_1 + 0xca8) | 0x100000000;
  }
  iStack_24 = 2;
  if ((uVar5 & 0x100000000) != 0) {
    iStack_24 = (int)uVar5;
  }
  uVar5 = *param_2;
  if (uVar5 != 0) {
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_30 = uVar5;
    func_0x000100831658(&uStack_30,0x7fffffffffffffff,&iStack_24,0,0,0);
    if ((uStack_30 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if (*(long *)(*(long *)(param_1 + 8) + 0x20) != 0) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                        ,0x1ad,1,
                        "%s %p: SubchannelStreamClient CallState %p: health watch failed with status %d"
                       );
  }
  func_0x00010083228c(param_1 + 0xb20);
  func_0x0001004e2b40(param_1 + 0xd10);
  lVar1 = *(long *)(param_1 + 8) + 0x38;
  func_0x000100460448(lVar1);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x78);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4,*(long *)(param_1 + 8),iStack_24);
  }
  FUN_104a912b8(param_1,iStack_24 != 0xc);
  func_0x000100466b80(lVar1);
  return;
}


