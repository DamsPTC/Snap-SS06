/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109cb0348; end: 109cb03ff;  */

long FUN_109cb0348(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 100)) {
    if (*(long *)(*(long *)(param_1 + 0x68) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x4c)) {
    if (*(long *)(*(long *)(param_1 + 0x50) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x3c)) {
    if (*(long *)(*(long *)(param_1 + 0x40) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x24)) {
    if (*(long *)(*(long *)(param_1 + 0x28) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109cb0400; end: 109cb0413;  */

void FUN_109cb0400(void)

{
  FUN_109cb0348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cb0414; end: 109cb0443;  */

undefined ** FUN_109cb0414(void)

{
  return &PTR_DAT_110b38c90;
}



/* Entry: 109cb0444; end: 109cb0e5b;  */

byte * FUN_109cb0444(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  int iVar18;
  undefined8 uVar19;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      uVar12 = *(uint *)(param_1 + 0x10);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x12;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar6 | 0x80;
        uVar1 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar13 = *(long *)(param_1 + 0x18);
    uVar14 = (ulong)(int)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      uVar4 = uVar14;
      if ((int)pbVar3 < (int)uVar12) {
        pbVar10 = (byte *)(param_3 + 2);
        do {
          iVar18 = (int)pbVar3;
          _memcpy(param_2,lVar13,(long)iVar18);
          uVar12 = uVar12 - iVar18;
          lVar13 = lVar13 + iVar18;
          pbVar11 = param_2 + iVar18;
          pbVar5 = (byte *)*param_3;
          do {
            param_2 = pbVar10;
            pbVar3 = pbVar5;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            pbVar7 = pbVar10;
            if (param_3[6] == 0) {
LAB_109cb0ad8:
              *(undefined1 *)(param_3 + 7) = 1;
LAB_109cb0ab8:
              *param_3 = (long)(param_3 + 4);
              pbVar3 = (byte *)(param_3 + 4);
            }
            else {
              if (param_3[1] == 0) {
                uVar19 = *(undefined8 *)pbVar5;
                param_3[3] = *(long *)(pbVar5 + 8);
                *(undefined8 *)pbVar10 = uVar19;
                param_3[1] = (long)pbVar5;
                goto LAB_109cb0ab8;
              }
              _memcpy(param_3[1],pbVar10,(long)pbVar5 - (long)pbVar10);
              do {
                plVar2 = (long *)param_3[6];
                (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
                if (((ulong)plVar2 & 1) == 0) goto LAB_109cb0ad8;
              } while (uStack_64 == 0);
              puVar9 = (undefined8 *)*param_3;
              if ((int)uStack_64 < 0x11) {
                uVar19 = *puVar9;
                param_3[3] = puVar9[1];
                *(undefined8 *)pbVar10 = uVar19;
                *param_3 = (long)(pbVar10 + (int)uStack_64);
                param_3[1] = (long)pbStack_70;
                pbVar3 = pbVar10 + (int)uStack_64;
              }
              else {
                uVar19 = *puVar9;
                *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
                *(undefined8 *)pbStack_70 = uVar19;
                *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
                param_3[1] = 0;
                pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
                pbVar7 = pbStack_70;
              }
            }
            pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar5);
            pbVar5 = pbVar3;
            param_2 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
        uVar4 = (ulong)(int)uVar12;
        uVar14 = uVar4;
      }
    }
    else {
      uVar4 = (ulong)uVar12;
    }
    _memcpy(param_2,lVar13,uVar4);
    param_2 = param_2 + uVar14;
  }
  uVar12 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x1a;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar6 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar6 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar15 = *(ulong **)(param_1 + 0x28);
    iVar18 = *(int *)(param_1 + 0x20);
    pbVar3 = (byte *)(param_3 + 2);
    puVar17 = puVar15;
    do {
      pbVar10 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cb0568:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cb0600:
            *param_3 = (long)(param_3 + 4);
            pbVar5 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar3 = uVar19;
              param_3[1] = (long)pbVar11;
              goto LAB_109cb0600;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar11 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cb0568;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar3 = uVar19;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar5 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar5 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
          pbVar10 = param_2;
          pbVar11 = pbVar5;
        } while (pbVar5 <= param_2);
      }
      puVar16 = puVar17 + 1;
      uVar4 = *puVar17;
      uVar14 = uVar4;
      pbVar11 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar11 + 1;
          *pbVar11 = (byte)uVar14 | 0x80;
          uVar4 = uVar14 >> 7;
          uVar8 = uVar14 >> 0xe;
          uVar14 = uVar4;
          pbVar11 = pbVar10;
        } while (uVar8 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar17 = puVar16;
    } while (puVar16 < puVar15 + iVar18);
  }
  uVar12 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      uVar12 = *(uint *)(param_1 + 0x38);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x22;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar6 | 0x80;
        uVar1 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar13 = *(long *)(param_1 + 0x40);
    uVar14 = (ulong)(int)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      uVar4 = uVar14;
      if ((int)pbVar3 < (int)uVar12) {
        pbVar10 = (byte *)(param_3 + 2);
        do {
          iVar18 = (int)pbVar3;
          _memcpy(param_2,lVar13,(long)iVar18);
          uVar12 = uVar12 - iVar18;
          lVar13 = lVar13 + iVar18;
          pbVar11 = param_2 + iVar18;
          pbVar5 = (byte *)*param_3;
          do {
            param_2 = pbVar10;
            pbVar3 = pbVar5;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            pbVar7 = pbVar10;
            if (param_3[6] == 0) {
LAB_109cb0bec:
              *(undefined1 *)(param_3 + 7) = 1;
LAB_109cb0bcc:
              *param_3 = (long)(param_3 + 4);
              pbVar3 = (byte *)(param_3 + 4);
            }
            else {
              if (param_3[1] == 0) {
                uVar19 = *(undefined8 *)pbVar5;
                param_3[3] = *(long *)(pbVar5 + 8);
                *(undefined8 *)pbVar10 = uVar19;
                param_3[1] = (long)pbVar5;
                goto LAB_109cb0bcc;
              }
              _memcpy(param_3[1],pbVar10,(long)pbVar5 - (long)pbVar10);
              do {
                plVar2 = (long *)param_3[6];
                (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
                if (((ulong)plVar2 & 1) == 0) goto LAB_109cb0bec;
              } while (uStack_64 == 0);
              puVar9 = (undefined8 *)*param_3;
              if ((int)uStack_64 < 0x11) {
                uVar19 = *puVar9;
                param_3[3] = puVar9[1];
                *(undefined8 *)pbVar10 = uVar19;
                *param_3 = (long)(pbVar10 + (int)uStack_64);
                param_3[1] = (long)pbStack_70;
                pbVar3 = pbVar10 + (int)uStack_64;
              }
              else {
                uVar19 = *puVar9;
                *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
                *(undefined8 *)pbStack_70 = uVar19;
                *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
                param_3[1] = 0;
                pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
                pbVar7 = pbStack_70;
              }
            }
            pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar5);
            pbVar5 = pbVar3;
            param_2 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
        uVar4 = (ulong)(int)uVar12;
        uVar14 = uVar4;
      }
    }
    else {
      uVar4 = (ulong)uVar12;
    }
    _memcpy(param_2,lVar13,uVar4);
    param_2 = param_2 + uVar14;
  }
  uVar12 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x2a;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar6 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar6 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar15 = *(ulong **)(param_1 + 0x50);
    iVar18 = *(int *)(param_1 + 0x48);
    pbVar3 = (byte *)(param_3 + 2);
    puVar17 = puVar15;
    do {
      pbVar10 = param_2;
      pbVar11 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cb0724:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cb07bc:
            *param_3 = (long)(param_3 + 4);
            pbVar5 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar19 = *(undefined8 *)pbVar11;
              param_3[3] = *(long *)(pbVar11 + 8);
              *(undefined8 *)pbVar3 = uVar19;
              param_3[1] = (long)pbVar11;
              goto LAB_109cb07bc;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar11 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cb0724;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar19 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar3 = uVar19;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar5 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar19 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar19;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar5 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
          pbVar10 = param_2;
          pbVar11 = pbVar5;
        } while (pbVar5 <= param_2);
      }
      puVar16 = puVar17 + 1;
      uVar4 = *puVar17;
      uVar14 = uVar4;
      pbVar11 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar11 + 1;
          *pbVar11 = (byte)uVar14 | 0x80;
          uVar4 = uVar14 >> 7;
          uVar8 = uVar14 >> 0xe;
          uVar14 = uVar4;
          pbVar11 = pbVar10;
        } while (uVar8 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar17 = puVar16;
    } while (puVar16 < puVar15 + iVar18);
  }
  uVar12 = *(uint *)(param_1 + 0x60);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      uVar12 = *(uint *)(param_1 + 0x60);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x32;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar6 | 0x80;
        uVar1 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar6;
    lVar13 = *(long *)(param_1 + 0x68);
    uVar14 = (ulong)(int)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      uVar4 = uVar14;
      if ((int)pbVar3 < (int)uVar12) {
        pbVar10 = (byte *)(param_3 + 2);
        do {
          iVar18 = (int)pbVar3;
          _memcpy(param_2,lVar13,(long)iVar18);
          uVar12 = uVar12 - iVar18;
          lVar13 = lVar13 + iVar18;
          pbVar11 = param_2 + iVar18;
          pbVar5 = (byte *)*param_3;
          do {
            param_2 = pbVar10;
            pbVar3 = pbVar5;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            pbVar7 = pbVar10;
            if (param_3[6] == 0) {
LAB_109cb0d00:
              *(undefined1 *)(param_3 + 7) = 1;
LAB_109cb0ce0:
              *param_3 = (long)(param_3 + 4);
              pbVar3 = (byte *)(param_3 + 4);
            }
            else {
              if (param_3[1] == 0) {
                uVar19 = *(undefined8 *)pbVar5;
                param_3[3] = *(long *)(pbVar5 + 8);
                *(undefined8 *)pbVar10 = uVar19;
                param_3[1] = (long)pbVar5;
                goto LAB_109cb0ce0;
              }
              _memcpy(param_3[1],pbVar10,(long)pbVar5 - (long)pbVar10);
              do {
                plVar2 = (long *)param_3[6];
                (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
                if (((ulong)plVar2 & 1) == 0) goto LAB_109cb0d00;
              } while (uStack_64 == 0);
              puVar9 = (undefined8 *)*param_3;
              if ((int)uStack_64 < 0x11) {
                uVar19 = *puVar9;
                param_3[3] = puVar9[1];
                *(undefined8 *)pbVar10 = uVar19;
                *param_3 = (long)(pbVar10 + (int)uStack_64);
                param_3[1] = (long)pbStack_70;
                pbVar3 = pbVar10 + (int)uStack_64;
              }
              else {
                uVar19 = *puVar9;
                *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
                *(undefined8 *)pbStack_70 = uVar19;
                *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
                param_3[1] = 0;
                pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
                pbVar7 = pbStack_70;
              }
            }
            pbVar11 = pbVar7 + ((int)pbVar11 - (int)pbVar5);
            pbVar5 = pbVar3;
            param_2 = pbVar11;
          } while (pbVar3 <= pbVar11);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
        uVar4 = (ulong)(int)uVar12;
        uVar14 = uVar4;
      }
    }
    else {
      uVar4 = (ulong)uVar12;
    }
    _memcpy(param_2,lVar13,uVar4);
    param_2 = param_2 + uVar14;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar14 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar14 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar13 = *(long *)(uVar14 + 8);
      uVar4 = (ulong)*(uint *)(uVar14 + 0x10);
    }
    else {
      lVar13 = uVar14 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar18 = (int)pbVar3;
          _memcpy(param_2,lVar13,(long)iVar18);
          uVar12 = (int)uVar4 - iVar18;
          uVar4 = (ulong)uVar12;
          lVar13 = lVar13 + iVar18;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar18;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar13,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109cb0e5c; end: 109cb0fef;  */

long FUN_109cb0e5c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar5 = 0;
  if (uVar1 != 0) {
    lVar5 = (ulong)((int)LZCOUNT((long)(int)uVar1) * -9 + 0x280U >> 6) + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((int)uVar2 < 1) {
    lVar7 = 0;
    lVar8 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    lVar6 = 0;
    uVar10 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    puVar9 = *(undefined8 **)(param_1 + 0x28);
    do {
      lVar6 = (ulong)((int)LZCOUNT(*puVar9) * -9 + 0x280U >> 6) + lVar6;
      uVar10 = uVar10 - 1;
      puVar9 = puVar9 + 1;
    } while (uVar10 != 0);
    *(int *)(param_1 + 0x30) = (int)lVar6;
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = lVar6;
    }
    lVar8 = 0;
    if (lVar6 != 0) {
      lVar8 = (ulong)((int)LZCOUNT((long)(int)lVar6) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  lVar6 = 0;
  if (uVar2 != 0) {
    lVar6 = (ulong)((int)LZCOUNT((long)(int)uVar2) * -9 + 0x280U >> 6) + 1;
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  if ((int)uVar3 < 1) {
    lVar11 = 0;
    lVar12 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    lVar11 = 0;
    uVar10 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    puVar9 = *(undefined8 **)(param_1 + 0x50);
    do {
      lVar11 = (ulong)((int)LZCOUNT(*puVar9) * -9 + 0x280U >> 6) + lVar11;
      uVar10 = uVar10 - 1;
      puVar9 = puVar9 + 1;
    } while (uVar10 != 0);
    *(int *)(param_1 + 0x58) = (int)lVar11;
    if (lVar11 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (ulong)((int)LZCOUNT((long)(int)lVar11) * -9 + 0x280U >> 6) + 1;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (ulong)((int)LZCOUNT((long)(int)uVar3) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = lVar5 + (ulong)uVar1 + lVar7 + lVar8 + (ulong)uVar2 + lVar6 + lVar11 + lVar12 +
          (ulong)uVar3 + lVar4;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar10 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar10 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
  }
  *(int *)(param_1 + 0x70) = (int)lVar4;
  return lVar4;
}



/* Entry: 109cb0ff0; end: 109cb1037;  */

long FUN_109cb0ff0(long param_1)

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



/* Entry: 109cb1038; end: 109cb104b;  */

void FUN_109cb1038(void)

{
  FUN_109cb0ff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cb104c; end: 109cb106b;  */

undefined ** FUN_109cb104c(void)

{
  return &PTR_DAT_110b38ce0;
}



/* Entry: 109cb106c; end: 109cb133b;  */

byte * FUN_109cb106c(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar10 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cb112c:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cb11c4:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109cb11c4;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cb112c;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
          pbVar10 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109cb133c; end: 109cb13e3;  */

long FUN_109cb133c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cb13e4; end: 109cb140f;  */

void FUN_109cb13e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb1410; end: 109cb142b;  */

undefined ** FUN_109cb1410(void)

{
  return &PTR_DAT_110b38d28;
}



/* Entry: 109cb142c; end: 109cb1557;  */

long * FUN_109cb142c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lStack_50 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109cb1558; end: 109cb159f;  */

long FUN_109cb1558(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cb15a0; end: 109cb15cb;  */

void FUN_109cb15a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb15cc; end: 109cb15e7;  */

undefined ** FUN_109cb15cc(void)

{
  return &PTR_DAT_110b38d78;
}



/* Entry: 109cb15e8; end: 109cb1713;  */

long * FUN_109cb15e8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lStack_50 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109cb1714; end: 109cb175b;  */

long FUN_109cb1714(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cb175c; end: 109cb1787;  */

void FUN_109cb175c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb1788; end: 109cb17a7;  */

undefined ** FUN_109cb1788(void)

{
  return &PTR_DAT_110b38dc0;
}



/* Entry: 109cb17a8; end: 109cb1957;  */

byte * FUN_109cb17a8(long param_1,byte *param_2,long *param_3)

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
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
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
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = (ulong)(int)uVar3;
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



/* Entry: 109cb1958; end: 109cb19cb;  */

long FUN_109cb1958(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 109cb19cc; end: 109cb19f7;  */

void FUN_109cb19cc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb19f8; end: 109cb1a1b;  */

undefined ** FUN_109cb19f8(void)

{
  return &PTR_DAT_110b38e08;
}



/* Entry: 109cb1a1c; end: 109cb1c73;  */

long * FUN_109cb1a1c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 != 0) {
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
      iVar8 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 != 0) {
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
      iVar8 = *(int *)(param_1 + 0x14);
    }
    *(undefined1 *)param_2 = 0x15;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
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
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)param_2 = 0x1d;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(param_2,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar6,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar6,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109cb1c74; end: 109cb1ccf;  */

long FUN_109cb1c74(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cb1cd0; end: 109cb1cfb;  */

void FUN_109cb1cd0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb1cfc; end: 109cb1d1b;  */

undefined ** FUN_109cb1cfc(void)

{
  return &PTR_DAT_110b38e58;
}



/* Entry: 109cb1d1c; end: 109cb1f0f;  */

long * FUN_109cb1d1c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 != 0) {
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
      iVar8 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0x15;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 != 0) {
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
      iVar8 = *(int *)(param_1 + 0x14);
    }
    *(undefined1 *)param_2 = 0x1d;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(param_2,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar6,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar6,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109cb1f10; end: 109cb1f5b;  */

long FUN_109cb1f10(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cb1f5c; end: 109cb1f87;  */

void FUN_109cb1f5c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb1f88; end: 109cb1fab;  */

undefined ** FUN_109cb1f88(void)

{
  return &PTR_DAT_110b38ea8;
}



/* Entry: 109cb1fac; end: 109cb21ef;  */

byte * FUN_109cb1fac(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  pbVar7 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    pbVar7 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (uVar3 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar1 + ((int)pbVar7 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar7);
      uVar3 = *(ulong *)(param_1 + 0x18);
    }
    pbVar5 = pbVar7 + 1;
    *pbVar7 = 0x10;
    uVar4 = uVar3;
    pbVar7 = pbVar5;
    if (0x7f < uVar3) {
      do {
        pbVar5 = pbVar7 + 1;
        *pbVar7 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar7 = pbVar5;
      } while (uVar6 != 0);
    }
    pbVar7 = pbVar5 + 1;
    *pbVar5 = (byte)uVar3;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (uVar3 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= pbVar7) {
      do {
        if (param_3[0x38] == 1) {
          pbVar7 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar7 = pbVar1 + ((int)pbVar7 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= pbVar7);
      uVar3 = *(ulong *)(param_1 + 0x20);
    }
    pbVar5 = pbVar7 + 1;
    *pbVar7 = 0x18;
    uVar4 = uVar3;
    pbVar7 = pbVar5;
    if (0x7f < uVar3) {
      do {
        pbVar5 = pbVar7 + 1;
        *pbVar7 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar7 = pbVar5;
      } while (uVar6 != 0);
    }
    pbVar7 = pbVar5 + 1;
    *pbVar5 = (byte)uVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar8 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar7 < (long)(int)uVar2) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar5 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar5;
          _memcpy(pbVar7,lVar8,(long)iVar9);
          uVar2 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar9;
          pbVar5 = *(byte **)param_3;
          pbVar1 = pbVar7 + iVar9;
          do {
            pbVar7 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar1 = pbVar7 + ((int)pbVar1 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar7 = pbVar1;
          } while (pbVar5 <= pbVar1);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar7);
        } while ((int)pbVar5 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(pbVar7,lVar8,(long)(int)(uint)uStack_48);
      pbVar7 = pbVar7 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar7,lVar8,uStack_48 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar2;
    }
  }
  return pbVar7;
}



/* Entry: 109cb21f0; end: 109cb2273;  */

ulong FUN_109cb21f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x28) = (int)uVar1;
  return uVar1;
}



/* Entry: 109cb2274; end: 109cb22db;  */

long FUN_109cb2274(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109cb22dc; end: 109cb22ef;  */

void FUN_109cb22dc(void)

{
  FUN_109cb2274();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cb22f0; end: 109cb22fb;  */

undefined ** FUN_109cb22f0(void)

{
  return &PTR_DAT_110b38ef8;
}



/* Entry: 109cb22fc; end: 109cb235f;  */

void FUN_109cb22fc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
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



/* Entry: 109cb2360; end: 109cb26d7;  */

byte * FUN_109cb2360(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar12) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
    }
    pbVar4 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar4;
        pbVar4 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar4 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x20);
    iVar16 = *(int *)(param_1 + 0x18);
    pbVar4 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar3 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar3 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109cb2420:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109cb24b8:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar4 = uVar17;
              param_3[1] = (long)pbVar10;
              goto LAB_109cb24b8;
            }
            _memcpy(param_3[1],pbVar4,(long)pbVar10 - (long)pbVar4);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109cb2420;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar4 = uVar17;
              *param_3 = (long)(pbVar4 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar4 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar3 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar3 + ((int)param_2 - (int)pbVar10);
          pbVar3 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar5 = *puVar14;
      uVar6 = uVar5;
      pbVar10 = pbVar3;
      if (0x7f < uVar5) {
        do {
          pbVar3 = pbVar10 + 1;
          *pbVar10 = (byte)uVar6 | 0x80;
          uVar5 = uVar6 >> 7;
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar5;
          pbVar10 = pbVar3;
        } while (uVar8 != 0);
      }
      param_2 = pbVar3 + 1;
      *pbVar3 = (byte)uVar5;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  iVar16 = *(int *)(param_1 + 0x40);
  if (iVar16 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      iVar16 = *(int *)(param_1 + 0x40);
    }
    *param_2 = 0x15;
    *(int *)(param_2 + 1) = iVar16;
    param_2 = param_2 + 5;
  }
  uVar12 = *(uint *)(param_1 + 0x10);
  pbVar4 = param_2;
  if ((uVar12 & 1) != 0) {
    pbVar4 = (byte *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
  }
  pbVar3 = pbVar4;
  if ((uVar12 >> 1 & 1) != 0) {
    pbVar3 = (byte *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),pbVar4,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar11 = *(long *)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar11 = uVar6 + 8;
    }
    uVar12 = (uint)uVar5;
    if (*param_3 - (long)pbVar3 < (long)(int)uVar12) {
      pbVar4 = (byte *)((*param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar4 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar4;
          _memcpy(pbVar3,lVar11,(long)iVar16);
          uVar12 = (int)uVar5 - iVar16;
          uVar5 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar4 = (byte *)*param_3;
          pbVar10 = pbVar3 + iVar16;
          do {
            pbVar3 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            pbVar3 = pbVar10;
          } while (pbVar4 <= pbVar10);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar3);
        } while ((int)pbVar4 < (int)uVar12);
      }
      _memcpy(pbVar3,lVar11,(long)(int)uVar12);
      pbVar3 = pbVar3 + (int)uVar12;
    }
    else {
      _memcpy(pbVar3,lVar11,uVar5 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar12;
    }
  }
  return pbVar3;
}



/* Entry: 109cb26d8; end: 109cb280b;  */

void FUN_109cb26d8(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar4 = 0;
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar4 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    do {
      lVar4 = (ulong)((int)LZCOUNT(*puVar5) * -9 + 0x280U >> 6) + lVar4;
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar4;
    if (lVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = ((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
    }
  }
  iVar3 = iVar3 + (int)lVar4;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
      FUN_109c908c0();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x38);
      FUN_109c908c0();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar3 = iVar3 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar6 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 109cb280c; end: 109cb280f;  */

void FUN_109cb280c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
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
      func_0x00010598df1c(param_1 + 0x18);
      iVar3 = *(int *)(param_1 + 0x18);
      iVar4 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    if (0 < iVar1) {
      uVar7 = iVar1 + 1;
      puVar5 = *(undefined8 **)(param_2 + 0x20);
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 8);
      do {
        *puVar6 = *puVar5;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 3) != 0) {
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar8;
        FUN_109cbb22c(uVar8,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar7 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_109cbb22c(uVar8,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar8;
      }
      else {
        FUN_109c7fc24();
      }
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar7;
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



/* Entry: 109cb2810; end: 109cb283b;  */

void FUN_109cb2810(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb283c; end: 109cb285f;  */

undefined ** FUN_109cb283c(void)

{
  return &PTR_DAT_110b38f50;
}



/* Entry: 109cb2860; end: 109cb2b37;  */

byte * FUN_109cb2860(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  ulong uStack_48;
  
  iVar10 = *(int *)(param_1 + 0x10);
  if (iVar10 != 0) {
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
      iVar10 = *(int *)(param_1 + 0x10);
    }
    *param_2 = 0xd;
    *(int *)(param_2 + 1) = iVar10;
    param_2 = param_2 + 5;
  }
  iVar10 = *(int *)(param_1 + 0x14);
  if (iVar10 != 0) {
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
      iVar10 = *(int *)(param_1 + 0x14);
    }
    *param_2 = 0x15;
    *(int *)(param_2 + 1) = iVar10;
    param_2 = param_2 + 5;
  }
  uVar5 = *(ulong *)(param_1 + 0x18);
  if (uVar5 != 0) {
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
      uVar5 = *(ulong *)(param_1 + 0x18);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x18;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar5) {
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
  if (*(char *)(param_1 + 0x20) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar2 = 1;
    }
    else {
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
      bVar2 = *(byte *)(param_1 + 0x20);
    }
    *param_2 = 0x20;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar9 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar10 = (int)pbVar4;
          _memcpy(param_2,lVar9,(long)iVar10);
          uVar3 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar3;
          lVar9 = lVar9 + iVar10;
          pbVar4 = (byte *)*param_3;
          pbVar8 = param_2 + iVar10;
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
      _memcpy(param_2,lVar9,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar9,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 109cb2b38; end: 109cb2baf;  */

long FUN_109cb2b38(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x24) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cb2bb0; end: 109cb2bdb;  */

void FUN_109cb2bb0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb2bdc; end: 109cb2bfb;  */

undefined ** FUN_109cb2bdc(void)

{
  return &PTR_DAT_110b38fa8;
}



/* Entry: 109cb2bfc; end: 109cb2def;  */

long * FUN_109cb2bfc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 != 0) {
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
      iVar8 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 != 0) {
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
      iVar8 = *(int *)(param_1 + 0x14);
    }
    *(undefined1 *)param_2 = 0x15;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(param_2,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar6,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar6,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109cb2df0; end: 109cb2e3b;  */

long FUN_109cb2df0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cb2e3c; end: 109cb2e67;  */

void FUN_109cb2e3c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb2e68; end: 109cb2e8b;  */

undefined ** FUN_109cb2e68(void)

{
  return &PTR_DAT_110b38ff8;
}



/* Entry: 109cb2e8c; end: 109cb302f;  */

long * FUN_109cb2e8c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puVar8;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar4 = (long *)*param_3;
    if (plVar1 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      uVar2 = *(undefined1 *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x10;
    *(undefined1 *)((long)plVar1 + 1) = uVar2;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lStack_50 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar7 = (int)puVar8;
          _memcpy(plVar1,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar7);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar1 = plVar4;
          } while (plVar5 <= plVar4);
          puVar8 = (undefined1 *)((long)plVar5 + (0x10 - (long)plVar1));
        } while ((int)puVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar3);
    }
  }
  return plVar1;
}



/* Entry: 109cb3030; end: 109cb3083;  */

long FUN_109cb3030(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cb3084; end: 109cb30af;  */

void FUN_109cb3084(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb30b0; end: 109cb30cf;  */

undefined ** FUN_109cb30b0(void)

{
  return &PTR_DAT_110b39040;
}



/* Entry: 109cb30d0; end: 109cb3227;  */

long * FUN_109cb30d0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x00010599ccb0(param_3,*(long *)(param_1 + 0x18),plVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar2 + (long)iVar6);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)plVar2);
        } while ((int)lVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar2,lStack_50,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lStack_50,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar3);
    }
  }
  return plVar2;
}



/* Entry: 109cb3228; end: 109cb328f;  */

ulong FUN_109cb3228(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 109cb3290; end: 109cb331b;  */

void FUN_109cb3290(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x68) == 0x65) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x60) == 0)) goto LAB_109cb32ec;
    FUN_109c684b8();
  }
  else {
    if (*(int *)(param_1 + 0x68) != 100) goto LAB_109cb32ec;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x60) == 0)) goto LAB_109cb32ec;
    FUN_109c680c8();
  }
  __ZdlPv();
LAB_109cb32ec:
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 109cb331c; end: 109cb3463;  */

undefined8 * FUN_109cb331c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulong *puVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b35580;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 3,param_3 + 0x18);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  if (*(int *)(param_3 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 6,param_3 + 0x30);
  }
  puVar4 = (ulong *)(param_3 + 0x48);
  puVar1 = (ulong *)*puVar4;
  if ((*puVar4 & 3) != 0) {
    func_0x000107c30244(puVar4,param_2);
    puVar1 = puVar4;
  }
  param_1[9] = puVar1;
  iVar3 = *(int *)(param_3 + 0x68);
  *(int *)(param_1 + 0xd) = iVar3;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_109cbb00c(param_2,*(undefined8 *)(param_3 + 0x50));
    iVar3 = *(int *)(param_1 + 0xd);
  }
  param_1[10] = uVar2;
  param_1[0xb] = *(undefined8 *)(param_3 + 0x58);
  if (iVar3 == 0x65) {
    func_0x000109c6baf8(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  else {
    if (iVar3 != 100) {
      return param_1;
    }
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = param_2;
  return param_1;
}



/* Entry: 109cb3464; end: 109cb34c7;  */

long FUN_109cb3464(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_109cb49c0();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_109cb3290(param_1);
  }
  FUN_109cb7030(param_1 + 0x30);
  FUN_109cb6ffc(param_1 + 0x18);
  return param_1;
}



/* Entry: 109cb34c8; end: 109cb34cb;  */

long FUN_109cb34c8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_109cb49c0();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_109cb3290(param_1);
  }
  FUN_109cb7030(param_1 + 0x30);
  FUN_109cb6ffc(param_1 + 0x18);
  return param_1;
}



/* Entry: 109cb34cc; end: 109cb34df;  */

void FUN_109cb34cc(void)

{
  FUN_109cb3464();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cb34e0; end: 109cb34eb;  */

undefined ** FUN_109cb34e0(void)

{
  return &PTR_DAT_110b39090;
}



/* Entry: 109cb34ec; end: 109cb3597;  */

void FUN_109cb34ec(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if ((*(ulong *)(param_1 + 0x48) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c7d1b4(*(undefined8 *)(param_1 + 0x50));
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_109cb3290(param_1);
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



/* Entry: 109cb3598; end: 109cb3aeb;  */

byte * FUN_109cb3598(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_1 + 0x20);
  if (iVar13 != 0) {
    iVar12 = 0;
    pbVar5 = param_2;
    do {
      uVar3 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar3 & 1) != 0) {
        puVar1 = (ulong *)(uVar3 + (long)iVar12 * 8 + 7);
      }
      param_2 = (byte *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x88),pbVar5,param_3);
      iVar12 = iVar12 + 1;
      pbVar5 = param_2;
    } while (iVar13 != iVar12);
  }
  iVar13 = *(int *)(param_1 + 0x38);
  if (iVar13 != 0) {
    iVar12 = 0;
    pbVar5 = param_2;
    do {
      uVar3 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar3 & 1) != 0) {
        puVar1 = (ulong *)(uVar3 + (long)iVar12 * 8 + 7);
      }
      param_2 = (byte *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar5,param_3);
      iVar12 = iVar12 + 1;
      pbVar5 = param_2;
    } while (iVar13 != iVar12);
  }
  uVar10 = *(uint *)(param_1 + 0x58);
  if (uVar10 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= param_2);
      uVar10 = *(uint *)(param_1 + 0x58);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x28;
    uVar6 = (ulong)(int)uVar10;
    uVar3 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar10) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar3 | 0x80;
        uVar6 = uVar3 >> 7;
        uVar7 = uVar3 >> 0xe;
        uVar3 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  uVar10 = *(uint *)(param_1 + 0x5c);
  if (uVar10 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= param_2);
      uVar10 = *(uint *)(param_1 + 0x5c);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x30;
    uVar6 = (ulong)(int)uVar10;
    uVar3 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar10) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar3 | 0x80;
        uVar6 = uVar3 >> 7;
        uVar7 = uVar3 >> 0xe;
        uVar3 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  pbVar5 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar5 = (byte *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14),param_2,param_3);
  }
  uVar10 = *(uint *)(param_1 + 0x68);
  pbVar8 = (byte *)(ulong)uVar10;
  if (uVar10 == 100) {
    lVar4 = 0x28;
LAB_109cb36f4:
    func_0x000107c303cc(pbVar8,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + lVar4),pbVar5,param_3);
    pbVar5 = pbVar8;
  }
  else if (uVar10 == 0x65) {
    lVar4 = 0x24;
    goto LAB_109cb36f4;
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 == 0) goto LAB_109cb375c;
    puVar2 = (undefined8 *)*puVar11;
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_109cb375c;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a6be2);
  pbVar8 = param_3;
  func_0x000107c280a0(param_3,200,puVar11,pbVar5);
  pbVar5 = pbVar8;
LAB_109cb375c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar4 = *(long *)(uVar3 + 8);
      uVar6 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar4 = uVar3 + 8;
    }
    uVar10 = (uint)uVar6;
    if (*(long *)param_3 - (long)pbVar5 < (long)(int)uVar10) {
      pbVar8 = (byte *)((*(long *)param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar8 < (int)uVar10) {
        do {
          iVar13 = (int)pbVar8;
          _memcpy(pbVar5,lVar4,(long)iVar13);
          uVar10 = (int)uVar6 - iVar13;
          uVar6 = (ulong)uVar10;
          lVar4 = lVar4 + iVar13;
          pbVar8 = *(byte **)param_3;
          pbVar9 = pbVar5 + iVar13;
          do {
            pbVar5 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar8);
            pbVar8 = *(byte **)param_3;
            pbVar5 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar5);
        } while ((int)pbVar8 < (int)uVar10);
      }
      _memcpy(pbVar5,lVar4,(long)(int)uVar10);
      pbVar5 = pbVar5 + (int)uVar10;
    }
    else {
      _memcpy(pbVar5,lVar4,uVar6 & 0xffffffff);
      pbVar5 = pbVar5 + (int)uVar10;
    }
  }
  return pbVar5;
}



/* Entry: 109cb3aec; end: 109cb3aef;  */

void FUN_109cb3aec(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar5 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar5 + 8);
  }
  if (lVar7 != 0) {
    uVar6 = *(ulong *)(param_1 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar5,uVar6);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      uVar5 = uVar8;
      FUN_109cbb00c(uVar8,*(undefined8 *)(param_2 + 0x50));
      *(ulong *)(param_1 + 0x50) = uVar5;
    }
    else {
      func_0x000109c7d784();
    }
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x68);
  if (iVar3 == 0) goto LAB_109cb3c60;
  iVar4 = *(int *)(param_1 + 0x68);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_109cb3290(param_1);
    }
    *(int *)(param_1 + 0x68) = iVar3;
  }
  if (iVar3 == 0x65) {
    if (iVar4 == 0x65) {
      ppuVar1 = *(undefined ***)(param_2 + 0x60);
      if (*(int *)(param_2 + 0x68) != 0x65) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      FUN_109c688b0(*(undefined8 *)(param_1 + 0x60),ppuVar1);
      goto LAB_109cb3c60;
    }
    func_0x000109c6baf8(uVar8,*(undefined8 *)(param_2 + 0x60));
  }
  else {
    if (iVar3 != 100) goto LAB_109cb3c60;
    if (iVar4 == 100) {
      ppuVar1 = *(undefined ***)(param_2 + 0x60);
      if (*(int *)(param_2 + 0x68) != 100) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      FUN_109c683fc(*(undefined8 *)(param_1 + 0x60),ppuVar1);
      goto LAB_109cb3c60;
    }
    func_0x000109c6bab4(uVar8,*(undefined8 *)(param_2 + 0x60));
  }
  *(ulong *)(param_1 + 0x60) = uVar8;
LAB_109cb3c60:
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



/* Entry: 109cb3af0; end: 109cb3cb3;  */

void FUN_109cb3af0(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar5 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar5 + 8);
  }
  if (lVar7 != 0) {
    uVar6 = *(ulong *)(param_1 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar5,uVar6);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      uVar5 = uVar8;
      FUN_109cbb00c(uVar8,*(undefined8 *)(param_2 + 0x50));
      *(ulong *)(param_1 + 0x50) = uVar5;
    }
    else {
      func_0x000109c7d784();
    }
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x68);
  if (iVar3 == 0) goto LAB_109cb3c60;
  iVar4 = *(int *)(param_1 + 0x68);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_109cb3290(param_1);
    }
    *(int *)(param_1 + 0x68) = iVar3;
  }
  if (iVar3 == 0x65) {
    if (iVar4 == 0x65) {
      ppuVar1 = *(undefined ***)(param_2 + 0x60);
      if (*(int *)(param_2 + 0x68) != 0x65) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      FUN_109c688b0(*(undefined8 *)(param_1 + 0x60),ppuVar1);
      goto LAB_109cb3c60;
    }
    func_0x000109c6baf8(uVar8,*(undefined8 *)(param_2 + 0x60));
  }
  else {
    if (iVar3 != 100) goto LAB_109cb3c60;
    if (iVar4 == 100) {
      ppuVar1 = *(undefined ***)(param_2 + 0x60);
      if (*(int *)(param_2 + 0x68) != 100) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      FUN_109c683fc(*(undefined8 *)(param_1 + 0x60),ppuVar1);
      goto LAB_109cb3c60;
    }
    func_0x000109c6bab4(uVar8,*(undefined8 *)(param_2 + 0x60));
  }
  *(ulong *)(param_1 + 0x60) = uVar8;
LAB_109cb3c60:
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



/* Entry: 109cb3cb4; end: 109cb3cdf;  */

void FUN_109cb3cb4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb3ce0; end: 109cb3d03;  */

undefined ** FUN_109cb3ce0(void)

{
  return &PTR_DAT_110b390e0;
}



/* Entry: 109cb3d04; end: 109cb3f8f;  */

byte * FUN_109cb3d04(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= param_2);
      uVar3 = *(ulong *)(param_1 + 0x10);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    uVar4 = uVar3;
    pbVar5 = pbVar7;
    if (0x7f < uVar3) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar5 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar3;
  }
  pbVar5 = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    pbVar5 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x18),param_2);
  }
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar9 != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar1 + ((int)pbVar5 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar5);
      iVar9 = *(int *)(param_1 + 0x20);
    }
    *pbVar5 = 0x1d;
    *(int *)(pbVar5 + 1) = iVar9;
    pbVar5 = pbVar5 + 5;
  }
  iVar9 = *(int *)(param_1 + 0x24);
  if (iVar9 != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= pbVar5) {
      do {
        if (param_3[0x38] == 1) {
          pbVar5 = param_3 + 0x10;
          break;
        }
        pbVar1 = param_3;
        func_0x000107c303dc();
        pbVar5 = pbVar1 + ((int)pbVar5 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= pbVar5);
      iVar9 = *(int *)(param_1 + 0x24);
    }
    *pbVar5 = 0x25;
    *(int *)(pbVar5 + 1) = iVar9;
    pbVar5 = pbVar5 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar8 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*(long *)param_3 - (long)pbVar5 < (long)(int)uVar2) {
      pbVar7 = (byte *)((*(long *)param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar7 < (int)uVar2) {
        do {
          iVar9 = (int)pbVar7;
          _memcpy(pbVar5,lVar8,(long)iVar9);
          uVar2 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar9;
          pbVar7 = *(byte **)param_3;
          pbVar1 = pbVar5 + iVar9;
          do {
            pbVar5 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar1 = pbVar5 + ((int)pbVar1 - (int)pbVar7);
            pbVar7 = *(byte **)param_3;
            pbVar5 = pbVar1;
          } while (pbVar7 <= pbVar1);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar5);
        } while ((int)pbVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(pbVar5,lVar8,(long)(int)(uint)uStack_48);
      pbVar5 = pbVar5 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar5,lVar8,uStack_48 & 0xffffffff);
      pbVar5 = pbVar5 + (int)uVar2;
    }
  }
  return pbVar5;
}



/* Entry: 109cb3f90; end: 109cb4013;  */

ulong FUN_109cb3f90(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = uVar1 + 5;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = uVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x28) = (int)uVar1;
  return uVar1;
}



/* Entry: 109cb4014; end: 109cb403f;  */

void FUN_109cb4014(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109cb4040; end: 109cb4063;  */

undefined ** FUN_109cb4040(void)

{
  return &PTR_DAT_110b39128;
}



/* Entry: 109cb4064; end: 109cb426f;  */

long * FUN_109cb4064(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uStack_48;
  undefined1 *puVar9;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar4 = (long *)*param_3;
    if (plVar1 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      uVar2 = *(undefined1 *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x10;
    *(undefined1 *)((long)plVar1 + 1) = uVar2;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    plVar4 = (long *)*param_3;
    if (plVar1 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      uVar2 = *(undefined1 *)(param_1 + 0x19);
    }
    *(undefined1 *)plVar1 = 0x18;
    *(undefined1 *)((long)plVar1 + 1) = uVar2;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar7 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar7 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      puVar9 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar9 < (int)uVar3) {
        do {
          iVar8 = (int)puVar9;
          _memcpy(plVar1,lVar7,(long)iVar8);
          uVar3 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar3;
          lVar7 = lVar7 + iVar8;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar8);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar1 = plVar4;
          } while (plVar5 <= plVar4);
          puVar9 = (undefined1 *)((long)plVar5 + (0x10 - (long)plVar1));
        } while ((int)puVar9 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar1,lVar7,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar7,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar3);
    }
  }
  return plVar1;
}



/* Entry: 109cb4270; end: 109cb42cb;  */

long FUN_109cb4270(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2 + (ulong)*(byte *)(param_1 + 0x19) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 109cb42cc; end: 109cb43a3;  */

undefined8 * FUN_109cb42cc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b35530;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 3,param_3 + 0x18);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  if (*(int *)(param_3 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 6,param_3 + 0x30);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_109cbb00c(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = param_2;
  param_1[10] = *(undefined8 *)(param_3 + 0x50);
  return param_1;
}



/* Entry: 109cb43a4; end: 109cb43ef;  */

long FUN_109cb43a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109cb49c0();
    __ZdlPv();
  }
  FUN_109cb7030(param_1 + 0x30);
  FUN_109cb6ffc(param_1 + 0x18);
  return param_1;
}



/* Entry: 109cb43f0; end: 109cb43f3;  */

long FUN_109cb43f0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109cb49c0();
    __ZdlPv();
  }
  FUN_109cb7030(param_1 + 0x30);
  FUN_109cb6ffc(param_1 + 0x18);
  return param_1;
}



/* Entry: 109cb43f4; end: 109cb4407;  */

void FUN_109cb43f4(void)

{
  FUN_109cb43a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cb4408; end: 109cb4413;  */

undefined ** FUN_109cb4408(void)

{
  return &PTR_DAT_110b39170;
}



/* Entry: 109cb4414; end: 109cb4487;  */

void FUN_109cb4414(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c7d1b4(*(undefined8 *)(param_1 + 0x48));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = 0;
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



/* Entry: 109cb4488; end: 109cb48d7;  */

byte * FUN_109cb4488(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uStack_48;
  
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 != 0) {
    iVar11 = 0;
    pbVar5 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar11 * 8 + 7);
      }
      param_2 = (byte *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x88),pbVar5,param_3);
      iVar11 = iVar11 + 1;
      pbVar5 = param_2;
    } while (iVar12 != iVar11);
  }
  iVar12 = *(int *)(param_1 + 0x38);
  if (iVar12 != 0) {
    iVar11 = 0;
    pbVar5 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar11 * 8 + 7);
      }
      param_2 = (byte *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar5,param_3);
      iVar11 = iVar11 + 1;
      pbVar5 = param_2;
    } while (iVar12 != iVar11);
  }
  uVar3 = *(uint *)(param_1 + 0x50);
  if (uVar3 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x50);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x28;
    uVar6 = (ulong)(int)uVar3;
    uVar4 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  uVar3 = *(uint *)(param_1 + 0x54);
  if (uVar3 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x54);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x30;
    uVar6 = (ulong)(int)uVar3;
    uVar4 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  pbVar5 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar5 = (byte *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar10 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar10 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)pbVar5 < (long)(int)uVar3) {
      pbVar8 = (byte *)((*param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar8 < (int)uVar3) {
        do {
          iVar12 = (int)pbVar8;
          _memcpy(pbVar5,lVar10,(long)iVar12);
          uVar3 = (int)uStack_48 - iVar12;
          uStack_48 = (ulong)uVar3;
          lVar10 = lVar10 + iVar12;
          pbVar8 = (byte *)*param_3;
          pbVar9 = pbVar5 + iVar12;
          do {
            pbVar5 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar8));
            pbVar8 = (byte *)*param_3;
            pbVar5 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar5);
        } while ((int)pbVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar5,lVar10,(long)(int)(uint)uStack_48);
      pbVar5 = pbVar5 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar5,lVar10,uStack_48 & 0xffffffff);
      pbVar5 = pbVar5 + (int)uVar3;
    }
  }
  return pbVar5;
}



/* Entry: 109cb48d8; end: 109cb48db;  */

void FUN_109cb48d8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      FUN_109cbb00c(uVar2,*(undefined8 *)(param_2 + 0x48));
      *(ulong *)(param_1 + 0x48) = uVar2;
    }
    else {
      func_0x000109c7d784();
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
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



/* Entry: 109cb48dc; end: 109cb49bf;  */

void FUN_109cb48dc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      FUN_109cbb00c(uVar2,*(undefined8 *)(param_2 + 0x48));
      *(ulong *)(param_1 + 0x48) = uVar2;
    }
    else {
      func_0x000109c7d784();
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
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



/* Entry: 109cb49c0; end: 109cb4a63;  */

long FUN_109cb49c0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000109cb49f4(param_1);
  return param_1;
}



/* Entry: 109cb4a64; end: 109cb4a67;  */

long FUN_109cb4a64(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000109cb49f4(param_1);
  return param_1;
}



/* Entry: 109cb4a68; end: 109cb4a7b;  */

void FUN_109cb4a68(void)

{
  FUN_109cb49c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cb4a7c; end: 109cb4a87;  */

undefined ** FUN_109cb4a7c(void)

{
  return &PTR_DAT_110b391c0;
}



/* Entry: 109cb4a88; end: 109cb4abf;  */

void FUN_109cb4a88(long param_1)

{
  ulong *puVar1;
  
  FUN_109cb5c88();
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



/* Entry: 109cb4ac0; end: 109cb4e67;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109cb4ac0(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  ulong uStack_48;
  long lVar10;
  
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar9 != 0) {
    iVar8 = 0;
    plVar2 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar8 * 8 + 7);
      }
      param_2 = (long *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20),plVar2,param_3);
      iVar8 = iVar8 + 1;
      plVar2 = param_2;
    } while (iVar9 != iVar8);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18),param_2,param_3);
    param_2 = plVar2;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x20),param_2,param_3);
    param_2 = plVar2;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    plVar2 = (long *)0xa;
    func_0x000107c303cc(10,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14),param_2,param_3);
    param_2 = plVar2;
  }
  plVar2 = param_2;
  if ((uVar4 >> 3 & 1) != 0) {
    plVar2 = (long *)0x14;
    func_0x000107c303cc(0x14,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x20),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      lVar10 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar10 < (int)uVar4) {
        do {
          iVar9 = (int)lVar10;
          _memcpy(plVar2,lVar3,(long)iVar9);
          uVar4 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar4;
          lVar3 = lVar3 + iVar9;
          plVar6 = (long *)*param_3;
          plVar7 = (long *)((long)plVar2 + (long)iVar9);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar2 + (long)((int)plVar7 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar2 = plVar7;
          } while (plVar6 <= plVar7);
          lVar10 = (long)plVar6 + (0x10 - (long)plVar2);
        } while ((int)lVar10 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(plVar2,lVar3,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lVar3,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar4);
    }
  }
  return plVar2;
}



/* Entry: 109cb4e68; end: 109cb4e6b;  */

/* WARNING: Possible PIC construction at 0x000109c7d85c: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

void FUN_109cb4e68(long param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong *unaff_x19;
  long unaff_x20;
  ulong uVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar7 = (ulong *)(param_1 + 8);
  uVar8 = *puVar7;
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 0xf) != 0) {
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar3 = uVar8;
        func_0x000109cc2e90(uVar8,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar3;
      }
      else {
        FUN_109cb4e6c();
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar3 = uVar8;
        FUN_109c7ccb4(uVar8,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
      else {
        func_0x000109cc52e0();
      }
    }
    if ((uVar2 >> 2 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x40);
      lVar5 = *(long *)(param_2 + 0x40);
      if (lVar6 == 0) {
        uVar3 = uVar8;
        func_0x000109cc2f3c();
        *(ulong *)(param_1 + 0x40) = uVar3;
      }
      else {
        if (*(char *)(lVar5 + 0x10) == '\x01') {
          *(undefined1 *)(lVar6 + 0x10) = 1;
        }
        if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
          unaff_x30 = 0x109c7d860;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          puVar4 = (ulong *)(lVar6 + 8);
          unaff_x19 = puVar7;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
      }
    }
    if ((uVar2 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        FUN_109c7ccb4(uVar8,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar8;
      }
      else {
        func_0x000109cc52e0();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  puVar4 = puVar7;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar4 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109cb4e6c; end: 109cb4f87;  */

void FUN_109cb4e6c(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_109cb4f40;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109cb5c88(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 0xb) {
    if (iVar3 == 0xb) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 0xb) {
        ppuVar1 = &PTR_PTR_1132fb9a8;
      }
      func_0x000109cb6064(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109cb4f40;
    }
    func_0x000109cc31ac(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 10) goto LAB_109cb4f40;
    if (iVar3 == 10) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 10) {
        ppuVar1 = &PTR_PTR_1132fb6c8;
      }
      FUN_109cb5f5c(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109cb4f40;
    }
    func_0x000109cc30e0(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_109cb4f40:
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



/* Entry: 109cb4f88; end: 109cb5057;  */

void FUN_109cb4f88(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0xb) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_109cb4fe4;
    FUN_109cb5944();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 10) goto LAB_109cb4fe4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_109cb4fe4;
    func_0x000109cb5600();
  }
  __ZdlPv();
LAB_109cb4fe4:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 109cb5058; end: 109cb505b;  */

long FUN_109cb5058(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_109cb4f88(param_1);
  }
  return param_1;
}



/* Entry: 109cb505c; end: 109cb506f;  */

void FUN_109cb505c(void)

{
  func_0x000109cb5014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cb5070; end: 109cb5083;  */

long FUN_109cb5070(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109cb5084; end: 109cb50ef;  */

void FUN_109cb5084(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if ((*(ulong *)(param_1 + 0x10) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  FUN_109cb4f88(param_1);
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 109cb50f0; end: 109cb5287;  */

long * FUN_109cb50f0(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lStack_48;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_109cb5164;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109cb5164;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f5a6c29);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_109cb5164:
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x24);
  if ((*(uint *)(param_1 + 0x24) & 0xfffffffe) == 10) {
    func_0x000107c303cc(plVar2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lStack_48 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_48 = uVar5 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      lVar4 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar4 < (int)uVar7) {
        do {
          iVar10 = (int)lVar4;
          _memcpy(param_2,lStack_48,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lStack_48 = lStack_48 + iVar10;
          plVar6 = (long *)*param_3;
          plVar2 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar3 + (long)((int)plVar2 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar2;
          } while (plVar6 <= plVar2);
          lVar4 = (long)plVar6 + (0x10 - (long)param_2);
        } while ((int)lVar4 < (int)uVar7);
      }
      _memcpy(param_2,lStack_48,(long)(int)uVar7);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
    else {
      _memcpy(param_2,lStack_48,uVar9 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
  }
  return param_2;
}



/* Entry: 109cb5288; end: 109cb535f;  */

long FUN_109cb5288(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_109cb52e0;
LAB_109cb52ac:
    lVar1 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar1 = lVar3;
    }
    lVar3 = lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
  }
  else {
    if (lVar3 != 0) goto LAB_109cb52ac;
LAB_109cb52e0:
    lVar3 = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0xb) {
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_109cb5bc0();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 10) goto LAB_109cb532c;
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_109cb587c();
  }
  lVar3 = lVar3 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
LAB_109cb532c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 109cb5360; end: 109cb54af;  */

void FUN_109cb5360(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 8);
  uVar4 = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar5 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar5,uVar6);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0) goto LAB_109cb545c;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_109cb4f88(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar2;
  }
  if (iVar2 == 0xb) {
    if (iVar3 == 0xb) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 0xb) {
        ppuVar1 = &PTR_PTR_1132fb200;
      }
      func_0x000109cb5558(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109cb545c;
    }
    func_0x000109cc3030(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    if (iVar2 != 10) goto LAB_109cb545c;
    if (iVar3 == 10) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x24) != 10) {
        ppuVar1 = &PTR_PTR_1132fb2c8;
      }
      FUN_109cb54b0(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      goto LAB_109cb545c;
    }
    func_0x000109cc2f80(uVar4,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulong *)(param_1 + 0x18) = uVar4;
LAB_109cb545c:
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


