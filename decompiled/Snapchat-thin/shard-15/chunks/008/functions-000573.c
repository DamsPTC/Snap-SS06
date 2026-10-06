/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcfb620; end: 10bcfb86b;  */

void FUN_10bcfb620(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long alStack_a0 [4];
  undefined1 auStack_80 [24];
  long *plStack_68;
  
  func_0x00010bd0af48();
  alStack_a0[0] = param_2;
  if ((*(byte *)(param_2 + 1) >> 3 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 8);
    if ((bRam00000001137fe1c8 & 1) == 0) {
      puVar5 = (undefined8 *)0x1137fe1c8;
      ___cxa_guard_acquire();
      if ((int)puVar5 != 0) {
        func_0x00010bd0b628();
        func_0x00010bd0a948();
        FUN_10bcdb6fc();
        for (lVar7 = 0; lVar7 != 0x48; lVar7 = lVar7 + 8) {
          func_0x000107c278b8(auStack_80,&UNK_10f830df9);
          func_0x00010bd0b870();
          func_0x00010bd0ba60();
          func_0x00010bd0b2ec();
          func_0x00010bd0afec();
          func_0x000107c278b8(auStack_80,&UNK_10f83312b);
          func_0x00010bd0b870();
          func_0x00010bd0ba60();
          func_0x00010bd0b2ec();
          func_0x00010bd0afec();
        }
        func_0x000107c30378(FUN_10bd00e74,puVar5);
        puRam00000001137fe1c0 = puVar5;
        ___cxa_guard_release(0x1137fe1c8);
      }
    }
    param_1 = puRam00000001137fe1c0;
    Hint_Prefetch(*puRam00000001137fe1c0,0,2,0);
    bVar2 = *(byte *)(lVar6 + 0x2f);
    in_ZR = bVar2 == 0;
    uVar1 = *(ulong *)(lVar6 + 0x20);
    lVar7 = *(long *)(lVar6 + 0x18);
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
      lVar7 = lVar6 + 0x18;
    }
    puVar5 = puRam00000001137fe1c0;
    func_0x000107c284ac(puRam00000001137fe1c0,lVar7,uVar1);
    FUN_10bcdb8a0(param_1,lVar6 + 0x18,puVar5);
    unaff_x21 = alStack_a0[0];
    if (param_1 == (undefined8 *)0x0) {
      func_0x00010bd0a3a8(*(undefined8 *)(alStack_a0[0] + 8));
      func_0x00010bd0bb08();
    }
  }
  func_0x00010bd0c814(*(undefined8 *)(unaff_x21 + 0x48));
  if ((bool)in_ZR) {
    func_0x00010bd0a24c(*(undefined8 *)(unaff_x21 + 8));
  }
  if ((*(byte *)(unaff_x21 + 1) & 1) != 0) {
    func_0x00010bd0a3a8(*(undefined8 *)(unaff_x21 + 8));
    func_0x00010bd0b728();
  }
  func_0x00010bd0c274();
  uVar3 = (int)param_1 == 8;
  if (((bool)uVar3) && (func_0x00010bd0b47c(), param_1 != (undefined8 *)0x0)) {
    func_0x00010bd0b47c();
    func_0x00010bd0bbf4();
    if ((bool)uVar3) {
      plStack_68 = alStack_a0;
      func_0x00010bd0a540();
      FUN_10bcf56d0();
    }
  }
  iVar4 = (int)param_1;
  func_0x00010bd0b120();
  if (iVar4 == 10) {
    func_0x00010bd0a24c(*(undefined8 *)(alStack_a0[0] + 8));
  }
  return;
}



/* Entry: 10bcfb86c; end: 10bcfb987;  */

void FUN_10bcfb86c(void)

{
  undefined1 uVar1;
  long unaff_x21;
  long unaff_x23;
  
  func_0x000107c3a6d8();
  func_0x00010bd0af48();
  func_0x00010bd0b174();
  while (unaff_x23 < *(int *)(unaff_x21 + 0x80)) {
    func_0x00010bd0a1f8(*(undefined8 *)(unaff_x21 + 0x48));
    FUN_10bcfb86c();
    func_0x00010bd0bca4();
  }
  func_0x00010bd0b174();
  while (unaff_x23 < *(int *)(unaff_x21 + 4)) {
    func_0x00010bd0a1f8(*(undefined8 *)(unaff_x21 + 0x38));
    FUN_10bcfb620();
    func_0x00010bd0b4f0();
  }
  func_0x00010bd0b174();
  while (unaff_x23 < *(int *)(unaff_x21 + 0x8c)) {
    func_0x00010bd0a1f8(*(undefined8 *)(unaff_x21 + 0x60));
    FUN_10bcfb620();
    func_0x00010bd0b4f0();
  }
  uVar1 = *(int *)(unaff_x21 + 0x88) == 0;
  if (0 < *(int *)(unaff_x21 + 0x88)) {
    func_0x00010bd0c480(*(undefined8 *)(unaff_x21 + 8));
    func_0x00010bd0aa90();
    func_0x00010bd0c2e0();
  }
  func_0x00010bd0bde4(*(undefined8 *)(unaff_x21 + 0x20));
  if ((bool)uVar1) {
    func_0x00010bd0a3a8(*(undefined8 *)(unaff_x21 + 8));
    FUN_10bcf56d0();
    return;
  }
  return;
}



/* Entry: 10bcfb988; end: 10bcfc627;  */

void FUN_10bcfb988(long *param_1,char *param_2)

{
  byte bVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  ulong uVar20;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  uint uVar21;
  undefined **ppuVar22;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long lVar23;
  long extraout_x10;
  long *extraout_x11;
  ulong extraout_x11_00;
  long extraout_x12;
  undefined8 extraout_x12_00;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long *plVar27;
  undefined8 uVar28;
  long lVar29;
  long lStack_1a8;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined8 ***pppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  long *plStack_120;
  long lStack_118;
  long *plStack_c0;
  long lStack_b8;
  undefined8 uStack_90;
  
  func_0x00010bd0af48();
  func_0x00010bd0a30c();
  uVar5 = *(char *)(*param_1 + 0x31) == '\x01';
  uStack_90 = extraout_x8;
  if ((bool)uVar5) {
    if (unaff_x21 == (long *)0x0) goto LAB_10bcfc320;
    func_0x00010bd0af68();
    if (param_1 == (long *)0x0) goto LAB_10bcfc320;
  }
  if (999 < *(int *)(unaff_x21[2] + 0x20)) {
    if (*(int *)(unaff_x19 + 0x54) == 2) {
      func_0x00010bd0a16c(unaff_x21[1]);
    }
    uVar5 = *(int *)(unaff_x19 + 0x58) == 10;
    if ((bool)uVar5) {
      func_0x00010bd0a16c(unaff_x21[1]);
    }
    if ((*(byte *)(unaff_x21[7] + 0x28) >> 4 & 1) != 0) {
      func_0x00010bd0a16c(unaff_x21[1]);
    }
    if (((*(byte *)((long)unaff_x21 + 1) >> 5 & 1) == 0) &&
       (param_1 = unaff_x21, func_0x00010bcf15f4(), ((ulong)param_1 & 1) == 0)) {
      if ((*unaff_x21 & 0x100) != 0) {
        func_0x00010bd0a16c(unaff_x21[1]);
      }
      func_0x00010bd0b47c();
      if (param_1 != (long *)0x0) {
        func_0x00010bd0b47c();
        uVar5 = *(int *)(param_1[6] + 0x34) == 1;
        if (!(bool)uVar5) {
          func_0x00010bd0a16c(unaff_x21[1]);
        }
      }
    }
    if (((*(byte *)((long)unaff_x21 + 1) >> 3 & 1) != 0) &&
       (func_0x00010bd0c814(unaff_x21[9]), (bool)uVar5)) {
      func_0x00010bd0a16c(unaff_x21[1]);
    }
    if ((unaff_x21[4] == 0) || ((*(byte *)(*(long *)(unaff_x21[4] + 0x20) + 0x53) & 1) == 0)) {
      if (((*(byte *)(unaff_x21[8] + 0x28) & 1) != 0) &&
         (((((bVar1 = *(byte *)((long)unaff_x21 + 1), (bVar1 >> 4 & 1) != 0 && (unaff_x21[5] != 0))
            || ((bVar1 >> 5 & 1) != 0)) ||
           (((bVar1 >> 3 & 1) != 0 && (func_0x00010bd0c814(), !(bool)uVar5)))) ||
          ((func_0x00010bd0af68(), param_1 != (long *)0x0 && (*(int *)(unaff_x21[8] + 0x30) == 2))))
         )) {
        func_0x00010bd0a16c(unaff_x21[1]);
      }
      iVar7 = (int)param_1;
      if (((*(byte *)((long)unaff_x21 + 1) >> 5 & 1) == 0) &&
         ((*(byte *)(unaff_x21[8] + 0x28) >> 2 & 1) != 0)) {
        func_0x00010bd0a16c(unaff_x21[1]);
      }
      func_0x00010bd0b120();
      if (iVar7 != 9) {
        plVar27 = unaff_x21;
        func_0x00010b91c030();
        if ((int)plVar27 == 0) {
LAB_10bcfbbb8:
          if ((*(byte *)(unaff_x21[8] + 0x28) >> 3 & 1) != 0) {
            func_0x00010bd0a16c(unaff_x21[1]);
          }
        }
        else {
          lVar24 = -1;
          lVar29 = 0;
          do {
            func_0x00010bd0af68();
            lVar24 = lVar24 + 1;
            if (*(int *)((long)plVar27 + 4) <= lVar24) goto LAB_10bcfbbb8;
            func_0x00010bd0af68();
            plVar27 = (long *)(plVar27[7] + lVar29);
            func_0x00010787827c();
            lVar29 = lVar29 + 0x58;
          } while ((int)plVar27 != 9);
        }
      }
      param_1 = unaff_x21;
      FUN_10bcf1590();
      if ((((ulong)param_1 & 1) == 0) && (*(int *)(unaff_x21[8] + 0x38) == 1)) {
        func_0x00010bd0a16c(unaff_x21[1]);
      }
      func_0x00010bd0c274();
      bVar6 = (int)param_1 == 10;
      if (((!bVar6) || (func_0x00010bd0aea0(unaff_x21[6]), bVar6)) &&
         ((*(byte *)(unaff_x21[8] + 0x28) >> 4 & 1) != 0)) {
        func_0x00010bd0a16c(unaff_x21[1]);
      }
    }
  }
  iVar7 = (int)param_1;
  lVar24 = unaff_x21[7];
  if ((*(byte *)(lVar24 + 0x28) >> 2 & 1) != 0) {
    if (*(int *)(unaff_x21[2] + 0x20) < 0x3e9) {
      if (*(int *)(unaff_x21[2] + 0x20) == 1000) {
        func_0x00010bd0c274();
        if (iVar7 != 9) {
          lVar29 = unaff_x21[1];
          plStack_c0 = (long *)&UNK_10f832456;
          lStack_b8 = 0x3e;
          pplVar8 = &plStack_c0;
          func_0x00010bcdc724(&stack0xfffffffffffffef0,pplVar8,lVar29 + 0x18);
          iVar7 = (int)pplVar8;
          param_2 = (char *)(lVar29 + 0x18);
          func_0x00010bd0a2d8();
          func_0x00010bd0bf70();
        }
        if ((*(int *)(lVar24 + 0x80) == 1) && ((*(byte *)((long)unaff_x21 + 1) >> 3 & 1) != 0)) {
          lVar24 = unaff_x21[1];
          plStack_c0 = (long *)&UNK_10f832495;
          lStack_b8 = 0x48;
          pplVar8 = &plStack_c0;
          func_0x00010bcdc724(&stack0xfffffffffffffef0,pplVar8,lVar24 + 0x18);
          iVar7 = (int)pplVar8;
          param_2 = (char *)(lVar24 + 0x18);
          func_0x00010bd0a2d8();
          func_0x00010bd0bf70();
        }
      }
    }
    else {
      func_0x00010bd0a16c(unaff_x21[1]);
    }
  }
  if ((((*(byte *)(unaff_x21[7] + 0x89) & 1) != 0) || (*(char *)(unaff_x21[7] + 0x8a) == '\x01')) &&
     (func_0x00010bd0b120(), iVar7 != 0xb)) {
    func_0x00010bd0a24c(unaff_x21[1]);
  }
  if (*(char *)(unaff_x21[7] + 0x88) == '\x01') {
    plVar27 = unaff_x21;
    FUN_10bcf1590();
    iVar7 = (int)plVar27;
    if (((ulong)plVar27 & 1) == 0) {
      func_0x00010bd0a24c(unaff_x21[1]);
    }
  }
  if (((unaff_x21[4] != 0) &&
      (bVar6 = *(undefined ***)(unaff_x21[4] + 0x20) == &PTR_PTR_113406168, !bVar6)) &&
     (func_0x00010bd0bde4(), bVar6)) {
    if ((*(byte *)((long)unaff_x21 + 1) >> 3 & 1) == 0) {
      func_0x00010bd0a16c(unaff_x21[1]);
    }
    else {
      func_0x00010bd0b814();
      if ((!bVar6) || (func_0x00010bd0b120(), iVar7 != 0xb)) {
        func_0x00010bd0a24c(unaff_x21[1]);
      }
    }
  }
  if ((((unaff_x21[2] != 0) &&
       (ppuVar22 = *(undefined ***)(unaff_x21[2] + 0x80), ppuVar22 != &PTR_PTR_1134061c0)) &&
      ((*(int *)(ppuVar22 + 0x15) == 3 && (unaff_x21[4] != 0)))) &&
     (((lVar24 = *(long *)(unaff_x21[4] + 0x10), lVar24 == 0 ||
       (ppuVar22 = *(undefined ***)(lVar24 + 0x80), ppuVar22 == &PTR_PTR_1134061c0)) ||
      (*(int *)(ppuVar22 + 0x15) != 3)))) {
    func_0x00010bd0a3a8(unaff_x21[1]);
    func_0x00010bd0bb08();
  }
  plVar10 = unaff_x21;
  func_0x00010b91c030();
  plVar27 = plVar10;
  if ((int)plVar10 != 0) {
    func_0x00010bd0af68();
    plVar27 = plVar10;
    if ((((*(int *)((long)plVar10 + 0x8c) == 0) && (0xbf < *(byte *)((long)unaff_x21 + 1))) &&
        (((int)plVar10[0x11] == 0 &&
         (((int)plVar10[0x10] == 0 && (*(int *)((long)plVar10 + 0x84) == 0)))))) &&
       (*(int *)((long)plVar10 + 4) == 2)) {
      plVar27 = (long *)plVar10[1];
      lVar24 = unaff_x21[1];
      FUN_10bcfccd0(auStack_150,lVar24,0);
      plVar9 = (long *)&DAT_10f55872a;
      func_0x000107c284bc();
      plStack_c0 = plVar9;
      lStack_b8 = lVar24;
      func_0x00010bd0acc4(&pppuStack_138);
      param_2 = (char *)&pppuStack_138;
      func_0x000107c278d0();
      if ((int)plVar27 == 0) {
        func_0x00010bd0b95c();
        func_0x00010bd0b8cc();
      }
      else {
        lVar24 = unaff_x21[4];
        lVar29 = plVar10[3];
        func_0x00010bd0b95c();
        func_0x00010bd0b8cc();
        if (lVar24 == lVar29) {
          bVar6 = *(char *)(plVar10[4] + 0x53) == '\x01';
          if (bVar6) {
            lVar24 = plVar10[7];
            plVar10 = (long *)(lVar24 + 0x58);
          }
          else {
            lVar24 = 0;
            plVar10 = (long *)0x0;
          }
          func_0x00010bd0b814(*(undefined1 *)(lVar24 + 1));
          if ((bVar6) && (uVar5 = *(int *)(lVar24 + 4) == 1, (bool)uVar5)) {
            plVar27 = *(long **)(lVar24 + 8);
            param_2 = "key";
            func_0x000107c27cf4();
            if (((int)plVar27 != 0) &&
               ((func_0x00010bd0b814(*(undefined1 *)((long)plVar10 + 1)), (bool)uVar5 &&
                (*(int *)((long)plVar10 + 4) == 2)))) {
              plVar27 = (long *)plVar10[1];
              param_2 = "value";
              func_0x000107c27cf4();
              if ((int)plVar27 != 0) {
                func_0x00010787827c();
                uVar21 = (int)lVar24 - 1;
                if ((uVar21 < 0xe) && ((0x2e03U >> (ulong)(uVar21 & 0x1f) & 1) != 0)) {
                  func_0x00010bd0a24c(unaff_x21[1]);
                }
                plVar27 = plVar10;
                func_0x00010787827c();
                if (((int)plVar27 != 0xe) ||
                   (FUN_10bcefa5c(), plVar27 = plVar10, *(int *)(plVar10[7] + 4) == 0))
                goto LAB_10bcfbf44;
              }
            }
          }
        }
      }
    }
    func_0x00010bd0a24c(unaff_x21[1]);
  }
LAB_10bcfbf44:
  uVar21 = *(uint *)(unaff_x21[7] + 0x84);
  plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,uVar21);
  if (uVar21 != 0) {
    func_0x00010bd0b120();
    if (((uint)plVar27 < 0x13) && ((1 << (ulong)((uint)plVar27 & 0x1f) & 0x50058U) != 0)) {
      if (2 < uVar21) {
        param_2 = (char *)(unaff_x21[1] + 0x18);
        func_0x00010bd0a540();
        FUN_10bcf56d0();
      }
    }
    else {
      func_0x00010bd0a24c(unaff_x21[1]);
    }
  }
  uVar5 = ((*(byte *)((long)unaff_x21 + 1) ^ 0xff) & 0xc) == 0;
  if ((bool)uVar5) {
    lVar24 = unaff_x21[1];
    bVar1 = *(byte *)((long)unaff_x21 + 3);
    FUN_10bcfc628(&stack0xfffffffffffffef0,lVar24);
    plVar10 = (long *)(lVar24 + ((ulong)(bVar1 >> 4) & 7) * 0x18);
    param_2 = &stack0xfffffffffffffef0;
    func_0x000107c278d0();
    plVar27 = plVar10;
    func_0x00010bd0bf70();
    if (((ulong)plVar10 & 1) == 0) {
      func_0x00010bd0a3a8(unaff_x21[1]);
      func_0x00010bd0b280();
    }
  }
  func_0x00010bd0c400(unaff_x21[1]);
  if ((long)param_2 < 0) {
    plVar27 = (long *)*plVar27;
  }
  iVar7 = (int)plVar27;
  FUN_10bcf6a90();
  if (iVar7 != 0) {
    func_0x00010bd0a3a8(unaff_x21[1]);
    func_0x00010bd0b280();
  }
  if ((*(byte *)((long)unaff_x21 + 1) >> 3 & 1) == 0) goto LAB_10bcfc320;
  lVar24 = *(long *)(unaff_x21[4] + 8);
  lStack_b8 = (long)*(char *)(lVar24 + 0x2f);
  if (lStack_b8 < 0) {
    plStack_c0 = *(long **)(lVar24 + 0x18);
    lStack_b8 = *(long *)(lVar24 + 0x20);
  }
  else {
    plStack_c0 = (long *)(lVar24 + 0x18);
  }
  if ((bRam00000001137fe188 & 1) == 0) goto LAB_10bcfc41c;
  do {
    puVar11 = puRam00000001137fe180;
    FUN_10bcedbc0(puRam00000001137fe180,&plStack_c0);
    if (((ulong)puVar11 & 1) == 0) {
      uVar12 = unaff_x21[4];
      iVar7 = *(int *)((long)unaff_x21 + 4);
      FUN_10bcee900();
      if ((*(long *)(uVar12 + 8) != 0) &&
         (uVar5 = *(char *)(*unaff_x20 + 0x34) == '\x01', (bool)uVar5)) {
        func_0x00010bd0c480();
        plVar27 = extraout_x8_00;
        if (!(bool)uVar5) {
          plVar27 = extraout_x11;
        }
        lVar24 = (long)(int)extraout_x8_00[1] << 3;
        do {
          if (lVar24 == 0) {
            if (((int)extraout_x8_00[1] != 0) || (*(int *)(extraout_x9 + 0x68) == 0)) {
              func_0x00010bd0a390(unaff_x21[1]);
            }
            goto LAB_10bcfc320;
          }
          lVar29 = *plVar27;
          lVar24 = lVar24 + -8;
          uVar5 = *(int *)(lVar29 + 0x28) == iVar7;
          plVar27 = plVar27 + 1;
        } while (!(bool)uVar5);
        uVar21 = (uint)*(byte *)(lVar29 + 0x2c);
        cVar3 = SBORROW4(uVar21,1);
        cVar4 = (int)(uVar21 - 1) < 0;
        uVar5 = uVar21 == 1;
        if ((bool)uVar5) {
          func_0x00010bd0a390(unaff_x21[1]);
        }
        else {
          puVar25 = (undefined8 *)(*(ulong *)(lVar29 + 0x18) & 0xfffffffffffffffc);
          lVar24 = (long)*(char *)((long)puVar25 + 0x17);
          puVar14 = puVar25;
          if (lVar24 < 0) {
            puVar14 = (undefined8 *)*puVar25;
            lVar24 = puVar25[1];
          }
          plVar10 = (long *)(*(ulong *)(lVar29 + 0x20) & 0xfffffffffffffffc);
          lVar23 = (long)*(char *)((long)plVar10 + 0x17);
          plVar27 = plVar10;
          if (lVar23 < 0) {
            plVar27 = (long *)*plVar10;
            lVar23 = plVar10[1];
          }
          bVar1 = *(byte *)(lVar29 + 0x2d);
          if ((lVar23 != 0) &&
             (plStack_120 = plVar27, lStack_118 = lVar23, (*(byte *)(unaff_x20 + 0x11) & 1) == 0)) {
            func_0x00010bd0b120();
            func_0x000107c278b8(&pppuStack_138,(&PTR_DAT_110d9b868)[uVar12 & 0xffffffff]);
            puVar13 = auStack_150;
            func_0x000107c27958();
            func_0x00010bd0af68();
            if ((puVar13 == (undefined1 *)0x0) &&
               (func_0x00010bd0b47c(), puVar13 == (undefined1 *)0x0)) {
LAB_10bcfc200:
              plVar27 = plStack_120;
              FUN_10bcfb170(plStack_120,lStack_118);
              if ((((ulong)plVar27 & 1) == 0) &&
                 (plVar27 = plStack_120,
                 func_0x000107c2a6e4(plStack_120,lStack_118,&DAT_10f62a9de,1),
                 ((ulong)plVar27 & 1) == 0)) {
                func_0x00010bd0a408();
                lStack_b8 = lStack_118;
                plStack_c0 = plStack_120;
                func_0x00010bd0acc4(auStack_168);
                func_0x00010bd0bf04(auStack_150);
                func_0x00010bd0b2ec();
              }
              uVar12 = 0;
              func_0x000107c278d0();
              if ((uVar12 & 1) == 0) {
                func_0x00010bd0a390(unaff_x21[1]);
              }
            }
            else if ((*(byte *)(unaff_x20 + 0x11) & 1) == 0) {
              func_0x00010bd0af68();
              if (puVar13 == (undefined1 *)0x0) {
                func_0x00010bd0b47c();
              }
              else {
                func_0x00010bd0af68();
              }
              lVar23 = *(long *)(puVar13 + 8);
              lVar29 = (long)*(char *)(lVar23 + 0x2f);
              if (lVar29 < 0) {
                plVar27 = *(long **)(lVar23 + 0x18);
                lVar29 = *(long *)(lVar23 + 0x20);
              }
              else {
                plVar27 = (long *)(lVar23 + 0x18);
              }
              func_0x00010bd0a408();
              plStack_c0 = plVar27;
              lStack_b8 = lVar29;
              func_0x00010bd0acc4(auStack_168);
              func_0x00010bd0bf04(&pppuStack_138);
              func_0x00010bd0b2ec();
              goto LAB_10bcfc200;
            }
            func_0x00010bd0b8cc();
            func_0x00010bd0b95c();
          }
          if (lVar24 != 0) {
            func_0x00010bd0a408();
            func_0x00010bd09fa8(unaff_x21[1]);
            lStack_b8 = extraout_x12;
            if (cVar4 == cVar3) {
              lStack_b8 = extraout_x10;
            }
            plStack_c0 = extraout_x8_01;
            func_0x00010bd0acc4(&pppuStack_138);
            uVar12 = uStack_130;
            ppppuVar2 = (undefined8 ****)pppuStack_138;
            if (-1 < (char)bStack_121) {
              uVar12 = (ulong)bStack_121;
              ppppuVar2 = &pppuStack_138;
            }
            func_0x000107c27944(puVar14,lVar24,ppppuVar2,uVar12);
            if (((ulong)puVar14 & 1) == 0) {
              func_0x00010bd0a390(unaff_x21[1]);
            }
            func_0x00010bd0b95c();
          }
          uVar5 = (*unaff_x21 & 0x2000) == 0;
          if (((uVar5 ^ bVar1) & 1) == 0) {
            func_0x00010bd0a390(unaff_x21[1]);
          }
        }
      }
    }
LAB_10bcfc320:
    func_0x000107c3a64c(uStack_90);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
LAB_10bcfc41c:
    puVar11 = (ulong *)0x1137fe188;
    ___cxa_guard_acquire();
    if ((int)puVar11 != 0) {
      func_0x00010bd0b628();
      _memcpy(&stack0xfffffffffffffef0,&PTR_s_google_protobuf_EnumOptions_110d9b920,0x50);
      func_0x00010bcfe800(puVar11,0xb);
      lVar24 = 0;
      while( true ) {
        cVar3 = SBORROW8(lVar24,0x50);
        cVar4 = lVar24 + -0x50 < 0;
        uVar5 = lVar24 == 0x50;
        if ((bool)uVar5) break;
        Hint_Prefetch(*puVar11,0,2,0);
        uVar28 = *(undefined8 *)(&stack0xfffffffffffffef0 + lVar24);
        uVar15 = uVar28;
        _strlen(uVar28);
        puVar16 = puVar11;
        func_0x000107c284ac(puVar11,uVar28,uVar15);
        uVar20 = puVar11[2];
        lStack_1a8 = 0;
        uVar12 = *puVar11 >> 0xc ^ (ulong)puVar16 >> 7;
        while( true ) {
          uVar12 = uVar12 & uVar20;
          func_0x000107c3a6b8();
          for (uVar26 = extraout_x8_02 & 0x8080808080808080; uVar26 != 0;
              uVar26 = uVar26 - 1 & uVar26) {
            uVar18 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar26 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar28 = *(undefined8 *)(&stack0xfffffffffffffef0 + lVar24);
            func_0x00010bd0a0f8(puVar11[1] +
                                (uVar12 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) &
                                uVar20) * 0x18);
            uVar15 = extraout_x12_00;
            uVar18 = extraout_x11_00;
            if (cVar4 == cVar3) {
              uVar15 = extraout_x9_00;
              uVar18 = extraout_x8_03;
            }
            uVar17 = uVar28;
            _strlen(uVar28);
            func_0x000107c27944(uVar18,uVar15,uVar28,uVar17);
            if ((uVar18 & 1) != 0) goto LAB_10bcfc578;
          }
          func_0x000107c3a674();
          if ((extraout_x8_04 & 1) != 0) break;
          lStack_1a8 = lStack_1a8 + 8;
          uVar12 = lStack_1a8 + uVar12;
        }
        puVar19 = puVar11;
        FUN_10bcdb66c(puVar11,puVar16);
        func_0x000107c27bcc(puVar11[1] + (long)puVar19 * 0x18,&stack0xfffffffffffffef0 + lVar24);
LAB_10bcfc578:
        lVar24 = lVar24 + 8;
      }
      puRam00000001137fe180 = puVar11;
      ___cxa_guard_release(0x1137fe188);
    }
  } while( true );
}



/* Entry: 10bcfc628; end: 10bcfc6a3;  */

void FUN_10bcfc628(void)

{
  char *pcVar1;
  char in_NG;
  char in_OV;
  long extraout_x9;
  char *extraout_x11;
  long extraout_x12;
  char *unaff_x20;
  long lVar2;
  
  func_0x00010bd0a9fc();
  func_0x00010bd0b82c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  func_0x00010bd0c7bc(0);
  lVar2 = extraout_x12;
  pcVar1 = extraout_x11;
  if (in_NG == in_OV) {
    lVar2 = extraout_x9;
    pcVar1 = unaff_x20;
  }
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*pcVar1 != '_') {
      func_0x00010bd0c338();
    }
    pcVar1 = pcVar1 + 1;
  }
  return;
}



/* Entry: 10bcfc6a4; end: 10bcfcbeb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10bcfc6a4(long *param_1,undefined8 ******param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *******pppppppuVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  long *plVar12;
  ulong uVar13;
  long extraout_x8;
  undefined8 *****pppppuVar14;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  byte *extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  undefined8 ****ppppuVar15;
  byte *extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x10_01;
  ulong uVar16;
  undefined8 ****ppppuVar17;
  long extraout_x11;
  undefined8 extraout_x11_00;
  long extraout_x11_01;
  undefined8 *****pppppuVar18;
  long lVar19;
  ulong uVar20;
  undefined8 ****ppppuVar21;
  long lVar22;
  long *plVar23;
  undefined8 unaff_x30;
  undefined8 ******ppppppuStack_110;
  undefined8 ***pppuStack_108;
  ulong uStack_100;
  undefined1 uStack_f8;
  byte bStack_f1;
  undefined8 *******pppppppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 *******pppppppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *****pppppuStack_98;
  undefined8 ****ppppuStack_90;
  
  func_0x00010bd0c7e4();
  pppppuVar18 = param_2[1];
  ppppuVar21 = (undefined8 ****)(long)(char)*(byte *)((long)pppppuVar18 + 0x17);
  pppppuVar14 = pppppuVar18;
  if ((long)ppppuVar21 < 0) {
    pppppuVar14 = (undefined8 *****)*pppppuVar18;
    ppppuVar21 = pppppuVar18[1];
  }
  pppppppuStack_b0 = (undefined8 *******)0x0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppppppuStack_110 = param_2;
  for (; ppppuVar21 != (undefined8 ****)0x0; ppppuVar21 = (undefined8 ****)((long)ppppuVar21 + -1))
  {
    if ((ulong)*(byte *)pppppuVar14 != 0x5f) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&pppppppuStack_b0,(long)(char)(&UNK_10e52cb36)[*(byte *)pppppuVar14]);
    }
    pppppuVar14 = (undefined8 *****)((long)pppppuVar14 + 1);
  }
  func_0x000107c3a6bc();
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lVar22 = 0;
  lStack_d0 = extraout_x8;
  do {
    if (*(int *)((long)param_2 + 4) <= lVar22) {
      FUN_10bd001b8(&lStack_d0);
      func_0x00010bd0b3b8();
      if (((*(int *)((long)param_2[6] + 0x34) != 2) && (0 < *(int *)((long)param_2 + 4))) &&
         (*(int *)((long)param_2[7] + 4) != 0)) {
        func_0x00010bd0c720(param_2[1]);
        func_0x00010bd0a414();
        func_0x00010bd0c2e0();
      }
      if (((*(byte *)(param_2[4] + 5) >> 1 & 1) == 0) || (((ulong)param_2[4][10] & 1) == 0)) {
        lVar19 = 0;
        func_0x000107c3a6bc();
        lStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        for (lVar22 = 0; lVar22 < *(int *)((long)param_2 + 4); lVar22 = lVar22 + 1) {
          pppuStack_108 = (undefined8 ***)((long)param_2[7] + lVar19);
          pppppppuStack_f0 =
               (undefined8 *******)
               CONCAT44(pppppppuStack_f0._4_4_,*(undefined4 *)((long)pppuStack_108 + 4));
          func_0x0001089a5818(&pppppppuStack_b0,&lStack_d0,&pppppppuStack_f0,pppuStack_108[1] + 3);
          if (((uStack_a0 & 1) == 0) && (((ulong)ppppppuStack_110[4][10] & 1) == 0)) {
            pppppppuStack_f0 = &ppppppuStack_110;
            pppuStack_e8 = &pppuStack_108;
            pppppppuStack_e0 = &pppppppuStack_b0;
            func_0x00010bd0c720(ppppppuStack_110[1]);
            func_0x00010bd0a27c();
            func_0x00010bd0b938();
          }
          lVar19 = lVar19 + 0x30;
          param_2 = ppppppuStack_110;
        }
        func_0x0001089393cc(&lStack_d0);
      }
      func_0x00010bd0c7fc(unaff_x30);
      return;
    }
    pppppuStack_d8 = param_2[7] + lVar22 * 6;
    pppppuVar14 = (undefined8 *****)pppppuStack_d8[1];
    ppppuStack_90 = (undefined8 ****)(long)*(char *)((long)pppppuVar14 + 0x17);
    pppppuStack_98 = pppppuVar14;
    if ((long)ppppuStack_90 < 0) {
      pppppuStack_98 = (undefined8 *****)*pppppuVar14;
      ppppuStack_90 = pppppuVar14[1];
    }
    ppppuVar21 = (undefined8 ****)0x0;
    uVar16 = 0;
    uVar6 = uStack_a8;
    pppppppuVar8 = pppppppuStack_b0;
    if (-1 < (long)uStack_a0) {
      uVar6 = uStack_a0 >> 0x38;
      pppppppuVar8 = &pppppppuStack_b0;
    }
    while ((ppppuVar15 = ppppuStack_90, ppppuStack_90 != ppppuVar21 &&
           (ppppuVar15 = ppppuVar21, uVar16 < uVar6))) {
      if ((ulong)*(byte *)((long)pppppuStack_98 + (long)ppppuVar21) != 0x5f) {
        if ((&UNK_10e52cb36)[*(byte *)((long)pppppuStack_98 + (long)ppppuVar21)] !=
            *(char *)((long)pppppppuVar8 + uVar16)) goto LAB_10bcfc80c;
        uVar16 = uVar16 + 1;
      }
      ppppuVar21 = (undefined8 ****)((long)ppppuVar21 + 1);
    }
    if (uVar6 <= uVar16) {
      ppppuVar21 = ppppuStack_90;
      if (ppppuStack_90 <= ppppuVar15) {
        ppppuVar21 = ppppuVar15;
      }
      for (; (ppppuVar17 = ppppuVar21, ppppuVar15 < ppppuStack_90 &&
             (ppppuVar17 = ppppuVar15, *(char *)((long)pppppuStack_98 + (long)ppppuVar15) == '_'));
          ppppuVar15 = (undefined8 ****)((long)ppppuVar15 + 1)) {
      }
      if ((undefined8 ****)((long)ppppuStack_90 - (long)ppppuVar17) != (undefined8 ****)0x0) {
        pppppuStack_98 = (undefined8 *****)((long)pppppuStack_98 + (long)ppppuVar17);
        ppppuStack_90 = (undefined8 ****)((long)ppppuStack_90 - (long)ppppuVar17);
      }
    }
LAB_10bcfc80c:
    func_0x000107c27958(&pppuStack_108,&pppppuStack_98);
    pppuStack_e8 = (undefined8 ***)0x0;
    pppppppuStack_e0 = (undefined8 *******)0x0;
    pppppppuStack_f0 = (undefined8 *******)0x0;
    cVar11 = (char)bStack_f1 < '\0';
    cVar10 = '\0';
    uVar16 = uStack_100;
    if (!(bool)cVar11) {
      uVar16 = (ulong)bStack_f1;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (&pppppppuStack_f0,uVar16);
    func_0x00010bd0a844();
    lVar19 = extraout_x11;
    pbVar1 = extraout_x10;
    if (cVar11 == cVar10) {
      lVar19 = extraout_x8_00;
      pbVar1 = extraout_x9;
    }
    bVar9 = true;
    for (; lVar19 != 0; lVar19 = lVar19 + -1) {
      uVar16 = (ulong)*pbVar1;
      cVar10 = SBORROW8(uVar16,0x5f);
      cVar11 = (long)(uVar16 - 0x5f) < 0;
      if (uVar16 != 0x5f) {
        cVar11 = '\0';
        cVar10 = '\0';
        puVar2 = &UNK_10e52cc36;
        if (!bVar9) {
          puVar2 = &UNK_10e52cb36;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&pppppppuStack_f0,(long)(char)puVar2[uVar16]);
      }
      pbVar1 = pbVar1 + 1;
      bVar9 = uVar16 == 0x5f;
    }
    func_0x00010bd0b1ac();
    Hint_Prefetch(lStack_d0,0,2,0);
    func_0x00010bd0bd24(lStack_d0);
    uVar3 = extraout_x11_00;
    uVar7 = extraout_x10_00;
    if (cVar11 == cVar10) {
      uVar3 = extraout_x8_01;
      uVar7 = extraout_x9_00;
    }
    plVar12 = &lStack_d0;
    func_0x000107c284ac(plVar12,uVar7,uVar3);
    uVar6 = uStack_c0;
    lVar19 = 0;
    func_0x00010bd0bc04();
    uVar16 = extraout_x8_02;
    while( true ) {
      uVar16 = uVar16 & uVar6;
      func_0x000107c3a6b8();
      for (uVar20 = extraout_x8_03 & 0x8080808080808080; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20)
      {
        uVar13 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        plVar23 = (long *)(uVar16 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar6);
        func_0x00010bd0c770(lStack_c8 + (long)plVar23 * 0x20);
        pppuVar4 = pppuStack_e8;
        pppppppuVar8 = pppppppuStack_f0;
        if (-1 < (long)pppppppuStack_e0) {
          pppuVar4 = (undefined8 ***)((ulong)pppppppuStack_e0 >> 0x38);
          pppppppuVar8 = &pppppppuStack_f0;
        }
        uVar13 = extraout_x10_01;
        if (-1 < extraout_x9_01) {
          uVar13 = extraout_x8_04;
        }
        lVar5 = extraout_x11_01;
        if (-1 < (int)extraout_x9_01) {
          lVar5 = extraout_x9_01;
        }
        func_0x000107c27944(uVar13,lVar5,pppppppuVar8,pppuVar4);
        if ((uVar13 & 1) != 0) {
          uStack_f8 = false;
          goto LAB_10bcfc948;
        }
      }
      func_0x000107c3a674();
      if ((extraout_x8_05 & 1) != 0) break;
      lVar19 = lVar19 + 8;
      uVar16 = lVar19 + uVar16;
    }
    plVar23 = &lStack_d0;
    func_0x00010bd079e8(plVar23,plVar12);
    lVar19 = lStack_c8 + (long)plVar23 * 0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (lVar19,&pppppppuStack_f0);
    *(undefined8 ******)(lVar19 + 0x18) = pppppuStack_d8;
    uStack_f8 = true;
LAB_10bcfc948:
    pppuStack_108 = (undefined8 ***)(lStack_d0 + (long)plVar23);
    uStack_100 = lStack_c8 + (long)plVar23 * 0x20;
    if (!(bool)uStack_f8) {
      uVar16 = *(ulong *)(*(long *)(uStack_100 + 0x18) + 8);
      func_0x000107c278d0(uVar16,pppppuStack_d8[1]);
      if (((uVar16 & 1) == 0) &&
         (*(int *)(*(long *)(uStack_100 + 0x18) + 4) != *(int *)((long)pppppuStack_d8 + 4))) {
        pppppuStack_98 = &pppppuStack_d8;
        ppppuStack_90 = &pppuStack_108;
        if ((((*(byte *)(*param_1 + 0x36) & 1) == 0) &&
            (*(char *)((long)param_2[4] + 0x52) != '\x01')) || (*(int *)(param_2[2] + 4) != 0x3e6))
        {
          func_0x00010bd0c720(pppppuStack_d8[1]);
          func_0x00010bd0a414();
          func_0x00010bd0bdf0();
          FUN_10bcf56d0();
        }
        else {
          func_0x00010bd0c720(pppppuStack_d8[1]);
          func_0x00010bd0a414();
          func_0x00010bd0bdf0();
          FUN_10bcf58f4();
        }
      }
    }
    func_0x00010bd0bb6c();
    lVar22 = lVar22 + 1;
  } while( true );
}



/* Entry: 10bcfcbec; end: 10bcfcccf;  */

void FUN_10bcfcbec(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x9;
  char *extraout_x11;
  long extraout_x12;
  byte *unaff_x19;
  char *unaff_x21;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  ulong auStack_68 [7];
  
  func_0x00010bd0b07c();
  func_0x000107c3a650();
  puVar3 = &DAT_10f62a9de;
  func_0x000107c2a6e4();
  if ((param_2 & 1) == 0) {
    func_0x00010bd0a3e4();
    puVar2 = &UNK_10f833133;
    auStack_68[0] = param_2;
    func_0x000107c284bc();
    puStack_c8 = puVar2;
    func_0x00010bd0b320(&uStack_e0,auStack_68);
  }
  else {
    func_0x00010bd0b114();
    FUN_10bcf64b0();
    if ((param_2 & 1) != 0) {
      *unaff_x19 = 0;
      unaff_x19[0x18] = 0;
      goto LAB_10bcfccb8;
    }
    func_0x00010bd0a3e4();
    puVar2 = &UNK_10f833174;
    auStack_68[0] = param_2;
    func_0x000107c284bc();
    puStack_c8 = puVar2;
    func_0x00010bd0b320(&uStack_e0,auStack_68);
  }
  *(undefined8 *)(unaff_x19 + 8) = uStack_d8;
  *(undefined8 *)unaff_x19 = uStack_e0;
  *(undefined8 *)(unaff_x19 + 0x10) = uStack_d0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e0 = 0;
  unaff_x19[0x18] = 1;
  func_0x00010bd0aaa4();
LAB_10bcfccb8:
  func_0x00010bd09ff8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010bd0afbc();
  func_0x00010bd0b82c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  func_0x00010bd0c458((uint)puVar3 ^ 1);
  lVar4 = extraout_x12;
  pcVar1 = extraout_x11;
  if (in_NG == in_OV) {
    lVar4 = extraout_x9;
    pcVar1 = unaff_x21;
  }
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    if (*pcVar1 != '_') {
      func_0x00010bd0c338();
    }
    pcVar1 = pcVar1 + 1;
  }
  if (((ulong)puVar3 & 1) != 0) {
    if ((char)unaff_x19[0x17] < '\0') {
      if (*(long *)(unaff_x19 + 8) == 0) {
        return;
      }
      unaff_x19 = *(byte **)unaff_x19;
    }
    else if (unaff_x19[0x17] == 0) {
      return;
    }
    *unaff_x19 = (&UNK_10e52cb36)[*unaff_x19];
  }
  return;
}



/* Entry: 10bcfccd0; end: 10bcfcd83;  */

void FUN_10bcfccd0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char in_NG;
  char in_OV;
  long extraout_x9;
  char *extraout_x11;
  long extraout_x12;
  byte *unaff_x19;
  char *unaff_x21;
  long lVar2;
  
  func_0x00010bd0afbc();
  func_0x00010bd0b82c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  func_0x00010bd0c458(param_3 ^ 1);
  lVar2 = extraout_x12;
  pcVar1 = extraout_x11;
  if (in_NG == in_OV) {
    lVar2 = extraout_x9;
    pcVar1 = unaff_x21;
  }
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*pcVar1 != '_') {
      func_0x00010bd0c338();
    }
    pcVar1 = pcVar1 + 1;
  }
  if ((param_3 & 1) != 0) {
    if ((char)unaff_x19[0x17] < '\0') {
      if (*(long *)(unaff_x19 + 8) == 0) {
        return;
      }
      unaff_x19 = *(byte **)unaff_x19;
    }
    else if (unaff_x19[0x17] == 0) {
      return;
    }
    *unaff_x19 = (&UNK_10e52cb36)[*unaff_x19];
  }
  return;
}



/* Entry: 10bcfcd84; end: 10bcfce3b;  */

long FUN_10bcfcd84(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  char in_NG;
  char in_OV;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x11;
  undefined8 extraout_x12;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010bd0b250();
  func_0x00010bd0a5a0();
  func_0x000107c3a6b0();
  func_0x00010bd0ba80();
  uVar2 = unaff_x19[1];
  uVar3 = unaff_x19[2];
  func_0x00010bd0a4e0(*unaff_x19 >> 0xc);
  do {
    func_0x00010bd0addc();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x00010bd0b4e0();
      func_0x00010bd0c7bc(*(undefined8 *)(uVar2 + (extraout_x8_00 & uVar3) * 8));
      uVar1 = extraout_x12;
      uVar4 = extraout_x11;
      if (in_NG == in_OV) {
        uVar1 = extraout_x9;
        uVar4 = unaff_x20;
      }
      puVar5 = *(undefined8 **)(extraout_x8_01 + 8);
      lVar7 = (long)*(char *)((long)puVar5 + 0x17);
      puVar6 = puVar5;
      if (lVar7 < 0) {
        puVar6 = (undefined8 *)*puVar5;
        lVar7 = puVar5[1];
      }
      func_0x000107c27944(uVar4,uVar1,puVar6,lVar7);
      if ((int)uVar4 != 0) {
        return *unaff_x19 + (extraout_x8_00 & uVar3);
      }
      func_0x00010bd0c764();
    }
    func_0x00010bd0a514();
    if ((extraout_x8_02 & 1) != 0) {
      return 0;
    }
    func_0x00010bd0c74c();
  } while( true );
}



/* Entry: 10bcfce3c; end: 10bcfce93;  */

void FUN_10bcfce3c(void)

{
  long extraout_x8;
  
  func_0x00010bd0afb0();
  if (extraout_x8 != 0) {
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bcfce94; end: 10bcfcea3;  */

void FUN_10bcfce94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined1 auStack_58 [40];
  
  func_0x00010bd0a9fc(*param_1,param_1[1] + 0x18,param_1[2],7,param_2,param_3);
  func_0x00010bd0c084();
  plVar1 = *(long **)(unaff_x19 + 0x18);
  if (plVar1 == (long *)0x0) {
    if ((*(byte *)(unaff_x19 + 0x88) & 1) == 0) {
      func_0x00010bd0a968();
      func_0x00010bdb2988(auStack_58);
      FUN_10bce1854(auStack_58,&UNK_10f831d50);
      func_0x00010ae6c448();
      FUN_10bcf57f4();
      func_0x00010bd0b678();
    }
    func_0x00010bd0a968();
    func_0x00010bdb2988(auStack_58);
    FUN_10bcf57f4(auStack_58,&DAT_10f4944be);
    func_0x00010ae6c448();
    func_0x00010bd0c054();
    func_0x00010ae6c448();
    func_0x00010bd0b678();
  }
  else {
    lVar3 = (long)*(char *)(unaff_x19 + 0xa7);
    if (lVar3 < 0) {
      lVar2 = *(long *)(unaff_x19 + 0x90);
      lVar3 = *(long *)(unaff_x19 + 0x98);
    }
    else {
      lVar2 = unaff_x19 + 0x90;
    }
    func_0x00010bd0a5b4(plVar1,lVar2,lVar3);
    func_0x00010bd0a844();
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined1 *)(unaff_x19 + 0x88) = 1;
  func_0x00010bd0b1ac();
  return;
}



/* Entry: 10bcfcea4; end: 10bcfd04f;  */

undefined8 *
FUN_10bcfcea4(undefined8 param_1,ulong *param_2,ulong *param_3,long param_4,undefined8 param_5,
             long *param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long extraout_x8;
  int *piVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 auStack_78 [3];
  
  func_0x00010bd0c370();
  if (param_2 == param_3) {
    uVar6 = (uint)((ulong)(param_6[1] - *param_6) >> 4);
    lVar9 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) + 1;
    piVar5 = (int *)*param_6;
    do {
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) {
        return (undefined8 *)0x1;
      }
      iVar3 = *piVar5;
      piVar5 = piVar5 + 4;
    } while (iVar3 != *(int *)(param_4 + 4));
    auStack_78[0] = param_5;
    FUN_10bcfce94(param_1,auStack_78,0x10bd095e8);
LAB_10bcfcfdc:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar8 = 0;
    lVar9 = 0;
    while( true ) {
      lVar2 = *param_6;
      lVar1 = (long)(int)((ulong)(param_6[1] - lVar2) >> 4);
      puVar7 = (undefined8 *)(ulong)(lVar1 <= lVar9);
      if (lVar1 <= lVar9) break;
      uVar4 = *param_2;
      if (*(int *)(lVar2 + lVar8) == *(int *)(uVar4 + 4)) {
        func_0x00010787827c();
        if ((int)uVar4 == 10) {
          if ((*(int *)(lVar2 + lVar8 + 4) == 4) && (func_0x00010bd0b6ec(), (uVar4 & 1) == 0)) {
            return puVar7;
          }
        }
        else {
          if ((int)uVar4 != 0xb) {
            func_0x00010bd0a968();
            FUN_10bdb2a00(auStack_78);
            FUN_10bcfd050(auStack_78);
            puVar7 = auStack_78;
            FUN_10bcfd07c(puVar7,uVar4);
            func_0x00010bd0c1c4();
            func_0x00010ae6bd08();
            return puVar7;
          }
          if (*(int *)(lVar2 + lVar8 + 4) == 3) {
            func_0x00010bd0c598();
            puVar7 = auStack_78;
            FUN_10bcfd0d8(puVar7,*(undefined8 *)(extraout_x8 + 8));
            if (((int)puVar7 != 0) && (func_0x00010bd0b6ec(), ((ulong)puVar7 & 1) == 0)) {
              FUN_10bd02384(auStack_78);
              goto LAB_10bcfcfdc;
            }
            FUN_10bd02384(auStack_78);
          }
        }
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    }
  }
  return puVar7;
}



/* Entry: 10bcfd050; end: 10bcfd07b;  */

undefined8 FUN_10bcfd050(undefined8 param_1)

{
  func_0x00010ae6bd08(param_1,&UNK_10f832d29,0x27);
  return param_1;
}



/* Entry: 10bcfd07c; end: 10bcfd0d7;  */

long FUN_10bcfd07c(long param_1,undefined8 param_2)

{
  undefined1 auStack_98 [64];
  long lStack_58;
  
  func_0x00010ae6c484(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(lStack_58 + 0x118,param_2);
  func_0x00010ae6c56c(auStack_98);
  return param_1;
}



/* Entry: 10bcfd0d8; end: 10bcfd103;  */

void FUN_10bcfd0d8(undefined8 param_1,long *param_2)

{
  undefined **ppuStack_30;
  long lStack_28;
  int iStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  
  iStack_20 = (int)param_2[1];
  lStack_28 = *param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    iStack_20 = (int)*(char *)((long)param_2 + 0x17);
    lStack_28 = (long)param_2;
  }
  ppuStack_30 = &PTR_DAT_110cf0f18;
  uStack_18 = 0;
  iStack_1c = iStack_20;
  FUN_10bd36b9c(param_1,&ppuStack_30);
  return;
}



/* Entry: 10bcfd104; end: 10bcfd153;  */

void FUN_10bcfd104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10bd36a90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1,param_3);
  return;
}



/* Entry: 10bcfd154; end: 10bcfd157;  */

void FUN_10bcfd154(void)

{
  return;
}



/* Entry: 10bcfd158; end: 10bcfd183;  */

undefined8 * FUN_10bcfd158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9ba98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10bcfd184; end: 10bcfd23f;  */

long FUN_10bcfd184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  char ****ppppcVar3;
  undefined1 auStack_60 [24];
  char ***pppcStack_48;
  ulong uStack_40;
  byte bStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  func_0x000107c27958(&pppcStack_48,&uStack_30);
  uVar2 = (ulong)(char)bStack_31;
  if ((char)bStack_31 < '\0') {
    ppppcVar3 = (char ****)pppcStack_48;
    if (uStack_40 == 0) {
      uStack_40 = 0;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      goto LAB_10bcfd21c;
    }
LAB_10bcfd1c8:
    if (*(char *)ppppcVar3 == '.') {
      func_0x00010bd0b370(auStack_60,&pppcStack_48);
      func_0x00010bd0bac8(&pppcStack_48);
      func_0x00010bd0aaa4();
      uVar2 = (ulong)bStack_31;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    if (((uint)uVar2 >> 7 & 1) != 0) goto LAB_10bcfd21c;
  }
  else {
    if (bStack_31 != 0) {
      ppppcVar3 = &pppcStack_48;
      goto LAB_10bcfd1c8;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  uStack_40 = uVar2 & 0xff;
  pppcStack_48 = (char ***)&pppcStack_48;
LAB_10bcfd21c:
  FUN_10bcec8b4(uVar1,param_1,pppcStack_48,uStack_40);
  func_0x00010bd0a95c();
  return param_1;
}



/* Entry: 10bcfd240; end: 10bcfd4ab;  */

void FUN_10bcfd240(long param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 **ppuVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x9;
  undefined4 extraout_w10;
  undefined4 extraout_w10_00;
  int extraout_w10_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  code *extraout_x11;
  long lVar12;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  code *pcStack_d8;
  code *pcStack_d0;
  undefined1 *puStack_a8;
  code *pcStack_a0;
  undefined1 *apuStack_78 [6];
  undefined8 uStack_48;
  
  func_0x00010bd0a30c();
  lVar12 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar12 + 2) & 1) == 0) {
    pcVar10 = (code *)&UNK_10f832e6a;
    func_0x00010bd0b954();
    func_0x00010bd0a968();
    ppuVar9 = apuStack_78;
    pcVar11 = (code *)0x2539;
    FUN_10bdb2a88();
  }
  else {
    pcVar8 = (code *)(*(long *)(param_1 + 0x18) + 4);
    pcVar5 = pcVar8;
    uStack_48 = extraout_x8;
    _strlen();
    ppuVar6 = *(undefined1 ***)(lVar12 + 0x18);
    pcVar10 = pcVar8;
    pcVar11 = pcVar5;
    FUN_10bcfd184();
    ppuVar9 = ppuVar6;
    if (*(char *)ppuVar6 != '\x04') {
      uVar3 = 0;
      if (*(char *)ppuVar6 == '\x01') {
        uVar3 = (*(byte *)(param_1 + 2) & 0xfe) == 10;
        if (!(bool)uVar3) {
          pcVar10 = (code *)&UNK_10f832e8d;
          func_0x00010bd0b954();
          func_0x00010bd0a968();
          ppuVar9 = apuStack_78;
          pcVar11 = (code *)0x2542;
          FUN_10bdb2a88();
          goto LAB_10bcfd47c;
        }
        *(undefined1 ***)(param_1 + 0x30) = ppuVar6;
      }
LAB_10bcfd3cc:
      func_0x000107c3a64c(uStack_48);
      if ((bool)uVar3) {
        return;
      }
      goto LAB_10bcfd480;
    }
    uVar3 = *(char *)(param_1 + 2) == '\x0e';
    if ((bool)uVar3) {
      pcVar8 = pcVar8 + (long)pcVar5;
      *(undefined1 ***)(param_1 + 0x30) = ppuVar6;
      if (pcVar8[1] == (code)0x0) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        func_0x00010bd0b6e4(ppuVar6[1],auStack_f0);
        puVar7 = auStack_f0;
        func_0x00010bd0acb8();
        cVar1 = SCARRY8((long)puVar7,1);
        cVar2 = (long)(puVar7 + 1) < 0;
        if (puVar7 == (undefined1 *)0xffffffffffffffff) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (auStack_f0,pcVar8 + 1);
        }
        else {
          puVar7 = auStack_f0;
          func_0x00010bd0bf88(auStack_120);
          func_0x00010bd0a58c();
          apuStack_78[0] = (undefined1 *)CONCAT44(extraout_var,extraout_w10);
          if (cVar2 == cVar1) {
            apuStack_78[0] = auStack_120;
          }
          func_0x00010bd0a408();
          pcVar8 = pcVar8 + 1;
          puStack_a8 = puVar7;
          pcStack_a0 = pcVar10;
          func_0x000107c284bc();
          pcStack_d8 = pcVar8;
          pcStack_d0 = pcVar10;
          func_0x000107c2ba44(auStack_108,apuStack_78,&puStack_a8,&pcStack_d8);
          func_0x000107c27b9c(auStack_f0,auStack_108);
          func_0x00010bd0aacc();
          func_0x00010bd0aaa4();
        }
        ppuVar9 = *(undefined1 ***)(*(long *)(param_1 + 0x10) + 0x18);
        func_0x00010bd0be14();
        pcVar10 = (code *)CONCAT44(extraout_var_00,extraout_w10_00);
        pcVar11 = extraout_x11;
        if (cVar2 == cVar1) {
          pcVar11 = extraout_x8_00;
          pcVar10 = extraout_x9;
        }
        FUN_10bcfd184();
        uVar3 = *(char *)ppuVar9 == '\x05';
        if (!(bool)uVar3) {
          uVar3 = *(char *)ppuVar9 == '\x06';
          if ((bool)uVar3) {
            ppuVar9 = (undefined1 **)((long)ppuVar9 + -1);
          }
          else {
            ppuVar9 = (undefined1 **)0x0;
          }
        }
        *(undefined1 ***)(param_1 + 0x50) = ppuVar9;
        func_0x00010bd0afec();
        if (*(long *)(param_1 + 0x50) != 0) goto LAB_10bcfd3cc;
      }
      if (*(int *)((long)ppuVar6 + 4) != 0) {
        *(undefined1 **)(param_1 + 0x50) = ppuVar6[7];
        goto LAB_10bcfd3cc;
      }
      pcVar10 = (code *)&UNK_10f832f00;
      func_0x00010bd0b954();
      func_0x00010bd0a968();
      ppuVar9 = apuStack_78;
      pcVar11 = (code *)0x255e;
      FUN_10bdb2a88();
    }
    else {
      pcVar10 = (code *)&UNK_10f832edc;
      func_0x00010bd0b954();
      func_0x00010bd0a968();
      ppuVar9 = apuStack_78;
      pcVar11 = (code *)0x2545;
      FUN_10bdb2a88();
    }
  }
LAB_10bcfd47c:
  func_0x00010ae6c700();
LAB_10bcfd480:
  ___stack_chk_fail();
  func_0x00010bd0afec();
  func_0x00010bd0a974();
  uVar3 = *(int *)ppuVar9 == 0xdd;
  if (!(bool)uVar3) {
    func_0x00010bd0a230();
    iVar4 = (int)ppuVar9;
    if ((((ulong)ppuVar9 & 1) != 0) || (func_0x00010bd0ad50(), iVar4 == 0)) {
      (*pcVar10)(*(undefined8 *)pcVar11);
      do {
        func_0x00010bd0b9c4();
      } while (extraout_w10_01 != 0);
      func_0x00010bd0a78c();
      if ((bool)uVar3) {
        func_0x00010bd0a914();
      }
    }
    return;
  }
  return;
}



/* Entry: 10bcfd4ac; end: 10bcfd4cb;  */

void FUN_10bcfd4ac(int *param_1,code *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int extraout_w10;
  
  uVar1 = *param_1 == 0xdd;
  if ((bool)uVar1) {
    return;
  }
  func_0x00010bd0a230(param_1,1);
  iVar2 = (int)param_1;
  if ((((ulong)param_1 & 1) != 0) || (func_0x00010bd0ad50(), iVar2 == 0)) {
    (*param_2)(*param_3);
    do {
      func_0x00010bd0b9c4();
    } while (extraout_w10 != 0);
    func_0x00010bd0a78c();
    if ((bool)uVar1) {
      func_0x00010bd0a914();
    }
  }
  return;
}



/* Entry: 10bcfd4cc; end: 10bcfd53b;  */

long FUN_10bcfd4cc(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (((*(byte *)(param_1 + 1) >> 3 & 1) != 0) &&
     (func_0x00010bd0bde4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20)), (bool)in_ZR)) {
    lVar2 = param_1;
    func_0x00010787827c();
    bVar1 = (int)lVar2 == 0xb;
    if ((bVar1) && (func_0x00010bd0b814(*(undefined1 *)(param_1 + 1)), bVar1)) {
      func_0x00010bd0b708();
      lVar3 = lVar2;
      func_0x00010bd0b720();
      if (lVar2 == lVar3) {
        func_0x00010bd0b720();
        param_1 = lVar3;
      }
    }
  }
  return *(long *)(param_1 + 8) + 0x18;
}



/* Entry: 10bcfd53c; end: 10bcfd5d3;  */

char * FUN_10bcfd53c(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puStack_88;
  char *pcStack_80;
  undefined *puStack_78;
  
  if ((param_1[2] & 1U) != 0) {
    pcVar5 = (char *)(*(long *)(param_1 + 0x28) + 4);
    pcVar2 = param_1;
    for (lVar6 = 0; lVar6 < *(int *)(param_1 + 0x30); lVar6 = lVar6 + 1) {
      pcVar1 = pcVar5;
      _strlen();
      pcVar2 = pcVar1;
      if (*pcVar5 != '\0') {
        pcVar2 = *(char **)(param_1 + 0x18);
        FUN_10bcedcb0(pcVar2,pcVar5,pcVar1);
        *(char **)(*(long *)(param_1 + 0x48) + lVar6 * 8) = pcVar2;
      }
      pcVar5 = pcVar5 + (long)pcVar1 + 1;
    }
    return pcVar2;
  }
  puVar4 = &UNK_10f832f19;
  func_0x00010bd0aa88();
  func_0x00010bd0a1c8();
  FUN_10bdb2a88();
  func_0x00010bd0aa9c();
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    puStack_88 = &puStack_78;
    if (*piVar3 != 0xdd) {
      pcStack_80 = param_1;
      puStack_78 = puVar4;
      FUN_10bd09e88(piVar3,&puStack_88);
    }
  }
  return *(char **)param_1;
}



/* Entry: 10bcfd5d4; end: 10bcfd7e7;  */

undefined8 FUN_10bcfd5d4(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    puStack_38 = &uStack_28;
    if (*piVar1 != 0xdd) {
      puStack_30 = param_1;
      uStack_28 = param_2;
      FUN_10bd09e88(piVar1,&puStack_38);
    }
  }
  return *param_1;
}



/* Entry: 10bcfd7e8; end: 10bcfd893;  */

bool FUN_10bcfd7e8(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  undefined1 auStack_48 [24];
  
  func_0x00010bd0c35c();
  if ((int)param_1 == 10) {
    lVar5 = *(long *)(unaff_x19 + 8);
    func_0x00010bd0b720();
    puVar2 = *(undefined8 **)(param_1 + 8);
    lVar4 = (long)*(char *)((long)puVar2 + 0x17);
    puVar3 = puVar2;
    if (lVar4 < 0) {
      puVar3 = (undefined8 *)*puVar2;
      lVar4 = puVar2[1];
    }
    FUN_10bcfd894(auStack_48,puVar3,lVar4);
    func_0x000107c278d0(lVar5,auStack_48);
    lVar4 = lVar5;
    func_0x00010bd0aab8();
    if (((int)lVar5 != 0) &&
       (func_0x00010bd0b720(), *(long *)(lVar4 + 0x10) == *(long *)(unaff_x19 + 0x10))) {
      bVar1 = *(byte *)(unaff_x19 + 1);
      func_0x00010bd0b720();
      lVar5 = *(long *)(lVar4 + 0x18);
      if ((bVar1 >> 3 & 1) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0x20);
      }
      else {
        func_0x00010bd0b708();
      }
      return lVar5 == lVar4;
    }
  }
  return false;
}



/* Entry: 10bcfd894; end: 10bcfd943;  */

void FUN_10bcfd894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  func_0x000107c27958(param_1,&uStack_30);
  func_0x00010ae87db0(param_1);
  return;
}



/* Entry: 10bcfd944; end: 10bcfd97b;  */

undefined1  [16] FUN_10bcfd944(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar5 [16];
  undefined8 *puVar4;
  
  FUN_10bcfd9b0();
  uVar1 = param_1[1];
  puVar4 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar4 = param_1;
  }
  func_0x00010bd0b168(puVar4,uVar1,&UNK_10f83302c);
  iVar3 = (int)puVar4;
  func_0x000107c2a6e4();
  lVar2 = 8;
  if (iVar3 == 0) {
    lVar2 = 0;
  }
  auVar5._8_8_ = unaff_x20 - lVar2;
  auVar5._0_8_ = lVar2 + unaff_x21;
  return auVar5;
}



/* Entry: 10bcfd97c; end: 10bcfd9af;  */

undefined1  [16] FUN_10bcfd97c(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  func_0x00010bd0b168();
  func_0x000107c2a6e4();
  if (param_1 == 0) {
    param_4 = 0;
  }
  auVar1._8_8_ = unaff_x20 - param_4;
  auVar1._0_8_ = param_4 + unaff_x21;
  return auVar1;
}



/* Entry: 10bcfd9b0; end: 10bcfda63;  */

undefined * FUN_10bcfd9b0(long param_1)

{
  undefined *puVar1;
  
  func_0x00010bd0c884();
  FUN_10bcee5e4();
  if (param_1 == 0) {
    func_0x000107c280b4();
    puVar1 = &DAT_11383d918;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
  }
  return puVar1;
}



/* Entry: 10bcfda64; end: 10bcfdaa7;  */

void FUN_10bcfda64(void)

{
  char *pcVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010bd0be98();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    while (unaff_x20 != 0) {
      if (-1 < *pcVar1) {
        FUN_10bcfdaa8();
      }
      func_0x00010bd0af28();
    }
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bcfdaa8; end: 10bcfdaff;  */

void FUN_10bcfdaa8(long param_1)

{
  FUN_10bd0406c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10bcfdb00; end: 10bcfdbaf;  */

void FUN_10bcfdb00(long *param_1)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(char *)((long)param_1 + 0xb) == '\0') && (*(char *)((long)param_1 + 10) != '\0')) {
    lVar4 = *param_1;
    do {
      func_0x00010bcfdbe8();
    } while (*(char *)((long)param_1 + 0xb) == '\0');
    uVar5 = (ulong)*(byte *)(param_1 + 1);
    plVar3 = (long *)*param_1;
    do {
      func_0x00010bd0b718();
      param_1 = (long *)param_1[uVar5];
      cVar2 = '\0';
      if (*(char *)((long)param_1 + 0xb) == '\0') {
        while (cVar2 == '\0') {
          func_0x00010bcfdbe8();
          cVar2 = *(char *)((long)param_1 + 0xb);
        }
        uVar5 = (ulong)*(byte *)(param_1 + 1);
        plVar3 = (long *)*param_1;
      }
      __ZdlPv();
      if (*(byte *)((long)plVar3 + 10) <= uVar5) {
        do {
          bVar1 = *(byte *)(plVar3 + 1);
          uVar5 = (ulong)bVar1;
          plVar3 = (long *)*plVar3;
          func_0x00010bd0c2ac();
          if (plVar3 == (long *)lVar4) {
            return;
          }
        } while (*(byte *)((long)plVar3 + 10) <= bVar1);
      }
      uVar5 = uVar5 + 1;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bcfdbb0; end: 10bcfdbff;  */

void FUN_10bcfdbb0(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = 0;
  uStack_40 = 1;
  uStack_30 = 4;
  uStack_20 = 0;
  uStack_28 = param_1;
  FUN_10bcfdc00(&uStack_40);
  return;
}



/* Entry: 10bcfdc00; end: 10bcfdc23;  */

long FUN_10bcfdc00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10bcfdc24();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 10bcfdc24; end: 10bcfdc4b;  */

ulong FUN_10bcfdc24(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + param_1[3] * 0x18 + 7U & 0xfffffffffffffff8;
}



/* Entry: 10bcfdc4c; end: 10bcfdc83;  */

long FUN_10bcfdc4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bd0b438(1,4);
  FUN_10bcfdc24();
  return param_1 + lVar1;
}



/* Entry: 10bcfdc84; end: 10bcfdcbf;  */

void FUN_10bcfdc84(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010bd0aa10();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_10bcfdcc0(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10bcfdcc0; end: 10bcfdf4f;  */

void FUN_10bcfdcc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  *param_1 = 0;
  if (piVar3 == (int *)0x0) {
    return;
  }
  func_0x00010bd0a608((long)*piVar3);
  puVar1 = (undefined8 *)0x0;
  if (!(bool)in_ZR) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 3) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x00010bd0a608((long)piVar3[1]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_00);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 6) {
    FUN_10bd1337c();
  }
  func_0x00010bd0a608((long)piVar3[2]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_01);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0x19) {
    FUN_10bcec804();
  }
  func_0x00010bd0a608((long)piVar3[3]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_02);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 9) {
    FUN_10bd12650();
  }
  func_0x00010bd0a608((long)piVar3[4]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_03);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xb) {
    FUN_10bd100d8();
  }
  func_0x00010bd0a608((long)piVar3[5]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_04);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0x13) {
    FUN_10bd1099c();
  }
  func_0x00010bd0a608((long)piVar3[6]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_05);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xb) {
    FUN_10bd11358();
  }
  func_0x00010bd0a608((long)piVar3[7]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_06);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xc) {
    FUN_10bd116a4();
  }
  func_0x00010bd0a608((long)piVar3[8]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_07);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xe) {
    FUN_10bd0df5c();
  }
  func_0x00010bd0a608((long)piVar3[9]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_08);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 10) {
    FUN_10bd110cc();
  }
  func_0x00010bd0a608((long)piVar3[10]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_09);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xb) {
    FUN_10bd11a18();
  }
  func_0x00010bd0a608((long)piVar3[0xb]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_10);
  }
  for (; bVar2 = param_1 == puVar1, !bVar2; param_1 = param_1 + 0xb) {
    FUN_10bd11ccc();
  }
  func_0x00010bd0a608((long)piVar3[0xc]);
  puVar1 = (undefined8 *)0x0;
  if (!bVar2) {
    puVar1 = (undefined8 *)((long)piVar3 + extraout_x9_11);
  }
  for (; param_1 != puVar1; param_1 = param_1 + 0x16) {
    func_0x000107c315f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(piVar3);
  return;
}



/* Entry: 10bcfdf50; end: 10bcfdf93;  */

void FUN_10bcfdf50(void)

{
  char *pcVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010bd0be98();
  if (unaff_x20 != 0) {
    pcVar1 = (char *)*unaff_x19;
    while (unaff_x20 != 0) {
      if (-1 < *pcVar1) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      func_0x00010bd0af28();
    }
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bcfdf94; end: 10bcfdfdb;  */

void FUN_10bcfdf94(void)

{
  long extraout_x8;
  
  func_0x00010bd0afb0();
  if (extraout_x8 != 0) {
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bcfdfdc; end: 10bcfe027;  */

void FUN_10bcfdfdc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_2 + 0x160);
  lVar1 = *(long *)(param_2 + 0x158);
  lVar4 = *(long *)(param_2 + 0x178);
  lVar3 = *(long *)(param_2 + 0x170);
  *param_1 = CONCAT44((int)((ulong)(*(long *)(param_2 + 0xa0) - *(long *)(param_2 + 0x98)) >> 3),
                      (int)((ulong)(*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0)) >> 3));
  param_1[1] = CONCAT44((int)((ulong)(lVar4 - lVar3) >> 3),(int)((ulong)(lVar2 - lVar1) >> 3));
  *(int *)(param_1 + 2) = (int)((ulong)(*(long *)(param_2 + 400) - *(long *)(param_2 + 0x188)) >> 4)
  ;
  return;
}



/* Entry: 10bcfe028; end: 10bcfe05b;  */

undefined8 FUN_10bcfe028(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  func_0x00010bd0a5f0();
  if (param_2 >> 0x3d == 0) {
    func_0x00010bd0b03c();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10bcfe07c();
  func_0x00010bd0a290();
  func_0x00010bd0a128();
  return param_1;
}



/* Entry: 10bcfe05c; end: 10bcfe07b;  */

void FUN_10bcfe05c(void)

{
  func_0x00010bd0a290();
  func_0x00010bd0a128();
  return;
}



/* Entry: 10bcfe07c; end: 10bcfe087;  */

void FUN_10bcfe07c(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010bd0a5f0();
  if (param_1 >> 0x3d == 0) {
    func_0x00010bd0b500();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010bd0c788();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10bcfe088; end: 10bcfe0eb;  */

void FUN_10bcfe088(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x00010bd0b500();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010bd0c788();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10bcfe0ec; end: 10bcfe113;  */

undefined8 FUN_10bcfe0ec(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010bd0b03c();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10bcfe134();
  func_0x00010bd0a290();
  func_0x00010bd0a128();
  return param_1;
}



/* Entry: 10bcfe114; end: 10bcfe133;  */

void FUN_10bcfe114(void)

{
  func_0x00010bd0a290();
  func_0x00010bd0a128();
  return;
}



/* Entry: 10bcfe134; end: 10bcfe13f;  */

void FUN_10bcfe134(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010bd0a5f0();
  if (param_1 >> 0x3d == 0) {
    func_0x00010bd0b500();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010bd0c788();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10bcfe140; end: 10bcfe1a3;  */

void FUN_10bcfe140(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x00010bd0b500();
    return;
  }
  func_0x000104bd35f4();
  func_0x00010bd0c788();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10bcfe1a4; end: 10bcfe1e3;  */

long * FUN_10bcfe1a4(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_10bcfe204();
  func_0x00010bd0a290();
  func_0x00010bd0a128();
  return param_1;
}



/* Entry: 10bcfe1e4; end: 10bcfe203;  */

void FUN_10bcfe1e4(void)

{
  func_0x00010bd0a290();
  func_0x00010bd0a128();
  return;
}



/* Entry: 10bcfe204; end: 10bcfe20f;  */

void FUN_10bcfe204(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010bd0a5f0();
  func_0x00010bd0a9fc();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      func_0x00010bd0c788();
      lVar2 = extraout_x9;
      while (lVar2 != extraout_x8) {
        lVar2 = lVar2 + -0x10;
        unaff_x19[2] = lVar2;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return;
}



/* Entry: 10bcfe210; end: 10bcfe267;  */

void FUN_10bcfe210(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010bd0a9fc();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      func_0x00010bd0c788();
      lVar2 = extraout_x9;
      while (lVar2 != extraout_x8) {
        lVar2 = lVar2 + -0x10;
        unaff_x19[2] = lVar2;
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return;
}



/* Entry: 10bcfe268; end: 10bcfe2a3;  */

void FUN_10bcfe268(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010bd0c788();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -0x10;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10bcfe2a4; end: 10bcfe2cb;  */

long * FUN_10bcfe2a4(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 in_CY;
  long lVar3;
  long *extraout_x8;
  long *extraout_x9;
  long *unaff_x19;
  ulong unaff_x20;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010bd0b03c();
    plVar2 = extraout_x9;
    if ((bool)in_CY) {
      plVar2 = extraout_x8;
    }
    return plVar2;
  }
  FUN_10bcfe38c();
  func_0x00010bd0a9fc();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if (unaff_x20 >> 0x3d != 0) {
      func_0x000104bd35f4();
      func_0x00010bd0a290();
      func_0x00010bd0a128();
      return param_1;
    }
    lVar3 = unaff_x20 << 3;
    __Znwm();
  }
  lVar1 = lVar3 + param_3 * 8;
  *unaff_x19 = lVar3;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar3 + unaff_x20 * 8;
  return unaff_x19;
}



/* Entry: 10bcfe2cc; end: 10bcfe343;  */

void FUN_10bcfe2cc(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010bd0a9fc();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3d != 0) {
      func_0x000104bd35f4();
      func_0x00010bd0a290();
      func_0x00010bd0a128();
      return;
    }
    lVar2 = unaff_x20 << 3;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 8;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 8;
  return;
}



/* Entry: 10bcfe344; end: 10bcfe38b;  */

long * FUN_10bcfe344(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    FUN_10bcfdcc0();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcfe38c; end: 10bcfe3bf;  */

undefined8 FUN_10bcfe38c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  func_0x00010bd0a5f0();
  if (param_2 >> 0x3d == 0) {
    func_0x00010bd0b03c();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_10bcfe3e0();
  func_0x00010bd0a290();
  func_0x00010bd0a128();
  return param_1;
}



/* Entry: 10bcfe3c0; end: 10bcfe3df;  */

void FUN_10bcfe3c0(void)

{
  func_0x00010bd0a290();
  func_0x00010bd0a128();
  return;
}



/* Entry: 10bcfe3e0; end: 10bcfe3eb;  */

long * FUN_10bcfe3e0(long *param_1)

{
  long lVar1;
  
  func_0x00010bd0a5f0();
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00010bd0b500();
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00010bcfdf28();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcfe3ec; end: 10bcfe45b;  */

long * FUN_10bcfe3ec(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00010bd0b500();
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x00010bcfdf28();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bcfe45c; end: 10bcfe50b;  */

void FUN_10bcfe45c(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_20;
  long lStack_18;
  
  switch(*param_1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
  case 8:
    break;
  default:
    func_0x00010bd0c61c();
    func_0x00010bd0aa88();
    func_0x00010bd0a1c8();
    FUN_10bdb2a88();
    func_0x00010bd0aa9c();
    func_0x000107c3a6ac();
    func_0x00010ae7d4dc();
    return;
  case 9:
    break;
  case 10:
    puVar1 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x10);
    lStack_18 = (long)*(char *)((long)puVar1 + 0x17);
    puStack_20 = puVar1;
    if (lStack_18 < 0) {
      puStack_20 = (undefined8 *)*puVar1;
      lStack_18 = puVar1[1];
    }
    func_0x000107c2810c(&puStack_20,0,(long)*(int *)(param_1 + 4));
  }
  return;
}



/* Entry: 10bcfe50c; end: 10bcfe52f;  */

void FUN_10bcfe50c(void)

{
  func_0x000107c3a6ac();
  func_0x00010ae7d4dc();
  return;
}



/* Entry: 10bcfe530; end: 10bcfe56b;  */

void FUN_10bcfe530(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  
  func_0x00010b4d7a40();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(long *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  func_0x000107c3a6bc();
  *(undefined8 *)(param_1 + 0xa0) = extraout_x8;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 10bcfe56c; end: 10bcfe5a7;  */

void FUN_10bcfe56c(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010bd0ba24();
    *param_1 = extraout_x8;
    param_1[1] = extraout_x9 + extraout_x10 * 0x20;
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10bcfe5a8; end: 10bcfe62f;  */

/* WARNING: Possible PIC construction at 0x00010bcfe5bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcfe5c0) */

long FUN_10bcfe5a8(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x18;
  func_0x00010007e5dc(&lStack_48);
  return param_1 + 0x18;
}



/* Entry: 10bcfe630; end: 10bcfe65f;  */

void FUN_10bcfe630(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcfe660; end: 10bcfe683;  */

void FUN_10bcfe660(void)

{
  func_0x00010bd0c01c(&PTR_LOOP_110c8acd8);
  return;
}



/* Entry: 10bcfe684; end: 10bcfe6af;  */

undefined8 * FUN_10bcfe684(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_2 + 1;
  uVar2 = *puVar1;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  param_1[3] = param_2[3];
  *puVar1 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  func_0x000107c3a6d4();
  FUN_10bcfe630();
  return puVar1;
}



/* Entry: 10bcfe6b0; end: 10bcfe727;  */

undefined1 * FUN_10bcfe6b0(undefined1 *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  code *pcStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  ppuVar3 = &puStack_30;
  if (*(long *)(param_1 + 0xb8) == 0) {
    FUN_10bcfe728(param_1 + 0xc0);
    FUN_10bcfe764(param_1 + 0xa0);
    func_0x00010b4d7c8c();
    uStack_28 = 0;
    puVar4 = &uStack_28;
    puVar2 = param_1;
    func_0x00010b4d7cf0(param_1);
    if (((*(ulong *)(param_1 + 8) & 1) == 0) && (puVar4 != (undefined8 *)0x0)) {
      uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffff8;
      pcStack_38 = (code *)0x0;
      if (uVar1 != 0) {
        pcStack_38 = *(code **)(uVar1 + 0x18);
      }
      puStack_30 = &uStack_28;
      func_0x00010b4d7dbc(&pcStack_38,puVar2,puVar4);
    }
    func_0x00010ae7c720(param_1 + 0x18);
    return param_1;
  }
  func_0x00010bd0a968();
  FUN_10bdb2a08(&puStack_30);
  func_0x00010b4d6358(&puStack_30,&UNK_10f833051);
  func_0x00010ae6c700(&puStack_30);
  func_0x000104bd46a0();
  pcStack_38 = FUN_10bcfe728;
  func_0x000107c3a6d4();
  FUN_10bcfe750();
  return (undefined1 *)ppuVar3;
}



/* Entry: 10bcfe728; end: 10bcfe74f;  */

undefined8 FUN_10bcfe728(undefined8 param_1)

{
  func_0x000107c3a6d4();
  FUN_10bcfe750();
  return param_1;
}



/* Entry: 10bcfe750; end: 10bcfe763;  */

void FUN_10bcfe750(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bcfe764; end: 10bcfe793;  */

void FUN_10bcfe764(void)

{
  long extraout_x8;
  
  func_0x00010bd0afb0();
  if (extraout_x8 != 0) {
    func_0x00010bcfe5d0();
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bcfe794; end: 10bcfe7c3;  */

void FUN_10bcfe794(void)

{
  long extraout_x8;
  
  func_0x00010bd0afb0();
  if (extraout_x8 != 0) {
    FUN_10bcfe7c4();
    func_0x00010bd0a3fc();
  }
  return;
}



/* Entry: 10bcfe7c4; end: 10bcfe82b;  */

void FUN_10bcfe7c4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x20;
  }
  return;
}



/* Entry: 10bcfe82c; end: 10bcfe857;  */

void FUN_10bcfe82c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bcfe838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10bcfe858; end: 10bcfe86f;  */

void FUN_10bcfe858(void)

{
  FUN_10bcfe870();
  return;
}



/* Entry: 10bcfe870; end: 10bcfe89f;  */

void FUN_10bcfe870(undefined8 param_1)

{
  FUN_10bcfe8cc();
  func_0x00010bd0c160(param_1);
  return;
}



/* Entry: 10bcfe8a0; end: 10bcfe8cb;  */

undefined1  [16] FUN_10bcfe8a0(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    uVar1 = 0;
    param_2 = *(long *)(param_1 + 8);
    param_3 = (ulong)*(byte *)(param_2 + 10);
  }
  else {
    uVar1 = param_3 & 0xffffffff00000000;
  }
  auVar2._8_8_ = uVar1 | param_3 & 0xffffffff;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 10bcfe8cc; end: 10bcfe923;  */

undefined1  [16] FUN_10bcfe8cc(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  FUN_10bcfe924();
  FUN_10bcfe9b4();
  if ((param_1 == 0) ||
     (func_0x00010bcfe9e8(param_2,param_1 + (long)(int)uVar1 * 0x18 + 0x10),
     ((uint)param_2 >> 7 & 1) != 0)) {
    uVar1 = 0;
    param_1 = 0;
  }
  auVar2._8_8_ = uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10bcfe924; end: 10bcfe9b3;  */

undefined1  [16] FUN_10bcfe924(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  func_0x000107c3a6d8();
  while( true ) {
    uVar3 = 0;
    lVar1 = *param_1;
    uVar4 = (ulong)*(byte *)(lVar1 + 10);
    while (uVar2 = uVar4, uVar3 != uVar2) {
      uVar4 = uVar3 + uVar2 >> 1;
      param_1 = (long *)(lVar1 + 0x10 + uVar4 * 0x18);
      func_0x00010bcfe9e8(param_1,param_2);
      if ((char)param_1 < '\0') {
        uVar3 = uVar4 + 1;
        uVar4 = uVar2;
      }
    }
    if (*(char *)(lVar1 + 0xb) != '\0') break;
    func_0x00010bd0ba48();
    param_1 = param_1 + (uVar2 & 0xff);
  }
  auVar5._8_8_ = uVar2 & 0xffffffff;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Entry: 10bcfe9b4; end: 10bcfea1f;  */

undefined1  [16] FUN_10bcfe9b4(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  do {
    if ((uint)uVar1 != (uint)*(byte *)((long)param_1 + 10)) goto LAB_10bcfe9d8;
    uVar1 = (ulong)*(byte *)(param_1 + 1);
    param_1 = (long *)*param_1;
  } while (*(char *)((long)param_1 + 0xb) == '\0');
  param_1 = (long *)0x0;
LAB_10bcfe9d8:
  auVar2._8_8_ = param_2 & 0xffffffff00000000 | uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10bcfea20; end: 10bcfea47;  */

void FUN_10bcfea20(void)

{
  FUN_10bcfe924();
  FUN_10bcfe9b4();
  return;
}



/* Entry: 10bcfea48; end: 10bcfea87;  */

void FUN_10bcfea48(void)

{
  func_0x00010bd0b69c();
  return;
}



/* Entry: 10bcfea88; end: 10bcfeaa7;  */

void FUN_10bcfea88(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR_LOOP_110c8acd8;
  lVar2 = *param_1;
  func_0x0001053abb9c(&PTR_LOOP_110c8acd8);
  func_0x00010bd0b0a8((long)ppuVar1 + (ulong)*(uint *)(lVar2 + 8));
  return;
}



/* Entry: 10bcfeaa8; end: 10bcfeacf;  */

void FUN_10bcfeaa8(long param_1,undefined8 param_2,uint *param_3)

{
  func_0x0001053abb9c();
  func_0x00010bd0b0a8(param_1 + (ulong)*param_3);
  return;
}



/* Entry: 10bcfead0; end: 10bcfeaef;  */

void FUN_10bcfead0(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int extraout_w10;
  
  uVar1 = *param_1 == 0xdd;
  if ((bool)uVar1) {
    return;
  }
  func_0x00010bd0a230(param_1,1);
  iVar2 = (int)param_1;
  if ((((ulong)param_1 & 1) != 0) || (func_0x00010bd0ad50(), iVar2 == 0)) {
    (*(code *)*param_2)(*param_3);
    do {
      func_0x00010bd0b9c4();
    } while (extraout_w10 != 0);
    func_0x00010bd0a78c();
    if ((bool)uVar1) {
      func_0x00010bd0a914();
    }
  }
  return;
}



/* Entry: 10bcfeaf0; end: 10bcfeb17;  */

void FUN_10bcfeaf0(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010bd0a704();
  func_0x00010bcfec44();
  func_0x00010bd0ab30();
  func_0x000107c3a6a4();
  func_0x00010bd0a9fc();
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  func_0x00010bd0adb8(*param_2 >> 0xc ^ param_3 >> 7);
  while( true ) {
    func_0x00010bd0addc();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x00010bd0b4e0();
      lVar3 = uVar1 + (extraout_x8_00 & uVar2) * 0x20;
      func_0x00010bcfec1c(lVar3,unaff_x20);
      if ((int)lVar3 != 0) {
        lVar3 = *unaff_x19 + (extraout_x8_00 & uVar2);
        goto LAB_10bcfec00;
      }
      func_0x00010bd0c764();
    }
    func_0x00010bd0a514();
    if ((extraout_x8_01 & 1) != 0) break;
    func_0x00010bd0c74c();
  }
  lVar3 = 0;
LAB_10bcfec00:
  func_0x00010bd0ae04(lVar3);
  return;
}



/* Entry: 10bcfeb18; end: 10bcfeb7b;  */

void FUN_10bcfeb18(ulong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w10;
  
  func_0x00010bd0a230();
  iVar1 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x00010bd0ad50(), iVar1 == 0)) {
    (*(code *)*param_3)(*param_4);
    do {
      func_0x00010bd0b9c4();
    } while (extraout_w10 != 0);
    func_0x00010bd0a78c();
    if ((bool)in_ZR) {
      func_0x00010bd0a914();
    }
  }
  return;
}



/* Entry: 10bcfeb7c; end: 10bcfec1b;  */

void FUN_10bcfeb7c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  
  func_0x000107c3a6a4();
  func_0x00010bd0a9fc();
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  func_0x00010bd0adb8(*param_1 >> 0xc ^ param_3 >> 7);
  while( true ) {
    func_0x00010bd0addc();
    while ((extraout_x8 & 0x8080808080808080) != 0) {
      func_0x00010bd0b4e0();
      iVar3 = (int)uVar1 + (int)(extraout_x8_00 & uVar2) * 0x20;
      FUN_10bcfec1c();
      if (iVar3 != 0) {
        lVar4 = *unaff_x19 + (extraout_x8_00 & uVar2);
        goto LAB_10bcfec00;
      }
      func_0x00010bd0c764();
    }
    func_0x00010bd0a514();
    if ((extraout_x8_01 & 1) != 0) break;
    func_0x00010bd0c74c();
  }
  lVar4 = 0;
LAB_10bcfec00:
  func_0x00010bd0ae04(lVar4);
  return;
}



/* Entry: 10bcfec1c; end: 10bcfec4f;  */

bool FUN_10bcfec1c(long *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  long lStack_20;
  long lStack_18;
  
  if (*param_1 != *param_2) {
    return false;
  }
  lStack_20 = param_1[1];
  lStack_18 = param_1[2];
  iVar1 = (int)&lStack_20;
  if (lStack_18 == param_2[2]) {
    func_0x000100067218(&lStack_20,param_2[1],param_2[2]);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10bcfec50; end: 10bcfec73;  */

ulong FUN_10bcfec50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong extraout_x8;
  ulong extraout_x10;
  
  func_0x0001053abb9c();
  lVar1 = *(long *)(param_3 + 8);
  func_0x000100062d4c();
  func_0x000100061c28(param_1 + lVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10bcfec74; end: 10bcfed43;  */

undefined8 * FUN_10bcfec74(undefined8 *param_1,undefined8 *param_2)

{
  long extraout_x8;
  
  if (*(byte *)*param_2 - 1 < 8) {
    func_0x00010bd0afbc();
                    /* WARNING: Could not recover jumptable at 0x00010bcfecb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e607bdc)[extraout_x8] * 4 + 0x10bcfecb8))();
    return param_1;
  }
  func_0x00010bd0c61c();
  func_0x00010bd0aa88();
  func_0x00010bd0a1c8();
  FUN_10bdb2a88();
  func_0x00010bd0aa9c();
  if (param_2 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)*param_1;
    switch(*(undefined1 *)param_1) {
    case 1:
    case 2:
    case 4:
    case 7:
      goto code_r0x00010bcede80;
    case 3:
    case 5:
    case 8:
      param_1 = (undefined8 *)param_1[2];
code_r0x00010bcede80:
      return (undefined8 *)param_1[2];
    default:
      return (undefined8 *)0x0;
    case 9:
      return param_1;
    case 10:
      return (undefined8 *)param_1[1];
    }
  }
  return param_2;
}



/* Entry: 10bcfed44; end: 10bcfedff;  */

undefined1 * FUN_10bcfed44(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_1;
    switch(*puVar1) {
    case 1:
    case 2:
    case 4:
    case 7:
      goto code_r0x00010bcede80;
    case 3:
    case 5:
    case 8:
      puVar1 = *(undefined1 **)(puVar1 + 0x10);
code_r0x00010bcede80:
      return *(undefined1 **)(puVar1 + 0x10);
    default:
      return (undefined1 *)0x0;
    case 9:
      return puVar1;
    case 10:
      return *(undefined1 **)(puVar1 + 8);
    }
  }
  return param_2;
}



/* Entry: 10bcfee00; end: 10bcfee97;  */

undefined1  [16] FUN_10bcfee00(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  ulong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar13;
  byte bVar19;
  undefined1 auVar20 [16];
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  func_0x00010bd0a704();
  puVar2 = param_2;
  FUN_10bcfea48();
  func_0x00010bd0ab30();
  lVar5 = 0;
  uVar6 = *param_2;
  uVar8 = uVar6 >> 0xc ^ CONCAT44(uVar4,uVar3) >> 7;
  bVar7 = (byte)uVar3 & 0x7f;
  while( true ) {
    uVar8 = uVar8 & param_2[2];
    uVar13 = *(undefined8 *)(uVar6 + uVar8);
    bVar12 = (byte)((ulong)uVar13 >> 8);
    bVar14 = (byte)((ulong)uVar13 >> 0x10);
    bVar15 = (byte)((ulong)uVar13 >> 0x18);
    bVar16 = (byte)((ulong)uVar13 >> 0x20);
    bVar17 = (byte)((ulong)uVar13 >> 0x28);
    bVar18 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == bVar7),
                          CONCAT16(-(bVar18 == bVar7),
                                   CONCAT15(-(bVar17 == bVar7),
                                            CONCAT14(-(bVar16 == bVar7),
                                                     CONCAT13(-(bVar15 == bVar7),
                                                              CONCAT12(-(bVar14 == bVar7),
                                                                       CONCAT11(-(bVar12 == bVar7),
                                                                                -((byte)uVar13 ==
                                                                                 bVar7)))))))) &
                 0x8080808080808080; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar8 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & param_2[2];
      lVar11 = *(long *)(param_2[1] + uVar10 * 8);
      if (*(ulong *)(lVar11 + 0x10) == *puVar2 && *(int *)(lVar11 + 4) == (int)puVar2[1]) {
        auVar20._8_8_ = param_2[1] + uVar10 * 8;
        auVar20._0_8_ = uVar6 + uVar10;
        return auVar20;
      }
    }
    bVar12 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar18 == 0x80),
                                          CONCAT15(-(bVar17 == 0x80),
                                                   CONCAT14(-(bVar16 == 0x80),
                                                            CONCAT13(-(bVar15 == 0x80),
                                                                     CONCAT12(-(bVar14 == 0x80),
                                                                              CONCAT11(-(bVar12 ==
                                                                                        0x80),-((
                                                  byte)uVar13 == 0x80)))))))),1);
    if ((bVar12 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar8 = lVar5 + uVar8;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = puVar2;
  return auVar1 << 0x40;
}



/* Entry: 10bcfee98; end: 10bcfeebb;  */

void FUN_10bcfee98(void)

{
  func_0x000107c3a6ac();
  func_0x000107c2b9fc();
  return;
}



/* Entry: 10bcfeebc; end: 10bcfeeff;  */

undefined8 * FUN_10bcfeebc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_10bcfef00();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10bcfef00; end: 10bcfefcf;  */

long * FUN_10bcfef00(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x9;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  func_0x00010bd0c370();
  plVar3 = (long *)*param_1;
  lVar7 = param_1[1] - (long)plVar3;
  uVar1 = (lVar7 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    plStack_58 = param_1 + 2;
    lVar8 = *plStack_58;
    uVar5 = lVar8 - (long)plVar3;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_10bcfefcc;
      lVar4 = uVar6 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar4 + lVar7);
    *puVar2 = *param_2;
    _memcpy(puVar2 + -(lVar7 >> 3),plVar3,lVar7);
    *param_1 = (long)(puVar2 + -(lVar7 >> 3));
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = lVar4 + uVar6 * 8;
    plStack_78 = plVar3;
    plStack_70 = plVar3;
    plStack_68 = plVar3;
    lStack_60 = lVar8;
    FUN_10bcfefdc(&plStack_78);
    return puVar2 + 1;
  }
  FUN_10bcfefd0();
LAB_10bcfefcc:
  func_0x000104bd35f4();
  func_0x00010bd0a5f0();
  func_0x00010bd0c788();
  lVar7 = extraout_x9;
  while (lVar7 != extraout_x8) {
    lVar7 = lVar7 + -8;
    plVar3[2] = lVar7;
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10bcfefd0; end: 10bcfefdb;  */

void FUN_10bcfefd0(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010bd0a5f0();
  func_0x00010bd0c788();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10bcfefdc; end: 10bcff053;  */

void FUN_10bcfefdc(void)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x00010bd0c788();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10bcff054; end: 10bcff077;  */

ulong * FUN_10bcff054(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  uStack_28 = *(ulong *)(param_1 + 8);
  if ((uStack_28 & 1) != 0) {
    uStack_28 = *(ulong *)(uStack_28 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 0x28);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uStack_28 == 0) {
      puVar2 = puVar1;
      func_0x000100063c9c();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      func_0x00010006903c();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}


