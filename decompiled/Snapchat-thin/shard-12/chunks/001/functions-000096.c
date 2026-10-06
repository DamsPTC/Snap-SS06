/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d7b874; end: 108d7b963;  */

undefined8 FUN_108d7b874(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  puVar4 = *(undefined8 **)(lVar3 + 0x50);
  uVar2 = *(undefined8 *)(lVar3 + 0x68);
  FUN_108d5ffdc();
  if ((int)uVar2 == 0) {
    puVar4[1] = 0x332074616d726f;
    *puVar4 = 0x66206574694c5153;
    *(char *)(puVar4 + 2) = (char)((uint)*(undefined4 *)(param_1 + 0x34) >> 8);
    *(char *)((long)puVar4 + 0x11) = (char)*(undefined2 *)(param_1 + 0x36);
    *(undefined2 *)((long)puVar4 + 0x12) = 0x101;
    *(char *)((long)puVar4 + 0x14) =
         (char)*(undefined4 *)(param_1 + 0x34) - (char)*(undefined4 *)(param_1 + 0x38);
    *(undefined2 *)((long)puVar4 + 0x15) = 0x2040;
    *(undefined1 *)((long)puVar4 + 0x17) = 0x20;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[6] = 0;
    puVar4[5] = 0;
    puVar4[8] = 0;
    puVar4[7] = 0;
    puVar4[10] = 0;
    puVar4[9] = 0;
    *(undefined8 *)((long)puVar4 + 0x5c) = 0;
    *(undefined8 *)((long)puVar4 + 0x54) = 0;
    FUN_108d7c870(lVar3,0xd);
    uVar2 = 0;
    *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) | 2;
    uVar1 = *(undefined1 *)(param_1 + 0x21);
    *(undefined2 *)((long)puVar4 + 0x34) = 0;
    *(undefined1 *)((long)puVar4 + 0x36) = 0;
    *(undefined1 *)((long)puVar4 + 0x37) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x22);
    *(undefined2 *)(puVar4 + 8) = 0;
    *(undefined1 *)((long)puVar4 + 0x42) = 0;
    *(undefined1 *)((long)puVar4 + 0x43) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(undefined1 *)((long)puVar4 + 0x1f) = 1;
  }
  return uVar2;
}



/* Entry: 108d7b964; end: 108d7b9b7;  */

void FUN_108d7b964(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((*(code **)(lVar2 + 0x2a8) != (code *)0x0) && (-1 < *(int *)(lVar2 + 0x2b8))) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x2b0);
    (**(code **)(lVar2 + 0x2a8))();
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x2b8) + 1;
    }
    *(int *)(lVar2 + 0x2b8) = iVar1;
  }
  return;
}



/* Entry: 108d7b9b8; end: 108d7bb07;  */

undefined8 FUN_108d7b9b8(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x80);
  if ((iVar7 < param_2) && (*(char *)(param_1 + 10) != '\0')) {
    lVar2 = *(long *)(param_1 + 0x78);
    FUN_108d63588(lVar2,(long)param_2 * 0x30);
    if (lVar2 == 0) {
      return 7;
    }
    lVar6 = lVar2 + (long)iVar7 * 0x30;
    param_2 = param_2 - iVar7;
    _bzero(lVar6,(long)param_2 * 0x30);
    *(long *)(param_1 + 0x78) = lVar2;
    puVar5 = (undefined4 *)(lVar6 + 0x18);
    do {
      iVar7 = iVar7 + 1;
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      *puVar5 = uVar1;
      if ((**(long **)(param_1 + 0x50) == 0) ||
         (uVar4 = *(ulong *)(param_1 + 0x60), (long)uVar4 < 1)) {
        uVar4 = (ulong)*(uint *)(param_1 + 0xb8);
      }
      *(ulong *)(puVar5 + -6) = uVar4;
      puVar5[1] = *(undefined4 *)(param_1 + 0x38);
      puVar3 = (undefined8 *)0x200;
      FUN_108d60848();
      if (puVar3 == (undefined8 *)0x0) {
        *(undefined8 *)(puVar5 + -2) = 0;
        return 7;
      }
      puVar3[0x3d] = 0;
      puVar3[0x3c] = 0;
      puVar3[0x3f] = 0;
      puVar3[0x3e] = 0;
      puVar3[0x39] = 0;
      puVar3[0x38] = 0;
      puVar3[0x3b] = 0;
      puVar3[0x3a] = 0;
      puVar3[0x35] = 0;
      puVar3[0x34] = 0;
      puVar3[0x37] = 0;
      puVar3[0x36] = 0;
      puVar3[0x31] = 0;
      puVar3[0x30] = 0;
      puVar3[0x33] = 0;
      puVar3[0x32] = 0;
      puVar3[0x2d] = 0;
      puVar3[0x2c] = 0;
      puVar3[0x2f] = 0;
      puVar3[0x2e] = 0;
      puVar3[0x29] = 0;
      puVar3[0x28] = 0;
      puVar3[0x2b] = 0;
      puVar3[0x2a] = 0;
      puVar3[0x25] = 0;
      puVar3[0x24] = 0;
      puVar3[0x27] = 0;
      puVar3[0x26] = 0;
      puVar3[0x21] = 0;
      puVar3[0x20] = 0;
      puVar3[0x23] = 0;
      puVar3[0x22] = 0;
      puVar3[0x1d] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1f] = 0;
      puVar3[0x1e] = 0;
      puVar3[0x19] = 0;
      puVar3[0x18] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0x17] = 0;
      puVar3[0x16] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      *(undefined4 *)puVar3 = uVar1;
      *(undefined8 **)(puVar5 + -2) = puVar3;
      lVar2 = *(long *)(param_1 + 0x138);
      if (lVar2 != 0) {
        puVar5[2] = *(undefined4 *)(lVar2 + 0x58);
        puVar5[3] = *(undefined4 *)(lVar2 + 0x60);
        puVar5[4] = *(undefined4 *)(lVar2 + 100);
        puVar5[5] = *(undefined4 *)(lVar2 + 0x80);
      }
      *(int *)(param_1 + 0x80) = iVar7;
      puVar5 = puVar5 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}



/* Entry: 108d7bb08; end: 108d7bed3;  */

long * FUN_108d7bb08(long *param_1,int param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long lStack_98;
  uint uStack_50;
  int iStack_4c;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)((long)param_1 + 0x13) != '\0') &&
     (plVar6 = (long *)(ulong)*(uint *)((long)param_1 + 0x2c), plVar7 = param_1,
     *(uint *)((long)param_1 + 0x2c) != 0)) goto LAB_108d7bc30;
  if (param_1[0x27] == 0) {
    if (*(char *)((long)param_1 + 0x14) != '\0') {
      plVar6 = (long *)0x0;
      plVar7 = (long *)0x0;
      goto LAB_108d7bba0;
    }
    do {
      param_2 = 1;
      plVar6 = param_1;
      func_0x000108d7c17c();
      if ((int)plVar6 != 5) {
        if ((int)plVar6 != 0) goto LAB_108d7bbc0;
        if (1 < *(byte *)((long)param_1 + 0x15)) {
LAB_108d7bc18:
          if (*(char *)((long)param_1 + 0x12) == '\0') {
            param_2 = 4;
            plVar6 = param_1;
            func_0x000108d7c17c();
            if ((int)plVar6 == 0) {
              if (*(long *)param_1[10] == 0) {
                plVar7 = (long *)*param_1;
                lVar4 = param_1[0x1b];
                plVar6 = plVar7;
                (*(code *)plVar7[7])(plVar7,lVar4,0,&uStack_48);
                param_2 = (int)lVar4;
                param_3 = (long *)param_1[10];
                if (((int)plVar6 == 0) && ((int)uStack_48 != 0)) {
                  uStack_50 = 0;
                  param_2 = (int)param_1[0x1b];
                  (*(code *)plVar7[5])();
                  if ((int)plVar7 == 0) {
                    if ((uStack_50 & 1) == 0) {
                      plVar7 = (long *)0x0;
                    }
                    else {
                      param_2 = 0xf517890;
                      plVar7 = (long *)0xe;
                      FUN_108d64c00(0xe);
                      plVar6 = (long *)param_1[10];
                      if (*plVar6 != 0) {
                        (**(code **)(*plVar6 + 8))(plVar6);
                        *plVar6 = 0;
                      }
                    }
                  }
                  param_3 = (long *)param_1[10];
                  plVar6 = plVar7;
                }
                if (*param_3 != 0) goto LAB_108d7bd3c;
                if (((char)param_1[1] == '\0') && (*(long *)param_1[9] != 0)) {
                  if (*(char *)((long)param_1 + 0x11) == '\0') {
                    param_2 = 1;
                    (**(code **)(*(long *)param_1[9] + 0x40))();
                  }
                  if (*(char *)((long)param_1 + 0x15) != '\x05') {
                    *(undefined1 *)((long)param_1 + 0x15) = 1;
                  }
                }
LAB_108d7bd6c:
                if ((int)plVar6 == 0) goto LAB_108d7bd94;
              }
              else {
LAB_108d7bd3c:
                plVar6 = param_1;
                FUN_108d7a190();
                if ((int)plVar6 == 0) {
                  param_2 = 1;
                  plVar6 = param_1;
                  func_0x000108d77790();
                  *(undefined1 *)((long)param_1 + 0x14) = 0;
                  goto LAB_108d7bd6c;
                }
              }
              uVar1 = (uint)plVar6 & 0xff;
              if ((uVar1 == 0xd) || (uVar1 == 10)) {
                *(uint *)((long)param_1 + 0x2c) = (uint)plVar6;
                *(undefined1 *)((long)param_1 + 0x14) = 6;
              }
            }
          }
          else {
            plVar6 = (long *)0x308;
          }
          goto LAB_108d7bbc0;
        }
        param_2 = (int)&iStack_4c;
        plVar6 = param_1;
        FUN_108d7bf70();
        if ((int)plVar6 != 0) goto LAB_108d7bbc0;
        if (iStack_4c != 0) goto LAB_108d7bc18;
LAB_108d7bd94:
        if (((char)param_1[2] == '\0') && (*(char *)((long)param_1 + 0x1b) != '\0')) {
          uStack_50 = 0;
          param_2 = (int)&uStack_50;
          plVar6 = param_1;
          func_0x000108d7c200();
          if ((int)plVar6 != 0) goto LAB_108d7bbc0;
          if (uStack_50 == 0) {
            uStack_48 = 0;
            lStack_40 = 0;
          }
          else {
            plVar6 = (long *)param_1[9];
            param_2 = (int)&uStack_48;
            param_3 = (long *)0x10;
            (**(code **)(*plVar6 + 0x10))();
            if (((int)plVar6 != 0) && ((int)plVar6 != 0x20a)) goto LAB_108d7bbc0;
          }
          if (param_1[0x11] != uStack_48 || param_1[0x12] != lStack_40) {
            FUN_108d78cec(param_1);
          }
        }
        plVar6 = param_1;
        func_0x000108d7c294();
        if (param_1[0x27] != 0) goto LAB_108d7bb48;
        plVar7 = (long *)0x0;
        goto LAB_108d7bba0;
      }
      iVar3 = (int)param_1[0x1d];
      (*(code *)param_1[0x1c])();
    } while (iVar3 != 0);
    plVar6 = (long *)0x5;
  }
  else {
LAB_108d7bb48:
    uStack_48 = uStack_48 & 0xffffffff00000000;
    FUN_108d79470();
    plVar7 = (long *)param_1[0x27];
    do {
      param_2 = (int)&uStack_48;
      param_3 = (long *)0x0;
      plVar6 = plVar7;
      FUN_108d7c34c();
    } while ((int)plVar6 == -1);
    plVar7 = plVar6;
    if ((int)plVar6 != 0 || (int)uStack_48 != 0) {
      plVar7 = param_1;
      FUN_108d78cec();
    }
LAB_108d7bba0:
    if ((*(char *)((long)param_1 + 0x14) == '\0') && ((int)plVar6 == 0)) {
      param_2 = (int)param_1 + 0x1c;
      plVar7 = param_1;
      func_0x000108d7c200();
      plVar6 = plVar7;
    }
    if ((int)plVar6 == 0) {
      *(undefined1 *)((long)param_1 + 0x14) = 1;
      goto LAB_108d7bc30;
    }
  }
LAB_108d7bbc0:
  FUN_108d771f8();
  plVar7 = param_1;
LAB_108d7bc30:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  plVar6 = (long *)*plVar7;
  FUN_108d5fcfc();
  if ((int)plVar6 == 0) {
    uVar2 = *(undefined8 *)(lStack_98 + 8);
    lVar4 = *(long *)(lStack_98 + 0x10);
    *(long *)(lVar4 + 0x68) = lStack_98;
    *(long **)(lVar4 + 0x48) = plVar7;
    *(undefined8 *)(lVar4 + 0x50) = uVar2;
    *(int *)(lVar4 + 0x70) = param_2;
    uVar5 = 100;
    if (param_2 != 1) {
      uVar5 = 0;
    }
    *(undefined1 *)(lVar4 + 6) = uVar5;
    *param_3 = lVar4;
  }
  return plVar6;
}



/* Entry: 108d7bed4; end: 108d7bf6f;  */

void FUN_108d7bed4(long param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(long *)(param_1 + 0x138) == 0)) {
    if ((*(char *)(param_1 + 8) != '\0') ||
       ((1 < *(int *)**(undefined8 **)(param_1 + 0x48) &&
        (*(long *)((int *)**(undefined8 **)(param_1 + 0x48) + 0x1a) != 0)))) {
      plVar2 = *(long **)(param_1 + 0x50);
      if (*plVar2 != 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        *plVar2 = 0;
      }
      lVar1 = param_1;
      func_0x000108d7c6a8();
      if ((int)lVar1 == 0) {
        *(undefined1 *)(param_1 + 9) = 5;
        *(undefined1 *)(param_1 + 0x14) = 0;
      }
    }
  }
  else {
    *param_2 = 1;
  }
  return;
}



/* Entry: 108d7bf70; end: 108d7c17b;  */

/* WARNING: Removing unreachable block (ram,0x000108d7bfb4) */

long * FUN_108d7bf70(long *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  plVar3 = (long *)*param_1;
  bVar1 = true;
  iStack_44 = 1;
  lVar5 = *(long *)param_1[10];
  *param_2 = 0;
  if (lVar5 == 0) {
    plVar4 = plVar3;
    (*(code *)plVar3[7])(plVar3,param_1[0x1b],0,&iStack_44);
    bVar1 = iStack_44 != 0;
    if ((int)plVar4 != 0) {
      return plVar4;
    }
  }
  else {
    plVar4 = (long *)0x0;
  }
  if (!bVar1) {
    return plVar4;
  }
  iStack_48 = 0;
  plVar4 = (long *)param_1[9];
  (**(code **)(*plVar4 + 0x48))(plVar4,&iStack_48);
  if ((int)plVar4 != 0 || iStack_48 != 0) {
    return plVar4;
  }
  plVar4 = param_1;
  func_0x000108d7c200(param_1,&iStack_4c);
  if ((int)plVar4 != 0) {
    return plVar4;
  }
  if (lVar5 == 0 && iStack_4c == 0) {
    if (pcRam000000011372e6f8 != (code *)0x0) {
      (*pcRam000000011372e6f8)();
    }
    plVar4 = param_1;
    func_0x000108d7c17c(param_1,2);
    if (((int)plVar4 == 0) &&
       ((*(code *)plVar3[6])(plVar3,param_1[0x1b],0), (char)param_1[1] == '\0')) {
      lVar5 = *(long *)param_1[9];
      if (lVar5 != 0) {
        if (*(char *)((long)param_1 + 0x11) == '\0') {
          (**(code **)(lVar5 + 0x40))((long *)param_1[9],1);
        }
        if (*(char *)((long)param_1 + 0x15) != '\x05') {
          *(undefined1 *)((long)param_1 + 0x15) = 1;
        }
      }
    }
    if (pcRam000000011372e700 != (code *)0x0) {
      (*pcRam000000011372e700)();
    }
    return (long *)0x0;
  }
  if (lVar5 == 0) {
    uStack_50 = 0x801;
    (*(code *)plVar3[5])(plVar3,param_1[0x1b],param_1[10],0x801,&uStack_50);
    if ((int)plVar3 == 0xe) {
      plVar3 = (long *)0x0;
      uVar2 = 1;
      goto LAB_108d7c08c;
    }
    if ((int)plVar3 != 0) {
      return plVar3;
    }
  }
  uStack_50 = uStack_50 & 0xffffff00;
  plVar3 = (long *)param_1[10];
  (**(code **)(*plVar3 + 0x10))(plVar3,&uStack_50,1,0);
  uVar2 = 0;
  if ((uint)plVar3 != 0x20a) {
    uVar2 = (uint)plVar3;
  }
  plVar3 = (long *)(ulong)uVar2;
  if (lVar5 == 0) {
    plVar4 = (long *)param_1[10];
    if (*plVar4 != 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      *plVar4 = 0;
    }
  }
  uVar2 = (uint)((char)uStack_50 != '\0');
LAB_108d7c08c:
  *param_2 = uVar2;
  return plVar3;
}



/* Entry: 108d7c17c; end: 108d7c34b;  */

long * FUN_108d7c17c(long param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x15);
  uVar3 = (uint)param_2;
  if (bVar1 != 5 && (uVar3 < bVar1 || uVar3 == bVar1)) {
    return (long *)0x0;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    plVar2 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
    if ((int)plVar2 != 0) {
      return plVar2;
    }
    bVar1 = *(byte *)(param_1 + 0x15);
  }
  if ((uVar3 == 4) || (bVar1 != 5)) {
    *(char *)(param_1 + 0x15) = (char)param_2;
  }
  return (long *)0x0;
}



/* Entry: 108d7c34c; end: 108d7c80b;  */

long * FUN_108d7c34c(long *param_1,undefined8 param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  
  if (5 < (int)param_4) {
    if (100 < param_4) {
      return (long *)0xf;
    }
    iVar7 = param_4 - 9;
    iVar10 = iVar7 * iVar7 * 0x27;
    if (param_4 < 9 || iVar7 == 0) {
      iVar10 = 1;
    }
    (**(code **)(*param_1 + 0x70))(*param_1,iVar10);
  }
  if (param_3 == 0) {
    plVar8 = param_1;
    FUN_108d7ad1c(param_1,param_2);
    if ((int)plVar8 != 0) {
      if ((int)plVar8 != 5) {
        return plVar8;
      }
      if (*(long *)param_1[6] == 0) {
        return (long *)0xffffffff;
      }
      if (*(char *)((long)param_1 + 0x3f) != '\0') {
        return (long *)0xffffffff;
      }
      plVar8 = (long *)param_1[1];
      (**(code **)(*plVar8 + 0x70))(plVar8,2,1,6);
      uVar3 = (uint)plVar8;
      if (uVar3 != 0) {
        uVar2 = 0x105;
        if (uVar3 != 5) {
          uVar2 = uVar3;
        }
        return (long *)(ulong)uVar2;
      }
      if (*(char *)((long)param_1 + 0x3f) != '\0') {
        return (long *)0xffffffff;
      }
      plVar8 = (long *)param_1[1];
      pcVar6 = *(code **)(*plVar8 + 0x70);
      iVar10 = 2;
      goto LAB_108d7c4b0;
    }
    piVar9 = (int *)(*(long *)param_1[6] + 0x60);
    if (*piVar9 == (int)param_1[0xb]) {
      cVar1 = *(char *)((long)param_1 + 0x3f);
      if (cVar1 == '\0') {
        plVar8 = (long *)param_1[1];
        (**(code **)(*plVar8 + 0x70))(plVar8,3,1,6);
        cVar1 = *(char *)((long)param_1 + 0x3f);
      }
      else {
        plVar8 = (long *)0x0;
      }
      if (cVar1 != '\x02') {
        (**(code **)(*(long *)param_1[1] + 0x78))();
      }
      if ((int)plVar8 != 5) {
        if ((int)plVar8 != 0) {
          return plVar8;
        }
        uVar4 = *(undefined8 *)param_1[6];
        _memcmp(uVar4,param_1 + 9,0x30);
        if ((int)uVar4 == 0) {
          *(undefined2 *)((long)param_1 + 0x3c) = 0;
          return (long *)0x0;
        }
        if (*(char *)((long)param_1 + 0x3f) != '\0') {
          return (long *)0xffffffff;
        }
        plVar8 = (long *)param_1[1];
        pcVar6 = *(code **)(*plVar8 + 0x70);
        iVar10 = 3;
        goto LAB_108d7c4b0;
      }
    }
    else {
      plVar8 = (long *)0x0;
    }
  }
  else {
    plVar8 = (long *)0x0;
    piVar9 = (int *)(*(long *)param_1[6] + 0x60);
  }
  iVar7 = (int)plVar8;
  lVar5 = 0;
  iVar10 = 0;
  uVar3 = 0;
  do {
    uVar2 = piVar9[lVar5 + 2];
    if ((uVar3 <= uVar2) && (uVar2 <= *(uint *)(param_1 + 0xb))) {
      iVar10 = (int)lVar5 + 1;
      uVar3 = uVar2;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  if ((*(byte *)((long)param_1 + 0x42) >> 1 & 1) == 0) {
    if (uVar3 < *(uint *)(param_1 + 0xb) || iVar10 == 0) {
      puVar11 = (uint *)(piVar9 + 2);
      iVar7 = 4;
      do {
        if (*(char *)((long)param_1 + 0x3f) != '\0') {
LAB_108d7c56c:
          uVar3 = *(uint *)(param_1 + 0xb);
          *puVar11 = uVar3;
          iVar10 = iVar7 + -3;
          if (*(char *)((long)param_1 + 0x3f) == '\0') {
            (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],iVar7,1,9);
          }
          goto LAB_108d7c454;
        }
        plVar8 = (long *)param_1[1];
        (**(code **)(*plVar8 + 0x70))(plVar8,iVar7,1,10);
        if ((int)plVar8 != 5) {
          if ((int)plVar8 != 0) {
            return plVar8;
          }
          goto LAB_108d7c56c;
        }
        iVar7 = iVar7 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar7 != 8);
      iVar7 = 5;
      goto LAB_108d7c450;
    }
  }
  else {
LAB_108d7c450:
    if (iVar10 == 0) {
      uVar3 = 0x208;
      if (iVar7 == 5) {
        uVar3 = 0xffffffff;
      }
      return (long *)(ulong)uVar3;
    }
  }
LAB_108d7c454:
  cVar1 = *(char *)((long)param_1 + 0x3f);
  if (cVar1 == '\0') {
    plVar8 = (long *)param_1[1];
    (**(code **)(*plVar8 + 0x70))(plVar8,iVar10 + 3,1,6);
    uVar2 = (uint)plVar8;
    if (uVar2 != 0) {
      if (uVar2 == 5) {
        uVar2 = 0xffffffff;
      }
      return (long *)(ulong)uVar2;
    }
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  if (cVar1 != '\x02') {
    (**(code **)(*(long *)param_1[1] + 0x78))();
  }
  if (piVar9[(long)iVar10 + 1] == uVar3) {
    uVar4 = *(undefined8 *)param_1[6];
    _memcmp(uVar4,param_1 + 9,0x30);
    if ((int)uVar4 == 0) {
      *(short *)((long)param_1 + 0x3c) = (short)iVar10;
      return (long *)0x0;
    }
  }
  if (*(char *)((long)param_1 + 0x3f) != '\0') {
    return (long *)0xffffffff;
  }
  plVar8 = (long *)param_1[1];
  pcVar6 = *(code **)(*plVar8 + 0x70);
  iVar10 = iVar10 + 3;
LAB_108d7c4b0:
  (*pcVar6)(plVar8,iVar10,1,5);
  return (long *)0xffffffff;
}



/* Entry: 108d7c80c; end: 108d7c86f;  */

long FUN_108d7c80c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_108d7c17c(param_1,4);
  if ((int)lVar1 != 0) {
    lVar2 = **(long **)(param_1 + 0x48);
    if (lVar2 != 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        (**(code **)(lVar2 + 0x40))(*(long **)(param_1 + 0x48),1);
      }
      if (*(char *)(param_1 + 0x15) != '\x05') {
        *(undefined1 *)(param_1 + 0x15) = 1;
      }
    }
  }
  return lVar1;
}



/* Entry: 108d7c870; end: 108d7c93b;  */

void FUN_108d7c870(undefined2 *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  
  lVar3 = *(long *)(param_1 + 0x24);
  lVar4 = *(long *)(param_1 + 0x28);
  bVar5 = *(byte *)(param_1 + 3);
  if ((*(ushort *)(lVar3 + 0x28) >> 2 & 1) != 0) {
    _bzero(lVar4 + (ulong)bVar5,*(int *)(lVar3 + 0x38) - (uint)bVar5);
  }
  puVar2 = (undefined1 *)(lVar4 + (ulong)bVar5);
  *puVar2 = (char)param_2;
  iVar7 = 0xc;
  if ((param_2 & 8) != 0) {
    iVar7 = 8;
  }
  uVar1 = (uint)bVar5 + iVar7;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[7] = 0;
  puVar2[5] = (char)((uint)*(undefined4 *)(lVar3 + 0x38) >> 8);
  puVar2[6] = (char)*(undefined4 *)(lVar3 + 0x38);
  sVar6 = (short)uVar1;
  param_1[8] = (short)*(undefined4 *)(lVar3 + 0x38) - sVar6;
  FUN_108d7c93c(param_1,param_2);
  param_1[7] = sVar6;
  *(ulong *)(param_1 + 0x2c) = lVar4 + (ulong)*(uint *)(lVar3 + 0x38);
  *(ulong *)(param_1 + 0x30) = lVar4 + (ulong)uVar1;
  param_1[10] = *(short *)(lVar3 + 0x34) + -1;
  param_1[9] = 0;
  *param_1 = 1;
  return;
}



/* Entry: 108d7c93c; end: 108d7ca07;  */

undefined8 FUN_108d7c93c(long param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  cVar2 = (char)(param_2 >> 3);
  *(char *)(param_1 + 5) = cVar2;
  *(char *)(param_1 + 7) = cVar2 * -4 + '\x04';
  lVar4 = *(long *)(param_1 + 0x48);
  uVar1 = (uint)param_2 & 0xf7;
  if (uVar1 == 2) {
    bVar3 = false;
    *(undefined2 *)(param_1 + 2) = 0;
    lVar5 = 0x2c;
    lVar6 = 0x2a;
  }
  else {
    if (uVar1 != 5) {
      FUN_108d64c00(0xb,&UNK_10f51799f);
      return 0xb;
    }
    *(undefined1 *)(param_1 + 2) = 1;
    *(char *)(param_1 + 3) = cVar2;
    bVar3 = (uint)param_2 < 8;
    lVar5 = 0x30;
    lVar6 = 0x2e;
  }
  *(bool *)(param_1 + 4) = bVar3;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(lVar4 + lVar6);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(lVar4 + lVar5);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(lVar4 + 0x25);
  return 0;
}



/* Entry: 108d7ca08; end: 108d7ca37;  */

long FUN_108d7ca08(long param_1,int param_2,long param_3)

{
  long lVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if ((param_1 != param_3) && ((param_2 == 0 || (*(int *)(param_1 + 0x60) == param_2)))) break;
    param_1 = *(long *)(param_1 + 0x10);
  }
  do {
    if ((param_1 != param_3) && ((param_2 == 0 || (*(int *)(param_1 + 0x60) == param_2)))) {
      if (*(byte *)(param_1 + 0x6d) - 1 < 2) {
        lVar1 = param_1;
        func_0x000108d7cd20();
        if ((int)lVar1 != 0) {
          return lVar1;
        }
      }
      else {
        func_0x000108d7cde8();
      }
    }
    param_1 = *(long *)(param_1 + 0x10);
  } while (param_1 != 0);
  return 0;
}



/* Entry: 108d7ca38; end: 108d7cb6f;  */

long FUN_108d7ca38(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  short sVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x11) != '\0') &&
       (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0'))
    {
      FUN_108d7f528(param_1);
    }
    for (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x10)) {
      if ((param_3 == 0) || ((*(byte *)(lVar3 + 0x6c) & 1) != 0)) {
        func_0x000108d5e198(*(undefined8 *)(lVar3 + 0x58));
        *(undefined8 *)(lVar3 + 0x58) = 0;
        *(undefined1 *)(lVar3 + 0x6d) = 4;
        *(undefined4 *)(lVar3 + 0x68) = param_2;
      }
      else if ((*(byte *)(lVar3 + 0x6d) - 1 < 2) &&
              (lVar5 = lVar3, func_0x000108d7cd20(), (int)lVar5 != 0)) {
        FUN_108d7ca38(param_1,lVar5,0);
        goto LAB_108d7cb14;
      }
      sVar2 = *(short *)(lVar3 + 0x70);
      if (-1 < sVar2) {
        lVar5 = -1;
        plVar4 = (long *)(lVar3 + 0xa0);
        do {
          if (*plVar4 != 0) {
            func_0x000108d787d8(*(undefined8 *)(*plVar4 + 0x68));
            sVar2 = *(short *)(lVar3 + 0x70);
          }
          *plVar4 = 0;
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar5 < sVar2);
      }
    }
    lVar5 = 0;
LAB_108d7cb14:
    if ((*(char *)(param_1 + 0x11) != '\0') &&
       (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
      FUN_108d7f5fc(param_1);
    }
  }
  return lVar5;
}



/* Entry: 108d7cb70; end: 108d7ce47;  */

void FUN_108d7cb70(long *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ushort uVar10;
  long lVar11;
  
  lVar8 = *param_1;
  lVar11 = param_1[1];
  *(undefined1 *)(lVar11 + 0x23) = 0;
  if ((char)param_1[2] != '\0') {
    if (1 < *(int *)(lVar8 + 0xa8)) {
      if (*(long **)(lVar11 + 0x80) == param_1) {
        *(undefined8 *)(lVar11 + 0x80) = 0;
        *(ushort *)(lVar11 + 0x28) = *(ushort *)(lVar11 + 0x28) & 0xff9f;
        for (lVar8 = *(long *)(lVar11 + 0x78); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x10)) {
          *(undefined1 *)(lVar8 + 0xc) = 1;
        }
      }
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
    puVar3 = (undefined8 *)(lVar11 + 0x78);
    puVar4 = *(undefined8 **)(lVar11 + 0x78);
joined_r0x000108d7cbe8:
    if (puVar4 != (undefined8 *)0x0) {
      puVar9 = puVar4 + 2;
      if ((long *)*puVar4 == param_1) goto LAB_108d7cc04;
      goto LAB_108d7cc1c;
    }
    if (*(long **)(lVar11 + 0x80) == param_1) {
      *(undefined8 *)(lVar11 + 0x80) = 0;
      iVar7 = *(int *)(lVar11 + 0x3c);
      uVar10 = 0xff9f;
LAB_108d7cc54:
      *(ushort *)(lVar11 + 0x28) = *(ushort *)(lVar11 + 0x28) & uVar10;
    }
    else {
      iVar7 = *(int *)(lVar11 + 0x3c);
      if (iVar7 == 2) {
        uVar10 = 0xffbf;
        goto LAB_108d7cc54;
      }
    }
    *(int *)(lVar11 + 0x3c) = iVar7 + -1;
    if (iVar7 + -1 == 0) {
      *(undefined1 *)(lVar11 + 0x24) = 0;
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  if ((*(char *)(lVar11 + 0x24) != '\0') || (lVar8 = *(long *)(lVar11 + 0x18), lVar8 == 0)) {
    return;
  }
  *(undefined8 *)(lVar11 + 0x18) = 0;
  lVar8 = *(long *)(lVar8 + 0x68);
  lVar11 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar8 + 0x2c) >> 6 & 1) == 0) {
    FUN_108d78844();
    iVar7 = *(int *)(lVar11 + 0x98);
  }
  else {
    iVar7 = *(int *)(lVar11 + 0x98) + -1;
    *(int *)(lVar11 + 0x98) = iVar7;
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar11 + 0xa8);
    *(long *)(lVar11 + 0xa8) = lVar8;
  }
  if ((iVar7 != 0) || (*(int *)(*(long *)(lVar11 + 0x130) + 0x18) != 0)) {
    return;
  }
  cVar2 = *(char *)(lVar11 + 0x14);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      if (*(char *)(lVar11 + 8) == '\0') {
        FUN_108d76e44(lVar11,0,0);
      }
    }
    else if (cVar2 != '\x06') {
      if (pcRam000000011372e6f8 != (code *)0x0) {
        (*pcRam000000011372e6f8)();
      }
      func_0x000108d76d70(lVar11);
      if (pcRam000000011372e700 != (code *)0x0) {
        (*pcRam000000011372e700)();
      }
    }
  }
  FUN_108d77c44(*(undefined8 *)(lVar11 + 0x40));
  *(undefined8 *)(lVar11 + 0x40) = 0;
  FUN_108d793c8(lVar11);
  if (*(long *)(lVar11 + 0x138) == 0) {
    if (*(char *)(lVar11 + 8) != '\0') goto LAB_108d77238;
    plVar6 = *(long **)(lVar11 + 0x48);
    if (((*plVar6 == 0) || ((**(code **)(*plVar6 + 0x60))(), ((uint)plVar6 >> 0xb & 1) == 0)) ||
       ((*(byte *)(lVar11 + 9) & 5) != 1)) {
      plVar6 = *(long **)(lVar11 + 0x50);
      if (*plVar6 != 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
        *plVar6 = 0;
      }
    }
    plVar6 = *(long **)(lVar11 + 0x48);
    if (*plVar6 != 0) {
      if (*(char *)(lVar11 + 0x11) == '\0') {
        (**(code **)(*plVar6 + 0x40))(plVar6,0);
        bVar5 = (int)plVar6 == 0;
      }
      else {
        bVar5 = true;
      }
      if (*(char *)(lVar11 + 0x15) != '\x05') {
        *(undefined1 *)(lVar11 + 0x15) = 0;
      }
      if ((!bVar5) && (*(char *)(lVar11 + 0x14) == '\x06')) {
        *(undefined1 *)(lVar11 + 0x15) = 5;
      }
    }
    *(undefined1 *)(lVar11 + 0x16) = 0;
  }
  else {
    FUN_108d79470();
  }
  *(undefined1 *)(lVar11 + 0x14) = 0;
LAB_108d77238:
  if (*(int *)(lVar11 + 0x2c) != 0) {
    FUN_108d78cec(lVar11);
    *(undefined1 *)(lVar11 + 0x16) = *(undefined1 *)(lVar11 + 0x10);
    *(undefined1 *)(lVar11 + 0x14) = 0;
    *(undefined4 *)(lVar11 + 0x2c) = 0;
  }
  *(undefined1 *)(lVar11 + 0x17) = 0;
  *(undefined8 *)(lVar11 + 0x60) = 0;
  *(undefined8 *)(lVar11 + 0x68) = 0;
  return;
LAB_108d7cc04:
  puVar9 = (undefined8 *)puVar4[2];
  *puVar3 = puVar9;
  piVar1 = (int *)(puVar4 + 1);
  puVar4 = puVar9;
  if (*piVar1 != 1) {
    func_0x000108d5e198();
    puVar9 = puVar3;
LAB_108d7cc1c:
    puVar3 = puVar9;
    puVar4 = (undefined8 *)*puVar9;
  }
  goto joined_r0x000108d7cbe8;
}



/* Entry: 108d7ce48; end: 108d7cec3;  */

void FUN_108d7ce48(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  
  if (*(short *)(param_1 + 0x48) == 0) {
    lVar2 = *(long *)(param_1 + (long)*(short *)(param_1 + 0x70) * 8 + 0xa0);
    puVar1 = (undefined1 *)
             (*(long *)(lVar2 + 0x60) +
             (ulong)*(ushort *)(param_1 + (long)*(short *)(param_1 + 0x70) * 2 + 0x72) * 2);
    FUN_108d7cec4(lVar2,*(long *)(lVar2 + 0x50) +
                        (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(lVar2 + 0x14)),
                  param_1 + 0x30);
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 2;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  return;
}



/* Entry: 108d7cec4; end: 108d7d01b;  */

void FUN_108d7cec4(long param_1,char *param_2,ulong *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  uint uStack_44;
  
  if (*(char *)(param_1 + 3) == '\0') {
    if (*(char *)(param_1 + 4) != '\0') {
      param_2 = param_2 + 4;
      FUN_108d7d0a0(param_2,param_3);
      *(ushort *)(param_3 + 3) = (short)param_2 + 4U & 0xff;
      param_3[1] = 0;
      param_3[2] = 0;
      return;
    }
    pcVar6 = param_2 + *(byte *)(param_1 + 7);
    if (*pcVar6 < 0) {
      pcVar7 = pcVar6;
      FUN_108d7d01c(pcVar6,&uStack_44);
      uVar8 = (ulong)pcVar7 & 0xffffffff;
    }
    else {
      uVar8 = 1;
      uStack_44 = (int)*pcVar6;
    }
    pcVar6 = pcVar6 + uVar8;
    *param_3 = (ulong)uStack_44;
  }
  else {
    if (*param_2 < '\0') {
      pcVar6 = param_2;
      FUN_108d7d01c(param_2,&uStack_44);
      uVar8 = (ulong)pcVar6 & 0xffffffff;
    }
    else {
      uVar8 = 1;
      uStack_44 = (int)*param_2;
    }
    pcVar6 = param_2 + uVar8;
    pcVar7 = pcVar6;
    FUN_108d7d0a0(pcVar6,param_3);
    pcVar6 = pcVar6 + ((ulong)pcVar7 & 0xffffffff);
  }
  *(uint *)(param_3 + 2) = uStack_44;
  param_3[1] = (ulong)pcVar6;
  if (*(ushort *)(param_1 + 10) < uStack_44) {
    uVar2 = *(ushort *)(param_1 + 0xc);
    uStack_44 = uStack_44 - uVar2;
    uVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x38) - 4;
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uStack_44 / uVar4;
    }
    uVar4 = (uStack_44 - uVar5 * uVar4) + (uint)uVar2;
    uVar5 = (uint)uVar2;
    if ((int)uVar4 <= (int)(uint)*(ushort *)(param_1 + 10)) {
      uVar5 = uVar4;
    }
    *(short *)((long)param_3 + 0x14) = (short)uVar5;
    sVar3 = ((short)pcVar6 + (short)uVar5) - (short)param_2;
    *(short *)((long)param_3 + 0x16) = sVar3;
    *(short *)(param_3 + 3) = sVar3 + 4;
  }
  else {
    uVar4 = uStack_44 + ((int)pcVar6 - (int)param_2);
    uVar1 = 4;
    if ((uVar4 & 0xfffc) != 0) {
      uVar1 = (short)uVar4;
    }
    *(undefined2 *)(param_3 + 3) = uVar1;
    *(short *)((long)param_3 + 0x14) = (short)uStack_44;
    *(undefined2 *)((long)param_3 + 0x16) = 0;
  }
  return;
}



/* Entry: 108d7d01c; end: 108d7d09f;  */

void FUN_108d7d01c(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uStack_28;
  
  bVar1 = param_1[1];
  if ((char)bVar1 < '\0') {
    if ((char)param_1[2] < 0) {
      FUN_108d7d0a0(param_1,&uStack_28);
      uVar2 = (uint)uStack_28;
      if (uStack_28 >> 0x20 != 0) {
        uVar2 = 0xffffffff;
      }
      *param_2 = uVar2;
    }
    else {
      *param_2 = (*param_1 & 0x7f) << 0xe | (bVar1 & 0x7f) << 7 | (int)(char)param_1[2];
    }
  }
  else {
    *param_2 = (*param_1 & 0x7f) << 7 | (uint)bVar1;
  }
  return;
}



/* Entry: 108d7d0a0; end: 108d7d213;  */

undefined8 FUN_108d7d0a0(byte *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  bVar5 = *param_1;
  uVar8 = (ulong)bVar5;
  if ((char)bVar5 < '\0') {
    uVar2 = (uint)param_1[1];
    if ((char)param_1[1] < '\0') {
      uVar3 = (int)(char)param_1[2] & 0x7f;
      uVar1 = (uint)bVar5 << 0xe;
      uVar6 = uVar1 & 0x1fffff;
      uVar4 = uVar3 | uVar6;
      if ((char)param_1[2] < 0) {
        uVar2 = ((uint)param_1[3] | uVar2 << 0xe) & 0x1fc07f;
        if ((char)param_1[3] < '\0') {
          bVar5 = param_1[4];
          uVar1 = (uint)bVar5 | (uVar3 | uVar1) << 0xe;
          if ((char)bVar5 < '\0') {
            uVar3 = uVar2 | uVar4 << 7;
            uVar2 = (uint)param_1[5] | uVar2 << 0xe;
            if ((char)param_1[5] < '\0') {
              uVar1 = (uint)param_1[6] | uVar1 << 0xe;
              if ((char)param_1[6] < '\0') {
                uVar1 = uVar1 & 0x1fc07f;
                uVar2 = (uint)param_1[7] | uVar2 << 0xe;
                if ((char)param_1[7] < '\0') {
                  uVar8 = CONCAT44(bVar5 >> 3 & 0xf | uVar3 << 4,
                                   (uint)param_1[8] | uVar1 << 0xf | (uVar2 & 0x1fc07f) << 8);
                  uVar7 = 9;
                }
                else {
                  uVar8 = CONCAT44(uVar3 >> 4,uVar2 & 0xf01fc07f | uVar1 << 7);
                  uVar7 = 8;
                }
              }
              else {
                uVar8 = CONCAT44(uVar3 >> 0xb,uVar1 & 0xf01fc07f | (uVar2 & 0x1fc07f) << 7);
                uVar7 = 7;
              }
            }
            else {
              uVar8 = CONCAT44(uVar3 >> 0x12,uVar2 | (uVar1 & 0x1fc07f) << 7);
              uVar7 = 6;
            }
          }
          else {
            uVar8 = CONCAT44(uVar6 >> 0x12,uVar1 | uVar2 << 7);
            uVar7 = 5;
          }
        }
        else {
          uVar8 = (ulong)(uVar2 | uVar4 << 7);
          uVar7 = 4;
        }
      }
      else {
        uVar8 = (ulong)(uVar4 | (uVar2 & 0x7f) << 7);
        uVar7 = 3;
      }
    }
    else {
      uVar8 = (ulong)((bVar5 & 0x7f) << 7 | uVar2);
      uVar7 = 2;
    }
  }
  else {
    uVar7 = 1;
  }
  *param_2 = uVar8;
  return uVar7;
}



/* Entry: 108d7d214; end: 108d7d54f;  */

long * FUN_108d7d214(long param_1,uint param_2,int param_3,long param_4,uint param_5)

{
  undefined1 *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lStack_70;
  uint uStack_64;
  
  lVar13 = *(long *)(param_1 + (long)*(short *)(param_1 + 0x70) * 8 + 0xa0);
  plVar12 = *(long **)(param_1 + 8);
  if (*(short *)(param_1 + 0x48) == 0) {
    puVar1 = (undefined1 *)
             (*(long *)(lVar13 + 0x60) +
             (ulong)*(ushort *)(param_1 + (long)*(short *)(param_1 + 0x70) * 2 + 0x72) * 2);
    FUN_108d7cec4(lVar13,*(long *)(lVar13 + 0x50) +
                         (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(lVar13 + 0x14)),
                  param_1 + 0x30);
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 2;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  uVar3 = *(ushort *)(param_1 + 0x44);
  if (*(long *)(lVar13 + 0x50) + (ulong)*(uint *)(plVar12 + 7) < lVar10 + (ulong)uVar3)
  goto LAB_108d7d500;
  uVar9 = (uint)uVar3;
  uVar11 = param_2 - uVar9;
  if (param_2 < uVar9) {
    iVar2 = uVar9 - param_2;
    if (param_3 + param_2 <= (uint)uVar3) {
      iVar2 = param_3;
    }
    plVar8 = (long *)(lVar10 + (ulong)param_2);
    FUN_108d7d550(plVar8,param_4,iVar2,param_5 & 1,*(undefined8 *)(lVar13 + 0x68));
    uVar11 = 0;
    param_3 = param_3 - iVar2;
    param_4 = param_4 + iVar2;
    if ((int)plVar8 == 0) goto LAB_108d7d320;
  }
  else {
    plVar8 = (long *)0x0;
LAB_108d7d320:
    if (param_3 != 0) {
      uVar4 = (int)plVar12[7] - 4;
      uVar9 = *(uint *)(lVar10 + (ulong)*(ushort *)(param_1 + 0x44));
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
      uStack_64 = uVar9;
      if ((param_5 == 2) || ((*(byte *)(param_1 + 0x6c) >> 2 & 1) != 0)) {
LAB_108d7d3ac:
        plVar8 = (long *)0x0;
        bVar7 = true;
      }
      else {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = ((((int)plVar12[7] - (uint)*(ushort *)(param_1 + 0x44)) + *(int *)(param_1 + 0x40)
                   ) - 5) / uVar4;
        }
        lVar13 = *(long *)(param_1 + 0x28);
        if ((int)uVar5 <= *(int *)(param_1 + 100)) {
LAB_108d7d38c:
          _bzero();
          *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 4;
          goto LAB_108d7d3ac;
        }
        FUN_108d63588(lVar13,-(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                             (ulong)(uVar5 << 1) << 2);
        if (lVar13 != 0) {
          *(uint *)(param_1 + 100) = uVar5 << 1;
          *(long *)(param_1 + 0x28) = lVar13;
          goto LAB_108d7d38c;
        }
        bVar7 = false;
        plVar8 = (long *)0x7;
      }
      if ((*(byte *)(param_1 + 0x6c) >> 2 & 1) == 0) {
LAB_108d7d3dc:
        lVar13 = 0;
      }
      else {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar11 / uVar4;
        }
        if (*(int *)(*(long *)(param_1 + 0x28) + (ulong)uVar5 * 4) == 0) goto LAB_108d7d3dc;
        lVar13 = (long)(int)uVar5;
        uVar9 = *(uint *)(*(long *)(param_1 + 0x28) + (long)(int)uVar5 * 4);
        uVar11 = uVar11 - uVar5 * uVar4;
        uStack_64 = uVar9;
      }
      bVar6 = false;
      if (uVar9 != 0) {
        bVar6 = bVar7;
      }
      if (bVar6) {
        lVar13 = lVar13 << 2;
        do {
          if ((*(byte *)(param_1 + 0x6c) >> 2 & 1) != 0) {
            *(uint *)(*(long *)(param_1 + 0x28) + lVar13) = uVar9;
          }
          if (uVar11 < uVar4) {
            iVar2 = uVar4 - uVar11;
            if (param_3 + uVar11 <= uVar4) {
              iVar2 = param_3;
            }
            plVar8 = (long *)*plVar12;
            FUN_108d5fcfc(plVar8,uVar9,&lStack_70,(param_5 & 1) << 1 ^ 2);
            lVar10 = lStack_70;
            if ((int)plVar8 == 0) {
              uVar9 = **(uint **)(lStack_70 + 8);
              uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
              uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
              plVar8 = (long *)((long)*(uint **)(lStack_70 + 8) + (ulong)(uVar11 + 4));
              uStack_64 = uVar9;
              FUN_108d7d550(plVar8,param_4,iVar2,param_5 & 1,lStack_70);
              func_0x000108d787d8(lVar10);
              uVar11 = 0;
            }
            param_3 = param_3 - iVar2;
            param_4 = param_4 + iVar2;
          }
          else {
            uVar5 = *(uint *)(*(long *)(param_1 + 0x28) + lVar13 + 4);
            if (uVar5 == 0) {
              plVar8 = plVar12;
              FUN_108d7d5b0(plVar12,uVar9,0,&uStack_64);
              uVar11 = uVar11 - uVar4;
              uVar9 = uStack_64;
            }
            else {
              plVar8 = (long *)0x0;
              uVar11 = uVar11 - uVar4;
              uStack_64 = uVar5;
              uVar9 = uVar5;
            }
          }
        } while ((((int)plVar8 == 0) && (param_3 != 0)) && (lVar13 = lVar13 + 4, uVar9 != 0));
      }
    }
  }
  if ((int)plVar8 != 0) {
    return plVar8;
  }
  if (param_3 == 0) {
    return plVar8;
  }
LAB_108d7d500:
  FUN_108d64c00(0xb,&UNK_10f51799f);
  return (long *)0xb;
}



/* Entry: 108d7d550; end: 108d7d5af;  */

void FUN_108d7d550(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  if ((param_4 == 0) || (FUN_108d5ffdc(), uVar1 = param_1, param_1 = param_2, param_5 == 0)) {
    _memcpy(uVar1,param_1,(long)param_3);
  }
  return;
}



/* Entry: 108d7d5b0; end: 108d7d85b;  */

int FUN_108d7d5b0(long param_1,ulong param_2,long *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  char cStack_4d;
  int iStack_4c;
  long lStack_48;
  
  lStack_48 = 0;
  if (*(char *)(param_1 + 0x21) == '\0') {
LAB_108d7d66c:
    uVar7 = 2;
    if (param_3 != (long *)0x0) {
      uVar7 = 0;
    }
    func_0x000108d7be68(param_1,param_2,&lStack_48,uVar7);
    iVar6 = (int)param_1;
    lVar8 = lStack_48;
    if (iVar6 == 0) {
      uVar3 = (**(uint **)(lStack_48 + 0x50) & 0xff00ff00) >> 8 |
              (**(uint **)(lStack_48 + 0x50) & 0xff00ff) << 8;
      uVar9 = uVar3 >> 0x10 | uVar3 << 0x10;
      goto LAB_108d7d6e8;
    }
  }
  else {
    uVar3 = 0;
    uVar10 = param_2;
    if (*(uint *)(param_1 + 0x34) != 0) {
      uVar3 = uRam0000000113298da4 / *(uint *)(param_1 + 0x34);
    }
    do {
      uVar9 = (uint)uVar10;
      uVar1 = uVar9 + 1;
      if (uVar1 < 2) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(uint *)(param_1 + 0x38) / 5 + 1;
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = (uVar9 - 1) / uVar11;
        }
        uVar5 = 0;
        if (*(uint *)(param_1 + 0x34) != 0) {
          uVar5 = uRam0000000113298da4 / *(uint *)(param_1 + 0x34);
        }
        iVar6 = 2;
        if (uVar4 * uVar11 + 1 == uVar5) {
          iVar6 = 3;
        }
        uVar11 = iVar6 + uVar4 * uVar11;
      }
      uVar10 = (ulong)uVar1;
    } while ((uVar1 == uVar11) || (uVar9 == uVar3));
    uVar9 = uVar9 + 1;
    if (*(uint *)(param_1 + 0x40) < uVar9) goto LAB_108d7d66c;
    lVar8 = param_1;
    func_0x000108d7d730(param_1,uVar9,&cStack_4d,&iStack_4c);
    iVar6 = (int)lVar8;
    if ((iVar6 == 0) && (cStack_4d == '\x04')) {
      if (iStack_4c == (int)param_2) {
        lVar8 = 0;
        iVar6 = 0x65;
        goto LAB_108d7d6e8;
      }
      goto LAB_108d7d66c;
    }
    if (iVar6 == 0) goto LAB_108d7d66c;
    lVar8 = 0;
  }
  uVar9 = 0;
LAB_108d7d6e8:
  *param_4 = uVar9;
  if (param_3 == (long *)0x0) {
    if (lVar8 != 0) {
      func_0x000108d787d8(*(undefined8 *)(lVar8 + 0x68));
    }
  }
  else {
    *param_3 = lVar8;
  }
  iVar2 = 0;
  if (iVar6 != 0x65) {
    iVar2 = iVar6;
  }
  return iVar2;
}



/* Entry: 108d7d85c; end: 108d7d91b;  */

undefined8 FUN_108d7d85c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_38;
  
  puVar2 = (undefined8 *)*param_1;
  if ((*(long *)(puVar2[4] + 0x28) == 0) && (*(char *)((long)param_1 + 0x1f2) == '\0')) {
    uVar1 = *puVar2;
    FUN_108d7d91c(uVar1,0,puVar2,&uStack_38,0,0x21e);
    if ((int)uVar1 == 0) {
      *(undefined8 *)(puVar2[4] + 0x28) = uStack_38;
      FUN_108d70994(uStack_38,*(undefined4 *)(puVar2 + 0xb),0xffffffff,0);
      uVar1 = 0;
      if ((int)uStack_38 == 7) {
        uVar1 = 1;
        *(undefined1 *)((long)puVar2 + 0x51) = 1;
      }
    }
    else {
      func_0x000108d6a85c(param_1,&UNK_10f517a45);
      *(int *)(param_1 + 3) = (int)uVar1;
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108d7d91c; end: 108d7e5ab;  */

long * FUN_108d7d91c(long *param_1,char *param_2,long param_3,undefined8 *param_4,uint param_5,
                    uint param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *puVar13;
  char *pcVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  uint *puVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  long *plVar22;
  ulong uVar23;
  uint uVar24;
  char *pcVar25;
  long *plVar26;
  uint uVar27;
  undefined1 uVar28;
  undefined8 *puVar29;
  undefined1 uStack_124;
  char *pcStack_120;
  char *pcStack_118;
  long *plStack_f8;
  uint uStack_e4;
  ulong uStack_e0;
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
  undefined4 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (char *)0x0) {
LAB_108d7d994:
    uVar24 = 1;
    if (*(char *)(param_3 + 0x50) != '\x02') goto LAB_108d7d9b0;
LAB_108d7d9a4:
    param_5 = param_5 | 2;
    uVar21 = 1;
  }
  else {
    cVar4 = *param_2;
    uVar24 = (uint)(cVar4 == '\0');
    pcVar10 = param_2;
    _strcmp(param_2,":memory:");
    if ((int)pcVar10 == 0) goto LAB_108d7d9a4;
    if (cVar4 == '\0') goto LAB_108d7d994;
    uVar24 = 0;
LAB_108d7d9b0:
    uVar21 = param_6 >> 7 & 1;
    param_5 = param_5 | (param_6 & 0x80) >> 6;
  }
  uVar27 = param_6 & 0xfffffcff | 0x200;
  if (((uVar21 | uVar24) & (param_6 & 0x100) >> 8) == 0) {
    uVar27 = param_6;
  }
  plVar11 = (long *)0x48;
  FUN_108d60848();
  if (plVar11 == (long *)0x0) {
LAB_108d7dc58:
    plVar17 = (long *)0x7;
    goto LAB_108d7e048;
  }
  plStack_f8 = (long *)0x0;
  plVar11[1] = 0;
  *plVar11 = 0;
  plVar11[3] = 0;
  plVar11[2] = 0;
  plVar11[8] = 0;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[7] = 0;
  plVar11[6] = 0;
  *(undefined1 *)(plVar11 + 2) = 0;
  *plVar11 = param_3;
  plVar11[6] = (long)plVar11;
  *(undefined4 *)(plVar11 + 7) = 1;
  if (uVar24 == 0) {
    plStack_f8 = (long *)0x0;
    uVar24 = 0;
    if ((uVar27 & 0x40) == 0) {
      uVar24 = uVar21;
    }
    if ((uVar24 == 0) && ((uVar27 >> 0x11 & 1) != 0)) {
      if (param_2 == (char *)0x0) {
        uVar24 = 1;
      }
      else {
        pcVar10 = param_2;
        _strlen();
        uVar24 = ((uint)pcVar10 & 0x3fffffff) + 1;
      }
      iVar20 = (int)param_1[1] + 1;
      uVar2 = uVar24;
      if ((int)uVar24 < iVar20) {
        uVar2 = (int)param_1[1] + 1;
      }
      puVar13 = (undefined1 *)(ulong)uVar2;
      FUN_108d60848();
      *(undefined1 *)((long)plVar11 + 0x11) = 1;
      if (puVar13 == (undefined1 *)0x0) {
        func_0x000108d5e198();
        goto LAB_108d7dc58;
      }
      if (uVar21 == 0) {
        *puVar13 = 0;
        plVar17 = param_1;
        (*(code *)param_1[8])(param_1,param_2,iVar20,puVar13);
        if ((int)plVar17 != 0) {
          func_0x000108d5e198(puVar13);
          func_0x000108d5e198();
          goto LAB_108d7e048;
        }
      }
      else {
        _memcpy(puVar13,param_2,uVar24);
      }
      if (iRam0000000113297914 == 0) {
        lVar19 = 0;
        plStack_f8 = (long *)0x0;
        bVar8 = true;
        bVar9 = true;
      }
      else {
        plStack_f8 = (long *)0x4;
        (*pcRam0000000113297988)();
        bVar9 = plStack_f8 == (long *)0x0;
        if (plStack_f8 != (long *)0x0) {
          (*pcRam0000000113297998)(plStack_f8);
        }
        if (iRam0000000113297914 == 0) {
          lVar19 = 0;
        }
        else {
          lVar19 = 2;
          (*pcRam0000000113297988)();
          if (lVar19 != 0) {
            (*pcRam0000000113297998)(lVar19);
            bVar8 = false;
            goto LAB_108d7e23c;
          }
        }
        bVar8 = true;
      }
LAB_108d7e23c:
      plVar17 = plRam000000011372e698;
      if (plRam000000011372e698 == (long *)0x0) {
        bVar9 = true;
      }
      else {
        do {
          puVar29 = (undefined8 *)*plVar17;
          puVar15 = puVar13;
          _strcmp(puVar13,puVar29[0x1a]);
          if (((int)puVar15 == 0) && ((long *)*puVar29 == param_1)) {
            uVar24 = *(uint *)(param_3 + 0x28);
            if ((int)uVar24 < 1) goto LAB_108d7e2d4;
            uVar23 = (ulong)uVar24 + 1;
            plVar12 = (long *)(*(long *)(param_3 + 0x20) + (ulong)uVar24 * 0x20 + -0x18);
            goto LAB_108d7e2b4;
          }
          plVar12 = plVar17 + 0xe;
          plVar17 = (long *)*plVar12;
        } while ((long *)*plVar12 != (long *)0x0);
        bVar9 = true;
      }
      goto LAB_108d7e2ec;
    }
  }
LAB_108d7da14:
  plVar12 = (long *)0x90;
  FUN_108d60848();
  if (plVar12 == (long *)0x0) {
    plVar17 = (long *)0x7;
  }
  else {
    plVar12[0xf] = 0;
    plVar12[0xe] = 0;
    plVar12[0x11] = 0;
    plVar12[0x10] = 0;
    plVar12[0xb] = 0;
    plVar12[10] = 0;
    plVar12[0xd] = 0;
    plVar12[0xc] = 0;
    plVar12[7] = 0;
    plVar12[6] = 0;
    plVar12[9] = 0;
    plVar12[8] = 0;
    plVar12[3] = 0;
    plVar12[2] = 0;
    plVar12[5] = 0;
    plVar12[4] = 0;
    plVar12[1] = 0;
    *plVar12 = 0;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x400);
    uVar24 = *(int *)((long)param_1 + 4) + 7U & 0xfffffff8;
    if (*(int *)((long)param_1 + 4) < 0x31) {
      uVar24 = 0x30;
    }
    *plVar12 = 0;
    if ((param_5 >> 1 & 1) == 0) {
      if (param_2 == (char *)0x0) {
        pcStack_120 = (char *)0x0;
        pcStack_118 = (char *)0x0;
        uStack_124 = 0;
        puVar13 = (undefined1 *)0x0;
        uVar23 = 0;
        iVar20 = 0;
        bVar8 = true;
        goto LAB_108d7dd60;
      }
      if (*param_2 == '\0') {
        uStack_124 = 0;
        puVar13 = (undefined1 *)0x0;
        uVar23 = 0;
        pcStack_118 = (char *)0x0;
        iVar20 = 0;
LAB_108d7dd5c:
        bVar8 = false;
        pcStack_120 = param_2;
        goto LAB_108d7dd60;
      }
      lVar19 = (long)(int)param_1[1] + 1;
      puVar13 = (undefined1 *)(lVar19 * 2);
      FUN_108d60848();
      if (puVar13 == (undefined1 *)0x0) {
LAB_108d7dd10:
        param_1 = (long *)0x7;
      }
      else {
        *puVar13 = 0;
        plVar17 = param_1;
        (*(code *)param_1[8])(param_1,param_2,lVar19,puVar13);
        puVar15 = puVar13;
        _strlen();
        pcVar10 = param_2;
        _strlen();
        pcVar10 = param_2 + ((ulong)pcVar10 & 0x3fffffff);
        pcStack_118 = pcVar10 + 1;
        cVar4 = *pcStack_118;
        pcVar25 = pcStack_118;
        while (cVar4 != '\0') {
          pcVar10 = pcVar25;
          _strlen();
          pcVar14 = pcVar25 + ((ulong)pcVar10 & 0x3fffffff) + 1;
          _strlen();
          pcVar10 = pcVar25 + ((ulong)pcVar10 & 0x3fffffff) + 1 + ((ulong)pcVar14 & 0x3fffffff);
          pcVar25 = pcVar10 + 1;
          cVar4 = *pcVar25;
        }
        if ((int)plVar17 == 0) {
          uVar2 = (uint)puVar15 & 0x3fffffff;
          uVar23 = (ulong)uVar2;
          if ((int)(uVar2 + 8) <= (int)param_1[1]) {
            uStack_124 = 0;
            iVar20 = ((int)pcVar10 - (int)pcStack_118) + 2;
            goto LAB_108d7dd5c;
          }
          FUN_108d64c00(0xe,&UNK_10f517890);
          plVar17 = (long *)0xe;
        }
        param_1 = plVar17;
        func_0x000108d5e198(puVar13);
      }
    }
    else {
      if (param_2 == (char *)0x0) {
        puVar13 = (undefined1 *)0x0;
        uVar23 = 0;
      }
      else {
        if (*param_2 == '\0') {
          puVar13 = (undefined1 *)0x0;
          uVar23 = 0;
          pcStack_118 = (char *)0x0;
          iVar20 = 0;
          uStack_124 = 1;
          goto LAB_108d7dd5c;
        }
        puVar13 = (undefined1 *)0x0;
        FUN_108d68d58(0,param_2);
        if (puVar13 == (undefined1 *)0x0) goto LAB_108d7dd10;
        puVar15 = puVar13;
        _strlen();
        uVar23 = (ulong)((uint)puVar15 & 0x3fffffff);
      }
      pcStack_118 = (char *)0x0;
      pcStack_120 = (char *)0x0;
      iVar20 = 0;
      bVar8 = true;
      uStack_124 = 1;
LAB_108d7dd60:
      plVar17 = (long *)(uVar23 * 3 + (long)(int)(uVar24 << 1) + (long)iVar20 +
                         ((long)*(int *)((long)param_1 + 4) + 7U & 0xfffffffffffffff8) + 0x1a9);
      func_0x000108d65d8c();
      if (plVar17 == (long *)0x0) {
        if (puVar13 != (undefined1 *)0x0) {
          func_0x000108d5e198(puVar13);
        }
        param_1 = (long *)0x7;
      }
      else {
        plVar17[0x26] = (long)(plVar17 + 0x29);
        plVar17[9] = (long)(plVar17 + 0x33);
        lVar16 = (long)(plVar17 + 0x33) +
                 ((long)*(int *)((long)param_1 + 4) + 7U & 0xfffffffffffffff8);
        lVar19 = lVar16 + (int)uVar24;
        plVar17[10] = lVar19;
        plVar17[0xb] = lVar16;
        lVar19 = lVar19 + (int)uVar24;
        plVar17[0x1a] = lVar19;
        if (puVar13 != (undefined1 *)0x0) {
          uVar24 = (int)uVar23 + 1;
          plVar17[0x1b] = lVar19 + (int)(iVar20 + uVar24);
          _memcpy(lVar19,puVar13,uVar23);
          if (iVar20 != 0) {
            _memcpy(plVar17[0x1a] + (ulong)uVar24,pcStack_118,(long)iVar20);
          }
          _memcpy(plVar17[0x1b],puVar13,uVar23);
          lVar19 = plVar17[0x1b];
          *(undefined2 *)((undefined8 *)(lVar19 + uVar23) + 1) = 0;
          *(undefined8 *)(lVar19 + uVar23) = 0x6c616e72756f6a2d;
          lVar19 = plVar17[0x1b] + uVar23 + 9;
          plVar17[0x28] = lVar19;
          _memcpy(lVar19,puVar13,uVar23);
          lVar19 = plVar17[0x28];
          *(undefined4 *)(lVar19 + uVar23) = 0x6c61772d;
          *(undefined1 *)((undefined4 *)(lVar19 + uVar23) + 1) = 0;
          func_0x000108d5e198(puVar13);
        }
        *plVar17 = (long)param_1;
        *(uint *)((long)plVar17 + 0xb4) = uVar27;
        if ((bVar8) || (*pcStack_120 == '\0')) {
LAB_108d7df54:
          bVar8 = false;
          *(undefined2 *)((long)plVar17 + 0x14) = 0x401;
          uVar28 = 1;
          *(undefined1 *)((long)plVar17 + 0x11) = 1;
          bVar5 = (byte)uVar27 & 1;
LAB_108d7df6c:
          param_1 = plVar17;
          FUN_108d78ba4(plVar17,&uStack_e0,0xffffffff);
          if ((int)param_1 == 0) {
            param_1 = (long *)plVar17[0x26];
            pcVar1 = FUN_108d7e664;
            if ((param_5 & 2) != 0) {
              pcVar1 = (code *)0x0;
            }
            param_1[5] = 0;
            param_1[4] = 0;
            param_1[7] = 0;
            param_1[6] = 0;
            param_1[1] = 0;
            *param_1 = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            param_1[9] = 0;
            param_1[8] = 0;
            *(undefined4 *)((long)param_1 + 0x24) = 0x78;
            *(byte *)(param_1 + 5) = (byte)((param_5 & 2) >> 1) ^ 1;
            *(undefined1 *)((long)param_1 + 0x29) = 2;
            param_1[6] = (long)pcVar1;
            param_1[7] = (long)plVar17;
            *(undefined8 *)((long)param_1 + 0x1c) = 0x100000064;
            FUN_108d78d1c(param_1,uStack_e0 & 0xffffffff);
            if ((int)param_1 == 0) {
              *(byte *)((long)plVar17 + 10) = (byte)(param_5 & 1) ^ 1;
              *(undefined4 *)(plVar17 + 0x18) = 0x3fffffff;
              *(undefined1 *)(plVar17 + 2) = uVar28;
              *(undefined1 *)(plVar17 + 1) = uVar28;
              *(undefined1 *)((long)plVar17 + 0x16) = uVar28;
              *(undefined1 *)((long)plVar17 + 0x13) = uStack_124;
              *(byte *)((long)plVar17 + 0x12) = bVar5;
              *(undefined1 *)((long)plVar17 + 0xb) = uVar28;
              if (bVar8) {
                *(undefined4 *)((long)plVar17 + 0xc) = 0x2220201;
              }
              *(undefined2 *)(plVar17 + 0x16) = 0x78;
              plVar17[0x19] = -1;
              FUN_108d79350(plVar17);
              if ((param_5 & 3) != 0) {
                uVar28 = 4;
                if ((param_5 & 1) != 0) {
                  uVar28 = 2;
                }
                *(undefined1 *)((long)plVar17 + 9) = uVar28;
              }
              plVar17[0x20] = (long)FUN_108d7e5ac;
              *plVar12 = (long)plVar17;
              plVar17[0x14] = *(long *)(param_3 + 0x38);
              uStack_80 = 0;
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
              uStack_c8 = 0;
              uStack_d0 = 0;
              param_1 = (long *)plVar17[9];
              if ((*param_1 == 0) ||
                 ((**(code **)(*param_1 + 0x10))(param_1,&uStack_e0,100,0),
                 (int)param_1 == 0x20a || (int)param_1 == 0)) {
                *(char *)(plVar12 + 4) = (char)param_5;
                plVar12[1] = param_3;
                param_1 = (long *)*plVar12;
                param_1[0x1c] = (long)FUN_108d7b964;
                param_1[0x1d] = (long)plVar12;
                lVar19 = *(long *)param_1[9];
                if (lVar19 != 0) {
                  (**(code **)(lVar19 + 0x50))((long *)param_1[9],0xf);
                  param_1 = (long *)*plVar12;
                }
                plVar11[1] = (long)plVar12;
                plVar12[2] = 0;
                plVar12[3] = 0;
                if (*(char *)((long)param_1 + 0x12) != '\0') {
                  *(ushort *)(plVar12 + 5) = *(ushort *)(plVar12 + 5) | 1;
                }
                uVar24 = (uint)(byte)uStack_d0 << 8 | (uint)uStack_d0._1_1_ << 0x10;
                puVar18 = (uint *)((long)plVar12 + 0x34);
                *puVar18 = uVar24;
                if ((uVar24 - 0x10001 < 0xffff01ff) || ((uVar24 + 0x1ffff & uVar24) != 0)) {
                  uVar24 = 0;
                  *puVar18 = 0;
                  if (param_2 == (char *)0x0) {
                    uVar21 = 1;
                  }
                  if (uVar21 == 0) {
                    uVar24 = 0;
                    *(undefined2 *)((long)plVar12 + 0x21) = 0;
                  }
                }
                else {
                  uVar24 = (uint)uStack_d0._4_1_;
                  *(ushort *)(plVar12 + 5) = *(ushort *)(plVar12 + 5) | 2;
                  *(bool *)((long)plVar12 + 0x21) =
                       (uStack_b0._5_1_ != '\0' || uStack_b0._4_1_ != '\0') ||
                       (uStack_b0._6_1_ != '\0' || uStack_b0._7_1_ != '\0');
                  *(bool *)((long)plVar12 + 0x22) =
                       (uStack_a0._1_1_ != '\0' || (char)uStack_a0 != '\0') ||
                       (uStack_a0._2_1_ != '\0' || uStack_a0._3_1_ != '\0');
                }
                FUN_108d78ba4(param_1,puVar18,uVar24);
                if ((int)param_1 == 0) {
                  *(uint *)(plVar12 + 7) = *(int *)((long)plVar12 + 0x34) - uVar24;
                  if (*(char *)((long)plVar11 + 0x11) == '\0') goto LAB_108d7e314;
                  *(undefined4 *)(plVar12 + 0xd) = 1;
                  if (iRam0000000113297914 != 0) {
                    lVar19 = 2;
                    (*pcRam0000000113297988)();
                    if (iRam0000000113297914 != 0) {
                      lVar16 = 0;
                      (*pcRam0000000113297988)();
                      plVar12[0xb] = lVar16;
                      if (lVar16 == 0) {
                        *(undefined1 *)(param_3 + 0x51) = 0;
                        param_1 = (long *)0x7;
                        goto LAB_108d7e014;
                      }
                    }
                    if (lVar19 != 0) {
                      (*pcRam0000000113297998)(lVar19);
                      plVar12[0xe] = (long)plRam000000011372e698;
                      plRam000000011372e698 = plVar12;
                      (*pcRam00000001132979a8)(lVar19);
                      goto LAB_108d7e314;
                    }
                  }
                  plVar12[0xe] = (long)plRam000000011372e698;
                  plRam000000011372e698 = plVar12;
                  goto LAB_108d7e314;
                }
              }
              goto LAB_108d7e014;
            }
          }
        }
        else {
          uStack_e4 = 0;
          (*(code *)param_1[5])(param_1,plVar17[0x1a],plVar17[9],uVar27 & 0x87f7f,&uStack_e4);
          if ((int)param_1 == 0) {
            uVar24 = uStack_e4 & 1;
            bVar5 = (byte)uVar24;
            plVar26 = (long *)plVar17[9];
            (**(code **)(*plVar26 + 0x60))();
            if (uVar24 == 0) {
              FUN_108d79350(plVar17);
              uVar24 = *(uint *)(plVar17 + 0x17);
              if (0x400 < uVar24) {
                if (0x1fff < uVar24) {
                  uVar24 = 0x2000;
                }
                uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar24);
              }
            }
            pcVar10 = pcStack_120;
            FUN_108d70de0(pcStack_120,&UNK_10f517a8b,0);
            *(char *)((long)plVar17 + 0x11) = (char)pcVar10;
            if ((((uint)plVar26 >> 0xd & 1) != 0) ||
               (FUN_108d70de0(pcStack_120,&DAT_10f3c8bdc,0), (int)pcStack_120 != 0)) {
              uVar27 = 1;
              goto LAB_108d7df54;
            }
            uVar28 = 0;
            bVar8 = true;
            goto LAB_108d7df6c;
          }
        }
        plVar26 = (long *)plVar17[9];
        if (*plVar26 != 0) {
          (**(code **)(*plVar26 + 8))(plVar26);
          *plVar26 = 0;
        }
        func_0x000108d78fdc(plVar17[0x25]);
        func_0x000108d5e198(plVar17);
      }
    }
LAB_108d7e014:
    plVar17 = param_1;
    if (*plVar12 != 0) {
      FUN_108d79ee4();
    }
  }
  func_0x000108d5e198(plVar12);
  func_0x000108d5e198();
  *param_4 = 0;
  if (plStack_f8 == (long *)0x0) goto LAB_108d7e048;
  goto LAB_108d7e038;
  while (uVar23 = uVar23 - 1, plVar12 = plVar12 + -4, 1 < uVar23) {
LAB_108d7e2b4:
    if ((*plVar12 != 0) && (*(long **)(*plVar12 + 8) == plVar17)) {
      if (!bVar8) {
        (*pcRam00000001132979a8)(lVar19);
      }
      if (!bVar9) {
        (*pcRam00000001132979a8)(plStack_f8);
      }
      func_0x000108d5e198(puVar13);
      func_0x000108d5e198();
      plVar17 = (long *)0x13;
      goto LAB_108d7e048;
    }
  }
LAB_108d7e2d4:
  bVar9 = false;
  plVar11[1] = (long)plVar17;
  *(int *)(plVar17 + 0xd) = (int)plVar17[0xd] + 1;
LAB_108d7e2ec:
  if (!bVar8) {
    (*pcRam00000001132979a8)(lVar19);
  }
  func_0x000108d5e198(puVar13);
  if (bVar9) goto LAB_108d7da14;
LAB_108d7e314:
  if ((*(char *)((long)plVar11 + 0x11) != '\0') &&
     (uVar23 = (ulong)*(uint *)(param_3 + 0x28), 0 < (int)*(uint *)(param_3 + 0x28))) {
    puVar29 = (undefined8 *)(*(long *)(param_3 + 0x20) + 8);
    do {
      plVar17 = (long *)*puVar29;
      if ((plVar17 != (long *)0x0) && (*(char *)((long)plVar17 + 0x11) != '\0')) goto LAB_108d7e34c;
      uVar23 = uVar23 - 1;
      puVar29 = puVar29 + 4;
    } while (uVar23 != 0);
  }
  goto LAB_108d7e550;
LAB_108d7e34c:
  do {
    plVar12 = plVar17;
    plVar17 = (long *)plVar12[5];
  } while ((long *)plVar12[5] != (long *)0x0);
  if ((ulong)plVar11[1] < (ulong)plVar12[1]) {
    plVar11[4] = (long)plVar12;
    plVar11[5] = 0;
    plVar12[5] = (long)plVar11;
  }
  else {
    do {
      plVar17 = plVar12;
      plVar12 = (long *)plVar17[4];
      if (plVar12 == (long *)0x0) {
        plVar26 = (long *)0x0;
        lVar19 = 0x20;
        plVar12 = plVar11;
        plVar22 = plVar17;
        goto LAB_108d7e544;
      }
    } while ((ulong)plVar12[1] < (ulong)plVar11[1]);
    plVar11[4] = (long)plVar12;
    lVar19 = 0x28;
    plVar26 = plVar17;
    plVar22 = plVar11;
LAB_108d7e544:
    *(long **)((long)plVar11 + lVar19) = plVar26;
    plVar12[5] = (long)plVar22;
    plVar17[4] = (long)plVar11;
  }
LAB_108d7e550:
  *param_4 = plVar11;
  plVar17 = plVar11;
  FUN_108d7e5d4(plVar11,0,0);
  if (plVar17 == (long *)0x0) {
    lVar19 = *(long *)(*(long *)plVar11[1] + 0x130);
    *(undefined4 *)(lVar19 + 0x1c) = 2000;
    plVar17 = *(long **)(lVar19 + 0x40);
    (*pcRam00000001132979e8)(plVar17,2000);
  }
  plVar11 = plVar17;
  plVar17 = (long *)0x0;
  if (plStack_f8 != (long *)0x0) {
LAB_108d7e038:
    plVar11 = plStack_f8;
    (*pcRam00000001132979a8)();
  }
LAB_108d7e048:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar17;
  }
  ___stack_chk_fail();
  plVar17 = (long *)plVar11[2];
  if (((char)*plVar17 == '\0') || (*(char *)plVar17 = '\0', *(short *)((long)plVar11 + 0x2e) < 2)) {
    return plVar17;
  }
  if ((char)*plVar17 == '\0') {
    bVar5 = *(byte *)((long)plVar17 + 6);
    lVar19 = plVar17[9];
    lVar16 = plVar17[10];
    puVar13 = (undefined1 *)(lVar16 + (ulong)bVar5);
    plVar11 = plVar17;
    FUN_108d7c93c(plVar17,*puVar13);
    if ((int)plVar11 == 0) {
      iVar20 = *(int *)(lVar19 + 0x34);
      iVar3 = *(int *)(lVar19 + 0x38);
      *(short *)((long)plVar17 + 0x14) = (short)iVar20 + -1;
      *(char *)((long)plVar17 + 1) = '\0';
      uVar24 = (uint)bVar5 + (uint)*(byte *)((long)plVar17 + 7) + 8;
      *(short *)((long)plVar17 + 0xe) = (short)uVar24;
      plVar17[0xb] = lVar16 + iVar3;
      plVar17[0xc] = lVar16 + (ulong)uVar24;
      uVar28 = puVar13[5];
      uVar6 = puVar13[6];
      uVar7 = *(ushort *)(puVar13 + 3);
      uVar21 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
      *(short *)((long)plVar17 + 0x12) = (short)uVar21;
      if (((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) <= (iVar20 - 8U) / 6) {
        uVar24 = uVar24 + uVar21 * 2;
        uVar21 = (uint)(*(ushort *)(puVar13 + 1) >> 8) | (*(ushort *)(puVar13 + 1) & 0xff00ff) << 8;
        iVar20 = (uint)(byte)puVar13[7] + (CONCAT11(uVar28,uVar6) - 1 & 0xffff) + 1;
        if (uVar21 != 0) {
          do {
            if ((uVar21 < uVar24) || (iVar3 + -4 < (int)uVar21)) goto LAB_108d7f4f4;
            uVar7 = *(ushort *)(lVar16 + (ulong)uVar21);
            uVar27 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
            uVar7 = ((ushort *)(lVar16 + (ulong)uVar21))[1];
            uVar2 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
            if (((uVar27 != 0) && (uVar27 <= uVar21 + uVar2 + 3)) || (iVar3 < (int)(uVar2 + uVar21))
               ) goto LAB_108d7f4f4;
            iVar20 = uVar2 + iVar20;
            uVar21 = uVar27;
          } while (uVar27 != 0);
        }
        if (iVar20 <= iVar3) {
          *(short *)(plVar17 + 2) = (short)iVar20 - (short)uVar24;
          *(char *)plVar17 = '\x01';
          return (long *)0x0;
        }
      }
    }
LAB_108d7f4f4:
    plVar11 = (long *)0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  else {
    plVar11 = (long *)0x0;
  }
  return plVar11;
}



/* Entry: 108d7e5ac; end: 108d7e5d3;  */

char * FUN_108d7e5ac(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  
  pcVar12 = *(char **)(param_1 + 0x10);
  if ((*pcVar12 == '\0') || (*pcVar12 = '\0', *(short *)(param_1 + 0x2e) < 2)) {
    return pcVar12;
  }
  if (*pcVar12 == '\0') {
    bVar6 = pcVar12[6];
    lVar4 = *(long *)(pcVar12 + 0x48);
    lVar5 = *(long *)(pcVar12 + 0x50);
    puVar2 = (undefined1 *)(lVar5 + (ulong)bVar6);
    pcVar13 = pcVar12;
    FUN_108d7c93c(pcVar12,*puVar2);
    if ((int)pcVar13 == 0) {
      iVar14 = *(int *)(lVar4 + 0x34);
      iVar3 = *(int *)(lVar4 + 0x38);
      *(short *)(pcVar12 + 0x14) = (short)iVar14 + -1;
      pcVar12[1] = '\0';
      uVar1 = (uint)bVar6 + (uint)(byte)pcVar12[7] + 8;
      *(short *)(pcVar12 + 0xe) = (short)uVar1;
      *(long *)(pcVar12 + 0x58) = lVar5 + iVar3;
      *(ulong *)(pcVar12 + 0x60) = lVar5 + (ulong)uVar1;
      uVar7 = puVar2[5];
      uVar8 = puVar2[6];
      uVar9 = *(ushort *)(puVar2 + 3);
      uVar15 = (uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8;
      *(short *)(pcVar12 + 0x12) = (short)uVar15;
      if (((uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8) <= (iVar14 - 8U) / 6) {
        uVar1 = uVar1 + uVar15 * 2;
        uVar15 = (uint)(*(ushort *)(puVar2 + 1) >> 8) | (*(ushort *)(puVar2 + 1) & 0xff00ff) << 8;
        iVar14 = (uint)(byte)puVar2[7] + (CONCAT11(uVar7,uVar8) - 1 & 0xffff) + 1;
        if (uVar15 != 0) {
          do {
            if ((uVar15 < uVar1) || (iVar3 + -4 < (int)uVar15)) goto LAB_108d7f4f4;
            uVar9 = *(ushort *)(lVar5 + (ulong)uVar15);
            uVar10 = (uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8;
            uVar9 = ((ushort *)(lVar5 + (ulong)uVar15))[1];
            uVar11 = (uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8;
            if (((uVar10 != 0) && (uVar10 <= uVar15 + uVar11 + 3)) ||
               (iVar3 < (int)(uVar11 + uVar15))) goto LAB_108d7f4f4;
            iVar14 = uVar11 + iVar14;
            uVar15 = uVar10;
          } while (uVar10 != 0);
        }
        if (iVar14 <= iVar3) {
          *(short *)(pcVar12 + 0x10) = (short)iVar14 - (short)uVar1;
          *pcVar12 = '\x01';
          return (char *)0x0;
        }
      }
    }
LAB_108d7f4f4:
    pcVar12 = (char *)0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  else {
    pcVar12 = (char *)0x0;
  }
  return pcVar12;
}



/* Entry: 108d7e5d4; end: 108d7e663;  */

void FUN_108d7e5d4(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
    }
  }
  lVar2 = *(long *)(lVar3 + 0x48);
  if ((param_2 != 0) && (lVar2 == 0)) {
    FUN_108d68fc8(0,param_2);
    *(long *)(lVar3 + 0x48) = lVar2;
    *(undefined8 *)(lVar3 + 0x50) = param_3;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_108d7f5fc(param_1);
    }
  }
  return;
}



/* Entry: 108d7e664; end: 108d7e77b;  */

long FUN_108d7e664(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x18) == 0) ||
     (((*(byte *)(param_1 + 0x18) & 3) == 0 && ((*(ushort *)(param_2 + 0x2c) >> 2 & 1) == 0)))) {
    *(undefined8 *)(param_2 + 0x18) = 0;
    if (*(long *)(param_1 + 0x138) == 0) {
      if ((((*(ushort *)(param_2 + 0x2c) >> 2 & 1) == 0) && (*(char *)(param_1 + 0x14) != '\x03'))
         || (lVar4 = param_1, FUN_108d7ecdc(param_1,1), (int)lVar4 == 0)) {
        if (*(uint *)(param_1 + 0x1c) < *(uint *)(param_2 + 0x28)) {
          iVar2 = (int)*(undefined8 *)(param_2 + 0x20);
          FUN_108d79a60();
          if ((iVar2 != 0) && (lVar4 = param_2, FUN_108d79acc(), (int)lVar4 != 0))
          goto LAB_108d7e740;
        }
        lVar4 = param_1;
        func_0x000108d7eefc(param_1,param_2);
        iVar2 = (int)lVar4;
        goto joined_r0x000108d7e73c;
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      FUN_108d79a60(uVar3,*(undefined4 *)(param_2 + 0x28));
      if (((int)uVar3 == 0) || (lVar4 = param_2, FUN_108d79acc(), (int)lVar4 == 0)) {
        lVar4 = param_1;
        FUN_108d7e77c(param_1,param_2,0,0);
        iVar2 = (int)lVar4;
joined_r0x000108d7e73c:
        if (iVar2 == 0) {
          FUN_108d78b28(param_2);
          goto LAB_108d7e76c;
        }
      }
    }
LAB_108d7e740:
    uVar1 = (uint)lVar4 & 0xff;
    if ((uVar1 == 0xd) || (uVar1 == 10)) {
      *(uint *)(param_1 + 0x2c) = (uint)lVar4;
      *(undefined1 *)(param_1 + 0x14) = 6;
    }
  }
  else {
LAB_108d7e76c:
    lVar4 = 0;
  }
  return lVar4;
}



/* Entry: 108d7e77c; end: 108d7ecdb;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_108d7e77c(ulong param_1,long ******param_2,long ******param_3,long param_4)

{
  long ******pppppplVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long *****ppppplVar18;
  long ******pppppplVar19;
  ulong uVar20;
  long ******pppppplVar21;
  long *******ppppppplVar22;
  long ******unaff_x24;
  long *******ppppppplVar23;
  long lVar24;
  long ******pppppplVar25;
  ulong uVar26;
  long lStack_178;
  long ******pppppplStack_170;
  long *******ppppppplStack_168;
  long lStack_160;
  long ******pppppplStack_158;
  long ******pppppplStack_150;
  long *******ppppppplStack_148;
  undefined1 **ppuStack_140;
  undefined8 uStack_138;
  long *****ppppplStack_130;
  uint uStack_128;
  long *****ppppplStack_120;
  long lStack_118;
  long ******pppppplStack_110;
  long *******ppppppplStack_108;
  long lStack_100;
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  ulong uStack_d0;
  long *******ppppppplStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long ******pppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long lStack_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  uint uStack_7c;
  long ******pppppplStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar14 = (int)param_4;
  uVar11 = (uint)param_3;
  pppppplStack_b0 = param_2;
  if (iVar14 == 0) {
    iVar10 = 1;
  }
  else {
    iVar10 = 0;
    if (param_2 != (long ******)0x0) {
      pppppplVar21 = (long ******)&pppppplStack_b0;
      do {
        pppppplVar19 = (long ******)param_2[3];
        if (*(uint *)(param_2 + 5) <= uVar11) {
          iVar10 = iVar10 + 1;
          pppppplVar21 = param_2 + 3;
        }
        *pppppplVar21 = (long *****)pppppplVar19;
        param_2 = pppppplVar19;
      } while (pppppplVar19 != (long ******)0x0);
    }
  }
  pppppplVar21 = pppppplStack_b0;
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + iVar10;
  if (*(int *)(pppppplStack_b0 + 5) == 1) {
    FUN_108d7f0ac(pppppplStack_b0);
  }
  ppppppplVar22 = *(long ********)(param_1 + 0x138);
  uVar17 = *(uint *)(param_1 + 0xbc);
  bVar4 = *(byte *)(param_1 + 0xe);
  if (*(short *)((long)ppppppplVar22 + 0x3c) == 0) {
    if (*(int *)(*ppppppplVar22[6] + 0xc) == 0) {
LAB_108d7ea9c:
      if (*(char *)((long)ppppppplVar22 + 0x3f) == '\0') {
        (*(code *)(*ppppppplVar22[1])[0xe])(ppppppplVar22[1],3,1,5);
      }
      *(undefined2 *)((long)ppppppplVar22 + 0x3c) = 0xffff;
      unaff_x24 = (long ******)0x1;
      do {
        pppppplVar19 = (long ******)&uStack_88;
        ppppppplVar12 = ppppppplVar22;
        FUN_108d7c34c(ppppppplVar22,pppppplVar19,1,unaff_x24);
        unaff_x24 = (long ******)(ulong)((int)unaff_x24 + 1);
        iVar10 = (int)ppppppplVar12;
      } while (iVar10 == -1);
    }
    else {
      FUN_108d64cc0(4,&uStack_88);
      if (*(char *)((long)ppppppplVar22 + 0x3f) != '\0') {
LAB_108d7e914:
        func_0x000108d7b6ac(ppppppplVar22,(ulong)uStack_88 & 0xffffffff);
        if (*(char *)((long)ppppppplVar22 + 0x3f) == '\0') {
          (*(code *)(*ppppppplVar22[1])[0xe])(ppppppplVar22[1],4,4,9);
        }
        goto LAB_108d7ea9c;
      }
      ppppppplVar12 = (long *******)ppppppplVar22[1];
      pppppplVar19 = (long ******)0x4;
      (*(code *)(*ppppppplVar12)[0xe])(ppppppplVar12,4,4,10);
      iVar10 = (int)ppppppplVar12;
      if (iVar10 == 5) goto LAB_108d7ea9c;
      if (iVar10 == 0) goto LAB_108d7e914;
    }
    ppppppplVar23 = ppppppplVar12;
    if (iVar10 == 0) goto LAB_108d7e830;
  }
  else {
LAB_108d7e830:
    uVar26 = (ulong)*(uint *)(ppppppplVar22 + 0xb);
    if (*(uint *)(ppppppplVar22 + 0xb) == 0) {
      uStack_88 = (long *****)0x18e22d0082067f37;
      uStack_80 = (char)(uVar17 >> 0x18);
      uStack_7f = (char)(uVar17 >> 0x10);
      uStack_7e = (char)(uVar17 >> 8);
      uStack_7d = (char)uVar17;
      uVar15 = *(uint *)(ppppppplVar22 + 0x10);
      uVar9 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
      uStack_7c = uVar9 >> 0x10 | uVar9 << 0x10;
      if (uVar15 == 0) {
        FUN_108d64cc0(8,ppppppplVar22 + 0xd);
      }
      iVar16 = 0;
      uVar20 = 0;
      iVar10 = 0;
      pppppplStack_78 = ppppppplVar22[0xd];
      do {
        iVar10 = iVar10 + iVar16 + *(int *)((long)&uStack_88 + uVar20);
        iVar16 = *(int *)((long)&uStack_88 + uVar20 + 4) + iVar16 + iVar10;
        bVar8 = uVar20 < 0x10;
        uVar20 = uVar20 + 8;
      } while (bVar8);
      uStack_70 = (undefined1)((uint)iVar10 >> 0x18);
      uStack_6f = (undefined1)((uint)iVar10 >> 0x10);
      uStack_6e = (undefined1)((uint)iVar10 >> 8);
      uStack_6d = (undefined1)iVar10;
      uStack_6c = (undefined1)((uint)iVar16 >> 0x18);
      uStack_6b = (undefined1)((uint)iVar16 >> 0x10);
      uStack_6a = (undefined1)((uint)iVar16 >> 8);
      uStack_69 = (undefined1)iVar16;
      *(uint *)(ppppppplVar22 + 7) = uVar17;
      *(undefined1 *)((long)ppppppplVar22 + 0x55) = 0;
      *(int *)(ppppppplVar22 + 0xc) = iVar10;
      *(int *)((long)ppppppplVar22 + 100) = iVar16;
      *(undefined1 *)((long)ppppppplVar22 + 0x43) = 1;
      ppppppplVar12 = (long *******)ppppppplVar22[2];
      pppppplVar19 = (long ******)&uStack_88;
      (*(code *)(*ppppppplVar12)[3])(ppppppplVar12,pppppplVar19,0x20,0);
      ppppppplVar23 = ppppppplVar12;
      if ((int)ppppppplVar12 != 0) goto LAB_108d7ec9c;
      if ((bVar4 != 0) && (*(char *)((long)ppppppplVar22 + 0x44) != '\0')) {
        ppppppplVar12 = (long *******)ppppppplVar22[2];
        pppppplVar19 = (long ******)(ulong)(bVar4 & 0x13);
        (*(code *)(*ppppppplVar12)[5])();
        ppppppplVar23 = ppppppplVar12;
        if ((int)ppppppplVar12 != 0) goto LAB_108d7ec9c;
      }
    }
    ppppppplStack_c8 = (long *******)ppppppplVar22[2];
    lStack_98 = 0;
    uStack_90 = (uint)bVar4;
    lStack_b8 = CONCAT44(lStack_b8._4_4_,uStack_90);
    lVar2 = (long)(int)uVar17 + 0x18;
    lVar24 = uVar26 * lVar2 + 0x20;
    pppppplVar25 = pppppplVar21;
    uStack_c0 = (ulong)uVar17;
    ppppppplStack_a8 = ppppppplVar22;
    ppppppplStack_a0 = ppppppplStack_c8;
    uStack_8c = uVar17;
    do {
      unaff_x24 = pppppplVar25;
      if (iVar14 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar11;
        if (unaff_x24[3] != (long *****)0x0) {
          uVar17 = 0;
        }
      }
      ppppppplVar12 = (long *******)&ppppppplStack_a8;
      pppppplVar19 = unaff_x24;
      FUN_108d7f0e4(ppppppplVar12,unaff_x24,uVar17,lVar24);
      ppppppplVar23 = ppppppplVar12;
      if ((int)ppppppplVar12 != 0) goto LAB_108d7ec9c;
      lVar24 = lVar24 + lVar2;
      uVar17 = (int)uVar26 + 1;
      uVar26 = (ulong)uVar17;
      pppppplVar25 = (long ******)unaff_x24[3];
    } while ((long ******)unaff_x24[3] != (long ******)0x0);
    uVar26 = 0;
    uStack_d0 = param_1;
    if ((iVar14 == 0) || (((uint)lStack_b8 >> 5 & 1) == 0)) {
LAB_108d7eb70:
      ppppppplVar23 = (long *******)0x0;
      if (iVar14 != 0) goto LAB_108d7eb84;
    }
    else {
      if (*(char *)((long)ppppppplVar22 + 0x45) == '\0') {
        pppppplVar19 = (long ******)(ulong)((uint)lStack_b8 & 0x13);
        ppppppplVar12 = ppppppplStack_c8;
        (*(code *)(*ppppppplStack_c8)[5])();
        ppppppplVar23 = ppppppplVar12;
      }
      else {
        ppppppplVar12 = (long *******)ppppppplVar22[2];
        if ((*ppppppplVar12)[0xb] == (long *****)0x0) {
          uVar26 = 0x1000;
        }
        else {
          (*(code *)(*ppppppplVar12)[0xb])();
          uVar9 = (uint)ppppppplVar12;
          uVar15 = uVar9;
          if (0xffff < uVar9) {
            uVar15 = 0x10000;
          }
          uVar3 = 0x200;
          if (0x1f < (int)uVar9) {
            uVar3 = uVar15;
          }
          uVar26 = (ulong)uVar3;
        }
        lVar5 = 0;
        if (uVar26 != 0) {
          lVar5 = (long)(uVar26 + lVar24 + -1) / (long)uVar26;
        }
        lStack_b8 = lVar5 * uVar26;
        lStack_98 = lStack_b8;
        if (lVar24 < lStack_b8) {
          uVar26 = 0;
          do {
            ppppppplVar12 = (long *******)&ppppppplStack_a8;
            pppppplVar19 = unaff_x24;
            FUN_108d7f0e4(ppppppplVar12,unaff_x24,param_3,lVar24);
            param_1 = uVar26;
            ppppppplVar23 = ppppppplVar12;
            if ((int)ppppppplVar12 != 0) goto LAB_108d7ec9c;
            lVar24 = lVar24 + lVar2;
            uVar26 = (ulong)((int)uVar26 + 1);
          } while (lVar24 < lStack_b8);
          goto LAB_108d7eb70;
        }
        ppppppplVar23 = (long *******)0x0;
      }
      uVar26 = 0;
LAB_108d7eb84:
      if ((*(char *)((long)ppppppplVar22 + 0x43) != '\0') &&
         (pppppplVar25 = ppppppplVar22[4], -1 < (long)pppppplVar25)) {
        pppppplVar19 = (long ******)((ulong)((int)uVar26 + uVar17) * lVar2 + 0x20);
        if ((long)pppppplVar19 <= (long)pppppplVar25) {
          pppppplVar19 = pppppplVar25;
        }
        ppppppplVar12 = ppppppplVar22;
        FUN_108d7abf4();
        *(undefined1 *)((long)ppppppplVar22 + 0x43) = 0;
      }
    }
    pppppplVar25 = (long ******)(ulong)*(uint *)(ppppppplVar22 + 0xb);
    if ((pppppplVar21 != (long ******)0x0) && (pppppplVar13 = pppppplVar21, (int)ppppppplVar23 == 0)
       ) {
      do {
        pppppplVar25 = (long ******)(ulong)((int)pppppplVar25 + 1);
        ppppppplVar12 = ppppppplVar22;
        pppppplVar19 = pppppplVar25;
        func_0x000108d7b4d4(ppppppplVar22,pppppplVar25,*(undefined4 *)(pppppplVar13 + 5));
        pppppplVar1 = pppppplVar13 + 3;
        ppppppplVar23 = ppppppplVar12;
        pppppplVar13 = (long ******)*pppppplVar1;
      } while ((long ******)*pppppplVar1 != (long ******)0x0 && (int)ppppppplVar12 == 0);
    }
    uVar17 = (uint)pppppplVar25;
    bVar8 = (int)ppppppplVar23 == 0;
    bVar6 = true;
    bVar7 = false;
    if (bVar8) {
      bVar7 = SBORROW4((int)uVar26,1);
      bVar6 = (int)uVar26 + -1 < 0;
    }
    if (bVar6 == bVar7) {
      do {
        uVar17 = (int)pppppplVar25 + 1;
        pppppplVar25 = (long ******)(ulong)uVar17;
        iVar10 = (int)uVar26;
        uVar26 = (ulong)(iVar10 - 1);
        ppppppplVar12 = ppppppplVar22;
        pppppplVar19 = pppppplVar25;
        func_0x000108d7b4d4(ppppppplVar22,pppppplVar25,*(undefined4 *)(unaff_x24 + 5));
        bVar8 = (int)ppppppplVar12 == 0;
        ppppppplVar23 = ppppppplVar12;
      } while ((bVar8 && iVar10 != 0) && (!bVar8 || iVar10 != 1));
    }
    param_1 = uStack_d0;
    if (bVar8) {
      *(ushort *)((long)ppppppplVar22 + 0x56) =
           (ushort)uStack_c0 & 0xff00 | (ushort)(uStack_c0 >> 0x10);
      *(uint *)(ppppppplVar22 + 0xb) = uVar17;
      if (iVar14 != 0) {
        *(int *)(ppppppplVar22 + 10) = *(int *)(ppppppplVar22 + 10) + 1;
        *(uint *)((long)ppppppplVar22 + 0x5c) = uVar11;
        ppppppplVar12 = ppppppplVar22;
        FUN_108d7b600();
        *(uint *)(ppppppplVar22 + 3) = uVar17;
      }
    }
    else if ((int)ppppppplVar23 != 0) goto LAB_108d7ec9c;
    ppppppplVar23 = (long *******)0x0;
    if ((pppppplVar21 != (long ******)0x0) && (*(long *)(param_1 + 0x70) != 0)) {
      do {
        ppppppplVar12 = *(long ********)(param_1 + 0x70);
        pppppplVar19 = (long ******)(ulong)*(uint *)(pppppplVar21 + 5);
        FUN_108d78a40(ppppppplVar12,pppppplVar19,pppppplVar21[1]);
        pppppplVar21 = (long ******)pppppplVar21[3];
      } while (pppppplVar21 != (long ******)0x0);
      pppppplVar21 = (long ******)0x0;
      ppppppplVar23 = (long *******)0x0;
    }
  }
LAB_108d7ec9c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppppppplVar23;
  }
  ___stack_chk_fail();
  pppppplVar13 = &ppppplStack_130;
  pcStack_d8 = FUN_108d7ecdc;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar23 = ppppppplVar12;
  pppppplVar25 = pppppplVar19;
  pppppplStack_110 = unaff_x24;
  ppppppplStack_108 = ppppppplVar22;
  lStack_100 = param_4;
  pppppplStack_f8 = param_3;
  pppppplStack_f0 = pppppplVar21;
  uStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_108d7f318();
  if ((int)ppppppplVar23 != 0) goto LAB_108d7ed70;
  if (*(char *)((long)ppppppplVar12 + 0xb) == '\0') {
    if ((*ppppppplVar12[10] == (long *****)0x0) || (*(char *)((long)ppppppplVar12 + 9) == '\x04')) {
      ppppppplVar12[0xd] = ppppppplVar12[0xc];
    }
    else {
      param_3 = ppppppplVar12[9];
      (*(code *)(*param_3)[0xc])();
      uVar11 = (uint)param_3;
      if ((uVar11 >> 9 & 1) == 0) {
        ppppppplVar22 = (long *******)0xd763a120f905d5d9;
        ppppplStack_130 = (long *****)0xd763a120f905d5d9;
        uVar17 = (*(uint *)(ppppppplVar12 + 6) & 0xff00ff00) >> 8 |
                 (*(uint *)(ppppppplVar12 + 6) & 0xff00ff) << 8;
        uStack_128 = uVar17 >> 0x10 | uVar17 << 0x10;
        if (ppppppplVar12[0xc] == (long ******)0x0) {
          param_4 = 0;
        }
        else {
          uVar26 = (ulong)*(uint *)(ppppppplVar12 + 0x17);
          lVar2 = 0;
          if (uVar26 != 0) {
            lVar2 = ((long)ppppppplVar12[0xc] + -1) / (long)uVar26;
          }
          param_4 = uVar26 + uVar26 * lVar2;
        }
        ppppppplVar23 = (long *******)ppppppplVar12[10];
        pppppplVar25 = &ppppplStack_120;
        (*(code *)(*ppppppplVar23)[2])(ppppppplVar23,pppppplVar25,8,param_4);
        if ((int)ppppppplVar23 == 0) {
          if (ppppplStack_120 == (long *****)0xd763a120f905d5d9) {
            ppppppplVar23 = (long *******)ppppppplVar12[10];
            pppppplVar25 = (long ******)&UNK_10dfa0a04;
            (*(code *)(*ppppppplVar23)[3])(ppppppplVar23,&UNK_10dfa0a04,1,param_4);
            goto LAB_108d7ee70;
          }
        }
        else {
LAB_108d7ee70:
          if ((int)ppppppplVar23 != 0x20a && (int)ppppppplVar23 != 0) goto LAB_108d7ed70;
        }
        if (((uVar11 >> 10 & 1) == 0) && (*(char *)((long)ppppppplVar12 + 0xc) != '\0')) {
          ppppppplVar23 = (long *******)ppppppplVar12[10];
          pppppplVar25 = (long ******)(ulong)*(byte *)((long)ppppppplVar12 + 0xf);
          (*(code *)(*ppppppplVar23)[5])();
          if ((int)ppppppplVar23 != 0) goto LAB_108d7ed70;
        }
        ppppppplVar23 = (long *******)ppppppplVar12[10];
        (*(code *)(*ppppppplVar23)[3])(ppppppplVar23,&ppppplStack_130,0xc,ppppppplVar12[0xd]);
        pppppplVar25 = pppppplVar13;
        if ((int)ppppppplVar23 != 0) goto LAB_108d7ed70;
      }
      if (((ulong)param_3 & 0x400) == 0) {
        ppppppplVar23 = (long *******)ppppppplVar12[10];
        uVar17 = 0x10;
        if (*(byte *)((long)ppppppplVar12 + 0xf) != 3) {
          uVar17 = 0;
        }
        pppppplVar25 = (long ******)(ulong)(uVar17 | *(byte *)((long)ppppppplVar12 + 0xf));
        (*(code *)(*ppppppplVar23)[5])();
        if ((int)ppppppplVar23 != 0) goto LAB_108d7ed70;
      }
      ppppppplVar12[0xd] = ppppppplVar12[0xc];
      if (((int)pppppplVar19 != 0) && ((uVar11 >> 9 & 1) == 0)) {
        *(undefined4 *)(ppppppplVar12 + 6) = 0;
        ppppppplVar23 = ppppppplVar12;
        FUN_108d79c78();
        if ((int)ppppppplVar23 != 0) goto LAB_108d7ed70;
      }
    }
  }
  pppppplVar21 = ppppppplVar12[0x26];
  for (ppppplVar18 = *pppppplVar21; ppppplVar18 != (long *****)0x0;
      ppppplVar18 = (long *****)ppppplVar18[7]) {
    *(ushort *)((long)ppppplVar18 + 0x2c) = *(ushort *)((long)ppppplVar18 + 0x2c) & 0xfffb;
  }
  ppppppplVar23 = (long *******)0x0;
  pppppplVar21[2] = pppppplVar21[1];
  *(undefined1 *)((long)ppppppplVar12 + 0x14) = 4;
LAB_108d7ed70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return ppppppplVar23;
  }
  ___stack_chk_fail();
  uStack_138 = 0x108d7eefc;
  pppppplStack_170 = unaff_x24;
  ppppppplStack_168 = ppppppplVar22;
  lStack_160 = param_4;
  pppppplStack_158 = param_3;
  pppppplStack_150 = pppppplVar19;
  ppppppplStack_148 = ppppppplVar12;
  ppuStack_140 = &puStack_e0;
  if (*ppppppplVar23[9] == (long *****)0x0) {
    ppppppplVar22 = (long *******)*ppppppplVar23;
    (*(code *)ppppppplVar22[5])
              (ppppppplVar22,0,ppppppplVar23[9],
               *(uint *)((long)ppppppplVar23 + 0xb4) & 0x87f61 | 0x1e,0);
    if ((int)ppppppplVar22 != 0) {
      return ppppppplVar22;
    }
  }
  if (*(uint *)(ppppppplVar23 + 5) < *(uint *)((long)ppppppplVar23 + 0x1c)) {
    if ((pppppplVar25[3] != (long *****)0x0) ||
       (*(uint *)(ppppppplVar23 + 5) < *(uint *)(pppppplVar25 + 5))) {
      lStack_178 = (long)*(int *)((long)ppppppplVar23 + 0xbc) *
                   (ulong)*(uint *)((long)ppppppplVar23 + 0x1c);
      (*(code *)(*ppppppplVar23[9])[10])(ppppppplVar23[9],5,&lStack_178);
      *(undefined4 *)(ppppppplVar23 + 5) = *(undefined4 *)((long)ppppppplVar23 + 0x1c);
    }
  }
  else if (pppppplVar25 == (long ******)0x0) {
    return (long *******)0x0;
  }
  do {
    uVar11 = *(uint *)(pppppplVar25 + 5);
    if ((*(uint *)((long)ppppppplVar23 + 0x1c) < uVar11) ||
       ((*(ushort *)((long)pppppplVar25 + 0x2c) >> 5 & 1) != 0)) {
      ppppppplVar22 = (long *******)0x0;
    }
    else {
      iVar14 = *(int *)((long)ppppppplVar23 + 0xbc);
      if (uVar11 - 1 == 0) {
        FUN_108d7f0ac(pppppplVar25);
      }
      if (ppppppplVar23[0x21] == (long ******)0x0) {
        pppppplVar21 = (long ******)pppppplVar25[1];
      }
      else {
        pppppplVar21 = ppppppplVar23[0x24];
        (*(code *)ppppppplVar23[0x21])(pppppplVar21,pppppplVar25[1],uVar11,6);
        if (pppppplVar21 == (long ******)0x0) {
          return (long *******)0x7;
        }
      }
      ppppppplVar22 = (long *******)ppppppplVar23[9];
      (*(code *)(*ppppppplVar22)[3])
                (ppppppplVar22,pppppplVar21,*(undefined4 *)((long)ppppppplVar23 + 0xbc),
                 (long)iVar14 * (ulong)(uVar11 - 1));
      if (uVar11 == 1) {
        pppppplVar19 = (long ******)pppppplVar21[3];
        ppppppplVar23[0x12] = (long ******)pppppplVar21[4];
        ppppppplVar23[0x11] = pppppplVar19;
      }
      if (*(uint *)((long)ppppppplVar23 + 0x24) < uVar11) {
        *(uint *)((long)ppppppplVar23 + 0x24) = uVar11;
      }
      *(int *)(ppppppplVar23 + 0x1f) = *(int *)(ppppppplVar23 + 0x1f) + 1;
      FUN_108d78a40(ppppppplVar23[0xe],uVar11,pppppplVar25[1]);
      if ((int)ppppppplVar22 != 0) {
        return ppppppplVar22;
      }
    }
    pppppplVar25 = (long ******)pppppplVar25[3];
    if (pppppplVar25 == (long ******)0x0) {
      return ppppppplVar22;
    }
  } while( true );
}



/* Entry: 108d7ecdc; end: 108d7f0ab;  */

long * FUN_108d7ecdc(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lStack_a8;
  long lStack_60;
  uint uStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_1;
  plVar9 = param_2;
  FUN_108d7f318();
  if ((int)plVar3 != 0) goto LAB_108d7ed70;
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    if ((*(long *)param_1[10] == 0) || (*(char *)((long)param_1 + 9) == '\x04')) {
      param_1[0xd] = param_1[0xc];
    }
    else {
      plVar4 = (long *)param_1[9];
      (**(code **)(*plVar4 + 0x60))();
      uVar2 = (uint)plVar4;
      if ((uVar2 >> 9 & 1) == 0) {
        lStack_60 = -0x289c5edf06fa2a27;
        uVar6 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
        uStack_58 = uVar6 >> 0x10 | uVar6 << 0x10;
        if (param_1[0xc] == 0) {
          lVar7 = 0;
        }
        else {
          uVar8 = (ulong)*(uint *)(param_1 + 0x17);
          lVar7 = 0;
          if (uVar8 != 0) {
            lVar7 = (param_1[0xc] + -1) / (long)uVar8;
          }
          lVar7 = uVar8 + uVar8 * lVar7;
        }
        plVar3 = (long *)param_1[10];
        plVar9 = &lStack_50;
        (**(code **)(*plVar3 + 0x10))(plVar3,plVar9,8,lVar7);
        if ((int)plVar3 == 0) {
          if (lStack_50 == -0x289c5edf06fa2a27) {
            plVar3 = (long *)param_1[10];
            plVar9 = (long *)&UNK_10dfa0a04;
            (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_10dfa0a04,1,lVar7);
            goto LAB_108d7ee70;
          }
        }
        else {
LAB_108d7ee70:
          if ((int)plVar3 != 0x20a && (int)plVar3 != 0) goto LAB_108d7ed70;
        }
        if (((uVar2 >> 10 & 1) == 0) && (*(char *)((long)param_1 + 0xc) != '\0')) {
          plVar3 = (long *)param_1[10];
          plVar9 = (long *)(ulong)*(byte *)((long)param_1 + 0xf);
          (**(code **)(*plVar3 + 0x28))();
          if ((int)plVar3 != 0) goto LAB_108d7ed70;
        }
        plVar3 = (long *)param_1[10];
        (**(code **)(*plVar3 + 0x18))(plVar3,&lStack_60,0xc,param_1[0xd]);
        plVar9 = plVar5;
        if ((int)plVar3 != 0) goto LAB_108d7ed70;
      }
      if (((ulong)plVar4 & 0x400) == 0) {
        plVar3 = (long *)param_1[10];
        uVar6 = 0x10;
        if (*(byte *)((long)param_1 + 0xf) != 3) {
          uVar6 = 0;
        }
        plVar9 = (long *)(ulong)(uVar6 | *(byte *)((long)param_1 + 0xf));
        (**(code **)(*plVar3 + 0x28))();
        if ((int)plVar3 != 0) goto LAB_108d7ed70;
      }
      param_1[0xd] = param_1[0xc];
      if (((int)param_2 != 0) && ((uVar2 >> 9 & 1) == 0)) {
        *(undefined4 *)(param_1 + 6) = 0;
        plVar3 = param_1;
        FUN_108d79c78();
        if ((int)plVar3 != 0) goto LAB_108d7ed70;
      }
    }
  }
  plVar5 = (long *)param_1[0x26];
  for (lVar7 = *plVar5; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x38)) {
    *(ushort *)(lVar7 + 0x2c) = *(ushort *)(lVar7 + 0x2c) & 0xfffb;
  }
  plVar3 = (long *)0x0;
  plVar5[2] = plVar5[1];
  *(undefined1 *)((long)param_1 + 0x14) = 4;
LAB_108d7ed70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (*(long *)plVar3[9] == 0) {
    plVar5 = (long *)*plVar3;
    (*(code *)plVar5[5])
              (plVar5,0,(long *)plVar3[9],*(uint *)((long)plVar3 + 0xb4) & 0x87f61 | 0x1e,0);
    if ((int)plVar5 != 0) {
      return plVar5;
    }
  }
  if (*(uint *)(plVar3 + 5) < *(uint *)((long)plVar3 + 0x1c)) {
    if ((plVar9[3] != 0) || (*(uint *)(plVar3 + 5) < *(uint *)(plVar9 + 5))) {
      lStack_a8 = (long)*(int *)((long)plVar3 + 0xbc) * (ulong)*(uint *)((long)plVar3 + 0x1c);
      (**(code **)(*(long *)plVar3[9] + 0x50))((long *)plVar3[9],5,&lStack_a8);
      *(undefined4 *)(plVar3 + 5) = *(undefined4 *)((long)plVar3 + 0x1c);
    }
  }
  else if (plVar9 == (long *)0x0) {
    return (long *)0x0;
  }
  do {
    uVar2 = *(uint *)(plVar9 + 5);
    if ((*(uint *)((long)plVar3 + 0x1c) < uVar2) ||
       ((*(ushort *)((long)plVar9 + 0x2c) >> 5 & 1) != 0)) {
      plVar5 = (long *)0x0;
    }
    else {
      iVar1 = *(int *)((long)plVar3 + 0xbc);
      if (uVar2 - 1 == 0) {
        FUN_108d7f0ac(plVar9);
      }
      if ((code *)plVar3[0x21] == (code *)0x0) {
        lVar7 = plVar9[1];
      }
      else {
        lVar7 = plVar3[0x24];
        (*(code *)plVar3[0x21])(lVar7,plVar9[1],uVar2,6);
        if (lVar7 == 0) {
          return (long *)0x7;
        }
      }
      plVar5 = (long *)plVar3[9];
      (**(code **)(*plVar5 + 0x18))
                (plVar5,lVar7,*(undefined4 *)((long)plVar3 + 0xbc),(long)iVar1 * (ulong)(uVar2 - 1))
      ;
      if (uVar2 == 1) {
        lVar10 = *(long *)(lVar7 + 0x18);
        plVar3[0x12] = *(long *)(lVar7 + 0x20);
        plVar3[0x11] = lVar10;
      }
      if (*(uint *)((long)plVar3 + 0x24) < uVar2) {
        *(uint *)((long)plVar3 + 0x24) = uVar2;
      }
      *(int *)(plVar3 + 0x1f) = (int)plVar3[0x1f] + 1;
      FUN_108d78a40(plVar3[0xe],uVar2,plVar9[1]);
      if ((int)plVar5 != 0) {
        return plVar5;
      }
    }
    plVar9 = (long *)plVar9[3];
    if (plVar9 == (long *)0x0) {
      return plVar5;
    }
  } while( true );
}



/* Entry: 108d7f0ac; end: 108d7f0e3;  */

void FUN_108d7f0ac(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x88);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 1;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  *(uint *)(*(long *)(param_1 + 8) + 0x18) = uVar1;
  *(uint *)(*(long *)(param_1 + 8) + 0x5c) = uVar1;
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x60) = 0xae62d00;
  return;
}



/* Entry: 108d7f0e4; end: 108d7f317;  */

/* WARNING: Possible PIC construction at 0x000108d7f1e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d7f1ec) */
/* WARNING: Removing unreachable block (ram,0x000108d7f1f0) */

void FUN_108d7f0e4(long *param_1,undefined1 *param_2,ulong param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  int iVar11;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined8 uStack_58;
  uint uStack_50;
  uint uStack_4c;
  long lStack_48;
  
  puVar7 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = *(code **)(*(long *)(param_2 + 0x20) + 0x108);
  if (pcVar10 == (code *)0x0) {
    lVar4 = *(long *)(param_2 + 8);
    puVar6 = param_2;
    uVar8 = param_3;
    lVar9 = param_4;
    if (lVar4 == 0) goto LAB_108d7f210;
LAB_108d7f144:
    lVar9 = *param_1;
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    uStack_60 = (undefined1)((uint)uVar1 >> 0x18);
    uStack_5f = (undefined1)((uint)uVar1 >> 0x10);
    uStack_5e = (undefined1)((uint)uVar1 >> 8);
    uStack_5d = (undefined1)uVar1;
    uStack_5c = (undefined1)(param_3 >> 0x18);
    uStack_5b = (undefined1)(param_3 >> 0x10);
    uStack_5a = (undefined1)(param_3 >> 8);
    uStack_59 = (undefined1)param_3;
    uStack_58 = *(undefined8 *)(lVar9 + 0x68);
    bVar3 = *(char *)(lVar9 + 0x55) == '\0';
    FUN_108d7b384(bVar3,&uStack_60,8,lVar9 + 0x60,lVar9 + 0x60);
    FUN_108d7b384(bVar3,lVar4,*(undefined4 *)(lVar9 + 0x38),lVar9 + 0x60,lVar9 + 0x60);
    uVar2 = (*(uint *)(lVar9 + 0x60) & 0xff00ff00) >> 8 | (*(uint *)(lVar9 + 0x60) & 0xff00ff) << 8;
    uStack_50 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (*(uint *)(lVar9 + 100) & 0xff00ff00) >> 8 | (*(uint *)(lVar9 + 100) & 0xff00ff) << 8;
    uStack_4c = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar8 = 0x18;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x120);
    puVar6 = *(undefined1 **)(param_2 + 8);
    uVar8 = (ulong)*(uint *)(param_2 + 0x28);
    lVar9 = 6;
    (*pcVar10)(lVar4,puVar6);
    if (lVar4 != 0) goto LAB_108d7f144;
LAB_108d7f210:
    param_4 = lVar9;
    puVar7 = puVar6;
    param_1 = (long *)0x7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  lVar4 = param_1[2];
  lVar9 = lVar4 - param_4;
  if ((lVar9 == 0 || lVar4 < param_4) || param_4 + (int)uVar8 < lVar4) {
LAB_108d7f280:
                    /* WARNING: Could not recover jumptable at 0x000108d7f2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],puVar7,uVar8,param_4);
    return;
  }
  plVar5 = (long *)param_1[1];
  (**(code **)(*plVar5 + 0x18))(plVar5,puVar7,lVar9,param_4);
  if ((int)plVar5 == 0) {
    iVar11 = (int)lVar9;
    uVar2 = (int)uVar8 - iVar11;
    uVar8 = (ulong)uVar2;
    plVar5 = (long *)param_1[1];
    (**(code **)(*plVar5 + 0x28))(plVar5,*(uint *)(param_1 + 3) & 0x13);
    if (uVar2 != 0 && (int)plVar5 == 0) {
      param_4 = param_4 + iVar11;
      puVar7 = puVar7 + iVar11;
      goto LAB_108d7f280;
    }
  }
  return;
}



/* Entry: 108d7f318; end: 108d7f367;  */

long FUN_108d7f318(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x138) != 0) {
    return 0;
  }
  do {
    lVar2 = param_1;
    FUN_108d7c17c(param_1,4);
    if ((int)lVar2 != 5) {
      return lVar2;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0xe8);
    (**(code **)(param_1 + 0xe0))();
  } while (iVar1 != 0);
  return 5;
}



/* Entry: 108d7f368; end: 108d7f527;  */

undefined8 FUN_108d7f368(char *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  
  if (*param_1 == '\0') {
    bVar6 = param_1[6];
    lVar4 = *(long *)(param_1 + 0x48);
    lVar5 = *(long *)(param_1 + 0x50);
    puVar2 = (undefined1 *)(lVar5 + (ulong)bVar6);
    pcVar12 = param_1;
    FUN_108d7c93c(param_1,*puVar2);
    if ((int)pcVar12 == 0) {
      iVar13 = *(int *)(lVar4 + 0x34);
      iVar3 = *(int *)(lVar4 + 0x38);
      *(short *)(param_1 + 0x14) = (short)iVar13 + -1;
      param_1[1] = '\0';
      uVar1 = (uint)bVar6 + (uint)(byte)param_1[7] + 8;
      *(short *)(param_1 + 0xe) = (short)uVar1;
      *(long *)(param_1 + 0x58) = lVar5 + iVar3;
      *(ulong *)(param_1 + 0x60) = lVar5 + (ulong)uVar1;
      uVar7 = puVar2[5];
      uVar8 = puVar2[6];
      uVar9 = *(ushort *)(puVar2 + 3);
      uVar14 = (uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8;
      *(short *)(param_1 + 0x12) = (short)uVar14;
      if (((uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8) <= (iVar13 - 8U) / 6) {
        uVar1 = uVar1 + uVar14 * 2;
        uVar14 = (uint)(*(ushort *)(puVar2 + 1) >> 8) | (*(ushort *)(puVar2 + 1) & 0xff00ff) << 8;
        iVar13 = (uint)(byte)puVar2[7] + (CONCAT11(uVar7,uVar8) - 1 & 0xffff) + 1;
        if (uVar14 != 0) {
          do {
            if ((uVar14 < uVar1) || (iVar3 + -4 < (int)uVar14)) goto LAB_108d7f4f4;
            uVar9 = *(ushort *)(lVar5 + (ulong)uVar14);
            uVar10 = (uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8;
            uVar9 = ((ushort *)(lVar5 + (ulong)uVar14))[1];
            uVar11 = (uint)(uVar9 >> 8) | (uVar9 & 0xff00ff) << 8;
            if (((uVar10 != 0) && (uVar10 <= uVar14 + uVar11 + 3)) ||
               (iVar3 < (int)(uVar11 + uVar14))) goto LAB_108d7f4f4;
            iVar13 = uVar11 + iVar13;
            uVar14 = uVar10;
          } while (uVar10 != 0);
        }
        if (iVar13 <= iVar3) {
          *(short *)(param_1 + 0x10) = (short)iVar13 - (short)uVar1;
          *param_1 = '\x01';
          return 0;
        }
      }
    }
LAB_108d7f4f4:
    uVar15 = 0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  else {
    uVar15 = 0;
  }
  return uVar15;
}



/* Entry: 108d7f528; end: 108d7f5fb;  */

void FUN_108d7f528(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  lVar1 = *(long *)(lVar2 + 0x58);
  if (lVar1 != 0) {
    (*pcRam00000001132979a0)();
    if ((int)lVar1 != 0) {
      for (lVar1 = param_1[4]; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
        if (*(char *)(lVar1 + 0x12) != '\0') {
          FUN_108d7f5fc(lVar1);
        }
      }
      lVar1 = param_1[1];
      if (*(long *)(lVar1 + 0x58) != 0) {
        (*pcRam0000000113297998)();
        lVar1 = param_1[1];
      }
      *(undefined8 *)(lVar1 + 8) = *param_1;
      do {
        *(undefined1 *)((long)param_1 + 0x12) = 1;
        do {
          param_1 = (undefined8 *)param_1[4];
          if (param_1 == (undefined8 *)0x0) {
            return;
          }
        } while (*(int *)((long)param_1 + 0x14) == 0);
        lVar1 = param_1[1];
        if (*(long *)(lVar1 + 0x58) != 0) {
          (*pcRam0000000113297998)();
          lVar1 = param_1[1];
        }
        *(undefined8 *)(lVar1 + 8) = *param_1;
      } while( true );
    }
    lVar2 = param_1[1];
  }
  *(undefined8 *)(lVar2 + 8) = *param_1;
  *(undefined1 *)((long)param_1 + 0x12) = 1;
  return;
}



/* Entry: 108d7f5fc; end: 108d7f633;  */

void FUN_108d7f5fc(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + 0x58) != 0) {
    (*pcRam00000001132979a8)();
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}



/* Entry: 108d7f634; end: 108d7f6d3;  */

uint FUN_108d7f634(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    lVar4 = *(long *)(param_1 + 8);
    iVar5 = *(int *)(lVar4 + 0x34);
    iVar6 = *(int *)(lVar4 + 0x38);
    uVar7 = (uint)*(byte *)(lVar4 + 0x26);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
      lVar4 = *(long *)(param_1 + 8);
      iVar5 = *(int *)(lVar4 + 0x34);
      iVar6 = *(int *)(lVar4 + 0x38);
      bVar2 = *(byte *)(lVar4 + 0x26);
      uVar7 = (uint)bVar2;
      if (*(char *)(param_1 + 0x11) == '\0') goto LAB_108d7f6b8;
      iVar3 = *(int *)(param_1 + 0x14) + -1;
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      iVar5 = *(int *)(lVar4 + 0x34);
      iVar6 = *(int *)(lVar4 + 0x38);
      bVar2 = *(byte *)(lVar4 + 0x26);
    }
    uVar7 = (uint)bVar2;
    *(int *)(param_1 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_108d7f5fc(param_1);
    }
  }
LAB_108d7f6b8:
  uVar1 = iVar5 - iVar6;
  if (iVar5 - iVar6 <= (int)uVar7) {
    uVar1 = uVar7;
  }
  return uVar1;
}



/* Entry: 108d7f6d4; end: 108d7f7ab;  */

void FUN_108d7f6d4(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x38) / 5;
  if (param_2 < 2) {
    iVar5 = 0;
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x34) != 0) {
      uVar3 = uRam0000000113298da4 / *(uint *)(param_1 + 0x34);
    }
  }
  else {
    uVar1 = uVar2 + 1;
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = (param_2 - 2) / uVar1;
    }
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x34) != 0) {
      uVar3 = uRam0000000113298da4 / *(uint *)(param_1 + 0x34);
    }
    iVar5 = 2;
    if (uVar4 * uVar1 + 1 == uVar3) {
      iVar5 = 3;
    }
    iVar5 = iVar5 + uVar4 * uVar1;
  }
  uVar2 = uVar2 + 1;
  uVar4 = *(uint *)(param_1 + 0x38) / 5;
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = ((param_3 - param_2) + uVar4 + iVar5) / uVar4;
  }
  uVar1 = (param_2 - param_3) - uVar1;
  uVar4 = uVar3 + 1;
  uVar1 = uVar1 - (uVar4 < param_2 && uVar1 < uVar4);
  do {
    uVar6 = uVar1;
    if (uVar6 < 2) {
      uVar7 = 0;
    }
    else {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = (uVar6 - 2) / uVar2;
      }
      iVar5 = 2;
      if (uVar1 * uVar2 + 1 == uVar3) {
        iVar5 = 3;
      }
      uVar7 = iVar5 + uVar1 * uVar2;
    }
    uVar1 = uVar6 - 1;
  } while ((uVar6 == uVar7) || (uVar6 == uVar4));
  return;
}



/* Entry: 108d7f7ac; end: 108d7fa7b;  */

long FUN_108d7f7ac(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lStack_70;
  uint uStack_64;
  long lStack_60;
  undefined4 uStack_58;
  char cStack_51;
  
  uVar4 = (uint)param_3;
  if (uVar4 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x38) / 5 + 1;
    uVar8 = 0;
    if (uVar3 != 0) {
      uVar8 = (uVar4 - 2) / uVar3;
    }
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x34) != 0) {
      uVar1 = uRam0000000113298da4 / *(uint *)(param_1 + 0x34);
    }
    iVar7 = 2;
    if (uVar8 * uVar3 + 1 == uVar1) {
      iVar7 = 3;
    }
    uVar3 = iVar7 + uVar8 * uVar3;
  }
  iVar7 = (int)param_4;
  if (uVar3 != uVar4) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x34) != 0) {
      uVar3 = uRam0000000113298da4 / *(uint *)(param_1 + 0x34);
    }
    if (uVar4 != uVar3 + 1) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
      if ((*(char *)(lVar6 + 0x25) == '\0' && *(char *)(lVar6 + 0x24) == '\0') &&
          (*(char *)(lVar6 + 0x26) == '\0' && *(char *)(lVar6 + 0x27) == '\0')) {
        return 0x65;
      }
      lVar6 = param_1;
      func_0x000108d7d730(param_1,param_3,&cStack_51,&uStack_58);
      if ((int)lVar6 != 0) {
        return lVar6;
      }
      if (cStack_51 == '\x02') {
        if (iVar7 == 0) {
          lVar6 = param_1;
          FUN_108d7fa7c(param_1,&lStack_60,&lStack_70,param_3,1);
          if ((int)lVar6 != 0) {
            return lVar6;
          }
          if (lStack_60 != 0) {
            func_0x000108d787d8(*(undefined8 *)(lStack_60 + 0x68));
          }
        }
      }
      else {
        if (cStack_51 == '\x01') {
          FUN_108d64c00(0xb,&UNK_10f51799f);
          return 0xb;
        }
        lVar6 = param_1;
        func_0x000108d7be68(param_1,param_3,&lStack_60,0);
        if ((int)lVar6 != 0) {
          return lVar6;
        }
        uVar5 = 2;
        uVar3 = param_2;
        if (iVar7 != 0) {
          uVar5 = 0;
          uVar3 = 0;
        }
        do {
          lVar6 = param_1;
          FUN_108d7fa7c(param_1,&lStack_70,&uStack_64,uVar3,uVar5);
          if ((int)lVar6 != 0) {
            if (lStack_60 != 0) {
              func_0x000108d787d8(*(undefined8 *)(lStack_60 + 0x68));
              return lVar6;
            }
            return lVar6;
          }
          if (lStack_70 != 0) {
            func_0x000108d787d8(*(undefined8 *)(lStack_70 + 0x68));
          }
        } while ((iVar7 != 0) && (param_2 < uStack_64));
        lVar6 = param_1;
        func_0x000108d80254(param_1,lStack_60,cStack_51,uStack_58,uStack_64,param_4);
        if (lStack_60 != 0) {
          func_0x000108d787d8(*(undefined8 *)(lStack_60 + 0x68));
        }
        if ((int)lVar6 != 0) {
          return lVar6;
        }
      }
    }
  }
  if (iVar7 == 0) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x34) != 0) {
      uVar3 = uRam0000000113298da4 / *(uint *)(param_1 + 0x34);
    }
    do {
      do {
        uVar8 = uVar4;
        uVar4 = uVar8 - 1;
      } while ((-2 - uVar3) + uVar4 == -1);
      if (uVar4 < 2) {
        uVar8 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x38) / 5 + 1;
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uVar8 - 3) / uVar1;
        }
        iVar7 = 2;
        if (uVar2 * uVar1 + 1 == uVar3) {
          iVar7 = 3;
        }
        uVar8 = iVar7 + uVar2 * uVar1;
      }
    } while (uVar4 == uVar8);
    *(undefined1 *)(param_1 + 0x23) = 1;
    *(uint *)(param_1 + 0x40) = uVar4;
  }
  return 0;
}



/* Entry: 108d7fa7c; end: 108d80537;  */

long FUN_108d7fa7c(long param_1,long *param_2,uint *param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  lVar23 = *(long *)(param_1 + 0x18);
  uVar10 = *(uint *)(param_1 + 0x40);
  uVar12 = *(uint *)(*(long *)(lVar23 + 0x50) + 0x24);
  uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
  uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
  if (uVar12 < uVar10) {
    if (uVar12 == 0) {
      bVar7 = *(char *)(param_1 + 0x23) == '\0';
      lVar23 = *(long *)(lVar23 + 0x68);
      FUN_108d5ffdc();
      if ((int)lVar23 != 0) {
        return lVar23;
      }
      uVar12 = *(uint *)(param_1 + 0x40);
      uVar10 = uVar12 + 1;
      *(uint *)(param_1 + 0x40) = uVar10;
      uVar20 = 0;
      if (*(uint *)(param_1 + 0x34) != 0) {
        uVar20 = uRam0000000113298da4 / *(uint *)(param_1 + 0x34);
      }
      if (uVar12 == uVar20) {
        uVar10 = uVar12 + 2;
        *(uint *)(param_1 + 0x40) = uVar10;
      }
      if (*(char *)(param_1 + 0x21) != '\0') {
        if (uVar10 < 2) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(uint *)(param_1 + 0x38) / 5 + 1;
          uVar11 = 0;
          if (uVar12 != 0) {
            uVar11 = (uVar10 - 2) / uVar12;
          }
          iVar13 = 2;
          if (uVar11 * uVar12 + 1 == uVar20) {
            iVar13 = 3;
          }
          uVar12 = iVar13 + uVar11 * uVar12;
        }
        if (uVar12 == uVar10) {
          lStack_70 = 0;
          lVar8 = param_1;
          func_0x000108d7be68(param_1,uVar10,&lStack_70,bVar7);
          lVar23 = lStack_70;
          if ((int)lVar8 != 0) {
            return lVar8;
          }
          lVar8 = *(long *)(lStack_70 + 0x68);
          FUN_108d5ffdc();
          func_0x000108d787d8(*(undefined8 *)(lVar23 + 0x68));
          if ((int)lVar8 != 0) {
            return lVar8;
          }
          uVar12 = *(uint *)(param_1 + 0x40);
          uVar10 = uVar12 + 1;
          *(uint *)(param_1 + 0x40) = uVar10;
          uVar20 = 0;
          if (*(uint *)(param_1 + 0x34) != 0) {
            uVar20 = uRam0000000113298da4 / *(uint *)(param_1 + 0x34);
          }
          if (uVar12 == uVar20) {
            uVar10 = uVar12 + 2;
            *(uint *)(param_1 + 0x40) = uVar10;
          }
        }
      }
      uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0x50) + 0x1c) =
           uVar10 >> 0x10 | uVar10 << 0x10;
      uVar10 = *(uint *)(param_1 + 0x40);
      *param_3 = uVar10;
      func_0x000108d7be68(param_1,uVar10,param_2,bVar7);
      if ((int)param_1 != 0) {
        return param_1;
      }
      lVar8 = *(long *)(*param_2 + 0x68);
      FUN_108d5ffdc();
      puVar15 = (undefined1 *)*param_2;
      if ((int)lVar8 != 0) {
        if (puVar15 != (undefined1 *)0x0) {
          func_0x000108d787d8(*(undefined8 *)(puVar15 + 0x68));
        }
        goto LAB_108d80214;
      }
    }
    else {
      uVar20 = (uint)param_4;
      if (param_5 == 2) {
        bVar7 = true;
      }
      else if ((param_5 == 1) && (uVar20 <= uVar10)) {
        lVar8 = param_1;
        func_0x000108d7d730(param_1,param_4,&lStack_70,0);
        bVar7 = (char)lStack_70 == '\x02';
        if ((int)lVar8 != 0) {
          return lVar8;
        }
      }
      else {
        bVar7 = false;
      }
      lVar8 = *(long *)(lVar23 + 0x68);
      FUN_108d5ffdc();
      if ((int)lVar8 != 0) {
        return lVar8;
      }
      uVar12 = (uVar12 - 1 & 0xff00ff00) >> 8 | (uVar12 - 1 & 0xff00ff) << 8;
      *(uint *)(*(long *)(lVar23 + 0x50) + 0x24) = uVar12 >> 0x10 | uVar12 << 0x10;
      lVar19 = 0;
      do {
        if (lVar19 == 0) {
          lVar8 = *(long *)(lVar23 + 0x50);
          uVar12 = (uint)*(byte *)(lVar8 + 0x20) << 0x18 | (uint)*(byte *)(lVar8 + 0x21) << 0x10 |
                   (uint)*(byte *)(lVar8 + 0x22) << 8;
          pbVar16 = (byte *)(lVar8 + 0x23);
        }
        else {
          pbVar16 = *(byte **)(lVar19 + 0x50);
          uVar12 = (uint)*pbVar16 << 0x18 | (uint)pbVar16[1] << 0x10 | (uint)pbVar16[2] << 8;
          pbVar16 = pbVar16 + 3;
        }
        uVar12 = uVar12 | *pbVar16;
        if (uVar10 < uVar12) {
          lVar8 = 0xb;
          FUN_108d64c00(0xb,&UNK_10f51799f);
          goto LAB_108d80204;
        }
        lVar8 = param_1;
        func_0x000108d7be68(param_1,uVar12,&lStack_68,0);
        lVar22 = lStack_68;
        if ((int)lVar8 != 0) goto LAB_108d80204;
        lVar24 = *(long *)(lStack_68 + 0x50);
        uVar11 = (*(uint *)(lVar24 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar24 + 4) & 0xff00ff) << 8
        ;
        uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
        if ((bVar7) || (uVar11 != 0)) {
          if ((*(uint *)(param_1 + 0x38) >> 2) - 2 < uVar11) {
LAB_108d80180:
            lVar8 = 0xb;
            FUN_108d64c00(0xb,&UNK_10f51799f);
            goto LAB_108d801fc;
          }
          if ((bVar7) && (uVar20 == uVar12 || param_5 == 2 && uVar12 < uVar20)) {
            *param_3 = uVar12;
            *param_2 = lStack_68;
            lVar8 = *(long *)(lStack_68 + 0x68);
            FUN_108d5ffdc();
            if ((int)lVar8 != 0) goto LAB_108d801fc;
            if (uVar11 == 0) {
              if (lVar19 == 0) {
                *(undefined4 *)(*(long *)(lVar23 + 0x50) + 0x20) = **(undefined4 **)(lVar22 + 0x50);
              }
              else {
                lVar8 = *(long *)(lVar19 + 0x68);
                FUN_108d5ffdc();
                if ((int)lVar8 != 0) goto LAB_108d801fc;
                **(undefined4 **)(lVar19 + 0x50) = **(undefined4 **)(lVar22 + 0x50);
              }
            }
            else {
              lVar8 = *(long *)(lVar22 + 0x50);
              bVar2 = *(byte *)(lVar8 + 8);
              bVar3 = *(byte *)(lVar8 + 9);
              bVar4 = *(byte *)(lVar8 + 10);
              bVar5 = *(byte *)(lVar8 + 0xb);
              uVar12 = (uint)bVar2 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5;
              if (uVar10 < uVar12) goto LAB_108d80180;
              lVar8 = param_1;
              func_0x000108d7be68(param_1,uVar12,&lStack_70,0);
              lVar24 = lStack_70;
              if ((int)lVar8 != 0) goto LAB_108d801fc;
              lVar8 = *(long *)(lStack_70 + 0x68);
              FUN_108d5ffdc();
              if ((int)lVar8 != 0) {
                func_0x000108d787d8(*(undefined8 *)(lVar24 + 0x68));
                goto LAB_108d801fc;
              }
              **(undefined4 **)(lVar24 + 0x50) = **(undefined4 **)(lVar22 + 0x50);
              uVar11 = uVar11 - 1;
              uVar12 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
              *(uint *)(*(long *)(lVar24 + 0x50) + 4) = uVar12 >> 0x10 | uVar12 << 0x10;
              _memcpy(*(long *)(lVar24 + 0x50) + 8,*(long *)(lVar22 + 0x50) + 0xc,uVar11 * 4);
              func_0x000108d787d8(*(undefined8 *)(lVar24 + 0x68));
              if (lVar19 == 0) {
                lVar8 = *(long *)(lVar23 + 0x50);
                *(byte *)(lVar8 + 0x20) = bVar2;
                *(byte *)(lVar8 + 0x21) = bVar3;
                *(byte *)(lVar8 + 0x22) = bVar4;
                *(byte *)(lVar8 + 0x23) = bVar5;
              }
              else {
                lVar8 = *(long *)(lVar19 + 0x68);
                FUN_108d5ffdc();
                if ((int)lVar8 != 0) goto LAB_108d801fc;
                pbVar16 = *(byte **)(lVar19 + 0x50);
                *pbVar16 = bVar2;
                pbVar16[1] = bVar3;
                pbVar16[2] = bVar4;
                pbVar16[3] = bVar5;
              }
            }
            lVar22 = 0;
            lVar8 = 0;
            lStack_68 = 0;
            bVar6 = false;
            goto LAB_108d80008;
          }
          if (uVar11 != 0) {
            if (uVar20 == 0) {
LAB_108d7fe10:
              uVar21 = 0;
            }
            else {
              if (param_5 == 2) {
                uVar21 = 0;
                uVar14 = 8;
                do {
                  uVar12 = *(uint *)(lVar24 + (uVar14 & 0xfffffffc));
                  uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
                  if ((uVar12 >> 0x10 | uVar12 << 0x10) <= uVar20) goto LAB_108d7fe14;
                  uVar21 = uVar21 + 1;
                  uVar14 = uVar14 + 4;
                } while (uVar11 != uVar21);
                goto LAB_108d7fe10;
              }
              if (uVar11 == 1) goto LAB_108d7fe10;
              uVar21 = 0;
              uVar12 = (*(uint *)(lVar24 + 8) & 0xff00ff00) >> 8 |
                       (*(uint *)(lVar24 + 8) & 0xff00ff) << 8;
              uVar1 = (uVar12 >> 0x10 | uVar12 << 0x10) - uVar20;
              uVar12 = 0x7fffffff;
              if (uVar1 != 0x80000000) {
                uVar12 = -uVar1;
              }
              if (-1 < (int)uVar1) {
                uVar12 = uVar1;
              }
              uVar17 = 0xc;
              uVar14 = 1;
              do {
                uVar1 = *(uint *)(lVar24 + (uVar17 & 0xfffffffc));
                uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                uVar18 = (uVar1 >> 0x10 | uVar1 << 0x10) - uVar20;
                uVar1 = 0x7fffffff;
                if (uVar18 != 0x80000000) {
                  uVar1 = -uVar18;
                }
                if (-1 < (int)uVar18) {
                  uVar1 = uVar18;
                }
                uVar18 = (uint)uVar14;
                if (uVar12 <= uVar1) {
                  uVar18 = (uint)uVar21;
                }
                uVar21 = (ulong)uVar18;
                if (uVar12 <= uVar1) {
                  uVar1 = uVar12;
                }
                uVar14 = uVar14 + 1;
                uVar17 = uVar17 + 4;
                uVar12 = uVar1;
              } while (uVar11 != uVar14);
            }
LAB_108d7fe14:
            uVar12 = (uint)uVar21 * 4 + 8;
            uVar1 = *(uint *)(lVar24 + (ulong)uVar12);
            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
            uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
            if (uVar10 < uVar1) {
              lVar8 = 0xb;
              FUN_108d64c00(0xb,&UNK_10f51799f);
              goto joined_r0x000108d801cc;
            }
            if (((!bVar7) || (uVar1 == uVar20)) || (param_5 == 2 && uVar1 < uVar20)) {
              *param_3 = uVar1;
              lVar8 = *(long *)(lStack_68 + 0x68);
              FUN_108d5ffdc();
              if ((int)lVar8 == 0) {
                uVar1 = uVar11 - 1;
                if ((uint)uVar21 < uVar1) {
                  *(undefined4 *)(lVar24 + (ulong)uVar12) =
                       *(undefined4 *)(lVar24 + (ulong)(uVar11 * 4 + 4));
                }
                uVar12 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                *(uint *)(lVar24 + 4) = uVar12 >> 0x10 | uVar12 << 0x10;
                uVar12 = *param_3;
                puVar9 = *(uint **)(param_1 + 0x60);
                if (puVar9 == (uint *)0x0) {
                  uVar11 = 1;
                }
                else if (*puVar9 < uVar12) {
                  uVar11 = 0;
                }
                else {
                  FUN_108d7898c(puVar9,uVar12);
                  uVar11 = (uint)puVar9 ^ 1;
                }
                lVar8 = param_1;
                func_0x000108d7be68(param_1,uVar12,param_2,uVar11);
                if ((int)lVar8 == 0) {
                  lVar8 = *(long *)(*param_2 + 0x68);
                  FUN_108d5ffdc();
                  if (((int)lVar8 != 0) && (*param_2 != 0)) {
                    func_0x000108d787d8(*(undefined8 *)(*param_2 + 0x68));
                  }
                }
                bVar6 = false;
                goto LAB_108d80008;
              }
              goto LAB_108d801fc;
            }
            bVar7 = true;
          }
          lVar8 = 0;
          bVar6 = bVar7;
        }
        else {
          lVar8 = *(long *)(lStack_68 + 0x68);
          FUN_108d5ffdc();
          if ((int)lVar8 != 0) goto LAB_108d801fc;
          *param_3 = uVar12;
          *(undefined4 *)(*(long *)(lVar23 + 0x50) + 0x20) = **(undefined4 **)(lVar22 + 0x50);
          *param_2 = lVar22;
          lStack_68 = 0;
          lVar22 = 0;
          bVar6 = false;
        }
LAB_108d80008:
        if (lVar19 != 0) {
          func_0x000108d787d8(*(undefined8 *)(lVar19 + 0x68));
        }
        bVar7 = true;
        lVar19 = lVar22;
      } while (bVar6);
      lVar19 = 0;
joined_r0x000108d801cc:
      if (lVar22 != 0) {
LAB_108d801fc:
        func_0x000108d787d8(*(undefined8 *)(lVar22 + 0x68));
      }
LAB_108d80204:
      if (lVar19 != 0) {
        func_0x000108d787d8(*(undefined8 *)(lVar19 + 0x68));
      }
      if ((int)lVar8 != 0) {
LAB_108d80214:
        *param_2 = 0;
        return lVar8;
      }
      puVar15 = (undefined1 *)*param_2;
    }
    if (*(short *)(*(long *)(puVar15 + 0x68) + 0x2e) < 2) {
      *puVar15 = 0;
      return 0;
    }
    func_0x000108d787d8();
    *param_2 = 0;
  }
  FUN_108d64c00(0xb,&UNK_10f51799f);
  return 0xb;
}



/* Entry: 108d80538; end: 108d80633;  */

int FUN_108d80538(undefined1 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iStack_54;
  
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  puVar5 = param_1;
  FUN_108d7f368();
  iStack_54 = (int)puVar5;
  if (iStack_54 == 0) {
    uVar4 = *(ushort *)(param_1 + 0x12);
    if ((ulong)uVar4 != 0) {
      lVar7 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x50);
        uVar9 = (ulong)(CONCAT11(*(undefined1 *)(*(long *)(param_1 + 0x60) + lVar7),
                                 ((undefined1 *)(*(long *)(param_1 + 0x60) + lVar7))[1]) &
                       *(ushort *)(param_1 + 0x14));
        func_0x000108d80b50(param_1,lVar8 + uVar9,&iStack_54);
        if (param_1[5] == '\0') {
          uVar2 = *(uint *)(lVar8 + uVar9);
          uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          FUN_108d80634(uVar6,uVar2 >> 0x10 | uVar2 << 0x10,5,uVar1,&iStack_54);
        }
        lVar7 = lVar7 + 2;
      } while ((ulong)uVar4 * 2 - lVar7 != 0);
    }
    if (param_1[5] == '\0') {
      uVar2 = *(uint *)(*(long *)(param_1 + 0x50) + (ulong)(byte)param_1[6] + 8);
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      FUN_108d80634(uVar6,uVar2 >> 0x10 | uVar2 << 0x10,5,uVar1,&iStack_54);
    }
  }
  *param_1 = uVar3;
  return iStack_54;
}



/* Entry: 108d80634; end: 108d807d7;  */

void FUN_108d80634(undefined8 *param_1,int param_2,uint param_3,undefined8 param_4,int *param_5)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lStack_48;
  
  if (*param_5 != 0) {
    return;
  }
  if (param_2 == 1) {
    uVar10 = 0;
  }
  else {
    if (param_2 == 0) {
      FUN_108d64c00(0xb,&UNK_10f51799f);
      *param_5 = 0xb;
      return;
    }
    uVar10 = *(uint *)(param_1 + 7) / 5 + 1;
    uVar3 = 0;
    if (uVar10 != 0) {
      uVar3 = (param_2 - 2U) / uVar10;
    }
    uVar4 = 0;
    if (*(uint *)((long)param_1 + 0x34) != 0) {
      uVar4 = uRam0000000113298da4 / *(uint *)((long)param_1 + 0x34);
    }
    iVar8 = 2;
    if (uVar3 * uVar10 + 1 == uVar4) {
      iVar8 = 3;
    }
    uVar10 = iVar8 + uVar3 * uVar10;
  }
  uVar7 = *param_1;
  FUN_108d5fcfc(uVar7,uVar10,&lStack_48,0);
  if ((int)uVar7 != 0) {
    *param_5 = (int)uVar7;
    return;
  }
  uVar10 = (param_2 + ~uVar10) * 5;
  if ((int)uVar10 < 0) {
    FUN_108d64c00(0xb,&UNK_10f51799f);
    *param_5 = 0xb;
    if (lStack_48 == 0) {
      return;
    }
  }
  else {
    pbVar1 = (byte *)(*(long *)(lStack_48 + 8) + (ulong)uVar10);
    if ((param_3 != *pbVar1) ||
       (uVar10 = (*(uint *)(pbVar1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(pbVar1 + 1) & 0xff00ff) << 8
       , (uVar10 >> 0x10 | uVar10 << 0x10) != (uint)param_4)) {
      lVar9 = lStack_48;
      FUN_108d5ffdc();
      *param_5 = (int)lVar9;
      if ((int)lVar9 == 0) {
        *pbVar1 = (byte)param_3;
        pbVar1[1] = (byte)((ulong)param_4 >> 0x18);
        pbVar1[2] = (byte)((ulong)param_4 >> 0x10);
        pbVar1[3] = (byte)((ulong)param_4 >> 8);
        pbVar1[4] = (byte)param_4;
      }
    }
  }
  lVar9 = *(long *)(lStack_48 + 0x20);
  if ((*(ushort *)(lStack_48 + 0x2c) >> 6 & 1) == 0) {
    FUN_108d78844();
    iVar8 = *(int *)(lVar9 + 0x98);
  }
  else {
    iVar8 = *(int *)(lVar9 + 0x98) + -1;
    *(int *)(lVar9 + 0x98) = iVar8;
    *(undefined8 *)(lStack_48 + 0x18) = *(undefined8 *)(lVar9 + 0xa8);
    *(long *)(lVar9 + 0xa8) = lStack_48;
  }
  if ((iVar8 != 0) || (*(int *)(*(long *)(lVar9 + 0x130) + 0x18) != 0)) {
    return;
  }
  cVar2 = *(char *)(lVar9 + 0x14);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      if (*(char *)(lVar9 + 8) == '\0') {
        FUN_108d76e44(lVar9,0,0);
      }
    }
    else if (cVar2 != '\x06') {
      if (pcRam000000011372e6f8 != (code *)0x0) {
        (*pcRam000000011372e6f8)();
      }
      func_0x000108d76d70(lVar9);
      if (pcRam000000011372e700 != (code *)0x0) {
        (*pcRam000000011372e700)();
      }
    }
  }
  FUN_108d77c44(*(undefined8 *)(lVar9 + 0x40));
  *(undefined8 *)(lVar9 + 0x40) = 0;
  FUN_108d793c8(lVar9);
  if (*(long *)(lVar9 + 0x138) == 0) {
    if (*(char *)(lVar9 + 8) != '\0') goto LAB_108d77238;
    plVar6 = *(long **)(lVar9 + 0x48);
    if (((*plVar6 == 0) || ((**(code **)(*plVar6 + 0x60))(), ((uint)plVar6 >> 0xb & 1) == 0)) ||
       ((*(byte *)(lVar9 + 9) & 5) != 1)) {
      plVar6 = *(long **)(lVar9 + 0x50);
      if (*plVar6 != 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
        *plVar6 = 0;
      }
    }
    plVar6 = *(long **)(lVar9 + 0x48);
    if (*plVar6 != 0) {
      if (*(char *)(lVar9 + 0x11) == '\0') {
        (**(code **)(*plVar6 + 0x40))(plVar6,0);
        bVar5 = (int)plVar6 == 0;
      }
      else {
        bVar5 = true;
      }
      if (*(char *)(lVar9 + 0x15) != '\x05') {
        *(undefined1 *)(lVar9 + 0x15) = 0;
      }
      if ((!bVar5) && (*(char *)(lVar9 + 0x14) == '\x06')) {
        *(undefined1 *)(lVar9 + 0x15) = 5;
      }
    }
    *(undefined1 *)(lVar9 + 0x16) = 0;
  }
  else {
    FUN_108d79470();
  }
  *(undefined1 *)(lVar9 + 0x14) = 0;
LAB_108d77238:
  if (*(int *)(lVar9 + 0x2c) != 0) {
    FUN_108d78cec(lVar9);
    *(undefined1 *)(lVar9 + 0x16) = *(undefined1 *)(lVar9 + 0x10);
    *(undefined1 *)(lVar9 + 0x14) = 0;
    *(undefined4 *)(lVar9 + 0x2c) = 0;
  }
  *(undefined1 *)(lVar9 + 0x17) = 0;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(undefined8 *)(lVar9 + 0x68) = 0;
  return;
}



/* Entry: 108d807d8; end: 108d8099b;  */

undefined8 FUN_108d807d8(undefined1 *param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_80 [22];
  ushort uStack_6a;
  
  if (param_4 == 4) {
    uVar2 = **(uint **)(param_1 + 0x50);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    if ((uVar2 >> 0x10 | uVar2 << 0x10) == param_2) {
      uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
      **(uint **)(param_1 + 0x50) = uVar2 >> 0x10 | uVar2 << 0x10;
      return 0;
    }
LAB_108d8094c:
    uVar5 = 0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  else {
    uVar3 = *param_1;
    FUN_108d7f368(param_1);
    uVar4 = *(ushort *)(param_1 + 0x12);
    if (uVar4 == 0) {
      uVar6 = 0;
LAB_108d80908:
      if ((uint)uVar6 == (uint)uVar4) goto LAB_108d80910;
    }
    else {
      lVar7 = 0;
      uVar6 = 0;
      do {
        puVar1 = (uint *)(*(long *)(param_1 + 0x50) +
                         (ulong)(CONCAT11(*(undefined1 *)(*(long *)(param_1 + 0x60) + lVar7),
                                          ((undefined1 *)(*(long *)(param_1 + 0x60) + lVar7))[1]) &
                                *(ushort *)(param_1 + 0x14)));
        if (param_4 == 3) {
          FUN_108d7cec4(param_1,puVar1,auStack_80);
          if ((((ulong)uStack_6a != 0) &&
              (puVar1 = (uint *)((long)puVar1 + (ulong)uStack_6a),
              (long)puVar1 + 3U <= *(long *)(param_1 + 0x50) + (ulong)*(ushort *)(param_1 + 0x14)))
             && (uVar2 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8,
                param_2 == (uVar2 >> 0x10 | uVar2 << 0x10))) {
            uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
            *puVar1 = uVar2 >> 0x10 | uVar2 << 0x10;
            goto LAB_108d80970;
          }
        }
        else {
          uVar2 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
          if ((uVar2 >> 0x10 | uVar2 << 0x10) == param_2) {
            uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
            *puVar1 = uVar2 >> 0x10 | uVar2 << 0x10;
            goto LAB_108d80908;
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 2;
      } while (uVar4 != uVar6);
LAB_108d80910:
      if ((param_4 != 5) ||
         (uVar2 = *(uint *)(*(long *)(param_1 + 0x50) + (ulong)(byte)param_1[6] + 8),
         uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8,
         (uVar2 >> 0x10 | uVar2 << 0x10) != param_2)) goto LAB_108d8094c;
      uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
      *(uint *)(*(long *)(param_1 + 0x50) + (ulong)(byte)param_1[6] + 8) =
           uVar2 >> 0x10 | uVar2 << 0x10;
    }
LAB_108d80970:
    uVar5 = 0;
    *param_1 = uVar3;
  }
  return uVar5;
}



/* Entry: 108d8099c; end: 108d80a03;  */

void FUN_108d8099c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  (*pcRam0000000113297a08)
            (*(undefined8 *)(param_1[6] + 0x40),*param_1,*(undefined4 *)(param_1 + 5),param_2);
  *(int *)(param_1 + 5) = (int)param_2;
  if (((*(ushort *)((long)param_1 + 0x2c) ^ 0xffff) & 6) != 0) {
    return;
  }
  plVar2 = (long *)param_1[6];
  puVar3 = param_1;
  if ((undefined8 *)plVar2[2] == param_1) {
    do {
      puVar3 = (undefined8 *)puVar3[8];
      if (puVar3 == (undefined8 *)0x0) break;
    } while ((*(ushort *)((long)puVar3 + 0x2c) >> 2 & 1) != 0);
    plVar2[2] = (long)puVar3;
  }
  lVar4 = param_1[7];
  lVar1 = param_1[8];
  if (lVar4 == 0) {
    plVar2[1] = lVar1;
    if (lVar1 == 0) {
      *plVar2 = 0;
      if ((char)plVar2[5] != '\0') {
        *(undefined1 *)((long)plVar2 + 0x29) = 2;
      }
      goto LAB_108d76c88;
    }
  }
  else {
    *(long *)(lVar4 + 0x40) = lVar1;
    if (lVar1 == 0) {
      *plVar2 = lVar4;
      goto LAB_108d76c88;
    }
  }
  *(long *)(lVar1 + 0x38) = lVar4;
LAB_108d76c88:
  param_1[7] = 0;
  param_1[8] = 0;
  lVar4 = *plVar2;
  param_1[7] = lVar4;
  if (lVar4 == 0) {
    plVar2[1] = (long)param_1;
    if ((char)plVar2[5] != '\0') {
      *(undefined1 *)((long)plVar2 + 0x29) = 1;
    }
  }
  else {
    *(undefined8 **)(lVar4 + 0x40) = param_1;
  }
  *plVar2 = (long)param_1;
  if ((plVar2[2] == 0) && ((*(ushort *)((long)param_1 + 0x2c) >> 2 & 1) == 0)) {
    plVar2[2] = (long)param_1;
    return;
  }
  return;
}



/* Entry: 108d80a04; end: 108d80c2b;  */

void FUN_108d80a04(uint *param_1,int param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_1 != (uint *)0x0) {
    uVar7 = param_2 - 1;
    do {
      uVar5 = param_1[2];
      if (uVar5 == 0) {
        if (*param_1 < 0xf81) {
          *(byte *)((long)param_1 + (ulong)(uVar7 >> 3) + 0x10) =
               *(byte *)((long)param_1 + (ulong)(uVar7 >> 3) + 0x10) &
               ((byte)(1 << (ulong)(uVar7 & 7)) ^ 0xff);
          return;
        }
        puVar1 = param_1 + 4;
        _memcpy(param_3,puVar1,0x1f0);
        uVar5 = 0;
        lVar6 = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        param_1[0x2e] = 0;
        param_1[0x2f] = 0;
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        param_1[0x32] = 0;
        param_1[0x33] = 0;
        param_1[0x30] = 0;
        param_1[0x31] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        param_1[0x34] = 0;
        param_1[0x35] = 0;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        param_1[0x38] = 0;
        param_1[0x39] = 0;
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x46] = 0;
        param_1[0x47] = 0;
        param_1[0x44] = 0;
        param_1[0x45] = 0;
        param_1[0x4a] = 0;
        param_1[0x4b] = 0;
        param_1[0x48] = 0;
        param_1[0x49] = 0;
        param_1[0x4e] = 0;
        param_1[0x4f] = 0;
        param_1[0x4c] = 0;
        param_1[0x4d] = 0;
        param_1[0x52] = 0;
        param_1[0x53] = 0;
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        param_1[0x56] = 0;
        param_1[0x57] = 0;
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        param_1[0x5a] = 0;
        param_1[0x5b] = 0;
        param_1[0x58] = 0;
        param_1[0x59] = 0;
        param_1[0x5e] = 0;
        param_1[0x5f] = 0;
        param_1[0x5c] = 0;
        param_1[0x5d] = 0;
        param_1[0x62] = 0;
        param_1[99] = 0;
        param_1[0x60] = 0;
        param_1[0x61] = 0;
        param_1[0x66] = 0;
        param_1[0x67] = 0;
        param_1[100] = 0;
        param_1[0x65] = 0;
        param_1[0x6a] = 0;
        param_1[0x6b] = 0;
        param_1[0x68] = 0;
        param_1[0x69] = 0;
        param_1[0x6e] = 0;
        param_1[0x6f] = 0;
        param_1[0x6c] = 0;
        param_1[0x6d] = 0;
        param_1[0x72] = 0;
        param_1[0x73] = 0;
        param_1[0x70] = 0;
        param_1[0x71] = 0;
        param_1[0x76] = 0;
        param_1[0x77] = 0;
        param_1[0x74] = 0;
        param_1[0x75] = 0;
        param_1[0x7a] = 0;
        param_1[0x7b] = 0;
        param_1[0x78] = 0;
        param_1[0x79] = 0;
        param_1[0x7e] = 0;
        param_1[0x7f] = 0;
        param_1[0x7c] = 0;
        param_1[0x7d] = 0;
        param_1[1] = 0;
        do {
          iVar2 = *(int *)(param_3 + lVar6 * 4);
          if (iVar2 != 0 && iVar2 != uVar7 + 1) {
            uVar5 = uVar5 + 1;
            param_1[1] = uVar5;
            uVar3 = (iVar2 - 1U) % 0x7c;
            while (uVar4 = uVar3, puVar1[uVar4] != 0) {
              uVar3 = 0;
              if (uVar4 + 1 < 0x7c) {
                uVar3 = uVar4 + 1;
              }
            }
            puVar1[uVar4] = *(uint *)(param_3 + lVar6 * 4);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x7c);
        return;
      }
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar7 / uVar5;
      }
      uVar7 = uVar7 - uVar3 * uVar5;
      param_1 = *(uint **)(param_1 + (ulong)uVar3 * 2 + 4);
    } while (param_1 != (uint *)0x0);
  }
  return;
}



/* Entry: 108d80c2c; end: 108d80e0f;  */

/* WARNING: Possible PIC construction at 0x000108d80cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d80cf8) */

void FUN_108d80c2c(long param_1,int param_2,long *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_3 == (long *)0x0) {
    return;
  }
  plVar4 = param_3;
  if (param_2 < -8) {
    if (param_2 < -0xb) {
      if ((1 < param_2 + 0xdU) && (param_2 != -0xf)) {
        return;
      }
    }
    else {
      if (param_2 == -0xb) {
        if (*(long *)(param_1 + 0x328) != 0) {
          return;
        }
        goto SUB_108d5e198;
      }
      if (param_2 != -10) {
        return;
      }
      if (*(long *)(param_1 + 0x328) != 0) {
        return;
      }
      param_1 = *param_3;
      iVar2 = (int)param_3[3] + -1;
      *(int *)(param_3 + 3) = iVar2;
      if (iVar2 != 0) {
        return;
      }
      if ((long *)param_3[2] != (long *)0x0) {
        (**(code **)(*(long *)param_3[2] + 0x20))();
      }
    }
  }
  else if (param_2 < -5) {
    if (param_2 != -8) {
      if (param_2 != -6) {
        return;
      }
      if (*(long *)(param_1 + 0x328) != 0) {
        return;
      }
      iVar2 = (int)*param_3 + -1;
      *(int *)param_3 = iVar2;
      if (iVar2 != 0) {
        return;
      }
      goto SUB_108d5e198;
    }
    if (*(long *)(param_1 + 0x328) == 0) {
      if (param_3 == (long *)0x0) {
        return;
      }
      if (((*(ushort *)(param_3 + 1) & 0x2460) != 0) || ((int)param_3[4] != 0)) {
        FUN_108d826d0(param_3);
      }
      param_1 = param_3[5];
    }
    else if ((int)param_3[4] != 0) {
      unaff_x30 = 0x108d80cf8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      plVar4 = (long *)param_3[3];
      unaff_x19 = param_3;
      unaff_x20 = param_1;
      unaff_x29 = puVar1;
    }
  }
  else if (param_2 == -5) {
    if ((*(ushort *)((long)param_3 + 2) >> 4 & 1) == 0) {
      return;
    }
  }
  else if (param_2 != -1) {
    return;
  }
  param_3 = plVar4;
  if (param_3 == (long *)0x0) {
    return;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x328) != 0) {
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((param_3 < *(long **)(param_1 + 0x170)) || (*(long **)(param_1 + 0x178) <= param_3)) {
        (*pcRam0000000113297950)();
        uVar3 = (uint)param_3;
      }
      else {
        uVar3 = (uint)*(ushort *)(param_1 + 0x150);
      }
      **(int **)(param_1 + 0x328) = **(int **)(param_1 + 0x328) + uVar3;
      return;
    }
    if ((*(long **)(param_1 + 0x170) <= param_3) && (param_3 < *(long **)(param_1 + 0x178))) {
      *param_3 = *(long *)(param_1 + 0x168);
      *(long **)(param_1 + 0x168) = param_3;
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
      return;
    }
  }
SUB_108d5e198:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (param_3 == (long *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (plRam0000000113829af0 != (long *)0x0) {
      (*pcRam0000000113297998)();
    }
    plVar4 = param_3;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)plVar4;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(param_3);
    param_3 = plRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (plRam0000000113829af0 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}



/* Entry: 108d80e10; end: 108d80e43;  */

void FUN_108d80e10(long param_1)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined4 *)(param_1 + 0x44) = 7;
  plVar2 = *(long **)(param_1 + 0x140);
  if (plVar2 != (long *)0x0) {
    if ((*(ushort *)(plVar2 + 1) & 0x2460) != 0) {
      uVar1 = *(ushort *)(plVar2 + 1);
      if ((uVar1 >> 0xd & 1) != 0) {
        func_0x000108d82798(plVar2,*plVar2);
        uVar1 = *(ushort *)(plVar2 + 1);
      }
      if ((uVar1 >> 10 & 1) == 0) {
        if ((uVar1 >> 5 & 1) == 0) {
          if ((uVar1 >> 6 & 1) != 0) {
            plVar3 = (long *)*plVar2;
            plVar3[1] = *(long *)(*plVar3 + 0xf8);
            *(long **)(*plVar3 + 0xf8) = plVar3;
          }
        }
        else {
          func_0x000108d82838(*plVar2);
        }
      }
      else {
        (*(code *)plVar2[6])(plVar2[2]);
      }
      *(undefined2 *)(plVar2 + 1) = 1;
      return;
    }
    *(undefined2 *)(plVar2 + 1) = 1;
  }
  return;
}



/* Entry: 108d80e44; end: 108d812e3;  */

int FUN_108d80e44(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  bool bVar13;
  bool bVar14;
  
  lVar10 = *param_1;
  if (*(char *)(lVar10 + 0x51) != '\0') {
    *(undefined4 *)((long)param_1 + 0x84) = 7;
  }
  if (param_1[0x23] != 0) {
    _bzero(param_1[0x23],(long)(int)param_1[0x22]);
  }
  lVar9 = param_1[0x1e];
  if (param_1[0x1e] != 0) {
    do {
      lVar8 = lVar9;
      lVar9 = *(long *)(lVar8 + 8);
    } while (lVar9 != 0);
    FUN_108d81e50(lVar8);
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  func_0x000108d81ec4(param_1);
  if (param_1[2] != 0) {
    FUN_108d712cc(param_1[2] + 0x38,(int)param_1[7]);
  }
  puVar12 = (undefined8 *)param_1[0x1f];
  while (puVar12 != (undefined8 *)0x0) {
    param_1[0x1f] = puVar12[1];
    iVar11 = *(int *)((long)puVar12 + 0x5c);
    uVar7 = (ulong)iVar11;
    if (0 < *(int *)(puVar12 + 0xc)) {
      lVar9 = 0;
      do {
        FUN_108d81fb8(*puVar12,(puVar12 + 0xe)[(long)iVar11 * 7 + lVar9]);
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(puVar12 + 0xc));
      uVar7 = (ulong)*(uint *)((long)puVar12 + 0x5c);
    }
    FUN_108d712cc(puVar12 + 0xe,uVar7);
    func_0x000108d60660(*(undefined8 *)*puVar12,puVar12);
    puVar12 = (undefined8 *)param_1[0x1f];
  }
  if (param_1[0x24] != 0) {
    FUN_108d81f20(param_1,0xffffffff,0);
  }
  if (*(int *)((long)param_1 + 0x44) != -0x420df25d) {
    return 0;
  }
  if ((int)param_1[0x10] < 0) goto LAB_108d81264;
  if ((*(ushort *)((long)param_1 + 0x8c) >> 7 & 1) != 0) {
    func_0x000108d813c8(param_1);
    bVar13 = false;
    bVar14 = false;
    uVar2 = *(uint *)((long)param_1 + 0x84);
    bVar4 = true;
    if (((uVar2 & 0xff) < 0xe) && ((1 << (ulong)(uVar2 & 0x1f) & 0x2680U) != 0)) {
      uVar1 = uVar2 & 0xff;
      if ((uVar1 != 9) || ((*(ushort *)((long)param_1 + 0x8c) >> 6 & 1) == 0)) {
        if (((uVar1 != 0xd) && (uVar1 != 7)) || ((*(ushort *)((long)param_1 + 0x8c) >> 5 & 1) == 0))
        {
          FUN_108d8145c(lVar10,0x204);
          FUN_108d815bc(lVar10);
          bVar13 = true;
          bVar14 = true;
          *(undefined1 *)(lVar10 + 0x4f) = 1;
          *(undefined4 *)(param_1 + 0x12) = 0;
          uVar2 = *(uint *)((long)param_1 + 0x84);
          goto joined_r0x000108d8100c;
        }
        bVar4 = false;
        iVar11 = 2;
        bVar14 = true;
        bVar13 = true;
        if (uVar2 != 0) goto LAB_108d81054;
        goto LAB_108d81024;
      }
      iVar11 = 0;
      bVar14 = true;
    }
    else {
joined_r0x000108d8100c:
      iVar11 = 0;
      if (uVar2 == 0) {
LAB_108d81024:
        bVar14 = bVar13;
        if (0 < param_1[0x19]) {
          *(undefined4 *)((long)param_1 + 0x84) = 0x313;
          *(undefined1 *)((long)param_1 + 0x8a) = 2;
          func_0x000108d7163c(param_1 + 9,*param_1,&UNK_10f517ade);
        }
      }
    }
LAB_108d81054:
    if (((*(int *)(lVar10 + 0x1a4) < 1) || (*(long *)(lVar10 + 0x1c8) != 0)) &&
       ((*(char *)(lVar10 + 0x4f) != '\0' &&
        (*(uint *)(lVar10 + 0xac) == (uint)((*(ushort *)((long)param_1 + 0x8c) & 0x40) == 0))))) {
      if (*(int *)((long)param_1 + 0x84) == 0) {
LAB_108d810a0:
        lVar9 = *param_1;
        if (0 < *(long *)(lVar9 + 800) + *(long *)(lVar9 + 0x318)) {
          iVar5 = 0x313;
          *(undefined4 *)((long)param_1 + 0x84) = 0x313;
          *(undefined1 *)((long)param_1 + 0x8a) = 2;
          func_0x000108d7163c(param_1 + 9,lVar9,&UNK_10f517ade);
          if ((*(ushort *)((long)param_1 + 0x8c) >> 6 & 1) != 0) {
            FUN_108d81658(param_1);
            return 1;
          }
LAB_108d81178:
          *(int *)((long)param_1 + 0x84) = iVar5;
          goto LAB_108d8117c;
        }
        lVar9 = lVar10;
        FUN_108d816e8(lVar10,param_1);
        iVar5 = (int)lVar9;
        if (iVar5 != 0) {
          if (iVar5 == 5) {
            if ((*(ushort *)((long)param_1 + 0x8c) >> 6 & 1) != 0) {
              FUN_108d81658(param_1);
              return 5;
            }
            iVar5 = 5;
          }
          goto LAB_108d81178;
        }
        *(undefined8 *)(lVar10 + 800) = 0;
        *(undefined8 *)(lVar10 + 0x318) = 0;
        *(uint *)(lVar10 + 0x2c) = *(uint *)(lVar10 + 0x2c) & 0xfefffffd;
      }
      else {
        if (*(char *)((long)param_1 + 0x8a) != '\x03') {
          bVar14 = true;
        }
        if (!bVar14) goto LAB_108d810a0;
LAB_108d8117c:
        FUN_108d8145c(lVar10,0);
        *(undefined4 *)(param_1 + 0x12) = 0;
      }
      *(undefined4 *)(lVar10 + 0x310) = 0;
LAB_108d81190:
      if (iVar11 == 0) {
        if ((*(ushort *)((long)param_1 + 0x8c) >> 2 & 1) != 0) {
LAB_108d8120c:
          iVar11 = (int)param_1[0x12];
          goto LAB_108d81210;
        }
      }
      else {
LAB_108d81194:
        plVar6 = param_1;
        FUN_108d81d1c(param_1,iVar11);
        if ((int)plVar6 != 0) {
          if ((*(uint *)((long)param_1 + 0x84) == 0) ||
             ((*(uint *)((long)param_1 + 0x84) & 0xff) == 0x13)) {
            *(int *)((long)param_1 + 0x84) = (int)plVar6;
            func_0x000108d60660(lVar10,param_1[9]);
            param_1[9] = 0;
          }
          FUN_108d8145c(lVar10,0x204);
          FUN_108d815bc(lVar10);
          *(undefined1 *)(lVar10 + 0x4f) = 1;
          *(undefined4 *)(param_1 + 0x12) = 0;
        }
        if ((*(ushort *)((long)param_1 + 0x8c) >> 2 & 1) != 0) {
          if (iVar11 != 2) goto LAB_108d8120c;
          *(undefined4 *)(lVar10 + 0x60) = 0;
          goto LAB_108d8121c;
        }
      }
    }
    else {
      if (!bVar4) goto LAB_108d81190;
      if ((*(int *)((long)param_1 + 0x84) == 0) || (*(char *)((long)param_1 + 0x8a) == '\x03')) {
        iVar11 = 1;
        goto LAB_108d81194;
      }
      if (*(char *)((long)param_1 + 0x8a) == '\x02') {
        iVar11 = 2;
        goto LAB_108d81194;
      }
      FUN_108d8145c(lVar10,0x204);
      FUN_108d815bc(lVar10);
      iVar11 = 0;
      *(undefined1 *)(lVar10 + 0x4f) = 1;
      *(undefined4 *)(param_1 + 0x12) = 0;
      if ((*(byte *)((long)param_1 + 0x8c) >> 2 & 1) == 0) goto LAB_108d81220;
LAB_108d81210:
      *(int *)(lVar10 + 0x60) = iVar11;
      *(int *)(lVar10 + 100) = *(int *)(lVar10 + 100) + iVar11;
LAB_108d8121c:
      *(undefined4 *)(param_1 + 0x12) = 0;
    }
LAB_108d81220:
    FUN_108d81658(param_1);
    if ((int)param_1[0x10] < 0) goto LAB_108d81264;
  }
  *(int *)(lVar10 + 0xa4) = *(int *)(lVar10 + 0xa4) + -1;
  uVar3 = *(ushort *)((long)param_1 + 0x8c);
  if ((uVar3 >> 6 & 1) == 0) {
    *(int *)(lVar10 + 0xac) = *(int *)(lVar10 + 0xac) + -1;
    uVar3 = *(ushort *)((long)param_1 + 0x8c);
  }
  if ((uVar3 >> 7 & 1) != 0) {
    *(int *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa8) + -1;
  }
LAB_108d81264:
  *(undefined4 *)((long)param_1 + 0x44) = 0x519c2973;
  if (*(char *)(*param_1 + 0x51) == '\0') {
    iVar11 = *(int *)((long)param_1 + 0x84);
    if (iVar11 != 5) {
      iVar11 = 0;
    }
  }
  else {
    iVar11 = 0;
    *(undefined4 *)((long)param_1 + 0x84) = 7;
  }
  return iVar11;
}



/* Entry: 108d812e4; end: 108d8145b;  */

undefined4 FUN_108d812e4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  uVar1 = *(undefined4 *)((long)param_1 + 0x84);
  if (param_1[9] == 0) {
    *(undefined4 *)((long)puVar5 + 0x44) = uVar1;
    lVar4 = puVar5[0x28];
    if (lVar4 == 0) {
      return uVar1;
    }
    if ((*(ushort *)(lVar4 + 8) & 0x2460) != 0) {
      func_0x000108d82720();
      return uVar1;
    }
    *(undefined2 *)(lVar4 + 8) = 1;
    return uVar1;
  }
  uVar2 = *(undefined1 *)((long)puVar5 + 0x51);
  if (pcRam000000011372e6f8 != (code *)0x0) {
    (*pcRam000000011372e6f8)();
  }
  if (puVar5[0x28] == 0) {
    puVar3 = puVar5;
    FUN_108d6a6fc(puVar5,0x38);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5[0x28] = 0;
      goto LAB_108d81364;
    }
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 1) = 1;
    puVar3[5] = puVar5;
    puVar3[6] = 0;
    puVar5[0x28] = puVar3;
  }
  FUN_108d67c04();
LAB_108d81364:
  if (pcRam000000011372e700 != (code *)0x0) {
    (*pcRam000000011372e700)();
  }
  *(undefined1 *)((long)puVar5 + 0x51) = uVar2;
  *(undefined4 *)((long)puVar5 + 0x44) = uVar1;
  return uVar1;
}



/* Entry: 108d8145c; end: 108d815bb;  */

void FUN_108d8145c(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if (pcRam000000011372e6f8 != (code *)0x0) {
    (*pcRam000000011372e6f8)();
  }
  FUN_108d62704(param_1);
  if ((*(byte *)(param_1 + 0x2c) >> 1 & 1) == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(char *)(param_1 + 0xa1) != '\0';
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 < 1) {
    bVar1 = true;
  }
  else {
    lVar5 = 0;
    bVar1 = false;
    lVar6 = 8;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0x10) == '\x02') {
          bVar1 = true;
        }
        FUN_108d6007c(lVar3,param_2,bVar2);
        iVar4 = *(int *)(param_1 + 0x28);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar5 < iVar4);
    bVar1 = !bVar1;
  }
  FUN_108d823ac(param_1,0x88);
  if (pcRam000000011372e700 != (code *)0x0) {
    (*pcRam000000011372e700)();
  }
  if (((*(byte *)(param_1 + 0x2c) >> 1 & 1) != 0) && (*(char *)(param_1 + 0xa1) == '\0')) {
    for (lVar5 = *(long *)(param_1 + 8); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x58)) {
      *(ushort *)(lVar5 + 0x8c) = *(ushort *)(lVar5 + 0x8c) | 8;
    }
    FUN_108d61aa4(param_1);
  }
  func_0x000108d6277c(param_1);
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfeffffff;
  if ((*(code **)(param_1 + 0x100) != (code *)0x0) &&
     ((!bVar1 || (*(char *)(param_1 + 0x4f) == '\0')))) {
                    /* WARNING: Could not recover jumptable at 0x000108d815b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x100))(*(undefined8 *)(param_1 + 0xf8));
    return;
  }
  return;
}



/* Entry: 108d815bc; end: 108d81603;  */

void FUN_108d815bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x300);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(lVar1 + 0x18);
    func_0x000108d60660(param_1);
    lVar1 = *(long *)(param_1 + 0x300);
  }
  *(undefined8 *)(param_1 + 0x30c) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  return;
}



/* Entry: 108d81604; end: 108d81657;  */

undefined8 FUN_108d81604(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (0 < *(long *)(lVar1 + 800) + *(long *)(lVar1 + 0x318)) {
    *(undefined4 *)((long)param_1 + 0x84) = 0x313;
    *(undefined1 *)((long)param_1 + 0x8a) = 2;
    func_0x000108d7163c(param_1 + 9,lVar1,&UNK_10f517ade);
    return 1;
  }
  return 0;
}



/* Entry: 108d81658; end: 108d816e7;  */

void FUN_108d81658(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((int)param_1[0x13] != 0) {
    uVar1 = *(uint *)(*param_1 + 0x28);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      plVar5 = (long *)(*(long *)(*param_1 + 0x20) + 8);
      do {
        if ((((uVar4 != 1) && ((*(uint *)(param_1 + 0x13) >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0))
            && (lVar3 = *plVar5, lVar3 != 0)) &&
           ((*(char *)(lVar3 + 0x11) != '\0' &&
            (iVar2 = *(int *)(lVar3 + 0x14) + -1, *(int *)(lVar3 + 0x14) = iVar2, iVar2 == 0)))) {
          FUN_108d7f5fc();
        }
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 4;
      } while (uVar1 != uVar4);
    }
  }
  return;
}



/* Entry: 108d816e8; end: 108d81d1b;  */

long * FUN_108d816e8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  char cVar18;
  undefined1 auStack_70 [4];
  int iStack_6c;
  long *plStack_68;
  
  lVar13 = 0;
  lVar15 = param_1[0x39];
  param_1[0x39] = 0;
  while (lVar13 < *(int *)((long)param_1 + 0x1a4)) {
    plVar9 = *(long **)(*(long *)(lVar15 + lVar13 * 8) + 0x10);
    if ((plVar9 == (long *)0x0) || (*(code **)(*plVar9 + 0x78) == (code *)0x0)) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = plVar9;
      (**(code **)(*plVar9 + 0x78))();
      FUN_108d824cc(param_2,plVar9);
    }
    lVar13 = lVar13 + 1;
    if ((int)plVar11 != 0) {
      param_1[0x39] = lVar15;
      return plVar11;
    }
  }
  lVar13 = 0;
  iVar8 = 0;
  bVar2 = false;
  param_1[0x39] = lVar15;
  lVar15 = 8;
  while (lVar13 < *(int *)(param_1 + 5)) {
    lVar7 = *(long *)(param_1[4] + lVar15);
    if ((lVar7 == 0) || (*(char *)(lVar7 + 0x10) != '\x02')) {
      plVar9 = (long *)0x0;
    }
    else {
      if (lVar15 != 0x28) {
        iVar8 = iVar8 + 1;
      }
      if ((*(char *)(lVar7 + 0x11) != '\0') &&
         (*(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1, *(char *)(lVar7 + 0x12) == '\0')) {
        FUN_108d7f528(lVar7);
      }
      plVar9 = (long *)**(undefined8 **)(lVar7 + 8);
      FUN_108d7f318();
      if ((*(char *)(lVar7 + 0x11) != '\0') &&
         (iVar3 = *(int *)(lVar7 + 0x14) + -1, *(int *)(lVar7 + 0x14) = iVar3, iVar3 == 0)) {
        FUN_108d7f5fc(lVar7);
      }
      bVar2 = true;
    }
    lVar13 = lVar13 + 1;
    lVar15 = lVar15 + 0x20;
    if ((int)plVar9 != 0) {
      return plVar9;
    }
  }
  if ((bVar2) && ((code *)param_1[0x1e] != (code *)0x0)) {
    iVar3 = (int)param_1[0x1d];
    (*(code *)param_1[0x1e])();
    if (iVar3 != 0) {
      return (long *)0x213;
    }
  }
  lVar13 = **(long **)(*(long *)(param_1[4] + 8) + 8);
  cVar18 = *(char *)(lVar13 + 0x13);
  if (cVar18 == '\0') {
    pcVar10 = *(char **)(lVar13 + 0xd0);
    if (pcVar10 != (char *)0x0) goto LAB_108d8186c;
  }
  else {
    pcVar10 = "";
LAB_108d8186c:
    _strlen();
    if ((((ulong)pcVar10 & 0x3fffffff) != 0) && (1 < iVar8)) {
      plVar9 = (long *)*param_1;
      if (cVar18 == '\0') {
        pcVar10 = *(char **)(lVar13 + 0xd0);
        plStack_68 = (long *)0x0;
        if (pcVar10 != (char *)0x0) goto LAB_108d8192c;
        uVar16 = 0;
      }
      else {
        pcVar10 = "";
LAB_108d8192c:
        plStack_68 = (long *)0x0;
        _strlen(pcVar10);
        uVar16 = (ulong)pcVar10 & 0x3fffffff;
      }
      puVar4 = param_1;
      FUN_108d6a8e0(param_1,&UNK_10f517afc);
      if (puVar4 == (undefined8 *)0x0) {
        return (long *)0x7;
      }
      uVar17 = 0;
      do {
        if (uVar17 != 0) {
          if (100 < uVar17) {
            FUN_108d64c00(0xd,&UNK_10f517b0c);
            (*(code *)plVar9[6])(plVar9,puVar4,0);
            goto LAB_108d81a20;
          }
          if (uVar17 == 1) {
            FUN_108d64c00(0xd,&UNK_10f517b1a);
          }
        }
        uVar17 = uVar17 + 1;
        FUN_108d64cc0(4,auStack_70);
        func_0x000108d64bd8(0xd,(long)puVar4 + uVar16,&UNK_10f517b29);
        plVar11 = plVar9;
        (*(code *)plVar9[7])(plVar9,puVar4,0,&iStack_6c);
      } while ((int)plVar11 == 0 && iStack_6c != 0);
      if ((int)plVar11 != 0) goto LAB_108d81a40;
LAB_108d81a20:
      plVar11 = plVar9;
      FUN_108d8243c(plVar9,puVar4,&plStack_68,0x4016,0);
      plVar1 = plStack_68;
      if ((int)plVar11 != 0) goto LAB_108d81a40;
      iVar8 = *(int *)(param_1 + 5);
      if (iVar8 < 1) {
LAB_108d81ba4:
        uVar14 = 0;
      }
      else {
        lVar15 = 0;
        lVar13 = 0;
        bVar2 = false;
        lVar7 = 8;
        do {
          lVar12 = *(long *)(param_1[4] + lVar7);
          if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) == '\x02')) {
            plVar11 = *(long **)(lVar12 + 8);
            lVar6 = *plVar11;
            uVar16 = *(ulong *)(lVar6 + 0xd8);
            if (uVar16 != 0) {
              if (bVar2) {
                bVar2 = true;
              }
              else {
                if (*(char *)(lVar12 + 0x11) == '\0') {
                  cVar18 = *(char *)(lVar6 + 0xb);
                }
                else {
                  iVar8 = *(int *)(lVar12 + 0x14);
                  *(int *)(lVar12 + 0x14) = iVar8 + 1;
                  if (*(char *)(lVar12 + 0x12) == '\0') {
                    FUN_108d7f528(lVar12);
                    cVar18 = *(char *)(*plVar11 + 0xb);
                    if (*(char *)(lVar12 + 0x11) == '\0') goto LAB_108d81b04;
                    iVar8 = *(int *)(lVar12 + 0x14) + -1;
                  }
                  else {
                    cVar18 = *(char *)(lVar6 + 0xb);
                  }
                  *(int *)(lVar12 + 0x14) = iVar8;
                  if (iVar8 == 0) {
                    FUN_108d7f5fc(lVar12);
                  }
                }
LAB_108d81b04:
                bVar2 = cVar18 == '\0';
              }
              uVar5 = uVar16;
              _strlen(uVar16);
              plVar11 = plVar1;
              (**(code **)(*plVar1 + 0x18))(plVar1,uVar16,((uint)uVar5 & 0x3fffffff) + 1,lVar13);
              if ((int)plVar11 != 0) goto LAB_108d81ce4;
              _strlen();
              lVar13 = lVar13 + (uVar16 & 0x3fffffff) + 1;
              iVar8 = *(int *)(param_1 + 5);
            }
          }
          lVar15 = lVar15 + 1;
          lVar7 = lVar7 + 0x20;
        } while (lVar15 < iVar8);
        if (!bVar2) goto LAB_108d81ba4;
        plVar11 = plVar1;
        (**(code **)(*plVar1 + 0x60))();
        if ((((uint)plVar11 >> 10 & 1) == 0) &&
           (plVar11 = plVar1, (**(code **)(*plVar1 + 0x28))(plVar1,2), (int)plVar11 != 0)) {
LAB_108d81ce4:
          if (*plVar1 != 0) {
            (**(code **)(*plVar1 + 8))(plVar1);
            *plVar1 = 0;
          }
          func_0x000108d5e198(plVar1);
          (*(code *)plVar9[6])(plVar9,puVar4,0);
          goto LAB_108d81a40;
        }
        uVar14 = 1;
      }
      lVar13 = -1;
      lVar15 = 8;
      do {
        iVar8 = *(int *)(param_1 + 5);
        lVar13 = lVar13 + 1;
        if (iVar8 <= lVar13) {
          plVar11 = (long *)0x0;
          break;
        }
        plVar11 = *(long **)(param_1[4] + lVar15);
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)0x0;
        }
        else {
          FUN_108d66d2c(plVar11,puVar4);
        }
        lVar15 = lVar15 + 0x20;
      } while ((int)plVar11 == 0);
      plVar1 = plStack_68;
      if (*plStack_68 != 0) {
        (**(code **)(*plStack_68 + 8))(plStack_68);
        *plVar1 = 0;
      }
      func_0x000108d5e198(plVar1);
      if (lVar13 < iVar8) {
LAB_108d81a40:
        func_0x000108d60660(param_1,puVar4);
        return plVar11;
      }
      (*(code *)plVar9[6])(plVar9,puVar4,uVar14);
      func_0x000108d60660(param_1,puVar4);
      if ((int)plVar9 != 0) {
        return plVar9;
      }
      if (pcRam000000011372e6f8 != (code *)0x0) {
        (*pcRam000000011372e6f8)();
      }
      iVar8 = *(int *)(param_1 + 5);
      if (0 < iVar8) {
        lVar13 = 0;
        lVar15 = 8;
        do {
          if (*(long *)(param_1[4] + lVar15) != 0) {
            FUN_108d66be4(*(long *)(param_1[4] + lVar15),1);
            iVar8 = *(int *)(param_1 + 5);
          }
          lVar13 = lVar13 + 1;
          lVar15 = lVar15 + 0x20;
        } while (lVar13 < iVar8);
      }
      if (pcRam000000011372e700 != (code *)0x0) {
        (*pcRam000000011372e700)();
      }
      goto LAB_108d81ca8;
    }
  }
  lVar13 = -1;
  lVar15 = 8;
  while (lVar13 = lVar13 + 1, lVar13 < *(int *)(param_1 + 5)) {
    plVar9 = *(long **)(param_1[4] + lVar15);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      FUN_108d66d2c(plVar9,0);
    }
    lVar15 = lVar15 + 0x20;
    if ((int)plVar9 != 0) {
      return plVar9;
    }
  }
  lVar13 = -1;
  lVar15 = 8;
  while (lVar13 = lVar13 + 1, lVar13 < *(int *)(param_1 + 5)) {
    plVar9 = *(long **)(param_1[4] + lVar15);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      FUN_108d66be4(plVar9,0);
    }
    lVar15 = lVar15 + 0x20;
    if ((int)plVar9 != 0) {
      return plVar9;
    }
  }
LAB_108d81ca8:
  FUN_108d823ac(param_1,0x80);
  return (long *)0x0;
}



/* Entry: 108d81d1c; end: 108d81e4f;  */

ulong FUN_108d81d1c(ulong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar5 = *param_1;
  if ((*(int *)(uVar5 + 0x310) == 0) || (*(int *)((long)param_1 + 0x9c) == 0)) {
    return 0;
  }
  iVar1 = *(int *)((long)param_1 + 0x9c) + -1;
  iVar4 = *(int *)(uVar5 + 0x28);
  if (iVar4 < 1) {
    *(int *)(uVar5 + 0x310) = *(int *)(uVar5 + 0x310) + -1;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
LAB_108d81dec:
    if ((param_2 == 2) && (uVar6 = uVar5, FUN_108d825f8(uVar5,2,iVar1), (int)uVar6 != 0))
    goto LAB_108d81e28;
    uVar6 = uVar5;
    FUN_108d825f8(uVar5,1,iVar1);
  }
  else {
    lVar8 = 0;
    uVar6 = 0;
    lVar9 = 8;
    do {
      lVar7 = *(long *)(*(long *)(uVar5 + 0x20) + lVar9);
      if (lVar7 != 0) {
        if (param_2 == 2) {
          lVar3 = lVar7;
          func_0x000108d82520(lVar7,2,iVar1);
          uVar2 = (uint)lVar3;
          if (uVar2 == 0) goto LAB_108d81d94;
        }
        else {
LAB_108d81d94:
          func_0x000108d82520(lVar7,1,iVar1);
          uVar2 = (uint)lVar7;
        }
        if ((uint)uVar6 != 0) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)uVar2;
        iVar4 = *(int *)(uVar5 + 0x28);
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while (lVar8 < iVar4);
    *(int *)(uVar5 + 0x310) = *(int *)(uVar5 + 0x310) + -1;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
    if ((int)uVar6 == 0) goto LAB_108d81dec;
  }
  if (param_2 != 2) {
    return uVar6;
  }
LAB_108d81e28:
  uVar10 = param_1[0x1a];
  *(ulong *)(uVar5 + 800) = param_1[0x1b];
  *(ulong *)(uVar5 + 0x318) = uVar10;
  return uVar6;
}



/* Entry: 108d81e50; end: 108d81f1f;  */

undefined4 FUN_108d81e50(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  func_0x000108d81ec4(plVar3);
  lVar4 = param_1[4];
  plVar3[0x23] = param_1[5];
  *(undefined4 *)(plVar3 + 0x22) = *(undefined4 *)(param_1 + 0xb);
  plVar3[1] = param_1[2];
  plVar3[2] = lVar4;
  lVar4 = NEON_rev64(param_1[10],4);
  plVar3[7] = lVar4;
  plVar3[0xc] = param_1[6];
  uVar1 = *(undefined4 *)((long)param_1 + 0x4c);
  *(undefined4 *)(plVar3 + 8) = *(undefined4 *)(param_1 + 9);
  uVar2 = *(undefined4 *)(param_1 + 0xd);
  *(undefined4 *)(plVar3 + 0x12) = *(undefined4 *)((long)param_1 + 100);
  lVar4 = *plVar3;
  *(undefined8 *)(lVar4 + 0x30) = param_1[8];
  *(undefined4 *)(lVar4 + 0x60) = uVar2;
  return uVar1;
}



/* Entry: 108d81f20; end: 108d81fb7;  */

void FUN_108d81f20(undefined8 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[0x24];
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(param_1 + 0x24);
    do {
      if ((param_2 < 0) ||
         ((*piVar1 == param_2 &&
          ((0x1f < piVar1[1] || ((param_3 >> (ulong)(piVar1[1] & 0x1f) & 1) == 0)))))) {
        if (*(code **)(piVar1 + 4) != (code *)0x0) {
          (**(code **)(piVar1 + 4))(*(undefined8 *)(piVar1 + 2));
        }
        *(undefined8 *)piVar2 = *(undefined8 *)(piVar1 + 6);
        func_0x000108d60660(*param_1,piVar1);
      }
      else {
        piVar2 = piVar1 + 6;
      }
      piVar1 = *(int **)piVar2;
    } while (piVar1 != (int *)0x0);
  }
  return;
}



/* Entry: 108d81fb8; end: 108d8206f;  */

/* WARNING: Possible PIC construction at 0x000108d81fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d61a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d61a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d79e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d79e9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d79e2c) */
/* WARNING: Removing unreachable block (ram,0x000108d79e3c) */
/* WARNING: Removing unreachable block (ram,0x000108d79e48) */
/* WARNING: Removing unreachable block (ram,0x000108d79e4c) */
/* WARNING: Removing unreachable block (ram,0x000108d79e54) */
/* WARNING: Removing unreachable block (ram,0x000108d79e5c) */
/* WARNING: Removing unreachable block (ram,0x000108d79e64) */
/* WARNING: Removing unreachable block (ram,0x000108d79e70) */
/* WARNING: Removing unreachable block (ram,0x000108d79e7c) */
/* WARNING: Removing unreachable block (ram,0x000108d79e84) */
/* WARNING: Removing unreachable block (ram,0x000108d79e8c) */
/* WARNING: Removing unreachable block (ram,0x000108d79e98) */
/* WARNING: Removing unreachable block (ram,0x000108d81ff0) */
/* WARNING: Removing unreachable block (ram,0x000108d79ea0) */
/* WARNING: Removing unreachable block (ram,0x000108d79ea8) */
/* WARNING: Removing unreachable block (ram,0x000108d79ecc) */
/* WARNING: Removing unreachable block (ram,0x000108d7f5fc) */
/* WARNING: Removing unreachable block (ram,0x000108d7f618) */
/* WARNING: Removing unreachable block (ram,0x000108d7f624) */

void FUN_108d81fb8(long *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *unaff_x19;
  undefined8 *puVar8;
  undefined8 *unaff_x20;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  puVar9 = (undefined8 *)param_2[9];
  if (puVar9 != (undefined8 *)0x0) {
    unaff_x21 = (undefined8 *)*param_1;
    FUN_108d82070(unaff_x21,puVar9);
    unaff_x30 = 0x108d81ff0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar8 = (undefined8 *)puVar9[8];
    unaff_x19 = param_2;
    unaff_x20 = puVar9;
    unaff_x29 = puVar1;
    goto SUB_108d5e198;
  }
  puVar9 = (undefined8 *)param_2[1];
  if (puVar9 == (undefined8 *)0x0) {
    unaff_x20 = (undefined8 *)*param_2;
    if (unaff_x20 == (undefined8 *)0x0) {
      if ((long *)param_2[6] == (long *)0x0) {
        return;
      }
      plVar7 = *(long **)param_2[6];
      *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
                    /* WARNING: Could not recover jumptable at 0x000108d8205c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x38))();
      return;
    }
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x19 = (undefined8 *)*unaff_x20;
    if (unaff_x19 == (undefined8 *)0x0) {
      return;
    }
    unaff_x21 = (undefined8 *)unaff_x20[1];
    if ((*(char *)((long)unaff_x19 + 0x11) != '\0') &&
       (*(int *)((long)unaff_x19 + 0x14) = *(int *)((long)unaff_x19 + 0x14) + 1,
       *(char *)((long)unaff_x19 + 0x12) == '\0')) {
      FUN_108d7f528(unaff_x19);
    }
    unaff_x30 = 0x108d79e2c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    puVar8 = (undefined8 *)unaff_x20[0xb];
    goto SUB_108d5e198;
  }
  puVar1 = &stack0xfffffffffffffff0;
  puVar8 = (undefined8 *)puVar9[1];
  if ((*(char *)((long)puVar9 + 0x11) != '\0') &&
     (*(int *)((long)puVar9 + 0x14) = *(int *)((long)puVar9 + 0x14) + 1,
     *(char *)((long)puVar9 + 0x12) == '\0')) {
    FUN_108d7f528(puVar9);
  }
  puVar5 = (undefined8 *)puVar8[2];
  puVar10 = unaff_x21;
  while (puVar5 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)puVar5[2];
    puVar6 = (undefined8 *)*puVar5;
    puVar5 = puVar10;
    if (puVar6 == puVar9) {
      FUN_108d79ddc();
    }
  }
  FUN_108d6007c(puVar9,0,0);
  uVar11 = unaff_x22;
  if ((*(char *)((long)puVar9 + 0x11) != '\0') &&
     ((iVar4 = *(int *)((long)puVar9 + 0x14) + -1, *(int *)((long)puVar9 + 0x14) = iVar4, iVar4 != 0
      || (FUN_108d7f5fc(puVar9), *(char *)((long)puVar9 + 0x11) != '\0')))) {
    if (iRam0000000113297914 == 0) {
      puVar10 = (undefined8 *)0x0;
LAB_108d619b4:
      uVar11 = 1;
    }
    else {
      puVar10 = (undefined8 *)0x2;
      (*pcRam0000000113297988)();
      if (puVar10 == (undefined8 *)0x0) goto LAB_108d619b4;
      (*pcRam0000000113297998)(puVar10);
      uVar11 = 0;
    }
    iVar4 = *(int *)(puVar8 + 0xd);
    *(int *)(puVar8 + 0xd) = iVar4 + -1;
    if (iVar4 + -1 == 0 || iVar4 < 1) {
      puVar5 = puRam000000011372e698;
      if (puRam000000011372e698 == puVar8) {
        puRam000000011372e698 = (undefined8 *)puVar8[0xe];
      }
      else {
        do {
          puVar6 = puVar5;
          if (puVar6 == (undefined8 *)0x0) goto LAB_108d61a00;
          puVar5 = (undefined8 *)puVar6[0xe];
        } while ((undefined8 *)puVar6[0xe] != puVar8);
        puVar6[0xe] = puVar8[0xe];
      }
LAB_108d61a00:
      if (puVar8[0xb] != 0) {
        (*pcRam0000000113297990)();
      }
    }
    if ((int)uVar11 == 0) {
      (*pcRam00000001132979a8)(puVar10);
    }
    if (1 < iVar4) {
      lVar2 = puVar9[4];
      lVar3 = puVar9[5];
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x20) = lVar2;
      }
      puVar8 = puVar9;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
      }
      goto SUB_108d5e198;
    }
  }
  unaff_x22 = uVar11;
  unaff_x21 = puVar10;
  FUN_108d79ee4(*puVar8);
  if (((code *)puVar8[10] != (code *)0x0) && (puVar8[9] != 0)) {
    (*(code *)puVar8[10])();
  }
  unaff_x19 = puVar9;
  unaff_x20 = puVar8;
  unaff_x29 = puVar1;
  if ((undefined8 *)puVar8[9] == (undefined8 *)0x0) {
    if (puVar8[0x11] != 0) {
      puVar8[0x11] = puVar8[0x11] + -4;
      func_0x000108d78fdc();
      puVar8[0x11] = 0;
    }
    unaff_x30 = 0x108d61a78;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
  }
  else {
    unaff_x30 = 0x108d61a58;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    puVar8 = (undefined8 *)puVar8[9];
  }
SUB_108d5e198:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar9 = puVar8;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar9;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar8);
    puVar8 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar8);
  return;
}



/* Entry: 108d82070; end: 108d82207;  */

void FUN_108d82070(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar1 = (ulong)*(byte *)(param_2 + 0x5b);
  if (uVar1 != 0) {
    uVar4 = uVar1 + 1;
    lVar2 = param_2 + uVar1 * 0x68 + -8;
    do {
      FUN_108d822ac(lVar2);
      uVar4 = uVar4 - 1;
      lVar2 = lVar2 + -0x68;
    } while (1 < uVar4);
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_108d82208();
    func_0x000108d60660(param_1,*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  FUN_108d8224c(*(undefined8 *)(param_2 + 0x18));
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (*(char *)(param_2 + 0x5b) != '\0') {
    uVar1 = 0;
    do {
      puVar5 = (undefined8 *)(param_2 + 0x60 + uVar1 * 0x68);
      func_0x000108d60660(param_1,puVar5[3]);
      if (puVar5[5] == 0) {
        lVar2 = puVar5[4];
        while (lVar2 != 0) {
          lVar2 = *(long *)(lVar2 + 8);
          func_0x000108d5e198();
        }
      }
      else {
        func_0x000108d5e198();
      }
      plVar3 = (long *)puVar5[9];
      if (plVar3 != (long *)0x0) {
        if (*plVar3 != 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
          *plVar3 = 0;
        }
        func_0x000108d5e198(plVar3);
      }
      plVar3 = (long *)puVar5[0xb];
      if (plVar3 != (long *)0x0) {
        if (*plVar3 != 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
          *plVar3 = 0;
        }
        func_0x000108d5e198(plVar3);
      }
      puVar5[0xc] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[2] = param_2;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_2 + 0x5b));
  }
  if (*(long *)(param_2 + 0x40) == 0) {
    lVar2 = *(long *)(param_2 + 0x38);
    while (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 8);
      func_0x000108d5e198();
    }
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined1 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  func_0x000108d60660(param_1,*(undefined8 *)(param_2 + 0x30));
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 108d82208; end: 108d8224b;  */

void FUN_108d82208(undefined8 *param_1)

{
  func_0x000108d5e198(param_1[4]);
  func_0x000108d5e198(param_1[6]);
  func_0x000108d8231c(param_1[9]);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 108d8224c; end: 108d822ab;  */

void FUN_108d8224c(int *param_1)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long lVar3;
  
  if ((param_1 != (int *)0x0) && (0 < *param_1)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      FUN_108d82208(*(long *)(param_1 + 6) + lVar2);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x50;
    } while (lVar3 < *param_1);
  }
  if (param_1 != (int *)0x0) {
    UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
    if (iRam0000000113297910 != 0) {
      if (piRam0000000113829af0 != (int *)0x0) {
        (*pcRam0000000113297998)();
      }
      piVar1 = param_1;
      (*pcRam0000000113297950)();
      lRam0000000113829a50 = lRam0000000113829a50 - (int)piVar1;
      lRam0000000113829a98 = lRam0000000113829a98 + -1;
      (*pcRam0000000113297940)(param_1);
      param_1 = piRam0000000113829af0;
      UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
      if (piRam0000000113829af0 == (int *)0x0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}



/* Entry: 108d822ac; end: 108d823ab;  */

ulong FUN_108d822ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uStack_28;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = 1;
    if (*(int *)(puVar1 + 1) == 0) {
      _pthread_join(*puVar1,&uStack_28);
    }
    else {
      uStack_28 = puVar1[2];
    }
    func_0x000108d5e198(puVar1);
    uStack_28 = uStack_28 & 0xffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  return uStack_28;
}



/* Entry: 108d823ac; end: 108d8243b;  */

void FUN_108d823ac(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    if (0 < *(int *)(param_1 + 0x1a4)) {
      lVar1 = 0;
      do {
        lVar3 = *(long *)(*(long *)(param_1 + 0x1c8) + lVar1 * 8);
        if ((*(long **)(lVar3 + 0x10) != (long *)0x0) &&
           (pcVar2 = *(code **)(**(long **)(lVar3 + 0x10) + (param_2 & 0xffffffff)),
           pcVar2 != (code *)0x0)) {
          (*pcVar2)();
        }
        *(undefined4 *)(lVar3 + 0x20) = 0;
        func_0x000108d80d4c(lVar3);
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x1a4));
      lVar1 = *(long *)(param_1 + 0x1c8);
    }
    func_0x000108d60660(param_1,lVar1);
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  return;
}



/* Entry: 108d8243c; end: 108d824cb;  */

long FUN_108d8243c(long param_1,undefined8 param_2,long *param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  
  lVar1 = (long)*(int *)(param_1 + 4);
  func_0x000108d65d8c();
  if (lVar1 == 0) {
    param_1 = 7;
  }
  else {
    (**(code **)(param_1 + 0x28))(param_1,param_2,lVar1,param_4 & 0x7f7f,param_5);
    if ((int)param_1 == 0) {
      *param_3 = lVar1;
    }
    else {
      func_0x000108d5e198(lVar1);
    }
  }
  return param_1;
}



/* Entry: 108d824cc; end: 108d825f7;  */

void FUN_108d824cc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000108d60660(uVar1,param_1[9]);
  FUN_108d68d58(uVar1,*(undefined8 *)(param_2 + 0x10));
  param_1[9] = uVar1;
  func_0x000108d5e198(*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 108d825f8; end: 108d826cf;  */

long FUN_108d825f8(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x1c8) == 0) {
    return 0;
  }
  lVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x1a4) <= lVar5) {
      return 0;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x1c8) + lVar5 * 8);
    lVar1 = *(long *)(lVar2 + 0x10);
    if (lVar1 != 0) {
      piVar3 = (int *)**(undefined8 **)(lVar2 + 8);
      if (1 < *piVar3) {
        if (param_2 == 2) {
          pcVar4 = *(code **)(piVar3 + 0x2c);
        }
        else if (param_2 == 0) {
          pcVar4 = *(code **)(piVar3 + 0x28);
          *(int *)(lVar2 + 0x20) = (int)param_3 + 1;
        }
        else {
          pcVar4 = *(code **)(piVar3 + 0x2a);
        }
        if ((pcVar4 != (code *)0x0) && ((int)param_3 < *(int *)(lVar2 + 0x20))) {
          (*pcVar4)(lVar1,param_3);
          goto LAB_108d826a4;
        }
      }
      lVar1 = 0;
    }
LAB_108d826a4:
    lVar5 = lVar5 + 1;
    if ((int)lVar1 != 0) {
      return lVar1;
    }
  } while( true );
}



/* Entry: 108d826d0; end: 108d82883;  */

void FUN_108d826d0(long param_1)

{
  if ((*(ushort *)(param_1 + 8) & 0x2460) != 0) {
    func_0x000108d82720(param_1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x000108d60660(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 108d82884; end: 108d82a1b;  */

undefined8 FUN_108d82884(long param_1,int param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (param_2 <= iVar1) goto LAB_108d82964;
  if (param_2 < 0x21) {
    param_2 = 0x20;
  }
  if ((param_3 == 0) || (iVar1 < 1)) {
    if (0 < iVar1) {
      lVar5 = *(long *)(param_1 + 0x18);
      goto LAB_108d82910;
    }
LAB_108d82918:
    uVar4 = *(ulong *)(param_1 + 0x28);
    FUN_108d6a6fc(uVar4,param_2);
    *(ulong *)(param_1 + 0x18) = uVar4;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x10) != lVar5) {
LAB_108d82910:
      func_0x000108d60660(*(undefined8 *)(param_1 + 0x28),lVar5);
      goto LAB_108d82918;
    }
    uVar4 = *(ulong *)(param_1 + 0x28);
    func_0x000108d829d8(uVar4,*(long *)(param_1 + 0x10),param_2);
    param_3 = 0;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(ulong *)(param_1 + 0x18) = uVar4;
  }
  if (uVar4 == 0) {
    if ((*(ushort *)(param_1 + 8) & 0x2460) == 0) {
      *(undefined2 *)(param_1 + 8) = 1;
    }
    else {
      func_0x000108d82720(param_1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 7;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (((lVar5 == 0) || (uVar4 < *(ulong *)(lVar5 + 0x170))) || (*(ulong *)(lVar5 + 0x178) <= uVar4))
  {
    (*pcRam0000000113297950)();
    uVar3 = (uint)uVar4;
  }
  else {
    uVar3 = (uint)*(ushort *)(lVar5 + 0x150);
  }
  *(uint *)(param_1 + 0x20) = uVar3;
LAB_108d82964:
  if (((param_3 != 0) && (lVar5 = *(long *)(param_1 + 0x10), lVar5 != 0)) &&
     (lVar5 != *(long *)(param_1 + 0x18))) {
    _memcpy(*(long *)(param_1 + 0x18),lVar5,(long)*(int *)(param_1 + 0xc));
  }
  uVar2 = *(ushort *)(param_1 + 8);
  if ((uVar2 >> 10 & 1) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x10));
    uVar2 = *(ushort *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(ushort *)(param_1 + 8) = uVar2 & 0xe3ff;
  return 0;
}



/* Entry: 108d82a1c; end: 108d83177;  */

undefined4 FUN_108d82a1c(byte *param_1,double *param_2,int param_3,uint param_4)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  
  *param_2 = 0.0;
  if (param_4 == 1) {
    lVar16 = (long)param_3;
    lVar17 = 1;
    uVar13 = 1;
    pbVar11 = param_1;
  }
  else {
    uVar5 = 3 - param_4;
    uVar12 = (ulong)uVar5;
    if ((int)uVar5 < param_3) {
      uVar12 = (ulong)(int)uVar5;
      do {
        if (param_1[uVar12] != 0) {
          uVar13 = 0;
          goto LAB_108d82a78;
        }
        uVar12 = uVar12 + 2;
      } while ((long)uVar12 < (long)param_3);
      uVar13 = 1;
    }
    else {
      uVar13 = 1;
    }
LAB_108d82a78:
    lVar16 = (ulong)param_4 + (long)(int)uVar12 + -3;
    pbVar11 = param_1 + (param_4 & 1);
    lVar17 = 2;
  }
  param_1 = param_1 + lVar16;
  while( true ) {
    if (param_1 <= pbVar11) {
      return 0;
    }
    bVar3 = *pbVar11;
    if (((&UNK_10dfa0749)[bVar3] & 1) == 0) break;
    pbVar11 = pbVar11 + lVar17;
  }
  lVar16 = lVar17;
  if (bVar3 != 0x2b && bVar3 != 0x2d) {
    lVar16 = 0;
  }
  pbVar11 = pbVar11 + lVar16;
  if (pbVar11 < param_1) {
    iVar14 = 0;
    do {
      if (*pbVar11 != 0x30) break;
      pbVar11 = pbVar11 + lVar17;
      iVar14 = iVar14 + 1;
    } while (pbVar11 < param_1);
  }
  else {
    iVar14 = 0;
  }
  if (pbVar11 < param_1) {
    lVar16 = 0;
    do {
      if (9 < *pbVar11 - 0x30 || 0xcccccccccccccca < lVar16) break;
      lVar16 = ((ulong)*pbVar11 & 0xf) + lVar16 * 10;
      pbVar11 = pbVar11 + lVar17;
      iVar14 = iVar14 + 1;
    } while (pbVar11 < param_1);
  }
  else {
    lVar16 = 0;
  }
  if (pbVar11 < param_1) {
    iVar18 = 0;
LAB_108d82b5c:
    if (0xfffffffffffffff5 < (ulong)*pbVar11 - 0x3a) goto code_r0x000108d82b6c;
    if (*pbVar11 == 0x2e) {
      for (; (pbVar11 = pbVar11 + lVar17, pbVar11 < param_1 &&
             (*pbVar11 - 0x30 < 10 && lVar16 < 0xccccccccccccccb));
          lVar16 = ((ulong)*pbVar11 & 0xf) + lVar16 * 10) {
        iVar14 = iVar14 + 1;
        iVar18 = iVar18 + -1;
      }
      for (; (pbVar11 < param_1 && (0xfffffffffffffff5 < (ulong)*pbVar11 - 0x3a));
          pbVar11 = pbVar11 + lVar17) {
        iVar14 = iVar14 + 1;
      }
    }
    if (param_1 <= pbVar11) goto LAB_108d82c78;
    if ((*pbVar11 | 0x20) != 0x65) {
      iVar8 = 0;
      iVar19 = 1;
LAB_108d82e84:
      if (iVar14 != 0) {
        while ((pbVar11 < param_1 && (((&UNK_10dfa0749)[*pbVar11] & 1) != 0))) {
          pbVar11 = pbVar11 + lVar17;
        }
      }
      goto LAB_108d82c80;
    }
    pbVar11 = pbVar11 + lVar17;
    if (pbVar11 < param_1) {
      bVar4 = *pbVar11;
      pbVar2 = pbVar11;
      if (bVar4 == 0x2d) {
        pbVar2 = pbVar11 + lVar17;
      }
      iVar8 = 1;
      if (bVar4 == 0x2d) {
        iVar8 = -1;
      }
      pbVar11 = pbVar11 + lVar17;
      if (bVar4 != 0x2b) {
        pbVar11 = pbVar2;
      }
      iVar19 = 1;
      if (bVar4 != 0x2b) {
        iVar19 = iVar8;
      }
      if ((pbVar11 < param_1) && (uVar12 = (ulong)*pbVar11, 0xfffffffffffffff5 < uVar12 - 0x3a)) {
        iVar10 = 0;
        do {
          pbVar11 = pbVar11 + lVar17;
          iVar8 = iVar10 * 10 + (int)(char)uVar12 + -0x30;
          if (9999 < iVar10) {
            iVar8 = 10000;
          }
        } while ((pbVar11 < param_1) &&
                (uVar12 = (ulong)*pbVar11, iVar10 = iVar8, 0xfffffffffffffff5 < uVar12 - 0x3a));
        goto LAB_108d82e84;
      }
      iVar8 = 0;
      bVar4 = 0;
    }
    else {
      iVar8 = 0;
      bVar4 = 0;
      iVar19 = 1;
    }
    goto joined_r0x000108d82eb0;
  }
  iVar18 = 0;
LAB_108d82c78:
  iVar8 = 0;
  iVar19 = 1;
LAB_108d82c80:
  bVar4 = 1;
joined_r0x000108d82eb0:
  if (lVar16 == 0) {
    dVar20 = -0.0;
    if (iVar14 == 0 || bVar3 != 0x2d) {
      dVar20 = 0.0;
    }
    goto LAB_108d82ed0;
  }
  uVar5 = iVar18 + iVar8 * iVar19;
  if ((int)uVar5 < 0) {
    uVar15 = -uVar5;
    if ((lVar16 * -0x3333333333333333 + 0x1999999999999998U >> 1 |
        lVar16 * -0x3333333333333333 << 0x3f) < 0x1999999999999999) {
      do {
        uVar9 = uVar15 - 1;
        lVar16 = lVar16 / 10;
        bVar1 = 0x1999999999999998 <
                (lVar16 * -0x3333333333333333 + 0x1999999999999998U >> 1 |
                lVar16 * -0x3333333333333333 << 0x3f);
        bVar6 = uVar15 != 0;
        bVar7 = uVar15 != 1;
        uVar15 = uVar9;
      } while ((!bVar1 && bVar6) && (bVar1 || bVar7));
      goto LAB_108d82d48;
    }
    lVar17 = -lVar16;
    if (bVar3 != 0x2d) {
      lVar17 = lVar16;
    }
  }
  else {
    uVar15 = uVar5;
    if ((lVar16 < 0xccccccccccccccc) && (lVar17 = lVar16, uVar9 = uVar5, uVar5 != 0)) {
      do {
        uVar15 = uVar9 - 1;
        lVar16 = lVar17 * 10;
        if (0x147ae147ae147ad < lVar17) break;
        bVar1 = 1 < uVar9;
        lVar17 = lVar16;
        uVar9 = uVar15;
      } while (bVar1);
    }
LAB_108d82d48:
    lVar17 = -lVar16;
    if (bVar3 != 0x2d) {
      lVar17 = lVar16;
    }
    if (uVar15 == 0) {
      dVar20 = (double)lVar17;
      goto LAB_108d82ed0;
    }
  }
  if (uVar15 - 0x134 < 0x22) {
    dVar20 = 1.0;
    if (uVar15 != 0x134) {
      do {
        uVar15 = uVar15 - 1;
        dVar20 = dVar20 * 10.0;
      } while (0xd4c77a < (uVar15 * 0x3f2b3885 + 0x1a98ef4 >> 2 | uVar15 * 0x40000000));
    }
    if ((int)uVar5 < 0) {
      dVar20 = ((double)lVar17 / dVar20) / 1e+308;
      goto LAB_108d82ed0;
    }
    dVar20 = dVar20 * (double)lVar17;
    dVar21 = 1e+308;
  }
  else {
    if (0x155 < uVar15) {
      dVar20 = (double)lVar17;
      if ((int)uVar5 < 0) {
        dVar20 = (double)((ulong)dVar20 ^ (ulong)dVar20 & 0x7ff8000000000000);
      }
      else {
        dVar20 = dVar20 * INFINITY;
      }
      goto LAB_108d82ed0;
    }
    dVar20 = 1.0;
    if ((uVar15 * -0x45d1745d >> 1 | uVar15 * -0x80000000) < 0xba2e8bb) {
LAB_108d82e3c:
      uVar15 = uVar15 + 0x16;
      do {
        dVar20 = dVar20 * 1e+22;
        uVar15 = uVar15 - 0x16;
      } while (0x16 < uVar15);
    }
    else {
      do {
        uVar9 = uVar15;
        dVar20 = dVar20 * 10.0;
        uVar15 = uVar9 - 1;
      } while (0xba2e8ba < (uVar15 * -0x45d1745d + 0xba2e8ba >> 1 | uVar15 * -0x80000000));
      if (1 < (int)uVar9) goto LAB_108d82e3c;
    }
    dVar21 = (double)lVar17;
    if ((int)uVar5 < 0) {
      dVar20 = dVar21 / dVar20;
      goto LAB_108d82ed0;
    }
  }
  dVar20 = dVar20 * dVar21;
LAB_108d82ed0:
  *param_2 = dVar20;
  if (!(bool)(bVar4 & ((pbVar11 >= param_1 && iVar14 != 0) && (pbVar11 < param_1 || -1 < iVar14))))
  {
    uVar13 = 0;
  }
  return uVar13;
code_r0x000108d82b6c:
  pbVar11 = pbVar11 + lVar17;
  iVar14 = iVar14 + 1;
  iVar18 = iVar18 + 1;
  if (param_1 <= pbVar11) goto LAB_108d82c78;
  goto LAB_108d82b5c;
}



/* Entry: 108d83178; end: 108d832db;  */

undefined8 FUN_108d83178(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 8);
  uVar3 = (uint)param_2;
  if ((uVar1 & 0x12) == 0) {
    FUN_108d832dc(param_1,param_2,0);
  }
  else {
    *(ushort *)(param_1 + 8) = uVar1 | 2;
    if ((uVar1 >> 0xe & 1) != 0) {
      func_0x000108d6781c(param_1);
    }
    if (((uVar3 & 0xfffffff7) != (uint)*(byte *)(param_1 + 10)) &&
       ((*(ushort *)(param_1 + 8) >> 1 & 1) != 0)) {
      FUN_108d833e4(param_1);
    }
    if ((((uVar3 >> 3 & 1) != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) &&
       (lVar2 = param_1, func_0x000108d8323c(), (int)lVar2 != 0)) {
      return 0;
    }
    if ((*(ushort *)(param_1 + 8) & 0x202) == 2) {
      FUN_108d8393c(param_1);
    }
  }
  if ((uint)*(byte *)(param_1 + 10) != (uVar3 & 0xfffffff7)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108d832dc; end: 108d833e3;  */

undefined8 FUN_108d832dc(long param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if (*(int *)(param_1 + 0x20) < 0x20) {
    lVar2 = param_1;
    FUN_108d82884(param_1,0x20,0);
    if ((int)lVar2 != 0) {
      return 7;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(ushort *)(param_1 + 8) = uVar1 & 0xd;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    pcVar4 = "%!.15g";
  }
  else {
    pcVar4 = "%lld";
  }
  func_0x000108d64bd8(0x20,uVar3,pcVar4);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    _strlen();
    uVar5 = (uint)lVar2 & 0x3fffffff;
  }
  *(uint *)(param_1 + 0xc) = uVar5;
  *(undefined1 *)(param_1 + 10) = 1;
  uVar1 = *(ushort *)(param_1 + 8);
  if (param_3 != 0) {
    uVar1 = *(ushort *)(param_1 + 8) & 0xfff3;
  }
  *(ushort *)(param_1 + 8) = uVar1 | 0x202;
  if ((int)param_2 != 1) {
    FUN_108d833e4(param_1,param_2);
  }
  return 0;
}



/* Entry: 108d833e4; end: 108d8393b;  */

undefined8 FUN_108d833e4(long param_1,int param_2)

{
  ushort *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  long lVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  uint uVar17;
  
  if ((param_2 == 1) || (*(char *)(param_1 + 10) == '\x01')) {
    uVar17 = *(uint *)(param_1 + 0xc);
    if (param_2 == 1) {
      *(uint *)(param_1 + 0xc) = uVar17 & 0xfffffffe;
      uVar15 = (uVar17 >> 1) << 2 | 1;
      uVar17 = uVar17 & 0xfffffffe;
    }
    else {
      uVar15 = uVar17 * 2 + 2;
    }
    puVar16 = *(ushort **)(param_1 + 0x10);
    puVar8 = *(ushort **)(param_1 + 0x28);
    FUN_108d6a6fc(puVar8,(long)(int)uVar15);
    if (puVar8 != (ushort *)0x0) {
      puVar1 = (ushort *)((long)puVar16 + (long)(int)uVar17);
      if (*(char *)(param_1 + 10) == '\x01') {
        puVar13 = puVar8;
        if (param_2 == 2) {
          puVar11 = puVar8;
          puVar12 = puVar16;
          if (0 < (int)uVar17) {
            do {
              puVar13 = (ushort *)((long)puVar12 + 1);
              bVar5 = (byte)*puVar12;
              puVar12 = puVar13;
              uVar15 = (uint)bVar5;
              if (bVar5 < 0xc0) {
LAB_108d8366c:
                puVar13 = puVar11 + 1;
                *puVar11 = (ushort)uVar15;
              }
              else {
                uVar14 = (uint)(byte)(&UNK_10dfa0a05)[bVar5 - 0xc0];
                puVar12 = puVar1;
                if (puVar13 != puVar1) {
                  do {
                    uVar6 = *puVar13;
                    puVar12 = puVar13;
                    if (((byte)uVar6 & 0xc0) != 0x80) break;
                    puVar13 = (ushort *)((long)puVar13 + 1);
                    uVar14 = (byte)uVar6 & 0x3f | uVar14 << 6;
                    puVar12 = (ushort *)((long)(int)uVar17 + (long)puVar16);
                  } while (puVar13 != puVar1);
                }
                uVar15 = 0xfffd;
                if (((uVar14 >> 1 == 0x7fff) || (uVar14 < 0x80)) ||
                   (((uVar14 & 0xfffff800) == 0xd800 || (uVar15 = uVar14, uVar14 >> 0x10 == 0))))
                goto LAB_108d8366c;
                *(byte *)puVar11 =
                     (byte)(uVar14 - 0x10000 >> 10) & 0xc0 | (byte)(uVar14 >> 10) & 0x3f;
                *(byte *)((long)puVar11 + 1) = (byte)(uVar14 - 0x10000 >> 0x12) & 3 | 0xd8;
                *(byte *)(puVar11 + 1) = (byte)uVar14;
                *(byte *)((long)puVar11 + 3) = (byte)(uVar14 >> 8) & 3 | 0xdc;
                puVar13 = puVar11 + 2;
              }
              puVar11 = puVar13;
            } while (puVar12 < puVar1);
          }
        }
        else {
          puVar11 = puVar8;
          puVar12 = puVar16;
          if (0 < (int)uVar17) {
            do {
              puVar13 = (ushort *)((long)puVar12 + 1);
              bVar5 = (byte)*puVar12;
              puVar12 = puVar13;
              uVar15 = (uint)bVar5;
              if (bVar5 < 0xc0) {
LAB_108d83854:
                puVar13 = puVar11 + 1;
                *puVar11 = (ushort)(uVar15 >> 8) & 0xff | (ushort)((uVar15 & 0xff00ff) << 8);
              }
              else {
                uVar14 = (uint)(byte)(&UNK_10dfa0a05)[bVar5 - 0xc0];
                puVar12 = puVar1;
                if (puVar13 != puVar1) {
                  do {
                    uVar6 = *puVar13;
                    puVar12 = puVar13;
                    if (((byte)uVar6 & 0xc0) != 0x80) break;
                    puVar13 = (ushort *)((long)puVar13 + 1);
                    uVar14 = (byte)uVar6 & 0x3f | uVar14 << 6;
                    puVar12 = (ushort *)((long)(int)uVar17 + (long)puVar16);
                  } while (puVar13 != puVar1);
                }
                uVar15 = 0xfffd;
                if ((((uVar14 >> 1 == 0x7fff) || (uVar14 < 0x80)) ||
                    ((uVar14 & 0xfffff800) == 0xd800)) || (uVar15 = uVar14, uVar14 >> 0x10 == 0))
                goto LAB_108d83854;
                *(byte *)puVar11 = (byte)(uVar14 - 0x10000 >> 0x12) & 3 | 0xd8;
                *(byte *)((long)puVar11 + 1) =
                     (byte)(uVar14 - 0x10000 >> 10) & 0xc0 | (byte)(uVar14 >> 10) & 0x3f;
                *(byte *)(puVar11 + 1) = (byte)(uVar14 >> 8) & 3 | 0xdc;
                *(byte *)((long)puVar11 + 3) = (byte)uVar14;
                puVar13 = puVar11 + 2;
              }
              puVar11 = puVar13;
            } while (puVar12 < puVar1);
          }
        }
        *(int *)(param_1 + 0xc) = (int)puVar13 - (int)puVar8;
        puVar11 = (ushort *)((long)puVar13 + 1);
        *(byte *)puVar13 = 0;
      }
      else {
        puVar11 = puVar8;
        if (*(char *)(param_1 + 10) == '\x02') {
          puVar13 = puVar8;
          if (0 < (int)uVar17) {
            do {
              bVar5 = (byte)*puVar16;
              puVar12 = puVar16 + 1;
              bVar4 = *(byte *)((long)puVar16 + 1);
              uVar6 = *puVar16;
              if ((bVar4 & 0xf8) == 0xd8 && puVar12 < puVar1) {
                uVar7 = puVar16[1];
                puVar12 = puVar16 + 2;
                bVar4 = *(byte *)((long)puVar16 + 3);
                uVar17 = (uVar6 & 0x3c0) * 0x400 + 0x10000;
                *(byte *)puVar13 = (byte)(uVar17 >> 0x12) | 0xf0;
                *(byte *)((long)puVar13 + 1) =
                     (byte)((uVar17 | (bVar5 & 0x3f) << 10) >> 0xc) & 0x3f | 0x80;
                *(byte *)(puVar13 + 1) =
                     (byte)(((uint)(byte)uVar7 | (bVar4 & 3) << 8 | (uint)bVar5 << 10) >> 6) & 0x3f
                     | 0x80;
                *(byte *)((long)puVar13 + 3) = (byte)uVar7 & 0x3f | 0x80;
                puVar11 = puVar13 + 2;
              }
              else if (uVar6 < 0x80) {
                puVar11 = (ushort *)((long)puVar13 + 1);
                *(byte *)puVar13 = bVar5;
              }
              else if (bVar4 < 8) {
                *(byte *)puVar13 = (byte)(uVar6 >> 6) | 0xc0;
                *(byte *)((long)puVar13 + 1) = bVar5 & 0x3f | 0x80;
                puVar11 = puVar13 + 1;
              }
              else {
                *(byte *)puVar13 = bVar4 >> 4 | 0xe0;
                *(byte *)((long)puVar13 + 1) = (byte)(uVar6 >> 6) & 0x3f | 0x80;
                *(byte *)(puVar13 + 1) = bVar5 & 0x3f | 0x80;
                puVar11 = (ushort *)((long)puVar13 + 3);
              }
              puVar13 = puVar11;
              puVar16 = puVar12;
            } while (puVar12 < puVar1);
          }
        }
        else {
          puVar13 = puVar8;
          if (0 < (int)uVar17) {
            do {
              bVar5 = (byte)*puVar16;
              puVar12 = puVar16 + 1;
              bVar4 = *(byte *)((long)puVar16 + 1);
              uVar6 = CONCAT11(bVar5,bVar4);
              if ((bVar5 & 0xf8) == 0xd8 && puVar12 < puVar1) {
                uVar7 = puVar16[1];
                puVar12 = puVar16 + 2;
                bVar5 = *(byte *)((long)puVar16 + 3);
                uVar17 = (uVar6 & 0x3c0) * 0x400 + 0x10000;
                *(byte *)puVar13 = (byte)(uVar17 >> 0x12) | 0xf0;
                *(byte *)((long)puVar13 + 1) =
                     (byte)((uVar17 | (bVar4 & 0x3f) << 10) >> 0xc) & 0x3f | 0x80;
                *(byte *)(puVar13 + 1) =
                     (byte)(((uint)bVar5 | ((byte)uVar7 & 3) << 8 | (uint)bVar4 << 10) >> 6) & 0x3f
                     | 0x80;
                *(byte *)((long)puVar13 + 3) = bVar5 & 0x3f | 0x80;
                puVar11 = puVar13 + 2;
              }
              else if (uVar6 < 0x80) {
                puVar11 = (ushort *)((long)puVar13 + 1);
                *(byte *)puVar13 = bVar4;
              }
              else if (bVar5 < 8) {
                *(byte *)puVar13 = (byte)(uVar6 >> 6) | 0xc0;
                *(byte *)((long)puVar13 + 1) = bVar4 & 0x3f | 0x80;
                puVar11 = puVar13 + 1;
              }
              else {
                *(byte *)puVar13 = bVar5 >> 4 | 0xe0;
                *(byte *)((long)puVar13 + 1) = (byte)(uVar6 >> 6) & 0x3f | 0x80;
                *(byte *)(puVar13 + 1) = bVar4 & 0x3f | 0x80;
                puVar11 = (ushort *)((long)puVar13 + 3);
              }
              puVar13 = puVar11;
              puVar16 = puVar12;
            } while (puVar12 < puVar1);
          }
        }
        *(int *)(param_1 + 0xc) = (int)puVar11 - (int)puVar8;
      }
      *(byte *)puVar11 = 0;
      uVar6 = *(ushort *)(param_1 + 8);
      if (((uVar6 & 0x2460) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
        FUN_108d826d0(param_1);
      }
      *(ushort *)(param_1 + 8) = uVar6 & 0x1f | 0x202;
      *(char *)(param_1 + 10) = (char)param_2;
      *(ushort **)(param_1 + 0x10) = puVar8;
      *(ushort **)(param_1 + 0x18) = puVar8;
      lVar10 = *(long *)(param_1 + 0x28);
      if (((lVar10 == 0) || (puVar8 < *(ushort **)(lVar10 + 0x170))) ||
         (*(ushort **)(lVar10 + 0x178) <= puVar8)) {
        (*pcRam0000000113297950)();
        uVar17 = (uint)puVar8;
      }
      else {
        uVar17 = (uint)*(ushort *)(lVar10 + 0x150);
      }
      *(uint *)(param_1 + 0x20) = uVar17;
      return 0;
    }
  }
  else {
    lVar10 = param_1;
    func_0x000108d8323c();
    if ((int)lVar10 == 0) {
      if (1 < *(int *)(param_1 + 0xc)) {
        puVar9 = *(undefined1 **)(param_1 + 0x10);
        puVar2 = puVar9 + ((long)*(int *)(param_1 + 0xc) & 0xfffffffffffffffe);
        do {
          uVar3 = *puVar9;
          *puVar9 = puVar9[1];
          puVar9[1] = uVar3;
          puVar9 = puVar9 + 2;
        } while (puVar9 < puVar2);
      }
      *(char *)(param_1 + 10) = (char)param_2;
      return 0;
    }
  }
  return 7;
}



/* Entry: 108d8393c; end: 108d83993;  */

void FUN_108d8393c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_108d82884(iVar1,*(int *)(param_1 + 0xc) + 2,1);
  if (iVar1 == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0xc)) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0xc) + 1) = 0;
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0x200;
  }
  return;
}



/* Entry: 108d83994; end: 108d839c7;  */

/* WARNING: Removing unreachable block (ram,0x000108d828b8) */
/* WARNING: Removing unreachable block (ram,0x000108d828c0) */
/* WARNING: Removing unreachable block (ram,0x000108d828cc) */
/* WARNING: Removing unreachable block (ram,0x000108d82968) */
/* WARNING: Removing unreachable block (ram,0x000108d82970) */
/* WARNING: Removing unreachable block (ram,0x000108d8297c) */

undefined8 FUN_108d83994(long param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 <= *(int *)(param_1 + 0x20)) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xd;
    return 0;
  }
  if (*(int *)(param_1 + 0x20) < param_2) {
    if (param_2 < 0x21) {
      param_2 = 0x20;
    }
    if (0 < *(int *)(param_1 + 0x20)) {
      func_0x000108d60660(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
    }
    uVar3 = *(ulong *)(param_1 + 0x28);
    FUN_108d6a6fc(uVar3,param_2);
    *(ulong *)(param_1 + 0x18) = uVar3;
    if (uVar3 == 0) {
      if ((*(ushort *)(param_1 + 8) & 0x2460) == 0) {
        *(undefined2 *)(param_1 + 8) = 1;
      }
      else {
        func_0x000108d82720(param_1);
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 7;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (((lVar4 == 0) || (uVar3 < *(ulong *)(lVar4 + 0x170))) ||
       (*(ulong *)(lVar4 + 0x178) <= uVar3)) {
      (*pcRam0000000113297950)();
      uVar2 = (uint)uVar3;
    }
    else {
      uVar2 = (uint)*(ushort *)(lVar4 + 0x150);
    }
    *(uint *)(param_1 + 0x20) = uVar2;
  }
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 >> 10 & 1) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(ushort *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(ushort *)(param_1 + 8) = uVar1 & 0xe3ff;
  return 0;
}



/* Entry: 108d839c8; end: 108d83a7b;  */

void FUN_108d839c8(undefined8 *param_1,undefined8 param_2)

{
  if ((*(ushort *)(param_1 + 1) & 0x2460) != 0) {
    func_0x000108d82720(param_1);
  }
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 4;
  return;
}



/* Entry: 108d83a7c; end: 108d89203;  */

/* WARNING: Type propagation algorithm not settling */

long *******
FUN_108d83a7c(long *******param_1,long *******param_2,long *******param_3,long *******param_4)

{
  long *******ppppppplVar1;
  undefined8 *puVar2;
  char *pcVar3;
  uint *puVar4;
  undefined *puVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  ushort uVar10;
  bool bVar11;
  undefined6 uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  long *****ppppplVar16;
  undefined8 *puVar17;
  char *pcVar18;
  long ****pppplVar19;
  char *pcVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  long *******ppppppplVar30;
  ushort uVar31;
  undefined2 uVar32;
  int iVar33;
  undefined1 *puVar34;
  long lVar35;
  ulong uVar36;
  long ******pppppplVar37;
  long ******pppppplVar38;
  long *******ppppppplVar39;
  long *****ppppplVar40;
  uint uVar41;
  ulong uVar42;
  long ******pppppplVar43;
  ulong uVar44;
  long *******ppppppplVar45;
  long *******ppppppplVar46;
  long *******ppppppplVar47;
  long *******ppppppplVar48;
  long ******pppppplVar49;
  uint uVar50;
  ushort uVar51;
  uint uVar52;
  uint uVar53;
  long lVar54;
  undefined8 uVar55;
  long ******pppppplVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  long *******ppppppplStack_270;
  long lStack_240;
  int iStack_224;
  long *****ppppplStack_210;
  uint uStack_1f4;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1d8;
  undefined8 uStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  char cStack_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  long *******ppppppplStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *******ppppppplStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplVar22 = (long *******)*param_2;
  pppppplVar49 = param_2[1];
  bVar7 = *(byte *)((long)ppppppplVar22 + 0x4e);
  ppppppplStack_1e8 = (long *******)param_2[2];
  ppppppplStack_1f0 = (long *******)ppppppplVar22[6];
  func_0x000108d813c8();
  if (*(int *)((long)param_2 + 0x84) == 7) {
    uVar52 = 0;
    uStack_1f4 = 0;
    goto LAB_108d83ae4;
  }
  *(int *)((long)param_2 + 0x84) = 0;
  param_2[0x18] = (long ******)0x0;
  param_2[5] = (long ******)0x0;
  *(int *)(ppppppplVar22 + 0x57) = 0;
  if (*(int *)(ppppppplVar22 + 0x29) == 0) {
    uVar29 = (uint)bVar7;
    if (ppppppplVar22[0x32] == (long ******)0x0) {
      uVar50 = 0;
    }
    else {
      uVar52 = *(uint *)(param_2 + 0x16);
      uVar50 = *(uint *)(ppppppplVar22 + 0x34);
      uVar24 = 0;
      if (uVar50 != 0) {
        uVar24 = uVar52 / uVar50;
      }
      if (uVar52 != 0) {
        uVar50 = uVar52 - uVar24 * uVar50;
      }
    }
    uStack_1f4 = 0;
    iStack_224 = 0;
    uVar52 = 0;
    ppppplStack_210 = (long *****)0x0;
    pppppplVar56 = pppppplVar49 + (long)*(int *)(param_2 + 0x10) * 3;
    ppppppplVar21 = param_2 + 9;
    ppppppplVar1 = ppppppplVar22 + 99;
    do {
      uVar31 = (ushort)param_4;
      if (*(char *)((long)ppppppplVar22 + 0x51) != '\0') goto LAB_108d83ae4;
      uVar52 = uVar52 + 1;
      bVar23 = *(byte *)pppppplVar56;
      ppppppplVar46 = (long *******)0x0;
      uVar12 = uStack_188._2_6_;
      ppppppplVar48 = param_3;
      ppppppplVar45 = ppppppplVar22;
      switch(bVar23) {
      case 1:
        param_3 = (long *******)(ulong)*(byte *)((long)pppppplVar56 + 3);
        param_4 = (long *******)param_2[3];
        uStack_190 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        if (*(byte *)((long)pppppplVar56 + 3) != 0) {
          ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
          ppppppplVar48 = param_4;
          ppppppplVar45 = param_3;
          do {
            *ppppppplVar48 = (long ******)ppppppplVar46;
            if (((*(ushort *)(ppppppplVar46 + 1) >> 0xc & 1) != 0) &&
               (ppppppplVar39 = ppppppplVar46, func_0x000108d8323c(), (int)ppppppplVar39 != 0))
            goto LAB_108d83ae4;
            ppppppplVar46 = ppppppplVar46 + 7;
            ppppppplVar48 = ppppppplVar48 + 1;
            ppppppplVar45 = (long *******)((long)ppppppplVar45 + -1);
          } while (ppppppplVar45 != (long *******)0x0);
        }
        uStack_188 = (long *******)pppppplVar56[2];
        uVar24 = (int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) * -0x55555555;
        ppppppplVar48 = (long *******)(ulong)uVar24;
        uStack_170 = CONCAT44(uStack_170._4_4_,uVar24);
        *(ushort *)(uStack_190 + 1) = *(ushort *)(uStack_190 + 1) & 0xbe00 | 1;
        uStack_168._0_2_ = (ushort)(byte)uStack_168;
        ppppppplVar22[6] = (long ******)ppppppplStack_1f0;
        ppppppplStack_178 = param_2;
        (*(code *)uStack_188[3])(&uStack_190);
        ppppppplStack_1f0 = (long *******)ppppppplVar22[6];
        if (uStack_168._1_1_ == '\0') {
          ppppppplVar46 = (long *******)0x0;
        }
        else {
          if (uStack_170._4_4_ == 0) {
            ppppppplVar46 = (long *******)0x0;
          }
          else {
            func_0x000108d67a18(uStack_190,1);
            func_0x000108d7163c(ppppppplVar21,ppppppplVar22,&UNK_10f517517);
            ppppppplVar46 = (long *******)(uStack_170 >> 0x20);
          }
          param_4 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
          FUN_108d81f20(param_2);
          param_3 = ppppppplVar48;
        }
        uVar24 = (uint)*(ushort *)(uStack_190 + 1);
        if (((*(ushort *)(uStack_190 + 1) >> 1 & 1) != 0) &&
           (param_3 = (long *******)(ulong)uVar29, uVar29 != *(byte *)((long)uStack_190 + 10))) {
          FUN_108d833e4();
          uVar24 = (uint)*(ushort *)(uStack_190 + 1);
        }
        if ((uVar24 & 0x12) != 0) {
          iVar14 = *(int *)((long)uStack_190 + 0xc);
          if ((uVar24 >> 0xe & 1) != 0) {
            iVar14 = *(int *)uStack_190 + iVar14;
          }
          if (*(int *)(uStack_190[5] + 0xd) < iVar14) goto code_r0x000108d88dfc;
        }
        break;
      case 2:
        uVar24 = *(uint *)((long)pppppplVar56 + 4);
        ppppppplVar45 = (long *******)(ulong)uVar24;
        ppppppplVar48 = (long *******)pppppplVar56[2];
        if (uVar24 == 0) {
          if (0 < *(int *)((long)ppppppplVar22 + 0xac)) {
            uVar31 = 0x80ce;
code_r0x000108d89064:
            func_0x000108d7163c(ppppppplVar21,ppppppplVar22);
            ppppppplVar46 = (long *******)0x5;
            goto LAB_108d83b54;
          }
          if (ppppppplVar48 == (long *******)0x0) {
            uVar24 = 0;
          }
          else {
            ppppppplVar46 = ppppppplVar48;
            _strlen();
            uVar24 = (uint)ppppppplVar46 & 0x3fffffff;
          }
          param_4 = (long *******)
                    (ulong)(uint)(*(int *)((long)ppppppplVar22 + 0x30c) +
                                 *(int *)(ppppppplVar22 + 0x62));
          ppppppplVar46 = ppppppplVar22;
          FUN_108d825f8(ppppppplVar22,0);
          uVar31 = (ushort)param_4;
          if ((int)ppppppplVar46 != 0) goto code_r0x000108d88ff4;
          param_3 = (long *******)(ulong)(uVar24 + 0x21);
          ppppppplVar45 = ppppppplVar22;
          FUN_108d6a6fc();
          if (ppppppplVar45 == (long *******)0x0) {
            ppppppplVar46 = (long *******)0x0;
          }
          else {
            *ppppppplVar45 = (long ******)(ppppppplVar45 + 4);
            param_4 = (long *******)(ulong)(uVar24 + 1);
            _memcpy();
            if (*(char *)((long)ppppppplVar22 + 0x4f) == '\0') {
              *(int *)((long)ppppppplVar22 + 0x30c) = *(int *)((long)ppppppplVar22 + 0x30c) + 1;
            }
            else {
              *(undefined1 *)((long)ppppppplVar22 + 0x4f) = 0;
              *(undefined1 *)((long)ppppppplVar22 + 0x56) = 1;
            }
            ppppppplVar46 = (long *******)0x0;
            ppppppplVar45[3] = ppppppplVar22[0x60];
            ppppppplVar22[0x60] = (long ******)ppppppplVar45;
            param_1 = (long *******)*ppppppplVar1;
            ppppppplVar45[2] = ppppppplVar22[100];
            ppppppplVar45[1] = (long ******)param_1;
            param_3 = ppppppplVar48;
          }
        }
        else {
          ppppppplVar39 = (long *******)ppppppplVar22[0x60];
          if (ppppppplVar39 == (long *******)0x0) {
code_r0x000108d88c10:
            uVar31 = 0x8101;
            func_0x000108d7163c(ppppppplVar21,ppppppplVar22);
            ppppppplVar46 = (long *******)0x1;
            goto LAB_108d83b54;
          }
          iVar14 = 1;
          while( true ) {
            iVar33 = (int)*ppppppplVar39;
            param_3 = ppppppplVar48;
            FUN_108d5e044();
            if (iVar33 == 0) break;
            ppppppplVar39 = (long *******)ppppppplVar39[3];
            iVar14 = iVar14 + 1;
            if (ppppppplVar39 == (long *******)0x0) goto code_r0x000108d88c10;
          }
          if ((uVar24 == 1) && (0 < *(int *)((long)ppppppplVar22 + 0xac))) {
            uVar31 = 0x8117;
            goto code_r0x000108d89064;
          }
          if (ppppppplVar39[3] == (long ******)0x0) {
            bVar13 = *(char *)((long)ppppppplVar22 + 0x56) != '\0';
            if ((uVar24 != 1) || (*(char *)((long)ppppppplVar22 + 0x56) == '\0'))
            goto code_r0x000108d87978;
            ppppppplVar48 = param_2;
            FUN_108d81604();
            uVar31 = (ushort)param_4;
            ppppppplVar46 = (long *******)0x1;
            if ((int)ppppppplVar48 != 0) goto code_r0x000108d83bc4;
            *(undefined1 *)((long)ppppppplVar22 + 0x4f) = 1;
            ppppppplVar46 = param_2;
            FUN_108d80e44();
            uVar31 = (ushort)param_4;
            if ((int)ppppppplVar46 == 5) {
              *(int *)(param_2 + 0x10) =
                   (int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) * -0x55555555;
              *(undefined1 *)((long)ppppppplVar22 + 0x4f) = 0;
              ppppppplVar46 = (long *******)0x5;
              *(int *)((long)param_2 + 0x84) = 5;
              goto code_r0x000108d83bc4;
            }
            ppppppplVar48 = (long *******)(ulong)(iVar14 - 1);
            *(undefined1 *)((long)ppppppplVar22 + 0x56) = 0;
            ppppppplVar46 = (long *******)(ulong)*(uint *)((long)param_2 + 0x84);
            bVar13 = true;
          }
          else {
            bVar13 = false;
code_r0x000108d87978:
            ppppppplVar48 =
                 (long *******)(ulong)(uint)(*(int *)((long)ppppppplVar22 + 0x30c) - iVar14);
            if (uVar24 == 2) {
              uVar28 = *(uint *)((long)ppppppplVar22 + 0x2c) >> 1 & 1;
              if (0 < *(int *)(ppppppplVar22 + 5)) {
                lVar35 = 0;
                lVar54 = 8;
                do {
                  ppppppplVar46 = *(long ********)((long)ppppppplVar22[4] + lVar54);
                  param_4 = (long *******)(ulong)(uVar28 ^ 1);
                  FUN_108d7ca38(ppppppplVar46,0x204);
                  uVar31 = (ushort)param_4;
                  if ((int)ppppppplVar46 != 0) goto code_r0x000108d88ff4;
                  lVar35 = lVar35 + 1;
                  iVar14 = *(int *)(ppppppplVar22 + 5);
                  lVar54 = lVar54 + 0x20;
                } while (lVar35 < iVar14);
                goto code_r0x000108d88130;
              }
            }
            else {
              uVar28 = 0;
              iVar14 = *(int *)(ppppppplVar22 + 5);
code_r0x000108d88130:
              if (0 < iVar14) {
                lVar35 = 0;
                lVar54 = 8;
                do {
                  ppppppplVar46 = *(long ********)((long)ppppppplVar22[4] + lVar54);
                  param_4 = ppppppplVar48;
                  func_0x000108d82520(ppppppplVar46,ppppppplVar45);
                  uVar31 = (ushort)param_4;
                  if ((int)ppppppplVar46 != 0) goto code_r0x000108d88ff4;
                  lVar35 = lVar35 + 1;
                  lVar54 = lVar54 + 0x20;
                } while (lVar35 < *(int *)(ppppppplVar22 + 5));
              }
            }
            if (uVar28 == 0) {
              ppppppplVar46 = (long *******)0x0;
            }
            else {
              for (pppppplVar43 = ppppppplVar22[1]; pppppplVar43 != (long ******)0x0;
                  pppppplVar43 = (long ******)pppppplVar43[0xb]) {
                *(ushort *)((long)pppppplVar43 + 0x8c) = *(ushort *)((long)pppppplVar43 + 0x8c) | 8;
              }
              FUN_108d61aa4(ppppppplVar22);
              ppppppplVar46 = (long *******)0x0;
              *(uint *)((long)ppppppplVar22 + 0x2c) = *(uint *)((long)ppppppplVar22 + 0x2c) | 2;
            }
          }
          while (param_3 = (long *******)ppppppplVar22[0x60], param_3 != ppppppplVar39) {
            ppppppplVar22[0x60] = param_3[3];
            func_0x000108d60660(ppppppplVar22);
            *(int *)((long)ppppppplVar22 + 0x30c) = *(int *)((long)ppppppplVar22 + 0x30c) + -1;
          }
          if (uVar24 == 1) {
            ppppppplVar22[0x60] = ppppppplVar39[3];
            func_0x000108d60660(ppppppplVar22);
            param_3 = ppppppplVar39;
            if (bVar13) goto code_r0x000108d88908;
            *(int *)((long)ppppppplVar22 + 0x30c) = *(int *)((long)ppppppplVar22 + 0x30c) + -1;
          }
          else {
            param_1 = (long *******)ppppppplVar39[1];
            ppppppplVar22[100] = ppppppplVar39[2];
            *ppppppplVar1 = (long ******)param_1;
code_r0x000108d88908:
            bVar11 = false;
            if (uVar24 != 2) {
              bVar11 = bVar13;
            }
            if (bVar11) break;
          }
          ppppppplVar46 = ppppppplVar22;
          FUN_108d825f8();
          uVar31 = (ushort)ppppppplVar48;
          param_3 = ppppppplVar45;
          param_4 = ppppppplVar48;
          if ((int)ppppppplVar46 != 0) goto code_r0x000108d88ff4;
        }
        break;
      case 3:
        uVar29 = *(uint *)((long)pppppplVar56 + 4);
        iVar14 = *(int *)(pppppplVar56 + 1);
        if (((uVar29 == 0) || (*(char *)((long)ppppppplVar22 + 0x4f) != '\0')) || (iVar14 != 0)) {
          if (uVar29 == *(byte *)((long)ppppppplVar22 + 0x4f)) {
            uVar51 = 0x81b4;
            if (iVar14 == 0) {
              uVar51 = 0x81df;
            }
            uVar31 = 0x8184;
            if (uVar29 != 0) {
              uVar31 = uVar51;
            }
            goto code_r0x000108d88f70;
          }
          if (iVar14 == 0) goto code_r0x000108d89078;
          param_3 = (long *******)0x204;
          FUN_108d8145c(ppppppplVar22);
          *(undefined1 *)((long)ppppppplVar22 + 0x4f) = 1;
code_r0x000108d890e0:
          FUN_108d815bc(ppppppplVar22);
code_r0x000108d890e8:
          uVar29 = 0x65;
          if (*(int *)((long)param_2 + 0x84) != 0) {
            uVar29 = 1;
          }
          ppppppplVar46 = (long *******)(ulong)uVar29;
          goto code_r0x000108d83bc4;
        }
        if (*(int *)((long)ppppppplVar22 + 0xac) < 1) {
code_r0x000108d89078:
          ppppppplVar21 = param_2;
          FUN_108d81604();
          if ((int)ppppppplVar21 == 0) {
            *(char *)((long)ppppppplVar22 + 0x4f) = (char)uVar29;
            ppppppplVar21 = param_2;
            FUN_108d80e44();
            if ((int)ppppppplVar21 != 5) goto code_r0x000108d890e0;
            *(int *)(param_2 + 0x10) =
                 (int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) * -0x55555555;
            *(char *)((long)ppppppplVar22 + 0x4f) = '\x01' - (char)uVar29;
            goto code_r0x000108d88f20;
          }
          goto LAB_108d83bc0;
        }
        uVar31 = 0x814d;
        func_0x000108d7163c(ppppppplVar21,ppppppplVar22);
        ppppppplVar46 = (long *******)0x5;
        goto LAB_108d83b54;
      case 4:
        param_3 = (long *******)(ulong)*(uint *)(pppppplVar56 + 1);
        if ((*(uint *)(pppppplVar56 + 1) != 0) &&
           ((*(byte *)((long)ppppppplVar22 + 0x2f) >> 1 & 1) != 0)) {
          ppppppplVar46 = (long *******)0x8;
          goto code_r0x000108d88ff4;
        }
        ppppppplVar48 =
             (long *******)ppppppplVar22[4][(long)*(int *)((long)pppppplVar56 + 4) * 4 + 1];
        if (ppppppplVar48 == (long *******)0x0) {
          iVar14 = 0;
          ppppppplVar46 = (long *******)0x0;
          uStack_190 = (long *******)((ulong)uStack_190._4_4_ << 0x20);
code_r0x000108d87bac:
          if ((*(byte *)((long)pppppplVar56 + 3) != 0) &&
             ((iVar33 = (uint)uStack_190, (uint)uStack_190 != *(int *)((long)pppppplVar56 + 0xc) ||
              (iVar14 != *(int *)(pppppplVar56 + 2))))) {
            func_0x000108d60660(ppppppplVar22,*ppppppplVar21);
            ppppppplVar46 = ppppppplVar22;
            FUN_108d68d58(ppppppplVar22,&DAT_10f518208);
            *ppppppplVar21 = (long ******)ppppppplVar46;
            param_3 = (long *******)(long)*(int *)((long)pppppplVar56 + 4);
            if (*(int *)ppppppplVar22[4][(long)param_3 * 4 + 3] != iVar33) {
              FUN_108d89c20(ppppppplVar22);
            }
            *(ushort *)((long)param_2 + 0x8c) = *(ushort *)((long)param_2 + 0x8c) | 8;
            ppppppplVar46 = (long *******)0x11;
          }
          break;
        }
        ppppppplVar46 = ppppppplVar48;
        FUN_108d5f618();
        if ((int)ppppppplVar46 == 0) {
          if (*(int *)(pppppplVar56 + 1) == 0) {
            ppppppplVar46 = (long *******)0x0;
          }
          else if (((*(ushort *)((long)param_2 + 0x8c) >> 5 & 1) == 0) ||
                  ((*(char *)((long)ppppppplVar22 + 0x4f) != '\0' &&
                   (*(int *)(ppppppplVar22 + 0x15) < 2)))) {
            ppppppplVar46 = (long *******)0x0;
          }
          else {
            iVar14 = *(int *)((long)param_2 + 0x9c);
            if (iVar14 == 0) {
              iVar14 = *(int *)(ppppppplVar22 + 0x62);
              *(int *)(ppppppplVar22 + 0x62) = iVar14 + 1;
              iVar14 = *(int *)((long)ppppppplVar22 + 0x30c) + iVar14 + 1;
              *(int *)((long)param_2 + 0x9c) = iVar14;
            }
            ppppppplVar46 = ppppppplVar22;
            FUN_108d825f8(ppppppplVar22,0,iVar14 + -1);
            if ((int)ppppppplVar46 == 0) {
              ppppppplVar46 = ppppppplVar48;
              FUN_108d89b9c(ppppppplVar48,*(int *)((long)param_2 + 0x9c));
            }
            param_1 = (long *******)*ppppppplVar1;
            param_2[0x1b] = ppppppplVar22[100];
            param_2[0x1a] = (long ******)param_1;
          }
          param_4 = (long *******)&uStack_190;
          param_3 = (long *******)0x1;
          FUN_108d615f0(ppppppplVar48);
          iVar14 = *(int *)((long)ppppppplVar22[4][(long)*(int *)((long)pppppplVar56 + 4) * 4 + 3] +
                           4);
          goto code_r0x000108d87bac;
        }
        if ((int)ppppppplVar46 != 5) goto code_r0x000108d88ff4;
        *(int *)(param_2 + 0x10) =
             (int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) * -0x55555555;
        goto code_r0x000108d88f24;
      case 5:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        iStack_1a8 = 0;
        param_3 = (long *******)ppppplVar16[9];
        param_4 = (long *******)&iStack_1a8;
        ppppppplVar46 = ppppppplVar22;
        FUN_108d8b558();
        goto code_r0x000108d85940;
      case 6:
      case 7:
        if (param_2[0xc][*(int *)((long)pppppplVar56 + 4)] == (long *****)0x0)
        goto code_r0x000108d874f8;
      case 8:
      case 9:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        iStack_1a8 = *(int *)((long)pppppplVar56 + 0xc);
        ppppppplVar46 = (long *******)*ppppplVar16;
        param_3 = (long *******)&iStack_1a8;
        (*(code *)pppppplVar56[2])();
code_r0x000108d85940:
        *(undefined4 *)(ppppplVar16 + 10) = 0;
        if (iStack_1a8 == 0) {
          *(undefined1 *)((long)ppppplVar16 + 0x25) = 0;
          *(int *)((long)param_2 + (ulong)*(byte *)((long)pppppplVar56 + 3) * 4 + 0xa0) =
               *(int *)((long)param_2 + (ulong)*(byte *)((long)pppppplVar56 + 3) * 4 + 0xa0) + 1;
          goto code_r0x000108d87c58;
        }
        *(undefined1 *)((long)ppppplVar16 + 0x25) = 1;
        goto code_r0x000108d87c6c;
      case 10:
        param_3 = (long *******)(ulong)*(byte *)((long)pppppplVar56 + 3);
        param_4 = (long *******)param_2[3];
        if (*(byte *)((long)pppppplVar56 + 3) != 0) {
          ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
          ppppppplVar45 = param_4;
          ppppppplVar48 = param_3;
          do {
            *ppppppplVar45 = (long ******)ppppppplVar46;
            ppppppplVar46 = ppppppplVar46 + 7;
            ppppppplVar48 = (long *******)((long)ppppppplVar48 + -1);
            ppppppplVar45 = ppppppplVar45 + 1;
          } while (ppppppplVar48 != (long *******)0x0);
        }
        uStack_1d0 = pppppplVar56[2];
        ppppppplStack_1c8 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        *(int *)((long)ppppppplStack_1c8 + 0xc) = *(int *)((long)ppppppplStack_1c8 + 0xc) + 1;
        uStack_188 = (long *******)CONCAT62(uVar12,1);
        uStack_170 = uStack_170 & 0xffffffff00000000;
        ppppppplStack_1d8 = (long *******)&uStack_190;
        iStack_1b8 = (int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) * -0x55555555;
        uStack_1b4 = 0;
        cStack_1b0 = '\0';
        ppppppplStack_1c0 = param_2;
        uStack_168 = ppppppplVar22;
        (*(code *)uStack_1d0[4])(&ppppppplStack_1d8);
        if (uStack_1b4 == 0) {
          ppppppplVar46 = (long *******)0x0;
        }
        else {
          func_0x000108d67a18(&uStack_190,1);
          param_4 = (long *******)&UNK_10f517517;
          param_3 = ppppppplVar22;
          func_0x000108d7163c(ppppppplVar21);
          ppppppplVar46 = (long *******)(ulong)uStack_1b4;
        }
        if ((cStack_1b0 != '\0') && (*(int *)((long)pppppplVar56 + -0x14) != 0)) {
          ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + -0x14) * 7;
          if (((ulong)ppppppplVar48[1] & 0x2460) == 0) {
            *ppppppplVar48 = (long ******)0x1;
            *(undefined2 *)(ppppppplVar48 + 1) = 4;
          }
          else {
            param_3 = (long *******)0x1;
            FUN_108d839c8();
          }
        }
        if (((ulong)uStack_188 & 0x2460) != 0 || (int)uStack_170 != 0) {
code_r0x000108d87dc0:
          func_0x000108d826d0(&uStack_190);
        }
        break;
      case 0xb:
        uStack_188 = (long *******)CONCAT44(uStack_188._4_4_,0xffffffff);
        param_1 = (long *******)0xffffffff00000000;
        uStack_190 = (long *******)0xffffffff00000000;
        param_4 = (long *******)(ulong)*(uint *)(pppppplVar56 + 1);
        ppppppplVar46 = ppppppplVar22;
        FUN_108d6edb8(ppppppplVar22,*(undefined4 *)((long)pppppplVar56 + 4),param_4,
                      (ulong)&uStack_190 | 4,&uStack_188);
        if ((int)ppppppplVar46 == 5) {
          ppppppplVar46 = (long *******)0x0;
          uStack_190 = (long *******)CONCAT44(uStack_190._4_4_,1);
        }
        lVar35 = 0;
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        do {
          param_3 = (long *******)(long)*(int *)((long)&uStack_190 + lVar35);
          if (((ulong)ppppppplVar48[1] & 0x2460) == 0) {
            *ppppppplVar48 = (long ******)param_3;
            *(undefined2 *)(ppppppplVar48 + 1) = 4;
          }
          else {
            FUN_108d839c8(ppppppplVar48);
          }
          ppppppplVar48 = ppppppplVar48 + 7;
          lVar35 = lVar35 + 4;
        } while (lVar35 != 0xc);
        break;
      case 0xc:
        pppppplVar43 = param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)pppppplVar43[1] & 0x2460) != 0) {
          func_0x000108d82720(pppppplVar43);
        }
        *(undefined2 *)(pppppplVar43 + 1) = 4;
        ppppppplVar46 =
             (long *******)ppppppplVar22[4][(long)*(int *)((long)pppppplVar56 + 4) * 4 + 1];
        ppppppplVar48 = (long *******)*ppppppplVar46[1];
        bVar23 = *(byte *)((long)ppppppplVar48 + 9);
        uVar24 = (uint)bVar23;
        if (*(uint *)((long)pppppplVar56 + 0xc) != 0xffffffff) {
          uVar24 = *(uint *)((long)pppppplVar56 + 0xc);
        }
        if ((2 < *(byte *)((long)ppppppplVar48 + 0x14)) ||
           ((*ppppppplVar48[10] != (long *****)0x0 && (0 < (long)ppppppplVar48[0xc])))) {
          uVar24 = (uint)bVar23;
        }
        if (*(char *)((long)ppppppplVar48 + 0x13) == '\0') {
          if (uVar24 != 5) goto code_r0x000108d874e4;
          pcVar18 = (char *)ppppppplVar48[0x1a];
          if ((long ******)pcVar18 != (long ******)0x0) goto code_r0x000108d874cc;
code_r0x000108d874ec:
          ppppppplVar46 = (long *******)0x0;
          uVar24 = (uint)bVar23;
        }
        else {
          if (uVar24 == 5) {
            pcVar18 = "";
code_r0x000108d874cc:
            _strlen();
            if ((((ulong)pcVar18 & 0x3fffffff) == 0) ||
               ((*(char *)(ppppppplVar48 + 1) == '\0' &&
                ((*(int *)*ppppppplVar48[9] < 2 || ((*ppppppplVar48[9])[0xd] == (long ****)0x0))))))
            goto code_r0x000108d874ec;
            uVar24 = 5;
          }
code_r0x000108d874e4:
          if (uVar24 == bVar23) goto code_r0x000108d874ec;
          uVar28 = (uint)bVar23;
          if (uVar28 == 5 || uVar24 == 5) {
            if ((*(char *)((long)ppppppplVar22 + 0x4f) == '\0') ||
               (1 < *(int *)(ppppppplVar22 + 0x15))) {
              uVar31 = 0x82aa;
              func_0x000108d7163c(ppppppplVar21,ppppppplVar22);
              ppppppplVar46 = (long *******)0x1;
              goto LAB_108d83b54;
            }
            if (uVar28 == 5) {
              ppppppplVar45 = ppppppplVar48;
              func_0x000108d8c8e0();
              uVar53 = uVar24;
              if ((int)ppppppplVar45 != 0) {
                ppppppplVar46 = ppppppplVar45;
                uVar24 = 5;
                goto code_r0x000108d88478;
              }
code_r0x000108d88450:
              func_0x000108d8c98c(ppppppplVar48,uVar53);
            }
            else if (uVar28 == 4) {
              uVar53 = 2;
              goto code_r0x000108d88450;
            }
            uVar27 = 1;
            if (uVar24 == 5) {
              uVar27 = 2;
            }
            FUN_108d666f8(ppppppplVar46,uVar27);
            if ((int)ppppppplVar46 != 0) {
              uVar24 = uVar28;
            }
          }
          else {
            ppppppplVar46 = (long *******)0x0;
          }
        }
code_r0x000108d88478:
        func_0x000108d8c98c(ppppppplVar48,uVar24);
        *(undefined2 *)(pppppplVar43 + 1) = 0xa02;
        if ((int)ppppppplVar48 == 6) {
          uVar24 = 0;
          pppppplVar43[2] = (long *****)0x0;
        }
        else {
          ppppplVar16 = (long *****)(&PTR_s_delete_110ac4338)[(ulong)ppppppplVar48 & 0xffffffff];
          pppppplVar43[2] = ppppplVar16;
          _strlen();
          uVar24 = (uint)ppppplVar16 & 0x3fffffff;
        }
        *(uint *)((long)pppppplVar43 + 0xc) = uVar24;
        *(undefined1 *)((long)pppppplVar43 + 10) = 1;
        param_3 = (long *******)(ulong)uVar29;
        if (uVar29 != 1) {
          FUN_108d833e4(pppppplVar43);
        }
        break;
      case 0xd:
        ppppppplVar46 = ppppppplVar21;
        param_3 = ppppppplVar22;
        FUN_108d8caec();
        break;
      case 0xe:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplVar48 = (long *******)ppppplVar16[6];
        param_3 = (long *******)*ppppppplVar48;
        pppppplVar38 = *param_3;
        pppppplVar43 = (ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7)[7];
        iVar14 = *(int *)(ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7);
        if (0 < (int)pppppplVar43) {
          uVar44 = (ulong)pppppplVar43 & 0x7fffffff;
          ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7 + 0xe;
          pppppplVar43 = param_2[3];
          do {
            *pppppplVar43 = (long *****)ppppppplVar46;
            ppppppplVar46 = ppppppplVar46 + 7;
            uVar44 = uVar44 - 1;
            pppppplVar43 = pppppplVar43 + 1;
          } while (uVar44 != 0);
        }
        param_4 = (long *******)pppppplVar56[2];
        ppppppplVar46 = ppppppplVar48;
        (*(code *)pppppplVar38[8])(ppppppplVar48,iVar14);
        FUN_108d824cc(param_2);
        uVar31 = (ushort)param_4;
        if ((int)ppppppplVar46 == 0) {
          (*(code *)pppppplVar38[10])();
          *(undefined1 *)((long)ppppplVar16 + 0x25) = 0;
          uVar24 = (uint)ppppppplVar48;
          goto joined_r0x000108d86d14;
        }
        *(undefined1 *)((long)ppppplVar16 + 0x25) = 0;
        goto LAB_108d83b54;
      case 0xf:
        ppppppplVar48 = (long *******)pppppplVar56[2][2];
        if (ppppppplVar48 == (long *******)0x0) {
          ppppppplVar46 = (long *******)0x6;
        }
        else if (*ppppppplVar48 == (long ******)0x0) {
          ppppppplVar46 = (long *******)0x6;
        }
        else {
          ppppplVar16 = (*ppppppplVar48)[0xd];
          if (ppppplVar16 == (long *****)0x0) goto code_r0x000108d88218;
          uVar44 = (ulong)*(uint *)(pppppplVar56 + 1);
          uVar9 = *(undefined1 *)((long)ppppppplVar22 + 0x55);
          param_4 = (long *******)param_2[3];
          if (0 < (int)*(uint *)(pppppplVar56 + 1)) {
            ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
            ppppppplVar45 = param_4;
            do {
              *ppppppplVar45 = (long ******)ppppppplVar46;
              ppppppplVar46 = ppppppplVar46 + 7;
              uVar44 = uVar44 - 1;
              ppppppplVar45 = ppppppplVar45 + 1;
            } while (uVar44 != 0);
          }
          *(byte *)((long)ppppppplVar22 + 0x55) = *(byte *)((long)pppppplVar56 + 3);
          ppppppplVar46 = ppppppplVar48;
          (*(code *)ppppplVar16)();
          *(undefined1 *)((long)ppppppplVar22 + 0x55) = uVar9;
          FUN_108d824cc(param_2);
          if ((uint)ppppppplVar46 == 0) {
            if (*(int *)((long)pppppplVar56 + 4) != 0) {
              ppppppplStack_1f0 = uStack_190;
              ppppppplVar22[6] = (long ******)uStack_190;
            }
          }
          else if ((((uint)ppppppplVar46 & 0xff) == 0x13) &&
                  (*(char *)((long)pppppplVar56[2] + 0x1c) != '\0')) {
            bVar23 = *(byte *)((long)pppppplVar56 + 3);
            if (bVar23 == 4) goto LAB_108d88868;
            bVar8 = 2;
            if (bVar23 != 5) {
              bVar8 = bVar23;
            }
            *(byte *)((long)param_2 + 0x8a) = bVar8;
            param_3 = ppppppplVar48;
            break;
          }
code_r0x000108d8669c:
          *(int *)(param_2 + 0x12) = *(int *)(param_2 + 0x12) + 1;
          param_3 = ppppppplVar48;
        }
        break;
      case 0x10:
        goto code_r0x000108d87c58;
      case 0x11:
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        *(undefined2 *)(ppppppplVar48 + 1) = 4;
        pppppplVar43 = (long ******)
                       (long)((int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) *
                             -0x55555555);
code_r0x000108d856a4:
        ppppppplVar46 = (long *******)0x0;
        *ppppppplVar48 = pppppplVar43;
        goto code_r0x000108d87aec;
      case 0x12:
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        lVar35 = (long)*ppppppplVar46 * 3;
        goto code_r0x000108d85914;
      case 0x13:
        iVar14 = *(int *)((long)pppppplVar56 + 4);
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)ppppppplVar46[1] & 0x2460) == 0) {
          *(undefined2 *)(ppppppplVar46 + 1) = 1;
        }
        else {
          func_0x000108d82720(ppppppplVar46);
        }
        ppppppplVar48 = ppppppplStack_1e8 + (long)iVar14 * 7;
        if (((ulong)ppppppplVar48[1] & 1) != 0) goto code_r0x000108d87b74;
        *(undefined2 *)(ppppppplVar46 + 1) = 4;
        func_0x000108d6797c();
        pppppplVar43 = (long ******)(ulong)(ppppppplVar48 == (long *******)0x0);
code_r0x000108d87290:
        *ppppppplVar46 = pppppplVar43;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x14:
        iVar14 = *(int *)((long)pppppplVar56 + 4);
        ppppppplStack_1e8[(long)iVar14 * 7] =
             (long ******)((long)*(int *)((long)pppppplVar56 + 0xc) + -1);
        *(undefined2 *)(ppppppplStack_1e8 + (long)iVar14 * 7 + 1) = 4;
        goto code_r0x000108d85fb0;
      case 0x15:
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        lVar35 = (long)*(int *)(pppppplVar49 + (long)*ppppppplVar46 * 3 + 1) * 3 + -3;
code_r0x000108d85914:
        pppppplVar56 = pppppplVar49 + lVar35;
        uVar31 = 0x80;
code_r0x000108d85918:
        *(ushort *)(ppppppplVar46 + 1) = uVar31;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x16:
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        *(undefined2 *)(ppppppplVar46 + 1) = 4;
        iVar14 = *(int *)ppppppplVar46;
        *ppppppplVar46 =
             (long ******)
             (long)((int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) * -0x55555555);
        pppppplVar56 = pppppplVar49 + (long)iVar14 * 3;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x17:
        if (((ulong)ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 0xc) * 7 + 1] & 1) != 0)
        goto code_r0x000108d86214;
        goto code_r0x000108d874f8;
      case 0x18:
code_r0x000108d86214:
        if (*(int *)((long)pppppplVar56 + 4) == 0) {
          pppppplVar43 = param_2[0x1e];
          if (pppppplVar43 != (long ******)0x0) {
            param_2[0x1e] = (long ******)pppppplVar43[1];
            *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
            iVar14 = *(int *)(param_2 + 0x12);
            *(int *)(ppppppplVar22 + 0xc) = iVar14;
            *(int *)((long)ppppppplVar22 + 100) = *(int *)((long)ppppppplVar22 + 100) + iVar14;
            FUN_108d81e50();
            iVar14 = (int)pppppplVar43;
            pppppplVar49 = param_2[1];
            if (*(int *)(pppppplVar56 + 1) == 4) {
              iVar14 = *(int *)(pppppplVar49 + (long)iVar14 * 3 + 1) + -1;
            }
            ppppppplStack_1f0 = (long *******)ppppppplVar22[6];
            ppppppplStack_1e8 = (long *******)param_2[2];
            pppppplVar56 = pppppplVar49 + (long)iVar14 * 3;
            ppppppplVar46 = (long *******)0x0;
            break;
          }
          *(int *)((long)param_2 + 0x84) = 0;
          *(char *)((long)param_2 + 0x8a) = (char)*(undefined4 *)(pppppplVar56 + 1);
          *(int *)(param_2 + 0x10) =
               (int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) * -0x55555555;
        }
        else {
          *(int *)((long)param_2 + 0x84) = *(int *)((long)pppppplVar56 + 4);
          *(char *)((long)param_2 + 0x8a) = (char)*(undefined4 *)(pppppplVar56 + 1);
          *(int *)(param_2 + 0x10) =
               (int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) * -0x55555555;
          if (*(byte *)((long)pppppplVar56 + 3) == 0) {
            if (pppppplVar56[2] == (long *****)0x0) goto code_r0x000108d88ed8;
            uVar31 = 0x7517;
          }
          else if (pppppplVar56[2] == (long *****)0x0) {
code_r0x000108d88ed8:
            uVar31 = 0x80b9;
          }
          else {
            uVar31 = 0x80a0;
          }
          func_0x000108d7163c(ppppppplVar21,ppppppplVar22);
          param_3 = (long *******)&UNK_10f518088;
          FUN_108d64c00(*(undefined4 *)((long)pppppplVar56 + 4));
        }
        ppppppplVar21 = param_2;
        FUN_108d80e44();
        if ((int)ppppppplVar21 != 5) goto code_r0x000108d890e8;
code_r0x000108d88f20:
        ppppppplVar46 = (long *******)0x5;
code_r0x000108d88f24:
        *(int *)((long)param_2 + 0x84) = (int)ppppppplVar46;
        goto code_r0x000108d83bc4;
      case 0x19:
        ppppppplVar48 = (long *******)(param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7);
        if (((ulong)ppppppplVar48[1] & 0x2460) != 0) {
          func_0x000108d82720(ppppppplVar48);
        }
        ppppppplVar46 = (long *******)0x0;
        *(undefined2 *)(ppppppplVar48 + 1) = 4;
        ppppppplVar45 = (long *******)(long)*(int *)((long)pppppplVar56 + 4);
        goto code_r0x000108d8680c;
      case 0x1a:
        ppppppplVar48 = (long *******)(param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7);
        if (((ulong)ppppppplVar48[1] & 0x2460) != 0) {
          func_0x000108d82720(ppppppplVar48);
        }
        ppppppplVar46 = (long *******)0x0;
        *(undefined2 *)(ppppppplVar48 + 1) = 4;
        ppppppplVar45 = (long *******)*pppppplVar56[2];
        goto code_r0x000108d8680c;
      case 0x1b:
code_r0x000108d87358:
        pppppplVar43 = param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)pppppplVar43[1] & 0x2460) != 0) {
          func_0x000108d82720(pppppplVar43);
        }
        *(undefined2 *)(pppppplVar43 + 1) = 0xa02;
        pppppplVar43[2] = pppppplVar56[2];
        *(undefined4 *)((long)pppppplVar43 + 0xc) = *(undefined4 *)((long)pppppplVar56 + 4);
        *(byte *)((long)pppppplVar43 + 10) = bVar7;
        if ((*(byte *)((long)pppppplVar56 + 3) != 0) &&
           (ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 0xc) * 7] != (long ******)0x0)) {
          *(undefined2 *)(pppppplVar43 + 1) = 0xa10;
        }
        break;
      case 0x1c:
        pppppplVar43 = param_2[2];
        iVar33 = *(int *)(pppppplVar56 + 1);
        pppppplVar38 = pppppplVar43 + (long)iVar33 * 7;
        iVar14 = iVar33;
        if (((ulong)pppppplVar38[1] & 0x2460) != 0) {
          func_0x000108d82720(pppppplVar38);
          ppppppplVar48 = param_3;
          iVar14 = *(int *)(pppppplVar56 + 1);
        }
        iVar14 = *(int *)((long)pppppplVar56 + 0xc) - iVar14;
        uVar32 = 0x101;
        if (*(int *)((long)pppppplVar56 + 4) == 0) {
          uVar32 = 1;
        }
        *(undefined2 *)(pppppplVar38 + 1) = uVar32;
        if (0 < iVar14) {
          iVar14 = iVar14 + 1;
          pppppplVar43 = pppppplVar43 + (long)iVar33 * 7;
          do {
            if (((ulong)pppppplVar43[8] & 0x2460) != 0) {
              func_0x000108d82720(pppppplVar43 + 7);
            }
            *(undefined2 *)(pppppplVar43 + 8) = uVar32;
            iVar14 = iVar14 + -1;
            pppppplVar43 = pppppplVar43 + 7;
          } while (1 < iVar14);
        }
      default:
LAB_108d88868:
        param_3 = ppppppplVar48;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x1d:
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        uVar31 = *(ushort *)(ppppppplVar46 + 1) & 0xff7f | 1;
        goto code_r0x000108d85918;
      case 0x1e:
        pppppplVar43 = param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)pppppplVar43[1] & 0x2460) != 0) {
          func_0x000108d82720(pppppplVar43);
        }
        *(undefined2 *)(pppppplVar43 + 1) = 4;
        param_3 = (long *******)pppppplVar56[2];
        param_4 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
        FUN_108d67c04(pppppplVar43,param_3,param_4,0,0);
        *(byte *)((long)pppppplVar43 + 10) = bVar7;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x1f:
        pppppplVar43 = param_2[0xd];
        iVar14 = *(int *)((long)pppppplVar56 + 4);
        param_3 = (long *******)(pppppplVar43 + (long)iVar14 * 7 + -7);
        if ((*(ushort *)(pppppplVar43 + (long)iVar14 * 7 + -6) & 0x12) != 0) {
          iVar33 = *(int *)((long)pppppplVar43 + (long)iVar14 * 0x38 + -0x2c);
          if ((*(ushort *)(pppppplVar43 + (long)iVar14 * 7 + -6) >> 0xe & 1) != 0) {
            iVar33 = *(int *)param_3 + iVar33;
          }
          if (*(int *)(pppppplVar43[(long)iVar14 * 7 + -2] + 0xd) < iVar33)
          goto code_r0x000108d88dfc;
        }
        ppppppplVar46 = (long *******)(param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7);
        if (((ulong)ppppppplVar46[1] & 0x2460) != 0) {
          func_0x000108d82720(ppppppplVar46);
        }
        *(undefined2 *)(ppppppplVar46 + 1) = 4;
        param_4 = (long *******)0x800;
        goto code_r0x000108d85e90;
      case 0x20:
        iVar14 = *(int *)((long)pppppplVar56 + 0xc);
        lVar35 = (long)*(int *)(pppppplVar56 + 1) * 0x38;
        lVar54 = (long)*(int *)((long)pppppplVar56 + 4) * 0x38;
        do {
          puVar17 = (undefined8 *)((long)ppppppplStack_1e8 + lVar35);
          if (((*(ushort *)(puVar17 + 1) & 0x2460) != 0) || (*(int *)(puVar17 + 4) != 0)) {
            func_0x000108d826d0(puVar17);
          }
          puVar2 = (undefined8 *)((long)ppppppplStack_1e8 + lVar54);
          uVar55 = puVar2[1];
          param_1 = (long *******)*puVar2;
          uVar58 = puVar2[3];
          uVar57 = puVar2[2];
          uVar60 = puVar2[5];
          uVar59 = puVar2[4];
          puVar17[6] = puVar2[6];
          puVar17[3] = uVar58;
          puVar17[2] = uVar57;
          puVar17[5] = uVar60;
          puVar17[4] = uVar59;
          puVar17[1] = uVar55;
          *puVar17 = param_1;
          *(undefined2 *)((long)ppppppplStack_1e8 + lVar54 + 8) = 1;
          *(undefined4 *)((long)ppppppplStack_1e8 + lVar54 + 0x20) = 0;
          if (((*(ushort *)(puVar17 + 1) >> 0xc & 1) != 0) &&
             (func_0x000108d8323c(), (int)puVar17 != 0)) goto LAB_108d83ae4;
          lVar35 = lVar35 + 0x38;
          lVar54 = lVar54 + 0x38;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        goto LAB_108d88868;
      case 0x21:
        iVar14 = *(int *)((long)pppppplVar56 + 0xc);
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        while( true ) {
          param_4 = (long *******)0x1000;
          param_3 = ppppppplVar48;
          FUN_108d89204(ppppppplVar46);
          if (((*(ushort *)(ppppppplVar46 + 1) >> 0xc & 1) != 0) &&
             (ppppppplVar45 = ppppppplVar46, func_0x000108d8323c(), (int)ppppppplVar45 != 0))
          goto LAB_108d83ae4;
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          ppppppplVar46 = ppppppplVar46 + 7;
          ppppppplVar48 = ppppppplVar48 + 7;
        }
        goto code_r0x000108d88218;
      case 0x22:
        param_3 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        goto code_r0x000108d859d4;
      case 0x23:
        if (ppppppplVar22[0x32] != (long ******)0x0 && uVar50 <= uVar52) {
          iVar14 = (int)ppppppplVar22[0x33];
          (*(code *)ppppppplVar22[0x32])();
          uVar31 = (ushort)param_4;
          if (iVar14 == 0) goto code_r0x000108d88e88;
          goto code_r0x000108d88da4;
        }
code_r0x000108d88e88:
        if ((long)param_2[0x19] < 1) {
          param_3 = (long *******)0x1;
          ppppppplVar46 = param_2;
          FUN_108d81d1c();
          uVar31 = (ushort)param_4;
          if ((int)ppppppplVar46 == 0) {
            *(uint *)((long)param_2 + 0x7c) = (*(uint *)((long)param_2 + 0x7c) | 1) + 2;
            ppppppplStack_1e8 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
            param_2[5] = (long ******)ppppppplStack_1e8;
            if (*(int *)(pppppplVar56 + 1) < 1) goto code_r0x000108d8918c;
            lVar35 = 0;
            goto code_r0x000108d8914c;
          }
        }
        else {
          *(int *)((long)param_2 + 0x84) = 0x313;
          *(undefined1 *)((long)param_2 + 0x8a) = 2;
          ppppppplVar45 = (long *******)*param_2;
          uVar31 = 0x7ade;
code_r0x000108d88f70:
          func_0x000108d7163c(ppppppplVar21,ppppppplVar45);
          ppppppplVar46 = (long *******)0x1;
        }
        goto LAB_108d83b54;
      case 0x24:
        if (*(int *)((long)pppppplVar56 + 4) == 0) goto code_r0x000108d874f8;
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        if (((ulong)ppppppplVar46[1] & 0x2460) != 0) {
          ppppppplVar48 = (long *******)0x0;
          FUN_108d839c8();
          goto LAB_108d88868;
        }
        *ppppppplVar46 = (long ******)0x0;
        *(undefined2 *)(ppppppplVar46 + 1) = 4;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x25:
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        ppppppplVar45 = ppppppplVar48;
        func_0x000108d6797c();
        ppppppplVar46 = (long *******)0x0;
        *ppppppplVar48 = (long ******)ppppppplVar45;
        *(ushort *)(ppppppplVar48 + 1) = *(ushort *)(ppppppplVar48 + 1) & 0xbe00 | 4;
        ppppppplVar45 = (long *******)((long)ppppppplVar45 + (long)*(int *)(pppppplVar56 + 1));
        goto code_r0x000108d8680c;
      case 0x26:
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        uVar51 = *(ushort *)(ppppppplVar48 + 1);
        if ((uVar51 >> 2 & 1) == 0) {
          param_3 = (long *******)0x43;
          param_4 = (long *******)(ulong)uVar29;
          FUN_108d893f8(ppppppplVar48);
          uVar31 = (ushort)param_4;
          uVar51 = *(ushort *)(ppppppplVar48 + 1);
          if ((uVar51 >> 2 & 1) == 0) {
            if (*(int *)(pppppplVar56 + 1) != 0) {
              ppppppplVar46 = (long *******)0x0;
              goto code_r0x000108d87aec;
            }
            ppppppplVar46 = (long *******)0x14;
            goto code_r0x000108d88ff4;
          }
        }
        goto code_r0x000108d86dd4;
      case 0x27:
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        if ((*(ushort *)(ppppppplVar46 + 1) >> 2 & 1) == 0) goto code_r0x000108d874f8;
        func_0x000108d67900(ppppppplVar46);
        *ppppppplVar46 = (long ******)param_1;
        *(ushort *)(ppppppplVar46 + 1) = *(ushort *)(ppppppplVar46 + 1) & 0xbe00 | 8;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x28:
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        if ((*(ushort *)(ppppppplVar48 + 1) >> 0xe & 1) == 0) {
          ppppppplVar46 = (long *******)0x0;
        }
        else {
          ppppppplVar46 = ppppppplVar48;
          func_0x000108d6781c();
        }
        param_3 = (long *******)(ulong)*(byte *)(pppppplVar56 + 1);
        param_4 = (long *******)(ulong)uVar29;
        func_0x000108d894c0(ppppppplVar48);
        break;
      case 0x29:
        ppppplStack_210 = pppppplVar56[2];
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x2a:
        uVar24 = *(uint *)((long)pppppplVar56 + 0xc);
        if ((int)uVar24 < 1) {
          ppppplStack_210 = (long *****)0x0;
          goto code_r0x000108d874f8;
        }
        uVar44 = 0;
        iVar14 = *(int *)((long)pppppplVar56 + 4);
        iVar33 = *(int *)(pppppplVar56 + 1);
        ppppplVar40 = pppppplVar56[2];
        ppppplVar16 = *pppppplVar56;
        do {
          uVar42 = uVar44;
          if (((ulong)ppppplVar16 & 0x1000000) != 0 && ppppplStack_210 != (long *****)0x0) {
            uVar42 = (ulong)*(uint *)((long)ppppplStack_210 + uVar44 * 4);
          }
          param_4 = (long *******)ppppplVar40[uVar44 + 4];
          cVar6 = *(char *)((long)ppppplVar40[3] + uVar44);
          iVar15 = (int)ppppppplStack_1e8 + ((int)uVar42 + iVar14) * 0x38;
          param_3 = ppppppplStack_1e8 + (long)((int)uVar42 + iVar33) * 7;
          FUN_108d895b4();
          if (iVar15 != 0) {
            ppppplStack_210 = (long *****)0x0;
            ppppppplVar46 = (long *******)0x0;
            iStack_224 = -iVar15;
            if (cVar6 == '\0') {
              iStack_224 = iVar15;
            }
            goto LAB_108d88a44;
          }
          uVar44 = uVar44 + 1;
        } while (uVar24 != uVar44);
        ppppplStack_210 = (long *****)0x0;
        iStack_224 = 0;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x2b:
        if (iStack_224 < 0) {
          pppppplVar56 = pppppplVar49 + (long)*(int *)((long)pppppplVar56 + 4) * 3 + -3;
          ppppppplVar46 = (long *******)0x0;
          break;
        }
        if (iStack_224 == 0) {
          iStack_224 = 0;
          goto code_r0x000108d87b28;
        }
        ppppppplVar46 = (long *******)0x0;
        iVar14 = *(int *)((long)pppppplVar56 + 0xc);
        goto code_r0x000108d87af0;
      case 0x2c:
        if (*(char *)((long)param_2[0x23] + (long)*(int *)((long)pppppplVar56 + 4)) != '\0') {
code_r0x000108d8501c:
          ppppppplVar46 = (long *******)0x0;
          goto code_r0x000108d87aec;
        }
        *(undefined1 *)((long)param_2[0x23] + (long)*(int *)((long)pppppplVar56 + 4)) = 1;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x2d:
      case 0x2e:
        if (((ulong)ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 4) * 7 + 1] & 1) == 0) {
          func_0x000108d67900();
          uVar31 = (ushort)(((double)param_1 != 0.0) != (*(byte *)pppppplVar56 != 0x2e));
          goto code_r0x000108d86718;
        }
        ppppppplVar46 = (long *******)0x0;
        uVar24 = *(uint *)((long)pppppplVar56 + 0xc);
        goto joined_r0x000108d86d14;
      case 0x2f:
        iVar14 = *(int *)(pppppplVar56 + 1);
        lVar35 = (long)iVar14;
        iVar33 = *(int *)((long)pppppplVar56 + 0xc);
        ppppppplVar45 = (long *******)param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        pppppplVar43 = ppppppplVar45[0xd];
        ppppppplVar48 = (long *******)*ppppppplVar45;
        ppppppplVar46 = ppppppplVar45;
        func_0x000108d8968c();
        uVar31 = (ushort)param_4;
        if ((int)ppppppplVar46 != 0) goto code_r0x000108d88ff4;
        ppppppplVar39 = ppppppplStack_1e8 + (long)iVar33 * 7;
        iVar33 = *(int *)((long)param_2 + 0x7c);
        if (*(int *)(ppppppplVar45 + 10) == iVar33) {
          uVar44 = (ulong)*(ushort *)((long)ppppppplVar45 + 0x22);
          if ((int)(uint)*(ushort *)((long)ppppppplVar45 + 0x22) <= iVar14) {
code_r0x000108d88528:
            uVar42 = (ulong)*(uint *)((long)ppppppplVar45 + 0x5c);
            uVar36 = (ulong)*(uint *)pppppplVar43;
            if (uVar42 < uVar36) {
              ppppppplVar46 = (long *******)ppppppplVar45[0xc];
              if ((long *******)ppppppplVar45[0xc] == (long *******)0x0) {
                uStack_160 = 0;
                param_1 = (long *******)0x0;
                ppppppplStack_178 = (long *******)0x0;
                uStack_180 = (long *******)0x0;
                uStack_168 = (long *******)0x0;
                uStack_170 = 0;
                uStack_188 = (long *******)0x0;
                uStack_190 = (long *******)0x0;
                param_4 = (long *******)(ulong)*(uint *)pppppplVar43;
                param_3 = (long *******)0x0;
                ppppppplVar46 = ppppppplVar48;
                FUN_108d89734();
                if ((int)ppppppplVar46 != 0) break;
                uVar44 = (ulong)*(ushort *)((long)ppppppplVar45 + 0x22);
                uVar42 = (ulong)*(uint *)((long)ppppppplVar45 + 0x5c);
                uVar36 = (ulong)*(uint *)pppppplVar43;
                ppppppplVar46 = uStack_180;
              }
              uVar24 = *(uint *)((long)pppppplVar43 + uVar44 * 4);
              ppppppplStack_198 = (long *******)CONCAT44(ppppppplStack_198._4_4_,uVar24);
              pcVar18 = (char *)((long)ppppppplVar46 + uVar42);
              pcVar3 = (char *)((long)ppppppplVar46 + uVar36);
              while( true ) {
                if (*pcVar18 < 0) {
                  param_3 = (long *******)&uStack_1a0;
                  pcVar20 = pcVar18;
                  FUN_108d7d01c();
                  pcVar18 = pcVar18 + ((ulong)pcVar20 & 0xffffffff);
                }
                else {
                  uStack_1a0 = (int)*pcVar18;
                  pcVar18 = pcVar18 + 1;
                }
                *(uint *)((long)ppppppplVar45 + uVar44 * 4 + 0x70) = uStack_1a0;
                if (uStack_1a0 < 0xc) {
                  uVar28 = (uint)(byte)(&UNK_10dfa0a57)[uStack_1a0];
                }
                else {
                  uVar28 = uStack_1a0 - 0xc >> 1;
                }
                bVar13 = CARRY4(uVar28,uVar24);
                uVar24 = uVar28 + uVar24;
                ppppppplStack_198 = (long *******)CONCAT44(ppppppplStack_198._4_4_,uVar24);
                if (bVar13) break;
                uVar42 = uVar44 + 1;
                *(uint *)((long)pppppplVar43 + (uVar44 + 1) * 4) = uVar24;
                if ((lVar35 <= (long)uVar44) || (uVar44 = uVar42, pcVar3 <= pcVar18))
                goto code_r0x000108d885e4;
              }
              pcVar18 = pcVar3 + 1;
              uVar42 = uVar44;
code_r0x000108d885e4:
              *(short *)((long)ppppppplVar45 + 0x22) = (short)uVar42;
              *(int *)((long)ppppppplVar45 + 0x5c) = (int)pcVar18 - (int)ppppppplVar46;
              if (ppppppplVar45[0xc] == (long ******)0x0) {
                if (((ulong)uStack_188 & 0x2460) != 0 || (int)uStack_170 != 0) {
                  func_0x000108d826d0(&uStack_190);
                }
                uStack_188 = (long *******)CONCAT62(uStack_188._2_6_,1);
              }
              if (pcVar18 < pcVar3) {
                if (uVar24 <= *(uint *)((long)ppppppplVar45 + 0x54)) {
code_r0x000108d88658:
                  uVar44 = (ulong)*(ushort *)((long)ppppppplVar45 + 0x22);
                  goto code_r0x000108d88660;
                }
              }
              else if ((pcVar18 <= pcVar3) && (uVar24 == *(uint *)((long)ppppppplVar45 + 0x54)))
              goto code_r0x000108d88658;
code_r0x000108d8873c:
              param_3 = (long *******)&UNK_10f51799f;
              FUN_108d64c00(0xb);
              ppppppplVar46 = (long *******)0xb;
              break;
            }
code_r0x000108d88660:
            if ((int)uVar44 <= iVar14) {
              if (*(byte *)((long)pppppplVar56 + 1) == 0xf8) {
                param_3 = (long *******)pppppplVar56[2];
                param_4 = (long *******)0x800;
                FUN_108d89204(ppppppplVar39);
              }
              else if (((ulong)ppppppplVar39[1] & 0x2460) == 0) {
                *(undefined2 *)(ppppppplVar39 + 1) = 1;
              }
              else {
                func_0x000108d82720(ppppppplVar39);
              }
              goto code_r0x000108d88808;
            }
          }
          if (((ulong)ppppppplVar39[1] & 0x2460) != 0) {
            func_0x000108d82720(ppppppplVar39);
          }
          uStack_1a0 = *(uint *)((long)ppppppplVar45 + lVar35 * 4 + 0x70);
          param_3 = (long *******)(ulong)uStack_1a0;
          puVar4 = (uint *)((long)pppppplVar43 + lVar35 * 4);
          if (*(uint *)(ppppppplVar45 + 0xb) < puVar4[1]) {
            if ((*(byte *)((long)pppppplVar56 + 3) < 0x40) ||
               (((uStack_1a0 & 1) != 0 || uStack_1a0 < 0xc &&
                (-1 < (char)*(byte *)((long)pppppplVar56 + 3))))) {
              if (uStack_1a0 < 0xc) {
                param_4 = (long *******)(ulong)*(byte *)((long)param_3 + 0x10dfa0a57);
              }
              else {
                param_4 = (long *******)(ulong)(uStack_1a0 - 0xc >> 1);
              }
              if ((int)param_4 != 0) {
                param_3 = (long *******)(ulong)*puVar4;
                FUN_108d89734();
                ppppppplVar46 = ppppppplVar48;
                if ((int)ppppppplVar48 != 0) break;
                param_3 = (long *******)(ulong)uStack_1a0;
                param_4 = ppppppplVar39;
                FUN_108d89864(ppppppplVar39[2]);
                *(ushort *)(ppppppplVar39 + 1) = *(ushort *)(ppppppplVar39 + 1) & 0xefff;
                goto code_r0x000108d887fc;
              }
            }
            ppppppplVar46 = (long *******)&ppppppplStack_1d8;
            if (0xd < uStack_1a0) {
              ppppppplVar46 = (long *******)0x0;
            }
            param_4 = ppppppplVar39;
            FUN_108d89864(ppppppplVar46);
          }
          else {
            param_4 = ppppppplVar39;
            FUN_108d89864((long)ppppppplVar45[0xc] + (ulong)*puVar4);
          }
code_r0x000108d887fc:
          *(byte *)((long)ppppppplVar39 + 10) = bVar7;
        }
        else {
          if (*(char *)((long)ppppppplVar45 + 0x25) == '\0') {
            if ((*(byte *)((long)ppppppplVar45 + 0x27) >> 2 & 1) == 0) {
              param_3 = (long *******)&ppppppplStack_1d8;
              FUN_108d7ce48(ppppppplVar48);
              pppppplVar38 = ppppppplVar48[7];
              uVar28 = *(int *)(ppppppplVar48[(long)*(short *)(ppppppplVar48 + 0xe) + 0x14] + 0xb) -
                       (int)pppppplVar38;
              uVar24 = (uint)*(ushort *)((long)ppppppplVar48 + 0x44);
              if (uVar28 <= *(ushort *)((long)ppppppplVar48 + 0x44)) {
                uVar24 = uVar28;
              }
              *(uint *)((long)ppppppplVar45 + 0x54) = (uint)ppppppplStack_1d8;
              uVar28 = (uint)ppppppplStack_1d8;
            }
            else {
              param_3 = (long *******)((long)ppppppplVar45 + 0x54);
              FUN_108d896b8(ppppppplVar48);
              pppppplVar38 = ppppppplVar48[7];
              uVar28 = *(int *)(ppppppplVar48[(long)*(short *)(ppppppplVar48 + 0xe) + 0x14] + 0xb) -
                       (int)pppppplVar38;
              uVar24 = (uint)*(ushort *)((long)ppppppplVar48 + 0x44);
              if (uVar28 <= *(ushort *)((long)ppppppplVar48 + 0x44)) {
                uVar24 = uVar28;
              }
              uVar28 = *(uint *)((long)ppppppplVar45 + 0x54);
            }
            ppppppplVar45[0xc] = pppppplVar38;
            uVar53 = uVar28;
            if (uVar24 <= uVar28) {
              uVar53 = uVar24;
            }
            *(uint *)(ppppppplVar45 + 0xb) = uVar53;
            if (*(uint *)(ppppppplVar22 + 0xd) < uVar28) goto code_r0x000108d88dfc;
            iVar33 = *(int *)((long)param_2 + 0x7c);
code_r0x000108d88388:
            *(int *)(ppppppplVar45 + 10) = iVar33;
            cVar6 = *(char *)pppppplVar38;
            if (cVar6 < 0) {
              param_3 = (long *******)&ppppppplStack_198;
              FUN_108d7d01c();
              *(int *)((long)ppppppplVar45 + 0x5c) = (int)pppppplVar38;
              *(undefined2 *)((long)ppppppplVar45 + 0x22) = 0;
              *(uint *)pppppplVar43 = (uint)ppppppplStack_198;
              uVar28 = (uint)ppppppplStack_198;
              if ((uint)ppppppplStack_198 < 0x18004) goto code_r0x000108d883d4;
            }
            else {
              ppppppplStack_198 = (long *******)CONCAT44(ppppppplStack_198._4_4_,(int)cVar6);
              *(int *)((long)ppppppplVar45 + 0x5c) = 1;
              *(undefined2 *)((long)ppppppplVar45 + 0x22) = 0;
              *(int *)pppppplVar43 = (int)cVar6;
              uVar28 = (int)cVar6;
code_r0x000108d883d4:
              if (uVar28 <= *(uint *)((long)ppppppplVar45 + 0x54)) {
                if (uVar24 < uVar28) {
                  ppppppplVar45[0xc] = (long ******)0x0;
                  *(int *)(ppppppplVar45 + 0xb) = 0;
                }
                uVar44 = 0;
                goto code_r0x000108d88528;
              }
            }
            goto code_r0x000108d8873c;
          }
          if (ppppppplVar48 == (long *******)0x0) {
            uVar24 = *(uint *)((long)ppppppplStack_1e8 +
                              (long)*(int *)((long)ppppppplVar45 + 0x1c) * 0x38 + 0xc);
            *(uint *)((long)ppppppplVar45 + 0x54) = uVar24;
            *(uint *)(ppppppplVar45 + 0xb) = uVar24;
            pppppplVar38 = ppppppplStack_1e8[(long)*(int *)((long)ppppppplVar45 + 0x1c) * 7 + 2];
            ppppppplVar45[0xc] = pppppplVar38;
            goto code_r0x000108d88388;
          }
          if (((ulong)ppppppplVar39[1] & 0x2460) == 0) {
            *(undefined2 *)(ppppppplVar39 + 1) = 1;
          }
          else {
            func_0x000108d82720(ppppppplVar39);
          }
        }
code_r0x000108d88808:
        uVar31 = *(ushort *)(ppppppplVar39 + 1);
        ppppppplVar48 = param_3;
        if (((uVar31 >> 0xc & 1) == 0) ||
           (param_3 = (long *******)ppppppplVar39[2], param_3 == (long *******)0x0))
        goto LAB_108d88868;
        ppppppplVar48 = (long *******)(long)*(int *)((long)ppppppplVar39 + 0xc);
        ppppppplVar46 = ppppppplVar39;
        FUN_108d83994(ppppppplVar39,*(int *)((long)ppppppplVar39 + 0xc) + 2);
        if ((int)ppppppplVar46 != 0) goto LAB_108d83ae4;
        param_4 = ppppppplVar48;
        _memcpy(ppppppplVar39[2]);
        *(undefined1 *)((long)ppppppplVar39[2] + (long)ppppppplVar48) = 0;
        *(undefined1 *)((long)ppppppplVar48 + (long)ppppppplVar39[2] + 1) = 0;
        *(ushort *)(ppppppplVar39 + 1) = uVar31 & 0x12 | 0x200;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x30:
        ppppplVar16 = pppppplVar56[2];
        cVar6 = *(char *)ppppplVar16;
        if (cVar6 != '\0') {
          ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
          do {
            ppppplVar16 = (long *****)((long)ppppplVar16 + 1);
            ppppppplVar48 = (long *******)(ulong)(uint)(int)cVar6;
            param_4 = (long *******)(ulong)uVar29;
            FUN_108d893f8(ppppppplVar46);
            ppppppplVar46 = ppppppplVar46 + 7;
            cVar6 = *(char *)ppppplVar16;
          } while (cVar6 != '\0');
          goto LAB_108d88868;
        }
        goto code_r0x000108d874f8;
      case 0x31:
        ppppplVar16 = pppppplVar56[2];
        iVar14 = *(int *)(pppppplVar56 + 1);
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        bVar23 = *(byte *)((long)param_2 + 0x8b);
        iVar33 = *(int *)((long)pppppplVar56 + 0xc);
        if (ppppplVar16 != (long *****)0x0) {
          cVar6 = *(char *)ppppplVar16;
          ppppppplVar48 = ppppppplVar46;
          do {
            ppppplVar16 = (long *****)((long)ppppplVar16 + 1);
            param_4 = (long *******)(ulong)uVar29;
            FUN_108d893f8(ppppppplVar48,(int)cVar6);
            cVar6 = *(char *)ppppplVar16;
            ppppppplVar48 = ppppppplVar48 + 7;
          } while (cVar6 != '\0');
        }
        lStack_240 = 0;
        uVar44 = 0;
        lVar35 = 0;
        ppppppplVar39 = ppppppplVar46 + (long)iVar14 * 7 + -7;
        ppppppplVar45 = ppppppplStack_1e8 + (long)iVar33 * 7;
        ppppppplVar48 = ppppppplVar39;
        do {
          uVar31 = *(ushort *)(ppppppplVar48 + 1);
          if ((uVar31 & 1) == 0) {
            if ((uVar31 >> 2 & 1) != 0) {
              pppppplVar43 = *ppppppplVar48;
              uVar42 = (ulong)pppppplVar43 ^ (long)pppppplVar43 >> 0x3f;
              if (uVar42 < 0x80) {
                if (((long ******)0x1 >= pppppplVar43 && 2 < bVar23) &&
                    ((long ******)0x1 < pppppplVar43 || bVar23 != 3)) {
                  uVar24 = (int)uVar42 + 8;
                  goto code_r0x000108d851a0;
                }
                uVar42 = 1;
              }
              else if (uVar42 < 0x8000) {
                uVar42 = 2;
              }
              else if (uVar42 < 0x800000) {
                uVar42 = 3;
              }
              else if (uVar42 >> 0x1f == 0) {
                uVar42 = 4;
              }
              else {
                uVar24 = 5;
                if (uVar42 >> 0x2f != 0) {
                  uVar24 = 6;
                }
                uVar42 = (ulong)uVar24;
              }
              goto code_r0x000108d850e0;
            }
            if ((uVar31 >> 3 & 1) != 0) {
              uVar42 = 7;
              goto code_r0x000108d850e0;
            }
            iVar14 = *(int *)((long)ppppppplVar48 + 0xc);
            if ((uVar31 >> 0xe & 1) != 0) {
              iVar14 = *(int *)ppppppplVar48 + iVar14;
            }
            uVar24 = (uVar31 >> 1 & 1 | iVar14 << 1) + 0xc;
code_r0x000108d851a0:
            uVar42 = (ulong)uVar24;
            *(uint *)((long)ppppppplVar48 + 0x24) = uVar24;
            if (uVar24 < 0xc) goto code_r0x000108d850e4;
            uVar24 = uVar24 - 0xc >> 1;
          }
          else {
            uVar42 = 0;
code_r0x000108d850e0:
            *(int *)((long)ppppppplVar48 + 0x24) = (int)uVar42;
code_r0x000108d850e4:
            uVar24 = (uint)(byte)(&UNK_10dfa0a57)[uVar42];
          }
          if ((uVar31 >> 0xe & 1) != 0) {
            if (lVar35 == 0) {
              lStack_240 = lStack_240 + *(int *)ppppppplVar48;
              uVar24 = uVar24 - *(int *)ppppppplVar48;
            }
            else {
              func_0x000108d6781c(ppppppplVar48);
            }
          }
          if ((uint)uVar42 < 0x80) {
            uVar53 = 1;
          }
          else {
            uVar28 = 0;
            do {
              uVar53 = uVar28 + 1;
              if (uVar42 < 0x80) break;
              uVar42 = uVar42 >> 7;
              bVar13 = uVar28 < 8;
              uVar28 = uVar53;
            } while (bVar13);
          }
          lVar35 = lVar35 + (int)uVar24;
          iVar14 = (int)uVar44;
          uVar24 = uVar53 + iVar14;
          uVar44 = (ulong)uVar24;
          ppppppplVar48 = ppppppplVar48 + -7;
        } while (ppppppplVar46 <= ppppppplVar48);
        if ((int)uVar24 < 0x7f) {
          uVar24 = uVar24 + 1;
        }
        else {
          uVar24 = 0;
          do {
            uVar28 = uVar24;
            uVar24 = uVar28 + 1;
            if (uVar44 < 0x80) break;
            uVar44 = uVar44 >> 7;
          } while (uVar28 < 8);
          uVar44 = (ulong)(uVar53 + iVar14 + uVar24);
          uVar41 = 0xffffffff;
          do {
            uVar41 = uVar41 + 1;
            if (uVar44 < 0x80) break;
            uVar44 = uVar44 >> 7;
          } while (uVar41 < 8);
          iVar14 = uVar53 + iVar14;
          if (uVar28 < uVar41) {
            iVar14 = iVar14 + 1;
          }
          uVar24 = iVar14 + uVar24;
        }
        lVar35 = lVar35 + (int)uVar24;
        if ((long)*(int *)(ppppppplVar22 + 0xd) < lVar35 + lStack_240) goto code_r0x000108d88dfc;
        ppppppplVar48 = ppppppplVar45;
        FUN_108d83994(ppppppplVar45,lVar35);
        if ((int)ppppppplVar48 != 0) goto LAB_108d83ae4;
        pppppplVar43 = ppppppplVar45[2];
        if (uVar24 < 0x80) {
          *(char *)pppppplVar43 = (char)uVar24;
          uVar44 = 1;
        }
        else {
          pppppplVar38 = pppppplVar43;
          FUN_108d899f0(pppppplVar43,(long)(int)uVar24);
          uVar44 = (ulong)((uint)pppppplVar38 & 0xff);
        }
        do {
          uVar28 = *(uint *)((long)ppppppplVar46 + 0x24);
          param_3 = (long *******)(ulong)uVar28;
          iVar14 = (int)uVar44;
          if (uVar28 < 0x80) {
            *(char *)((long)pppppplVar43 + uVar44) = (char)uVar28;
            uVar44 = (ulong)(iVar14 + 1);
            if (uVar28 - 1 < 7) {
              pppppplVar38 = *ppppppplVar46;
              bVar23 = *(byte *)((long)param_3 + 0x10dfa0a57);
              uVar53 = (uint)bVar23;
              uVar28 = (uint)bVar23;
              puVar34 = (undefined1 *)((long)pppppplVar43 + (ulong)(bVar23 - 1) + (long)(int)uVar24)
              ;
              do {
                *puVar34 = (char)pppppplVar38;
                pppppplVar38 = (long ******)((ulong)pppppplVar38 >> 8);
                uVar53 = uVar53 - 1;
                puVar34 = puVar34 + -1;
              } while (uVar53 != 0);
            }
            else {
              if (0xb < uVar28) goto code_r0x000108d87060;
              uVar28 = 0;
            }
          }
          else {
            uVar28 = (int)pppppplVar43 + iVar14;
            FUN_108d899f0();
            uVar44 = (ulong)(iVar14 + (uVar28 & 0xff));
code_r0x000108d87060:
            uVar28 = *(uint *)((long)ppppppplVar46 + 0xc);
            param_4 = (long *******)(ulong)uVar28;
            param_3 = (long *******)ppppppplVar46[2];
            _memcpy((undefined1 *)((long)pppppplVar43 + (long)(int)uVar24));
          }
          uVar24 = uVar28 + uVar24;
          ppppppplVar46 = ppppppplVar46 + 7;
        } while (ppppppplVar46 <= ppppppplVar39);
        *(int *)((long)ppppppplVar45 + 0xc) = (int)lVar35;
        *(undefined2 *)(ppppppplVar45 + 1) = 0x10;
        if (lStack_240 != 0) {
          *(int *)ppppppplVar45 = (int)lStack_240;
          *(undefined2 *)(ppppppplVar45 + 1) = 0x4010;
        }
        *(undefined1 *)((long)ppppppplVar45 + 10) = 1;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x32:
        ppppppplVar46 = (long *******)*param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        uStack_190 = (long *******)0x0;
        param_3 = (long *******)&uStack_190;
        FUN_108d89a2c();
        ppppppplVar48 = (long *******)(param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7);
        if (((ulong)ppppppplVar48[1] & 0x2460) != 0) {
          func_0x000108d82720(ppppppplVar48);
        }
        *(undefined2 *)(ppppppplVar48 + 1) = 4;
        ppppppplVar45 = uStack_190;
        goto code_r0x000108d8680c;
      case 0x33:
        param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 0xc);
        param_4 = (long *******)&uStack_190;
        FUN_108d615f0(ppppppplVar22[4][(long)*(int *)((long)pppppplVar56 + 4) * 4 + 1]);
        ppppppplVar48 = (long *******)(param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7);
        if (((ulong)ppppppplVar48[1] & 0x2460) != 0) {
          func_0x000108d82720(ppppppplVar48);
        }
        ppppppplVar46 = (long *******)0x0;
        *(undefined2 *)(ppppppplVar48 + 1) = 4;
        ppppppplVar45 = (long *******)(long)(int)(uint)uStack_190;
        goto code_r0x000108d8680c;
      case 0x34:
        pppppplVar43 = ppppppplVar22[4];
        iVar14 = *(int *)((long)pppppplVar56 + 4);
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        param_4 = ppppppplVar48;
        func_0x000108d6797c();
        *ppppppplVar48 = (long ******)param_4;
        *(ushort *)(ppppppplVar48 + 1) = *(ushort *)(ppppppplVar48 + 1) & 0xbe00 | 4;
        ppppppplVar46 = (long *******)pppppplVar43[(long)iVar14 * 4 + 1];
        param_3 = (long *******)(ulong)*(uint *)(pppppplVar56 + 1);
        FUN_108d616a8();
        if (*(int *)(pppppplVar56 + 1) == 2) {
          *(char *)(pppppplVar43[(long)iVar14 * 4 + 3] + 0xe) = (char)*ppppppplVar48;
        }
        else if (*(int *)(pppppplVar56 + 1) == 1) {
          *(int *)pppppplVar43[(long)iVar14 * 4 + 3] = (int)*ppppppplVar48;
          *(uint *)((long)ppppppplVar22 + 0x2c) = *(uint *)((long)ppppppplVar22 + 0x2c) | 2;
        }
        if (*(int *)((long)pppppplVar56 + 4) == 1) {
          for (pppppplVar43 = ppppppplVar22[1]; pppppplVar43 != (long ******)0x0;
              pppppplVar43 = (long ******)pppppplVar43[0xb]) {
            *(ushort *)((long)pppppplVar43 + 0x8c) = *(ushort *)((long)pppppplVar43 + 0x8c) | 8;
          }
          *(ushort *)((long)param_2 + 0x8c) = *(ushort *)((long)param_2 + 0x8c) & 0xfff7;
        }
        break;
      case 0x35:
        ppppppplVar48 = (long *******)param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        if ((ppppppplVar48 == (long *******)0x0) ||
           (*(int *)(ppppppplVar48 + 5) != *(int *)(pppppplVar56 + 1))) goto code_r0x000108d84c54;
        ppppppplVar46 = (long *******)0x0;
        goto code_r0x000108d86a78;
      case 0x36:
      case 0x37:
code_r0x000108d84c54:
        if ((*(ushort *)((long)param_2 + 0x8c) >> 3 & 1) != 0) {
          ppppppplVar46 = (long *******)0x204;
          goto LAB_108d83b54;
        }
        uVar24 = *(uint *)(pppppplVar56 + 1);
        param_3 = (long *******)(ulong)uVar24;
        lVar35 = (long)*(int *)((long)pppppplVar56 + 0xc);
        ppppppplVar46 = (long *******)ppppppplVar22[4][lVar35 * 4 + 1];
        if (bVar23 == 0x37) {
          bVar23 = *(byte *)(ppppppplVar22[4][lVar35 * 4 + 3] + 0xe);
          if (bVar23 < *(byte *)((long)param_2 + 0x8b)) {
            *(byte *)((long)param_2 + 0x8b) = bVar23;
          }
          param_4 = (long *******)0x1;
        }
        else {
          param_4 = (long *******)0x0;
        }
        if ((*(byte *)((long)pppppplVar56 + 3) >> 2 & 1) != 0) {
          ppppppplVar48 = ppppppplStack_1e8 + (long)(int)uVar24 * 7;
          param_3 = ppppppplVar48;
          func_0x000108d6797c();
          *ppppppplVar48 = (long ******)param_3;
          *(ushort *)(ppppppplVar48 + 1) = *(ushort *)(ppppppplVar48 + 1) & 0xbe00 | 4;
          if ((int)param_3 < 2) {
            ppppppplVar46 = (long *******)0xb;
            FUN_108d64c00(0xb,&UNK_10f51799f);
            goto code_r0x000108d88ff4;
          }
        }
        if (*(byte *)((long)pppppplVar56 + 1) == 0xf2) {
          pppppplVar43 = (long ******)0x0;
          iVar14 = *(int *)(pppppplVar56 + 2);
        }
        else if (*(byte *)((long)pppppplVar56 + 1) == 0xfa) {
          pppppplVar43 = (long ******)pppppplVar56[2];
          iVar14 = (uint)*(ushort *)(pppppplVar43 + 1) + (uint)*(ushort *)((long)pppppplVar43 + 6);
        }
        else {
          pppppplVar43 = (long ******)0x0;
          iVar14 = 0;
        }
        ppppppplVar48 = param_2;
        FUN_108d89c70(param_2,*(undefined4 *)((long)pppppplVar56 + 4),iVar14,lVar35,1);
        if (ppppppplVar48 == (long *******)0x0) goto LAB_108d83ae4;
        *(undefined1 *)((long)ppppppplVar48 + 0x25) = 1;
        *(byte *)((long)ppppppplVar48 + 0x27) = *(byte *)((long)ppppppplVar48 + 0x27) | 8;
        *(int *)(ppppppplVar48 + 5) = (int)param_3;
        FUN_108d89d9c();
        ppppppplVar48[2] = pppppplVar43;
        bVar23 = 0;
        if (*(byte *)((long)pppppplVar56 + 1) != 0xfa) {
          bVar23 = 4;
        }
        *(byte *)((long)ppppppplVar48 + 0x27) =
             *(byte *)((long)ppppppplVar48 + 0x27) & 0xfb | bVar23;
code_r0x000108d86a78:
        *(byte *)((long)*ppppppplVar48 + 0x6e) = *(byte *)((long)pppppplVar56 + 3) & 3;
        break;
      case 0x38:
      case 0x39:
        ppppppplVar48 = param_2;
        FUN_108d89c70(param_2,*(undefined4 *)((long)pppppplVar56 + 4),
                      *(undefined4 *)(pppppplVar56 + 1),0xffffffff,1);
        if (ppppppplVar48 == (long *******)0x0) goto LAB_108d83ae4;
        *(undefined1 *)((long)ppppppplVar48 + 0x25) = 1;
        *(byte *)((long)ppppppplVar48 + 0x27) = *(byte *)((long)ppppppplVar48 + 0x27) | 1;
        ppppppplVar46 = (long *******)*ppppppplVar22;
        param_3 = (long *******)0x0;
        param_4 = ppppppplVar22;
        FUN_108d7d91c();
        if ((int)ppppppplVar46 == 0) {
          ppppppplVar46 = (long *******)ppppppplVar48[1];
          param_3 = (long *******)0x1;
          FUN_108d5f618();
          if ((int)ppppppplVar46 == 0) {
            pppppplVar43 = (long ******)pppppplVar56[2];
            if (pppppplVar43 == (long ******)0x0) {
              ppppppplVar46 = (long *******)ppppppplVar48[1];
              param_3 = (long *******)0x1;
              param_4 = (long *******)0x1;
              FUN_108d89d9c();
              bVar23 = *(byte *)((long)ppppppplVar48 + 0x27) | 4;
            }
            else {
              ppppppplVar46 = (long *******)ppppppplVar48[1];
              param_3 = (long *******)&uStack_190;
              param_4 = (long *******)(ulong)(*(byte *)((long)pppppplVar56 + 3) | 2);
              FUN_108d89eb0();
              if ((int)ppppppplVar46 == 0) {
                ppppppplVar48[2] = pppppplVar43;
                param_3 = (long *******)((ulong)uStack_190 & 0xffffffff);
                ppppppplVar46 = (long *******)ppppppplVar48[1];
                param_4 = (long *******)0x1;
                FUN_108d89d9c();
              }
              bVar23 = *(byte *)((long)ppppppplVar48 + 0x27) & 0xfb;
            }
            *(byte *)((long)ppppppplVar48 + 0x27) = bVar23;
          }
        }
        bVar23 = 0;
        if (*(byte *)((long)pppppplVar56 + 3) != 8) {
          bVar23 = 8;
        }
        *(byte *)((long)ppppppplVar48 + 0x27) =
             *(byte *)((long)ppppppplVar48 + 0x27) & 0xf7 | bVar23;
        break;
      case 0x3a:
        param_4 = param_2;
        FUN_108d89c70(param_2,*(undefined4 *)((long)pppppplVar56 + 4),
                      *(undefined4 *)(pppppplVar56 + 1),0xffffffff,1);
        if (param_4 == (long *******)0x0) goto LAB_108d83ae4;
        param_4[2] = (long ******)pppppplVar56[2];
        param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 0xc);
        ppppppplVar46 = ppppppplVar22;
        func_0x000108d8a200();
        break;
      case 0x3b:
        pppppplVar43 = (long ******)param_2[0xc][*(int *)((long)pppppplVar56 + 4)][7];
        param_2[0xc][*(int *)((long)pppppplVar56 + 4)][7] = (long ****)((long)pppppplVar43 + 1);
        goto code_r0x000108d86664;
      case 0x3c:
        param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
        param_4 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 0xc);
        ppppppplVar46 = param_2;
        FUN_108d89c70();
        if (ppppppplVar46 == (long *******)0x0) goto LAB_108d83ae4;
        *(undefined1 *)((long)ppppppplVar46 + 0x25) = 1;
        *(int *)((long)ppppppplVar46 + 0x1c) = *(int *)(pppppplVar56 + 1);
        *(byte *)((long)ppppppplVar46 + 0x27) = *(byte *)((long)ppppppplVar46 + 0x27) | 4;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x3d:
        param_3 = (long *******)param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        FUN_108d81fb8(param_2);
        param_2[0xc][*(int *)((long)pppppplVar56 + 4)] = (long *****)0x0;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        *(undefined1 *)((long)ppppplVar16 + 0x25) = 0;
        if ((*(byte *)((long)ppppplVar16 + 0x27) >> 2 & 1) != 0) {
          ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
          if (((ulong)ppppppplVar46[1] & 0xe) == 2) {
            param_3 = (long *******)0x0;
            FUN_108d6a060(ppppppplVar46);
          }
          ppppppplVar48 = ppppppplVar46;
          func_0x000108d6797c();
          if ((*(ushort *)(ppppppplVar46 + 1) >> 2 & 1) != 0) {
code_r0x000108d87a5c:
            ppppppplVar46 = (long *******)*ppppplVar16;
            param_3 = (long *******)0x0;
            param_4 = ppppppplVar48;
            FUN_108d8a3d0();
            uVar31 = (ushort)param_4;
            ppppplVar16[8] = (long ****)ppppppplVar48;
            iVar14 = (int)ppppppplVar46;
            goto joined_r0x000108d87a78;
          }
          if ((*(ushort *)(ppppppplVar46 + 1) >> 3 & 1) != 0) {
            param_1 = (long *******)*ppppppplVar46;
            if ((double)(long)ppppppplVar48 <= (double)param_1) {
              bVar23 = ((double)(long)ppppppplVar48 < (double)param_1 && (bVar23 & 1) == 0) | bVar23
              ;
            }
            else {
              bVar23 = bVar23 & 0x7e;
            }
            goto code_r0x000108d87a5c;
          }
code_r0x000108d87ae0:
          ppppppplVar46 = (long *******)0x0;
          goto code_r0x000108d87aec;
        }
        uStack_190 = (long *******)ppppplVar16[2];
        uVar9 = 0xff;
        if ((bVar23 & 1) == 0) {
          uVar9 = 1;
        }
        uStack_188._0_3_ = CONCAT12(uVar9,(short)*(undefined4 *)(pppppplVar56 + 2));
        uStack_180 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        if ((*(byte *)((long)uStack_180 + 9) >> 6 & 1) != 0) {
          func_0x000108d6781c();
        }
        ppppppplVar46 = (long *******)*ppppplVar16;
        param_3 = (long *******)&uStack_190;
        param_4 = (long *******)0x0;
        FUN_108d8a3d0();
        uVar31 = (ushort)param_4;
        iVar14 = (int)ppppppplVar46;
joined_r0x000108d87a78:
        if (iVar14 == 0) {
          *(undefined1 *)((long)ppppplVar16 + 0x26) = 0;
          *(undefined4 *)(ppppplVar16 + 10) = 0;
          if (bVar23 < 0x40) {
            if ((0 < (int)(uint)ppppppplStack_1d8) ||
               ((bVar23 == 0x3e && ((uint)ppppppplStack_1d8 == 0)))) {
              ppppppplVar46 = (long *******)*ppppplVar16;
              param_3 = (long *******)&ppppppplStack_1d8;
              func_0x000108d8a944();
              uVar31 = (ushort)param_4;
              if ((int)ppppppplVar46 == 0) goto code_r0x000108d87ad8;
              goto code_r0x000108d88ff4;
            }
            if (*(char *)((long)*ppppplVar16 + 0x6d) != '\x01') goto code_r0x000108d87ae0;
          }
          else if (((int)(uint)ppppppplStack_1d8 < 0) ||
                  ((bVar23 == 0x41 && ((uint)ppppppplStack_1d8 == 0)))) {
            ppppppplVar46 = (long *******)*ppppplVar16;
            param_3 = (long *******)&ppppppplStack_1d8;
            FUN_108d8a8d0();
            uVar31 = (ushort)param_4;
            if ((int)ppppppplVar46 != 0) goto code_r0x000108d88ff4;
code_r0x000108d87ad8:
            if ((uint)ppppppplStack_1d8 != 0) goto code_r0x000108d87ae0;
          }
          goto code_r0x000108d87b10;
        }
code_r0x000108d88ff4:
        uVar29 = (uint)ppppppplVar46;
        if (*(char *)((long)ppppppplVar22 + 0x51) != '\0') {
          uVar29 = 7;
        }
        ppppppplVar46 = (long *******)(ulong)uVar29;
        if ((uVar29 == 0x204) || (uVar29 != 0xc0a)) goto code_r0x000108d83b4c;
        goto LAB_108d83b54;
      case 0x42:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        *(undefined1 *)((long)ppppplVar16 + 0x25) = 0;
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        func_0x000108d6797c();
        ppppplVar16[8] = (long ****)ppppppplVar46;
        *(undefined1 *)((long)ppppplVar16 + 0x26) = 1;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x43:
      case 0x44:
      case 0x45:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        uVar24 = *(uint *)(pppppplVar56 + 2);
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        ppppppplStack_198 = (long *******)0x0;
        ppppppplVar48 = (long *******)ppppplVar16[2];
        if ((int)uVar24 < 1) {
          FUN_108d8a998(ppppppplVar48,&uStack_190,0x107,&ppppppplStack_198);
          if (ppppppplVar48 == (long *******)0x0) goto LAB_108d83ae4;
          if ((*(ushort *)(ppppppplVar46 + 1) >> 0xe & 1) != 0) {
            func_0x000108d6781c(ppppppplVar46);
          }
          FUN_108d8aa14(ppppplVar16[2],*(int *)((long)ppppppplVar46 + 0xc),ppppppplVar46[2],
                        ppppppplVar48);
        }
        else {
          uStack_1d0 = (long *****)CONCAT62(uStack_1d0._2_6_,(short)uVar24);
          ppppppplStack_1c8 = ppppppplVar46;
          ppppppplStack_1d8 = ppppppplVar48;
          if ((uVar24 & 0xffff) == 0) {
            ppppppplVar48 = (long *******)&ppppppplStack_1d8;
          }
          else {
            lVar35 = 0;
            uVar44 = 0;
            uVar42 = (ulong)uVar24 & 0xffff;
            do {
              if ((*(ushort *)((long)ppppppplStack_1c8 + lVar35 + 8) >> 0xe & 1) != 0) {
                func_0x000108d6781c();
                uVar42 = (ulong)uStack_1d0 & 0xffff;
              }
              uVar44 = uVar44 + 1;
              lVar35 = lVar35 + 0x38;
            } while (uVar44 < uVar42);
            ppppppplVar48 = (long *******)&ppppppplStack_1d8;
          }
        }
        *(undefined1 *)((long)ppppppplVar48 + 10) = 0;
        if ((*(byte *)pppppplVar56 == 0x43) &&
           (uVar44 = (ulong)*(ushort *)(ppppppplVar48 + 1), uVar44 != 0)) {
          pppppplVar43 = ppppppplVar48[2] + 1;
          do {
            uVar44 = uVar44 - 1;
            bVar13 = ((ulong)*pppppplVar43 & 1) == 0;
            if (((ulong)*pppppplVar43 & 1) != 0) break;
            pppppplVar43 = pppppplVar43 + 7;
          } while (uVar44 != 0);
        }
        else {
          bVar13 = true;
        }
        ppppppplVar46 = (long *******)*ppppplVar16;
        param_4 = (long *******)0x0;
        FUN_108d8a3d0(ppppppplVar46,ppppppplVar48,0,0,&uStack_1a0);
        param_3 = ppppppplStack_198;
        func_0x000108d60660(ppppppplVar22);
        if ((int)ppppppplVar46 == 0) {
          *(uint *)(ppppplVar16 + 3) = uStack_1a0;
          *(bool *)((long)ppppplVar16 + 0x25) = uStack_1a0 != 0;
          *(undefined1 *)((long)ppppplVar16 + 0x26) = 0;
          *(undefined4 *)(ppppplVar16 + 10) = 0;
          if (*(byte *)pppppplVar56 == 0x45) {
            if (uStack_1a0 == 0) {
code_r0x000108d87b28:
              ppppppplVar46 = (long *******)0x0;
              goto code_r0x000108d87aec;
            }
          }
          else {
            bVar11 = false;
            if (uStack_1a0 == 0) {
              bVar11 = bVar13;
            }
            if (!bVar11) goto code_r0x000108d87b28;
          }
        }
        break;
      case 0x46:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplVar46 = (long *******)*ppppplVar16;
        uStack_190 = (long *******)((ulong)uStack_190._4_4_ << 0x20);
        ppppppplVar48 =
             (long *******)ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 0xc) * 7];
        param_3 = (long *******)0x0;
        param_4 = ppppppplVar48;
        FUN_108d8a3d0();
        ppppplVar16[8] = (long ****)ppppppplVar48;
        *(undefined2 *)((long)ppppplVar16 + 0x25) = 0;
        *(undefined4 *)(ppppplVar16 + 10) = 0;
        *(uint *)(ppppplVar16 + 3) = (uint)uStack_190;
        uVar24 = (uint)uStack_190;
        goto joined_r0x000108d86d14;
      case 0x47:
      case 0x48:
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        if (((ulong)ppppppplVar46[1] & 1) == 0) {
          func_0x000108d6797c();
          lVar35 = 0;
          if (ppppppplVar46 != (long *******)0x0) {
            lVar35 = 3;
          }
        }
        else {
          lVar35 = 6;
        }
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)ppppppplVar46[1] & 1) == 0) {
          func_0x000108d6797c();
          uVar44 = (ulong)(ppppppplVar46 != (long *******)0x0);
        }
        else {
          uVar44 = 2;
        }
        puVar5 = &UNK_10dfa0a45;
        if (*(byte *)pppppplVar56 != 0x48) {
          puVar5 = &UNK_10dfa0a4e;
        }
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        if ((long ******)(ulong)(byte)puVar5[uVar44 + lVar35] == (long ******)0x2) {
          uVar31 = *(ushort *)(ppppppplVar46 + 1) & 0xbe00 | 1;
        }
        else {
          *ppppppplVar46 = (long ******)(ulong)(byte)puVar5[uVar44 + lVar35];
          uVar31 = *(ushort *)(ppppppplVar46 + 1) & 0xbe00 | 4;
        }
        *(ushort *)(ppppppplVar46 + 1) = uVar31;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x49:
        pppppplVar43 = param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)pppppplVar43[1] & 0x2460) != 0) {
          func_0x000108d82720(pppppplVar43);
        }
        *(undefined2 *)(pppppplVar43 + 1) = 4;
        ppppplVar16 = (long *****)param_2[0xc][*(int *)((long)pppppplVar56 + 4)][7];
        param_2[0xc][*(int *)((long)pppppplVar56 + 4)][7] = (long ****)((long)ppppplVar16 + 1);
        *pppppplVar43 = ppppplVar16;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x4a:
        uStack_190 = (long *******)0x0;
        ppppppplStack_1d8 = (long *******)((ulong)ppppppplStack_1d8 & 0xffffffff00000000);
        pppppplVar43 = param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)pppppplVar43[1] & 0x2460) != 0) {
          func_0x000108d82720(pppppplVar43);
        }
        *(undefined2 *)(pppppplVar43 + 1) = 4;
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplVar46 = (long *******)*ppppplVar16;
        if (ppppppplVar46 == (long *******)0x0) {
          ppppppplVar48 = (long *******)0x0;
          ppppppplVar46 = (long *******)0x0;
        }
        else {
          if ((*(byte *)((long)ppppplVar16 + 0x27) >> 1 & 1) == 0) {
            param_3 = (long *******)&ppppppplStack_1d8;
            FUN_108d8ab08();
            uVar31 = (ushort)param_4;
            if ((int)ppppppplVar46 != 0) goto code_r0x000108d88ff4;
            if ((uint)ppppppplStack_1d8 == 0) {
              param_3 = (long *******)&uStack_190;
              FUN_108d7ce48(*ppppplVar16);
              if (uStack_190 == (long *******)0x7fffffffffffffff) {
                *(byte *)((long)ppppplVar16 + 0x27) = *(byte *)((long)ppppplVar16 + 0x27) | 2;
                goto code_r0x000108d88944;
              }
              uStack_190 = (long *******)((long)uStack_190 + 1);
            }
            else {
              uStack_190 = (long *******)0x1;
            }
          }
code_r0x000108d88944:
          if (*(int *)((long)pppppplVar56 + 0xc) != 0) {
            pppppplVar38 = param_2[0x1e];
            ppppppplVar46 = ppppppplStack_1e8;
            if (param_2[0x1e] != (long ******)0x0) {
              do {
                pppppplVar37 = pppppplVar38;
                pppppplVar38 = (long ******)pppppplVar37[1];
              } while (pppppplVar38 != (long ******)0x0);
              ppppppplVar46 = (long *******)pppppplVar37[4];
            }
            ppppppplVar46 = ppppppplVar46 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
            ppppppplVar48 = ppppppplVar46;
            func_0x000108d6797c();
            uVar31 = (ushort)param_4;
            *ppppppplVar46 = (long ******)ppppppplVar48;
            *(ushort *)(ppppppplVar46 + 1) = *(ushort *)(ppppppplVar46 + 1) & 0xbe00 | 4;
            if ((ppppppplVar48 != (long *******)0x7fffffffffffffff) &&
               ((*(byte *)((long)ppppplVar16 + 0x27) >> 1 & 1) == 0)) {
              if ((long)uStack_190 <= (long)ppppppplVar48) {
                uStack_190 = (long *******)((long)ppppppplVar48 + 1);
              }
              *ppppppplVar46 = (long ******)uStack_190;
              goto code_r0x000108d889bc;
            }
code_r0x000108d88d7c:
            ppppppplVar46 = (long *******)0xd;
            goto code_r0x000108d88ff4;
          }
code_r0x000108d889bc:
          if ((*(byte *)((long)ppppplVar16 + 0x27) >> 1 & 1) == 0) {
            ppppppplVar46 = (long *******)0x0;
            ppppppplVar48 = uStack_190;
          }
          else {
            uVar24 = 0;
            do {
              FUN_108d64cc0(8,&uStack_190);
              ppppppplVar48 = (long *******)(((ulong)uStack_190 & 0x3fffffffffffffff) + 1);
              ppppppplVar46 = (long *******)*ppppplVar16;
              param_3 = (long *******)0x0;
              param_4 = ppppppplVar48;
              uStack_190 = ppppppplVar48;
              FUN_108d8a3d0();
              uVar31 = (ushort)param_4;
              if ((int)ppppppplVar46 != 0 || (uint)ppppppplStack_1d8 != 0) break;
              bVar13 = uVar24 < 99;
              uVar24 = uVar24 + 1;
            } while (bVar13);
            if ((int)ppppppplVar46 == 0 && (uint)ppppppplStack_1d8 == 0) goto code_r0x000108d88d7c;
          }
          *(undefined1 *)((long)ppppplVar16 + 0x26) = 0;
          *(undefined4 *)(ppppplVar16 + 10) = 0;
        }
        *pppppplVar43 = (long *****)ppppppplVar48;
        break;
      case 0x4b:
      case 0x54:
        param_4 = (long *******)(long)*(int *)((long)pppppplVar56 + 0xc);
        if (bVar23 == 0x4b) {
          param_4 = (long *******)ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 0xc) * 7];
        }
        iVar14 = *(int *)(pppppplVar56 + 1);
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        bVar23 = *(byte *)((long)pppppplVar56 + 3);
        if ((bVar23 & 1) != 0) {
          *(int *)(param_2 + 0x12) = *(int *)(param_2 + 0x12) + 1;
        }
        if ((bVar23 >> 1 & 1) != 0) {
          ppppppplVar22[6] = (long ******)param_4;
          ppppppplStack_1f0 = param_4;
        }
        if (((ulong)ppppppplStack_1e8[(long)iVar14 * 7 + 1] & 1) != 0) {
          ppppppplStack_1e8[(long)iVar14 * 7 + 2] = (long ******)0x0;
          *(undefined4 *)((long)ppppppplStack_1e8 + (long)iVar14 * 0x38 + 0xc) = 0;
        }
        ppppppplVar46 = (long *******)*ppppplVar16;
        param_3 = (long *******)0x0;
        func_0x000108d8ab8c();
        uVar31 = (ushort)param_4;
        *(undefined1 *)((long)ppppplVar16 + 0x26) = 0;
        *(undefined4 *)(ppppplVar16 + 10) = 0;
        if ((int)ppppppplVar46 != 0) goto LAB_108d83b54;
        if ((ppppppplVar22[0x22] != (long ******)0x0) && (pppppplVar56[2] != (long *****)0x0)) {
          param_4 = (long *******)ppppppplVar22[4][(long)*(char *)((long)ppppplVar16 + 0x24) * 4];
          uVar24 = 0x12;
          if (((ulong)*pppppplVar56 & 0x4000000) != 0) {
            uVar24 = 0x17;
          }
          param_3 = (long *******)(ulong)uVar24;
          (*(code *)ppppppplVar22[0x22])(ppppppplVar22[0x21]);
        }
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x4c:
        ppppppplVar46 = (long *******)0x0;
        if (((ulong)ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 4) * 7 + 1] & 1) != 0)
        goto code_r0x000108d87aec;
        break;
      case 0x4d:
        uVar31 = *(ushort *)(ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7 + 1);
code_r0x000108d86718:
        ppppppplVar46 = (long *******)0x0;
        if ((uVar31 & 1) == 0) goto code_r0x000108d87aec;
        break;
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        uVar31 = *(ushort *)(ppppppplVar46 + 1);
        uVar51 = *(ushort *)(ppppppplVar48 + 1);
        uVar24 = (uint)uVar51;
        bVar8 = *(byte *)((long)pppppplVar56 + 3);
        if (((uVar51 | uVar31) & 1) == 0) {
          if ((bVar8 & 0x47) < 0x43) {
            if ((bVar8 & 0x47) == 0x42) {
              if (((uVar31 >> 1 & 1) == 0) && ((uVar31 & 0xc) != 0)) {
                FUN_108d832dc(ppppppplVar46,uVar29,1);
                uVar31 = *(ushort *)(ppppppplVar46 + 1) & 0xfe00 | uVar31 & 0x1fd;
                uVar24 = (uint)*(ushort *)(ppppppplVar48 + 1);
              }
              if (((uVar24 >> 1 & 1) == 0) && ((uVar24 & 0xc) != 0)) {
                FUN_108d832dc(ppppppplVar48,uVar29,1);
                uVar51 = *(ushort *)(ppppppplVar48 + 1) & 0xfe00 | uVar51 & 0x1ff;
              }
            }
          }
          else {
            uVar10 = uVar51;
            if ((uVar31 & 0xe) == 2) {
              FUN_108d6a060(ppppppplVar46,0);
              uVar10 = *(ushort *)(ppppppplVar48 + 1);
            }
            if ((uVar10 & 0xe) == 2) {
              FUN_108d6a060(ppppppplVar48,0);
            }
          }
          if ((*(ushort *)(ppppppplVar46 + 1) >> 0xe & 1) != 0) {
            func_0x000108d6781c(ppppppplVar46);
            uVar31 = uVar31 & 0xbfff;
          }
          if ((*(ushort *)(ppppppplVar48 + 1) >> 0xe & 1) != 0) {
            func_0x000108d6781c(ppppppplVar48);
            uVar51 = uVar51 & 0xbfff;
          }
          if (*(char *)((long)ppppppplVar22 + 0x51) != '\0') goto LAB_108d83ae4;
          param_4 = (long *******)pppppplVar56[2];
          ppppppplVar45 = ppppppplVar48;
          param_3 = ppppppplVar46;
          FUN_108d895b4();
          uVar24 = (uint)ppppppplVar45;
          bVar23 = *(byte *)pppppplVar56;
code_r0x000108d84454:
          if (bVar23 < 0x50) {
            if (bVar23 == 0x4e) {
              uVar24 = (uint)(uVar24 != 0);
            }
            else if (bVar23 == 0x4f) {
              uVar24 = (uint)(uVar24 == 0);
            }
            else {
code_r0x000108d86cec:
              uVar24 = ~uVar24 >> 0x1f;
            }
          }
          else if (bVar23 == 0x50) {
            uVar24 = (uint)(0 < (int)uVar24);
          }
          else if (bVar23 == 0x51) {
            uVar24 = (uint)((int)uVar24 < 1);
          }
          else {
            if (bVar23 != 0x52) goto code_r0x000108d86cec;
            uVar24 = uVar24 >> 0x1f;
          }
          *(ushort *)(ppppppplVar46 + 1) = uVar31;
          *(ushort *)(ppppppplVar48 + 1) = uVar51;
          if ((*(byte *)((long)pppppplVar56 + 3) >> 5 & 1) == 0) {
            ppppppplVar46 = (long *******)0x0;
            goto joined_r0x000108d86d14;
          }
          ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
          *(ushort *)(ppppppplVar46 + 1) = *(ushort *)(ppppppplVar46 + 1) & 0xbe00 | 4;
          *ppppppplVar46 = (long ******)(ulong)uVar24;
        }
        else {
          if ((char)bVar8 < '\0') {
            uVar24 = uVar51 >> 8 & 1;
            if ((uVar31 & uVar51 & 1) == 0) {
              uVar24 = 1;
            }
            goto code_r0x000108d84454;
          }
          ppppppplVar46 = (long *******)0x0;
          if ((bVar8 >> 5 & 1) == 0) {
            if ((bVar8 >> 4 & 1) != 0) goto code_r0x000108d87aec;
            break;
          }
          *(ushort *)(ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7 + 1) =
               *(ushort *)(ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7 + 1) & 0xbe00 |
               1;
        }
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
        ppppppplVar45 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        if (((*(ushort *)(ppppppplVar46 + 1) | *(ushort *)(ppppppplVar45 + 1)) & 1) != 0) {
          if (((ulong)ppppppplVar48[1] & 0x2460) == 0) goto code_r0x000108d867b4;
          func_0x000108d82720(ppppppplVar48);
          goto code_r0x000108d87b10;
        }
        func_0x000108d6797c();
        func_0x000108d6797c();
        bVar23 = *(byte *)pppppplVar56;
        if (bVar23 == 0x56) {
          ppppppplVar39 = (long *******)((ulong)ppppppplVar45 | (ulong)ppppppplVar46);
        }
        else if (bVar23 == 0x55) {
          ppppppplVar39 = (long *******)((ulong)ppppppplVar45 & (ulong)ppppppplVar46);
        }
        else {
          ppppppplVar39 = ppppppplVar46;
          if (ppppppplVar45 != (long *******)0x0) {
            ppppppplVar47 = (long *******)0x40;
            if (-0x40 < (long)ppppppplVar45) {
              ppppppplVar47 = (long *******)-(long)ppppppplVar45;
            }
            bVar8 = 0xaf - bVar23;
            if (-1 < (long)ppppppplVar45) {
              ppppppplVar47 = ppppppplVar45;
              bVar8 = bVar23;
            }
            ppppppplVar39 = (long *******)((ulong)ppppppplVar46 >> ((ulong)ppppppplVar47 & 0x3f));
            if (((ulong)ppppppplVar46 & 0x8000000000000000) != 0) {
              ppppppplVar39 =
                   (long *******)(-1L << (-(long)ppppppplVar47 & 0x3fU) | (ulong)ppppppplVar39);
            }
            if (bVar8 == 0x57) {
              ppppppplVar39 = (long *******)((long)ppppppplVar46 << ((ulong)ppppppplVar47 & 0x3f));
            }
            if (0x3f < (long)ppppppplVar47) {
              ppppppplVar39 = (long *******)-(ulong)((long)ppppppplVar46 < 0 && bVar8 != 0x57);
            }
          }
        }
        *ppppppplVar48 = (long ******)ppppppplVar39;
        uVar51 = *(ushort *)(ppppppplVar48 + 1);
code_r0x000108d86dd4:
        uVar31 = uVar51 & 0xbe00 | 4;
code_r0x000108d86de0:
        *(ushort *)(ppppppplVar48 + 1) = uVar31;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        uVar31 = *(ushort *)(ppppppplVar46 + 1);
        uVar24 = uVar31 & 0xc;
        if ((uVar31 & 0xc) == 0) {
          if ((uVar31 & 0x12) == 0) {
            uVar24 = 0;
          }
          else {
            ppppppplVar48 = ppppppplVar46;
            FUN_108d8d8c4();
            uVar24 = (uint)ppppppplVar48;
          }
        }
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        uVar31 = *(ushort *)(ppppppplVar48 + 1);
        uVar28 = uVar31 & 0xc;
        if ((uVar31 & 0xc) == 0) {
          if ((uVar31 & 0x12) == 0) {
            uVar28 = 0;
          }
          else {
            ppppppplVar45 = ppppppplVar48;
            FUN_108d8d8c4();
            uVar28 = (uint)ppppppplVar45;
            uVar31 = *(ushort *)(ppppppplVar48 + 1);
          }
        }
        ppppppplVar39 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        ppppppplVar45 = param_1;
        if (((*(ushort *)(ppppppplVar46 + 1) | uVar31) & 1) == 0) {
          if (((uVar24 & uVar28) >> 2 & 1) == 0) goto code_r0x000108d87844;
          param_3 = (long *******)*ppppppplVar46;
          ppppppplStack_198 = (long *******)*ppppppplVar48;
          bVar23 = *(byte *)pppppplVar56;
          if (bVar23 < 0x5b) {
            if (bVar23 == 0x59) {
              if ((long)param_3 < 0) {
                if ((-1 < (long)ppppppplStack_198) ||
                   (-0x7fffffffffffffff - (long)ppppppplStack_198 <= (long)param_3 + 1))
                goto code_r0x000108d881e8;
              }
              else if (((long)ppppppplStack_198 < 1) ||
                      (param_3 <= (long *******)((ulong)ppppppplStack_198 ^ 0x7fffffffffffffff))) {
code_r0x000108d881e8:
                ppppppplVar45 = (long *******)((long)ppppppplStack_198 + (long)param_3);
                goto code_r0x000108d881f0;
              }
code_r0x000108d87844:
              func_0x000108d67900(ppppppplVar46);
              ppppppplVar45 = param_1;
              func_0x000108d67900(ppppppplVar48);
              bVar23 = *(byte *)pppppplVar56;
              if (bVar23 < 0x5b) {
                if (bVar23 == 0x59) {
                  param_1 = (long *******)((double)param_1 + (double)ppppppplVar45);
                }
                else if (bVar23 == 0x5a) {
                  param_1 = (long *******)((double)ppppppplVar45 - (double)param_1);
                }
                else {
code_r0x000108d8789c:
                  lVar35 = (long)(double)param_1;
                  ppppppplStack_198 = (long *******)(long)(double)ppppppplVar45;
                  if (lVar35 == 0) goto code_r0x000108d87930;
                  if (lVar35 == -1) {
                    lVar35 = 1;
                  }
                  lVar54 = 0;
                  if (lVar35 != 0) {
                    lVar54 = (long)ppppppplStack_198 / lVar35;
                  }
                  param_1 = (long *******)(double)((long)ppppppplStack_198 - lVar54 * lVar35);
                }
              }
              else if (bVar23 == 0x5b) {
                param_1 = (long *******)((double)param_1 * (double)ppppppplVar45);
              }
              else {
                if (bVar23 != 0x5c) goto code_r0x000108d8789c;
                if ((double)param_1 == 0.0) goto code_r0x000108d87930;
                param_1 = (long *******)((double)ppppppplVar45 / (double)param_1);
              }
              uStack_190 = param_1;
              *ppppppplVar39 = (long ******)param_1;
              *(ushort *)(ppppppplVar39 + 1) = *(ushort *)(ppppppplVar39 + 1) & 0xbe00 | 8;
              ppppppplStack_1d8 = param_1;
              if ((uVar28 | uVar24) < 8 && (uVar24 & uVar28 & 4) == 0) {
                func_0x000108d893a4(ppppppplVar39);
              }
              goto code_r0x000108d88218;
            }
            if (bVar23 == 0x5a) {
              iVar14 = (int)&ppppppplStack_198;
              FUN_108d89270();
              ppppppplVar45 = ppppppplStack_198;
              if (iVar14 == 0) goto code_r0x000108d881f0;
              goto code_r0x000108d87844;
            }
code_r0x000108d87804:
            if (param_3 == (long *******)0x0) goto code_r0x000108d87930;
            ppppppplVar46 = param_3;
            if (param_3 == (long *******)0xffffffffffffffff) {
              ppppppplVar46 = (long *******)0x1;
            }
            lVar35 = 0;
            if (ppppppplVar46 != (long *******)0x0) {
              lVar35 = (long)ppppppplStack_198 / (long)ppppppplVar46;
            }
            ppppppplVar45 = (long *******)((long)ppppppplStack_198 - lVar35 * (long)ppppppplVar46);
          }
          else if (bVar23 == 0x5b) {
            iVar14 = (int)&ppppppplStack_198;
            func_0x000108d892e4();
            ppppppplVar45 = ppppppplStack_198;
            if (iVar14 != 0) goto code_r0x000108d87844;
          }
          else {
            if (bVar23 != 0x5c) goto code_r0x000108d87804;
            if (param_3 == (long *******)0x0) goto code_r0x000108d87930;
            if ((param_3 == (long *******)0xffffffffffffffff) &&
               (ppppppplStack_198 == (long *******)0x8000000000000000)) goto code_r0x000108d87844;
            ppppppplVar45 = (long *******)0x0;
            if (param_3 != (long *******)0x0) {
              ppppppplVar45 = (long *******)((long)ppppppplStack_198 / (long)param_3);
            }
          }
code_r0x000108d881f0:
          ppppppplStack_198 = ppppppplVar45;
          *ppppppplVar39 = (long ******)ppppppplStack_198;
          uVar31 = *(ushort *)(ppppppplVar39 + 1) & 0xbe00 | 4;
        }
        else {
code_r0x000108d87930:
          param_1 = ppppppplVar45;
          if (((ulong)ppppppplVar39[1] & 0x2460) != 0) {
            func_0x000108d82720(ppppppplVar39);
            goto code_r0x000108d88218;
          }
          uVar31 = 1;
        }
        *(ushort *)(ppppppplVar39 + 1) = uVar31;
code_r0x000108d88218:
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x5e:
        iVar14 = *(int *)(pppppplVar56 + 1);
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        ppppppplVar45 = ppppppplStack_1e8 + (long)iVar14 * 7;
        iVar33 = *(int *)((long)pppppplVar56 + 0xc);
        ppppppplVar48 = ppppppplStack_1e8 + (long)iVar33 * 7;
        uVar31 = *(ushort *)(ppppppplVar45 + 1);
        if (((uVar31 | *(ushort *)(ppppppplVar46 + 1)) & 1) == 0) {
          if ((*(ushort *)(ppppppplVar46 + 1) >> 0xe & 1) != 0) {
            ppppppplVar39 = ppppppplVar46;
            func_0x000108d6781c();
            if ((int)ppppppplVar39 != 0) goto LAB_108d83ae4;
            uVar31 = *(ushort *)(ppppppplVar45 + 1);
          }
          if (((((uVar31 >> 0xe & 1) != 0) &&
               (ppppppplVar39 = ppppppplVar45, func_0x000108d6781c(), (int)ppppppplVar39 != 0)) ||
              ((((ulong)ppppppplVar46[1] & 0x12) == 0 &&
               (ppppppplVar39 = ppppppplVar46, FUN_108d832dc(ppppppplVar46,uVar29,0),
               (int)ppppppplVar39 != 0)))) ||
             ((((ulong)ppppppplVar45[1] & 0x12) == 0 &&
              (ppppppplVar39 = ppppppplVar45, FUN_108d832dc(ppppppplVar45,uVar29,0),
              (int)ppppppplVar39 != 0)))) goto LAB_108d83ae4;
          lVar35 = (long)*(int *)((long)ppppppplVar45 + 0xc) +
                   (long)*(int *)((long)ppppppplVar46 + 0xc);
          iVar15 = (int)lVar35;
          if (*(int *)(ppppppplVar22 + 0xd) < iVar15) goto code_r0x000108d88dfc;
          ppppppplVar39 = ppppppplVar48;
          FUN_108d82884(ppppppplVar48,iVar15 + 2,iVar33 == iVar14);
          if ((int)ppppppplVar39 != 0) goto LAB_108d83ae4;
          *(ushort *)(ppppppplVar48 + 1) = *(ushort *)(ppppppplVar48 + 1) & 0xbe00 | 2;
          if (iVar33 != iVar14) {
            _memcpy(ppppppplVar48[2],ppppppplVar45[2],(long)*(int *)((long)ppppppplVar45 + 0xc));
          }
          param_3 = (long *******)ppppppplVar46[2];
          param_4 = (long *******)(long)*(int *)((long)ppppppplVar46 + 0xc);
          _memcpy((long)ppppppplVar48[2] + (long)*(int *)((long)ppppppplVar45 + 0xc));
          *(undefined1 *)((long)ppppppplVar48[2] + lVar35) = 0;
          *(undefined1 *)((long)ppppppplVar48[2] + lVar35 + 1) = 0;
          *(ushort *)(ppppppplVar48 + 1) = *(ushort *)(ppppppplVar48 + 1) | 0x200;
          *(int *)((long)ppppppplVar48 + 0xc) = iVar15;
          *(byte *)((long)ppppppplVar48 + 10) = bVar7;
          ppppppplVar46 = (long *******)0x0;
        }
        else if (((ulong)ppppppplVar48[1] & 0x2460) == 0) {
          ppppppplVar46 = (long *******)0x0;
          *(undefined2 *)(ppppppplVar48 + 1) = 1;
        }
        else {
          func_0x000108d82720(ppppppplVar48);
          ppppppplVar46 = (long *******)0x0;
        }
        break;
      case 0x5f:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplVar46 = (long *******)*ppppplVar16;
        func_0x000108d8b0cc();
        *(undefined4 *)(ppppplVar16 + 10) = 0;
        if (((((int)ppppppplVar46 == 0) && (ppppppplVar22[0x22] != (long ******)0x0)) &&
            (pppppplVar56[2] != (long *****)0x0)) &&
           ((*(byte *)((long)ppppplVar16 + 0x27) >> 2 & 1) != 0)) {
          param_4 = (long *******)ppppppplVar22[4][(long)*(char *)((long)ppppplVar16 + 0x24) * 4];
          param_3 = (long *******)0x9;
          (*(code *)ppppppplVar22[0x22])(ppppppplVar22[0x21]);
        }
        ppppppplVar48 = param_3;
        if (((ulong)pppppplVar56[1] & 1) != 0) goto code_r0x000108d8669c;
        break;
      case 0x60:
        iVar14 = *(int *)((long)pppppplVar56 + 4);
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)ppppppplVar46[1] & 0x2460) == 0) {
          *(undefined2 *)(ppppppplVar46 + 1) = 1;
        }
        else {
          func_0x000108d82720(ppppppplVar46);
        }
        ppppppplVar48 = ppppppplStack_1e8 + (long)iVar14 * 7;
        if (((ulong)ppppppplVar48[1] & 1) == 0) {
          *(undefined2 *)(ppppppplVar46 + 1) = 4;
          func_0x000108d6797c();
          pppppplVar43 = (long ******)~(ulong)ppppppplVar48;
          goto code_r0x000108d87290;
        }
        goto code_r0x000108d87b74;
      case 0x61:
        ppppppplVar48 = (long *******)(param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7);
        if (((ulong)ppppppplVar48[1] & 0x2460) != 0) {
          func_0x000108d82720(ppppppplVar48);
        }
        *(undefined2 *)(ppppppplVar48 + 1) = 4;
        *(byte *)pppppplVar56 = 0x1b;
        ppppppplVar45 = (long *******)pppppplVar56[2];
        if (ppppppplVar45 == (long *******)0x0) {
          uVar24 = 0;
        }
        else {
          ppppppplVar46 = ppppppplVar45;
          _strlen();
          uVar24 = (uint)ppppppplVar46 & 0x3fffffff;
        }
        *(uint *)((long)pppppplVar56 + 4) = uVar24;
        if (uVar29 == 1) {
          ppppppplVar46 = (long *******)0x0;
        }
        else {
          param_4 = (long *******)0xffffffff;
          ppppppplVar46 = ppppppplVar48;
          FUN_108d67c04();
          if ((int)ppppppplVar46 == 0x12) goto code_r0x000108d88dfc;
          uVar31 = *(ushort *)(ppppppplVar48 + 1);
          param_3 = ppppppplVar45;
          if (((uVar31 >> 1 & 1) != 0) && (uVar29 != *(byte *)((long)ppppppplVar48 + 10))) {
            param_3 = (long *******)(ulong)uVar29;
            ppppppplVar45 = ppppppplVar48;
            FUN_108d833e4();
            if ((int)ppppppplVar45 != 0) goto LAB_108d83ae4;
            uVar31 = *(ushort *)(ppppppplVar48 + 1);
          }
          *(int *)(ppppppplVar48 + 4) = 0;
          *(ushort *)(ppppppplVar48 + 1) = uVar31 | 0x800;
          if (*(byte *)((long)pppppplVar56 + 1) == 0xff) {
            param_3 = (long *******)pppppplVar56[2];
            func_0x000108d60660(ppppppplVar22);
          }
          *(byte *)((long)pppppplVar56 + 1) = 0xff;
          pppppplVar56[2] = (long *****)ppppppplVar48[2];
          uVar24 = *(uint *)((long)ppppppplVar48 + 0xc);
          *(uint *)((long)pppppplVar56 + 4) = uVar24;
        }
        if ((int)uVar24 <= *(int *)(ppppppplVar22 + 0xd)) goto code_r0x000108d87358;
        goto code_r0x000108d88dfc;
      case 0x62:
        iVar14 = *(int *)(param_2 + 0x12);
        *(int *)(ppppppplVar22 + 0xc) = iVar14;
        *(int *)((long)ppppppplVar22 + 100) = *(int *)((long)ppppppplVar22 + 100) + iVar14;
        *(int *)(param_2 + 0x12) = 0;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 99:
        param_4 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        uStack_190 = (long *******)((ulong)uStack_190._4_4_ << 0x20);
        ppppppplVar46 = (long *******)param_2[0xc][*(int *)((long)pppppplVar56 + 4)][2];
        param_3 = (long *******)param_2[0xc][*(int *)((long)pppppplVar56 + 4)][9];
        FUN_108d8b320();
        uVar24 = (uint)uStack_190;
        goto joined_r0x000108d86d14;
      case 100:
        param_3 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        ppppppplVar46 = (long *******)param_2[0xc][*(int *)((long)pppppplVar56 + 4)][9];
        FUN_108d8b438();
        *(undefined4 *)(param_2[0xc][*(int *)((long)pppppplVar56 + 0xc)] + 10) = 0;
        break;
      case 0x65:
      case 0x66:
        iVar14 = *(int *)(pppppplVar56 + 1);
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplVar46 = (long *******)*ppppplVar16;
        if ((*(byte *)((long)ppppplVar16 + 0x27) >> 2 & 1) == 0) {
          FUN_108d7ce48(ppppppplVar46,&uStack_190);
          if ((long)uStack_190 <= (long)*(int *)(ppppppplVar22 + 0xd)) {
            ppppppplStack_1d8 = (long *******)CONCAT44(ppppppplStack_1d8._4_4_,(int)uStack_190);
            param_4 = uStack_190;
code_r0x000108d865bc:
            ppppppplVar48 = ppppppplStack_1e8 + (long)iVar14 * 7;
            uVar24 = (uint)param_4;
            if (uVar24 < 0x21) {
              uVar24 = 0x20;
            }
            if (*(int *)(ppppppplVar48 + 4) < (int)uVar24) {
              ppppppplVar45 = ppppppplVar48;
              FUN_108d82884(ppppppplVar48,uVar24,0);
              if ((int)ppppppplVar45 != 0) goto LAB_108d83ae4;
              param_4 = (long *******)((ulong)ppppppplStack_1d8 & 0xffffffff);
              uVar31 = *(ushort *)(ppppppplVar48 + 1) & 0xbe00 | 0x10;
            }
            else {
              ppppppplVar48[2] = ppppppplVar48[3];
              uVar31 = 0x10;
            }
            *(int *)((long)ppppppplVar48 + 0xc) = (int)param_4;
            *(ushort *)(ppppppplVar48 + 1) = uVar31;
            if ((*(byte *)((long)ppppplVar16 + 0x27) >> 2 & 1) == 0) {
              param_3 = (long *******)0x0;
              FUN_108d7d214();
            }
            else {
              param_3 = (long *******)0x0;
              FUN_108d6b39c();
            }
            *(undefined1 *)((long)ppppppplVar48 + 10) = 1;
            break;
          }
        }
        else {
          FUN_108d896b8(ppppppplVar46,&ppppppplStack_1d8);
          param_4 = (long *******)((ulong)ppppppplStack_1d8 & 0xffffffff);
          if ((uint)ppppppplStack_1d8 <= *(uint *)(ppppppplVar22 + 0xd)) goto code_r0x000108d865bc;
        }
code_r0x000108d88dfc:
        uVar31 = 0x745e;
        func_0x000108d7163c(ppppppplVar21,ppppppplVar22);
        ppppppplVar46 = (long *******)0x12;
        goto LAB_108d83b54;
      case 0x67:
        ppppppplVar48 = (long *******)(param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7);
        if (((ulong)ppppppplVar48[1] & 0x2460) != 0) {
          func_0x000108d82720(ppppppplVar48);
        }
        *(undefined2 *)(ppppppplVar48 + 1) = 4;
        ppppppplVar45 = (long *******)param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        if (*(char *)((long)ppppppplVar45 + 0x25) == '\0') {
          if (*(char *)((long)ppppppplVar45 + 0x26) == '\0') {
            ppppppplVar46 = (long *******)ppppppplVar45[6];
            if (ppppppplVar46 == (long *******)0x0) {
              pppppplVar43 = *ppppppplVar45;
              if (*(char *)((long)pppppplVar43 + 0x6d) != '\x01') {
                ppppppplVar46 = ppppppplVar45;
                func_0x000108d8dbfc();
                uVar31 = (ushort)param_4;
                if ((int)ppppppplVar46 != 0) goto code_r0x000108d88ff4;
                if (*(char *)((long)ppppppplVar45 + 0x25) != '\0') goto code_r0x000108d867b4;
                pppppplVar43 = *ppppppplVar45;
              }
              param_3 = (long *******)&uStack_190;
              FUN_108d7ce48(pppppplVar43);
              ppppppplVar46 = (long *******)0x0;
              ppppppplVar45 = uStack_190;
            }
            else {
              param_3 = (long *******)*ppppppplVar46;
              (*(code *)(*param_3)[0xc])(ppppppplVar46,&uStack_190);
              FUN_108d824cc(param_2);
              ppppppplVar45 = uStack_190;
            }
          }
          else {
            ppppppplVar46 = (long *******)0x0;
            uStack_190 = (long *******)ppppppplVar45[8];
            ppppppplVar45 = uStack_190;
          }
          goto code_r0x000108d84258;
        }
code_r0x000108d867b4:
        uVar31 = 1;
        goto code_r0x000108d86de0;
      case 0x68:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        *(undefined1 *)((long)ppppplVar16 + 0x25) = 1;
        *(undefined4 *)(ppppplVar16 + 10) = 0;
        pppplVar19 = *ppppplVar16;
        if (pppplVar19 == (long ****)0x0) goto code_r0x000108d874f8;
        func_0x000108d5e198(pppplVar19[0xb]);
        pppplVar19[0xb] = (long ***)0x0;
        *(undefined1 *)((long)pppplVar19 + 0x6d) = 0;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x69:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplVar46 = (long *******)*ppppplVar16;
        uStack_190 = (long *******)((ulong)uStack_190._4_4_ << 0x20);
        param_3 = (long *******)&uStack_190;
        FUN_108d8ab08();
        *(char *)((long)ppppplVar16 + 0x25) = (char)uStack_190;
        *(undefined1 *)((long)ppppplVar16 + 0x26) = 0;
        *(undefined4 *)(ppppplVar16 + 10) = 0;
        *(undefined4 *)(ppppplVar16 + 3) = *(undefined4 *)((long)pppppplVar56 + 0xc);
        uVar24 = (uint)uStack_190;
        if (0 < *(int *)(pppppplVar56 + 1)) goto joined_r0x000108d86d14;
        break;
      case 0x6a:
      case 0x6b:
        *(int *)(param_2 + 0x15) = *(int *)(param_2 + 0x15) + 1;
      case 0x6c:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        uStack_1a4 = 1;
        ppppppplVar48 = (long *******)ppppplVar16[9];
        if (ppppppplVar48 == (long *******)0x0) {
          ppppppplVar46 = (long *******)*ppppplVar16;
          param_3 = (long *******)&uStack_1a4;
          FUN_108d8b504();
          *(undefined1 *)((long)ppppplVar16 + 0x26) = 0;
          *(undefined4 *)(ppppplVar16 + 10) = 0;
          *(char *)((long)ppppplVar16 + 0x25) = (char)uStack_1a4;
          uVar24 = uStack_1a4;
          goto joined_r0x000108d86d14;
        }
        if (*(char *)(ppppppplVar48 + 0xb) == '\0') {
          param_3 = ppppppplVar48 + 7;
          if (*param_3 == (long ******)0x0) {
            ppppppplVar46 = (long *******)0x0;
            *(undefined1 *)((long)ppppplVar16 + 0x25) = 1;
            goto code_r0x000108d87aec;
          }
          ppppppplVar46 = ppppppplVar48 + 0xc;
          FUN_108d918e4();
code_r0x000108d88aa8:
          *(undefined1 *)((long)ppppplVar16 + 0x25) = 0;
          break;
        }
        ppppppplVar46 = ppppppplVar48;
        FUN_108d91a6c();
        uVar44 = (ulong)*(byte *)((long)ppppppplVar48 + 0x5b);
        if (uVar44 != 0) {
          uVar42 = uVar44 + 1;
          ppppppplVar45 = ppppppplVar48 + uVar44 * 0xd + -1;
          do {
            uVar24 = (uint)ppppppplVar45;
            FUN_108d822ac();
            if ((uint)ppppppplVar46 != 0) {
              uVar24 = (uint)ppppppplVar46;
            }
            ppppppplVar46 = (long *******)(ulong)uVar24;
            uVar42 = uVar42 - 1;
            ppppppplVar45 = ppppppplVar45 + -0xd;
          } while (1 < uVar42);
        }
        if ((int)ppppppplVar46 == 0) {
          ppppppplVar45 = (long *******)ppppppplVar48[0xe][4];
          pppppplVar43 = (long ******)FUN_108d91e24;
          if (*(char *)((long)ppppppplVar48 + 0x5c) != '\x02') {
            pppppplVar43 = (long ******)FUN_108d91f54;
          }
          pppppplVar38 = (long ******)FUN_108d91d28;
          if (*(char *)((long)ppppppplVar48 + 0x5c) != '\x01') {
            pppppplVar38 = pppppplVar43;
          }
          bVar23 = *(byte *)((long)ppppppplVar48 + 0x5b);
          ppppppplStack_270 = (long *******)(ulong)bVar23;
          if (bVar23 == 0) {
code_r0x000108d87124:
            ppppppplStack_270 = (long *******)0x0;
code_r0x000108d87e04:
            uVar44 = 0;
            ppppppplVar46 = ppppppplVar48 + 0xc;
            do {
              if (*(byte *)((long)ppppppplVar48 + 0x5b) <= uVar44) {
                if (*(char *)((long)ppppppplVar48 + 0x59) == '\0') {
                  param_4 = (long *******)0x0;
                  param_3 = ppppppplStack_270;
                  func_0x000108d9267c();
                  ppppppplVar48[3] = (long ******)ppppppplStack_270;
                  iVar14 = (int)ppppppplVar46;
                  goto joined_r0x000108d88508;
                }
                ppppppplVar39 =
                     ppppppplVar46 + (ulong)*(byte *)((long)ppppppplVar48 + 0x5b) * 0xd + -0xd;
                ppppppplVar46 = ppppppplVar39;
                FUN_108d91bd8();
                if ((int)ppppppplVar46 != 0) goto code_r0x000108d88aa4;
                param_3 = (long *******)0x50;
                FUN_108d6a6fc();
                if (ppppppplVar45 == (long *******)0x0) {
                  ppppppplVar48[2] = (long ******)0x0;
                  ppppppplVar46 = (long *******)0x7;
                }
                else {
                  param_1 = (long *******)0x0;
                  ppppppplVar45[7] = (long ******)0x0;
                  ppppppplVar45[6] = (long ******)0x0;
                  ppppppplVar45[9] = (long ******)0x0;
                  ppppppplVar45[8] = (long ******)0x0;
                  ppppppplVar45[3] = (long ******)0x0;
                  ppppppplVar45[2] = (long ******)0x0;
                  ppppppplVar45[5] = (long ******)0x0;
                  ppppppplVar45[4] = (long ******)0x0;
                  ppppppplVar45[1] = (long ******)0x0;
                  *ppppppplVar45 = (long ******)0x0;
                  ppppppplVar48[2] = (long ******)ppppppplVar45;
                  param_4 = ppppppplVar45 + 9;
                  param_3 = ppppppplStack_270;
                  FUN_108d92490();
                  if ((int)ppppppplVar39 == 0) {
                    pppppplVar43 = ppppppplVar45[9];
                    *(undefined4 *)(pppppplVar43 + 4) = 1;
                    (*pppppplVar43)[0xc] =
                         (long ****)((long)(*pppppplVar43)[0xc] - (long)*(int *)(pppppplVar43 + 3));
                    if (1 < *(byte *)((long)ppppppplVar48 + 0x5b)) {
                      uVar44 = (ulong)(*(byte *)((long)ppppppplVar48 + 0x5b) - 1);
                      pppppplVar43 = ppppppplStack_270[3] + 9;
                      do {
                        ppppplVar40 = *pppppplVar43;
                        if (ppppplVar40 != (long *****)0x0) {
                          *(undefined4 *)(ppppplVar40 + 4) = 1;
                          (*ppppplVar40)[0xc] =
                               (long ***)
                               ((long)(*ppppplVar40)[0xc] - (long)*(int *)(ppppplVar40 + 3));
                        }
                        uVar44 = uVar44 - 1;
                        pppppplVar43 = pppppplVar43 + 10;
                      } while (uVar44 != 0);
                    }
                    uVar44 = 0xffffffffffffffff;
                    lVar35 = 0;
                    while (uVar44 = uVar44 + 1, uVar44 < *(byte *)((long)ppppppplVar48 + 0x5b)) {
                      ppppppplVar46 = (long *******)((long)ppppppplStack_270[3] + lVar35);
                      param_3 = (long *******)0x1;
                      FUN_108d92540();
                      lVar35 = lVar35 + 0x50;
                      if ((int)ppppppplVar46 != 0) {
                        ppppppplStack_270 = (long *******)0x0;
                        goto code_r0x000108d88aa4;
                      }
                    }
                    param_3 = (long *******)0x2;
                    FUN_108d92574();
                    iVar14 = (int)ppppppplVar45;
                    ppppppplVar46 = ppppppplVar45;
joined_r0x000108d88508:
                    if (iVar14 != 0) {
                      ppppppplStack_270 = (long *******)0x0;
                      goto code_r0x000108d88aa4;
                    }
                    goto code_r0x000108d88aa8;
                  }
                  ppppppplStack_270 = (long *******)0x0;
                  ppppppplVar46 = ppppppplVar39;
                }
                goto code_r0x000108d88aa4;
              }
              ppppppplVar39 = ppppppplVar46 + uVar44 * 0xd;
              iVar14 = *(int *)(ppppppplVar39 + 7);
              if (iVar14 == 0) {
                ppppppplVar47 = (long *******)0x0;
                param_3 = (long *******)0x0;
              }
              else {
                if (iVar14 < 0x11) {
                  ppppppplStack_198 = (long *******)0x0;
                  param_4 = (long *******)&ppppppplStack_198;
                  ppppppplVar47 = ppppppplVar39;
                  FUN_108d92860();
code_r0x000108d87ec8:
                  param_3 = ppppppplStack_1d8;
                  if ((int)ppppppplVar47 != 0) {
code_r0x000108d8805c:
                    FUN_108d8224c(param_3);
                    goto code_r0x000108d88064;
                  }
                }
                else {
                  iVar33 = -1;
                  lVar35 = 0x10;
                  iVar15 = 0;
                  do {
                    iVar25 = iVar15;
                    lVar35 = lVar35 * 0x10;
                    iVar33 = iVar33 + 1;
                    iVar15 = iVar25 + 1;
                  } while (lVar35 < iVar14);
                  ppppppplStack_198 = (long *******)0x0;
                  param_3 = (long *******)0x10;
                  FUN_108d927e4();
                  uVar24 = 0;
                  if (param_3 == (long *******)0x0) {
                    uVar24 = 7;
                  }
                  ppppppplVar47 = (long *******)(ulong)uVar24;
                  iVar14 = *(int *)(ppppppplVar39 + 7);
                  ppppppplStack_1d8 = param_3;
                  if (iVar14 < 1 || param_3 == (long *******)0x0) goto code_r0x000108d87ec8;
                  uVar24 = 0;
                  iVar15 = 0;
                  do {
                    iVar14 = iVar14 - iVar15;
                    if (0xf < iVar14) {
                      iVar14 = 0x10;
                    }
                    param_4 = (long *******)&ppppppplStack_198;
                    ppppppplVar47 = ppppppplVar39;
                    FUN_108d92860(ppppppplVar39,iVar14,param_4,&uStack_1a0);
                    if ((int)ppppppplVar47 != 0) goto code_r0x000108d8805c;
                    param_4 = (long *******)&uStack_190;
                    ppppppplVar47 = ppppppplVar39;
                    FUN_108d92490(ppppppplVar39,CONCAT44(uStack_19c,uStack_1a0));
                    ppppppplVar30 = param_3;
                    if (iVar33 == 0) {
                      if ((int)ppppppplVar47 != 0) goto code_r0x000108d8803c;
                    }
                    else {
                      iVar14 = 1;
                      iVar26 = iVar25;
                      do {
                        iVar14 = iVar14 << 4;
                        iVar26 = iVar26 + -1;
                      } while (iVar26 != 0);
                      iVar26 = iVar25;
                      if ((int)ppppppplVar47 != 0) {
code_r0x000108d8803c:
                        func_0x000108d8231c(uStack_190);
                        goto code_r0x000108d8805c;
                      }
                      do {
                        uVar28 = 0;
                        if (iVar14 != 0) {
                          uVar28 = (int)uVar24 / iVar14;
                        }
                        uVar53 = uVar28 & 0xf;
                        if (-1 < (int)-uVar28) {
                          uVar53 = -(-uVar28 & 0xf);
                        }
                        ppppppplVar30 =
                             (long *******)(ppppppplVar30[3] + (long)(int)uVar53 * 10 + 9);
                        pppppplVar43 = *ppppppplVar30;
                        if (pppppplVar43 == (long ******)0x0) {
                          lVar35 = 0x10;
                          FUN_108d927e4();
                          if (lVar35 == 0) {
                            ppppppplVar47 = (long *******)0x7;
                            goto code_r0x000108d8803c;
                          }
                          ppppppplVar47 = ppppppplVar39;
                          param_4 = ppppppplVar30;
                          FUN_108d92490(ppppppplVar39,lVar35);
                          if ((int)ppppppplVar47 != 0) goto code_r0x000108d8803c;
                          pppppplVar43 = *ppppppplVar30;
                        }
                        ppppppplVar30 = (long *******)pppppplVar43[1];
                        iVar14 = iVar14 >> 4;
                        iVar26 = iVar26 + -1;
                      } while (iVar26 != 0);
                    }
                    uVar28 = uVar24 & 0xf;
                    uVar24 = uVar24 + 1;
                    ppppppplVar30[3][(ulong)uVar28 * 10 + 9] = (long *****)uStack_190;
                    iVar15 = iVar15 + 0x10;
                    iVar14 = *(int *)(ppppppplVar39 + 7);
                  } while (iVar15 < iVar14);
                }
                if (ppppppplStack_270 == (long *******)0x0) {
                  ppppppplVar47 = (long *******)0x0;
                  ppppppplStack_270 = param_3;
                }
                else {
                  param_4 = (long *******)(ppppppplStack_270[3] + uVar44 * 10 + 9);
                  FUN_108d92490();
                  ppppppplVar47 = ppppppplVar39;
                }
              }
code_r0x000108d88064:
              uVar44 = uVar44 + 1;
            } while ((int)ppppppplVar47 == 0);
          }
          else {
            ppppppplVar39 = ppppppplVar48 + 0x14;
            ppppppplVar46 = ppppppplStack_270;
            do {
              *ppppppplVar39 = pppppplVar38;
              ppppppplVar46 = (long *******)((long)ppppppplVar46 + -1);
              ppppppplVar39 = ppppppplVar39 + 0xd;
            } while (ppppppplVar46 != (long *******)0x0);
            if (bVar23 == 1) goto code_r0x000108d87124;
            FUN_108d927e4();
            if (ppppppplStack_270 != (long *******)0x0) goto code_r0x000108d87e04;
            ppppppplStack_270 = (long *******)0x0;
            ppppppplVar47 = (long *******)0x7;
          }
          FUN_108d8224c(ppppppplStack_270);
          ppppppplStack_270 = (long *******)0x0;
          ppppppplVar46 = ppppppplVar47;
code_r0x000108d88aa4:
          FUN_108d8224c(ppppppplStack_270);
          goto code_r0x000108d88aa8;
        }
        *(undefined1 *)((long)ppppplVar16 + 0x25) = 1;
        goto code_r0x000108d87aec;
      case 0x6d:
      case 0x6e:
        iVar14 = *(int *)(pppppplVar56 + 1);
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplVar48 = (long *******)*ppppplVar16;
        if (((ulong)*pppppplVar56 & 0x1000000) != 0) {
          *(int *)(param_2 + 0x12) = *(int *)(param_2 + 0x12) + 1;
        }
        param_3 = ppppppplStack_1e8 + (long)iVar14 * 7;
        if ((*(ushort *)(param_3 + 1) >> 0xe & 1) != 0) {
          ppppppplVar46 = param_3;
          func_0x000108d6781c();
          uVar31 = (ushort)param_4;
          if ((int)ppppppplVar46 != 0) goto LAB_108d83b54;
        }
        ppppppplVar46 = (long *******)ppppplVar16[9];
        if (ppppppplVar46 == (long *******)0x0) {
          param_4 = (long *******)(long)*(int *)((long)param_3 + 0xc);
          param_3 = (long *******)param_3[2];
          func_0x000108d8ab8c();
          goto code_r0x000108d87664;
        }
        FUN_108d8b60c();
        break;
      case 0x6f:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplVar46 = (long *******)*ppppplVar16;
        uStack_190 = (long *******)ppppplVar16[2];
        uStack_188._0_3_ = (uint3)(ushort)*(undefined4 *)((long)pppppplVar56 + 0xc);
        uStack_180 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        param_3 = (long *******)&uStack_190;
        param_4 = (long *******)0x0;
        ppppppplVar48 = ppppppplVar46;
        FUN_108d8a3d0();
        if ((int)ppppppplVar48 == 0 && (uint)ppppppplStack_1d8 == 0) {
          func_0x000108d8b0cc();
          ppppppplVar48 = ppppppplVar46;
        }
code_r0x000108d87664:
        *(undefined4 *)(ppppplVar16 + 10) = 0;
        ppppppplVar46 = ppppppplVar48;
        break;
      case 0x70:
        pppppplVar43 = param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)pppppplVar43[1] & 0x2460) != 0) {
          func_0x000108d82720(pppppplVar43);
        }
        ppppppplVar45 = (long *******)param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplVar48 = (long *******)*ppppppplVar45;
        *(undefined2 *)(pppppplVar43 + 1) = 1;
        if (*(char *)((long)ppppppplVar48 + 0x6d) != '\x01') {
          ppppppplVar46 = ppppppplVar45;
          func_0x000108d8dbfc();
          uVar31 = (ushort)param_4;
          if ((int)ppppppplVar46 != 0) goto code_r0x000108d88ff4;
        }
        if (*(char *)((long)ppppppplVar45 + 0x25) == '\0') {
          uStack_190 = (long *******)0x0;
          param_4 = (long *******)&uStack_190;
          ppppppplVar46 = ppppppplVar22;
          FUN_108d8b828();
          uVar31 = (ushort)param_4;
          if ((int)ppppppplVar46 != 0) goto code_r0x000108d88ff4;
          *pppppplVar43 = (long *****)uStack_190;
          *(undefined2 *)(pppppplVar43 + 1) = 4;
          param_3 = ppppppplVar48;
        }
code_r0x000108d87b10:
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplStack_1d8 = (long *******)ppppplVar16[2];
        uStack_1d0._0_3_ = CONCAT12(-(bVar23 < 0x73),(short)*(undefined4 *)(pppppplVar56 + 2));
        ppppppplStack_1c8 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        FUN_108d7ce48(*ppppplVar16,&ppppppplStack_198);
        param_4 = ppppppplStack_198;
        if (ppppppplStack_198 + -0x10000000 < (long *******)0xffffffff80000001) {
          param_3 = (long *******)&UNK_10f51799f;
          ppppppplVar46 = (long *******)0xb;
          FUN_108d64c00(0xb);
code_r0x000108d84344:
          iVar14 = 0;
        }
        else {
          uStack_188 = (long *******)((ulong)uStack_188 & 0xffffffffffff0000);
          uStack_170 = uStack_170 & 0xffffffff00000000;
          ppppppplVar46 = (long *******)*ppppplVar16;
          param_3 = (long *******)0x0;
          uStack_168 = ppppppplVar22;
          FUN_108d89734();
          if ((int)ppppppplVar46 != 0) goto code_r0x000108d84344;
          iVar14 = (int)((ulong)uStack_188 >> 0x20);
          param_4 = (long *******)&ppppppplStack_1d8;
          param_3 = uStack_180;
          FUN_108d8e65c();
          if (((ulong)uStack_188 & 0x2460) != 0 || (int)uStack_170 != 0) {
            func_0x000108d826d0(&uStack_190);
          }
          ppppppplVar46 = (long *******)0x0;
        }
        iVar33 = -iVar14;
        if (((ulong)*pppppplVar56 & 1) == 0) {
          iVar33 = iVar14 + 1;
        }
        if (0 < iVar33) goto code_r0x000108d87aec;
        break;
      case 0x75:
        pppppplVar43 = param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)pppppplVar43[1] & 0x2460) != 0) {
          func_0x000108d82720(pppppplVar43);
        }
        *(undefined2 *)(pppppplVar43 + 1) = 1;
        if (*(int *)((long)ppppppplVar22 + 0xb4) + 1 < *(int *)(ppppppplVar22 + 0x15)) {
          *(undefined1 *)((long)param_2 + 0x8a) = 2;
          ppppppplVar46 = (long *******)0x6;
        }
        else {
          iVar14 = *(int *)((long)pppppplVar56 + 0xc);
          ppppppplVar48 = (long *******)(long)iVar14;
          uStack_190 = (long *******)((ulong)uStack_190 & 0xffffffff00000000);
          ppppppplVar46 = (long *******)ppppppplVar22[4][(long)ppppppplVar48 * 4 + 1];
          param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
          FUN_108d8b994(ppppppplVar46,param_3,&uStack_190);
          *(undefined2 *)(pppppplVar43 + 1) = 4;
          param_4 = (long *******)(long)(int)(uint)uStack_190;
          *pppppplVar43 = (long *****)param_4;
          if ((int)ppppppplVar46 == 0 && (uint)uStack_190 != 0) {
            FUN_108d8bc58(ppppppplVar22[4],ppppppplVar48,param_4,
                          *(undefined4 *)((long)pppppplVar56 + 4));
            uStack_1f4 = iVar14 + 1;
            param_3 = ppppppplVar48;
            ppppppplVar46 = (long *******)0x0;
          }
        }
        break;
      case 0x76:
        uStack_190 = (long *******)((ulong)uStack_190._4_4_ << 0x20);
        param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
        ppppppplVar46 = (long *******)ppppppplVar22[4][(long)*(int *)(pppppplVar56 + 1) * 4 + 1];
        param_4 = (long *******)0x0;
        if (*(int *)((long)pppppplVar56 + 0xc) != 0) {
          param_4 = (long *******)&uStack_190;
        }
        FUN_108d8bcb0();
        uVar24 = *(uint *)((long)pppppplVar56 + 0xc);
        if (uVar24 != 0) {
          *(uint *)(param_2 + 0x12) = *(int *)(param_2 + 0x12) + (uint)uStack_190;
          if (0 < (int)uVar24) {
            ppppppplStack_1e8[(ulong)uVar24 * 7] =
                 (long ******)
                 ((long)ppppppplStack_1e8[(ulong)uVar24 * 7] + (long)(int)(uint)uStack_190);
          }
        }
        break;
      case 0x77:
        param_3 = (long *******)param_2[0xc][*(int *)((long)pppppplVar56 + 4)][9];
        if (param_3 != (long *******)0x0) {
          FUN_108d82070(ppppppplVar22);
          goto code_r0x000108d874f8;
        }
        pppplVar19 = *param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        ppppppplVar46 = (long *******)*pppplVar19;
        param_3 = (long *******)(ulong)*(uint *)(pppplVar19 + 0xc);
        param_4 = (long *******)0x0;
        FUN_108d8bcb0();
        break;
      case 0x78:
      case 0x79:
        ppppppplVar48 = (long *******)(param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7);
        if (((ulong)ppppppplVar48[1] & 0x2460) != 0) {
          func_0x000108d82720(ppppppplVar48);
          bVar23 = *(byte *)pppppplVar56;
        }
        *(undefined2 *)(ppppppplVar48 + 1) = 4;
        uStack_190 = (long *******)((ulong)uStack_190 & 0xffffffff00000000);
        uVar24 = 1;
        if (bVar23 != 0x79) {
          uVar24 = 2;
        }
        param_4 = (long *******)(ulong)uVar24;
        ppppppplVar46 =
             (long *******)ppppppplVar22[4][(long)*(int *)((long)pppppplVar56 + 4) * 4 + 1];
        param_3 = (long *******)&uStack_190;
        FUN_108d89eb0();
        ppppppplVar45 = (long *******)(long)(int)(uint)uStack_190;
code_r0x000108d84258:
        *ppppppplVar48 = (long ******)ppppppplVar45;
        break;
      case 0x7a:
        uStack_180 = (long *******)
                     CONCAT44(uStack_180._4_4_,*(undefined4 *)((long)pppppplVar56 + 4));
        param_3 = ppppppplVar22;
        uStack_190 = ppppppplVar22;
        uStack_188 = ppppppplVar21;
        FUN_108d6a8e0(ppppppplVar22,&UNK_10f518245);
        if (param_3 == (long *******)0x0) {
          FUN_108d61aa4(ppppppplVar22);
          goto LAB_108d83ae4;
        }
        *(undefined1 *)((long)ppppppplVar22 + 0xa1) = 1;
        uStack_180 = (long *******)((ulong)uStack_180 & 0xffffffff);
        param_4 = (long *******)0x108d8bd7c;
        ppppppplVar46 = ppppppplVar22;
        FUN_108d61210(ppppppplVar22,param_3,0x108d8bd7c,&uStack_190,0);
        uVar24 = uStack_180._4_4_;
        if ((uint)ppppppplVar46 != 0) {
          uVar24 = (uint)ppppppplVar46;
        }
        func_0x000108d60660(ppppppplVar22);
        *(undefined1 *)((long)ppppppplVar22 + 0xa1) = 0;
        ppppppplVar46 = (long *******)(ulong)uVar24;
        if ((uVar24 != 0) && (FUN_108d61aa4(ppppppplVar22), uVar24 == 7)) goto LAB_108d83ae4;
        break;
      case 0x7b:
        param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
        ppppppplVar46 = ppppppplVar22;
        func_0x000108d8bf64();
        break;
      case 0x7c:
        param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
        param_4 = (long *******)pppppplVar56[2];
        func_0x000108d8c048(ppppppplVar22);
        goto code_r0x000108d874f8;
      case 0x7d:
        param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
        param_4 = (long *******)pppppplVar56[2];
        func_0x000108d8c09c(ppppppplVar22);
        goto code_r0x000108d874f8;
      case 0x7e:
        param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
        param_4 = (long *******)pppppplVar56[2];
        func_0x000108d8c12c(ppppppplVar22);
        goto code_r0x000108d874f8;
      case 0x7f:
        iVar14 = *(int *)(pppppplVar56 + 1);
        param_4 = (long *******)(long)iVar14;
        param_3 = ppppppplVar22;
        FUN_108d6a6fc(ppppppplVar22,(long)param_4 * 4 + 4);
        if (param_3 == (long *******)0x0) goto LAB_108d83ae4;
        iVar33 = *(int *)((long)pppppplVar56 + 0xc);
        ppppppplVar39 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        ppppppplVar48 = ppppppplVar39;
        ppppppplVar45 = param_3;
        ppppppplVar46 = param_4;
        if (iVar14 < 1) {
          ppppppplVar47 = (long *******)0x0;
        }
        else {
          do {
            iVar14 = (int)ppppppplVar48;
            func_0x000108d6797c();
            *(int *)ppppppplVar45 = iVar14;
            ppppppplVar46 = (long *******)((long)ppppppplVar46 + -1);
            ppppppplVar47 = param_4;
            ppppppplVar48 = ppppppplVar48 + 7;
            ppppppplVar45 = (long *******)((long)ppppppplVar45 + 4);
          } while (ppppppplVar46 != (long *******)0x0);
        }
        *(int *)((long)param_3 + (long)ppppppplVar47 * 4) = 0;
        ppppppplVar48 = ppppppplStack_1e8 + (long)iVar33 * 7;
        ppppppplVar46 =
             (long *******)ppppppplVar22[4][(ulong)*(byte *)((long)pppppplVar56 + 3) * 4 + 1];
        FUN_108d8c1dc(ppppppplVar46,param_3,param_4,*(int *)ppppppplVar48,&uStack_190);
        func_0x000108d60660(ppppppplVar22);
        *ppppppplVar48 = (long ******)((long)*ppppppplVar48 - (long)(int)(uint)uStack_190);
        if (((ulong)ppppppplVar39[1] & 0x2460) == 0) {
          *(undefined2 *)(ppppppplVar39 + 1) = 1;
        }
        else {
          func_0x000108d82720(ppppppplVar39);
        }
        if ((uint)uStack_190 != 0) {
          if (ppppppplVar46 == (long *******)0x0) goto LAB_108d83ae4;
          param_4 = (long *******)0xffffffff;
          FUN_108d67c04(ppppppplVar39,ppppppplVar46,0xffffffff,1,0x108d5e198);
          param_3 = ppppppplVar46;
        }
        if (((*(ushort *)(ppppppplVar39 + 1) >> 1 & 1) != 0) &&
           (uVar29 != *(byte *)((long)ppppppplVar39 + 10))) {
          param_3 = (long *******)(ulong)uVar29;
          FUN_108d833e4(ppppppplVar39);
        }
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x80:
        iVar14 = *(int *)(pppppplVar56 + 1);
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        if (((*(ushort *)(ppppppplVar46 + 1) >> 5 & 1) != 0) ||
           (FUN_108d8c5f4(ppppppplVar46), (*(ushort *)(ppppppplVar46 + 1) >> 5 & 1) != 0)) {
          param_3 = (long *******)ppppppplStack_1e8[(long)iVar14 * 7];
          func_0x000108d8c6d8(*ppppppplVar46);
          goto code_r0x000108d874f8;
        }
        goto LAB_108d83ae4;
      case 0x81:
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        uVar31 = *(ushort *)(ppppppplVar46 + 1);
        if ((uVar31 >> 5 & 1) == 0) {
code_r0x000108d87c34:
          if ((uVar31 & 0x2460) == 0) {
            *(undefined2 *)(ppppppplVar46 + 1) = 1;
          }
          else {
            func_0x000108d82720(ppppppplVar46);
          }
          ppppppplVar46 = (long *******)0x0;
          goto code_r0x000108d87c58;
        }
        iVar14 = (int)*ppppppplVar46;
        param_3 = (long *******)&uStack_190;
        func_0x000108d8c738();
        if (iVar14 == 0) {
          uVar31 = *(ushort *)(ppppppplVar46 + 1);
          goto code_r0x000108d87c34;
        }
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        param_3 = uStack_190;
        if (((ulong)ppppppplVar46[1] & 0x2460) == 0) {
          *ppppppplVar46 = (long ******)uStack_190;
          *(undefined2 *)(ppppppplVar46 + 1) = 4;
        }
        else {
          FUN_108d839c8();
        }
        ppppppplVar46 = (long *******)0x0;
        goto code_r0x000108d87c6c;
      case 0x82:
        ppppppplVar46 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        iVar14 = *(int *)((long)pppppplVar56 + 0xc);
        uVar24 = *(uint *)(pppppplVar56 + 2);
        param_3 = (long *******)(ulong)uVar24;
        if (((*(ushort *)(ppppppplVar46 + 1) >> 5 & 1) == 0) &&
           (FUN_108d8c5f4(ppppppplVar46), (*(ushort *)(ppppppplVar46 + 1) >> 5 & 1) == 0))
        goto LAB_108d83ae4;
        if (uVar24 != 0) {
          iVar33 = (int)*ppppppplVar46;
          param_4 = (long *******)ppppppplStack_1e8[(long)iVar14 * 7];
          FUN_108d8c7a8();
          if (iVar33 != 0) {
            ppppppplVar46 = (long *******)0x0;
            goto code_r0x000108d87aec;
          }
          if ((int)uVar24 < 0) goto code_r0x000108d87b74;
        }
        param_3 = (long *******)ppppppplStack_1e8[(long)iVar14 * 7];
        func_0x000108d8c6d8(*ppppppplVar46);
code_r0x000108d87b74:
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x83:
        ppppplVar16 = pppppplVar56[2];
        if ((*(byte *)((long)pppppplVar56 + 3) != 0) &&
           (pppppplVar43 = param_2[0x1e], pppppplVar43 != (long ******)0x0)) {
          do {
            if (pppppplVar43[7] == (long *****)ppppplVar16[3]) goto LAB_108d88868;
            pppppplVar43 = (long ******)pppppplVar43[1];
          } while (pppppplVar43 != (long ******)0x0);
        }
        if (*(int *)(ppppppplVar22 + 0x12) <= *(int *)(param_2 + 0x20)) {
          uVar31 = 0x8285;
          goto code_r0x000108d88f70;
        }
        ppppppplStack_1e8 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        if ((*(ushort *)(ppppppplStack_1e8 + 1) >> 6 & 1) == 0) {
          uVar44 = (long)*(int *)(ppppplVar16 + 2) + (long)*(int *)((long)ppppplVar16 + 0xc);
          iVar14 = (int)uVar44;
          ppppppplVar46 = ppppppplVar22;
          FUN_108d68fc8(ppppppplVar22,
                        (long)(*(int *)((long)ppppplVar16 + 0x14) + *(int *)(ppppplVar16 + 2) * 8 +
                               iVar14 * 0x38 + 0x70));
          if (ppppppplVar46 == (long *******)0x0) goto LAB_108d83ae4;
          if ((((ulong)ppppppplStack_1e8[1] & 0x2460) != 0) ||
             (*(int *)(ppppppplStack_1e8 + 4) != 0)) {
            func_0x000108d826d0(ppppppplStack_1e8);
          }
          *(undefined2 *)(ppppppplStack_1e8 + 1) = 0x40;
          *ppppppplStack_1e8 = (long ******)ppppppplVar46;
          *ppppppplVar46 = (long ******)param_2;
          *(int *)((long)ppppppplVar46 + 0x5c) = iVar14;
          uVar24 = *(uint *)(ppppplVar16 + 2);
          *(uint *)(ppppppplVar46 + 0xc) = uVar24;
          *(int *)((long)ppppppplVar46 + 0x4c) =
               (int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) * -0x55555555;
          ppppppplVar46[4] = param_2[2];
          ppppppplVar46[6] = param_2[0xc];
          *(int *)(ppppppplVar46 + 9) = *(int *)(param_2 + 8);
          ppppppplVar46[2] = param_2[1];
          param_1 = (long *******)NEON_rev64(param_2[7],4);
          ppppppplVar46[10] = (long ******)param_1;
          ppppppplVar46[7] = (long ******)ppppplVar16[3];
          ppppppplVar46[5] = param_2[0x23];
          *(int *)(ppppppplVar46 + 0xb) = *(int *)(param_2 + 0x22);
          if (iVar14 != 0) {
            lVar35 = uVar44 * 0x38;
            ppppppplVar48 = ppppppplVar46 + 0x13;
            do {
              *(undefined2 *)(ppppppplVar48 + -4) = 0x80;
              *ppppppplVar48 = (long ******)ppppppplVar22;
              lVar35 = lVar35 + -0x38;
              ppppppplVar48 = ppppppplVar48 + 7;
            } while (lVar35 != 0);
          }
        }
        else {
          ppppppplVar46 = (long *******)*ppppppplStack_1e8;
          uVar44 = (ulong)*(uint *)((long)ppppppplVar46 + 0x5c);
          uVar24 = (uint)*(ushort *)(ppppppplVar46 + 0xc);
        }
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        ppppppplVar46[1] = param_2[0x1e];
        ppppppplVar46[8] = (long ******)ppppppplStack_1f0;
        *(int *)((long)ppppppplVar46 + 100) = *(int *)(param_2 + 0x12);
        *(int *)(ppppppplVar46 + 0xd) = *(int *)(*param_2 + 0xc);
        *(int *)(param_2 + 0x12) = 0;
        param_2[0x1e] = (long ******)ppppppplVar46;
        ppppppplStack_1e8 = ppppppplVar46 + 7;
        param_2[2] = (long ******)ppppppplStack_1e8;
        *(int *)(param_2 + 7) = (int)uVar44;
        *(uint *)(param_2 + 8) = uVar24 & 0xffff;
        param_2[0xc] = (long ******)(ppppppplStack_1e8 + (long)(int)uVar44 * 7 + 7);
        pppppplVar49 = (long ******)*ppppplVar16;
        param_2[1] = pppppplVar49;
        *(int *)((long)param_2 + 0x3c) = *(int *)(ppppplVar16 + 1);
        param_2[0x23] =
             (long ******)(ppppppplStack_1e8 + (long)(int)uVar44 * 7 + 7 + (uVar24 & 0xffff));
        ppppppplVar48 = (long *******)(long)*(int *)((long)ppppplVar16 + 0x14);
        *(int *)(param_2 + 0x22) = *(int *)((long)ppppplVar16 + 0x14);
        pppppplVar56 = pppppplVar49 + -3;
        _bzero();
        goto LAB_108d88868;
      case 0x84:
        ppppppplVar46 = (long *******)(param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7);
        if (((ulong)ppppppplVar46[1] & 0x2460) != 0) {
          func_0x000108d82720(ppppppplVar46);
        }
        *(undefined2 *)(ppppppplVar46 + 1) = 4;
        pppppplVar43 = param_2[0x1e];
        param_3 = (long *******)
                  (pppppplVar43[4] +
                  (long)(*(int *)((long)pppppplVar43[2] +
                                 (long)*(int *)((long)pppppplVar43 + 0x4c) * 0x18 + 4) +
                        *(int *)((long)pppppplVar56 + 4)) * 7);
code_r0x000108d859d4:
        param_4 = (long *******)0x1000;
code_r0x000108d85e90:
        FUN_108d89204(ppppppplVar46);
        goto code_r0x000108d874f8;
      case 0x85:
        pppppplVar43 = param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)pppppplVar43[1] & 0x2460) != 0) {
          func_0x000108d82720(pppppplVar43);
        }
        *(undefined2 *)(pppppplVar43 + 1) = 8;
        param_1 = (long *******)*pppppplVar56[2];
        *pppppplVar43 = (long *****)param_1;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x86:
        if ((*(byte *)((long)ppppppplVar22 + 0x2f) & 1) == 0) {
          ppppppplVar46 = (long *******)0x0;
          if (*(int *)((long)pppppplVar56 + 4) == 0) {
            param_2[0x19] = (long ******)((long)param_2[0x19] + (long)*(int *)(pppppplVar56 + 1));
          }
          else {
            *ppppppplVar1 = (long ******)((long)*ppppppplVar1 + (long)*(int *)(pppppplVar56 + 1));
          }
        }
        else {
          ppppppplVar22[100] =
               (long ******)((long)ppppppplVar22[100] + (long)*(int *)(pppppplVar56 + 1));
          ppppppplVar46 = (long *******)0x0;
        }
        break;
      case 0x87:
        if (*(int *)((long)pppppplVar56 + 4) == 0) {
          pppppplVar43 = param_2[0x19];
        }
        else {
          pppppplVar43 = *ppppppplVar1;
        }
        if (pppppplVar43 == (long ******)0x0) {
          pppppplVar43 = ppppppplVar22[100];
          goto joined_r0x000108d85a54;
        }
        goto LAB_108d88868;
      case 0x88:
        pppppplVar43 = param_2[0x1e];
        ppppppplVar46 = ppppppplStack_1e8;
        if (param_2[0x1e] != (long ******)0x0) {
          do {
            pppppplVar38 = pppppplVar43;
            pppppplVar43 = (long ******)pppppplVar38[1];
          } while (pppppplVar43 != (long ******)0x0);
          ppppppplVar46 = (long *******)pppppplVar38[4];
        }
        ppppppplVar46 = ppppppplVar46 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        ppppppplVar48 = ppppppplVar46;
        func_0x000108d6797c();
        *ppppppplVar46 = (long ******)ppppppplVar48;
        *(ushort *)(ppppppplVar46 + 1) = *(ushort *)(ppppppplVar46 + 1) & 0xbe00 | 4;
        ppppppplVar45 = ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7;
        ppppppplVar48 = ppppppplVar45;
        func_0x000108d6797c();
        *ppppppplVar45 = (long ******)ppppppplVar48;
        *(ushort *)(ppppppplVar45 + 1) = *(ushort *)(ppppppplVar45 + 1) & 0xbe00 | 4;
        if ((long)*ppppppplVar46 < (long)ppppppplVar48) {
          *ppppppplVar46 = (long ******)ppppppplVar48;
        }
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x89:
        ppppppplVar46 = (long *******)0x0;
        if (0 < (long)ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 4) * 7])
        goto code_r0x000108d87aec;
        break;
      case 0x8a:
        ppppppplVar46 = (long *******)0x0;
        pppppplVar43 = (long ******)
                       ((long)ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 4) * 7] +
                       (long)*(int *)((long)pppppplVar56 + 0xc));
        ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 4) * 7] = pppppplVar43;
        if ((long)pppppplVar43 < 0) goto code_r0x000108d87aec;
        break;
      case 0x8b:
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        if (*ppppppplVar48 != (long ******)0x0) {
          pppppplVar43 = (long ******)
                         ((long)*ppppppplVar48 + (long)*(int *)((long)pppppplVar56 + 0xc));
          goto code_r0x000108d856a4;
        }
code_r0x000108d874f8:
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x8c:
        pppppplVar43 = (long ******)
                       ((long)ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 4) * 7] + -1);
        ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 4) * 7] = pppppplVar43;
joined_r0x000108d85a54:
        ppppppplVar46 = (long *******)0x0;
        if (pppppplVar43 == (long ******)0x0) goto code_r0x000108d87aec;
        break;
      case 0x8d:
        pppppplVar43 = ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 4) * 7];
        ppppppplStack_1e8[(long)*(int *)((long)pppppplVar56 + 4) * 7] =
             (long ******)((long)pppppplVar43 + 1);
code_r0x000108d86664:
        ppppppplVar46 = (long *******)0x0;
        if (pppppplVar43 != (long ******)0x0) break;
        goto code_r0x000108d87aec;
      case 0x8e:
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        param_3 = (long *******)pppppplVar56[2];
        ppppppplVar46 = ppppppplVar48;
        func_0x000108d82798();
        if ((int)ppppppplVar46 != 0) {
          func_0x000108d67a18(ppppppplVar48,1);
          param_4 = (long *******)&UNK_10f517517;
          param_3 = ppppppplVar22;
          func_0x000108d7163c(ppppppplVar21);
        }
        uVar24 = (uint)*(ushort *)(ppppppplVar48 + 1);
        if (((*(ushort *)(ppppppplVar48 + 1) >> 1 & 1) != 0) &&
           (uVar29 != *(byte *)((long)ppppppplVar48 + 10))) {
          param_3 = (long *******)(ulong)uVar29;
          FUN_108d833e4(ppppppplVar48);
          uVar24 = (uint)*(ushort *)(ppppppplVar48 + 1);
        }
joined_r0x000108d875d4:
        if ((uVar24 & 0x12) != 0) {
          iVar14 = *(int *)((long)ppppppplVar48 + 0xc);
          if ((uVar24 >> 0xe & 1) != 0) {
            iVar14 = *(int *)ppppppplVar48 + iVar14;
          }
          if (*(int *)(ppppppplVar48[5] + 0xd) < iVar14) goto code_r0x000108d88dfc;
        }
        break;
      case 0x8f:
        ppppppplVar46 =
             (long *******)ppppppplVar22[4][(long)*(int *)((long)pppppplVar56 + 4) * 4 + 1];
        FUN_108d8cec4();
        if ((int)ppppppplVar46 == 0x65) goto code_r0x000108d8501c;
        break;
      case 0x90:
        if (*(int *)((long)pppppplVar56 + 4) == 0) {
          for (pppppplVar43 = ppppppplVar22[1]; pppppplVar43 != (long ******)0x0;
              pppppplVar43 = (long ******)pppppplVar43[0xb]) {
            *(ushort *)((long)pppppplVar43 + 0x8c) = *(ushort *)((long)pppppplVar43 + 0x8c) | 8;
          }
          goto LAB_108d88868;
        }
        *(ushort *)((long)param_2 + 0x8c) = *(ushort *)((long)param_2 + 0x8c) | 8;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x91:
        param_4 = (long *******)(ulong)*(byte *)((long)pppppplVar56 + 0xc);
        if ((*(byte *)((long)pppppplVar56 + 0xc) == 0) &&
           ((*(byte *)((long)ppppppplVar22 + 0x2d) >> 6 & 1) != 0)) goto code_r0x000108d874f8;
        param_3 = (long *******)(ulong)*(uint *)(pppppplVar56 + 1);
        ppppppplVar46 =
             (long *******)ppppppplVar22[4][(long)*(int *)((long)pppppplVar56 + 4) * 4 + 1];
        func_0x000108d8d028();
        if (((uint)ppppppplVar46 & 0xff) == 6) {
          uVar31 = 0x82e5;
          func_0x000108d7163c(ppppppplVar21,ppppppplVar22);
          goto LAB_108d83b54;
        }
        break;
      case 0x92:
        ppppppplVar48 = (long *******)pppppplVar56[2];
        ppppppplVar46 = ppppppplVar22;
        param_3 = ppppppplVar48;
        func_0x000108d8d138();
        if (ppppppplVar48 != (long *******)0x0) {
          param_3 = (long *******)ppppppplVar48[2];
          FUN_108d824cc(param_2);
        }
        break;
      case 0x93:
        param_1 = (long *******)0x0;
        ppppppplStack_178 = (long *******)0x0;
        uStack_180 = (long *******)0x0;
        uStack_170 = 0;
        uStack_188 = (long *******)0x0;
        uStack_190 = (long *******)0x0;
        uStack_160 = 0;
        ppppppplVar46 = (long *******)&uStack_190;
        uStack_168 = ppppppplVar22;
        FUN_108d67fe4(ppppppplVar46,ppppppplStack_1e8 + (long)*(int *)(pppppplVar56 + 1) * 7);
        ppppppplVar48 = (long *******)&uStack_190;
        param_3 = (long *******)0x1;
        FUN_108d67a14();
        if (ppppppplVar48 != (long *******)0x0) {
          param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
          ppppppplVar46 = ppppppplVar22;
          func_0x000108d8d1f4();
          param_4 = ppppppplVar48;
        }
        if (((ulong)uStack_188 & 0x2460) != 0 || (int)uStack_170 != 0) goto code_r0x000108d87dc0;
        break;
      case 0x94:
        *(int *)((long)ppppppplVar22 + 0xb4) = *(int *)((long)ppppppplVar22 + 0xb4) + 1;
        param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
        param_4 = (long *******)pppppplVar56[2];
        ppppppplVar46 = ppppppplVar22;
        func_0x000108d8d308();
        *(int *)((long)ppppppplVar22 + 0xb4) = *(int *)((long)ppppppplVar22 + 0xb4) + -1;
        break;
      case 0x95:
        uStack_190 = (long *******)0x0;
        ppppppplVar48 = (long *******)pppppplVar56[2][2];
        if ((ppppppplVar48 == (long *******)0x0) ||
           (pppppplVar43 = *ppppppplVar48, pppppplVar43 == (long ******)0x0)) {
          ppppppplVar46 = (long *******)0x6;
        }
        else {
          ppppppplVar46 = ppppppplVar48;
          (*(code *)pppppplVar43[6])(ppppppplVar48,&uStack_190);
          param_3 = ppppppplVar48;
          FUN_108d824cc(param_2);
          if ((int)ppppppplVar46 == 0) {
            *uStack_190 = (long ******)ppppppplVar48;
            param_3 = (long *******)(ulong)*(uint *)((long)pppppplVar56 + 4);
            param_4 = (long *******)0x0;
            ppppppplVar46 = param_2;
            FUN_108d89c70();
            if (ppppppplVar46 == (long *******)0x0) {
              (*(code *)pppppplVar43[7])(uStack_190);
              goto LAB_108d83ae4;
            }
            ppppppplVar46[6] = (long ******)uStack_190;
            *(int *)(ppppppplVar48 + 1) = *(int *)(ppppppplVar48 + 1) + 1;
            ppppppplVar46 = (long *******)0x0;
          }
        }
        break;
      case 0x96:
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 0xc) * 7;
        if (*(char *)((long)param_2[0xc][*(int *)((long)pppppplVar56 + 4)] + 0x25) == '\0') {
          pppplVar19 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)][6];
          param_3 = (long *******)*pppplVar19;
          pppppplVar43 = *param_3;
          param_1 = (long *******)0x0;
          uStack_180 = (long *******)0x0;
          uStack_188 = (long *******)0x0;
          uStack_170 = 0;
          ppppppplStack_178 = (long *******)0x0;
          uStack_168 = (long *******)0x0;
          *(ushort *)(ppppppplVar48 + 1) = *(ushort *)(ppppppplVar48 + 1) & 0xbe00 | 1;
          param_4 = (long *******)(ulong)*(uint *)(pppppplVar56 + 1);
          uStack_190 = ppppppplVar48;
          (*(code *)pppppplVar43[0xb])(pppplVar19,&uStack_190);
          FUN_108d824cc(param_2);
          uVar24 = (uint)pppplVar19;
          if (uStack_170._4_4_ != 0) {
            uVar24 = uStack_170._4_4_;
          }
          ppppppplVar46 = (long *******)(ulong)uVar24;
          uVar24 = (uint)*(ushort *)(ppppppplVar48 + 1);
          if (((*(ushort *)(ppppppplVar48 + 1) >> 1 & 1) != 0) &&
             (uVar29 != *(byte *)((long)ppppppplVar48 + 10))) {
            param_3 = (long *******)(ulong)uVar29;
            FUN_108d833e4(ppppppplVar48);
            uVar24 = (uint)*(ushort *)(ppppppplVar48 + 1);
          }
          goto joined_r0x000108d875d4;
        }
        if (((ulong)ppppppplVar48[1] & 0x2460) == 0) {
          *(undefined2 *)(ppppppplVar48 + 1) = 1;
        }
        else {
          func_0x000108d82720(ppppppplVar48);
        }
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x97:
        ppppplVar16 = param_2[0xc][*(int *)((long)pppppplVar56 + 4)];
        if (*(char *)((long)ppppplVar16 + 0x25) != '\0') goto code_r0x000108d874f8;
        ppppppplVar46 = (long *******)ppppplVar16[6];
        param_3 = (long *******)*ppppppplVar46;
        pppppplVar43 = *param_3;
        (*(code *)pppppplVar43[9])();
        FUN_108d824cc(param_2);
        if ((int)ppppppplVar46 == 0) {
          iVar14 = (int)ppppplVar16[6];
          (*(code *)pppppplVar43[10])();
          if (iVar14 != 0) goto code_r0x000108d87c6c;
        }
code_r0x000108d87c58:
        pppppplVar56 = pppppplVar49 + (long)*(int *)(pppppplVar56 + 1) * 3 + -3;
code_r0x000108d87c6c:
        if (*(int *)(ppppppplVar22 + 0x29) != 0) goto code_r0x000108d83b2c;
        if ((ppppppplVar22[0x32] != (long ******)0x0) && (uVar50 <= uVar52)) {
          uVar50 = *(uint *)(ppppppplVar22 + 0x34);
          iVar14 = (int)ppppppplVar22[0x33];
          (*(code *)ppppppplVar22[0x32])();
          uVar31 = (ushort)param_4;
          if (iVar14 != 0) {
code_r0x000108d88da4:
            ppppppplVar46 = (long *******)0x9;
            goto LAB_108d83b54;
          }
          uVar24 = 0;
          if (uVar50 != 0) {
            uVar24 = uVar52 / uVar50;
          }
          uVar50 = uVar50 + uVar24 * uVar50;
        }
        break;
      case 0x98:
        param_3 = (long *******)pppppplVar56[2][2];
        ppppppplVar48 = ppppppplStack_1e8 + (long)*(int *)((long)pppppplVar56 + 4) * 7;
        if (((*(ushort *)(ppppppplVar48 + 1) >> 1 & 1) != 0) &&
           (*(char *)((long)ppppppplVar48 + 10) != '\x01')) {
          ppppppplVar46 = ppppppplVar48;
          FUN_108d833e4(ppppppplVar48,1);
          uVar31 = (ushort)param_4;
          if ((int)ppppppplVar46 != 0) goto LAB_108d83b54;
        }
        ppppppplVar46 = param_3;
        (*(code *)(*param_3)[0x13])(param_3,ppppppplVar48[2]);
        FUN_108d824cc(param_2);
        *(ushort *)((long)param_2 + 0x8c) = *(ushort *)((long)param_2 + 0x8c) & 0xfff7;
        break;
      case 0x99:
        ppppppplVar48 = (long *******)(param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7);
        if (((ulong)ppppppplVar48[1] & 0x2460) != 0) {
          func_0x000108d82720(ppppppplVar48);
        }
        ppppppplVar46 = (long *******)0x0;
        *(undefined2 *)(ppppppplVar48 + 1) = 4;
        ppppppplVar45 =
             (long *******)
             (ulong)*(uint *)(ppppppplVar22[4][(long)*(int *)((long)pppppplVar56 + 4) * 4 + 1][1] +
                             8);
code_r0x000108d8680c:
        *ppppppplVar48 = (long ******)ppppppplVar45;
        break;
      case 0x9a:
        pppppplVar43 = param_2[2] + (long)*(int *)(pppppplVar56 + 1) * 7;
        if (((ulong)pppppplVar43[1] & 0x2460) != 0) {
          func_0x000108d82720(pppppplVar43);
        }
        *(undefined2 *)(pppppplVar43 + 1) = 4;
        ppppplVar16 = ppppppplVar22[4][(long)*(int *)((long)pppppplVar56 + 4) * 4 + 1];
        uVar24 = *(uint *)((long)pppppplVar56 + 0xc);
        if (uVar24 == 0) {
          param_3 = (long *******)0x0;
        }
        else {
          uVar28 = *(uint *)(ppppplVar16[1] + 8);
          if (*(uint *)(ppppplVar16[1] + 8) <= uVar24) {
            uVar28 = uVar24;
          }
          param_3 = (long *******)(ulong)uVar28;
        }
        FUN_108d8d3dc();
        *pppppplVar43 = (long *****)(long)(int)ppppplVar16;
        ppppppplVar46 = (long *******)0x0;
        break;
      case 0x9b:
        if (((ppppppplVar22[0x19] != (long ******)0x0) &&
            ((*(ushort *)((long)param_2 + 0x8c) >> 9 & 1) == 0)) &&
           ((pppppplVar56[2] != (long *****)0x0 ||
            (param_3 = (long *******)0x0, param_2[0x1c] != (long ******)0x0)))) {
          param_3 = param_2;
          FUN_108d8d460();
          (*(code *)ppppppplVar22[0x19])(ppppppplVar22[0x1a],param_3);
          func_0x000108d60660(ppppppplVar22);
        }
code_r0x000108d85fb0:
        ppppppplVar46 = (long *******)0x0;
        uVar24 = *(uint *)(pppppplVar56 + 1);
joined_r0x000108d86d14:
        if (uVar24 != 0) {
code_r0x000108d87aec:
          iVar14 = *(int *)(pppppplVar56 + 1);
code_r0x000108d87af0:
          pppppplVar56 = pppppplVar49 + (long)iVar14 * 3 + -3;
        }
      }
LAB_108d88a44:
      uVar31 = (ushort)param_4;
      pppppplVar56 = pppppplVar56 + 3;
    } while ((int)ppppppplVar46 == 0);
  }
  else {
    uVar52 = 0;
    uStack_1f4 = 0;
code_r0x000108d83b2c:
    ppppppplVar46 = (long *******)0x9;
    *(int *)((long)param_2 + 0x84) = 9;
code_r0x000108d83b4c:
    uVar31 = 0x7517;
    func_0x000108d7163c(param_2 + 9,ppppppplVar22);
  }
  goto LAB_108d83b54;
  while( true ) {
    if ((uVar31 & 0x202) == 2) {
      FUN_108d8393c(ppppppplStack_1e8);
    }
    uVar31 = (ushort)param_4;
    lVar35 = lVar35 + 1;
    ppppppplStack_1e8 = ppppppplStack_1e8 + 7;
    if (*(int *)(pppppplVar56 + 1) <= lVar35) break;
code_r0x000108d8914c:
    uVar31 = *(ushort *)(ppppppplStack_1e8 + 1);
    if ((uVar31 >> 0xc & 1) != 0) {
      ppppppplVar21 = ppppppplStack_1e8;
      func_0x000108d8323c();
      if ((int)ppppppplVar21 != 0) goto LAB_108d83ae4;
      uVar31 = *(ushort *)(ppppppplStack_1e8 + 1);
    }
  }
code_r0x000108d8918c:
  if (*(char *)((long)ppppppplVar22 + 0x51) == '\0') {
    *(int *)(param_2 + 0x10) =
         (int)((ulong)((long)pppppplVar56 - (long)pppppplVar49) >> 3) * -0x55555555 + 1;
    ppppppplVar46 = (long *******)0x64;
    goto code_r0x000108d83bc4;
  }
LAB_108d83ae4:
  *(undefined1 *)((long)ppppppplVar22 + 0x51) = 1;
  uVar31 = 0x7a23;
  func_0x000108d7163c(param_2 + 9,ppppppplVar22);
  ppppppplVar46 = (long *******)0x7;
LAB_108d83b54:
  *(int *)((long)param_2 + 0x84) = (int)ppppppplVar46;
  param_3 = (long *******)&UNK_10f518302;
  FUN_108d64c00(ppppppplVar46);
  FUN_108d80e44(param_2);
  if ((int)ppppppplVar46 == 0xc0a) {
    *(undefined1 *)((long)ppppppplVar22 + 0x51) = 1;
  }
  if ((uStack_1f4 & 0xff) != 0) {
    param_3 = (long *******)(ulong)((uStack_1f4 & 0xff) - 1);
    FUN_108d89c20(ppppppplVar22);
  }
LAB_108d83bc0:
  ppppppplVar46 = (long *******)0x1;
code_r0x000108d83bc4:
  ppppppplVar22[6] = (long ******)ppppppplStack_1f0;
  *(uint *)(param_2 + 0x16) = *(int *)(param_2 + 0x16) + uVar52;
  FUN_108d81658();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    ppppppplVar22 = param_2;
    if (((ulong)param_2[1] & 0x2460) != 0) {
      func_0x000108d82720(param_2);
    }
    pppppplVar56 = param_3[1];
    pppppplVar49 = *param_3;
    param_2[2] = param_3[2];
    param_2[1] = pppppplVar56;
    *param_2 = pppppplVar49;
    if ((*(byte *)((long)param_3 + 9) >> 3 & 1) == 0) {
      *(ushort *)(param_2 + 1) = *(ushort *)(param_2 + 1) & 0xe3ff | uVar31;
    }
    return ppppppplVar22;
  }
  return ppppppplVar46;
}



/* Entry: 108d89204; end: 108d8926f;  */

void FUN_108d89204(undefined8 *param_1,undefined8 *param_2,ushort param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(ushort *)(param_1 + 1) & 0x2460) != 0) {
    func_0x000108d82720(param_1);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  if ((*(byte *)((long)param_2 + 9) >> 3 & 1) == 0) {
    *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xe3ff | param_3;
  }
  return;
}



/* Entry: 108d89270; end: 108d893f7;  */

undefined8 FUN_108d89270(ulong *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (param_2 == -0x8000000000000000) {
    if (-1 < (long)uVar1) {
      return 1;
    }
    uVar1 = uVar1 & 0x7fffffffffffffff;
  }
  else {
    if (param_2 < 1) {
      if (0 < (long)uVar1 && (uVar1 ^ 0x7fffffffffffffff) < (ulong)-param_2) {
        return 1;
      }
    }
    else if (((long)uVar1 < 0) && (1 - param_2 < (long)(-0x7fffffffffffffff - uVar1))) {
      return 1;
    }
    uVar1 = uVar1 - param_2;
  }
  *param_1 = uVar1;
  return 0;
}



/* Entry: 108d893f8; end: 108d895b3;  */

void FUN_108d893f8(double *param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  bool bVar3;
  ushort uVar4;
  double dVar5;
  double dVar6;
  double dStack_50;
  double dStack_48;
  
  if (param_2 < 0x43) {
    if (param_2 != 0x42) {
      return;
    }
    uVar4 = *(ushort *)(param_1 + 1);
    if (((uVar4 >> 1 & 1) == 0) && ((uVar4 & 0xc) != 0)) {
      FUN_108d832dc(param_1,param_3,1);
      uVar4 = *(ushort *)(param_1 + 1);
    }
    uVar4 = uVar4 & 0xfff3;
  }
  else {
    uVar4 = *(ushort *)(param_1 + 1);
    if ((uVar4 >> 2 & 1) != 0) {
      return;
    }
    if ((uVar4 >> 3 & 1) == 0) {
      if ((uVar4 >> 1 & 1) == 0) {
        return;
      }
      uVar2 = *(undefined1 *)((long)param_1 + 10);
      dVar5 = param_1[2];
      uVar1 = *(undefined4 *)((long)param_1 + 0xc);
      dVar6 = dVar5;
      FUN_108d82a1c(dVar5,&dStack_48,uVar1,uVar2);
      if (SUB84(dVar6,0) != 0) {
        func_0x000108d82f50(dVar5,&dStack_50,uVar1,uVar2);
        if (SUB84(dVar5,0) == 0) {
          *param_1 = dStack_50;
          uVar4 = *(ushort *)(param_1 + 1);
        }
        else {
          *param_1 = dStack_48;
          uVar4 = *(ushort *)(param_1 + 1);
          *(ushort *)(param_1 + 1) = uVar4 | 8;
          bVar3 = false;
          if ((ABS(dStack_48) < 9.223372036854776e+18) &&
             (bVar3 = false, !NAN(dStack_48) && !NAN((double)(long)dStack_48))) {
            bVar3 = dStack_48 == (double)(long)dStack_48;
          }
          if (!bVar3 || 0xfffffffffffffffd < (long)dStack_48 + 0x7fffffffffffffffU) {
            return;
          }
          *param_1 = (double)(long)dStack_48;
          uVar4 = uVar4 & 0xbe00;
        }
        *(ushort *)(param_1 + 1) = uVar4 | 4;
      }
      return;
    }
    dVar6 = *param_1;
    bVar3 = false;
    if ((ABS(dVar6) < 9.223372036854776e+18) &&
       (bVar3 = false, !NAN(dVar6) && !NAN((double)(long)dVar6))) {
      bVar3 = dVar6 == (double)(long)dVar6;
    }
    if (!bVar3 || 0xfffffffffffffffd < (long)dVar6 + 0x7fffffffffffffffU) {
      return;
    }
    *param_1 = (double)(long)dVar6;
    uVar4 = uVar4 & 0xbe00 | 4;
  }
  *(ushort *)(param_1 + 1) = uVar4;
  return;
}



/* Entry: 108d895b4; end: 108d896b7;  */

/* WARNING: Removing unreachable block (ram,0x000108d8db14) */
/* WARNING: Removing unreachable block (ram,0x000108d8db18) */

ulong FUN_108d895b4(double *param_1,double *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_b0 [8];
  ushort uStack_a8;
  undefined4 uStack_a4;
  int iStack_90;
  double dStack_88;
  undefined1 auStack_78 [8];
  ushort uStack_70;
  undefined4 uStack_6c;
  int iStack_58;
  double dStack_50;
  
  uVar6 = *(ushort *)(param_1 + 1);
  uVar7 = *(ushort *)(param_2 + 1);
  uVar8 = uVar7 | uVar6;
  if ((uVar8 & 1) != 0) {
    return (ulong)((uVar7 & 1) - (uVar6 & 1));
  }
  if ((uVar8 & 0xc) != 0) {
    if ((uVar6 & 4 & uVar7) != 0) {
      uVar12 = 0xffffffff;
      if ((long)*param_2 <= (long)*param_1) {
        uVar12 = (uint)((long)*param_2 < (long)*param_1);
      }
      return (ulong)uVar12;
    }
    if ((uVar6 >> 3 & 1) == 0) {
      if ((uVar6 & 4) == 0) {
        return 1;
      }
      dVar13 = (double)(long)*param_1;
    }
    else {
      dVar13 = *param_1;
    }
    if ((uVar7 >> 3 & 1) == 0) {
      if ((uVar7 >> 2 & 1) == 0) {
        return 0xffffffff;
      }
      dVar14 = (double)(long)*param_2;
    }
    else {
      dVar14 = *param_2;
    }
    uVar12 = 0xffffffff;
    if (dVar14 <= dVar13) {
      uVar12 = (uint)(dVar14 < dVar13);
    }
    return (ulong)uVar12;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    if ((uVar6 >> 1 & 1) == 0) {
      return 1;
    }
    if ((uVar7 >> 1 & 1) == 0) {
      return 0xffffffff;
    }
    if (param_3 != 0) {
      puVar10 = auStack_b0;
      if (*(char *)((long)param_1 + 10) != *(char *)(param_3 + 8)) {
        dStack_88 = param_1[5];
        uStack_70 = 1;
        iStack_58 = 0;
        uStack_a8 = 1;
        iStack_90 = 0;
        dStack_50 = dStack_88;
        FUN_108d89204(auStack_78,param_1,0x1000);
        FUN_108d89204(auStack_b0,param_2,0x1000);
        puVar9 = auStack_78;
        FUN_108d67a14(puVar9,*(undefined1 *)(param_3 + 8));
        uVar1 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar1 = uStack_6c;
        }
        func_0x000108d67a18(auStack_b0,*(undefined1 *)(param_3 + 8));
        uVar2 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar2 = uStack_a4;
        }
        uVar11 = *(ulong *)(param_3 + 0x10);
        (**(code **)(param_3 + 0x18))(uVar11,uVar1,puVar9,uVar2,puVar10);
        if ((uStack_70 & 0x2460) != 0 || iStack_58 != 0) {
          FUN_108d826d0(auStack_78);
        }
        if ((uStack_a8 & 0x2460) != 0 || iStack_90 != 0) {
          FUN_108d826d0(auStack_b0);
        }
        return uVar11;
      }
      uVar11 = *(ulong *)(param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000108d8da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x18))
                (uVar11,*(undefined4 *)((long)param_1 + 0xc),param_1[2],
                 *(undefined4 *)((long)param_2 + 0xc),param_2[2]);
      return uVar11;
    }
  }
  iVar4 = *(int *)((long)param_1 + 0xc);
  dVar13 = param_1[2];
  iVar5 = *(int *)((long)param_2 + 0xc);
  iVar3 = iVar4;
  if (iVar5 <= iVar4) {
    iVar3 = iVar5;
  }
  _memcmp(dVar13,param_2[2],(long)iVar3);
  uVar12 = iVar4 - iVar5;
  if (SUB84(dVar13,0) != 0) {
    uVar12 = SUB84(dVar13,0);
  }
  return (ulong)uVar12;
}



/* Entry: 108d896b8; end: 108d89733;  */

void FUN_108d896b8(long param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  
  if (*(short *)(param_1 + 0x48) == 0) {
    lVar2 = *(long *)(param_1 + (long)*(short *)(param_1 + 0x70) * 8 + 0xa0);
    puVar1 = (undefined1 *)
             (*(long *)(lVar2 + 0x60) +
             (ulong)*(ushort *)(param_1 + (long)*(short *)(param_1 + 0x70) * 2 + 0x72) * 2);
    FUN_108d7cec4(lVar2,*(long *)(lVar2 + 0x50) +
                        (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(lVar2 + 0x14)),
                  param_1 + 0x30);
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 2;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  return;
}



/* Entry: 108d89734; end: 108d89863;  */

long FUN_108d89734(long param_1,ulong param_2,ulong param_3,int param_4,long param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  
  plVar1 = (long *)(param_1 + 0x38);
  uVar3 = *(int *)(*(long *)(param_1 + (long)*(short *)(param_1 + 0x70) * 8 + 0xa0) + 0x58) -
          (int)*plVar1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (uVar3 <= *(ushort *)(param_1 + 0x44)) {
    uVar2 = uVar3;
  }
  iVar5 = (int)param_3;
  if (uVar2 < (uint)(iVar5 + (int)param_2)) {
    *(undefined2 *)(param_5 + 8) = 1;
    if (*(int *)(param_5 + 0x20) < iVar5 + 2) {
      lVar4 = param_5;
      FUN_108d82884(param_5,iVar5 + 2,0);
      if ((int)lVar4 != 0) {
        return lVar4;
      }
      uVar6 = *(undefined8 *)(param_5 + 0x10);
    }
    else {
      uVar6 = *(undefined8 *)(param_5 + 0x18);
      *(undefined8 *)(param_5 + 0x10) = uVar6;
      *(undefined2 *)(param_5 + 8) = 1;
    }
    if (param_4 == 0) {
      FUN_108d6b39c(param_1,param_2,param_3,uVar6);
    }
    else {
      FUN_108d7d214();
    }
    if ((int)param_1 != 0) {
      if (((*(ushort *)(param_5 + 8) & 0x2460) == 0) && (*(int *)(param_5 + 0x20) == 0)) {
        return param_1;
      }
      FUN_108d826d0(param_5);
      return param_1;
    }
    *(undefined1 *)(*(long *)(param_5 + 0x10) + (param_3 & 0xffffffff)) = 0;
    *(undefined1 *)(*(long *)(param_5 + 0x10) + (ulong)(iVar5 + 1)) = 0;
    uVar7 = 0x210;
  }
  else {
    param_1 = 0;
    *(ulong *)(param_5 + 0x10) = *plVar1 + (param_2 & 0xffffffff);
    uVar7 = 0x1010;
  }
  *(undefined2 *)(param_5 + 8) = uVar7;
  *(int *)(param_5 + 0xc) = iVar5;
  return param_1;
}



/* Entry: 108d89864; end: 108d899ef;  */

uint FUN_108d89864(char *param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  
  if ((int)param_2 < 4) {
    if ((int)param_2 < 2) {
      if (param_2 == 0) {
LAB_108d898c8:
        uVar1 = 0;
        uVar2 = 1;
        goto LAB_108d899b8;
      }
      if (param_2 == 1) {
        *param_3 = (long)*param_1;
        *(undefined2 *)(param_3 + 1) = 4;
        return 1;
      }
    }
    else {
      if (param_2 == 2) {
        *param_3 = (long)CONCAT11(*param_1,param_1[1]);
        *(undefined2 *)(param_3 + 1) = 4;
        return 2;
      }
      if (param_2 == 3) {
        *param_3 = (long)*param_1 << 0x10 | (ulong)(byte)param_1[1] << 8 | (ulong)(byte)param_1[2];
        *(undefined2 *)(param_3 + 1) = 4;
        return 3;
      }
    }
  }
  else {
    if (param_2 < 0xc) {
      uVar1 = 1 << (ulong)(param_2 & 0x1f);
      if ((uVar1 & 0xc0) != 0) {
        FUN_108d8de6c();
        return 8;
      }
      if ((uVar1 & 0x300) != 0) {
        uVar1 = 0;
        *param_3 = (ulong)(param_2 - 8);
        uVar2 = 4;
        goto LAB_108d899b8;
      }
      if ((1 << (ulong)(param_2 & 0x1f) & 0xc00U) != 0) goto LAB_108d898c8;
    }
    if (param_2 == 4) {
      *param_3 = (long)*param_1 << 0x18 | (ulong)(byte)param_1[1] << 0x10 |
                 (ulong)(byte)param_1[2] << 8 | (ulong)(byte)param_1[3];
      *(undefined2 *)(param_3 + 1) = 4;
      return 4;
    }
    if (param_2 == 5) {
      uVar1 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
      *param_3 = CONCAT44((int)CONCAT11(*param_1,param_1[1]),uVar1 >> 0x10 | uVar1 << 0x10);
      *(undefined2 *)(param_3 + 1) = 4;
      return 6;
    }
  }
  param_3[2] = (ulong)param_1;
  uVar1 = param_2 - 0xc >> 1;
  *(uint *)((long)param_3 + 0xc) = uVar1;
  uVar2 = *(undefined2 *)(&UNK_10dfa0a64 + (ulong)(param_2 & 1) * 2);
LAB_108d899b8:
  *(undefined2 *)(param_3 + 1) = uVar2;
  return uVar1;
}



/* Entry: 108d899f0; end: 108d89a2b;  */

ulong FUN_108d899f0(byte *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  byte *pbVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_68;
  byte abStack_23 [11];
  long lStack_18;
  
  bVar3 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_1 = bVar3;
    return 1;
  }
  if (param_2 >> 0xe == 0) {
    *param_1 = (byte)((uint)param_2 >> 7) | 0x80;
    param_1[1] = bVar3 & 0x7f;
    return 2;
  }
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 >> 0x38 == 0) {
    uVar11 = 0;
    do {
      uVar9 = uVar11;
      abStack_23[uVar9 + 1] = (byte)param_2 | 0x80;
      uVar11 = uVar9 + 1;
      bVar1 = 0x7f < param_2;
      param_2 = param_2 >> 7;
    } while (bVar1);
    abStack_23[1] = abStack_23[1] & 0x7f;
    pbVar5 = param_1;
    uVar10 = uVar11;
    do {
      param_1 = pbVar5 + 1;
      *pbVar5 = abStack_23[uVar10];
      uVar9 = uVar9 - 1;
      uVar10 = uVar10 - 1;
      pbVar5 = param_1;
    } while (uVar9 != 0xffffffffffffffff);
  }
  else {
    param_1[8] = bVar3;
    param_2 = param_2 >> 8;
    lVar7 = 7;
    do {
      param_1[lVar7] = (byte)param_2 | 0x80;
      param_2 = param_2 >> 7;
      lVar7 = lVar7 + -1;
    } while (lVar7 != -1);
    uVar11 = 9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return uVar11;
  }
  ___stack_chk_fail();
  if (2 < param_1[0x6d]) {
    if (param_1[0x6d] == 4) {
      return (ulong)*(uint *)(param_1 + 0x68);
    }
    func_0x000108d5e198(*(undefined8 *)(param_1 + 0x58));
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x6d] = 0;
  }
  sVar4 = *(short *)(param_1 + 0x70);
  if (*(short *)(param_1 + 0x70) < 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
LAB_108d8e0c0:
      uVar11 = 0;
    }
    else {
      uVar11 = *(ulong *)(*(long *)param_1 + 8);
      uVar6 = 2;
      if ((param_1[0x6c] & 1) != 0) {
        uVar6 = 0;
      }
      FUN_108d8e264(uVar11,*(int *)(param_1 + 0x60),param_1 + 0xa0,uVar6);
      if ((int)uVar11 == 0) {
        param_1[0x70] = 0;
        param_1[0x71] = 0;
        goto LAB_108d8e004;
      }
    }
    param_1[0x6d] = 0;
  }
  else {
    while (sVar4 != 0) {
      *(short *)(param_1 + 0x70) = sVar4 + -1;
      lVar7 = (long)sVar4;
      sVar4 = sVar4 + -1;
      if (*(long *)(param_1 + lVar7 * 8 + 0xa0) != 0) {
        func_0x000108d787d8(*(undefined8 *)(*(long *)(param_1 + lVar7 * 8 + 0xa0) + 0x68));
        sVar4 = *(short *)(param_1 + 0x70);
      }
    }
LAB_108d8e004:
    pcVar8 = *(char **)(param_1 + 0xa0);
    if ((*pcVar8 != '\0') && ((bool)pcVar8[2] == (*(long *)(param_1 + 0x20) == 0))) {
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      param_1[0x48] = 0;
      param_1[0x49] = 0;
      param_1[0x6c] = param_1[0x6c] & 0xf1;
      if (*(short *)(pcVar8 + 0x12) != 0) {
        param_1[0x6d] = 1;
        return 0;
      }
      if (pcVar8[5] != '\0') goto LAB_108d8e0c0;
      if (*(int *)(pcVar8 + 0x70) == 1) {
        uVar2 = *(uint *)(*(long *)(pcVar8 + 0x50) + (ulong)(byte)pcVar8[6] + 8);
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        param_1[0x6d] = 1;
        lVar7 = (long)*(short *)(param_1 + 0x70);
        if (lVar7 < 0x13) {
          uVar11 = *(ulong *)(param_1 + 8);
          uVar6 = 2;
          if ((param_1[0x6c] & 1) != 0) {
            uVar6 = 0;
          }
          FUN_108d8e264(uVar11,uVar2 >> 0x10 | uVar2 << 0x10,&lStack_68,uVar6);
          if ((int)uVar11 != 0) {
            return uVar11;
          }
          *(long *)(param_1 + (lVar7 + 1) * 8 + 0xa0) = lStack_68;
          (param_1 + (lVar7 + 1) * 2 + 0x72)[0] = 0;
          (param_1 + (lVar7 + 1) * 2 + 0x72)[1] = 0;
          *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 1;
          param_1[0x48] = 0;
          param_1[0x49] = 0;
          param_1[0x6c] = param_1[0x6c] & 0xf9;
          if ((*(short *)(lStack_68 + 0x12) != 0) &&
             (*(char *)(lStack_68 + 2) == *(char *)(*(long *)(param_1 + lVar7 * 8 + 0xa0) + 2))) {
            return 0;
          }
        }
        FUN_108d64c00(0xb,&UNK_10f51799f);
        return 0xb;
      }
    }
    uVar11 = 0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  return uVar11;
}



/* Entry: 108d89a2c; end: 108d89b9b;  */

long * FUN_108d89a2c(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  long lVar11;
  long unaff_x23;
  
  if ((int)param_1[0xc] == 0) {
    plVar10 = (long *)0x0;
    *param_2 = 0;
  }
  else {
    plVar10 = param_1;
    FUN_108d8df84();
    if ((int)plVar10 == 0) {
      lVar11 = 0;
      do {
        sVar3 = (short)param_1[0xe];
        lVar8 = (long)sVar3;
        lVar6 = param_1[lVar8 + 0x14];
        if (*(char *)(lVar6 + 5) == '\0') {
          if (*(char *)(lVar6 + 2) == '\0') {
            lVar11 = lVar11 + (ulong)*(ushort *)(lVar6 + 0x12);
          }
        }
        else {
          lVar11 = lVar11 + (ulong)*(ushort *)(lVar6 + 0x12);
          do {
            if (sVar3 == 0) {
              *param_2 = lVar11;
              if (2 < *(byte *)((long)param_1 + 0x6d)) {
                if (*(byte *)((long)param_1 + 0x6d) == 4) {
                  return (long *)(ulong)*(uint *)(param_1 + 0xd);
                }
                func_0x000108d5e198(param_1[0xb]);
                param_1[0xb] = 0;
                *(undefined1 *)((long)param_1 + 0x6d) = 0;
              }
              sVar3 = (short)param_1[0xe];
              if (-1 < (short)param_1[0xe]) goto joined_r0x000108d8dfcc;
              if ((int)param_1[0xc] == 0) goto LAB_108d8e0c0;
              plVar10 = *(long **)(*param_1 + 8);
              uVar5 = 2;
              if ((*(byte *)((long)param_1 + 0x6c) & 1) != 0) {
                uVar5 = 0;
              }
              FUN_108d8e264(plVar10,(int)param_1[0xc],param_1 + 0x14,uVar5);
              if ((int)plVar10 != 0) goto LAB_108d8e0c4;
              *(undefined2 *)(param_1 + 0xe) = 0;
              goto LAB_108d8e004;
            }
            func_0x000108d8e128(param_1);
            sVar3 = (short)param_1[0xe];
            lVar6 = (long)sVar3;
            uVar2 = *(ushort *)((long)param_1 + lVar6 * 2 + 0x72);
          } while (*(ushort *)(param_1[lVar6 + 0x14] + 0x12) <= uVar2);
          *(ushort *)((long)param_1 + lVar6 * 2 + 0x72) = uVar2 + 1;
          lVar8 = (long)(short)param_1[0xe];
          lVar6 = param_1[lVar8 + 0x14];
        }
        uVar2 = *(ushort *)((long)param_1 + lVar8 * 2 + 0x72);
        if (uVar2 == *(ushort *)(lVar6 + 0x12)) {
          lVar6 = *(long *)(lVar6 + 0x50) + (ulong)*(byte *)(lVar6 + 6);
          uVar4 = (uint)*(byte *)(lVar6 + 8) << 0x18 | (uint)*(byte *)(lVar6 + 9) << 0x10 |
                  (uint)*(byte *)(lVar6 + 10) << 8;
          pbVar9 = (byte *)(lVar6 + 0xb);
        }
        else {
          puVar1 = (undefined1 *)(*(long *)(lVar6 + 0x60) + (ulong)uVar2 * 2);
          pbVar9 = (byte *)(*(long *)(lVar6 + 0x50) +
                           (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(lVar6 + 0x14)));
          uVar4 = (uint)*pbVar9 << 0x18 | (uint)pbVar9[1] << 0x10 | (uint)pbVar9[2] << 8;
          pbVar9 = pbVar9 + 3;
        }
        plVar10 = param_1;
        FUN_108d8e180(param_1,uVar4 | *pbVar9);
      } while ((int)plVar10 == 0);
    }
  }
  return plVar10;
joined_r0x000108d8dfcc:
  while (sVar3 != 0) {
    *(short *)(param_1 + 0xe) = sVar3 + -1;
    lVar11 = (long)sVar3;
    sVar3 = sVar3 + -1;
    if (param_1[lVar11 + 0x14] != 0) {
      func_0x000108d787d8(*(undefined8 *)(param_1[lVar11 + 0x14] + 0x68));
      sVar3 = (short)param_1[0xe];
    }
  }
LAB_108d8e004:
  pcVar7 = (char *)param_1[0x14];
  if ((*pcVar7 != '\0') && ((bool)pcVar7[2] == (param_1[4] == 0))) {
    *(undefined2 *)((long)param_1 + 0x72) = 0;
    *(undefined2 *)(param_1 + 9) = 0;
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xf1;
    if (*(short *)(pcVar7 + 0x12) != 0) {
      *(undefined1 *)((long)param_1 + 0x6d) = 1;
      return (long *)0x0;
    }
    if (pcVar7[5] != '\0') {
LAB_108d8e0c0:
      plVar10 = (long *)0x0;
LAB_108d8e0c4:
      *(undefined1 *)((long)param_1 + 0x6d) = 0;
      return plVar10;
    }
    if (*(int *)(pcVar7 + 0x70) == 1) {
      uVar4 = *(uint *)(*(long *)(pcVar7 + 0x50) + (ulong)(byte)pcVar7[6] + 8);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      *(undefined1 *)((long)param_1 + 0x6d) = 1;
      lVar11 = (long)(short)param_1[0xe];
      if (lVar11 < 0x13) {
        plVar10 = (long *)param_1[1];
        uVar5 = 2;
        if ((*(byte *)((long)param_1 + 0x6c) & 1) != 0) {
          uVar5 = 0;
        }
        FUN_108d8e264(plVar10,uVar4 >> 0x10 | uVar4 << 0x10,&stack0xffffffffffffffc8,uVar5);
        if ((int)plVar10 != 0) {
          return plVar10;
        }
        param_1[lVar11 + 0x15] = unaff_x23;
        *(undefined2 *)((long)param_1 + (lVar11 + 1) * 2 + 0x72) = 0;
        *(short *)(param_1 + 0xe) = (short)param_1[0xe] + 1;
        *(undefined2 *)(param_1 + 9) = 0;
        *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xf9;
        if ((*(short *)(unaff_x23 + 0x12) != 0) &&
           (*(char *)(unaff_x23 + 2) == *(char *)(param_1[lVar11 + 0x14] + 2))) {
          return (long *)0x0;
        }
      }
      FUN_108d64c00(0xb,&UNK_10f51799f);
      return (long *)0xb;
    }
  }
  FUN_108d64c00(0xb,&UNK_10f51799f);
  return (long *)0xb;
}



/* Entry: 108d89b9c; end: 108d89c1f;  */

undefined8 FUN_108d89b9c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
    }
  }
  uVar2 = *puVar3;
  FUN_108d7b9b8(uVar2,param_2);
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_108d7f5fc(param_1);
    }
  }
  return uVar2;
}



/* Entry: 108d89c20; end: 108d89c6f;  */

/* WARNING: Possible PIC construction at 0x000108d89c44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d89c48) */
/* WARNING: Removing unreachable block (ram,0x000108d89c5c) */
/* WARNING: Removing unreachable block (ram,0x000108d89c50) */

void FUN_108d89c20(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)param_2 * 0x20 + 0x18);
  uStack_28 = 0x108d89c48;
  lStack_58 = *(long *)(lVar1 + 0x10);
  uStack_60 = *(undefined8 *)(lVar1 + 8);
  uStack_50 = *(undefined8 *)(lVar1 + 0x18);
  lStack_78 = *(long *)(lVar1 + 0x40);
  uStack_80 = *(undefined8 *)(lVar1 + 0x38);
  uStack_70 = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  uStack_40 = param_2;
  lStack_38 = param_1;
  FUN_108d8e3c8(lVar1 + 0x20);
  for (plVar2 = (long *)lStack_78; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    FUN_108d627fc(0,plVar2[2]);
  }
  FUN_108d8e3c8(&uStack_80);
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  for (plVar2 = (long *)lStack_58; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    FUN_108d62864(0,plVar2[2]);
  }
  FUN_108d8e3c8(&uStack_60);
  FUN_108d8e3c8(lVar1 + 0x50);
  *(undefined8 *)(lVar1 + 0x68) = 0;
  if ((*(ushort *)(lVar1 + 0x72) & 1) != 0) {
    *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
    *(ushort *)(lVar1 + 0x72) = *(ushort *)(lVar1 + 0x72) & 0xfffe;
  }
  return;
}



/* Entry: 108d89c70; end: 108d89d9b;  */

undefined8 * FUN_108d89c70(long param_1,int param_2,ulong param_3,undefined1 param_4,int param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10) + (long)(*(int *)(param_1 + 0x38) - param_2) * 0x38;
  lVar1 = (-(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3) + 0x78;
  iVar4 = 0;
  if (param_5 != 0) {
    iVar4 = 0x140;
  }
  iVar4 = iVar4 + (int)lVar1;
  lVar5 = *(long *)(param_1 + 0x60);
  if (*(long *)(lVar5 + (long)param_2 * 8) != 0) {
    FUN_108d81fb8(param_1);
    lVar5 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(lVar5 + (long)param_2 * 8) = 0;
  }
  if (*(int *)(lVar6 + 0x20) < iVar4) {
    lVar5 = lVar6;
    FUN_108d82884(lVar6,iVar4,0);
    if ((int)lVar5 != 0) {
      return (undefined8 *)0x0;
    }
    puVar3 = *(undefined8 **)(lVar6 + 0x10);
    lVar5 = *(long *)(param_1 + 0x60);
  }
  else {
    puVar3 = *(undefined8 **)(lVar6 + 0x18);
    *(undefined8 **)(lVar6 + 0x10) = puVar3;
    *(ushort *)(lVar6 + 8) = *(ushort *)(lVar6 + 8) & 0xd;
  }
  *(undefined8 **)(lVar5 + (long)param_2 * 8) = puVar3;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[0xe] = 0;
  *(undefined1 *)((long)puVar3 + 0x24) = param_4;
  *(short *)(puVar3 + 4) = (short)param_3;
  puVar3[0xd] = (long)(puVar3 + 0xe) + (long)(int)param_3 * 4;
  if (param_5 != 0) {
    puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x10) + lVar1);
    *puVar3 = puVar2;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
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
  }
  return puVar3;
}



/* Entry: 108d89d9c; end: 108d89eaf;  */

undefined8 FUN_108d89d9c(long param_1,uint param_2,int param_3,long param_4,long *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
    }
  }
  lVar5 = *(long *)(param_1 + 8);
  if (param_3 != 0) {
    if ((*(ushort *)(lVar5 + 0x28) & 1) != 0) {
      uVar4 = 8;
      goto LAB_108d89e70;
    }
    if (*(long *)(lVar5 + 0x88) == 0) {
      puVar2 = (undefined8 *)(ulong)*(uint *)(lVar5 + 0x34);
      func_0x000108d78dcc();
      *(undefined8 **)(lVar5 + 0x88) = puVar2;
      if (puVar2 == (undefined8 *)0x0) {
        uVar4 = 7;
        goto LAB_108d89e70;
      }
      *puVar2 = 0;
      *(long *)(lVar5 + 0x88) = *(long *)(lVar5 + 0x88) + 4;
    }
  }
  if (param_2 == 1) {
    param_2 = (uint)(*(int *)(lVar5 + 0x40) != 0);
  }
  *(uint *)(param_5 + 0xc) = param_2;
  *(undefined2 *)(param_5 + 0xe) = 0xffff;
  param_5[4] = param_4;
  *param_5 = param_1;
  param_5[1] = lVar5;
  *(char *)((long)param_5 + 0x6c) = (char)param_3;
  lVar3 = *(long *)(lVar5 + 0x10);
  param_5[2] = lVar3;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 0x18) = param_5;
  }
  uVar4 = 0;
  *(long **)(lVar5 + 0x10) = param_5;
  *(undefined1 *)((long)param_5 + 0x6d) = 0;
LAB_108d89e70:
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_108d7f5fc(param_1);
    }
  }
  return uVar4;
}



/* Entry: 108d89eb0; end: 108d8a3cf;  */

ulong FUN_108d89eb0(ulong param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined4 uStack_78;
  char cStack_71;
  long lStack_70;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  long lStack_58;
  
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  uVar10 = *(ulong *)(param_1 + 8);
  if (*(char *)(uVar10 + 0x21) == '\0') {
    FUN_108d7fa7c(uVar10,&lStack_58,&uStack_5c,1,0);
    uStack_60 = (uint)uVar10;
    uVar11 = uVar10;
    lVar7 = lStack_58;
    if (uStack_60 != 0) goto LAB_108d8a0ec;
LAB_108d8a060:
    uVar6 = 10;
    if ((param_3 & 1) != 0) {
      uVar6 = 0xd;
    }
    FUN_108d7c870(lVar7,uVar6);
    if (*(long *)(lVar7 + 0x68) != 0) {
      func_0x000108d787d8();
    }
    *param_2 = uStack_5c;
    uVar11 = 0;
    goto LAB_108d8a0ec;
  }
  for (lVar7 = *(long *)(uVar10 + 0x10); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x10)) {
    *(byte *)(lVar7 + 0x6c) = *(byte *)(lVar7 + 0x6c) & 0xfb;
  }
  FUN_108d615f0(param_1,4,&uStack_5c);
  uVar2 = 0;
  if (*(uint *)(uVar10 + 0x34) != 0) {
    uVar2 = uRam0000000113298da4 / *(uint *)(uVar10 + 0x34);
  }
  do {
    uVar5 = uStack_5c;
    uVar1 = uVar5 + 1;
    if (uVar1 < 2) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(uVar10 + 0x38) / 5 + 1;
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = (uVar5 - 1) / uVar9;
      }
      uVar4 = 0;
      if (*(uint *)(uVar10 + 0x34) != 0) {
        uVar4 = uRam0000000113298da4 / *(uint *)(uVar10 + 0x34);
      }
      iVar8 = 2;
      if (uVar3 * uVar9 + 1 == uVar4) {
        iVar8 = 3;
      }
      uVar9 = iVar8 + uVar3 * uVar9;
    }
    uStack_5c = uVar1;
  } while ((uVar1 == uVar9) || (uVar5 == uVar2));
  uVar11 = uVar10;
  FUN_108d7fa7c(uVar10,&lStack_70,&uStack_64,uVar1,1);
  uStack_60 = (uint)uVar11;
  if (uStack_60 != 0) goto LAB_108d8a0ec;
  if (uStack_64 == uVar1) {
    lStack_58 = lStack_70;
    lVar7 = lStack_70;
LAB_108d89fec:
    FUN_108d80634(uVar10,uVar1,1,0,&uStack_60);
    uVar11 = (ulong)uStack_60;
    if (uStack_60 == 0) {
      uVar11 = param_1;
      FUN_108d616a8(param_1,4,uVar1);
      uStack_60 = (uint)uVar11;
      if (uStack_60 == 0) goto LAB_108d8a060;
    }
    if (lVar7 == 0) goto LAB_108d8a0ec;
    uVar10 = *(ulong *)(lVar7 + 0x68);
  }
  else {
    cStack_71 = '\0';
    uStack_78 = 0;
    uVar11 = *(ulong *)(uVar10 + 0x10);
    if (uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      func_0x000108d7ccac(uVar11,0,0);
    }
    if (lStack_70 != 0) {
      func_0x000108d787d8(*(undefined8 *)(lStack_70 + 0x68));
    }
    if (((int)uVar11 != 0) ||
       (uVar11 = uVar10, func_0x000108d7be68(uVar10,uVar1,&lStack_58,0), (int)uVar11 != 0))
    goto LAB_108d8a0ec;
    uVar11 = uVar10;
    func_0x000108d7d730(uVar10,uVar1,&cStack_71,&uStack_78);
    lVar7 = lStack_58;
    if ((byte)(cStack_71 - 1U) < 2) {
      uVar11 = 0xb;
      FUN_108d64c00(0xb,&UNK_10f51799f);
LAB_108d8a184:
      if (lStack_58 == 0) goto LAB_108d8a0ec;
      puVar12 = (ulong *)(lStack_58 + 0x68);
    }
    else {
      if ((int)uVar11 != 0) goto LAB_108d8a184;
      uVar11 = uVar10;
      func_0x000108d80254(uVar10,lStack_58,cStack_71,uStack_78,uStack_64,0);
      if (lVar7 != 0) {
        func_0x000108d787d8(*(undefined8 *)(lVar7 + 0x68));
      }
      if (((int)uVar11 != 0) ||
         (uVar11 = uVar10, func_0x000108d7be68(uVar10,uVar1,&lStack_58,0), lVar7 = lStack_58,
         (int)uVar11 != 0)) goto LAB_108d8a0ec;
      puVar12 = (ulong *)(lStack_58 + 0x68);
      uVar11 = *puVar12;
      FUN_108d5ffdc();
      uStack_60 = (uint)uVar11;
      if (uStack_60 == 0) goto LAB_108d89fec;
    }
    uVar10 = *puVar12;
  }
  func_0x000108d787d8(uVar10);
LAB_108d8a0ec:
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar8 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar8, iVar8 == 0)) {
    FUN_108d7f5fc(param_1);
  }
  return uVar11;
}



/* Entry: 108d8a3d0; end: 108d8a8cf;  */

ulong FUN_108d8a3d0(ulong param_1,long *param_2,long param_3,int param_4,uint *param_5)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lStack_68;
  
  if (((*(char *)(param_1 + 0x6d) == '\x01') && ((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0xa0) + 2) != '\0')) {
    if (*(long *)(param_1 + 0x30) == param_3) {
      *param_5 = 0;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x6c) >> 3 & 1) != 0) && (*(long *)(param_1 + 0x30) < param_3))
    goto LAB_108d8a814;
  }
  if (param_2 == (long *)0x0) {
    pcVar21 = (code *)0x0;
  }
  else {
    lVar11 = *param_2;
    if ((uint)*(ushort *)(lVar11 + 8) + (uint)*(ushort *)(lVar11 + 6) < 0xe) {
      uVar5 = *(ushort *)(param_2[2] + 8);
      bVar6 = **(char **)(lVar11 + 0x18) == '\0';
      param_2[3] = CONCAT44(-(uint)((int)((uint)bVar6 << 0x1f) < 0),
                            -(uint)((int)((uint)bVar6 << 0x1f) < 0)) & 0xfffffffefffffffe ^
                   0xffffffff00000001;
      if ((uVar5 >> 2 & 1) == 0) {
        pcVar21 = FUN_108d8e654;
        if (((uVar5 & 0x19) == 0) && (pcVar21 = FUN_108d8e51c, *(long *)(lVar11 + 0x20) != 0)) {
          pcVar21 = FUN_108d8e654;
        }
      }
      else {
        pcVar21 = FUN_108d8e41c;
      }
    }
    else {
      pcVar21 = FUN_108d8e654;
    }
    *(undefined1 *)((long)param_2 + 0xb) = 0;
  }
  uVar19 = param_1;
  FUN_108d8df84();
  if ((int)uVar19 != 0) {
    return uVar19;
  }
  if (*(char *)(param_1 + 0x6d) != '\0') {
    lVar11 = param_1 + 0x72;
LAB_108d8a528:
    lVar17 = *(long *)(param_1 + 0xa0 + (long)*(short *)(param_1 + 0x70) * 8);
    iVar16 = *(ushort *)(lVar17 + 0x12) - 1;
    uVar14 = iVar16 >> (1U - param_4 & 0x1f);
    *(short *)(lVar11 + (long)*(short *)(param_1 + 0x70) * 2) = (short)uVar14;
    uVar10 = 0;
    if (pcVar21 == (code *)0x0) {
      lVar8 = *(long *)(lVar17 + 0x50);
      uVar5 = *(ushort *)(lVar17 + 0x14);
      lVar18 = *(long *)(lVar17 + 0x60);
      bVar3 = *(byte *)(lVar17 + 7);
      cVar4 = *(char *)(lVar17 + 3);
      do {
        puVar1 = (undefined1 *)(lVar18 + (long)(int)uVar14 * 2);
        pcVar9 = (char *)(lVar8 + (ulong)bVar3 + (ulong)(CONCAT11(*puVar1,puVar1[1]) & uVar5));
        if (cVar4 != '\0') {
          while (pcVar13 = pcVar9 + 1, *pcVar9 < '\0') {
            pcVar9 = pcVar13;
            if (*(char **)(lVar17 + 0x58) <= pcVar13) {
              FUN_108d64c00(0xb,&UNK_10f51799f);
              iVar16 = 1;
              goto LAB_108d8a7fc;
            }
          }
          pcVar9 = pcVar9 + 1;
        }
        FUN_108d7d0a0(pcVar9,&lStack_68);
        uVar15 = uVar14;
        if (lStack_68 < param_3) {
          uVar10 = uVar14 + 1;
          if (iVar16 <= (int)uVar14) goto LAB_108d8a714;
        }
        else {
          if (lStack_68 <= param_3) {
            *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 2;
            *(long *)(param_1 + 0x30) = lStack_68;
            *(short *)(lVar11 + (long)*(short *)(param_1 + 0x70) * 2) = (short)uVar14;
            if (*(char *)(lVar17 + 5) == '\0') goto LAB_108d8a768;
            *param_5 = 0;
            iVar16 = 9;
            goto LAB_108d8a7fc;
          }
          if ((int)uVar14 <= (int)uVar10) {
            uVar7 = 1;
            uVar14 = uVar10;
            goto LAB_108d8a758;
          }
          iVar16 = uVar14 - 1;
        }
        uVar14 = (int)(iVar16 + uVar10) >> 1;
      } while( true );
    }
    do {
      uVar5 = *(ushort *)(*(long *)(lVar17 + 0x60) + (long)(int)uVar14 * 2);
      lVar8 = *(long *)(lVar17 + 0x50) +
              ((ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) &
              (ulong)*(ushort *)(lVar17 + 0x14));
      pbVar2 = (byte *)(lVar8 + (ulong)*(byte *)(lVar17 + 7));
      pbVar12 = pbVar2 + 1;
      bVar3 = *pbVar2;
      uVar7 = (uint)bVar3;
      if (*(byte *)(lVar17 + 8) < bVar3) {
        if ((-1 < (char)*pbVar12) &&
           (uVar7 = (bVar3 & 0x7f) << 7 | (int)(char)*pbVar12, uVar7 <= *(ushort *)(lVar17 + 10))) {
          pbVar12 = pbVar2 + 2;
          goto LAB_108d8a618;
        }
        FUN_108d7cec4(lVar17,lVar8,param_1 + 0x30);
        uVar20 = *(undefined8 *)(param_1 + 0x30);
        lVar8 = (long)(int)uVar20;
        FUN_108d60848();
        if (lVar8 == 0) {
          uVar19 = 7;
          goto LAB_108d8a85c;
        }
        *(short *)(lVar11 + (long)*(short *)(param_1 + 0x70) * 2) = (short)uVar14;
        uVar19 = param_1;
        FUN_108d7d214(param_1,0,uVar20,lVar8,2);
        if ((int)uVar19 != 0) {
          func_0x000108d5e198(lVar8);
          goto LAB_108d8a85c;
        }
        (*pcVar21)(uVar20,lVar8,param_2);
        func_0x000108d5e198(lVar8);
        uVar7 = (uint)uVar20;
        if (-1 < (int)uVar7) goto LAB_108d8a628;
LAB_108d8a604:
        uVar10 = uVar14 + 1;
      }
      else {
LAB_108d8a618:
        (*pcVar21)(uVar7,pbVar12,param_2);
        if ((int)uVar7 < 0) goto LAB_108d8a604;
LAB_108d8a628:
        if (uVar7 == 0) {
          *param_5 = 0;
          *(short *)(lVar11 + (long)*(short *)(param_1 + 0x70) * 2) = (short)uVar14;
          uVar10 = 0;
          if (*(char *)((long)param_2 + 0xb) != '\0') {
            uVar10 = 0xb;
          }
          uVar19 = (ulong)uVar10;
          goto LAB_108d8a85c;
        }
        iVar16 = uVar14 - 1;
      }
      uVar15 = uVar14;
      uVar14 = uVar10;
      if (iVar16 < (int)uVar10) goto LAB_108d8a758;
      uVar14 = iVar16 + uVar10 >> 1;
    } while( true );
  }
LAB_108d8a814:
  *param_5 = 0xffffffff;
  return 0;
LAB_108d8a714:
  uVar7 = 0xffffffff;
  uVar14 = uVar10;
LAB_108d8a758:
  if (*(char *)(lVar17 + 5) != '\0') {
    uVar19 = 0;
    *(short *)(lVar11 + (long)*(short *)(param_1 + 0x70) * 2) = (short)uVar15;
    *param_5 = uVar7;
    goto LAB_108d8a85c;
  }
  lVar8 = *(long *)(lVar17 + 0x50);
LAB_108d8a768:
  if ((int)uVar14 < (int)(uint)*(ushort *)(lVar17 + 0x12)) {
    puVar1 = (undefined1 *)(*(long *)(lVar17 + 0x60) + (long)(int)uVar14 * 2);
    pbVar12 = (byte *)(lVar8 + (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(lVar17 + 0x14)));
    uVar10 = (uint)*pbVar12 << 0x18 | (uint)pbVar12[1] << 0x10 | (uint)pbVar12[2] << 8;
    pbVar12 = pbVar12 + 3;
  }
  else {
    lVar8 = lVar8 + (ulong)*(byte *)(lVar17 + 6);
    uVar10 = (uint)*(byte *)(lVar8 + 8) << 0x18 | (uint)*(byte *)(lVar8 + 9) << 0x10 |
             (uint)*(byte *)(lVar8 + 10) << 8;
    pbVar12 = (byte *)(lVar8 + 0xb);
  }
  bVar3 = *pbVar12;
  *(short *)(lVar11 + (long)*(short *)(param_1 + 0x70) * 2) = (short)uVar14;
  uVar19 = param_1;
  FUN_108d8e180(param_1,uVar10 | bVar3);
  if ((int)uVar19 != 0) goto LAB_108d8a85c;
  iVar16 = 0;
LAB_108d8a7fc:
  if (iVar16 != 0) {
    uVar19 = 0;
    if ((iVar16 != 9) && (iVar16 != 2)) {
      return 0xb;
    }
LAB_108d8a85c:
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf9;
    return uVar19;
  }
  goto LAB_108d8a528;
}



/* Entry: 108d8a8d0; end: 108d8a997;  */

long FUN_108d8a8d0(long param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  while( true ) {
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf9;
    *param_2 = 0;
    if (*(char *)(param_1 + 0x6d) == '\x01') {
      lVar9 = (long)*(short *)(param_1 + 0x70);
      lVar8 = param_1 + 0x72;
      lVar7 = *(long *)(param_1 + lVar9 * 8 + 0xa0);
      uVar1 = *(short *)(lVar8 + lVar9 * 2) + 1;
      *(ushort *)(lVar8 + lVar9 * 2) = uVar1;
      if (uVar1 < *(ushort *)(lVar7 + 0x12)) {
        if (*(char *)(lVar7 + 5) != '\0') {
          return 0;
        }
        goto LAB_108d8ec30;
      }
      *(short *)(lVar8 + (long)*(short *)(param_1 + 0x70) * 2) =
           *(short *)(lVar8 + (long)*(short *)(param_1 + 0x70) * 2) + -1;
    }
    bVar6 = *(byte *)(param_1 + 0x6d);
    if (bVar6 != 1) {
      if (2 < bVar6) {
        lVar8 = param_1;
        func_0x000108d8dc64();
        if ((int)lVar8 != 0) {
          return lVar8;
        }
        bVar6 = *(byte *)(param_1 + 0x6d);
      }
      if (bVar6 == 0) {
        *param_2 = 1;
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0x68);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x6d) = 1;
        *(undefined4 *)(param_1 + 0x68) = 0;
        if (0 < iVar3) {
          return 0;
        }
      }
    }
    lVar9 = (long)*(short *)(param_1 + 0x70);
    lVar7 = *(long *)(param_1 + 0xa0 + lVar9 * 8);
    lVar8 = param_1 + 0x72;
    uVar1 = *(short *)(lVar8 + lVar9 * 2) + 1;
    *(ushort *)(lVar8 + lVar9 * 2) = uVar1;
    if (uVar1 < *(ushort *)(lVar7 + 0x12)) break;
    if (*(char *)(lVar7 + 5) == '\0') {
      uVar4 = *(uint *)(*(long *)(lVar7 + 0x50) + (ulong)*(byte *)(lVar7 + 6) + 8);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      lVar8 = param_1;
      FUN_108d8e180(param_1,uVar4 >> 0x10 | uVar4 << 0x10);
      if ((int)lVar8 != 0) {
        return lVar8;
      }
      goto LAB_108d8ec30;
    }
    sVar5 = *(short *)(param_1 + 0x70);
    do {
      if (sVar5 == 0) {
        *param_2 = 1;
        *(undefined1 *)(param_1 + 0x6d) = 0;
        return 0;
      }
      func_0x000108d8e128(param_1);
      sVar5 = *(short *)(param_1 + 0x70);
      lVar7 = *(long *)(param_1 + 0xa0 + (long)sVar5 * 8);
    } while (*(ushort *)(lVar7 + 0x12) <= *(ushort *)(lVar8 + (long)sVar5 * 2));
    if (*(char *)(lVar7 + 2) == '\0') {
      return 0;
    }
  }
  if (*(char *)(lVar7 + 5) != '\0') {
    return 0;
  }
LAB_108d8ec30:
  do {
    lVar8 = *(long *)(param_1 + 0xa0 + (long)*(short *)(param_1 + 0x70) * 8);
    if (*(char *)(lVar8 + 5) != '\0') {
      return 0;
    }
    puVar2 = (undefined1 *)
             (*(long *)(lVar8 + 0x60) +
             (ulong)*(ushort *)(param_1 + 0x72 + (long)*(short *)(param_1 + 0x70) * 2) * 2);
    uVar4 = *(uint *)(*(long *)(lVar8 + 0x50) +
                     (ulong)(CONCAT11(*puVar2,puVar2[1]) & *(ushort *)(lVar8 + 0x14)));
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    lVar8 = param_1;
    FUN_108d8e180(param_1,uVar4 >> 0x10 | uVar4 << 0x10);
  } while ((int)lVar8 == 0);
  return lVar8;
}



/* Entry: 108d8a998; end: 108d8aa13;  */

void FUN_108d8a998(long param_1,long param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long *plVar4;
  
  uVar2 = -(int)param_2 & 7;
  uVar3 = *(ushort *)(param_1 + 6);
  uVar1 = (uint)uVar3 * 0x38 + 0x58;
  if (uVar2 + param_3 < uVar1) {
    plVar4 = *(long **)(param_1 + 0x10);
    FUN_108d6a6fc(plVar4,uVar1);
    *param_4 = plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
    uVar3 = *(ushort *)(param_1 + 6);
  }
  else {
    plVar4 = (long *)(param_2 + (ulong)uVar2);
    *param_4 = 0;
  }
  plVar4[2] = (long)(plVar4 + 4);
  *plVar4 = param_1;
  *(ushort *)(plVar4 + 1) = uVar3 + 1;
  return;
}



/* Entry: 108d8aa14; end: 108d8ab07;  */

void FUN_108d8aa14(long param_1,int param_2,char *param_3,long param_4)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_68;
  uint uStack_64;
  
  lVar4 = *(long *)(param_4 + 0x10);
  *(undefined1 *)(param_4 + 10) = 0;
  if (*param_3 < '\0') {
    pcVar5 = param_3;
    FUN_108d7d01c(param_3,&uStack_64);
    uVar6 = uStack_64;
  }
  else {
    pcVar5 = (char *)0x1;
    uVar6 = (int)*param_3;
  }
  uVar7 = 0;
  uVar8 = uVar6;
  do {
    if ((uVar6 <= (uint)pcVar5) || (param_2 < (int)uVar8)) break;
    pcVar2 = param_3 + ((ulong)pcVar5 & 0xffffffff);
    uVar3 = (ulong)*pcVar2;
    if (*pcVar2 < '\0') {
      FUN_108d7d01c(pcVar2,&uStack_68);
      iVar1 = (int)pcVar2;
      uVar3 = (ulong)uStack_68;
    }
    else {
      iVar1 = 1;
    }
    pcVar5 = (char *)(ulong)(iVar1 + (uint)pcVar5);
    *(undefined1 *)(lVar4 + 10) = *(undefined1 *)(param_1 + 4);
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(lVar4 + 0x20) = 0;
    pcVar2 = param_3 + (int)uVar8;
    FUN_108d89864(pcVar2,uVar3,lVar4);
    uVar8 = (int)pcVar2 + uVar8;
    lVar4 = lVar4 + 0x38;
    uVar7 = uVar7 + 1;
  } while (uVar7 < *(ushort *)(param_4 + 8));
  *(short *)(param_4 + 8) = (short)uVar7;
  return;
}



/* Entry: 108d8ab08; end: 108d8ab8b;  */

void FUN_108d8ab08(long param_1,undefined4 *param_2)

{
  long lVar1;
  byte bVar2;
  
  if (((*(char *)(param_1 + 0x6d) != '\x01') || ((*(byte *)(param_1 + 0x6c) >> 3 & 1) == 0)) &&
     (lVar1 = param_1, FUN_108d8df84(), (int)lVar1 == 0)) {
    if (*(char *)(param_1 + 0x6d) == '\0') {
      *param_2 = 1;
    }
    else {
      *param_2 = 0;
      lVar1 = param_1;
      func_0x000108d8edf8();
      if ((int)lVar1 == 0) {
        bVar2 = *(byte *)(param_1 + 0x6c) | 8;
      }
      else {
        bVar2 = *(byte *)(param_1 + 0x6c) & 0xf7;
      }
      *(byte *)(param_1 + 0x6c) = bVar2;
    }
  }
  return;
}



/* Entry: 108d8ab8c; end: 108d8b31f;  */

void FUN_108d8ab8c(long *param_1,long param_2,ulong param_3,long param_4,uint param_5,int param_6,
                  undefined8 param_7,int param_8)

{
  uint uVar1;
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  int iStack_a4;
  uint *puStack_98;
  ulong uStack_90;
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  ulong uStack_70;
  int iStack_64;
  
  if (*(char *)((long)param_1 + 0x6d) == '\x04') {
    return;
  }
  lVar18 = *param_1;
  lVar13 = *(long *)(lVar18 + 8);
  uVar7 = *(undefined8 *)(lVar13 + 0x10);
  iStack_7c = param_8;
  FUN_108d7ca08(uVar7,(int)param_1[0xc],param_1);
  if ((int)uVar7 != 0) {
    return;
  }
  if (param_1[4] == 0) {
    lVar18 = *(long *)(lVar18 + 8);
    while (lVar18 = *(long *)(lVar18 + 0x10), lVar18 != 0) {
      if (((*(byte *)(lVar18 + 0x6c) >> 4 & 1) != 0) && (*(ulong *)(lVar18 + 0x30) == param_3)) {
        *(undefined1 *)(lVar18 + 0x6d) = 0;
      }
    }
    if ((((long)param_3 < 1) || ((*(byte *)((long)param_1 + 0x6c) >> 1 & 1) == 0)) ||
       (param_1[6] != param_3 - 1)) goto LAB_108d8ac2c;
    iStack_7c = -1;
  }
  else {
LAB_108d8ac2c:
    if (param_8 == 0) {
      plVar8 = param_1;
      FUN_108d8dcf8(param_1,param_2,param_3,param_7,&iStack_7c);
      if ((int)plVar8 != 0) {
        return;
      }
      iStack_78 = 0;
    }
  }
  lVar18 = param_1[(long)(short)param_1[0xe] + 0x14];
  puVar15 = *(uint **)(lVar13 + 0x88);
  uStack_70 = 0;
  lVar13 = *(long *)(lVar18 + 0x48);
  uStack_74 = 0;
  bVar3 = *(byte *)(lVar18 + 7);
  uVar14 = (ulong)bVar3;
  uVar1 = param_6 + param_5;
  if (*(char *)(lVar18 + 3) != '\0') {
    if (uVar1 < 0x80) {
      *(char *)((long)puVar15 + uVar14) = (char)uVar1;
      uVar10 = 1;
    }
    else {
      lVar9 = (long)puVar15 + uVar14;
      FUN_108d899f0(lVar9,(long)(int)uVar1);
      uVar10 = (uint)lVar9 & 0xff;
    }
    uVar14 = (ulong)(uVar10 + bVar3);
  }
  lVar9 = (long)puVar15 + uVar14;
  FUN_108d899f0(lVar9,param_3);
  if (*(char *)(lVar18 + 2) == '\0') {
    if ((param_2 == 0) || (uVar21 = param_3, uStack_80 = param_5, 0x7fffffff < (long)param_3)) {
      FUN_108d64c00(0xb,&UNK_10f51799f);
      return;
    }
  }
  else {
    param_3 = (ulong)param_5;
    uStack_80 = 0;
    uVar21 = (ulong)uVar1;
    param_2 = param_4;
  }
  iVar17 = (int)lVar9 + (int)uVar14;
  iVar19 = (int)uVar21;
  if ((int)(uint)*(ushort *)(lVar18 + 10) < iVar19) {
    uVar4 = *(ushort *)(lVar18 + 0xc);
    uVar10 = iVar19 - (uint)uVar4;
    uVar1 = *(int *)(*(long *)(lVar18 + 0x48) + 0x38) - 4;
    uVar12 = 0;
    if (uVar1 != 0) {
      uVar12 = uVar10 / uVar1;
    }
    uVar1 = (uVar10 - uVar12 * uVar1) + (uint)uVar4;
    uVar10 = (uint)uVar4;
    if ((int)uVar1 <= (int)(uint)*(ushort *)(lVar18 + 10)) {
      uVar10 = uVar1;
    }
    iStack_a4 = uVar10 + iVar17 + 4;
    puStack_98 = (uint *)((long)puVar15 + (long)(int)(uVar10 + iVar17));
    uVar14 = (ulong)uVar10;
  }
  else {
    iStack_a4 = iVar19 + iVar17;
    if (iStack_a4 < 5) {
      iStack_a4 = 4;
    }
    puStack_98 = puVar15;
    uVar14 = uVar21;
    if (iVar19 < 1) goto LAB_108d8af68;
  }
  uStack_90 = 0;
  lVar9 = (long)puVar15 + (long)iVar17;
  do {
    uVar1 = uStack_74;
    iVar17 = (int)uVar14;
    if (iVar17 == 0) {
      if (*(char *)(lVar13 + 0x21) != '\0') {
        do {
          do {
            uVar10 = uStack_74;
            uStack_74 = uVar10 + 1;
            if (uStack_74 < 2) {
              uVar12 = 0;
            }
            else {
              uVar12 = *(uint *)(lVar13 + 0x38) / 5 + 1;
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = (uVar10 - 1) / uVar12;
              }
              uVar6 = 0;
              if (*(uint *)(lVar13 + 0x34) != 0) {
                uVar6 = uRam0000000113298da4 / *(uint *)(lVar13 + 0x34);
              }
              iVar17 = 2;
              if (uVar5 * uVar12 + 1 == uVar6) {
                iVar17 = 3;
              }
              uVar12 = iVar17 + uVar5 * uVar12;
            }
          } while (uStack_74 == uVar12);
          uVar12 = 0;
          if (*(uint *)(lVar13 + 0x34) != 0) {
            uVar12 = uRam0000000113298da4 / *(uint *)(lVar13 + 0x34);
          }
        } while (uVar10 == uVar12);
        uStack_74 = uVar10 + 1;
      }
      lVar9 = lVar13;
      FUN_108d7fa7c(lVar13,&uStack_70,&uStack_74,uStack_74,0);
      uVar10 = uStack_74;
      iStack_64 = (int)lVar9;
      if ((*(char *)(lVar13 + 0x21) == '\0') || (iStack_64 != 0)) {
        if (iStack_64 != 0) goto LAB_108d8b0b0;
      }
      else {
        uVar11 = 3;
        if (uVar1 != 0) {
          uVar11 = 4;
        }
        FUN_108d80634(lVar13,uStack_74,uVar11,uVar1,&iStack_64);
        if (iStack_64 != 0) {
          if (uStack_70 != 0) {
            func_0x000108d787d8(*(undefined8 *)(uStack_70 + 0x68));
          }
LAB_108d8b0b0:
          if (uStack_90 == 0) {
            return;
          }
          func_0x000108d787d8(*(undefined8 *)(uStack_90 + 0x68));
          return;
        }
      }
      uVar1 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      *puStack_98 = uVar1 >> 0x10 | uVar1 << 0x10;
      if (uStack_90 != 0) {
        func_0x000108d787d8(*(undefined8 *)(uStack_90 + 0x68));
      }
      puStack_98 = *(uint **)(uStack_70 + 0x50);
      uStack_90 = uStack_70;
      *puStack_98 = 0;
      lVar9 = *(long *)(uStack_70 + 0x50) + 4;
      iVar17 = *(int *)(lVar13 + 0x38) + -4;
    }
    iVar20 = (int)uVar21;
    iVar19 = iVar20;
    if (iVar17 <= iVar20) {
      iVar19 = iVar17;
    }
    iVar16 = (int)param_3;
    if (iVar16 < 1) {
      lVar22 = (long)iVar19;
      _bzero(lVar9,lVar22);
    }
    else {
      if (iVar16 <= iVar19) {
        iVar19 = iVar16;
      }
      lVar22 = (long)iVar19;
      _memcpy(lVar9,param_2,lVar22);
    }
    uVar21 = (ulong)(uint)(iVar20 - iVar19);
    lVar9 = lVar9 + lVar22;
    lVar22 = param_2 + lVar22;
    uVar14 = (ulong)(uint)(iVar17 - iVar19);
    uVar10 = iVar16 - iVar19;
    uVar1 = uStack_80;
    if (uVar10 != 0) {
      uVar1 = uVar10;
    }
    param_3 = (ulong)uVar1;
    param_2 = param_4;
    if (uVar10 != 0) {
      param_2 = lVar22;
    }
  } while (0 < iVar20 - iVar19);
  if (uStack_90 != 0) {
    func_0x000108d787d8(*(undefined8 *)(uStack_90 + 0x68));
  }
LAB_108d8af68:
  iStack_78 = 0;
  uVar4 = *(ushort *)((long)param_1 + (long)(short)param_1[0xe] * 2 + 0x72);
  uVar14 = (ulong)uVar4;
  if (iStack_7c == 0) {
    iVar17 = (int)*(undefined8 *)(lVar18 + 0x68);
    FUN_108d5ffdc();
    if (iVar17 != 0) {
      return;
    }
    lVar13 = *(long *)(lVar18 + 0x50);
    puVar2 = (undefined1 *)(*(long *)(lVar18 + 0x60) + uVar14 * 2);
    uVar21 = (ulong)(CONCAT11(*puVar2,puVar2[1]) & *(ushort *)(lVar18 + 0x14));
    if (*(char *)(lVar18 + 5) == '\0') {
      *puVar15 = *(uint *)(lVar13 + uVar21);
    }
    lVar9 = lVar18;
    FUN_108d8ee70(lVar18,lVar13 + uVar21,&uStack_70);
    iStack_78 = (int)lVar9;
    FUN_108d8f040(lVar18,uVar14,uStack_70 & 0xffff,&iStack_78);
    if (iStack_78 != 0) {
      return;
    }
  }
  else if ((iStack_7c < 0) && (*(short *)(lVar18 + 0x12) != 0)) {
    uVar4 = uVar4 + 1;
    *(ushort *)((long)param_1 + (long)(short)param_1[0xe] * 2 + 0x72) = uVar4;
    uVar14 = (ulong)uVar4;
  }
  FUN_108d8f198(lVar18,uVar14,puVar15,iStack_a4,0,0,&iStack_78);
  *(undefined2 *)(param_1 + 9) = 0;
  if ((iStack_78 == 0) && (*(char *)(lVar18 + 1) != '\0')) {
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xfd;
    func_0x000108d8f44c(param_1);
    *(undefined1 *)(param_1[(long)(short)param_1[0xe] + 0x14] + 1) = 0;
    *(undefined1 *)((long)param_1 + 0x6d) = 0;
  }
  return;
}



/* Entry: 108d8b320; end: 108d8b437;  */

undefined8 FUN_108d8b320(long param_1,long param_2,long param_3,uint param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  undefined1 auStack_48 [8];
  
  lVar7 = *(long *)(param_2 + 0x30);
  if (lVar7 == 0) {
    lVar7 = param_1;
    FUN_108d8a998(param_1,0,0,auStack_48);
    *(long *)(param_2 + 0x30) = lVar7;
    if (lVar7 == 0) {
      return 7;
    }
    *(short *)(lVar7 + 8) = (short)param_4;
  }
  if (*(char *)(param_2 + 0x58) == '\0') {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
    puVar1 = puVar3 + 4;
  }
  else {
    if (*(char *)(param_2 + 0x59) == '\0') {
      lVar5 = *(long *)(*(long *)(param_2 + 0x18) + 0x18) +
              (long)*(int *)(*(long *)(*(long *)(param_2 + 0x18) + 0x10) + 4) * 0x50;
    }
    else {
      lVar5 = *(long *)(param_2 + 0x10);
    }
    puVar3 = (undefined4 *)(lVar5 + 0x14);
    puVar1 = *(undefined4 **)(lVar5 + 0x28);
  }
  FUN_108d8aa14(param_1,*puVar3,puVar1,lVar7);
  if (0 < (int)param_4) {
    uVar4 = (ulong)param_4;
    puVar6 = (ushort *)(*(long *)(lVar7 + 0x10) + 8);
    do {
      if ((*puVar6 & 1) != 0) {
        uVar2 = 0xffffffff;
        goto LAB_108d8b414;
      }
      uVar4 = uVar4 - 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != 0);
  }
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_108d8e65c(uVar2,*(undefined8 *)(param_3 + 0x10),lVar7,0);
LAB_108d8b414:
  *param_5 = uVar2;
  return 0;
}



/* Entry: 108d8b438; end: 108d8b503;  */

undefined8 FUN_108d8b438(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    piVar4 = *(int **)(param_1 + 0x38);
    piVar6 = piVar4 + 4;
  }
  else {
    if (*(char *)(param_1 + 0x59) == '\0') {
      lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x18) +
              (long)*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + 4) * 0x50;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x10);
    }
    piVar4 = (int *)(lVar5 + 0x14);
    piVar6 = *(int **)(lVar5 + 0x28);
  }
  iVar1 = *piVar4;
  if (*(int *)(param_2 + 0x20) < iVar1) {
    lVar5 = param_2;
    FUN_108d82884(param_2,iVar1,0);
    if ((int)lVar5 != 0) {
      return 7;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(ushort *)(param_2 + 8) & 0xbe00 | 0x10;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = uVar2;
    uVar3 = 0x10;
  }
  *(int *)(param_2 + 0xc) = iVar1;
  *(ushort *)(param_2 + 8) = uVar3;
  _memcpy(uVar2,piVar6,(long)iVar1);
  return 0;
}



/* Entry: 108d8b504; end: 108d8b557;  */

void FUN_108d8b504(long param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = param_1;
  FUN_108d8df84();
  if ((int)lVar3 == 0) {
    if (*(char *)(param_1 + 0x6d) != '\0') {
      *param_2 = 0;
      do {
        lVar3 = *(long *)(param_1 + 0xa0 + (long)*(short *)(param_1 + 0x70) * 8);
        if (*(char *)(lVar3 + 5) != '\0') {
          return;
        }
        puVar1 = (undefined1 *)
                 (*(long *)(lVar3 + 0x60) +
                 (ulong)*(ushort *)(param_1 + 0x72 + (long)*(short *)(param_1 + 0x70) * 2) * 2);
        uVar2 = *(uint *)(*(long *)(lVar3 + 0x50) +
                         (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(lVar3 + 0x14)));
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        lVar3 = param_1;
        FUN_108d8e180(param_1,uVar2 >> 0x10 | uVar2 << 0x10);
      } while ((int)lVar3 == 0);
      return;
    }
    *param_2 = 1;
  }
  return;
}



/* Entry: 108d8b558; end: 108d8b60b;  */

void FUN_108d8b558(undefined8 param_1,long param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uStack_64;
  
  if (*(char *)(param_2 + 0x58) == '\0') {
    lVar5 = *(long *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar5 + 8);
    *(undefined8 *)(lVar5 + 8) = 0;
    if (*(long *)(param_2 + 0x40) == 0) {
      do {
        lVar5 = *(long *)(lVar5 + 8);
        func_0x000108d60660(param_1);
      } while (lVar5 != 0);
    }
    *param_3 = (uint)(*(long *)(param_2 + 0x38) == 0);
  }
  else {
    if (*(char *)(param_2 + 0x59) == '\0') {
      piVar4 = *(int **)(param_2 + 0x18);
      lVar5 = *(long *)(piVar4 + 2);
      uVar8 = *(uint *)(*(long *)(piVar4 + 4) + 4);
      iVar3 = (int)*(undefined8 *)(piVar4 + 6) + uVar8 * 0x50;
      func_0x000108d92b94();
      if (iVar3 == 0) {
        uStack_64 = 0;
        lVar6 = *(long *)(piVar4 + 6);
        if ((int)(*piVar4 + uVar8) < 2) {
          lVar7 = *(long *)(piVar4 + 4);
        }
        else {
          uVar9 = lVar6 + (long)(int)(uVar8 | 1) * 0x50;
          uVar10 = lVar6 + ((ulong)uVar8 & 0xfffe) * 0x50;
          uVar8 = *piVar4 + uVar8;
          do {
            uVar2 = uVar8 >> 1;
            if (*(long *)(uVar10 + 0x18) == 0) {
LAB_108d930d0:
              lVar7 = *(long *)(piVar4 + 4);
              lVar6 = *(long *)(piVar4 + 6);
              *(int *)(lVar7 + (ulong)uVar2 * 4) = (int)(uVar9 - lVar6 >> 4) * -0x33333333;
              uVar10 = lVar6 + (long)*(int *)(lVar7 + (ulong)(uVar2 ^ 1) * 4) * 0x50;
            }
            else {
              if (*(long *)(uVar9 + 0x18) != 0) {
                lVar6 = lVar5;
                (**(code **)(lVar5 + 0x40))
                          (lVar5,&uStack_64,*(undefined8 *)(uVar10 + 0x28),
                           *(undefined4 *)(uVar10 + 0x14),*(undefined8 *)(uVar9 + 0x28),
                           *(undefined4 *)(uVar9 + 0x14));
                if ((-1 < (int)lVar6) && (((int)lVar6 != 0 || (uVar9 <= uVar10)))) {
                  if (*(long *)(uVar10 + 0x18) != 0) {
                    uStack_64 = 0;
                  }
                  goto LAB_108d930d0;
                }
              }
              lVar7 = *(long *)(piVar4 + 4);
              lVar6 = *(long *)(piVar4 + 6);
              *(int *)(lVar7 + (ulong)uVar2 * 4) = (int)(uVar10 - lVar6 >> 4) * -0x33333333;
              uVar9 = lVar6 + (long)*(int *)(lVar7 + (ulong)(uVar2 ^ 1) * 4) * 0x50;
              uStack_64 = 0;
            }
            bVar1 = 3 < uVar8;
            uVar8 = uVar2;
          } while (bVar1);
        }
        *param_3 = (uint)(*(long *)(lVar6 + (long)*(int *)(lVar7 + 4) * 0x50 + 0x18) == 0);
      }
      return;
    }
    func_0x000108d92b94(*(undefined8 *)(param_2 + 0x10));
    *param_3 = (uint)(*(long *)(*(long *)(param_2 + 0x10) + 0x18) == 0);
  }
  return;
}



/* Entry: 108d8b60c; end: 108d8b827;  */

int * FUN_108d8b60c(int *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  ulong uVar15;
  uint uStack_54;
  
  pcVar6 = (char *)(*(long *)(param_2 + 0x10) + 1);
  cVar3 = *pcVar6;
  uVar10 = (int)cVar3;
  if (cVar3 < '\0') {
    FUN_108d7d01c(pcVar6,&uStack_54);
    uVar10 = uStack_54;
  }
  if (uVar10 == 7 || 8 < uVar10 - 1) {
    if (10 < (int)uVar10 && (uVar10 & 1) != 0) {
      bVar9 = *(byte *)(param_1 + 0x17) & 2;
      goto LAB_108d8b684;
    }
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  else {
    bVar9 = *(byte *)(param_1 + 0x17) & 1;
LAB_108d8b684:
    *(byte *)(param_1 + 0x17) = bVar9;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  uVar15 = (ulong)iVar4;
  uVar10 = 0;
  do {
    uVar1 = uVar10 + 1;
    if (uVar15 < 0x80) break;
    uVar15 = uVar15 >> 7;
    bVar5 = uVar10 < 8;
    uVar10 = uVar1;
  } while (bVar5);
  iVar2 = iVar4 + 0x10;
  iVar13 = param_1[1];
  if (iVar13 == 0) {
    piVar14 = (int *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      if ((param_1[0x12] <= iVar13) &&
         ((piVar14 = (int *)0x0, param_1[0x12] <= *param_1 || (iRam0000000113829b24 == 0))))
      goto LAB_108d8b728;
    }
    else {
      piVar14 = (int *)0x0;
      if ((param_1[0x14] == 0) || (param_1[0x14] + iVar2 <= iVar13)) goto LAB_108d8b728;
    }
    piVar14 = param_1;
    FUN_108d91a6c(param_1);
    param_1[0x12] = 0;
    param_1[0x14] = 0;
  }
LAB_108d8b728:
  param_1[0x12] = iVar4 + uVar1 + param_1[0x12];
  if (param_1[2] < (int)(iVar4 + uVar1)) {
    param_1[2] = iVar4 + uVar1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    puVar8 = (undefined4 *)(long)iVar2;
    FUN_108d60848();
    if (puVar8 == (undefined4 *)0x0) {
      return (int *)0x7;
    }
    *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_1 + 0xe);
  }
  else {
    iVar12 = param_1[0x14];
    iVar13 = param_1[0x15];
    iVar2 = iVar12 + iVar2;
    if (iVar13 < iVar2) {
      do {
        iVar13 = iVar13 * 2;
      } while (iVar13 < iVar2);
      if (param_1[1] <= iVar13) {
        iVar13 = param_1[1];
      }
      if (iVar13 <= iVar2) {
        iVar13 = iVar2;
      }
      FUN_108d63588(lVar7,(long)iVar13);
      if (lVar7 == 0) {
        return (int *)0x7;
      }
      lVar11 = lVar7 + (*(long *)(param_1 + 0xe) - *(long *)(param_1 + 0x10));
      *(long *)(param_1 + 0xe) = lVar11;
      *(long *)(param_1 + 0x10) = lVar7;
      param_1[0x15] = iVar13;
      iVar12 = param_1[0x14];
    }
    else {
      lVar11 = *(long *)(param_1 + 0xe);
    }
    puVar8 = (undefined4 *)(lVar7 + iVar12);
    param_1[0x14] = iVar12 + (iVar4 + 0x17U & 0xfffffff8);
    puVar8[2] = (int)lVar11 - (int)lVar7;
  }
  _memcpy(puVar8 + 4,*(undefined8 *)(param_2 + 0x10),(long)*(int *)(param_2 + 0xc));
  *puVar8 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 **)(param_1 + 0xe) = puVar8;
  return piVar14;
}



/* Entry: 108d8b828; end: 108d8b993;  */

undefined8 FUN_108d8b828(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 auStack_b0 [7];
  undefined1 auStack_78 [8];
  ushort uStack_70;
  uint uStack_6c;
  char *pcStack_68;
  int iStack_58;
  undefined8 uStack_50;
  uint uStack_40;
  uint uStack_3c;
  undefined4 auStack_38 [2];
  
  FUN_108d7ce48(param_2,auStack_38);
  uStack_70 = 0;
  iStack_58 = 0;
  uStack_50 = param_1;
  FUN_108d89734(param_2,0,auStack_38[0],1,auStack_78);
  if ((int)param_2 == 0) {
    uVar2 = (int)*pcStack_68;
    if (*pcStack_68 < '\0') {
      FUN_108d7d01c(pcStack_68,&uStack_3c);
      uVar2 = uStack_3c;
    }
    if ((2 < uVar2) && ((int)uVar2 <= (int)uStack_6c)) {
      uVar1 = (ulong)pcStack_68[uVar2 - 1];
      if (pcStack_68[uVar2 - 1] < '\0') {
        FUN_108d7d01c(pcStack_68 + (uVar2 - 1),&uStack_40);
        uVar1 = (ulong)uStack_40;
      }
      if (((int)uVar1 != 7 && 0xfffffff6 < (int)uVar1 - 10U) &&
         (uVar2 + (byte)(&UNK_10dfa0a57)[uVar1 & 0xffffffff] <= uStack_6c)) {
        FUN_108d89864(pcStack_68 + (uStack_6c - (byte)(&UNK_10dfa0a57)[uVar1 & 0xffffffff]),uVar1,
                      auStack_b0);
        *param_3 = auStack_b0[0];
        if ((uStack_70 & 0x2460) != 0 || iStack_58 != 0) {
          FUN_108d826d0(auStack_78);
        }
        return 0;
      }
    }
    if ((uStack_70 & 0x2460) != 0 || iStack_58 != 0) {
      FUN_108d826d0(auStack_78);
    }
    param_2 = 0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  return param_2;
}


