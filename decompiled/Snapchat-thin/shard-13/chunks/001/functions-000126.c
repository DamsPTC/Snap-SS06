/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1aa784; end: 10a1aa787;  */

undefined8 * FUN_10a1aa784(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bab4a0;
  FUN_10a1aa72c();
  lVar2 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110bab6e0;
  plVar1 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1aa788; end: 10a1aa79b;  */

void FUN_10a1aa788(void)

{
  FUN_10a1aa6e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1aa79c; end: 10a1aa817;  */

void FUN_10a1aa79c(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  long *aplStack_c8 [2];
  char cStack_b1;
  char cStack_9b;
  long *plStack_98;
  undefined1 uStack_89;
  long **pplStack_88;
  
  lVar15 = *(long *)(param_1 + 0x100);
  lVar13 = *(long *)(lVar15 + 0x50);
  if (lVar13 == 0) {
    lVar13 = *(long *)(lVar15 + 0x60);
    uVar18 = *(long *)(lVar15 + 0x68) - lVar13;
  }
  else {
    uVar18 = *(ulong *)(lVar15 + 0x58);
  }
  plVar19 = *(long **)(lVar15 + 0xa0);
  if ((ulong)(plVar19[3] + param_3) <= uVar18) {
    _memcpy(param_2,lVar13 + plVar19[3],param_3);
    plVar19[3] = plVar19[3] + param_3;
    return;
  }
  lVar13 = *plVar19;
  puVar10 = (undefined4 *)&UNK_10f5a12e6;
  func_0x000109b6244c();
  plVar19 = *(long **)(lVar13 + 0xa0);
  if (*plVar19 != 0) {
    func_0x000109b65758(plVar19,plVar19 + 1,plVar19 + 2);
    puVar14 = *(undefined8 **)(lVar13 + 0xa0);
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
  }
  puVar14 = (undefined8 *)&UNK_10f47cea1;
  func_0x000109b6474c(&UNK_10f47cea1,0,FUN_10a1aae7c,FUN_10a1aaef4,0,0,0);
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  if ((code *)puVar14[0x7d] == (code *)0x0) {
    puVar7 = (undefined8 *)0x168;
    _malloc();
  }
  else {
    puVar7 = puVar14;
    (*(code *)puVar14[0x7d])(puVar14,0x168);
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0x2c] = 0;
    puVar7[0x29] = 0;
    puVar7[0x28] = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2a] = 0;
    puVar7[0x25] = 0;
    puVar7[0x24] = 0;
    puVar7[0x27] = 0;
    puVar7[0x26] = 0;
    puVar7[0x21] = 0;
    puVar7[0x20] = 0;
    puVar7[0x23] = 0;
    puVar7[0x22] = 0;
    puVar7[0x1d] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x1f] = 0;
    puVar7[0x1e] = 0;
    puVar7[0x19] = 0;
    puVar7[0x18] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x15] = 0;
    puVar7[0x14] = 0;
    puVar7[0x17] = 0;
    puVar7[0x16] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
  }
  if ((code *)puVar14[0x7d] == (code *)0x0) {
    puVar17 = (undefined8 *)0x168;
    _malloc();
  }
  else {
    puVar17 = puVar14;
    (*(code *)puVar14[0x7d])(puVar14,0x168);
  }
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = *(undefined8 **)(lVar13 + 0xa0);
    *puVar17 = puVar14;
    puVar17[1] = puVar7;
    puVar17[2] = 0;
    puVar17[3] = 0;
LAB_10a1aaa64:
    FUN_10a1aa72c(lVar13);
    return;
  }
  puVar17[0x2c] = 0;
  puVar17[0x29] = 0;
  puVar17[0x28] = 0;
  puVar17[0x2b] = 0;
  puVar17[0x2a] = 0;
  puVar17[0x25] = 0;
  puVar17[0x24] = 0;
  puVar17[0x27] = 0;
  puVar17[0x26] = 0;
  puVar17[0x21] = 0;
  puVar17[0x20] = 0;
  puVar17[0x23] = 0;
  puVar17[0x22] = 0;
  puVar17[0x1d] = 0;
  puVar17[0x1c] = 0;
  puVar17[0x1f] = 0;
  puVar17[0x1e] = 0;
  puVar17[0x19] = 0;
  puVar17[0x18] = 0;
  puVar17[0x1b] = 0;
  puVar17[0x1a] = 0;
  puVar17[0x15] = 0;
  puVar17[0x14] = 0;
  puVar17[0x17] = 0;
  puVar17[0x16] = 0;
  puVar17[0x11] = 0;
  puVar17[0x10] = 0;
  puVar17[0x13] = 0;
  puVar17[0x12] = 0;
  puVar17[0xd] = 0;
  puVar17[0xc] = 0;
  puVar17[0xf] = 0;
  puVar17[0xe] = 0;
  puVar17[9] = 0;
  puVar17[8] = 0;
  puVar17[0xb] = 0;
  puVar17[10] = 0;
  puVar17[5] = 0;
  puVar17[4] = 0;
  puVar17[7] = 0;
  puVar17[6] = 0;
  puVar17[1] = 0;
  *puVar17 = 0;
  puVar17[3] = 0;
  puVar17[2] = 0;
  puVar16 = *(undefined8 **)(lVar13 + 0xa0);
  *puVar16 = puVar14;
  puVar16[1] = puVar7;
  puVar16[2] = puVar17;
  puVar16[3] = 0;
  if (puVar7 == (undefined8 *)0x0) goto LAB_10a1aaa64;
  plStack_98 = (long *)0x0;
  puVar17 = puVar14;
  func_0x000109b62cf4(puVar14,PTR__longjmp_11034c548,0xc0);
  iVar6 = (int)puVar17;
  _setjmp();
  if (iVar6 == 0) {
    if ((*(long *)(lVar13 + 0x58) == 0) && (*(long *)(lVar13 + 0x68) == *(long *)(lVar13 + 0x60))) {
      if (*(long **)(lVar13 + 0x90) == (long *)0x0) {
        plVar19 = (long *)(lVar13 + 0x78);
        if (*(char *)(lVar13 + 0x8f) < '\0') {
          if (*(long *)(lVar13 + 0x80) != 0) {
            plVar9 = (long *)*plVar19;
            goto LAB_10a1aad74;
          }
        }
        else {
          plVar9 = plVar19;
          if (*(char *)(lVar13 + 0x8f) != '\0') {
LAB_10a1aad74:
            FUN_10ad040c0(aplStack_c8,plVar9,&UNK_10f432965);
            plStack_98 = aplStack_c8[0];
            if (aplStack_c8[0] == (long *)0x0) {
              FUN_10a0ee900(aplStack_c8,&UNK_10f641cb9,0x26);
              func_0x000109b6244c();
              plVar19 = plStack_98;
              if (plStack_98 != (long *)0x0) {
                plVar9 = (long *)*plStack_98;
                *plStack_98 = 0;
                if (plVar9 != (long *)0x0) {
                  (**(code **)(*plVar9 + 0x40))();
                }
                __ZdlPv(plVar19);
              }
              __Unwind_Resume(puVar14);
              if ((bRam000000011330a9e8 & 1) != 0) {
                func_0x00010ae06f08(0,1,&UNK_10f641cea,&UNK_10f642166,0x12,&UNK_10f6421be);
              }
              func_0x000109b62cf4(puVar14,PTR__longjmp_11034c548,0xc0);
              _longjmp();
              if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                func_0x00010ae06f08(1,2,&UNK_10f641cea,&UNK_10f6421e1,0x18,&UNK_10f64223b);
              }
              return;
            }
            FUN_10a1a7c9c(aplStack_c8,&plStack_98,plVar19);
            plVar19 = *(long **)(lVar13 + 0x90);
            *(long **)(lVar13 + 0x90) = aplStack_c8[0];
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 8))();
            }
          }
        }
      }
      else {
        (**(code **)(**(long **)(lVar13 + 0x90) + 0x28))();
      }
      lVar15 = *(long *)(lVar13 + 0x90);
      if (lVar15 == 0) goto LAB_10a1aac84;
      pcVar5 = FUN_10a1aaf54;
    }
    else {
      pcVar5 = FUN_10a1aa79c;
      lVar15 = lVar13;
    }
    puVar14[0x1f] = pcVar5;
    puVar14[0x20] = lVar15;
    if (puVar14[0x1e] != 0) {
      puVar14[0x1e] = 0;
      func_0x000109b62608(puVar14,&UNK_10f59faa1);
    }
    puVar14[0x51] = 0;
    func_0x000109b647bc(puVar14,puVar7);
    uVar12 = *(undefined4 *)puVar7;
    uVar1 = *(undefined4 *)((long)puVar7 + 4);
    bVar3 = *(byte *)((long)puVar7 + 0x24);
    bVar4 = *(byte *)((long)puVar7 + 0x25);
    func_0x000109b61198(puVar14,uVar12,uVar1,bVar3,bVar4,*(undefined1 *)(puVar7 + 5),
                        *(undefined1 *)((long)puVar7 + 0x26),*(undefined1 *)((long)puVar7 + 0x27));
    if (8 < bVar3 && bVar3 != 0x10) {
      iVar6 = 7;
    }
    else {
      uVar20 = (uint)bVar4;
      if (bVar4 < 4) {
        if (bVar4 == 2) {
          if ((bVar3 == 0x10) && ((*(byte *)(lVar13 + 0x9a) & 1) != 0)) {
LAB_10a1aaad0:
            iVar6 = 1;
            goto LAB_10a1aaadc;
          }
        }
        else {
          if (bVar4 != 3) goto LAB_10a1aaa90;
          if (((*(byte *)(puVar7 + 1) >> 4 & 1) != 0) && (*(short *)((long)puVar7 + 0x22) != 0))
          goto LAB_10a1aaad0;
        }
        iVar6 = 3;
      }
      else {
        iVar6 = 1;
        if ((uVar20 != 4) && (uVar20 != 6)) {
LAB_10a1aaa90:
          iVar6 = 7;
        }
      }
LAB_10a1aaadc:
      *puVar10 = uVar12;
      puVar10[1] = uVar1;
      puVar10[6] = 1;
      bVar4 = *(byte *)(puVar10 + 8);
      if ((*(byte *)(lVar13 + 0x98) & 1) == 0) {
        iVar11 = iVar6;
        if (2 < bVar4) goto LAB_10a1aadc0;
      }
      else {
        if (2 < bVar4) goto LAB_10a1aadc0;
        iVar11 = 3;
      }
      (*(code *)(&PTR_FUN_110ba20e8)[bVar4])(puVar10 + 7);
      puVar10[7] = iVar11;
      *(undefined1 *)(puVar10 + 8) = 0;
      lVar15 = *(long *)(lVar13 + 0xa0);
      *(uint *)(lVar15 + 0x20) = (uint)bVar3;
      *(uint *)(lVar15 + 0x24) = uVar20;
      uVar18 = (ulong)*(uint *)((long)puVar7 + 0x94);
      if (0 < (int)*(uint *)((long)puVar7 + 0x94)) {
        puVar14 = (undefined8 *)(puVar7[0x14] + 0x10);
        do {
          uVar2 = *puVar14;
          func_0x000107c2b054(aplStack_c8,puVar14[-1]);
          puVar8 = puVar10 + 10;
          pplStack_88 = aplStack_c8;
          func_0x000104c5bc74(puVar8,aplStack_c8,&UNK_10dd5b8f9,&pplStack_88,&uStack_89);
          func_0x000107c2c4dc(puVar8 + 10,uVar2);
          if (cStack_b1 < '\0') {
            __ZdlPv(aplStack_c8[0]);
          }
          puVar14 = puVar14 + 7;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    func_0x000107c2b054(aplStack_c8,&UNK_10f641ce0);
    puVar8 = puVar10 + 10;
    func_0x000104c5e210(puVar8,aplStack_c8);
    if (cStack_b1 < '\0') {
      __ZdlPv(aplStack_c8[0]);
    }
    if (bVar3 == 0x10 && puVar8 != (undefined4 *)0x0) {
      if (iVar6 == 1) {
        if ((*(byte *)(lVar13 + 0x9a) & 1) == 0) {
          bVar4 = *(byte *)(puVar10 + 8);
          if (2 < bVar4) goto LAB_10a1aadc0;
          uVar12 = 0xb;
          goto LAB_10a1aac50;
        }
      }
      else if (iVar6 == 7) {
        bVar4 = *(byte *)(puVar10 + 8);
        if (2 < bVar4) {
LAB_10a1aadc0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1aadc4);
          (*pcVar5)();
        }
        uVar12 = 0xf;
LAB_10a1aac50:
        (*(code *)(&PTR_FUN_110ba20e8)[bVar4])(puVar10 + 7);
        puVar10[7] = uVar12;
        *(undefined1 *)(puVar10 + 8) = 0;
      }
    }
    if ((((*(byte *)((long)puVar7 + 10) & 1) != 0) && (puVar7[0x1e] != 0)) &&
       (*(int *)((long)puVar7 + 0xec) != 0)) {
      FUN_10a1a4b00(aplStack_c8,puVar7[0x1e],*(int *)((long)puVar7 + 0xec),1);
      if (cStack_9b == '\x01') {
        uVar12 = SUB84(aplStack_c8,0);
        FUN_10a1a4c90();
        puVar10[9] = uVar12;
      }
      else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&UNK_10f641cea,&UNK_10f641d15,0xdf,&UNK_10f641d54);
      }
    }
    if (8 >= bVar3 || bVar3 == 0x10) goto LAB_10a1aac90;
  }
LAB_10a1aac84:
  FUN_10a1aa72c(lVar13);
LAB_10a1aac90:
  plVar19 = plStack_98;
  if (plStack_98 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)*plStack_98;
  *plStack_98 = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x40))();
  }
  __ZdlPv(plVar19);
  return;
}



/* Entry: 10a1aa818; end: 10a1aae7b;  */

void FUN_10a1aa818(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  long *aplStack_a8 [2];
  char cStack_91;
  char cStack_7b;
  long *plStack_78;
  undefined1 uStack_69;
  long **pplStack_68;
  
  plVar10 = *(long **)(param_1 + 0xa0);
  if (*plVar10 != 0) {
    func_0x000109b65758(plVar10,plVar10 + 1,plVar10 + 2);
    puVar15 = *(undefined8 **)(param_1 + 0xa0);
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
  }
  puVar15 = (undefined8 *)&UNK_10f47cea1;
  func_0x000109b6474c(&UNK_10f47cea1,0,FUN_10a1aae7c,FUN_10a1aaef4,0,0,0);
  if (puVar15 == (undefined8 *)0x0) {
    return;
  }
  if ((code *)puVar15[0x7d] == (code *)0x0) {
    puVar7 = (undefined8 *)0x168;
    _malloc();
  }
  else {
    puVar7 = puVar15;
    (*(code *)puVar15[0x7d])(puVar15,0x168);
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0x2c] = 0;
    puVar7[0x29] = 0;
    puVar7[0x28] = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2a] = 0;
    puVar7[0x25] = 0;
    puVar7[0x24] = 0;
    puVar7[0x27] = 0;
    puVar7[0x26] = 0;
    puVar7[0x21] = 0;
    puVar7[0x20] = 0;
    puVar7[0x23] = 0;
    puVar7[0x22] = 0;
    puVar7[0x1d] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x1f] = 0;
    puVar7[0x1e] = 0;
    puVar7[0x19] = 0;
    puVar7[0x18] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x15] = 0;
    puVar7[0x14] = 0;
    puVar7[0x17] = 0;
    puVar7[0x16] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
  }
  if ((code *)puVar15[0x7d] == (code *)0x0) {
    puVar17 = (undefined8 *)0x168;
    _malloc();
  }
  else {
    puVar17 = puVar15;
    (*(code *)puVar15[0x7d])(puVar15,0x168);
  }
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = *(undefined8 **)(param_1 + 0xa0);
    *puVar17 = puVar15;
    puVar17[1] = puVar7;
    puVar17[2] = 0;
    puVar17[3] = 0;
LAB_10a1aaa64:
    FUN_10a1aa72c(param_1);
    return;
  }
  puVar17[0x2c] = 0;
  puVar17[0x29] = 0;
  puVar17[0x28] = 0;
  puVar17[0x2b] = 0;
  puVar17[0x2a] = 0;
  puVar17[0x25] = 0;
  puVar17[0x24] = 0;
  puVar17[0x27] = 0;
  puVar17[0x26] = 0;
  puVar17[0x21] = 0;
  puVar17[0x20] = 0;
  puVar17[0x23] = 0;
  puVar17[0x22] = 0;
  puVar17[0x1d] = 0;
  puVar17[0x1c] = 0;
  puVar17[0x1f] = 0;
  puVar17[0x1e] = 0;
  puVar17[0x19] = 0;
  puVar17[0x18] = 0;
  puVar17[0x1b] = 0;
  puVar17[0x1a] = 0;
  puVar17[0x15] = 0;
  puVar17[0x14] = 0;
  puVar17[0x17] = 0;
  puVar17[0x16] = 0;
  puVar17[0x11] = 0;
  puVar17[0x10] = 0;
  puVar17[0x13] = 0;
  puVar17[0x12] = 0;
  puVar17[0xd] = 0;
  puVar17[0xc] = 0;
  puVar17[0xf] = 0;
  puVar17[0xe] = 0;
  puVar17[9] = 0;
  puVar17[8] = 0;
  puVar17[0xb] = 0;
  puVar17[10] = 0;
  puVar17[5] = 0;
  puVar17[4] = 0;
  puVar17[7] = 0;
  puVar17[6] = 0;
  puVar17[1] = 0;
  *puVar17 = 0;
  puVar17[3] = 0;
  puVar17[2] = 0;
  puVar16 = *(undefined8 **)(param_1 + 0xa0);
  *puVar16 = puVar15;
  puVar16[1] = puVar7;
  puVar16[2] = puVar17;
  puVar16[3] = 0;
  if (puVar7 == (undefined8 *)0x0) goto LAB_10a1aaa64;
  plStack_78 = (long *)0x0;
  puVar17 = puVar15;
  func_0x000109b62cf4(puVar15,PTR__longjmp_11034c548,0xc0);
  iVar6 = (int)puVar17;
  _setjmp();
  if (iVar6 == 0) {
    if ((*(long *)(param_1 + 0x58) == 0) && (*(long *)(param_1 + 0x68) == *(long *)(param_1 + 0x60))
       ) {
      if (*(long **)(param_1 + 0x90) == (long *)0x0) {
        plVar10 = (long *)(param_1 + 0x78);
        if (*(char *)(param_1 + 0x8f) < '\0') {
          if (*(long *)(param_1 + 0x80) != 0) {
            plVar9 = (long *)*plVar10;
            goto LAB_10a1aad74;
          }
        }
        else {
          plVar9 = plVar10;
          if (*(char *)(param_1 + 0x8f) != '\0') {
LAB_10a1aad74:
            FUN_10ad040c0(aplStack_a8,plVar9,&UNK_10f432965);
            plStack_78 = aplStack_a8[0];
            if (aplStack_a8[0] == (long *)0x0) {
              FUN_10a0ee900(aplStack_a8,&UNK_10f641cb9,0x26);
              func_0x000109b6244c();
              plVar10 = plStack_78;
              if (plStack_78 != (long *)0x0) {
                plVar9 = (long *)*plStack_78;
                *plStack_78 = 0;
                if (plVar9 != (long *)0x0) {
                  (**(code **)(*plVar9 + 0x40))();
                }
                __ZdlPv(plVar10);
              }
              __Unwind_Resume(puVar15);
              if ((bRam000000011330a9e8 & 1) != 0) {
                func_0x00010ae06f08(0,1,&UNK_10f641cea,&UNK_10f642166,0x12,&UNK_10f6421be);
              }
              func_0x000109b62cf4(puVar15,PTR__longjmp_11034c548,0xc0);
              _longjmp();
              if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                func_0x00010ae06f08(1,2,&UNK_10f641cea,&UNK_10f6421e1,0x18,&UNK_10f64223b);
              }
              return;
            }
            FUN_10a1a7c9c(aplStack_a8,&plStack_78,plVar10);
            plVar10 = *(long **)(param_1 + 0x90);
            *(long **)(param_1 + 0x90) = aplStack_a8[0];
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x90) + 0x28))();
      }
      lVar11 = *(long *)(param_1 + 0x90);
      if (lVar11 == 0) goto LAB_10a1aac84;
      pcVar5 = FUN_10a1aaf54;
    }
    else {
      pcVar5 = FUN_10a1aa79c;
      lVar11 = param_1;
    }
    puVar15[0x1f] = pcVar5;
    puVar15[0x20] = lVar11;
    if (puVar15[0x1e] != 0) {
      puVar15[0x1e] = 0;
      func_0x000109b62608(puVar15,&UNK_10f59faa1);
    }
    puVar15[0x51] = 0;
    func_0x000109b647bc(puVar15,puVar7);
    uVar14 = *(undefined4 *)puVar7;
    uVar1 = *(undefined4 *)((long)puVar7 + 4);
    bVar3 = *(byte *)((long)puVar7 + 0x24);
    bVar4 = *(byte *)((long)puVar7 + 0x25);
    func_0x000109b61198(puVar15,uVar14,uVar1,bVar3,bVar4,*(undefined1 *)(puVar7 + 5),
                        *(undefined1 *)((long)puVar7 + 0x26),*(undefined1 *)((long)puVar7 + 0x27));
    if (8 < bVar3 && bVar3 != 0x10) {
      iVar6 = 7;
    }
    else {
      uVar18 = (uint)bVar4;
      if (bVar4 < 4) {
        if (bVar4 == 2) {
          if ((bVar3 == 0x10) && ((*(byte *)(param_1 + 0x9a) & 1) != 0)) {
LAB_10a1aaad0:
            iVar6 = 1;
            goto LAB_10a1aaadc;
          }
        }
        else {
          if (bVar4 != 3) goto LAB_10a1aaa90;
          if (((*(byte *)(puVar7 + 1) >> 4 & 1) != 0) && (*(short *)((long)puVar7 + 0x22) != 0))
          goto LAB_10a1aaad0;
        }
        iVar6 = 3;
      }
      else {
        iVar6 = 1;
        if ((uVar18 != 4) && (uVar18 != 6)) {
LAB_10a1aaa90:
          iVar6 = 7;
        }
      }
LAB_10a1aaadc:
      *param_2 = uVar14;
      param_2[1] = uVar1;
      param_2[6] = 1;
      bVar4 = *(byte *)(param_2 + 8);
      if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
        iVar13 = iVar6;
        if (2 < bVar4) goto LAB_10a1aadc0;
      }
      else {
        if (2 < bVar4) goto LAB_10a1aadc0;
        iVar13 = 3;
      }
      (*(code *)(&PTR_FUN_110ba20e8)[bVar4])(param_2 + 7);
      param_2[7] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      lVar11 = *(long *)(param_1 + 0xa0);
      *(uint *)(lVar11 + 0x20) = (uint)bVar3;
      *(uint *)(lVar11 + 0x24) = uVar18;
      uVar12 = (ulong)*(uint *)((long)puVar7 + 0x94);
      if (0 < (int)*(uint *)((long)puVar7 + 0x94)) {
        puVar15 = (undefined8 *)(puVar7[0x14] + 0x10);
        do {
          uVar2 = *puVar15;
          func_0x000107c2b054(aplStack_a8,puVar15[-1]);
          puVar8 = param_2 + 10;
          pplStack_68 = aplStack_a8;
          func_0x000104c5bc74(puVar8,aplStack_a8,&UNK_10dd5b8f9,&pplStack_68,&uStack_69);
          func_0x000107c2c4dc(puVar8 + 10,uVar2);
          if (cStack_91 < '\0') {
            __ZdlPv(aplStack_a8[0]);
          }
          puVar15 = puVar15 + 7;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    func_0x000107c2b054(aplStack_a8,&UNK_10f641ce0);
    puVar8 = param_2 + 10;
    func_0x000104c5e210(puVar8,aplStack_a8);
    if (cStack_91 < '\0') {
      __ZdlPv(aplStack_a8[0]);
    }
    if (bVar3 == 0x10 && puVar8 != (undefined4 *)0x0) {
      if (iVar6 == 1) {
        if ((*(byte *)(param_1 + 0x9a) & 1) == 0) {
          bVar4 = *(byte *)(param_2 + 8);
          if (2 < bVar4) goto LAB_10a1aadc0;
          uVar14 = 0xb;
          goto LAB_10a1aac50;
        }
      }
      else if (iVar6 == 7) {
        bVar4 = *(byte *)(param_2 + 8);
        if (2 < bVar4) {
LAB_10a1aadc0:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1aadc4);
          (*pcVar5)();
        }
        uVar14 = 0xf;
LAB_10a1aac50:
        (*(code *)(&PTR_FUN_110ba20e8)[bVar4])(param_2 + 7);
        param_2[7] = uVar14;
        *(undefined1 *)(param_2 + 8) = 0;
      }
    }
    if ((((*(byte *)((long)puVar7 + 10) & 1) != 0) && (puVar7[0x1e] != 0)) &&
       (*(int *)((long)puVar7 + 0xec) != 0)) {
      FUN_10a1a4b00(aplStack_a8,puVar7[0x1e],*(int *)((long)puVar7 + 0xec),1);
      if (cStack_7b == '\x01') {
        uVar14 = SUB84(aplStack_a8,0);
        FUN_10a1a4c90();
        param_2[9] = uVar14;
      }
      else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&UNK_10f641cea,&UNK_10f641d15,0xdf,&UNK_10f641d54);
      }
    }
    if (8 >= bVar3 || bVar3 == 0x10) goto LAB_10a1aac90;
  }
LAB_10a1aac84:
  FUN_10a1aa72c(param_1);
LAB_10a1aac90:
  plVar10 = plStack_78;
  if (plStack_78 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)*plStack_78;
  *plStack_78 = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x40))();
  }
  __ZdlPv(plVar10);
  return;
}



/* Entry: 10a1aae7c; end: 10a1aaef3;  */

void FUN_10a1aae7c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  
  if ((bRam000000011330a9e8 & 1) != 0) {
    puVar2 = &UNK_10f6421cf;
    if (param_2 != (undefined *)0x0) {
      puVar2 = param_2;
    }
    func_0x00010ae06f08(0,1,&UNK_10f641cea,&UNK_10f642166,0x12,&UNK_10f6421be,in_x6,in_x7,puVar2);
  }
  func_0x000109b62cf4(param_1,PTR__longjmp_11034c548,0xc0);
  puVar2 = (undefined *)0x1;
  _longjmp();
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    puVar1 = &UNK_10f64224e;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    func_0x00010ae06f08(1,2,&UNK_10f641cea,&UNK_10f6421e1,0x18,&UNK_10f64223b,in_x6,in_x7,puVar1);
  }
  return;
}



/* Entry: 10a1aaef4; end: 10a1aaf53;  */

void FUN_10a1aaef4(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    puVar1 = &UNK_10f64224e;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    func_0x00010ae06f08(1,2,&UNK_10f641cea,&UNK_10f6421e1,0x18,&UNK_10f64223b,in_x6,in_x7,puVar1);
  }
  return;
}



/* Entry: 10a1aaf54; end: 10a1aaf9b;  */

long * FUN_10a1aaf54(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  plVar10 = *(long **)(param_1 + 0x100);
  (**(code **)(*plVar10 + 0x30))();
  if (param_3 <= plVar10) {
    return plVar10;
  }
  plVar10 = (long *)&UNK_10f5a12e6;
  func_0x000109b6244c();
  lVar22 = *plVar10;
  uVar2 = *(uint *)(lVar22 + 0x10);
  uVar3 = *(uint *)(lVar22 + 0x14);
  uVar4 = (ulong)uVar3;
  plVar10 = *(long **)(param_1 + 0xa0);
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  lVar11 = *plVar10;
  if (lVar11 == 0) {
    return (long *)0x0;
  }
  if ((plVar10[1] != 0) && ((plVar10[2] != 0 && uVar2 != 0) && uVar3 != 0)) {
    func_0x000109b62cf4(lVar11,PTR__longjmp_11034c548,0xc0);
    iVar9 = (int)lVar11;
    _setjmp();
    if (iVar9 == 0) {
      lVar11 = *plVar10;
      if (lVar11 != 0) {
        *(uint *)(lVar11 + 0x128) = *(uint *)(lVar11 + 0x128) & 0xfffff0ff | 0x200;
      }
      iVar9 = 0;
      if (((*(byte *)(param_1 + 0x9a) & 1) == 0) && ((*(uint *)(lVar22 + 0x24) | 4) != 0xf)) {
        iVar9 = (int)*plVar10;
        func_0x000109b659f4();
      }
      FUN_10a1a4c34();
      if (((iVar9 != 0) && (lVar11 = *plVar10, lVar11 != 0)) &&
         (*(char *)(lVar11 + 0x260) == '\x10')) {
        *(uint *)(lVar11 + 300) = *(uint *)(lVar11 + 300) | 0x10;
      }
      if ((0xb < *(uint *)(lVar22 + 0x24)) ||
         ((1 << (ulong)(*(uint *)(lVar22 + 0x24) & 0x1f) & 0x823U) == 0)) {
        func_0x000109b65a24(*plVar10);
      }
      lVar11 = *(long *)(param_1 + 0xa0);
      uVar17 = *(uint *)(lVar11 + 0x24);
      if (uVar17 == 3) {
        func_0x000109b65a54(*plVar10);
        lVar11 = *(long *)(param_1 + 0xa0);
        uVar17 = *(uint *)(lVar11 + 0x24);
      }
      if (((uVar17 & 0xfffffffb) == 0) && (*(int *)(lVar11 + 0x20) < 8)) {
        func_0x000109b65a8c(*plVar10);
      }
      if (((*plVar10 != 0) && (plVar10[1] != 0)) && ((*(byte *)(plVar10[1] + 8) >> 4 & 1) != 0)) {
        func_0x000109b65abc();
      }
      if (((*(byte *)(param_1 + 0x98) & 1) != 0) ||
         (*(int *)(*(long *)(param_1 + 0xa0) + 0x24) == 4)) {
        func_0x000109b65af4(*plVar10);
      }
      lVar11 = *plVar10;
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else if (*(char *)(lVar11 + 0x25c) != '\0') {
        *(uint *)(lVar11 + 300) = *(uint *)(lVar11 + 300) | 2;
        lVar11 = *plVar10;
      }
      func_0x000109b64cc8(lVar11,plVar10[1]);
      iVar9 = uVar3 - 1;
      bVar8 = *(char *)(param_1 + 0x99) == '\0';
      if (bVar8) {
        iVar9 = 0;
      }
      iVar1 = 1;
      if (!bVar8) {
        iVar1 = -1;
      }
      if (((*plVar10 == 0) || (plVar10[1] == 0)) ||
         (*(ulong *)(plVar10[1] + 0x10) <= *(ulong *)(lVar22 + 0x18))) {
        if (*(char *)(param_1 + 0x9a) == '\x01') {
          if ((*(int *)(*(long *)(param_1 + 0xa0) + 0x20) != 0x10) ||
             (uVar17 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x24), (uVar17 | 4) != 6))
          goto LAB_10a1ab028;
          uVar16 = 3;
          if (uVar17 != 2) {
            uVar16 = 4;
          }
          func_0x000108262984(&lStack_98,(long)(int)(uVar3 * uVar2 * uVar16));
          func_0x000109ac9e9c(&lStack_b0,(long)(int)uVar3);
          uVar21 = (ulong)uVar16;
          if (0 < (int)uVar3) {
            iVar9 = uVar16 * iVar9 * uVar2;
            uVar18 = 0;
            do {
              if (((ulong)(lStack_90 - lStack_98 >> 1) <= (ulong)(long)iVar9) ||
                 ((ulong)(lStack_a8 - lStack_b0 >> 3) <= uVar18)) {
LAB_10a1ab508:
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1ab50c);
                (*pcVar7)();
              }
              *(long *)(lStack_b0 + uVar18 * 8) = lStack_98 + (long)iVar9 * 2;
              uVar18 = uVar18 + 1;
              iVar9 = iVar9 + uVar16 * iVar1 * uVar2;
            } while (uVar4 != uVar18);
          }
          lVar11 = *plVar10;
          auVar23 = NEON_ext(*(undefined1 (*) [16])(lVar11 + 0xf8),
                             *(undefined1 (*) [16])(lVar11 + 0xf8),8,1);
          uStack_d8 = *(undefined8 *)(lVar11 + 0xe0);
          uStack_e0 = *(undefined8 *)(lVar11 + 0xd8);
          uStack_e8 = auVar23._8_8_;
          uStack_f0 = auVar23._0_8_;
          uStack_d0 = *(undefined8 *)(lVar11 + 0x3c0);
          uStack_c8 = *(undefined4 *)(lVar11 + 0x3bc);
          uStack_c0 = *(undefined8 *)(lVar11 + 0x3d8);
          uStack_b8 = 1;
          func_0x000109b65140(lVar11,lStack_b0);
          FUN_10a1b1e14(&uStack_f0,*plVar10);
          func_0x000109b6522c(*plVar10,plVar10[2]);
          if (0 < (int)uVar3) {
            puVar19 = (undefined1 *)(*(long *)(lVar22 + 0x28) + 3);
            lVar11 = 2;
            uVar18 = 0;
            uVar20 = 0;
            do {
              uVar12 = (ulong)uVar2;
              puVar13 = puVar19;
              lVar22 = lVar11;
              uVar14 = uVar20;
              if (0 < (int)uVar2) {
                do {
                  uVar15 = lStack_90 - lStack_98 >> 1;
                  if ((uVar15 <= uVar14) || (uVar15 <= uVar14 + 1)) goto LAB_10a1ab508;
                  uVar6 = ((undefined2 *)(lStack_98 + lVar22))[-1];
                  uVar5 = *(undefined2 *)(lStack_98 + lVar22);
                  puVar13[-3] = (char)((ushort)uVar6 >> 8);
                  *puVar13 = (char)uVar5;
                  puVar13[-2] = (char)uVar6;
                  puVar13[-1] = (char)((ushort)uVar5 >> 8);
                  uVar14 = uVar14 + uVar21;
                  lVar22 = lVar22 + uVar21 * 2;
                  puVar13 = puVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              uVar18 = uVar18 + 1;
              uVar20 = uVar20 + uVar2 * uVar21;
              lVar11 = lVar11 + uVar2 * uVar21 * 2;
              puVar19 = puVar19 + (ulong)uVar2 * 4;
            } while (uVar18 != uVar4);
          }
        }
        else {
          func_0x000109ac9e9c(&lStack_b0,(long)(int)uVar3);
          if (0 < (int)uVar3) {
            uVar21 = 0;
            do {
              if ((ulong)(lStack_a8 - lStack_b0 >> 3) <= uVar21) goto LAB_10a1ab508;
              *(long *)(lStack_b0 + uVar21 * 8) =
                   *(long *)(lVar22 + 0x28) + *(long *)(lVar22 + 0x18) * (long)iVar9;
              uVar21 = uVar21 + 1;
              iVar9 = iVar9 + iVar1;
            } while (uVar4 != uVar21);
          }
          lVar11 = *plVar10;
          auVar23 = NEON_ext(*(undefined1 (*) [16])(lVar11 + 0xf8),
                             *(undefined1 (*) [16])(lVar11 + 0xf8),8,1);
          uStack_d8 = *(undefined8 *)(lVar11 + 0xe0);
          uStack_e0 = *(undefined8 *)(lVar11 + 0xd8);
          uStack_e8 = auVar23._8_8_;
          uStack_f0 = auVar23._0_8_;
          uStack_d0 = *(undefined8 *)(lVar11 + 0x3c0);
          uStack_c8 = *(undefined4 *)(lVar11 + 0x3bc);
          uStack_c0 = *(undefined8 *)(lVar11 + 0x3d8);
          uStack_b8 = 1;
          func_0x000109b65140(lVar11,lStack_b0);
          FUN_10a1b1e14(&uStack_f0,*plVar10);
          func_0x000109b6522c(*plVar10,plVar10[2]);
        }
        plVar10 = (long *)0x1;
        goto LAB_10a1ab02c;
      }
      if ((bRam000000011330a9e8 & 1) != 0) {
        plVar10 = (long *)0x0;
        func_0x00010ae06f08(0,1,&UNK_10f641cea,&UNK_10f641d7f,0x132,&UNK_10f641dc4);
        goto LAB_10a1ab02c;
      }
    }
  }
LAB_10a1ab028:
  plVar10 = (long *)0x0;
LAB_10a1ab02c:
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  return plVar10;
}



/* Entry: 10a1aaf9c; end: 10a1ab54b;  */

undefined8 FUN_10a1aaf9c(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar23 = *param_2;
  uVar2 = *(uint *)(lVar23 + 0x10);
  uVar3 = *(uint *)(lVar23 + 0x14);
  uVar4 = (ulong)uVar3;
  plVar22 = *(long **)(param_1 + 0xa0);
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  lVar10 = *plVar22;
  if (lVar10 == 0) {
    return 0;
  }
  if ((plVar22[1] != 0) && ((plVar22[2] != 0 && uVar2 != 0) && uVar3 != 0)) {
    func_0x000109b62cf4(lVar10,PTR__longjmp_11034c548,0xc0);
    iVar9 = (int)lVar10;
    _setjmp();
    if (iVar9 == 0) {
      lVar10 = *plVar22;
      if (lVar10 != 0) {
        *(uint *)(lVar10 + 0x128) = *(uint *)(lVar10 + 0x128) & 0xfffff0ff | 0x200;
      }
      iVar9 = 0;
      if (((*(byte *)(param_1 + 0x9a) & 1) == 0) && ((*(uint *)(lVar23 + 0x24) | 4) != 0xf)) {
        iVar9 = (int)*plVar22;
        func_0x000109b659f4();
      }
      FUN_10a1a4c34();
      if (((iVar9 != 0) && (lVar10 = *plVar22, lVar10 != 0)) &&
         (*(char *)(lVar10 + 0x260) == '\x10')) {
        *(uint *)(lVar10 + 300) = *(uint *)(lVar10 + 300) | 0x10;
      }
      if ((0xb < *(uint *)(lVar23 + 0x24)) ||
         ((1 << (ulong)(*(uint *)(lVar23 + 0x24) & 0x1f) & 0x823U) == 0)) {
        func_0x000109b65a24(*plVar22);
      }
      lVar10 = *(long *)(param_1 + 0xa0);
      uVar16 = *(uint *)(lVar10 + 0x24);
      if (uVar16 == 3) {
        func_0x000109b65a54(*plVar22);
        lVar10 = *(long *)(param_1 + 0xa0);
        uVar16 = *(uint *)(lVar10 + 0x24);
      }
      if (((uVar16 & 0xfffffffb) == 0) && (*(int *)(lVar10 + 0x20) < 8)) {
        func_0x000109b65a8c(*plVar22);
      }
      if (((*plVar22 != 0) && (plVar22[1] != 0)) && ((*(byte *)(plVar22[1] + 8) >> 4 & 1) != 0)) {
        func_0x000109b65abc();
      }
      if (((*(byte *)(param_1 + 0x98) & 1) != 0) ||
         (*(int *)(*(long *)(param_1 + 0xa0) + 0x24) == 4)) {
        func_0x000109b65af4(*plVar22);
      }
      lVar10 = *plVar22;
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else if (*(char *)(lVar10 + 0x25c) != '\0') {
        *(uint *)(lVar10 + 300) = *(uint *)(lVar10 + 300) | 2;
        lVar10 = *plVar22;
      }
      func_0x000109b64cc8(lVar10,plVar22[1]);
      iVar9 = uVar3 - 1;
      bVar8 = *(char *)(param_1 + 0x99) == '\0';
      if (bVar8) {
        iVar9 = 0;
      }
      iVar1 = 1;
      if (!bVar8) {
        iVar1 = -1;
      }
      if (((*plVar22 == 0) || (plVar22[1] == 0)) ||
         (*(ulong *)(plVar22[1] + 0x10) <= *(ulong *)(lVar23 + 0x18))) {
        if (*(char *)(param_1 + 0x9a) == '\x01') {
          if ((*(int *)(*(long *)(param_1 + 0xa0) + 0x20) != 0x10) ||
             (uVar16 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x24), (uVar16 | 4) != 6))
          goto LAB_10a1ab028;
          uVar15 = 3;
          if (uVar16 != 2) {
            uVar15 = 4;
          }
          func_0x000108262984(&lStack_78,(long)(int)(uVar3 * uVar2 * uVar15));
          func_0x000109ac9e9c(&lStack_90,(long)(int)uVar3);
          uVar21 = (ulong)uVar15;
          if (0 < (int)uVar3) {
            iVar9 = uVar15 * iVar9 * uVar2;
            uVar17 = 0;
            do {
              if (((ulong)(lStack_70 - lStack_78 >> 1) <= (ulong)(long)iVar9) ||
                 ((ulong)(lStack_88 - lStack_90 >> 3) <= uVar17)) {
LAB_10a1ab508:
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1ab50c);
                (*pcVar7)();
              }
              *(long *)(lStack_90 + uVar17 * 8) = lStack_78 + (long)iVar9 * 2;
              uVar17 = uVar17 + 1;
              iVar9 = iVar9 + uVar15 * iVar1 * uVar2;
            } while (uVar4 != uVar17);
          }
          lVar10 = *plVar22;
          auVar24 = NEON_ext(*(undefined1 (*) [16])(lVar10 + 0xf8),
                             *(undefined1 (*) [16])(lVar10 + 0xf8),8,1);
          uStack_b8 = *(undefined8 *)(lVar10 + 0xe0);
          uStack_c0 = *(undefined8 *)(lVar10 + 0xd8);
          uStack_c8 = auVar24._8_8_;
          uStack_d0 = auVar24._0_8_;
          uStack_b0 = *(undefined8 *)(lVar10 + 0x3c0);
          uStack_a8 = *(undefined4 *)(lVar10 + 0x3bc);
          uStack_a0 = *(undefined8 *)(lVar10 + 0x3d8);
          uStack_98 = 1;
          func_0x000109b65140(lVar10,lStack_90);
          FUN_10a1b1e14(&uStack_d0,*plVar22);
          func_0x000109b6522c(*plVar22,plVar22[2]);
          if (0 < (int)uVar3) {
            puVar18 = (undefined1 *)(*(long *)(lVar23 + 0x28) + 3);
            lVar10 = 2;
            uVar17 = 0;
            uVar19 = 0;
            do {
              uVar11 = (ulong)uVar2;
              puVar12 = puVar18;
              lVar23 = lVar10;
              uVar13 = uVar19;
              if (0 < (int)uVar2) {
                do {
                  uVar14 = lStack_70 - lStack_78 >> 1;
                  if ((uVar14 <= uVar13) || (uVar14 <= uVar13 + 1)) goto LAB_10a1ab508;
                  uVar6 = ((undefined2 *)(lStack_78 + lVar23))[-1];
                  uVar5 = *(undefined2 *)(lStack_78 + lVar23);
                  puVar12[-3] = (char)((ushort)uVar6 >> 8);
                  *puVar12 = (char)uVar5;
                  puVar12[-2] = (char)uVar6;
                  puVar12[-1] = (char)((ushort)uVar5 >> 8);
                  uVar13 = uVar13 + uVar21;
                  lVar23 = lVar23 + uVar21 * 2;
                  puVar12 = puVar12 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              uVar17 = uVar17 + 1;
              uVar19 = uVar19 + uVar2 * uVar21;
              lVar10 = lVar10 + uVar2 * uVar21 * 2;
              puVar18 = puVar18 + (ulong)uVar2 * 4;
            } while (uVar17 != uVar4);
          }
        }
        else {
          func_0x000109ac9e9c(&lStack_90,(long)(int)uVar3);
          if (0 < (int)uVar3) {
            uVar21 = 0;
            do {
              if ((ulong)(lStack_88 - lStack_90 >> 3) <= uVar21) goto LAB_10a1ab508;
              *(long *)(lStack_90 + uVar21 * 8) =
                   *(long *)(lVar23 + 0x28) + *(long *)(lVar23 + 0x18) * (long)iVar9;
              uVar21 = uVar21 + 1;
              iVar9 = iVar9 + iVar1;
            } while (uVar4 != uVar21);
          }
          lVar10 = *plVar22;
          auVar24 = NEON_ext(*(undefined1 (*) [16])(lVar10 + 0xf8),
                             *(undefined1 (*) [16])(lVar10 + 0xf8),8,1);
          uStack_b8 = *(undefined8 *)(lVar10 + 0xe0);
          uStack_c0 = *(undefined8 *)(lVar10 + 0xd8);
          uStack_c8 = auVar24._8_8_;
          uStack_d0 = auVar24._0_8_;
          uStack_b0 = *(undefined8 *)(lVar10 + 0x3c0);
          uStack_a8 = *(undefined4 *)(lVar10 + 0x3bc);
          uStack_a0 = *(undefined8 *)(lVar10 + 0x3d8);
          uStack_98 = 1;
          func_0x000109b65140(lVar10,lStack_90);
          FUN_10a1b1e14(&uStack_d0,*plVar22);
          func_0x000109b6522c(*plVar22,plVar22[2]);
        }
        uVar20 = 1;
        goto LAB_10a1ab02c;
      }
      if ((bRam000000011330a9e8 & 1) != 0) {
        uVar20 = 0;
        func_0x00010ae06f08(0,1,&UNK_10f641cea,&UNK_10f641d7f,0x132,&UNK_10f641dc4);
        goto LAB_10a1ab02c;
      }
    }
  }
LAB_10a1ab028:
  uVar20 = 0;
LAB_10a1ab02c:
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 10a1ab54c; end: 10a1ac107;  */

undefined8 FUN_10a1ab54c(long param_1,int *param_2)

{
  bool bVar1;
  undefined8 *****pppppuVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  long ****pppplVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  int *****pppppiVar10;
  int *piVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *plVar14;
  long ****pppplVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *****ppppplVar24;
  uint uVar25;
  undefined8 uVar26;
  uint uVar27;
  long ****pppplStack_138;
  ulong *puStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  int ****ppppiStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long ****pppplStack_f8;
  ulong *puStack_f0;
  undefined8 ****ppppuStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  undefined1 uStack_99;
  long ****pppplStack_98;
  undefined1 uStack_89;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x99) & 1) == 0) {
    lVar8 = param_1;
    FUN_10ad05fa8();
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0xb4) = 1;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    ppppuStack_e8 = (undefined8 *****)0x0;
    uStack_e0 = 0;
    uVar18 = *(ulong *)(param_1 + 0x58);
    uStack_d8 = 0;
    uVar22 = uVar18;
    if (uVar18 == 0) {
      uVar22 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
    }
    if (uVar22 < 0x34) {
      plVar9 = *(long **)(param_1 + 0x90);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(param_1 + 0x78);
        if (*(char *)(param_1 + 0x8f) < '\0') {
          if (*(long *)(param_1 + 0x80) != 0) {
            plVar14 = (long *)*plVar9;
            goto LAB_10a1abc28;
          }
        }
        else {
          plVar14 = plVar9;
          if (*(char *)(param_1 + 0x8f) != '\0') {
LAB_10a1abc28:
            FUN_10ad040c0(&pppplStack_138,plVar14,&UNK_10f432965);
            if ((long *****)pppplStack_138 == (long *****)0x0) {
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (&ppppiStack_118,&UNK_10f641e1a,plVar9);
              FUN_10a0029c0(&ppppiStack_118);
              goto LAB_10a1abfa8;
            }
            uVar26 = 0x38;
            __Znwm();
            FUN_10a0f296c();
            plVar9 = *(long **)(param_1 + 0x90);
            *(undefined8 *)(param_1 + 0x90) = uVar26;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 8))();
            }
            pppplVar6 = pppplStack_138;
            pppplStack_138 = (long ****)0x0;
            if ((long *****)pppplVar6 != (long *****)0x0) {
              pppplVar15 = (long ****)*pppplVar6;
              *pppplVar6 = (long ***)0x0;
              if (pppplVar15 != (long ****)0x0) {
                (*(code *)(*pppplVar15)[8])();
              }
              __ZdlPv(pppplVar6);
            }
            plVar9 = *(long **)(param_1 + 0x90);
            if (plVar9 != (long *)0x0) goto LAB_10a1ab6b8;
          }
        }
      }
      else {
LAB_10a1ab6b8:
        (**(code **)(*plVar9 + 0x10))();
        if ((long *)0x33 < plVar9) {
          (**(code **)(**(long **)(param_1 + 0x90) + 0x30))
                    (*(long **)(param_1 + 0x90),&uStack_d0,0x34);
          uVar22 = (ulong)uStack_a0;
          ppppiStack_118 = (int ****)&UNK_10f641def;
          uStack_110 = 0x13;
          if (uStack_a0 < 0x4000001) {
            ppppiStack_118 = (int ****)&UNK_10f641e03;
            uStack_110 = 0x16;
            if ((long *)(uVar22 + 0x34) <= plVar9) {
              uVar18 = (long)plVar9 + (-0x34 - uVar22);
              *(ulong *)(param_2 + 4) = uVar18;
              ppppiStack_118 = (int ****)&UNK_10f641def;
              uStack_110 = 0x13;
              if (uVar18 < 0x4000001) {
                if (uStack_a0 != 0) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                            (&ppppuStack_e8,uVar22,0);
                  pppppuVar2 = (undefined8 *****)ppppuStack_e8;
                  if (-1 < (long)uStack_d8) {
                    pppppuVar2 = &ppppuStack_e8;
                  }
                  (**(code **)(**(long **)(param_1 + 0x90) + 0x30))
                            (*(long **)(param_1 + 0x90),pppppuVar2,uStack_a0);
                }
                goto LAB_10a1ab784;
              }
            }
          }
          FUN_10a0edfc4(&ppppiStack_118);
          goto LAB_10a1abfa8;
        }
      }
      uVar26 = 0;
      goto LAB_10a1abf0c;
    }
    puVar23 = *(undefined8 **)(param_1 + 0x50);
    if (puVar23 == (undefined8 *)0x0) {
      puVar23 = *(undefined8 **)(param_1 + 0x60);
    }
    uStack_a0 = *(uint *)(puVar23 + 6);
    uVar22 = (ulong)uStack_a0;
    uStack_c8 = puVar23[1];
    uStack_d0 = *puVar23;
    uStack_b8 = puVar23[3];
    uStack_c0 = puVar23[2];
    uStack_a8 = puVar23[5];
    uStack_b0 = puVar23[4];
    ppppiStack_118 = (int ****)&UNK_10f641def;
    uStack_110 = 0x13;
    if (uStack_a0 < 0x4000001) {
      if (uVar18 == 0) {
        uVar18 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
      }
      ppppiStack_118 = (int ****)&UNK_10f641e03;
      uStack_110 = 0x16;
      if (uVar22 + 0x34 <= uVar18) {
        uVar18 = (uVar18 - uVar22) - 0x34;
        *(ulong *)(param_2 + 4) = uVar18;
        ppppiStack_118 = (int ****)&UNK_10f641def;
        uStack_110 = 0x13;
        if (uVar18 < 0x4000001) {
          if (uStack_a0 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (&ppppuStack_e8,uVar22,0);
            pppppuVar2 = (undefined8 *****)ppppuStack_e8;
            if (-1 < (long)uStack_d8) {
              pppppuVar2 = &ppppuStack_e8;
            }
            lVar19 = *(long *)(param_1 + 0x50);
            if (lVar19 == 0) {
              lVar19 = *(long *)(param_1 + 0x60);
            }
            _memcpy(pppppuVar2,lVar19 + 0x34,uStack_a0);
          }
LAB_10a1ab784:
          *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 4);
          *(ulong *)(param_1 + 0xa8) = (ulong)uStack_a0 + 0x34;
          uVar26 = NEON_rev64(uStack_b8,4);
          *(undefined8 *)param_2 = uVar26;
          uVar22 = uStack_e0;
          if (-1 < (long)uStack_d8) {
            uVar22 = uStack_d8 >> 0x38;
          }
          if (uVar22 != 0) {
            plStack_70 = (long *)0x0;
            FUN_109fc89b4(&pppplStack_f8,&ppppuStack_e8,alStack_88,1,0);
            if (plStack_70 == alStack_88) {
              lVar19 = 0x20;
LAB_10a1ab80c:
              (**(code **)(*plStack_70 + lVar19))();
            }
            else if (plStack_70 != (long *)0x0) {
              lVar19 = 0x28;
              goto LAB_10a1ab80c;
            }
            ppppiStack_118 = (int ****)&pppplStack_f8;
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_100 = 0x8000000000000000;
            if ((char)pppplStack_f8 == '\0') {
              uStack_100 = 1;
            }
            else if ((char)pppplStack_f8 == '\x02') {
              uStack_108 = *puStack_f0;
            }
            else if ((char)pppplStack_f8 == '\x01') {
              uStack_110 = *puStack_f0;
            }
            else {
              uStack_100 = 0;
            }
            while( true ) {
              puStack_130 = (ulong *)0x0;
              uStack_128 = 0;
              uStack_120 = 0x8000000000000000;
              if ((char)pppplStack_f8 == '\x02') {
                uStack_128 = puStack_f0[1];
              }
              else if ((char)pppplStack_f8 == '\x01') {
                puStack_130 = puStack_f0 + 1;
              }
              else {
                uStack_120 = 1;
              }
              pppppiVar10 = &ppppiStack_118;
              pppplStack_138 = (long ****)&pppplStack_f8;
              func_0x00010937c708(pppppiVar10,&pppplStack_138);
              if ((int)pppppiVar10 != 0) break;
              func_0x00010937c560(&ppppiStack_118);
              func_0x00010937c804(&pppplStack_138);
              pppppiVar10 = &ppppiStack_118;
              func_0x0001095a27d4();
              piVar11 = param_2 + 10;
              pppplStack_98 = (long ****)pppppiVar10;
              FUN_109cf993c(piVar11,pppppiVar10,&UNK_10dd5b8f9,&pppplStack_98,&uStack_99);
              if (*(char *)((long)piVar11 + 0x3f) < '\0') {
                __ZdlPv(*(undefined8 *)(piVar11 + 10));
              }
              *(ulong **)(piVar11 + 0xc) = puStack_130;
              *(long *****)(piVar11 + 10) = pppplStack_138;
              *(ulong *)(piVar11 + 0xe) = uStack_128;
              func_0x00010937c698(&ppppiStack_118);
            }
            func_0x000109380ffc(&puStack_f0,(ulong)pppplStack_f8 & 0xff);
          }
          if (uStack_a8._4_4_ == -1) {
            func_0x000107c2b054(&ppppiStack_118,&DAT_10f641bc9);
            piVar11 = param_2 + 10;
            pppplStack_138 = (long ****)&ppppiStack_118;
            func_0x000104c5bc74(piVar11,&ppppiStack_118,&UNK_10dd5b8f9,&pppplStack_138,
                                &pppplStack_f8);
            if (*(char *)((long)piVar11 + 0x3f) < '\0') {
              piVar11[0xc] = 4;
              piVar11[0xd] = 0;
              piVar20 = *(int **)(piVar11 + 10);
            }
            else {
              piVar20 = piVar11 + 10;
              *(undefined1 *)((long)piVar11 + 0x3f) = 4;
            }
            *piVar20 = 0x65757274;
            *(undefined1 *)(piVar20 + 1) = 0;
            if ((long)uStack_108 < 0) {
              __ZdlPv(ppppiStack_118);
            }
            iVar21 = (int)((uint)uStack_b8 << 1) / 3;
            if ((int)uStack_b8._4_4_ <= iVar21) {
              iVar21 = uStack_b8._4_4_;
            }
            uVar22 = (long)iVar21 | (ulong)(long)iVar21 >> 1;
            uVar22 = uVar22 | uVar22 >> 2;
            uVar22 = uVar22 | uVar22 >> 4;
            uVar22 = uVar22 | uVar22 >> 8;
            uVar22 = uVar22 | uVar22 >> 0x10;
            uVar16 = (uint)(byte)(&UNK_10e49b580)
                                 [(uVar22 | uVar22 >> 0x20) * 0x3f6eaf2cd271461 >> 0x3a];
            if ((byte)(&UNK_10e49b580)[(uVar22 | uVar22 >> 0x20) * 0x3f6eaf2cd271461 >> 0x3a] < 3) {
              uVar16 = 2;
            }
            param_2[2] = uVar16 - 2;
            __ZNSt3__19to_stringEi(&ppppiStack_118);
            func_0x000107c2b054(&pppplStack_138,&UNK_10f641bd1);
            piVar11 = param_2 + 10;
            pppplStack_f8 = (long ****)&pppplStack_138;
            func_0x000104c5bc74(piVar11,&pppplStack_138,&UNK_10dd5b8f9,&pppplStack_f8,&uStack_89);
            if (*(char *)((long)piVar11 + 0x3f) < '\0') {
              __ZdlPv(*(undefined8 *)(piVar11 + 10));
            }
            *(ulong *)(piVar11 + 0xc) = uStack_110;
            *(int *****)(piVar11 + 10) = ppppiStack_118;
            *(ulong *)(piVar11 + 0xe) = uStack_108;
            uStack_108 = uStack_108 & 0xffffffffffffff;
            ppppiStack_118 = (int ****)((ulong)ppppiStack_118 & 0xffffffffffffff00);
            if (((long)uStack_128 < 0) && (__ZdlPv(pppplStack_138), (long)uStack_108 < 0)) {
              __ZdlPv(ppppiStack_118);
            }
          }
          func_0x000107c2b054(&ppppiStack_118,&DAT_10f641bc9);
          piVar11 = param_2 + 10;
          FUN_109ce5028(piVar11,&ppppiStack_118);
          if ((long)uStack_108 < 0) {
            __ZdlPv(ppppiStack_118);
            if (piVar11 != (int *)0x0) goto LAB_10a1abb10;
LAB_10a1abb50:
            uVar16 = 0;
          }
          else {
            if (piVar11 == (int *)0x0) goto LAB_10a1abb50;
LAB_10a1abb10:
            piVar20 = piVar11 + 10;
            if (*(char *)((long)piVar11 + 0x3f) < '\0') {
              if (*(long *)(piVar11 + 0xc) != 4) goto LAB_10a1abb50;
              piVar20 = *(int **)piVar20;
            }
            else if (*(char *)((long)piVar11 + 0x3f) != '\x04') goto LAB_10a1abb50;
            uVar16 = (uint)(*piVar20 == 0x65757274);
          }
          if (1 < uStack_a8._4_4_) {
            uVar16 = 1;
          }
          uVar25 = (uint)lVar8;
          if ((uVar25 & uVar16) == 1) {
            *(undefined1 *)(param_1 + 0xb4) = 0;
          }
          func_0x000107c2b054(&ppppiStack_118,&UNK_10f641bb3);
          ppppplVar12 = (long *****)(param_2 + 10);
          FUN_109ce5028(ppppplVar12,&ppppiStack_118);
          if ((long)uStack_108 < 0) {
            ppppplVar13 = (long *****)ppppiStack_118;
            __ZdlPv();
            if (ppppplVar12 == (long *****)0x0) goto LAB_10a1abbd0;
LAB_10a1abb9c:
            ppppplVar24 = ppppplVar12 + 5;
            cVar5 = *(char *)((long)ppppplVar12 + 0x3f);
            if (cVar5 < '\0') {
              if (ppppplVar12[6] == (long ****)0x8) {
                ppppplVar24 = (long *****)*ppppplVar24;
                goto LAB_10a1abcb0;
              }
              if (ppppplVar12[6] == (long ****)0xa) {
                ppppplVar24 = (long *****)*ppppplVar24;
                goto LAB_10a1abbf0;
              }
LAB_10a1abccc:
              uVar27 = 0;
            }
            else if (cVar5 == '\b') {
LAB_10a1abcb0:
              if (*ppppplVar24 != (long ****)0x44336d6f74737543) goto LAB_10a1abccc;
              uVar27 = 0;
              *(undefined1 *)(param_1 + 0xb4) = 0;
            }
            else {
              if (cVar5 != '\n') goto LAB_10a1abccc;
LAB_10a1abbf0:
              uVar27 = (uint)(*ppppplVar24 == (long ****)0x647261646e617453 &&
                             *(short *)(ppppplVar24 + 1) == 0x4432);
            }
            if (((uVar25 ^ 1) & 1) == 0 && uVar27 == 0) {
              uVar27 = 0;
              *(undefined1 *)(param_1 + 0xb4) = 0;
            }
          }
          else {
            ppppplVar13 = ppppplVar12;
            if (ppppplVar12 != (long *****)0x0) goto LAB_10a1abb9c;
LAB_10a1abbd0:
            uVar27 = 1;
          }
          uVar26 = 0;
          if ((int)uStack_c8 < 0x17) {
            if ((int)uStack_c8 == 6) {
              if (*(char *)(param_1 + 0x9c) == '\x01') {
                FUN_10ad4ae18();
                bVar4 = *(byte *)((long)ppppplVar13 + 0x27);
              }
              else {
                bVar4 = *(byte *)(param_1 + 0x9b);
              }
              bVar1 = (bVar4 & 1) != 0;
              if (bVar1) {
                *(undefined4 *)(param_1 + 0xb0) = 0;
                iVar21 = 4;
              }
              else {
                *(undefined4 *)(param_1 + 0xb0) = 1;
                iVar21 = 5;
              }
              uVar22 = (ulong)!bVar1;
              param_2[6] = iVar21;
LAB_10a1abda0:
              FUN_10a1b6f24(uVar22,(long)*param_2,(long)param_2[1],*(undefined8 *)(param_2 + 4));
              ppppiStack_118 = (int ****)&UNK_10f641def;
              uStack_110 = 0x13;
              if ((uVar22 & 1) == 0) {
                FUN_10a0edfc4(&ppppiStack_118);
                goto LAB_10a1abfa8;
              }
              iVar21 = *(int *)(param_1 + 0xb0);
              FUN_10a1b6dec(iVar21,param_1 + 0x9b);
              if ((iVar21 == 0) || ((*(byte *)(param_1 + 0xb4) & 1) == 0)) {
                if (*(uint *)(param_1 + 0xb0) < 7) {
                  iVar21 = *(int *)(&UNK_10e49b8cc + (ulong)*(uint *)(param_1 + 0xb0) * 4);
                }
                else {
                  iVar21 = -1;
                }
                if (2 < (ulong)*(byte *)(param_2 + 8)) goto LAB_10a1abfa8;
                (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_2 + 8)])(param_2 + 7);
                param_2[7] = iVar21;
                *(undefined1 *)(param_2 + 8) = 0;
                uVar26 = 1;
                param_2[4] = 0;
                param_2[5] = 0;
              }
              else {
                if (2 < (ulong)*(byte *)(param_2 + 8)) goto LAB_10a1abfa8;
                (*(code *)(&PTR_FUN_110ba20e8)[*(byte *)(param_2 + 8)])(param_2 + 7);
                iVar21 = *(int *)(param_1 + 0xb0);
                param_2[7] = iVar21;
                uVar26 = 1;
                *(undefined1 *)(param_2 + 8) = 1;
                if (((((uVar25 & uVar27) == 1) && (uStack_b8._4_4_ < 0x4001)) &&
                    ((uint)uStack_b8 < 0x4001)) && (iVar21 - 1U < 6)) {
                  iVar3 = *param_2;
                  uVar25 = param_2[1];
                  if (((uVar25 - 1 | iVar3 - 1U) & 0xffffc000) != 0) {
                    uVar16 = 1;
                  }
                  if ((uVar16 == 0) && (uVar16 = iVar3 + 3, (uVar16 >> 2 & 1) != 0)) {
                    *(int *)(param_1 + 0xb8) = iVar3;
                    *(uint *)(param_1 + 0xbc) = uVar25;
                    *param_2 = (uVar16 & 0xfffffffc) + 4;
                    lVar8 = 3;
                    if (iVar21 - 5U < 2) {
                      lVar8 = 4;
                    }
                    uVar22 = ((ulong)uVar25 + 3 >> 2) * (ulong)((uVar16 >> 2) + 1) << lVar8;
                    *(ulong *)(param_2 + 4) = uVar22;
                    ppppiStack_118 = (int ****)&UNK_10f641def;
                    uStack_110 = 0x13;
                    if (0x4000000 < uVar22) {
                      FUN_10a0edfc4(&ppppiStack_118);
                      goto LAB_10a1abfa8;
                    }
                  }
                }
              }
            }
            else if ((int)uStack_c8 == 0x16) {
              uVar17 = 1;
LAB_10a1abd2c:
              if ((int)uStack_c0 == 1) {
                uVar17 = uVar17 + 1;
              }
              *(uint *)(param_1 + 0xb0) = uVar17;
              goto LAB_10a1abd68;
            }
          }
          else {
            if ((int)uStack_c8 == 0x17) {
              uVar17 = 5;
              if ((int)uStack_c0 == 1) {
                uVar17 = 6;
              }
              *(uint *)(param_1 + 0xb0) = uVar17;
LAB_10a1abd68:
              uVar22 = (ulong)uVar17;
              param_2[6] = 5;
              goto LAB_10a1abda0;
            }
            if ((int)uStack_c8 == 0x18) {
              uVar17 = 3;
              goto LAB_10a1abd2c;
            }
          }
LAB_10a1abf0c:
          if ((long)uStack_d8 < 0) {
            __ZdlPv(ppppuStack_e8);
          }
          goto LAB_10a1abf1c;
        }
      }
    }
  }
  else {
    uVar26 = 0;
LAB_10a1abf1c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return uVar26;
    }
    ___stack_chk_fail();
  }
  FUN_10a0edfc4(&ppppiStack_118);
LAB_10a1abfa8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1abfac);
  (*pcVar7)();
}



/* Entry: 10a1ac108; end: 10a1ac4df;  */

long * FUN_10a1ac108(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  ulong unaff_x22;
  long *unaff_x23;
  long *plVar12;
  long *unaff_x24;
  long lVar13;
  long lVar14;
  long *plStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  ulong uStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)(ulong)*(uint *)(param_1 + 0xb0);
  plVar8 = (long *)(param_1 + 0x9b);
  FUN_10a1b6dec();
  if (((int)plVar6 == 0) || ((*(byte *)(param_1 + 0xb4) & 1) == 0)) {
    plVar11 = *(long **)(param_1 + 0x50);
    if (plVar11 == (long *)0x0) {
      if (*(long *)(param_1 + 0x68) == *(long *)(param_1 + 0x60)) goto LAB_10a1ac25c;
    }
    else if (*(long *)(param_1 + 0x58) == 0) {
LAB_10a1ac25c:
      plVar6 = (long *)0x0;
      if (*(long **)(param_1 + 0x90) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x90) + 0x38))(&plStack_d8);
        func_0x0001092bff80(param_1 + 8,&plStack_d8);
        func_0x0001092bffbc(&plStack_d8);
        plVar11 = *(long **)(param_1 + 0x50);
        goto joined_r0x00010a1ac1e4;
      }
LAB_10a1ac458:
      plVar10 = (long *)0x0;
      goto LAB_10a1ac45c;
    }
joined_r0x00010a1ac1e4:
    if (plVar11 == (long *)0x0) {
      plVar11 = *(long **)(param_1 + 0x60);
    }
    unaff_x22 = *(ulong *)(param_1 + 0xa8);
    FUN_10a1b70c8(&plStack_d8,*(undefined4 *)(param_1 + 0xb0),0);
    lVar13 = *param_2;
    plVar8 = (long *)((long)plVar11 + unaff_x22);
    plVar10 = plStack_d8;
    (**(code **)(*plStack_d8 + 8))
              (plStack_d8,plVar8,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(lVar13 + 0x28),
               *(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x14));
    plVar6 = plStack_d8;
    if ((int)plVar10 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    }
    plStack_d8 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))();
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xb8);
    unaff_x22 = (ulong)uVar1;
    if (uVar1 == 0) {
      plVar11 = *(long **)(param_1 + 0x50);
      if (plVar11 == (long *)0x0) {
        plVar11 = *(long **)(param_1 + 0x60);
        if (*(long **)(param_1 + 0x68) != plVar11) goto LAB_10a1ac2f8;
LAB_10a1ac414:
        plVar10 = *(long **)(param_1 + 0x90);
        plVar6 = (long *)0x0;
        if (plVar10 == (long *)0x0) goto LAB_10a1ac458;
        (**(code **)(*plVar10 + 0x18))(plVar10,*(undefined8 *)(param_1 + 0xa8));
        plVar11 = *(long **)(param_1 + 0x90);
        FUN_10a1a5394();
        plVar6 = plVar11;
        (**(code **)(*plVar11 + 0x30))(plVar11,param_2,*(undefined8 *)(param_1 + 0xa0));
        plVar8 = param_2;
      }
      else {
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_10a1ac414;
LAB_10a1ac2f8:
        unaff_x22 = *(ulong *)(param_1 + 0xa8);
        FUN_10a1a5394();
        plVar8 = (long *)((long)plVar11 + unaff_x22);
        _memcpy();
        plVar6 = param_2;
      }
    }
    else {
      unaff_x24 = (long *)(ulong)*(uint *)(param_1 + 0xb0);
      unaff_x23 = (long *)(ulong)*(uint *)(param_1 + 0xbc);
      uVar4 = *(uint *)(param_1 + 0xb0) - 1;
      if ((uVar4 < 6) && ((*(uint *)(param_1 + 0xbc) - 1 | uVar1 - 1) < 0x4000)) {
        plVar11 = (long *)(((ulong)((long)unaff_x23 + 3) >> 2) * (unaff_x22 + 3 >> 2) *
                          *(long *)(&UNK_10e49b8e8 + (ulong)uVar4 * 8));
        plStack_d8 = (long *)&UNK_10f641def;
        plStack_d0 = (long *)0x13;
        if (*(long **)(param_1 + 0xa0) < plVar11) {
          FUN_10a0edfc4(&plStack_d8);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1ac1d4);
          (*pcVar5)();
        }
      }
      else {
        plVar11 = (long *)0x0;
      }
      lVar13 = *(long *)(param_1 + 0x50);
      if (lVar13 == 0) {
        lVar13 = *(long *)(param_1 + 0x60);
        if (*(long *)(param_1 + 0x68) != lVar13) goto LAB_10a1ac2a8;
LAB_10a1ac320:
        if (*(long *)(param_1 + 0x90) == 0) goto LAB_10a1ac458;
        FUN_10a0dc020(&plStack_d8,plVar11);
        (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
                  (*(long **)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa8));
        (**(code **)(**(long **)(param_1 + 0x90) + 0x30))
                  (*(long **)(param_1 + 0x90),plStack_d8,plVar11);
        plVar8 = plStack_d8;
        unaff_x24 = (long *)(ulong)*(uint *)(param_1 + 0xb0);
        unaff_x22 = (ulong)*(uint *)(param_1 + 0xb8);
        unaff_x23 = (long *)(ulong)*(uint *)(param_1 + 0xbc);
        plVar6 = param_2;
        FUN_10a1a5394(param_2);
        FUN_10a1a5510(param_2);
        plVar10 = unaff_x24;
        FUN_10a1a4a14(unaff_x24,plVar8,plVar11,unaff_x22,unaff_x23,plVar6,param_2);
        plVar6 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plStack_d0 = plStack_d8;
          __ZdlPv();
        }
        if ((int)plVar10 == 0) goto LAB_10a1ac45c;
      }
      else {
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_10a1ac320;
LAB_10a1ac2a8:
        lVar14 = *(long *)(param_1 + 0xa8);
        plVar10 = param_2;
        FUN_10a1a5394(param_2);
        FUN_10a1a5510(param_2);
        plVar8 = (long *)(lVar13 + lVar14);
        plVar6 = unaff_x24;
        FUN_10a1a4a14(unaff_x24,plVar8,plVar11,unaff_x22,unaff_x23,plVar10,param_2);
        if (((ulong)plVar6 & 1) == 0) goto LAB_10a1ac458;
      }
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        uStack_f0 = (ulong)*(uint *)(param_1 + 0xb8);
        uStack_e8 = (ulong)*(uint *)(param_1 + 0xbc);
        uStack_e0 = (ulong)((*(uint *)(param_1 + 0xb8) + 3 & 0xfffffffc) + 4);
        plVar6 = (long *)0x1;
        plVar8 = (long *)0x8;
        func_0x00010ae06f08(1,8,&UNK_10f641e40,&UNK_10f641e6b,0x14d,&UNK_10f641eb0);
      }
    }
    plVar10 = (long *)0x1;
  }
LAB_10a1ac45c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar10;
  }
  ___stack_chk_fail();
  if (plStack_d8 != (long *)0x0) {
    plStack_d0 = plStack_d8;
    __ZdlPv();
  }
  plVar7 = plVar6;
  __Unwind_Resume();
  pcStack_f8 = FUN_10a1ac4e0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = unaff_x23;
  plStack_130 = unaff_x24;
  plStack_128 = unaff_x23;
  uStack_120 = unaff_x22;
  plStack_118 = plVar11;
  plStack_110 = plVar10;
  plStack_108 = plVar6;
  puStack_100 = &stack0xfffffffffffffff0;
  if ((plVar7[0xb] == 0) && (plVar7[0xd] == plVar7[0xc])) {
    plVar6 = (long *)plVar7[0x12];
    if (plVar6 != (long *)0x0) goto LAB_10a1ac52c;
    cVar3 = *(char *)((long)plVar7 + 0x8f);
    if (cVar3 < '\0') {
      if (plVar7[0x10] != 0) goto LAB_10a1ac660;
LAB_10a1ac5ac:
      plVar6 = (long *)0x0;
      goto LAB_10a1ac618;
    }
    if (cVar3 == '\0') goto LAB_10a1ac5ac;
LAB_10a1ac660:
    plVar12 = plVar7 + 0xf;
    plVar6 = (long *)*plVar12;
    if (-1 < cVar3) {
      plVar6 = plVar12;
    }
    FUN_10ad040c0(&plStack_1b8,plVar6,&UNK_10f432965);
    if (plStack_1b8 != (long *)0x0) {
      plVar6 = (long *)0x38;
      __Znwm();
      FUN_10a0f296c();
      plVar11 = plStack_1b8;
      plStack_1b8 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        plVar10 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x40))();
        }
        __ZdlPv(plVar11);
      }
      plVar11 = (long *)plVar7[0x12];
      plVar7[0x12] = (long)plVar6;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
        plVar6 = (long *)plVar7[0x12];
        if (plVar6 == (long *)0x0) goto LAB_10a1ac5ac;
      }
LAB_10a1ac52c:
      (**(code **)(*plVar6 + 0x38))(&lStack_1b0,plVar6);
      func_0x0001092bff80(plVar7 + 1,&lStack_1b0);
      func_0x0001092bffbc(&lStack_1b0);
      goto LAB_10a1ac554;
    }
  }
  else {
LAB_10a1ac554:
    lVar13 = plVar7[10];
    if (lVar13 == 0) {
      lVar13 = plVar7[0xc];
    }
    lVar14 = plVar7[0xb];
    if (lVar14 == 0) {
      lVar14 = plVar7[0xd] - plVar7[0xc];
    }
    plVar6 = (long *)0x0;
    if (lVar13 != 0) {
      uStack_190 = 0;
      uStack_1a8 = 0;
      lStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      func_0x00010822d4a4(lVar13,lVar14,&lStack_1b0,(ulong)&lStack_1b0 | 4,(ulong)&lStack_1b0 | 8,
                          (ulong)&lStack_1b0 | 0xc,&uStack_1a0,0);
      if ((int)lVar13 != 0) goto LAB_10a1ac5ac;
      *plVar8 = lStack_1b0;
      *(undefined4 *)(plVar8 + 3) = 6;
      if (((int)uStack_1a8 == 0) || ((*(byte *)(plVar7 + 0x13) & 1) != 0)) {
        bVar2 = *(byte *)(plVar8 + 4);
        if (2 < bVar2) goto LAB_10a1ac710;
        uVar9 = 3;
      }
      else {
        bVar2 = *(byte *)(plVar8 + 4);
        if (2 < bVar2) goto LAB_10a1ac710;
        uVar9 = 1;
      }
      (*(code *)(&PTR_FUN_110ba20e8)[bVar2])((undefined *)((long)plVar8 + 0x1c));
      *(undefined4 *)((long)plVar8 + 0x1c) = uVar9;
      *(undefined1 *)(plVar8 + 4) = 0;
      plVar6 = (long *)0x1;
    }
LAB_10a1ac618:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
      return plVar6;
    }
    ___stack_chk_fail(plVar6);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&lStack_1b0,&UNK_10f64225e,plVar12);
  FUN_10a0029c0(&lStack_1b0);
LAB_10a1ac710:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1ac714);
  (*pcVar5)();
}



/* Entry: 10a1ac4e0; end: 10a1ac783;  */

void FUN_10a1ac4e0(long param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  long *plVar10;
  long *unaff_x23;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(param_1 + 0x58) == 0) && (*(long *)(param_1 + 0x68) == *(long *)(param_1 + 0x60)))
  {
    plVar10 = *(long **)(param_1 + 0x90);
    if (plVar10 != (long *)0x0) goto LAB_10a1ac52c;
    cVar2 = *(char *)(param_1 + 0x8f);
    if (cVar2 < '\0') {
      if (*(long *)(param_1 + 0x80) != 0) goto LAB_10a1ac660;
LAB_10a1ac5ac:
      uVar5 = 0;
      goto LAB_10a1ac618;
    }
    if (cVar2 == '\0') goto LAB_10a1ac5ac;
LAB_10a1ac660:
    unaff_x23 = (long *)(param_1 + 0x78);
    plVar10 = (long *)*unaff_x23;
    if (-1 < cVar2) {
      plVar10 = unaff_x23;
    }
    FUN_10ad040c0(&plStack_c8,plVar10,&UNK_10f432965);
    if (plStack_c8 != (long *)0x0) {
      plVar10 = (long *)0x38;
      __Znwm();
      FUN_10a0f296c();
      plVar7 = plStack_c8;
      plStack_c8 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        plVar6 = (long *)*plVar7;
        *plVar7 = 0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x40))();
        }
        __ZdlPv(plVar7);
      }
      plVar7 = *(long **)(param_1 + 0x90);
      *(long **)(param_1 + 0x90) = plVar10;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
        plVar10 = *(long **)(param_1 + 0x90);
        if (plVar10 == (long *)0x0) goto LAB_10a1ac5ac;
      }
LAB_10a1ac52c:
      (**(code **)(*plVar10 + 0x38))(&uStack_c0,plVar10);
      func_0x0001092bff80(param_1 + 8,&uStack_c0);
      func_0x0001092bffbc(&uStack_c0);
      goto LAB_10a1ac554;
    }
  }
  else {
LAB_10a1ac554:
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x60);
    }
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
    }
    uVar5 = 0;
    if (lVar4 != 0) {
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      func_0x00010822d4a4(lVar4,lVar8,&uStack_c0,(ulong)&uStack_c0 | 4,(ulong)&uStack_c0 | 8,
                          (ulong)&uStack_c0 | 0xc,&uStack_b0,0);
      if ((int)lVar4 != 0) goto LAB_10a1ac5ac;
      *param_2 = uStack_c0;
      *(undefined4 *)(param_2 + 3) = 6;
      if (((int)uStack_b8 == 0) || ((*(byte *)(param_1 + 0x98) & 1) != 0)) {
        bVar1 = *(byte *)(param_2 + 4);
        if (2 < bVar1) goto LAB_10a1ac710;
        uVar9 = 3;
      }
      else {
        bVar1 = *(byte *)(param_2 + 4);
        if (2 < bVar1) goto LAB_10a1ac710;
        uVar9 = 1;
      }
      (*(code *)(&PTR_FUN_110ba20e8)[bVar1])((long)param_2 + 0x1c);
      *(undefined4 *)((long)param_2 + 0x1c) = uVar9;
      *(undefined1 *)(param_2 + 4) = 0;
      uVar5 = 1;
    }
LAB_10a1ac618:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail(uVar5);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_c0,&UNK_10f64225e,unaff_x23);
  FUN_10a0029c0(&uStack_c0);
LAB_10a1ac710:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1ac714);
  (*pcVar3)();
}



/* Entry: 10a1ac784; end: 10a1ac8b7;  */

undefined8 * FUN_10a1ac784(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar5 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar4 = *param_2;
  uStack_40 = (ulong)*(byte *)(param_1 + 0x99);
  piVar6 = (int *)&UNK_10e49b5e8;
  while( true ) {
    for (; piVar7 = (int *)(&UNK_10e49b5c0 + uVar5 * 8), *piVar7 < *(int *)(lVar4 + 0x24);
        uVar5 = uVar5 * 2 + 2) {
      piVar7 = piVar6;
      if (1 < uVar5) goto LAB_10a1ac820;
    }
    if (1 < uVar5) break;
    uVar5 = uVar5 << 1 | 1;
    piVar6 = piVar7;
  }
LAB_10a1ac820:
  if ((piVar7 != (int *)&UNK_10e49b5e8) &&
     (*piVar7 <= *(int *)(lVar4 + 0x24) && piVar7 != (int *)&UNK_10e49b5e8)) {
    uStack_e8 = (ulong)(uint)piVar7[1];
    uStack_e0 = 0x100000000;
    uStack_d8 = *(undefined8 *)(lVar4 + 0x28);
    uStack_d0 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    lStack_c8 = *(long *)(lVar4 + 0x40);
    if (lStack_c8 == 0) {
      lStack_c8 = *(ulong *)(lVar4 + 0x18) * (long)*(int *)(lVar4 + 0x14);
    }
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x60);
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
    }
    func_0x00010822dbe4(lVar4,lVar3,&uStack_110);
    return (undefined8 *)(ulong)((int)lVar4 == 0);
  }
  puVar2 = (undefined8 *)&UNK_10f642285;
  FUN_10a00946c();
  *puVar2 = &PTR_FUN_110bab468;
  lVar4 = puVar2[0x14];
  puVar2[0x14] = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  *puVar2 = &PTR_FUN_110bab6e0;
  plVar1 = (long *)puVar2[0x12];
  puVar2[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)puVar2 + 0x8f) < '\0') {
    __ZdlPv(puVar2[0xf]);
  }
  func_0x0001092bffbc(puVar2 + 1);
  return puVar2;
}



/* Entry: 10a1ac8b8; end: 10a1ac8bb;  */

undefined8 * FUN_10a1ac8b8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bab468;
  lVar2 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110bab6e0;
  plVar1 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1ac8bc; end: 10a1ac8cf;  */

void FUN_10a1ac8bc(void)

{
  FUN_10a1aa62c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ac8d0; end: 10a1ac8d3;  */

undefined8 * FUN_10a1ac8d0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bab468;
  lVar2 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110bab6e0;
  plVar1 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1ac8d4; end: 10a1ac8e7;  */

void FUN_10a1ac8d4(void)

{
  FUN_10a1aa62c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ac8e8; end: 10a1ac8eb;  */

undefined8 * FUN_10a1ac8e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110bab430;
  if (param_1[0x13b] != 0) {
    param_1[0x13c] = param_1[0x13b];
    __ZdlPv();
  }
  if (param_1[0x138] != 0) {
    param_1[0x139] = param_1[0x138];
    __ZdlPv();
  }
  if (param_1[0x133] != 0) {
    _free();
  }
  lVar1 = 0x980;
  do {
    if (*(long *)((long)param_1 + lVar1) != 0) {
      _free();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x680);
  do {
    if (*(long *)((long)param_1 + lVar1) != 0) {
      _free();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x650);
  func_0x0001098abcd8(param_1 + 0x3a);
  if (param_1[0x33] != 0) {
    _free();
  }
  if (param_1[0x30] != 0) {
    _free();
  }
  plVar2 = (long *)param_1[0x2a];
  if (plVar2 != (long *)0x0) {
    if (param_1[0x2b] != 0) {
      lVar1 = param_1[0x2b] * 0x30;
      do {
        if (plVar2[3] != 0) {
          _free();
        }
        if (*plVar2 != 0) {
          _free();
        }
        plVar2 = plVar2 + 6;
        lVar1 = lVar1 + -0x30;
      } while (lVar1 != 0);
      plVar2 = (long *)param_1[0x2a];
    }
    _free(plVar2);
  }
  if (param_1[0x27] != 0) {
    _free();
  }
  if (param_1[0x24] != 0) {
    _free();
  }
  *param_1 = &PTR_FUN_110bab6e0;
  plVar2 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1ac8ec; end: 10a1ac8ff;  */

void FUN_10a1ac8ec(void)

{
  FUN_10a1aed24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ac900; end: 10a1ac903;  */

undefined8 * FUN_10a1ac900(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bab6e0;
  plVar1 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1ac904; end: 10a1ac917;  */

void FUN_10a1ac904(void)

{
  FUN_10a1a6ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ac918; end: 10a1ac91b;  */

undefined8 * FUN_10a1ac918(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bab6e0;
  plVar1 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1ac91c; end: 10a1ac943;  */

void FUN_10a1ac91c(void)

{
  FUN_10a1a6ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ac944; end: 10a1aca33;  */

undefined8 * FUN_10a1ac944(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar1 = param_1[1];
  func_0x000107c2b054(auStack_58,param_3);
  __ZNSt3__19to_stringEi(auStack_70,*(undefined4 *)((long)param_1 + 0x1c));
  FUN_10a1aca34(param_2,uVar1,auStack_58,param_1 + 3,param_1 + 5,auStack_70,0);
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return param_1;
}



/* Entry: 10a1aca34; end: 10a1acad7;  */

void FUN_10a1aca34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  
  func_0x000107c2b054(auStack_58,&DAT_10f48d558);
  FUN_10a1acad8(param_1,auStack_58,param_3,param_4,param_5,param_6,param_7);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10a1acad8; end: 10a1acbdb;  */

void FUN_10a1acad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined7 uStack_68;
  char cStack_61;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  FUN_10a1acc1c(&uStack_78,param_2,param_6,param_4,param_5,param_7);
  param_1 = param_1 + 0x70;
  uStack_28 = param_3;
  FUN_10a1accd4(param_1,param_3,&UNK_10dd5b8f9,&uStack_28,&uStack_29);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  *(ulong *)(param_1 + 0x48) = CONCAT17(cStack_61,uStack_68);
  *(undefined8 *)(param_1 + 0x40) = uStack_70;
  *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_77,uStack_78);
  cStack_61 = '\0';
  uStack_78 = 0;
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x58) = uStack_58;
    *(ulong *)(param_1 + 0x50) = CONCAT71(uStack_5f,uStack_60);
    *(ulong *)(param_1 + 0x60) = CONCAT17(uStack_49,uStack_50);
    uStack_49 = 0;
    uStack_60 = 0;
    *(undefined8 *)(param_1 + 0x70) = uStack_40;
    *(undefined8 *)(param_1 + 0x68) = uStack_48;
    *(undefined1 *)(param_1 + 0x78) = uStack_38;
    if (cStack_61 < '\0') {
      __ZdlPv(CONCAT71(uStack_77,uStack_78));
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x58) = uStack_58;
    *(ulong *)(param_1 + 0x50) = CONCAT71(uStack_5f,uStack_60);
    *(ulong *)(param_1 + 0x60) = CONCAT17(uStack_49,uStack_50);
    *(undefined8 *)(param_1 + 0x70) = uStack_40;
    *(undefined8 *)(param_1 + 0x68) = uStack_48;
    *(undefined1 *)(param_1 + 0x78) = uStack_38;
  }
  return;
}



/* Entry: 10a1acbdc; end: 10a1acc1b;  */

undefined8 * FUN_10a1acbdc(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a1acc1c; end: 10a1accd3;  */

undefined8 *
FUN_10a1acc1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  param_1[6] = param_4;
  param_1[7] = param_5;
  *(undefined1 *)(param_1 + 8) = param_6;
  return param_1;
}



/* Entry: 10a1accd4; end: 10a1acd67;  */

undefined1  [16]
FUN_10a1accd4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10a1acd68(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10a1acdec(alStack_60,param_1,param_3,param_4,param_5);
    FUN_10a1ace90(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10a1acd68; end: 10a1acdeb;  */

long * FUN_10a1acd68(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a1acdd4;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a1acdd4:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a1acdec; end: 10a1ace8f;  */

void FUN_10a1acdec(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x80;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_4 = (undefined8 *)*param_4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  *(undefined1 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a1ace90; end: 10a1acf7f;  */

void FUN_10a1ace90(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a1acf80; end: 10a1ad017;  */

undefined8 * FUN_10a1acf80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  uVar1 = param_1[1];
  func_0x000107c2b054(auStack_48,param_3);
  FUN_10a1ad018(param_2,uVar1,auStack_48,param_1 + 3);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10a1ad018; end: 10a1ad09b;  */

void FUN_10a1ad018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  func_0x000107c2b054(auStack_48,&DAT_10f4913b9);
  FUN_10a1ad09c(param_1,auStack_48,param_3,param_4);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10a1ad09c; end: 10a1ad15f;  */

void FUN_10a1ad09c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_2,param_2[1]);
  }
  else {
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    uStack_50 = param_2[2];
  }
  param_1 = param_1 + 0x88;
  uStack_48 = param_4;
  uStack_38 = param_3;
  FUN_10a1ad160(param_1,param_3,&UNK_10dd5b8f9,&uStack_38,&uStack_39);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x40) = uStack_58;
  *(undefined8 *)(param_1 + 0x38) = uStack_60;
  *(undefined8 *)(param_1 + 0x48) = uStack_50;
  *(undefined8 *)(param_1 + 0x50) = uStack_48;
  return;
}



/* Entry: 10a1ad160; end: 10a1ad1f3;  */

undefined1  [16]
FUN_10a1ad160(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10a1ad1f4(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10a1ad278(alStack_60,param_1,param_3,param_4,param_5);
    FUN_10a1ad310(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10a1ad1f4; end: 10a1ad277;  */

long * FUN_10a1ad1f4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a1ad260;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a1ad260:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a1ad278; end: 10a1ad30f;  */

void FUN_10a1ad278(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x58;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_4 = (undefined8 *)*param_4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a1ad310; end: 10a1ad4df;  */

void FUN_10a1ad310(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a1ad4e0; end: 10a1ad4f3;  */

void FUN_10a1ad4e0(void)

{
  FUN_10a301168();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ad4f4; end: 10a1ad5e7;  */

undefined8 * FUN_10a1ad4f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = param_2;
  param_1[2] = &UNK_10f641f26;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar1 = param_1[1];
  func_0x000107c2b054(auStack_58);
  __ZNSt3__19to_stringEi(auStack_70,*(undefined4 *)((long)param_1 + 0x1c));
  FUN_10a1aca34(param_2,uVar1,auStack_58,param_1 + 3,param_1 + 5,auStack_70,0);
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return param_1;
}



/* Entry: 10a1ad5e8; end: 10a1ad707;  */

undefined8 * FUN_10a1ad5e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = param_2;
  param_1[3] = 0xffffffff;
  param_1[2] = &UNK_10f641f31;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  func_0x000107c2b054(auStack_60);
  __ZNSt3__19to_stringEi(auStack_78,*(undefined4 *)((long)param_1 + 0x1c));
  func_0x000107c2b054(auStack_48,&DAT_10f4913b9);
  FUN_10a1acad8(param_2,auStack_48,auStack_60,param_1 + 3,param_1 + 5,auStack_78,0);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return param_1;
}



/* Entry: 10a1ad708; end: 10a1ad7fb;  */

undefined8 * FUN_10a1ad708(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = param_2;
  param_1[2] = &UNK_10f641f3b;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar1 = param_1[1];
  func_0x000107c2b054(auStack_58);
  __ZNSt3__19to_stringEi(auStack_70,*(undefined4 *)((long)param_1 + 0x1c));
  FUN_10a1ad7fc(param_2,uVar1,auStack_58,param_1 + 3,param_1 + 5,auStack_70,0);
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return param_1;
}



/* Entry: 10a1ad7fc; end: 10a1ad89f;  */

void FUN_10a1ad7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  
  func_0x000107c2b054(auStack_58,&DAT_10f33a2d8);
  FUN_10a1acad8(param_1,auStack_58,param_3,param_4,param_5,param_6,param_7);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10a1ad8a0; end: 10a1ad937;  */

undefined8 * FUN_10a1ad8a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  uVar1 = param_1[1];
  func_0x000107c2b054(auStack_48,param_3);
  FUN_10a1ad018(param_2,uVar1,auStack_48,param_1 + 3);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10a1ad938; end: 10a1ad94b;  */

void FUN_10a1ad938(void)

{
  FUN_10a301168();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ad94c; end: 10a1ada3f;  */

undefined8 * FUN_10a1ad94c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  *param_1 = param_2;
  param_1[2] = &UNK_10f641f26;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar1 = param_1[1];
  func_0x000107c2b054(auStack_58);
  __ZNSt3__19to_stringEi(auStack_70,*(undefined4 *)((long)param_1 + 0x1c));
  FUN_10a1aca34(param_2,uVar1,auStack_58,param_1 + 3,param_1 + 5,auStack_70,0);
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return param_1;
}



/* Entry: 10a1ada40; end: 10a1adad7;  */

undefined8 * FUN_10a1ada40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  uVar1 = param_1[1];
  func_0x000107c2b054(auStack_48,param_3);
  FUN_10a1ad018(param_2,uVar1,auStack_48,param_1 + 3);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10a1adad8; end: 10a1adaeb;  */

void FUN_10a1adad8(void)

{
  FUN_10a301168();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1adaec; end: 10a1adb83;  */

undefined8 * FUN_10a1adaec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  uVar1 = param_1[1];
  func_0x000107c2b054(auStack_48,param_3);
  FUN_10a1ad018(param_2,uVar1,auStack_48,param_1 + 3);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10a1adb84; end: 10a1adf4f;  */

long * FUN_10a1adb84(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar6 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar6) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar16 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar16 <= uVar9) {
            uVar7 = 0;
            if (uVar16 != 0) {
              uVar7 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar7 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x28;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  plVar8[3] = 0;
  plVar8[4] = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar16) {
      uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar6 = uVar6 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar6) {
LAB_10a1adcec:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1adf3c);
        (*pcVar3)();
      }
      lVar4 = uVar6 << 3;
      __Znwm();
      lVar5 = *param_1;
      *param_1 = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
      plVar10 = (long *)param_1[2];
      uVar16 = uVar6;
      if (plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar6 <= uVar9) {
          uVar13 = 0;
          if (uVar6 != 0) {
            uVar13 = uVar9 / uVar6;
          }
          uVar9 = uVar9 - uVar13 * uVar6;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar10;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar6 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar6 <= uVar13) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar13 / uVar6;
            }
            uVar13 = uVar13 - uVar2 * uVar6;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + uVar13 * 8) == 0) {
              *(long **)(lVar4 + uVar13 * 8) = plVar10;
              uVar9 = uVar13;
            }
            else {
              *plVar10 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar4 + uVar13 * 8);
              **(long **)(lVar4 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar10;
            }
          }
          plVar10 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar6 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
      }
      if (uVar6 < uVar16) {
        if (uVar6 != 0) goto LAB_10a1adcec;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar6 * uVar16;
      }
    }
  }
  lVar4 = *param_1;
  plVar10 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *plVar8 = *plVar10;
    *plVar10 = (long)plVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar10;
    if (*plVar8 == 0) goto LAB_10a1aded0;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar6 * uVar16;
    }
    plVar10 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar10;
  }
  *plVar10 = (long)plVar8;
LAB_10a1aded0:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 10a1adf50; end: 10a1adf97;  */

void FUN_10a1adf50(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a0eb82c(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1adf98; end: 10a1ae89b;  */

void FUN_10a1adf98(undefined8 *param_1,long param_2,undefined4 param_3,uint param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *****pppppuVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 auStack_5e8 [2];
  char cStack_5d1;
  undefined1 *puStack_5d0;
  long *plStack_5c8;
  undefined8 uStack_5c0;
  int iStack_5b8;
  undefined4 uStack_5b4;
  undefined1 auStack_5b0 [4];
  undefined1 auStack_5ac [4];
  undefined1 auStack_5a8 [4];
  undefined1 auStack_5a4 [4];
  undefined8 uStack_5a0;
  undefined8 auStack_598 [79];
  undefined1 auStack_320 [72];
  undefined1 uStack_2d8;
  undefined8 ****ppppuStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  long *plStack_288;
  undefined8 ****ppppuStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined8 ****ppppuStack_260;
  long *plStack_258;
  undefined1 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined1 auStack_230 [32];
  undefined8 *puStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [24];
  char cStack_1b8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)(param_2 + (ulong)param_4 * 8);
  lVar9 = *plVar1;
  if (lVar9 == 0) {
    plVar11 = (long *)*param_1;
    uVar12 = param_1[1];
    func_0x000107c2b054(auStack_5e8,param_5);
    uStack_270 = 0;
    ppppuStack_278 = (undefined8 *****)0x0;
    uStack_268 = 0;
    FUN_10a156298(&puStack_2a0,plVar11,auStack_5e8,&ppppuStack_278);
    lVar9 = 0;
    auStack_598[0x3a] = 0;
    auStack_598[0x39] = 0;
    auStack_598[0x3c] = 0;
    auStack_598[0x3b] = 0;
    auStack_598[0x36] = 0;
    auStack_598[0x35] = 0;
    auStack_598[0x38] = 0;
    auStack_598[0x37] = 0;
    auStack_598[0x32] = 0;
    auStack_598[0x31] = 0;
    auStack_598[0x34] = 0;
    auStack_598[0x33] = 0;
    auStack_598[0x2e] = 0;
    auStack_598[0x2d] = 0;
    auStack_598[0x30] = 0;
    auStack_598[0x2f] = 0;
    auStack_598[0x2a] = 0;
    auStack_598[0x29] = 0;
    auStack_598[0x2c] = 0;
    auStack_598[0x2b] = 0;
    auStack_598[0x26] = 0;
    auStack_598[0x25] = 0;
    auStack_598[0x28] = 0;
    auStack_598[0x27] = 0;
    auStack_598[0x22] = 0;
    auStack_598[0x21] = 0;
    auStack_598[0x24] = 0;
    auStack_598[0x23] = 0;
    auStack_598[0x1e] = 0;
    auStack_598[0x1d] = 0;
    auStack_598[0x20] = 0;
    auStack_598[0x1f] = 0;
    auStack_598[0x1a] = 0;
    auStack_598[0x19] = 0;
    auStack_598[0x1c] = 0;
    auStack_598[0x1b] = 0;
    auStack_598[0x16] = 0;
    auStack_598[0x15] = 0;
    auStack_598[0x18] = 0;
    auStack_598[0x17] = 0;
    auStack_598[0x12] = 0;
    auStack_598[0x11] = 0;
    auStack_598[0x14] = 0;
    auStack_598[0x13] = 0;
    auStack_598[0xe] = 0;
    auStack_598[0xd] = 0;
    auStack_598[0x10] = 0;
    auStack_598[0xf] = 0;
    auStack_598[10] = 0;
    auStack_598[9] = 0;
    auStack_598[0xc] = 0;
    auStack_598[0xb] = 0;
    auStack_598[8] = 0;
    auStack_598[7] = 0;
    auStack_598[4] = 0;
    auStack_598[3] = 0;
    auStack_598[6] = 0;
    auStack_598[5] = 0;
    auStack_598[0] = 0;
    uStack_5a0 = 0;
    auStack_598[2] = 0;
    auStack_598[1] = 0;
    do {
      *(undefined8 *)((long)auStack_598 + lVar9 + 0x10) = 0;
      *(undefined8 *)((long)auStack_598 + lVar9 + 8) = 0xffffffff;
      *(undefined8 *)((long)auStack_598 + lVar9 + 0x20) = 0;
      *(undefined8 *)((long)auStack_598 + lVar9 + 0x18) = 0xffffffff;
      *(undefined8 *)(auStack_5a8 + lVar9) = 0;
      *(undefined8 *)(auStack_5b0 + lVar9) = 0xffffffff;
      *(undefined8 *)((long)auStack_598 + lVar9) = 0;
      *(undefined8 *)((long)&uStack_5a0 + lVar9) = 0xffffffff;
      lVar9 = lVar9 + 0x40;
    } while (lVar9 != 0x200);
    auStack_598[0x43] = 0xffffffff;
    auStack_598[0x42] = 0x100000000;
    auStack_598[0x45] = 0xffffffff;
    auStack_598[0x44] = 0x100000000;
    auStack_598[0x4b] = 0xffffffff;
    auStack_598[0x4a] = 0x100000000;
    auStack_598[0x4d] = 0xffffffff;
    auStack_598[0x4c] = 0x100000000;
    auStack_598[0x47] = 0xffffffff;
    auStack_598[0x46] = 0x100000000;
    auStack_598[0x49] = 0xffffffff;
    auStack_598[0x48] = 0x100000000;
    auStack_320[0] = 0;
    uStack_2d8 = 0;
    plStack_2c8 = (long *)0x0;
    ppppuStack_2d0 = (undefined8 ****)0x0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2b0 = 0;
    auStack_598[0x4e] = 1;
    auStack_598[0x3f] = 8;
    auStack_598[0x3e] = 0x100000000;
    auStack_598[0x41] = 0xffffffff;
    auStack_598[0x40] = 0x100000000;
    auStack_598[0x3d] = 1;
    uVar2 = uStack_270;
    pppppuVar8 = (undefined8 *****)ppppuStack_278;
    if (-1 < (long)uStack_268) {
      uVar2 = uStack_268 >> 0x38;
      pppppuVar8 = &ppppuStack_278;
    }
    _auStack_5a8 = 0x1d00000000;
    _auStack_5b0 = 0;
    func_0x000109237af0(&puStack_210,pppppuVar8,uVar2);
    func_0x00010923aaa8(&ppppuStack_260,&puStack_210);
    FUN_10a0e6cd0(auStack_320,&ppppuStack_260);
    uStack_5c0 = (undefined8 *****)auStack_230;
    func_0x00010a09ad80(&uStack_5c0);
    if (plStack_248 != (long *)0x0) {
      plStack_240 = plStack_248;
      __ZdlPv();
    }
    uStack_5c0 = &ppppuStack_260;
    FUN_10a09ae0c(&uStack_5c0);
    func_0x000109235564(&ppppuStack_260,plVar11,&plStack_208,0);
    plVar3 = plStack_258;
    ppppuStack_2d0 = ppppuStack_260;
    plVar10 = plStack_2c8;
    plStack_258 = (long *)0x0;
    ppppuStack_260 = (undefined8 ****)0x0;
    plStack_2c8 = plVar3;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 1;
      do {
        lVar9 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_258;
    if (plStack_258 != (long *)0x0) {
      plVar3 = plStack_258 + 1;
      do {
        lVar9 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_258 + 0x10))(plStack_258);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    func_0x00010923ff08(&puStack_210);
    plStack_208 = plStack_298;
    puStack_210 = puStack_2a0;
    if (plStack_298 != (long *)0x0) {
      plVar10 = plStack_298 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plStack_1f8 = plStack_288;
    plStack_200 = (long *)uStack_290;
    if (plStack_288 != (long *)0x0) {
      plVar10 = plStack_288 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10a0eaba8(&uStack_2c0,&puStack_210,&puStack_1f0,2);
    lVar9 = 0x10;
    do {
      func_0x00010a0eb124((long)&puStack_210 + lVar9);
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != -0x10);
    plStack_258 = (long *)0x0;
    ppppuStack_260 = (undefined8 ****)0x0;
    plStack_248 = (long *)0x0;
    puStack_250 = (undefined1 *)0x0;
    uVar4 = *(uint *)((long)plVar11 + 0x734);
    plVar10 = (long *)&UNK_10e495ea8;
    if (uVar4 != 2) {
      plVar10 = (long *)&UNK_10e495ec0;
    }
    plVar3 = (long *)&UNK_10e495f20;
    if (uVar4 != 3) {
      plVar3 = plVar10;
    }
    cStack_1b8 = '\0';
    plStack_200 = (long *)0x0;
    puStack_210 = (undefined8 *)0x0;
    plStack_208 = (long *)0x0;
    plStack_1f8 = (long *)((ulong)plStack_1f8 & 0xffffffff00000000);
    uStack_1e8 = 0;
    puStack_1f0 = (undefined *)0x0;
    puStack_1d8 = (undefined8 *)0x0;
    puStack_1e0 = (undefined8 *)0x0;
    auStack_1d0[0] = 0;
    plVar10 = (long *)&UNK_10e495e90;
    if (1 < uVar4) {
      plVar10 = plVar3;
    }
    plVar3 = (long *)*plVar10;
    if (-1 < *(char *)((long)plVar10 + 0x17)) {
      plVar3 = plVar10;
    }
    plVar10 = plVar3;
    _strlen();
    puStack_1d8 = puStack_2a0;
    plStack_208 = plVar3;
    plStack_200 = plVar10;
    (**(code **)(*plVar11 + 0xa8))(&uStack_5c0,plVar11,&puStack_210);
    ppppuStack_260 = uStack_5c0;
    uStack_5c0._0_4_ = 0;
    uStack_5c0._4_4_ = 0;
    iStack_5b8 = 0;
    uStack_5b4 = 0;
    if (plStack_258 != (long *)0x0) {
      plVar10 = plStack_258 + 1;
      do {
        lVar9 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_258 + 0x10))(plStack_258);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_258);
      }
    }
    plVar10 = (long *)CONCAT44(uStack_5b4,iStack_5b8);
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 1;
      do {
        lVar9 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (cStack_1b8 == '\x01') {
      uStack_5c0 = (undefined8 *****)auStack_1d0;
      func_0x00010a0eab1c(&uStack_5c0);
    }
    uVar4 = *(uint *)((long)plVar11 + 0x734);
    plVar10 = (long *)&UNK_10e495ef0;
    if (uVar4 != 2) {
      plVar10 = (long *)&UNK_10e495f08;
    }
    plVar3 = (long *)&UNK_10e495f20;
    if (uVar4 != 3) {
      plVar3 = plVar10;
    }
    bVar6 = (int)uVar12 == 0;
    bVar7 = (int)((ulong)uVar12 >> 0x20) == 0;
    uStack_5c0._4_4_ = (uint)(~-bVar6 & 2) + (uint)bVar6;
    iStack_5b8 = (uint)(~-bVar7 & 2) + (uint)bVar7;
    plVar10 = (long *)&UNK_10e495ed8;
    if (1 < uVar4) {
      plVar10 = plVar3;
    }
    cStack_1b8 = '\0';
    puStack_210 = (undefined8 *)0x100000000;
    puStack_1d8 = (undefined8 *)0x0;
    auStack_1d0[0] = 0;
    plVar3 = (long *)*plVar10;
    if (-1 < *(char *)((long)plVar10 + 0x17)) {
      plVar3 = plVar10;
    }
    plVar10 = plVar3;
    uStack_5c0._0_4_ = param_4;
    uStack_5b4 = param_3;
    _strlen();
    puStack_1e0 = &uStack_5c0;
    plStack_1f8 = (long *)CONCAT44(plStack_1f8._4_4_,4);
    uStack_1e8 = 0x10;
    puStack_1f0 = &UNK_10e49b3d4;
    puStack_1d8 = (undefined8 *)uStack_290;
    plStack_208 = plVar3;
    plStack_200 = plVar10;
    (**(code **)(*plVar11 + 0xa8))(&puStack_5d0,plVar11,&puStack_210);
    plVar11 = plStack_248;
    plStack_248 = plStack_5c8;
    puStack_250 = puStack_5d0;
    puStack_5d0 = (undefined1 *)0x0;
    plStack_5c8 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 1;
      do {
        lVar9 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = plStack_5c8;
    if (plStack_5c8 != (long *)0x0) {
      plVar10 = plStack_5c8 + 1;
      do {
        lVar9 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5c8 + 0x10))(plStack_5c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (cStack_1b8 == '\x01') {
      puStack_5d0 = auStack_1d0;
      func_0x00010a0eab1c(&puStack_5d0);
    }
    uStack_5c0 = &ppppuStack_260;
    iStack_5b8 = 2;
    uStack_5b4 = 0;
    unaff_x21 = 0x5f8;
    __Znwm();
    plStack_208 = (long *)0x0;
    puStack_210 = (undefined8 *)0x0;
    func_0x000109293548();
    lVar9 = 0x10;
    do {
      func_0x00010a0eb17c((long)&ppppuStack_260 + lVar9);
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != -0x10);
    puStack_210 = &uStack_2c0;
    FUN_10a0e9b7c(&puStack_210);
    plVar11 = plStack_2c8;
    if (plStack_2c8 != (long *)0x0) {
      plVar10 = plStack_2c8 + 1;
      do {
        lVar9 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    func_0x00010a09ad20(auStack_320);
    if (plStack_288 != (long *)0x0) {
      plVar11 = plStack_288 + 1;
      do {
        lVar9 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_288 + 0x10))(plStack_288);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_288);
      }
    }
    if (plStack_298 != (long *)0x0) {
      plVar11 = plStack_298 + 1;
      do {
        lVar9 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_298 + 0x10))(plStack_298);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_298);
      }
    }
    if ((long)uStack_268 < 0) {
      __ZdlPv(ppppuStack_278);
    }
    if (cStack_5d1 < '\0') {
      __ZdlPv(auStack_5e8[0]);
    }
    lVar9 = 0;
    *(undefined4 *)(unaff_x21 + 0x330) = 1;
    *(undefined1 *)(unaff_x21 + 0x334) = 1;
    *(undefined8 *)(unaff_x21 + 0x338) = 0x200000000;
    *(undefined4 *)(unaff_x21 + 0x340) = 0;
    *(undefined1 *)(unaff_x21 + 0x344) = 0;
    *(undefined8 *)(unaff_x21 + 0x348) = 0;
    *(undefined4 *)(unaff_x21 + 0x350) = 1;
    *(undefined2 *)(unaff_x21 + 0x354) = 0;
    *(undefined4 *)(unaff_x21 + 900) = 0;
    *(undefined8 *)(unaff_x21 + 0x37c) = 0;
    *(undefined8 *)(unaff_x21 + 0x374) = 0;
    *(undefined2 *)(unaff_x21 + 0x358) = 0;
    *(undefined4 *)(unaff_x21 + 0x35c) = 7;
    *(undefined1 *)(unaff_x21 + 0x360) = 0;
    *(undefined8 *)(unaff_x21 + 0x36c) = 0x700000000;
    *(undefined8 *)(unaff_x21 + 0x364) = 0;
    *(undefined8 *)(unaff_x21 + 0x388) = 7;
    *(undefined4 *)(unaff_x21 + 0x390) = 0;
    do {
      auStack_5b0[lVar9] = 0;
      *(undefined8 *)(auStack_5a8 + lVar9 + 4) = 0x100000000;
      *(undefined8 *)(auStack_5b0 + lVar9 + 4) = 1;
      *(undefined8 *)((long)auStack_598 + lVar9) = 0;
      *(undefined4 *)((long)&uStack_5a0 + lVar9 + 4) = 0;
      lVar9 = lVar9 + 0x20;
    } while (lVar9 != 0x100);
    auStack_598[0x1d] = 1;
    _auStack_5a8 = 0;
    _auStack_5b0 = 0x100000000;
    auStack_598[0] = 0xf00000000;
    uStack_5a0 = 1;
    *(undefined8 *)(unaff_x21 + 0x498) = 0;
    func_0x00010928bc78(unaff_x21 + 0x398,auStack_5b0);
    FUN_10a1ae89c(plVar1,unaff_x21);
    lVar9 = *plVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail(lVar9);
  FUN_10a0ea908(unaff_x21);
  do {
    __ZdlPv();
    do {
      __Unwind_Resume(lVar9);
      if ((long)uStack_268 < 0) {
        __ZdlPv(ppppuStack_278);
      }
    } while (-1 < cStack_5d1);
  } while( true );
}



/* Entry: 10a1ae89c; end: 10a1ae8c3;  */

void FUN_10a1ae89c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a0ea908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a1ae8c4; end: 10a1ae8d3;  */

void FUN_10a1ae8c4(void)

{
  uRam0000000113300788 = 1;
  return;
}



/* Entry: 10a1ae8d4; end: 10a1ae91b;  */

void FUN_10a1ae8d4(long param_1)

{
  code *pcVar1;
  undefined1 auStack_40 [31];
  undefined1 uStack_21;
  
  func_0x00010a002480(auStack_40,param_1 + 8,&uStack_21);
  FUN_10a1ae91c(auStack_40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1ae900);
  (*pcVar1)();
}



/* Entry: 10a1ae91c; end: 10a1ae9eb;  */

void FUN_10a1ae91c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a002a94(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110bab6b8;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bab6b8;
  ___cxa_throw(puVar2,&PTR_DAT_110bab690,FUN_10a1ae9ec);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1ae9d4);
  (*pcVar1)();
}



/* Entry: 10a1ae9ec; end: 10a1ae9ef;  */

void FUN_10a1ae9ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a1ae9f0; end: 10a1aea03;  */

void FUN_10a1ae9f0(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1aea04; end: 10a1aea83;  */

ulong FUN_10a1aea04(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = param_2;
  _strlen();
  if (lVar1 == 0) {
LAB_10a1aea68:
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = param_1[1];
    if (param_3 < uVar3) {
      uVar3 = param_3 + 1;
    }
    do {
      if (uVar3 == 0) goto LAB_10a1aea68;
      lVar2 = param_2;
      _memchr(param_2,(long)*(char *)(lVar4 + -1 + uVar3),lVar1);
      uVar3 = uVar3 - 1;
    } while (lVar2 == 0);
  }
  return uVar3;
}



/* Entry: 10a1aea84; end: 10a1aeb13;  */

undefined8 * FUN_10a1aea84(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)*param_1;
  FUN_10a1aeb14(puVar3,puVar3 + 0xc,4,0,param_2);
  lVar5 = *param_1;
  if ((undefined8 *)(lVar5 + 0x60) != puVar3) {
    uVar4 = *puVar3;
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    FUN_10a003d5c(uVar4,puVar3[1],puVar2,uVar1);
    if ((char)uVar4 < '\x01') {
      return puVar3;
    }
    lVar5 = *param_1;
  }
  return (undefined8 *)(lVar5 + 0x60);
}



/* Entry: 10a1aeb14; end: 10a1aebcf;  */

undefined1  [16]
FUN_10a1aeb14(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  if (param_3 != 0) {
    puVar4 = param_2;
    while( true ) {
      while( true ) {
        param_2 = (undefined8 *)(param_1 + param_4 * 0x18);
        uVar3 = *param_2;
        uVar1 = param_5[1];
        puVar2 = (undefined8 *)*param_5;
        if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)param_5 + 0x17);
          puVar2 = param_5;
        }
        FUN_10a003d5c(uVar3,param_2[1],puVar2,uVar1);
        if (((uint)uVar3 >> 7 & 1) != 0) break;
        if (param_3 >> 1 <= param_4) goto LAB_10a1aebac;
        param_4 = param_4 << 1 | 1;
        puVar4 = param_2;
      }
      param_2 = puVar4;
      if (param_3 - 1 >> 1 <= param_4) break;
      param_4 = param_4 * 2 + 2;
    }
  }
LAB_10a1aebac:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 10a1aebd0; end: 10a1aec2b;  */

void FUN_10a1aebd0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1aebd4);
  (*pcVar1)();
}



/* Entry: 10a1aec2c; end: 10a1aec6f;  */

bool FUN_10a1aec2c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  plVar1 = (long *)plVar2[8];
  (**(code **)(*plVar1 + 0x30))(plVar1,plVar2 + 9,0x10000);
  *plVar2 = (long)(plVar2 + 9);
  plVar2[1] = (long)plVar1;
  return plVar1 != (long *)0x0;
}



/* Entry: 10a1aec70; end: 10a1aecb3;  */

void FUN_10a1aec70(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x28);
  uVar2 = plVar3[1];
  uVar1 = uVar2;
  if (param_2 <= uVar2) {
    uVar1 = param_2;
  }
  *plVar3 = *plVar3 + uVar1;
  plVar3[1] = uVar2 - uVar1;
  if (uVar2 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010a1aeca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)plVar3[8] + 0x20))((long *)plVar3[8],param_2 - uVar1);
    return;
  }
  return;
}



/* Entry: 10a1aecb4; end: 10a1aecdb;  */

/* WARNING: Possible PIC construction at 0x0001098a05b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001098a0630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098a05bc) */
/* WARNING: Removing unreachable block (ram,0x0001098a0634) */

void FUN_10a1aecb4(void)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  int in_w4;
  ulong uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 uStack_541;
  uint auStack_540 [256];
  long lStack_140;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar9 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar9 < (undefined *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)puVar9 * 0x18);
    return;
  }
  func_0x000109ffded8();
  uVar22 = extraout_x11_00;
  uVar8 = extraout_x12_01;
  if ((bRam000000011382b580 & 1) != 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    ___stack_chk_fail();
    uVar22 = extraout_x11;
    uVar8 = extraout_x12;
  }
  uVar20 = 0;
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    lVar13 = uVar20 * 0xc;
    iVar19 = *(int *)(&UNK_10e007018 + lVar13);
    if ((iVar19 == 0) && (*(int *)(&UNK_10e00701c + lVar13) == 0)) {
      iVar14 = 0;
      bVar5 = false;
code_r0x0001098a06ec:
      uVar22 = 0;
      uVar17 = *(uint *)(&UNK_10e007014 + lVar13);
      uVar23 = (ulong)(uint)(iVar14 + iVar19 * 2 + 1 << (ulong)(uVar17 & 0x1f));
      do {
        uVar21 = (uint)uVar22;
        if (iVar19 == 0 && !bVar5) {
          uVar8 = uVar22;
          uVar18 = 0;
code_r0x0001098a0738:
          uVar10 = 0;
        }
        else {
          uVar10 = uVar21 >> (ulong)(uVar17 & 0x1f);
          uVar8 = (ulong)(~(-1 << (ulong)(uVar17 & 0x1f)) & uVar21);
          uVar18 = uVar10;
          if (iVar19 != 0) goto code_r0x0001098a0738;
          uVar18 = 0;
        }
        func_0x0001098a65ac(uVar8,uVar18,uVar10,uVar20);
        auStack_540[uVar22] = uVar21 | (int)uVar8 << 8;
        uVar22 = uVar22 + 1;
      } while (uVar23 != uVar22);
      __ZNSt3__16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_(auStack_540,auStack_540 + uVar23,&uStack_541);
      uVar12 = 0;
      do {
        uVar17 = auStack_540[uVar12];
        uVar22 = (ulong)(uVar17 >> 8);
        puVar1 = (undefined1 *)(uVar20 * 0x200 + 0x113738918 + (ulong)(byte)uVar17 * 2);
        *puVar1 = (char)(uVar17 >> 8);
        puVar1[1] = (char)uVar12;
        uVar12 = uVar12 + 1;
        uVar8 = extraout_x12_00;
      } while (uVar23 != uVar12);
    }
    else if ((1L << (uVar20 & 0x3f) & 0xdb6d0U) != 0) {
      iVar14 = *(int *)(&UNK_10e00701c + lVar13) << 2;
      bVar5 = *(int *)(&UNK_10e00701c + lVar13) != 0;
      goto code_r0x0001098a06ec;
    }
    uVar20 = uVar20 + 1;
    if (uVar20 == 0x15) {
      lVar13 = 0;
      do {
        uVar23 = 0;
        uVar20 = lVar13 * 8 + 0x11373b318;
        bVar5 = true;
        do {
          bVar6 = bVar5;
          uVar17 = 0;
          uVar18 = 0xffff;
          uVar21 = (int)uVar23 << 6 | 0x20;
          do {
            uVar10 = 0;
            uVar16 = uVar21;
            do {
              iVar19 = (uVar16 >> 6) - (int)lVar13;
              uVar15 = iVar19 * iVar19;
              uVar12 = (ulong)uVar15;
              bVar5 = uVar18 <= uVar15;
              uVar7 = uVar17;
              if (bVar5) {
                uVar7 = (uint)uVar8;
                uVar15 = uVar18;
              }
              uVar18 = uVar15;
              uVar8 = (ulong)uVar7;
              uVar15 = uVar10;
              if (bVar5) {
                uVar15 = (uint)uVar22;
              }
              uVar22 = (ulong)uVar15;
              uVar10 = uVar10 + 1;
              uVar16 = uVar16 + 0x2a;
            } while (uVar10 != 0x80);
            uVar17 = uVar17 + 1;
            uVar21 = uVar21 + 0x56;
          } while (uVar17 != 0x80);
          lVar2 = uVar20 + uVar23 * 4;
          *(short *)(lVar2 + 0x400) = (short)uVar18;
          *(char *)(lVar2 + 0x402) = (char)uVar7;
          *(char *)(lVar2 + 0x403) = (char)uVar15;
          uVar23 = 1;
          bVar5 = false;
        } while (bVar6);
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x100);
      lVar13 = 0;
      do {
        uVar17 = 0;
        uVar21 = 0xffff;
        do {
          iVar19 = 0;
          uVar22 = 0;
          uVar18 = (uVar17 * 2 + (uVar17 >> 6)) * 0x2b + 0x20;
          uVar8 = (ulong)uVar18;
          uVar10 = uVar21;
          do {
            uVar7 = (uint)uVar22;
            iVar14 = (uVar18 + (iVar19 + (uVar7 >> 6)) * 0x15 >> 6) - (int)lVar13;
            uVar21 = iVar14 * iVar14;
            uVar11 = (ulong)uVar21;
            bVar5 = uVar10 <= uVar21;
            uVar16 = uVar7;
            if (bVar5) {
              uVar16 = (uint)uVar20;
            }
            uVar20 = (ulong)uVar16;
            uVar15 = uVar17;
            if (bVar5) {
              uVar15 = (uint)uVar23;
            }
            uVar23 = (ulong)uVar15;
            if (bVar5) {
              uVar21 = uVar10;
            }
            uVar22 = (ulong)(uVar7 + 1);
            iVar19 = iVar19 + 2;
            uVar10 = uVar21;
          } while (uVar7 + 1 != 0x80);
          uVar17 = uVar17 + 1;
        } while (uVar17 != 0x80);
        lVar2 = lVar13 * 4;
        *(short *)(lVar2 + 0x11373b318) = (short)uVar21;
        *(char *)(lVar2 + 0x11373b31a) = (char)uVar15;
        *(char *)(lVar2 + 0x11373b31b) = (char)uVar16;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x100);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
        return;
      }
      ___stack_chk_fail();
      lVar13 = 0;
      do {
        if (0 < (int)uVar11) {
          uVar20 = 0;
          puVar1 = (undefined1 *)(uVar22 + lVar13 * 2);
          iVar19 = 0x100;
          do {
            if (0 < (int)uVar12) {
              uVar23 = 0;
              do {
                uVar17 = (uint)*(byte *)(uVar8 + uVar23);
                if (in_w4 == 1) {
                  iVar3 = ((uint)*(byte *)(uVar8 + uVar20) + uVar17 * 2) / 3 - (int)lVar13;
                  iVar14 = -iVar3;
                  if (-1 < iVar3) {
                    iVar14 = iVar3;
                  }
                  iVar4 = uVar17 - *(byte *)(uVar8 + uVar20);
                  iVar3 = -iVar4;
                  if (-1 < iVar4) {
                    iVar3 = iVar4;
                  }
                  iVar3 = iVar14 + ((uint)(iVar3 * 0xf5d) >> 0x11);
                }
                else {
                  iVar14 = uVar17 - (int)lVar13;
                  iVar3 = -iVar14;
                  if (-1 < iVar14) {
                    iVar3 = iVar14;
                  }
                }
                if (iVar3 < iVar19) {
                  *puVar1 = (char)uVar23;
                  puVar1[1] = (char)uVar20;
                  iVar19 = iVar3;
                }
                uVar23 = uVar23 + 1;
              } while ((uVar12 & 0xffffffff) != uVar23);
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != (uVar11 & 0xffffffff));
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x100);
      return;
    }
  } while( true );
}



/* Entry: 10a1aecdc; end: 10a1aed1f;  */

/* WARNING: Possible PIC construction at 0x0001098a05b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001098a0630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098a05bc) */
/* WARNING: Removing unreachable block (ram,0x0001098a0634) */

void FUN_10a1aecdc(ulong param_1)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int in_w4;
  ulong uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 uStack_521;
  uint auStack_520 [256];
  long lStack_120;
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_1 * 0x18);
    return;
  }
  func_0x000109ffded8();
  uVar21 = extraout_x11_00;
  uVar8 = extraout_x12_01;
  if ((bRam000000011382b580 & 1) != 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    ___stack_chk_fail();
    uVar21 = extraout_x11;
    uVar8 = extraout_x12;
  }
  uVar19 = 0;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    lVar12 = uVar19 * 0xc;
    iVar18 = *(int *)(&UNK_10e007018 + lVar12);
    if ((iVar18 == 0) && (*(int *)(&UNK_10e00701c + lVar12) == 0)) {
      iVar13 = 0;
      bVar5 = false;
code_r0x0001098a06ec:
      uVar21 = 0;
      uVar16 = *(uint *)(&UNK_10e007014 + lVar12);
      uVar22 = (ulong)(uint)(iVar13 + iVar18 * 2 + 1 << (ulong)(uVar16 & 0x1f));
      do {
        uVar20 = (uint)uVar21;
        if (iVar18 == 0 && !bVar5) {
          uVar8 = uVar21;
          uVar17 = 0;
code_r0x0001098a0738:
          uVar9 = 0;
        }
        else {
          uVar9 = uVar20 >> (ulong)(uVar16 & 0x1f);
          uVar8 = (ulong)(~(-1 << (ulong)(uVar16 & 0x1f)) & uVar20);
          uVar17 = uVar9;
          if (iVar18 != 0) goto code_r0x0001098a0738;
          uVar17 = 0;
        }
        func_0x0001098a65ac(uVar8,uVar17,uVar9,uVar19);
        auStack_520[uVar21] = uVar20 | (int)uVar8 << 8;
        uVar21 = uVar21 + 1;
      } while (uVar22 != uVar21);
      __ZNSt3__16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_(auStack_520,auStack_520 + uVar22,&uStack_521);
      uVar11 = 0;
      do {
        uVar16 = auStack_520[uVar11];
        uVar21 = (ulong)(uVar16 >> 8);
        puVar1 = (undefined1 *)(uVar19 * 0x200 + 0x113738918 + (ulong)(byte)uVar16 * 2);
        *puVar1 = (char)(uVar16 >> 8);
        puVar1[1] = (char)uVar11;
        uVar11 = uVar11 + 1;
        uVar8 = extraout_x12_00;
      } while (uVar22 != uVar11);
    }
    else if ((1L << (uVar19 & 0x3f) & 0xdb6d0U) != 0) {
      iVar13 = *(int *)(&UNK_10e00701c + lVar12) << 2;
      bVar5 = *(int *)(&UNK_10e00701c + lVar12) != 0;
      goto code_r0x0001098a06ec;
    }
    uVar19 = uVar19 + 1;
    if (uVar19 == 0x15) {
      lVar12 = 0;
      do {
        uVar22 = 0;
        uVar19 = lVar12 * 8 + 0x11373b318;
        bVar5 = true;
        do {
          bVar6 = bVar5;
          uVar16 = 0;
          uVar17 = 0xffff;
          uVar20 = (int)uVar22 << 6 | 0x20;
          do {
            uVar9 = 0;
            uVar15 = uVar20;
            do {
              iVar18 = (uVar15 >> 6) - (int)lVar12;
              uVar14 = iVar18 * iVar18;
              uVar11 = (ulong)uVar14;
              bVar5 = uVar17 <= uVar14;
              uVar7 = uVar16;
              if (bVar5) {
                uVar7 = (uint)uVar8;
                uVar14 = uVar17;
              }
              uVar17 = uVar14;
              uVar8 = (ulong)uVar7;
              uVar14 = uVar9;
              if (bVar5) {
                uVar14 = (uint)uVar21;
              }
              uVar21 = (ulong)uVar14;
              uVar9 = uVar9 + 1;
              uVar15 = uVar15 + 0x2a;
            } while (uVar9 != 0x80);
            uVar16 = uVar16 + 1;
            uVar20 = uVar20 + 0x56;
          } while (uVar16 != 0x80);
          lVar2 = uVar19 + uVar22 * 4;
          *(short *)(lVar2 + 0x400) = (short)uVar17;
          *(char *)(lVar2 + 0x402) = (char)uVar7;
          *(char *)(lVar2 + 0x403) = (char)uVar14;
          uVar22 = 1;
          bVar5 = false;
        } while (bVar6);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x100);
      lVar12 = 0;
      do {
        uVar16 = 0;
        uVar20 = 0xffff;
        do {
          iVar18 = 0;
          uVar21 = 0;
          uVar17 = (uVar16 * 2 + (uVar16 >> 6)) * 0x2b + 0x20;
          uVar8 = (ulong)uVar17;
          uVar9 = uVar20;
          do {
            uVar7 = (uint)uVar21;
            iVar13 = (uVar17 + (iVar18 + (uVar7 >> 6)) * 0x15 >> 6) - (int)lVar12;
            uVar20 = iVar13 * iVar13;
            uVar10 = (ulong)uVar20;
            bVar5 = uVar9 <= uVar20;
            uVar15 = uVar7;
            if (bVar5) {
              uVar15 = (uint)uVar19;
            }
            uVar19 = (ulong)uVar15;
            uVar14 = uVar16;
            if (bVar5) {
              uVar14 = (uint)uVar22;
            }
            uVar22 = (ulong)uVar14;
            if (bVar5) {
              uVar20 = uVar9;
            }
            uVar21 = (ulong)(uVar7 + 1);
            iVar18 = iVar18 + 2;
            uVar9 = uVar20;
          } while (uVar7 + 1 != 0x80);
          uVar16 = uVar16 + 1;
        } while (uVar16 != 0x80);
        lVar2 = lVar12 * 4;
        *(short *)(lVar2 + 0x11373b318) = (short)uVar20;
        *(char *)(lVar2 + 0x11373b31a) = (char)uVar14;
        *(char *)(lVar2 + 0x11373b31b) = (char)uVar15;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x100);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
        return;
      }
      ___stack_chk_fail();
      lVar12 = 0;
      do {
        if (0 < (int)uVar10) {
          uVar19 = 0;
          puVar1 = (undefined1 *)(uVar21 + lVar12 * 2);
          iVar18 = 0x100;
          do {
            if (0 < (int)uVar11) {
              uVar22 = 0;
              do {
                uVar16 = (uint)*(byte *)(uVar8 + uVar22);
                if (in_w4 == 1) {
                  iVar3 = ((uint)*(byte *)(uVar8 + uVar19) + uVar16 * 2) / 3 - (int)lVar12;
                  iVar13 = -iVar3;
                  if (-1 < iVar3) {
                    iVar13 = iVar3;
                  }
                  iVar4 = uVar16 - *(byte *)(uVar8 + uVar19);
                  iVar3 = -iVar4;
                  if (-1 < iVar4) {
                    iVar3 = iVar4;
                  }
                  iVar3 = iVar13 + ((uint)(iVar3 * 0xf5d) >> 0x11);
                }
                else {
                  iVar13 = uVar16 - (int)lVar12;
                  iVar3 = -iVar13;
                  if (-1 < iVar13) {
                    iVar3 = iVar13;
                  }
                }
                if (iVar3 < iVar18) {
                  *puVar1 = (char)uVar22;
                  puVar1[1] = (char)uVar19;
                  iVar18 = iVar3;
                }
                uVar22 = uVar22 + 1;
              } while ((uVar11 & 0xffffffff) != uVar22);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != (uVar10 & 0xffffffff));
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x100);
      return;
    }
  } while( true );
}



/* Entry: 10a1aed20; end: 10a1aed23;  */

/* WARNING: Possible PIC construction at 0x0001098a05b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001098a0630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098a05bc) */
/* WARNING: Removing unreachable block (ram,0x0001098a0634) */

void FUN_10a1aed20(void)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int in_w4;
  long lVar12;
  int iVar13;
  uint uVar14;
  ulong extraout_x11;
  ulong in_x11;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong in_x12;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 uStack_501;
  uint auStack_500 [256];
  long lStack_100;
  
  if ((bRam000000011382b580 & 1) != 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    ___stack_chk_fail();
    in_x11 = extraout_x11;
    in_x12 = extraout_x12;
  }
  uVar19 = 0;
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    lVar12 = uVar19 * 0xc;
    iVar18 = *(int *)(&UNK_10e007018 + lVar12);
    if ((iVar18 == 0) && (*(int *)(&UNK_10e00701c + lVar12) == 0)) {
      iVar13 = 0;
      bVar5 = false;
code_r0x0001098a06ec:
      uVar21 = 0;
      uVar16 = *(uint *)(&UNK_10e007014 + lVar12);
      uVar22 = (ulong)(uint)(iVar13 + iVar18 * 2 + 1 << (ulong)(uVar16 & 0x1f));
      do {
        uVar20 = (uint)uVar21;
        if (iVar18 == 0 && !bVar5) {
          uVar8 = uVar21;
          uVar17 = 0;
code_r0x0001098a0738:
          uVar9 = 0;
        }
        else {
          uVar9 = uVar20 >> (ulong)(uVar16 & 0x1f);
          uVar8 = (ulong)(~(-1 << (ulong)(uVar16 & 0x1f)) & uVar20);
          uVar17 = uVar9;
          if (iVar18 != 0) goto code_r0x0001098a0738;
          uVar17 = 0;
        }
        func_0x0001098a65ac(uVar8,uVar17,uVar9,uVar19);
        auStack_500[uVar21] = uVar20 | (int)uVar8 << 8;
        uVar21 = uVar21 + 1;
      } while (uVar22 != uVar21);
      __ZNSt3__16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_(auStack_500,auStack_500 + uVar22,&uStack_501);
      uVar21 = 0;
      do {
        uVar16 = auStack_500[uVar21];
        in_x11 = (ulong)(uVar16 >> 8);
        puVar1 = (undefined1 *)(uVar19 * 0x200 + 0x113738918 + (ulong)(byte)uVar16 * 2);
        *puVar1 = (char)(uVar16 >> 8);
        puVar1[1] = (char)uVar21;
        uVar21 = uVar21 + 1;
        in_x12 = extraout_x12_00;
      } while (uVar22 != uVar21);
    }
    else if ((1L << (uVar19 & 0x3f) & 0xdb6d0U) != 0) {
      iVar13 = *(int *)(&UNK_10e00701c + lVar12) << 2;
      bVar5 = *(int *)(&UNK_10e00701c + lVar12) != 0;
      goto code_r0x0001098a06ec;
    }
    uVar19 = uVar19 + 1;
    if (uVar19 == 0x15) {
      lVar12 = 0;
      do {
        uVar21 = 0;
        uVar19 = lVar12 * 8 + 0x11373b318;
        bVar5 = true;
        do {
          bVar6 = bVar5;
          uVar16 = 0;
          uVar17 = 0xffff;
          uVar20 = (int)uVar21 << 6 | 0x20;
          do {
            uVar9 = 0;
            uVar15 = uVar20;
            do {
              iVar18 = (uVar15 >> 6) - (int)lVar12;
              uVar14 = iVar18 * iVar18;
              uVar22 = (ulong)uVar14;
              bVar5 = uVar17 <= uVar14;
              uVar7 = uVar16;
              if (bVar5) {
                uVar7 = (uint)in_x12;
                uVar14 = uVar17;
              }
              uVar17 = uVar14;
              in_x12 = (ulong)uVar7;
              uVar14 = uVar9;
              if (bVar5) {
                uVar14 = (uint)in_x11;
              }
              in_x11 = (ulong)uVar14;
              uVar9 = uVar9 + 1;
              uVar15 = uVar15 + 0x2a;
            } while (uVar9 != 0x80);
            uVar16 = uVar16 + 1;
            uVar20 = uVar20 + 0x56;
          } while (uVar16 != 0x80);
          lVar2 = uVar19 + uVar21 * 4;
          *(short *)(lVar2 + 0x400) = (short)uVar17;
          *(char *)(lVar2 + 0x402) = (char)uVar7;
          *(char *)(lVar2 + 0x403) = (char)uVar14;
          uVar21 = 1;
          bVar5 = false;
        } while (bVar6);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x100);
      lVar12 = 0;
      do {
        uVar16 = 0;
        uVar20 = 0xffff;
        do {
          iVar18 = 0;
          uVar8 = 0;
          uVar17 = (uVar16 * 2 + (uVar16 >> 6)) * 0x2b + 0x20;
          uVar10 = (ulong)uVar17;
          uVar9 = uVar20;
          do {
            uVar7 = (uint)uVar8;
            iVar13 = (uVar17 + (iVar18 + (uVar7 >> 6)) * 0x15 >> 6) - (int)lVar12;
            uVar20 = iVar13 * iVar13;
            uVar11 = (ulong)uVar20;
            bVar5 = uVar9 <= uVar20;
            uVar15 = uVar7;
            if (bVar5) {
              uVar15 = (uint)uVar19;
            }
            uVar19 = (ulong)uVar15;
            uVar14 = uVar16;
            if (bVar5) {
              uVar14 = (uint)uVar21;
            }
            uVar21 = (ulong)uVar14;
            if (bVar5) {
              uVar20 = uVar9;
            }
            uVar8 = (ulong)(uVar7 + 1);
            iVar18 = iVar18 + 2;
            uVar9 = uVar20;
          } while (uVar7 + 1 != 0x80);
          uVar16 = uVar16 + 1;
        } while (uVar16 != 0x80);
        lVar2 = lVar12 * 4;
        *(short *)(lVar2 + 0x11373b318) = (short)uVar20;
        *(char *)(lVar2 + 0x11373b31a) = (char)uVar14;
        *(char *)(lVar2 + 0x11373b31b) = (char)uVar15;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x100);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
        return;
      }
      ___stack_chk_fail();
      lVar12 = 0;
      do {
        if (0 < (int)uVar11) {
          uVar19 = 0;
          puVar1 = (undefined1 *)(uVar8 + lVar12 * 2);
          iVar18 = 0x100;
          do {
            if (0 < (int)uVar22) {
              uVar21 = 0;
              do {
                uVar16 = (uint)*(byte *)(uVar10 + uVar21);
                if (in_w4 == 1) {
                  iVar3 = ((uint)*(byte *)(uVar10 + uVar19) + uVar16 * 2) / 3 - (int)lVar12;
                  iVar13 = -iVar3;
                  if (-1 < iVar3) {
                    iVar13 = iVar3;
                  }
                  iVar4 = uVar16 - *(byte *)(uVar10 + uVar19);
                  iVar3 = -iVar4;
                  if (-1 < iVar4) {
                    iVar3 = iVar4;
                  }
                  iVar3 = iVar13 + ((uint)(iVar3 * 0xf5d) >> 0x11);
                }
                else {
                  iVar13 = uVar16 - (int)lVar12;
                  iVar3 = -iVar13;
                  if (-1 < iVar13) {
                    iVar3 = iVar13;
                  }
                }
                if (iVar3 < iVar18) {
                  *puVar1 = (char)uVar21;
                  puVar1[1] = (char)uVar19;
                  iVar18 = iVar3;
                }
                uVar21 = uVar21 + 1;
              } while ((uVar22 & 0xffffffff) != uVar21);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != (uVar11 & 0xffffffff));
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x100);
      return;
    }
  } while( true );
}



/* Entry: 10a1aed24; end: 10a1aee37;  */

undefined8 * FUN_10a1aed24(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110bab430;
  if (param_1[0x13b] != 0) {
    param_1[0x13c] = param_1[0x13b];
    __ZdlPv();
  }
  if (param_1[0x138] != 0) {
    param_1[0x139] = param_1[0x138];
    __ZdlPv();
  }
  if (param_1[0x133] != 0) {
    _free();
  }
  lVar1 = 0x980;
  do {
    if (*(long *)((long)param_1 + lVar1) != 0) {
      _free();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x680);
  do {
    if (*(long *)((long)param_1 + lVar1) != 0) {
      _free();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0x650);
  func_0x0001098abcd8(param_1 + 0x3a);
  if (param_1[0x33] != 0) {
    _free();
  }
  if (param_1[0x30] != 0) {
    _free();
  }
  plVar2 = (long *)param_1[0x2a];
  if (plVar2 != (long *)0x0) {
    if (param_1[0x2b] != 0) {
      lVar1 = param_1[0x2b] * 0x30;
      do {
        if (plVar2[3] != 0) {
          _free();
        }
        if (*plVar2 != 0) {
          _free();
        }
        plVar2 = plVar2 + 6;
        lVar1 = lVar1 + -0x30;
      } while (lVar1 != 0);
      plVar2 = (long *)param_1[0x2a];
    }
    _free(plVar2);
  }
  if (param_1[0x27] != 0) {
    _free();
  }
  if (param_1[0x24] != 0) {
    _free();
  }
  *param_1 = &PTR_FUN_110bab6e0;
  plVar2 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 10a1aee38; end: 10a1aeec3;  */

void FUN_10a1aee38(void)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0xff000000ff;
  uStack_30 = 0x8000000000;
  uStack_18 = 0xff;
  uStack_20 = 0x1000000ff;
  lVar1 = *(long *)PTR__kvImage_YpCbCrToARGBMatrix_ITU_R_601_4_110347850;
  _vImageConvert_YpCbCrToARGB_GenerateConversion(lVar1,&uStack_30,0x1137ea830,4,0,0);
  if ((lVar1 != 0) && ((bRam000000011330a9e8 >> 3 & 1) != 0)) {
    func_0x00010ae06f08(1,8,&UNK_10f642299,&UNK_10f6422c2,0x56,&UNK_10f64237b,in_x6,in_x7,lVar1);
  }
  return;
}



/* Entry: 10a1aeec4; end: 10a1aef03;  */

void FUN_10a1aeec4(undefined8 *param_1)

{
  func_0x000109380ffc(param_1 + 4,*(undefined1 *)(param_1 + 3));
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a1aef04; end: 10a1aef2b;  */

void FUN_10a1aef04(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a1aef6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a1aef2c; end: 10a1af023;  */

void FUN_10a1aef2c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a30206c(lVar1 + 0x1a0);
    FUN_10a301168(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a1af024; end: 10a1af067;  */

void FUN_10a1af024(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x40);
  FUN_10a1af2ec(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x40);
  return;
}



/* Entry: 10a1af068; end: 10a1af2eb;  */

void FUN_10a1af068(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  puVar5 = param_2 + 0x10;
  FUN_10a1b00b8(puVar5,param_3);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_10a1af2ec(param_2);
    puVar5 = param_2 + 0x10;
    FUN_10a1b00b8(puVar5,param_3);
    if (puVar5 != (undefined8 *)0x0) goto LAB_10a1af0c4;
  }
  else {
LAB_10a1af0c4:
    if (puVar5[10] != 0) {
      uVar7 = (puVar5[10] + puVar5[9]) - 1;
      FUN_10a045f38(&uStack_40,*(long *)(puVar5[6] + (uVar7 >> 8) * 8) + (uVar7 & 0xff) * 0x10);
      FUN_10a1b01a8(puVar5 + 5);
      if (puVar5[10] == 0) {
        func_0x00010a1b0270(param_2 + 0x10,puVar5);
      }
      goto LAB_10a1af1a8;
    }
  }
  plVar6 = (long *)param_2[7];
  if (plVar6 == (long *)0x0) {
    FUN_10a06186c();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1af2b4);
    (*pcVar4)();
  }
  (**(code **)(*plVar6 + 0x30))(&uStack_50,plVar6,param_3);
  plVar6 = plStack_38;
  plStack_38 = plStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
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
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
LAB_10a1af1a8:
  uStack_50 = uStack_40;
  func_0x00010928d6b4(param_2 + 0x18,&uStack_50,&uStack_50);
  lStack_68 = param_2[1];
  uStack_70 = *param_2;
  if (param_2[1] != 0) {
    plVar6 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_60 = uStack_40;
  plStack_58 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a1b03f0(param_1,uStack_40,&uStack_70);
  plVar6 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (lStack_68 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar6 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 8);
  return;
}



/* Entry: 10a1af2ec; end: 10a1af3df;  */

void FUN_10a1af2ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_49;
  undefined1 *puStack_48;
  
  lVar1 = param_1 + 0xa8;
  lVar2 = *(long *)(param_1 + 0xb0);
  while (lVar2 != lVar1) {
    if ((*(long *)(lVar2 + 0x18) == 0) || (*(long *)(*(long *)(lVar2 + 0x18) + 8) != 0)) {
      lVar2 = *(long *)(lVar2 + 8);
    }
    else {
      uStack_68 = *(ulong *)(*(long *)(lVar2 + 0x10) + 0x30);
      lStack_70 = *(long *)(*(long *)(lVar2 + 0x10) + 0x28);
      uStack_60 = lStack_70 + 0x9e3779b97f4a7c15;
      uStack_60 = (uStack_68 & 0xffffffff) + 0x9e3779b97f4a7c15 + uStack_60 * 0x40 +
                  (uStack_60 >> 2) ^ uStack_60;
      uStack_60 = (uStack_68 >> 0x20) + 0x9e3779b97f4a7c15 + uStack_60 * 0x40 + (uStack_60 >> 2) ^
                  uStack_60;
      lVar3 = param_1 + 0x80;
      puStack_48 = (undefined1 *)&lStack_70;
      FUN_10a1af434(lVar3,&lStack_70,&UNK_10dd5b8f9,&puStack_48,&uStack_49);
      func_0x00010a1af8ec(lVar3 + 0x28,lVar2 + 0x10);
      lVar3 = lVar1;
      FUN_10a1af3e0(lVar1,lVar2);
      lVar2 = lVar3;
    }
  }
  return;
}



/* Entry: 10a1af3e0; end: 10a1af433;  */

long * FUN_10a1af3e0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    plVar2 = (long *)param_2[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    param_1[2] = param_1[2] + -1;
    func_0x00010a045fb4(param_2 + 2);
    __ZdlPv(param_2);
    return plVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1af434);
  (*pcVar3)();
}



/* Entry: 10a1af434; end: 10a1af697;  */

undefined1  [16] FUN_10a1af434(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  long lVar11;
  undefined1 auVar12 [16];
  
  uVar10 = param_2[2];
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0)) {
      do {
        uVar7 = plVar8[1];
        if (uVar7 == uVar10) {
          if ((((plVar8[4] == uVar10) && (plVar8[2] == *param_2)) &&
              ((int)plVar8[3] == (int)param_2[1])) &&
             (*(int *)((long)plVar8 + 0x1c) == *(int *)((long)param_2 + 0xc))) {
            uVar2 = 0;
            goto LAB_10a1af65c;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x24) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x58;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  param_4 = (long *)*param_4;
  lVar11 = param_4[1];
  lVar6 = *param_4;
  plVar8[4] = param_4[2];
  plVar8[3] = lVar11;
  plVar8[2] = lVar6;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[10] = 0;
  plVar8[9] = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a1af698(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a1af64c;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10a1af64c:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a1af65c:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 10a1af698; end: 10a1af767;  */

void FUN_10a1af698(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10a1af6e0:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            FUN_10a15781c(uVar7 + 0x28);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10a1af6e0;
  }
  return;
}



/* Entry: 10a1af768; end: 10a1af983;  */

void FUN_10a1af768(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          FUN_10a15781c(uVar1 + 0x28);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a1af984; end: 10a1afb33;  */

void FUN_10a1af984(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x100) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_10a1b0050();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0x1000;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_10a1afe44(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_10a1aff48(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0x1000;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x00010a1afc38(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_10a1afd3c(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_10a1afb34(param_1,&plStack_60);
  return;
}



/* Entry: 10a1afb34; end: 10a1afd3b;  */

void FUN_10a1afb34(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10a1b0050();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a1afd3c; end: 10a1afe43;  */

void FUN_10a1afd3c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_10a1b0050();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10a1afe44; end: 10a1aff47;  */

void FUN_10a1afe44(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_10a1b0050();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10a1aff48; end: 10a1b004f;  */

void FUN_10a1aff48(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_10a1b0050();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10a1b0050; end: 10a1b00b7;  */

undefined1  [16] FUN_10a1b0050(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  func_0x00010a045fb4(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a1b00b8; end: 10a1b01a7;  */

long * FUN_10a1b00b8(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2 + 0x9e3779b97f4a7c15;
    uVar3 = (ulong)*(uint *)(param_2 + 1) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^ uVar3
    ;
    uVar3 = (ulong)*(uint *)((long)param_2 + 0xc) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b97f4a7c15
            ^ uVar3;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (((plVar6[2] == *param_2) && (*(uint *)(plVar6 + 3) == *(uint *)(param_2 + 1))) &&
             (*(uint *)((long)plVar6 + 0x1c) == *(uint *)((long)param_2 + 0xc))) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a1b01a8; end: 10a1b02cf;  */

bool FUN_10a1b01a8(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1b0204);
    (*pcVar3)();
  }
  uVar5 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  func_0x00010a045fb4(*(long *)(*(long *)(param_1 + 8) + (uVar5 >> 8) * 8) + (uVar5 & 0xff) * 0x10);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar1 = (lVar2 - *(long *)(param_1 + 8)) * 0x20 + -1;
  }
  bVar4 = 0x1ff < (ulong)(lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)));
  if (bVar4) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  return bVar4;
}



/* Entry: 10a1b02d0; end: 10a1b03ef;  */

void FUN_10a1b02d0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a1b0384;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a1b0384;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a1b0384:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a1b03f0; end: 10a1b0493;  */

long * FUN_10a1b03f0(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *puVar2 = &PTR_FUN_110bab740;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  puVar2[7] = uVar6;
  puVar2[6] = uVar5;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  param_1[1] = (long)puVar2;
  FUN_10a1b0494(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a1b0494; end: 10a1b0543;  */

void FUN_10a1b0494(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a1b0544; end: 10a1b061b;  */

void FUN_10a1b0544(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar5 = *param_1;
      lStack_40 = lVar5;
      plStack_38 = plVar4;
      if (lVar5 != 0) {
        __ZNSt3__15mutex4lockEv(lVar5 + 0x40);
        FUN_10a1b0720(lVar5 + 0xa8,param_1 + 2);
        lStack_48 = param_1[2];
        func_0x00010a1b0788(lVar5 + 0xc0,&lStack_48);
        __ZNSt3__15mutex6unlockEv(lVar5 + 0x40);
      }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a1b061c; end: 10a1b0697;  */

void FUN_10a1b061c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bab740;
  func_0x00010a045fb4(param_1 + 6);
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 10a1b0698; end: 10a1b06df;  */

void FUN_10a1b0698(long param_1)

{
  FUN_10a1b0544(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  func_0x00010a045fb4(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a1b06e0; end: 10a1b071b;  */

long FUN_10a1b06e0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bab780);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a1b071c; end: 10a1b071f;  */

void FUN_10a1b071c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1b0720; end: 10a1b07bb;  */

void FUN_10a1b0720(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)0x20;
  __Znwm();
  lVar5 = param_2[1];
  lVar6 = *param_2;
  plVar4[3] = param_2[1];
  plVar4[2] = lVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = *param_1;
  *plVar4 = lVar5;
  plVar4[1] = (long)param_1;
  *(long **)(lVar5 + 8) = plVar4;
  *param_1 = (long)plVar4;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a1b07bc; end: 10a1b0893;  */

long * FUN_10a1b07bc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a1b0894; end: 10a1b08db;  */

undefined8 FUN_10a1b0894(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [3];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10a1b08dc(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1b08dc);
  (*pcVar2)();
}



/* Entry: 10a1b08dc; end: 10a1b09fb;  */

void FUN_10a1b08dc(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a1b0990;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a1b0990;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a1b0990:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a1b09fc; end: 10a1b0a53;  */

long FUN_10a1b09fc(long param_1)

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


