/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020fce9c; end: 1020fcef3;  */

void FUN_1020fce9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    func_0x000107c61530(param_1,0,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Entry: 1020fcef4; end: 1020fd053;  */

long * FUN_1020fcef4(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar8 = *(long *)(param_3 + 0x20);
  lVar9 = *(long *)(lVar8 + -8);
  uVar10 = *(ulong *)(lVar9 + 0x40);
  iVar4 = *(int *)(lVar9 + 0x54);
  uVar1 = uVar10;
  if (iVar4 == 0) {
    uVar1 = uVar10 + 1;
  }
  uVar7 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  if (((uint)uVar7 < 8 && (*(uint *)(lVar9 + 0x50) & 0x100000) == 0) && uVar1 < 0x19) {
    if (iVar4 == 0) {
      if (*(byte *)((long)param_2 + uVar10) != 0) {
        uVar6 = (uint)uVar10;
        uVar2 = 0;
        if (uVar6 < 4) {
          uVar2 = *(byte *)((long)param_2 + uVar10) - 1 << (ulong)((uVar6 & 3) << 3);
        }
        if (uVar6 == 0) {
          uVar6 = 0;
        }
        else {
          uVar3 = 4;
          if (uVar6 < 4) {
            uVar3 = uVar6;
          }
          if ((int)uVar3 < 3) {
            if (uVar3 == 1) {
              uVar6 = (uint)(byte)*param_2;
            }
            else {
              uVar6 = (uint)(ushort)*param_2;
            }
          }
          else if (uVar3 == 3) {
            uVar6 = (uint)(uint3)*param_2;
          }
          else {
            uVar6 = *param_2;
          }
        }
        if ((uVar6 | uVar2) != 0xffffffff) goto LAB_1020fd020;
      }
      (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar8);
      *(undefined1 *)((long)param_1 + uVar10) = 0;
    }
    else {
      puVar5 = param_2;
      (**(code **)(lVar9 + 0x30))(param_2,iVar4,lVar8);
      if ((int)puVar5 != 0) {
LAB_1020fd020:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar1);
        return param_1;
      }
      (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar8);
    }
  }
  else {
    lVar8 = *(long *)param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020fd054; end: 1020fd133;  */

void FUN_1020fd054(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_2 + 0x20);
  lVar7 = *(long *)(lVar6 + -8);
  if (*(int *)(lVar7 + 0x54) == 0) {
    uVar5 = *(ulong *)(lVar7 + 0x40);
    if (*(byte *)((long)param_1 + uVar5) != 0) {
      uVar4 = (uint)uVar5;
      uVar1 = 0;
      if (uVar4 < 4) {
        uVar1 = *(byte *)((long)param_1 + uVar5) - 1 << (ulong)((uVar4 & 3) << 3);
      }
      if (uVar4 != 0) {
        uVar2 = 4;
        if (uVar4 < 4) {
          uVar2 = uVar4;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar5 = (ulong)(byte)*param_1;
          }
          else {
            uVar5 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar2 == 3) {
          uVar5 = (ulong)(uint3)*param_1;
        }
        else {
          uVar5 = (ulong)*param_1;
        }
      }
      if (((uint)uVar5 | uVar1) != 0xffffffff) {
        return;
      }
    }
  }
  else {
    puVar3 = param_1;
    (**(code **)(lVar7 + 0x30))(param_1,*(int *)(lVar7 + 0x54),lVar6);
    if ((int)puVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001020fd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))(param_1,lVar6);
  return;
}



/* Entry: 1020fd134; end: 1020fd25b;  */

long FUN_1020fd134(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(lVar6 + -8);
  iVar3 = *(int *)(lVar8 + 0x54);
  lVar7 = *(long *)(lVar8 + 0x40);
  if (iVar3 == 0) {
    if (*(byte *)((long)param_2 + lVar7) != 0) {
      uVar5 = (uint)lVar7;
      uVar1 = 0;
      if (uVar5 < 4) {
        uVar1 = *(byte *)((long)param_2 + lVar7) - 1 << (ulong)((uVar5 & 3) << 3);
      }
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar2 = 4;
        if (uVar5 < 4) {
          uVar2 = uVar5;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar5 = (uint)(byte)*param_2;
          }
          else {
            uVar5 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar2 == 3) {
          uVar5 = (uint)(uint3)*param_2;
        }
        else {
          uVar5 = *param_2;
        }
      }
      if ((uVar5 | uVar1) != 0xffffffff) goto LAB_1020fd210;
    }
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
    *(undefined1 *)(param_1 + lVar7) = 0;
  }
  else {
    puVar4 = param_2;
    (**(code **)(lVar8 + 0x30))(param_2,iVar3,lVar6);
    if ((int)puVar4 != 0) {
LAB_1020fd210:
      if (iVar3 == 0) {
        lVar7 = lVar7 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar7);
      return param_1;
    }
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
  }
  return param_1;
}



/* Entry: 1020fd25c; end: 1020fd4b7;  */

uint * FUN_1020fd25c(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  uint *puVar5;
  
  lVar8 = *(long *)(param_3 + 0x20);
  lVar11 = *(long *)(lVar8 + -8);
  iVar2 = *(int *)(lVar11 + 0x54);
  lVar10 = *(long *)(lVar11 + 0x40);
  if (iVar2 == 0) {
    uVar9 = (uint)lVar10;
    uVar6 = uVar9 << 3;
    if (*(byte *)((long)param_1 + lVar10) != 0) {
      uVar1 = 0;
      if (uVar9 < 4) {
        uVar1 = *(byte *)((long)param_1 + lVar10) - 1 << (ulong)(uVar6 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
        if (uVar9 < 4) {
          uVar7 = uVar9;
        }
        if ((int)uVar7 < 3) {
          if (uVar7 == 1) {
            uVar7 = (uint)(byte)*param_1;
          }
          else {
            uVar7 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar7 == 3) {
          uVar7 = (uint)(uint3)*param_1;
        }
        else {
          uVar7 = *param_1;
        }
      }
      if ((uVar7 | uVar1) != 0xffffffff) {
        if (*(byte *)((long)param_2 + lVar10) != 0) {
          uVar1 = 0;
          if (uVar9 < 4) {
            uVar1 = *(byte *)((long)param_2 + lVar10) - 1 << (ulong)(uVar6 & 0x1f);
          }
          if (uVar9 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 4;
            if (uVar9 < 4) {
              uVar6 = uVar9;
            }
            if ((int)uVar6 < 3) {
              if (uVar6 == 1) {
                uVar6 = (uint)(byte)*param_2;
              }
              else {
                uVar6 = (uint)(ushort)*param_2;
              }
            }
            else if (uVar6 == 3) {
              uVar6 = (uint)(uint3)*param_2;
            }
            else {
              uVar6 = *param_2;
            }
          }
          if ((uVar6 | uVar1) != 0xffffffff) goto LAB_1020fd42c;
        }
        (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar8);
        *(byte *)((long)param_1 + lVar10) = 0;
        return param_1;
      }
    }
    if (*(byte *)((long)param_2 + lVar10) != 0) {
      uVar1 = 0;
      if (uVar9 < 4) {
        uVar1 = *(byte *)((long)param_2 + lVar10) - 1 << (ulong)(uVar6 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 4;
        if (uVar9 < 4) {
          uVar6 = uVar9;
        }
        if ((int)uVar6 < 3) {
          if (uVar6 == 1) {
            uVar6 = (uint)(byte)*param_2;
          }
          else {
            uVar6 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar6 == 3) {
          uVar6 = (uint)(uint3)*param_2;
        }
        else {
          uVar6 = *param_2;
        }
      }
      iVar3 = (uVar6 | uVar1) + 1;
      goto LAB_1020fd418;
    }
  }
  else {
    pcVar12 = *(code **)(lVar11 + 0x30);
    puVar4 = param_1;
    (*pcVar12)(param_1,iVar2,lVar8);
    puVar5 = param_2;
    (*pcVar12)(param_2,iVar2,lVar8);
    iVar3 = (int)puVar5;
    if ((int)puVar4 != 0) {
      if (iVar3 != 0) goto LAB_1020fd42c;
      pcVar12 = *(code **)(lVar11 + 0x10);
      goto LAB_1020fd458;
    }
LAB_1020fd418:
    if (iVar3 != 0) {
      (**(code **)(lVar11 + 8))(param_1,lVar8);
LAB_1020fd42c:
      if (iVar2 == 0) {
        lVar10 = lVar10 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar10);
      return param_1;
    }
  }
  pcVar12 = *(code **)(lVar11 + 0x18);
LAB_1020fd458:
  (*pcVar12)(param_1,param_2,lVar8);
  return param_1;
}



/* Entry: 1020fd4b8; end: 1020fd5df;  */

long FUN_1020fd4b8(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_3 + 0x20);
  lVar8 = *(long *)(lVar6 + -8);
  iVar3 = *(int *)(lVar8 + 0x54);
  lVar7 = *(long *)(lVar8 + 0x40);
  if (iVar3 == 0) {
    if (*(byte *)((long)param_2 + lVar7) != 0) {
      uVar5 = (uint)lVar7;
      uVar1 = 0;
      if (uVar5 < 4) {
        uVar1 = *(byte *)((long)param_2 + lVar7) - 1 << (ulong)((uVar5 & 3) << 3);
      }
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar2 = 4;
        if (uVar5 < 4) {
          uVar2 = uVar5;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar5 = (uint)(byte)*param_2;
          }
          else {
            uVar5 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar2 == 3) {
          uVar5 = (uint)(uint3)*param_2;
        }
        else {
          uVar5 = *param_2;
        }
      }
      if ((uVar5 | uVar1) != 0xffffffff) goto LAB_1020fd594;
    }
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
    *(undefined1 *)(param_1 + lVar7) = 0;
  }
  else {
    puVar4 = param_2;
    (**(code **)(lVar8 + 0x30))(param_2,iVar3,lVar6);
    if ((int)puVar4 != 0) {
LAB_1020fd594:
      if (iVar3 == 0) {
        lVar7 = lVar7 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar7);
      return param_1;
    }
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar6);
  }
  return param_1;
}



/* Entry: 1020fd5e0; end: 1020fd83b;  */

uint * FUN_1020fd5e0(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  uint *puVar5;
  
  lVar8 = *(long *)(param_3 + 0x20);
  lVar11 = *(long *)(lVar8 + -8);
  iVar2 = *(int *)(lVar11 + 0x54);
  lVar10 = *(long *)(lVar11 + 0x40);
  if (iVar2 == 0) {
    uVar9 = (uint)lVar10;
    uVar6 = uVar9 << 3;
    if (*(byte *)((long)param_1 + lVar10) != 0) {
      uVar1 = 0;
      if (uVar9 < 4) {
        uVar1 = *(byte *)((long)param_1 + lVar10) - 1 << (ulong)(uVar6 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
        if (uVar9 < 4) {
          uVar7 = uVar9;
        }
        if ((int)uVar7 < 3) {
          if (uVar7 == 1) {
            uVar7 = (uint)(byte)*param_1;
          }
          else {
            uVar7 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar7 == 3) {
          uVar7 = (uint)(uint3)*param_1;
        }
        else {
          uVar7 = *param_1;
        }
      }
      if ((uVar7 | uVar1) != 0xffffffff) {
        if (*(byte *)((long)param_2 + lVar10) != 0) {
          uVar1 = 0;
          if (uVar9 < 4) {
            uVar1 = *(byte *)((long)param_2 + lVar10) - 1 << (ulong)(uVar6 & 0x1f);
          }
          if (uVar9 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 4;
            if (uVar9 < 4) {
              uVar6 = uVar9;
            }
            if ((int)uVar6 < 3) {
              if (uVar6 == 1) {
                uVar6 = (uint)(byte)*param_2;
              }
              else {
                uVar6 = (uint)(ushort)*param_2;
              }
            }
            else if (uVar6 == 3) {
              uVar6 = (uint)(uint3)*param_2;
            }
            else {
              uVar6 = *param_2;
            }
          }
          if ((uVar6 | uVar1) != 0xffffffff) goto LAB_1020fd7b0;
        }
        (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar8);
        *(byte *)((long)param_1 + lVar10) = 0;
        return param_1;
      }
    }
    if (*(byte *)((long)param_2 + lVar10) != 0) {
      uVar1 = 0;
      if (uVar9 < 4) {
        uVar1 = *(byte *)((long)param_2 + lVar10) - 1 << (ulong)(uVar6 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 4;
        if (uVar9 < 4) {
          uVar6 = uVar9;
        }
        if ((int)uVar6 < 3) {
          if (uVar6 == 1) {
            uVar6 = (uint)(byte)*param_2;
          }
          else {
            uVar6 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar6 == 3) {
          uVar6 = (uint)(uint3)*param_2;
        }
        else {
          uVar6 = *param_2;
        }
      }
      iVar3 = (uVar6 | uVar1) + 1;
      goto LAB_1020fd79c;
    }
  }
  else {
    pcVar12 = *(code **)(lVar11 + 0x30);
    puVar4 = param_1;
    (*pcVar12)(param_1,iVar2,lVar8);
    puVar5 = param_2;
    (*pcVar12)(param_2,iVar2,lVar8);
    iVar3 = (int)puVar5;
    if ((int)puVar4 != 0) {
      if (iVar3 != 0) goto LAB_1020fd7b0;
      pcVar12 = *(code **)(lVar11 + 0x20);
      goto LAB_1020fd7dc;
    }
LAB_1020fd79c:
    if (iVar3 != 0) {
      (**(code **)(lVar11 + 8))(param_1,lVar8);
LAB_1020fd7b0:
      if (iVar2 == 0) {
        lVar10 = lVar10 + 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar10);
      return param_1;
    }
  }
  pcVar12 = *(code **)(lVar11 + 0x28);
LAB_1020fd7dc:
  (*pcVar12)(param_1,param_2,lVar8);
  return param_1;
}



/* Entry: 1020fd83c; end: 1020fd963;  */

int FUN_1020fd83c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar3 - 1;
  }
  lVar7 = *(long *)(lVar5 + 0x40);
  if (uVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1020fd8e0;
  uVar6 = (uint)lVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1020fd8e0;
      goto LAB_1020fd878;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar7);
    }
  }
  else {
LAB_1020fd878:
    uVar8 = (uint)*(byte *)((long)param_1 + lVar7);
  }
  if (uVar8 != 0) {
    uVar3 = 0;
    if (uVar6 < 4) {
      uVar3 = uVar8 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar4 = (uint)(byte)*param_1;
        }
        else {
          uVar4 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar4 = (uint)(uint3)*param_1;
      }
      else {
        uVar4 = *param_1;
      }
    }
    return uVar1 + (uVar4 | uVar3) + 1;
  }
LAB_1020fd8e0:
  if (uVar3 < 2) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))();
  iVar2 = 0;
  if ((int)param_1 != 0) {
    iVar2 = (int)param_1 + -1;
  }
  return iVar2;
}



/* Entry: 1020fd964; end: 1020fdba3;  */

void FUN_1020fd964(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  bVar9 = 0;
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar8 = 0;
  if (uVar3 != 0) {
    uVar8 = uVar3 - 1;
  }
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar2 = lVar6;
  if (uVar3 == 0) {
    lVar2 = lVar6 + 1;
  }
  uVar5 = (uint)lVar2;
  if (uVar8 <= param_3 && param_3 - uVar8 != 0) {
    if (uVar5 < 4) {
      uVar1 = ((param_3 - uVar8) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f)
              ) + 1;
      bVar9 = 2;
      if (0xffff < uVar1) {
        bVar9 = 4;
      }
      if (uVar1 < 0x100) {
        bVar9 = 1 < uVar1;
      }
    }
    else {
      bVar9 = 1;
    }
  }
  if (uVar8 < param_2) {
    param_2 = param_2 + ~uVar8;
    if (uVar5 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar8 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar2);
        uVar4 = (undefined2)uVar8;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar8 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar2);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar10;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar10;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if ((param_2 != 0) && (1 < uVar3)) {
      if (param_2 < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001020fdacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(param_1,param_2 + 1);
        return;
      }
      uVar5 = (uint)lVar6;
      uVar8 = 0xffffffff;
      if (uVar5 < 4) {
        uVar8 = ~(-1 << (ulong)((uVar5 & 3) << 3));
      }
      if (uVar5 != 0) {
        uVar8 = uVar8 & param_2 - uVar3;
        uVar3 = 4;
        if (uVar5 < 4) {
          uVar3 = uVar5;
        }
        func_0x000107c60ee4(param_1,lVar6);
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            *(char *)param_1 = (char)uVar8;
          }
          else {
            *(short *)param_1 = (short)uVar8;
          }
        }
        else if (uVar3 == 3) {
          *(short *)param_1 = (short)uVar8;
          *(char *)((long)param_1 + 2) = (char)(uVar8 >> 0x10);
        }
        else {
          *param_1 = uVar8;
        }
      }
    }
  }
  return;
}



/* Entry: 1020fdba4; end: 1020fdc3f;  */

uint * FUN_1020fdba4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + -8);
  if (*(int *)(lVar3 + 0x54) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001020fdbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x30))();
    return param_1;
  }
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (*(byte *)((long)param_1 + uVar5) != 0) {
    uVar4 = (uint)uVar5;
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = *(byte *)((long)param_1 + uVar5) - 1 << (ulong)((uVar4 & 3) << 3);
    }
    if (uVar4 != 0) {
      uVar2 = 4;
      if (uVar4 < 4) {
        uVar2 = uVar4;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return (uint *)(ulong)(((uint)uVar5 | uVar1) + 1);
  }
  return (uint *)0x0;
}



/* Entry: 1020fdc40; end: 1020fdd47;  */

void FUN_1020fdc40(uint *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  lVar7 = *(long *)(lVar5 + 0x40);
  uVar4 = (uint)param_2;
  if (uVar2 < uVar4) {
    uVar4 = uVar4 + ~uVar2;
    uVar6 = (uint)lVar7;
    if (uVar6 < 4) {
      cVar8 = (char)(uVar4 >> (ulong)(uVar6 << 3 & 0x1f)) + '\x01';
      if (uVar6 != 0) {
        uVar1 = uVar4 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar7);
        uVar3 = (undefined2)uVar1;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)uVar4;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar7);
      *param_1 = uVar4;
      cVar8 = '\x01';
    }
    if (uVar2 == 0) {
      *(char *)((long)param_1 + lVar7) = cVar8;
    }
  }
  else {
    if (uVar2 == 0) {
      *(undefined1 *)((long)param_1 + lVar7) = 0;
    }
    if (uVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001020fdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x38))(param_1,param_2,uVar2);
      return;
    }
  }
  return;
}



/* Entry: 1020fdd48; end: 1020fdda3;  */

long FUN_1020fdd48(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1020fdda4; end: 1020fde6b;  */

undefined8 * FUN_1020fdda4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1020fde6c; end: 1020fdebf;  */

undefined8 * FUN_1020fde6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020fdec0; end: 1020fe0df;  */

int FUN_1020fdec0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020fe0e0; end: 1020fe0fb;  */

void FUN_1020fe0e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1020fa484(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1020fe0fc; end: 1020fe12b;  */

void FUN_1020fe0fc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1020fe12c; end: 1020fe15f;  */

undefined8 FUN_1020fe12c(void)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1020fe160();
  return unaff_x20;
}



/* Entry: 1020fe160; end: 1020fe263;  */

void FUN_1020fe160(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x58);
  uVar1 = 0xff;
  func_0x000107c614b8(0xff,uVar4,uVar5,&UNK_10e6af91c,&UNK_10e6af934);
  uVar2 = 0;
  func_0x000107c61510(0,uVar1,uVar5,0,0);
  lVar3 = 0;
  func_0x000107c5fc6c(0,uVar2);
  func_0x000107c614b4(uVar4,uVar5,uVar1,&UNK_10e6af91c,&UNK_10e6af92c);
  func_0x000107c5f9fc(lVar3,uVar1,uVar5,uVar4);
  unaff_x20[2] = lVar3;
  uVar4 = 0xff;
  func_0x000100087384(0xff,uVar5);
  uVar5 = 0;
  func_0x000107c61510(0,uVar1,uVar4,0,0);
  lVar3 = 0;
  func_0x000107c5fc6c(0,uVar5);
  func_0x000107c5f9fc();
  unaff_x20[3] = lVar3;
  return;
}



/* Entry: 1020fe264; end: 1020fe337;  */

void FUN_1020fe264(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [24];
  
  lVar5 = *unaff_x20;
  func_0x000107c61428(unaff_x20 + 2,auStack_68,0,0);
  lVar4 = unaff_x20[2];
  uVar1 = *(undefined8 *)(lVar5 + 0x50);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  uVar2 = 0;
  func_0x000107c614b8(0,uVar3,uVar1,&UNK_10e6af91c,&UNK_10e6af934);
  func_0x000107c614b4(uVar3,uVar1,uVar2,&UNK_10e6af91c,&UNK_10e6af92c);
  func_0x000107c61434(lVar4);
  func_0x000107c5fa40(param_1,param_2,lVar4,uVar2,uVar1,uVar3);
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 1020fe338; end: 1020feeab;  */

void FUN_1020fe338(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  code *pcStack_128;
  code *pcStack_120;
  code *pcStack_118;
  code *pcStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar11 = *unaff_x20;
  lVar13 = *(long *)(lVar11 + 0x50);
  lVar6 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0xff;
  lStack_138 = lVar7;
  func_0x000107c60188(0xff,lVar13);
  lVar2 = 0;
  func_0x000107c61510(0,lVar1,lVar1,0,0);
  lStack_130 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_130 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_00;
  lVar18 = *(long *)(lVar11 + 0x58);
  lVar3 = 0;
  func_0x000107c614b8(0,lVar18,lVar13,&UNK_10e6af91c,&UNK_10e6af934);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_f0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lVar14 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_100 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar10 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar16 - extraout_x12_02;
  pcStack_110 = *(code **)(lVar18 + 0x20);
  (*pcStack_110)(lVar9,lVar13,lVar18);
  func_0x000107c61428(unaff_x20 + 2,auStack_80,0,0);
  lVar12 = unaff_x20[2];
  lVar11 = lVar18;
  func_0x000107c614b4(lVar18,lVar13,lVar3,&UNK_10e6af91c,&UNK_10e6af92c);
  func_0x000107c61434(lVar12);
  lStack_108 = lVar11;
  func_0x000107c5fa40(lVar17,lVar9,lVar12,lVar3,lVar13,lVar11);
  func_0x000107c6142c(lVar12);
  pcStack_118 = *(code **)(lVar8 + 8);
  lStack_f8 = lVar9;
  (*pcStack_118)(lVar9,lVar3);
  pcStack_128 = *(code **)(lVar6 + 0x10);
  (*pcStack_128)(lVar16,param_1,lVar13);
  pcStack_120 = *(code **)(lVar6 + 0x38);
  (*pcStack_120)(lVar16,0,1,lVar13);
  lVar11 = (long)*(int *)(lVar2 + 0x30);
  pcVar19 = *(code **)(lVar14 + 0x10);
  (*pcVar19)(lVar7,lVar17,lVar1);
  (*pcVar19)(lVar7 + lVar11,lVar16,lVar1);
  pcVar15 = *(code **)(lVar6 + 0x30);
  lVar8 = lVar7;
  (*pcVar15)(lVar7,1,lVar13);
  if ((int)lVar8 == 1) {
    pcVar19 = *(code **)(lVar14 + 8);
    (*pcVar19)(lVar16,lVar1);
    lVar11 = lVar7 + lVar11;
    (*pcVar15)(lVar11,1,lVar13);
    if ((int)lVar11 == 1) {
      (*pcVar19)(lVar7,lVar1);
LAB_1020fe8d0:
      (*pcVar19)(lVar17,lVar1);
      return;
    }
  }
  else {
    lStack_140 = lVar14;
    (*pcVar19)(uVar10,lVar7,lVar1);
    lVar8 = lVar7 + lVar11;
    (*pcVar15)(lVar8,1,lVar13);
    lVar9 = lStack_138;
    if ((int)lVar8 != 1) {
      (**(code **)(lVar6 + 0x20))(lStack_138,lVar7 + lVar11,lVar13);
      uVar5 = uVar10;
      func_0x000107c5fab8(uVar10,lVar9,lVar13,*(undefined8 *)(lVar18 + 8));
      pcVar15 = *(code **)(lVar6 + 8);
      (*pcVar15)(lVar9,lVar13);
      pcVar19 = *(code **)(lStack_140 + 8);
      (*pcVar19)(lVar16,lVar1);
      (*pcVar15)(uVar10,lVar13);
      (*pcVar19)(lVar7,lVar1);
      if ((uVar5 & 1) != 0) goto LAB_1020fe8d0;
      goto LAB_1020fe6f8;
    }
    pcVar19 = *(code **)(lStack_140 + 8);
    (*pcVar19)(lVar16,lVar1);
    (**(code **)(lVar6 + 8))(uVar10,lVar13);
  }
  (**(code **)(lStack_130 + 8))(lVar7,lVar2);
LAB_1020fe6f8:
  lVar2 = lStack_f8;
  pcVar15 = pcStack_110;
  (*pcStack_110)(lStack_f8,lVar13,lVar18);
  lVar8 = lStack_100;
  (*pcStack_128)(lStack_100,param_1,lVar13);
  (*pcStack_120)(lVar8,0,1,lVar13);
  func_0x000107c61428(unaff_x20 + 2,auStack_98,0x21,0);
  lVar11 = lStack_108;
  uVar4 = 0;
  func_0x000107c5fa34(0,lVar3,lVar13,lStack_108);
  func_0x000107c5fa44(lVar8,lVar2,uVar4);
  func_0x000107c614a8(auStack_98);
  lVar8 = lStack_f0;
  (*pcVar15)(lStack_f0,lVar13,lVar18);
  func_0x000107c61428(unaff_x20 + 3,auStack_98,0,0);
  lVar2 = unaff_x20[3];
  uVar4 = 0;
  func_0x000100087384(0,lVar13);
  func_0x000107c61434(lVar2);
  func_0x000107c5fa40(&lStack_a0,lVar8,lVar2,lVar3,uVar4,lVar11);
  func_0x000107c6142c(lVar2);
  (*pcStack_118)(lVar8,lVar3);
  if (lStack_a0 != 0) {
    func_0x000100087c34(param_1);
    func_0x000107c61574(lStack_a0);
  }
  (*pcVar19)(lVar17,lVar1);
  return;
}



/* Entry: 1020feeac; end: 1020fefbf;  */

void FUN_1020feeac(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)(*param_2 + 0x88);
  lVar1 = 0;
  func_0x000107c60188(0,lVar4);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = puVar5 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(puVar5,param_1,lVar1);
  puVar2 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar4);
  if ((int)puVar2 == 1) {
    pcVar3 = *(code **)(lVar8 + 8);
    puVar6 = puVar5;
    lVar4 = lVar1;
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar6,puVar5,lVar4);
    func_0x000100087c34(puVar6);
    pcVar3 = *(code **)(lVar7 + 8);
  }
  (*pcVar3)(puVar6,lVar4);
  return;
}



/* Entry: 1020fefc0; end: 1020ff00f;  */

void FUN_1020fefc0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1020ff010; end: 1020ff0af;  */

void FUN_1020ff010(void)

{
  undefined8 *unaff_x20;
  
  (**(code **)(*(long *)*unaff_x20 + 0xa8))();
  return;
}



/* Entry: 1020ff0b0; end: 1020ff0bb;  */

undefined8 FUN_1020ff0b0(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x58);
}



/* Entry: 1020ff0bc; end: 1020ff0ff;  */

void FUN_1020ff0bc(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBbWV_11034d660 + 0x40;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x60);
  return;
}



/* Entry: 1020ff100; end: 1020ff10b;  */

void FUN_1020ff100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e6afc7c);
  return;
}



/* Entry: 1020ff10c; end: 1020ff1af;  */

void FUN_1020ff10c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_58,0,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_78 = uVar1;
  uStack_70 = uVar3;
  uStack_68 = uVar2;
  uStack_60 = uVar4;
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000100087c34(&uStack_78);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1020ff1b0; end: 1020ff223;  */

undefined8 FUN_1020ff1b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_48,0,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  return uVar1;
}



/* Entry: 1020ff224; end: 1020ff2af;  */

void FUN_1020ff224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_68,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar1);
  FUN_1020ff10c();
  return;
}



/* Entry: 1020ff2b0; end: 1020ff2b7;  */

void FUN_1020ff2b0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1020ff2b8; end: 1020ff39b;  */

/* WARNING: Possible PIC construction at 0x0001020ff350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ff354) */

void FUN_1020ff2b8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  puVar1 = &UNK_1104cb528;
  func_0x000107c613fc(&UNK_1104cb528,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1104cb550;
  func_0x000107c613fc(&UNK_1104cb550,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar3 + 200);
  uVar4 = *(undefined8 *)(lVar3 + 0xd0);
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(lVar3 + 0xd8);
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(lVar3 + 0xe0);
  *(undefined **)(puVar2 + 0x30) = puVar1;
  (**(code **)(*param_1 + 0x60))(FUN_1020ff408,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1020ff39c; end: 1020ff407;  */

void FUN_1020ff39c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1020ff418(uVar1,uVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1020ff408; end: 1020ff417;  */

void FUN_1020ff408(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    FUN_1020ff418(uVar1,uVar2);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1020ff418; end: 1020ffd53;  */

void FUN_1020ff418(long ****param_1,long *****param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long ****pppplVar2;
  long *plVar3;
  long ****pppplVar4;
  code *pcVar5;
  long ****pppplVar6;
  long **pplVar7;
  long ****pppplVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long *****ppppplVar17;
  long *****ppppplVar18;
  long ****pppplVar19;
  long ****pppplVar20;
  ulong uVar21;
  long *****ppppplVar22;
  long *****ppppplVar23;
  ulong uVar24;
  long ****pppplVar25;
  long extraout_x8;
  long extraout_x12;
  long ****unaff_x20;
  long ****pppplVar26;
  long ***ppplVar27;
  long lVar28;
  long *****ppppplVar29;
  long **pplVar30;
  ulong uVar31;
  long *****ppppplVar32;
  long *plStack_1d0;
  long ****pppplStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_108 [3];
  long ****pppplStack_f0;
  long *plStack_e8;
  long ****pppplStack_e0;
  long ***ppplStack_d8;
  long ****pppplStack_d0;
  long ***ppplStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long ****pppplStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [2];
  long ****pppplStack_78;
  long ****pppplStack_70;
  
  ppplVar27 = *unaff_x20;
  ppppplVar32 = (long *****)ppplVar27[0x19];
  pppplVar25 = ppppplVar32[-1];
  pppplVar6 = param_1;
  ppppplVar23 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppplVar25[8]);
  uVar31 = (long)&plStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1020ff1b0();
  pppplVar26 = (long ****)ppplVar27[0x1c];
  pplVar30 = ppplVar27[0x1a];
  pplVar7 = (long **)0xff;
  puStack_1c0 = param_4;
  func_0x000107c614b8(0xff,pppplVar26,pplVar30,&UNK_10e6af91c,&UNK_10e6af934);
  ppppplVar29 = (long *****)ppplVar27[0x1b];
  pppplVar8 = pppplVar26;
  func_0x000107c614b4(pppplVar26,pplVar30,pplVar7,&UNK_10e6af91c,&UNK_10e6af92c);
  uVar9 = 0;
  pppplStack_f0 = (long ****)ppppplVar32;
  plStack_e8 = (long *)pplVar7;
  pppplStack_e0 = (long ****)ppppplVar29;
  ppplStack_d8 = (long ***)pppplVar8;
  func_0x0001020ee960(0,&pppplStack_f0);
  uVar10 = 0xff;
  pppplStack_e0 = (long ****)ppppplVar32;
  ppplStack_d8 = (long ***)pplVar30;
  pppplStack_d0 = (long ****)ppppplVar29;
  ppplStack_c8 = (long ***)pppplVar26;
  pppplStack_78 = param_1;
  pppplStack_70 = (long ****)param_2;
  func_0x000107c5fc80(0xff,pplVar30);
  uVar11 = 0;
  func_0x0001020fc494(0,ppppplVar32,uVar10,ppppplVar29);
  uVar12 = 0xff;
  func_0x000107c5fc80(0xff,pplVar7);
  uVar13 = 0;
  func_0x0001020fc344(0,ppppplVar32,uVar12,ppppplVar29);
  puVar14 = &UNK_10da5cb0c;
  func_0x000107c61520(&UNK_10da5cb0c,uVar11);
  pcVar5 = FUN_1020ffef4;
  func_0x0001000ca88c(FUN_1020ffef4,&pppplStack_f0,uVar11,uVar13,PTR___ss5NeverON_11034ee88,puVar14,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar11 = 0;
  pppplStack_78 = (long ****)pcVar5;
  func_0x000107c5fc80(0,uVar13);
  puVar14 = &UNK_10da5c608;
  func_0x000107c61520(&UNK_10da5c608,uVar9);
  puVar15 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar11);
  func_0x000107c5ff08(&pppplStack_f0,&pppplStack_78,uVar9,uVar11,puVar14,puVar15);
  pppplVar4 = pppplStack_e0;
  plVar3 = plStack_e8;
  pppplVar2 = pppplStack_f0;
  plStack_1d0 = (long *)ppplStack_d8;
  uVar16 = 0;
  pppplStack_f0 = param_1;
  pppplStack_78 = pppplVar6;
  func_0x000107c5fc80(0,ppppplVar32);
  puVar14 = PTR___sSayxGSKsMc_11034dcf0;
  func_0x000107c61520(PTR___sSayxGSKsMc_11034dcf0,uVar16);
  ppppplVar22 = &pppplStack_78;
  uVar24 = uVar16;
  FUN_102107370(ppppplVar22,uVar16,uVar16,puVar14,puVar14,ppppplVar29[1]);
  uVar9 = 0;
  func_0x000107c5fc6c(0,ppppplVar32);
  uVar11 = 0;
  auStack_88[0] = uVar9;
  func_0x000107c5fc6c(0,ppppplVar32);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppppplVar17 = (long *****)0x0;
  uStack_90 = uVar11;
  func_0x000107c5fc6c(0,ppppplVar32);
  puVar14 = PTR___sSayxGSlsMc_11034dd20;
  pppplStack_f0 = (long ****)ppppplVar17;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar16);
  uVar21 = uVar16;
  func_0x000107c5feb0(uVar16,puVar14);
  pppplStack_1c8 = pppplVar4;
  if ((uVar21 & 1) == 0) {
    FUN_1020ee2b0(ppppplVar17,ppppplVar32,ppppplVar29);
  }
  else {
    func_0x000107c6142c(ppppplVar17);
    ppppplVar17 = ppppplVar32;
    func_0x000107c5f9d8(ppppplVar32,ppppplVar29);
  }
  ppppplVar18 = ppppplVar22;
  uVar21 = uVar24;
  pppplStack_a0 = (long ****)ppppplVar17;
  FUN_1021031dc(ppppplVar22,uVar24,ppppplVar32,ppppplVar29);
  func_0x000107c6142c(uVar24);
  func_0x000107c6142c(ppppplVar22);
  ppuStack_c0 = &puStack_98;
  puStack_b8 = auStack_88;
  puStack_b0 = &uStack_90;
  uVar9 = 0;
  pppplStack_e0 = (long ****)ppppplVar32;
  ppplStack_d8 = (long ***)pplVar30;
  pppplStack_d0 = (long ****)ppppplVar29;
  ppplStack_c8 = (long ***)pppplVar26;
  pppplStack_78 = (long ****)ppppplVar18;
  pppplStack_70 = (long ****)uVar21;
  FUN_1021051b8(0,ppppplVar32);
  puVar14 = &UNK_10da5d188;
  func_0x000107c61520(&UNK_10da5d188,uVar9);
  func_0x000107c5fc14(0x102100904,&pppplStack_f0,uVar9,puVar14);
  func_0x000107c6142c(uVar21);
  func_0x000107c6142c(ppppplVar18);
  puVar1 = puStack_1c0;
  ppuStack_c0 = (undefined **)puStack_1c0;
  puVar14 = PTR___sSayxGSTsMc_11034dd08;
  pppplStack_e0 = (long ****)&pppplStack_a0;
  ppplStack_d8 = (long ***)pppplVar6;
  pppplStack_d0 = (long ****)ppppplVar23;
  ppplStack_c8 = (long ***)param_3;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar16);
  func_0x000107c5fc14(0x102100928,&pppplStack_f0,uVar16,puVar14);
  pppplStack_e0 = (long ****)&pppplStack_a0;
  ppplStack_d8 = (long ***)param_1;
  pppplStack_d0 = (long ****)param_2;
  ppplStack_c8 = (long ***)unaff_x20;
  func_0x000107c5fc14(0x102100948,&pppplStack_f0,uVar16,puVar14);
  pppplVar19 = param_1;
  func_0x000107c5fc7c(param_1,ppppplVar32);
  pppplVar4 = pppplStack_a0;
  if (pppplVar19 == (long ****)0x0) {
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(ppppplVar23);
    func_0x000107c6142c(pppplVar6);
  }
  else {
    lVar28 = 0;
    do {
      func_0x000107c5fc98(uVar31 - extraout_x12,lVar28,param_1,ppppplVar32);
      pppplVar19 = (long ****)(lVar28 + 1);
      if (SCARRY8(lVar28,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ffd54);
        (*pcVar5)();
      }
      (*(code *)pppplVar25[4])(uVar31,uVar31 - extraout_x12,ppppplVar32);
      uVar21 = uVar31;
      func_0x000107c5fe34(uVar31,pppplVar4,ppppplVar32,ppppplVar29);
      if ((uVar21 & 1) == 0) {
        uVar21 = 0;
        func_0x000107c6143c(0,uVar12);
        FUN_1020f912c(&pppplStack_f0,uVar31,pppplVar6,ppppplVar23,ppppplVar32,uVar21,ppppplVar29);
        ppppplVar17 = (long *****)pppplStack_f0;
        if ((long *****)pppplStack_f0 == (long *****)0x0) {
          ppppplVar17 = (long *****)0x0;
          func_0x000107c5fc6c(0,pplVar7);
        }
        FUN_1020f912c(&pppplStack_f0,uVar31,pppplVar2,plVar3,ppppplVar32,uVar21,ppppplVar29);
        ppppplVar22 = (long *****)pppplStack_f0;
        if ((long *****)pppplStack_f0 == (long *****)0x0) {
          ppppplVar22 = (long *****)0x0;
          func_0x000107c5fc6c(0,pplVar7);
        }
        puVar14 = PTR___sSayxGSKsMc_11034dcf0;
        pppplStack_f0 = (long ****)ppppplVar22;
        pppplStack_78 = (long ****)ppppplVar17;
        func_0x000107c61520(PTR___sSayxGSKsMc_11034dcf0,uVar21);
        ppppplVar18 = &pppplStack_78;
        FUN_102107370(ppppplVar18,uVar21,uVar21,puVar14,puVar14,pppplVar8[1]);
        func_0x000107c6142c(ppppplVar22);
        func_0x000107c6142c(ppppplVar17);
        uVar9 = 0;
        func_0x000107c5fc6c(0,pplVar7);
        ppppplVar17 = ppppplVar18;
        uVar24 = uVar21;
        auStack_108[0] = uVar9;
        FUN_1021031dc(ppppplVar18,uVar21,pplVar7,pppplVar8);
        func_0x000107c6142c(uVar21);
        func_0x000107c6142c(ppppplVar18);
        ppuStack_c0 = (undefined **)auStack_108;
        uVar9 = 0;
        pppplStack_e0 = (long ****)ppppplVar32;
        ppplStack_d8 = (long ***)pplVar30;
        pppplStack_d0 = (long ****)ppppplVar29;
        ppplStack_c8 = (long ***)pppplVar26;
        pppplStack_78 = (long ****)ppppplVar17;
        pppplStack_70 = (long ****)uVar24;
        FUN_1021051b8(0,pplVar7);
        puVar14 = &UNK_10da5d188;
        func_0x000107c61520(&UNK_10da5d188,uVar9);
        func_0x000107c5fc14(0x102100964,&pppplStack_f0,uVar9,puVar14);
        func_0x000107c6142c(uVar24);
        func_0x000107c6142c(ppppplVar17);
        uVar9 = auStack_108[0];
        uVar11 = 0;
        pppplStack_f0 = (long ****)ppppplVar32;
        plStack_e8 = (long *)pplVar30;
        pppplStack_e0 = (long ****)ppppplVar29;
        ppplStack_d8 = (long ***)pppplVar26;
        FUN_102100984(0,&pppplStack_f0);
        puVar14 = &DAT_10da5cf90;
        func_0x000107c61520(&DAT_10da5cf90,uVar11);
        FUN_102100ed8(uVar9,uVar11,puVar14);
        FUN_1020f912c(&pppplStack_78,uVar31,param_1,param_2,ppppplVar32,uVar10,ppppplVar29);
        ppppplVar17 = (long *****)pppplStack_78;
        if ((long *****)pppplStack_78 == (long *****)0x0) {
          ppppplVar17 = (long *****)0x0;
          func_0x000107c5fc6c(0,pplVar30);
        }
        puVar15 = PTR___sSayxGSTsMc_11034dd08;
        pppplStack_f0 = (long ****)ppppplVar17;
        func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar10);
        func_0x000102100fb0(&pppplStack_f0,uVar11,uVar10,puVar14,puVar15);
        func_0x000107c6142c(ppppplVar17);
        (*(code *)pppplVar25[1])(uVar31,ppppplVar32);
        func_0x000107c6142c(uVar9);
      }
      else {
        (*(code *)pppplVar25[1])(uVar31,ppppplVar32);
      }
      pppplVar20 = param_1;
      func_0x000107c5fc7c(param_1,ppppplVar32);
      lVar28 = lVar28 + 1;
    } while (pppplVar19 != pppplVar20);
    func_0x000107c6142c(puStack_1c0);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(ppppplVar23);
    func_0x000107c6142c(pppplVar6);
  }
  FUN_1020ff224(pppplVar2,plVar3,pppplStack_1c8,plStack_1d0);
  func_0x000107c6142c(pppplStack_a0);
  func_0x000107c6142c(puStack_98);
  func_0x000107c6142c(uStack_90);
  func_0x000107c6142c(auStack_88[0]);
  return;
}



/* Entry: 1020ffd54; end: 1020ffef3;  */

void FUN_1020ffd54(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_a0 [8];
  code *pcStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  uVar1 = 0xff;
  func_0x000107c5fc80(0xff,param_4);
  func_0x0001020fc344(0,param_3,uVar1,param_5);
  puVar2 = &UNK_10da5d038;
  pcStack_90 = param_3;
  uStack_88 = param_4;
  pcStack_80 = (code *)param_5;
  uStack_78 = param_6;
  func_0x000107c614e0(&UNK_10da5d038,&pcStack_90);
  uVar3 = 0;
  pcStack_80 = param_3;
  uStack_78 = param_5;
  uStack_70 = param_6;
  puStack_68 = puVar2;
  func_0x000107c6143c(0,uVar1);
  uVar1 = 0;
  func_0x000107c614b8(0,param_6,param_4,&UNK_10e6af91c,&UNK_10e6af934);
  puVar4 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar3);
  pcVar5 = FUN_102100ea8;
  func_0x0001000ca88c(FUN_102100ea8,&pcStack_90,uVar3,uVar1,PTR___ss5NeverON_11034ee88,puVar4,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c61574(puVar2);
  uVar3 = 0;
  pcStack_90 = pcVar5;
  func_0x000107c5fc80(0,uVar1);
  FUN_1020f9140(param_1,auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&pcStack_90,param_3,
                uVar3,param_5);
  return;
}



/* Entry: 1020ffef4; end: 1020fff13;  */

void FUN_1020ffef4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1020ffd54(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),param_2);
  return;
}



/* Entry: 1020fff14; end: 102100217;  */

void FUN_1020fff14(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  char cVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_70;
  ulong *puStack_68;
  
  lVar13 = *(long *)(param_5 + -8);
  lVar5 = param_5;
  uStack_70 = param_3;
  puStack_68 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar11 - extraout_x12_00;
  uVar3 = 0;
  func_0x0001021051c4(0,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)(lVar9 - extraout_x12_01);
  (**(code **)(extraout_x8_00 + 0x10))(puVar14,param_1,uVar3);
  puVar4 = puVar14;
  func_0x000107c614c4(puVar14,uVar3);
  if ((int)puVar4 == 1) {
    uVar8 = *puVar14;
    uVar3 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar5 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,param_5,uVar3,"offset element associatedWith ",0);
    puVar4 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar5 + 0x40));
    uVar3 = *puVar4;
    cVar1 = *(char *)(puVar4 + 1);
    (**(code **)(lVar13 + 0x20))(lVar9,(long)puVar14 + (long)*(int *)(lVar5 + 0x30),param_5);
    puVar2 = puStack_68;
    lVar10 = lVar9;
    if (cVar1 == '\x01') {
      (**(code **)(lVar13 + 0x10))(lVar11,lVar9,param_5);
      uVar3 = 0;
      func_0x000107c5fc80(0,param_5);
      func_0x000107c5fc78(lVar11,uVar3);
    }
    else {
      uVar12 = *puStack_68;
      uVar6 = uVar12;
      func_0x000107c61558();
      *puVar2 = uVar12;
      uVar7 = uVar12;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        func_0x000102100db0(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12,0x112e58c68,&UNK_10da5d030);
        *puVar2 = uVar7;
      }
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar12 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x000102100db0(uVar12,uVar6 + 1,1,uVar7,0x112e58c68,&UNK_10da5d030);
        *puVar2 = uVar12;
      }
      *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
      lVar5 = uVar12 + uVar6 * 0x10;
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      *(undefined8 *)(lVar5 + 0x28) = uVar3;
    }
  }
  else {
    uVar3 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar5 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,param_5,uVar3,"offset element associatedWith ",0);
    cVar1 = *(char *)((long)puVar14 + (long)*(int *)(lVar5 + 0x40) + 8);
    (**(code **)(lVar13 + 0x20))(lVar10,(long)puVar14 + (long)*(int *)(lVar5 + 0x30),param_5);
    if (cVar1 == '\x01') {
      (**(code **)(lVar13 + 0x10))(lVar11,lVar10,param_5);
      uVar3 = 0;
      func_0x000107c5fc80(0,param_5);
      func_0x000107c5fc78(lVar11,uVar3);
    }
  }
  (**(code **)(lVar13 + 8))(lVar10,param_5);
  return;
}



/* Entry: 102100218; end: 1021003a7;  */

void FUN_102100218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = *param_7;
  lVar5 = *(long *)(lVar6 + 200);
  lVar7 = *(long *)(lVar5 + -8);
  uStack_98 = param_3;
  uStack_90 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(lVar7 + 0x10))(puVar9,param_1,lVar5);
  uVar8 = *(undefined8 *)(lVar6 + 0xd8);
  uVar1 = 0;
  func_0x000107c5fe38(0,lVar5,uVar8);
  func_0x000107c5fe20((long)puVar9 - extraout_x12,puVar9,uVar1);
  (**(code **)(lVar7 + 8))((long)puVar9 - extraout_x12,lVar5);
  uVar4 = *(undefined8 *)(lVar6 + 0xe0);
  uVar10 = *(undefined8 *)(lVar6 + 0xd0);
  uVar1 = 0xff;
  func_0x000107c614b8(0xff,uVar4,uVar10,&UNK_10e6af91c,&UNK_10e6af934);
  uVar2 = 0;
  func_0x000107c5fc80(0,uVar1);
  FUN_1020f912c(&lStack_80,param_1,uStack_98,uStack_90,lVar5,uVar2,uVar8);
  lVar6 = lStack_80;
  if (lStack_80 != 0) {
    uVar1 = 0;
    lStack_80 = lVar5;
    uStack_78 = uVar10;
    uStack_70 = uVar8;
    uStack_68 = uVar4;
    FUN_102100984(0,&lStack_80);
    puVar3 = &DAT_10da5cf90;
    func_0x000107c61520(&DAT_10da5cf90,uVar1);
    FUN_102100ed8(lVar6,uVar1,puVar3);
    func_0x000107c6142c(lVar6);
  }
  return;
}



/* Entry: 1021003a8; end: 10210053b;  */

void FUN_1021003a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar8 = *param_5;
  lVar6 = *(long *)(lVar8 + 200);
  lVar7 = *(long *)(lVar6 + -8);
  uStack_a0 = param_3;
  uStack_98 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(lVar7 + 0x10))(lVar9,param_1,lVar6);
  uVar10 = *(undefined8 *)(lVar8 + 0xd8);
  uVar1 = 0;
  func_0x000107c5fe38(0,lVar6,uVar10);
  func_0x000107c5fe20(lVar9 - extraout_x12,lVar9,uVar1);
  (**(code **)(lVar7 + 8))(lVar9 - extraout_x12,lVar6);
  uVar5 = *(undefined8 *)(lVar8 + 0xd0);
  uVar1 = 0;
  func_0x000107c5fc80(0,uVar5);
  FUN_1020f912c(&lStack_88,param_1,uStack_a0,uStack_98,lVar6,uVar1,uVar10);
  lVar7 = lStack_88;
  if (lStack_88 != 0) {
    uStack_70 = *(undefined8 *)(lVar8 + 0xe0);
    lStack_68 = lStack_88;
    uVar2 = 0;
    lStack_88 = lVar6;
    uStack_80 = uVar5;
    uStack_78 = uVar10;
    FUN_102100984(0,&lStack_88);
    puVar3 = &DAT_10da5cf90;
    func_0x000107c61520(&DAT_10da5cf90,uVar2);
    puVar4 = PTR___sSayxGSTsMc_11034dd08;
    func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar1);
    func_0x000102100fb0(&lStack_68,uVar2,uVar1,puVar3,puVar4);
    func_0x000107c6142c(lVar7);
  }
  return;
}



/* Entry: 10210053c; end: 1021006ff;  */

void FUN_10210053c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  char acStack_58 [8];
  
  lVar2 = 0;
  func_0x000107c614b8(0,param_6,param_4,&UNK_10e6af91c,&UNK_10e6af934);
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar8 - extraout_x12;
  uVar3 = 0;
  func_0x0001021051c4(0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar6 - extraout_x12_00;
  (**(code **)(extraout_x8_00 + 0x10))(lVar9,param_1,uVar3);
  lVar4 = lVar9;
  func_0x000107c614c4(lVar9,uVar3);
  uVar3 = 0x112d4f4d0;
  func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
  lVar5 = 0;
  func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar2,uVar3,"offset element associatedWith ",0);
  lVar7 = lVar9 + *(int *)(lVar5 + 0x30);
  if (((int)lVar4 == 1) &&
     (cVar1 = *(char *)(lVar9 + *(int *)(lVar5 + 0x40) + 8),
     (**(code **)(lVar10 + 0x20))(lVar6,lVar7,lVar2), lVar7 = lVar6, cVar1 == '\x01')) {
    (**(code **)(lVar10 + 0x10))(puVar8,lVar6,lVar2);
    uVar3 = 0;
    func_0x000107c5fc80(0,lVar2);
    func_0x000107c5fc78(puVar8,uVar3);
  }
  (**(code **)(lVar10 + 8))(lVar7,lVar2);
  return;
}



/* Entry: 102100700; end: 10210072f;  */

void FUN_102100700(void)

{
  func_0x000107c613fc();
  FUN_102100730();
  return;
}



/* Entry: 102100730; end: 102100837;  */

void FUN_102100730(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar8 = *unaff_x20;
  lVar7 = *(long *)(lVar8 + 0xe0);
  lVar3 = *(long *)(lVar8 + 200);
  uVar2 = *(undefined8 *)(lVar8 + 0xd0);
  lVar1 = 0;
  func_0x000107c614b8(0,lVar7,uVar2,&UNK_10e6af91c,&UNK_10e6af934);
  lVar9 = *(long *)(lVar8 + 0xd8);
  func_0x000107c614b4(lVar7,uVar2,lVar1,&UNK_10e6af91c,&UNK_10e6af92c);
  lVar8 = lVar3;
  lVar4 = lVar1;
  lVar5 = lVar9;
  lVar6 = lVar7;
  FUN_1020ecb90();
  unaff_x20[4] = lVar8;
  unaff_x20[5] = lVar4;
  unaff_x20[6] = lVar5;
  unaff_x20[7] = lVar6;
  uVar2 = 0xff;
  lStack_70 = lVar3;
  lStack_68 = lVar1;
  lStack_60 = lVar9;
  lStack_58 = lVar7;
  func_0x0001020ee960(0xff,&lStack_70);
  func_0x000100087384(0,uVar2);
  lVar3 = 1;
  func_0x000104887274();
  unaff_x20[8] = lVar3;
  lVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  unaff_x20[9] = lVar3;
  FUN_1020fe160();
  return;
}



/* Entry: 102100838; end: 1021008e7;  */

/* WARNING: Possible PIC construction at 0x000102100870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102100874) */

void FUN_102100838(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1021008e8; end: 102100983;  */

void FUN_1021008e8(undefined8 param_1)

{
  func_0x000102100888();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x50,7);
  return;
}



/* Entry: 102100984; end: 102100993;  */

void FUN_102100984(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e6afd28);
  return;
}



/* Entry: 102100994; end: 1021009e3;  */

void FUN_102100994(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBoWV_11034d678 + 0x40;
  puStack_28 = &UNK_10da5d010;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0xe8);
  return;
}



/* Entry: 1021009e4; end: 102100a13;  */

undefined * FUN_1021009e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  puVar2 = (undefined *)0x112e58c80;
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102100ea8);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(0x112e58c80,&UNK_10da5d078);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar5 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(puVar2 + 0x10) = uVar6;
    *(long *)(puVar2 + 0x18) = ((long)puVar5 >> 4) << 1;
    puVar5 = puVar2;
  }
  puVar2 = puVar5 + 0x20;
  puVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar2,puVar3,uVar6 << 4);
  }
  else {
    if (puVar5 != param_4 || puVar3 + uVar6 * 0x10 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar5;
}



/* Entry: 102100a14; end: 102100b8b;  */

undefined *
FUN_102100a14(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102100b8c);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x0001000285a8(param_5,param_6);
    lVar5 = 0;
    (*param_7)();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(param_5,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = param_5;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102100b84);
      (*pcVar4)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102100b88);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar5 / lVar10;
    }
    *(ulong *)(param_5 + 0x10) = uVar9;
    *(long *)(param_5 + 0x18) = lVar3 << 1;
    puVar6 = param_5;
  }
  lVar5 = 0;
  (*param_7)();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar6 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar2,uVar9,lVar5);
  }
  else {
    if ((puVar6 < param_4) || (puVar2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar1))
    {
      func_0x000107c61414(puVar1,puVar2,uVar9);
    }
    else if (puVar6 != param_4) {
      func_0x000107c61410(puVar1,puVar2,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar6;
}



/* Entry: 102100b8c; end: 102100ea7;  */

undefined * FUN_102100b8c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102100c94);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e585b8;
    func_0x0001000285a8(0x112e585b8,&UNK_10da5c140);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1104cace0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102100ea8; end: 102100ecf;  */

void FUN_102100ea8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614bc(param_1,*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102100ed0; end: 102100ed7;  */

void FUN_102100ed0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000102100ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x18))();
  return;
}



/* Entry: 102100ed8; end: 102101003;  */

void FUN_102100ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0xff;
  uStack_50 = param_2;
  uStack_48 = param_3;
  func_0x000107c614b8(0xff,param_3,param_2,&UNK_10e6afdfc,&UNK_10e6afe0c);
  func_0x000107c614b4(param_3,param_2,uVar1,&UNK_10e6afdfc,&UNK_10e6afe04);
  uVar2 = 0xff;
  func_0x000107c614b8(0xff,param_3,uVar1,&UNK_10e6af91c,&UNK_10e6af934);
  uVar1 = 0;
  func_0x000107c5fc80(0,uVar2);
  puVar3 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar1);
  func_0x000107c5fc14(FUN_102101004,auStack_60,uVar1,puVar3);
  return;
}



/* Entry: 102101004; end: 102101067;  */

void FUN_102101004(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x28))(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102101068; end: 10210120f;  */

void FUN_102101068(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_90 [8];
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = 0xff;
  pcStack_88 = param_2;
  uStack_80 = param_3;
  func_0x000107c614b8(0xff,param_5,param_4,&UNK_10e6afdfc,&UNK_10e6afe0c);
  lVar6 = param_5;
  uStack_78 = param_4;
  func_0x000107c614b4(param_5,param_4,uVar2,&UNK_10e6afdfc,&UNK_10e6afe04);
  lVar3 = 0;
  func_0x000107c614b8(0,lVar6,uVar2,&UNK_10e6af91c,&UNK_10e6af934);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar9 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = param_1;
  func_0x000107c5fc7c(param_1,lVar3);
  if (lVar6 != 0) {
    lVar6 = 0;
    pcVar7 = *(code **)(param_5 + 0x30);
    do {
      func_0x000107c5fc98((long)puVar9 - extraout_x12,lVar6,param_1,lVar3);
      lVar1 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102101210);
        (*pcVar7)();
      }
      (**(code **)(lVar8 + 0x20))(puVar9,(long)puVar9 - extraout_x12,lVar3);
      puVar4 = puVar9;
      (*pcVar7)(puVar9,uStack_78,param_5);
      (*pcStack_88)(puVar9,puVar4);
      func_0x000107c61574(puVar4);
      (**(code **)(lVar8 + 8))(puVar9,lVar3);
      lVar5 = param_1;
      func_0x000107c5fc7c(param_1,lVar3);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar5);
  }
  return;
}



/* Entry: 102101210; end: 10210146b;  */

undefined8 FUN_102101210(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  puVar4 = (undefined8 *)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar4);
  uVar5 = *puVar4;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = 0x112d4f4d0;
  func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
  lVar2 = 0;
  func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar3,uVar1,"offset element associatedWith ",0);
  (**(code **)(*(long *)(lVar3 + -8) + 8))
            ((undefined1 *)((long)puVar4 + (long)*(int *)(lVar2 + 0x30)),lVar3);
  return uVar5;
}



/* Entry: 10210146c; end: 102101c1b;  */

uint FUN_10210146c(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  long lVar17;
  code *pcVar18;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar4 = 0;
  lStack_b0 = param_2;
  func_0x0001021051c4();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lStack_80 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_00;
  lVar5 = 0;
  lStack_b8 = lVar11;
  lStack_98 = lVar4;
  func_0x000107c60188();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_00;
  lVar14 = *(long *)(param_3 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar17 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar15 = *(undefined8 *)(param_4 + 8);
  lVar4 = 0;
  func_0x000107c614b8(0,uVar15,param_3,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lStack_a0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar5 = lVar17 - extraout_x8_02;
  uVar7 = param_3;
  func_0x000107c5fe90(param_3,param_4);
  if ((uVar7 & 1) == 0) {
    puStack_70 = PTR___swiftEmptySetSingleton_11034f1d8;
    puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
    (**(code **)(lVar14 + 0x10))(lVar17,param_1,param_3);
    func_0x000107c5fbdc(lVar5,param_3,uVar15);
    func_0x000107c614b4(uVar15,param_3,lVar4,PTR___sSTTL_11034db40,
                        PTR___sST8IteratorST_StTn_11034db38);
    uStack_c0 = uVar15;
    func_0x000107c601c0(lVar11,lVar4);
    lVar3 = lStack_98;
    pcStack_c8 = *(code **)(lVar13 + 0x30);
    lVar6 = lVar11;
    (*pcStack_c8)(lVar11,1,lStack_98);
    lVar17 = lStack_b0;
    lVar14 = lStack_b8;
    if ((int)lVar6 == 1) {
      puStack_a8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      puStack_90 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    }
    else {
      pcStack_d0 = *(code **)(lVar13 + 0x20);
      puStack_90 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      puStack_a8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      lStack_f0 = lVar11;
      lStack_e8 = lVar4;
      lStack_e0 = lVar13;
      lStack_d8 = lVar5;
      do {
        (*pcStack_d0)(lVar14,lVar11,lVar3);
        lVar6 = lVar3;
        FUN_102101210();
        lVar11 = lStack_80;
        if (lVar6 < 0) {
          (**(code **)(lVar13 + 8))(lVar14,lVar3);
          pcVar16 = *(code **)(lStack_a0 + 8);
LAB_102101b50:
          (*pcVar16)(lVar5,lVar4);
          func_0x000107c6142c(puStack_70);
          puVar8 = puStack_68;
          func_0x000107c6142c(puStack_a8);
          uVar10 = 0;
          puVar9 = puStack_90;
          goto LAB_102101ad8;
        }
        pcVar16 = *(code **)(lVar13 + 0x10);
        (*pcVar16)(lStack_80,lVar14,lVar3);
        func_0x000107c614c4(lVar11,lVar3);
        uVar15 = 0x112d4f4d0;
        func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
        lVar13 = 0;
        func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar17,uVar15,"offset element associatedWith ",0)
        ;
        puVar8 = puStack_68;
        puVar9 = puStack_70;
        iVar1 = *(int *)(lVar13 + 0x30);
        if ((int)lVar11 == 1) {
          if (*(long *)(puStack_70 + 0x10) != 0) {
            uVar7 = *(ulong *)(puStack_70 + 0x28);
            func_0x000107c60688(uVar7,lVar6);
            uVar12 = -1L << ((ulong)(byte)puVar9[0x20] & 0x3f);
            uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar9 + (uVar7 >> 6) * 8 + 0x38) >> (uVar7 & 0x3f) & 1) != 0) {
LAB_102101820:
              if (*(long *)(*(long *)(puVar9 + 0x30) + uVar7 * 8) != lVar6)
              goto code_r0x00010210182c;
              (**(code **)(lStack_e0 + 8))(lVar14,lVar3);
              (**(code **)(lStack_a0 + 8))(lStack_d8,lVar4);
              func_0x000107c6142c(puVar9);
              puVar9 = puStack_68;
LAB_102101ab0:
              func_0x000107c6142c(puVar9);
              (**(code **)(*(long *)(lVar17 + -8) + 8))(lStack_80 + iVar1,lVar17);
              goto LAB_102101ad4;
            }
          }
        }
        else if (*(long *)(puStack_68 + 0x10) != 0) {
          uVar7 = *(ulong *)(puStack_68 + 0x28);
          func_0x000107c60688(uVar7,lVar6);
          uVar12 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
          uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar8 + (uVar7 >> 6) * 8 + 0x38) >> (uVar7 & 0x3f) & 1) != 0) {
            do {
              if (*(long *)(*(long *)(puVar8 + 0x30) + uVar7 * 8) == lVar6) {
                (**(code **)(lStack_e0 + 8))(lVar14,lVar3);
                (**(code **)(lStack_a0 + 8))(lStack_d8,lVar4);
                puVar9 = puStack_70;
                func_0x000107c6142c(puVar8);
                goto LAB_102101ab0;
              }
              uVar7 = uVar7 + 1 & ~uVar12;
            } while ((*(ulong *)(puVar8 + (uVar7 >> 6) * 8 + 0x38) >> (uVar7 & 0x3f) & 1) != 0);
          }
        }
LAB_1021018c0:
        func_0x000100f73104(&puStack_78,lVar6);
        pcVar18 = *(code **)(*(long *)(lVar17 + -8) + 8);
        lVar11 = lVar17;
        (*pcVar18)(lStack_80 + iVar1);
        uVar10 = (uint)lVar11;
        lVar4 = lVar3;
        func_0x000102101398();
        lVar11 = lStack_88;
        lVar13 = lStack_e0;
        if ((uVar10 & 0xff) == 1) {
          (**(code **)(lStack_e0 + 8))(lVar14,lVar3);
        }
        else {
          if (lVar4 < 0) {
            (**(code **)(lStack_e0 + 8))(lVar14,lVar3);
            pcVar16 = *(code **)(lStack_a0 + 8);
            lVar5 = lStack_d8;
            lVar4 = lStack_e8;
            goto LAB_102101b50;
          }
          (*pcVar16)(lStack_88,lVar14,lVar3);
          func_0x000107c614c4(lVar11,lVar3);
          uVar15 = 0x112d4f4d0;
          func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
          lVar13 = 0;
          puVar9 = PTR___sSiN_11034deb0;
          func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar17,uVar15,"offset element associatedWith ",
                              0);
          lVar5 = (long)*(int *)(lVar13 + 0x30);
          if ((int)lVar11 == 1) {
            if ((*(long *)(puStack_90 + 0x10) != 0) &&
               (func_0x00010035a314(lVar6), puVar8 = puStack_90, ((ulong)puVar9 & 1) != 0)) {
              (**(code **)(lStack_e0 + 8))(lVar14,lVar3);
              (**(code **)(lStack_a0 + 8))(lStack_d8,lStack_e8);
              func_0x000107c6142c(puStack_70);
              func_0x000107c6142c(puStack_68);
              (*pcVar18)(lStack_88 + lVar5,lVar17);
              uVar10 = 0;
              puVar9 = puStack_a8;
              goto LAB_102101ad8;
            }
            puVar9 = puStack_90;
            puVar8 = puStack_90;
            func_0x000107c61558(puStack_90);
            puStack_78 = puVar9;
            FUN_1021049ec(lVar4,lVar6,puVar8);
            lVar13 = lStack_e0;
            (**(code **)(lStack_e0 + 8))(lVar14,lVar3);
            puStack_90 = puStack_78;
          }
          else {
            if ((*(long *)(puStack_a8 + 0x10) != 0) &&
               (func_0x00010035a314(lVar4), ((ulong)puVar9 & 1) != 0)) {
              (**(code **)(lStack_e0 + 8))(lVar14,lVar3);
              (**(code **)(lStack_a0 + 8))(lStack_d8,lStack_e8);
              func_0x000107c6142c(puStack_70);
              func_0x000107c6142c(puStack_68);
              (*pcVar18)(lStack_88 + lVar5,lVar17);
LAB_102101ad4:
              uVar10 = 0;
              puVar9 = puStack_a8;
              puVar8 = puStack_90;
              goto LAB_102101ad8;
            }
            puVar9 = puStack_a8;
            puVar8 = puStack_a8;
            func_0x000107c61558(puStack_a8);
            puStack_78 = puVar9;
            FUN_1021049ec(lVar6,lVar4,puVar8);
            lVar13 = lStack_e0;
            (**(code **)(lStack_e0 + 8))(lVar14,lVar3);
            puStack_a8 = puStack_78;
          }
          (*pcVar18)(lStack_88 + lVar5,lVar17);
        }
        lVar5 = lStack_d8;
        lVar4 = lStack_e8;
        lVar11 = lStack_f0;
        func_0x000107c601c0(lStack_f0,lStack_e8,uStack_c0);
        lVar6 = lVar11;
        (*pcStack_c8)(lVar11,1,lVar3);
      } while ((int)lVar6 != 1);
    }
    (**(code **)(lStack_a0 + 8))(lVar5,lVar4);
    puVar9 = puStack_90;
    puVar2 = puStack_a8;
    puVar8 = puStack_90;
    FUN_102101c1c(puStack_90,puStack_a8);
    uVar10 = (uint)puVar8;
    func_0x000107c6142c(puStack_70);
    puVar8 = puStack_68;
    func_0x000107c6142c(puVar2);
LAB_102101ad8:
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar8);
  }
  else {
    uVar10 = 1;
  }
  return uVar10 & 1;
code_r0x00010210182c:
  uVar7 = uVar7 + 1 & ~uVar12;
  if ((*(ulong *)(puVar9 + (uVar7 >> 6) * 8 + 0x38) >> (uVar7 & 0x3f) & 1) == 0) goto LAB_1021018c0;
  goto LAB_102101820;
}



/* Entry: 102101c1c; end: 102101d23;  */

undefined8 FUN_102101c1c(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar4 = (uint)param_2;
  if (param_1 == param_2) {
LAB_102101d04:
    uVar3 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar7 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar9 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar9 = ~(-1L << (uVar7 & 0x3f));
      }
      uVar9 = uVar9 & *(ulong *)(param_1 + 0x40);
      lVar6 = 0;
      do {
        if (uVar9 == 0) {
          do {
            lVar8 = lVar6 + 1;
            if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102101d24);
              (*pcVar1)();
            }
            if ((long)(uVar7 + 0x3f >> 6) <= lVar8) goto LAB_102101d04;
            uVar9 = ((ulong *)(param_1 + 0x40))[lVar8];
            lVar6 = lVar6 + 1;
          } while (uVar9 == 0);
          uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
        }
        else {
          uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
          lVar8 = lVar6;
        }
        uVar5 = LZCOUNT(uVar5) | lVar8 << 6;
        lVar2 = *(long *)(*(long *)(param_1 + 0x30) + uVar5 * 8);
        lVar10 = *(long *)(*(long *)(param_1 + 0x38) + uVar5 * 8);
        func_0x00010035a314();
      } while (((uVar4 & 1) != 0) &&
              (lVar6 = lVar8, *(long *)(*(long *)(param_2 + 0x38) + lVar2 * 8) == lVar10));
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 102101d24; end: 102101fcf;  */

bool FUN_102101d24(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x0001021051c4(0,param_3);
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar8 - extraout_x12;
  lVar3 = 0;
  func_0x000107c61510(0,lVar2,lVar2,0,0);
  lStack_88 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = lVar7 - extraout_x8_00;
  lVar5 = lVar9 + *(int *)(lVar3 + 0x30);
  pcVar11 = *(code **)(lVar10 + 0x10);
  lStack_80 = lVar3;
  lStack_78 = lVar10;
  uStack_70 = param_1;
  (*pcVar11)(lVar9,param_1,lVar2);
  uStack_68 = param_2;
  (*pcVar11)(lVar5,param_2,lVar2);
  lVar3 = lVar9;
  func_0x000107c614c4(lVar9,lVar2);
  if ((int)lVar3 == 1) {
    (*pcVar11)(lVar7,lVar9,lVar2);
    uVar4 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar3 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,param_3,uVar4,"offset element associatedWith ",0);
    iVar1 = *(int *)(lVar3 + 0x30);
    puVar8 = (undefined1 *)(lVar7 + iVar1);
    lVar3 = lVar5;
    func_0x000107c614c4(lVar5,lVar2);
    if ((int)lVar3 != 1) {
      pcVar11 = *(code **)(*(long *)(param_3 + -8) + 8);
      (*pcVar11)(lVar5 + iVar1,param_3);
      (*pcVar11)(puVar8,param_3);
      bVar6 = true;
      lVar5 = lStack_78;
      goto LAB_102101f98;
    }
  }
  else {
    (*pcVar11)(puVar8,lVar9,lVar2);
    uVar4 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar3 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,param_3,uVar4,"offset element associatedWith ",0);
    iVar1 = *(int *)(lVar3 + 0x30);
    puVar8 = puVar8 + iVar1;
    lVar3 = lVar5;
    func_0x000107c614c4(lVar5,lVar2);
    if ((int)lVar3 == 1) {
      pcVar11 = *(code **)(*(long *)(param_3 + -8) + 8);
      (*pcVar11)(lVar5 + iVar1,param_3);
      (*pcVar11)(puVar8,param_3);
      bVar6 = false;
      lVar5 = lStack_78;
      goto LAB_102101f98;
    }
  }
  (**(code **)(*(long *)(param_3 + -8) + 8))(puVar8,param_3);
  lVar5 = lVar2;
  FUN_102101210(lVar2);
  FUN_102101210(lVar2);
  bVar6 = lVar5 < lVar2;
  lVar5 = lStack_88;
  lVar2 = lStack_80;
LAB_102101f98:
  (**(code **)(lVar5 + 8))(lVar9,lVar2);
  return bVar6;
}



/* Entry: 102101fd0; end: 10210209f;  */

undefined4 FUN_102101fd0(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x6f69747265736e69;
  if ((param_1 == 0x6f69747265736e69 && param_2 == -0x15ffffffffff8c92) ||
     (func_0x000107c605b8(0x6f69747265736e69,0xea0000000000736e,param_1,param_2,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_1 == 0x736c61766f6d6572) && (param_2 == -0x1800000000000000)) {
      func_0x000107c6142c(0xe800000000000000);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x736c61766f6d6572,0xe800000000000000,param_1,param_2,0);
      func_0x000107c6142c(param_2);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}



/* Entry: 1021020a0; end: 1021020af;  */

bool FUN_1021020a0(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 1021020b0; end: 102102117;  */

void FUN_1021020b0(undefined8 param_1,undefined1 param_2)

{
  func_0x000107c60690(param_2);
  return;
}



/* Entry: 102102118; end: 10210217f;  */

undefined1  [16] FUN_102102118(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0x736c61766f6d6572;
  if (param_1 != '\x01') {
    uVar1 = 0x6f69747265736e69;
  }
  uVar2 = 0xe800000000000000;
  if (param_1 != '\x01') {
    uVar2 = 0xea0000000000736e;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102102180; end: 1021021c3;  */

void FUN_102102180(undefined8 param_1,long param_2)

{
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_1021020b0(auStack_68,*unaff_x20,*(undefined8 *)(param_2 + 0x10));
  func_0x000107c606a8();
  return;
}



/* Entry: 1021021c4; end: 1021021cf;  */

undefined1  [16] FUN_1021021c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x736c61766f6d6572;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6f69747265736e69;
  }
  uVar2 = 0xe800000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xea0000000000736e;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1021021d0; end: 1021021f7;  */

void FUN_1021021d0(undefined1 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  FUN_102101fd0(param_2,param_3,*(undefined8 *)(param_4 + 0x10));
  *param_1 = (char)param_2;
  return;
}



/* Entry: 1021021f8; end: 102102203;  */

undefined1  [16] FUN_1021021f8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102102204; end: 102102293;  */

void FUN_102102204(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_3 + 0x10);
  func_0x0001021060d8();
  *param_1 = uVar1;
  return;
}



/* Entry: 102102294; end: 10210229b;  */

undefined8 FUN_102102294(void)

{
  return 0;
}



/* Entry: 10210229c; end: 1021022fb;  */

long FUN_10210229c(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  func_0x0001021051c4(0,param_3);
  func_0x000107c5fc74(param_2,uVar2);
  func_0x000107c5fc74(param_1,uVar2);
  if (!SCARRY8(param_2,param_1)) {
    return param_2 + param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021022fc);
  (*pcVar1)();
}



/* Entry: 1021022fc; end: 102102303;  */

undefined1  [16]
FUN_1021022fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  
  if (!SCARRY8(param_1,1)) {
    auVar2._8_8_ = param_4;
    auVar2._0_8_ = param_1 + 1;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021051e0);
  (*pcVar1)();
}



/* Entry: 102102304; end: 10210238f;  */

void FUN_102102304(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = 0;
  func_0x0001021051c4(0,param_5);
  lVar3 = param_4;
  func_0x000107c5fc74(param_4,uVar2);
  lVar4 = param_2 - lVar3;
  if (param_2 < lVar3) {
    lVar4 = lVar3 - (param_2 + 1);
    if (SBORROW8(lVar3,param_2 + 1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10210238c);
      (*pcVar1)();
    }
  }
  else {
    param_4 = param_3;
    if (SBORROW8(param_2,lVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102102390);
      (*pcVar1)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSayxSicig_11034dd30)(param_1,lVar4,param_4,uVar2);
  return;
}



/* Entry: 102102390; end: 1021023e7;  */

void FUN_102102390(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_102104eac();
  *param_1 = uVar1;
  return;
}



/* Entry: 1021023e8; end: 10210245f;  */

code * FUN_1021023e8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xccff);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_10210248c();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_102102460;
}



/* Entry: 102102460; end: 10210248b;  */

void FUN_102102460(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 10210248c; end: 102102527;  */

undefined1  [16]
FUN_10210248c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0;
  func_0x0001021051c4(0,param_5);
  lVar2 = *(long *)(lVar1 + -8);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  lVar1 = *(long *)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(lVar1,0xc070);
  }
  param_1[2] = lVar1;
  FUN_102102304(lVar1,param_2,param_3,param_4,param_5);
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = FUN_102102528;
  return auVar3;
}



/* Entry: 102102528; end: 102102557;  */

void FUN_102102528(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 102102558; end: 10210257f;  */

void FUN_102102558(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb83cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlss5SliceVyxG11SubSequenceRtzrlEyACSny5IndexQzGcig_11034e058)();
  return;
}



/* Entry: 102102580; end: 1021025c7;  */

void FUN_102102580(void)

{
  FUN_1021060e0();
  return;
}



/* Entry: 1021025c8; end: 1021025cb;  */

void FUN_1021025c8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR___sSlTL_11034dfe8;
  uVar3 = 0;
  func_0x000107c614b8(0,param_4,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  func_0x000107c614b4(param_4,param_3,uVar3,puVar1,PTR___sSl5IndexSl_SLTn_11034dfa0);
  uVar4 = param_2;
  func_0x000107c5fa90(param_2,param_1,uVar3,param_4);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010943f0);
    (*pcVar2)();
  }
  lVar5 = 0;
  func_0x000107c5ff1c(0,uVar3,param_4);
  uVar4 = param_1 + *(int *)(lVar5 + 0x24);
  func_0x000107c5fa90(uVar4,param_2 + (long)*(int *)(lVar5 + 0x24),uVar3,param_4);
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010943f4);
  (*pcVar2)();
}



/* Entry: 1021025cc; end: 102102687;  */

void FUN_1021025cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001021051d0(uVar1,*(undefined8 *)(param_3 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Entry: 102102688; end: 10210268f;  */

undefined8 FUN_102102688(void)

{
  return 2;
}



/* Entry: 102102690; end: 1021026e3;  */

undefined8 * FUN_102102690(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  func_0x000107c61520(&UNK_10da5d0a8,param_1);
  puVar1 = unaff_x20;
  FUN_1020fc1f8();
  func_0x000107c6142c(*unaff_x20);
  func_0x000107c6142c(unaff_x20[1]);
  return puVar1;
}



/* Entry: 1021026e4; end: 1021026e7;  */

void FUN_1021026e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSTsE13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tF_11034db60)();
  return;
}



/* Entry: 1021026e8; end: 102102707;  */

void FUN_1021026e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5fbfc(param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 102102708; end: 102102743;  */

bool FUN_102102708(long param_1,long param_2)

{
  return param_1 == param_2;
}



/* Entry: 102102744; end: 1021027ab;  */

void FUN_102102744(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c60690(param_2);
  return;
}



/* Entry: 1021027ac; end: 1021027bb;  */

void FUN_1021027ac(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1021027bc; end: 1021027f7;  */

void FUN_1021027bc(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_102102744(auStack_68,*unaff_x20);
  func_0x000107c606a8();
  return;
}



/* Entry: 1021027f8; end: 102102cbb;  */

undefined8 FUN_1021027f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)(param_3 + -8);
  lVar4 = param_3;
  uStack_80 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  lVar8 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = lVar8 - extraout_x12;
  uStack_88 = uVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = uVar7 - extraout_x12_00;
  lStack_a0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = lVar8 - extraout_x12_01;
  lVar3 = 0;
  uStack_98 = uVar7;
  func_0x0001021051c4(0,lVar4);
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  plVar11 = (long *)(uVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar12 = (long *)((long)plVar11 - extraout_x12_02);
  lVar8 = 0;
  func_0x000107c61510(0,lVar3,lVar3,0,0);
  lStack_78 = *(long *)(lVar8 + -8);
  lVar4 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_78 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = (long)plVar12 - extraout_x8_01;
  plVar1 = (long *)(lVar10 + *(int *)(lVar4 + 0x30));
  pcVar15 = *(code **)(lVar14 + 0x10);
  lStack_70 = lVar14;
  (*pcVar15)(lVar10,param_1,lVar3);
  (*pcVar15)(plVar1,param_2,lVar3);
  lVar4 = lVar10;
  func_0x000107c614c4(lVar10,lVar3);
  if ((int)lVar4 == 1) {
    (*pcVar15)(plVar11,lVar10,lVar3);
    uVar9 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar14 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,param_3,uVar9,"offset element associatedWith ",0);
    iVar6 = *(int *)(lVar14 + 0x30);
    lVar4 = (long)plVar11 + (long)iVar6;
    iVar2 = *(int *)(lVar14 + 0x40);
    plVar12 = (long *)((long)plVar11 + (long)iVar2);
    lVar13 = *plVar12;
    uStack_98 = CONCAT44(uStack_98._4_4_,(uint)*(byte *)(plVar12 + 1));
    plVar12 = plVar1;
    func_0x000107c614c4(plVar1,lVar3);
    lVar14 = lStack_68;
    uVar7 = uStack_88;
    if ((int)plVar12 != 1) {
LAB_102102b44:
      (**(code **)(lStack_68 + 8))(lVar4,param_3);
      uVar9 = 0;
      lVar4 = lStack_78;
      goto LAB_102102c64;
    }
    lStack_78 = *plVar11;
    lVar8 = *plVar1;
    plVar11 = (long *)((long)plVar1 + (long)iVar2);
    lStack_b0 = *plVar11;
    lStack_a8 = lVar13;
    lStack_a0 = CONCAT44(lStack_a0._4_4_,(uint)*(byte *)(plVar11 + 1));
    pcVar15 = *(code **)(lStack_68 + 0x20);
    (*pcVar15)(uStack_88,lVar4,param_3);
    lVar4 = lStack_90;
    (*pcVar15)(lStack_90,(long)plVar1 + (long)iVar6,param_3);
    if (lStack_78 == lVar8) {
      uVar5 = uVar7;
      func_0x000107c5fab8(uVar7,lVar4,param_3,uStack_80);
      pcVar15 = *(code **)(lVar14 + 8);
      (*pcVar15)(lVar4,param_3);
      (*pcVar15)(uVar7,param_3);
      if ((uVar5 & 1) != 0) {
        iVar6 = (int)lStack_a0;
        if ((int)uStack_98 == 1) {
          if ((int)lStack_a0 == 1) goto LAB_102102cb4;
        }
        else {
LAB_102102ca4:
          if (iVar6 != 1 && lStack_a8 == lStack_b0) goto LAB_102102cb4;
        }
LAB_102102c18:
        uVar9 = 0;
        lVar4 = lStack_70;
        lVar8 = lVar3;
        goto LAB_102102c64;
      }
    }
    else {
      pcVar15 = *(code **)(lVar14 + 8);
      (*pcVar15)(lVar4,param_3);
      (*pcVar15)(uVar7,param_3);
    }
  }
  else {
    (*pcVar15)(plVar12,lVar10,lVar3);
    uVar9 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar14 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,param_3,uVar9,"offset element associatedWith ",0);
    iVar6 = *(int *)(lVar14 + 0x30);
    lVar4 = (long)plVar12 + (long)iVar6;
    iVar2 = *(int *)(lVar14 + 0x40);
    plVar11 = (long *)((long)plVar12 + (long)iVar2);
    lVar13 = *plVar11;
    uStack_88 = CONCAT44(uStack_88._4_4_,(uint)*(byte *)(plVar11 + 1));
    plVar11 = plVar1;
    func_0x000107c614c4(plVar1,lVar3);
    lVar14 = lStack_68;
    uVar7 = uStack_98;
    if ((int)plVar11 == 1) goto LAB_102102b44;
    lStack_78 = *plVar12;
    lVar8 = *plVar1;
    plVar11 = (long *)((long)plVar1 + (long)iVar2);
    lStack_b0 = *plVar11;
    lStack_a8 = lVar13;
    lStack_90 = CONCAT44(lStack_90._4_4_,(uint)*(byte *)(plVar11 + 1));
    pcVar15 = *(code **)(lStack_68 + 0x20);
    (*pcVar15)(uStack_98,lVar4,param_3);
    lVar4 = lStack_a0;
    (*pcVar15)(lStack_a0,(long)plVar1 + (long)iVar6,param_3);
    if (lStack_78 == lVar8) {
      uVar5 = uVar7;
      func_0x000107c5fab8(uVar7,lVar4,param_3,uStack_80);
      pcVar15 = *(code **)(lVar14 + 8);
      (*pcVar15)(lVar4,param_3);
      (*pcVar15)(uVar7,param_3);
      if ((uVar5 & 1) != 0) {
        iVar6 = (int)lStack_90;
        if ((int)uStack_88 != 1) goto LAB_102102ca4;
        if ((int)lStack_90 != 1) goto LAB_102102c18;
LAB_102102cb4:
        uVar9 = 1;
        lVar4 = lStack_70;
        lVar8 = lVar3;
        goto LAB_102102c64;
      }
    }
    else {
      pcVar15 = *(code **)(lVar14 + 8);
      (*pcVar15)(lVar4,param_3);
      (*pcVar15)(uVar7,param_3);
    }
  }
  uVar9 = 0;
  lVar4 = lStack_70;
  lVar8 = lVar3;
LAB_102102c64:
  (**(code **)(lVar4 + 8))(lVar10,lVar8);
  return uVar9;
}



/* Entry: 102102cbc; end: 102102cc7;  */

undefined8 FUN_102102cbc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uStack_80 = *(undefined8 *)(param_4 + -8);
  lVar6 = *(long *)(param_3 + 0x10);
  lStack_68 = *(long *)(lVar6 + -8);
  lVar4 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  lVar9 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = lVar9 - extraout_x12;
  uStack_88 = uVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = uVar8 - extraout_x12_00;
  lStack_a0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = lVar9 - extraout_x12_01;
  lVar3 = 0;
  uStack_98 = uVar8;
  func_0x0001021051c4(0,lVar4);
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  plVar12 = (long *)(uVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar13 = (long *)((long)plVar12 - extraout_x12_02);
  lVar9 = 0;
  func_0x000107c61510(0,lVar3,lVar3,0,0);
  lStack_78 = *(long *)(lVar9 + -8);
  lVar4 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_78 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = (long)plVar13 - extraout_x8_01;
  plVar1 = (long *)(lVar11 + *(int *)(lVar4 + 0x30));
  pcVar16 = *(code **)(lVar15 + 0x10);
  lStack_70 = lVar15;
  (*pcVar16)(lVar11,param_1,lVar3);
  (*pcVar16)(plVar1,param_2,lVar3);
  lVar4 = lVar11;
  func_0x000107c614c4(lVar11,lVar3);
  if ((int)lVar4 == 1) {
    (*pcVar16)(plVar12,lVar11,lVar3);
    uVar10 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar15 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar6,uVar10,"offset element associatedWith ",0);
    iVar7 = *(int *)(lVar15 + 0x30);
    lVar4 = (long)plVar12 + (long)iVar7;
    iVar2 = *(int *)(lVar15 + 0x40);
    plVar13 = (long *)((long)plVar12 + (long)iVar2);
    lVar14 = *plVar13;
    uStack_98 = CONCAT44(uStack_98._4_4_,(uint)*(byte *)(plVar13 + 1));
    plVar13 = plVar1;
    func_0x000107c614c4(plVar1,lVar3);
    lVar15 = lStack_68;
    uVar8 = uStack_88;
    if ((int)plVar13 != 1) {
LAB_102102b44:
      (**(code **)(lStack_68 + 8))(lVar4,lVar6);
      uVar10 = 0;
      lVar4 = lStack_78;
      goto LAB_102102c64;
    }
    lStack_78 = *plVar12;
    lVar9 = *plVar1;
    plVar12 = (long *)((long)plVar1 + (long)iVar2);
    lStack_b0 = *plVar12;
    lStack_a8 = lVar14;
    lStack_a0 = CONCAT44(lStack_a0._4_4_,(uint)*(byte *)(plVar12 + 1));
    pcVar16 = *(code **)(lStack_68 + 0x20);
    (*pcVar16)(uStack_88,lVar4,lVar6);
    lVar4 = lStack_90;
    (*pcVar16)(lStack_90,(long)plVar1 + (long)iVar7,lVar6);
    if (lStack_78 == lVar9) {
      uVar5 = uVar8;
      func_0x000107c5fab8(uVar8,lVar4,lVar6,uStack_80);
      pcVar16 = *(code **)(lVar15 + 8);
      (*pcVar16)(lVar4,lVar6);
      (*pcVar16)(uVar8,lVar6);
      if ((uVar5 & 1) != 0) {
        iVar7 = (int)lStack_a0;
        if ((int)uStack_98 == 1) {
          if ((int)lStack_a0 == 1) goto LAB_102102cb4;
        }
        else {
LAB_102102ca4:
          if (iVar7 != 1 && lStack_a8 == lStack_b0) goto LAB_102102cb4;
        }
LAB_102102c18:
        uVar10 = 0;
        lVar4 = lStack_70;
        lVar9 = lVar3;
        goto LAB_102102c64;
      }
    }
    else {
      pcVar16 = *(code **)(lVar15 + 8);
      (*pcVar16)(lVar4,lVar6);
      (*pcVar16)(uVar8,lVar6);
    }
  }
  else {
    (*pcVar16)(plVar13,lVar11,lVar3);
    uVar10 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar15 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar6,uVar10,"offset element associatedWith ",0);
    iVar7 = *(int *)(lVar15 + 0x30);
    lVar4 = (long)plVar13 + (long)iVar7;
    iVar2 = *(int *)(lVar15 + 0x40);
    plVar12 = (long *)((long)plVar13 + (long)iVar2);
    lVar14 = *plVar12;
    uStack_88 = CONCAT44(uStack_88._4_4_,(uint)*(byte *)(plVar12 + 1));
    plVar12 = plVar1;
    func_0x000107c614c4(plVar1,lVar3);
    lVar15 = lStack_68;
    uVar8 = uStack_98;
    if ((int)plVar12 == 1) goto LAB_102102b44;
    lStack_78 = *plVar13;
    lVar9 = *plVar1;
    plVar12 = (long *)((long)plVar1 + (long)iVar2);
    lStack_b0 = *plVar12;
    lStack_a8 = lVar14;
    lStack_90 = CONCAT44(lStack_90._4_4_,(uint)*(byte *)(plVar12 + 1));
    pcVar16 = *(code **)(lStack_68 + 0x20);
    (*pcVar16)(uStack_98,lVar4,lVar6);
    lVar4 = lStack_a0;
    (*pcVar16)(lStack_a0,(long)plVar1 + (long)iVar7,lVar6);
    if (lStack_78 == lVar9) {
      uVar5 = uVar8;
      func_0x000107c5fab8(uVar8,lVar4,lVar6,uStack_80);
      pcVar16 = *(code **)(lVar15 + 8);
      (*pcVar16)(lVar4,lVar6);
      (*pcVar16)(uVar8,lVar6);
      if ((uVar5 & 1) != 0) {
        iVar7 = (int)lStack_90;
        if ((int)uStack_88 != 1) goto LAB_102102ca4;
        if ((int)lStack_90 != 1) goto LAB_102102c18;
LAB_102102cb4:
        uVar10 = 1;
        lVar4 = lStack_70;
        lVar9 = lVar3;
        goto LAB_102102c64;
      }
    }
    else {
      pcVar16 = *(code **)(lVar15 + 8);
      (*pcVar16)(lVar4,lVar6);
      (*pcVar16)(uVar8,lVar6);
    }
  }
  uVar10 = 0;
  lVar4 = lStack_70;
  lVar9 = lVar3;
LAB_102102c64:
  (**(code **)(lVar4 + 8))(lVar11,lVar9);
  return uVar10;
}



/* Entry: 102102cc8; end: 102102d6f;  */

uint FUN_102102cc8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  uVar2 = 0;
  func_0x0001021051c4(0,param_5);
  puVar3 = &UNK_10da5d2a0;
  uStack_48 = param_6;
  func_0x000107c61520(&UNK_10da5d2a0,uVar2,&uStack_48);
  func_0x000107c5fc8c(param_1,param_3,uVar2,puVar3);
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fc8c(param_2,param_4,uVar2,puVar3);
    uVar1 = (uint)param_2;
  }
  return uVar1 & 1;
}



/* Entry: 102102d70; end: 102102d8f;  */

uint FUN_102102d70(ulong *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar8;
  undefined8 uStack_48;
  ulong uVar7;
  
  uVar8 = *(undefined8 *)(param_4 + -8);
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = 0;
  func_0x0001021051c4(0,*(undefined8 *)(param_3 + 0x10));
  puVar5 = &UNK_10da5d2a0;
  uStack_48 = uVar8;
  func_0x000107c61520(&UNK_10da5d2a0,uVar4,&uStack_48);
  func_0x000107c5fc8c(uVar6,uVar1,uVar4,puVar5);
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c5fc8c(uVar7,uVar2,uVar4,puVar5);
    uVar3 = (uint)uVar7;
  }
  return uVar3 & 1;
}



/* Entry: 102102d90; end: 102102fb3;  */

void FUN_102102d90(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  code *pcVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = *(long *)(param_2 + 0x10);
  lVar12 = *(long *)(lVar6 + -8);
  uStack_68 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&uStack_70 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = (undefined8 *)(lVar8 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x13_00 + 0x10))(puVar7,extraout_x8,param_2);
  puVar3 = puVar7;
  func_0x000107c614c4(puVar7,param_2);
  uVar11 = *puVar7;
  uVar10 = 0x112d4f4d0;
  func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
  lVar4 = 0;
  func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar6,uVar10,"offset element associatedWith ",0);
  puVar1 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x40));
  uVar10 = *puVar1;
  cVar2 = *(char *)(puVar1 + 1);
  pcVar5 = *(code **)(lVar12 + 0x20);
  lVar4 = (long)puVar7 + (long)*(int *)(lVar4 + 0x30);
  if ((int)puVar3 == 1) {
    (*pcVar5)(lVar9,lVar4,lVar6);
    func_0x000107c60690(1);
    func_0x000107c60690(uVar11);
    func_0x000107c5fa50(param_1,lVar6,uStack_68);
    if (cVar2 == '\x01') {
      func_0x000107c60694(0);
    }
    else {
      func_0x000107c60694(1);
      func_0x000107c60690(uVar10);
    }
  }
  else {
    (*pcVar5)(lVar8,lVar4,lVar6);
    func_0x000107c60690(0);
    func_0x000107c60690(uVar11);
    func_0x000107c5fa50(param_1,lVar6,uStack_68);
    lVar9 = lVar8;
    if (cVar2 == '\x01') {
      func_0x000107c60694(0);
    }
    else {
      func_0x000107c60694(1);
      func_0x000107c60690(uVar10);
    }
  }
  (**(code **)(lVar12 + 8))(lVar9,lVar6);
  return;
}



/* Entry: 102102fb4; end: 102103007;  */

void FUN_102102fb4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  FUN_102102d90(auStack_78,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102103008; end: 102103017;  */

void FUN_102103008(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_2 + -8);
  func_0x000107c6068c(auStack_78,0);
  FUN_102102d90(auStack_78,param_1,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102103018; end: 102103067;  */

void FUN_102103018(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_3 + -8);
  func_0x000107c6068c(auStack_78);
  FUN_102102d90(auStack_78,param_2,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102103068; end: 1021030fb;  */

void FUN_102103068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x0001021051c4(0,param_4);
  puVar2 = &UNK_10da5d308;
  uStack_48 = param_5;
  func_0x000107c61520(&UNK_10da5d308,uVar1,&uStack_48);
  func_0x000107c5fc84(param_1,param_2,uVar1,puVar2);
  func_0x000107c5fc84(param_1,param_3,uVar1,puVar2);
  return;
}



/* Entry: 1021030fc; end: 10210315f;  */

void FUN_1021030fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  FUN_102103068(auStack_78,param_1,param_2,param_3,param_4);
  func_0x000107c606a8();
  return;
}



/* Entry: 102103160; end: 102103187;  */

void FUN_102103160(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar4 = *(undefined8 *)(param_2 + -8);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6068c(auStack_78,0);
  FUN_102103068(auStack_78,uVar1,uVar2,uVar3,uVar4);
  func_0x000107c606a8();
  return;
}


