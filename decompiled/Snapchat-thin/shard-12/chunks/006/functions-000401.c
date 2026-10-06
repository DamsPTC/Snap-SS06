/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10932010c; end: 10932010f;  */

long FUN_10932010c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x0001093131f4();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x3c)) {
    if (*(long *)(*(long *)(param_1 + 0x40) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109320110; end: 109320123;  */

void FUN_109320110(void)

{
  FUN_109320064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109320124; end: 10932012f;  */

undefined ** FUN_109320124(void)

{
  return &PTR_DAT_110aeddb8;
}



/* Entry: 109320130; end: 109320203;  */

void FUN_109320130(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_109313260(*(undefined8 *)(param_1 + 0x58));
    }
  }
  if ((uVar1 & 0xf8) != 0) {
    *(undefined8 *)(param_1 + 0x66) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined1 *)(param_1 + 0x76) = 0;
    *(undefined8 *)(param_1 + 0x6e) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0x43e4ccccd;
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
      *(byte *)puVar3 = 0;
      *(byte *)((long)puVar3 + 0x17) = 0;
      return;
    }
    *(undefined1 *)*puVar3 = 0;
    puVar3[1] = 0;
    return;
  }
  return;
}



/* Entry: 109320204; end: 109320b87;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_109320204(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar15 = *(uint *)(param_1 + 0x10);
  pbVar8 = param_2;
  if ((uVar15 & 1) != 0) {
    pbVar8 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc,param_2);
  }
  pbVar13 = pbVar8;
  if ((uVar15 >> 3 & 1) != 0) {
    pbVar13 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x60),pbVar8);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar1) {
    uVar18 = 0;
    pbVar8 = param_3 + 0x10;
    do {
      pbVar6 = pbVar13;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar13) {
        do {
          pbVar6 = pbVar8;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093202e4:
            param_3[0x38] = 1;
LAB_109320384:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar9 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar19 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar8 = uVar19;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_109320384;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar8,(long)pbVar12 - (long)pbVar8);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_1093202e4;
            } while (uStack_64 == 0);
            puVar11 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar11;
              *(undefined8 *)(param_3 + 0x18) = puVar11[1];
              *(undefined8 *)pbVar8 = uVar19;
              pbVar9 = pbVar8 + (int)uStack_64;
              *(byte **)param_3 = pbVar9;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar19 = *puVar11;
              *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
              *(undefined8 *)pbStack_70 = uVar19;
              pbVar9 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar9;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar6 = pbStack_70;
            }
          }
          pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar12);
          pbVar6 = pbVar13;
          pbVar12 = pbVar9;
        } while (pbVar9 <= pbVar13);
      }
      uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + uVar18 * 4);
      uVar7 = (ulong)(int)uVar4;
      pbVar12 = pbVar6 + 1;
      *pbVar6 = 0x18;
      uVar16 = uVar7;
      pbVar13 = pbVar12;
      if (0x7f < uVar4) {
        do {
          pbVar12 = pbVar13 + 1;
          *pbVar13 = (byte)uVar16 | 0x80;
          uVar7 = uVar16 >> 7;
          uVar10 = uVar16 >> 0xe;
          uVar16 = uVar7;
          pbVar13 = pbVar12;
        } while (uVar10 != 0);
      }
      pbVar13 = pbVar12 + 1;
      *pbVar12 = (byte)uVar7;
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar1);
  }
  if ((uVar15 >> 7 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    bVar3 = *(byte *)(param_1 + 0x6d);
    *pbVar13 = 0x20;
    pbVar13[1] = bVar3;
    pbVar13 = pbVar13 + 2;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar1) {
    uVar18 = 0;
    pbVar8 = param_3 + 0x10;
    do {
      pbVar6 = pbVar13;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar13) {
        do {
          pbVar6 = pbVar8;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_10932044c:
            param_3[0x38] = 1;
LAB_1093204ec:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar9 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar19 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar8 = uVar19;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_1093204ec;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar8,(long)pbVar12 - (long)pbVar8);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_10932044c;
            } while (uStack_64 == 0);
            puVar11 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar11;
              *(undefined8 *)(param_3 + 0x18) = puVar11[1];
              *(undefined8 *)pbVar8 = uVar19;
              pbVar9 = pbVar8 + (int)uStack_64;
              *(byte **)param_3 = pbVar9;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar19 = *puVar11;
              *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
              *(undefined8 *)pbStack_70 = uVar19;
              pbVar9 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar9;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar6 = pbStack_70;
            }
          }
          pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar12);
          pbVar6 = pbVar13;
          pbVar12 = pbVar9;
        } while (pbVar9 <= pbVar13);
      }
      uVar4 = *(uint *)(*(long *)(param_1 + 0x30) + uVar18 * 4);
      uVar7 = (ulong)(int)uVar4;
      pbVar12 = pbVar6 + 1;
      *pbVar6 = 0x28;
      uVar16 = uVar7;
      pbVar13 = pbVar12;
      if (0x7f < uVar4) {
        do {
          pbVar12 = pbVar13 + 1;
          *pbVar13 = (byte)uVar16 | 0x80;
          uVar7 = uVar16 >> 7;
          uVar10 = uVar16 >> 0xe;
          uVar16 = uVar7;
          pbVar13 = pbVar12;
        } while (uVar10 != 0);
      }
      pbVar13 = pbVar12 + 1;
      *pbVar12 = (byte)uVar7;
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar1);
  }
  if ((uVar15 >> 8 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    bVar3 = *(byte *)(param_1 + 0x6e);
    *pbVar13 = 0x30;
    pbVar13[1] = bVar3;
    pbVar13 = pbVar13 + 2;
  }
  if ((uVar15 >> 0xe & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    *pbVar13 = 0x3d;
    *(undefined4 *)(pbVar13 + 1) = uVar2;
    pbVar13 = pbVar13 + 5;
  }
  if ((uVar15 >> 4 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    uVar2 = *(undefined4 *)(param_1 + 100);
    *pbVar13 = 0x45;
    *(undefined4 *)(pbVar13 + 1) = uVar2;
    pbVar13 = pbVar13 + 5;
  }
  if ((uVar15 >> 5 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x68);
    *pbVar13 = 0x4d;
    *(undefined4 *)(pbVar13 + 1) = uVar2;
    pbVar13 = pbVar13 + 5;
  }
  if ((uVar15 >> 6 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    bVar3 = *(byte *)(param_1 + 0x6c);
    *pbVar13 = 0x60;
    pbVar13[1] = bVar3;
    pbVar13 = pbVar13 + 2;
  }
  if ((uVar15 >> 0xf & 1) != 0) {
    pbVar8 = param_3;
    FUN_109320b88(param_3,*(undefined4 *)(param_1 + 0x7c),pbVar13);
    pbVar13 = pbVar8;
  }
  if ((uVar15 >> 1 & 1) != 0) {
    pbVar8 = (byte *)0xe;
    func_0x000107c303cc(0xe,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14),pbVar13,param_3);
    pbVar13 = pbVar8;
  }
  if ((uVar15 >> 2 & 1) != 0) {
    pbVar8 = (byte *)0xf;
    func_0x000107c303cc(0xf,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x14),pbVar13,param_3);
    pbVar13 = pbVar8;
  }
  if ((uVar15 >> 10 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    pbVar13[0] = 0x85;
    pbVar13[1] = 1;
    *(undefined4 *)(pbVar13 + 2) = uVar2;
    pbVar13 = pbVar13 + 6;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar1) {
    uVar18 = 0;
    pbVar8 = param_3 + 0x10;
    do {
      pbVar6 = pbVar13;
      pbVar12 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar13) {
        do {
          pbVar6 = pbVar8;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093206e4:
            param_3[0x38] = 1;
LAB_109320784:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar9 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar19 = *(undefined8 *)pbVar12;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar12 + 8);
              *(undefined8 *)pbVar8 = uVar19;
              *(byte **)(param_3 + 8) = pbVar12;
              goto LAB_109320784;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar8,(long)pbVar12 - (long)pbVar8);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_1093206e4;
            } while (uStack_64 == 0);
            puVar11 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar11;
              *(undefined8 *)(param_3 + 0x18) = puVar11[1];
              *(undefined8 *)pbVar8 = uVar19;
              pbVar9 = pbVar8 + (int)uStack_64;
              *(byte **)param_3 = pbVar9;
              *(byte **)(param_3 + 8) = pbStack_70;
            }
            else {
              uVar19 = *puVar11;
              *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
              *(undefined8 *)pbStack_70 = uVar19;
              pbVar9 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              *(byte **)param_3 = pbVar9;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar6 = pbStack_70;
            }
          }
          pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar12);
          pbVar6 = pbVar13;
          pbVar12 = pbVar9;
        } while (pbVar9 <= pbVar13);
      }
      uVar4 = *(uint *)(*(long *)(param_1 + 0x40) + uVar18 * 4);
      uVar7 = (ulong)(int)uVar4;
      pbVar12 = pbVar6 + 2;
      pbVar6[0] = 0x88;
      pbVar6[1] = 1;
      uVar16 = uVar7;
      pbVar13 = pbVar12;
      if (0x7f < uVar4) {
        do {
          pbVar12 = pbVar13 + 1;
          *pbVar13 = (byte)uVar16 | 0x80;
          uVar7 = uVar16 >> 7;
          uVar10 = uVar16 >> 0xe;
          uVar16 = uVar7;
          pbVar13 = pbVar12;
        } while (uVar10 != 0);
      }
      pbVar13 = pbVar12 + 1;
      *pbVar12 = (byte)uVar7;
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar1);
  }
  if ((uVar15 >> 9 & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    bVar3 = *(byte *)(param_1 + 0x6f);
    pbVar13[0] = 0x90;
    pbVar13[1] = 1;
    pbVar13[2] = bVar3;
    pbVar13 = pbVar13 + 3;
  }
  if ((uVar15 >> 0xb & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    bVar3 = *(byte *)(param_1 + 0x74);
    pbVar13[0] = 0x98;
    pbVar13[1] = 1;
    pbVar13[2] = bVar3;
    pbVar13 = pbVar13 + 3;
  }
  if ((uVar15 >> 0xc & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    bVar3 = *(byte *)(param_1 + 0x75);
    pbVar13[0] = 0xa0;
    pbVar13[1] = 1;
    pbVar13[2] = bVar3;
    pbVar13 = pbVar13 + 3;
  }
  if ((uVar15 >> 0xd & 1) != 0) {
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar6 + ((int)pbVar13 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= pbVar13);
    }
    bVar3 = *(byte *)(param_1 + 0x76);
    pbVar13[0] = 0xa8;
    pbVar13[1] = 1;
    pbVar13[2] = bVar3;
    pbVar13 = pbVar13 + 3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar18 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar18 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar14 = *(long *)(uVar18 + 8);
      uVar16 = (ulong)*(uint *)(uVar18 + 0x10);
    }
    else {
      lVar14 = uVar18 + 8;
    }
    uVar15 = (uint)uVar16;
    if (*(long *)param_3 - (long)pbVar13 < (long)(int)uVar15) {
      pbVar8 = (byte *)((*(long *)param_3 - (long)pbVar13) + 0x10);
      if ((int)pbVar8 < (int)uVar15) {
        do {
          iVar17 = (int)pbVar8;
          _memcpy(pbVar13,lVar14,(long)iVar17);
          uVar15 = (int)uVar16 - iVar17;
          uVar16 = (ulong)uVar15;
          lVar14 = lVar14 + iVar17;
          pbVar8 = *(byte **)param_3;
          pbVar6 = pbVar13 + iVar17;
          do {
            pbVar13 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar13 = param_3;
            func_0x000107c303dc();
            pbVar6 = pbVar13 + ((int)pbVar6 - (int)pbVar8);
            pbVar8 = *(byte **)param_3;
            pbVar13 = pbVar6;
          } while (pbVar8 <= pbVar6);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar13);
        } while ((int)pbVar8 < (int)uVar15);
      }
      _memcpy(pbVar13,lVar14,(long)(int)uVar15);
      pbVar13 = pbVar13 + (int)uVar15;
    }
    else {
      _memcpy(pbVar13,lVar14,uVar16 & 0xffffffff);
      pbVar13 = pbVar13 + (int)uVar15;
    }
  }
  return pbVar13;
}



/* Entry: 109320b88; end: 109320ec7;  */

byte * FUN_109320b88(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 <= param_3) {
    do {
      if (*(char *)(param_1 + 7) == '\x01') {
        param_3 = param_1 + 2;
        break;
      }
      puVar1 = param_1;
      func_0x000107c303dc();
      param_3 = (undefined8 *)((long)puVar1 + (long)((int)param_3 - (int)puVar4));
      puVar4 = (undefined8 *)*param_1;
    } while (puVar4 <= param_3);
  }
  pbVar2 = (byte *)((long)param_3 + 1);
  *(undefined1 *)param_3 = 0x68;
  uVar5 = (ulong)(int)param_2;
  pbVar3 = pbVar2;
  uVar6 = uVar5;
  if (0x7f < param_2) {
    do {
      pbVar2 = pbVar3 + 1;
      *pbVar3 = (byte)uVar6 | 0x80;
      uVar5 = uVar6 >> 7;
      uVar7 = uVar6 >> 0xe;
      pbVar3 = pbVar2;
      uVar6 = uVar5;
    } while (uVar7 != 0);
  }
  *pbVar2 = (byte)uVar5;
  return pbVar2 + 1;
}



/* Entry: 109320ec8; end: 1093211cb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109320ec8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x30);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x3c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x38);
      iVar2 = *(int *)(param_1 + 0x38);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x40);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 0xff) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x48);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x48,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar4 = uVar9;
        FUN_10932fce4(uVar9,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar4;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar8 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        FUN_10932fce4(uVar9,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar9;
      }
      else {
        FUN_1093135dc();
      }
    }
    if ((uVar8 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar8 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    }
    if ((uVar8 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
    if ((uVar8 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
    }
    if ((uVar8 >> 7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x6d) = *(undefined1 *)(param_2 + 0x6d);
    }
  }
  if ((uVar8 & 0xff00) != 0) {
    if ((uVar8 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x6e);
    }
    if ((uVar8 >> 9 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x6f) = *(undefined1 *)(param_2 + 0x6f);
    }
    if ((uVar8 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    }
    if ((uVar8 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
    }
    if ((uVar8 >> 0xc & 1) != 0) {
      *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)(param_2 + 0x75);
    }
    if ((uVar8 >> 0xd & 1) != 0) {
      *(undefined1 *)(param_1 + 0x76) = *(undefined1 *)(param_2 + 0x76);
    }
    if ((uVar8 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    }
    if ((uVar8 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1093211cc; end: 10932120b;  */

long FUN_1093211cc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10932120c; end: 10932120f;  */

long FUN_10932120c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109321210; end: 109321223;  */

void FUN_109321210(void)

{
  FUN_1093211cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109321224; end: 10932122f;  */

undefined ** FUN_109321224(void)

{
  return &PTR_DAT_110aeddf8;
}



/* Entry: 109321230; end: 109321277;  */

void FUN_109321230(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 109321278; end: 109321493;  */

long * FUN_109321278(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lStack_50;
  ulong uStack_48;
  long lVar9;
  
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    iVar7 = 0;
    plVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar7 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar6,param_3);
      iVar7 = iVar7 + 1;
      plVar6 = param_2;
    } while (iVar8 != iVar7);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar9 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar9 < (int)uVar3) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(param_2,lStack_50,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar8;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar9 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 109321494; end: 109321497;  */

void FUN_109321494(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109321498; end: 109321533;  */

void FUN_109321498(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109321534; end: 109321537;  */

long FUN_109321534(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109321538; end: 10932154b;  */

void FUN_109321538(void)

{
  func_0x0001093214ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10932154c; end: 10932156b;  */

undefined ** FUN_10932154c(void)

{
  return &PTR_DAT_110aede38;
}



/* Entry: 10932156c; end: 1093217cb;  */

byte * FUN_10932156c(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar11) {
    uVar14 = 0;
    pbVar5 = (byte *)(param_3 + 2);
    do {
      pbVar4 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar4 = pbVar5;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_10932160c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_1093216a4:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar15 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar5 = uVar15;
              param_3[1] = (long)pbVar9;
              goto LAB_1093216a4;
            }
            _memcpy(param_3[1],pbVar5,(long)pbVar9 - (long)pbVar5);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10932160c;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar15 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar5 = uVar15;
              *param_3 = (long)(pbVar5 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar5 + (int)uStack_64;
            }
            else {
              uVar15 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar15;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar4 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar4 + ((int)param_2 - (int)pbVar9);
          pbVar4 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + uVar14 * 4);
      uVar3 = (ulong)(int)uVar1;
      pbVar9 = pbVar4 + 1;
      *pbVar4 = 8;
      uVar12 = uVar3;
      pbVar4 = pbVar9;
      if (0x7f < uVar1) {
        do {
          pbVar9 = pbVar4 + 1;
          *pbVar4 = (byte)uVar12 | 0x80;
          uVar3 = uVar12 >> 7;
          uVar7 = uVar12 >> 0xe;
          uVar12 = uVar3;
          pbVar4 = pbVar9;
        } while (uVar7 != 0);
      }
      param_2 = pbVar9 + 1;
      *pbVar9 = (byte)uVar3;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar14 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar14 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar10 = *(long *)(uVar14 + 8);
      uVar12 = (ulong)*(uint *)(uVar14 + 0x10);
    }
    else {
      lVar10 = uVar14 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar11) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar11) {
        do {
          iVar13 = (int)pbVar5;
          _memcpy(param_2,lVar10,(long)iVar13);
          uVar11 = (int)uVar12 - iVar13;
          uVar12 = (ulong)uVar11;
          lVar10 = lVar10 + iVar13;
          pbVar5 = (byte *)*param_3;
          pbVar4 = param_2 + iVar13;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar4 = (byte *)((long)plVar2 + (long)((int)pbVar4 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar4;
          } while (pbVar5 <= pbVar4);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar11);
      }
      _memcpy(param_2,lVar10,(long)(int)uVar11);
      param_2 = param_2 + (int)uVar11;
    }
    else {
      _memcpy(param_2,lVar10,uVar12 & 0xffffffff);
      param_2 = param_2 + (int)uVar11;
    }
  }
  return param_2;
}



/* Entry: 1093217cc; end: 109321843;  */

long FUN_1093217cc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar4 = *(int **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT((long)*piVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 != 0);
  }
  lVar2 = lVar2 + (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar5 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 109321844; end: 1093218eb;  */

void FUN_109321844(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      func_0x000107c282d8(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x18);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1093218ec; end: 109321937;  */

long FUN_1093218ec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10930c5bc();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109321938; end: 10932193b;  */

long FUN_109321938(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10930c5bc();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10932193c; end: 10932194f;  */

void FUN_10932193c(void)

{
  FUN_1093218ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109321950; end: 10932195b;  */

undefined ** FUN_109321950(void)

{
  return &PTR_DAT_110aede80;
}



/* Entry: 10932195c; end: 109321a37;  */

void FUN_10932195c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10930c794(*(undefined8 *)(param_1 + 0x28));
    }
  }
  if ((uVar1 & 0xf8) != 0) {
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((uVar1 & 0x700) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x35) = 0;
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      return;
    }
    *(byte *)puVar3 = 0;
    *(byte *)((long)puVar3 + 0x17) = 0;
    return;
  }
  return;
}



/* Entry: 109321a38; end: 109321e97;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109321a38(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 *puVar11;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 & 1) != 0) {
    plVar4 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
    param_2 = plVar4;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    plVar4 = param_3;
    func_0x000107c280a0(param_3,2,*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc,param_2);
    param_2 = plVar4;
  }
  if ((uVar8 >> 3 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x30);
    *(undefined1 *)param_2 = 0x18;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 5 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x32);
    *(undefined1 *)param_2 = 0x20;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 8 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x35);
    *(undefined1 *)param_2 = 0x28;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 6 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x33);
    *(undefined1 *)param_2 = 0x30;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 7 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x34);
    *(undefined1 *)param_2 = 0x38;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 9 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    *(undefined1 *)param_2 = 0x45;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar8 >> 10 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined1 *)param_2 = 0x4d;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((uVar8 >> 2 & 1) != 0) {
    plVar4 = (long *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
    param_2 = plVar4;
  }
  if ((uVar8 >> 4 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x31);
    *(undefined1 *)param_2 = 0x58;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar7 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar7 = uVar5 + 8;
    }
    uVar8 = (uint)uVar9;
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      puVar11 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar11 < (int)uVar8) {
        do {
          iVar10 = (int)puVar11;
          _memcpy(param_2,lVar7,(long)iVar10);
          uVar8 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar8;
          lVar7 = lVar7 + iVar10;
          plVar6 = (long *)*param_3;
          plVar4 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar3 + (long)((int)plVar4 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar4;
          } while (plVar6 <= plVar4);
          puVar11 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar11 < (int)uVar8);
      }
      _memcpy(param_2,lVar7,(long)(int)uVar8);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
    else {
      _memcpy(param_2,lVar7,uVar9 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
  }
  return param_2;
}



/* Entry: 109321e98; end: 109322003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109321e98(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint5 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xff) == 0) {
    iVar5 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar3 = *(byte *)(uVar7 + 0x17);
      uVar1 = (uint)*(undefined8 *)(uVar7 + 8);
      if (-1 < (char)bVar3) {
        uVar1 = (uint)bVar3;
      }
      iVar5 = uVar1 + ((int)LZCOUNT(uVar1) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      uVar7 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar3 = *(byte *)(uVar7 + 0x17);
      uVar1 = (uint)*(undefined8 *)(uVar7 + 8);
      if (-1 < (char)bVar3) {
        uVar1 = (uint)bVar3;
      }
      iVar5 = iVar5 + uVar1 + ((int)LZCOUNT(uVar1) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010930d804();
      iVar5 = iVar5 + iVar4 + ((int)LZCOUNT(iVar4) * -9 + 0x160U >> 6) + 1;
    }
    auVar9._4_4_ = uVar2;
    auVar9._0_4_ = uVar2;
    auVar9._8_4_ = uVar2;
    auVar9._12_4_ = uVar2;
    auVar10[9] = 0xff;
    auVar10._0_9_ = _UNK_10dfc5ae0;
    auVar10[10] = 0xff;
    auVar10[0xb] = 0xff;
    auVar10[0xc] = 0xfb;
    auVar10[0xd] = 0xff;
    auVar10[0xe] = 0xff;
    auVar10[0xf] = 0xff;
    auVar10 = NEON_ushl(auVar9,auVar10,4);
    uVar8 = CONCAT14(auVar10[4],(uint)(auVar10[0] & 2)) & 0x2ffffffff;
    iVar5 = iVar5 + (int)uVar8 + (uint)(byte)(uVar8 >> 0x20) +
                    (uint)(auVar10[8] & 2) + (uint)(auVar10[0xc] & 2) + (uVar2 >> 6 & 2);
  }
  iVar4 = iVar5 + (uVar2 >> 7 & 2);
  if ((uVar2 & 0x200) != 0) {
    iVar4 = iVar4 + 5;
  }
  if ((uVar2 & 0x400) != 0) {
    iVar4 = iVar4 + 5;
  }
  if ((uVar2 & 0x700) != 0) {
    iVar5 = iVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar7 + 0x10);
    }
    iVar5 = (int)lVar6 + iVar5;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return;
}



/* Entry: 109322004; end: 1093221af;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109322004(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x18,uVar4 & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar4 = *(ulong *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x20,uVar4 & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        FUN_1093130e4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10930dfb8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x33);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1093221b0; end: 1093221ef;  */

long FUN_1093221b0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1093221f0; end: 1093221f3;  */

long FUN_1093221f0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1093221f4; end: 109322207;  */

void FUN_1093221f4(void)

{
  FUN_1093221b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109322208; end: 109322213;  */

undefined ** FUN_109322208(void)

{
  return &PTR_DAT_110aedec0;
}



/* Entry: 109322214; end: 109322273;  */

void FUN_109322214(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 109322274; end: 10932253b;  */

long * FUN_109322274(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  ulong uStack_48;
  undefined1 *puVar11;
  
  iVar10 = *(int *)(param_1 + 0x20);
  if (iVar10 != 0) {
    iVar9 = 0;
    plVar3 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar9 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar3,param_3);
      iVar9 = iVar9 + 1;
      plVar3 = param_2;
    } while (iVar10 != iVar9);
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  plVar3 = param_2;
  if ((uVar5 & 1) != 0) {
    plVar3 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x30),param_2);
  }
  if ((uVar5 >> 1 & 1) != 0) {
    plVar7 = (long *)*param_3;
    if (plVar7 <= plVar3) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar3 = param_3 + 2;
          break;
        }
        plVar8 = param_3;
        func_0x000107c303dc();
        plVar3 = (long *)((long)plVar8 + (long)((int)plVar3 - (int)plVar7));
        plVar7 = (long *)*param_3;
      } while (plVar7 <= plVar3);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x34);
    *(undefined1 *)plVar3 = 0x18;
    *(undefined1 *)((long)plVar3 + 1) = uVar2;
    plVar3 = (long *)((long)plVar3 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    uVar5 = (uint)uStack_48;
    if (*param_3 - (long)plVar3 < (long)(int)uVar5) {
      puVar11 = (undefined1 *)((*param_3 - (long)plVar3) + 0x10);
      if ((int)puVar11 < (int)uVar5) {
        do {
          iVar10 = (int)puVar11;
          _memcpy(plVar3,lVar4,(long)iVar10);
          uVar5 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar5;
          lVar4 = lVar4 + iVar10;
          plVar8 = (long *)*param_3;
          plVar7 = (long *)((long)plVar3 + (long)iVar10);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar3 + (long)((int)plVar7 - (int)plVar8));
            plVar8 = (long *)*param_3;
            plVar3 = plVar7;
          } while (plVar8 <= plVar7);
          puVar11 = (undefined1 *)((long)plVar8 + (0x10 - (long)plVar3));
        } while ((int)puVar11 < (int)uVar5);
      }
      uStack_48._0_4_ = uVar5;
      _memcpy(plVar3,lVar4,(long)(int)(uint)uStack_48);
      plVar3 = (long *)((long)plVar3 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar3,lVar4,uStack_48 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar5);
    }
  }
  return plVar3;
}



/* Entry: 10932253c; end: 10932253f;  */

void FUN_10932253c(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109322540; end: 1093225c3;  */

void FUN_109322540(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1093225c4; end: 109322627;  */

void FUN_1093225c4(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109322628; end: 10932267f;  */

long FUN_109322628(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109322680; end: 1093226b7;  */

undefined ** FUN_109322680(void)

{
  return &PTR_DAT_110aedf08;
}



/* Entry: 1093226b8; end: 1093228c7;  */

byte * FUN_1093226b8(long param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 >> 2 & 1) != 0) {
    pbVar6 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    param_2 = pbVar6;
  }
  if ((uVar4 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar9 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = (ulong)(int)uVar2;
    pbVar9 = param_2 + 1;
    *param_2 = 0x10;
    uVar5 = uVar7;
    pbVar6 = pbVar9;
    if (0x7f < uVar2) {
      do {
        pbVar9 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar7 = uVar5 >> 7;
        uVar8 = uVar5 >> 0xe;
        uVar5 = uVar7;
        pbVar6 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar7;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar9 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *param_2 = 0x1d;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar10 = *(long *)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar10 = uVar7 + 8;
    }
    uVar4 = (uint)uVar5;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar6 < (int)uVar4) {
        do {
          iVar11 = (int)pbVar6;
          _memcpy(param_2,lVar10,(long)iVar11);
          uVar4 = (int)uVar5 - iVar11;
          uVar5 = (ulong)uVar4;
          lVar10 = lVar10 + iVar11;
          pbVar6 = *(byte **)param_3;
          pbVar9 = param_2 + iVar11;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar3 = param_3;
            func_0x000107c303dc();
            pbVar9 = pbVar3 + ((int)pbVar9 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            param_2 = pbVar9;
          } while (pbVar6 <= pbVar9);
          pbVar6 = pbVar6 + (0x10 - (long)param_2);
        } while ((int)pbVar6 < (int)uVar4);
      }
      _memcpy(param_2,lVar10,(long)(int)uVar4);
      param_2 = param_2 + (int)uVar4;
    }
    else {
      _memcpy(param_2,lVar10,uVar5 & 0xffffffff);
      param_2 = param_2 + (int)uVar4;
    }
  }
  return param_2;
}



/* Entry: 1093228c8; end: 109322993;  */

long FUN_1093228c8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar2 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 & 2) != 0) {
      lVar2 = lVar2 + 5;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x14) = (int)lVar2;
  return lVar2;
}



/* Entry: 109322994; end: 1093229eb;  */

long FUN_109322994(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1093229ec; end: 109322a13;  */

undefined ** FUN_1093229ec(void)

{
  return &PTR_DAT_110aedf40;
}



/* Entry: 109322a14; end: 109322bbf;  */

byte * FUN_109322a14(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar5 = (ulong)(int)uVar3;
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar2 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(param_2,lVar2,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar9;
          pbVar4 = (byte *)*param_3;
          pbVar8 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar4 <= pbVar8);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar2,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar2,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 109322bc0; end: 109322c1b;  */

long FUN_109322bc0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 109322c1c; end: 109322cc3;  */

long FUN_109322c1c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (0 < *(int *)(param_1 + 100)) {
    if (*(long *)(*(long *)(param_1 + 0x68) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_10932e36c(param_1 + 0x48);
  if (0 < *(int *)(param_1 + 0x34)) {
    if (*(long *)(*(long *)(param_1 + 0x38) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109322cc4; end: 109322cc7;  */

long FUN_109322cc4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (0 < *(int *)(param_1 + 100)) {
    if (*(long *)(*(long *)(param_1 + 0x68) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_10932e36c(param_1 + 0x48);
  if (0 < *(int *)(param_1 + 0x34)) {
    if (*(long *)(*(long *)(param_1 + 0x38) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109322cc8; end: 109322cdb;  */

void FUN_109322cc8(void)

{
  FUN_109322c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109322cdc; end: 109322ce7;  */

undefined ** FUN_109322cdc(void)

{
  return &PTR_DAT_110aedf88;
}



/* Entry: 109322ce8; end: 109322d6b;  */

void FUN_109322ce8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x00010933c6f4(*(undefined8 *)(param_1 + 0x78));
  }
  if ((uVar1 & 0x3e) != 0) {
    *(undefined4 *)(param_1 + 0x83) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0x3e4ccccd;
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 109322d6c; end: 10932357f;  */

byte * FUN_109322d6c(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar17 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar17) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar9 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    pbVar6 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar17) {
      do {
        param_2 = pbVar6;
        pbVar6 = param_2 + 1;
        *param_2 = (byte)uVar17 | 0x80;
        uVar16 = uVar17 >> 0xe;
        uVar17 = uVar17 >> 7;
      } while (uVar16 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar6 = (byte)uVar17;
    puVar18 = *(uint **)(param_1 + 0x20);
    iVar22 = *(int *)(param_1 + 0x18);
    pbVar6 = param_3 + 0x10;
    puVar20 = puVar18;
    do {
      pbVar9 = param_2;
      pbVar14 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar9 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109322e2c:
            param_3[0x38] = 1;
LAB_109322ec4:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar10 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar23 = *(undefined8 *)pbVar14;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar14 + 8);
              *(undefined8 *)pbVar6 = uVar23;
              *(byte **)(param_3 + 8) = pbVar14;
              goto LAB_109322ec4;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar6,(long)pbVar14 - (long)pbVar6);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109322e2c;
            } while (uStack_64 == 0);
            puVar13 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar23 = *puVar13;
              *(undefined8 *)(param_3 + 0x18) = puVar13[1];
              *(undefined8 *)pbVar6 = uVar23;
              *(byte **)param_3 = pbVar6 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar10 = pbVar6 + (int)uStack_64;
            }
            else {
              uVar23 = *puVar13;
              *(undefined8 *)(pbStack_70 + 8) = puVar13[1];
              *(undefined8 *)pbStack_70 = uVar23;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar9 = pbStack_70;
              pbVar10 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar9 + ((int)param_2 - (int)pbVar14);
          pbVar9 = param_2;
          pbVar14 = pbVar10;
        } while (pbVar10 <= param_2);
      }
      puVar19 = puVar20 + 1;
      uVar7 = (ulong)(int)*puVar20;
      uVar8 = uVar7;
      pbVar14 = pbVar9;
      if (0x7f < *puVar20) {
        do {
          pbVar9 = pbVar14 + 1;
          *pbVar14 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar12 = uVar8 >> 0xe;
          uVar8 = uVar7;
          pbVar14 = pbVar9;
        } while (uVar12 != 0);
      }
      param_2 = pbVar9 + 1;
      *pbVar9 = (byte)uVar7;
      puVar20 = puVar19;
    } while (puVar19 < puVar18 + iVar22);
  }
  uVar17 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar17) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar9 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    pbVar6 = param_2 + 1;
    *param_2 = 0x12;
    if (0x7f < uVar17) {
      do {
        param_2 = pbVar6;
        pbVar6 = param_2 + 1;
        *param_2 = (byte)uVar17 | 0x80;
        uVar16 = uVar17 >> 0xe;
        uVar17 = uVar17 >> 7;
      } while (uVar16 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar6 = (byte)uVar17;
    puVar18 = *(uint **)(param_1 + 0x38);
    iVar22 = *(int *)(param_1 + 0x30);
    pbVar6 = param_3 + 0x10;
    puVar20 = puVar18;
    do {
      pbVar9 = param_2;
      pbVar14 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar9 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109322f84:
            param_3[0x38] = 1;
LAB_10932301c:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar10 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar23 = *(undefined8 *)pbVar14;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar14 + 8);
              *(undefined8 *)pbVar6 = uVar23;
              *(byte **)(param_3 + 8) = pbVar14;
              goto LAB_10932301c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar6,(long)pbVar14 - (long)pbVar6);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_109322f84;
            } while (uStack_64 == 0);
            puVar13 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar23 = *puVar13;
              *(undefined8 *)(param_3 + 0x18) = puVar13[1];
              *(undefined8 *)pbVar6 = uVar23;
              *(byte **)param_3 = pbVar6 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar10 = pbVar6 + (int)uStack_64;
            }
            else {
              uVar23 = *puVar13;
              *(undefined8 *)(pbStack_70 + 8) = puVar13[1];
              *(undefined8 *)pbStack_70 = uVar23;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar9 = pbStack_70;
              pbVar10 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar9 + ((int)param_2 - (int)pbVar14);
          pbVar9 = param_2;
          pbVar14 = pbVar10;
        } while (pbVar10 <= param_2);
      }
      puVar19 = puVar20 + 1;
      uVar7 = (ulong)(int)*puVar20;
      uVar8 = uVar7;
      pbVar14 = pbVar9;
      if (0x7f < *puVar20) {
        do {
          pbVar9 = pbVar14 + 1;
          *pbVar14 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar12 = uVar8 >> 0xe;
          uVar8 = uVar7;
          pbVar14 = pbVar9;
        } while (uVar12 != 0);
      }
      param_2 = pbVar9 + 1;
      *pbVar9 = (byte)uVar7;
      puVar20 = puVar19;
    } while (puVar19 < puVar18 + iVar22);
  }
  uVar17 = *(uint *)(param_1 + 0x10);
  if ((uVar17 & 1) != 0) {
    pbVar6 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x78),
                        *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x14),param_2,param_3);
    param_2 = pbVar6;
  }
  if ((uVar17 >> 5 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar9 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x88);
    *param_2 = 0x25;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((uVar17 >> 2 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar9 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar9 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x84);
    *param_2 = 0x28;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  iVar22 = *(int *)(param_1 + 0x50);
  if (iVar22 != 0) {
    iVar21 = 0;
    pbVar6 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x48);
      puVar1 = (ulong *)(param_1 + 0x48);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + (long)iVar21 * 8 + 7);
      }
      param_2 = (byte *)0x6;
      func_0x000107c303cc(6,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar6,param_3);
      iVar21 = iVar21 + 1;
      pbVar6 = param_2;
    } while (iVar22 != iVar21);
  }
  pbVar6 = param_2;
  if ((uVar17 >> 1 & 1) != 0) {
    pbVar6 = param_3;
    func_0x00010598f468(param_3,*(undefined4 *)(param_1 + 0x80),param_2);
  }
  uVar16 = *(uint *)(param_1 + 0x70);
  if (0 < (int)uVar16) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar14 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar14 + ((int)pbVar6 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= pbVar6);
    }
    pbVar9 = pbVar6 + 1;
    *pbVar6 = 0x42;
    if (0x7f < uVar16) {
      do {
        pbVar6 = pbVar9;
        pbVar9 = pbVar6 + 1;
        *pbVar6 = (byte)uVar16 | 0x80;
        uVar4 = uVar16 >> 0xe;
        uVar16 = uVar16 >> 7;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar6 + 2;
    *pbVar9 = (byte)uVar16;
    puVar18 = *(uint **)(param_1 + 0x68);
    iVar22 = *(int *)(param_1 + 0x60);
    pbVar9 = param_3 + 0x10;
    puVar20 = puVar18;
    do {
      pbVar14 = pbVar6;
      pbVar10 = *(byte **)param_3;
      if (*(byte **)param_3 <= pbVar6) {
        do {
          pbVar14 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093231b8:
            param_3[0x38] = 1;
LAB_109323250:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar11 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar23 = *(undefined8 *)pbVar10;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar10 + 8);
              *(undefined8 *)pbVar9 = uVar23;
              *(byte **)(param_3 + 8) = pbVar10;
              goto LAB_109323250;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar10 - (long)pbVar9);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) goto LAB_1093231b8;
            } while (uStack_64 == 0);
            puVar13 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar23 = *puVar13;
              *(undefined8 *)(param_3 + 0x18) = puVar13[1];
              *(undefined8 *)pbVar9 = uVar23;
              *(byte **)param_3 = pbVar9 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar11 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar23 = *puVar13;
              *(undefined8 *)(pbStack_70 + 8) = puVar13[1];
              *(undefined8 *)pbStack_70 = uVar23;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar14 = pbStack_70;
              pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          pbVar6 = pbVar14 + ((int)pbVar6 - (int)pbVar10);
          pbVar14 = pbVar6;
          pbVar10 = pbVar11;
        } while (pbVar11 <= pbVar6);
      }
      puVar19 = puVar20 + 1;
      uVar7 = (ulong)(int)*puVar20;
      uVar8 = uVar7;
      pbVar6 = pbVar14;
      if (0x7f < *puVar20) {
        do {
          pbVar14 = pbVar6 + 1;
          *pbVar6 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar12 = uVar8 >> 0xe;
          uVar8 = uVar7;
          pbVar6 = pbVar14;
        } while (uVar12 != 0);
      }
      pbVar6 = pbVar14 + 1;
      *pbVar14 = (byte)uVar7;
      puVar20 = puVar19;
    } while (puVar19 < puVar18 + iVar22);
  }
  if ((uVar17 >> 3 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar14 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar14 + ((int)pbVar6 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= pbVar6);
    }
    bVar3 = *(byte *)(param_1 + 0x85);
    *pbVar6 = 0x48;
    pbVar6[1] = bVar3;
    pbVar6 = pbVar6 + 2;
  }
  if ((uVar17 >> 4 & 1) != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar9 <= pbVar6) {
      do {
        if (param_3[0x38] == 1) {
          pbVar6 = param_3 + 0x10;
          break;
        }
        pbVar14 = param_3;
        func_0x000107c303dc();
        pbVar6 = pbVar14 + ((int)pbVar6 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= pbVar6);
    }
    bVar3 = *(byte *)(param_1 + 0x86);
    *pbVar6 = 0x50;
    pbVar6[1] = bVar3;
    pbVar6 = pbVar6 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar15 = *(long *)(uVar8 + 8);
      uVar7 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar15 = uVar8 + 8;
    }
    uVar17 = (uint)uVar7;
    if (*(long *)param_3 - (long)pbVar6 < (long)(int)uVar17) {
      pbVar9 = (byte *)((*(long *)param_3 - (long)pbVar6) + 0x10);
      if ((int)pbVar9 < (int)uVar17) {
        do {
          iVar22 = (int)pbVar9;
          _memcpy(pbVar6,lVar15,(long)iVar22);
          uVar17 = (int)uVar7 - iVar22;
          uVar7 = (ulong)uVar17;
          lVar15 = lVar15 + iVar22;
          pbVar9 = *(byte **)param_3;
          pbVar14 = pbVar6 + iVar22;
          do {
            pbVar6 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar6 = param_3;
            func_0x000107c303dc();
            pbVar14 = pbVar6 + ((int)pbVar14 - (int)pbVar9);
            pbVar9 = *(byte **)param_3;
            pbVar6 = pbVar14;
          } while (pbVar9 <= pbVar14);
          pbVar9 = pbVar9 + (0x10 - (long)pbVar6);
        } while ((int)pbVar9 < (int)uVar17);
      }
      _memcpy(pbVar6,lVar15,(long)(int)uVar17);
      pbVar6 = pbVar6 + (int)uVar17;
    }
    else {
      _memcpy(pbVar6,lVar15,uVar7 & 0xffffffff);
      pbVar6 = pbVar6 + (int)uVar17;
    }
  }
  return pbVar6;
}



/* Entry: 109323580; end: 10932380b;  */

long FUN_109323580(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar3 = 0;
    lVar9 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar4 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x20);
    do {
      lVar4 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar4;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar4;
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = lVar4;
    }
    lVar9 = 0;
    if (lVar4 != 0) {
      lVar9 = (ulong)((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((int)uVar1 < 1) {
    lVar7 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar7 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x38);
    do {
      lVar7 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar7;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x40) = (int)lVar7;
    if (lVar7 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar7) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x50);
  lVar3 = lVar9 + lVar3 + lVar7 + lVar4 + (long)iVar2;
  puVar8 = (ulong *)(param_1 + 0x48);
  if ((uVar6 & 1) != 0) {
    puVar8 = (ulong *)(uVar6 + 7);
  }
  if (iVar2 != 0) {
    lVar9 = (long)iVar2 << 3;
    do {
      uVar6 = *puVar8;
      FUN_109335368();
      lVar3 = uVar6 + lVar3 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6);
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((int)uVar1 < 1) {
    lVar4 = 0;
    lVar9 = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    lVar4 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar5 = *(int **)(param_1 + 0x68);
    do {
      lVar4 = (ulong)((int)LZCOUNT((long)*piVar5) * -9 + 0x280U >> 6) + lVar4;
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x70) = (int)lVar4;
    if (lVar4 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (ulong)((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar9 = lVar4 + lVar3 + lVar9;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x78);
      FUN_10933c8f8();
      lVar9 = lVar9 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar9 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x80)) * -9 + 0x2c0U >> 6) + lVar9;
    }
    lVar9 = lVar9 + (ulong)((uVar1 >> 2 & 2) + (uVar1 >> 1 & 2) + (uVar1 >> 3 & 2));
    if ((uVar1 & 0x20) != 0) {
      lVar9 = lVar9 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar6 + 0x10);
    }
    lVar9 = lVar3 + lVar9;
  }
  *(int *)(param_1 + 0x14) = (int)lVar9;
  return lVar9;
}



/* Entry: 10932380c; end: 10932380f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10932380c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x20);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x34) < iVar3) {
      func_0x000107c282d8(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x30);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x30) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x38);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  iVar1 = *(int *)(param_2 + 0x60);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 100) < iVar3) {
      func_0x000107c282d8(param_1 + 0x60);
      iVar2 = *(int *)(param_1 + 0x60);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x60) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x68);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x68) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 0x3f) != 0) {
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        func_0x00010932fde8(uVar7,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar7;
      }
      else {
        FUN_10933c5e8();
      }
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x85) = *(undefined1 *)(param_2 + 0x85);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x86) = *(undefined1 *)(param_2 + 0x86);
    }
    if ((uVar6 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109323810; end: 109323a3b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109323810(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x20);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x34) < iVar3) {
      func_0x000107c282d8(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x30);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x30) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x38);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  iVar1 = *(int *)(param_2 + 0x60);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 100) < iVar3) {
      func_0x000107c282d8(param_1 + 0x60);
      iVar2 = *(int *)(param_1 + 0x60);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x60) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined4 **)(param_2 + 0x68);
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x68) + (long)iVar2 * 4);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 0x3f) != 0) {
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        func_0x00010932fde8(uVar7,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar7;
      }
      else {
        FUN_10933c5e8();
      }
    }
    if ((uVar6 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x85) = *(undefined1 *)(param_2 + 0x85);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x86) = *(undefined1 *)(param_2 + 0x86);
    }
    if ((uVar6 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109323a3c; end: 109323a87;  */

long FUN_109323a3c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109323a88; end: 109323a8b;  */

long FUN_109323a88(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109323a8c; end: 109323a9f;  */

void FUN_109323a8c(void)

{
  FUN_109323a3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109323aa0; end: 109323aab;  */

undefined ** FUN_109323aa0(void)

{
  return &PTR_DAT_110aedfd0;
}



/* Entry: 109323aac; end: 109323af3;  */

void FUN_109323aac(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001093409d8(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 109323af4; end: 109323c3f;  */

long * FUN_109323af4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109323c40; end: 109323cb3;  */

void FUN_109323c40(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_109340c2c();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 109323cb4; end: 109323cb7;  */

void FUN_109323cb4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x000109312590(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1093408b0(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109323cb8; end: 109323d4f;  */

void FUN_109323cb8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x000109312590(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_1093408b0(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109323d50; end: 109323dc7;  */

long FUN_109323d50(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109335e08();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109322c1c();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_109323a3c();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109323dc8; end: 109323dcb;  */

long FUN_109323dc8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109335e08();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109322c1c();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_109323a3c();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109323dcc; end: 109323ddf;  */

void FUN_109323dcc(void)

{
  FUN_109323d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109323de0; end: 109323deb;  */

undefined ** FUN_109323de0(void)

{
  return &PTR_DAT_110aee010;
}



/* Entry: 109323dec; end: 109323ec7;  */

void FUN_109323dec(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_109335ed0(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109322ce8(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_109323aac(*(undefined8 *)(param_1 + 0x40));
    }
  }
  if ((uVar1 & 0xf8) != 0) {
    *(undefined4 *)(param_1 + 0x4f) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined8 *)(param_1 + 0x59) = 0;
    *(undefined8 *)(param_1 + 0x53) = 0;
  }
  if ((uVar1 & 0xff0000) != 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x61) = 0;
    *(undefined4 *)(param_1 + 0x70) = 4;
  }
  if ((uVar1 & 0x1f000000) != 0) {
    *(undefined8 *)(param_1 + 0x74) = 0x400000003c23d70a;
    *(undefined8 *)(param_1 + 0x7c) = 0x13f800000;
    *(undefined4 *)(param_1 + 0x84) = 0x3e4ccccd;
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) != 0) {
    if ((*puVar2 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
    }
    if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
      return;
    }
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  return;
}



/* Entry: 109323ec8; end: 109324bfb;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_109323ec8(long param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar15 = *(uint *)(param_1 + 0x10);
  if ((uVar15 >> 0x17 & 1) != 0) {
    pbVar6 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x70),param_2);
    param_2 = pbVar6;
  }
  if ((uVar15 & 1) != 0) {
    pbVar6 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
    param_2 = pbVar6;
  }
  if ((uVar15 >> 0x18 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x74);
    *param_2 = 0x1d;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar15 >> 5 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x50);
    *param_2 = 0x20;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar15 >> 8 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x53);
    *param_2 = 0x38;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar15 >> 3 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar14 = *(uint *)(param_1 + 0x48);
    uVar7 = (ulong)(int)uVar14;
    pbVar13 = param_2 + 1;
    *param_2 = 0x40;
    uVar8 = uVar7;
    pbVar6 = pbVar13;
    if (0x7f < uVar14) {
      do {
        pbVar13 = pbVar6 + 1;
        *pbVar6 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar11 = uVar8 >> 0xe;
        uVar8 = uVar7;
        pbVar6 = pbVar13;
      } while (uVar11 != 0);
    }
    param_2 = pbVar13 + 1;
    *pbVar13 = (byte)uVar7;
  }
  if ((uVar15 >> 9 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x54);
    *param_2 = 0x48;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar15 >> 0x19 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x78);
    *param_2 = 0x55;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar15 >> 4 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    *param_2 = 0x5d;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar15 >> 6 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x51);
    *param_2 = 0x60;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar15 >> 0x12 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 99);
    *param_2 = 0x68;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar15 >> 0x13 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 100);
    *param_2 = 0x70;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar15 >> 0x1a & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
    *param_2 = 0x7d;
    *(undefined4 *)(param_2 + 1) = uVar1;
    param_2 = param_2 + 5;
  }
  if ((uVar15 >> 10 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x55);
    param_2[0] = 0x80;
    param_2[1] = 1;
    param_2[2] = bVar2;
    param_2 = param_2 + 3;
  }
  if ((uVar15 >> 0xb & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x56);
    param_2[0] = 0x88;
    param_2[1] = 1;
    param_2[2] = bVar2;
    param_2 = param_2 + 3;
  }
  if ((uVar15 >> 1 & 1) != 0) {
    pbVar6 = (byte *)0x12;
    func_0x000107c303cc(0x12,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),param_2,param_3);
    param_2 = pbVar6;
  }
  if ((uVar15 >> 0xd & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar14 = *(uint *)(param_1 + 0x58);
    uVar7 = (ulong)(int)uVar14;
    pbVar13 = param_2 + 2;
    param_2[0] = 0x98;
    param_2[1] = 1;
    uVar8 = uVar7;
    pbVar6 = pbVar13;
    if (0x7f < uVar14) {
      do {
        pbVar13 = pbVar6 + 1;
        *pbVar6 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar11 = uVar8 >> 0xe;
        uVar8 = uVar7;
        pbVar6 = pbVar13;
      } while (uVar11 != 0);
    }
    param_2 = pbVar13 + 1;
    *pbVar13 = (byte)uVar7;
  }
  if ((uVar15 >> 0xe & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar14 = *(uint *)(param_1 + 0x5c);
    uVar7 = (ulong)(int)uVar14;
    pbVar13 = param_2 + 2;
    param_2[0] = 0xa0;
    param_2[1] = 1;
    uVar8 = uVar7;
    pbVar6 = pbVar13;
    if (0x7f < uVar14) {
      do {
        pbVar13 = pbVar6 + 1;
        *pbVar6 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar11 = uVar8 >> 0xe;
        uVar8 = uVar7;
        pbVar6 = pbVar13;
      } while (uVar11 != 0);
    }
    param_2 = pbVar13 + 1;
    *pbVar13 = (byte)uVar7;
  }
  uVar14 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar14) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    pbVar6 = param_2 + 2;
    param_2[0] = 0xaa;
    param_2[1] = 1;
    if (uVar14 < 0x80) {
      param_2 = param_2 + 1;
    }
    else {
      do {
        param_2 = pbVar6;
        pbVar6 = param_2 + 1;
        *param_2 = (byte)uVar14 | 0x80;
        uVar3 = uVar14 >> 0xe;
        uVar14 = uVar14 >> 7;
      } while (uVar3 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar6 = (byte)uVar14;
    puVar17 = *(uint **)(param_1 + 0x20);
    iVar16 = *(int *)(param_1 + 0x18);
    pbVar6 = param_3 + 0x10;
    puVar18 = puVar17;
    do {
      pbVar13 = param_2;
      pbVar5 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar13 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109324264:
            param_3[0x38] = 1;
LAB_1093242fc:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar9 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar20 = *(undefined8 *)pbVar5;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar5 + 8);
              *(undefined8 *)pbVar6 = uVar20;
              *(byte **)(param_3 + 8) = pbVar5;
              goto LAB_1093242fc;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar6,(long)pbVar5 - (long)pbVar6);
            do {
              plVar4 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar4 + 0x10))(plVar4,&pbStack_70,&uStack_64);
              if (((ulong)plVar4 & 1) == 0) goto LAB_109324264;
            } while (uStack_64 == 0);
            puVar10 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar20 = *puVar10;
              *(undefined8 *)(param_3 + 0x18) = puVar10[1];
              *(undefined8 *)pbVar6 = uVar20;
              *(byte **)param_3 = pbVar6 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar9 = pbVar6 + (int)uStack_64;
            }
            else {
              uVar20 = *puVar10;
              *(undefined8 *)(pbStack_70 + 8) = puVar10[1];
              *(undefined8 *)pbStack_70 = uVar20;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar13 = pbStack_70;
              pbVar9 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar13 + ((int)param_2 - (int)pbVar5);
          pbVar13 = param_2;
          pbVar5 = pbVar9;
        } while (pbVar9 <= param_2);
      }
      puVar19 = puVar18 + 1;
      uVar7 = (ulong)(int)*puVar18;
      uVar8 = uVar7;
      pbVar5 = pbVar13;
      if (0x7f < *puVar18) {
        do {
          pbVar13 = pbVar5 + 1;
          *pbVar5 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar11 = uVar8 >> 0xe;
          uVar8 = uVar7;
          pbVar5 = pbVar13;
        } while (uVar11 != 0);
      }
      param_2 = pbVar13 + 1;
      *pbVar13 = (byte)uVar7;
      puVar18 = puVar19;
    } while (puVar19 < puVar17 + iVar16);
  }
  if ((uVar15 >> 0xc & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x57);
    param_2[0] = 0xb0;
    param_2[1] = 1;
    param_2[2] = bVar2;
    param_2 = param_2 + 3;
  }
  if ((uVar15 >> 0x10 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x61);
    param_2[0] = 0xb8;
    param_2[1] = 1;
    param_2[2] = bVar2;
    param_2 = param_2 + 3;
  }
  if ((uVar15 >> 0x11 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x62);
    param_2[0] = 0xc0;
    param_2[1] = 1;
    param_2[2] = bVar2;
    param_2 = param_2 + 3;
  }
  if ((uVar15 >> 2 & 1) != 0) {
    pbVar6 = (byte *)0x19;
    func_0x000107c303cc(0x19,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),param_2,param_3);
    param_2 = pbVar6;
  }
  if ((uVar15 >> 0x1b & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar14 = *(uint *)(param_1 + 0x80);
    uVar7 = (ulong)(int)uVar14;
    pbVar13 = param_2 + 2;
    param_2[0] = 0xd0;
    param_2[1] = 1;
    uVar8 = uVar7;
    pbVar6 = pbVar13;
    if (0x7f < uVar14) {
      do {
        pbVar13 = pbVar6 + 1;
        *pbVar6 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar11 = uVar8 >> 0xe;
        uVar8 = uVar7;
        pbVar6 = pbVar13;
      } while (uVar11 != 0);
    }
    param_2 = pbVar13 + 1;
    *pbVar13 = (byte)uVar7;
  }
  if ((uVar15 >> 0x1c & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x84);
    param_2[0] = 0xdd;
    param_2[1] = 1;
    *(undefined4 *)(param_2 + 2) = uVar1;
    param_2 = param_2 + 6;
  }
  if ((uVar15 >> 0xf & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x60);
    param_2[0] = 0xe0;
    param_2[1] = 1;
    param_2[2] = bVar2;
    param_2 = param_2 + 3;
  }
  if ((uVar15 >> 0x15 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar14 = *(uint *)(param_1 + 0x68);
    uVar7 = (ulong)(int)uVar14;
    pbVar13 = param_2 + 2;
    param_2[0] = 0xe8;
    param_2[1] = 1;
    uVar8 = uVar7;
    pbVar6 = pbVar13;
    if (0x7f < uVar14) {
      do {
        pbVar13 = pbVar6 + 1;
        *pbVar6 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar11 = uVar8 >> 0xe;
        uVar8 = uVar7;
        pbVar6 = pbVar13;
      } while (uVar11 != 0);
    }
    param_2 = pbVar13 + 1;
    *pbVar13 = (byte)uVar7;
  }
  if ((uVar15 >> 0x16 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    uVar14 = *(uint *)(param_1 + 0x6c);
    uVar7 = (ulong)(int)uVar14;
    pbVar13 = param_2 + 2;
    param_2[0] = 0xf0;
    param_2[1] = 1;
    uVar8 = uVar7;
    pbVar6 = pbVar13;
    if (0x7f < uVar14) {
      do {
        pbVar13 = pbVar6 + 1;
        *pbVar6 = (byte)uVar8 | 0x80;
        uVar7 = uVar8 >> 7;
        uVar11 = uVar8 >> 0xe;
        uVar8 = uVar7;
        pbVar6 = pbVar13;
      } while (uVar11 != 0);
    }
    param_2 = pbVar13 + 1;
    *pbVar13 = (byte)uVar7;
  }
  if ((uVar15 >> 0x14 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x65);
    param_2[0] = 0x80;
    param_2[1] = 2;
    param_2[2] = bVar2;
    param_2 = param_2 + 3;
  }
  if ((uVar15 >> 7 & 1) != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x52);
    param_2[0] = 0x88;
    param_2[1] = 2;
    param_2[2] = bVar2;
    param_2 = param_2 + 3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar12 = *(long *)(uVar8 + 8);
      uVar7 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar12 = uVar8 + 8;
    }
    uVar15 = (uint)uVar7;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar15) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar6 < (int)uVar15) {
        do {
          iVar16 = (int)pbVar6;
          _memcpy(param_2,lVar12,(long)iVar16);
          uVar15 = (int)uVar7 - iVar16;
          uVar7 = (ulong)uVar15;
          lVar12 = lVar12 + iVar16;
          pbVar6 = *(byte **)param_3;
          pbVar13 = param_2 + iVar16;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar13 = pbVar5 + ((int)pbVar13 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            param_2 = pbVar13;
          } while (pbVar6 <= pbVar13);
          pbVar6 = pbVar6 + (0x10 - (long)param_2);
        } while ((int)pbVar6 < (int)uVar15);
      }
      _memcpy(param_2,lVar12,(long)(int)uVar15);
      param_2 = param_2 + (int)uVar15;
    }
    else {
      _memcpy(param_2,lVar12,uVar7 & 0xffffffff);
      param_2 = param_2 + (int)uVar15;
    }
  }
  return param_2;
}



/* Entry: 109324bfc; end: 109324f43;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_109324bfc(long param_1)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    piVar3 = *(int **)(param_1 + 0x20);
    do {
      lVar2 = (ulong)((int)LZCOUNT((long)*piVar3) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      piVar3 = piVar3 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 2;
    }
  }
  lVar4 = lVar4 + lVar2;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      FUN_10933686c();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      FUN_109323580();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x40);
      FUN_109323c40();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 & 0x10) != 0) {
      lVar4 = lVar4 + 5;
    }
    lVar4 = lVar4 + (ulong)((uVar1 >> 5 & 2) + (uVar1 >> 4 & 2));
    if ((uVar1 & 0x80) != 0) {
      lVar4 = lVar4 + 3;
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    lVar4 = lVar4 + (ulong)((uVar1 >> 8 & 2) + (uVar1 >> 7 & 2));
    if ((uVar1 & 0x400) != 0) {
      lVar4 = lVar4 + 3;
    }
    if ((uVar1 & 0x800) != 0) {
      lVar4 = lVar4 + 3;
    }
    if ((uVar1 & 0x1000) != 0) {
      lVar4 = lVar4 + 3;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x280U >> 6) + 2;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x5c)) * -9 + 0x280U >> 6) + 2;
    }
    if ((uVar1 & 0x8000) != 0) {
      lVar4 = lVar4 + 3;
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 & 0x10000) != 0) {
      lVar4 = lVar4 + 3;
    }
    if ((uVar1 & 0x20000) != 0) {
      lVar4 = lVar4 + 3;
    }
    lVar4 = lVar4 + (ulong)((uVar1 >> 0x12 & 2) + (uVar1 >> 0x11 & 2));
    if ((uVar1 & 0x100000) != 0) {
      lVar4 = lVar4 + 3;
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x68)) * -9 + 0x280U >> 6) + 2;
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x6c)) * -9 + 0x280U >> 6) + 2;
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x70)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((uVar1 & 0x1f000000) != 0) {
    if ((uVar1 & 0x1000000) != 0) {
      lVar4 = lVar4 + 5;
    }
    if ((uVar1 & 0x2000000) != 0) {
      lVar4 = lVar4 + 5;
    }
    if ((uVar1 & 0x4000000) != 0) {
      lVar4 = lVar4 + 5;
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x80)) * -9 + 0x280U >> 6) + 2;
    }
    if ((uVar1 & 0x10000000) != 0) {
      lVar4 = lVar4 + 6;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109324f44; end: 109324f47;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109324f44(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar4) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x18);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 0xff) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar8;
        FUN_109312ce0(uVar8,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_109336d7c();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar8;
        FUN_109330094(uVar8,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_109323810();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_1093301f4(uVar8,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar8;
      }
      else {
        FUN_109323cb8();
      }
    }
    if ((uVar7 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    if ((uVar7 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    }
    if ((uVar7 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
    }
    if ((uVar7 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
    }
    if ((uVar7 >> 7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
    }
  }
  if ((uVar7 & 0xff00) != 0) {
    if ((uVar7 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_2 + 0x53);
    }
    if ((uVar7 >> 9 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
    }
    if ((uVar7 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_2 + 0x55);
    }
    if ((uVar7 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_2 + 0x56);
    }
    if ((uVar7 >> 0xc & 1) != 0) {
      *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)(param_2 + 0x57);
    }
    if ((uVar7 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar7 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    }
    if ((uVar7 >> 0xf & 1) != 0) {
      *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
    }
  }
  if ((uVar7 & 0xff0000) != 0) {
    if ((uVar7 >> 0x10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(param_2 + 0x61);
    }
    if ((uVar7 >> 0x11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
    }
    if ((uVar7 >> 0x12 & 1) != 0) {
      *(undefined1 *)(param_1 + 99) = *(undefined1 *)(param_2 + 99);
    }
    if ((uVar7 >> 0x13 & 1) != 0) {
      *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
    }
    if ((uVar7 >> 0x14 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(param_2 + 0x65);
    }
    if ((uVar7 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
    if ((uVar7 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    }
    if ((uVar7 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    }
  }
  if ((uVar7 & 0x1f000000) != 0) {
    if ((uVar7 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    }
    if ((uVar7 >> 0x19 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    }
    if ((uVar7 >> 0x1a & 1) != 0) {
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    }
    if ((uVar7 >> 0x1b & 1) != 0) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    }
    if ((uVar7 >> 0x1c & 1) != 0) {
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar7;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109324f48; end: 109325267;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109324f48(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    iVar4 = iVar3 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar4) {
      func_0x000107c282d8(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x18);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar6 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 0xff) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar8;
        FUN_109312ce0(uVar8,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_109336d7c();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar8;
        FUN_109330094(uVar8,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_109323810();
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_1093301f4(uVar8,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar8;
      }
      else {
        FUN_109323cb8();
      }
    }
    if ((uVar7 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    if ((uVar7 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    }
    if ((uVar7 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
    }
    if ((uVar7 >> 6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
    }
    if ((uVar7 >> 7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
    }
  }
  if ((uVar7 & 0xff00) != 0) {
    if ((uVar7 >> 8 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_2 + 0x53);
    }
    if ((uVar7 >> 9 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
    }
    if ((uVar7 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_2 + 0x55);
    }
    if ((uVar7 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_2 + 0x56);
    }
    if ((uVar7 >> 0xc & 1) != 0) {
      *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)(param_2 + 0x57);
    }
    if ((uVar7 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar7 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    }
    if ((uVar7 >> 0xf & 1) != 0) {
      *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
    }
  }
  if ((uVar7 & 0xff0000) != 0) {
    if ((uVar7 >> 0x10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(param_2 + 0x61);
    }
    if ((uVar7 >> 0x11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
    }
    if ((uVar7 >> 0x12 & 1) != 0) {
      *(undefined1 *)(param_1 + 99) = *(undefined1 *)(param_2 + 99);
    }
    if ((uVar7 >> 0x13 & 1) != 0) {
      *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
    }
    if ((uVar7 >> 0x14 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(param_2 + 0x65);
    }
    if ((uVar7 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
    if ((uVar7 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    }
    if ((uVar7 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    }
  }
  if ((uVar7 & 0x1f000000) != 0) {
    if ((uVar7 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    }
    if ((uVar7 >> 0x19 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    }
    if ((uVar7 >> 0x1a & 1) != 0) {
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    }
    if ((uVar7 >> 0x1b & 1) != 0) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    }
    if ((uVar7 >> 0x1c & 1) != 0) {
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar7;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109325268; end: 1093252b3;  */

long FUN_109325268(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109335e08();
    __ZdlPv();
  }
  FUN_10932e3a0(param_1 + 0x18);
  return param_1;
}



/* Entry: 1093252b4; end: 1093252b7;  */

long FUN_1093252b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109335e08();
    __ZdlPv();
  }
  FUN_10932e3a0(param_1 + 0x18);
  return param_1;
}



/* Entry: 1093252b8; end: 1093252cb;  */

void FUN_1093252b8(void)

{
  FUN_109325268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093252cc; end: 1093252d7;  */

undefined ** FUN_1093252cc(void)

{
  return &PTR_DAT_110aee048;
}



/* Entry: 1093252d8; end: 10932536f;  */

void FUN_1093252d8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109335ed0(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) != 0) {
    if ((*puVar3 & 1) == 0) {
      func_0x00010b4c3590();
    }
    else {
      puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
    }
    if ((char)*(byte *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      return;
    }
    *(byte *)puVar3 = 0;
    *(byte *)((long)puVar3 + 0x17) = 0;
    return;
  }
  return;
}



/* Entry: 109325370; end: 109325687;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109325370(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 >> 2 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)param_2 = 8;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 3 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x41);
    *(undefined1 *)param_2 = 0x10;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 4 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x42);
    *(undefined1 *)param_2 = 0x18;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  plVar3 = param_2;
  if ((uVar8 & 1) != 0) {
    plVar3 = param_3;
    func_0x000107c280a0(param_3,4,*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc,param_2);
  }
  iVar11 = *(int *)(param_1 + 0x20);
  if (iVar11 != 0) {
    iVar10 = 0;
    plVar4 = plVar3;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar10 * 8 + 7);
      }
      plVar3 = (long *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar4,param_3);
      iVar10 = iVar10 + 1;
      plVar4 = plVar3;
    } while (iVar11 != iVar10);
  }
  plVar4 = plVar3;
  if ((uVar8 >> 1 & 1) != 0) {
    plVar4 = (long *)0x6;
    func_0x000107c303cc(6,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),plVar3,param_3);
  }
  if ((uVar8 >> 5 & 1) != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar4) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar4 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        plVar4 = (long *)((long)plVar6 + (long)((int)plVar4 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar4);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x43);
    *(undefined1 *)plVar4 = 0x38;
    *(undefined1 *)((long)plVar4 + 1) = uVar2;
    plVar4 = (long *)((long)plVar4 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar7 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar7 = uVar5 + 8;
    }
    uVar8 = (uint)uVar9;
    if (*param_3 - (long)plVar4 < (long)(int)uVar8) {
      puVar12 = (undefined1 *)((*param_3 - (long)plVar4) + 0x10);
      if ((int)puVar12 < (int)uVar8) {
        do {
          iVar11 = (int)puVar12;
          _memcpy(plVar4,lVar7,(long)iVar11);
          uVar8 = (int)uVar9 - iVar11;
          uVar9 = (ulong)uVar8;
          lVar7 = lVar7 + iVar11;
          plVar6 = (long *)*param_3;
          plVar3 = (long *)((long)plVar4 + (long)iVar11);
          do {
            plVar4 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar4 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar4 + (long)((int)plVar3 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar4 = plVar3;
          } while (plVar6 <= plVar3);
          puVar12 = (undefined1 *)((long)plVar6 + (0x10 - (long)plVar4));
        } while ((int)puVar12 < (int)uVar8);
      }
      _memcpy(plVar4,lVar7,(long)(int)uVar8);
      plVar4 = (long *)((long)plVar4 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar4,lVar7,uVar9 & 0xffffffff);
      plVar4 = (long *)((long)plVar4 + (long)(int)uVar8);
    }
  }
  return plVar4;
}



/* Entry: 109325688; end: 1093257cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_109325688(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  uint5 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar4 = (long)*(int *)(param_1 + 0x20);
  puVar5 = (ulong *)(param_1 + 0x18);
  if ((uVar3 & 1) != 0) {
    puVar5 = (ulong *)(uVar3 + 7);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar4 = 0;
  }
  else {
    lVar6 = lVar4 << 3;
    do {
      uVar3 = *puVar5;
      FUN_109325688();
      lVar4 = uVar3 + lVar4 + (ulong)((int)LZCOUNT((int)uVar3) * -9 + 0x160U >> 6);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar3 + 0x17);
      uVar3 = *(ulong *)(uVar3 + 8);
      if (-1 < (char)bVar2) {
        uVar3 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar3 + (ulong)((int)LZCOUNT((int)uVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x38);
      FUN_10933686c();
      lVar4 = lVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
    }
    auVar8._4_4_ = uVar1;
    auVar8._0_4_ = uVar1;
    auVar8._8_4_ = uVar1;
    auVar8._12_4_ = uVar1;
    auVar9[9] = 0xff;
    auVar9._0_9_ = _UNK_10dfc5af0;
    auVar9[10] = 0xff;
    auVar9[0xb] = 0xff;
    auVar9[0xc] = 0xfc;
    auVar9[0xd] = 0xff;
    auVar9[0xe] = 0xff;
    auVar9[0xf] = 0xff;
    auVar9 = NEON_ushl(auVar8,auVar9,4);
    uVar7 = CONCAT14(auVar9[4],(uint)(auVar9[0] & 2)) & 0x2ffffffff;
    lVar4 = lVar4 + (ulong)((int)uVar7 + (uint)(byte)(uVar7 >> 0x20) +
                           (uint)(auVar9[8] & 2) + (uint)(auVar9[0xc] & 2));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar6 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 1093257cc; end: 1093257cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093257cc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_109312ce0(uVar4,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar4;
      }
      else {
        FUN_109336d7c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1093257d0; end: 10932590f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093257d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x30,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_109312ce0(uVar4,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar4;
      }
      else {
        FUN_109336d7c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109325910; end: 109325943;  */

long FUN_109325910(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109325944; end: 109325947;  */

long FUN_109325944(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109325948; end: 10932595b;  */

void FUN_109325948(void)

{
  FUN_109325910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10932595c; end: 1093259bb;  */

undefined ** FUN_10932595c(void)

{
  return &PTR_DAT_110aee088;
}



/* Entry: 1093259bc; end: 109325c7f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1093259bc(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 *puVar11;
  
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 & 1) != 0) {
    plVar4 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
    param_2 = plVar4;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    plVar4 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    param_2 = plVar4;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x24);
    *(undefined1 *)param_2 = 0x18;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 3 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x25);
    *(undefined1 *)param_2 = 0x20;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 4 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x26);
    *(undefined1 *)param_2 = 0x28;
    *(undefined1 *)((long)param_2 + 1) = uVar2;
    param_2 = (long *)((long)param_2 + 2);
  }
  if ((uVar8 >> 5 & 1) != 0) {
    plVar4 = (long *)*param_3;
    if (plVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar6 + (long)((int)param_2 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)param_2 = 0x3d;
    *(undefined4 *)((long)param_2 + 1) = uVar1;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar7 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar7 = uVar5 + 8;
    }
    uVar8 = (uint)uVar9;
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      puVar11 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar11 < (int)uVar8) {
        do {
          iVar10 = (int)puVar11;
          _memcpy(param_2,lVar7,(long)iVar10);
          uVar8 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar8;
          lVar7 = lVar7 + iVar10;
          plVar6 = (long *)*param_3;
          plVar4 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar3 + (long)((int)plVar4 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar4;
          } while (plVar6 <= plVar4);
          puVar11 = (undefined1 *)((long)plVar6 + (0x10 - (long)param_2));
        } while ((int)puVar11 < (int)uVar8);
      }
      _memcpy(param_2,lVar7,(long)(int)uVar8);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
    else {
      _memcpy(param_2,lVar7,uVar9 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
  }
  return param_2;
}



/* Entry: 109325c80; end: 109325d57;  */

long FUN_109325c80(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    lVar3 = lVar3 + (ulong)((uVar1 >> 2 & 2) + (uVar1 >> 1 & 2) + (uVar1 >> 3 & 2));
    if ((uVar1 & 0x20) != 0) {
      lVar3 = lVar3 + 5;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 109325d58; end: 109325e43;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109325d58(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x18,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109325e44; end: 109325e83;  */

long FUN_109325e44(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109325e84; end: 109325e87;  */

long FUN_109325e84(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109325e88; end: 109325e9b;  */

void FUN_109325e88(void)

{
  FUN_109325e44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109325e9c; end: 109325ea7;  */

undefined ** FUN_109325e9c(void)

{
  return &PTR_DAT_110aee0c8;
}



/* Entry: 109325ea8; end: 109325eef;  */

void FUN_109325ea8(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 109325ef0; end: 10932610b;  */

long * FUN_109325ef0(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lStack_50;
  ulong uStack_48;
  long lVar9;
  
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    iVar7 = 0;
    plVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar7 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x14),plVar6,param_3);
      iVar7 = iVar7 + 1;
      plVar6 = param_2;
    } while (iVar8 != iVar7);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      lVar9 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar9 < (int)uVar3) {
        do {
          iVar8 = (int)lVar9;
          _memcpy(param_2,lStack_50,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar8;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar9 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar3);
    }
  }
  return param_2;
}



/* Entry: 10932610c; end: 10932610f;  */

void FUN_10932610c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109326110; end: 1093261b3;  */

void FUN_109326110(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1093261b4; end: 1093261b7;  */

long FUN_1093261b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 1093261b8; end: 1093261cb;  */

void FUN_1093261b8(void)

{
  func_0x000109326164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1093261cc; end: 10932621f;  */

undefined ** FUN_1093261cc(void)

{
  return &PTR_DAT_110aee108;
}


