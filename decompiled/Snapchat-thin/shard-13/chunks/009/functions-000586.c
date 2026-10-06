/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae65e7c; end: 10ae660a3;  */

undefined8 FUN_10ae65e7c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (((((*(byte *)(*param_1 + 0x84) >> 3 & 1) != 0) ||
       (plVar1 = param_1, FUN_10ae61f18(), (int)plVar1 == 0)) ||
      (puVar6 = *(ulong **)(*(long *)(param_1[1] + 0x20) + 8), puVar6 == (ulong *)0x0)) ||
     (1 < *puVar6)) {
    return 1;
  }
  if (*puVar6 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = *(long **)puVar6[1];
  }
  func_0x000107c2b64c();
  if (plVar1 == (long *)0x0) {
    func_0x000107c2b29c(0x10,0,0xb,&UNK_10f6d11cf,0x1cf);
    return 0;
  }
  plVar2 = plVar1;
  func_0x000107c2b610();
  plStack_40 = plVar2;
  if (plVar2 == (long *)0x0) {
    func_0x000107c2b29c(0x10,0,0xb,&UNK_10f6d11cf,0x1d6);
    uVar5 = 0;
    goto LAB_10ae6605c;
  }
  plVar3 = plVar2;
  func_0x000107c2b618();
  if ((int)plVar3 == 0) {
    func_0x000107c2b29c(0x10,0,0xb,&UNK_10f6d11cf,0x1d6);
    uVar5 = 0;
  }
  else {
    func_0x000107c2b608(plVar2);
    func_0x000107c2b290();
    plVar3 = (long *)plVar2[0x13];
    if (plVar3 == (long *)0x0) {
      uVar5 = 0;
      plStack_48 = (long *)0x0;
    }
    else {
      func_0x000107c2b5dc();
      plStack_48 = plVar3;
      if (plVar3 != (long *)0x0) {
        if (*plVar3 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = plVar3;
          func_0x000107c2b5b0(plVar3,0);
        }
        plStack_38 = plVar4;
        func_0x000107c2b1bc(&plStack_38,&UNK_110c87868,0);
        uVar5 = *(undefined8 *)(param_1[1] + 0x20);
        FUN_10ae663d4(uVar5,plVar3);
        if ((int)uVar5 != 0) {
          lVar7 = *(long *)(param_1[1] + 0x20);
          func_0x000107c2b5a8(*(undefined8 *)(lVar7 + 0x10),0x10ae6638c,&UNK_1004d22bc);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          uVar5 = 1;
          goto LAB_10ae66040;
        }
      }
      uVar5 = 0;
    }
LAB_10ae66040:
    func_0x000107c2b8bc(&plStack_48,0);
  }
  func_0x000107c2b614(plVar2);
  func_0x000107c2b534(plVar2);
LAB_10ae6605c:
  plStack_38 = plVar1;
  func_0x000107c2b1bc(&plStack_38,&UNK_110c87868,0);
  return uVar5;
}



/* Entry: 10ae660a4; end: 10ae661d7;  */

/* WARNING: Possible PIC construction at 0x00010ae6610c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae66130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4baec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4bb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4bb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae4baf0) */
/* WARNING: Removing unreachable block (ram,0x00010ae66110) */
/* WARNING: Removing unreachable block (ram,0x00010ae4bb44) */

void FUN_10ae660a4(ulong *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong *unaff_x19;
  ulong *puVar5;
  ulong *unaff_x20;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar6 = (ulong *)param_1[0x32];
  if (puVar6 != (ulong *)0x0) {
    uVar3 = *puVar6;
    if (uVar3 != 0) {
      uVar8 = 0;
      do {
        lVar4 = *(long *)(puVar6[1] + uVar8 * 8);
        if (lVar4 != 0) {
          lStack_38 = lVar4;
          func_0x000107c2b1bc(&lStack_38,&DAT_110c87418,0);
          uVar3 = *puVar6;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
    unaff_x30 = 0x10ae66110;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    puVar7 = (ulong *)puVar6[1];
    unaff_x19 = param_1;
    unaff_x20 = puVar6;
    unaff_x29 = puVar1;
    goto code_r0x0001001e33e0;
  }
  param_1[0x32] = 0;
  puVar7 = (ulong *)param_1[0x3a];
  if (puVar7 != (ulong *)0x0) {
    func_0x000107c34fb0(puVar7);
    unaff_x30 = 0x10ae66134;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    unaff_x19 = param_1;
    unaff_x20 = puVar7;
    unaff_x29 = puVar1;
    goto code_r0x0001001e33e0;
  }
  puVar6 = (ulong *)param_1[0x1e];
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar6 == (ulong *)0x0) {
    return;
  }
  iVar2 = (int)puVar6 + 0x140;
  func_0x000107c2b58c();
  if (iVar2 == 0) {
    return;
  }
  _pthread_rwlock_destroy(puVar6 + 2);
  puVar5 = (ulong *)puVar6[0x1b];
  if ((puVar5 == (ulong *)0x0) || (*puVar5 == 0)) {
    func_0x000107c2b5a4(puVar5);
    puVar5 = (ulong *)puVar6[1];
    if (puVar5 == (ulong *)0x0) {
      puVar5 = (ulong *)puVar6[0x1c];
      puVar7 = puVar6;
      if (puVar5 != (ulong *)0x0) {
        func_0x000107c34fb0(puVar5);
        unaff_x30 = 0x10ae4bb64;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        puVar7 = puVar5;
        unaff_x19 = puVar6;
        unaff_x20 = puVar5;
        unaff_x29 = puVar1;
      }
    }
    else {
      uVar3 = *puVar5;
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          if (*(long *)(puVar5[1] + uVar8 * 8) != 0) {
            FUN_10ae4bb88();
            uVar3 = *puVar5;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
      }
      unaff_x30 = 0x10ae4bb44;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      puVar7 = (ulong *)puVar5[1];
      unaff_x19 = puVar6;
      unaff_x20 = puVar5;
      unaff_x29 = puVar1;
    }
    goto code_r0x0001001e33e0;
  }
  puVar7 = *(ulong **)puVar5[1];
  uVar3 = puVar7[1];
  if (uVar3 != 0) {
    if (*(code **)(uVar3 + 0x20) != (code *)0x0) {
      (**(code **)(uVar3 + 0x20))(puVar7);
      uVar3 = puVar7[1];
      if (uVar3 == 0) goto LAB_10ae4bae8;
    }
    if (*(code **)(uVar3 + 0x10) != (code *)0x0) {
      (**(code **)(uVar3 + 0x10))(puVar7);
    }
  }
LAB_10ae4bae8:
  unaff_x30 = 0x10ae4baf0;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  unaff_x19 = puVar6;
  unaff_x20 = puVar5;
  unaff_x29 = puVar1;
code_r0x0001001e33e0:
  if (puVar7 != (ulong *)0x0) {
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar7 = puVar7 + -1;
    if (*puVar7 + 8 != 0) {
      func_0x000107c60ee4(puVar7,*puVar7 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(puVar7);
    return;
  }
  return;
}



/* Entry: 10ae661d8; end: 10ae66203;  */

void FUN_10ae661d8(long param_1,undefined8 param_2)

{
  FUN_10ae4ba70(*(undefined8 *)(param_1 + 0xf0));
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  return;
}



/* Entry: 10ae66204; end: 10ae6629b;  */

undefined8 FUN_10ae66204(undefined8 param_1,long param_2)

{
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    func_0x000107c2b29c(0x10,0,0x43,&UNK_10f6d11cf,0x2df);
  }
  else {
    func_0x00010ae665f0(&lStack_28,param_2);
    if (lStack_28 != 0) {
      lStack_30 = lStack_28;
      FUN_10ae61d1c(param_1,&lStack_30);
      if (lStack_30 == 0) {
        return param_1;
      }
      func_0x000107c2b588();
      return param_1;
    }
  }
  return 0;
}



/* Entry: 10ae6629c; end: 10ae662a3;  */

undefined8 FUN_10ae6629c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  if (param_2 == 0) {
    func_0x000107c2b29c(0x10,0,0x43,&UNK_10f6d11cf,0x2df);
  }
  else {
    func_0x00010ae665f0(&lStack_28,param_2);
    if (lStack_28 != 0) {
      lStack_30 = lStack_28;
      FUN_10ae61d1c(uVar1,&lStack_30);
      if (lStack_30 == 0) {
        return uVar1;
      }
      func_0x000107c2b588();
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 10ae662a4; end: 10ae6635f;  */

void FUN_10ae662a4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x00010ae66660();
  if ((int)lVar2 != 0) {
    lStack_38 = *(long *)(param_1 + 0x20);
    func_0x000107c2b1bc(&lStack_38,&UNK_110c87868,0);
    *(undefined8 *)(param_1 + 0x20) = param_2;
    puVar3 = *(ulong **)(param_1 + 0x10);
    if (puVar3 != (ulong *)0x0) {
      uVar1 = *puVar3;
      if (uVar1 != 0) {
        uVar4 = 0;
        do {
          lVar2 = *(long *)(puVar3[1] + uVar4 * 8);
          if (lVar2 != 0) {
            lStack_38 = lVar2;
            func_0x000107c2b1bc(&lStack_38,&UNK_110c87868,0);
            uVar1 = *puVar3;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      func_0x000107c2b534(puVar3[1]);
      func_0x000107c2b534(puVar3);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10ae66360; end: 10ae66397;  */

void FUN_10ae66360(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x1a8);
  lVar3 = lVar1;
  func_0x00010ae66660();
  if ((int)lVar3 != 0) {
    lStack_38 = *(long *)(lVar1 + 0x20);
    func_0x000107c2b1bc(&lStack_38,&UNK_110c87868,0);
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    puVar4 = *(ulong **)(lVar1 + 0x10);
    if (puVar4 != (ulong *)0x0) {
      uVar2 = *puVar4;
      if (uVar2 != 0) {
        uVar5 = 0;
        do {
          lVar3 = *(long *)(puVar4[1] + uVar5 * 8);
          if (lVar3 != 0) {
            lStack_38 = lVar3;
            func_0x000107c2b1bc(&lStack_38,&UNK_110c87868,0);
            uVar2 = *puVar4;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      func_0x000107c2b534(puVar4[1]);
      func_0x000107c2b534(puVar4);
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10ae66398; end: 10ae663d3;  */

void FUN_10ae66398(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c2b614(lVar2);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 10ae663d4; end: 10ae66587;  */

undefined8 FUN_10ae663d4(long param_1,ulong *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_50;
  undefined8 *puStack_48;
  
  puStack_48 = (undefined8 *)0x0;
  plVar9 = (long *)(param_1 + 8);
  if (*plVar9 == 0) {
LAB_10ae664a4:
    if ((param_2 != (ulong *)0x0) && (uVar11 = *param_2, uVar11 != 0)) {
      uVar12 = 0;
      do {
        if (uVar12 < *param_2) {
          uVar5 = *(undefined8 *)(param_2[1] + uVar12 * 8);
        }
        else {
          uVar5 = 0;
        }
        if (puStack_48 == (undefined8 *)0x0) {
          FUN_10ae66588(&lStack_50);
          lVar10 = lStack_50;
          lStack_50 = 0;
          func_0x000107c2b718(&puStack_48,lVar10);
          func_0x000107c2b718(&lStack_50,0);
          if (puStack_48 == (undefined8 *)0x0) goto LAB_10ae66550;
        }
        func_0x00010ae665f0(&lStack_50,uVar5);
        lVar10 = lStack_50;
        if (lStack_50 == 0) goto LAB_10ae66550;
        puVar6 = puStack_48;
        func_0x000107c2b5ac(puStack_48,lStack_50,*puStack_48);
        if (puVar6 == (undefined8 *)0x0) goto LAB_10ae66488;
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
    }
    puVar6 = puStack_48;
    puStack_48 = (undefined8 *)0x0;
    func_0x000107c2b718(plVar9,puVar6);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    func_0x000107c2b59c(0);
    func_0x000107c2b718(&puStack_48,uVar5);
    if (puStack_48 != (undefined8 *)0x0) {
      plVar7 = (long *)*plVar9;
      if ((plVar7 == (long *)0x0) || (*plVar7 == 0)) {
        uVar5 = *puStack_48;
      }
      else {
        lVar10 = *(long *)plVar7[1];
        if (lVar10 != 0) {
          piVar1 = (int *)(lVar10 + 0x18);
          iVar8 = *piVar1;
          do {
            if (iVar8 == -1) break;
            iVar2 = *piVar1;
            if (iVar2 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar4 = cVar3 == '\0';
            }
            else {
              bVar4 = false;
              ClearExclusiveLocal();
            }
            iVar8 = iVar2;
          } while (!bVar4);
          puVar6 = puStack_48;
          func_0x000107c2b5ac(puStack_48,lVar10,*puStack_48);
          if (puVar6 != (undefined8 *)0x0) goto LAB_10ae664a4;
LAB_10ae66488:
          func_0x000107c2b588(lVar10);
          goto LAB_10ae66550;
        }
        uVar5 = *puStack_48;
      }
      puVar6 = puStack_48;
      func_0x000107c2b5ac(puStack_48,0,uVar5);
      if (puVar6 != (undefined8 *)0x0) goto LAB_10ae664a4;
    }
LAB_10ae66550:
    uVar5 = 0;
  }
  func_0x000107c2b718(&puStack_48,0);
  return uVar5;
}



/* Entry: 10ae66588; end: 10ae66727;  */

void FUN_10ae66588(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)0x0;
  func_0x000107c2b59c();
  puStack_28 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c2b5ac(puVar1,0,*puVar1);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puStack_28 = (undefined8 *)0x0;
    }
  }
  *param_1 = (long)puVar1;
  func_0x000107c2b718(&puStack_28,0);
  return;
}



/* Entry: 10ae66728; end: 10ae66a5b;  */

/* WARNING: Type propagation algorithm not settling */

byte ** FUN_10ae66728(byte **param_1,undefined8 param_2,long *param_3,byte **param_4,byte *param_5,
                     byte *param_6,ulong param_7,int param_8)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  byte **ppbVar5;
  long *plVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  byte **ppbVar9;
  undefined8 **ppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  byte **ppbVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte **ppbVar23;
  byte **unaff_x26;
  byte **unaff_x27;
  byte *pbVar24;
  undefined8 uVar25;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  byte *pbStack_1b0;
  byte **ppbStack_1a8;
  byte **ppbStack_1a0;
  byte *pbStack_198;
  long *plStack_190;
  byte *pbStack_188;
  byte **ppbStack_180;
  undefined1 *puStack_178;
  byte **ppbStack_170;
  byte **ppbStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined1 auStack_128 [64];
  long lStack_e8;
  byte **ppbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte **ppbStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  
  ppbVar23 = (byte **)param_4[0x1a];
  pbStack_68 = (byte *)0x0;
  ppbVar5 = param_1;
  func_0x000107c2b89c();
  puVar17 = (undefined *)(ulong)**param_1;
  ppbVar8 = &pbStack_68;
  ppbVar9 = &pbStack_78;
  func_0x000107c2b768(ppbVar8,&pbStack_70,ppbVar9,ppbVar23,ppbVar5);
  if (((ulong)ppbVar8 & 1) == 0) {
    uVar13 = 0x82;
    uVar16 = 0xad;
LAB_10ae667e0:
    func_0x000107c2b29c(0x10,0,uVar13,&UNK_10f6d1254,uVar16);
    return (byte **)0x0;
  }
  pbVar24 = (byte *)(ulong)*pbStack_68;
  if ((pbStack_70 != (byte *)0x0) &&
     (bVar3 = pbVar24 < pbStack_78 + (long)pbStack_70,
     pbVar24 = pbVar24 + -(long)(pbStack_78 + (long)pbStack_70), bVar3)) {
    uVar13 = 0x44;
    uVar16 = 0xb7;
    goto LAB_10ae667e0;
  }
  pbVar19 = (byte *)param_3[1];
  if (pbVar19 == (byte *)0x0) {
    plVar6 = param_3;
    func_0x000107c2b684(param_3,(long)(pbStack_78 + (long)pbStack_70 + (long)pbVar24) * 2);
    if ((int)plVar6 == 0) {
      return (byte **)0x0;
    }
    lStack_90 = *param_3;
    unaff_x26 = (byte **)param_3[1];
    unaff_x27 = (byte **)(long)*(int *)((long)param_4 + 0xc);
    ppbVar8 = param_4;
    func_0x000107c2b858();
    pbStack_a8 = param_1[6] + 0x30;
    uStack_a0 = 0x20;
    pbStack_b0 = (byte *)0x20;
    puVar17 = &UNK_10e52b2c9;
    ppbVar23 = param_4 + 2;
    param_8 = (int)param_1[6] + 0x10;
    param_7 = 0xd;
    ppbVar9 = unaff_x26;
    ppbVar5 = unaff_x27;
    FUN_10ae3c9f4();
    if ((int)ppbVar8 != 1) {
      return (byte **)0x0;
    }
    pbVar19 = (byte *)param_3[1];
  }
  lVar20 = *param_3;
  if ((uint)param_2 == ((*(byte *)((long)param_1 + 0xa4) ^ 0xffffffff) & 1)) {
    pbVar21 = pbVar19;
    if (pbStack_70 <= pbVar19) {
      pbVar21 = pbStack_70;
    }
    param_8 = (int)pbVar21;
    if (((byte *)((long)pbStack_70 << 1) <= pbVar19) &&
       ((byte *)((long)(pbStack_70 + (long)pbVar24) * 2) <= pbVar19)) {
      pbVar21 = (byte *)((long)pbStack_70 << 1);
      pbVar22 = (byte *)((long)(pbStack_70 + (long)pbVar24) * 2);
      lVar18 = lVar20;
LAB_10ae66908:
      pbVar1 = pbVar19 + -(long)pbVar21;
      if (pbVar24 <= pbVar19 + -(long)pbVar21) {
        pbVar1 = pbVar24;
      }
      pbVar24 = pbVar19 + -(long)pbVar22;
      if (pbStack_78 <= pbVar19 + -(long)pbVar22) {
        pbVar24 = pbStack_78;
      }
      if (param_6 == (byte *)0x0) {
        param_5 = pbVar22 + lVar20;
        param_6 = pbVar24;
      }
      else if (param_6 != pbStack_78) {
        return (byte **)0x0;
      }
      pbStack_b0 = param_5;
      pbStack_a8 = param_6;
      func_0x000107c2b734(&pbStack_68,param_2,*(undefined2 *)(param_1 + 2),**param_1,param_4[0x1a],
                          lVar20 + (long)pbVar21,pbVar1,lVar18);
      pbVar24 = pbStack_68;
      if (pbStack_68 == (byte *)0x0) {
        return (byte **)0x0;
      }
      if ((uint)param_2 == 0) {
        pbStack_68 = (byte *)0x0;
        ppbVar8 = &pbStack_80;
        pbStack_80 = pbVar24;
        (**(code **)(*param_1 + 0x88))(param_1,3,&pbStack_80,0,0);
      }
      else {
        pbStack_68 = (byte *)0x0;
        ppbVar8 = &pbStack_88;
        pbStack_88 = pbVar24;
        (**(code **)(*param_1 + 0x90))(param_1,3,&pbStack_88,0,0);
      }
      func_0x000107c2b688(ppbVar8,0);
      pbVar24 = pbStack_68;
      pbStack_68 = (byte *)0x0;
      if (pbVar24 != (byte *)0x0) {
        pbVar19 = pbVar24 + 8;
        if (*(long *)pbVar19 != 0) {
          (**(code **)(*(long *)pbVar19 + 0x18))(pbVar19);
          pbVar19[0] = 0;
          pbVar19[1] = 0;
          pbVar19[2] = 0;
          pbVar19[3] = 0;
          pbVar19[4] = 0;
          pbVar19[5] = 0;
          pbVar19[6] = 0;
          pbVar19[7] = 0;
        }
        func_0x000107c2b534(pbVar24);
        return param_1;
      }
      return param_1;
    }
  }
  else if ((pbStack_70 <= pbVar19) && (pbVar21 = pbVar24 + (long)pbStack_70 * 2, pbVar21 <= pbVar19)
          ) {
    pbVar22 = pbVar19 + -(long)pbStack_70;
    if (pbStack_70 <= pbVar19 + -(long)pbStack_70) {
      pbVar22 = pbStack_70;
    }
    param_8 = (int)pbVar22;
    pbVar22 = pbStack_78 + (long)(pbStack_70 + (long)pbVar24) * 2;
    if (pbVar22 <= pbVar19) {
      lVar18 = lVar20 + (long)pbStack_70;
      goto LAB_10ae66908;
    }
  }
  _abort();
  puVar11 = (undefined1 *)0x0;
  func_0x000107c2b688(&pbStack_80);
  pbVar19 = pbStack_68;
  pbStack_68 = (byte *)0x0;
  if (pbVar19 != (byte *)0x0) {
    param_5 = pbVar19 + 8;
    if (*(long *)param_5 != 0) {
      (**(code **)(*(long *)param_5 + 0x18))(param_5);
      param_5[0] = 0;
      param_5[1] = 0;
      param_5[2] = 0;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      param_5[6] = 0;
      param_5[7] = 0;
    }
    func_0x000107c2b534(pbVar19);
  }
  ppbVar7 = ppbVar8;
  __Unwind_Resume();
  pbStack_d0 = pbVar19;
  pcStack_b8 = FUN_10ae66a5c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppbStack_e0 = param_4;
  pbStack_d8 = param_5;
  ppbStack_c8 = ppbVar8;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((*(byte *)((long)ppbVar7 + 0x61a) >> 1 & 1) == 0) {
    pbVar19 = ppbVar7[0x34];
    lStack_148 = *(long *)(*ppbVar7 + 0x30) + 0x10;
    uStack_140 = 0x20;
    uStack_150 = 0x20;
    puVar17 = &UNK_10e52b2a4;
    param_8 = (int)*(long *)(*ppbVar7 + 0x30) + 0x30;
    param_7 = 0xd;
LAB_10ae66b1c:
    puVar14 = (undefined8 *)0x30;
    puVar12 = puVar11;
    ppbVar15 = ppbVar9;
    ppbVar5 = ppbVar23;
    FUN_10ae3c9f4(pbVar19,puVar11,0x30,ppbVar9,ppbVar23);
    if ((int)pbVar19 != 1) goto LAB_10ae66b30;
    ppbVar8 = (byte **)0x30;
  }
  else {
    ppbVar8 = ppbVar7 + 0x33;
    puVar12 = auStack_128;
    puVar14 = &uStack_130;
    ppbVar15 = ppbVar23;
    func_0x000107c2b890(ppbVar8,puVar12,puVar14);
    if ((int)ppbVar8 != 0) {
      pbVar19 = ppbVar7[0x34];
      lStack_148 = 0;
      uStack_140 = 0;
      uStack_150 = uStack_130;
      puVar17 = &UNK_10e52b2b2;
      param_8 = (int)auStack_128;
      param_7 = 0x16;
      goto LAB_10ae66b1c;
    }
LAB_10ae66b30:
    ppbVar8 = (byte **)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return ppbVar8;
  }
  ___stack_chk_fail();
  pbStack_198 = pbStack_70;
  pcStack_158 = FUN_10ae66b64;
  pbVar19 = ppbVar8[6];
  pbStack_1b0 = pbVar24;
  ppbStack_1a8 = unaff_x27;
  ppbStack_1a0 = unaff_x26;
  plStack_190 = param_3;
  pbStack_188 = param_6;
  ppbStack_180 = ppbVar7;
  puStack_178 = puVar11;
  ppbStack_170 = ppbVar9;
  ppbStack_168 = ppbVar23;
  ppuStack_160 = &puStack_c0;
  if (((*(long *)(pbVar19 + 0x110) != 0) &&
      (uVar2 = *(uint *)(*(long *)(pbVar19 + 0x110) + 0x618), (uVar2 & 0x408) == 0)) &&
     (((*(byte *)((long)ppbVar8 + 0xa4) & 1) == 0 || ((uVar2 >> 0xb & 1) == 0)))) {
    uVar13 = 0x11c;
    uVar16 = 0x155;
LAB_10ae66d00:
    func_0x000107c2b29c(0x10,0,uVar13,&UNK_10f6d1254,uVar16);
    return (byte **)0x0;
  }
  ppbVar9 = ppbVar8;
  func_0x000107c2b89c();
  if (0x303 < (uint)ppbVar9) {
    FUN_10ae67b8c(ppbVar8,puVar12,puVar14,pbVar19 + 0x178,pbVar19[0x1aa],ppbVar15,ppbVar5);
    return ppbVar8;
  }
  if (param_8 == 0) {
    lVar20 = 0x40;
  }
  else {
    if (0xffff < param_7) {
      uVar13 = 0x45;
      uVar16 = 0x167;
      goto LAB_10ae66d00;
    }
    lVar20 = param_7 + 0x42;
  }
  puStack_1c0 = (undefined8 *)0x0;
  uStack_1b8 = 0;
  ppuVar10 = &puStack_1c0;
  func_0x000107c2b684(ppuVar10,lVar20);
  if (((ulong)ppuVar10 & 1) == 0) {
    func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6d1254,0x16e);
    ppbVar8 = (byte **)0x0;
    goto LAB_10ae66d4c;
  }
  pbVar24 = ppbVar8[6];
  uVar13 = *(undefined8 *)(pbVar24 + 0x30);
  uVar25 = *(undefined8 *)(pbVar24 + 0x48);
  uVar16 = *(undefined8 *)(pbVar24 + 0x40);
  puStack_1c0[1] = *(undefined8 *)(pbVar24 + 0x38);
  *puStack_1c0 = uVar13;
  puStack_1c0[3] = uVar25;
  puStack_1c0[2] = uVar16;
  pbVar24 = ppbVar8[6];
  uVar13 = *(undefined8 *)(pbVar24 + 0x10);
  uVar25 = *(undefined8 *)(pbVar24 + 0x28);
  uVar16 = *(undefined8 *)(pbVar24 + 0x20);
  puStack_1c0[5] = *(undefined8 *)(pbVar24 + 0x18);
  puStack_1c0[4] = uVar13;
  puStack_1c0[7] = uVar25;
  puStack_1c0[6] = uVar16;
  if ((param_8 != 0) &&
     (*(ushort *)(puStack_1c0 + 8) =
           (ushort)(param_7 >> 8) & 0xff | (ushort)(((uint)param_7 & 0xff00ff) << 8), param_7 != 0))
  {
    _memcpy((long)puStack_1c0 + 0x42,puVar17,param_7);
  }
  lVar20 = *(long *)(ppbVar8[6] + 0x110);
  if ((lVar20 == 0) || ((*(byte *)(lVar20 + 0x618) >> 3 & 1) != 0)) {
    ppbVar8 = (byte **)(ppbVar8[6] + 0x1c8);
LAB_10ae66d10:
    pbVar24 = *ppbVar8;
  }
  else {
    pbVar24 = *(byte **)(lVar20 + 0x5e0);
    if ((pbVar24 == (byte *)0x0) && (pbVar24 = *(byte **)(lVar20 + 0x5d8), pbVar24 == (byte *)0x0))
    {
      ppbVar8 = ppbVar8 + 0xb;
      goto LAB_10ae66d10;
    }
  }
  func_0x000107c2b858(pbVar24);
  iVar4 = (int)pbVar24;
  FUN_10ae3c9f4();
  ppbVar8 = (byte **)(ulong)(iVar4 == 1);
LAB_10ae66d4c:
  func_0x000107c2b534(puStack_1c0);
  return ppbVar8;
}



/* Entry: 10ae66a5c; end: 10ae66b63;  */

ulong FUN_10ae66a5c(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined *param_6,ulong param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [64];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)((long)param_1 + 0x61a) >> 1 & 1) == 0) {
    lVar3 = param_1[0x34];
    param_6 = &UNK_10e52b2a4;
    param_8 = (int)*(undefined8 *)(*param_1 + 0x30) + 0x30;
    param_7 = 0xd;
LAB_10ae66b1c:
    puVar9 = (undefined1 *)0x30;
    FUN_10ae3c9f4(lVar3,param_2,0x30,param_3,param_4);
    puVar8 = param_2;
    uVar10 = param_3;
    param_5 = param_4;
    if ((int)lVar3 != 1) goto LAB_10ae66b30;
    uVar5 = 0x30;
  }
  else {
    plVar4 = param_1 + 0x33;
    puVar8 = auStack_78;
    puVar9 = auStack_80;
    uVar10 = param_4;
    func_0x000107c2b890(plVar4,puVar8,puVar9);
    if ((int)plVar4 != 0) {
      lVar3 = param_1[0x34];
      param_6 = &UNK_10e52b2b2;
      param_8 = (int)auStack_78;
      param_7 = 0x16;
      goto LAB_10ae66b1c;
    }
LAB_10ae66b30:
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar5;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(uVar5 + 0x30);
  if (((*(long *)(lVar3 + 0x110) != 0) &&
      (uVar1 = *(uint *)(*(long *)(lVar3 + 0x110) + 0x618), (uVar1 & 0x408) == 0)) &&
     (((*(byte *)(uVar5 + 0xa4) & 1) == 0 || ((uVar1 >> 0xb & 1) == 0)))) {
    uVar10 = 0x11c;
    uVar11 = 0x155;
LAB_10ae66d00:
    func_0x000107c2b29c(0x10,0,uVar10,&UNK_10f6d1254,uVar11);
    return 0;
  }
  uVar6 = uVar5;
  func_0x000107c2b89c();
  if (0x303 < (uint)uVar6) {
    FUN_10ae67b8c(uVar5,puVar8,puVar9,lVar3 + 0x178,*(undefined1 *)(lVar3 + 0x1aa),uVar10,param_5);
    return uVar5;
  }
  if (param_8 == 0) {
    lVar3 = 0x40;
  }
  else {
    if (0xffff < param_7) {
      uVar10 = 0x45;
      uVar11 = 0x167;
      goto LAB_10ae66d00;
    }
    lVar3 = param_7 + 0x42;
  }
  puStack_110 = (undefined8 *)0x0;
  uStack_108 = 0;
  ppuVar7 = &puStack_110;
  func_0x000107c2b684(ppuVar7,lVar3);
  if (((ulong)ppuVar7 & 1) == 0) {
    func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6d1254,0x16e);
    uVar5 = 0;
    goto LAB_10ae66d4c;
  }
  lVar3 = *(long *)(uVar5 + 0x30);
  uVar10 = *(undefined8 *)(lVar3 + 0x30);
  uVar13 = *(undefined8 *)(lVar3 + 0x48);
  uVar11 = *(undefined8 *)(lVar3 + 0x40);
  puStack_110[1] = *(undefined8 *)(lVar3 + 0x38);
  *puStack_110 = uVar10;
  puStack_110[3] = uVar13;
  puStack_110[2] = uVar11;
  lVar3 = *(long *)(uVar5 + 0x30);
  uVar10 = *(undefined8 *)(lVar3 + 0x10);
  uVar13 = *(undefined8 *)(lVar3 + 0x28);
  uVar11 = *(undefined8 *)(lVar3 + 0x20);
  puStack_110[5] = *(undefined8 *)(lVar3 + 0x18);
  puStack_110[4] = uVar10;
  puStack_110[7] = uVar13;
  puStack_110[6] = uVar11;
  if ((param_8 != 0) &&
     (*(ushort *)(puStack_110 + 8) =
           (ushort)(param_7 >> 8) & 0xff | (ushort)(((uint)param_7 & 0xff00ff) << 8), param_7 != 0))
  {
    _memcpy((long)puStack_110 + 0x42,param_6,param_7);
  }
  lVar3 = *(long *)(*(long *)(uVar5 + 0x30) + 0x110);
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x618) >> 3 & 1) != 0)) {
    plVar4 = (long *)(*(long *)(uVar5 + 0x30) + 0x1c8);
LAB_10ae66d10:
    lVar12 = *plVar4;
  }
  else {
    lVar12 = *(long *)(lVar3 + 0x5e0);
    if ((lVar12 == 0) && (lVar12 = *(long *)(lVar3 + 0x5d8), lVar12 == 0)) {
      plVar4 = (long *)(uVar5 + 0x58);
      goto LAB_10ae66d10;
    }
  }
  func_0x000107c2b858(lVar12);
  iVar2 = (int)lVar12;
  FUN_10ae3c9f4();
  uVar5 = (ulong)(iVar2 == 1);
LAB_10ae66d4c:
  func_0x000107c2b534(puStack_110);
  return uVar5;
}



/* Entry: 10ae66b64; end: 10ae66d8f;  */

ulong FUN_10ae66b64(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,ulong param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  lVar9 = *(long *)(param_1 + 0x30);
  if (((*(long *)(lVar9 + 0x110) != 0) &&
      (uVar1 = *(uint *)(*(long *)(lVar9 + 0x110) + 0x618), (uVar1 & 0x408) == 0)) &&
     (((*(byte *)(param_1 + 0xa4) & 1) == 0 || ((uVar1 >> 0xb & 1) == 0)))) {
    uVar4 = 0x11c;
    uVar5 = 0x155;
LAB_10ae66d00:
    func_0x000107c2b29c(0x10,0,uVar4,&UNK_10f6d1254,uVar5);
    return 0;
  }
  uVar7 = param_1;
  func_0x000107c2b89c();
  if (0x303 < (uint)uVar7) {
    FUN_10ae67b8c(param_1,param_2,param_3,lVar9 + 0x178,*(undefined1 *)(lVar9 + 0x1aa),param_4,
                  param_5);
    return param_1;
  }
  if (param_8 == 0) {
    lVar9 = 0x40;
  }
  else {
    if (0xffff < param_7) {
      uVar4 = 0x45;
      uVar5 = 0x167;
      goto LAB_10ae66d00;
    }
    lVar9 = param_7 + 0x42;
  }
  puStack_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  ppuVar3 = &puStack_70;
  func_0x000107c2b684(ppuVar3,lVar9);
  if (((ulong)ppuVar3 & 1) == 0) {
    func_0x000107c2b29c(0x10,0,0x41,&UNK_10f6d1254,0x16e);
    uVar7 = 0;
    goto LAB_10ae66d4c;
  }
  lVar9 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(lVar9 + 0x30);
  uVar10 = *(undefined8 *)(lVar9 + 0x48);
  uVar5 = *(undefined8 *)(lVar9 + 0x40);
  puStack_70[1] = *(undefined8 *)(lVar9 + 0x38);
  *puStack_70 = uVar4;
  puStack_70[3] = uVar10;
  puStack_70[2] = uVar5;
  lVar9 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(lVar9 + 0x10);
  uVar10 = *(undefined8 *)(lVar9 + 0x28);
  uVar5 = *(undefined8 *)(lVar9 + 0x20);
  puStack_70[5] = *(undefined8 *)(lVar9 + 0x18);
  puStack_70[4] = uVar4;
  puStack_70[7] = uVar10;
  puStack_70[6] = uVar5;
  if ((param_8 != 0) &&
     (*(ushort *)(puStack_70 + 8) =
           (ushort)(param_7 >> 8) & 0xff | (ushort)(((uint)param_7 & 0xff00ff) << 8), param_7 != 0))
  {
    _memcpy((long)puStack_70 + 0x42,param_6,param_7);
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x618) >> 3 & 1) != 0)) {
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + 0x1c8);
LAB_10ae66d10:
    lVar8 = *plVar6;
  }
  else {
    lVar8 = *(long *)(lVar9 + 0x5e0);
    if ((lVar8 == 0) && (lVar8 = *(long *)(lVar9 + 0x5d8), lVar8 == 0)) {
      plVar6 = (long *)(param_1 + 0x58);
      goto LAB_10ae66d10;
    }
  }
  func_0x000107c2b858(lVar8);
  iVar2 = (int)lVar8;
  FUN_10ae3c9f4();
  uVar7 = (ulong)(iVar2 == 1);
LAB_10ae66d4c:
  func_0x000107c2b534(puStack_70);
  return uVar7;
}



/* Entry: 10ae66d90; end: 10ae673bf;  */

long * FUN_10ae66d90(ulong *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long **pplVar9;
  undefined8 uVar10;
  uint uVar11;
  long *plVar12;
  ulong *puVar13;
  char *pcVar14;
  char *pcVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  char *pcStack_130;
  long lStack_128;
  long *aplStack_110 [2];
  long lStack_100;
  byte bStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar5 = (int)&pcStack_130;
  plVar16 = (long *)*param_1;
  lVar20 = *(long *)(param_1[1] + 0x20);
  plVar21 = *(long **)(lVar20 + 0x98);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(byte *)((long)param_1 + 0x61a) >> 5 & 1) == 0) {
    plVar12 = plVar16;
    (**(code **)(*plVar16 + 0x58))(plVar16,&uStack_70,auStack_90,0xb);
    if ((int)plVar12 != 0) {
      lVar18 = -0x80;
LAB_10ae66e08:
      puVar8 = &stack0xfffffffffffffff0 + lVar18;
      puVar7 = puVar8;
      func_0x000107c2b218(puVar8,0);
      if (((int)puVar7 == 0) || (func_0x000107c34f3c(puVar8,auStack_b0,3), (int)puVar8 == 0)) {
        uVar10 = 0x1a6;
        goto LAB_10ae66e6c;
      }
      puVar13 = param_1;
      FUN_10ae61f18();
      if (((ulong)puVar13 & 1) == 0) {
        func_0x000107c2b6fc(plVar16,&uStack_70);
        goto LAB_10ae66e74;
      }
      plVar12 = *(long **)(lVar20 + 8);
      if ((plVar12 == (long *)0x0) || (*plVar12 == 0)) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)plVar12[1];
      }
      puVar7 = auStack_b0;
      func_0x000107c34f3c(puVar7,auStack_d0,3);
      if ((int)puVar7 == 0) {
LAB_10ae67090:
        uVar10 = 0x1b4;
      }
      else {
        puVar7 = auStack_d0;
        func_0x000107c2b21c(puVar7,*(undefined8 *)(lVar18 + 8),*(undefined8 *)(lVar18 + 0x10));
        if ((int)puVar7 == 0) goto LAB_10ae67090;
        puVar7 = auStack_b0;
        func_0x000107c34f3c(puVar7,auStack_f0,2);
        if ((int)puVar7 == 0) goto LAB_10ae67090;
        uVar11 = (uint)param_1[0xc3];
        if (((uVar11 >> 2 & 1) == 0) || (*(long *)(lVar20 + 0x60) == 0)) {
LAB_10ae66f44:
          if (((uVar11 >> 7 & 1) == 0) || (*(long *)(lVar20 + 0x68) == 0)) {
LAB_10ae66fb8:
            puVar13 = param_1;
            func_0x00010ae6295c();
            if ((int)puVar13 == 0) {
LAB_10ae67018:
              puVar13 = *(ulong **)(lVar20 + 8);
              if (puVar13 != (ulong *)0x0) {
                uVar19 = 1;
                do {
                  if (*puVar13 <= uVar19) break;
                  lVar18 = *(long *)(puVar13[1] + uVar19 * 8);
                  puVar7 = auStack_b0;
                  func_0x000107c34f3c(puVar7,aplStack_110,3);
                  if ((int)puVar7 == 0) {
LAB_10ae67100:
                    uVar10 = 0x1ea;
                    goto LAB_10ae66e6c;
                  }
                  pplVar9 = aplStack_110;
                  func_0x000107c2b21c(pplVar9,*(undefined8 *)(lVar18 + 8),
                                      *(undefined8 *)(lVar18 + 0x10));
                  if ((int)pplVar9 == 0) goto LAB_10ae67100;
                  puVar7 = auStack_b0;
                  func_0x000107c2b228(puVar7,0);
                  if ((int)puVar7 == 0) goto LAB_10ae67100;
                  uVar19 = uVar19 + 1;
                  puVar13 = *(ulong **)(lVar20 + 8);
                } while (puVar13 != (ulong *)0x0);
              }
              if ((*(byte *)((long)param_1 + 0x61a) >> 5 & 1) == 0) {
                func_0x000107c2b6fc(plVar16,&uStack_70);
                goto LAB_10ae66e74;
              }
              pcStack_130 = (char *)0x0;
              lStack_128 = 0;
              puVar6 = &uStack_70;
              func_0x000107c2b784(puVar6,&pcStack_130);
              if (((ulong)puVar6 & 1) == 0) {
                uVar10 = 0x1f5;
              }
              else {
                lVar20 = *(long *)(plVar16[0xd] + 0x278);
                if (lVar20 != 0) {
                  plVar21 = *(long **)(plVar16[0xd] + 0x280);
                  lVar20 = lVar20 * 0x18;
                  do {
                    if ((short)plVar21[2] == (short)param_1[0x57]) {
                      if (*plVar21 != 0) {
                        plVar12 = plVar16;
                        (**(code **)(*plVar16 + 0x58))(plVar16,&uStack_70,auStack_90,0x19);
                        if ((int)plVar12 != 0) {
                          puVar7 = auStack_90;
                          func_0x000107c2b228(puVar7,(short)param_1[0x57]);
                          lVar20 = lStack_128;
                          if ((int)puVar7 != 0) {
                            puVar7 = auStack_90;
                            FUN_10ae1fabc(puVar7,lStack_128);
                            if ((int)puVar7 != 0) {
                              puVar7 = auStack_90;
                              func_0x000107c34f3c(puVar7,aplStack_110,3);
                              pcVar3 = pcStack_130;
                              if ((int)puVar7 != 0) {
                                uVar19 = param_1[0xc2];
                                if ((((uVar19 == 0) ||
                                     ((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) != 0)) ||
                                    (*(short *)(uVar19 + 0x82) != (short)param_1[0x57])) ||
                                   (*(long *)(uVar19 + 0x90) != lVar20)) goto LAB_10ae672a4;
                                if (lVar20 == 0) goto LAB_10ae6723c;
                                pcVar14 = pcStack_130;
                                pcVar15 = *(char **)(uVar19 + 0x88);
                                lVar18 = lVar20;
                                goto LAB_10ae67220;
                              }
                            }
                          }
                        }
                        uVar10 = 0x20d;
                        goto LAB_10ae67274;
                      }
                      break;
                    }
                    plVar21 = plVar21 + 3;
                    lVar20 = lVar20 + -0x18;
                  } while (lVar20 != 0);
                }
                uVar10 = 0x202;
              }
              goto LAB_10ae67274;
            }
            lVar18 = *plVar21;
            puVar7 = auStack_f0;
            func_0x000107c2b228(puVar7,0x22);
            if ((int)puVar7 != 0) {
              puVar7 = auStack_f0;
              func_0x000107c34f3c(puVar7,aplStack_110,2);
              if ((int)puVar7 != 0) {
                pplVar9 = aplStack_110;
                func_0x000107c2b21c(pplVar9,*(undefined8 *)(lVar18 + 8),
                                    *(undefined8 *)(lVar18 + 0x10));
                if ((int)pplVar9 != 0) {
                  iVar5 = (int)auStack_f0;
                  func_0x000107c2b20c();
                  if (iVar5 != 0) {
                    *(ushort *)(plVar16[6] + 0xd4) = *(ushort *)(plVar16[6] + 0xd4) | 0x80;
                    goto LAB_10ae67018;
                  }
                }
              }
            }
            uVar10 = 0x1dd;
          }
          else {
            puVar7 = auStack_f0;
            func_0x000107c2b228(puVar7,5);
            if ((int)puVar7 != 0) {
              puVar7 = auStack_f0;
              func_0x000107c34f3c(puVar7,aplStack_110,2);
              if ((int)puVar7 != 0) {
                pplVar9 = aplStack_110;
                func_0x000107c2b218(pplVar9,1);
                if ((int)pplVar9 != 0) {
                  pplVar9 = aplStack_110;
                  func_0x000107c34f3c(pplVar9,&pcStack_130,3);
                  if (((int)pplVar9 != 0) &&
                     (func_0x000107c2b21c(&pcStack_130,*(undefined8 *)(*(long *)(lVar20 + 0x68) + 8)
                                          ,*(undefined8 *)(*(long *)(lVar20 + 0x68) + 0x10)),
                     iVar5 != 0)) {
                    iVar5 = (int)auStack_f0;
                    func_0x000107c2b20c();
                    if (iVar5 != 0) goto LAB_10ae66fb8;
                  }
                }
              }
            }
            uVar10 = 0x1d0;
          }
        }
        else {
          puVar7 = auStack_f0;
          func_0x000107c2b228(puVar7,0x12);
          if ((int)puVar7 != 0) {
            puVar7 = auStack_f0;
            func_0x000107c34f3c(puVar7,aplStack_110,2);
            if ((int)puVar7 != 0) {
              pplVar9 = aplStack_110;
              func_0x000107c2b21c(pplVar9,*(undefined8 *)(*(long *)(lVar20 + 0x60) + 8),
                                  *(undefined8 *)(*(long *)(lVar20 + 0x60) + 0x10));
              if ((int)pplVar9 != 0) {
                iVar4 = (int)auStack_f0;
                func_0x000107c2b20c();
                if (iVar4 != 0) {
                  uVar11 = (uint)param_1[0xc3];
                  goto LAB_10ae66f44;
                }
              }
            }
          }
          uVar10 = 0x1c1;
        }
      }
LAB_10ae66e6c:
      func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d12c1,uVar10);
    }
  }
  else {
    lVar18 = -0x60;
    puVar6 = &uStack_70;
    func_0x000107c2b200(puVar6,0x400);
    if ((int)puVar6 != 0) goto LAB_10ae66e08;
  }
  plVar16 = (long *)0x0;
  goto LAB_10ae66e74;
  while (pcVar14 = pcVar14 + 1, pcVar15 = pcVar15 + 1, lVar18 != 0) {
LAB_10ae67220:
    lVar18 = lVar18 + -1;
    if (*pcVar15 != *pcVar14) goto LAB_10ae672a4;
  }
LAB_10ae6723c:
  if (*(long *)(uVar19 + 0xa0) == 0) {
LAB_10ae672a4:
    plVar12 = plVar16;
    (*(code *)*plVar21)(plVar16,aplStack_110,pcStack_130,lVar20);
    if ((int)plVar12 == 0) {
      uVar10 = 0x21d;
      goto LAB_10ae67274;
    }
    if ((uVar19 != 0) && ((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) != 0)) {
      *(short *)(uVar19 + 0x82) = (short)param_1[0x57];
      lVar18 = uVar19 + 0x88;
      func_0x000107c2b684(lVar18,lVar20);
      uVar11 = (uint)lVar18 ^ 1;
      if (lVar20 == 0) {
        uVar11 = 1;
      }
      if ((uVar11 & 1) == 0) {
        _memcpy(*(undefined8 *)(uVar19 + 0x88),pcVar3,lVar20);
      }
      if ((uint)lVar18 != 0) {
        lVar18 = lStack_100 + (ulong)bStack_f8;
        lVar1 = *aplStack_110[0];
        lVar2 = aplStack_110[0][1];
        lVar17 = lVar2 - lVar18;
        lVar20 = uVar19 + 0x98;
        func_0x000107c2b684(lVar20,lVar17);
        uVar11 = (uint)lVar20 ^ 1;
        if (lVar2 == lVar18) {
          uVar11 = 1;
        }
        if ((uVar11 & 1) == 0) {
          _memcpy(*(undefined8 *)(uVar19 + 0x98),lVar18 + lVar1,lVar17);
        }
        if ((uint)lVar20 != 0) goto LAB_10ae672d0;
      }
      goto LAB_10ae67278;
    }
LAB_10ae672d0:
    func_0x000107c2b6fc(plVar16,&uStack_70);
    if (((ulong)plVar16 & 1) == 0) {
      uVar10 = 0x22b;
      goto LAB_10ae67274;
    }
    plVar16 = (long *)0x1;
  }
  else {
    pplVar9 = aplStack_110;
    func_0x000107c2b21c(pplVar9,*(undefined8 *)(uVar19 + 0x98));
    if ((int)pplVar9 != 0) goto LAB_10ae672d0;
    uVar10 = 0x218;
LAB_10ae67274:
    func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d12c1,uVar10);
LAB_10ae67278:
    plVar16 = (long *)0x0;
  }
  func_0x000107c2b534(pcStack_130);
LAB_10ae66e74:
  func_0x000107c2b204(&uStack_70);
  return plVar16;
}



/* Entry: 10ae673c0; end: 10ae6778f;  */

undefined8 * FUN_10ae673c0(undefined8 *param_1)

{
  int iVar1;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  code *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char *pcStack_f0;
  long lStack_e8;
  char *pcStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  short sStack_52;
  int iVar2;
  
  iVar1 = (int)&uStack_110;
  iVar2 = (int)&uStack_110;
  uVar6 = 0;
  plVar12 = (long *)*param_1;
  puVar14 = param_1;
  FUN_10ae5ad08(param_1,&sStack_52);
  if (((ulong)puVar14 & 1) == 0) {
    FUN_10ae60390(plVar12,2,0x28);
    return (undefined8 *)0x2;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  plVar3 = plVar12;
  (**(code **)(*plVar12 + 0x58))(plVar12,&uStack_80,auStack_a0,0xf);
  if ((int)plVar3 != 0) {
    puVar4 = auStack_a0;
    func_0x000107c2b228(puVar4,sStack_52);
    if ((int)puVar4 != 0) {
      lVar5 = param_1[0xb9];
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) ||
         (pcVar8 = *(code **)(*(long *)(lVar5 + 0x10) + 0x60), pcVar8 == (code *)0x0)) {
        uVar13 = 0;
      }
      else {
        (*pcVar8)();
        uVar13 = (ulong)(int)lVar5;
      }
      puVar4 = auStack_a0;
      func_0x000107c34f3c(puVar4,&lStack_c0,2);
      if ((int)puVar4 != 0) {
        plVar3 = &lStack_c0;
        FUN_10ae1fa6c(plVar3,&uStack_c8,uVar13);
        if ((int)plVar3 != 0) {
          pcStack_e0 = (char *)0x0;
          lStack_d8 = 0;
          puVar14 = param_1;
          func_0x000107c2b8cc(param_1,&pcStack_e0,(*(byte *)((long)plVar12 + 0xa4) ^ 0xff) & 1);
          if (((ulong)puVar14 & 1) == 0) {
            puVar14 = (undefined8 *)0x2;
            FUN_10ae60390(plVar12,2,0x50);
          }
          else {
            lVar5 = param_1[0xc2];
            pcStack_f0 = (char *)0x0;
            lStack_e8 = 0;
            if (lVar5 == 0) goto LAB_10ae67624;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            func_0x000107c2b200(&uStack_110,0x40);
            if (((iVar1 == 0) || (func_0x000107c2b2cc(&uStack_110,param_1[0xb9]), iVar2 == 0)) ||
               (func_0x000107c2b784(&uStack_110,&pcStack_f0), (uVar6 & 1) == 0)) {
              FUN_10ae60390(plVar12,2,0x50);
              func_0x000107c2b204(&uStack_110);
LAB_10ae6761c:
              puVar14 = (undefined8 *)0x2;
            }
            else {
              func_0x000107c2b204(&uStack_110);
              if ((((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) == 0) &&
                  (sStack_52 == *(short *)(lVar5 + 0x38))) && (lStack_d8 == *(long *)(lVar5 + 0x48))
                 ) {
                if (lStack_d8 != 0) {
                  pcVar9 = *(char **)(lVar5 + 0x40);
                  pcVar10 = pcStack_e0;
                  lVar11 = lStack_d8;
                  do {
                    lVar11 = lVar11 + -1;
                    if (*pcVar10 != *pcVar9) goto LAB_10ae67624;
                    pcVar9 = pcVar9 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (lVar11 != 0);
                }
                if (lStack_e8 != *(long *)(lVar5 + 0x58)) goto LAB_10ae67624;
                if (lStack_e8 != 0) {
                  pcVar9 = *(char **)(lVar5 + 0x50);
                  pcVar10 = pcStack_f0;
                  lVar11 = lStack_e8;
                  do {
                    lVar11 = lVar11 + -1;
                    if (*pcVar10 != *pcVar9) goto LAB_10ae67624;
                    pcVar9 = pcVar9 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (lVar11 != 0);
                }
                if (uVar13 <= *(ulong *)(lVar5 + 0x68) - 1) goto LAB_10ae67624;
                uStack_d0 = *(ulong *)(lVar5 + 0x68);
                _memcpy(uStack_c8,*(undefined8 *)(lVar5 + 0x60));
              }
              else {
LAB_10ae67624:
                lVar11 = lStack_d8;
                pcVar9 = pcStack_e0;
                puVar14 = param_1;
                FUN_10ae637fc(param_1,uStack_c8,&uStack_d0,uVar13,sStack_52,pcStack_e0,lStack_d8);
                if ((int)puVar14 != 0) goto LAB_10ae67650;
                if ((lVar5 != 0) && ((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) != 0)) {
                  *(short *)(lVar5 + 0x38) = sStack_52;
                  func_0x000107c2b534(*(undefined8 *)(lVar5 + 0x40));
                  *(char **)(lVar5 + 0x40) = pcVar9;
                  *(long *)(lVar5 + 0x48) = lVar11;
                  pcStack_e0 = (char *)0x0;
                  lStack_d8 = 0;
                  func_0x000107c2b534(*(undefined8 *)(lVar5 + 0x50));
                  uVar13 = uStack_d0;
                  *(char **)(lVar5 + 0x50) = pcStack_f0;
                  *(long *)(lVar5 + 0x58) = lStack_e8;
                  pcStack_f0 = (char *)0x0;
                  lStack_e8 = 0;
                  uVar6 = lVar5 + 0x60;
                  func_0x000107c2b684(uVar6,uStack_d0);
                  uVar7 = (uint)uVar6 ^ 1;
                  if (uVar13 == 0) {
                    uVar7 = 1;
                  }
                  if ((uVar7 & 1) == 0) {
                    _memcpy(*(undefined8 *)(lVar5 + 0x60),uStack_c8,uVar13);
                  }
                  if ((uVar6 & 1) == 0) goto LAB_10ae6761c;
                }
              }
              uVar6 = *(ulong *)(lStack_c0 + 8) + uStack_d0;
              puVar14 = (undefined8 *)0x2;
              if (((lStack_b8 == 0) && (!CARRY8(*(ulong *)(lStack_c0 + 8),uStack_d0))) &&
                 (uVar6 <= *(ulong *)(lStack_c0 + 0x10))) {
                *(ulong *)(lStack_c0 + 8) = uVar6;
                func_0x000107c2b6fc(plVar12,&uStack_80);
                uVar7 = 0;
                if ((int)plVar12 == 0) {
                  uVar7 = 2;
                }
                puVar14 = (undefined8 *)(ulong)uVar7;
              }
            }
LAB_10ae67650:
            func_0x000107c2b534(pcStack_f0);
          }
          func_0x000107c2b534(pcStack_e0);
          goto LAB_10ae67660;
        }
      }
      puVar14 = (undefined8 *)0x2;
      FUN_10ae60390(plVar12,2,0x50);
      goto LAB_10ae67660;
    }
  }
  func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d12c1,0x23f);
  puVar14 = (undefined8 *)0x2;
LAB_10ae67660:
  func_0x000107c2b204(&uStack_80);
  return puVar14;
}



/* Entry: 10ae67790; end: 10ae67847;  */

undefined8 FUN_10ae67790(long *param_1,undefined1 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)auStack_60;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x58))(param_1,&uStack_40,auStack_60,0x18);
  if (((((int)plVar2 == 0) || (func_0x000107c2b218(auStack_60,param_2), iVar1 == 0)) ||
      (plVar2 = param_1, func_0x000107c2b6fc(param_1,&uStack_40), (int)plVar2 == 0)) ||
     (plVar2 = param_1, FUN_10ae67aa0(param_1,1), ((ulong)plVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    *(ushort *)(param_1[6] + 0xd4) = *(ushort *)(param_1[6] + 0xd4) | 0x400;
    uVar3 = 1;
  }
  func_0x000107c2b204(&uStack_40);
  return uVar3;
}



/* Entry: 10ae67848; end: 10ae67997;  */

void FUN_10ae67848(undefined8 *param_1,int param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_31;
  
  plVar3 = (long *)*param_1;
  *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) & 0xffffbfff;
  if (plVar3[0x13] == 0) {
    if (param_2 == 0) {
      uStack_31 = *(undefined1 *)*plVar3;
      uStack_38 = 0;
      uStack_40 = 0;
      puVar1 = &uStack_38;
      func_0x000107c2b738(puVar1,&uStack_31,&uStack_40);
      if (puVar1 != (undefined4 *)0x0) {
        plVar2 = plVar3;
        puStack_48 = puVar1;
        (**(code **)(*plVar3 + 0x90))(plVar3,0,&puStack_48,0,0);
        puVar1 = puStack_48;
        puStack_48 = (undefined4 *)0x0;
        if (puVar1 != (undefined4 *)0x0) {
          plVar4 = (long *)(puVar1 + 2);
          if (*plVar4 != 0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
            *plVar4 = 0;
          }
          func_0x000107c2b534(puVar1);
        }
        if ((((ulong)plVar2 & 1) != 0) && (**(long **)(plVar3[6] + 0x108) == 0)) {
          *(short *)((long)*(long **)(plVar3[6] + 0x108) + 0x26e) = (short)plVar3[2];
        }
      }
    }
    else {
      func_0x000107c2b8fc(plVar3,2,1,param_1[0xbb],param_1 + 0x11,param_1[4]);
    }
  }
  return;
}



/* Entry: 10ae67998; end: 10ae67a1f;  */

void FUN_10ae67998(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = 0x198;
  if (*(long *)(param_1 + 0x5f0) != 0) {
    lVar1 = 0x1c0;
  }
  lVar2 = param_2;
  func_0x000107c2b854(param_2);
  lVar3 = param_1;
  func_0x000107c34fd4(param_1,param_1 + lVar1,lVar2,*(undefined8 *)(param_2 + 0xd0));
  if ((int)lVar3 != 0) {
    func_0x000107c2b51c(param_1 + 0x28,auStack_38,*(undefined8 *)(param_1 + lVar1 + 8),
                        param_2 + 0x10,(long)*(int *)(param_2 + 0xc),param_1 + 0x28,
                        *(undefined8 *)(param_1 + 0x20));
  }
  return;
}



/* Entry: 10ae67a20; end: 10ae67a9f;  */

long * FUN_10ae67a20(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar6 = *param_1;
  if (((*(byte *)(lVar6 + 0xa4) & 1) == 0) && (param_1[0xbe] != 0)) {
    lVar4 = 0x1c0;
  }
  else {
    lVar4 = 0x198;
  }
  plVar5 = param_1;
  func_0x000107c34fdc(param_1,param_1 + 0xb,param_1[4],(long)param_1 + lVar4,&UNK_10e52b3e6,0xb);
  if ((int)plVar5 == 0) {
    return plVar5;
  }
  lVar4 = param_1[4];
  puVar3 = &UNK_10f6d1443;
  if (*(long *)(*(long *)(lVar6 + 0x68) + 0x2b0) == 0) {
    return (long *)0x1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar1 = puVar3;
  func_0x000107c613d0(&UNK_10f6d1443);
  puVar2 = &uStack_50;
  func_0x0001001ebea0(puVar2,puVar1 + lVar4 * 2 + 0x43);
  if ((int)puVar2 == 0) {
code_r0x0001001fde2c:
    uVar7 = 0;
  }
  else {
    func_0x000107c613d0(&UNK_10f6d1443);
    puVar2 = &uStack_50;
    func_0x0001001ed748(puVar2,&UNK_10f6d1443,puVar3);
    if ((int)puVar2 == 0) goto code_r0x0001001fde2c;
    puVar2 = &uStack_50;
    func_0x0001001ec260(puVar2,0x20);
    if ((int)puVar2 == 0) goto code_r0x0001001fde2c;
    puVar2 = &uStack_50;
    func_0x000107c34fc4(puVar2,*(long *)(lVar6 + 0x30) + 0x30,0x20);
    if ((int)puVar2 == 0) goto code_r0x0001001fde2c;
    puVar2 = &uStack_50;
    func_0x0001001ec260(puVar2,0x20);
    if ((int)puVar2 == 0) goto code_r0x0001001fde2c;
    puVar2 = &uStack_50;
    func_0x000107c34fc4(puVar2,param_1 + 0xb,lVar4);
    if ((int)puVar2 == 0) goto code_r0x0001001fde2c;
    puVar2 = &uStack_50;
    func_0x0001001ec260(puVar2,0);
    if ((int)puVar2 == 0) goto code_r0x0001001fde2c;
    puVar2 = &uStack_50;
    func_0x0001001ed84c(puVar2,&uStack_60);
    uVar7 = uStack_60;
    if (((ulong)puVar2 & 1) != 0) {
      (**(code **)(*(long *)(lVar6 + 0x68) + 0x2b0))(lVar6,uStack_60);
      plVar5 = (long *)0x1;
      goto code_r0x0001001fde34;
    }
  }
  plVar5 = (long *)0x0;
code_r0x0001001fde34:
  func_0x0001001e33e0(uVar7);
  func_0x0001001ed8c0(&uStack_50);
  return plVar5;
}



/* Entry: 10ae67aa0; end: 10ae67b8b;  */

/* WARNING: Possible PIC construction at 0x0001001fdfa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001fdfa8) */
/* WARNING: Removing unreachable block (ram,0x0001001fdfac) */
/* WARNING: Removing unreachable block (ram,0x0001001fdfec) */
/* WARNING: Removing unreachable block (ram,0x0001001fe020) */
/* WARNING: Removing unreachable block (ram,0x0001001fe060) */

undefined8 * FUN_10ae67aa0(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 **ppuVar9;
  undefined2 **ppuVar10;
  undefined2 **ppuVar11;
  undefined2 **ppuVar12;
  undefined2 **ppuVar13;
  uint uVar14;
  undefined *puVar15;
  long lVar16;
  undefined2 **ppuVar17;
  undefined2 *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined2 *puStack_100;
  undefined2 *apuStack_f8 [2];
  undefined2 *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined2 auStack_d8 [12];
  undefined2 *apuStack_c0 [10];
  long lStack_70;
  long lVar5;
  
  lVar20 = param_1[6];
  lVar5 = 0x148;
  if (param_2 != 0) {
    lVar5 = 0x118;
  }
  lVar16 = 0x1a8;
  if (param_2 == 0) {
    lVar16 = 0x1a9;
  }
  bVar3 = *(byte *)(lVar20 + lVar16);
  ppuVar17 = (undefined2 **)(ulong)bVar3;
  lVar16 = *(long *)(lVar20 + 0x110);
  if ((lVar16 == 0) || ((*(byte *)(lVar16 + 0x618) >> 3 & 1) != 0)) {
    plVar6 = (long *)(lVar20 + 0x1c8);
LAB_10ae67b0c:
    lVar19 = *plVar6;
  }
  else {
    lVar19 = *(long *)(lVar16 + 0x5e0);
    if ((lVar19 == 0) && (lVar19 = *(long *)(lVar16 + 0x5d8), lVar19 == 0)) {
      plVar6 = param_1 + 0xb;
      goto LAB_10ae67b0c;
    }
  }
  lVar16 = lVar19;
  func_0x000107c2b858(lVar19);
  puVar7 = (undefined8 *)(lVar20 + lVar5);
  func_0x000107c34fd8(puVar7,ppuVar17,lVar16,lVar20 + lVar5,ppuVar17,&UNK_10e52b431,0xb);
  if ((int)puVar7 == 0) {
    return puVar7;
  }
  ppuVar10 = (undefined2 **)(lVar20 + lVar5);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = lVar19;
  ppuVar9 = ppuVar17;
  func_0x0001001fde80();
  uVar4 = (uint)lVar5;
  uVar14 = (uint)ppuVar9;
  if (param_1[0x13] == 0) {
    uVar14 = (uint)*(byte *)*param_1;
    ppuVar12 = *(undefined2 ***)(lVar19 + 0xd0);
    puVar7 = (undefined8 *)auStack_e0;
    ppuVar9 = &puStack_e8;
    ppuVar11 = &puStack_e8;
  }
  else {
    apuStack_c0[0] = *(undefined2 **)(lVar19 + 0xd0);
    auStack_d8[0] = (undefined2)lVar5;
    auStack_e0[0] = 0;
    puVar18 = auStack_d8;
    ppuVar9 = (undefined2 **)auStack_e0;
    ppuVar11 = apuStack_c0;
    func_0x000100a363b4();
    ppuVar12 = ppuVar10;
    ppuVar13 = ppuVar17;
    if (puVar18 == (undefined2 *)0x0) {
code_r0x0001001fe158:
      uVar4 = (uint)ppuVar13;
      puVar7 = (undefined8 *)0x0;
    }
    else {
      if ((undefined2 **)0x30 < ppuVar17) {
        ppuVar12 = (undefined2 **)&UNK_10f6d13d3;
        ppuVar9 = (undefined2 **)0x0;
        ppuVar11 = (undefined2 **)0x44;
        ppuVar13 = (undefined2 **)0xd3;
        func_0x0001004d2c58(0x10);
        plVar6 = (long *)(puVar18 + 4);
        if (*plVar6 != 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
          *plVar6 = 0;
        }
        func_0x0001001e33e0(puVar18);
        goto code_r0x0001001fe158;
      }
      if (param_2 == 0) {
        ppuVar11 = apuStack_f8;
        ppuVar9 = (undefined2 **)0x3;
        plVar6 = param_1;
        apuStack_f8[0] = puVar18;
        (**(code **)(*param_1 + 0x88))();
        puVar18 = apuStack_f8[0];
        apuStack_f8[0] = (undefined2 *)0x0;
        if (puVar18 != (undefined2 *)0x0) {
          plVar21 = (long *)(puVar18 + 4);
          if (*plVar21 != 0) {
            (**(code **)(*plVar21 + 0x18))(plVar21);
            *plVar21 = 0;
          }
          func_0x0001001e33e0(puVar18);
        }
        uVar4 = (uint)ppuVar13;
        if (((ulong)plVar6 & 1) == 0) goto code_r0x0001001fe158;
        if (ppuVar17 != (undefined2 **)0x0) {
          func_0x000107c610b8(param_1[6] + 0x148);
          ppuVar9 = ppuVar10;
          ppuVar11 = ppuVar17;
        }
        *(byte *)(param_1[6] + 0x1a9) = bVar3;
      }
      else {
        ppuVar11 = &puStack_100;
        ppuVar9 = (undefined2 **)0x3;
        plVar6 = param_1;
        puStack_100 = puVar18;
        (**(code **)(*param_1 + 0x90))();
        puVar18 = puStack_100;
        puStack_100 = (undefined2 *)0x0;
        if (puVar18 != (undefined2 *)0x0) {
          plVar21 = (long *)(puVar18 + 4);
          if (*plVar21 != 0) {
            (**(code **)(*plVar21 + 0x18))(plVar21);
            *plVar21 = 0;
          }
          func_0x0001001e33e0(puVar18);
        }
        uVar4 = (uint)ppuVar13;
        if (((ulong)plVar6 & 1) == 0) goto code_r0x0001001fe158;
        if (ppuVar17 != (undefined2 **)0x0) {
          func_0x000107c610b8(param_1[6] + 0x118);
          ppuVar9 = ppuVar10;
          ppuVar11 = ppuVar17;
        }
        *(byte *)(param_1[6] + 0x1a8) = bVar3;
      }
      puVar7 = (undefined8 *)0x1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar7;
    }
    func_0x000107c60e78();
    func_0x000107c60bd8();
  }
  *puVar7 = 0;
  *ppuVar9 = (undefined2 *)0x0;
  *ppuVar11 = (undefined2 *)0x0;
  uVar1 = uVar14;
  if (uVar4 != 0x303) {
    uVar1 = 1;
  }
  if (uVar4 != 0x304) {
    uVar14 = 1;
  }
  if (*(int *)(ppuVar12 + 4) != 1) {
    if (*(int *)(ppuVar12 + 4) != 2) {
      return (undefined8 *)0x0;
    }
    iVar2 = *(int *)((long)ppuVar12 + 0x1c);
    if (iVar2 == 0x40) {
      puVar8 = (undefined8 *)&UNK_110c7bf38;
      puVar18 = (undefined2 *)0xc;
code_r0x0001001fe2f8:
      *puVar7 = puVar8;
      *ppuVar11 = puVar18;
      if (uVar4 < 0x304) {
        return (undefined8 *)0x1;
      }
code_r0x0001001fe3a8:
      puVar18 = (undefined2 *)(ulong)*(byte *)((long)puVar8 + 1);
    }
    else {
      puVar8 = puVar7;
      if (iVar2 == 0x10) {
        if ((uVar1 & 1) != 0) {
          if ((uVar14 & 1) != 0) {
            puVar18 = (undefined2 *)0x4;
            func_0x000107c2b3f8();
            goto code_r0x0001001fe2f8;
          }
          func_0x000107c2b404();
code_r0x0001001fe39c:
          *puVar7 = puVar8;
          *ppuVar11 = (undefined2 *)0x4;
          goto code_r0x0001001fe3a8;
        }
        func_0x000107c2b400();
      }
      else {
        if (iVar2 != 8) {
          return (undefined8 *)0x0;
        }
        if ((uVar1 & 1) != 0) {
          if ((uVar14 & 1) == 0) {
            func_0x0001001fe3c4();
            goto code_r0x0001001fe39c;
          }
          puVar18 = (undefined2 *)0x4;
          func_0x0001009dfe5c();
          goto code_r0x0001001fe2f8;
        }
        func_0x000107c2b3fc();
      }
      *puVar7 = puVar8;
      puVar18 = (undefined2 *)0x4;
    }
    *ppuVar11 = puVar18;
    return (undefined8 *)0x1;
  }
  iVar2 = *(int *)((long)ppuVar12 + 0x1c);
  if (iVar2 < 4) {
    if (iVar2 == 1) {
      if (uVar4 != 0x301) {
        puVar15 = &UNK_110c7c2e0;
        goto code_r0x0001001fe380;
      }
      *puVar7 = &UNK_110c7c328;
      puVar18 = (undefined2 *)0x8;
    }
    else {
      if (iVar2 != 2) {
        return (undefined8 *)0x0;
      }
      if (uVar4 != 0x301) {
        puVar15 = &UNK_110c7c1c0;
        goto code_r0x0001001fe380;
      }
      puVar15 = &UNK_110c7c208;
code_r0x0001001fe338:
      *puVar7 = puVar15;
      puVar18 = (undefined2 *)0x10;
    }
    *ppuVar11 = puVar18;
  }
  else {
    if (iVar2 == 4) {
      if (uVar4 == 0x301) {
        puVar15 = &UNK_110c7c298;
        goto code_r0x0001001fe338;
      }
      puVar15 = &UNK_110c7c250;
    }
    else {
      if (iVar2 != 0x20) {
        return (undefined8 *)0x0;
      }
      puVar15 = &UNK_110c7c370;
    }
code_r0x0001001fe380:
    *puVar7 = puVar15;
  }
  *ppuVar9 = (undefined2 *)0x14;
  return (undefined8 *)0x1;
}



/* Entry: 10ae67b8c; end: 10ae67d1b;  */

ushort ******
FUN_10ae67b8c(long param_1,ushort ******param_2,ushort *****param_3,ushort ******param_4,
             ushort *****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             ushort ******param_9,ushort *****param_10)

{
  ushort *******pppppppuVar1;
  char *pcVar2;
  undefined *puVar3;
  ushort ****ppppuVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ushort ******ppppppuVar12;
  ushort ****ppppuVar13;
  ushort ******ppppppuVar14;
  ushort *****pppppuVar15;
  ushort *******pppppppuVar16;
  ushort *******pppppppuVar17;
  ushort ******ppppppuVar18;
  undefined8 *puVar19;
  ushort *******pppppppuVar20;
  ushort *****pppppuVar21;
  ushort *******pppppppuVar22;
  undefined1 uVar23;
  ushort ******ppppppuVar24;
  ushort ******ppppppuVar25;
  ushort *******pppppppuVar26;
  undefined8 uVar27;
  ulong uVar28;
  ushort *****pppppuVar29;
  ushort *****pppppuVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  long lVar33;
  ushort ******ppppppuVar34;
  byte bVar35;
  ushort *****pppppuVar36;
  ushort ******ppppppuVar37;
  ushort *****unaff_x19;
  ushort ******ppppppuVar38;
  ushort ******ppppppuVar39;
  ushort ******unaff_x20;
  ushort ******ppppppuVar40;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ushort *******pppppppuVar41;
  ushort *****unaff_x23;
  ushort ******unaff_x24;
  ushort *****pppppuVar42;
  ushort *****unaff_x25;
  ushort *****unaff_x26;
  ushort ******unaff_x27;
  ushort *******pppppppuVar43;
  ushort ****unaff_x28;
  undefined1 uStack_742;
  undefined1 uStack_741;
  ushort *****pppppuStack_740;
  ushort *puStack_738;
  ulong uStack_730;
  ushort ******ppppppuStack_728;
  undefined8 uStack_720;
  undefined8 uStack_710;
  long lStack_708;
  ushort *****pppppuStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6d0;
  ushort ******ppppppuStack_6c8;
  ushort ******ppppppuStack_6c0;
  ushort ******ppppppuStack_6b8;
  undefined8 uStack_6b0;
  ushort ******appppppuStack_6a8 [4];
  undefined8 uStack_688;
  ushort *****pppppuStack_668;
  ulong uStack_660;
  ushort *****pppppuStack_648;
  ulong uStack_640;
  ushort ******ppppppuStack_628;
  ulong uStack_620;
  ushort ******ppppppuStack_618;
  ushort ******ppppppuStack_610;
  ushort ******ppppppuStack_5f8;
  ulong uStack_5f0;
  ushort *****apppppuStack_5e8 [4];
  long lStack_5c8;
  ushort *****pppppuStack_5b0;
  ushort *****pppppuStack_5a8;
  ushort *****pppppuStack_5a0;
  long lStack_598;
  ushort ****ppppuStack_590;
  ushort ****ppppuStack_588;
  ushort ******ppppppuStack_580;
  ushort *****pppppuStack_578;
  ushort *****pppppuStack_570;
  ushort ******ppppppuStack_568;
  undefined1 *****pppppuStack_560;
  code *pcStack_558;
  ushort *****pppppuStack_550;
  ulong uStack_548;
  ushort *****pppppuStack_538;
  ushort *****pppppuStack_530;
  ushort ******ppppppuStack_528;
  ushort ******ppppppuStack_520;
  undefined8 *puStack_518;
  uint uStack_504;
  undefined1 auStack_500 [64];
  ushort *****apppppuStack_4c0 [8];
  long lStack_480;
  ushort ***pppuStack_470;
  ushort *****pppppuStack_468;
  ushort *****pppppuStack_460;
  ushort *****pppppuStack_458;
  ushort ****ppppuStack_450;
  ushort ****ppppuStack_448;
  ushort ******ppppppuStack_440;
  ushort *****pppppuStack_438;
  ushort *****pppppuStack_430;
  ushort *****pppppuStack_428;
  undefined1 ****ppppuStack_420;
  code *pcStack_418;
  ushort *****pppppuStack_410;
  ushort *****pppppuStack_408;
  ushort *****pppppuStack_400;
  long lStack_3c8;
  ushort *****pppppuStack_3c0;
  ushort ****ppppuStack_3b8;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  ushort ****ppppuStack_3a0;
  ulong uStack_398;
  ushort *****pppppuStack_390;
  ushort ****ppppuStack_388;
  ushort ****ppppuStack_380;
  undefined8 *puStack_378;
  undefined1 auStack_364 [16];
  uint uStack_354;
  ushort *****apppppuStack_350 [8];
  ushort ****ppppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ushort ****ppppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ushort ****appppuStack_288 [8];
  long lStack_248;
  ushort ***pppuStack_240;
  ushort *****pppppuStack_238;
  ushort ****ppppuStack_230;
  ushort ****ppppuStack_228;
  ushort ****ppppuStack_220;
  ushort ****ppppuStack_218;
  ushort *****pppppuStack_210;
  ushort *****pppppuStack_208;
  ushort *****pppppuStack_200;
  ushort ****ppppuStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  ushort *****pppppuStack_1e0;
  ushort *****apppppuStack_1d8 [8];
  long lStack_198;
  ushort *****pppppuStack_190;
  ushort ****ppppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ushort *****pppppuStack_170;
  ushort ****ppppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  ushort ***pppuStack_150;
  ushort *****pppppuStack_148;
  uint uStack_138;
  uint uStack_134;
  ushort ****appppuStack_130 [8];
  ushort ***apppuStack_f0 [8];
  ushort ***apppuStack_b0 [8];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 == (ushort *****)0x0) {
    ppppppuVar25 = (ushort ******)&UNK_10f6d13d3;
    pppppuVar21 = (ushort *****)0x0;
    pppppuVar15 = (ushort *****)0x44;
    pppppuVar29 = (ushort *****)0x187;
    func_0x000107c2b29c(0x10);
    ppppppuVar12 = (ushort ******)0x0;
    param_10 = unaff_x26;
    param_9 = unaff_x27;
  }
  else {
    lVar33 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
    if ((lVar33 == 0) || ((*(byte *)(lVar33 + 0x618) >> 3 & 1) != 0)) {
      puVar19 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0x1c8);
LAB_10ae67c0c:
      unaff_x25 = (ushort *****)*puVar19;
    }
    else {
      unaff_x25 = *(ushort ******)(lVar33 + 0x5e0);
      if ((unaff_x25 == (ushort *****)0x0) &&
         (unaff_x25 = *(ushort ******)(lVar33 + 0x5d8), unaff_x25 == (ushort *****)0x0)) {
        puVar19 = (undefined8 *)(param_1 + 0x58);
        goto LAB_10ae67c0c;
      }
    }
    func_0x000107c2b858();
    pppppuVar15 = (ushort *****)apppuStack_b0;
    ppppppuVar25 = (ushort ******)&uStack_134;
    ppppppuVar12 = param_9;
    pppppuVar21 = param_10;
    pppppuVar29 = unaff_x25;
    func_0x000107c2b408();
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x21 = param_7;
    unaff_x22 = param_6;
    unaff_x23 = param_5;
    unaff_x24 = param_4;
    if ((int)ppppppuVar12 != 0) {
      unaff_x28 = apppuStack_f0;
      pppppuVar15 = (ushort *****)apppuStack_f0;
      ppppppuVar25 = (ushort ******)&uStack_138;
      ppppppuVar12 = (ushort ******)0x0;
      pppppuVar21 = (ushort *****)0x0;
      pppppuVar29 = unaff_x25;
      func_0x000107c2b408();
      if ((int)ppppppuVar12 != 0) {
        pppppuStack_148 = (ushort *****)(ulong)uStack_138;
        param_9 = (ushort ******)(ulong)uStack_134;
        param_10 = (ushort *****)(ulong)*(uint *)((long)unaff_x25 + 4);
        ppppppuVar12 = (ushort ******)appppuStack_130;
        pppppuVar21 = param_10;
        pppppuVar15 = unaff_x25;
        ppppppuVar25 = param_4;
        pppppuVar29 = param_5;
        pppuStack_150 = (ushort ***)unaff_x28;
        func_0x000107c34fd8();
        if ((int)ppppppuVar12 != 0) {
          pppuStack_150 = (ushort ***)apppuStack_b0;
          ppppppuVar25 = (ushort ******)appppuStack_130;
          ppppppuVar12 = param_2;
          pppppuVar21 = param_3;
          pppppuVar15 = unaff_x25;
          pppppuVar29 = param_10;
          pppppuStack_148 = (ushort *****)param_9;
          func_0x000107c34fd8();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppppuVar12;
  }
  ___stack_chk_fail();
  pppppppuVar26 = (ushort *******)&pppppuStack_1e0;
  pppppuStack_190 = (ushort *****)unaff_x24;
  ppppuStack_188 = (ushort ****)unaff_x23;
  uStack_180 = unaff_x22;
  uStack_178 = unaff_x21;
  pppppuStack_170 = (ushort *****)unaff_x20;
  ppppuStack_168 = (ushort ****)unaff_x19;
  puStack_160 = &stack0xfffffffffffffff0;
  pcStack_158 = FUN_10ae67d1c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar42 = *ppppppuVar12;
  ppppuVar13 = pppppuVar42[0xb];
  func_0x000107c2b858();
  uVar5 = *(uint *)((long)ppppuVar13 + 4);
  ppppppuVar40 = (ushort ******)(ulong)uVar5;
  ppppppuVar24 = (ushort ******)pppppuVar42[0xb];
  ppppppuVar12 = apppppuStack_1d8;
  ppppppuVar39 = (ushort ******)((long)ppppppuVar40 + 3);
  pppppuVar30 = pppppuVar15;
  ppppppuVar18 = ppppppuVar25;
  FUN_10ae67e18();
  uVar9 = 0;
  if ((ushort ******)pppppuStack_1e0 == ppppppuVar40) {
    uVar9 = (uint)ppppppuVar12;
  }
  if ((uVar9 & 1) == 0) {
    pppppuVar21 = (ushort *****)&UNK_10f6d13d3;
    ppppppuVar12 = (ushort ******)0x10;
    pppppppuVar26 = (ushort *******)0x0;
    ppppppuVar24 = (ushort ******)0x44;
    pppppuVar30 = (ushort *****)0x1e8;
    func_0x000107c2b29c();
LAB_10ae67ddc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return (ushort ******)(ulong)uVar9;
    }
    ___stack_chk_fail();
  }
  else if (ppppppuVar40 <= ppppppuVar25) {
    if (uVar5 != 0) {
      ppppppuVar12 = (ushort ******)
                     ((undefined *)((long)pppppuVar15 + (long)ppppppuVar25) + -(long)ppppppuVar40);
      pppppppuVar26 = (ushort *******)apppppuStack_1d8;
      ppppppuVar24 = ppppppuVar40;
      _memcpy();
    }
    if (pppppuVar29 != (ushort *****)0x0) {
      *pppppuVar29 = (ushort ****)ppppppuVar40;
    }
    goto LAB_10ae67ddc;
  }
  _abort();
  pcStack_1e8 = FUN_10ae67e18;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar14 = ppppppuVar24;
  pppuStack_240 = (ushort ***)unaff_x28;
  pppppuStack_238 = (ushort *****)param_9;
  ppppuStack_230 = (ushort ****)param_10;
  ppppuStack_228 = (ushort ****)unaff_x25;
  ppppuStack_220 = (ushort ****)pppppuVar42;
  ppppuStack_218 = (ushort ****)pppppuVar15;
  pppppuStack_210 = (ushort *****)(ulong)uVar9;
  pppppuStack_208 = (ushort *****)ppppppuVar25;
  pppppuStack_200 = (ushort *****)ppppppuVar40;
  ppppuStack_1f8 = (ushort ****)pppppuVar29;
  ppuStack_1f0 = &puStack_160;
  func_0x000107c2b858();
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  ppppuStack_2d0 = (ushort ****)0x0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  ppppuStack_310 = (ushort ****)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  pppppppuVar41 = (ushort *******)(ulong)*(uint *)((long)ppppppuVar14 + 4);
  ppppppuVar25 = (ushort ******)appppuStack_288;
  ppppppuVar40 = (ushort ******)&uStack_354;
  pppppuVar15 = (ushort *****)0x0;
  pppppppuVar22 = (ushort *******)0x0;
  func_0x000107c2b408();
  if ((int)pppppuVar15 == 0) {
LAB_10ae67f24:
    pppppppuVar26 = pppppppuVar22;
    ppppppuVar38 = (ushort ******)0x0;
  }
  else {
    pppppuVar15 = &ppppuStack_2d0;
    pppppppuVar22 = (ushort *******)(auStack_364 + 4);
    ppppppuVar40 = ppppppuVar24 + 2;
    ppppppuVar25 = ppppppuVar14;
    func_0x000107c2b51c();
    if ((int)pppppuVar15 == 0) goto LAB_10ae67f24;
    uStack_398 = (ulong)uStack_354;
    ppppuStack_3a0 = (ushort ****)appppuStack_288;
    pppppuVar15 = &ppppuStack_310;
    ppppppuVar40 = (ushort ******)&ppppuStack_2d0;
    pppppppuVar22 = pppppppuVar41;
    ppppppuVar25 = ppppppuVar14;
    func_0x000107c34fd8();
    if ((int)pppppuVar15 == 0) goto LAB_10ae67f24;
    bVar8 = ppppppuVar18 < ppppppuVar39;
    ppppppuVar39 = (ushort ******)((long)ppppppuVar18 - (long)ppppppuVar39);
    if (bVar8) {
      ppppppuVar40 = (ushort ******)&UNK_10f6d13d3;
      pppppuVar15 = (ushort *****)0x10;
      pppppppuVar22 = (ushort *******)0x0;
      ppppppuVar25 = (ushort ******)0x44;
      func_0x000107c2b29c();
      goto LAB_10ae67f24;
    }
    ppppuStack_388 = (ushort ****)0x0;
    pppppuStack_390 = (ushort *****)0x0;
    puStack_378 = (undefined8 *)0x0;
    ppppuStack_380 = (ushort ****)0x0;
    pppppppuVar22 = (ushort *******)&pppppuStack_390;
    pppppuVar15 = pppppuVar21;
    ppppppuVar25 = ppppppuVar14;
    func_0x00010ae657f0();
    if ((int)pppppuVar15 == 0) {
LAB_10ae67fd4:
      pppppppuVar26 = pppppppuVar22;
      ppppppuVar38 = (ushort ******)0x0;
    }
    else {
      (*(code *)pppppuStack_390[3])(&pppppuStack_390,pppppuVar30,ppppppuVar39);
      iVar10 = (int)&pppppuStack_390;
      pppppppuVar22 = (ushort *******)apppppuStack_350;
      ppppppuVar25 = (ushort ******)auStack_364;
      func_0x000107c2b41c();
      if (iVar10 == 0) goto LAB_10ae67fd4;
      ppppppuVar40 = (ushort ******)&ppppuStack_310;
      ppppppuVar38 = ppppppuVar12;
      ppppppuVar25 = ppppppuVar14;
      func_0x000107c34fe0(ppppppuVar12);
    }
    pppppuVar15 = (ushort *****)ppppuStack_388;
    func_0x000107c2b534();
    if (puStack_378 != (undefined8 *)0x0) {
      pppppuVar15 = (ushort *****)ppppuStack_380;
      (*(code *)*puStack_378)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return ppppppuVar38;
  }
  ___stack_chk_fail();
  FUN_10ae34eb0(&pppppuStack_390);
  pppppuVar29 = pppppuVar15;
  __Unwind_Resume();
  ppppppuVar38 = &pppppuStack_410;
  pppppuStack_3c0 = (ushort *****)ppppppuVar12;
  ppppuStack_3b8 = (ushort ****)pppppuVar15;
  pppuStack_3b0 = &ppuStack_1f0;
  pcStack_3a8 = FUN_10ae68018;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar15 = ppppppuVar25[3];
  pppppppuVar22 = (ushort *******)ppppppuVar25[4];
  iVar10 = (int)&pppppuStack_408;
  pppppuVar29 = pppppuVar29 + 0x33;
  ppppppuVar25 = (ushort ******)((long)ppppppuVar40[1] + 2);
  FUN_10ae67e18();
  if ((iVar10 == 0) || (ppppppuVar40[1] == (ushort *****)0x0)) {
LAB_10ae6808c:
    pppppppuVar26 = (ushort *******)0x44;
    pppppuVar15 = (ushort *****)0x201;
LAB_10ae680a4:
    pppppuVar29 = (ushort *****)&UNK_10f6d13d3;
    ppppppuVar38 = (ushort ******)0x0;
    func_0x000107c2b29c(0x10);
    ppppppuVar34 = (ushort ******)0x0;
  }
  else {
    pppppuVar36 = *ppppppuVar40;
    pppppuVar42 = (ushort *****)((long)pppppuVar36 + 1);
    ppppppuVar37 = (ushort ******)((long)ppppppuVar40[1] + -1);
    *ppppppuVar40 = pppppuVar42;
    ppppppuVar40[1] = (ushort *****)ppppppuVar37;
    bVar35 = *(byte *)pppppuVar36;
    ppppppuVar34 = (ushort ******)(ulong)bVar35;
    if (ppppppuVar37 < ppppppuVar34) goto LAB_10ae6808c;
    *ppppppuVar40 = (ushort *****)((long)pppppuVar42 + (long)ppppppuVar34);
    ppppppuVar40[1] = (ushort *****)((long)ppppppuVar37 - (long)ppppppuVar34);
    if ((ushort ******)pppppuStack_410 != ppppppuVar34) {
LAB_10ae68110:
      pppppppuVar26 = (ushort *******)0x8e;
      pppppuVar15 = (ushort *****)0x20c;
      goto LAB_10ae680a4;
    }
    if (bVar35 != 0) {
      bVar35 = 0;
      ppppppuVar37 = &pppppuStack_408;
      do {
        bVar35 = *(byte *)ppppppuVar37 ^ *(byte *)pppppuVar42 | bVar35;
        ppppppuVar34 = (ushort ******)((long)ppppppuVar34 + -1);
        pppppuVar42 = (ushort *****)((long)pppppuVar42 + 1);
        ppppppuVar37 = (ushort ******)((long)ppppppuVar37 + 1);
      } while (ppppppuVar34 != (ushort ******)0x0);
      if (bVar35 != 0) goto LAB_10ae68110;
    }
    ppppppuVar34 = (ushort ******)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return ppppppuVar34;
  }
  ___stack_chk_fail(ppppppuVar34);
  pcStack_418 = FUN_10ae68138;
  lStack_480 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar34 = (ushort ******)(pppppuStack_400 + 1);
  pppuStack_470 = (ushort ***)unaff_x28;
  pppppuStack_468 = (ushort *****)ppppppuVar24;
  pppppuStack_460 = (ushort *****)ppppppuVar18;
  pppppuStack_458 = (ushort *****)ppppppuVar39;
  ppppuStack_450 = (ushort ****)pppppuVar21;
  ppppuStack_448 = (ushort ****)pppppuVar30;
  ppppppuStack_440 = (ushort ******)pppppppuVar41;
  pppppuStack_438 = (ushort *****)ppppppuVar14;
  pppppuStack_430 = (ushort *****)ppppppuVar12;
  pppppuStack_428 = (ushort *****)ppppppuVar40;
  ppppuStack_420 = &pppuStack_3b0;
  if (pppppuStack_408 < ppppppuVar34) {
    pppppppuVar16 = (ushort *******)0x10;
    pppppppuVar26 = (ushort *******)0x0;
    func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d13d3,0x225);
    ppppppuVar39 = (ushort ******)0x0;
    ppppppuVar38 = ppppppuVar12;
    ppppppuVar25 = ppppppuVar14;
    pppppppuVar22 = pppppppuVar41;
    pppppuVar15 = pppppuVar30;
    pppppuVar29 = pppppuVar21;
    goto LAB_10ae682d4;
  }
  ppppppuVar18 = (ushort ******)pppppuStack_408;
  if (pppppuStack_400 <= pppppuStack_408) {
    ppppppuVar18 = (ushort ******)pppppuStack_400;
  }
  ppppppuStack_528 = (ushort ******)0x0;
  pppppuStack_530 = (ushort *****)0x0;
  puStack_518 = (undefined8 *)0x0;
  ppppppuStack_520 = (ushort ******)0x0;
  pppppppuVar41 = (ushort *******)&pppppuStack_530;
  pppppppuVar16 = pppppppuVar22;
  func_0x00010ae657f0(pppppppuVar22,pppppppuVar41,pppppppuVar22[1]);
  if ((int)pppppppuVar16 == 0) {
LAB_10ae682b4:
    pppppppuVar26 = pppppppuVar41;
    ppppppuVar39 = (ushort ******)0x0;
  }
  else {
    (*(code *)pppppuStack_530[3])(&pppppuStack_530,pppppuStack_410,ppppppuVar18);
    (*(code *)pppppuStack_530[3])(&pppppuStack_530,&UNK_10e52b45c,8);
    (*(code *)pppppuStack_530[3])
              (&pppppuStack_530,(undefined *)((long)pppppuStack_410 + (long)ppppppuVar34),
               (long)pppppuStack_408 - (long)ppppppuVar34);
    ppppppuVar12 = &pppppuStack_530;
    pppppppuVar41 = (ushort *******)apppppuStack_4c0;
    func_0x000107c2b41c(ppppppuVar12,pppppppuVar41,&uStack_504);
    ppppppuVar24 = (ushort ******)pppppuStack_410;
    if ((int)ppppppuVar12 == 0) goto LAB_10ae682b4;
    iVar10 = (int)auStack_500;
    pppppppuVar41 = (ushort *******)&pppppuStack_538;
    func_0x000107c2b51c();
    if (iVar10 == 0) goto LAB_10ae682b4;
    bVar8 = (int)ppppppuVar25 == 0;
    puVar3 = &UNK_10f6d14df;
    if (bVar8) {
      puVar3 = &UNK_10f6d14fb;
    }
    uVar27 = 0x1b;
    if (bVar8) {
      uVar27 = 0x17;
    }
    uStack_548 = (ulong)uStack_504;
    pppppuStack_550 = (ushort *****)apppppuStack_4c0;
    ppppppuVar39 = ppppppuVar38;
    func_0x000107c34fd8(ppppppuVar38,pppppppuVar26,pppppppuVar22[1],auStack_500,pppppuStack_538,
                        puVar3,uVar27);
  }
  pppppppuVar16 = (ushort *******)ppppppuStack_528;
  func_0x000107c2b534();
  if (puStack_518 != (undefined8 *)0x0) {
    pppppppuVar16 = (ushort *******)ppppppuStack_520;
    (*(code *)*puStack_518)();
  }
LAB_10ae682d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_480) {
    return ppppppuVar39;
  }
  ___stack_chk_fail();
  FUN_10ae34eb0(&pppppuStack_530);
  pppppppuVar17 = pppppppuVar16;
  __Unwind_Resume();
  pcStack_558 = FUN_10ae6832c;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar41 = pppppppuVar17 + 0xbb;
  pppppppuVar1 = pppppppuVar17 + 0x47;
  pppppppuVar20 = pppppppuVar17;
  pppppuStack_5b0 = (ushort *****)ppppppuVar34;
  pppppuStack_5a8 = (ushort *****)ppppppuVar24;
  pppppuStack_5a0 = (ushort *****)ppppppuVar18;
  lStack_598 = (long)pppppuStack_408 - (long)ppppppuVar34;
  ppppuStack_590 = (ushort ****)pppppuVar29;
  ppppuStack_588 = (ushort ****)pppppuVar15;
  ppppppuStack_580 = (ushort ******)pppppppuVar22;
  pppppuStack_578 = (ushort *****)ppppppuVar25;
  pppppuStack_570 = (ushort *****)ppppppuVar38;
  ppppppuStack_568 = (ushort ******)pppppppuVar16;
  pppppuStack_560 = &ppppuStack_420;
  do {
    iVar10 = *(int *)(pppppppuVar17 + 3);
    ppppppuVar25 = (ushort ******)0x1;
    pppppppuVar16 = pppppppuVar20;
    pppppppuVar22 = pppppppuVar26;
    switch(iVar10) {
    case 0:
      pppppppuVar26 = (ushort *******)*pppppppuVar17;
      pppppppuVar22 = (ushort *******)&uStack_6d0;
      pppppppuVar16 = pppppppuVar17;
      FUN_10ae5cbc0(pppppppuVar17,pppppppuVar22,&pppppuStack_740);
      lVar33 = lStack_708;
      if ((int)pppppppuVar16 != 0) {
        if (pppppppuVar26[0x13] == (ushort ******)0x0 || lStack_708 == 0) {
          if (lStack_708 != 0) {
            _memcpy((char *)((long)pppppppuVar17 + 0x623),uStack_710,lStack_708);
          }
          *(char *)((long)pppppppuVar17 + 0x643) = (char)lVar33;
          pppppppuVar22 = pppppppuVar17;
          FUN_10ae5987c(pppppppuVar17,&ppppppuStack_618);
          uVar27 = uStack_6f8;
          ppppppuVar25 = (ushort ******)pppppuStack_700;
          if (((ulong)pppppppuVar22 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0xe4);
            pppppppuVar22 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar26,2,0x28);
            pppppppuVar16 = pppppppuVar26;
          }
          else {
            uVar28 = (ulong)ppppppuStack_618 & 0xffff;
            pppppppuVar22 = pppppppuVar26;
            func_0x000107c2b89c(pppppppuVar26);
            FUN_10ae60114(ppppppuVar25,uVar27,pppppppuVar22,uVar28);
            pppppppuVar17[0xbf] = ppppppuVar25;
            if (ppppppuVar25 == (ushort ******)0x0) {
              func_0x000107c2b29c(0x10,0,0xb8,&UNK_10f6d1513,0xec);
              pppppppuVar22 = (ushort *******)0x2;
              FUN_10ae60390(pppppppuVar26,2,0x28);
              pppppppuVar16 = pppppppuVar26;
            }
            else {
              apppppuStack_5e8[0] = (ushort *****)CONCAT71(apppppuStack_5e8[0]._1_7_,0x32);
              pppppppuVar22 = pppppppuVar17;
              FUN_10ae59a0c(pppppppuVar17,apppppuStack_5e8,&pppppuStack_740);
              if (((ulong)pppppppuVar22 & 1) == 0) {
                pppppppuVar22 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar26,2,(ulong)apppppuStack_5e8[0] & 0xff);
                pppppppuVar16 = pppppppuVar26;
              }
              else {
                func_0x000107c2b89c();
                pppppppuVar20 = pppppppuVar17 + 0x33;
                func_0x000107c2b888(pppppppuVar20,pppppppuVar26,pppppppuVar17[0xbf]);
                pppppppuVar16 = pppppppuVar20;
                pppppppuVar22 = pppppppuVar26;
                if ((int)pppppppuVar20 != 0) {
                  ppppppuVar25 = (ushort ******)0x1;
                  *(undefined4 *)(pppppppuVar17 + 3) = 1;
                  break;
                }
              }
            }
          }
        }
        else {
          func_0x000107c2b29c(0x10,0,0x132,&UNK_10f6d1513,0xda);
          pppppppuVar22 = (ushort *******)0x2;
          FUN_10ae60390(pppppppuVar26,2,0x2f);
          pppppppuVar16 = pppppppuVar26;
        }
      }
    default:
LAB_10ae693e8:
      ppppppuVar25 = (ushort ******)0x0;
      pppppppuVar20 = pppppppuVar16;
      pppppppuVar26 = pppppppuVar22;
      break;
    case 1:
      ppppppuVar25 = *pppppppuVar17;
      pppppppuVar22 = (ushort *******)&uStack_6d0;
      pppppppuVar16 = pppppppuVar17;
      FUN_10ae5cbc0(pppppppuVar17,pppppppuVar22,&pppppuStack_740);
      if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
      uStack_742 = 0x32;
      pppppuVar15 = ppppppuVar25[6];
      ppppppuVar39 = *pppppppuVar17;
      ppppppuStack_5f8 = (ushort ******)0x0;
      ppppppuVar12 = &pppppuStack_740;
      FUN_10ae59824(ppppppuVar12,&ppppppuStack_618,0x29);
      if ((int)ppppppuVar12 == 0) {
code_r0x00010ae68890:
        pppppppuVar26 = pppppppuVar17;
        func_0x000107c2b85c();
        if (((ulong)pppppppuVar26 & 1) != 0) goto code_r0x00010ae6889c;
code_r0x00010ae69810:
        uVar23 = 0x50;
code_r0x00010ae69814:
        pppppppuVar26 = (ushort *******)0x2;
        FUN_10ae60390(ppppppuVar25,2,uVar23);
code_r0x00010ae69820:
        ppppppuVar25 = (ushort ******)0x0;
      }
      else {
        ppppppuVar18 = &pppppuStack_740;
        FUN_10ae59824(ppppppuVar18,apppppuStack_5e8,0x2d);
        if (((ulong)ppppppuVar18 & 1) == 0) {
          uStack_742 = 0x6d;
          func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x116);
          uVar23 = uStack_742;
          goto code_r0x00010ae69814;
        }
        pppppppuVar26 = pppppppuVar17;
        func_0x00010ae59cd0(pppppppuVar17,&pppppuStack_648,&pppppuStack_668,&ppppppuStack_628,
                            &uStack_742,&pppppuStack_740,&ppppppuStack_618);
        uVar23 = uStack_742;
        if (((ulong)pppppppuVar26 & 1) == 0) goto code_r0x00010ae69814;
        if ((*(byte *)(pppppppuVar17 + 0xc3) >> 4 & 1) == 0) goto code_r0x00010ae68890;
        appppppuStack_6a8[0] = (ushort ******)0x0;
        pppppppuVar26 = appppppuStack_6a8;
        pppppppuVar22 = pppppppuVar17;
        FUN_10ae5a6e4(pppppppuVar17,pppppppuVar26,&uStack_741,pppppuStack_648,uStack_640,0,0);
        iVar11 = (int)pppppppuVar22;
        if (iVar11 == 0) {
          pppppppuVar22 = pppppppuVar17;
          pppppppuVar26 = (ushort *******)appppppuStack_6a8[0];
          FUN_10ae64ac0();
          if ((int)pppppppuVar22 == 0) {
code_r0x00010ae69738:
            iVar11 = 2;
            goto code_r0x00010ae6973c;
          }
          if ((*(byte *)(appppppuStack_6a8[0] + 0x36) >> 3 & 1) != 0) {
            ppppppuStack_628 =
                 (ushort ******)
                 CONCAT44(ppppppuStack_628._4_4_,
                          (uint)((int)ppppppuStack_628 - *(int *)(appppppuStack_6a8[0] + 0x2f)) /
                          1000);
            func_0x000107c2b798(ppppppuVar39[0xd],&uStack_688);
            uVar28 = CONCAT62(uStack_688._2_6_,CONCAT11(uStack_688._1_1_,(undefined1)uStack_688)) -
                     (long)appppppuStack_6a8[0][0x19];
            pppppppuVar26 = (ushort *******)appppppuStack_6a8[0];
            if (uVar28 >> 0x1f == 0) {
              *(int *)((long)pppppuVar15 + 0xf4) = (int)ppppppuStack_628 - (int)uVar28;
              pppppppuVar16 = pppppppuVar17;
              FUN_10ae68018(pppppppuVar17,appppppuStack_6a8[0],&uStack_6d0,&pppppuStack_668);
              pppppppuVar22 = (ushort *******)appppppuStack_6a8[0];
              if (((ulong)pppppppuVar16 & 1) == 0) {
                uStack_742 = 0x33;
                iVar11 = 3;
              }
              else {
                appppppuStack_6a8[0] = (ushort ******)0x0;
                func_0x000107c2b6c0(&ppppppuStack_5f8);
                iVar11 = 0;
                pppppppuVar26 = pppppppuVar22;
              }
              goto code_r0x00010ae6973c;
            }
            goto code_r0x00010ae69738;
          }
          iVar11 = 2;
code_r0x00010ae69748:
          appppppuStack_6a8[0] = (ushort ******)0x0;
          func_0x000107c2b874();
        }
        else {
          if (iVar11 == 3) {
            uStack_742 = 0x50;
          }
code_r0x00010ae6973c:
          ppppppuVar39 = appppppuStack_6a8[0];
          appppppuStack_6a8[0] = (ushort ******)0x0;
          if ((ushort *******)ppppppuVar39 != (ushort *******)0x0) goto code_r0x00010ae69748;
        }
        if (1 < iVar11) {
          if (iVar11 == 2) goto code_r0x00010ae68890;
          uVar23 = uStack_742;
          if (iVar11 != 3) goto code_r0x00010ae6889c;
          goto code_r0x00010ae69814;
        }
        if (iVar11 == 0) {
          func_0x000107c2b84c(&ppppppuStack_618,ppppppuStack_5f8,0);
          ppppppuVar39 = ppppppuStack_618;
          ppppppuStack_618 = (ushort ******)0x0;
          func_0x000107c2b6c0(pppppppuVar41,ppppppuVar39);
          ppppppuVar39 = ppppppuStack_618;
          ppppppuStack_618 = (ushort ******)0x0;
          if (ppppppuVar39 != (ushort ******)0x0) {
            func_0x000107c2b874();
          }
          if (*pppppppuVar41 == (ushort ******)0x0) goto code_r0x00010ae69810;
          *(ushort *)((long)ppppppuVar25[6] + 0xd4) =
               *(ushort *)((long)ppppppuVar25[6] + 0xd4) | 0x40;
          *(uint *)(pppppppuVar17 + 0xc3) = *(uint *)(pppppppuVar17 + 0xc3) | 0x800000;
          ppppppuVar39 = pppppppuVar17[0xbb];
          uVar9 = *(uint *)((long)ppppppuVar25[0xe] + 0x124);
          func_0x000107c2b850(ppppppuVar25,ppppppuVar39);
          if (*(uint *)(ppppppuVar39 + 0x18) <= uVar9) {
            uVar5 = *(uint *)((long)ppppppuVar39 + 0xc4);
            if (uVar9 <= *(uint *)((long)ppppppuVar39 + 0xc4)) {
              uVar5 = uVar9;
            }
            *(uint *)(ppppppuVar39 + 0x18) = uVar5;
          }
code_r0x00010ae6889c:
          pppppppuVar26 = pppppppuVar17;
          func_0x00010ae5a158(pppppppuVar17,&uStack_742,&pppppuStack_740);
          uVar23 = uStack_742;
          if (((ulong)pppppppuVar26 & 1) == 0) goto code_r0x00010ae69814;
          ppppppuVar39 = pppppppuVar17[0xbb];
          ppppppuVar39[0x1a] = (ushort *****)pppppppuVar17[0xbf];
          pppppppuVar26 = pppppppuVar17;
          FUN_10ae5987c(pppppppuVar17,(ushort *)((long)ppppppuVar39 + 6));
          if (((ulong)pppppppuVar26 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0x1a6);
            uVar23 = 0x28;
            goto code_r0x00010ae69814;
          }
          pppppppuVar26 = pppppppuVar17;
          FUN_10ae59f44(pppppppuVar17,&ppppppuStack_618,0,&uStack_742,&pppppuStack_740);
          uVar23 = uStack_742;
          if (((ulong)pppppppuVar26 & 1) == 0) {
code_r0x00010ae69b34:
            pppppppuVar26 = (ushort *******)0x2;
            FUN_10ae60390(ppppppuVar25,2,uVar23);
          }
          else {
            if ((*(byte *)((long)ppppppuVar25 + 0xa4) >> 2 & 1) == 0) {
              pppppuVar15 = ppppppuVar25[6];
              uVar32 = 1;
code_r0x00010ae688f8:
              *(undefined4 *)(pppppuVar15 + 0x1f) = uVar32;
            }
            else {
              if (((ulong)ppppppuVar12 & 1) == 0) {
                pppppuVar15 = ppppppuVar25[6];
                uVar32 = 5;
              }
              else if ((ushort *******)ppppppuStack_5f8 == (ushort *******)0x0) {
                pppppuVar15 = ppppppuVar25[6];
                uVar32 = 6;
              }
              else if (*(int *)((long)ppppppuStack_5f8 + 0x17c) == 0) {
                pppppuVar15 = ppppppuVar25[6];
                uVar32 = 7;
              }
              else {
                if ((*(uint *)(pppppppuVar17 + 0xc3) >> 0xc & 1) == 0) {
                  pppppuVar15 = ppppppuVar25[6];
                  uVar32 = 4;
                  goto code_r0x00010ae688f8;
                }
                pppppuVar15 = ppppppuVar25[6];
                if ((*(uint *)(pppppppuVar17 + 0xc3) >> 0x18 & 1) == 0) {
                  ppppppuVar12 = (ushort ******)pppppuVar15[0x3d];
                  if (ppppppuVar12 == (ushort ******)ppppppuStack_5f8[0x31]) {
                    if (ppppppuVar12 != (ushort ******)0x0) {
                      ppppppuVar39 = (ushort ******)ppppppuStack_5f8[0x30];
                      ppppuVar13 = pppppuVar15[0x3c];
                      do {
                        ppppppuVar12 = (ushort ******)((long)ppppppuVar12 + -1);
                        if (*(char *)ppppuVar13 != *(char *)ppppppuVar39) goto code_r0x00010ae69984;
                        ppppppuVar39 = (ushort ******)((long)ppppppuVar39 + 1);
                        ppppuVar13 = (ushort ****)((long)ppppuVar13 + 1);
                      } while (ppppppuVar12 != (ushort ******)0x0);
                    }
                    ppppppuVar12 = *pppppppuVar41;
                    if ((((*(byte *)(ppppppuStack_5f8 + 0x36) ^ *(byte *)(ppppppuVar12 + 0x36)) >> 6
                         & 1) == 0) &&
                       (ppppppuVar39 = (ushort ******)ppppppuVar12[0x33],
                       ppppppuVar39 == (ushort ******)ppppppuStack_5f8[0x33])) {
                      if (ppppppuVar39 != (ushort ******)0x0) {
                        ppppppuVar18 = (ushort ******)ppppppuStack_5f8[0x32];
                        pppppuVar21 = ppppppuVar12[0x32];
                        do {
                          ppppppuVar39 = (ushort ******)((long)ppppppuVar39 + -1);
                          if (*(char *)pppppuVar21 != *(char *)ppppppuVar18)
                          goto code_r0x00010ae69998;
                          ppppppuVar18 = (ushort ******)((long)ppppppuVar18 + 1);
                          pppppuVar21 = (ushort *****)((long)pppppuVar21 + 1);
                        } while (ppppppuVar39 != (ushort ******)0x0);
                      }
                      if (*(int *)((long)pppppuVar15 + 0xf4) - 0x3dU < 0xffffff87) {
                        uVar32 = 0xc;
                      }
                      else {
                        pppppppuVar26 = (ushort *******)ppppppuStack_5f8;
                        FUN_10ae69f00(ppppppuStack_5f8,pppppppuVar17[1]);
                        if (((ulong)pppppppuVar26 & 1) != 0) {
                          if (((ulong)ppppppuStack_618 & 1) == 0) {
                            uVar32 = 8;
                            goto code_r0x00010ae688f8;
                          }
                          *(undefined4 *)(pppppuVar15 + 0x1f) = 2;
                          *(ushort *)((long)pppppuVar15 + 0xd4) =
                               *(ushort *)((long)pppppuVar15 + 0xd4) | 0x1000;
                          pppppuVar15 = ppppppuVar25[6];
                          goto code_r0x00010ae699a0;
                        }
                        uVar32 = 0xd;
                      }
                    }
                    else {
code_r0x00010ae69998:
                      uVar32 = 0xe;
                    }
                  }
                  else {
code_r0x00010ae69984:
                    uVar32 = 9;
                  }
                }
                else {
                  uVar32 = 10;
                }
              }
              *(undefined4 *)(pppppuVar15 + 0x1f) = uVar32;
            }
code_r0x00010ae699a0:
            ppppppuVar39 = *pppppppuVar41;
            ppppuVar13 = pppppuVar15[0x3c];
            ppppuVar4 = pppppuVar15[0x3d];
            ppppppuVar12 = ppppppuVar39 + 0x30;
            func_0x000107c2b684(ppppppuVar12,ppppuVar4);
            uVar9 = (uint)ppppppuVar12 ^ 1;
            if (ppppuVar4 == (ushort ****)0x0) {
              uVar9 = 1;
            }
            if ((uVar9 & 1) == 0) {
              _memcpy(ppppppuVar39[0x30],ppppuVar13,ppppuVar4);
            }
            if ((uint)ppppppuVar12 == 0) {
code_r0x00010ae69b30:
              uVar23 = 0x50;
              goto code_r0x00010ae69b34;
            }
            if (((*(ushort *)((long)ppppppuVar25[6] + 0xd4) >> 0xc & 1) != 0) &&
               (ppppppuVar12 = *pppppppuVar41, (*(byte *)(ppppppuVar12 + 0x36) >> 6 & 1) != 0)) {
              ppppppuVar18 = (ushort ******)ppppppuStack_5f8[0x34];
              ppppppuVar24 = (ushort ******)ppppppuStack_5f8[0x35];
              ppppppuVar39 = ppppppuVar12 + 0x34;
              func_0x000107c2b684(ppppppuVar39,ppppppuVar24);
              uVar9 = (uint)ppppppuVar39 ^ 1;
              if (ppppppuVar24 == (ushort ******)0x0) {
                uVar9 = 1;
              }
              if ((uVar9 & 1) == 0) {
                _memcpy(ppppppuVar12[0x34],ppppppuVar18,ppppppuVar24);
              }
              if ((uint)ppppppuVar39 == 0) goto code_r0x00010ae69b30;
            }
            if (((*(byte *)((long)ppppppuVar25 + 0xa4) >> 2 & 1) != 0) &&
               (ppppppuVar25[0x13] != (ushort *****)0x0)) {
              ppppppuVar39 = pppppppuVar17[0xbb];
              pppppuVar15 = pppppppuVar17[1][0x16];
              pppppuVar21 = pppppppuVar17[1][0x17];
              ppppppuVar12 = ppppppuVar39 + 0x37;
              func_0x000107c2b684(ppppppuVar12,pppppuVar21);
              uVar9 = (uint)ppppppuVar12 ^ 1;
              if (pppppuVar21 == (ushort *****)0x0) {
                uVar9 = 1;
              }
              if ((uVar9 & 1) == 0) {
                _memcpy(ppppppuVar39[0x37],pppppuVar15,pppppuVar21);
              }
              if ((uint)ppppppuVar12 == 0) goto code_r0x00010ae69b30;
            }
            if (ppppppuVar25[0xd][0x3c] != (ushort ****)0x0) {
              iVar11 = (int)&pppppuStack_740;
              (*(code *)ppppppuVar25[0xd][0x3c])();
              if (iVar11 == 0) {
                func_0x000107c2b29c(0x10,0,0x85,&UNK_10f6d1513,0x1f9);
                goto code_r0x00010ae69b30;
              }
            }
            ppppppuVar12 = ppppppuVar25;
            func_0x000107c2b89c();
            func_0x000107c2b76c();
            if ((*(ushort *)((long)ppppppuVar25[6] + 0xd4) >> 6 & 1) == 0) {
              uVar28 = (ulong)*(uint *)((long)ppppppuVar12 + 4);
              pppppppuVar26 = (ushort *******)&UNK_10e52b4d2;
            }
            else {
              pppppppuVar26 = (ushort *******)(*pppppppuVar41 + 2);
              uVar28 = (ulong)*(int *)((long)*pppppppuVar41 + 0xc);
            }
            pppppppuVar22 = pppppppuVar17;
            func_0x000107c2b8f0(pppppppuVar17,pppppppuVar26,uVar28);
            if ((int)pppppppuVar22 != 0) {
              if (((uint)uStack_6d0 & 1) == 0) {
                pppppppuVar22 = pppppppuVar17 + 0x33;
                pppppppuVar26 = (ushort *******)ppppppuStack_6b8;
                func_0x000107c2b894(pppppppuVar22,ppppppuStack_6b8,uStack_6b0);
                if (((ulong)pppppppuVar22 & 1) == 0) goto code_r0x00010ae69820;
              }
              uVar6 = *(ushort *)((long)ppppppuVar25[6] + 0xd4);
              if ((uVar6 >> 0xc & 1) == 0) {
                if ((*(byte *)((long)pppppppuVar17 + 0x619) >> 4 & 1) != 0) {
                  *(ushort *)((long)ppppppuVar25[6] + 0xd4) = uVar6 | 1;
                }
              }
              else {
                pppppppuVar22 = pppppppuVar17;
                FUN_10ae67a20();
                if (((ulong)pppppppuVar22 & 1) == 0) goto code_r0x00010ae69820;
              }
              if (((ulong)ppppppuStack_618 & 1) == 0) {
                (*(code *)(*ppppppuVar25)[4])(ppppppuVar25);
                pppppppuVar22 = pppppppuVar17 + 0x33;
                func_0x00010ae65734();
                if (((ulong)pppppppuVar22 & 1) != 0) {
                  uVar32 = 2;
                  goto code_r0x00010ae69bb0;
                }
              }
              else {
                pppppppuVar26 = (ushort *******)&pppppuStack_740;
                pppppppuVar22 = pppppppuVar17;
                FUN_10ae69f5c();
                if ((int)pppppppuVar22 != 0) {
                  (*(code *)(*ppppppuVar25)[4])(ppppppuVar25);
                  func_0x000107c2b534(*pppppppuVar1);
                  *pppppppuVar1 = (ushort ******)0x0;
                  pppppppuVar17[0x48] = (ushort ******)0x0;
                  uVar32 = 4;
code_r0x00010ae69bb0:
                  *(undefined4 *)(pppppppuVar17 + 3) = uVar32;
                  ppppppuVar25 = (ushort ******)0x1;
                  goto code_r0x00010ae69824;
                }
              }
            }
          }
          goto code_r0x00010ae69820;
        }
        if (iVar11 != 1) goto code_r0x00010ae6889c;
        *(undefined4 *)(pppppppuVar17 + 3) = 1;
        ppppppuVar25 = (ushort ******)0xb;
      }
code_r0x00010ae69824:
      pppppppuVar20 = (ushort *******)ppppppuStack_5f8;
      ppppppuStack_5f8 = (ushort ******)0x0;
      if (pppppppuVar20 != (ushort *******)0x0) {
        func_0x000107c2b874();
      }
      break;
    case 2:
      if ((*(byte *)((long)pppppppuVar17 + 0x61a) >> 4 & 1) == 0) {
        pppppppuVar16 = (ushort *******)*pppppppuVar17;
        puStack_738 = (ushort *)0x0;
        pppppuStack_740 = (ushort *****)0x0;
        ppppppuStack_728 = (ushort ******)0x0;
        uStack_730 = 0;
        pppppppuVar26 = (ushort *******)&pppppuStack_740;
        pppppppuVar22 = pppppppuVar16;
        (*(code *)(*pppppppuVar16)[0xb])(pppppppuVar16,pppppppuVar26,&uStack_6d0,2);
        if ((int)pppppppuVar22 == 0) {
code_r0x00010ae68f2c:
          ppppppuVar25 = (ushort ******)0x0;
        }
        else {
          iVar11 = (int)&uStack_6d0;
          pppppppuVar26 = (ushort *******)0x303;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_6d0;
          pppppppuVar26 = (ushort *******)&UNK_10e52b348;
          func_0x000107c2b21c(puVar19,&UNK_10e52b348,0x20);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_6d0;
          pppppppuVar26 = &ppppppuStack_618;
          func_0x000107c34f3c(puVar19,pppppppuVar26,1);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar22 = &ppppppuStack_618;
          pppppppuVar26 = (ushort *******)((long)pppppppuVar17 + 0x623);
          func_0x000107c2b21c(pppppppuVar22,pppppppuVar26,*(char *)((long)pppppppuVar17 + 0x643));
          if ((int)pppppppuVar22 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar26 = (ushort *******)(ulong)*(ushort *)(pppppppuVar17[0xbf] + 2);
          iVar11 = (int)&uStack_6d0;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          iVar11 = (int)&uStack_6d0;
          pppppppuVar26 = (ushort *******)0x0;
          func_0x000107c2b218();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar26 = (ushort *******)&uStack_688;
          pppppppuVar22 = pppppppuVar17;
          FUN_10ae5987c();
          if ((int)pppppppuVar22 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_6d0;
          pppppppuVar26 = (ushort *******)apppppuStack_5e8;
          func_0x000107c34f3c(puVar19,pppppppuVar26,2);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          iVar11 = (int)apppppuStack_5e8;
          pppppppuVar26 = (ushort *******)0x2b;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          iVar11 = (int)apppppuStack_5e8;
          pppppppuVar26 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar26 = (ushort *******)(ulong)*(ushort *)(pppppppuVar16 + 2);
          iVar11 = (int)apppppuStack_5e8;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          iVar11 = (int)apppppuStack_5e8;
          pppppppuVar26 = (ushort *******)0x33;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          iVar11 = (int)apppppuStack_5e8;
          pppppppuVar26 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar26 = (ushort *******)(ulong)CONCAT11(uStack_688._1_1_,(undefined1)uStack_688);
          iVar11 = (int)apppppuStack_5e8;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          if (((ulong)pppppppuVar17[0xc3] & 1) != 0) {
            iVar11 = (int)apppppuStack_5e8;
            pppppppuVar26 = (ushort *******)0xfe0d;
            func_0x000107c2b228();
            if (iVar11 != 0) {
              iVar11 = (int)apppppuStack_5e8;
              pppppppuVar26 = (ushort *******)0x8;
              func_0x000107c2b228();
              if (iVar11 != 0) {
                ppppppuVar25 = apppppuStack_5e8;
                pppppppuVar26 = (ushort *******)&pppppuStack_648;
                func_0x000107c2b220(ppppppuVar25,pppppppuVar26,8);
                if ((int)ppppppuVar25 != 0) {
                  *pppppuStack_648 = (ushort ****)0x0;
                  goto code_r0x00010ae68738;
                }
              }
            }
            goto code_r0x00010ae68f2c;
          }
code_r0x00010ae68738:
          pppppuStack_648 = (ushort *****)0x0;
          uStack_640 = 0;
          pppppppuVar26 = (ushort *******)&pppppuStack_740;
          pppppppuVar20 = pppppppuVar16;
          (*(code *)(*pppppppuVar16)[0xc])(pppppppuVar16,pppppppuVar26,&pppppuStack_648);
          if (((ulong)pppppppuVar20 & 1) == 0) {
code_r0x00010ae69bbc:
            ppppppuVar25 = (ushort ******)0x0;
          }
          else {
            if (((ulong)pppppppuVar17[0xc3] & 1) != 0) {
              if (uStack_640 < 8) goto code_r0x00010ae69e28;
              pppppppuVar26 = (ushort *******)((uStack_640 - 8) + (long)pppppuStack_648);
              pppppppuVar22 = pppppppuVar17;
              FUN_10ae68138(pppppppuVar17,pppppppuVar26,8,pppppppuVar16[6] + 6,0x20,
                            pppppppuVar17 + 0x33,1,param_8,pppppuStack_648,uStack_640,uStack_640 - 8
                           );
              if (((ulong)pppppppuVar22 & 1) == 0) goto code_r0x00010ae69bbc;
            }
            pppppuStack_668 = pppppuStack_648;
            uStack_660 = uStack_640;
            pppppuStack_648 = (ushort *****)0x0;
            uStack_640 = 0;
            pppppppuVar26 = (ushort *******)&pppppuStack_668;
            pppppppuVar22 = pppppppuVar16;
            (*(code *)(*pppppppuVar16)[0xd])();
            if ((int)pppppppuVar22 == 0) {
              func_0x000107c2b534(pppppuStack_668);
              ppppppuVar25 = (ushort ******)0x0;
              pppppuStack_668 = (ushort *****)0x0;
              uStack_660 = 0;
            }
            else {
              pppppppuVar22 = pppppppuVar16;
              (*(code *)(*pppppppuVar16)[0xe])();
              func_0x000107c2b534(pppppuStack_668);
              pppppuStack_668 = (ushort *****)0x0;
              uStack_660 = 0;
              if (((ulong)pppppppuVar22 & 1) == 0) goto code_r0x00010ae69bbc;
              *(ushort *)((long)pppppppuVar16[6] + 0xd4) =
                   *(ushort *)((long)pppppppuVar16[6] + 0xd4) | 0x8000;
              *(undefined4 *)(pppppppuVar17 + 3) = 3;
              ppppppuVar25 = (ushort ******)0x4;
            }
          }
          func_0x000107c2b534(pppppuStack_648);
        }
        pppppppuVar20 = (ushort *******)&pppppuStack_740;
        func_0x000107c2b204();
      }
      else {
code_r0x00010ae689a0:
        ppppppuVar25 = (ushort ******)0x11;
      }
      break;
    case 3:
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      pppppppuVar26 = (ushort *******)&uStack_6d0;
      pppppppuVar22 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar22 != 0) {
        pppppppuVar22 = (ushort *******)&uStack_6d0;
        pppppppuVar16 = pppppppuVar20;
        func_0x000107c2b6f8(pppppppuVar20,pppppppuVar22,1);
        if ((int)pppppppuVar16 != 0) {
          ppppppuStack_618 = ppppppuStack_6c8;
          ppppppuStack_610 = ppppppuStack_6c0;
          pppppppuVar26 = pppppppuVar20;
          FUN_10ae5965c(pppppppuVar20,&ppppppuStack_618,&pppppuStack_740);
          uVar9 = 0;
          if ((ushort *******)ppppppuStack_610 == (ushort *******)0x0) {
            uVar9 = (uint)pppppppuVar26;
          }
          if ((uVar9 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x83,&UNK_10f6d1513,0x26c);
            pppppppuVar22 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar20,2,0x32);
            pppppppuVar16 = pppppppuVar20;
          }
          else {
            ppppppuVar25 = pppppppuVar20[6];
            if (*(int *)(ppppppuVar25 + 0x1a) == 1) {
              ppppppuVar25 = &pppppuStack_740;
              FUN_10ae59824(ppppppuVar25,&ppppppuStack_618,0xfe0d);
              if (((ulong)ppppppuVar25 & 1) == 0) {
                func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x277);
                pppppppuVar22 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar20,2,0x6d);
                pppppppuVar16 = pppppppuVar20;
              }
              else {
                pppppppuVar26 = (ushort *******)ppppppuStack_618;
                if ((ushort *******)ppppppuStack_610 == (ushort *******)0x0) {
                  uVar31 = 0x32;
                  uVar27 = 0x286;
                }
                else {
                  uVar31 = 0x32;
                  uVar27 = 0x286;
                  if (((*(char *)ppppppuStack_618 == '\0') &&
                      ((ushort *******)0x2 < ppppppuStack_610)) &&
                     ((pppppppuVar26 = (ushort *******)((long)ppppppuStack_618 + 3),
                      (char *)0x1 < (char *)((long)ppppppuStack_610 + -3) &&
                      (((ushort *******)ppppppuStack_610 != (ushort *******)0x5 &&
                       ((char *)0x2 < (char *)((long)ppppppuStack_610 + -5))))))) {
                    pppppppuVar22 =
                         (ushort *******)
                         (ulong)((uint)(*(ushort *)((long)ppppppuStack_618 + 6) >> 8) |
                                (*(ushort *)((long)ppppppuStack_618 + 6) & 0xff00ff) << 8);
                    uVar28 = (long)(ppppppuStack_610 + -1) - (long)pppppppuVar22;
                    if ((pppppppuVar22 <= ppppppuStack_610 + -1) &&
                       ((1 < uVar28 &&
                        (pcVar2 = (char *)((long)ppppppuStack_618 + (long)pppppppuVar22),
                        uVar6 = *(ushort *)(pcVar2 + 8),
                        uVar28 - 2 == (ulong)((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8))))) {
                      if (((ushort)(*(ushort *)((long)ppppppuStack_618 + 1) >> 8 |
                                   *(ushort *)((long)ppppppuStack_618 + 1) << 8) ==
                           *(ushort *)pppppppuVar17[0x59]) &&
                         ((ushort)(*(ushort *)((long)ppppppuStack_618 + 3) >> 8 |
                                  *(ushort *)((long)ppppppuStack_618 + 3) << 8) ==
                          *(ushort *)pppppppuVar17[0x58])) {
                        uVar31 = 0x2f;
                        uVar27 = 0x28f;
                        if ((*(char *)((long)ppppppuStack_618 + 5) ==
                             *(char *)((long)pppppppuVar17 + 0x622)) &&
                           (pppppppuVar22 == (ushort *******)0x0)) {
                          apppppuStack_5e8[0] =
                               (ushort *****)CONCAT71(apppppuStack_5e8[0]._1_7_,0x32);
                          pppppppuVar22 = pppppppuVar17;
                          ppppppuStack_618 = (ushort ******)pppppppuVar26;
                          FUN_10ae5875c(pppppppuVar17,apppppuStack_5e8,&pppppuStack_648,pppppppuVar1
                                        ,&pppppuStack_740,pcVar2 + 10);
                          if (((ulong)pppppppuVar22 & 1) != 0) {
                            pppppppuVar26 = pppppppuVar17;
                            FUN_10ae5cbc0(pppppppuVar17,&uStack_6d0,&pppppuStack_740);
                            if (((ulong)pppppppuVar26 & 1) == 0) {
                              uVar27 = 0x44;
                              uVar31 = 0x2a2;
                              goto code_r0x00010ae693e4;
                            }
                            ppppppuVar25 = pppppppuVar20[6];
                            goto code_r0x00010ae68c24;
                          }
                          func_0x000107c2b29c(0x10,0,0x8a,&UNK_10f6d1513,0x29b);
                          pppppppuVar22 = (ushort *******)0x2;
                          FUN_10ae60390(pppppppuVar20,2,(ulong)apppppuStack_5e8[0] & 0xff);
                          pppppppuVar16 = pppppppuVar20;
                          goto LAB_10ae693e8;
                        }
                      }
                      else {
                        uVar31 = 0x2f;
                        uVar27 = 0x28f;
                      }
                    }
                  }
                }
                ppppppuStack_618 = (ushort ******)pppppppuVar26;
                func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,uVar27);
                pppppppuVar22 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar20,2,uVar31);
                pppppppuVar16 = pppppppuVar20;
              }
            }
            else {
code_r0x00010ae68c24:
              if ((*(ushort *)((long)ppppppuVar25 + 0xd4) >> 6 & 1) == 0) {
code_r0x00010ae68c2c:
                pppppppuVar26 = (ushort *******)&pppppuStack_740;
                pppppppuVar16 = pppppppuVar17;
                FUN_10ae69f5c();
                pppppppuVar22 = pppppppuVar26;
                if ((int)pppppppuVar16 != 0) {
                  if (((uint)uStack_6d0 & 1) == 0) {
                    pppppppuVar16 = pppppppuVar17 + 0x33;
                    pppppppuVar26 = (ushort *******)ppppppuStack_6b8;
                    func_0x000107c2b894(pppppppuVar16,ppppppuStack_6b8,uStack_6b0);
                    pppppppuVar22 = pppppppuVar26;
                    if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
                  }
                  pppppppuVar22 = pppppppuVar20;
                  (*(code *)(*pppppppuVar20)[5])();
                  if ((int)pppppppuVar22 != 0) {
                    FUN_10ae60390(pppppppuVar20,2,10);
                    uVar27 = 0xff;
                    uVar31 = 0x2d5;
                    goto code_r0x00010ae693e4;
                  }
                  (*(code *)(*pppppppuVar20)[4])(pppppppuVar20);
                  pppppppuVar20 = (ushort *******)pppppppuVar17[0x47];
                  func_0x000107c2b534();
                  *pppppppuVar1 = (ushort ******)0x0;
                  pppppppuVar17[0x48] = (ushort ******)0x0;
                  ppppppuVar25 = (ushort ******)0x1;
                  *(undefined4 *)(pppppppuVar17 + 3) = 4;
                  break;
                }
              }
              else {
                ppppppuVar25 = &pppppuStack_740;
                FUN_10ae59824(ppppppuVar25,&ppppppuStack_618,0x29);
                if (((ulong)ppppppuVar25 & 1) == 0) {
                  func_0x000107c2b29c(0x10,0,0x12f,&UNK_10f6d1513,0x2b2);
                  pppppppuVar22 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar20,2,0x2f);
                  pppppppuVar16 = pppppppuVar20;
                }
                else {
                  uStack_688._0_1_ = 0x32;
                  pppppppuVar26 = pppppppuVar17;
                  func_0x00010ae59cd0(pppppppuVar17,apppppuStack_5e8,&pppppuStack_648,
                                      &pppppuStack_668,&uStack_688,&pppppuStack_740,
                                      &ppppppuStack_618);
                  uVar23 = (undefined1)uStack_688;
                  if (((ulong)pppppppuVar26 & 1) != 0) {
                    pppppppuVar26 = pppppppuVar17;
                    FUN_10ae68018(pppppppuVar17,pppppppuVar17[0xbb],&uStack_6d0,&pppppuStack_648);
                    if ((int)pppppppuVar26 != 0) goto code_r0x00010ae68c2c;
                    uVar23 = 0x33;
                  }
                  pppppppuVar22 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar20,2,uVar23);
                  pppppppuVar16 = pppppppuVar20;
                }
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae6931c:
      pppppppuVar20 = pppppppuVar22;
      ppppppuVar25 = (ushort ******)0x3;
      break;
    case 4:
      ppppppuVar25 = *pppppppuVar17;
      pppppuVar15 = ppppppuVar25[6];
      pppppppuVar26 = (ushort *******)pppppppuVar17[0xc2];
      if (pppppppuVar26 == (ushort *******)0x0) {
        func_0x000107c2b3c4(pppppuVar15 + 2,0x20,&UNK_10e525a20);
      }
      else if (((*(byte *)((long)pppppppuVar17 + 0x61a) >> 4 & 1) == 0) &&
              (pppppppuVar26[1] == (ushort ******)0x20)) {
        ppppppuVar12 = *pppppppuVar26;
        pppppuVar21 = *ppppppuVar12;
        pppppuVar30 = ppppppuVar12[3];
        pppppuVar29 = ppppppuVar12[2];
        pppppuVar15[3] = (ushort ****)ppppppuVar12[1];
        pppppuVar15[2] = (ushort ****)pppppuVar21;
        pppppuVar15[5] = (ushort ****)pppppuVar30;
        pppppuVar15[4] = (ushort ****)pppppuVar29;
      }
      else {
        func_0x000107c2b3c4(pppppuVar15 + 2,0x20,&UNK_10e525a20);
        if ((*(byte *)((long)pppppppuVar17 + 0x61a) >> 4 & 1) != 0) {
          pppppppuVar22 = (ushort *******)0x20;
          pppppppuVar16 = pppppppuVar26;
          func_0x000107c2b684();
          if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
          ppppppuVar12 = *pppppppuVar26;
          pppppuVar21 = (ushort *****)pppppuVar15[2];
          pppppuVar30 = (ushort *****)pppppuVar15[5];
          pppppuVar29 = (ushort *****)pppppuVar15[4];
          ppppppuVar12[1] = (ushort *****)pppppuVar15[3];
          *ppppppuVar12 = pppppuVar21;
          ppppppuVar12[3] = pppppuVar30;
          ppppppuVar12[2] = pppppuVar29;
        }
      }
      ppppppuStack_5f8 = (ushort ******)0x0;
      uStack_5f0 = 0;
      puStack_738 = (ushort *)0x0;
      pppppuStack_740 = (ushort *****)0x0;
      ppppppuStack_728 = (ushort ******)0x0;
      uStack_730 = 0;
      pppppppuVar26 = (ushort *******)&pppppuStack_740;
      ppppppuVar12 = ppppppuVar25;
      (*(code *)(*ppppppuVar25)[0xb])(ppppppuVar25,pppppppuVar26,&uStack_6d0,2);
      if ((int)ppppppuVar12 == 0) {
code_r0x00010ae69d9c:
        ppppppuVar25 = (ushort ******)0x0;
      }
      else {
        iVar11 = (int)&uStack_6d0;
        pppppppuVar26 = (ushort *******)0x303;
        func_0x000107c2b228();
        if (iVar11 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_6d0;
        pppppppuVar26 = (ushort *******)(ppppppuVar25[6] + 2);
        func_0x000107c2b21c(puVar19,pppppppuVar26,0x20);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_6d0;
        pppppppuVar26 = (ushort *******)apppppuStack_5e8;
        func_0x000107c34f3c(puVar19,pppppppuVar26,1);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        ppppppuVar12 = apppppuStack_5e8;
        pppppppuVar26 = (ushort *******)((long)pppppppuVar17 + 0x623);
        func_0x000107c2b21c(ppppppuVar12,pppppppuVar26,*(char *)((long)pppppppuVar17 + 0x643));
        if ((int)ppppppuVar12 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar26 = (ushort *******)(ulong)*(ushort *)(pppppppuVar17[0xbf] + 2);
        iVar11 = (int)&uStack_6d0;
        func_0x000107c2b228();
        if (iVar11 == 0) goto code_r0x00010ae69d9c;
        iVar11 = (int)&uStack_6d0;
        pppppppuVar26 = (ushort *******)0x0;
        func_0x000107c2b218();
        if (iVar11 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_6d0;
        pppppppuVar26 = &ppppppuStack_618;
        func_0x000107c34f3c(puVar19,pppppppuVar26,2);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar26 = &ppppppuStack_618;
        pppppppuVar22 = pppppppuVar17;
        func_0x00010ae59ec4();
        if ((int)pppppppuVar22 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar26 = &ppppppuStack_618;
        pppppppuVar22 = pppppppuVar17;
        FUN_10ae5a0c0();
        if ((int)pppppppuVar22 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar26 = &ppppppuStack_618;
        pppppppuVar22 = pppppppuVar17;
        FUN_10ae6a27c();
        if ((int)pppppppuVar22 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar26 = (ushort *******)&pppppuStack_740;
        ppppppuVar12 = ppppppuVar25;
        (*(code *)(*ppppppuVar25)[0xc])(ppppppuVar25,pppppppuVar26,&ppppppuStack_5f8);
        if (((ulong)ppppppuVar12 & 1) == 0) goto code_r0x00010ae69d9c;
        if (((ulong)pppppppuVar17[0xc3] & 1) != 0) {
          uVar28 = 0x1e;
          if (*(char *)*ppppppuVar25 != '\0') {
            uVar28 = 0x26;
          }
          pppppppuVar26 = (ushort *******)(pppppuVar15 + 5);
          pppppppuVar20 = pppppppuVar17;
          FUN_10ae68138(pppppppuVar17,pppppppuVar26,8,ppppppuVar25[6] + 6,0x20,pppppppuVar17 + 0x33,
                        0,param_8,ppppppuStack_5f8,uStack_5f0,uVar28);
          if (((ulong)pppppppuVar20 & 1) == 0) goto code_r0x00010ae69d9c;
          if (uStack_5f0 < uVar28) goto code_r0x00010ae69e28;
          *(ushort *****)((long)ppppppuStack_5f8 + uVar28) = pppppuVar15[5];
        }
        ppppppuStack_628 = ppppppuStack_5f8;
        uStack_620 = uStack_5f0;
        ppppppuStack_5f8 = (ushort ******)0x0;
        uStack_5f0 = 0;
        pppppppuVar26 = &ppppppuStack_628;
        ppppppuVar12 = ppppppuVar25;
        (*(code *)(*ppppppuVar25)[0xd])();
        func_0x000107c2b534(ppppppuStack_628);
        ppppppuStack_628 = (ushort ******)0x0;
        uStack_620 = 0;
        if (((ulong)ppppppuVar12 & 1) == 0) goto code_r0x00010ae69d9c;
        func_0x000107c2b534(pppppppuVar17[0x4b]);
        pppppppuVar17[0x4b] = (ushort ******)0x0;
        pppppppuVar17[0x4c] = (ushort ******)0x0;
        if (((-1 < *(short *)((long)ppppppuVar25[6] + 0xd4)) &&
            (ppppppuVar12 = ppppppuVar25, (*(code *)(*ppppppuVar25)[0xe])(), (int)ppppppuVar12 == 0)
            ) || (pppppppuVar22 = pppppppuVar17, func_0x000107c2b904(), (int)pppppppuVar22 == 0))
        goto code_r0x00010ae69d9c;
        pppppppuVar26 = (ushort *******)0x2;
        ppppppuVar12 = ppppppuVar25;
        func_0x000107c2b8fc(ppppppuVar25,2,1,pppppppuVar17[0xbb],pppppppuVar17 + 0x17,
                            pppppppuVar17[4]);
        if (((ulong)ppppppuVar12 & 1) == 0) goto code_r0x00010ae69d9c;
        pppppppuVar26 = (ushort *******)&pppppuStack_740;
        ppppppuVar12 = ppppppuVar25;
        (*(code *)(*ppppppuVar25)[0xb])(ppppppuVar25,pppppppuVar26,&uStack_6d0,8);
        if ((int)ppppppuVar12 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar26 = (ushort *******)&uStack_6d0;
        pppppppuVar22 = pppppppuVar17;
        func_0x00010ae5a300();
        if ((int)pppppppuVar22 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar26 = (ushort *******)&pppppuStack_740;
        ppppppuVar12 = ppppppuVar25;
        func_0x000107c2b6fc();
        if ((int)ppppppuVar12 == 0) goto code_r0x00010ae69d9c;
        uVar9 = *(uint *)(pppppppuVar17 + 0xc3);
        if ((*(ushort *)((long)ppppppuVar25[6] + 0xd4) >> 6 & 1) == 0) {
          uVar5 = uVar9 & 0xffffffdf;
          uVar7 = uVar9 & 0x1000000;
          uVar9 = uVar9 & 0xffffffc0 | uVar9 & 0x1f | (*(byte *)(pppppppuVar17[1] + 0x1d) & 1) << 5;
          *(uint *)(pppppppuVar17 + 0xc3) = uVar9;
          if (uVar7 != 0 && ((ulong)pppppppuVar17[1][0x1d] & 4) != 0) {
            uVar9 = uVar5;
          }
          *(uint *)(pppppppuVar17 + 0xc3) = uVar9;
        }
        if ((uVar9 >> 5 & 1) != 0) {
          pppppppuVar26 = (ushort *******)&pppppuStack_740;
          ppppppuVar12 = ppppppuVar25;
          (*(code *)(*ppppppuVar25)[0xb])(ppppppuVar25,pppppppuVar26,&uStack_6d0,0xd);
          if ((int)ppppppuVar12 != 0) {
            iVar11 = (int)&uStack_6d0;
            pppppppuVar26 = (ushort *******)0x0;
            func_0x000107c2b218();
            if (iVar11 != 0) {
              puVar19 = &uStack_6d0;
              pppppppuVar26 = (ushort *******)&pppppuStack_648;
              func_0x000107c34f3c(puVar19,pppppppuVar26,2);
              if ((int)puVar19 != 0) {
                iVar11 = (int)&pppppuStack_648;
                pppppppuVar26 = (ushort *******)0xd;
                func_0x000107c2b228();
                if (iVar11 != 0) {
                  ppppppuVar12 = &pppppuStack_648;
                  pppppppuVar26 = (ushort *******)&pppppuStack_668;
                  func_0x000107c34f3c(ppppppuVar12,pppppppuVar26,2);
                  if ((int)ppppppuVar12 != 0) {
                    ppppppuVar12 = &pppppuStack_668;
                    pppppppuVar26 = (ushort *******)&uStack_688;
                    func_0x000107c34f3c(ppppppuVar12,pppppppuVar26,2);
                    if ((int)ppppppuVar12 != 0) {
                      pppppppuVar26 = (ushort *******)&uStack_688;
                      pppppppuVar22 = pppppppuVar17;
                      func_0x000107c2b6b0();
                      if (((ulong)pppppppuVar22 & 1) != 0) {
                        pppppuVar15 = pppppppuVar17[1][10];
                        if (((pppppuVar15 == (ushort *****)0x0) &&
                            (pppppuVar15 = (ushort *****)(*pppppppuVar17[1])[0xd][0x31],
                            pppppuVar15 == (ushort *****)0x0)) || (*pppppuVar15 == (ushort ****)0x0)
                           ) {
code_r0x00010ae69d54:
                          pppppppuVar26 = (ushort *******)&pppppuStack_740;
                          ppppppuVar12 = ppppppuVar25;
                          func_0x000107c2b6fc();
                          if (((ulong)ppppppuVar12 & 1) != 0) goto code_r0x00010ae69238;
                        }
                        else {
                          iVar11 = (int)&pppppuStack_648;
                          pppppppuVar26 = (ushort *******)0x2f;
                          func_0x000107c2b228();
                          if (iVar11 != 0) {
                            ppppppuVar12 = &pppppuStack_648;
                            pppppppuVar26 = appppppuStack_6a8;
                            func_0x000107c34f3c(ppppppuVar12,pppppppuVar26,2);
                            if ((int)ppppppuVar12 != 0) {
                              pppppppuVar26 = appppppuStack_6a8;
                              pppppppuVar22 = pppppppuVar17;
                              FUN_10ae626b8();
                              if ((int)pppppppuVar22 != 0) {
                                iVar11 = (int)&pppppuStack_648;
                                func_0x000107c2b20c();
                                if (iVar11 != 0) goto code_r0x00010ae69d54;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto code_r0x00010ae69d9c;
        }
code_r0x00010ae69238:
        if ((*(ushort *)((long)ppppppuVar25[6] + 0xd4) >> 6 & 1) == 0) {
          pppppppuVar22 = pppppppuVar17;
          FUN_10ae61f18();
          if (((ulong)pppppppuVar22 & 1) == 0) {
            pppppppuVar26 = (ushort *******)0x0;
            func_0x000107c2b29c(0x10,0,0xae,&UNK_10f6d1513,0x35d);
          }
          else {
            pppppppuVar22 = pppppppuVar17;
            FUN_10ae66d90();
            if ((int)pppppppuVar22 != 0) {
              uVar32 = 5;
              goto code_r0x00010ae69d74;
            }
          }
          goto code_r0x00010ae69d9c;
        }
        uVar32 = 6;
code_r0x00010ae69d74:
        *(undefined4 *)(pppppppuVar17 + 3) = uVar32;
        ppppppuVar25 = (ushort ******)0x1;
      }
      func_0x000107c2b204(&pppppuStack_740);
      pppppppuVar20 = (ushort *******)ppppppuStack_5f8;
      func_0x000107c2b534();
      break;
    case 5:
      pppppppuVar20 = pppppppuVar17;
      FUN_10ae673c0();
      if ((int)pppppppuVar20 == 0) {
        uVar32 = 6;
      }
      else {
        pppppppuVar16 = pppppppuVar20;
        pppppppuVar22 = pppppppuVar26;
        if ((int)pppppppuVar20 != 1) goto LAB_10ae693e8;
        ppppppuVar25 = (ushort ******)0x9;
        uVar32 = 5;
      }
      goto code_r0x00010ae69444;
    case 6:
      if ((*(uint *)(pppppppuVar17 + 0xc3) >> 0x14 & 1) != 0) goto code_r0x00010ae689a0;
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      *(uint *)(pppppppuVar17 + 0xc3) = *(uint *)(pppppppuVar17 + 0xc3) | 0x800000;
      pppppppuVar16 = pppppppuVar17;
      func_0x000107c2b8e4();
      pppppppuVar22 = pppppppuVar26;
      if ((int)pppppppuVar16 != 0) {
        pppppppuVar22 = (ushort *******)&UNK_10e52b4d2;
        pppppppuVar16 = pppppppuVar17;
        func_0x000107c2b8f8(pppppppuVar17,&UNK_10e52b4d2,
                            *(undefined4 *)((long)pppppppuVar17[0x34] + 4));
        if (((int)pppppppuVar16 != 0) &&
           (pppppppuVar16 = pppppppuVar17, func_0x000107c2b908(), (int)pppppppuVar16 != 0)) {
          pppppppuVar26 = (ushort *******)0x3;
          func_0x000107c2b8fc(pppppppuVar20,3,1,pppppppuVar17[0xbb],pppppppuVar17 + 0x23,
                              pppppppuVar17[4]);
          pppppppuVar16 = pppppppuVar20;
          pppppppuVar22 = pppppppuVar26;
          if ((int)pppppppuVar20 != 0) {
            uVar9 = 7;
            *(undefined4 *)(pppppppuVar17 + 3) = 7;
            if ((*(byte *)((long)pppppppuVar17 + 0x61a) & 8) == 0) {
              uVar9 = 1;
            }
            ppppppuVar25 = (ushort ******)(ulong)uVar9;
            break;
          }
        }
      }
      goto LAB_10ae693e8;
    case 7:
      if ((*(ushort *)((long)(*pppppppuVar17)[6] + 0xd4) >> 0xc & 1) != 0) {
        if ((*pppppppuVar17)[0x13] == (ushort *****)0x0) {
          pppppppuVar26 = pppppppuVar17 + 0x33;
          func_0x000107c2b894(pppppppuVar26,&UNK_10e52b512,4);
          if (((ulong)pppppppuVar26 & 1) != 0) goto code_r0x00010ae68e30;
          uVar27 = 0x44;
          uVar31 = 0x3a1;
code_r0x00010ae693e4:
          pppppppuVar22 = (ushort *******)0x0;
          pppppppuVar16 = (ushort *******)0x10;
          func_0x000107c2b29c(0x10,0,uVar27,&UNK_10f6d1513,uVar31);
        }
        else {
code_r0x00010ae68e30:
          pppppppuVar22 = pppppppuVar17 + 0x29;
          pppppppuVar16 = pppppppuVar17;
          func_0x000107c2b914(pppppppuVar17,pppppppuVar22,&pppppuStack_740,0);
          if ((int)pppppppuVar16 != 0) {
            if ((ushort ******)pppppuStack_740 != pppppppuVar17[4]) {
              uVar27 = 0x44;
              uVar31 = 0x3ac;
              goto code_r0x00010ae693e4;
            }
            uStack_6d0._0_4_ = CONCAT13((char)pppppuStack_740,0x14);
            pppppppuVar16 = pppppppuVar17 + 0x33;
            pppppppuVar22 = (ushort *******)&uStack_6d0;
            func_0x000107c2b894(pppppppuVar16,pppppppuVar22,4);
            if ((int)pppppppuVar16 != 0) {
              pppppppuVar16 = pppppppuVar17 + 0x33;
              pppppppuVar22 = pppppppuVar17 + 0x29;
              func_0x000107c2b894(pppppppuVar16,pppppppuVar22,pppppppuVar17[4]);
              if (((int)pppppppuVar16 != 0) &&
                 (pppppppuVar16 = pppppppuVar17, func_0x000107c2b910(), (int)pppppppuVar16 != 0)) {
                pppppppuVar22 = &ppppppuStack_618;
                pppppppuVar16 = pppppppuVar17;
                FUN_10ae6a2ec();
                pppppppuVar20 = pppppppuVar16;
                pppppppuVar26 = pppppppuVar22;
                if (((ulong)pppppppuVar16 & 1) != 0) goto code_r0x00010ae685b8;
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae685b8:
      *(undefined4 *)(pppppppuVar17 + 3) = 8;
      ppppppuVar25 = (ushort ******)0x4;
      break;
    case 8:
      pppppppuVar43 = (ushort *******)*pppppppuVar17;
      if ((*(ushort *)((long)pppppppuVar43[6] + 0xd4) >> 0xc & 1) != 0) {
        pppppppuVar26 = (ushort *******)0x1;
        pppppppuVar20 = pppppppuVar43;
        func_0x000107c2b8fc(pppppppuVar43,1,0,pppppppuVar17[0xbb],pppppppuVar17 + 0xb,
                            pppppppuVar17[4]);
        pppppppuVar16 = pppppppuVar20;
        pppppppuVar22 = pppppppuVar26;
        if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
        *(uint *)(pppppppuVar17 + 0xc3) = *(uint *)(pppppppuVar17 + 0xc3) | 0x6800;
      }
      if (pppppppuVar43[0x13] == (ushort ******)0x0) {
        uVar9 = 0xe;
      }
      else {
        pppppppuVar26 = (ushort *******)0x2;
        pppppppuVar20 = pppppppuVar43;
        func_0x000107c2b8fc(pppppppuVar43,2,0,pppppppuVar17[0xbb],pppppppuVar17 + 0x11,
                            pppppppuVar17[4]);
        pppppppuVar16 = pppppppuVar20;
        pppppppuVar22 = pppppppuVar26;
        if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
        uVar9 = 0xc;
      }
      *(undefined4 *)(pppppppuVar17 + 3) = 9;
      if ((*(ushort *)((long)pppppppuVar43[6] + 0xd4) & 0x1000) == 0) {
        uVar9 = 1;
      }
      ppppppuVar25 = (ushort ******)(ulong)uVar9;
      break;
    case 9:
      pppppppuVar43 = (ushort *******)*pppppppuVar17;
      if (pppppppuVar43[0x13] == (ushort ******)0x0) {
        if ((*(ushort *)((long)pppppppuVar43[6] + 0xd4) >> 0xc & 1) != 0) {
          pppppppuVar26 = (ushort *******)&pppppuStack_740;
          pppppppuVar22 = pppppppuVar43;
          (*(code *)(*pppppppuVar43)[3])();
          if ((int)pppppppuVar22 == 0) goto code_r0x00010ae6931c;
          pppppppuVar22 = (ushort *******)&pppppuStack_740;
          pppppppuVar16 = pppppppuVar43;
          func_0x000107c2b6f8(pppppppuVar43,pppppppuVar22,5);
          if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
          if (uStack_730 != 0) {
            FUN_10ae60390(pppppppuVar43,2,0x32);
            uVar27 = 0x89;
            uVar31 = 0x3f5;
            goto code_r0x00010ae693e4;
          }
          (*(code *)(*pppppppuVar43)[4])(pppppppuVar43);
        }
        pppppppuVar22 = (ushort *******)0x2;
        func_0x000107c2b8fc(pppppppuVar43,2,0,pppppppuVar17[0xbb],pppppppuVar17 + 0x11,
                            pppppppuVar17[4]);
        pppppppuVar16 = pppppppuVar43;
        pppppppuVar20 = pppppppuVar43;
        pppppppuVar26 = pppppppuVar22;
        if ((int)pppppppuVar43 == 0) goto LAB_10ae693e8;
      }
      uVar32 = 10;
code_r0x00010ae69444:
      *(undefined4 *)(pppppppuVar17 + 3) = uVar32;
      break;
    case 10:
      if (((*(byte *)(pppppppuVar17[0xbb] + 0x36) >> 6 & 1) != 0) &&
         (pppppppuVar43 = (ushort *******)*pppppppuVar17,
         (*(ushort *)((long)pppppppuVar43[6] + 0xd4) >> 0xc & 1) == 0)) {
        pppppppuVar26 = (ushort *******)&pppppuStack_740;
        pppppppuVar22 = pppppppuVar43;
        (*(code *)(*pppppppuVar43)[3])();
        if ((int)pppppppuVar22 == 0) goto code_r0x00010ae6931c;
        pppppppuVar22 = (ushort *******)&pppppuStack_740;
        pppppppuVar16 = pppppppuVar43;
        func_0x000107c2b6f8(pppppppuVar43,pppppppuVar22,8);
        if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
        if (1 < uStack_730) {
          pppppppuVar26 =
               (ushort *******)(ulong)((uint)(*puStack_738 >> 8) | (*puStack_738 & 0xff00ff) << 8);
          if ((pppppppuVar26 <= (ushort *******)(uStack_730 - 2)) &&
             (ppppppuStack_618 = (ushort ******)(puStack_738 + 1),
             ppppppuStack_610 = (ushort ******)pppppppuVar26,
             (ushort *******)(uStack_730 - 2) == pppppppuVar26)) {
            uStack_6d0._0_4_ = 0x14469;
            ppppppuStack_6c8 = (ushort ******)0x0;
            ppppppuStack_6c0 = (ushort ******)0x0;
            pppppuStack_648 = (ushort *****)CONCAT71(pppppuStack_648._1_7_,0x32);
            pppppppuVar26 = &ppppppuStack_618;
            apppppuStack_5e8[0] = (ushort *****)&uStack_6d0;
            func_0x000107c2b700(pppppppuVar26,&pppppuStack_648,apppppuStack_5e8,1,0);
            ppppppuVar25 = ppppppuStack_6c0;
            pppppppuVar22 = (ushort *******)ppppppuStack_6c8;
            if (((ulong)pppppppuVar26 & 1) == 0) {
              uVar28 = (ulong)pppppuStack_648 & 0xff;
            }
            else if (((uint)uStack_6d0 & 0x1000000) == 0) {
              func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x424);
              uVar28 = 0x6d;
            }
            else {
              ppppppuVar12 = *pppppppuVar41;
              uVar9 = (int)ppppppuVar12 + 0x1a0;
              pppppppuVar26 = (ushort *******)ppppppuStack_6c0;
              func_0x000107c2b684();
              uVar5 = uVar9 ^ 1;
              if ((ushort *******)ppppppuVar25 == (ushort *******)0x0) {
                uVar5 = 1;
              }
              if ((uVar5 & 1) == 0) {
                _memcpy(ppppppuVar12[0x34],pppppppuVar22,ppppppuVar25);
                pppppppuVar26 = pppppppuVar22;
              }
              if (uVar9 != 0) {
                if (((ulong)pppppuStack_740 & 1) == 0) {
                  pppppppuVar22 = pppppppuVar17 + 0x33;
                  pppppppuVar26 = (ushort *******)ppppppuStack_728;
                  func_0x000107c2b894(pppppppuVar22,ppppppuStack_728,uStack_720);
                  if (((ulong)pppppppuVar22 & 1) == 0) goto code_r0x00010ae698a0;
                }
                (*(code *)(*pppppppuVar43)[4])();
                pppppppuVar20 = pppppppuVar43;
                goto code_r0x00010ae6858c;
              }
code_r0x00010ae698a0:
              uVar28 = 0x50;
            }
            pppppppuVar22 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar43,2,uVar28);
            pppppppuVar16 = pppppppuVar43;
            goto LAB_10ae693e8;
          }
        }
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,0x416);
        pppppppuVar22 = (ushort *******)0x2;
        FUN_10ae60390(pppppppuVar43,2,0x32);
        pppppppuVar16 = pppppppuVar43;
        goto LAB_10ae693e8;
      }
code_r0x00010ae6858c:
      uVar32 = 0xb;
code_r0x00010ae68cb8:
      *(undefined4 *)(pppppppuVar17 + 3) = uVar32;
code_r0x00010ae68cbc:
      ppppppuVar25 = (ushort ******)0x1;
      break;
    case 0xb:
      pppppppuVar43 = (ushort *******)*pppppppuVar17;
      if ((*(byte *)(pppppppuVar17 + 0xc3) >> 5 & 1) == 0) {
        if ((*(ushort *)((long)pppppppuVar43[6] + 0xd4) >> 6 & 1) == 0) {
          (*pppppppuVar41)[0x17] = (ushort *****)0x0;
        }
        uVar32 = 0xd;
        goto code_r0x00010ae68cb8;
      }
      pppppuVar15 = pppppppuVar17[1][0x1d];
      pppppppuVar26 = (ushort *******)&pppppuStack_740;
      pppppppuVar22 = pppppppuVar43;
      (*(code *)(*pppppppuVar43)[3])();
      if ((int)pppppppuVar22 == 0) goto code_r0x00010ae6931c;
      pppppppuVar22 = (ushort *******)&pppppuStack_740;
      pppppppuVar16 = pppppppuVar43;
      func_0x000107c2b6f8(pppppppuVar43,pppppppuVar22,0xb);
      if ((int)pppppppuVar16 != 0) {
        pppppppuVar26 = (ushort *******)&pppppuStack_740;
        pppppppuVar16 = pppppppuVar17;
        func_0x000107c2b8d0(pppppppuVar17,pppppppuVar26,((ulong)pppppuVar15 & 2) == 0);
        pppppppuVar22 = pppppppuVar26;
        if ((int)pppppppuVar16 != 0) {
          if (((ulong)pppppuStack_740 & 1) == 0) {
            pppppppuVar16 = pppppppuVar17 + 0x33;
            pppppppuVar26 = (ushort *******)ppppppuStack_728;
            func_0x000107c2b894(pppppppuVar16,ppppppuStack_728,uStack_720);
            pppppppuVar22 = pppppppuVar26;
            if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar43)[4])();
          uVar32 = 0xc;
          pppppppuVar20 = pppppppuVar43;
          goto code_r0x00010ae68cb8;
        }
      }
      goto LAB_10ae693e8;
    case 0xc:
      if ((pppppppuVar17[0xbb][0x12] == (ushort *****)0x0) ||
         (*pppppppuVar17[0xbb][0x12] == (ushort ****)0x0)) {
code_r0x00010ae69440:
        ppppppuVar25 = (ushort ******)0x1;
        uVar32 = 0xd;
        goto code_r0x00010ae69444;
      }
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      pppppppuVar26 = (ushort *******)&pppppuStack_740;
      pppppppuVar22 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar22 == 0) goto code_r0x00010ae6931c;
      pppppppuVar16 = pppppppuVar17;
      func_0x000107c2b704();
      pppppppuVar22 = pppppppuVar26;
      if ((int)pppppppuVar16 != 1) {
        if ((int)pppppppuVar16 == 2) {
          ppppppuVar25 = (ushort ******)0x10;
          uVar32 = 0xc;
          pppppppuVar20 = pppppppuVar16;
          goto code_r0x00010ae69444;
        }
        pppppppuVar22 = (ushort *******)&pppppuStack_740;
        pppppppuVar16 = pppppppuVar20;
        func_0x000107c2b6f8(pppppppuVar20,pppppppuVar22,0xf);
        if ((int)pppppppuVar16 != 0) {
          pppppppuVar26 = (ushort *******)&pppppuStack_740;
          pppppppuVar16 = pppppppuVar17;
          func_0x000107c2b8d4();
          pppppppuVar22 = pppppppuVar26;
          if ((int)pppppppuVar16 != 0) {
            if (((ulong)pppppuStack_740 & 1) == 0) {
              pppppppuVar16 = pppppppuVar17 + 0x33;
              pppppppuVar26 = (ushort *******)ppppppuStack_728;
              func_0x000107c2b894(pppppppuVar16,ppppppuStack_728,uStack_720);
              pppppppuVar22 = pppppppuVar26;
              if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
            }
            (*(code *)(*pppppppuVar20)[4])();
            goto code_r0x00010ae69440;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xd:
      if ((*(byte *)((long)pppppppuVar17 + 0x61b) & 1) == 0) {
code_r0x00010ae68468:
        uVar32 = 0xe;
        goto code_r0x00010ae69444;
      }
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      pppppppuVar26 = (ushort *******)&pppppuStack_740;
      pppppppuVar22 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar22 == 0) goto code_r0x00010ae6931c;
      pppppppuVar22 = (ushort *******)&pppppuStack_740;
      pppppppuVar16 = pppppppuVar20;
      func_0x000107c2b6f8(pppppppuVar20,pppppppuVar22,0xcb);
      if ((int)pppppppuVar16 != 0) {
        pppppppuVar26 = (ushort *******)&pppppuStack_740;
        pppppppuVar16 = pppppppuVar17;
        FUN_10ae5aebc();
        pppppppuVar22 = pppppppuVar26;
        if ((int)pppppppuVar16 != 0) {
          if (((ulong)pppppuStack_740 & 1) == 0) {
            pppppppuVar16 = pppppppuVar17 + 0x33;
            pppppppuVar26 = (ushort *******)ppppppuStack_728;
            func_0x000107c2b894(pppppppuVar16,ppppppuStack_728,uStack_720);
            pppppppuVar22 = pppppppuVar26;
            if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar20)[4])();
          goto code_r0x00010ae68468;
        }
      }
      goto LAB_10ae693e8;
    case 0xe:
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      pppppppuVar26 = (ushort *******)&pppppuStack_740;
      pppppppuVar22 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar22 == 0) goto code_r0x00010ae6931c;
      pppppppuVar22 = (ushort *******)&pppppuStack_740;
      pppppppuVar16 = pppppppuVar20;
      func_0x000107c2b6f8(pppppppuVar20,pppppppuVar22,0x14);
      if ((int)pppppppuVar16 != 0) {
        pppppppuVar22 = (ushort *******)&pppppuStack_740;
        pppppppuVar16 = pppppppuVar17;
        func_0x000107c2b8d8(pppppppuVar17,pppppppuVar22,
                            *(ushort *)((long)pppppppuVar20[6] + 0xd4) >> 0xc & 1);
        if ((int)pppppppuVar16 != 0) {
          pppppppuVar26 = (ushort *******)0x3;
          pppppppuVar16 = pppppppuVar20;
          func_0x000107c2b8fc(pppppppuVar20,3,0,pppppppuVar17[0xbb],pppppppuVar17 + 0x1d,
                              pppppppuVar17[4]);
          pppppppuVar22 = pppppppuVar26;
          if ((int)pppppppuVar16 != 0) {
            if ((*(ushort *)((long)pppppppuVar20[6] + 0xd4) >> 0xc & 1) == 0) {
              if (((ulong)pppppuStack_740 & 1) == 0) {
                pppppppuVar16 = pppppppuVar17 + 0x33;
                pppppppuVar26 = (ushort *******)ppppppuStack_728;
                func_0x000107c2b894(pppppppuVar16,ppppppuStack_728,uStack_720);
                pppppppuVar22 = pppppppuVar26;
                if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
              }
              pppppppuVar16 = pppppppuVar17;
              func_0x000107c2b910();
              pppppppuVar22 = pppppppuVar26;
              if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
              uVar32 = 0xf;
            }
            else {
              uVar32 = 0x10;
            }
            *(undefined4 *)(pppppppuVar17 + 3) = uVar32;
            (*(code *)(*pppppppuVar20)[4])();
            goto code_r0x00010ae68cbc;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xf:
      pppppppuVar26 = (ushort *******)&pppppuStack_740;
      pppppppuVar20 = pppppppuVar17;
      FUN_10ae6a2ec();
      pppppppuVar16 = pppppppuVar20;
      pppppppuVar22 = pppppppuVar26;
      if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
      *(undefined4 *)(pppppppuVar17 + 3) = 0x10;
      uVar9 = 4;
      if (((*pppppppuVar17)[0x13] != (ushort *****)0x0 & (byte)pppppuStack_740) == 0) {
        uVar9 = 1;
      }
      ppppppuVar25 = (ushort ******)(ulong)uVar9;
      break;
    case 0x10:
      goto code_r0x00010ae69de8;
    }
    if (*(int *)(pppppppuVar17 + 3) != iVar10) {
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      ppppppuVar12 = pppppppuVar20[0xc];
      if ((ppppppuVar12 != (ushort ******)0x0) ||
         (ppppppuVar12 = (ushort ******)pppppppuVar20[0xd][0x30], ppppppuVar12 != (ushort ******)0x0
         )) {
        pppppppuVar26 = (ushort *******)0x2001;
        (*(code *)ppppppuVar12)(pppppppuVar20,0x2001,1);
      }
    }
  } while ((int)ppppppuVar25 == 1);
code_r0x00010ae69de8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return ppppppuVar25;
  }
  ___stack_chk_fail();
code_r0x00010ae69e28:
  _abort();
  func_0x000107c2b534(pppppuStack_648);
  func_0x000107c2b204(&pppppuStack_740);
  __Unwind_Resume();
  if ((*(byte *)(pppppppuVar20 + 0x36) >> 5 & 1) == 0) {
    return (ushort ******)0x1;
  }
  ppppppuVar25 = pppppppuVar20[0x38];
  if ((ppppppuVar25 != (ushort ******)0x0) && (pppppppuVar26[0x17] == ppppppuVar25)) {
    bVar35 = 0;
    ppppppuVar12 = pppppppuVar26[0x16];
    ppppppuVar39 = pppppppuVar20[0x37];
    do {
      bVar35 = *(byte *)ppppppuVar39 ^ *(byte *)ppppppuVar12 | bVar35;
      ppppppuVar25 = (ushort ******)((long)ppppppuVar25 + -1);
      ppppppuVar12 = (ushort ******)((long)ppppppuVar12 + 1);
      ppppppuVar39 = (ushort ******)((long)ppppppuVar39 + 1);
    } while (ppppppuVar25 != (ushort ******)0x0);
    return (ushort ******)(ulong)(bVar35 == 0);
  }
  return (ushort ******)0x0;
}



/* Entry: 10ae67d1c; end: 10ae67e17;  */

ushort ******
FUN_10ae67d1c(long *param_1,ushort *****param_2,ushort *****param_3,ushort ******param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort *******pppppppuVar1;
  char *pcVar2;
  undefined *puVar3;
  ushort ****ppppuVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ushort ******ppppppuVar13;
  ushort ******ppppppuVar14;
  ushort *****pppppuVar15;
  ushort *******pppppppuVar16;
  ushort *******pppppppuVar17;
  ushort *******pppppppuVar18;
  undefined8 *puVar19;
  ushort *******pppppppuVar20;
  ushort *******pppppppuVar21;
  ushort ******ppppppuVar22;
  undefined1 uVar23;
  ushort ******ppppppuVar24;
  ushort *******pppppppuVar25;
  undefined8 uVar26;
  ulong uVar27;
  ushort *****pppppuVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  ushort ****ppppuVar31;
  byte bVar32;
  ushort *****pppppuVar33;
  ushort ******ppppppuVar34;
  ushort ******ppppppuVar35;
  ushort ******ppppppuVar36;
  ushort ******ppppppuVar37;
  ushort ******ppppppuVar38;
  long lVar39;
  ushort *******pppppppuVar40;
  ushort *****pppppuVar41;
  ushort *****pppppuVar42;
  undefined1 uStack_5f2;
  undefined1 uStack_5f1;
  ushort *****pppppuStack_5f0;
  ushort *puStack_5e8;
  ulong uStack_5e0;
  ushort ******ppppppuStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c0;
  long lStack_5b8;
  ushort *****pppppuStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_580;
  ushort ******ppppppuStack_578;
  ushort ******ppppppuStack_570;
  ushort ******ppppppuStack_568;
  undefined8 uStack_560;
  ushort ******appppppuStack_558 [4];
  undefined8 uStack_538;
  ushort *****pppppuStack_518;
  ulong uStack_510;
  ushort *****pppppuStack_4f8;
  ulong uStack_4f0;
  ushort ******ppppppuStack_4d8;
  ulong uStack_4d0;
  ushort ******ppppppuStack_4c8;
  ushort ******ppppppuStack_4c0;
  ushort ******ppppppuStack_4a8;
  ulong uStack_4a0;
  ushort *****apppppuStack_498 [4];
  long lStack_478;
  ushort *****pppppuStack_460;
  ushort *****pppppuStack_458;
  ushort *****pppppuStack_450;
  long lStack_448;
  ushort ****ppppuStack_440;
  ushort ****ppppuStack_438;
  ushort ******ppppppuStack_430;
  ushort *****pppppuStack_428;
  ushort *****pppppuStack_420;
  ushort ******ppppppuStack_418;
  undefined1 ****ppppuStack_410;
  code *pcStack_408;
  ushort *****pppppuStack_400;
  ulong uStack_3f8;
  ushort *****pppppuStack_3e8;
  ushort *****pppppuStack_3e0;
  ushort ******ppppppuStack_3d8;
  ushort ******ppppppuStack_3d0;
  undefined8 *puStack_3c8;
  uint uStack_3b4;
  undefined1 auStack_3b0 [64];
  ushort *****apppppuStack_370 [8];
  long lStack_330;
  undefined1 ***pppuStack_2d0;
  code *pcStack_2c8;
  ushort *****pppppuStack_2c0;
  ushort *****pppppuStack_2b8;
  ushort *****pppppuStack_2b0;
  long lStack_278;
  ushort *****pppppuStack_270;
  ushort ****ppppuStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  ushort ****ppppuStack_250;
  ulong uStack_248;
  ushort *****pppppuStack_240;
  ushort ****ppppuStack_238;
  ushort ****ppppuStack_230;
  undefined8 *puStack_228;
  undefined1 auStack_214 [16];
  uint uStack_204;
  ushort *****apppppuStack_200 [8];
  ushort ****ppppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ushort ****ppppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ushort ****appppuStack_138 [8];
  long lStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  ushort *****pppppuStack_90;
  ushort *****apppppuStack_88 [8];
  long lStack_48;
  
  pppppppuVar25 = (ushort *******)&pppppuStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar39 = *param_1;
  lVar12 = *(long *)(lVar39 + 0x58);
  func_0x000107c2b858();
  uVar5 = *(uint *)(lVar12 + 4);
  ppppppuVar37 = (ushort ******)(ulong)uVar5;
  ppppppuVar24 = *(ushort *******)(lVar39 + 0x58);
  ppppppuVar13 = apppppuStack_88;
  ppppppuVar35 = (ushort ******)((long)ppppppuVar37 + 3);
  pppppuVar28 = param_3;
  ppppppuVar38 = param_4;
  FUN_10ae67e18();
  uVar9 = 0;
  if ((ushort ******)pppppuStack_90 == ppppppuVar37) {
    uVar9 = (uint)ppppppuVar13;
  }
  if ((uVar9 & 1) == 0) {
    param_2 = (ushort *****)&UNK_10f6d13d3;
    ppppppuVar13 = (ushort ******)0x10;
    pppppppuVar25 = (ushort *******)0x0;
    ppppppuVar24 = (ushort ******)0x44;
    pppppuVar28 = (ushort *****)0x1e8;
    func_0x000107c2b29c();
LAB_10ae67ddc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return (ushort ******)(ulong)uVar9;
    }
    ___stack_chk_fail();
  }
  else if (ppppppuVar37 <= param_4) {
    if (uVar5 != 0) {
      ppppppuVar13 = (ushort ******)((long)param_4 + ((long)param_3 - (long)ppppppuVar37));
      pppppppuVar25 = (ushort *******)apppppuStack_88;
      ppppppuVar24 = ppppppuVar37;
      _memcpy();
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = ppppppuVar37;
    }
    goto LAB_10ae67ddc;
  }
  _abort();
  pcStack_98 = FUN_10ae67e18;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar14 = ppppppuVar24;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c2b858();
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  ppppuStack_180 = (ushort ****)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  ppppuStack_1c0 = (ushort ****)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uVar9 = *(uint *)((long)ppppppuVar14 + 4);
  ppppppuVar37 = (ushort ******)appppuStack_138;
  ppppppuVar36 = (ushort ******)&uStack_204;
  pppppuVar15 = (ushort *****)0x0;
  pppppppuVar21 = (ushort *******)0x0;
  func_0x000107c2b408();
  if ((int)pppppuVar15 == 0) {
LAB_10ae67f24:
    pppppppuVar25 = pppppppuVar21;
    ppppppuVar35 = (ushort ******)0x0;
  }
  else {
    pppppuVar15 = &ppppuStack_180;
    pppppppuVar21 = (ushort *******)(auStack_214 + 4);
    ppppppuVar36 = ppppppuVar24 + 2;
    ppppppuVar37 = ppppppuVar14;
    func_0x000107c2b51c();
    if ((int)pppppuVar15 == 0) goto LAB_10ae67f24;
    uStack_248 = (ulong)uStack_204;
    ppppuStack_250 = (ushort ****)appppuStack_138;
    pppppuVar15 = &ppppuStack_1c0;
    ppppppuVar36 = (ushort ******)&ppppuStack_180;
    pppppppuVar21 = (ushort *******)(ulong)uVar9;
    ppppppuVar37 = ppppppuVar14;
    func_0x000107c34fd8();
    if ((int)pppppuVar15 == 0) goto LAB_10ae67f24;
    if (ppppppuVar38 < ppppppuVar35) {
      ppppppuVar36 = (ushort ******)&UNK_10f6d13d3;
      pppppuVar15 = (ushort *****)0x10;
      pppppppuVar21 = (ushort *******)0x0;
      ppppppuVar37 = (ushort ******)0x44;
      func_0x000107c2b29c();
      goto LAB_10ae67f24;
    }
    ppppuStack_238 = (ushort ****)0x0;
    pppppuStack_240 = (ushort *****)0x0;
    puStack_228 = (undefined8 *)0x0;
    ppppuStack_230 = (ushort ****)0x0;
    pppppppuVar21 = (ushort *******)&pppppuStack_240;
    pppppuVar15 = param_2;
    ppppppuVar37 = ppppppuVar14;
    func_0x00010ae657f0();
    if ((int)pppppuVar15 == 0) {
LAB_10ae67fd4:
      pppppppuVar25 = pppppppuVar21;
      ppppppuVar35 = (ushort ******)0x0;
    }
    else {
      (*(code *)pppppuStack_240[3])
                (&pppppuStack_240,pppppuVar28,(long)ppppppuVar38 - (long)ppppppuVar35);
      iVar10 = (int)&pppppuStack_240;
      pppppppuVar21 = (ushort *******)apppppuStack_200;
      ppppppuVar37 = (ushort ******)auStack_214;
      func_0x000107c2b41c();
      if (iVar10 == 0) goto LAB_10ae67fd4;
      ppppppuVar36 = (ushort ******)&ppppuStack_1c0;
      ppppppuVar35 = ppppppuVar13;
      ppppppuVar37 = ppppppuVar14;
      func_0x000107c34fe0(ppppppuVar13);
    }
    pppppuVar15 = (ushort *****)ppppuStack_238;
    func_0x000107c2b534();
    if (puStack_228 != (undefined8 *)0x0) {
      pppppuVar15 = (ushort *****)ppppuStack_230;
      (*(code *)*puStack_228)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return ppppppuVar35;
  }
  ___stack_chk_fail();
  FUN_10ae34eb0(&pppppuStack_240);
  pppppuVar41 = pppppuVar15;
  __Unwind_Resume();
  ppppppuVar22 = &pppppuStack_2c0;
  pppppuStack_270 = (ushort *****)ppppppuVar13;
  ppppuStack_268 = (ushort ****)pppppuVar15;
  ppuStack_260 = &puStack_a0;
  pcStack_258 = FUN_10ae68018;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar15 = ppppppuVar37[3];
  pppppppuVar21 = (ushort *******)ppppppuVar37[4];
  iVar10 = (int)&pppppuStack_2b8;
  pppppuVar41 = pppppuVar41 + 0x33;
  ppppppuVar35 = (ushort ******)((long)ppppppuVar36[1] + 2);
  FUN_10ae67e18();
  if ((iVar10 == 0) || (ppppppuVar36[1] == (ushort *****)0x0)) {
LAB_10ae6808c:
    pppppppuVar25 = (ushort *******)0x44;
    pppppuVar15 = (ushort *****)0x201;
LAB_10ae680a4:
    pppppuVar41 = (ushort *****)&UNK_10f6d13d3;
    ppppppuVar22 = (ushort ******)0x0;
    func_0x000107c2b29c(0x10);
    ppppppuVar37 = (ushort ******)0x0;
  }
  else {
    pppppuVar33 = *ppppppuVar36;
    pppppuVar42 = (ushort *****)((long)pppppuVar33 + 1);
    ppppppuVar34 = (ushort ******)((long)ppppppuVar36[1] + -1);
    *ppppppuVar36 = pppppuVar42;
    ppppppuVar36[1] = (ushort *****)ppppppuVar34;
    bVar32 = *(byte *)pppppuVar33;
    ppppppuVar37 = (ushort ******)(ulong)bVar32;
    if (ppppppuVar34 < ppppppuVar37) goto LAB_10ae6808c;
    *ppppppuVar36 = (ushort *****)((long)pppppuVar42 + (long)ppppppuVar37);
    ppppppuVar36[1] = (ushort *****)((long)ppppppuVar34 - (long)ppppppuVar37);
    if ((ushort ******)pppppuStack_2c0 != ppppppuVar37) {
LAB_10ae68110:
      pppppppuVar25 = (ushort *******)0x8e;
      pppppuVar15 = (ushort *****)0x20c;
      goto LAB_10ae680a4;
    }
    if (bVar32 != 0) {
      bVar32 = 0;
      ppppppuVar36 = &pppppuStack_2b8;
      do {
        bVar32 = *(byte *)ppppppuVar36 ^ *(byte *)pppppuVar42 | bVar32;
        ppppppuVar37 = (ushort ******)((long)ppppppuVar37 + -1);
        pppppuVar42 = (ushort *****)((long)pppppuVar42 + 1);
        ppppppuVar36 = (ushort ******)((long)ppppppuVar36 + 1);
      } while (ppppppuVar37 != (ushort ******)0x0);
      if (bVar32 != 0) goto LAB_10ae68110;
    }
    ppppppuVar37 = (ushort ******)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return ppppppuVar37;
  }
  ___stack_chk_fail(ppppppuVar37);
  pcStack_2c8 = FUN_10ae68138;
  lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar37 = (ushort ******)(pppppuStack_2b0 + 1);
  pppuStack_2d0 = &ppuStack_260;
  if (pppppuStack_2b8 < ppppppuVar37) {
    pppppppuVar16 = (ushort *******)0x10;
    pppppppuVar25 = (ushort *******)0x0;
    func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d13d3,0x225);
    ppppppuVar36 = (ushort ******)0x0;
    ppppppuVar22 = ppppppuVar13;
    ppppppuVar35 = ppppppuVar14;
    pppppppuVar21 = (ushort *******)(ulong)uVar9;
    pppppuVar15 = pppppuVar28;
    pppppuVar41 = param_2;
    goto LAB_10ae682d4;
  }
  ppppppuVar38 = (ushort ******)pppppuStack_2b8;
  if (pppppuStack_2b0 <= pppppuStack_2b8) {
    ppppppuVar38 = (ushort ******)pppppuStack_2b0;
  }
  ppppppuStack_3d8 = (ushort ******)0x0;
  pppppuStack_3e0 = (ushort *****)0x0;
  puStack_3c8 = (undefined8 *)0x0;
  ppppppuStack_3d0 = (ushort ******)0x0;
  pppppppuVar16 = (ushort *******)&pppppuStack_3e0;
  pppppppuVar17 = pppppppuVar21;
  func_0x00010ae657f0(pppppppuVar21,pppppppuVar16,pppppppuVar21[1]);
  if ((int)pppppppuVar17 == 0) {
LAB_10ae682b4:
    pppppppuVar25 = pppppppuVar16;
    ppppppuVar36 = (ushort ******)0x0;
  }
  else {
    (*(code *)pppppuStack_3e0[3])(&pppppuStack_3e0,pppppuStack_2c0,ppppppuVar38);
    (*(code *)pppppuStack_3e0[3])(&pppppuStack_3e0,&UNK_10e52b45c,8);
    (*(code *)pppppuStack_3e0[3])
              (&pppppuStack_3e0,(long)pppppuStack_2c0 + (long)ppppppuVar37,
               (long)pppppuStack_2b8 - (long)ppppppuVar37);
    ppppppuVar13 = &pppppuStack_3e0;
    pppppppuVar16 = (ushort *******)apppppuStack_370;
    func_0x000107c2b41c(ppppppuVar13,pppppppuVar16,&uStack_3b4);
    ppppppuVar24 = (ushort ******)pppppuStack_2c0;
    if ((int)ppppppuVar13 == 0) goto LAB_10ae682b4;
    iVar10 = (int)auStack_3b0;
    pppppppuVar16 = (ushort *******)&pppppuStack_3e8;
    func_0x000107c2b51c();
    if (iVar10 == 0) goto LAB_10ae682b4;
    bVar8 = (int)ppppppuVar35 == 0;
    puVar3 = &UNK_10f6d14df;
    if (bVar8) {
      puVar3 = &UNK_10f6d14fb;
    }
    uVar26 = 0x1b;
    if (bVar8) {
      uVar26 = 0x17;
    }
    uStack_3f8 = (ulong)uStack_3b4;
    pppppuStack_400 = (ushort *****)apppppuStack_370;
    ppppppuVar36 = ppppppuVar22;
    func_0x000107c34fd8(ppppppuVar22,pppppppuVar25,pppppppuVar21[1],auStack_3b0,pppppuStack_3e8,
                        puVar3,uVar26);
  }
  pppppppuVar16 = (ushort *******)ppppppuStack_3d8;
  func_0x000107c2b534();
  if (puStack_3c8 != (undefined8 *)0x0) {
    pppppppuVar16 = (ushort *******)ppppppuStack_3d0;
    (*(code *)*puStack_3c8)();
  }
LAB_10ae682d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_330) {
    return ppppppuVar36;
  }
  ___stack_chk_fail();
  FUN_10ae34eb0(&pppppuStack_3e0);
  pppppppuVar18 = pppppppuVar16;
  __Unwind_Resume();
  pcStack_408 = FUN_10ae6832c;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar17 = pppppppuVar18 + 0xbb;
  pppppppuVar1 = pppppppuVar18 + 0x47;
  pppppppuVar20 = pppppppuVar18;
  pppppuStack_460 = (ushort *****)ppppppuVar37;
  pppppuStack_458 = (ushort *****)ppppppuVar24;
  pppppuStack_450 = (ushort *****)ppppppuVar38;
  lStack_448 = (long)pppppuStack_2b8 - (long)ppppppuVar37;
  ppppuStack_440 = (ushort ****)pppppuVar41;
  ppppuStack_438 = (ushort ****)pppppuVar15;
  ppppppuStack_430 = (ushort ******)pppppppuVar21;
  pppppuStack_428 = (ushort *****)ppppppuVar35;
  pppppuStack_420 = (ushort *****)ppppppuVar22;
  ppppppuStack_418 = (ushort ******)pppppppuVar16;
  ppppuStack_410 = &pppuStack_2d0;
  do {
    iVar10 = *(int *)(pppppppuVar18 + 3);
    ppppppuVar13 = (ushort ******)0x1;
    pppppppuVar16 = pppppppuVar20;
    pppppppuVar21 = pppppppuVar25;
    switch(iVar10) {
    case 0:
      pppppppuVar25 = (ushort *******)*pppppppuVar18;
      pppppppuVar21 = (ushort *******)&uStack_580;
      pppppppuVar16 = pppppppuVar18;
      FUN_10ae5cbc0(pppppppuVar18,pppppppuVar21,&pppppuStack_5f0);
      lVar12 = lStack_5b8;
      if ((int)pppppppuVar16 != 0) {
        if (pppppppuVar25[0x13] == (ushort ******)0x0 || lStack_5b8 == 0) {
          if (lStack_5b8 != 0) {
            _memcpy((char *)((long)pppppppuVar18 + 0x623),uStack_5c0,lStack_5b8);
          }
          *(char *)((long)pppppppuVar18 + 0x643) = (char)lVar12;
          pppppppuVar21 = pppppppuVar18;
          FUN_10ae5987c(pppppppuVar18,&ppppppuStack_4c8);
          uVar26 = uStack_5a8;
          ppppppuVar13 = (ushort ******)pppppuStack_5b0;
          if (((ulong)pppppppuVar21 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0xe4);
            pppppppuVar21 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar25,2,0x28);
            pppppppuVar16 = pppppppuVar25;
          }
          else {
            uVar27 = (ulong)ppppppuStack_4c8 & 0xffff;
            pppppppuVar21 = pppppppuVar25;
            func_0x000107c2b89c(pppppppuVar25);
            FUN_10ae60114(ppppppuVar13,uVar26,pppppppuVar21,uVar27);
            pppppppuVar18[0xbf] = ppppppuVar13;
            if (ppppppuVar13 == (ushort ******)0x0) {
              func_0x000107c2b29c(0x10,0,0xb8,&UNK_10f6d1513,0xec);
              pppppppuVar21 = (ushort *******)0x2;
              FUN_10ae60390(pppppppuVar25,2,0x28);
              pppppppuVar16 = pppppppuVar25;
            }
            else {
              apppppuStack_498[0] = (ushort *****)CONCAT71(apppppuStack_498[0]._1_7_,0x32);
              pppppppuVar21 = pppppppuVar18;
              FUN_10ae59a0c(pppppppuVar18,apppppuStack_498,&pppppuStack_5f0);
              if (((ulong)pppppppuVar21 & 1) == 0) {
                pppppppuVar21 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar25,2,(ulong)apppppuStack_498[0] & 0xff);
                pppppppuVar16 = pppppppuVar25;
              }
              else {
                func_0x000107c2b89c();
                pppppppuVar20 = pppppppuVar18 + 0x33;
                func_0x000107c2b888(pppppppuVar20,pppppppuVar25,pppppppuVar18[0xbf]);
                pppppppuVar16 = pppppppuVar20;
                pppppppuVar21 = pppppppuVar25;
                if ((int)pppppppuVar20 != 0) {
                  ppppppuVar13 = (ushort ******)0x1;
                  *(undefined4 *)(pppppppuVar18 + 3) = 1;
                  break;
                }
              }
            }
          }
        }
        else {
          func_0x000107c2b29c(0x10,0,0x132,&UNK_10f6d1513,0xda);
          pppppppuVar21 = (ushort *******)0x2;
          FUN_10ae60390(pppppppuVar25,2,0x2f);
          pppppppuVar16 = pppppppuVar25;
        }
      }
    default:
LAB_10ae693e8:
      ppppppuVar13 = (ushort ******)0x0;
      pppppppuVar20 = pppppppuVar16;
      pppppppuVar25 = pppppppuVar21;
      break;
    case 1:
      ppppppuVar13 = *pppppppuVar18;
      pppppppuVar21 = (ushort *******)&uStack_580;
      pppppppuVar16 = pppppppuVar18;
      FUN_10ae5cbc0(pppppppuVar18,pppppppuVar21,&pppppuStack_5f0);
      if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
      uStack_5f2 = 0x32;
      pppppuVar28 = ppppppuVar13[6];
      ppppppuVar38 = *pppppppuVar18;
      ppppppuStack_4a8 = (ushort ******)0x0;
      ppppppuVar35 = &pppppuStack_5f0;
      FUN_10ae59824(ppppppuVar35,&ppppppuStack_4c8,0x29);
      if ((int)ppppppuVar35 == 0) {
code_r0x00010ae68890:
        pppppppuVar25 = pppppppuVar18;
        func_0x000107c2b85c();
        if (((ulong)pppppppuVar25 & 1) != 0) goto code_r0x00010ae6889c;
code_r0x00010ae69810:
        uVar23 = 0x50;
code_r0x00010ae69814:
        pppppppuVar25 = (ushort *******)0x2;
        FUN_10ae60390(ppppppuVar13,2,uVar23);
code_r0x00010ae69820:
        ppppppuVar13 = (ushort ******)0x0;
      }
      else {
        ppppppuVar24 = &pppppuStack_5f0;
        FUN_10ae59824(ppppppuVar24,apppppuStack_498,0x2d);
        if (((ulong)ppppppuVar24 & 1) == 0) {
          uStack_5f2 = 0x6d;
          func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x116);
          uVar23 = uStack_5f2;
          goto code_r0x00010ae69814;
        }
        pppppppuVar25 = pppppppuVar18;
        func_0x00010ae59cd0(pppppppuVar18,&pppppuStack_4f8,&pppppuStack_518,&ppppppuStack_4d8,
                            &uStack_5f2,&pppppuStack_5f0,&ppppppuStack_4c8);
        uVar23 = uStack_5f2;
        if (((ulong)pppppppuVar25 & 1) == 0) goto code_r0x00010ae69814;
        if ((*(byte *)(pppppppuVar18 + 0xc3) >> 4 & 1) == 0) goto code_r0x00010ae68890;
        appppppuStack_558[0] = (ushort ******)0x0;
        pppppppuVar25 = appppppuStack_558;
        pppppppuVar21 = pppppppuVar18;
        FUN_10ae5a6e4(pppppppuVar18,pppppppuVar25,&uStack_5f1,pppppuStack_4f8,uStack_4f0,0,0);
        iVar11 = (int)pppppppuVar21;
        if (iVar11 == 0) {
          pppppppuVar21 = pppppppuVar18;
          pppppppuVar25 = (ushort *******)appppppuStack_558[0];
          FUN_10ae64ac0();
          if ((int)pppppppuVar21 == 0) {
code_r0x00010ae69738:
            iVar11 = 2;
            goto code_r0x00010ae6973c;
          }
          if ((*(byte *)(appppppuStack_558[0] + 0x36) >> 3 & 1) != 0) {
            ppppppuStack_4d8 =
                 (ushort ******)
                 CONCAT44(ppppppuStack_4d8._4_4_,
                          (uint)((int)ppppppuStack_4d8 - *(int *)(appppppuStack_558[0] + 0x2f)) /
                          1000);
            func_0x000107c2b798(ppppppuVar38[0xd],&uStack_538);
            uVar27 = CONCAT62(uStack_538._2_6_,CONCAT11(uStack_538._1_1_,(undefined1)uStack_538)) -
                     (long)appppppuStack_558[0][0x19];
            pppppppuVar25 = (ushort *******)appppppuStack_558[0];
            if (uVar27 >> 0x1f == 0) {
              *(int *)((long)pppppuVar28 + 0xf4) = (int)ppppppuStack_4d8 - (int)uVar27;
              pppppppuVar16 = pppppppuVar18;
              FUN_10ae68018(pppppppuVar18,appppppuStack_558[0],&uStack_580,&pppppuStack_518);
              pppppppuVar21 = (ushort *******)appppppuStack_558[0];
              if (((ulong)pppppppuVar16 & 1) == 0) {
                uStack_5f2 = 0x33;
                iVar11 = 3;
              }
              else {
                appppppuStack_558[0] = (ushort ******)0x0;
                func_0x000107c2b6c0(&ppppppuStack_4a8);
                iVar11 = 0;
                pppppppuVar25 = pppppppuVar21;
              }
              goto code_r0x00010ae6973c;
            }
            goto code_r0x00010ae69738;
          }
          iVar11 = 2;
code_r0x00010ae69748:
          appppppuStack_558[0] = (ushort ******)0x0;
          func_0x000107c2b874();
        }
        else {
          if (iVar11 == 3) {
            uStack_5f2 = 0x50;
          }
code_r0x00010ae6973c:
          ppppppuVar38 = appppppuStack_558[0];
          appppppuStack_558[0] = (ushort ******)0x0;
          if ((ushort *******)ppppppuVar38 != (ushort *******)0x0) goto code_r0x00010ae69748;
        }
        if (1 < iVar11) {
          if (iVar11 == 2) goto code_r0x00010ae68890;
          uVar23 = uStack_5f2;
          if (iVar11 != 3) goto code_r0x00010ae6889c;
          goto code_r0x00010ae69814;
        }
        if (iVar11 == 0) {
          func_0x000107c2b84c(&ppppppuStack_4c8,ppppppuStack_4a8,0);
          ppppppuVar38 = ppppppuStack_4c8;
          ppppppuStack_4c8 = (ushort ******)0x0;
          func_0x000107c2b6c0(pppppppuVar17,ppppppuVar38);
          ppppppuVar38 = ppppppuStack_4c8;
          ppppppuStack_4c8 = (ushort ******)0x0;
          if (ppppppuVar38 != (ushort ******)0x0) {
            func_0x000107c2b874();
          }
          if (*pppppppuVar17 == (ushort ******)0x0) goto code_r0x00010ae69810;
          *(ushort *)((long)ppppppuVar13[6] + 0xd4) =
               *(ushort *)((long)ppppppuVar13[6] + 0xd4) | 0x40;
          *(uint *)(pppppppuVar18 + 0xc3) = *(uint *)(pppppppuVar18 + 0xc3) | 0x800000;
          ppppppuVar38 = pppppppuVar18[0xbb];
          uVar9 = *(uint *)((long)ppppppuVar13[0xe] + 0x124);
          func_0x000107c2b850(ppppppuVar13,ppppppuVar38);
          if (*(uint *)(ppppppuVar38 + 0x18) <= uVar9) {
            uVar5 = *(uint *)((long)ppppppuVar38 + 0xc4);
            if (uVar9 <= *(uint *)((long)ppppppuVar38 + 0xc4)) {
              uVar5 = uVar9;
            }
            *(uint *)(ppppppuVar38 + 0x18) = uVar5;
          }
code_r0x00010ae6889c:
          pppppppuVar25 = pppppppuVar18;
          func_0x00010ae5a158(pppppppuVar18,&uStack_5f2,&pppppuStack_5f0);
          uVar23 = uStack_5f2;
          if (((ulong)pppppppuVar25 & 1) == 0) goto code_r0x00010ae69814;
          ppppppuVar38 = pppppppuVar18[0xbb];
          ppppppuVar38[0x1a] = (ushort *****)pppppppuVar18[0xbf];
          pppppppuVar25 = pppppppuVar18;
          FUN_10ae5987c(pppppppuVar18,(long)ppppppuVar38 + 6);
          if (((ulong)pppppppuVar25 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0x1a6);
            uVar23 = 0x28;
            goto code_r0x00010ae69814;
          }
          pppppppuVar25 = pppppppuVar18;
          FUN_10ae59f44(pppppppuVar18,&ppppppuStack_4c8,0,&uStack_5f2,&pppppuStack_5f0);
          uVar23 = uStack_5f2;
          if (((ulong)pppppppuVar25 & 1) == 0) {
code_r0x00010ae69b34:
            pppppppuVar25 = (ushort *******)0x2;
            FUN_10ae60390(ppppppuVar13,2,uVar23);
          }
          else {
            if ((*(byte *)((long)ppppppuVar13 + 0xa4) >> 2 & 1) == 0) {
              pppppuVar28 = ppppppuVar13[6];
              uVar30 = 1;
code_r0x00010ae688f8:
              *(undefined4 *)(pppppuVar28 + 0x1f) = uVar30;
            }
            else {
              if (((ulong)ppppppuVar35 & 1) == 0) {
                pppppuVar28 = ppppppuVar13[6];
                uVar30 = 5;
              }
              else if ((ushort *******)ppppppuStack_4a8 == (ushort *******)0x0) {
                pppppuVar28 = ppppppuVar13[6];
                uVar30 = 6;
              }
              else if (*(int *)((long)ppppppuStack_4a8 + 0x17c) == 0) {
                pppppuVar28 = ppppppuVar13[6];
                uVar30 = 7;
              }
              else {
                if ((*(uint *)(pppppppuVar18 + 0xc3) >> 0xc & 1) == 0) {
                  pppppuVar28 = ppppppuVar13[6];
                  uVar30 = 4;
                  goto code_r0x00010ae688f8;
                }
                pppppuVar28 = ppppppuVar13[6];
                if ((*(uint *)(pppppppuVar18 + 0xc3) >> 0x18 & 1) == 0) {
                  ppppppuVar35 = (ushort ******)pppppuVar28[0x3d];
                  if (ppppppuVar35 == (ushort ******)ppppppuStack_4a8[0x31]) {
                    if (ppppppuVar35 != (ushort ******)0x0) {
                      ppppppuVar38 = (ushort ******)ppppppuStack_4a8[0x30];
                      ppppuVar31 = pppppuVar28[0x3c];
                      do {
                        ppppppuVar35 = (ushort ******)((long)ppppppuVar35 + -1);
                        if (*(char *)ppppuVar31 != *(char *)ppppppuVar38) goto code_r0x00010ae69984;
                        ppppppuVar38 = (ushort ******)((long)ppppppuVar38 + 1);
                        ppppuVar31 = (ushort ****)((long)ppppuVar31 + 1);
                      } while (ppppppuVar35 != (ushort ******)0x0);
                    }
                    ppppppuVar35 = *pppppppuVar17;
                    if ((((*(byte *)(ppppppuStack_4a8 + 0x36) ^ *(byte *)(ppppppuVar35 + 0x36)) >> 6
                         & 1) == 0) &&
                       (ppppppuVar38 = (ushort ******)ppppppuVar35[0x33],
                       ppppppuVar38 == (ushort ******)ppppppuStack_4a8[0x33])) {
                      if (ppppppuVar38 != (ushort ******)0x0) {
                        ppppppuVar24 = (ushort ******)ppppppuStack_4a8[0x32];
                        pppppuVar15 = ppppppuVar35[0x32];
                        do {
                          ppppppuVar38 = (ushort ******)((long)ppppppuVar38 + -1);
                          if (*(char *)pppppuVar15 != *(char *)ppppppuVar24)
                          goto code_r0x00010ae69998;
                          ppppppuVar24 = (ushort ******)((long)ppppppuVar24 + 1);
                          pppppuVar15 = (ushort *****)((long)pppppuVar15 + 1);
                        } while (ppppppuVar38 != (ushort ******)0x0);
                      }
                      if (*(int *)((long)pppppuVar28 + 0xf4) - 0x3dU < 0xffffff87) {
                        uVar30 = 0xc;
                      }
                      else {
                        pppppppuVar25 = (ushort *******)ppppppuStack_4a8;
                        FUN_10ae69f00(ppppppuStack_4a8,pppppppuVar18[1]);
                        if (((ulong)pppppppuVar25 & 1) != 0) {
                          if (((ulong)ppppppuStack_4c8 & 1) == 0) {
                            uVar30 = 8;
                            goto code_r0x00010ae688f8;
                          }
                          *(undefined4 *)(pppppuVar28 + 0x1f) = 2;
                          *(ushort *)((long)pppppuVar28 + 0xd4) =
                               *(ushort *)((long)pppppuVar28 + 0xd4) | 0x1000;
                          pppppuVar28 = ppppppuVar13[6];
                          goto code_r0x00010ae699a0;
                        }
                        uVar30 = 0xd;
                      }
                    }
                    else {
code_r0x00010ae69998:
                      uVar30 = 0xe;
                    }
                  }
                  else {
code_r0x00010ae69984:
                    uVar30 = 9;
                  }
                }
                else {
                  uVar30 = 10;
                }
              }
              *(undefined4 *)(pppppuVar28 + 0x1f) = uVar30;
            }
code_r0x00010ae699a0:
            ppppppuVar38 = *pppppppuVar17;
            ppppuVar31 = pppppuVar28[0x3c];
            ppppuVar4 = pppppuVar28[0x3d];
            ppppppuVar35 = ppppppuVar38 + 0x30;
            func_0x000107c2b684(ppppppuVar35,ppppuVar4);
            uVar9 = (uint)ppppppuVar35 ^ 1;
            if (ppppuVar4 == (ushort ****)0x0) {
              uVar9 = 1;
            }
            if ((uVar9 & 1) == 0) {
              _memcpy(ppppppuVar38[0x30],ppppuVar31,ppppuVar4);
            }
            if ((uint)ppppppuVar35 == 0) {
code_r0x00010ae69b30:
              uVar23 = 0x50;
              goto code_r0x00010ae69b34;
            }
            if (((*(ushort *)((long)ppppppuVar13[6] + 0xd4) >> 0xc & 1) != 0) &&
               (ppppppuVar35 = *pppppppuVar17, (*(byte *)(ppppppuVar35 + 0x36) >> 6 & 1) != 0)) {
              ppppppuVar24 = (ushort ******)ppppppuStack_4a8[0x34];
              ppppppuVar37 = (ushort ******)ppppppuStack_4a8[0x35];
              ppppppuVar38 = ppppppuVar35 + 0x34;
              func_0x000107c2b684(ppppppuVar38,ppppppuVar37);
              uVar9 = (uint)ppppppuVar38 ^ 1;
              if (ppppppuVar37 == (ushort ******)0x0) {
                uVar9 = 1;
              }
              if ((uVar9 & 1) == 0) {
                _memcpy(ppppppuVar35[0x34],ppppppuVar24,ppppppuVar37);
              }
              if ((uint)ppppppuVar38 == 0) goto code_r0x00010ae69b30;
            }
            if (((*(byte *)((long)ppppppuVar13 + 0xa4) >> 2 & 1) != 0) &&
               (ppppppuVar13[0x13] != (ushort *****)0x0)) {
              ppppppuVar38 = pppppppuVar18[0xbb];
              pppppuVar28 = pppppppuVar18[1][0x16];
              pppppuVar15 = pppppppuVar18[1][0x17];
              ppppppuVar35 = ppppppuVar38 + 0x37;
              func_0x000107c2b684(ppppppuVar35,pppppuVar15);
              uVar9 = (uint)ppppppuVar35 ^ 1;
              if (pppppuVar15 == (ushort *****)0x0) {
                uVar9 = 1;
              }
              if ((uVar9 & 1) == 0) {
                _memcpy(ppppppuVar38[0x37],pppppuVar28,pppppuVar15);
              }
              if ((uint)ppppppuVar35 == 0) goto code_r0x00010ae69b30;
            }
            if (ppppppuVar13[0xd][0x3c] != (ushort ****)0x0) {
              iVar11 = (int)&pppppuStack_5f0;
              (*(code *)ppppppuVar13[0xd][0x3c])();
              if (iVar11 == 0) {
                func_0x000107c2b29c(0x10,0,0x85,&UNK_10f6d1513,0x1f9);
                goto code_r0x00010ae69b30;
              }
            }
            ppppppuVar35 = ppppppuVar13;
            func_0x000107c2b89c();
            func_0x000107c2b76c();
            if ((*(ushort *)((long)ppppppuVar13[6] + 0xd4) >> 6 & 1) == 0) {
              uVar27 = (ulong)*(uint *)((long)ppppppuVar35 + 4);
              pppppppuVar25 = (ushort *******)&UNK_10e52b4d2;
            }
            else {
              pppppppuVar25 = (ushort *******)(*pppppppuVar17 + 2);
              uVar27 = (ulong)*(int *)((long)*pppppppuVar17 + 0xc);
            }
            pppppppuVar21 = pppppppuVar18;
            func_0x000107c2b8f0(pppppppuVar18,pppppppuVar25,uVar27);
            if ((int)pppppppuVar21 != 0) {
              if (((uint)uStack_580 & 1) == 0) {
                pppppppuVar21 = pppppppuVar18 + 0x33;
                pppppppuVar25 = (ushort *******)ppppppuStack_568;
                func_0x000107c2b894(pppppppuVar21,ppppppuStack_568,uStack_560);
                if (((ulong)pppppppuVar21 & 1) == 0) goto code_r0x00010ae69820;
              }
              uVar6 = *(ushort *)((long)ppppppuVar13[6] + 0xd4);
              if ((uVar6 >> 0xc & 1) == 0) {
                if ((*(byte *)((long)pppppppuVar18 + 0x619) >> 4 & 1) != 0) {
                  *(ushort *)((long)ppppppuVar13[6] + 0xd4) = uVar6 | 1;
                }
              }
              else {
                pppppppuVar21 = pppppppuVar18;
                FUN_10ae67a20();
                if (((ulong)pppppppuVar21 & 1) == 0) goto code_r0x00010ae69820;
              }
              if (((ulong)ppppppuStack_4c8 & 1) == 0) {
                (*(code *)(*ppppppuVar13)[4])(ppppppuVar13);
                pppppppuVar21 = pppppppuVar18 + 0x33;
                func_0x00010ae65734();
                if (((ulong)pppppppuVar21 & 1) != 0) {
                  uVar30 = 2;
                  goto code_r0x00010ae69bb0;
                }
              }
              else {
                pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
                pppppppuVar21 = pppppppuVar18;
                FUN_10ae69f5c();
                if ((int)pppppppuVar21 != 0) {
                  (*(code *)(*ppppppuVar13)[4])(ppppppuVar13);
                  func_0x000107c2b534(*pppppppuVar1);
                  *pppppppuVar1 = (ushort ******)0x0;
                  pppppppuVar18[0x48] = (ushort ******)0x0;
                  uVar30 = 4;
code_r0x00010ae69bb0:
                  *(undefined4 *)(pppppppuVar18 + 3) = uVar30;
                  ppppppuVar13 = (ushort ******)0x1;
                  goto code_r0x00010ae69824;
                }
              }
            }
          }
          goto code_r0x00010ae69820;
        }
        if (iVar11 != 1) goto code_r0x00010ae6889c;
        *(undefined4 *)(pppppppuVar18 + 3) = 1;
        ppppppuVar13 = (ushort ******)0xb;
      }
code_r0x00010ae69824:
      pppppppuVar20 = (ushort *******)ppppppuStack_4a8;
      ppppppuStack_4a8 = (ushort ******)0x0;
      if (pppppppuVar20 != (ushort *******)0x0) {
        func_0x000107c2b874();
      }
      break;
    case 2:
      if ((*(byte *)((long)pppppppuVar18 + 0x61a) >> 4 & 1) == 0) {
        pppppppuVar16 = (ushort *******)*pppppppuVar18;
        puStack_5e8 = (ushort *)0x0;
        pppppuStack_5f0 = (ushort *****)0x0;
        ppppppuStack_5d8 = (ushort ******)0x0;
        uStack_5e0 = 0;
        pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
        pppppppuVar21 = pppppppuVar16;
        (*(code *)(*pppppppuVar16)[0xb])(pppppppuVar16,pppppppuVar25,&uStack_580,2);
        if ((int)pppppppuVar21 == 0) {
code_r0x00010ae68f2c:
          ppppppuVar13 = (ushort ******)0x0;
        }
        else {
          iVar11 = (int)&uStack_580;
          pppppppuVar25 = (ushort *******)0x303;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_580;
          pppppppuVar25 = (ushort *******)&UNK_10e52b348;
          func_0x000107c2b21c(puVar19,&UNK_10e52b348,0x20);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_580;
          pppppppuVar25 = &ppppppuStack_4c8;
          func_0x000107c34f3c(puVar19,pppppppuVar25,1);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar21 = &ppppppuStack_4c8;
          pppppppuVar25 = (ushort *******)((long)pppppppuVar18 + 0x623);
          func_0x000107c2b21c(pppppppuVar21,pppppppuVar25,*(char *)((long)pppppppuVar18 + 0x643));
          if ((int)pppppppuVar21 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar25 = (ushort *******)(ulong)*(ushort *)(pppppppuVar18[0xbf] + 2);
          iVar11 = (int)&uStack_580;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          iVar11 = (int)&uStack_580;
          pppppppuVar25 = (ushort *******)0x0;
          func_0x000107c2b218();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar25 = (ushort *******)&uStack_538;
          pppppppuVar21 = pppppppuVar18;
          FUN_10ae5987c();
          if ((int)pppppppuVar21 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_580;
          pppppppuVar25 = (ushort *******)apppppuStack_498;
          func_0x000107c34f3c(puVar19,pppppppuVar25,2);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          iVar11 = (int)apppppuStack_498;
          pppppppuVar25 = (ushort *******)0x2b;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          iVar11 = (int)apppppuStack_498;
          pppppppuVar25 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar25 = (ushort *******)(ulong)*(ushort *)(pppppppuVar16 + 2);
          iVar11 = (int)apppppuStack_498;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          iVar11 = (int)apppppuStack_498;
          pppppppuVar25 = (ushort *******)0x33;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          iVar11 = (int)apppppuStack_498;
          pppppppuVar25 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar25 = (ushort *******)(ulong)CONCAT11(uStack_538._1_1_,(undefined1)uStack_538);
          iVar11 = (int)apppppuStack_498;
          func_0x000107c2b228();
          if (iVar11 == 0) goto code_r0x00010ae68f2c;
          if (((ulong)pppppppuVar18[0xc3] & 1) != 0) {
            iVar11 = (int)apppppuStack_498;
            pppppppuVar25 = (ushort *******)0xfe0d;
            func_0x000107c2b228();
            if (iVar11 != 0) {
              iVar11 = (int)apppppuStack_498;
              pppppppuVar25 = (ushort *******)0x8;
              func_0x000107c2b228();
              if (iVar11 != 0) {
                ppppppuVar13 = apppppuStack_498;
                pppppppuVar25 = (ushort *******)&pppppuStack_4f8;
                func_0x000107c2b220(ppppppuVar13,pppppppuVar25,8);
                if ((int)ppppppuVar13 != 0) {
                  *pppppuStack_4f8 = (ushort ****)0x0;
                  goto code_r0x00010ae68738;
                }
              }
            }
            goto code_r0x00010ae68f2c;
          }
code_r0x00010ae68738:
          pppppuStack_4f8 = (ushort *****)0x0;
          uStack_4f0 = 0;
          pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
          pppppppuVar20 = pppppppuVar16;
          (*(code *)(*pppppppuVar16)[0xc])(pppppppuVar16,pppppppuVar25,&pppppuStack_4f8);
          if (((ulong)pppppppuVar20 & 1) == 0) {
code_r0x00010ae69bbc:
            ppppppuVar13 = (ushort ******)0x0;
          }
          else {
            if (((ulong)pppppppuVar18[0xc3] & 1) != 0) {
              if (uStack_4f0 < 8) goto code_r0x00010ae69e28;
              pppppppuVar25 = (ushort *******)((uStack_4f0 - 8) + (long)pppppuStack_4f8);
              pppppppuVar21 = pppppppuVar18;
              FUN_10ae68138(pppppppuVar18,pppppppuVar25,8,pppppppuVar16[6] + 6,0x20,
                            pppppppuVar18 + 0x33,1,param_8,pppppuStack_4f8,uStack_4f0,uStack_4f0 - 8
                           );
              if (((ulong)pppppppuVar21 & 1) == 0) goto code_r0x00010ae69bbc;
            }
            pppppuStack_518 = pppppuStack_4f8;
            uStack_510 = uStack_4f0;
            pppppuStack_4f8 = (ushort *****)0x0;
            uStack_4f0 = 0;
            pppppppuVar25 = (ushort *******)&pppppuStack_518;
            pppppppuVar21 = pppppppuVar16;
            (*(code *)(*pppppppuVar16)[0xd])();
            if ((int)pppppppuVar21 == 0) {
              func_0x000107c2b534(pppppuStack_518);
              ppppppuVar13 = (ushort ******)0x0;
              pppppuStack_518 = (ushort *****)0x0;
              uStack_510 = 0;
            }
            else {
              pppppppuVar21 = pppppppuVar16;
              (*(code *)(*pppppppuVar16)[0xe])();
              func_0x000107c2b534(pppppuStack_518);
              pppppuStack_518 = (ushort *****)0x0;
              uStack_510 = 0;
              if (((ulong)pppppppuVar21 & 1) == 0) goto code_r0x00010ae69bbc;
              *(ushort *)((long)pppppppuVar16[6] + 0xd4) =
                   *(ushort *)((long)pppppppuVar16[6] + 0xd4) | 0x8000;
              *(undefined4 *)(pppppppuVar18 + 3) = 3;
              ppppppuVar13 = (ushort ******)0x4;
            }
          }
          func_0x000107c2b534(pppppuStack_4f8);
        }
        pppppppuVar20 = (ushort *******)&pppppuStack_5f0;
        func_0x000107c2b204();
      }
      else {
code_r0x00010ae689a0:
        ppppppuVar13 = (ushort ******)0x11;
      }
      break;
    case 3:
      pppppppuVar20 = (ushort *******)*pppppppuVar18;
      pppppppuVar25 = (ushort *******)&uStack_580;
      pppppppuVar21 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar21 != 0) {
        pppppppuVar21 = (ushort *******)&uStack_580;
        pppppppuVar16 = pppppppuVar20;
        func_0x000107c2b6f8(pppppppuVar20,pppppppuVar21,1);
        if ((int)pppppppuVar16 != 0) {
          ppppppuStack_4c8 = ppppppuStack_578;
          ppppppuStack_4c0 = ppppppuStack_570;
          pppppppuVar25 = pppppppuVar20;
          FUN_10ae5965c(pppppppuVar20,&ppppppuStack_4c8,&pppppuStack_5f0);
          uVar9 = 0;
          if ((ushort *******)ppppppuStack_4c0 == (ushort *******)0x0) {
            uVar9 = (uint)pppppppuVar25;
          }
          if ((uVar9 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x83,&UNK_10f6d1513,0x26c);
            pppppppuVar21 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar20,2,0x32);
            pppppppuVar16 = pppppppuVar20;
          }
          else {
            ppppppuVar13 = pppppppuVar20[6];
            if (*(int *)(ppppppuVar13 + 0x1a) == 1) {
              ppppppuVar13 = &pppppuStack_5f0;
              FUN_10ae59824(ppppppuVar13,&ppppppuStack_4c8,0xfe0d);
              if (((ulong)ppppppuVar13 & 1) == 0) {
                func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x277);
                pppppppuVar21 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar20,2,0x6d);
                pppppppuVar16 = pppppppuVar20;
              }
              else {
                pppppppuVar25 = (ushort *******)ppppppuStack_4c8;
                if ((ushort *******)ppppppuStack_4c0 == (ushort *******)0x0) {
                  uVar29 = 0x32;
                  uVar26 = 0x286;
                }
                else {
                  uVar29 = 0x32;
                  uVar26 = 0x286;
                  if (((*(char *)ppppppuStack_4c8 == '\0') &&
                      ((ushort *******)0x2 < ppppppuStack_4c0)) &&
                     ((pppppppuVar25 = (ushort *******)((long)ppppppuStack_4c8 + 3),
                      (char *)0x1 < (char *)((long)ppppppuStack_4c0 + -3) &&
                      (((ushort *******)ppppppuStack_4c0 != (ushort *******)0x5 &&
                       ((char *)0x2 < (char *)((long)ppppppuStack_4c0 + -5))))))) {
                    pppppppuVar21 =
                         (ushort *******)
                         (ulong)((uint)(*(ushort *)((long)ppppppuStack_4c8 + 6) >> 8) |
                                (*(ushort *)((long)ppppppuStack_4c8 + 6) & 0xff00ff) << 8);
                    uVar27 = (long)(ppppppuStack_4c0 + -1) - (long)pppppppuVar21;
                    if ((pppppppuVar21 <= ppppppuStack_4c0 + -1) &&
                       ((1 < uVar27 &&
                        (pcVar2 = (char *)((long)ppppppuStack_4c8 + (long)pppppppuVar21),
                        uVar6 = *(ushort *)(pcVar2 + 8),
                        uVar27 - 2 == (ulong)((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8))))) {
                      if (((ushort)(*(ushort *)((long)ppppppuStack_4c8 + 1) >> 8 |
                                   *(ushort *)((long)ppppppuStack_4c8 + 1) << 8) ==
                           *(ushort *)pppppppuVar18[0x59]) &&
                         ((ushort)(*(ushort *)((long)ppppppuStack_4c8 + 3) >> 8 |
                                  *(ushort *)((long)ppppppuStack_4c8 + 3) << 8) ==
                          *(ushort *)pppppppuVar18[0x58])) {
                        uVar29 = 0x2f;
                        uVar26 = 0x28f;
                        if ((*(char *)((long)ppppppuStack_4c8 + 5) ==
                             *(char *)((long)pppppppuVar18 + 0x622)) &&
                           (pppppppuVar21 == (ushort *******)0x0)) {
                          apppppuStack_498[0] =
                               (ushort *****)CONCAT71(apppppuStack_498[0]._1_7_,0x32);
                          pppppppuVar21 = pppppppuVar18;
                          ppppppuStack_4c8 = (ushort ******)pppppppuVar25;
                          FUN_10ae5875c(pppppppuVar18,apppppuStack_498,&pppppuStack_4f8,pppppppuVar1
                                        ,&pppppuStack_5f0,pcVar2 + 10);
                          if (((ulong)pppppppuVar21 & 1) != 0) {
                            pppppppuVar25 = pppppppuVar18;
                            FUN_10ae5cbc0(pppppppuVar18,&uStack_580,&pppppuStack_5f0);
                            if (((ulong)pppppppuVar25 & 1) == 0) {
                              uVar26 = 0x44;
                              uVar29 = 0x2a2;
                              goto code_r0x00010ae693e4;
                            }
                            ppppppuVar13 = pppppppuVar20[6];
                            goto code_r0x00010ae68c24;
                          }
                          func_0x000107c2b29c(0x10,0,0x8a,&UNK_10f6d1513,0x29b);
                          pppppppuVar21 = (ushort *******)0x2;
                          FUN_10ae60390(pppppppuVar20,2,(ulong)apppppuStack_498[0] & 0xff);
                          pppppppuVar16 = pppppppuVar20;
                          goto LAB_10ae693e8;
                        }
                      }
                      else {
                        uVar29 = 0x2f;
                        uVar26 = 0x28f;
                      }
                    }
                  }
                }
                ppppppuStack_4c8 = (ushort ******)pppppppuVar25;
                func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,uVar26);
                pppppppuVar21 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar20,2,uVar29);
                pppppppuVar16 = pppppppuVar20;
              }
            }
            else {
code_r0x00010ae68c24:
              if ((*(ushort *)((long)ppppppuVar13 + 0xd4) >> 6 & 1) == 0) {
code_r0x00010ae68c2c:
                pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
                pppppppuVar16 = pppppppuVar18;
                FUN_10ae69f5c();
                pppppppuVar21 = pppppppuVar25;
                if ((int)pppppppuVar16 != 0) {
                  if (((uint)uStack_580 & 1) == 0) {
                    pppppppuVar16 = pppppppuVar18 + 0x33;
                    pppppppuVar25 = (ushort *******)ppppppuStack_568;
                    func_0x000107c2b894(pppppppuVar16,ppppppuStack_568,uStack_560);
                    pppppppuVar21 = pppppppuVar25;
                    if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
                  }
                  pppppppuVar21 = pppppppuVar20;
                  (*(code *)(*pppppppuVar20)[5])();
                  if ((int)pppppppuVar21 != 0) {
                    FUN_10ae60390(pppppppuVar20,2,10);
                    uVar26 = 0xff;
                    uVar29 = 0x2d5;
                    goto code_r0x00010ae693e4;
                  }
                  (*(code *)(*pppppppuVar20)[4])(pppppppuVar20);
                  pppppppuVar20 = (ushort *******)pppppppuVar18[0x47];
                  func_0x000107c2b534();
                  *pppppppuVar1 = (ushort ******)0x0;
                  pppppppuVar18[0x48] = (ushort ******)0x0;
                  ppppppuVar13 = (ushort ******)0x1;
                  *(undefined4 *)(pppppppuVar18 + 3) = 4;
                  break;
                }
              }
              else {
                ppppppuVar13 = &pppppuStack_5f0;
                FUN_10ae59824(ppppppuVar13,&ppppppuStack_4c8,0x29);
                if (((ulong)ppppppuVar13 & 1) == 0) {
                  func_0x000107c2b29c(0x10,0,0x12f,&UNK_10f6d1513,0x2b2);
                  pppppppuVar21 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar20,2,0x2f);
                  pppppppuVar16 = pppppppuVar20;
                }
                else {
                  uStack_538._0_1_ = 0x32;
                  pppppppuVar25 = pppppppuVar18;
                  func_0x00010ae59cd0(pppppppuVar18,apppppuStack_498,&pppppuStack_4f8,
                                      &pppppuStack_518,&uStack_538,&pppppuStack_5f0,
                                      &ppppppuStack_4c8);
                  uVar23 = (undefined1)uStack_538;
                  if (((ulong)pppppppuVar25 & 1) != 0) {
                    pppppppuVar25 = pppppppuVar18;
                    FUN_10ae68018(pppppppuVar18,pppppppuVar18[0xbb],&uStack_580,&pppppuStack_4f8);
                    if ((int)pppppppuVar25 != 0) goto code_r0x00010ae68c2c;
                    uVar23 = 0x33;
                  }
                  pppppppuVar21 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar20,2,uVar23);
                  pppppppuVar16 = pppppppuVar20;
                }
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae6931c:
      pppppppuVar20 = pppppppuVar21;
      ppppppuVar13 = (ushort ******)0x3;
      break;
    case 4:
      ppppppuVar13 = *pppppppuVar18;
      pppppuVar28 = ppppppuVar13[6];
      pppppppuVar25 = (ushort *******)pppppppuVar18[0xc2];
      if (pppppppuVar25 == (ushort *******)0x0) {
        func_0x000107c2b3c4(pppppuVar28 + 2,0x20,&UNK_10e525a20);
      }
      else if (((*(byte *)((long)pppppppuVar18 + 0x61a) >> 4 & 1) == 0) &&
              (pppppppuVar25[1] == (ushort ******)0x20)) {
        ppppppuVar35 = *pppppppuVar25;
        pppppuVar15 = *ppppppuVar35;
        pppppuVar42 = ppppppuVar35[3];
        pppppuVar41 = ppppppuVar35[2];
        pppppuVar28[3] = (ushort ****)ppppppuVar35[1];
        pppppuVar28[2] = (ushort ****)pppppuVar15;
        pppppuVar28[5] = (ushort ****)pppppuVar42;
        pppppuVar28[4] = (ushort ****)pppppuVar41;
      }
      else {
        func_0x000107c2b3c4(pppppuVar28 + 2,0x20,&UNK_10e525a20);
        if ((*(byte *)((long)pppppppuVar18 + 0x61a) >> 4 & 1) != 0) {
          pppppppuVar21 = (ushort *******)0x20;
          pppppppuVar16 = pppppppuVar25;
          func_0x000107c2b684();
          if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
          ppppppuVar35 = *pppppppuVar25;
          pppppuVar15 = (ushort *****)pppppuVar28[2];
          pppppuVar42 = (ushort *****)pppppuVar28[5];
          pppppuVar41 = (ushort *****)pppppuVar28[4];
          ppppppuVar35[1] = (ushort *****)pppppuVar28[3];
          *ppppppuVar35 = pppppuVar15;
          ppppppuVar35[3] = pppppuVar42;
          ppppppuVar35[2] = pppppuVar41;
        }
      }
      ppppppuStack_4a8 = (ushort ******)0x0;
      uStack_4a0 = 0;
      puStack_5e8 = (ushort *)0x0;
      pppppuStack_5f0 = (ushort *****)0x0;
      ppppppuStack_5d8 = (ushort ******)0x0;
      uStack_5e0 = 0;
      pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
      ppppppuVar35 = ppppppuVar13;
      (*(code *)(*ppppppuVar13)[0xb])(ppppppuVar13,pppppppuVar25,&uStack_580,2);
      if ((int)ppppppuVar35 == 0) {
code_r0x00010ae69d9c:
        ppppppuVar13 = (ushort ******)0x0;
      }
      else {
        iVar11 = (int)&uStack_580;
        pppppppuVar25 = (ushort *******)0x303;
        func_0x000107c2b228();
        if (iVar11 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_580;
        pppppppuVar25 = (ushort *******)(ppppppuVar13[6] + 2);
        func_0x000107c2b21c(puVar19,pppppppuVar25,0x20);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_580;
        pppppppuVar25 = (ushort *******)apppppuStack_498;
        func_0x000107c34f3c(puVar19,pppppppuVar25,1);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        ppppppuVar35 = apppppuStack_498;
        pppppppuVar25 = (ushort *******)((long)pppppppuVar18 + 0x623);
        func_0x000107c2b21c(ppppppuVar35,pppppppuVar25,*(char *)((long)pppppppuVar18 + 0x643));
        if ((int)ppppppuVar35 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar25 = (ushort *******)(ulong)*(ushort *)(pppppppuVar18[0xbf] + 2);
        iVar11 = (int)&uStack_580;
        func_0x000107c2b228();
        if (iVar11 == 0) goto code_r0x00010ae69d9c;
        iVar11 = (int)&uStack_580;
        pppppppuVar25 = (ushort *******)0x0;
        func_0x000107c2b218();
        if (iVar11 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_580;
        pppppppuVar25 = &ppppppuStack_4c8;
        func_0x000107c34f3c(puVar19,pppppppuVar25,2);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar25 = &ppppppuStack_4c8;
        pppppppuVar21 = pppppppuVar18;
        func_0x00010ae59ec4();
        if ((int)pppppppuVar21 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar25 = &ppppppuStack_4c8;
        pppppppuVar21 = pppppppuVar18;
        FUN_10ae5a0c0();
        if ((int)pppppppuVar21 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar25 = &ppppppuStack_4c8;
        pppppppuVar21 = pppppppuVar18;
        FUN_10ae6a27c();
        if ((int)pppppppuVar21 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
        ppppppuVar35 = ppppppuVar13;
        (*(code *)(*ppppppuVar13)[0xc])(ppppppuVar13,pppppppuVar25,&ppppppuStack_4a8);
        if (((ulong)ppppppuVar35 & 1) == 0) goto code_r0x00010ae69d9c;
        if (((ulong)pppppppuVar18[0xc3] & 1) != 0) {
          uVar27 = 0x1e;
          if (*(char *)*ppppppuVar13 != '\0') {
            uVar27 = 0x26;
          }
          pppppppuVar25 = (ushort *******)(pppppuVar28 + 5);
          pppppppuVar20 = pppppppuVar18;
          FUN_10ae68138(pppppppuVar18,pppppppuVar25,8,ppppppuVar13[6] + 6,0x20,pppppppuVar18 + 0x33,
                        0,param_8,ppppppuStack_4a8,uStack_4a0,uVar27);
          if (((ulong)pppppppuVar20 & 1) == 0) goto code_r0x00010ae69d9c;
          if (uStack_4a0 < uVar27) goto code_r0x00010ae69e28;
          *(ushort *****)((long)ppppppuStack_4a8 + uVar27) = pppppuVar28[5];
        }
        ppppppuStack_4d8 = ppppppuStack_4a8;
        uStack_4d0 = uStack_4a0;
        ppppppuStack_4a8 = (ushort ******)0x0;
        uStack_4a0 = 0;
        pppppppuVar25 = &ppppppuStack_4d8;
        ppppppuVar35 = ppppppuVar13;
        (*(code *)(*ppppppuVar13)[0xd])();
        func_0x000107c2b534(ppppppuStack_4d8);
        ppppppuStack_4d8 = (ushort ******)0x0;
        uStack_4d0 = 0;
        if (((ulong)ppppppuVar35 & 1) == 0) goto code_r0x00010ae69d9c;
        func_0x000107c2b534(pppppppuVar18[0x4b]);
        pppppppuVar18[0x4b] = (ushort ******)0x0;
        pppppppuVar18[0x4c] = (ushort ******)0x0;
        if (((-1 < *(short *)((long)ppppppuVar13[6] + 0xd4)) &&
            (ppppppuVar35 = ppppppuVar13, (*(code *)(*ppppppuVar13)[0xe])(), (int)ppppppuVar35 == 0)
            ) || (pppppppuVar21 = pppppppuVar18, func_0x000107c2b904(), (int)pppppppuVar21 == 0))
        goto code_r0x00010ae69d9c;
        pppppppuVar25 = (ushort *******)0x2;
        ppppppuVar35 = ppppppuVar13;
        func_0x000107c2b8fc(ppppppuVar13,2,1,pppppppuVar18[0xbb],pppppppuVar18 + 0x17,
                            pppppppuVar18[4]);
        if (((ulong)ppppppuVar35 & 1) == 0) goto code_r0x00010ae69d9c;
        pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
        ppppppuVar35 = ppppppuVar13;
        (*(code *)(*ppppppuVar13)[0xb])(ppppppuVar13,pppppppuVar25,&uStack_580,8);
        if ((int)ppppppuVar35 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar25 = (ushort *******)&uStack_580;
        pppppppuVar21 = pppppppuVar18;
        func_0x00010ae5a300();
        if ((int)pppppppuVar21 == 0) goto code_r0x00010ae69d9c;
        pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
        ppppppuVar35 = ppppppuVar13;
        func_0x000107c2b6fc();
        if ((int)ppppppuVar35 == 0) goto code_r0x00010ae69d9c;
        uVar9 = *(uint *)(pppppppuVar18 + 0xc3);
        if ((*(ushort *)((long)ppppppuVar13[6] + 0xd4) >> 6 & 1) == 0) {
          uVar5 = uVar9 & 0xffffffdf;
          uVar7 = uVar9 & 0x1000000;
          uVar9 = uVar9 & 0xffffffc0 | uVar9 & 0x1f | (*(byte *)(pppppppuVar18[1] + 0x1d) & 1) << 5;
          *(uint *)(pppppppuVar18 + 0xc3) = uVar9;
          if (uVar7 != 0 && ((ulong)pppppppuVar18[1][0x1d] & 4) != 0) {
            uVar9 = uVar5;
          }
          *(uint *)(pppppppuVar18 + 0xc3) = uVar9;
        }
        if ((uVar9 >> 5 & 1) != 0) {
          pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
          ppppppuVar35 = ppppppuVar13;
          (*(code *)(*ppppppuVar13)[0xb])(ppppppuVar13,pppppppuVar25,&uStack_580,0xd);
          if ((int)ppppppuVar35 != 0) {
            iVar11 = (int)&uStack_580;
            pppppppuVar25 = (ushort *******)0x0;
            func_0x000107c2b218();
            if (iVar11 != 0) {
              puVar19 = &uStack_580;
              pppppppuVar25 = (ushort *******)&pppppuStack_4f8;
              func_0x000107c34f3c(puVar19,pppppppuVar25,2);
              if ((int)puVar19 != 0) {
                iVar11 = (int)&pppppuStack_4f8;
                pppppppuVar25 = (ushort *******)0xd;
                func_0x000107c2b228();
                if (iVar11 != 0) {
                  ppppppuVar35 = &pppppuStack_4f8;
                  pppppppuVar25 = (ushort *******)&pppppuStack_518;
                  func_0x000107c34f3c(ppppppuVar35,pppppppuVar25,2);
                  if ((int)ppppppuVar35 != 0) {
                    ppppppuVar35 = &pppppuStack_518;
                    pppppppuVar25 = (ushort *******)&uStack_538;
                    func_0x000107c34f3c(ppppppuVar35,pppppppuVar25,2);
                    if ((int)ppppppuVar35 != 0) {
                      pppppppuVar25 = (ushort *******)&uStack_538;
                      pppppppuVar21 = pppppppuVar18;
                      func_0x000107c2b6b0();
                      if (((ulong)pppppppuVar21 & 1) != 0) {
                        pppppuVar28 = pppppppuVar18[1][10];
                        if (((pppppuVar28 == (ushort *****)0x0) &&
                            (pppppuVar28 = (ushort *****)(*pppppppuVar18[1])[0xd][0x31],
                            pppppuVar28 == (ushort *****)0x0)) || (*pppppuVar28 == (ushort ****)0x0)
                           ) {
code_r0x00010ae69d54:
                          pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
                          ppppppuVar35 = ppppppuVar13;
                          func_0x000107c2b6fc();
                          if (((ulong)ppppppuVar35 & 1) != 0) goto code_r0x00010ae69238;
                        }
                        else {
                          iVar11 = (int)&pppppuStack_4f8;
                          pppppppuVar25 = (ushort *******)0x2f;
                          func_0x000107c2b228();
                          if (iVar11 != 0) {
                            ppppppuVar35 = &pppppuStack_4f8;
                            pppppppuVar25 = appppppuStack_558;
                            func_0x000107c34f3c(ppppppuVar35,pppppppuVar25,2);
                            if ((int)ppppppuVar35 != 0) {
                              pppppppuVar25 = appppppuStack_558;
                              pppppppuVar21 = pppppppuVar18;
                              FUN_10ae626b8();
                              if ((int)pppppppuVar21 != 0) {
                                iVar11 = (int)&pppppuStack_4f8;
                                func_0x000107c2b20c();
                                if (iVar11 != 0) goto code_r0x00010ae69d54;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto code_r0x00010ae69d9c;
        }
code_r0x00010ae69238:
        if ((*(ushort *)((long)ppppppuVar13[6] + 0xd4) >> 6 & 1) == 0) {
          pppppppuVar21 = pppppppuVar18;
          FUN_10ae61f18();
          if (((ulong)pppppppuVar21 & 1) == 0) {
            pppppppuVar25 = (ushort *******)0x0;
            func_0x000107c2b29c(0x10,0,0xae,&UNK_10f6d1513,0x35d);
          }
          else {
            pppppppuVar21 = pppppppuVar18;
            FUN_10ae66d90();
            if ((int)pppppppuVar21 != 0) {
              uVar30 = 5;
              goto code_r0x00010ae69d74;
            }
          }
          goto code_r0x00010ae69d9c;
        }
        uVar30 = 6;
code_r0x00010ae69d74:
        *(undefined4 *)(pppppppuVar18 + 3) = uVar30;
        ppppppuVar13 = (ushort ******)0x1;
      }
      func_0x000107c2b204(&pppppuStack_5f0);
      pppppppuVar20 = (ushort *******)ppppppuStack_4a8;
      func_0x000107c2b534();
      break;
    case 5:
      pppppppuVar20 = pppppppuVar18;
      FUN_10ae673c0();
      if ((int)pppppppuVar20 == 0) {
        uVar30 = 6;
      }
      else {
        pppppppuVar16 = pppppppuVar20;
        pppppppuVar21 = pppppppuVar25;
        if ((int)pppppppuVar20 != 1) goto LAB_10ae693e8;
        ppppppuVar13 = (ushort ******)0x9;
        uVar30 = 5;
      }
      goto code_r0x00010ae69444;
    case 6:
      if ((*(uint *)(pppppppuVar18 + 0xc3) >> 0x14 & 1) != 0) goto code_r0x00010ae689a0;
      pppppppuVar20 = (ushort *******)*pppppppuVar18;
      *(uint *)(pppppppuVar18 + 0xc3) = *(uint *)(pppppppuVar18 + 0xc3) | 0x800000;
      pppppppuVar16 = pppppppuVar18;
      func_0x000107c2b8e4();
      pppppppuVar21 = pppppppuVar25;
      if ((int)pppppppuVar16 != 0) {
        pppppppuVar21 = (ushort *******)&UNK_10e52b4d2;
        pppppppuVar16 = pppppppuVar18;
        func_0x000107c2b8f8(pppppppuVar18,&UNK_10e52b4d2,
                            *(undefined4 *)((long)pppppppuVar18[0x34] + 4));
        if (((int)pppppppuVar16 != 0) &&
           (pppppppuVar16 = pppppppuVar18, func_0x000107c2b908(), (int)pppppppuVar16 != 0)) {
          pppppppuVar25 = (ushort *******)0x3;
          func_0x000107c2b8fc(pppppppuVar20,3,1,pppppppuVar18[0xbb],pppppppuVar18 + 0x23,
                              pppppppuVar18[4]);
          pppppppuVar16 = pppppppuVar20;
          pppppppuVar21 = pppppppuVar25;
          if ((int)pppppppuVar20 != 0) {
            uVar9 = 7;
            *(undefined4 *)(pppppppuVar18 + 3) = 7;
            if ((*(byte *)((long)pppppppuVar18 + 0x61a) & 8) == 0) {
              uVar9 = 1;
            }
            ppppppuVar13 = (ushort ******)(ulong)uVar9;
            break;
          }
        }
      }
      goto LAB_10ae693e8;
    case 7:
      if ((*(ushort *)((long)(*pppppppuVar18)[6] + 0xd4) >> 0xc & 1) != 0) {
        if ((*pppppppuVar18)[0x13] == (ushort *****)0x0) {
          pppppppuVar25 = pppppppuVar18 + 0x33;
          func_0x000107c2b894(pppppppuVar25,&UNK_10e52b512,4);
          if (((ulong)pppppppuVar25 & 1) != 0) goto code_r0x00010ae68e30;
          uVar26 = 0x44;
          uVar29 = 0x3a1;
code_r0x00010ae693e4:
          pppppppuVar21 = (ushort *******)0x0;
          pppppppuVar16 = (ushort *******)0x10;
          func_0x000107c2b29c(0x10,0,uVar26,&UNK_10f6d1513,uVar29);
        }
        else {
code_r0x00010ae68e30:
          pppppppuVar21 = pppppppuVar18 + 0x29;
          pppppppuVar16 = pppppppuVar18;
          func_0x000107c2b914(pppppppuVar18,pppppppuVar21,&pppppuStack_5f0,0);
          if ((int)pppppppuVar16 != 0) {
            if ((ushort ******)pppppuStack_5f0 != pppppppuVar18[4]) {
              uVar26 = 0x44;
              uVar29 = 0x3ac;
              goto code_r0x00010ae693e4;
            }
            uStack_580._0_4_ = CONCAT13((char)pppppuStack_5f0,0x14);
            pppppppuVar16 = pppppppuVar18 + 0x33;
            pppppppuVar21 = (ushort *******)&uStack_580;
            func_0x000107c2b894(pppppppuVar16,pppppppuVar21,4);
            if ((int)pppppppuVar16 != 0) {
              pppppppuVar16 = pppppppuVar18 + 0x33;
              pppppppuVar21 = pppppppuVar18 + 0x29;
              func_0x000107c2b894(pppppppuVar16,pppppppuVar21,pppppppuVar18[4]);
              if (((int)pppppppuVar16 != 0) &&
                 (pppppppuVar16 = pppppppuVar18, func_0x000107c2b910(), (int)pppppppuVar16 != 0)) {
                pppppppuVar21 = &ppppppuStack_4c8;
                pppppppuVar16 = pppppppuVar18;
                FUN_10ae6a2ec();
                pppppppuVar20 = pppppppuVar16;
                pppppppuVar25 = pppppppuVar21;
                if (((ulong)pppppppuVar16 & 1) != 0) goto code_r0x00010ae685b8;
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae685b8:
      *(undefined4 *)(pppppppuVar18 + 3) = 8;
      ppppppuVar13 = (ushort ******)0x4;
      break;
    case 8:
      pppppppuVar40 = (ushort *******)*pppppppuVar18;
      if ((*(ushort *)((long)pppppppuVar40[6] + 0xd4) >> 0xc & 1) != 0) {
        pppppppuVar25 = (ushort *******)0x1;
        pppppppuVar20 = pppppppuVar40;
        func_0x000107c2b8fc(pppppppuVar40,1,0,pppppppuVar18[0xbb],pppppppuVar18 + 0xb,
                            pppppppuVar18[4]);
        pppppppuVar16 = pppppppuVar20;
        pppppppuVar21 = pppppppuVar25;
        if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
        *(uint *)(pppppppuVar18 + 0xc3) = *(uint *)(pppppppuVar18 + 0xc3) | 0x6800;
      }
      if (pppppppuVar40[0x13] == (ushort ******)0x0) {
        uVar9 = 0xe;
      }
      else {
        pppppppuVar25 = (ushort *******)0x2;
        pppppppuVar20 = pppppppuVar40;
        func_0x000107c2b8fc(pppppppuVar40,2,0,pppppppuVar18[0xbb],pppppppuVar18 + 0x11,
                            pppppppuVar18[4]);
        pppppppuVar16 = pppppppuVar20;
        pppppppuVar21 = pppppppuVar25;
        if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
        uVar9 = 0xc;
      }
      *(undefined4 *)(pppppppuVar18 + 3) = 9;
      if ((*(ushort *)((long)pppppppuVar40[6] + 0xd4) & 0x1000) == 0) {
        uVar9 = 1;
      }
      ppppppuVar13 = (ushort ******)(ulong)uVar9;
      break;
    case 9:
      pppppppuVar40 = (ushort *******)*pppppppuVar18;
      if (pppppppuVar40[0x13] == (ushort ******)0x0) {
        if ((*(ushort *)((long)pppppppuVar40[6] + 0xd4) >> 0xc & 1) != 0) {
          pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
          pppppppuVar21 = pppppppuVar40;
          (*(code *)(*pppppppuVar40)[3])();
          if ((int)pppppppuVar21 == 0) goto code_r0x00010ae6931c;
          pppppppuVar21 = (ushort *******)&pppppuStack_5f0;
          pppppppuVar16 = pppppppuVar40;
          func_0x000107c2b6f8(pppppppuVar40,pppppppuVar21,5);
          if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
          if (uStack_5e0 != 0) {
            FUN_10ae60390(pppppppuVar40,2,0x32);
            uVar26 = 0x89;
            uVar29 = 0x3f5;
            goto code_r0x00010ae693e4;
          }
          (*(code *)(*pppppppuVar40)[4])(pppppppuVar40);
        }
        pppppppuVar21 = (ushort *******)0x2;
        func_0x000107c2b8fc(pppppppuVar40,2,0,pppppppuVar18[0xbb],pppppppuVar18 + 0x11,
                            pppppppuVar18[4]);
        pppppppuVar16 = pppppppuVar40;
        pppppppuVar20 = pppppppuVar40;
        pppppppuVar25 = pppppppuVar21;
        if ((int)pppppppuVar40 == 0) goto LAB_10ae693e8;
      }
      uVar30 = 10;
code_r0x00010ae69444:
      *(undefined4 *)(pppppppuVar18 + 3) = uVar30;
      break;
    case 10:
      if (((*(byte *)(pppppppuVar18[0xbb] + 0x36) >> 6 & 1) != 0) &&
         (pppppppuVar40 = (ushort *******)*pppppppuVar18,
         (*(ushort *)((long)pppppppuVar40[6] + 0xd4) >> 0xc & 1) == 0)) {
        pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
        pppppppuVar21 = pppppppuVar40;
        (*(code *)(*pppppppuVar40)[3])();
        if ((int)pppppppuVar21 == 0) goto code_r0x00010ae6931c;
        pppppppuVar21 = (ushort *******)&pppppuStack_5f0;
        pppppppuVar16 = pppppppuVar40;
        func_0x000107c2b6f8(pppppppuVar40,pppppppuVar21,8);
        if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
        if (1 < uStack_5e0) {
          pppppppuVar25 =
               (ushort *******)(ulong)((uint)(*puStack_5e8 >> 8) | (*puStack_5e8 & 0xff00ff) << 8);
          if ((pppppppuVar25 <= (ushort *******)(uStack_5e0 - 2)) &&
             (ppppppuStack_4c8 = (ushort ******)(puStack_5e8 + 1),
             ppppppuStack_4c0 = (ushort ******)pppppppuVar25,
             (ushort *******)(uStack_5e0 - 2) == pppppppuVar25)) {
            uStack_580._0_4_ = 0x14469;
            ppppppuStack_578 = (ushort ******)0x0;
            ppppppuStack_570 = (ushort ******)0x0;
            pppppuStack_4f8 = (ushort *****)CONCAT71(pppppuStack_4f8._1_7_,0x32);
            pppppppuVar25 = &ppppppuStack_4c8;
            apppppuStack_498[0] = (ushort *****)&uStack_580;
            func_0x000107c2b700(pppppppuVar25,&pppppuStack_4f8,apppppuStack_498,1,0);
            ppppppuVar13 = ppppppuStack_570;
            pppppppuVar21 = (ushort *******)ppppppuStack_578;
            if (((ulong)pppppppuVar25 & 1) == 0) {
              uVar27 = (ulong)pppppuStack_4f8 & 0xff;
            }
            else if (((uint)uStack_580 & 0x1000000) == 0) {
              func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x424);
              uVar27 = 0x6d;
            }
            else {
              ppppppuVar35 = *pppppppuVar17;
              uVar9 = (int)ppppppuVar35 + 0x1a0;
              pppppppuVar25 = (ushort *******)ppppppuStack_570;
              func_0x000107c2b684();
              uVar5 = uVar9 ^ 1;
              if ((ushort *******)ppppppuVar13 == (ushort *******)0x0) {
                uVar5 = 1;
              }
              if ((uVar5 & 1) == 0) {
                _memcpy(ppppppuVar35[0x34],pppppppuVar21,ppppppuVar13);
                pppppppuVar25 = pppppppuVar21;
              }
              if (uVar9 != 0) {
                if (((ulong)pppppuStack_5f0 & 1) == 0) {
                  pppppppuVar21 = pppppppuVar18 + 0x33;
                  pppppppuVar25 = (ushort *******)ppppppuStack_5d8;
                  func_0x000107c2b894(pppppppuVar21,ppppppuStack_5d8,uStack_5d0);
                  if (((ulong)pppppppuVar21 & 1) == 0) goto code_r0x00010ae698a0;
                }
                (*(code *)(*pppppppuVar40)[4])();
                pppppppuVar20 = pppppppuVar40;
                goto code_r0x00010ae6858c;
              }
code_r0x00010ae698a0:
              uVar27 = 0x50;
            }
            pppppppuVar21 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar40,2,uVar27);
            pppppppuVar16 = pppppppuVar40;
            goto LAB_10ae693e8;
          }
        }
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,0x416);
        pppppppuVar21 = (ushort *******)0x2;
        FUN_10ae60390(pppppppuVar40,2,0x32);
        pppppppuVar16 = pppppppuVar40;
        goto LAB_10ae693e8;
      }
code_r0x00010ae6858c:
      uVar30 = 0xb;
code_r0x00010ae68cb8:
      *(undefined4 *)(pppppppuVar18 + 3) = uVar30;
code_r0x00010ae68cbc:
      ppppppuVar13 = (ushort ******)0x1;
      break;
    case 0xb:
      pppppppuVar40 = (ushort *******)*pppppppuVar18;
      if ((*(byte *)(pppppppuVar18 + 0xc3) >> 5 & 1) == 0) {
        if ((*(ushort *)((long)pppppppuVar40[6] + 0xd4) >> 6 & 1) == 0) {
          (*pppppppuVar17)[0x17] = (ushort *****)0x0;
        }
        uVar30 = 0xd;
        goto code_r0x00010ae68cb8;
      }
      pppppuVar28 = pppppppuVar18[1][0x1d];
      pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
      pppppppuVar21 = pppppppuVar40;
      (*(code *)(*pppppppuVar40)[3])();
      if ((int)pppppppuVar21 == 0) goto code_r0x00010ae6931c;
      pppppppuVar21 = (ushort *******)&pppppuStack_5f0;
      pppppppuVar16 = pppppppuVar40;
      func_0x000107c2b6f8(pppppppuVar40,pppppppuVar21,0xb);
      if ((int)pppppppuVar16 != 0) {
        pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
        pppppppuVar16 = pppppppuVar18;
        func_0x000107c2b8d0(pppppppuVar18,pppppppuVar25,((ulong)pppppuVar28 & 2) == 0);
        pppppppuVar21 = pppppppuVar25;
        if ((int)pppppppuVar16 != 0) {
          if (((ulong)pppppuStack_5f0 & 1) == 0) {
            pppppppuVar16 = pppppppuVar18 + 0x33;
            pppppppuVar25 = (ushort *******)ppppppuStack_5d8;
            func_0x000107c2b894(pppppppuVar16,ppppppuStack_5d8,uStack_5d0);
            pppppppuVar21 = pppppppuVar25;
            if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar40)[4])();
          uVar30 = 0xc;
          pppppppuVar20 = pppppppuVar40;
          goto code_r0x00010ae68cb8;
        }
      }
      goto LAB_10ae693e8;
    case 0xc:
      if ((pppppppuVar18[0xbb][0x12] == (ushort *****)0x0) ||
         (*pppppppuVar18[0xbb][0x12] == (ushort ****)0x0)) {
code_r0x00010ae69440:
        ppppppuVar13 = (ushort ******)0x1;
        uVar30 = 0xd;
        goto code_r0x00010ae69444;
      }
      pppppppuVar20 = (ushort *******)*pppppppuVar18;
      pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
      pppppppuVar21 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar21 == 0) goto code_r0x00010ae6931c;
      pppppppuVar16 = pppppppuVar18;
      func_0x000107c2b704();
      pppppppuVar21 = pppppppuVar25;
      if ((int)pppppppuVar16 != 1) {
        if ((int)pppppppuVar16 == 2) {
          ppppppuVar13 = (ushort ******)0x10;
          uVar30 = 0xc;
          pppppppuVar20 = pppppppuVar16;
          goto code_r0x00010ae69444;
        }
        pppppppuVar21 = (ushort *******)&pppppuStack_5f0;
        pppppppuVar16 = pppppppuVar20;
        func_0x000107c2b6f8(pppppppuVar20,pppppppuVar21,0xf);
        if ((int)pppppppuVar16 != 0) {
          pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
          pppppppuVar16 = pppppppuVar18;
          func_0x000107c2b8d4();
          pppppppuVar21 = pppppppuVar25;
          if ((int)pppppppuVar16 != 0) {
            if (((ulong)pppppuStack_5f0 & 1) == 0) {
              pppppppuVar16 = pppppppuVar18 + 0x33;
              pppppppuVar25 = (ushort *******)ppppppuStack_5d8;
              func_0x000107c2b894(pppppppuVar16,ppppppuStack_5d8,uStack_5d0);
              pppppppuVar21 = pppppppuVar25;
              if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
            }
            (*(code *)(*pppppppuVar20)[4])();
            goto code_r0x00010ae69440;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xd:
      if ((*(byte *)((long)pppppppuVar18 + 0x61b) & 1) == 0) {
code_r0x00010ae68468:
        uVar30 = 0xe;
        goto code_r0x00010ae69444;
      }
      pppppppuVar20 = (ushort *******)*pppppppuVar18;
      pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
      pppppppuVar21 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar21 == 0) goto code_r0x00010ae6931c;
      pppppppuVar21 = (ushort *******)&pppppuStack_5f0;
      pppppppuVar16 = pppppppuVar20;
      func_0x000107c2b6f8(pppppppuVar20,pppppppuVar21,0xcb);
      if ((int)pppppppuVar16 != 0) {
        pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
        pppppppuVar16 = pppppppuVar18;
        FUN_10ae5aebc();
        pppppppuVar21 = pppppppuVar25;
        if ((int)pppppppuVar16 != 0) {
          if (((ulong)pppppuStack_5f0 & 1) == 0) {
            pppppppuVar16 = pppppppuVar18 + 0x33;
            pppppppuVar25 = (ushort *******)ppppppuStack_5d8;
            func_0x000107c2b894(pppppppuVar16,ppppppuStack_5d8,uStack_5d0);
            pppppppuVar21 = pppppppuVar25;
            if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar20)[4])();
          goto code_r0x00010ae68468;
        }
      }
      goto LAB_10ae693e8;
    case 0xe:
      pppppppuVar20 = (ushort *******)*pppppppuVar18;
      pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
      pppppppuVar21 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar21 == 0) goto code_r0x00010ae6931c;
      pppppppuVar21 = (ushort *******)&pppppuStack_5f0;
      pppppppuVar16 = pppppppuVar20;
      func_0x000107c2b6f8(pppppppuVar20,pppppppuVar21,0x14);
      if ((int)pppppppuVar16 != 0) {
        pppppppuVar21 = (ushort *******)&pppppuStack_5f0;
        pppppppuVar16 = pppppppuVar18;
        func_0x000107c2b8d8(pppppppuVar18,pppppppuVar21,
                            *(ushort *)((long)pppppppuVar20[6] + 0xd4) >> 0xc & 1);
        if ((int)pppppppuVar16 != 0) {
          pppppppuVar25 = (ushort *******)0x3;
          pppppppuVar16 = pppppppuVar20;
          func_0x000107c2b8fc(pppppppuVar20,3,0,pppppppuVar18[0xbb],pppppppuVar18 + 0x1d,
                              pppppppuVar18[4]);
          pppppppuVar21 = pppppppuVar25;
          if ((int)pppppppuVar16 != 0) {
            if ((*(ushort *)((long)pppppppuVar20[6] + 0xd4) >> 0xc & 1) == 0) {
              if (((ulong)pppppuStack_5f0 & 1) == 0) {
                pppppppuVar16 = pppppppuVar18 + 0x33;
                pppppppuVar25 = (ushort *******)ppppppuStack_5d8;
                func_0x000107c2b894(pppppppuVar16,ppppppuStack_5d8,uStack_5d0);
                pppppppuVar21 = pppppppuVar25;
                if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
              }
              pppppppuVar16 = pppppppuVar18;
              func_0x000107c2b910();
              pppppppuVar21 = pppppppuVar25;
              if ((int)pppppppuVar16 == 0) goto LAB_10ae693e8;
              uVar30 = 0xf;
            }
            else {
              uVar30 = 0x10;
            }
            *(undefined4 *)(pppppppuVar18 + 3) = uVar30;
            (*(code *)(*pppppppuVar20)[4])();
            goto code_r0x00010ae68cbc;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xf:
      pppppppuVar25 = (ushort *******)&pppppuStack_5f0;
      pppppppuVar20 = pppppppuVar18;
      FUN_10ae6a2ec();
      pppppppuVar16 = pppppppuVar20;
      pppppppuVar21 = pppppppuVar25;
      if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
      *(undefined4 *)(pppppppuVar18 + 3) = 0x10;
      uVar9 = 4;
      if (((*pppppppuVar18)[0x13] != (ushort *****)0x0 & (byte)pppppuStack_5f0) == 0) {
        uVar9 = 1;
      }
      ppppppuVar13 = (ushort ******)(ulong)uVar9;
      break;
    case 0x10:
      goto code_r0x00010ae69de8;
    }
    if (*(int *)(pppppppuVar18 + 3) != iVar10) {
      pppppppuVar20 = (ushort *******)*pppppppuVar18;
      ppppppuVar35 = pppppppuVar20[0xc];
      if ((ppppppuVar35 != (ushort ******)0x0) ||
         (ppppppuVar35 = (ushort ******)pppppppuVar20[0xd][0x30], ppppppuVar35 != (ushort ******)0x0
         )) {
        pppppppuVar25 = (ushort *******)0x2001;
        (*(code *)ppppppuVar35)(pppppppuVar20,0x2001,1);
      }
    }
  } while ((int)ppppppuVar13 == 1);
code_r0x00010ae69de8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
    return ppppppuVar13;
  }
  ___stack_chk_fail();
code_r0x00010ae69e28:
  _abort();
  func_0x000107c2b534(pppppuStack_4f8);
  func_0x000107c2b204(&pppppuStack_5f0);
  __Unwind_Resume();
  if ((*(byte *)(pppppppuVar20 + 0x36) >> 5 & 1) == 0) {
    return (ushort ******)0x1;
  }
  ppppppuVar13 = pppppppuVar20[0x38];
  if ((ppppppuVar13 != (ushort ******)0x0) && (pppppppuVar25[0x17] == ppppppuVar13)) {
    bVar32 = 0;
    ppppppuVar35 = pppppppuVar25[0x16];
    ppppppuVar38 = pppppppuVar20[0x37];
    do {
      bVar32 = *(byte *)ppppppuVar38 ^ *(byte *)ppppppuVar35 | bVar32;
      ppppppuVar13 = (ushort ******)((long)ppppppuVar13 + -1);
      ppppppuVar35 = (ushort ******)((long)ppppppuVar35 + 1);
      ppppppuVar38 = (ushort ******)((long)ppppppuVar38 + 1);
    } while (ppppppuVar13 != (ushort ******)0x0);
    return (ushort ******)(ulong)(bVar32 == 0);
  }
  return (ushort ******)0x0;
}



/* Entry: 10ae67e18; end: 10ae68017;  */

undefined1 *
FUN_10ae67e18(undefined1 *param_1,ushort *******param_2,undefined1 *param_3,uint *param_4,
             undefined8 param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  ushort *******pppppppuVar1;
  char *pcVar2;
  undefined *puVar3;
  uint uVar4;
  ushort ****ppppuVar5;
  ushort ******ppppppuVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint *puVar16;
  ushort *******pppppppuVar17;
  ushort *******pppppppuVar18;
  ushort *******pppppppuVar19;
  ushort ******ppppppuVar20;
  undefined8 *puVar21;
  ushort *******pppppppuVar22;
  ushort *******pppppppuVar23;
  undefined1 **ppuVar24;
  undefined1 uVar25;
  undefined1 *puVar26;
  ulong uVar27;
  uint *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  byte *pbVar32;
  ushort ******ppppppuVar33;
  ushort ****ppppuVar34;
  byte bVar35;
  byte *pbVar36;
  undefined1 *puVar37;
  ulong *puVar38;
  undefined1 *puVar39;
  ushort ******ppppppuVar40;
  ushort ******ppppppuVar41;
  ushort *****pppppuVar42;
  ushort *******pppppppuVar43;
  ushort *****pppppuVar44;
  ushort *****pppppuVar45;
  ushort *****pppppuVar46;
  undefined1 uStack_562;
  undefined1 uStack_561;
  ushort *****pppppuStack_560;
  ushort *puStack_558;
  ulong uStack_550;
  ushort ******ppppppuStack_548;
  undefined8 uStack_540;
  undefined8 uStack_530;
  long lStack_528;
  ushort *****pppppuStack_520;
  undefined8 uStack_518;
  undefined8 uStack_4f0;
  ushort ******ppppppuStack_4e8;
  ushort ******ppppppuStack_4e0;
  ushort ******ppppppuStack_4d8;
  undefined8 uStack_4d0;
  ushort ******appppppuStack_4c8 [4];
  undefined8 uStack_4a8;
  ushort *****pppppuStack_488;
  ulong uStack_480;
  ushort *****pppppuStack_468;
  ulong uStack_460;
  ushort ******ppppppuStack_448;
  ulong uStack_440;
  ushort ******ppppppuStack_438;
  ushort ******ppppppuStack_430;
  ushort ******ppppppuStack_418;
  ulong uStack_410;
  ushort *****apppppuStack_408 [4];
  long lStack_3e8;
  ulong uStack_3d0;
  undefined1 *puStack_3c8;
  ulong uStack_3c0;
  long lStack_3b8;
  uint *puStack_3b0;
  undefined8 uStack_3a8;
  ushort ******ppppppuStack_3a0;
  undefined1 *puStack_398;
  undefined1 *puStack_390;
  ushort ******ppppppuStack_388;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  ushort *****pppppuStack_370;
  ulong uStack_368;
  ushort *****pppppuStack_358;
  ushort *****pppppuStack_350;
  ushort ******ppppppuStack_348;
  ushort ******ppppppuStack_340;
  undefined8 *puStack_338;
  uint uStack_324;
  undefined1 auStack_320 [64];
  ushort *****apppppuStack_2e0 [8];
  long lStack_2a0;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined1 *puStack_230;
  ulong uStack_228;
  ulong uStack_220;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  uint *puStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 *puStack_1c0;
  ulong uStack_1b8;
  ushort *****pppppuStack_1b0;
  uint *puStack_1a8;
  uint *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_184 [4];
  ushort *****pppppuStack_180;
  uint uStack_174;
  ushort *****apppppuStack_170 [8];
  uint auStack_130 [34];
  undefined1 auStack_a8 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  func_0x000107c2b858();
  auStack_130[0x1a] = 0;
  auStack_130[0x1b] = 0;
  auStack_130[0x18] = 0;
  auStack_130[0x19] = 0;
  auStack_130[0x1e] = 0;
  auStack_130[0x1f] = 0;
  auStack_130[0x1c] = 0;
  auStack_130[0x1d] = 0;
  auStack_130[0x12] = 0;
  auStack_130[0x13] = 0;
  auStack_130[0x10] = 0;
  auStack_130[0x11] = 0;
  auStack_130[0x16] = 0;
  auStack_130[0x17] = 0;
  auStack_130[0x14] = 0;
  auStack_130[0x15] = 0;
  auStack_130[10] = 0;
  auStack_130[0xb] = 0;
  auStack_130[8] = 0;
  auStack_130[9] = 0;
  auStack_130[0xe] = 0;
  auStack_130[0xf] = 0;
  auStack_130[0xc] = 0;
  auStack_130[0xd] = 0;
  auStack_130[2] = 0;
  auStack_130[3] = 0;
  auStack_130[0] = 0;
  auStack_130[1] = 0;
  auStack_130[6] = 0;
  auStack_130[7] = 0;
  auStack_130[4] = 0;
  auStack_130[5] = 0;
  uVar12 = *(uint *)(puVar14 + 4);
  puVar26 = auStack_a8;
  puVar28 = &uStack_174;
  puVar15 = (uint *)0x0;
  pppppppuVar23 = (ushort *******)0x0;
  func_0x000107c2b408();
  if ((int)puVar15 == 0) {
LAB_10ae67f24:
    param_2 = pppppppuVar23;
    puVar39 = (undefined1 *)0x0;
  }
  else {
    puVar15 = auStack_130 + 0x10;
    pppppppuVar23 = (ushort *******)&pppppuStack_180;
    puVar28 = (uint *)(param_3 + 0x10);
    puVar26 = puVar14;
    func_0x000107c2b51c();
    if ((int)puVar15 == 0) goto LAB_10ae67f24;
    uStack_1b8 = (ulong)uStack_174;
    puStack_1c0 = auStack_a8;
    puVar15 = auStack_130;
    puVar28 = auStack_130 + 0x10;
    pppppppuVar23 = (ushort *******)(ulong)uVar12;
    puVar26 = puVar14;
    func_0x000107c34fd8();
    if ((int)puVar15 == 0) goto LAB_10ae67f24;
    if (param_6 < param_7) {
      puVar28 = (uint *)&UNK_10f6d13d3;
      puVar15 = (uint *)0x10;
      pppppppuVar23 = (ushort *******)0x0;
      puVar26 = (undefined1 *)0x44;
      func_0x000107c2b29c();
      goto LAB_10ae67f24;
    }
    puStack_1a8 = (uint *)0x0;
    pppppuStack_1b0 = (ushort *****)0x0;
    puStack_198 = (undefined8 *)0x0;
    puStack_1a0 = (uint *)0x0;
    pppppppuVar23 = (ushort *******)&pppppuStack_1b0;
    puVar15 = param_4;
    puVar26 = puVar14;
    func_0x00010ae657f0();
    if ((int)puVar15 == 0) {
LAB_10ae67fd4:
      param_2 = pppppppuVar23;
      puVar39 = (undefined1 *)0x0;
    }
    else {
      (*(code *)pppppuStack_1b0[3])(&pppppuStack_1b0,param_5,param_6 - param_7);
      iVar11 = (int)&pppppuStack_1b0;
      pppppppuVar23 = (ushort *******)apppppuStack_170;
      puVar26 = auStack_184;
      func_0x000107c2b41c();
      if (iVar11 == 0) goto LAB_10ae67fd4;
      puVar28 = auStack_130;
      puVar39 = param_1;
      puVar26 = puVar14;
      func_0x000107c34fe0(param_1);
    }
    puVar15 = puStack_1a8;
    func_0x000107c2b534();
    if (puStack_198 != (undefined8 *)0x0) {
      puVar15 = puStack_1a0;
      (*(code *)*puStack_198)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar39;
  }
  ___stack_chk_fail();
  FUN_10ae34eb0(&pppppuStack_1b0);
  puVar16 = puVar15;
  __Unwind_Resume();
  ppuVar24 = &puStack_230;
  puStack_1e0 = param_1;
  puStack_1d8 = puVar15;
  puStack_1d0 = &stack0xfffffffffffffff0;
  pcStack_1c8 = FUN_10ae68018;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = *(undefined8 *)(puVar26 + 0x18);
  pppppppuVar23 = *(ushort ********)(puVar26 + 0x20);
  iVar11 = (int)&uStack_228;
  puVar16 = puVar16 + 0x66;
  puVar26 = (undefined1 *)(*(long *)(puVar28 + 2) + 2);
  FUN_10ae67e18();
  if ((iVar11 == 0) || (*(long *)(puVar28 + 2) == 0)) {
LAB_10ae6808c:
    param_2 = (ushort *******)0x44;
    uVar29 = 0x201;
LAB_10ae680a4:
    puVar16 = (uint *)&UNK_10f6d13d3;
    ppuVar24 = (undefined1 **)0x0;
    func_0x000107c2b29c(0x10);
    puVar39 = (undefined1 *)0x0;
  }
  else {
    pbVar36 = *(byte **)puVar28;
    pbVar32 = pbVar36 + 1;
    puVar37 = (undefined1 *)(*(long *)(puVar28 + 2) + -1);
    *(byte **)puVar28 = pbVar32;
    *(undefined1 **)(puVar28 + 2) = puVar37;
    bVar35 = *pbVar36;
    puVar39 = (undefined1 *)(ulong)bVar35;
    if (puVar37 < puVar39) goto LAB_10ae6808c;
    *(byte **)puVar28 = pbVar32 + (long)puVar39;
    *(long *)(puVar28 + 2) = (long)puVar37 - (long)puVar39;
    if (puStack_230 != puVar39) {
LAB_10ae68110:
      param_2 = (ushort *******)0x8e;
      uVar29 = 0x20c;
      goto LAB_10ae680a4;
    }
    if (bVar35 != 0) {
      bVar35 = 0;
      puVar38 = &uStack_228;
      do {
        bVar35 = (byte)*puVar38 ^ *pbVar32 | bVar35;
        puVar39 = puVar39 + -1;
        pbVar32 = pbVar32 + 1;
        puVar38 = (ulong *)((long)puVar38 + 1);
      } while (puVar39 != (undefined1 *)0x0);
      if (bVar35 != 0) goto LAB_10ae68110;
    }
    puVar39 = (undefined1 *)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return puVar39;
  }
  ___stack_chk_fail(puVar39);
  pcStack_238 = FUN_10ae68138;
  lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar27 = uStack_220 + 8;
  ppuStack_240 = &puStack_1d0;
  if (uStack_228 < uVar27) {
    pppppppuVar17 = (ushort *******)0x10;
    param_2 = (ushort *******)0x0;
    func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d13d3,0x225);
    puVar39 = (undefined1 *)0x0;
    ppuVar24 = (undefined1 **)param_1;
    puVar26 = puVar14;
    pppppppuVar23 = (ushort *******)(ulong)uVar12;
    uVar29 = param_5;
    puVar16 = param_4;
    goto LAB_10ae682d4;
  }
  param_6 = uStack_228;
  if (uStack_220 <= uStack_228) {
    param_6 = uStack_220;
  }
  ppppppuStack_348 = (ushort ******)0x0;
  pppppuStack_350 = (ushort *****)0x0;
  puStack_338 = (undefined8 *)0x0;
  ppppppuStack_340 = (ushort ******)0x0;
  pppppppuVar17 = (ushort *******)&pppppuStack_350;
  pppppppuVar18 = pppppppuVar23;
  func_0x00010ae657f0(pppppppuVar23,pppppppuVar17,pppppppuVar23[1]);
  if ((int)pppppppuVar18 == 0) {
LAB_10ae682b4:
    param_2 = pppppppuVar17;
    puVar39 = (undefined1 *)0x0;
  }
  else {
    (*(code *)pppppuStack_350[3])(&pppppuStack_350,puStack_230,param_6);
    (*(code *)pppppuStack_350[3])(&pppppuStack_350,&UNK_10e52b45c,8);
    (*(code *)pppppuStack_350[3])(&pppppuStack_350,puStack_230 + uVar27,uStack_228 - uVar27);
    ppppppuVar33 = &pppppuStack_350;
    pppppppuVar17 = (ushort *******)apppppuStack_2e0;
    func_0x000107c2b41c(ppppppuVar33,pppppppuVar17,&uStack_324);
    param_3 = puStack_230;
    if ((int)ppppppuVar33 == 0) goto LAB_10ae682b4;
    iVar11 = (int)auStack_320;
    pppppppuVar17 = (ushort *******)&pppppuStack_358;
    func_0x000107c2b51c();
    if (iVar11 == 0) goto LAB_10ae682b4;
    bVar10 = (int)puVar26 == 0;
    puVar3 = &UNK_10f6d14df;
    if (bVar10) {
      puVar3 = &UNK_10f6d14fb;
    }
    uVar30 = 0x1b;
    if (bVar10) {
      uVar30 = 0x17;
    }
    uStack_368 = (ulong)uStack_324;
    pppppuStack_370 = (ushort *****)apppppuStack_2e0;
    puVar39 = (undefined1 *)ppuVar24;
    func_0x000107c34fd8(ppuVar24,param_2,pppppppuVar23[1],auStack_320,pppppuStack_358,puVar3,uVar30)
    ;
  }
  pppppppuVar17 = (ushort *******)ppppppuStack_348;
  func_0x000107c2b534();
  if (puStack_338 != (undefined8 *)0x0) {
    pppppppuVar17 = (ushort *******)ppppppuStack_340;
    (*(code *)*puStack_338)();
  }
LAB_10ae682d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a0) {
    return puVar39;
  }
  ___stack_chk_fail();
  FUN_10ae34eb0(&pppppuStack_350);
  pppppppuVar19 = pppppppuVar17;
  __Unwind_Resume();
  pcStack_378 = FUN_10ae6832c;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar18 = pppppppuVar19 + 0xbb;
  pppppppuVar1 = pppppppuVar19 + 0x47;
  pppppppuVar22 = pppppppuVar19;
  uStack_3d0 = uVar27;
  puStack_3c8 = param_3;
  uStack_3c0 = param_6;
  lStack_3b8 = uStack_228 - uVar27;
  puStack_3b0 = puVar16;
  uStack_3a8 = uVar29;
  ppppppuStack_3a0 = (ushort ******)pppppppuVar23;
  puStack_398 = puVar26;
  puStack_390 = (undefined1 *)ppuVar24;
  ppppppuStack_388 = (ushort ******)pppppppuVar17;
  pppuStack_380 = &ppuStack_240;
  do {
    iVar11 = *(int *)(pppppppuVar19 + 3);
    puVar26 = (undefined1 *)0x1;
    pppppppuVar17 = pppppppuVar22;
    pppppppuVar23 = param_2;
    switch(iVar11) {
    case 0:
      param_2 = (ushort *******)*pppppppuVar19;
      pppppppuVar23 = (ushort *******)&uStack_4f0;
      pppppppuVar17 = pppppppuVar19;
      FUN_10ae5cbc0(pppppppuVar19,pppppppuVar23,&pppppuStack_560);
      lVar9 = lStack_528;
      if ((int)pppppppuVar17 != 0) {
        if (param_2[0x13] == (ushort ******)0x0 || lStack_528 == 0) {
          if (lStack_528 != 0) {
            _memcpy((char *)((long)pppppppuVar19 + 0x623),uStack_530,lStack_528);
          }
          *(char *)((long)pppppppuVar19 + 0x643) = (char)lVar9;
          pppppppuVar23 = pppppppuVar19;
          FUN_10ae5987c(pppppppuVar19,&ppppppuStack_438);
          uVar29 = uStack_518;
          ppppppuVar33 = (ushort ******)pppppuStack_520;
          if (((ulong)pppppppuVar23 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0xe4);
            pppppppuVar23 = (ushort *******)0x2;
            FUN_10ae60390(param_2,2,0x28);
            pppppppuVar17 = param_2;
          }
          else {
            uVar27 = (ulong)ppppppuStack_438 & 0xffff;
            pppppppuVar23 = param_2;
            func_0x000107c2b89c(param_2);
            FUN_10ae60114(ppppppuVar33,uVar29,pppppppuVar23,uVar27);
            pppppppuVar19[0xbf] = ppppppuVar33;
            if (ppppppuVar33 == (ushort ******)0x0) {
              func_0x000107c2b29c(0x10,0,0xb8,&UNK_10f6d1513,0xec);
              pppppppuVar23 = (ushort *******)0x2;
              FUN_10ae60390(param_2,2,0x28);
              pppppppuVar17 = param_2;
            }
            else {
              apppppuStack_408[0] = (ushort *****)CONCAT71(apppppuStack_408[0]._1_7_,0x32);
              pppppppuVar23 = pppppppuVar19;
              FUN_10ae59a0c(pppppppuVar19,apppppuStack_408,&pppppuStack_560);
              if (((ulong)pppppppuVar23 & 1) == 0) {
                pppppppuVar23 = (ushort *******)0x2;
                FUN_10ae60390(param_2,2,(ulong)apppppuStack_408[0] & 0xff);
                pppppppuVar17 = param_2;
              }
              else {
                func_0x000107c2b89c();
                pppppppuVar22 = pppppppuVar19 + 0x33;
                func_0x000107c2b888(pppppppuVar22,param_2,pppppppuVar19[0xbf]);
                pppppppuVar17 = pppppppuVar22;
                pppppppuVar23 = param_2;
                if ((int)pppppppuVar22 != 0) {
                  puVar26 = (undefined1 *)0x1;
                  *(undefined4 *)(pppppppuVar19 + 3) = 1;
                  break;
                }
              }
            }
          }
        }
        else {
          func_0x000107c2b29c(0x10,0,0x132,&UNK_10f6d1513,0xda);
          pppppppuVar23 = (ushort *******)0x2;
          FUN_10ae60390(param_2,2,0x2f);
          pppppppuVar17 = param_2;
        }
      }
    default:
LAB_10ae693e8:
      puVar26 = (undefined1 *)0x0;
      pppppppuVar22 = pppppppuVar17;
      param_2 = pppppppuVar23;
      break;
    case 1:
      ppppppuVar33 = *pppppppuVar19;
      pppppppuVar23 = (ushort *******)&uStack_4f0;
      pppppppuVar17 = pppppppuVar19;
      FUN_10ae5cbc0(pppppppuVar19,pppppppuVar23,&pppppuStack_560);
      if ((int)pppppppuVar17 == 0) goto LAB_10ae693e8;
      uStack_562 = 0x32;
      pppppuVar42 = ppppppuVar33[6];
      ppppppuVar41 = *pppppppuVar19;
      ppppppuStack_418 = (ushort ******)0x0;
      ppppppuVar40 = &pppppuStack_560;
      FUN_10ae59824(ppppppuVar40,&ppppppuStack_438,0x29);
      if ((int)ppppppuVar40 == 0) {
code_r0x00010ae68890:
        pppppppuVar23 = pppppppuVar19;
        func_0x000107c2b85c();
        if (((ulong)pppppppuVar23 & 1) != 0) goto code_r0x00010ae6889c;
code_r0x00010ae69810:
        uVar25 = 0x50;
code_r0x00010ae69814:
        param_2 = (ushort *******)0x2;
        FUN_10ae60390(ppppppuVar33,2,uVar25);
code_r0x00010ae69820:
        puVar26 = (undefined1 *)0x0;
      }
      else {
        ppppppuVar20 = &pppppuStack_560;
        FUN_10ae59824(ppppppuVar20,apppppuStack_408,0x2d);
        if (((ulong)ppppppuVar20 & 1) == 0) {
          uStack_562 = 0x6d;
          func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x116);
          uVar25 = uStack_562;
          goto code_r0x00010ae69814;
        }
        pppppppuVar23 = pppppppuVar19;
        func_0x00010ae59cd0(pppppppuVar19,&pppppuStack_468,&pppppuStack_488,&ppppppuStack_448,
                            &uStack_562,&pppppuStack_560,&ppppppuStack_438);
        uVar25 = uStack_562;
        if (((ulong)pppppppuVar23 & 1) == 0) goto code_r0x00010ae69814;
        if ((*(byte *)(pppppppuVar19 + 0xc3) >> 4 & 1) == 0) goto code_r0x00010ae68890;
        appppppuStack_4c8[0] = (ushort ******)0x0;
        param_2 = appppppuStack_4c8;
        pppppppuVar23 = pppppppuVar19;
        FUN_10ae5a6e4(pppppppuVar19,param_2,&uStack_561,pppppuStack_468,uStack_460,0,0);
        iVar13 = (int)pppppppuVar23;
        if (iVar13 == 0) {
          pppppppuVar23 = pppppppuVar19;
          param_2 = (ushort *******)appppppuStack_4c8[0];
          FUN_10ae64ac0();
          if ((int)pppppppuVar23 == 0) {
code_r0x00010ae69738:
            iVar13 = 2;
            goto code_r0x00010ae6973c;
          }
          if ((*(byte *)(appppppuStack_4c8[0] + 0x36) >> 3 & 1) != 0) {
            ppppppuStack_448 =
                 (ushort ******)
                 CONCAT44(ppppppuStack_448._4_4_,
                          (uint)((int)ppppppuStack_448 - *(int *)(appppppuStack_4c8[0] + 0x2f)) /
                          1000);
            func_0x000107c2b798(ppppppuVar41[0xd],&uStack_4a8);
            uVar27 = CONCAT62(uStack_4a8._2_6_,CONCAT11(uStack_4a8._1_1_,(undefined1)uStack_4a8)) -
                     (long)appppppuStack_4c8[0][0x19];
            param_2 = (ushort *******)appppppuStack_4c8[0];
            if (uVar27 >> 0x1f == 0) {
              *(int *)((long)pppppuVar42 + 0xf4) = (int)ppppppuStack_448 - (int)uVar27;
              pppppppuVar17 = pppppppuVar19;
              FUN_10ae68018(pppppppuVar19,appppppuStack_4c8[0],&uStack_4f0,&pppppuStack_488);
              pppppppuVar23 = (ushort *******)appppppuStack_4c8[0];
              if (((ulong)pppppppuVar17 & 1) == 0) {
                uStack_562 = 0x33;
                iVar13 = 3;
              }
              else {
                appppppuStack_4c8[0] = (ushort ******)0x0;
                func_0x000107c2b6c0(&ppppppuStack_418);
                iVar13 = 0;
                param_2 = pppppppuVar23;
              }
              goto code_r0x00010ae6973c;
            }
            goto code_r0x00010ae69738;
          }
          iVar13 = 2;
code_r0x00010ae69748:
          appppppuStack_4c8[0] = (ushort ******)0x0;
          func_0x000107c2b874();
        }
        else {
          if (iVar13 == 3) {
            uStack_562 = 0x50;
          }
code_r0x00010ae6973c:
          ppppppuVar41 = appppppuStack_4c8[0];
          appppppuStack_4c8[0] = (ushort ******)0x0;
          if ((ushort *******)ppppppuVar41 != (ushort *******)0x0) goto code_r0x00010ae69748;
        }
        if (1 < iVar13) {
          if (iVar13 == 2) goto code_r0x00010ae68890;
          uVar25 = uStack_562;
          if (iVar13 != 3) goto code_r0x00010ae6889c;
          goto code_r0x00010ae69814;
        }
        if (iVar13 == 0) {
          func_0x000107c2b84c(&ppppppuStack_438,ppppppuStack_418,0);
          ppppppuVar41 = ppppppuStack_438;
          ppppppuStack_438 = (ushort ******)0x0;
          func_0x000107c2b6c0(pppppppuVar18,ppppppuVar41);
          ppppppuVar41 = ppppppuStack_438;
          ppppppuStack_438 = (ushort ******)0x0;
          if (ppppppuVar41 != (ushort ******)0x0) {
            func_0x000107c2b874();
          }
          if (*pppppppuVar18 == (ushort ******)0x0) goto code_r0x00010ae69810;
          *(ushort *)((long)ppppppuVar33[6] + 0xd4) =
               *(ushort *)((long)ppppppuVar33[6] + 0xd4) | 0x40;
          *(uint *)(pppppppuVar19 + 0xc3) = *(uint *)(pppppppuVar19 + 0xc3) | 0x800000;
          ppppppuVar41 = pppppppuVar19[0xbb];
          uVar12 = *(uint *)((long)ppppppuVar33[0xe] + 0x124);
          func_0x000107c2b850(ppppppuVar33,ppppppuVar41);
          if (*(uint *)(ppppppuVar41 + 0x18) <= uVar12) {
            uVar4 = *(uint *)((long)ppppppuVar41 + 0xc4);
            if (uVar12 <= *(uint *)((long)ppppppuVar41 + 0xc4)) {
              uVar4 = uVar12;
            }
            *(uint *)(ppppppuVar41 + 0x18) = uVar4;
          }
code_r0x00010ae6889c:
          pppppppuVar23 = pppppppuVar19;
          func_0x00010ae5a158(pppppppuVar19,&uStack_562,&pppppuStack_560);
          uVar25 = uStack_562;
          if (((ulong)pppppppuVar23 & 1) == 0) goto code_r0x00010ae69814;
          ppppppuVar41 = pppppppuVar19[0xbb];
          ppppppuVar41[0x1a] = (ushort *****)pppppppuVar19[0xbf];
          pppppppuVar23 = pppppppuVar19;
          FUN_10ae5987c(pppppppuVar19,(long)ppppppuVar41 + 6);
          if (((ulong)pppppppuVar23 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0x1a6);
            uVar25 = 0x28;
            goto code_r0x00010ae69814;
          }
          pppppppuVar23 = pppppppuVar19;
          FUN_10ae59f44(pppppppuVar19,&ppppppuStack_438,0,&uStack_562,&pppppuStack_560);
          uVar25 = uStack_562;
          if (((ulong)pppppppuVar23 & 1) == 0) {
code_r0x00010ae69b34:
            param_2 = (ushort *******)0x2;
            FUN_10ae60390(ppppppuVar33,2,uVar25);
          }
          else {
            if ((*(byte *)((long)ppppppuVar33 + 0xa4) >> 2 & 1) == 0) {
              pppppuVar42 = ppppppuVar33[6];
              uVar31 = 1;
code_r0x00010ae688f8:
              *(undefined4 *)(pppppuVar42 + 0x1f) = uVar31;
            }
            else {
              if (((ulong)ppppppuVar40 & 1) == 0) {
                pppppuVar42 = ppppppuVar33[6];
                uVar31 = 5;
              }
              else if ((ushort *******)ppppppuStack_418 == (ushort *******)0x0) {
                pppppuVar42 = ppppppuVar33[6];
                uVar31 = 6;
              }
              else if (*(int *)((long)ppppppuStack_418 + 0x17c) == 0) {
                pppppuVar42 = ppppppuVar33[6];
                uVar31 = 7;
              }
              else {
                if ((*(uint *)(pppppppuVar19 + 0xc3) >> 0xc & 1) == 0) {
                  pppppuVar42 = ppppppuVar33[6];
                  uVar31 = 4;
                  goto code_r0x00010ae688f8;
                }
                pppppuVar42 = ppppppuVar33[6];
                if ((*(uint *)(pppppppuVar19 + 0xc3) >> 0x18 & 1) == 0) {
                  ppppppuVar40 = (ushort ******)pppppuVar42[0x3d];
                  if (ppppppuVar40 == (ushort ******)ppppppuStack_418[0x31]) {
                    if (ppppppuVar40 != (ushort ******)0x0) {
                      ppppppuVar41 = (ushort ******)ppppppuStack_418[0x30];
                      ppppuVar34 = pppppuVar42[0x3c];
                      do {
                        ppppppuVar40 = (ushort ******)((long)ppppppuVar40 + -1);
                        if (*(char *)ppppuVar34 != *(char *)ppppppuVar41) goto code_r0x00010ae69984;
                        ppppppuVar41 = (ushort ******)((long)ppppppuVar41 + 1);
                        ppppuVar34 = (ushort ****)((long)ppppuVar34 + 1);
                      } while (ppppppuVar40 != (ushort ******)0x0);
                    }
                    ppppppuVar40 = *pppppppuVar18;
                    if ((((*(byte *)(ppppppuStack_418 + 0x36) ^ *(byte *)(ppppppuVar40 + 0x36)) >> 6
                         & 1) == 0) &&
                       (ppppppuVar41 = (ushort ******)ppppppuVar40[0x33],
                       ppppppuVar41 == (ushort ******)ppppppuStack_418[0x33])) {
                      if (ppppppuVar41 != (ushort ******)0x0) {
                        ppppppuVar20 = (ushort ******)ppppppuStack_418[0x32];
                        pppppuVar44 = ppppppuVar40[0x32];
                        do {
                          ppppppuVar41 = (ushort ******)((long)ppppppuVar41 + -1);
                          if (*(char *)pppppuVar44 != *(char *)ppppppuVar20)
                          goto code_r0x00010ae69998;
                          ppppppuVar20 = (ushort ******)((long)ppppppuVar20 + 1);
                          pppppuVar44 = (ushort *****)((long)pppppuVar44 + 1);
                        } while (ppppppuVar41 != (ushort ******)0x0);
                      }
                      if (*(int *)((long)pppppuVar42 + 0xf4) - 0x3dU < 0xffffff87) {
                        uVar31 = 0xc;
                      }
                      else {
                        pppppppuVar23 = (ushort *******)ppppppuStack_418;
                        FUN_10ae69f00(ppppppuStack_418,pppppppuVar19[1]);
                        if (((ulong)pppppppuVar23 & 1) != 0) {
                          if (((ulong)ppppppuStack_438 & 1) == 0) {
                            uVar31 = 8;
                            goto code_r0x00010ae688f8;
                          }
                          *(undefined4 *)(pppppuVar42 + 0x1f) = 2;
                          *(ushort *)((long)pppppuVar42 + 0xd4) =
                               *(ushort *)((long)pppppuVar42 + 0xd4) | 0x1000;
                          pppppuVar42 = ppppppuVar33[6];
                          goto code_r0x00010ae699a0;
                        }
                        uVar31 = 0xd;
                      }
                    }
                    else {
code_r0x00010ae69998:
                      uVar31 = 0xe;
                    }
                  }
                  else {
code_r0x00010ae69984:
                    uVar31 = 9;
                  }
                }
                else {
                  uVar31 = 10;
                }
              }
              *(undefined4 *)(pppppuVar42 + 0x1f) = uVar31;
            }
code_r0x00010ae699a0:
            ppppppuVar41 = *pppppppuVar18;
            ppppuVar34 = pppppuVar42[0x3c];
            ppppuVar5 = pppppuVar42[0x3d];
            ppppppuVar40 = ppppppuVar41 + 0x30;
            func_0x000107c2b684(ppppppuVar40,ppppuVar5);
            uVar12 = (uint)ppppppuVar40 ^ 1;
            if (ppppuVar5 == (ushort ****)0x0) {
              uVar12 = 1;
            }
            if ((uVar12 & 1) == 0) {
              _memcpy(ppppppuVar41[0x30],ppppuVar34,ppppuVar5);
            }
            if ((uint)ppppppuVar40 == 0) {
code_r0x00010ae69b30:
              uVar25 = 0x50;
              goto code_r0x00010ae69b34;
            }
            if (((*(ushort *)((long)ppppppuVar33[6] + 0xd4) >> 0xc & 1) != 0) &&
               (ppppppuVar40 = *pppppppuVar18, (*(byte *)(ppppppuVar40 + 0x36) >> 6 & 1) != 0)) {
              ppppppuVar20 = (ushort ******)ppppppuStack_418[0x34];
              ppppppuVar6 = (ushort ******)ppppppuStack_418[0x35];
              ppppppuVar41 = ppppppuVar40 + 0x34;
              func_0x000107c2b684(ppppppuVar41,ppppppuVar6);
              uVar12 = (uint)ppppppuVar41 ^ 1;
              if (ppppppuVar6 == (ushort ******)0x0) {
                uVar12 = 1;
              }
              if ((uVar12 & 1) == 0) {
                _memcpy(ppppppuVar40[0x34],ppppppuVar20,ppppppuVar6);
              }
              if ((uint)ppppppuVar41 == 0) goto code_r0x00010ae69b30;
            }
            if (((*(byte *)((long)ppppppuVar33 + 0xa4) >> 2 & 1) != 0) &&
               (ppppppuVar33[0x13] != (ushort *****)0x0)) {
              ppppppuVar41 = pppppppuVar19[0xbb];
              pppppuVar42 = pppppppuVar19[1][0x16];
              pppppuVar44 = pppppppuVar19[1][0x17];
              ppppppuVar40 = ppppppuVar41 + 0x37;
              func_0x000107c2b684(ppppppuVar40,pppppuVar44);
              uVar12 = (uint)ppppppuVar40 ^ 1;
              if (pppppuVar44 == (ushort *****)0x0) {
                uVar12 = 1;
              }
              if ((uVar12 & 1) == 0) {
                _memcpy(ppppppuVar41[0x37],pppppuVar42,pppppuVar44);
              }
              if ((uint)ppppppuVar40 == 0) goto code_r0x00010ae69b30;
            }
            if (ppppppuVar33[0xd][0x3c] != (ushort ****)0x0) {
              iVar13 = (int)&pppppuStack_560;
              (*(code *)ppppppuVar33[0xd][0x3c])();
              if (iVar13 == 0) {
                func_0x000107c2b29c(0x10,0,0x85,&UNK_10f6d1513,0x1f9);
                goto code_r0x00010ae69b30;
              }
            }
            ppppppuVar40 = ppppppuVar33;
            func_0x000107c2b89c();
            func_0x000107c2b76c();
            if ((*(ushort *)((long)ppppppuVar33[6] + 0xd4) >> 6 & 1) == 0) {
              uVar27 = (ulong)*(uint *)((long)ppppppuVar40 + 4);
              param_2 = (ushort *******)&UNK_10e52b4d2;
            }
            else {
              param_2 = (ushort *******)(*pppppppuVar18 + 2);
              uVar27 = (ulong)*(int *)((long)*pppppppuVar18 + 0xc);
            }
            pppppppuVar23 = pppppppuVar19;
            func_0x000107c2b8f0(pppppppuVar19,param_2,uVar27);
            if ((int)pppppppuVar23 != 0) {
              if (((uint)uStack_4f0 & 1) == 0) {
                pppppppuVar23 = pppppppuVar19 + 0x33;
                param_2 = (ushort *******)ppppppuStack_4d8;
                func_0x000107c2b894(pppppppuVar23,ppppppuStack_4d8,uStack_4d0);
                if (((ulong)pppppppuVar23 & 1) == 0) goto code_r0x00010ae69820;
              }
              uVar7 = *(ushort *)((long)ppppppuVar33[6] + 0xd4);
              if ((uVar7 >> 0xc & 1) == 0) {
                if ((*(byte *)((long)pppppppuVar19 + 0x619) >> 4 & 1) != 0) {
                  *(ushort *)((long)ppppppuVar33[6] + 0xd4) = uVar7 | 1;
                }
              }
              else {
                pppppppuVar23 = pppppppuVar19;
                FUN_10ae67a20();
                if (((ulong)pppppppuVar23 & 1) == 0) goto code_r0x00010ae69820;
              }
              if (((ulong)ppppppuStack_438 & 1) == 0) {
                (*(code *)(*ppppppuVar33)[4])(ppppppuVar33);
                pppppppuVar23 = pppppppuVar19 + 0x33;
                func_0x00010ae65734();
                if (((ulong)pppppppuVar23 & 1) != 0) {
                  uVar31 = 2;
                  goto code_r0x00010ae69bb0;
                }
              }
              else {
                param_2 = (ushort *******)&pppppuStack_560;
                pppppppuVar23 = pppppppuVar19;
                FUN_10ae69f5c();
                if ((int)pppppppuVar23 != 0) {
                  (*(code *)(*ppppppuVar33)[4])(ppppppuVar33);
                  func_0x000107c2b534(*pppppppuVar1);
                  *pppppppuVar1 = (ushort ******)0x0;
                  pppppppuVar19[0x48] = (ushort ******)0x0;
                  uVar31 = 4;
code_r0x00010ae69bb0:
                  *(undefined4 *)(pppppppuVar19 + 3) = uVar31;
                  puVar26 = (undefined1 *)0x1;
                  goto code_r0x00010ae69824;
                }
              }
            }
          }
          goto code_r0x00010ae69820;
        }
        if (iVar13 != 1) goto code_r0x00010ae6889c;
        *(undefined4 *)(pppppppuVar19 + 3) = 1;
        puVar26 = (undefined1 *)0xb;
      }
code_r0x00010ae69824:
      pppppppuVar22 = (ushort *******)ppppppuStack_418;
      ppppppuStack_418 = (ushort ******)0x0;
      if (pppppppuVar22 != (ushort *******)0x0) {
        func_0x000107c2b874();
      }
      break;
    case 2:
      if ((*(byte *)((long)pppppppuVar19 + 0x61a) >> 4 & 1) == 0) {
        pppppppuVar17 = (ushort *******)*pppppppuVar19;
        puStack_558 = (ushort *)0x0;
        pppppuStack_560 = (ushort *****)0x0;
        ppppppuStack_548 = (ushort ******)0x0;
        uStack_550 = 0;
        param_2 = (ushort *******)&pppppuStack_560;
        pppppppuVar23 = pppppppuVar17;
        (*(code *)(*pppppppuVar17)[0xb])(pppppppuVar17,param_2,&uStack_4f0,2);
        if ((int)pppppppuVar23 == 0) {
code_r0x00010ae68f2c:
          puVar26 = (undefined1 *)0x0;
        }
        else {
          iVar13 = (int)&uStack_4f0;
          param_2 = (ushort *******)0x303;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          puVar21 = &uStack_4f0;
          param_2 = (ushort *******)&UNK_10e52b348;
          func_0x000107c2b21c(puVar21,&UNK_10e52b348,0x20);
          if ((int)puVar21 == 0) goto code_r0x00010ae68f2c;
          puVar21 = &uStack_4f0;
          param_2 = &ppppppuStack_438;
          func_0x000107c34f3c(puVar21,param_2,1);
          if ((int)puVar21 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar23 = &ppppppuStack_438;
          param_2 = (ushort *******)((long)pppppppuVar19 + 0x623);
          func_0x000107c2b21c(pppppppuVar23,param_2,*(char *)((long)pppppppuVar19 + 0x643));
          if ((int)pppppppuVar23 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)(ulong)*(ushort *)(pppppppuVar19[0xbf] + 2);
          iVar13 = (int)&uStack_4f0;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          iVar13 = (int)&uStack_4f0;
          param_2 = (ushort *******)0x0;
          func_0x000107c2b218();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)&uStack_4a8;
          pppppppuVar23 = pppppppuVar19;
          FUN_10ae5987c();
          if ((int)pppppppuVar23 == 0) goto code_r0x00010ae68f2c;
          puVar21 = &uStack_4f0;
          param_2 = (ushort *******)apppppuStack_408;
          func_0x000107c34f3c(puVar21,param_2,2);
          if ((int)puVar21 == 0) goto code_r0x00010ae68f2c;
          iVar13 = (int)apppppuStack_408;
          param_2 = (ushort *******)0x2b;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          iVar13 = (int)apppppuStack_408;
          param_2 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)(ulong)*(ushort *)(pppppppuVar17 + 2);
          iVar13 = (int)apppppuStack_408;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          iVar13 = (int)apppppuStack_408;
          param_2 = (ushort *******)0x33;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          iVar13 = (int)apppppuStack_408;
          param_2 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)(ulong)CONCAT11(uStack_4a8._1_1_,(undefined1)uStack_4a8);
          iVar13 = (int)apppppuStack_408;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          if (((ulong)pppppppuVar19[0xc3] & 1) != 0) {
            iVar13 = (int)apppppuStack_408;
            param_2 = (ushort *******)0xfe0d;
            func_0x000107c2b228();
            if (iVar13 != 0) {
              iVar13 = (int)apppppuStack_408;
              param_2 = (ushort *******)0x8;
              func_0x000107c2b228();
              if (iVar13 != 0) {
                ppppppuVar33 = apppppuStack_408;
                param_2 = (ushort *******)&pppppuStack_468;
                func_0x000107c2b220(ppppppuVar33,param_2,8);
                if ((int)ppppppuVar33 != 0) {
                  *pppppuStack_468 = (ushort ****)0x0;
                  goto code_r0x00010ae68738;
                }
              }
            }
            goto code_r0x00010ae68f2c;
          }
code_r0x00010ae68738:
          pppppuStack_468 = (ushort *****)0x0;
          uStack_460 = 0;
          param_2 = (ushort *******)&pppppuStack_560;
          pppppppuVar22 = pppppppuVar17;
          (*(code *)(*pppppppuVar17)[0xc])(pppppppuVar17,param_2,&pppppuStack_468);
          if (((ulong)pppppppuVar22 & 1) == 0) {
code_r0x00010ae69bbc:
            puVar26 = (undefined1 *)0x0;
          }
          else {
            if (((ulong)pppppppuVar19[0xc3] & 1) != 0) {
              if (uStack_460 < 8) goto code_r0x00010ae69e28;
              param_2 = (ushort *******)((uStack_460 - 8) + (long)pppppuStack_468);
              pppppppuVar23 = pppppppuVar19;
              FUN_10ae68138(pppppppuVar19,param_2,8,pppppppuVar17[6] + 6,0x20,pppppppuVar19 + 0x33,1
                            ,param_8,pppppuStack_468,uStack_460,uStack_460 - 8);
              if (((ulong)pppppppuVar23 & 1) == 0) goto code_r0x00010ae69bbc;
            }
            pppppuStack_488 = pppppuStack_468;
            uStack_480 = uStack_460;
            pppppuStack_468 = (ushort *****)0x0;
            uStack_460 = 0;
            param_2 = (ushort *******)&pppppuStack_488;
            pppppppuVar23 = pppppppuVar17;
            (*(code *)(*pppppppuVar17)[0xd])();
            if ((int)pppppppuVar23 == 0) {
              func_0x000107c2b534(pppppuStack_488);
              puVar26 = (undefined1 *)0x0;
              pppppuStack_488 = (ushort *****)0x0;
              uStack_480 = 0;
            }
            else {
              pppppppuVar23 = pppppppuVar17;
              (*(code *)(*pppppppuVar17)[0xe])();
              func_0x000107c2b534(pppppuStack_488);
              pppppuStack_488 = (ushort *****)0x0;
              uStack_480 = 0;
              if (((ulong)pppppppuVar23 & 1) == 0) goto code_r0x00010ae69bbc;
              *(ushort *)((long)pppppppuVar17[6] + 0xd4) =
                   *(ushort *)((long)pppppppuVar17[6] + 0xd4) | 0x8000;
              *(undefined4 *)(pppppppuVar19 + 3) = 3;
              puVar26 = (undefined1 *)0x4;
            }
          }
          func_0x000107c2b534(pppppuStack_468);
        }
        pppppppuVar22 = (ushort *******)&pppppuStack_560;
        func_0x000107c2b204();
      }
      else {
code_r0x00010ae689a0:
        puVar26 = (undefined1 *)0x11;
      }
      break;
    case 3:
      pppppppuVar22 = (ushort *******)*pppppppuVar19;
      param_2 = (ushort *******)&uStack_4f0;
      pppppppuVar23 = pppppppuVar22;
      (*(code *)(*pppppppuVar22)[3])();
      if ((int)pppppppuVar23 != 0) {
        pppppppuVar23 = (ushort *******)&uStack_4f0;
        pppppppuVar17 = pppppppuVar22;
        func_0x000107c2b6f8(pppppppuVar22,pppppppuVar23,1);
        if ((int)pppppppuVar17 != 0) {
          ppppppuStack_438 = ppppppuStack_4e8;
          ppppppuStack_430 = ppppppuStack_4e0;
          pppppppuVar23 = pppppppuVar22;
          FUN_10ae5965c(pppppppuVar22,&ppppppuStack_438,&pppppuStack_560);
          uVar12 = 0;
          if ((ushort *******)ppppppuStack_430 == (ushort *******)0x0) {
            uVar12 = (uint)pppppppuVar23;
          }
          if ((uVar12 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x83,&UNK_10f6d1513,0x26c);
            pppppppuVar23 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar22,2,0x32);
            pppppppuVar17 = pppppppuVar22;
          }
          else {
            ppppppuVar33 = pppppppuVar22[6];
            if (*(int *)(ppppppuVar33 + 0x1a) == 1) {
              ppppppuVar33 = &pppppuStack_560;
              FUN_10ae59824(ppppppuVar33,&ppppppuStack_438,0xfe0d);
              if (((ulong)ppppppuVar33 & 1) == 0) {
                func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x277);
                pppppppuVar23 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar22,2,0x6d);
                pppppppuVar17 = pppppppuVar22;
              }
              else {
                pppppppuVar23 = (ushort *******)ppppppuStack_438;
                if ((ushort *******)ppppppuStack_430 == (ushort *******)0x0) {
                  uVar30 = 0x32;
                  uVar29 = 0x286;
                }
                else {
                  uVar30 = 0x32;
                  uVar29 = 0x286;
                  if (((*(char *)ppppppuStack_438 == '\0') &&
                      ((ushort *******)0x2 < ppppppuStack_430)) &&
                     ((pppppppuVar23 = (ushort *******)((long)ppppppuStack_438 + 3),
                      (char *)0x1 < (char *)((long)ppppppuStack_430 + -3) &&
                      (((ushort *******)ppppppuStack_430 != (ushort *******)0x5 &&
                       ((char *)0x2 < (char *)((long)ppppppuStack_430 + -5))))))) {
                    pppppppuVar17 =
                         (ushort *******)
                         (ulong)((uint)(*(ushort *)((long)ppppppuStack_438 + 6) >> 8) |
                                (*(ushort *)((long)ppppppuStack_438 + 6) & 0xff00ff) << 8);
                    uVar27 = (long)(ppppppuStack_430 + -1) - (long)pppppppuVar17;
                    if ((pppppppuVar17 <= ppppppuStack_430 + -1) &&
                       ((1 < uVar27 &&
                        (pcVar2 = (char *)((long)ppppppuStack_438 + (long)pppppppuVar17),
                        uVar7 = *(ushort *)(pcVar2 + 8),
                        uVar27 - 2 == (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8))))) {
                      if (((ushort)(*(ushort *)((long)ppppppuStack_438 + 1) >> 8 |
                                   *(ushort *)((long)ppppppuStack_438 + 1) << 8) ==
                           *(ushort *)pppppppuVar19[0x59]) &&
                         ((ushort)(*(ushort *)((long)ppppppuStack_438 + 3) >> 8 |
                                  *(ushort *)((long)ppppppuStack_438 + 3) << 8) ==
                          *(ushort *)pppppppuVar19[0x58])) {
                        uVar30 = 0x2f;
                        uVar29 = 0x28f;
                        if ((*(char *)((long)ppppppuStack_438 + 5) ==
                             *(char *)((long)pppppppuVar19 + 0x622)) &&
                           (pppppppuVar17 == (ushort *******)0x0)) {
                          apppppuStack_408[0] =
                               (ushort *****)CONCAT71(apppppuStack_408[0]._1_7_,0x32);
                          pppppppuVar17 = pppppppuVar19;
                          ppppppuStack_438 = (ushort ******)pppppppuVar23;
                          FUN_10ae5875c(pppppppuVar19,apppppuStack_408,&pppppuStack_468,pppppppuVar1
                                        ,&pppppuStack_560,pcVar2 + 10);
                          if (((ulong)pppppppuVar17 & 1) != 0) {
                            pppppppuVar23 = pppppppuVar19;
                            FUN_10ae5cbc0(pppppppuVar19,&uStack_4f0,&pppppuStack_560);
                            if (((ulong)pppppppuVar23 & 1) == 0) {
                              uVar29 = 0x44;
                              uVar30 = 0x2a2;
                              goto code_r0x00010ae693e4;
                            }
                            ppppppuVar33 = pppppppuVar22[6];
                            goto code_r0x00010ae68c24;
                          }
                          func_0x000107c2b29c(0x10,0,0x8a,&UNK_10f6d1513,0x29b);
                          pppppppuVar23 = (ushort *******)0x2;
                          FUN_10ae60390(pppppppuVar22,2,(ulong)apppppuStack_408[0] & 0xff);
                          pppppppuVar17 = pppppppuVar22;
                          goto LAB_10ae693e8;
                        }
                      }
                      else {
                        uVar30 = 0x2f;
                        uVar29 = 0x28f;
                      }
                    }
                  }
                }
                ppppppuStack_438 = (ushort ******)pppppppuVar23;
                func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,uVar29);
                pppppppuVar23 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar22,2,uVar30);
                pppppppuVar17 = pppppppuVar22;
              }
            }
            else {
code_r0x00010ae68c24:
              if ((*(ushort *)((long)ppppppuVar33 + 0xd4) >> 6 & 1) == 0) {
code_r0x00010ae68c2c:
                param_2 = (ushort *******)&pppppuStack_560;
                pppppppuVar17 = pppppppuVar19;
                FUN_10ae69f5c();
                pppppppuVar23 = param_2;
                if ((int)pppppppuVar17 != 0) {
                  if (((uint)uStack_4f0 & 1) == 0) {
                    pppppppuVar17 = pppppppuVar19 + 0x33;
                    param_2 = (ushort *******)ppppppuStack_4d8;
                    func_0x000107c2b894(pppppppuVar17,ppppppuStack_4d8,uStack_4d0);
                    pppppppuVar23 = param_2;
                    if ((int)pppppppuVar17 == 0) goto LAB_10ae693e8;
                  }
                  pppppppuVar23 = pppppppuVar22;
                  (*(code *)(*pppppppuVar22)[5])();
                  if ((int)pppppppuVar23 != 0) {
                    FUN_10ae60390(pppppppuVar22,2,10);
                    uVar29 = 0xff;
                    uVar30 = 0x2d5;
                    goto code_r0x00010ae693e4;
                  }
                  (*(code *)(*pppppppuVar22)[4])(pppppppuVar22);
                  pppppppuVar22 = (ushort *******)pppppppuVar19[0x47];
                  func_0x000107c2b534();
                  *pppppppuVar1 = (ushort ******)0x0;
                  pppppppuVar19[0x48] = (ushort ******)0x0;
                  puVar26 = (undefined1 *)0x1;
                  *(undefined4 *)(pppppppuVar19 + 3) = 4;
                  break;
                }
              }
              else {
                ppppppuVar33 = &pppppuStack_560;
                FUN_10ae59824(ppppppuVar33,&ppppppuStack_438,0x29);
                if (((ulong)ppppppuVar33 & 1) == 0) {
                  func_0x000107c2b29c(0x10,0,0x12f,&UNK_10f6d1513,0x2b2);
                  pppppppuVar23 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar22,2,0x2f);
                  pppppppuVar17 = pppppppuVar22;
                }
                else {
                  uStack_4a8._0_1_ = 0x32;
                  pppppppuVar23 = pppppppuVar19;
                  func_0x00010ae59cd0(pppppppuVar19,apppppuStack_408,&pppppuStack_468,
                                      &pppppuStack_488,&uStack_4a8,&pppppuStack_560,
                                      &ppppppuStack_438);
                  uVar25 = (undefined1)uStack_4a8;
                  if (((ulong)pppppppuVar23 & 1) != 0) {
                    pppppppuVar23 = pppppppuVar19;
                    FUN_10ae68018(pppppppuVar19,pppppppuVar19[0xbb],&uStack_4f0,&pppppuStack_468);
                    if ((int)pppppppuVar23 != 0) goto code_r0x00010ae68c2c;
                    uVar25 = 0x33;
                  }
                  pppppppuVar23 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar22,2,uVar25);
                  pppppppuVar17 = pppppppuVar22;
                }
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae6931c:
      pppppppuVar22 = pppppppuVar23;
      puVar26 = (undefined1 *)0x3;
      break;
    case 4:
      ppppppuVar33 = *pppppppuVar19;
      pppppuVar42 = ppppppuVar33[6];
      pppppppuVar22 = (ushort *******)pppppppuVar19[0xc2];
      if (pppppppuVar22 == (ushort *******)0x0) {
        func_0x000107c2b3c4(pppppuVar42 + 2,0x20,&UNK_10e525a20);
      }
      else if (((*(byte *)((long)pppppppuVar19 + 0x61a) >> 4 & 1) == 0) &&
              (pppppppuVar22[1] == (ushort ******)0x20)) {
        ppppppuVar40 = *pppppppuVar22;
        pppppuVar44 = *ppppppuVar40;
        pppppuVar46 = ppppppuVar40[3];
        pppppuVar45 = ppppppuVar40[2];
        pppppuVar42[3] = (ushort ****)ppppppuVar40[1];
        pppppuVar42[2] = (ushort ****)pppppuVar44;
        pppppuVar42[5] = (ushort ****)pppppuVar46;
        pppppuVar42[4] = (ushort ****)pppppuVar45;
      }
      else {
        func_0x000107c2b3c4(pppppuVar42 + 2,0x20,&UNK_10e525a20);
        if ((*(byte *)((long)pppppppuVar19 + 0x61a) >> 4 & 1) != 0) {
          pppppppuVar23 = (ushort *******)0x20;
          pppppppuVar17 = pppppppuVar22;
          func_0x000107c2b684();
          if ((int)pppppppuVar17 == 0) goto LAB_10ae693e8;
          ppppppuVar40 = *pppppppuVar22;
          pppppuVar44 = (ushort *****)pppppuVar42[2];
          pppppuVar46 = (ushort *****)pppppuVar42[5];
          pppppuVar45 = (ushort *****)pppppuVar42[4];
          ppppppuVar40[1] = (ushort *****)pppppuVar42[3];
          *ppppppuVar40 = pppppuVar44;
          ppppppuVar40[3] = pppppuVar46;
          ppppppuVar40[2] = pppppuVar45;
        }
      }
      ppppppuStack_418 = (ushort ******)0x0;
      uStack_410 = 0;
      puStack_558 = (ushort *)0x0;
      pppppuStack_560 = (ushort *****)0x0;
      ppppppuStack_548 = (ushort ******)0x0;
      uStack_550 = 0;
      param_2 = (ushort *******)&pppppuStack_560;
      ppppppuVar40 = ppppppuVar33;
      (*(code *)(*ppppppuVar33)[0xb])(ppppppuVar33,param_2,&uStack_4f0,2);
      if ((int)ppppppuVar40 == 0) {
code_r0x00010ae69d9c:
        puVar26 = (undefined1 *)0x0;
      }
      else {
        iVar13 = (int)&uStack_4f0;
        param_2 = (ushort *******)0x303;
        func_0x000107c2b228();
        if (iVar13 == 0) goto code_r0x00010ae69d9c;
        puVar21 = &uStack_4f0;
        param_2 = (ushort *******)(ppppppuVar33[6] + 2);
        func_0x000107c2b21c(puVar21,param_2,0x20);
        if ((int)puVar21 == 0) goto code_r0x00010ae69d9c;
        puVar21 = &uStack_4f0;
        param_2 = (ushort *******)apppppuStack_408;
        func_0x000107c34f3c(puVar21,param_2,1);
        if ((int)puVar21 == 0) goto code_r0x00010ae69d9c;
        ppppppuVar40 = apppppuStack_408;
        param_2 = (ushort *******)((long)pppppppuVar19 + 0x623);
        func_0x000107c2b21c(ppppppuVar40,param_2,*(char *)((long)pppppppuVar19 + 0x643));
        if ((int)ppppppuVar40 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)(ulong)*(ushort *)(pppppppuVar19[0xbf] + 2);
        iVar13 = (int)&uStack_4f0;
        func_0x000107c2b228();
        if (iVar13 == 0) goto code_r0x00010ae69d9c;
        iVar13 = (int)&uStack_4f0;
        param_2 = (ushort *******)0x0;
        func_0x000107c2b218();
        if (iVar13 == 0) goto code_r0x00010ae69d9c;
        puVar21 = &uStack_4f0;
        param_2 = &ppppppuStack_438;
        func_0x000107c34f3c(puVar21,param_2,2);
        if ((int)puVar21 == 0) goto code_r0x00010ae69d9c;
        param_2 = &ppppppuStack_438;
        pppppppuVar23 = pppppppuVar19;
        func_0x00010ae59ec4();
        if ((int)pppppppuVar23 == 0) goto code_r0x00010ae69d9c;
        param_2 = &ppppppuStack_438;
        pppppppuVar23 = pppppppuVar19;
        FUN_10ae5a0c0();
        if ((int)pppppppuVar23 == 0) goto code_r0x00010ae69d9c;
        param_2 = &ppppppuStack_438;
        pppppppuVar23 = pppppppuVar19;
        FUN_10ae6a27c();
        if ((int)pppppppuVar23 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&pppppuStack_560;
        ppppppuVar40 = ppppppuVar33;
        (*(code *)(*ppppppuVar33)[0xc])(ppppppuVar33,param_2,&ppppppuStack_418);
        if (((ulong)ppppppuVar40 & 1) == 0) goto code_r0x00010ae69d9c;
        if (((ulong)pppppppuVar19[0xc3] & 1) != 0) {
          uVar27 = 0x1e;
          if (*(char *)*ppppppuVar33 != '\0') {
            uVar27 = 0x26;
          }
          param_2 = (ushort *******)(pppppuVar42 + 5);
          pppppppuVar22 = pppppppuVar19;
          FUN_10ae68138(pppppppuVar19,param_2,8,ppppppuVar33[6] + 6,0x20,pppppppuVar19 + 0x33,0,
                        param_8,ppppppuStack_418,uStack_410,uVar27);
          if (((ulong)pppppppuVar22 & 1) == 0) goto code_r0x00010ae69d9c;
          if (uStack_410 < uVar27) goto code_r0x00010ae69e28;
          *(ushort *****)((long)ppppppuStack_418 + uVar27) = pppppuVar42[5];
        }
        ppppppuStack_448 = ppppppuStack_418;
        uStack_440 = uStack_410;
        ppppppuStack_418 = (ushort ******)0x0;
        uStack_410 = 0;
        param_2 = &ppppppuStack_448;
        ppppppuVar40 = ppppppuVar33;
        (*(code *)(*ppppppuVar33)[0xd])();
        func_0x000107c2b534(ppppppuStack_448);
        ppppppuStack_448 = (ushort ******)0x0;
        uStack_440 = 0;
        if (((ulong)ppppppuVar40 & 1) == 0) goto code_r0x00010ae69d9c;
        func_0x000107c2b534(pppppppuVar19[0x4b]);
        pppppppuVar19[0x4b] = (ushort ******)0x0;
        pppppppuVar19[0x4c] = (ushort ******)0x0;
        if (((-1 < *(short *)((long)ppppppuVar33[6] + 0xd4)) &&
            (ppppppuVar40 = ppppppuVar33, (*(code *)(*ppppppuVar33)[0xe])(), (int)ppppppuVar40 == 0)
            ) || (pppppppuVar23 = pppppppuVar19, func_0x000107c2b904(), (int)pppppppuVar23 == 0))
        goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)0x2;
        ppppppuVar40 = ppppppuVar33;
        func_0x000107c2b8fc(ppppppuVar33,2,1,pppppppuVar19[0xbb],pppppppuVar19 + 0x17,
                            pppppppuVar19[4]);
        if (((ulong)ppppppuVar40 & 1) == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&pppppuStack_560;
        ppppppuVar40 = ppppppuVar33;
        (*(code *)(*ppppppuVar33)[0xb])(ppppppuVar33,param_2,&uStack_4f0,8);
        if ((int)ppppppuVar40 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&uStack_4f0;
        pppppppuVar23 = pppppppuVar19;
        func_0x00010ae5a300();
        if ((int)pppppppuVar23 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&pppppuStack_560;
        ppppppuVar40 = ppppppuVar33;
        func_0x000107c2b6fc();
        if ((int)ppppppuVar40 == 0) goto code_r0x00010ae69d9c;
        uVar12 = *(uint *)(pppppppuVar19 + 0xc3);
        if ((*(ushort *)((long)ppppppuVar33[6] + 0xd4) >> 6 & 1) == 0) {
          uVar4 = uVar12 & 0xffffffdf;
          uVar8 = uVar12 & 0x1000000;
          uVar12 = uVar12 & 0xffffffc0 |
                   uVar12 & 0x1f | (*(byte *)(pppppppuVar19[1] + 0x1d) & 1) << 5;
          *(uint *)(pppppppuVar19 + 0xc3) = uVar12;
          if (uVar8 != 0 && ((ulong)pppppppuVar19[1][0x1d] & 4) != 0) {
            uVar12 = uVar4;
          }
          *(uint *)(pppppppuVar19 + 0xc3) = uVar12;
        }
        if ((uVar12 >> 5 & 1) != 0) {
          param_2 = (ushort *******)&pppppuStack_560;
          ppppppuVar40 = ppppppuVar33;
          (*(code *)(*ppppppuVar33)[0xb])(ppppppuVar33,param_2,&uStack_4f0,0xd);
          if ((int)ppppppuVar40 != 0) {
            iVar13 = (int)&uStack_4f0;
            param_2 = (ushort *******)0x0;
            func_0x000107c2b218();
            if (iVar13 != 0) {
              puVar21 = &uStack_4f0;
              param_2 = (ushort *******)&pppppuStack_468;
              func_0x000107c34f3c(puVar21,param_2,2);
              if ((int)puVar21 != 0) {
                iVar13 = (int)&pppppuStack_468;
                param_2 = (ushort *******)0xd;
                func_0x000107c2b228();
                if (iVar13 != 0) {
                  ppppppuVar40 = &pppppuStack_468;
                  param_2 = (ushort *******)&pppppuStack_488;
                  func_0x000107c34f3c(ppppppuVar40,param_2,2);
                  if ((int)ppppppuVar40 != 0) {
                    ppppppuVar40 = &pppppuStack_488;
                    param_2 = (ushort *******)&uStack_4a8;
                    func_0x000107c34f3c(ppppppuVar40,param_2,2);
                    if ((int)ppppppuVar40 != 0) {
                      param_2 = (ushort *******)&uStack_4a8;
                      pppppppuVar23 = pppppppuVar19;
                      func_0x000107c2b6b0();
                      if (((ulong)pppppppuVar23 & 1) != 0) {
                        pppppuVar42 = pppppppuVar19[1][10];
                        if (((pppppuVar42 == (ushort *****)0x0) &&
                            (pppppuVar42 = (ushort *****)(*pppppppuVar19[1])[0xd][0x31],
                            pppppuVar42 == (ushort *****)0x0)) || (*pppppuVar42 == (ushort ****)0x0)
                           ) {
code_r0x00010ae69d54:
                          param_2 = (ushort *******)&pppppuStack_560;
                          ppppppuVar40 = ppppppuVar33;
                          func_0x000107c2b6fc();
                          if (((ulong)ppppppuVar40 & 1) != 0) goto code_r0x00010ae69238;
                        }
                        else {
                          iVar13 = (int)&pppppuStack_468;
                          param_2 = (ushort *******)0x2f;
                          func_0x000107c2b228();
                          if (iVar13 != 0) {
                            ppppppuVar40 = &pppppuStack_468;
                            param_2 = appppppuStack_4c8;
                            func_0x000107c34f3c(ppppppuVar40,param_2,2);
                            if ((int)ppppppuVar40 != 0) {
                              param_2 = appppppuStack_4c8;
                              pppppppuVar23 = pppppppuVar19;
                              FUN_10ae626b8();
                              if ((int)pppppppuVar23 != 0) {
                                iVar13 = (int)&pppppuStack_468;
                                func_0x000107c2b20c();
                                if (iVar13 != 0) goto code_r0x00010ae69d54;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto code_r0x00010ae69d9c;
        }
code_r0x00010ae69238:
        if ((*(ushort *)((long)ppppppuVar33[6] + 0xd4) >> 6 & 1) == 0) {
          pppppppuVar23 = pppppppuVar19;
          FUN_10ae61f18();
          if (((ulong)pppppppuVar23 & 1) == 0) {
            param_2 = (ushort *******)0x0;
            func_0x000107c2b29c(0x10,0,0xae,&UNK_10f6d1513,0x35d);
          }
          else {
            pppppppuVar23 = pppppppuVar19;
            FUN_10ae66d90();
            if ((int)pppppppuVar23 != 0) {
              uVar31 = 5;
              goto code_r0x00010ae69d74;
            }
          }
          goto code_r0x00010ae69d9c;
        }
        uVar31 = 6;
code_r0x00010ae69d74:
        *(undefined4 *)(pppppppuVar19 + 3) = uVar31;
        puVar26 = (undefined1 *)0x1;
      }
      func_0x000107c2b204(&pppppuStack_560);
      pppppppuVar22 = (ushort *******)ppppppuStack_418;
      func_0x000107c2b534();
      break;
    case 5:
      pppppppuVar22 = pppppppuVar19;
      FUN_10ae673c0();
      if ((int)pppppppuVar22 == 0) {
        uVar31 = 6;
      }
      else {
        pppppppuVar17 = pppppppuVar22;
        pppppppuVar23 = param_2;
        if ((int)pppppppuVar22 != 1) goto LAB_10ae693e8;
        puVar26 = (undefined1 *)0x9;
        uVar31 = 5;
      }
      goto code_r0x00010ae69444;
    case 6:
      if ((*(uint *)(pppppppuVar19 + 0xc3) >> 0x14 & 1) != 0) goto code_r0x00010ae689a0;
      pppppppuVar22 = (ushort *******)*pppppppuVar19;
      *(uint *)(pppppppuVar19 + 0xc3) = *(uint *)(pppppppuVar19 + 0xc3) | 0x800000;
      pppppppuVar17 = pppppppuVar19;
      func_0x000107c2b8e4();
      pppppppuVar23 = param_2;
      if ((int)pppppppuVar17 != 0) {
        pppppppuVar23 = (ushort *******)&UNK_10e52b4d2;
        pppppppuVar17 = pppppppuVar19;
        func_0x000107c2b8f8(pppppppuVar19,&UNK_10e52b4d2,
                            *(undefined4 *)((long)pppppppuVar19[0x34] + 4));
        if (((int)pppppppuVar17 != 0) &&
           (pppppppuVar17 = pppppppuVar19, func_0x000107c2b908(), (int)pppppppuVar17 != 0)) {
          param_2 = (ushort *******)0x3;
          func_0x000107c2b8fc(pppppppuVar22,3,1,pppppppuVar19[0xbb],pppppppuVar19 + 0x23,
                              pppppppuVar19[4]);
          pppppppuVar17 = pppppppuVar22;
          pppppppuVar23 = param_2;
          if ((int)pppppppuVar22 != 0) {
            uVar12 = 7;
            *(undefined4 *)(pppppppuVar19 + 3) = 7;
            if ((*(byte *)((long)pppppppuVar19 + 0x61a) & 8) == 0) {
              uVar12 = 1;
            }
            puVar26 = (undefined1 *)(ulong)uVar12;
            break;
          }
        }
      }
      goto LAB_10ae693e8;
    case 7:
      if ((*(ushort *)((long)(*pppppppuVar19)[6] + 0xd4) >> 0xc & 1) != 0) {
        if ((*pppppppuVar19)[0x13] == (ushort *****)0x0) {
          pppppppuVar23 = pppppppuVar19 + 0x33;
          func_0x000107c2b894(pppppppuVar23,&UNK_10e52b512,4);
          if (((ulong)pppppppuVar23 & 1) != 0) goto code_r0x00010ae68e30;
          uVar29 = 0x44;
          uVar30 = 0x3a1;
code_r0x00010ae693e4:
          pppppppuVar23 = (ushort *******)0x0;
          pppppppuVar17 = (ushort *******)0x10;
          func_0x000107c2b29c(0x10,0,uVar29,&UNK_10f6d1513,uVar30);
        }
        else {
code_r0x00010ae68e30:
          pppppppuVar23 = pppppppuVar19 + 0x29;
          pppppppuVar17 = pppppppuVar19;
          func_0x000107c2b914(pppppppuVar19,pppppppuVar23,&pppppuStack_560,0);
          if ((int)pppppppuVar17 != 0) {
            if ((ushort ******)pppppuStack_560 != pppppppuVar19[4]) {
              uVar29 = 0x44;
              uVar30 = 0x3ac;
              goto code_r0x00010ae693e4;
            }
            uStack_4f0._0_4_ = CONCAT13((char)pppppuStack_560,0x14);
            pppppppuVar17 = pppppppuVar19 + 0x33;
            pppppppuVar23 = (ushort *******)&uStack_4f0;
            func_0x000107c2b894(pppppppuVar17,pppppppuVar23,4);
            if ((int)pppppppuVar17 != 0) {
              pppppppuVar17 = pppppppuVar19 + 0x33;
              pppppppuVar23 = pppppppuVar19 + 0x29;
              func_0x000107c2b894(pppppppuVar17,pppppppuVar23,pppppppuVar19[4]);
              if (((int)pppppppuVar17 != 0) &&
                 (pppppppuVar17 = pppppppuVar19, func_0x000107c2b910(), (int)pppppppuVar17 != 0)) {
                pppppppuVar23 = &ppppppuStack_438;
                pppppppuVar17 = pppppppuVar19;
                FUN_10ae6a2ec();
                pppppppuVar22 = pppppppuVar17;
                param_2 = pppppppuVar23;
                if (((ulong)pppppppuVar17 & 1) != 0) goto code_r0x00010ae685b8;
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae685b8:
      *(undefined4 *)(pppppppuVar19 + 3) = 8;
      puVar26 = (undefined1 *)0x4;
      break;
    case 8:
      pppppppuVar43 = (ushort *******)*pppppppuVar19;
      if ((*(ushort *)((long)pppppppuVar43[6] + 0xd4) >> 0xc & 1) != 0) {
        param_2 = (ushort *******)0x1;
        pppppppuVar22 = pppppppuVar43;
        func_0x000107c2b8fc(pppppppuVar43,1,0,pppppppuVar19[0xbb],pppppppuVar19 + 0xb,
                            pppppppuVar19[4]);
        pppppppuVar17 = pppppppuVar22;
        pppppppuVar23 = param_2;
        if ((int)pppppppuVar22 == 0) goto LAB_10ae693e8;
        *(uint *)(pppppppuVar19 + 0xc3) = *(uint *)(pppppppuVar19 + 0xc3) | 0x6800;
      }
      if (pppppppuVar43[0x13] == (ushort ******)0x0) {
        uVar12 = 0xe;
      }
      else {
        param_2 = (ushort *******)0x2;
        pppppppuVar22 = pppppppuVar43;
        func_0x000107c2b8fc(pppppppuVar43,2,0,pppppppuVar19[0xbb],pppppppuVar19 + 0x11,
                            pppppppuVar19[4]);
        pppppppuVar17 = pppppppuVar22;
        pppppppuVar23 = param_2;
        if ((int)pppppppuVar22 == 0) goto LAB_10ae693e8;
        uVar12 = 0xc;
      }
      *(undefined4 *)(pppppppuVar19 + 3) = 9;
      if ((*(ushort *)((long)pppppppuVar43[6] + 0xd4) & 0x1000) == 0) {
        uVar12 = 1;
      }
      puVar26 = (undefined1 *)(ulong)uVar12;
      break;
    case 9:
      pppppppuVar43 = (ushort *******)*pppppppuVar19;
      if (pppppppuVar43[0x13] == (ushort ******)0x0) {
        if ((*(ushort *)((long)pppppppuVar43[6] + 0xd4) >> 0xc & 1) != 0) {
          param_2 = (ushort *******)&pppppuStack_560;
          pppppppuVar23 = pppppppuVar43;
          (*(code *)(*pppppppuVar43)[3])();
          if ((int)pppppppuVar23 == 0) goto code_r0x00010ae6931c;
          pppppppuVar23 = (ushort *******)&pppppuStack_560;
          pppppppuVar17 = pppppppuVar43;
          func_0x000107c2b6f8(pppppppuVar43,pppppppuVar23,5);
          if ((int)pppppppuVar17 == 0) goto LAB_10ae693e8;
          if (uStack_550 != 0) {
            FUN_10ae60390(pppppppuVar43,2,0x32);
            uVar29 = 0x89;
            uVar30 = 0x3f5;
            goto code_r0x00010ae693e4;
          }
          (*(code *)(*pppppppuVar43)[4])(pppppppuVar43);
        }
        pppppppuVar23 = (ushort *******)0x2;
        func_0x000107c2b8fc(pppppppuVar43,2,0,pppppppuVar19[0xbb],pppppppuVar19 + 0x11,
                            pppppppuVar19[4]);
        pppppppuVar17 = pppppppuVar43;
        pppppppuVar22 = pppppppuVar43;
        param_2 = pppppppuVar23;
        if ((int)pppppppuVar43 == 0) goto LAB_10ae693e8;
      }
      uVar31 = 10;
code_r0x00010ae69444:
      *(undefined4 *)(pppppppuVar19 + 3) = uVar31;
      break;
    case 10:
      if (((*(byte *)(pppppppuVar19[0xbb] + 0x36) >> 6 & 1) != 0) &&
         (pppppppuVar43 = (ushort *******)*pppppppuVar19,
         (*(ushort *)((long)pppppppuVar43[6] + 0xd4) >> 0xc & 1) == 0)) {
        param_2 = (ushort *******)&pppppuStack_560;
        pppppppuVar23 = pppppppuVar43;
        (*(code *)(*pppppppuVar43)[3])();
        if ((int)pppppppuVar23 == 0) goto code_r0x00010ae6931c;
        pppppppuVar23 = (ushort *******)&pppppuStack_560;
        pppppppuVar17 = pppppppuVar43;
        func_0x000107c2b6f8(pppppppuVar43,pppppppuVar23,8);
        if ((int)pppppppuVar17 == 0) goto LAB_10ae693e8;
        if (1 < uStack_550) {
          pppppppuVar23 =
               (ushort *******)(ulong)((uint)(*puStack_558 >> 8) | (*puStack_558 & 0xff00ff) << 8);
          if ((pppppppuVar23 <= (ushort *******)(uStack_550 - 2)) &&
             (ppppppuStack_438 = (ushort ******)(puStack_558 + 1),
             ppppppuStack_430 = (ushort ******)pppppppuVar23,
             (ushort *******)(uStack_550 - 2) == pppppppuVar23)) {
            uStack_4f0._0_4_ = 0x14469;
            ppppppuStack_4e8 = (ushort ******)0x0;
            ppppppuStack_4e0 = (ushort ******)0x0;
            pppppuStack_468 = (ushort *****)CONCAT71(pppppuStack_468._1_7_,0x32);
            pppppppuVar17 = &ppppppuStack_438;
            apppppuStack_408[0] = (ushort *****)&uStack_4f0;
            func_0x000107c2b700(pppppppuVar17,&pppppuStack_468,apppppuStack_408,1,0);
            ppppppuVar33 = ppppppuStack_4e0;
            pppppppuVar23 = (ushort *******)ppppppuStack_4e8;
            if (((ulong)pppppppuVar17 & 1) == 0) {
              uVar27 = (ulong)pppppuStack_468 & 0xff;
            }
            else if (((uint)uStack_4f0 & 0x1000000) == 0) {
              func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x424);
              uVar27 = 0x6d;
            }
            else {
              ppppppuVar40 = *pppppppuVar18;
              uVar12 = (int)ppppppuVar40 + 0x1a0;
              param_2 = (ushort *******)ppppppuStack_4e0;
              func_0x000107c2b684();
              uVar4 = uVar12 ^ 1;
              if ((ushort *******)ppppppuVar33 == (ushort *******)0x0) {
                uVar4 = 1;
              }
              if ((uVar4 & 1) == 0) {
                _memcpy(ppppppuVar40[0x34],pppppppuVar23,ppppppuVar33);
                param_2 = pppppppuVar23;
              }
              if (uVar12 != 0) {
                if (((ulong)pppppuStack_560 & 1) == 0) {
                  pppppppuVar23 = pppppppuVar19 + 0x33;
                  param_2 = (ushort *******)ppppppuStack_548;
                  func_0x000107c2b894(pppppppuVar23,ppppppuStack_548,uStack_540);
                  if (((ulong)pppppppuVar23 & 1) == 0) goto code_r0x00010ae698a0;
                }
                (*(code *)(*pppppppuVar43)[4])();
                pppppppuVar22 = pppppppuVar43;
                goto code_r0x00010ae6858c;
              }
code_r0x00010ae698a0:
              uVar27 = 0x50;
            }
            pppppppuVar23 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar43,2,uVar27);
            pppppppuVar17 = pppppppuVar43;
            goto LAB_10ae693e8;
          }
        }
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,0x416);
        pppppppuVar23 = (ushort *******)0x2;
        FUN_10ae60390(pppppppuVar43,2,0x32);
        pppppppuVar17 = pppppppuVar43;
        goto LAB_10ae693e8;
      }
code_r0x00010ae6858c:
      uVar31 = 0xb;
code_r0x00010ae68cb8:
      *(undefined4 *)(pppppppuVar19 + 3) = uVar31;
code_r0x00010ae68cbc:
      puVar26 = (undefined1 *)0x1;
      break;
    case 0xb:
      pppppppuVar43 = (ushort *******)*pppppppuVar19;
      if ((*(byte *)(pppppppuVar19 + 0xc3) >> 5 & 1) == 0) {
        if ((*(ushort *)((long)pppppppuVar43[6] + 0xd4) >> 6 & 1) == 0) {
          (*pppppppuVar18)[0x17] = (ushort *****)0x0;
        }
        uVar31 = 0xd;
        goto code_r0x00010ae68cb8;
      }
      pppppuVar42 = pppppppuVar19[1][0x1d];
      param_2 = (ushort *******)&pppppuStack_560;
      pppppppuVar23 = pppppppuVar43;
      (*(code *)(*pppppppuVar43)[3])();
      if ((int)pppppppuVar23 == 0) goto code_r0x00010ae6931c;
      pppppppuVar23 = (ushort *******)&pppppuStack_560;
      pppppppuVar17 = pppppppuVar43;
      func_0x000107c2b6f8(pppppppuVar43,pppppppuVar23,0xb);
      if ((int)pppppppuVar17 != 0) {
        param_2 = (ushort *******)&pppppuStack_560;
        pppppppuVar17 = pppppppuVar19;
        func_0x000107c2b8d0(pppppppuVar19,param_2,((ulong)pppppuVar42 & 2) == 0);
        pppppppuVar23 = param_2;
        if ((int)pppppppuVar17 != 0) {
          if (((ulong)pppppuStack_560 & 1) == 0) {
            pppppppuVar17 = pppppppuVar19 + 0x33;
            param_2 = (ushort *******)ppppppuStack_548;
            func_0x000107c2b894(pppppppuVar17,ppppppuStack_548,uStack_540);
            pppppppuVar23 = param_2;
            if ((int)pppppppuVar17 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar43)[4])();
          uVar31 = 0xc;
          pppppppuVar22 = pppppppuVar43;
          goto code_r0x00010ae68cb8;
        }
      }
      goto LAB_10ae693e8;
    case 0xc:
      if ((pppppppuVar19[0xbb][0x12] == (ushort *****)0x0) ||
         (*pppppppuVar19[0xbb][0x12] == (ushort ****)0x0)) {
code_r0x00010ae69440:
        puVar26 = (undefined1 *)0x1;
        uVar31 = 0xd;
        goto code_r0x00010ae69444;
      }
      pppppppuVar22 = (ushort *******)*pppppppuVar19;
      param_2 = (ushort *******)&pppppuStack_560;
      pppppppuVar23 = pppppppuVar22;
      (*(code *)(*pppppppuVar22)[3])();
      if ((int)pppppppuVar23 == 0) goto code_r0x00010ae6931c;
      pppppppuVar17 = pppppppuVar19;
      func_0x000107c2b704();
      pppppppuVar23 = param_2;
      if ((int)pppppppuVar17 != 1) {
        if ((int)pppppppuVar17 == 2) {
          puVar26 = (undefined1 *)0x10;
          uVar31 = 0xc;
          pppppppuVar22 = pppppppuVar17;
          goto code_r0x00010ae69444;
        }
        pppppppuVar23 = (ushort *******)&pppppuStack_560;
        pppppppuVar17 = pppppppuVar22;
        func_0x000107c2b6f8(pppppppuVar22,pppppppuVar23,0xf);
        if ((int)pppppppuVar17 != 0) {
          param_2 = (ushort *******)&pppppuStack_560;
          pppppppuVar17 = pppppppuVar19;
          func_0x000107c2b8d4();
          pppppppuVar23 = param_2;
          if ((int)pppppppuVar17 != 0) {
            if (((ulong)pppppuStack_560 & 1) == 0) {
              pppppppuVar17 = pppppppuVar19 + 0x33;
              param_2 = (ushort *******)ppppppuStack_548;
              func_0x000107c2b894(pppppppuVar17,ppppppuStack_548,uStack_540);
              pppppppuVar23 = param_2;
              if ((int)pppppppuVar17 == 0) goto LAB_10ae693e8;
            }
            (*(code *)(*pppppppuVar22)[4])();
            goto code_r0x00010ae69440;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xd:
      if ((*(byte *)((long)pppppppuVar19 + 0x61b) & 1) == 0) {
code_r0x00010ae68468:
        uVar31 = 0xe;
        goto code_r0x00010ae69444;
      }
      pppppppuVar22 = (ushort *******)*pppppppuVar19;
      param_2 = (ushort *******)&pppppuStack_560;
      pppppppuVar23 = pppppppuVar22;
      (*(code *)(*pppppppuVar22)[3])();
      if ((int)pppppppuVar23 == 0) goto code_r0x00010ae6931c;
      pppppppuVar23 = (ushort *******)&pppppuStack_560;
      pppppppuVar17 = pppppppuVar22;
      func_0x000107c2b6f8(pppppppuVar22,pppppppuVar23,0xcb);
      if ((int)pppppppuVar17 != 0) {
        param_2 = (ushort *******)&pppppuStack_560;
        pppppppuVar17 = pppppppuVar19;
        FUN_10ae5aebc();
        pppppppuVar23 = param_2;
        if ((int)pppppppuVar17 != 0) {
          if (((ulong)pppppuStack_560 & 1) == 0) {
            pppppppuVar17 = pppppppuVar19 + 0x33;
            param_2 = (ushort *******)ppppppuStack_548;
            func_0x000107c2b894(pppppppuVar17,ppppppuStack_548,uStack_540);
            pppppppuVar23 = param_2;
            if ((int)pppppppuVar17 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar22)[4])();
          goto code_r0x00010ae68468;
        }
      }
      goto LAB_10ae693e8;
    case 0xe:
      pppppppuVar22 = (ushort *******)*pppppppuVar19;
      param_2 = (ushort *******)&pppppuStack_560;
      pppppppuVar23 = pppppppuVar22;
      (*(code *)(*pppppppuVar22)[3])();
      if ((int)pppppppuVar23 == 0) goto code_r0x00010ae6931c;
      pppppppuVar23 = (ushort *******)&pppppuStack_560;
      pppppppuVar17 = pppppppuVar22;
      func_0x000107c2b6f8(pppppppuVar22,pppppppuVar23,0x14);
      if ((int)pppppppuVar17 != 0) {
        pppppppuVar23 = (ushort *******)&pppppuStack_560;
        pppppppuVar17 = pppppppuVar19;
        func_0x000107c2b8d8(pppppppuVar19,pppppppuVar23,
                            *(ushort *)((long)pppppppuVar22[6] + 0xd4) >> 0xc & 1);
        if ((int)pppppppuVar17 != 0) {
          param_2 = (ushort *******)0x3;
          pppppppuVar17 = pppppppuVar22;
          func_0x000107c2b8fc(pppppppuVar22,3,0,pppppppuVar19[0xbb],pppppppuVar19 + 0x1d,
                              pppppppuVar19[4]);
          pppppppuVar23 = param_2;
          if ((int)pppppppuVar17 != 0) {
            if ((*(ushort *)((long)pppppppuVar22[6] + 0xd4) >> 0xc & 1) == 0) {
              if (((ulong)pppppuStack_560 & 1) == 0) {
                pppppppuVar17 = pppppppuVar19 + 0x33;
                param_2 = (ushort *******)ppppppuStack_548;
                func_0x000107c2b894(pppppppuVar17,ppppppuStack_548,uStack_540);
                pppppppuVar23 = param_2;
                if ((int)pppppppuVar17 == 0) goto LAB_10ae693e8;
              }
              pppppppuVar17 = pppppppuVar19;
              func_0x000107c2b910();
              pppppppuVar23 = param_2;
              if ((int)pppppppuVar17 == 0) goto LAB_10ae693e8;
              uVar31 = 0xf;
            }
            else {
              uVar31 = 0x10;
            }
            *(undefined4 *)(pppppppuVar19 + 3) = uVar31;
            (*(code *)(*pppppppuVar22)[4])();
            goto code_r0x00010ae68cbc;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xf:
      param_2 = (ushort *******)&pppppuStack_560;
      pppppppuVar22 = pppppppuVar19;
      FUN_10ae6a2ec();
      pppppppuVar17 = pppppppuVar22;
      pppppppuVar23 = param_2;
      if ((int)pppppppuVar22 == 0) goto LAB_10ae693e8;
      *(undefined4 *)(pppppppuVar19 + 3) = 0x10;
      uVar12 = 4;
      if (((*pppppppuVar19)[0x13] != (ushort *****)0x0 & (byte)pppppuStack_560) == 0) {
        uVar12 = 1;
      }
      puVar26 = (undefined1 *)(ulong)uVar12;
      break;
    case 0x10:
      goto code_r0x00010ae69de8;
    }
    if (*(int *)(pppppppuVar19 + 3) != iVar11) {
      pppppppuVar22 = (ushort *******)*pppppppuVar19;
      ppppppuVar33 = pppppppuVar22[0xc];
      if ((ppppppuVar33 != (ushort ******)0x0) ||
         (ppppppuVar33 = (ushort ******)pppppppuVar22[0xd][0x30], ppppppuVar33 != (ushort ******)0x0
         )) {
        param_2 = (ushort *******)0x2001;
        (*(code *)ppppppuVar33)(pppppppuVar22,0x2001,1);
      }
    }
  } while ((int)puVar26 == 1);
code_r0x00010ae69de8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return puVar26;
  }
  ___stack_chk_fail();
code_r0x00010ae69e28:
  _abort();
  func_0x000107c2b534(pppppuStack_468);
  func_0x000107c2b204(&pppppuStack_560);
  __Unwind_Resume();
  if ((*(byte *)(pppppppuVar22 + 0x36) >> 5 & 1) == 0) {
    return (undefined1 *)0x1;
  }
  ppppppuVar33 = pppppppuVar22[0x38];
  if ((ppppppuVar33 != (ushort ******)0x0) && (param_2[0x17] == ppppppuVar33)) {
    bVar35 = 0;
    ppppppuVar40 = param_2[0x16];
    ppppppuVar41 = pppppppuVar22[0x37];
    do {
      bVar35 = *(byte *)ppppppuVar41 ^ *(byte *)ppppppuVar40 | bVar35;
      ppppppuVar33 = (ushort ******)((long)ppppppuVar33 + -1);
      ppppppuVar40 = (ushort ******)((long)ppppppuVar40 + 1);
      ppppppuVar41 = (ushort ******)((long)ppppppuVar41 + 1);
    } while (ppppppuVar33 != (ushort ******)0x0);
    return (undefined1 *)(ulong)(bVar35 == 0);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10ae68018; end: 10ae68137;  */

undefined1 * FUN_10ae68018(long param_1,ushort *******param_2,long param_3,long *param_4)

{
  ushort *******pppppppuVar1;
  ushort *******pppppppuVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  ushort ****ppppuVar6;
  ushort ******ppppppuVar7;
  ushort uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  ushort *******pppppppuVar15;
  long lVar16;
  ushort *******pppppppuVar17;
  ushort ******ppppppuVar18;
  undefined8 *puVar19;
  ushort *******pppppppuVar20;
  ulong *puVar21;
  undefined1 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 in_x7;
  undefined4 uVar28;
  byte *pbVar29;
  ushort ******ppppppuVar30;
  ulong uVar31;
  ushort ****ppppuVar32;
  byte bVar33;
  byte *pbVar34;
  ushort *******pppppppuVar35;
  ulong uVar36;
  ulong *puVar37;
  undefined1 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ushort ******ppppppuVar38;
  ushort ******ppppppuVar39;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  ushort *****pppppuVar40;
  ushort *******pppppppuVar41;
  ushort *****pppppuVar42;
  ushort *****pppppuVar43;
  ushort *****pppppuVar44;
  undefined1 uStack_3a2;
  undefined1 uStack_3a1;
  ushort *****pppppuStack_3a0;
  ushort *puStack_398;
  ulong uStack_390;
  ushort ******ppppppuStack_388;
  undefined8 uStack_380;
  undefined8 uStack_370;
  long lStack_368;
  ushort *****pppppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_330;
  ushort ******ppppppuStack_328;
  ushort ******ppppppuStack_320;
  ushort ******ppppppuStack_318;
  undefined8 uStack_310;
  ushort ******appppppuStack_308 [4];
  undefined8 uStack_2e8;
  ushort *****pppppuStack_2c8;
  ulong uStack_2c0;
  ushort *****pppppuStack_2a8;
  ulong uStack_2a0;
  ushort ******ppppppuStack_288;
  ulong uStack_280;
  ushort ******ppppppuStack_278;
  ushort ******ppppppuStack_270;
  ushort ******ppppppuStack_258;
  ulong uStack_250;
  ushort *****apppppuStack_248 [4];
  long lStack_228;
  ulong uStack_210;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  ushort ******ppppppuStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  ushort *****pppppuStack_1b0;
  ulong uStack_1a8;
  ushort *****pppppuStack_198;
  ushort *****pppppuStack_190;
  ushort ******ppppppuStack_188;
  ushort ******ppppppuStack_180;
  undefined8 *puStack_178;
  uint uStack_164;
  undefined1 auStack_160 [64];
  ushort *****apppppuStack_120 [8];
  long lStack_e0;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_28;
  
  puVar21 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar24 = *(undefined8 *)(param_3 + 0x18);
  lVar26 = *(long *)(param_3 + 0x20);
  iVar11 = (int)&uStack_68;
  puVar23 = (undefined *)(param_1 + 0x198);
  lVar27 = param_4[1] + 2;
  FUN_10ae67e18();
  if ((iVar11 == 0) || (param_4[1] == 0)) {
LAB_10ae6808c:
    param_2 = (ushort *******)0x44;
    uVar24 = 0x201;
LAB_10ae680a4:
    puVar23 = &UNK_10f6d13d3;
    puVar21 = (ulong *)0x0;
    func_0x000107c2b29c(0x10);
    puVar14 = (undefined1 *)0x0;
  }
  else {
    pbVar34 = (byte *)*param_4;
    pbVar29 = pbVar34 + 1;
    uVar36 = param_4[1] - 1;
    *param_4 = (long)pbVar29;
    param_4[1] = uVar36;
    bVar33 = *pbVar34;
    uVar31 = (ulong)bVar33;
    if (uVar36 < uVar31) goto LAB_10ae6808c;
    *param_4 = (long)(pbVar29 + uVar31);
    param_4[1] = uVar36 - uVar31;
    if (uStack_70 != uVar31) {
LAB_10ae68110:
      param_2 = (ushort *******)0x8e;
      uVar24 = 0x20c;
      goto LAB_10ae680a4;
    }
    if (bVar33 != 0) {
      bVar33 = 0;
      puVar37 = &uStack_68;
      do {
        bVar33 = (byte)*puVar37 ^ *pbVar29 | bVar33;
        uVar31 = uVar31 - 1;
        pbVar29 = pbVar29 + 1;
        puVar37 = (ulong *)((long)puVar37 + 1);
      } while (uVar31 != 0);
      if (bVar33 != 0) goto LAB_10ae68110;
    }
    puVar14 = (undefined1 *)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar14;
  }
  ___stack_chk_fail(puVar14);
  pcStack_78 = FUN_10ae68138;
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar31 = uStack_60 + 8;
  puStack_80 = &stack0xfffffffffffffff0;
  if (uStack_68 < uVar31) {
    pppppppuVar15 = (ushort *******)0x10;
    param_2 = (ushort *******)0x0;
    func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d13d3,0x225);
    puVar14 = (undefined1 *)0x0;
    puVar21 = (ulong *)unaff_x20;
    lVar27 = unaff_x21;
    lVar26 = unaff_x22;
    uVar24 = unaff_x23;
    puVar23 = unaff_x24;
    goto LAB_10ae682d4;
  }
  uVar36 = uStack_68;
  if (uStack_60 <= uStack_68) {
    uVar36 = uStack_60;
  }
  ppppppuStack_188 = (ushort ******)0x0;
  pppppuStack_190 = (ushort *****)0x0;
  puStack_178 = (undefined8 *)0x0;
  ppppppuStack_180 = (ushort ******)0x0;
  pppppppuVar15 = (ushort *******)&pppppuStack_190;
  lVar16 = lVar26;
  func_0x00010ae657f0(lVar26,pppppppuVar15,*(undefined8 *)(lVar26 + 8));
  if ((int)lVar16 == 0) {
LAB_10ae682b4:
    param_2 = pppppppuVar15;
    puVar14 = (undefined1 *)0x0;
  }
  else {
    (*(code *)pppppuStack_190[3])(&pppppuStack_190,uStack_70,uVar36);
    (*(code *)pppppuStack_190[3])(&pppppuStack_190,&UNK_10e52b45c,8);
    (*(code *)pppppuStack_190[3])(&pppppuStack_190,uStack_70 + uVar31,uStack_68 - uVar31);
    ppppppuVar30 = &pppppuStack_190;
    pppppppuVar15 = (ushort *******)apppppuStack_120;
    func_0x000107c2b41c(ppppppuVar30,pppppppuVar15,&uStack_164);
    if ((int)ppppppuVar30 == 0) goto LAB_10ae682b4;
    iVar11 = (int)auStack_160;
    pppppppuVar15 = (ushort *******)&pppppuStack_198;
    func_0x000107c2b51c();
    if (iVar11 == 0) goto LAB_10ae682b4;
    bVar10 = (int)lVar27 == 0;
    puVar4 = &UNK_10f6d14df;
    if (bVar10) {
      puVar4 = &UNK_10f6d14fb;
    }
    uVar25 = 0x1b;
    if (bVar10) {
      uVar25 = 0x17;
    }
    uStack_1a8 = (ulong)uStack_164;
    pppppuStack_1b0 = (ushort *****)apppppuStack_120;
    puVar14 = (undefined1 *)puVar21;
    func_0x000107c34fd8(puVar21,param_2,*(undefined8 *)(lVar26 + 8),auStack_160,pppppuStack_198,
                        puVar4,uVar25);
  }
  pppppppuVar15 = (ushort *******)ppppppuStack_188;
  func_0x000107c2b534();
  if (puStack_178 != (undefined8 *)0x0) {
    pppppppuVar15 = (ushort *******)ppppppuStack_180;
    (*(code *)*puStack_178)();
  }
LAB_10ae682d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return puVar14;
  }
  ___stack_chk_fail();
  FUN_10ae34eb0(&pppppuStack_190);
  pppppppuVar17 = pppppppuVar15;
  __Unwind_Resume();
  pcStack_1b8 = FUN_10ae6832c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar1 = pppppppuVar17 + 0xbb;
  pppppppuVar2 = pppppppuVar17 + 0x47;
  pppppppuVar20 = pppppppuVar17;
  uStack_210 = uVar31;
  lStack_1f8 = uStack_68 - uVar31;
  puStack_1f0 = puVar23;
  uStack_1e8 = uVar24;
  lStack_1e0 = lVar26;
  lStack_1d8 = lVar27;
  puStack_1d0 = (undefined1 *)puVar21;
  ppppppuStack_1c8 = (ushort ******)pppppppuVar15;
  ppuStack_1c0 = &puStack_80;
  do {
    iVar11 = *(int *)(pppppppuVar17 + 3);
    puVar14 = (undefined1 *)0x1;
    pppppppuVar35 = pppppppuVar20;
    pppppppuVar15 = param_2;
    switch(iVar11) {
    case 0:
      param_2 = (ushort *******)*pppppppuVar17;
      pppppppuVar15 = (ushort *******)&uStack_330;
      pppppppuVar35 = pppppppuVar17;
      FUN_10ae5cbc0(pppppppuVar17,pppppppuVar15,&pppppuStack_3a0);
      lVar27 = lStack_368;
      if ((int)pppppppuVar35 != 0) {
        if (param_2[0x13] == (ushort ******)0x0 || lStack_368 == 0) {
          if (lStack_368 != 0) {
            _memcpy((char *)((long)pppppppuVar17 + 0x623),uStack_370,lStack_368);
          }
          *(char *)((long)pppppppuVar17 + 0x643) = (char)lVar27;
          pppppppuVar15 = pppppppuVar17;
          FUN_10ae5987c(pppppppuVar17,&ppppppuStack_278);
          uVar24 = uStack_358;
          ppppppuVar30 = (ushort ******)pppppuStack_360;
          if (((ulong)pppppppuVar15 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0xe4);
            pppppppuVar15 = (ushort *******)0x2;
            FUN_10ae60390(param_2,2,0x28);
            pppppppuVar35 = param_2;
          }
          else {
            uVar31 = (ulong)ppppppuStack_278 & 0xffff;
            pppppppuVar15 = param_2;
            func_0x000107c2b89c(param_2);
            FUN_10ae60114(ppppppuVar30,uVar24,pppppppuVar15,uVar31);
            pppppppuVar17[0xbf] = ppppppuVar30;
            if (ppppppuVar30 == (ushort ******)0x0) {
              func_0x000107c2b29c(0x10,0,0xb8,&UNK_10f6d1513,0xec);
              pppppppuVar15 = (ushort *******)0x2;
              FUN_10ae60390(param_2,2,0x28);
              pppppppuVar35 = param_2;
            }
            else {
              apppppuStack_248[0] = (ushort *****)CONCAT71(apppppuStack_248[0]._1_7_,0x32);
              pppppppuVar15 = pppppppuVar17;
              FUN_10ae59a0c(pppppppuVar17,apppppuStack_248,&pppppuStack_3a0);
              if (((ulong)pppppppuVar15 & 1) == 0) {
                pppppppuVar15 = (ushort *******)0x2;
                FUN_10ae60390(param_2,2,(ulong)apppppuStack_248[0] & 0xff);
                pppppppuVar35 = param_2;
              }
              else {
                func_0x000107c2b89c();
                pppppppuVar20 = pppppppuVar17 + 0x33;
                func_0x000107c2b888(pppppppuVar20,param_2,pppppppuVar17[0xbf]);
                pppppppuVar35 = pppppppuVar20;
                pppppppuVar15 = param_2;
                if ((int)pppppppuVar20 != 0) {
                  puVar14 = (undefined1 *)0x1;
                  *(undefined4 *)(pppppppuVar17 + 3) = 1;
                  break;
                }
              }
            }
          }
        }
        else {
          func_0x000107c2b29c(0x10,0,0x132,&UNK_10f6d1513,0xda);
          pppppppuVar15 = (ushort *******)0x2;
          FUN_10ae60390(param_2,2,0x2f);
          pppppppuVar35 = param_2;
        }
      }
    default:
LAB_10ae693e8:
      puVar14 = (undefined1 *)0x0;
      pppppppuVar20 = pppppppuVar35;
      param_2 = pppppppuVar15;
      break;
    case 1:
      ppppppuVar30 = *pppppppuVar17;
      pppppppuVar15 = (ushort *******)&uStack_330;
      pppppppuVar35 = pppppppuVar17;
      FUN_10ae5cbc0(pppppppuVar17,pppppppuVar15,&pppppuStack_3a0);
      if ((int)pppppppuVar35 == 0) goto LAB_10ae693e8;
      uStack_3a2 = 0x32;
      pppppuVar40 = ppppppuVar30[6];
      ppppppuVar39 = *pppppppuVar17;
      ppppppuStack_258 = (ushort ******)0x0;
      ppppppuVar38 = &pppppuStack_3a0;
      FUN_10ae59824(ppppppuVar38,&ppppppuStack_278,0x29);
      if ((int)ppppppuVar38 == 0) {
code_r0x00010ae68890:
        pppppppuVar15 = pppppppuVar17;
        func_0x000107c2b85c();
        if (((ulong)pppppppuVar15 & 1) != 0) goto code_r0x00010ae6889c;
code_r0x00010ae69810:
        uVar22 = 0x50;
code_r0x00010ae69814:
        param_2 = (ushort *******)0x2;
        FUN_10ae60390(ppppppuVar30,2,uVar22);
code_r0x00010ae69820:
        puVar14 = (undefined1 *)0x0;
      }
      else {
        ppppppuVar18 = &pppppuStack_3a0;
        FUN_10ae59824(ppppppuVar18,apppppuStack_248,0x2d);
        if (((ulong)ppppppuVar18 & 1) == 0) {
          uStack_3a2 = 0x6d;
          func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x116);
          uVar22 = uStack_3a2;
          goto code_r0x00010ae69814;
        }
        pppppppuVar15 = pppppppuVar17;
        func_0x00010ae59cd0(pppppppuVar17,&pppppuStack_2a8,&pppppuStack_2c8,&ppppppuStack_288,
                            &uStack_3a2,&pppppuStack_3a0,&ppppppuStack_278);
        uVar22 = uStack_3a2;
        if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69814;
        if ((*(byte *)(pppppppuVar17 + 0xc3) >> 4 & 1) == 0) goto code_r0x00010ae68890;
        appppppuStack_308[0] = (ushort ******)0x0;
        param_2 = appppppuStack_308;
        pppppppuVar15 = pppppppuVar17;
        FUN_10ae5a6e4(pppppppuVar17,param_2,&uStack_3a1,pppppuStack_2a8,uStack_2a0,0,0);
        iVar13 = (int)pppppppuVar15;
        if (iVar13 == 0) {
          pppppppuVar15 = pppppppuVar17;
          param_2 = (ushort *******)appppppuStack_308[0];
          FUN_10ae64ac0();
          if ((int)pppppppuVar15 == 0) {
code_r0x00010ae69738:
            iVar13 = 2;
            goto code_r0x00010ae6973c;
          }
          if ((*(byte *)(appppppuStack_308[0] + 0x36) >> 3 & 1) != 0) {
            ppppppuStack_288 =
                 (ushort ******)
                 CONCAT44(ppppppuStack_288._4_4_,
                          (uint)((int)ppppppuStack_288 - *(int *)(appppppuStack_308[0] + 0x2f)) /
                          1000);
            func_0x000107c2b798(ppppppuVar39[0xd],&uStack_2e8);
            uVar31 = CONCAT62(uStack_2e8._2_6_,CONCAT11(uStack_2e8._1_1_,(undefined1)uStack_2e8)) -
                     (long)appppppuStack_308[0][0x19];
            param_2 = (ushort *******)appppppuStack_308[0];
            if (uVar31 >> 0x1f == 0) {
              *(int *)((long)pppppuVar40 + 0xf4) = (int)ppppppuStack_288 - (int)uVar31;
              pppppppuVar20 = pppppppuVar17;
              FUN_10ae68018(pppppppuVar17,appppppuStack_308[0],&uStack_330,&pppppuStack_2c8);
              pppppppuVar15 = (ushort *******)appppppuStack_308[0];
              if (((ulong)pppppppuVar20 & 1) == 0) {
                uStack_3a2 = 0x33;
                iVar13 = 3;
              }
              else {
                appppppuStack_308[0] = (ushort ******)0x0;
                func_0x000107c2b6c0(&ppppppuStack_258);
                iVar13 = 0;
                param_2 = pppppppuVar15;
              }
              goto code_r0x00010ae6973c;
            }
            goto code_r0x00010ae69738;
          }
          iVar13 = 2;
code_r0x00010ae69748:
          appppppuStack_308[0] = (ushort ******)0x0;
          func_0x000107c2b874();
        }
        else {
          if (iVar13 == 3) {
            uStack_3a2 = 0x50;
          }
code_r0x00010ae6973c:
          ppppppuVar39 = appppppuStack_308[0];
          appppppuStack_308[0] = (ushort ******)0x0;
          if ((ushort *******)ppppppuVar39 != (ushort *******)0x0) goto code_r0x00010ae69748;
        }
        if (1 < iVar13) {
          if (iVar13 == 2) goto code_r0x00010ae68890;
          uVar22 = uStack_3a2;
          if (iVar13 != 3) goto code_r0x00010ae6889c;
          goto code_r0x00010ae69814;
        }
        if (iVar13 == 0) {
          func_0x000107c2b84c(&ppppppuStack_278,ppppppuStack_258,0);
          ppppppuVar39 = ppppppuStack_278;
          ppppppuStack_278 = (ushort ******)0x0;
          func_0x000107c2b6c0(pppppppuVar1,ppppppuVar39);
          ppppppuVar39 = ppppppuStack_278;
          ppppppuStack_278 = (ushort ******)0x0;
          if (ppppppuVar39 != (ushort ******)0x0) {
            func_0x000107c2b874();
          }
          if (*pppppppuVar1 == (ushort ******)0x0) goto code_r0x00010ae69810;
          *(ushort *)((long)ppppppuVar30[6] + 0xd4) =
               *(ushort *)((long)ppppppuVar30[6] + 0xd4) | 0x40;
          *(uint *)(pppppppuVar17 + 0xc3) = *(uint *)(pppppppuVar17 + 0xc3) | 0x800000;
          ppppppuVar39 = pppppppuVar17[0xbb];
          uVar12 = *(uint *)((long)ppppppuVar30[0xe] + 0x124);
          func_0x000107c2b850(ppppppuVar30,ppppppuVar39);
          if (*(uint *)(ppppppuVar39 + 0x18) <= uVar12) {
            uVar5 = *(uint *)((long)ppppppuVar39 + 0xc4);
            if (uVar12 <= *(uint *)((long)ppppppuVar39 + 0xc4)) {
              uVar5 = uVar12;
            }
            *(uint *)(ppppppuVar39 + 0x18) = uVar5;
          }
code_r0x00010ae6889c:
          pppppppuVar15 = pppppppuVar17;
          func_0x00010ae5a158(pppppppuVar17,&uStack_3a2,&pppppuStack_3a0);
          uVar22 = uStack_3a2;
          if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69814;
          ppppppuVar39 = pppppppuVar17[0xbb];
          ppppppuVar39[0x1a] = (ushort *****)pppppppuVar17[0xbf];
          pppppppuVar15 = pppppppuVar17;
          FUN_10ae5987c(pppppppuVar17,(long)ppppppuVar39 + 6);
          if (((ulong)pppppppuVar15 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0x1a6);
            uVar22 = 0x28;
            goto code_r0x00010ae69814;
          }
          pppppppuVar15 = pppppppuVar17;
          FUN_10ae59f44(pppppppuVar17,&ppppppuStack_278,0,&uStack_3a2,&pppppuStack_3a0);
          uVar22 = uStack_3a2;
          if (((ulong)pppppppuVar15 & 1) == 0) {
code_r0x00010ae69b34:
            param_2 = (ushort *******)0x2;
            FUN_10ae60390(ppppppuVar30,2,uVar22);
          }
          else {
            if ((*(byte *)((long)ppppppuVar30 + 0xa4) >> 2 & 1) == 0) {
              pppppuVar40 = ppppppuVar30[6];
              uVar28 = 1;
code_r0x00010ae688f8:
              *(undefined4 *)(pppppuVar40 + 0x1f) = uVar28;
            }
            else {
              if (((ulong)ppppppuVar38 & 1) == 0) {
                pppppuVar40 = ppppppuVar30[6];
                uVar28 = 5;
              }
              else if ((ushort *******)ppppppuStack_258 == (ushort *******)0x0) {
                pppppuVar40 = ppppppuVar30[6];
                uVar28 = 6;
              }
              else if (*(int *)((long)ppppppuStack_258 + 0x17c) == 0) {
                pppppuVar40 = ppppppuVar30[6];
                uVar28 = 7;
              }
              else {
                if ((*(uint *)(pppppppuVar17 + 0xc3) >> 0xc & 1) == 0) {
                  pppppuVar40 = ppppppuVar30[6];
                  uVar28 = 4;
                  goto code_r0x00010ae688f8;
                }
                pppppuVar40 = ppppppuVar30[6];
                if ((*(uint *)(pppppppuVar17 + 0xc3) >> 0x18 & 1) == 0) {
                  ppppppuVar38 = (ushort ******)pppppuVar40[0x3d];
                  if (ppppppuVar38 == (ushort ******)ppppppuStack_258[0x31]) {
                    if (ppppppuVar38 != (ushort ******)0x0) {
                      ppppppuVar39 = (ushort ******)ppppppuStack_258[0x30];
                      ppppuVar32 = pppppuVar40[0x3c];
                      do {
                        ppppppuVar38 = (ushort ******)((long)ppppppuVar38 + -1);
                        if (*(char *)ppppuVar32 != *(char *)ppppppuVar39) goto code_r0x00010ae69984;
                        ppppppuVar39 = (ushort ******)((long)ppppppuVar39 + 1);
                        ppppuVar32 = (ushort ****)((long)ppppuVar32 + 1);
                      } while (ppppppuVar38 != (ushort ******)0x0);
                    }
                    ppppppuVar38 = *pppppppuVar1;
                    if ((((*(byte *)(ppppppuStack_258 + 0x36) ^ *(byte *)(ppppppuVar38 + 0x36)) >> 6
                         & 1) == 0) &&
                       (ppppppuVar39 = (ushort ******)ppppppuVar38[0x33],
                       ppppppuVar39 == (ushort ******)ppppppuStack_258[0x33])) {
                      if (ppppppuVar39 != (ushort ******)0x0) {
                        ppppppuVar18 = (ushort ******)ppppppuStack_258[0x32];
                        pppppuVar42 = ppppppuVar38[0x32];
                        do {
                          ppppppuVar39 = (ushort ******)((long)ppppppuVar39 + -1);
                          if (*(char *)pppppuVar42 != *(char *)ppppppuVar18)
                          goto code_r0x00010ae69998;
                          ppppppuVar18 = (ushort ******)((long)ppppppuVar18 + 1);
                          pppppuVar42 = (ushort *****)((long)pppppuVar42 + 1);
                        } while (ppppppuVar39 != (ushort ******)0x0);
                      }
                      if (*(int *)((long)pppppuVar40 + 0xf4) - 0x3dU < 0xffffff87) {
                        uVar28 = 0xc;
                      }
                      else {
                        pppppppuVar15 = (ushort *******)ppppppuStack_258;
                        FUN_10ae69f00(ppppppuStack_258,pppppppuVar17[1]);
                        if (((ulong)pppppppuVar15 & 1) != 0) {
                          if (((ulong)ppppppuStack_278 & 1) == 0) {
                            uVar28 = 8;
                            goto code_r0x00010ae688f8;
                          }
                          *(undefined4 *)(pppppuVar40 + 0x1f) = 2;
                          *(ushort *)((long)pppppuVar40 + 0xd4) =
                               *(ushort *)((long)pppppuVar40 + 0xd4) | 0x1000;
                          pppppuVar40 = ppppppuVar30[6];
                          goto code_r0x00010ae699a0;
                        }
                        uVar28 = 0xd;
                      }
                    }
                    else {
code_r0x00010ae69998:
                      uVar28 = 0xe;
                    }
                  }
                  else {
code_r0x00010ae69984:
                    uVar28 = 9;
                  }
                }
                else {
                  uVar28 = 10;
                }
              }
              *(undefined4 *)(pppppuVar40 + 0x1f) = uVar28;
            }
code_r0x00010ae699a0:
            ppppppuVar39 = *pppppppuVar1;
            ppppuVar32 = pppppuVar40[0x3c];
            ppppuVar6 = pppppuVar40[0x3d];
            ppppppuVar38 = ppppppuVar39 + 0x30;
            func_0x000107c2b684(ppppppuVar38,ppppuVar6);
            uVar12 = (uint)ppppppuVar38 ^ 1;
            if (ppppuVar6 == (ushort ****)0x0) {
              uVar12 = 1;
            }
            if ((uVar12 & 1) == 0) {
              _memcpy(ppppppuVar39[0x30],ppppuVar32,ppppuVar6);
            }
            if ((uint)ppppppuVar38 == 0) {
code_r0x00010ae69b30:
              uVar22 = 0x50;
              goto code_r0x00010ae69b34;
            }
            if (((*(ushort *)((long)ppppppuVar30[6] + 0xd4) >> 0xc & 1) != 0) &&
               (ppppppuVar38 = *pppppppuVar1, (*(byte *)(ppppppuVar38 + 0x36) >> 6 & 1) != 0)) {
              ppppppuVar18 = (ushort ******)ppppppuStack_258[0x34];
              ppppppuVar7 = (ushort ******)ppppppuStack_258[0x35];
              ppppppuVar39 = ppppppuVar38 + 0x34;
              func_0x000107c2b684(ppppppuVar39,ppppppuVar7);
              uVar12 = (uint)ppppppuVar39 ^ 1;
              if (ppppppuVar7 == (ushort ******)0x0) {
                uVar12 = 1;
              }
              if ((uVar12 & 1) == 0) {
                _memcpy(ppppppuVar38[0x34],ppppppuVar18,ppppppuVar7);
              }
              if ((uint)ppppppuVar39 == 0) goto code_r0x00010ae69b30;
            }
            if (((*(byte *)((long)ppppppuVar30 + 0xa4) >> 2 & 1) != 0) &&
               (ppppppuVar30[0x13] != (ushort *****)0x0)) {
              ppppppuVar39 = pppppppuVar17[0xbb];
              pppppuVar40 = pppppppuVar17[1][0x16];
              pppppuVar42 = pppppppuVar17[1][0x17];
              ppppppuVar38 = ppppppuVar39 + 0x37;
              func_0x000107c2b684(ppppppuVar38,pppppuVar42);
              uVar12 = (uint)ppppppuVar38 ^ 1;
              if (pppppuVar42 == (ushort *****)0x0) {
                uVar12 = 1;
              }
              if ((uVar12 & 1) == 0) {
                _memcpy(ppppppuVar39[0x37],pppppuVar40,pppppuVar42);
              }
              if ((uint)ppppppuVar38 == 0) goto code_r0x00010ae69b30;
            }
            if (ppppppuVar30[0xd][0x3c] != (ushort ****)0x0) {
              iVar13 = (int)&pppppuStack_3a0;
              (*(code *)ppppppuVar30[0xd][0x3c])();
              if (iVar13 == 0) {
                func_0x000107c2b29c(0x10,0,0x85,&UNK_10f6d1513,0x1f9);
                goto code_r0x00010ae69b30;
              }
            }
            ppppppuVar38 = ppppppuVar30;
            func_0x000107c2b89c();
            func_0x000107c2b76c();
            if ((*(ushort *)((long)ppppppuVar30[6] + 0xd4) >> 6 & 1) == 0) {
              uVar31 = (ulong)*(uint *)((long)ppppppuVar38 + 4);
              param_2 = (ushort *******)&UNK_10e52b4d2;
            }
            else {
              param_2 = (ushort *******)(*pppppppuVar1 + 2);
              uVar31 = (ulong)*(int *)((long)*pppppppuVar1 + 0xc);
            }
            pppppppuVar15 = pppppppuVar17;
            func_0x000107c2b8f0(pppppppuVar17,param_2,uVar31);
            if ((int)pppppppuVar15 != 0) {
              if (((uint)uStack_330 & 1) == 0) {
                pppppppuVar15 = pppppppuVar17 + 0x33;
                param_2 = (ushort *******)ppppppuStack_318;
                func_0x000107c2b894(pppppppuVar15,ppppppuStack_318,uStack_310);
                if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69820;
              }
              uVar8 = *(ushort *)((long)ppppppuVar30[6] + 0xd4);
              if ((uVar8 >> 0xc & 1) == 0) {
                if ((*(byte *)((long)pppppppuVar17 + 0x619) >> 4 & 1) != 0) {
                  *(ushort *)((long)ppppppuVar30[6] + 0xd4) = uVar8 | 1;
                }
              }
              else {
                pppppppuVar15 = pppppppuVar17;
                FUN_10ae67a20();
                if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69820;
              }
              if (((ulong)ppppppuStack_278 & 1) == 0) {
                (*(code *)(*ppppppuVar30)[4])(ppppppuVar30);
                pppppppuVar15 = pppppppuVar17 + 0x33;
                func_0x00010ae65734();
                if (((ulong)pppppppuVar15 & 1) != 0) {
                  uVar28 = 2;
                  goto code_r0x00010ae69bb0;
                }
              }
              else {
                param_2 = (ushort *******)&pppppuStack_3a0;
                pppppppuVar15 = pppppppuVar17;
                FUN_10ae69f5c();
                if ((int)pppppppuVar15 != 0) {
                  (*(code *)(*ppppppuVar30)[4])(ppppppuVar30);
                  func_0x000107c2b534(*pppppppuVar2);
                  *pppppppuVar2 = (ushort ******)0x0;
                  pppppppuVar17[0x48] = (ushort ******)0x0;
                  uVar28 = 4;
code_r0x00010ae69bb0:
                  *(undefined4 *)(pppppppuVar17 + 3) = uVar28;
                  puVar14 = (undefined1 *)0x1;
                  goto code_r0x00010ae69824;
                }
              }
            }
          }
          goto code_r0x00010ae69820;
        }
        if (iVar13 != 1) goto code_r0x00010ae6889c;
        *(undefined4 *)(pppppppuVar17 + 3) = 1;
        puVar14 = (undefined1 *)0xb;
      }
code_r0x00010ae69824:
      pppppppuVar20 = (ushort *******)ppppppuStack_258;
      ppppppuStack_258 = (ushort ******)0x0;
      if (pppppppuVar20 != (ushort *******)0x0) {
        func_0x000107c2b874();
      }
      break;
    case 2:
      if ((*(byte *)((long)pppppppuVar17 + 0x61a) >> 4 & 1) == 0) {
        pppppppuVar35 = (ushort *******)*pppppppuVar17;
        puStack_398 = (ushort *)0x0;
        pppppuStack_3a0 = (ushort *****)0x0;
        ppppppuStack_388 = (ushort ******)0x0;
        uStack_390 = 0;
        param_2 = (ushort *******)&pppppuStack_3a0;
        pppppppuVar15 = pppppppuVar35;
        (*(code *)(*pppppppuVar35)[0xb])(pppppppuVar35,param_2,&uStack_330,2);
        if ((int)pppppppuVar15 == 0) {
code_r0x00010ae68f2c:
          puVar14 = (undefined1 *)0x0;
        }
        else {
          iVar13 = (int)&uStack_330;
          param_2 = (ushort *******)0x303;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_330;
          param_2 = (ushort *******)&UNK_10e52b348;
          func_0x000107c2b21c(puVar19,&UNK_10e52b348,0x20);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_330;
          param_2 = &ppppppuStack_278;
          func_0x000107c34f3c(puVar19,param_2,1);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar15 = &ppppppuStack_278;
          param_2 = (ushort *******)((long)pppppppuVar17 + 0x623);
          func_0x000107c2b21c(pppppppuVar15,param_2,*(char *)((long)pppppppuVar17 + 0x643));
          if ((int)pppppppuVar15 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)(ulong)*(ushort *)(pppppppuVar17[0xbf] + 2);
          iVar13 = (int)&uStack_330;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          iVar13 = (int)&uStack_330;
          param_2 = (ushort *******)0x0;
          func_0x000107c2b218();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)&uStack_2e8;
          pppppppuVar15 = pppppppuVar17;
          FUN_10ae5987c();
          if ((int)pppppppuVar15 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_330;
          param_2 = (ushort *******)apppppuStack_248;
          func_0x000107c34f3c(puVar19,param_2,2);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          iVar13 = (int)apppppuStack_248;
          param_2 = (ushort *******)0x2b;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          iVar13 = (int)apppppuStack_248;
          param_2 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)(ulong)*(ushort *)(pppppppuVar35 + 2);
          iVar13 = (int)apppppuStack_248;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          iVar13 = (int)apppppuStack_248;
          param_2 = (ushort *******)0x33;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          iVar13 = (int)apppppuStack_248;
          param_2 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)(ulong)CONCAT11(uStack_2e8._1_1_,(undefined1)uStack_2e8);
          iVar13 = (int)apppppuStack_248;
          func_0x000107c2b228();
          if (iVar13 == 0) goto code_r0x00010ae68f2c;
          if (((ulong)pppppppuVar17[0xc3] & 1) != 0) {
            iVar13 = (int)apppppuStack_248;
            param_2 = (ushort *******)0xfe0d;
            func_0x000107c2b228();
            if (iVar13 != 0) {
              iVar13 = (int)apppppuStack_248;
              param_2 = (ushort *******)0x8;
              func_0x000107c2b228();
              if (iVar13 != 0) {
                ppppppuVar30 = apppppuStack_248;
                param_2 = (ushort *******)&pppppuStack_2a8;
                func_0x000107c2b220(ppppppuVar30,param_2,8);
                if ((int)ppppppuVar30 != 0) {
                  *pppppuStack_2a8 = (ushort ****)0x0;
                  goto code_r0x00010ae68738;
                }
              }
            }
            goto code_r0x00010ae68f2c;
          }
code_r0x00010ae68738:
          pppppuStack_2a8 = (ushort *****)0x0;
          uStack_2a0 = 0;
          param_2 = (ushort *******)&pppppuStack_3a0;
          pppppppuVar20 = pppppppuVar35;
          (*(code *)(*pppppppuVar35)[0xc])(pppppppuVar35,param_2,&pppppuStack_2a8);
          if (((ulong)pppppppuVar20 & 1) == 0) {
code_r0x00010ae69bbc:
            puVar14 = (undefined1 *)0x0;
          }
          else {
            if (((ulong)pppppppuVar17[0xc3] & 1) != 0) {
              if (uStack_2a0 < 8) goto code_r0x00010ae69e28;
              param_2 = (ushort *******)((uStack_2a0 - 8) + (long)pppppuStack_2a8);
              pppppppuVar15 = pppppppuVar17;
              FUN_10ae68138(pppppppuVar17,param_2,8,pppppppuVar35[6] + 6,0x20,pppppppuVar17 + 0x33,1
                            ,in_x7,pppppuStack_2a8,uStack_2a0,uStack_2a0 - 8);
              if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69bbc;
            }
            pppppuStack_2c8 = pppppuStack_2a8;
            uStack_2c0 = uStack_2a0;
            pppppuStack_2a8 = (ushort *****)0x0;
            uStack_2a0 = 0;
            param_2 = (ushort *******)&pppppuStack_2c8;
            pppppppuVar15 = pppppppuVar35;
            (*(code *)(*pppppppuVar35)[0xd])();
            if ((int)pppppppuVar15 == 0) {
              func_0x000107c2b534(pppppuStack_2c8);
              puVar14 = (undefined1 *)0x0;
              pppppuStack_2c8 = (ushort *****)0x0;
              uStack_2c0 = 0;
            }
            else {
              pppppppuVar15 = pppppppuVar35;
              (*(code *)(*pppppppuVar35)[0xe])();
              func_0x000107c2b534(pppppuStack_2c8);
              pppppuStack_2c8 = (ushort *****)0x0;
              uStack_2c0 = 0;
              if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69bbc;
              *(ushort *)((long)pppppppuVar35[6] + 0xd4) =
                   *(ushort *)((long)pppppppuVar35[6] + 0xd4) | 0x8000;
              *(undefined4 *)(pppppppuVar17 + 3) = 3;
              puVar14 = (undefined1 *)0x4;
            }
          }
          func_0x000107c2b534(pppppuStack_2a8);
        }
        pppppppuVar20 = (ushort *******)&pppppuStack_3a0;
        func_0x000107c2b204();
      }
      else {
code_r0x00010ae689a0:
        puVar14 = (undefined1 *)0x11;
      }
      break;
    case 3:
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      param_2 = (ushort *******)&uStack_330;
      pppppppuVar15 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar15 != 0) {
        pppppppuVar15 = (ushort *******)&uStack_330;
        pppppppuVar35 = pppppppuVar20;
        func_0x000107c2b6f8(pppppppuVar20,pppppppuVar15,1);
        if ((int)pppppppuVar35 != 0) {
          ppppppuStack_278 = ppppppuStack_328;
          ppppppuStack_270 = ppppppuStack_320;
          pppppppuVar15 = pppppppuVar20;
          FUN_10ae5965c(pppppppuVar20,&ppppppuStack_278,&pppppuStack_3a0);
          uVar12 = 0;
          if ((ushort *******)ppppppuStack_270 == (ushort *******)0x0) {
            uVar12 = (uint)pppppppuVar15;
          }
          if ((uVar12 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x83,&UNK_10f6d1513,0x26c);
            pppppppuVar15 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar20,2,0x32);
            pppppppuVar35 = pppppppuVar20;
          }
          else {
            ppppppuVar30 = pppppppuVar20[6];
            if (*(int *)(ppppppuVar30 + 0x1a) == 1) {
              ppppppuVar30 = &pppppuStack_3a0;
              FUN_10ae59824(ppppppuVar30,&ppppppuStack_278,0xfe0d);
              if (((ulong)ppppppuVar30 & 1) == 0) {
                func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x277);
                pppppppuVar15 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar20,2,0x6d);
                pppppppuVar35 = pppppppuVar20;
              }
              else {
                pppppppuVar15 = (ushort *******)ppppppuStack_278;
                if ((ushort *******)ppppppuStack_270 == (ushort *******)0x0) {
                  uVar25 = 0x32;
                  uVar24 = 0x286;
                }
                else {
                  uVar25 = 0x32;
                  uVar24 = 0x286;
                  if (((*(char *)ppppppuStack_278 == '\0') &&
                      ((ushort *******)0x2 < ppppppuStack_270)) &&
                     ((pppppppuVar15 = (ushort *******)((long)ppppppuStack_278 + 3),
                      (char *)0x1 < (char *)((long)ppppppuStack_270 + -3) &&
                      (((ushort *******)ppppppuStack_270 != (ushort *******)0x5 &&
                       ((char *)0x2 < (char *)((long)ppppppuStack_270 + -5))))))) {
                    pppppppuVar35 =
                         (ushort *******)
                         (ulong)((uint)(*(ushort *)((long)ppppppuStack_278 + 6) >> 8) |
                                (*(ushort *)((long)ppppppuStack_278 + 6) & 0xff00ff) << 8);
                    uVar31 = (long)(ppppppuStack_270 + -1) - (long)pppppppuVar35;
                    if ((pppppppuVar35 <= ppppppuStack_270 + -1) &&
                       ((1 < uVar31 &&
                        (pcVar3 = (char *)((long)ppppppuStack_278 + (long)pppppppuVar35),
                        uVar8 = *(ushort *)(pcVar3 + 8),
                        uVar31 - 2 == (ulong)((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8))))) {
                      if (((ushort)(*(ushort *)((long)ppppppuStack_278 + 1) >> 8 |
                                   *(ushort *)((long)ppppppuStack_278 + 1) << 8) ==
                           *(ushort *)pppppppuVar17[0x59]) &&
                         ((ushort)(*(ushort *)((long)ppppppuStack_278 + 3) >> 8 |
                                  *(ushort *)((long)ppppppuStack_278 + 3) << 8) ==
                          *(ushort *)pppppppuVar17[0x58])) {
                        uVar25 = 0x2f;
                        uVar24 = 0x28f;
                        if ((*(char *)((long)ppppppuStack_278 + 5) ==
                             *(char *)((long)pppppppuVar17 + 0x622)) &&
                           (pppppppuVar35 == (ushort *******)0x0)) {
                          apppppuStack_248[0] =
                               (ushort *****)CONCAT71(apppppuStack_248[0]._1_7_,0x32);
                          pppppppuVar35 = pppppppuVar17;
                          ppppppuStack_278 = (ushort ******)pppppppuVar15;
                          FUN_10ae5875c(pppppppuVar17,apppppuStack_248,&pppppuStack_2a8,pppppppuVar2
                                        ,&pppppuStack_3a0,pcVar3 + 10);
                          if (((ulong)pppppppuVar35 & 1) != 0) {
                            pppppppuVar15 = pppppppuVar17;
                            FUN_10ae5cbc0(pppppppuVar17,&uStack_330,&pppppuStack_3a0);
                            if (((ulong)pppppppuVar15 & 1) == 0) {
                              uVar24 = 0x44;
                              uVar25 = 0x2a2;
                              goto code_r0x00010ae693e4;
                            }
                            ppppppuVar30 = pppppppuVar20[6];
                            goto code_r0x00010ae68c24;
                          }
                          func_0x000107c2b29c(0x10,0,0x8a,&UNK_10f6d1513,0x29b);
                          pppppppuVar15 = (ushort *******)0x2;
                          FUN_10ae60390(pppppppuVar20,2,(ulong)apppppuStack_248[0] & 0xff);
                          pppppppuVar35 = pppppppuVar20;
                          goto LAB_10ae693e8;
                        }
                      }
                      else {
                        uVar25 = 0x2f;
                        uVar24 = 0x28f;
                      }
                    }
                  }
                }
                ppppppuStack_278 = (ushort ******)pppppppuVar15;
                func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,uVar24);
                pppppppuVar15 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar20,2,uVar25);
                pppppppuVar35 = pppppppuVar20;
              }
            }
            else {
code_r0x00010ae68c24:
              if ((*(ushort *)((long)ppppppuVar30 + 0xd4) >> 6 & 1) == 0) {
code_r0x00010ae68c2c:
                param_2 = (ushort *******)&pppppuStack_3a0;
                pppppppuVar35 = pppppppuVar17;
                FUN_10ae69f5c();
                pppppppuVar15 = param_2;
                if ((int)pppppppuVar35 != 0) {
                  if (((uint)uStack_330 & 1) == 0) {
                    pppppppuVar35 = pppppppuVar17 + 0x33;
                    param_2 = (ushort *******)ppppppuStack_318;
                    func_0x000107c2b894(pppppppuVar35,ppppppuStack_318,uStack_310);
                    pppppppuVar15 = param_2;
                    if ((int)pppppppuVar35 == 0) goto LAB_10ae693e8;
                  }
                  pppppppuVar15 = pppppppuVar20;
                  (*(code *)(*pppppppuVar20)[5])();
                  if ((int)pppppppuVar15 != 0) {
                    FUN_10ae60390(pppppppuVar20,2,10);
                    uVar24 = 0xff;
                    uVar25 = 0x2d5;
                    goto code_r0x00010ae693e4;
                  }
                  (*(code *)(*pppppppuVar20)[4])(pppppppuVar20);
                  pppppppuVar20 = (ushort *******)pppppppuVar17[0x47];
                  func_0x000107c2b534();
                  *pppppppuVar2 = (ushort ******)0x0;
                  pppppppuVar17[0x48] = (ushort ******)0x0;
                  puVar14 = (undefined1 *)0x1;
                  *(undefined4 *)(pppppppuVar17 + 3) = 4;
                  break;
                }
              }
              else {
                ppppppuVar30 = &pppppuStack_3a0;
                FUN_10ae59824(ppppppuVar30,&ppppppuStack_278,0x29);
                if (((ulong)ppppppuVar30 & 1) == 0) {
                  func_0x000107c2b29c(0x10,0,0x12f,&UNK_10f6d1513,0x2b2);
                  pppppppuVar15 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar20,2,0x2f);
                  pppppppuVar35 = pppppppuVar20;
                }
                else {
                  uStack_2e8._0_1_ = 0x32;
                  pppppppuVar15 = pppppppuVar17;
                  func_0x00010ae59cd0(pppppppuVar17,apppppuStack_248,&pppppuStack_2a8,
                                      &pppppuStack_2c8,&uStack_2e8,&pppppuStack_3a0,
                                      &ppppppuStack_278);
                  uVar22 = (undefined1)uStack_2e8;
                  if (((ulong)pppppppuVar15 & 1) != 0) {
                    pppppppuVar15 = pppppppuVar17;
                    FUN_10ae68018(pppppppuVar17,pppppppuVar17[0xbb],&uStack_330,&pppppuStack_2a8);
                    if ((int)pppppppuVar15 != 0) goto code_r0x00010ae68c2c;
                    uVar22 = 0x33;
                  }
                  pppppppuVar15 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar20,2,uVar22);
                  pppppppuVar35 = pppppppuVar20;
                }
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae6931c:
      pppppppuVar20 = pppppppuVar15;
      puVar14 = (undefined1 *)0x3;
      break;
    case 4:
      ppppppuVar30 = *pppppppuVar17;
      pppppuVar40 = ppppppuVar30[6];
      pppppppuVar20 = (ushort *******)pppppppuVar17[0xc2];
      if (pppppppuVar20 == (ushort *******)0x0) {
        func_0x000107c2b3c4(pppppuVar40 + 2,0x20,&UNK_10e525a20);
      }
      else if (((*(byte *)((long)pppppppuVar17 + 0x61a) >> 4 & 1) == 0) &&
              (pppppppuVar20[1] == (ushort ******)0x20)) {
        ppppppuVar38 = *pppppppuVar20;
        pppppuVar42 = *ppppppuVar38;
        pppppuVar44 = ppppppuVar38[3];
        pppppuVar43 = ppppppuVar38[2];
        pppppuVar40[3] = (ushort ****)ppppppuVar38[1];
        pppppuVar40[2] = (ushort ****)pppppuVar42;
        pppppuVar40[5] = (ushort ****)pppppuVar44;
        pppppuVar40[4] = (ushort ****)pppppuVar43;
      }
      else {
        func_0x000107c2b3c4(pppppuVar40 + 2,0x20,&UNK_10e525a20);
        if ((*(byte *)((long)pppppppuVar17 + 0x61a) >> 4 & 1) != 0) {
          pppppppuVar15 = (ushort *******)0x20;
          pppppppuVar35 = pppppppuVar20;
          func_0x000107c2b684();
          if ((int)pppppppuVar35 == 0) goto LAB_10ae693e8;
          ppppppuVar38 = *pppppppuVar20;
          pppppuVar42 = (ushort *****)pppppuVar40[2];
          pppppuVar44 = (ushort *****)pppppuVar40[5];
          pppppuVar43 = (ushort *****)pppppuVar40[4];
          ppppppuVar38[1] = (ushort *****)pppppuVar40[3];
          *ppppppuVar38 = pppppuVar42;
          ppppppuVar38[3] = pppppuVar44;
          ppppppuVar38[2] = pppppuVar43;
        }
      }
      ppppppuStack_258 = (ushort ******)0x0;
      uStack_250 = 0;
      puStack_398 = (ushort *)0x0;
      pppppuStack_3a0 = (ushort *****)0x0;
      ppppppuStack_388 = (ushort ******)0x0;
      uStack_390 = 0;
      param_2 = (ushort *******)&pppppuStack_3a0;
      ppppppuVar38 = ppppppuVar30;
      (*(code *)(*ppppppuVar30)[0xb])(ppppppuVar30,param_2,&uStack_330,2);
      if ((int)ppppppuVar38 == 0) {
code_r0x00010ae69d9c:
        puVar14 = (undefined1 *)0x0;
      }
      else {
        iVar13 = (int)&uStack_330;
        param_2 = (ushort *******)0x303;
        func_0x000107c2b228();
        if (iVar13 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_330;
        param_2 = (ushort *******)(ppppppuVar30[6] + 2);
        func_0x000107c2b21c(puVar19,param_2,0x20);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_330;
        param_2 = (ushort *******)apppppuStack_248;
        func_0x000107c34f3c(puVar19,param_2,1);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        ppppppuVar38 = apppppuStack_248;
        param_2 = (ushort *******)((long)pppppppuVar17 + 0x623);
        func_0x000107c2b21c(ppppppuVar38,param_2,*(char *)((long)pppppppuVar17 + 0x643));
        if ((int)ppppppuVar38 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)(ulong)*(ushort *)(pppppppuVar17[0xbf] + 2);
        iVar13 = (int)&uStack_330;
        func_0x000107c2b228();
        if (iVar13 == 0) goto code_r0x00010ae69d9c;
        iVar13 = (int)&uStack_330;
        param_2 = (ushort *******)0x0;
        func_0x000107c2b218();
        if (iVar13 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_330;
        param_2 = &ppppppuStack_278;
        func_0x000107c34f3c(puVar19,param_2,2);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        param_2 = &ppppppuStack_278;
        pppppppuVar15 = pppppppuVar17;
        func_0x00010ae59ec4();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_2 = &ppppppuStack_278;
        pppppppuVar15 = pppppppuVar17;
        FUN_10ae5a0c0();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_2 = &ppppppuStack_278;
        pppppppuVar15 = pppppppuVar17;
        FUN_10ae6a27c();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&pppppuStack_3a0;
        ppppppuVar38 = ppppppuVar30;
        (*(code *)(*ppppppuVar30)[0xc])(ppppppuVar30,param_2,&ppppppuStack_258);
        if (((ulong)ppppppuVar38 & 1) == 0) goto code_r0x00010ae69d9c;
        if (((ulong)pppppppuVar17[0xc3] & 1) != 0) {
          uVar31 = 0x1e;
          if (*(char *)*ppppppuVar30 != '\0') {
            uVar31 = 0x26;
          }
          param_2 = (ushort *******)(pppppuVar40 + 5);
          pppppppuVar20 = pppppppuVar17;
          FUN_10ae68138(pppppppuVar17,param_2,8,ppppppuVar30[6] + 6,0x20,pppppppuVar17 + 0x33,0,
                        in_x7,ppppppuStack_258,uStack_250,uVar31);
          if (((ulong)pppppppuVar20 & 1) == 0) goto code_r0x00010ae69d9c;
          if (uStack_250 < uVar31) goto code_r0x00010ae69e28;
          *(ushort *****)((long)ppppppuStack_258 + uVar31) = pppppuVar40[5];
        }
        ppppppuStack_288 = ppppppuStack_258;
        uStack_280 = uStack_250;
        ppppppuStack_258 = (ushort ******)0x0;
        uStack_250 = 0;
        param_2 = &ppppppuStack_288;
        ppppppuVar38 = ppppppuVar30;
        (*(code *)(*ppppppuVar30)[0xd])();
        func_0x000107c2b534(ppppppuStack_288);
        ppppppuStack_288 = (ushort ******)0x0;
        uStack_280 = 0;
        if (((ulong)ppppppuVar38 & 1) == 0) goto code_r0x00010ae69d9c;
        func_0x000107c2b534(pppppppuVar17[0x4b]);
        pppppppuVar17[0x4b] = (ushort ******)0x0;
        pppppppuVar17[0x4c] = (ushort ******)0x0;
        if (((-1 < *(short *)((long)ppppppuVar30[6] + 0xd4)) &&
            (ppppppuVar38 = ppppppuVar30, (*(code *)(*ppppppuVar30)[0xe])(), (int)ppppppuVar38 == 0)
            ) || (pppppppuVar15 = pppppppuVar17, func_0x000107c2b904(), (int)pppppppuVar15 == 0))
        goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)0x2;
        ppppppuVar38 = ppppppuVar30;
        func_0x000107c2b8fc(ppppppuVar30,2,1,pppppppuVar17[0xbb],pppppppuVar17 + 0x17,
                            pppppppuVar17[4]);
        if (((ulong)ppppppuVar38 & 1) == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&pppppuStack_3a0;
        ppppppuVar38 = ppppppuVar30;
        (*(code *)(*ppppppuVar30)[0xb])(ppppppuVar30,param_2,&uStack_330,8);
        if ((int)ppppppuVar38 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&uStack_330;
        pppppppuVar15 = pppppppuVar17;
        func_0x00010ae5a300();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&pppppuStack_3a0;
        ppppppuVar38 = ppppppuVar30;
        func_0x000107c2b6fc();
        if ((int)ppppppuVar38 == 0) goto code_r0x00010ae69d9c;
        uVar12 = *(uint *)(pppppppuVar17 + 0xc3);
        if ((*(ushort *)((long)ppppppuVar30[6] + 0xd4) >> 6 & 1) == 0) {
          uVar5 = uVar12 & 0xffffffdf;
          uVar9 = uVar12 & 0x1000000;
          uVar12 = uVar12 & 0xffffffc0 |
                   uVar12 & 0x1f | (*(byte *)(pppppppuVar17[1] + 0x1d) & 1) << 5;
          *(uint *)(pppppppuVar17 + 0xc3) = uVar12;
          if (uVar9 != 0 && ((ulong)pppppppuVar17[1][0x1d] & 4) != 0) {
            uVar12 = uVar5;
          }
          *(uint *)(pppppppuVar17 + 0xc3) = uVar12;
        }
        if ((uVar12 >> 5 & 1) != 0) {
          param_2 = (ushort *******)&pppppuStack_3a0;
          ppppppuVar38 = ppppppuVar30;
          (*(code *)(*ppppppuVar30)[0xb])(ppppppuVar30,param_2,&uStack_330,0xd);
          if ((int)ppppppuVar38 != 0) {
            iVar13 = (int)&uStack_330;
            param_2 = (ushort *******)0x0;
            func_0x000107c2b218();
            if (iVar13 != 0) {
              puVar19 = &uStack_330;
              param_2 = (ushort *******)&pppppuStack_2a8;
              func_0x000107c34f3c(puVar19,param_2,2);
              if ((int)puVar19 != 0) {
                iVar13 = (int)&pppppuStack_2a8;
                param_2 = (ushort *******)0xd;
                func_0x000107c2b228();
                if (iVar13 != 0) {
                  ppppppuVar38 = &pppppuStack_2a8;
                  param_2 = (ushort *******)&pppppuStack_2c8;
                  func_0x000107c34f3c(ppppppuVar38,param_2,2);
                  if ((int)ppppppuVar38 != 0) {
                    ppppppuVar38 = &pppppuStack_2c8;
                    param_2 = (ushort *******)&uStack_2e8;
                    func_0x000107c34f3c(ppppppuVar38,param_2,2);
                    if ((int)ppppppuVar38 != 0) {
                      param_2 = (ushort *******)&uStack_2e8;
                      pppppppuVar15 = pppppppuVar17;
                      func_0x000107c2b6b0();
                      if (((ulong)pppppppuVar15 & 1) != 0) {
                        pppppuVar40 = pppppppuVar17[1][10];
                        if (((pppppuVar40 == (ushort *****)0x0) &&
                            (pppppuVar40 = (ushort *****)(*pppppppuVar17[1])[0xd][0x31],
                            pppppuVar40 == (ushort *****)0x0)) || (*pppppuVar40 == (ushort ****)0x0)
                           ) {
code_r0x00010ae69d54:
                          param_2 = (ushort *******)&pppppuStack_3a0;
                          ppppppuVar38 = ppppppuVar30;
                          func_0x000107c2b6fc();
                          if (((ulong)ppppppuVar38 & 1) != 0) goto code_r0x00010ae69238;
                        }
                        else {
                          iVar13 = (int)&pppppuStack_2a8;
                          param_2 = (ushort *******)0x2f;
                          func_0x000107c2b228();
                          if (iVar13 != 0) {
                            ppppppuVar38 = &pppppuStack_2a8;
                            param_2 = appppppuStack_308;
                            func_0x000107c34f3c(ppppppuVar38,param_2,2);
                            if ((int)ppppppuVar38 != 0) {
                              param_2 = appppppuStack_308;
                              pppppppuVar15 = pppppppuVar17;
                              FUN_10ae626b8();
                              if ((int)pppppppuVar15 != 0) {
                                iVar13 = (int)&pppppuStack_2a8;
                                func_0x000107c2b20c();
                                if (iVar13 != 0) goto code_r0x00010ae69d54;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto code_r0x00010ae69d9c;
        }
code_r0x00010ae69238:
        if ((*(ushort *)((long)ppppppuVar30[6] + 0xd4) >> 6 & 1) == 0) {
          pppppppuVar15 = pppppppuVar17;
          FUN_10ae61f18();
          if (((ulong)pppppppuVar15 & 1) == 0) {
            param_2 = (ushort *******)0x0;
            func_0x000107c2b29c(0x10,0,0xae,&UNK_10f6d1513,0x35d);
          }
          else {
            pppppppuVar15 = pppppppuVar17;
            FUN_10ae66d90();
            if ((int)pppppppuVar15 != 0) {
              uVar28 = 5;
              goto code_r0x00010ae69d74;
            }
          }
          goto code_r0x00010ae69d9c;
        }
        uVar28 = 6;
code_r0x00010ae69d74:
        *(undefined4 *)(pppppppuVar17 + 3) = uVar28;
        puVar14 = (undefined1 *)0x1;
      }
      func_0x000107c2b204(&pppppuStack_3a0);
      pppppppuVar20 = (ushort *******)ppppppuStack_258;
      func_0x000107c2b534();
      break;
    case 5:
      pppppppuVar20 = pppppppuVar17;
      FUN_10ae673c0();
      if ((int)pppppppuVar20 == 0) {
        uVar28 = 6;
      }
      else {
        pppppppuVar35 = pppppppuVar20;
        pppppppuVar15 = param_2;
        if ((int)pppppppuVar20 != 1) goto LAB_10ae693e8;
        puVar14 = (undefined1 *)0x9;
        uVar28 = 5;
      }
      goto code_r0x00010ae69444;
    case 6:
      if ((*(uint *)(pppppppuVar17 + 0xc3) >> 0x14 & 1) != 0) goto code_r0x00010ae689a0;
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      *(uint *)(pppppppuVar17 + 0xc3) = *(uint *)(pppppppuVar17 + 0xc3) | 0x800000;
      pppppppuVar35 = pppppppuVar17;
      func_0x000107c2b8e4();
      pppppppuVar15 = param_2;
      if ((int)pppppppuVar35 != 0) {
        pppppppuVar15 = (ushort *******)&UNK_10e52b4d2;
        pppppppuVar35 = pppppppuVar17;
        func_0x000107c2b8f8(pppppppuVar17,&UNK_10e52b4d2,
                            *(undefined4 *)((long)pppppppuVar17[0x34] + 4));
        if (((int)pppppppuVar35 != 0) &&
           (pppppppuVar35 = pppppppuVar17, func_0x000107c2b908(), (int)pppppppuVar35 != 0)) {
          param_2 = (ushort *******)0x3;
          func_0x000107c2b8fc(pppppppuVar20,3,1,pppppppuVar17[0xbb],pppppppuVar17 + 0x23,
                              pppppppuVar17[4]);
          pppppppuVar35 = pppppppuVar20;
          pppppppuVar15 = param_2;
          if ((int)pppppppuVar20 != 0) {
            uVar12 = 7;
            *(undefined4 *)(pppppppuVar17 + 3) = 7;
            if ((*(byte *)((long)pppppppuVar17 + 0x61a) & 8) == 0) {
              uVar12 = 1;
            }
            puVar14 = (undefined1 *)(ulong)uVar12;
            break;
          }
        }
      }
      goto LAB_10ae693e8;
    case 7:
      if ((*(ushort *)((long)(*pppppppuVar17)[6] + 0xd4) >> 0xc & 1) != 0) {
        if ((*pppppppuVar17)[0x13] == (ushort *****)0x0) {
          pppppppuVar15 = pppppppuVar17 + 0x33;
          func_0x000107c2b894(pppppppuVar15,&UNK_10e52b512,4);
          if (((ulong)pppppppuVar15 & 1) != 0) goto code_r0x00010ae68e30;
          uVar24 = 0x44;
          uVar25 = 0x3a1;
code_r0x00010ae693e4:
          pppppppuVar15 = (ushort *******)0x0;
          pppppppuVar35 = (ushort *******)0x10;
          func_0x000107c2b29c(0x10,0,uVar24,&UNK_10f6d1513,uVar25);
        }
        else {
code_r0x00010ae68e30:
          pppppppuVar15 = pppppppuVar17 + 0x29;
          pppppppuVar35 = pppppppuVar17;
          func_0x000107c2b914(pppppppuVar17,pppppppuVar15,&pppppuStack_3a0,0);
          if ((int)pppppppuVar35 != 0) {
            if ((ushort ******)pppppuStack_3a0 != pppppppuVar17[4]) {
              uVar24 = 0x44;
              uVar25 = 0x3ac;
              goto code_r0x00010ae693e4;
            }
            uStack_330._0_4_ = CONCAT13((char)pppppuStack_3a0,0x14);
            pppppppuVar35 = pppppppuVar17 + 0x33;
            pppppppuVar15 = (ushort *******)&uStack_330;
            func_0x000107c2b894(pppppppuVar35,pppppppuVar15,4);
            if ((int)pppppppuVar35 != 0) {
              pppppppuVar35 = pppppppuVar17 + 0x33;
              pppppppuVar15 = pppppppuVar17 + 0x29;
              func_0x000107c2b894(pppppppuVar35,pppppppuVar15,pppppppuVar17[4]);
              if (((int)pppppppuVar35 != 0) &&
                 (pppppppuVar35 = pppppppuVar17, func_0x000107c2b910(), (int)pppppppuVar35 != 0)) {
                pppppppuVar15 = &ppppppuStack_278;
                pppppppuVar35 = pppppppuVar17;
                FUN_10ae6a2ec();
                pppppppuVar20 = pppppppuVar35;
                param_2 = pppppppuVar15;
                if (((ulong)pppppppuVar35 & 1) != 0) goto code_r0x00010ae685b8;
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae685b8:
      *(undefined4 *)(pppppppuVar17 + 3) = 8;
      puVar14 = (undefined1 *)0x4;
      break;
    case 8:
      pppppppuVar41 = (ushort *******)*pppppppuVar17;
      if ((*(ushort *)((long)pppppppuVar41[6] + 0xd4) >> 0xc & 1) != 0) {
        param_2 = (ushort *******)0x1;
        pppppppuVar20 = pppppppuVar41;
        func_0x000107c2b8fc(pppppppuVar41,1,0,pppppppuVar17[0xbb],pppppppuVar17 + 0xb,
                            pppppppuVar17[4]);
        pppppppuVar35 = pppppppuVar20;
        pppppppuVar15 = param_2;
        if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
        *(uint *)(pppppppuVar17 + 0xc3) = *(uint *)(pppppppuVar17 + 0xc3) | 0x6800;
      }
      if (pppppppuVar41[0x13] == (ushort ******)0x0) {
        uVar12 = 0xe;
      }
      else {
        param_2 = (ushort *******)0x2;
        pppppppuVar20 = pppppppuVar41;
        func_0x000107c2b8fc(pppppppuVar41,2,0,pppppppuVar17[0xbb],pppppppuVar17 + 0x11,
                            pppppppuVar17[4]);
        pppppppuVar35 = pppppppuVar20;
        pppppppuVar15 = param_2;
        if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
        uVar12 = 0xc;
      }
      *(undefined4 *)(pppppppuVar17 + 3) = 9;
      if ((*(ushort *)((long)pppppppuVar41[6] + 0xd4) & 0x1000) == 0) {
        uVar12 = 1;
      }
      puVar14 = (undefined1 *)(ulong)uVar12;
      break;
    case 9:
      pppppppuVar41 = (ushort *******)*pppppppuVar17;
      if (pppppppuVar41[0x13] == (ushort ******)0x0) {
        if ((*(ushort *)((long)pppppppuVar41[6] + 0xd4) >> 0xc & 1) != 0) {
          param_2 = (ushort *******)&pppppuStack_3a0;
          pppppppuVar15 = pppppppuVar41;
          (*(code *)(*pppppppuVar41)[3])();
          if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
          pppppppuVar15 = (ushort *******)&pppppuStack_3a0;
          pppppppuVar35 = pppppppuVar41;
          func_0x000107c2b6f8(pppppppuVar41,pppppppuVar15,5);
          if ((int)pppppppuVar35 == 0) goto LAB_10ae693e8;
          if (uStack_390 != 0) {
            FUN_10ae60390(pppppppuVar41,2,0x32);
            uVar24 = 0x89;
            uVar25 = 0x3f5;
            goto code_r0x00010ae693e4;
          }
          (*(code *)(*pppppppuVar41)[4])(pppppppuVar41);
        }
        pppppppuVar15 = (ushort *******)0x2;
        func_0x000107c2b8fc(pppppppuVar41,2,0,pppppppuVar17[0xbb],pppppppuVar17 + 0x11,
                            pppppppuVar17[4]);
        pppppppuVar35 = pppppppuVar41;
        pppppppuVar20 = pppppppuVar41;
        param_2 = pppppppuVar15;
        if ((int)pppppppuVar41 == 0) goto LAB_10ae693e8;
      }
      uVar28 = 10;
code_r0x00010ae69444:
      *(undefined4 *)(pppppppuVar17 + 3) = uVar28;
      break;
    case 10:
      if (((*(byte *)(pppppppuVar17[0xbb] + 0x36) >> 6 & 1) != 0) &&
         (pppppppuVar41 = (ushort *******)*pppppppuVar17,
         (*(ushort *)((long)pppppppuVar41[6] + 0xd4) >> 0xc & 1) == 0)) {
        param_2 = (ushort *******)&pppppuStack_3a0;
        pppppppuVar15 = pppppppuVar41;
        (*(code *)(*pppppppuVar41)[3])();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
        pppppppuVar15 = (ushort *******)&pppppuStack_3a0;
        pppppppuVar35 = pppppppuVar41;
        func_0x000107c2b6f8(pppppppuVar41,pppppppuVar15,8);
        if ((int)pppppppuVar35 == 0) goto LAB_10ae693e8;
        if (1 < uStack_390) {
          pppppppuVar15 =
               (ushort *******)(ulong)((uint)(*puStack_398 >> 8) | (*puStack_398 & 0xff00ff) << 8);
          if ((pppppppuVar15 <= (ushort *******)(uStack_390 - 2)) &&
             (ppppppuStack_278 = (ushort ******)(puStack_398 + 1),
             ppppppuStack_270 = (ushort ******)pppppppuVar15,
             (ushort *******)(uStack_390 - 2) == pppppppuVar15)) {
            uStack_330._0_4_ = 0x14469;
            ppppppuStack_328 = (ushort ******)0x0;
            ppppppuStack_320 = (ushort ******)0x0;
            pppppuStack_2a8 = (ushort *****)CONCAT71(pppppuStack_2a8._1_7_,0x32);
            pppppppuVar20 = &ppppppuStack_278;
            apppppuStack_248[0] = (ushort *****)&uStack_330;
            func_0x000107c2b700(pppppppuVar20,&pppppuStack_2a8,apppppuStack_248,1,0);
            ppppppuVar30 = ppppppuStack_320;
            pppppppuVar15 = (ushort *******)ppppppuStack_328;
            if (((ulong)pppppppuVar20 & 1) == 0) {
              uVar31 = (ulong)pppppuStack_2a8 & 0xff;
            }
            else if (((uint)uStack_330 & 0x1000000) == 0) {
              func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x424);
              uVar31 = 0x6d;
            }
            else {
              ppppppuVar38 = *pppppppuVar1;
              uVar12 = (int)ppppppuVar38 + 0x1a0;
              param_2 = (ushort *******)ppppppuStack_320;
              func_0x000107c2b684();
              uVar5 = uVar12 ^ 1;
              if ((ushort *******)ppppppuVar30 == (ushort *******)0x0) {
                uVar5 = 1;
              }
              if ((uVar5 & 1) == 0) {
                _memcpy(ppppppuVar38[0x34],pppppppuVar15,ppppppuVar30);
                param_2 = pppppppuVar15;
              }
              if (uVar12 != 0) {
                if (((ulong)pppppuStack_3a0 & 1) == 0) {
                  pppppppuVar15 = pppppppuVar17 + 0x33;
                  param_2 = (ushort *******)ppppppuStack_388;
                  func_0x000107c2b894(pppppppuVar15,ppppppuStack_388,uStack_380);
                  if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae698a0;
                }
                (*(code *)(*pppppppuVar41)[4])();
                pppppppuVar20 = pppppppuVar41;
                goto code_r0x00010ae6858c;
              }
code_r0x00010ae698a0:
              uVar31 = 0x50;
            }
            pppppppuVar15 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar41,2,uVar31);
            pppppppuVar35 = pppppppuVar41;
            goto LAB_10ae693e8;
          }
        }
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,0x416);
        pppppppuVar15 = (ushort *******)0x2;
        FUN_10ae60390(pppppppuVar41,2,0x32);
        pppppppuVar35 = pppppppuVar41;
        goto LAB_10ae693e8;
      }
code_r0x00010ae6858c:
      uVar28 = 0xb;
code_r0x00010ae68cb8:
      *(undefined4 *)(pppppppuVar17 + 3) = uVar28;
code_r0x00010ae68cbc:
      puVar14 = (undefined1 *)0x1;
      break;
    case 0xb:
      pppppppuVar41 = (ushort *******)*pppppppuVar17;
      if ((*(byte *)(pppppppuVar17 + 0xc3) >> 5 & 1) == 0) {
        if ((*(ushort *)((long)pppppppuVar41[6] + 0xd4) >> 6 & 1) == 0) {
          (*pppppppuVar1)[0x17] = (ushort *****)0x0;
        }
        uVar28 = 0xd;
        goto code_r0x00010ae68cb8;
      }
      pppppuVar40 = pppppppuVar17[1][0x1d];
      param_2 = (ushort *******)&pppppuStack_3a0;
      pppppppuVar15 = pppppppuVar41;
      (*(code *)(*pppppppuVar41)[3])();
      if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
      pppppppuVar15 = (ushort *******)&pppppuStack_3a0;
      pppppppuVar35 = pppppppuVar41;
      func_0x000107c2b6f8(pppppppuVar41,pppppppuVar15,0xb);
      if ((int)pppppppuVar35 != 0) {
        param_2 = (ushort *******)&pppppuStack_3a0;
        pppppppuVar35 = pppppppuVar17;
        func_0x000107c2b8d0(pppppppuVar17,param_2,((ulong)pppppuVar40 & 2) == 0);
        pppppppuVar15 = param_2;
        if ((int)pppppppuVar35 != 0) {
          if (((ulong)pppppuStack_3a0 & 1) == 0) {
            pppppppuVar35 = pppppppuVar17 + 0x33;
            param_2 = (ushort *******)ppppppuStack_388;
            func_0x000107c2b894(pppppppuVar35,ppppppuStack_388,uStack_380);
            pppppppuVar15 = param_2;
            if ((int)pppppppuVar35 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar41)[4])();
          uVar28 = 0xc;
          pppppppuVar20 = pppppppuVar41;
          goto code_r0x00010ae68cb8;
        }
      }
      goto LAB_10ae693e8;
    case 0xc:
      if ((pppppppuVar17[0xbb][0x12] == (ushort *****)0x0) ||
         (*pppppppuVar17[0xbb][0x12] == (ushort ****)0x0)) {
code_r0x00010ae69440:
        puVar14 = (undefined1 *)0x1;
        uVar28 = 0xd;
        goto code_r0x00010ae69444;
      }
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      param_2 = (ushort *******)&pppppuStack_3a0;
      pppppppuVar15 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
      pppppppuVar35 = pppppppuVar17;
      func_0x000107c2b704();
      pppppppuVar15 = param_2;
      if ((int)pppppppuVar35 != 1) {
        if ((int)pppppppuVar35 == 2) {
          puVar14 = (undefined1 *)0x10;
          uVar28 = 0xc;
          pppppppuVar20 = pppppppuVar35;
          goto code_r0x00010ae69444;
        }
        pppppppuVar15 = (ushort *******)&pppppuStack_3a0;
        pppppppuVar35 = pppppppuVar20;
        func_0x000107c2b6f8(pppppppuVar20,pppppppuVar15,0xf);
        if ((int)pppppppuVar35 != 0) {
          param_2 = (ushort *******)&pppppuStack_3a0;
          pppppppuVar35 = pppppppuVar17;
          func_0x000107c2b8d4();
          pppppppuVar15 = param_2;
          if ((int)pppppppuVar35 != 0) {
            if (((ulong)pppppuStack_3a0 & 1) == 0) {
              pppppppuVar35 = pppppppuVar17 + 0x33;
              param_2 = (ushort *******)ppppppuStack_388;
              func_0x000107c2b894(pppppppuVar35,ppppppuStack_388,uStack_380);
              pppppppuVar15 = param_2;
              if ((int)pppppppuVar35 == 0) goto LAB_10ae693e8;
            }
            (*(code *)(*pppppppuVar20)[4])();
            goto code_r0x00010ae69440;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xd:
      if ((*(byte *)((long)pppppppuVar17 + 0x61b) & 1) == 0) {
code_r0x00010ae68468:
        uVar28 = 0xe;
        goto code_r0x00010ae69444;
      }
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      param_2 = (ushort *******)&pppppuStack_3a0;
      pppppppuVar15 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
      pppppppuVar15 = (ushort *******)&pppppuStack_3a0;
      pppppppuVar35 = pppppppuVar20;
      func_0x000107c2b6f8(pppppppuVar20,pppppppuVar15,0xcb);
      if ((int)pppppppuVar35 != 0) {
        param_2 = (ushort *******)&pppppuStack_3a0;
        pppppppuVar35 = pppppppuVar17;
        FUN_10ae5aebc();
        pppppppuVar15 = param_2;
        if ((int)pppppppuVar35 != 0) {
          if (((ulong)pppppuStack_3a0 & 1) == 0) {
            pppppppuVar35 = pppppppuVar17 + 0x33;
            param_2 = (ushort *******)ppppppuStack_388;
            func_0x000107c2b894(pppppppuVar35,ppppppuStack_388,uStack_380);
            pppppppuVar15 = param_2;
            if ((int)pppppppuVar35 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar20)[4])();
          goto code_r0x00010ae68468;
        }
      }
      goto LAB_10ae693e8;
    case 0xe:
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      param_2 = (ushort *******)&pppppuStack_3a0;
      pppppppuVar15 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
      pppppppuVar15 = (ushort *******)&pppppuStack_3a0;
      pppppppuVar35 = pppppppuVar20;
      func_0x000107c2b6f8(pppppppuVar20,pppppppuVar15,0x14);
      if ((int)pppppppuVar35 != 0) {
        pppppppuVar15 = (ushort *******)&pppppuStack_3a0;
        pppppppuVar35 = pppppppuVar17;
        func_0x000107c2b8d8(pppppppuVar17,pppppppuVar15,
                            *(ushort *)((long)pppppppuVar20[6] + 0xd4) >> 0xc & 1);
        if ((int)pppppppuVar35 != 0) {
          param_2 = (ushort *******)0x3;
          pppppppuVar35 = pppppppuVar20;
          func_0x000107c2b8fc(pppppppuVar20,3,0,pppppppuVar17[0xbb],pppppppuVar17 + 0x1d,
                              pppppppuVar17[4]);
          pppppppuVar15 = param_2;
          if ((int)pppppppuVar35 != 0) {
            if ((*(ushort *)((long)pppppppuVar20[6] + 0xd4) >> 0xc & 1) == 0) {
              if (((ulong)pppppuStack_3a0 & 1) == 0) {
                pppppppuVar35 = pppppppuVar17 + 0x33;
                param_2 = (ushort *******)ppppppuStack_388;
                func_0x000107c2b894(pppppppuVar35,ppppppuStack_388,uStack_380);
                pppppppuVar15 = param_2;
                if ((int)pppppppuVar35 == 0) goto LAB_10ae693e8;
              }
              pppppppuVar35 = pppppppuVar17;
              func_0x000107c2b910();
              pppppppuVar15 = param_2;
              if ((int)pppppppuVar35 == 0) goto LAB_10ae693e8;
              uVar28 = 0xf;
            }
            else {
              uVar28 = 0x10;
            }
            *(undefined4 *)(pppppppuVar17 + 3) = uVar28;
            (*(code *)(*pppppppuVar20)[4])();
            goto code_r0x00010ae68cbc;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xf:
      param_2 = (ushort *******)&pppppuStack_3a0;
      pppppppuVar20 = pppppppuVar17;
      FUN_10ae6a2ec();
      pppppppuVar35 = pppppppuVar20;
      pppppppuVar15 = param_2;
      if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
      *(undefined4 *)(pppppppuVar17 + 3) = 0x10;
      uVar12 = 4;
      if (((*pppppppuVar17)[0x13] != (ushort *****)0x0 & (byte)pppppuStack_3a0) == 0) {
        uVar12 = 1;
      }
      puVar14 = (undefined1 *)(ulong)uVar12;
      break;
    case 0x10:
      goto code_r0x00010ae69de8;
    }
    if (*(int *)(pppppppuVar17 + 3) != iVar11) {
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      ppppppuVar30 = pppppppuVar20[0xc];
      if ((ppppppuVar30 != (ushort ******)0x0) ||
         (ppppppuVar30 = (ushort ******)pppppppuVar20[0xd][0x30], ppppppuVar30 != (ushort ******)0x0
         )) {
        param_2 = (ushort *******)0x2001;
        (*(code *)ppppppuVar30)(pppppppuVar20,0x2001,1);
      }
    }
  } while ((int)puVar14 == 1);
code_r0x00010ae69de8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return puVar14;
  }
  ___stack_chk_fail();
code_r0x00010ae69e28:
  _abort();
  func_0x000107c2b534(pppppuStack_2a8);
  func_0x000107c2b204(&pppppuStack_3a0);
  __Unwind_Resume();
  if ((*(byte *)(pppppppuVar20 + 0x36) >> 5 & 1) == 0) {
    return (undefined1 *)0x1;
  }
  ppppppuVar30 = pppppppuVar20[0x38];
  if ((ppppppuVar30 != (ushort ******)0x0) && (param_2[0x17] == ppppppuVar30)) {
    bVar33 = 0;
    ppppppuVar38 = param_2[0x16];
    ppppppuVar39 = pppppppuVar20[0x37];
    do {
      bVar33 = *(byte *)ppppppuVar39 ^ *(byte *)ppppppuVar38 | bVar33;
      ppppppuVar30 = (ushort ******)((long)ppppppuVar30 + -1);
      ppppppuVar38 = (ushort ******)((long)ppppppuVar38 + 1);
      ppppppuVar39 = (ushort ******)((long)ppppppuVar39 + 1);
    } while (ppppppuVar30 != (ushort ******)0x0);
    return (undefined1 *)(ulong)(bVar33 == 0);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10ae68138; end: 10ae6832b;  */

ulong FUN_10ae68138(undefined8 param_1,ulong param_2,ushort *******param_3,undefined8 param_4,
                   undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,ulong param_10,ulong param_11)

{
  ushort *******pppppppuVar1;
  ushort *******pppppppuVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  ushort ****ppppuVar6;
  ushort ******ppppppuVar7;
  ushort uVar8;
  long lVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ushort *******pppppppuVar15;
  long lVar16;
  ushort *******pppppppuVar17;
  ushort ******ppppppuVar18;
  undefined8 *puVar19;
  ushort *******pppppppuVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  ushort ******ppppppuVar25;
  byte bVar26;
  ushort ****ppppuVar27;
  ushort *******pppppppuVar28;
  ulong uVar29;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ushort ******ppppppuVar30;
  ushort ******ppppppuVar31;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x26;
  ushort *****pppppuVar32;
  long unaff_x27;
  ulong uVar33;
  ushort *******pppppppuVar34;
  ushort *****pppppuVar35;
  ushort *****pppppuVar36;
  ushort *****pppppuVar37;
  undefined1 uStack_332;
  undefined1 uStack_331;
  ushort *****pppppuStack_330;
  ushort *puStack_328;
  ulong uStack_320;
  ushort ******ppppppuStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  long lStack_2f8;
  ushort *****pppppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2c0;
  ushort ******ppppppuStack_2b8;
  ushort ******ppppppuStack_2b0;
  ushort ******ppppppuStack_2a8;
  undefined8 uStack_2a0;
  ushort ******appppppuStack_298 [4];
  undefined8 uStack_278;
  ushort *****pppppuStack_258;
  ulong uStack_250;
  ushort *****pppppuStack_238;
  ulong uStack_230;
  ushort ******ppppppuStack_218;
  ulong uStack_210;
  ushort ******ppppppuStack_208;
  ushort ******ppppppuStack_200;
  ushort ******ppppppuStack_1e8;
  ulong uStack_1e0;
  ushort *****apppppuStack_1d8 [4];
  long lStack_1b8;
  ulong uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ushort ******ppppppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ushort *****pppppuStack_140;
  ulong uStack_138;
  ushort *****pppppuStack_128;
  ushort *****pppppuStack_120;
  ushort ******ppppppuStack_118;
  ushort ******ppppppuStack_110;
  undefined8 *puStack_108;
  uint uStack_f4;
  undefined1 auStack_f0 [64];
  ushort *****apppppuStack_b0 [8];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar33 = param_11 + 8;
  lVar9 = param_10 - uVar33;
  if (param_10 < uVar33) {
    pppppppuVar15 = (ushort *******)0x10;
    param_3 = (ushort *******)0x0;
    func_0x000107c2b29c(0x10,0,0x44,&UNK_10f6d13d3,0x225);
    uVar29 = 0;
    param_2 = unaff_x20;
    param_7 = unaff_x21;
    param_6 = unaff_x22;
    param_5 = unaff_x23;
    param_4 = unaff_x24;
    goto LAB_10ae682d4;
  }
  if (param_11 <= param_10) {
    param_10 = param_11;
  }
  ppppppuStack_118 = (ushort ******)0x0;
  pppppuStack_120 = (ushort *****)0x0;
  puStack_108 = (undefined8 *)0x0;
  ppppppuStack_110 = (ushort ******)0x0;
  pppppppuVar15 = (ushort *******)&pppppuStack_120;
  lVar16 = param_6;
  func_0x00010ae657f0(param_6,pppppppuVar15,*(undefined8 *)(param_6 + 8));
  if ((int)lVar16 == 0) {
LAB_10ae682b4:
    param_3 = pppppppuVar15;
    uVar29 = 0;
    param_9 = unaff_x27;
  }
  else {
    (*(code *)pppppuStack_120[3])(&pppppuStack_120,param_9,param_10);
    (*(code *)pppppuStack_120[3])(&pppppuStack_120,&UNK_10e52b45c,8);
    (*(code *)pppppuStack_120[3])(&pppppuStack_120,param_9 + uVar33,lVar9);
    ppppppuVar25 = &pppppuStack_120;
    pppppppuVar15 = (ushort *******)apppppuStack_b0;
    func_0x000107c2b41c(ppppppuVar25,pppppppuVar15,&uStack_f4);
    unaff_x27 = param_9;
    if ((int)ppppppuVar25 == 0) goto LAB_10ae682b4;
    iVar12 = (int)auStack_f0;
    pppppppuVar15 = (ushort *******)&pppppuStack_128;
    func_0x000107c2b51c();
    if (iVar12 == 0) goto LAB_10ae682b4;
    bVar11 = (int)param_7 == 0;
    puVar4 = &UNK_10f6d14df;
    if (bVar11) {
      puVar4 = &UNK_10f6d14fb;
    }
    uVar22 = 0x1b;
    if (bVar11) {
      uVar22 = 0x17;
    }
    uStack_138 = (ulong)uStack_f4;
    pppppuStack_140 = (ushort *****)apppppuStack_b0;
    uVar29 = param_2;
    func_0x000107c34fd8(param_2,param_3,*(undefined8 *)(param_6 + 8),auStack_f0,pppppuStack_128,
                        puVar4,uVar22);
  }
  pppppppuVar15 = (ushort *******)ppppppuStack_118;
  func_0x000107c2b534();
  unaff_x26 = param_10;
  unaff_x27 = param_9;
  if (puStack_108 != (undefined8 *)0x0) {
    pppppppuVar15 = (ushort *******)ppppppuStack_110;
    (*(code *)*puStack_108)();
  }
LAB_10ae682d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar29;
  }
  ___stack_chk_fail();
  FUN_10ae34eb0(&pppppuStack_120);
  pppppppuVar17 = pppppppuVar15;
  __Unwind_Resume();
  pcStack_148 = FUN_10ae6832c;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar1 = pppppppuVar17 + 0xbb;
  pppppppuVar2 = pppppppuVar17 + 0x47;
  pppppppuVar20 = pppppppuVar17;
  uStack_1a0 = uVar33;
  lStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  lStack_188 = lVar9;
  uStack_180 = param_4;
  uStack_178 = param_5;
  lStack_170 = param_6;
  uStack_168 = param_7;
  uStack_160 = param_2;
  ppppppuStack_158 = (ushort ******)pppppppuVar15;
  puStack_150 = &stack0xfffffffffffffff0;
  do {
    iVar12 = *(int *)(pppppppuVar17 + 3);
    uVar33 = 1;
    pppppppuVar28 = pppppppuVar20;
    pppppppuVar15 = param_3;
    switch(iVar12) {
    case 0:
      param_3 = (ushort *******)*pppppppuVar17;
      pppppppuVar15 = (ushort *******)&uStack_2c0;
      pppppppuVar28 = pppppppuVar17;
      FUN_10ae5cbc0(pppppppuVar17,pppppppuVar15,&pppppuStack_330);
      lVar9 = lStack_2f8;
      if ((int)pppppppuVar28 != 0) {
        if (param_3[0x13] == (ushort ******)0x0 || lStack_2f8 == 0) {
          if (lStack_2f8 != 0) {
            _memcpy((char *)((long)pppppppuVar17 + 0x623),uStack_300,lStack_2f8);
          }
          *(char *)((long)pppppppuVar17 + 0x643) = (char)lVar9;
          pppppppuVar15 = pppppppuVar17;
          FUN_10ae5987c(pppppppuVar17,&ppppppuStack_208);
          uVar22 = uStack_2e8;
          ppppppuVar25 = (ushort ******)pppppuStack_2f0;
          if (((ulong)pppppppuVar15 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0xe4);
            pppppppuVar15 = (ushort *******)0x2;
            FUN_10ae60390(param_3,2,0x28);
            pppppppuVar28 = param_3;
          }
          else {
            uVar33 = (ulong)ppppppuStack_208 & 0xffff;
            pppppppuVar15 = param_3;
            func_0x000107c2b89c(param_3);
            FUN_10ae60114(ppppppuVar25,uVar22,pppppppuVar15,uVar33);
            pppppppuVar17[0xbf] = ppppppuVar25;
            if (ppppppuVar25 == (ushort ******)0x0) {
              func_0x000107c2b29c(0x10,0,0xb8,&UNK_10f6d1513,0xec);
              pppppppuVar15 = (ushort *******)0x2;
              FUN_10ae60390(param_3,2,0x28);
              pppppppuVar28 = param_3;
            }
            else {
              apppppuStack_1d8[0] = (ushort *****)CONCAT71(apppppuStack_1d8[0]._1_7_,0x32);
              pppppppuVar15 = pppppppuVar17;
              FUN_10ae59a0c(pppppppuVar17,apppppuStack_1d8,&pppppuStack_330);
              if (((ulong)pppppppuVar15 & 1) == 0) {
                pppppppuVar15 = (ushort *******)0x2;
                FUN_10ae60390(param_3,2,(ulong)apppppuStack_1d8[0] & 0xff);
                pppppppuVar28 = param_3;
              }
              else {
                func_0x000107c2b89c();
                pppppppuVar20 = pppppppuVar17 + 0x33;
                func_0x000107c2b888(pppppppuVar20,param_3,pppppppuVar17[0xbf]);
                pppppppuVar28 = pppppppuVar20;
                pppppppuVar15 = param_3;
                if ((int)pppppppuVar20 != 0) {
                  uVar33 = 1;
                  *(undefined4 *)(pppppppuVar17 + 3) = 1;
                  break;
                }
              }
            }
          }
        }
        else {
          func_0x000107c2b29c(0x10,0,0x132,&UNK_10f6d1513,0xda);
          pppppppuVar15 = (ushort *******)0x2;
          FUN_10ae60390(param_3,2,0x2f);
          pppppppuVar28 = param_3;
        }
      }
    default:
LAB_10ae693e8:
      uVar33 = 0;
      pppppppuVar20 = pppppppuVar28;
      param_3 = pppppppuVar15;
      break;
    case 1:
      ppppppuVar25 = *pppppppuVar17;
      pppppppuVar15 = (ushort *******)&uStack_2c0;
      pppppppuVar28 = pppppppuVar17;
      FUN_10ae5cbc0(pppppppuVar17,pppppppuVar15,&pppppuStack_330);
      if ((int)pppppppuVar28 == 0) goto LAB_10ae693e8;
      uStack_332 = 0x32;
      pppppuVar32 = ppppppuVar25[6];
      ppppppuVar31 = *pppppppuVar17;
      ppppppuStack_1e8 = (ushort ******)0x0;
      ppppppuVar30 = &pppppuStack_330;
      FUN_10ae59824(ppppppuVar30,&ppppppuStack_208,0x29);
      if ((int)ppppppuVar30 == 0) {
code_r0x00010ae68890:
        pppppppuVar15 = pppppppuVar17;
        func_0x000107c2b85c();
        if (((ulong)pppppppuVar15 & 1) != 0) goto code_r0x00010ae6889c;
code_r0x00010ae69810:
        uVar21 = 0x50;
code_r0x00010ae69814:
        param_3 = (ushort *******)0x2;
        FUN_10ae60390(ppppppuVar25,2,uVar21);
code_r0x00010ae69820:
        uVar33 = 0;
      }
      else {
        ppppppuVar18 = &pppppuStack_330;
        FUN_10ae59824(ppppppuVar18,apppppuStack_1d8,0x2d);
        if (((ulong)ppppppuVar18 & 1) == 0) {
          uStack_332 = 0x6d;
          func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x116);
          uVar21 = uStack_332;
          goto code_r0x00010ae69814;
        }
        pppppppuVar15 = pppppppuVar17;
        func_0x00010ae59cd0(pppppppuVar17,&pppppuStack_238,&pppppuStack_258,&ppppppuStack_218,
                            &uStack_332,&pppppuStack_330,&ppppppuStack_208);
        uVar21 = uStack_332;
        if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69814;
        if ((*(byte *)(pppppppuVar17 + 0xc3) >> 4 & 1) == 0) goto code_r0x00010ae68890;
        appppppuStack_298[0] = (ushort ******)0x0;
        param_3 = appppppuStack_298;
        pppppppuVar15 = pppppppuVar17;
        FUN_10ae5a6e4(pppppppuVar17,param_3,&uStack_331,pppppuStack_238,uStack_230,0,0);
        iVar14 = (int)pppppppuVar15;
        if (iVar14 == 0) {
          pppppppuVar15 = pppppppuVar17;
          param_3 = (ushort *******)appppppuStack_298[0];
          FUN_10ae64ac0();
          if ((int)pppppppuVar15 == 0) {
code_r0x00010ae69738:
            iVar14 = 2;
            goto code_r0x00010ae6973c;
          }
          if ((*(byte *)(appppppuStack_298[0] + 0x36) >> 3 & 1) != 0) {
            ppppppuStack_218 =
                 (ushort ******)
                 CONCAT44(ppppppuStack_218._4_4_,
                          (uint)((int)ppppppuStack_218 - *(int *)(appppppuStack_298[0] + 0x2f)) /
                          1000);
            func_0x000107c2b798(ppppppuVar31[0xd],&uStack_278);
            uVar33 = CONCAT62(uStack_278._2_6_,CONCAT11(uStack_278._1_1_,(undefined1)uStack_278)) -
                     (long)appppppuStack_298[0][0x19];
            param_3 = (ushort *******)appppppuStack_298[0];
            if (uVar33 >> 0x1f == 0) {
              *(int *)((long)pppppuVar32 + 0xf4) = (int)ppppppuStack_218 - (int)uVar33;
              pppppppuVar20 = pppppppuVar17;
              FUN_10ae68018(pppppppuVar17,appppppuStack_298[0],&uStack_2c0,&pppppuStack_258);
              pppppppuVar15 = (ushort *******)appppppuStack_298[0];
              if (((ulong)pppppppuVar20 & 1) == 0) {
                uStack_332 = 0x33;
                iVar14 = 3;
              }
              else {
                appppppuStack_298[0] = (ushort ******)0x0;
                func_0x000107c2b6c0(&ppppppuStack_1e8);
                iVar14 = 0;
                param_3 = pppppppuVar15;
              }
              goto code_r0x00010ae6973c;
            }
            goto code_r0x00010ae69738;
          }
          iVar14 = 2;
code_r0x00010ae69748:
          appppppuStack_298[0] = (ushort ******)0x0;
          func_0x000107c2b874();
        }
        else {
          if (iVar14 == 3) {
            uStack_332 = 0x50;
          }
code_r0x00010ae6973c:
          ppppppuVar31 = appppppuStack_298[0];
          appppppuStack_298[0] = (ushort ******)0x0;
          if ((ushort *******)ppppppuVar31 != (ushort *******)0x0) goto code_r0x00010ae69748;
        }
        if (1 < iVar14) {
          if (iVar14 == 2) goto code_r0x00010ae68890;
          uVar21 = uStack_332;
          if (iVar14 != 3) goto code_r0x00010ae6889c;
          goto code_r0x00010ae69814;
        }
        if (iVar14 == 0) {
          func_0x000107c2b84c(&ppppppuStack_208,ppppppuStack_1e8,0);
          ppppppuVar31 = ppppppuStack_208;
          ppppppuStack_208 = (ushort ******)0x0;
          func_0x000107c2b6c0(pppppppuVar1,ppppppuVar31);
          ppppppuVar31 = ppppppuStack_208;
          ppppppuStack_208 = (ushort ******)0x0;
          if (ppppppuVar31 != (ushort ******)0x0) {
            func_0x000107c2b874();
          }
          if (*pppppppuVar1 == (ushort ******)0x0) goto code_r0x00010ae69810;
          *(ushort *)((long)ppppppuVar25[6] + 0xd4) =
               *(ushort *)((long)ppppppuVar25[6] + 0xd4) | 0x40;
          *(uint *)(pppppppuVar17 + 0xc3) = *(uint *)(pppppppuVar17 + 0xc3) | 0x800000;
          ppppppuVar31 = pppppppuVar17[0xbb];
          uVar13 = *(uint *)((long)ppppppuVar25[0xe] + 0x124);
          func_0x000107c2b850(ppppppuVar25,ppppppuVar31);
          if (*(uint *)(ppppppuVar31 + 0x18) <= uVar13) {
            uVar5 = *(uint *)((long)ppppppuVar31 + 0xc4);
            if (uVar13 <= *(uint *)((long)ppppppuVar31 + 0xc4)) {
              uVar5 = uVar13;
            }
            *(uint *)(ppppppuVar31 + 0x18) = uVar5;
          }
code_r0x00010ae6889c:
          pppppppuVar15 = pppppppuVar17;
          func_0x00010ae5a158(pppppppuVar17,&uStack_332,&pppppuStack_330);
          uVar21 = uStack_332;
          if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69814;
          ppppppuVar31 = pppppppuVar17[0xbb];
          ppppppuVar31[0x1a] = (ushort *****)pppppppuVar17[0xbf];
          pppppppuVar15 = pppppppuVar17;
          FUN_10ae5987c(pppppppuVar17,(long)ppppppuVar31 + 6);
          if (((ulong)pppppppuVar15 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0x1a6);
            uVar21 = 0x28;
            goto code_r0x00010ae69814;
          }
          pppppppuVar15 = pppppppuVar17;
          FUN_10ae59f44(pppppppuVar17,&ppppppuStack_208,0,&uStack_332,&pppppuStack_330);
          uVar21 = uStack_332;
          if (((ulong)pppppppuVar15 & 1) == 0) {
code_r0x00010ae69b34:
            param_3 = (ushort *******)0x2;
            FUN_10ae60390(ppppppuVar25,2,uVar21);
          }
          else {
            if ((*(byte *)((long)ppppppuVar25 + 0xa4) >> 2 & 1) == 0) {
              pppppuVar32 = ppppppuVar25[6];
              uVar24 = 1;
code_r0x00010ae688f8:
              *(undefined4 *)(pppppuVar32 + 0x1f) = uVar24;
            }
            else {
              if (((ulong)ppppppuVar30 & 1) == 0) {
                pppppuVar32 = ppppppuVar25[6];
                uVar24 = 5;
              }
              else if ((ushort *******)ppppppuStack_1e8 == (ushort *******)0x0) {
                pppppuVar32 = ppppppuVar25[6];
                uVar24 = 6;
              }
              else if (*(int *)((long)ppppppuStack_1e8 + 0x17c) == 0) {
                pppppuVar32 = ppppppuVar25[6];
                uVar24 = 7;
              }
              else {
                if ((*(uint *)(pppppppuVar17 + 0xc3) >> 0xc & 1) == 0) {
                  pppppuVar32 = ppppppuVar25[6];
                  uVar24 = 4;
                  goto code_r0x00010ae688f8;
                }
                pppppuVar32 = ppppppuVar25[6];
                if ((*(uint *)(pppppppuVar17 + 0xc3) >> 0x18 & 1) == 0) {
                  ppppppuVar30 = (ushort ******)pppppuVar32[0x3d];
                  if (ppppppuVar30 == (ushort ******)ppppppuStack_1e8[0x31]) {
                    if (ppppppuVar30 != (ushort ******)0x0) {
                      ppppppuVar31 = (ushort ******)ppppppuStack_1e8[0x30];
                      ppppuVar27 = pppppuVar32[0x3c];
                      do {
                        ppppppuVar30 = (ushort ******)((long)ppppppuVar30 + -1);
                        if (*(char *)ppppuVar27 != *(char *)ppppppuVar31) goto code_r0x00010ae69984;
                        ppppppuVar31 = (ushort ******)((long)ppppppuVar31 + 1);
                        ppppuVar27 = (ushort ****)((long)ppppuVar27 + 1);
                      } while (ppppppuVar30 != (ushort ******)0x0);
                    }
                    ppppppuVar30 = *pppppppuVar1;
                    if ((((*(byte *)(ppppppuStack_1e8 + 0x36) ^ *(byte *)(ppppppuVar30 + 0x36)) >> 6
                         & 1) == 0) &&
                       (ppppppuVar31 = (ushort ******)ppppppuVar30[0x33],
                       ppppppuVar31 == (ushort ******)ppppppuStack_1e8[0x33])) {
                      if (ppppppuVar31 != (ushort ******)0x0) {
                        ppppppuVar18 = (ushort ******)ppppppuStack_1e8[0x32];
                        pppppuVar35 = ppppppuVar30[0x32];
                        do {
                          ppppppuVar31 = (ushort ******)((long)ppppppuVar31 + -1);
                          if (*(char *)pppppuVar35 != *(char *)ppppppuVar18)
                          goto code_r0x00010ae69998;
                          ppppppuVar18 = (ushort ******)((long)ppppppuVar18 + 1);
                          pppppuVar35 = (ushort *****)((long)pppppuVar35 + 1);
                        } while (ppppppuVar31 != (ushort ******)0x0);
                      }
                      if (*(int *)((long)pppppuVar32 + 0xf4) - 0x3dU < 0xffffff87) {
                        uVar24 = 0xc;
                      }
                      else {
                        pppppppuVar15 = (ushort *******)ppppppuStack_1e8;
                        FUN_10ae69f00(ppppppuStack_1e8,pppppppuVar17[1]);
                        if (((ulong)pppppppuVar15 & 1) != 0) {
                          if (((ulong)ppppppuStack_208 & 1) == 0) {
                            uVar24 = 8;
                            goto code_r0x00010ae688f8;
                          }
                          *(undefined4 *)(pppppuVar32 + 0x1f) = 2;
                          *(ushort *)((long)pppppuVar32 + 0xd4) =
                               *(ushort *)((long)pppppuVar32 + 0xd4) | 0x1000;
                          pppppuVar32 = ppppppuVar25[6];
                          goto code_r0x00010ae699a0;
                        }
                        uVar24 = 0xd;
                      }
                    }
                    else {
code_r0x00010ae69998:
                      uVar24 = 0xe;
                    }
                  }
                  else {
code_r0x00010ae69984:
                    uVar24 = 9;
                  }
                }
                else {
                  uVar24 = 10;
                }
              }
              *(undefined4 *)(pppppuVar32 + 0x1f) = uVar24;
            }
code_r0x00010ae699a0:
            ppppppuVar31 = *pppppppuVar1;
            ppppuVar27 = pppppuVar32[0x3c];
            ppppuVar6 = pppppuVar32[0x3d];
            ppppppuVar30 = ppppppuVar31 + 0x30;
            func_0x000107c2b684(ppppppuVar30,ppppuVar6);
            uVar13 = (uint)ppppppuVar30 ^ 1;
            if (ppppuVar6 == (ushort ****)0x0) {
              uVar13 = 1;
            }
            if ((uVar13 & 1) == 0) {
              _memcpy(ppppppuVar31[0x30],ppppuVar27,ppppuVar6);
            }
            if ((uint)ppppppuVar30 == 0) {
code_r0x00010ae69b30:
              uVar21 = 0x50;
              goto code_r0x00010ae69b34;
            }
            if (((*(ushort *)((long)ppppppuVar25[6] + 0xd4) >> 0xc & 1) != 0) &&
               (ppppppuVar30 = *pppppppuVar1, (*(byte *)(ppppppuVar30 + 0x36) >> 6 & 1) != 0)) {
              ppppppuVar18 = (ushort ******)ppppppuStack_1e8[0x34];
              ppppppuVar7 = (ushort ******)ppppppuStack_1e8[0x35];
              ppppppuVar31 = ppppppuVar30 + 0x34;
              func_0x000107c2b684(ppppppuVar31,ppppppuVar7);
              uVar13 = (uint)ppppppuVar31 ^ 1;
              if (ppppppuVar7 == (ushort ******)0x0) {
                uVar13 = 1;
              }
              if ((uVar13 & 1) == 0) {
                _memcpy(ppppppuVar30[0x34],ppppppuVar18,ppppppuVar7);
              }
              if ((uint)ppppppuVar31 == 0) goto code_r0x00010ae69b30;
            }
            if (((*(byte *)((long)ppppppuVar25 + 0xa4) >> 2 & 1) != 0) &&
               (ppppppuVar25[0x13] != (ushort *****)0x0)) {
              ppppppuVar31 = pppppppuVar17[0xbb];
              pppppuVar32 = pppppppuVar17[1][0x16];
              pppppuVar35 = pppppppuVar17[1][0x17];
              ppppppuVar30 = ppppppuVar31 + 0x37;
              func_0x000107c2b684(ppppppuVar30,pppppuVar35);
              uVar13 = (uint)ppppppuVar30 ^ 1;
              if (pppppuVar35 == (ushort *****)0x0) {
                uVar13 = 1;
              }
              if ((uVar13 & 1) == 0) {
                _memcpy(ppppppuVar31[0x37],pppppuVar32,pppppuVar35);
              }
              if ((uint)ppppppuVar30 == 0) goto code_r0x00010ae69b30;
            }
            if (ppppppuVar25[0xd][0x3c] != (ushort ****)0x0) {
              iVar14 = (int)&pppppuStack_330;
              (*(code *)ppppppuVar25[0xd][0x3c])();
              if (iVar14 == 0) {
                func_0x000107c2b29c(0x10,0,0x85,&UNK_10f6d1513,0x1f9);
                goto code_r0x00010ae69b30;
              }
            }
            ppppppuVar30 = ppppppuVar25;
            func_0x000107c2b89c();
            func_0x000107c2b76c();
            if ((*(ushort *)((long)ppppppuVar25[6] + 0xd4) >> 6 & 1) == 0) {
              uVar33 = (ulong)*(uint *)((long)ppppppuVar30 + 4);
              param_3 = (ushort *******)&UNK_10e52b4d2;
            }
            else {
              param_3 = (ushort *******)(*pppppppuVar1 + 2);
              uVar33 = (ulong)*(int *)((long)*pppppppuVar1 + 0xc);
            }
            pppppppuVar15 = pppppppuVar17;
            func_0x000107c2b8f0(pppppppuVar17,param_3,uVar33);
            if ((int)pppppppuVar15 != 0) {
              if (((uint)uStack_2c0 & 1) == 0) {
                pppppppuVar15 = pppppppuVar17 + 0x33;
                param_3 = (ushort *******)ppppppuStack_2a8;
                func_0x000107c2b894(pppppppuVar15,ppppppuStack_2a8,uStack_2a0);
                if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69820;
              }
              uVar8 = *(ushort *)((long)ppppppuVar25[6] + 0xd4);
              if ((uVar8 >> 0xc & 1) == 0) {
                if ((*(byte *)((long)pppppppuVar17 + 0x619) >> 4 & 1) != 0) {
                  *(ushort *)((long)ppppppuVar25[6] + 0xd4) = uVar8 | 1;
                }
              }
              else {
                pppppppuVar15 = pppppppuVar17;
                FUN_10ae67a20();
                if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69820;
              }
              if (((ulong)ppppppuStack_208 & 1) == 0) {
                (*(code *)(*ppppppuVar25)[4])(ppppppuVar25);
                pppppppuVar15 = pppppppuVar17 + 0x33;
                func_0x00010ae65734();
                if (((ulong)pppppppuVar15 & 1) != 0) {
                  uVar24 = 2;
                  goto code_r0x00010ae69bb0;
                }
              }
              else {
                param_3 = (ushort *******)&pppppuStack_330;
                pppppppuVar15 = pppppppuVar17;
                FUN_10ae69f5c();
                if ((int)pppppppuVar15 != 0) {
                  (*(code *)(*ppppppuVar25)[4])(ppppppuVar25);
                  func_0x000107c2b534(*pppppppuVar2);
                  *pppppppuVar2 = (ushort ******)0x0;
                  pppppppuVar17[0x48] = (ushort ******)0x0;
                  uVar24 = 4;
code_r0x00010ae69bb0:
                  *(undefined4 *)(pppppppuVar17 + 3) = uVar24;
                  uVar33 = 1;
                  goto code_r0x00010ae69824;
                }
              }
            }
          }
          goto code_r0x00010ae69820;
        }
        if (iVar14 != 1) goto code_r0x00010ae6889c;
        *(undefined4 *)(pppppppuVar17 + 3) = 1;
        uVar33 = 0xb;
      }
code_r0x00010ae69824:
      pppppppuVar20 = (ushort *******)ppppppuStack_1e8;
      ppppppuStack_1e8 = (ushort ******)0x0;
      if (pppppppuVar20 != (ushort *******)0x0) {
        func_0x000107c2b874();
      }
      break;
    case 2:
      if ((*(byte *)((long)pppppppuVar17 + 0x61a) >> 4 & 1) == 0) {
        pppppppuVar28 = (ushort *******)*pppppppuVar17;
        puStack_328 = (ushort *)0x0;
        pppppuStack_330 = (ushort *****)0x0;
        ppppppuStack_318 = (ushort ******)0x0;
        uStack_320 = 0;
        param_3 = (ushort *******)&pppppuStack_330;
        pppppppuVar15 = pppppppuVar28;
        (*(code *)(*pppppppuVar28)[0xb])(pppppppuVar28,param_3,&uStack_2c0,2);
        if ((int)pppppppuVar15 == 0) {
code_r0x00010ae68f2c:
          uVar33 = 0;
        }
        else {
          iVar14 = (int)&uStack_2c0;
          param_3 = (ushort *******)0x303;
          func_0x000107c2b228();
          if (iVar14 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_2c0;
          param_3 = (ushort *******)&UNK_10e52b348;
          func_0x000107c2b21c(puVar19,&UNK_10e52b348,0x20);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_2c0;
          param_3 = &ppppppuStack_208;
          func_0x000107c34f3c(puVar19,param_3,1);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar15 = &ppppppuStack_208;
          param_3 = (ushort *******)((long)pppppppuVar17 + 0x623);
          func_0x000107c2b21c(pppppppuVar15,param_3,*(char *)((long)pppppppuVar17 + 0x643));
          if ((int)pppppppuVar15 == 0) goto code_r0x00010ae68f2c;
          param_3 = (ushort *******)(ulong)*(ushort *)(pppppppuVar17[0xbf] + 2);
          iVar14 = (int)&uStack_2c0;
          func_0x000107c2b228();
          if (iVar14 == 0) goto code_r0x00010ae68f2c;
          iVar14 = (int)&uStack_2c0;
          param_3 = (ushort *******)0x0;
          func_0x000107c2b218();
          if (iVar14 == 0) goto code_r0x00010ae68f2c;
          param_3 = (ushort *******)&uStack_278;
          pppppppuVar15 = pppppppuVar17;
          FUN_10ae5987c();
          if ((int)pppppppuVar15 == 0) goto code_r0x00010ae68f2c;
          puVar19 = &uStack_2c0;
          param_3 = (ushort *******)apppppuStack_1d8;
          func_0x000107c34f3c(puVar19,param_3,2);
          if ((int)puVar19 == 0) goto code_r0x00010ae68f2c;
          iVar14 = (int)apppppuStack_1d8;
          param_3 = (ushort *******)0x2b;
          func_0x000107c2b228();
          if (iVar14 == 0) goto code_r0x00010ae68f2c;
          iVar14 = (int)apppppuStack_1d8;
          param_3 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar14 == 0) goto code_r0x00010ae68f2c;
          param_3 = (ushort *******)(ulong)*(ushort *)(pppppppuVar28 + 2);
          iVar14 = (int)apppppuStack_1d8;
          func_0x000107c2b228();
          if (iVar14 == 0) goto code_r0x00010ae68f2c;
          iVar14 = (int)apppppuStack_1d8;
          param_3 = (ushort *******)0x33;
          func_0x000107c2b228();
          if (iVar14 == 0) goto code_r0x00010ae68f2c;
          iVar14 = (int)apppppuStack_1d8;
          param_3 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar14 == 0) goto code_r0x00010ae68f2c;
          param_3 = (ushort *******)(ulong)CONCAT11(uStack_278._1_1_,(undefined1)uStack_278);
          iVar14 = (int)apppppuStack_1d8;
          func_0x000107c2b228();
          if (iVar14 == 0) goto code_r0x00010ae68f2c;
          if (((ulong)pppppppuVar17[0xc3] & 1) != 0) {
            iVar14 = (int)apppppuStack_1d8;
            param_3 = (ushort *******)0xfe0d;
            func_0x000107c2b228();
            if (iVar14 != 0) {
              iVar14 = (int)apppppuStack_1d8;
              param_3 = (ushort *******)0x8;
              func_0x000107c2b228();
              if (iVar14 != 0) {
                ppppppuVar25 = apppppuStack_1d8;
                param_3 = (ushort *******)&pppppuStack_238;
                func_0x000107c2b220(ppppppuVar25,param_3,8);
                if ((int)ppppppuVar25 != 0) {
                  *pppppuStack_238 = (ushort ****)0x0;
                  goto code_r0x00010ae68738;
                }
              }
            }
            goto code_r0x00010ae68f2c;
          }
code_r0x00010ae68738:
          pppppuStack_238 = (ushort *****)0x0;
          uStack_230 = 0;
          param_3 = (ushort *******)&pppppuStack_330;
          pppppppuVar20 = pppppppuVar28;
          (*(code *)(*pppppppuVar28)[0xc])(pppppppuVar28,param_3,&pppppuStack_238);
          if (((ulong)pppppppuVar20 & 1) == 0) {
code_r0x00010ae69bbc:
            uVar33 = 0;
          }
          else {
            if (((ulong)pppppppuVar17[0xc3] & 1) != 0) {
              if (uStack_230 < 8) goto code_r0x00010ae69e28;
              param_3 = (ushort *******)((uStack_230 - 8) + (long)pppppuStack_238);
              pppppppuVar15 = pppppppuVar17;
              FUN_10ae68138(pppppppuVar17,param_3,8,pppppppuVar28[6] + 6,0x20,pppppppuVar17 + 0x33,1
                            ,param_8,pppppuStack_238,uStack_230,uStack_230 - 8);
              if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69bbc;
            }
            pppppuStack_258 = pppppuStack_238;
            uStack_250 = uStack_230;
            pppppuStack_238 = (ushort *****)0x0;
            uStack_230 = 0;
            param_3 = (ushort *******)&pppppuStack_258;
            pppppppuVar15 = pppppppuVar28;
            (*(code *)(*pppppppuVar28)[0xd])();
            if ((int)pppppppuVar15 == 0) {
              func_0x000107c2b534(pppppuStack_258);
              uVar33 = 0;
              pppppuStack_258 = (ushort *****)0x0;
              uStack_250 = 0;
            }
            else {
              pppppppuVar15 = pppppppuVar28;
              (*(code *)(*pppppppuVar28)[0xe])();
              func_0x000107c2b534(pppppuStack_258);
              pppppuStack_258 = (ushort *****)0x0;
              uStack_250 = 0;
              if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69bbc;
              *(ushort *)((long)pppppppuVar28[6] + 0xd4) =
                   *(ushort *)((long)pppppppuVar28[6] + 0xd4) | 0x8000;
              *(undefined4 *)(pppppppuVar17 + 3) = 3;
              uVar33 = 4;
            }
          }
          func_0x000107c2b534(pppppuStack_238);
        }
        pppppppuVar20 = (ushort *******)&pppppuStack_330;
        func_0x000107c2b204();
      }
      else {
code_r0x00010ae689a0:
        uVar33 = 0x11;
      }
      break;
    case 3:
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      param_3 = (ushort *******)&uStack_2c0;
      pppppppuVar15 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar15 != 0) {
        pppppppuVar15 = (ushort *******)&uStack_2c0;
        pppppppuVar28 = pppppppuVar20;
        func_0x000107c2b6f8(pppppppuVar20,pppppppuVar15,1);
        if ((int)pppppppuVar28 != 0) {
          ppppppuStack_208 = ppppppuStack_2b8;
          ppppppuStack_200 = ppppppuStack_2b0;
          pppppppuVar15 = pppppppuVar20;
          FUN_10ae5965c(pppppppuVar20,&ppppppuStack_208,&pppppuStack_330);
          uVar13 = 0;
          if ((ushort *******)ppppppuStack_200 == (ushort *******)0x0) {
            uVar13 = (uint)pppppppuVar15;
          }
          if ((uVar13 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x83,&UNK_10f6d1513,0x26c);
            pppppppuVar15 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar20,2,0x32);
            pppppppuVar28 = pppppppuVar20;
          }
          else {
            ppppppuVar25 = pppppppuVar20[6];
            if (*(int *)(ppppppuVar25 + 0x1a) == 1) {
              ppppppuVar25 = &pppppuStack_330;
              FUN_10ae59824(ppppppuVar25,&ppppppuStack_208,0xfe0d);
              if (((ulong)ppppppuVar25 & 1) == 0) {
                func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x277);
                pppppppuVar15 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar20,2,0x6d);
                pppppppuVar28 = pppppppuVar20;
              }
              else {
                pppppppuVar15 = (ushort *******)ppppppuStack_208;
                if ((ushort *******)ppppppuStack_200 == (ushort *******)0x0) {
                  uVar23 = 0x32;
                  uVar22 = 0x286;
                }
                else {
                  uVar23 = 0x32;
                  uVar22 = 0x286;
                  if (((*(char *)ppppppuStack_208 == '\0') &&
                      ((ushort *******)0x2 < ppppppuStack_200)) &&
                     ((pppppppuVar15 = (ushort *******)((long)ppppppuStack_208 + 3),
                      (char *)0x1 < (char *)((long)ppppppuStack_200 + -3) &&
                      (((ushort *******)ppppppuStack_200 != (ushort *******)0x5 &&
                       ((char *)0x2 < (char *)((long)ppppppuStack_200 + -5))))))) {
                    pppppppuVar28 =
                         (ushort *******)
                         (ulong)((uint)(*(ushort *)((long)ppppppuStack_208 + 6) >> 8) |
                                (*(ushort *)((long)ppppppuStack_208 + 6) & 0xff00ff) << 8);
                    uVar33 = (long)(ppppppuStack_200 + -1) - (long)pppppppuVar28;
                    if ((pppppppuVar28 <= ppppppuStack_200 + -1) &&
                       ((1 < uVar33 &&
                        (pcVar3 = (char *)((long)ppppppuStack_208 + (long)pppppppuVar28),
                        uVar8 = *(ushort *)(pcVar3 + 8),
                        uVar33 - 2 == (ulong)((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8))))) {
                      if (((ushort)(*(ushort *)((long)ppppppuStack_208 + 1) >> 8 |
                                   *(ushort *)((long)ppppppuStack_208 + 1) << 8) ==
                           *(ushort *)pppppppuVar17[0x59]) &&
                         ((ushort)(*(ushort *)((long)ppppppuStack_208 + 3) >> 8 |
                                  *(ushort *)((long)ppppppuStack_208 + 3) << 8) ==
                          *(ushort *)pppppppuVar17[0x58])) {
                        uVar23 = 0x2f;
                        uVar22 = 0x28f;
                        if ((*(char *)((long)ppppppuStack_208 + 5) ==
                             *(char *)((long)pppppppuVar17 + 0x622)) &&
                           (pppppppuVar28 == (ushort *******)0x0)) {
                          apppppuStack_1d8[0] =
                               (ushort *****)CONCAT71(apppppuStack_1d8[0]._1_7_,0x32);
                          pppppppuVar28 = pppppppuVar17;
                          ppppppuStack_208 = (ushort ******)pppppppuVar15;
                          FUN_10ae5875c(pppppppuVar17,apppppuStack_1d8,&pppppuStack_238,pppppppuVar2
                                        ,&pppppuStack_330,pcVar3 + 10);
                          if (((ulong)pppppppuVar28 & 1) != 0) {
                            pppppppuVar15 = pppppppuVar17;
                            FUN_10ae5cbc0(pppppppuVar17,&uStack_2c0,&pppppuStack_330);
                            if (((ulong)pppppppuVar15 & 1) == 0) {
                              uVar22 = 0x44;
                              uVar23 = 0x2a2;
                              goto code_r0x00010ae693e4;
                            }
                            ppppppuVar25 = pppppppuVar20[6];
                            goto code_r0x00010ae68c24;
                          }
                          func_0x000107c2b29c(0x10,0,0x8a,&UNK_10f6d1513,0x29b);
                          pppppppuVar15 = (ushort *******)0x2;
                          FUN_10ae60390(pppppppuVar20,2,(ulong)apppppuStack_1d8[0] & 0xff);
                          pppppppuVar28 = pppppppuVar20;
                          goto LAB_10ae693e8;
                        }
                      }
                      else {
                        uVar23 = 0x2f;
                        uVar22 = 0x28f;
                      }
                    }
                  }
                }
                ppppppuStack_208 = (ushort ******)pppppppuVar15;
                func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,uVar22);
                pppppppuVar15 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar20,2,uVar23);
                pppppppuVar28 = pppppppuVar20;
              }
            }
            else {
code_r0x00010ae68c24:
              if ((*(ushort *)((long)ppppppuVar25 + 0xd4) >> 6 & 1) == 0) {
code_r0x00010ae68c2c:
                param_3 = (ushort *******)&pppppuStack_330;
                pppppppuVar28 = pppppppuVar17;
                FUN_10ae69f5c();
                pppppppuVar15 = param_3;
                if ((int)pppppppuVar28 != 0) {
                  if (((uint)uStack_2c0 & 1) == 0) {
                    pppppppuVar28 = pppppppuVar17 + 0x33;
                    param_3 = (ushort *******)ppppppuStack_2a8;
                    func_0x000107c2b894(pppppppuVar28,ppppppuStack_2a8,uStack_2a0);
                    pppppppuVar15 = param_3;
                    if ((int)pppppppuVar28 == 0) goto LAB_10ae693e8;
                  }
                  pppppppuVar15 = pppppppuVar20;
                  (*(code *)(*pppppppuVar20)[5])();
                  if ((int)pppppppuVar15 != 0) {
                    FUN_10ae60390(pppppppuVar20,2,10);
                    uVar22 = 0xff;
                    uVar23 = 0x2d5;
                    goto code_r0x00010ae693e4;
                  }
                  (*(code *)(*pppppppuVar20)[4])(pppppppuVar20);
                  pppppppuVar20 = (ushort *******)pppppppuVar17[0x47];
                  func_0x000107c2b534();
                  *pppppppuVar2 = (ushort ******)0x0;
                  pppppppuVar17[0x48] = (ushort ******)0x0;
                  uVar33 = 1;
                  *(undefined4 *)(pppppppuVar17 + 3) = 4;
                  break;
                }
              }
              else {
                ppppppuVar25 = &pppppuStack_330;
                FUN_10ae59824(ppppppuVar25,&ppppppuStack_208,0x29);
                if (((ulong)ppppppuVar25 & 1) == 0) {
                  func_0x000107c2b29c(0x10,0,0x12f,&UNK_10f6d1513,0x2b2);
                  pppppppuVar15 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar20,2,0x2f);
                  pppppppuVar28 = pppppppuVar20;
                }
                else {
                  uStack_278._0_1_ = 0x32;
                  pppppppuVar15 = pppppppuVar17;
                  func_0x00010ae59cd0(pppppppuVar17,apppppuStack_1d8,&pppppuStack_238,
                                      &pppppuStack_258,&uStack_278,&pppppuStack_330,
                                      &ppppppuStack_208);
                  uVar21 = (undefined1)uStack_278;
                  if (((ulong)pppppppuVar15 & 1) != 0) {
                    pppppppuVar15 = pppppppuVar17;
                    FUN_10ae68018(pppppppuVar17,pppppppuVar17[0xbb],&uStack_2c0,&pppppuStack_238);
                    if ((int)pppppppuVar15 != 0) goto code_r0x00010ae68c2c;
                    uVar21 = 0x33;
                  }
                  pppppppuVar15 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar20,2,uVar21);
                  pppppppuVar28 = pppppppuVar20;
                }
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae6931c:
      pppppppuVar20 = pppppppuVar15;
      uVar33 = 3;
      break;
    case 4:
      ppppppuVar25 = *pppppppuVar17;
      pppppuVar32 = ppppppuVar25[6];
      pppppppuVar20 = (ushort *******)pppppppuVar17[0xc2];
      if (pppppppuVar20 == (ushort *******)0x0) {
        func_0x000107c2b3c4(pppppuVar32 + 2,0x20,&UNK_10e525a20);
      }
      else if (((*(byte *)((long)pppppppuVar17 + 0x61a) >> 4 & 1) == 0) &&
              (pppppppuVar20[1] == (ushort ******)0x20)) {
        ppppppuVar30 = *pppppppuVar20;
        pppppuVar35 = *ppppppuVar30;
        pppppuVar37 = ppppppuVar30[3];
        pppppuVar36 = ppppppuVar30[2];
        pppppuVar32[3] = (ushort ****)ppppppuVar30[1];
        pppppuVar32[2] = (ushort ****)pppppuVar35;
        pppppuVar32[5] = (ushort ****)pppppuVar37;
        pppppuVar32[4] = (ushort ****)pppppuVar36;
      }
      else {
        func_0x000107c2b3c4(pppppuVar32 + 2,0x20,&UNK_10e525a20);
        if ((*(byte *)((long)pppppppuVar17 + 0x61a) >> 4 & 1) != 0) {
          pppppppuVar15 = (ushort *******)0x20;
          pppppppuVar28 = pppppppuVar20;
          func_0x000107c2b684();
          if ((int)pppppppuVar28 == 0) goto LAB_10ae693e8;
          ppppppuVar30 = *pppppppuVar20;
          pppppuVar35 = (ushort *****)pppppuVar32[2];
          pppppuVar37 = (ushort *****)pppppuVar32[5];
          pppppuVar36 = (ushort *****)pppppuVar32[4];
          ppppppuVar30[1] = (ushort *****)pppppuVar32[3];
          *ppppppuVar30 = pppppuVar35;
          ppppppuVar30[3] = pppppuVar37;
          ppppppuVar30[2] = pppppuVar36;
        }
      }
      ppppppuStack_1e8 = (ushort ******)0x0;
      uStack_1e0 = 0;
      puStack_328 = (ushort *)0x0;
      pppppuStack_330 = (ushort *****)0x0;
      ppppppuStack_318 = (ushort ******)0x0;
      uStack_320 = 0;
      param_3 = (ushort *******)&pppppuStack_330;
      ppppppuVar30 = ppppppuVar25;
      (*(code *)(*ppppppuVar25)[0xb])(ppppppuVar25,param_3,&uStack_2c0,2);
      if ((int)ppppppuVar30 == 0) {
code_r0x00010ae69d9c:
        uVar33 = 0;
      }
      else {
        iVar14 = (int)&uStack_2c0;
        param_3 = (ushort *******)0x303;
        func_0x000107c2b228();
        if (iVar14 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_2c0;
        param_3 = (ushort *******)(ppppppuVar25[6] + 2);
        func_0x000107c2b21c(puVar19,param_3,0x20);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_2c0;
        param_3 = (ushort *******)apppppuStack_1d8;
        func_0x000107c34f3c(puVar19,param_3,1);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        ppppppuVar30 = apppppuStack_1d8;
        param_3 = (ushort *******)((long)pppppppuVar17 + 0x623);
        func_0x000107c2b21c(ppppppuVar30,param_3,*(char *)((long)pppppppuVar17 + 0x643));
        if ((int)ppppppuVar30 == 0) goto code_r0x00010ae69d9c;
        param_3 = (ushort *******)(ulong)*(ushort *)(pppppppuVar17[0xbf] + 2);
        iVar14 = (int)&uStack_2c0;
        func_0x000107c2b228();
        if (iVar14 == 0) goto code_r0x00010ae69d9c;
        iVar14 = (int)&uStack_2c0;
        param_3 = (ushort *******)0x0;
        func_0x000107c2b218();
        if (iVar14 == 0) goto code_r0x00010ae69d9c;
        puVar19 = &uStack_2c0;
        param_3 = &ppppppuStack_208;
        func_0x000107c34f3c(puVar19,param_3,2);
        if ((int)puVar19 == 0) goto code_r0x00010ae69d9c;
        param_3 = &ppppppuStack_208;
        pppppppuVar15 = pppppppuVar17;
        func_0x00010ae59ec4();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_3 = &ppppppuStack_208;
        pppppppuVar15 = pppppppuVar17;
        FUN_10ae5a0c0();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_3 = &ppppppuStack_208;
        pppppppuVar15 = pppppppuVar17;
        FUN_10ae6a27c();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_3 = (ushort *******)&pppppuStack_330;
        ppppppuVar30 = ppppppuVar25;
        (*(code *)(*ppppppuVar25)[0xc])(ppppppuVar25,param_3,&ppppppuStack_1e8);
        if (((ulong)ppppppuVar30 & 1) == 0) goto code_r0x00010ae69d9c;
        if (((ulong)pppppppuVar17[0xc3] & 1) != 0) {
          uVar33 = 0x1e;
          if (*(char *)*ppppppuVar25 != '\0') {
            uVar33 = 0x26;
          }
          param_3 = (ushort *******)(pppppuVar32 + 5);
          pppppppuVar20 = pppppppuVar17;
          FUN_10ae68138(pppppppuVar17,param_3,8,ppppppuVar25[6] + 6,0x20,pppppppuVar17 + 0x33,0,
                        param_8,ppppppuStack_1e8,uStack_1e0,uVar33);
          if (((ulong)pppppppuVar20 & 1) == 0) goto code_r0x00010ae69d9c;
          if (uStack_1e0 < uVar33) goto code_r0x00010ae69e28;
          *(ushort *****)((long)ppppppuStack_1e8 + uVar33) = pppppuVar32[5];
        }
        ppppppuStack_218 = ppppppuStack_1e8;
        uStack_210 = uStack_1e0;
        ppppppuStack_1e8 = (ushort ******)0x0;
        uStack_1e0 = 0;
        param_3 = &ppppppuStack_218;
        ppppppuVar30 = ppppppuVar25;
        (*(code *)(*ppppppuVar25)[0xd])();
        func_0x000107c2b534(ppppppuStack_218);
        ppppppuStack_218 = (ushort ******)0x0;
        uStack_210 = 0;
        if (((ulong)ppppppuVar30 & 1) == 0) goto code_r0x00010ae69d9c;
        func_0x000107c2b534(pppppppuVar17[0x4b]);
        pppppppuVar17[0x4b] = (ushort ******)0x0;
        pppppppuVar17[0x4c] = (ushort ******)0x0;
        if (((-1 < *(short *)((long)ppppppuVar25[6] + 0xd4)) &&
            (ppppppuVar30 = ppppppuVar25, (*(code *)(*ppppppuVar25)[0xe])(), (int)ppppppuVar30 == 0)
            ) || (pppppppuVar15 = pppppppuVar17, func_0x000107c2b904(), (int)pppppppuVar15 == 0))
        goto code_r0x00010ae69d9c;
        param_3 = (ushort *******)0x2;
        ppppppuVar30 = ppppppuVar25;
        func_0x000107c2b8fc(ppppppuVar25,2,1,pppppppuVar17[0xbb],pppppppuVar17 + 0x17,
                            pppppppuVar17[4]);
        if (((ulong)ppppppuVar30 & 1) == 0) goto code_r0x00010ae69d9c;
        param_3 = (ushort *******)&pppppuStack_330;
        ppppppuVar30 = ppppppuVar25;
        (*(code *)(*ppppppuVar25)[0xb])(ppppppuVar25,param_3,&uStack_2c0,8);
        if ((int)ppppppuVar30 == 0) goto code_r0x00010ae69d9c;
        param_3 = (ushort *******)&uStack_2c0;
        pppppppuVar15 = pppppppuVar17;
        func_0x00010ae5a300();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_3 = (ushort *******)&pppppuStack_330;
        ppppppuVar30 = ppppppuVar25;
        func_0x000107c2b6fc();
        if ((int)ppppppuVar30 == 0) goto code_r0x00010ae69d9c;
        uVar13 = *(uint *)(pppppppuVar17 + 0xc3);
        if ((*(ushort *)((long)ppppppuVar25[6] + 0xd4) >> 6 & 1) == 0) {
          uVar5 = uVar13 & 0xffffffdf;
          uVar10 = uVar13 & 0x1000000;
          uVar13 = uVar13 & 0xffffffc0 |
                   uVar13 & 0x1f | (*(byte *)(pppppppuVar17[1] + 0x1d) & 1) << 5;
          *(uint *)(pppppppuVar17 + 0xc3) = uVar13;
          if (uVar10 != 0 && ((ulong)pppppppuVar17[1][0x1d] & 4) != 0) {
            uVar13 = uVar5;
          }
          *(uint *)(pppppppuVar17 + 0xc3) = uVar13;
        }
        if ((uVar13 >> 5 & 1) != 0) {
          param_3 = (ushort *******)&pppppuStack_330;
          ppppppuVar30 = ppppppuVar25;
          (*(code *)(*ppppppuVar25)[0xb])(ppppppuVar25,param_3,&uStack_2c0,0xd);
          if ((int)ppppppuVar30 != 0) {
            iVar14 = (int)&uStack_2c0;
            param_3 = (ushort *******)0x0;
            func_0x000107c2b218();
            if (iVar14 != 0) {
              puVar19 = &uStack_2c0;
              param_3 = (ushort *******)&pppppuStack_238;
              func_0x000107c34f3c(puVar19,param_3,2);
              if ((int)puVar19 != 0) {
                iVar14 = (int)&pppppuStack_238;
                param_3 = (ushort *******)0xd;
                func_0x000107c2b228();
                if (iVar14 != 0) {
                  ppppppuVar30 = &pppppuStack_238;
                  param_3 = (ushort *******)&pppppuStack_258;
                  func_0x000107c34f3c(ppppppuVar30,param_3,2);
                  if ((int)ppppppuVar30 != 0) {
                    ppppppuVar30 = &pppppuStack_258;
                    param_3 = (ushort *******)&uStack_278;
                    func_0x000107c34f3c(ppppppuVar30,param_3,2);
                    if ((int)ppppppuVar30 != 0) {
                      param_3 = (ushort *******)&uStack_278;
                      pppppppuVar15 = pppppppuVar17;
                      func_0x000107c2b6b0();
                      if (((ulong)pppppppuVar15 & 1) != 0) {
                        pppppuVar32 = pppppppuVar17[1][10];
                        if (((pppppuVar32 == (ushort *****)0x0) &&
                            (pppppuVar32 = (ushort *****)(*pppppppuVar17[1])[0xd][0x31],
                            pppppuVar32 == (ushort *****)0x0)) || (*pppppuVar32 == (ushort ****)0x0)
                           ) {
code_r0x00010ae69d54:
                          param_3 = (ushort *******)&pppppuStack_330;
                          ppppppuVar30 = ppppppuVar25;
                          func_0x000107c2b6fc();
                          if (((ulong)ppppppuVar30 & 1) != 0) goto code_r0x00010ae69238;
                        }
                        else {
                          iVar14 = (int)&pppppuStack_238;
                          param_3 = (ushort *******)0x2f;
                          func_0x000107c2b228();
                          if (iVar14 != 0) {
                            ppppppuVar30 = &pppppuStack_238;
                            param_3 = appppppuStack_298;
                            func_0x000107c34f3c(ppppppuVar30,param_3,2);
                            if ((int)ppppppuVar30 != 0) {
                              param_3 = appppppuStack_298;
                              pppppppuVar15 = pppppppuVar17;
                              FUN_10ae626b8();
                              if ((int)pppppppuVar15 != 0) {
                                iVar14 = (int)&pppppuStack_238;
                                func_0x000107c2b20c();
                                if (iVar14 != 0) goto code_r0x00010ae69d54;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto code_r0x00010ae69d9c;
        }
code_r0x00010ae69238:
        if ((*(ushort *)((long)ppppppuVar25[6] + 0xd4) >> 6 & 1) == 0) {
          pppppppuVar15 = pppppppuVar17;
          FUN_10ae61f18();
          if (((ulong)pppppppuVar15 & 1) == 0) {
            param_3 = (ushort *******)0x0;
            func_0x000107c2b29c(0x10,0,0xae,&UNK_10f6d1513,0x35d);
          }
          else {
            pppppppuVar15 = pppppppuVar17;
            FUN_10ae66d90();
            if ((int)pppppppuVar15 != 0) {
              uVar24 = 5;
              goto code_r0x00010ae69d74;
            }
          }
          goto code_r0x00010ae69d9c;
        }
        uVar24 = 6;
code_r0x00010ae69d74:
        *(undefined4 *)(pppppppuVar17 + 3) = uVar24;
        uVar33 = 1;
      }
      func_0x000107c2b204(&pppppuStack_330);
      pppppppuVar20 = (ushort *******)ppppppuStack_1e8;
      func_0x000107c2b534();
      break;
    case 5:
      pppppppuVar20 = pppppppuVar17;
      FUN_10ae673c0();
      if ((int)pppppppuVar20 == 0) {
        uVar24 = 6;
      }
      else {
        pppppppuVar28 = pppppppuVar20;
        pppppppuVar15 = param_3;
        if ((int)pppppppuVar20 != 1) goto LAB_10ae693e8;
        uVar33 = 9;
        uVar24 = 5;
      }
      goto code_r0x00010ae69444;
    case 6:
      if ((*(uint *)(pppppppuVar17 + 0xc3) >> 0x14 & 1) != 0) goto code_r0x00010ae689a0;
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      *(uint *)(pppppppuVar17 + 0xc3) = *(uint *)(pppppppuVar17 + 0xc3) | 0x800000;
      pppppppuVar28 = pppppppuVar17;
      func_0x000107c2b8e4();
      pppppppuVar15 = param_3;
      if ((int)pppppppuVar28 != 0) {
        pppppppuVar15 = (ushort *******)&UNK_10e52b4d2;
        pppppppuVar28 = pppppppuVar17;
        func_0x000107c2b8f8(pppppppuVar17,&UNK_10e52b4d2,
                            *(undefined4 *)((long)pppppppuVar17[0x34] + 4));
        if (((int)pppppppuVar28 != 0) &&
           (pppppppuVar28 = pppppppuVar17, func_0x000107c2b908(), (int)pppppppuVar28 != 0)) {
          param_3 = (ushort *******)0x3;
          func_0x000107c2b8fc(pppppppuVar20,3,1,pppppppuVar17[0xbb],pppppppuVar17 + 0x23,
                              pppppppuVar17[4]);
          pppppppuVar28 = pppppppuVar20;
          pppppppuVar15 = param_3;
          if ((int)pppppppuVar20 != 0) {
            uVar13 = 7;
            *(undefined4 *)(pppppppuVar17 + 3) = 7;
            if ((*(byte *)((long)pppppppuVar17 + 0x61a) & 8) == 0) {
              uVar13 = 1;
            }
            uVar33 = (ulong)uVar13;
            break;
          }
        }
      }
      goto LAB_10ae693e8;
    case 7:
      if ((*(ushort *)((long)(*pppppppuVar17)[6] + 0xd4) >> 0xc & 1) != 0) {
        if ((*pppppppuVar17)[0x13] == (ushort *****)0x0) {
          pppppppuVar15 = pppppppuVar17 + 0x33;
          func_0x000107c2b894(pppppppuVar15,&UNK_10e52b512,4);
          if (((ulong)pppppppuVar15 & 1) != 0) goto code_r0x00010ae68e30;
          uVar22 = 0x44;
          uVar23 = 0x3a1;
code_r0x00010ae693e4:
          pppppppuVar15 = (ushort *******)0x0;
          pppppppuVar28 = (ushort *******)0x10;
          func_0x000107c2b29c(0x10,0,uVar22,&UNK_10f6d1513,uVar23);
        }
        else {
code_r0x00010ae68e30:
          pppppppuVar15 = pppppppuVar17 + 0x29;
          pppppppuVar28 = pppppppuVar17;
          func_0x000107c2b914(pppppppuVar17,pppppppuVar15,&pppppuStack_330,0);
          if ((int)pppppppuVar28 != 0) {
            if ((ushort ******)pppppuStack_330 != pppppppuVar17[4]) {
              uVar22 = 0x44;
              uVar23 = 0x3ac;
              goto code_r0x00010ae693e4;
            }
            uStack_2c0._0_4_ = CONCAT13((char)pppppuStack_330,0x14);
            pppppppuVar28 = pppppppuVar17 + 0x33;
            pppppppuVar15 = (ushort *******)&uStack_2c0;
            func_0x000107c2b894(pppppppuVar28,pppppppuVar15,4);
            if ((int)pppppppuVar28 != 0) {
              pppppppuVar28 = pppppppuVar17 + 0x33;
              pppppppuVar15 = pppppppuVar17 + 0x29;
              func_0x000107c2b894(pppppppuVar28,pppppppuVar15,pppppppuVar17[4]);
              if (((int)pppppppuVar28 != 0) &&
                 (pppppppuVar28 = pppppppuVar17, func_0x000107c2b910(), (int)pppppppuVar28 != 0)) {
                pppppppuVar15 = &ppppppuStack_208;
                pppppppuVar28 = pppppppuVar17;
                FUN_10ae6a2ec();
                pppppppuVar20 = pppppppuVar28;
                param_3 = pppppppuVar15;
                if (((ulong)pppppppuVar28 & 1) != 0) goto code_r0x00010ae685b8;
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae685b8:
      *(undefined4 *)(pppppppuVar17 + 3) = 8;
      uVar33 = 4;
      break;
    case 8:
      pppppppuVar34 = (ushort *******)*pppppppuVar17;
      if ((*(ushort *)((long)pppppppuVar34[6] + 0xd4) >> 0xc & 1) != 0) {
        param_3 = (ushort *******)0x1;
        pppppppuVar20 = pppppppuVar34;
        func_0x000107c2b8fc(pppppppuVar34,1,0,pppppppuVar17[0xbb],pppppppuVar17 + 0xb,
                            pppppppuVar17[4]);
        pppppppuVar28 = pppppppuVar20;
        pppppppuVar15 = param_3;
        if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
        *(uint *)(pppppppuVar17 + 0xc3) = *(uint *)(pppppppuVar17 + 0xc3) | 0x6800;
      }
      if (pppppppuVar34[0x13] == (ushort ******)0x0) {
        uVar13 = 0xe;
      }
      else {
        param_3 = (ushort *******)0x2;
        pppppppuVar20 = pppppppuVar34;
        func_0x000107c2b8fc(pppppppuVar34,2,0,pppppppuVar17[0xbb],pppppppuVar17 + 0x11,
                            pppppppuVar17[4]);
        pppppppuVar28 = pppppppuVar20;
        pppppppuVar15 = param_3;
        if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
        uVar13 = 0xc;
      }
      *(undefined4 *)(pppppppuVar17 + 3) = 9;
      if ((*(ushort *)((long)pppppppuVar34[6] + 0xd4) & 0x1000) == 0) {
        uVar13 = 1;
      }
      uVar33 = (ulong)uVar13;
      break;
    case 9:
      pppppppuVar34 = (ushort *******)*pppppppuVar17;
      if (pppppppuVar34[0x13] == (ushort ******)0x0) {
        if ((*(ushort *)((long)pppppppuVar34[6] + 0xd4) >> 0xc & 1) != 0) {
          param_3 = (ushort *******)&pppppuStack_330;
          pppppppuVar15 = pppppppuVar34;
          (*(code *)(*pppppppuVar34)[3])();
          if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
          pppppppuVar15 = (ushort *******)&pppppuStack_330;
          pppppppuVar28 = pppppppuVar34;
          func_0x000107c2b6f8(pppppppuVar34,pppppppuVar15,5);
          if ((int)pppppppuVar28 == 0) goto LAB_10ae693e8;
          if (uStack_320 != 0) {
            FUN_10ae60390(pppppppuVar34,2,0x32);
            uVar22 = 0x89;
            uVar23 = 0x3f5;
            goto code_r0x00010ae693e4;
          }
          (*(code *)(*pppppppuVar34)[4])(pppppppuVar34);
        }
        pppppppuVar15 = (ushort *******)0x2;
        func_0x000107c2b8fc(pppppppuVar34,2,0,pppppppuVar17[0xbb],pppppppuVar17 + 0x11,
                            pppppppuVar17[4]);
        pppppppuVar28 = pppppppuVar34;
        pppppppuVar20 = pppppppuVar34;
        param_3 = pppppppuVar15;
        if ((int)pppppppuVar34 == 0) goto LAB_10ae693e8;
      }
      uVar24 = 10;
code_r0x00010ae69444:
      *(undefined4 *)(pppppppuVar17 + 3) = uVar24;
      break;
    case 10:
      if (((*(byte *)(pppppppuVar17[0xbb] + 0x36) >> 6 & 1) != 0) &&
         (pppppppuVar34 = (ushort *******)*pppppppuVar17,
         (*(ushort *)((long)pppppppuVar34[6] + 0xd4) >> 0xc & 1) == 0)) {
        param_3 = (ushort *******)&pppppuStack_330;
        pppppppuVar15 = pppppppuVar34;
        (*(code *)(*pppppppuVar34)[3])();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
        pppppppuVar15 = (ushort *******)&pppppuStack_330;
        pppppppuVar28 = pppppppuVar34;
        func_0x000107c2b6f8(pppppppuVar34,pppppppuVar15,8);
        if ((int)pppppppuVar28 == 0) goto LAB_10ae693e8;
        if (1 < uStack_320) {
          pppppppuVar15 =
               (ushort *******)(ulong)((uint)(*puStack_328 >> 8) | (*puStack_328 & 0xff00ff) << 8);
          if ((pppppppuVar15 <= (ushort *******)(uStack_320 - 2)) &&
             (ppppppuStack_208 = (ushort ******)(puStack_328 + 1),
             ppppppuStack_200 = (ushort ******)pppppppuVar15,
             (ushort *******)(uStack_320 - 2) == pppppppuVar15)) {
            uStack_2c0._0_4_ = 0x14469;
            ppppppuStack_2b8 = (ushort ******)0x0;
            ppppppuStack_2b0 = (ushort ******)0x0;
            pppppuStack_238 = (ushort *****)CONCAT71(pppppuStack_238._1_7_,0x32);
            pppppppuVar20 = &ppppppuStack_208;
            apppppuStack_1d8[0] = (ushort *****)&uStack_2c0;
            func_0x000107c2b700(pppppppuVar20,&pppppuStack_238,apppppuStack_1d8,1,0);
            ppppppuVar25 = ppppppuStack_2b0;
            pppppppuVar15 = (ushort *******)ppppppuStack_2b8;
            if (((ulong)pppppppuVar20 & 1) == 0) {
              uVar33 = (ulong)pppppuStack_238 & 0xff;
            }
            else if (((uint)uStack_2c0 & 0x1000000) == 0) {
              func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x424);
              uVar33 = 0x6d;
            }
            else {
              ppppppuVar30 = *pppppppuVar1;
              uVar13 = (int)ppppppuVar30 + 0x1a0;
              param_3 = (ushort *******)ppppppuStack_2b0;
              func_0x000107c2b684();
              uVar5 = uVar13 ^ 1;
              if ((ushort *******)ppppppuVar25 == (ushort *******)0x0) {
                uVar5 = 1;
              }
              if ((uVar5 & 1) == 0) {
                _memcpy(ppppppuVar30[0x34],pppppppuVar15,ppppppuVar25);
                param_3 = pppppppuVar15;
              }
              if (uVar13 != 0) {
                if (((ulong)pppppuStack_330 & 1) == 0) {
                  pppppppuVar15 = pppppppuVar17 + 0x33;
                  param_3 = (ushort *******)ppppppuStack_318;
                  func_0x000107c2b894(pppppppuVar15,ppppppuStack_318,uStack_310);
                  if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae698a0;
                }
                (*(code *)(*pppppppuVar34)[4])();
                pppppppuVar20 = pppppppuVar34;
                goto code_r0x00010ae6858c;
              }
code_r0x00010ae698a0:
              uVar33 = 0x50;
            }
            pppppppuVar15 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar34,2,uVar33);
            pppppppuVar28 = pppppppuVar34;
            goto LAB_10ae693e8;
          }
        }
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,0x416);
        pppppppuVar15 = (ushort *******)0x2;
        FUN_10ae60390(pppppppuVar34,2,0x32);
        pppppppuVar28 = pppppppuVar34;
        goto LAB_10ae693e8;
      }
code_r0x00010ae6858c:
      uVar24 = 0xb;
code_r0x00010ae68cb8:
      *(undefined4 *)(pppppppuVar17 + 3) = uVar24;
code_r0x00010ae68cbc:
      uVar33 = 1;
      break;
    case 0xb:
      pppppppuVar34 = (ushort *******)*pppppppuVar17;
      if ((*(byte *)(pppppppuVar17 + 0xc3) >> 5 & 1) == 0) {
        if ((*(ushort *)((long)pppppppuVar34[6] + 0xd4) >> 6 & 1) == 0) {
          (*pppppppuVar1)[0x17] = (ushort *****)0x0;
        }
        uVar24 = 0xd;
        goto code_r0x00010ae68cb8;
      }
      pppppuVar32 = pppppppuVar17[1][0x1d];
      param_3 = (ushort *******)&pppppuStack_330;
      pppppppuVar15 = pppppppuVar34;
      (*(code *)(*pppppppuVar34)[3])();
      if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
      pppppppuVar15 = (ushort *******)&pppppuStack_330;
      pppppppuVar28 = pppppppuVar34;
      func_0x000107c2b6f8(pppppppuVar34,pppppppuVar15,0xb);
      if ((int)pppppppuVar28 != 0) {
        param_3 = (ushort *******)&pppppuStack_330;
        pppppppuVar28 = pppppppuVar17;
        func_0x000107c2b8d0(pppppppuVar17,param_3,((ulong)pppppuVar32 & 2) == 0);
        pppppppuVar15 = param_3;
        if ((int)pppppppuVar28 != 0) {
          if (((ulong)pppppuStack_330 & 1) == 0) {
            pppppppuVar28 = pppppppuVar17 + 0x33;
            param_3 = (ushort *******)ppppppuStack_318;
            func_0x000107c2b894(pppppppuVar28,ppppppuStack_318,uStack_310);
            pppppppuVar15 = param_3;
            if ((int)pppppppuVar28 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar34)[4])();
          uVar24 = 0xc;
          pppppppuVar20 = pppppppuVar34;
          goto code_r0x00010ae68cb8;
        }
      }
      goto LAB_10ae693e8;
    case 0xc:
      if ((pppppppuVar17[0xbb][0x12] == (ushort *****)0x0) ||
         (*pppppppuVar17[0xbb][0x12] == (ushort ****)0x0)) {
code_r0x00010ae69440:
        uVar33 = 1;
        uVar24 = 0xd;
        goto code_r0x00010ae69444;
      }
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      param_3 = (ushort *******)&pppppuStack_330;
      pppppppuVar15 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
      pppppppuVar28 = pppppppuVar17;
      func_0x000107c2b704();
      pppppppuVar15 = param_3;
      if ((int)pppppppuVar28 != 1) {
        if ((int)pppppppuVar28 == 2) {
          uVar33 = 0x10;
          uVar24 = 0xc;
          pppppppuVar20 = pppppppuVar28;
          goto code_r0x00010ae69444;
        }
        pppppppuVar15 = (ushort *******)&pppppuStack_330;
        pppppppuVar28 = pppppppuVar20;
        func_0x000107c2b6f8(pppppppuVar20,pppppppuVar15,0xf);
        if ((int)pppppppuVar28 != 0) {
          param_3 = (ushort *******)&pppppuStack_330;
          pppppppuVar28 = pppppppuVar17;
          func_0x000107c2b8d4();
          pppppppuVar15 = param_3;
          if ((int)pppppppuVar28 != 0) {
            if (((ulong)pppppuStack_330 & 1) == 0) {
              pppppppuVar28 = pppppppuVar17 + 0x33;
              param_3 = (ushort *******)ppppppuStack_318;
              func_0x000107c2b894(pppppppuVar28,ppppppuStack_318,uStack_310);
              pppppppuVar15 = param_3;
              if ((int)pppppppuVar28 == 0) goto LAB_10ae693e8;
            }
            (*(code *)(*pppppppuVar20)[4])();
            goto code_r0x00010ae69440;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xd:
      if ((*(byte *)((long)pppppppuVar17 + 0x61b) & 1) == 0) {
code_r0x00010ae68468:
        uVar24 = 0xe;
        goto code_r0x00010ae69444;
      }
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      param_3 = (ushort *******)&pppppuStack_330;
      pppppppuVar15 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
      pppppppuVar15 = (ushort *******)&pppppuStack_330;
      pppppppuVar28 = pppppppuVar20;
      func_0x000107c2b6f8(pppppppuVar20,pppppppuVar15,0xcb);
      if ((int)pppppppuVar28 != 0) {
        param_3 = (ushort *******)&pppppuStack_330;
        pppppppuVar28 = pppppppuVar17;
        FUN_10ae5aebc();
        pppppppuVar15 = param_3;
        if ((int)pppppppuVar28 != 0) {
          if (((ulong)pppppuStack_330 & 1) == 0) {
            pppppppuVar28 = pppppppuVar17 + 0x33;
            param_3 = (ushort *******)ppppppuStack_318;
            func_0x000107c2b894(pppppppuVar28,ppppppuStack_318,uStack_310);
            pppppppuVar15 = param_3;
            if ((int)pppppppuVar28 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar20)[4])();
          goto code_r0x00010ae68468;
        }
      }
      goto LAB_10ae693e8;
    case 0xe:
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      param_3 = (ushort *******)&pppppuStack_330;
      pppppppuVar15 = pppppppuVar20;
      (*(code *)(*pppppppuVar20)[3])();
      if ((int)pppppppuVar15 == 0) goto code_r0x00010ae6931c;
      pppppppuVar15 = (ushort *******)&pppppuStack_330;
      pppppppuVar28 = pppppppuVar20;
      func_0x000107c2b6f8(pppppppuVar20,pppppppuVar15,0x14);
      if ((int)pppppppuVar28 != 0) {
        pppppppuVar15 = (ushort *******)&pppppuStack_330;
        pppppppuVar28 = pppppppuVar17;
        func_0x000107c2b8d8(pppppppuVar17,pppppppuVar15,
                            *(ushort *)((long)pppppppuVar20[6] + 0xd4) >> 0xc & 1);
        if ((int)pppppppuVar28 != 0) {
          param_3 = (ushort *******)0x3;
          pppppppuVar28 = pppppppuVar20;
          func_0x000107c2b8fc(pppppppuVar20,3,0,pppppppuVar17[0xbb],pppppppuVar17 + 0x1d,
                              pppppppuVar17[4]);
          pppppppuVar15 = param_3;
          if ((int)pppppppuVar28 != 0) {
            if ((*(ushort *)((long)pppppppuVar20[6] + 0xd4) >> 0xc & 1) == 0) {
              if (((ulong)pppppuStack_330 & 1) == 0) {
                pppppppuVar28 = pppppppuVar17 + 0x33;
                param_3 = (ushort *******)ppppppuStack_318;
                func_0x000107c2b894(pppppppuVar28,ppppppuStack_318,uStack_310);
                pppppppuVar15 = param_3;
                if ((int)pppppppuVar28 == 0) goto LAB_10ae693e8;
              }
              pppppppuVar28 = pppppppuVar17;
              func_0x000107c2b910();
              pppppppuVar15 = param_3;
              if ((int)pppppppuVar28 == 0) goto LAB_10ae693e8;
              uVar24 = 0xf;
            }
            else {
              uVar24 = 0x10;
            }
            *(undefined4 *)(pppppppuVar17 + 3) = uVar24;
            (*(code *)(*pppppppuVar20)[4])();
            goto code_r0x00010ae68cbc;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xf:
      param_3 = (ushort *******)&pppppuStack_330;
      pppppppuVar20 = pppppppuVar17;
      FUN_10ae6a2ec();
      pppppppuVar28 = pppppppuVar20;
      pppppppuVar15 = param_3;
      if ((int)pppppppuVar20 == 0) goto LAB_10ae693e8;
      *(undefined4 *)(pppppppuVar17 + 3) = 0x10;
      uVar13 = 4;
      if (((*pppppppuVar17)[0x13] != (ushort *****)0x0 & (byte)pppppuStack_330) == 0) {
        uVar13 = 1;
      }
      uVar33 = (ulong)uVar13;
      break;
    case 0x10:
      goto code_r0x00010ae69de8;
    }
    if (*(int *)(pppppppuVar17 + 3) != iVar12) {
      pppppppuVar20 = (ushort *******)*pppppppuVar17;
      ppppppuVar25 = pppppppuVar20[0xc];
      if ((ppppppuVar25 != (ushort ******)0x0) ||
         (ppppppuVar25 = (ushort ******)pppppppuVar20[0xd][0x30], ppppppuVar25 != (ushort ******)0x0
         )) {
        param_3 = (ushort *******)0x2001;
        (*(code *)ppppppuVar25)(pppppppuVar20,0x2001,1);
      }
    }
  } while ((int)uVar33 == 1);
code_r0x00010ae69de8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return uVar33;
  }
  ___stack_chk_fail();
code_r0x00010ae69e28:
  _abort();
  func_0x000107c2b534(pppppuStack_238);
  func_0x000107c2b204(&pppppuStack_330);
  __Unwind_Resume();
  if ((*(byte *)(pppppppuVar20 + 0x36) >> 5 & 1) == 0) {
    return 1;
  }
  ppppppuVar25 = pppppppuVar20[0x38];
  if ((ppppppuVar25 != (ushort ******)0x0) && (param_3[0x17] == ppppppuVar25)) {
    bVar26 = 0;
    ppppppuVar30 = param_3[0x16];
    ppppppuVar31 = pppppppuVar20[0x37];
    do {
      bVar26 = *(byte *)ppppppuVar31 ^ *(byte *)ppppppuVar30 | bVar26;
      ppppppuVar25 = (ushort ******)((long)ppppppuVar25 + -1);
      ppppppuVar30 = (ushort ******)((long)ppppppuVar30 + 1);
      ppppppuVar31 = (ushort ******)((long)ppppppuVar31 + 1);
    } while (ppppppuVar25 != (ushort ******)0x0);
    return (ulong)(bVar26 == 0);
  }
  return 0;
}



/* Entry: 10ae6832c; end: 10ae69eff;  */

char FUN_10ae6832c(ushort *******param_1,ushort *******param_2)

{
  ushort *******pppppppuVar1;
  ushort *******pppppppuVar2;
  char *pcVar3;
  uint uVar4;
  ushort ****ppppuVar5;
  ushort ******ppppppuVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ushort ******ppppppuVar13;
  undefined8 *puVar14;
  ushort *******pppppppuVar15;
  ushort *******pppppppuVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 in_x7;
  undefined4 uVar21;
  ushort ******ppppppuVar22;
  byte bVar23;
  ushort ****ppppuVar24;
  ushort *******pppppppuVar25;
  ushort ******ppppppuVar26;
  ushort ******ppppppuVar27;
  ushort *****pppppuVar28;
  char cVar29;
  ushort *******pppppppuVar30;
  ushort *****pppppuVar31;
  ushort *****pppppuVar32;
  ushort *****pppppuVar33;
  undefined1 uStack_1f2;
  undefined1 uStack_1f1;
  ushort *****pppppuStack_1f0;
  ushort *puStack_1e8;
  ulong uStack_1e0;
  ushort ******ppppppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  long lStack_1b8;
  ushort *****pppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_180;
  ushort ******ppppppuStack_178;
  ushort ******ppppppuStack_170;
  ushort ******ppppppuStack_168;
  undefined8 uStack_160;
  ushort ******appppppuStack_158 [4];
  undefined8 uStack_138;
  ushort *****pppppuStack_118;
  ulong uStack_110;
  ushort *****pppppuStack_f8;
  ulong uStack_f0;
  ushort ******ppppppuStack_d8;
  ulong uStack_d0;
  ushort ******ppppppuStack_c8;
  ushort ******ppppppuStack_c0;
  ushort ******ppppppuStack_a8;
  ulong uStack_a0;
  ushort *****apppppuStack_98 [4];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar1 = param_1 + 0xbb;
  pppppppuVar2 = param_1 + 0x47;
  pppppppuVar15 = param_1;
  do {
    iVar7 = *(int *)(param_1 + 3);
    cVar29 = '\x01';
    pppppppuVar25 = pppppppuVar15;
    pppppppuVar16 = param_2;
    switch(iVar7) {
    case 0:
      param_2 = (ushort *******)*param_1;
      pppppppuVar16 = (ushort *******)&uStack_180;
      pppppppuVar25 = param_1;
      FUN_10ae5cbc0(param_1,pppppppuVar16,&pppppuStack_1f0);
      lVar10 = lStack_1b8;
      if ((int)pppppppuVar25 != 0) {
        if (param_2[0x13] == (ushort ******)0x0 || lStack_1b8 == 0) {
          if (lStack_1b8 != 0) {
            _memcpy((char *)((long)param_1 + 0x623),uStack_1c0,lStack_1b8);
          }
          *(char *)((long)param_1 + 0x643) = (char)lVar10;
          pppppppuVar15 = param_1;
          FUN_10ae5987c(param_1,&ppppppuStack_c8);
          uVar18 = uStack_1a8;
          ppppppuVar22 = (ushort ******)pppppuStack_1b0;
          if (((ulong)pppppppuVar15 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0xe4);
            pppppppuVar16 = (ushort *******)0x2;
            FUN_10ae60390(param_2,2,0x28);
            pppppppuVar25 = param_2;
          }
          else {
            uVar19 = (ulong)ppppppuStack_c8 & 0xffff;
            pppppppuVar15 = param_2;
            func_0x000107c2b89c(param_2);
            FUN_10ae60114(ppppppuVar22,uVar18,pppppppuVar15,uVar19);
            param_1[0xbf] = ppppppuVar22;
            if (ppppppuVar22 == (ushort ******)0x0) {
              func_0x000107c2b29c(0x10,0,0xb8,&UNK_10f6d1513,0xec);
              pppppppuVar16 = (ushort *******)0x2;
              FUN_10ae60390(param_2,2,0x28);
              pppppppuVar25 = param_2;
            }
            else {
              apppppuStack_98[0] = (ushort *****)CONCAT71(apppppuStack_98[0]._1_7_,0x32);
              pppppppuVar15 = param_1;
              FUN_10ae59a0c(param_1,apppppuStack_98,&pppppuStack_1f0);
              if (((ulong)pppppppuVar15 & 1) == 0) {
                pppppppuVar16 = (ushort *******)0x2;
                FUN_10ae60390(param_2,2,(ulong)apppppuStack_98[0] & 0xff);
                pppppppuVar25 = param_2;
              }
              else {
                func_0x000107c2b89c();
                pppppppuVar15 = param_1 + 0x33;
                func_0x000107c2b888(pppppppuVar15,param_2,param_1[0xbf]);
                pppppppuVar25 = pppppppuVar15;
                pppppppuVar16 = param_2;
                if ((int)pppppppuVar15 != 0) {
                  cVar29 = '\x01';
                  *(undefined4 *)(param_1 + 3) = 1;
                  break;
                }
              }
            }
          }
        }
        else {
          func_0x000107c2b29c(0x10,0,0x132,&UNK_10f6d1513,0xda);
          pppppppuVar16 = (ushort *******)0x2;
          FUN_10ae60390(param_2,2,0x2f);
          pppppppuVar25 = param_2;
        }
      }
    default:
LAB_10ae693e8:
      cVar29 = '\0';
      pppppppuVar15 = pppppppuVar25;
      param_2 = pppppppuVar16;
      break;
    case 1:
      ppppppuVar22 = *param_1;
      pppppppuVar16 = (ushort *******)&uStack_180;
      pppppppuVar25 = param_1;
      FUN_10ae5cbc0(param_1,pppppppuVar16,&pppppuStack_1f0);
      if ((int)pppppppuVar25 == 0) goto LAB_10ae693e8;
      uStack_1f2 = 0x32;
      pppppuVar28 = ppppppuVar22[6];
      ppppppuVar27 = *param_1;
      ppppppuStack_a8 = (ushort ******)0x0;
      ppppppuVar26 = &pppppuStack_1f0;
      FUN_10ae59824(ppppppuVar26,&ppppppuStack_c8,0x29);
      if ((int)ppppppuVar26 == 0) {
code_r0x00010ae68890:
        pppppppuVar15 = param_1;
        func_0x000107c2b85c();
        if (((ulong)pppppppuVar15 & 1) != 0) goto code_r0x00010ae6889c;
code_r0x00010ae69810:
        uVar17 = 0x50;
code_r0x00010ae69814:
        param_2 = (ushort *******)0x2;
        FUN_10ae60390(ppppppuVar22,2,uVar17);
code_r0x00010ae69820:
        cVar29 = '\0';
      }
      else {
        ppppppuVar13 = &pppppuStack_1f0;
        FUN_10ae59824(ppppppuVar13,apppppuStack_98,0x2d);
        if (((ulong)ppppppuVar13 & 1) == 0) {
          uStack_1f2 = 0x6d;
          func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x116);
          uVar17 = uStack_1f2;
          goto code_r0x00010ae69814;
        }
        pppppppuVar15 = param_1;
        func_0x00010ae59cd0(param_1,&pppppuStack_f8,&pppppuStack_118,&ppppppuStack_d8,&uStack_1f2,
                            &pppppuStack_1f0,&ppppppuStack_c8);
        uVar17 = uStack_1f2;
        if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69814;
        if ((*(byte *)(param_1 + 0xc3) >> 4 & 1) == 0) goto code_r0x00010ae68890;
        appppppuStack_158[0] = (ushort ******)0x0;
        param_2 = appppppuStack_158;
        pppppppuVar15 = param_1;
        FUN_10ae5a6e4(param_1,param_2,&uStack_1f1,pppppuStack_f8,uStack_f0,0,0);
        iVar12 = (int)pppppppuVar15;
        if (iVar12 == 0) {
          pppppppuVar15 = param_1;
          param_2 = (ushort *******)appppppuStack_158[0];
          FUN_10ae64ac0();
          if ((int)pppppppuVar15 == 0) {
code_r0x00010ae69738:
            iVar12 = 2;
            goto code_r0x00010ae6973c;
          }
          if ((*(byte *)(appppppuStack_158[0] + 0x36) >> 3 & 1) != 0) {
            ppppppuStack_d8 =
                 (ushort ******)
                 CONCAT44(ppppppuStack_d8._4_4_,
                          (uint)((int)ppppppuStack_d8 - *(int *)(appppppuStack_158[0] + 0x2f)) /
                          1000);
            func_0x000107c2b798(ppppppuVar27[0xd],&uStack_138);
            uVar19 = CONCAT62(uStack_138._2_6_,CONCAT11(uStack_138._1_1_,(undefined1)uStack_138)) -
                     (long)appppppuStack_158[0][0x19];
            param_2 = (ushort *******)appppppuStack_158[0];
            if (uVar19 >> 0x1f == 0) {
              *(int *)((long)pppppuVar28 + 0xf4) = (int)ppppppuStack_d8 - (int)uVar19;
              pppppppuVar16 = param_1;
              FUN_10ae68018(param_1,appppppuStack_158[0],&uStack_180,&pppppuStack_118);
              pppppppuVar15 = (ushort *******)appppppuStack_158[0];
              if (((ulong)pppppppuVar16 & 1) == 0) {
                uStack_1f2 = 0x33;
                iVar12 = 3;
              }
              else {
                appppppuStack_158[0] = (ushort ******)0x0;
                func_0x000107c2b6c0(&ppppppuStack_a8);
                iVar12 = 0;
                param_2 = pppppppuVar15;
              }
              goto code_r0x00010ae6973c;
            }
            goto code_r0x00010ae69738;
          }
          iVar12 = 2;
code_r0x00010ae69748:
          appppppuStack_158[0] = (ushort ******)0x0;
          func_0x000107c2b874();
        }
        else {
          if (iVar12 == 3) {
            uStack_1f2 = 0x50;
          }
code_r0x00010ae6973c:
          ppppppuVar27 = appppppuStack_158[0];
          appppppuStack_158[0] = (ushort ******)0x0;
          if ((ushort *******)ppppppuVar27 != (ushort *******)0x0) goto code_r0x00010ae69748;
        }
        if (1 < iVar12) {
          if (iVar12 == 2) goto code_r0x00010ae68890;
          uVar17 = uStack_1f2;
          if (iVar12 != 3) goto code_r0x00010ae6889c;
          goto code_r0x00010ae69814;
        }
        if (iVar12 == 0) {
          func_0x000107c2b84c(&ppppppuStack_c8,ppppppuStack_a8,0);
          ppppppuVar27 = ppppppuStack_c8;
          ppppppuStack_c8 = (ushort ******)0x0;
          func_0x000107c2b6c0(pppppppuVar1,ppppppuVar27);
          ppppppuVar27 = ppppppuStack_c8;
          ppppppuStack_c8 = (ushort ******)0x0;
          if (ppppppuVar27 != (ushort ******)0x0) {
            func_0x000107c2b874();
          }
          if (*pppppppuVar1 == (ushort ******)0x0) goto code_r0x00010ae69810;
          *(ushort *)((long)ppppppuVar22[6] + 0xd4) =
               *(ushort *)((long)ppppppuVar22[6] + 0xd4) | 0x40;
          *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x800000;
          ppppppuVar27 = param_1[0xbb];
          uVar11 = *(uint *)((long)ppppppuVar22[0xe] + 0x124);
          func_0x000107c2b850(ppppppuVar22,ppppppuVar27);
          if (*(uint *)(ppppppuVar27 + 0x18) <= uVar11) {
            uVar4 = *(uint *)((long)ppppppuVar27 + 0xc4);
            if (uVar11 <= *(uint *)((long)ppppppuVar27 + 0xc4)) {
              uVar4 = uVar11;
            }
            *(uint *)(ppppppuVar27 + 0x18) = uVar4;
          }
code_r0x00010ae6889c:
          pppppppuVar15 = param_1;
          func_0x00010ae5a158(param_1,&uStack_1f2,&pppppuStack_1f0);
          uVar17 = uStack_1f2;
          if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69814;
          ppppppuVar27 = param_1[0xbb];
          ppppppuVar27[0x1a] = (ushort *****)param_1[0xbf];
          pppppppuVar15 = param_1;
          FUN_10ae5987c(param_1,(long)ppppppuVar27 + 6);
          if (((ulong)pppppppuVar15 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x10a,&UNK_10f6d1513,0x1a6);
            uVar17 = 0x28;
            goto code_r0x00010ae69814;
          }
          pppppppuVar15 = param_1;
          FUN_10ae59f44(param_1,&ppppppuStack_c8,0,&uStack_1f2,&pppppuStack_1f0);
          uVar17 = uStack_1f2;
          if (((ulong)pppppppuVar15 & 1) == 0) {
code_r0x00010ae69b34:
            param_2 = (ushort *******)0x2;
            FUN_10ae60390(ppppppuVar22,2,uVar17);
          }
          else {
            if ((*(byte *)((long)ppppppuVar22 + 0xa4) >> 2 & 1) == 0) {
              pppppuVar28 = ppppppuVar22[6];
              uVar21 = 1;
code_r0x00010ae688f8:
              *(undefined4 *)(pppppuVar28 + 0x1f) = uVar21;
            }
            else {
              if (((ulong)ppppppuVar26 & 1) == 0) {
                pppppuVar28 = ppppppuVar22[6];
                uVar21 = 5;
              }
              else if ((ushort *******)ppppppuStack_a8 == (ushort *******)0x0) {
                pppppuVar28 = ppppppuVar22[6];
                uVar21 = 6;
              }
              else if (*(int *)((long)ppppppuStack_a8 + 0x17c) == 0) {
                pppppuVar28 = ppppppuVar22[6];
                uVar21 = 7;
              }
              else {
                if ((*(uint *)(param_1 + 0xc3) >> 0xc & 1) == 0) {
                  pppppuVar28 = ppppppuVar22[6];
                  uVar21 = 4;
                  goto code_r0x00010ae688f8;
                }
                pppppuVar28 = ppppppuVar22[6];
                if ((*(uint *)(param_1 + 0xc3) >> 0x18 & 1) == 0) {
                  ppppppuVar26 = (ushort ******)pppppuVar28[0x3d];
                  if (ppppppuVar26 == (ushort ******)ppppppuStack_a8[0x31]) {
                    if (ppppppuVar26 != (ushort ******)0x0) {
                      ppppppuVar27 = (ushort ******)ppppppuStack_a8[0x30];
                      ppppuVar24 = pppppuVar28[0x3c];
                      do {
                        ppppppuVar26 = (ushort ******)((long)ppppppuVar26 + -1);
                        if (*(char *)ppppuVar24 != *(char *)ppppppuVar27) goto code_r0x00010ae69984;
                        ppppppuVar27 = (ushort ******)((long)ppppppuVar27 + 1);
                        ppppuVar24 = (ushort ****)((long)ppppuVar24 + 1);
                      } while (ppppppuVar26 != (ushort ******)0x0);
                    }
                    ppppppuVar26 = *pppppppuVar1;
                    if ((((*(byte *)(ppppppuStack_a8 + 0x36) ^ *(byte *)(ppppppuVar26 + 0x36)) >> 6
                         & 1) == 0) &&
                       (ppppppuVar27 = (ushort ******)ppppppuVar26[0x33],
                       ppppppuVar27 == (ushort ******)ppppppuStack_a8[0x33])) {
                      if (ppppppuVar27 != (ushort ******)0x0) {
                        ppppppuVar13 = (ushort ******)ppppppuStack_a8[0x32];
                        pppppuVar31 = ppppppuVar26[0x32];
                        do {
                          ppppppuVar27 = (ushort ******)((long)ppppppuVar27 + -1);
                          if (*(char *)pppppuVar31 != *(char *)ppppppuVar13)
                          goto code_r0x00010ae69998;
                          ppppppuVar13 = (ushort ******)((long)ppppppuVar13 + 1);
                          pppppuVar31 = (ushort *****)((long)pppppuVar31 + 1);
                        } while (ppppppuVar27 != (ushort ******)0x0);
                      }
                      if (*(int *)((long)pppppuVar28 + 0xf4) - 0x3dU < 0xffffff87) {
                        uVar21 = 0xc;
                      }
                      else {
                        pppppppuVar15 = (ushort *******)ppppppuStack_a8;
                        FUN_10ae69f00(ppppppuStack_a8,param_1[1]);
                        if (((ulong)pppppppuVar15 & 1) != 0) {
                          if (((ulong)ppppppuStack_c8 & 1) == 0) {
                            uVar21 = 8;
                            goto code_r0x00010ae688f8;
                          }
                          *(undefined4 *)(pppppuVar28 + 0x1f) = 2;
                          *(ushort *)((long)pppppuVar28 + 0xd4) =
                               *(ushort *)((long)pppppuVar28 + 0xd4) | 0x1000;
                          pppppuVar28 = ppppppuVar22[6];
                          goto code_r0x00010ae699a0;
                        }
                        uVar21 = 0xd;
                      }
                    }
                    else {
code_r0x00010ae69998:
                      uVar21 = 0xe;
                    }
                  }
                  else {
code_r0x00010ae69984:
                    uVar21 = 9;
                  }
                }
                else {
                  uVar21 = 10;
                }
              }
              *(undefined4 *)(pppppuVar28 + 0x1f) = uVar21;
            }
code_r0x00010ae699a0:
            ppppppuVar27 = *pppppppuVar1;
            ppppuVar24 = pppppuVar28[0x3c];
            ppppuVar5 = pppppuVar28[0x3d];
            ppppppuVar26 = ppppppuVar27 + 0x30;
            func_0x000107c2b684(ppppppuVar26,ppppuVar5);
            uVar11 = (uint)ppppppuVar26 ^ 1;
            if (ppppuVar5 == (ushort ****)0x0) {
              uVar11 = 1;
            }
            if ((uVar11 & 1) == 0) {
              _memcpy(ppppppuVar27[0x30],ppppuVar24,ppppuVar5);
            }
            if ((uint)ppppppuVar26 == 0) {
code_r0x00010ae69b30:
              uVar17 = 0x50;
              goto code_r0x00010ae69b34;
            }
            if (((*(ushort *)((long)ppppppuVar22[6] + 0xd4) >> 0xc & 1) != 0) &&
               (ppppppuVar26 = *pppppppuVar1, (*(byte *)(ppppppuVar26 + 0x36) >> 6 & 1) != 0)) {
              ppppppuVar13 = (ushort ******)ppppppuStack_a8[0x34];
              ppppppuVar6 = (ushort ******)ppppppuStack_a8[0x35];
              ppppppuVar27 = ppppppuVar26 + 0x34;
              func_0x000107c2b684(ppppppuVar27,ppppppuVar6);
              uVar11 = (uint)ppppppuVar27 ^ 1;
              if (ppppppuVar6 == (ushort ******)0x0) {
                uVar11 = 1;
              }
              if ((uVar11 & 1) == 0) {
                _memcpy(ppppppuVar26[0x34],ppppppuVar13,ppppppuVar6);
              }
              if ((uint)ppppppuVar27 == 0) goto code_r0x00010ae69b30;
            }
            if (((*(byte *)((long)ppppppuVar22 + 0xa4) >> 2 & 1) != 0) &&
               (ppppppuVar22[0x13] != (ushort *****)0x0)) {
              ppppppuVar27 = param_1[0xbb];
              pppppuVar28 = param_1[1][0x16];
              pppppuVar31 = param_1[1][0x17];
              ppppppuVar26 = ppppppuVar27 + 0x37;
              func_0x000107c2b684(ppppppuVar26,pppppuVar31);
              uVar11 = (uint)ppppppuVar26 ^ 1;
              if (pppppuVar31 == (ushort *****)0x0) {
                uVar11 = 1;
              }
              if ((uVar11 & 1) == 0) {
                _memcpy(ppppppuVar27[0x37],pppppuVar28,pppppuVar31);
              }
              if ((uint)ppppppuVar26 == 0) goto code_r0x00010ae69b30;
            }
            if (ppppppuVar22[0xd][0x3c] != (ushort ****)0x0) {
              iVar12 = (int)&pppppuStack_1f0;
              (*(code *)ppppppuVar22[0xd][0x3c])();
              if (iVar12 == 0) {
                func_0x000107c2b29c(0x10,0,0x85,&UNK_10f6d1513,0x1f9);
                goto code_r0x00010ae69b30;
              }
            }
            ppppppuVar26 = ppppppuVar22;
            func_0x000107c2b89c();
            func_0x000107c2b76c();
            if ((*(ushort *)((long)ppppppuVar22[6] + 0xd4) >> 6 & 1) == 0) {
              uVar19 = (ulong)*(uint *)((long)ppppppuVar26 + 4);
              param_2 = (ushort *******)&UNK_10e52b4d2;
            }
            else {
              param_2 = (ushort *******)(*pppppppuVar1 + 2);
              uVar19 = (ulong)*(int *)((long)*pppppppuVar1 + 0xc);
            }
            pppppppuVar15 = param_1;
            func_0x000107c2b8f0(param_1,param_2,uVar19);
            if ((int)pppppppuVar15 != 0) {
              if (((uint)uStack_180 & 1) == 0) {
                pppppppuVar15 = param_1 + 0x33;
                param_2 = (ushort *******)ppppppuStack_168;
                func_0x000107c2b894(pppppppuVar15,ppppppuStack_168,uStack_160);
                if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69820;
              }
              uVar8 = *(ushort *)((long)ppppppuVar22[6] + 0xd4);
              if ((uVar8 >> 0xc & 1) == 0) {
                if ((*(byte *)((long)param_1 + 0x619) >> 4 & 1) != 0) {
                  *(ushort *)((long)ppppppuVar22[6] + 0xd4) = uVar8 | 1;
                }
              }
              else {
                pppppppuVar15 = param_1;
                FUN_10ae67a20();
                if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69820;
              }
              if (((ulong)ppppppuStack_c8 & 1) == 0) {
                (*(code *)(*ppppppuVar22)[4])(ppppppuVar22);
                pppppppuVar15 = param_1 + 0x33;
                FUN_10ae65734();
                if (((ulong)pppppppuVar15 & 1) != 0) {
                  uVar21 = 2;
                  goto code_r0x00010ae69bb0;
                }
              }
              else {
                param_2 = (ushort *******)&pppppuStack_1f0;
                pppppppuVar15 = param_1;
                FUN_10ae69f5c();
                if ((int)pppppppuVar15 != 0) {
                  (*(code *)(*ppppppuVar22)[4])(ppppppuVar22);
                  func_0x000107c2b534(*pppppppuVar2);
                  *pppppppuVar2 = (ushort ******)0x0;
                  param_1[0x48] = (ushort ******)0x0;
                  uVar21 = 4;
code_r0x00010ae69bb0:
                  *(undefined4 *)(param_1 + 3) = uVar21;
                  cVar29 = '\x01';
                  goto code_r0x00010ae69824;
                }
              }
            }
          }
          goto code_r0x00010ae69820;
        }
        if (iVar12 != 1) goto code_r0x00010ae6889c;
        *(undefined4 *)(param_1 + 3) = 1;
        cVar29 = '\v';
      }
code_r0x00010ae69824:
      pppppppuVar15 = (ushort *******)ppppppuStack_a8;
      ppppppuStack_a8 = (ushort ******)0x0;
      if (pppppppuVar15 != (ushort *******)0x0) {
        func_0x000107c2b874();
      }
      break;
    case 2:
      if ((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) == 0) {
        pppppppuVar16 = (ushort *******)*param_1;
        puStack_1e8 = (ushort *)0x0;
        pppppuStack_1f0 = (ushort *****)0x0;
        ppppppuStack_1d8 = (ushort ******)0x0;
        uStack_1e0 = 0;
        param_2 = (ushort *******)&pppppuStack_1f0;
        pppppppuVar15 = pppppppuVar16;
        (*(code *)(*pppppppuVar16)[0xb])(pppppppuVar16,param_2,&uStack_180,2);
        if ((int)pppppppuVar15 == 0) {
code_r0x00010ae68f2c:
          cVar29 = '\0';
        }
        else {
          iVar12 = (int)&uStack_180;
          param_2 = (ushort *******)0x303;
          func_0x000107c2b228();
          if (iVar12 == 0) goto code_r0x00010ae68f2c;
          puVar14 = &uStack_180;
          param_2 = (ushort *******)&UNK_10e52b348;
          func_0x000107c2b21c(puVar14,&UNK_10e52b348,0x20);
          if ((int)puVar14 == 0) goto code_r0x00010ae68f2c;
          puVar14 = &uStack_180;
          param_2 = &ppppppuStack_c8;
          func_0x000107c34f3c(puVar14,param_2,1);
          if ((int)puVar14 == 0) goto code_r0x00010ae68f2c;
          pppppppuVar15 = &ppppppuStack_c8;
          param_2 = (ushort *******)((long)param_1 + 0x623);
          func_0x000107c2b21c(pppppppuVar15,param_2,*(char *)((long)param_1 + 0x643));
          if ((int)pppppppuVar15 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)(ulong)*(ushort *)(param_1[0xbf] + 2);
          iVar12 = (int)&uStack_180;
          func_0x000107c2b228();
          if (iVar12 == 0) goto code_r0x00010ae68f2c;
          iVar12 = (int)&uStack_180;
          param_2 = (ushort *******)0x0;
          func_0x000107c2b218();
          if (iVar12 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)&uStack_138;
          pppppppuVar15 = param_1;
          FUN_10ae5987c();
          if ((int)pppppppuVar15 == 0) goto code_r0x00010ae68f2c;
          puVar14 = &uStack_180;
          param_2 = (ushort *******)apppppuStack_98;
          func_0x000107c34f3c(puVar14,param_2,2);
          if ((int)puVar14 == 0) goto code_r0x00010ae68f2c;
          iVar12 = (int)apppppuStack_98;
          param_2 = (ushort *******)0x2b;
          func_0x000107c2b228();
          if (iVar12 == 0) goto code_r0x00010ae68f2c;
          iVar12 = (int)apppppuStack_98;
          param_2 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar12 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)(ulong)*(ushort *)(pppppppuVar16 + 2);
          iVar12 = (int)apppppuStack_98;
          func_0x000107c2b228();
          if (iVar12 == 0) goto code_r0x00010ae68f2c;
          iVar12 = (int)apppppuStack_98;
          param_2 = (ushort *******)0x33;
          func_0x000107c2b228();
          if (iVar12 == 0) goto code_r0x00010ae68f2c;
          iVar12 = (int)apppppuStack_98;
          param_2 = (ushort *******)0x2;
          func_0x000107c2b228();
          if (iVar12 == 0) goto code_r0x00010ae68f2c;
          param_2 = (ushort *******)(ulong)CONCAT11(uStack_138._1_1_,(undefined1)uStack_138);
          iVar12 = (int)apppppuStack_98;
          func_0x000107c2b228();
          if (iVar12 == 0) goto code_r0x00010ae68f2c;
          if (((ulong)param_1[0xc3] & 1) != 0) {
            iVar12 = (int)apppppuStack_98;
            param_2 = (ushort *******)0xfe0d;
            func_0x000107c2b228();
            if (iVar12 != 0) {
              iVar12 = (int)apppppuStack_98;
              param_2 = (ushort *******)0x8;
              func_0x000107c2b228();
              if (iVar12 != 0) {
                ppppppuVar22 = apppppuStack_98;
                param_2 = (ushort *******)&pppppuStack_f8;
                func_0x000107c2b220(ppppppuVar22,param_2,8);
                if ((int)ppppppuVar22 != 0) {
                  *pppppuStack_f8 = (ushort ****)0x0;
                  goto code_r0x00010ae68738;
                }
              }
            }
            goto code_r0x00010ae68f2c;
          }
code_r0x00010ae68738:
          pppppuStack_f8 = (ushort *****)0x0;
          uStack_f0 = 0;
          param_2 = (ushort *******)&pppppuStack_1f0;
          pppppppuVar15 = pppppppuVar16;
          (*(code *)(*pppppppuVar16)[0xc])(pppppppuVar16,param_2,&pppppuStack_f8);
          if (((ulong)pppppppuVar15 & 1) == 0) {
code_r0x00010ae69bbc:
            cVar29 = '\0';
          }
          else {
            if (((ulong)param_1[0xc3] & 1) != 0) {
              if (uStack_f0 < 8) goto code_r0x00010ae69e28;
              param_2 = (ushort *******)((uStack_f0 - 8) + (long)pppppuStack_f8);
              pppppppuVar15 = param_1;
              FUN_10ae68138(param_1,param_2,8,pppppppuVar16[6] + 6,0x20,param_1 + 0x33,1,in_x7,
                            pppppuStack_f8,uStack_f0,uStack_f0 - 8);
              if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69bbc;
            }
            pppppuStack_118 = pppppuStack_f8;
            uStack_110 = uStack_f0;
            pppppuStack_f8 = (ushort *****)0x0;
            uStack_f0 = 0;
            param_2 = (ushort *******)&pppppuStack_118;
            pppppppuVar15 = pppppppuVar16;
            (*(code *)(*pppppppuVar16)[0xd])();
            if ((int)pppppppuVar15 == 0) {
              func_0x000107c2b534(pppppuStack_118);
              cVar29 = '\0';
              pppppuStack_118 = (ushort *****)0x0;
              uStack_110 = 0;
            }
            else {
              pppppppuVar15 = pppppppuVar16;
              (*(code *)(*pppppppuVar16)[0xe])();
              func_0x000107c2b534(pppppuStack_118);
              pppppuStack_118 = (ushort *****)0x0;
              uStack_110 = 0;
              if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69bbc;
              *(ushort *)((long)pppppppuVar16[6] + 0xd4) =
                   *(ushort *)((long)pppppppuVar16[6] + 0xd4) | 0x8000;
              *(undefined4 *)(param_1 + 3) = 3;
              cVar29 = '\x04';
            }
          }
          func_0x000107c2b534(pppppuStack_f8);
        }
        pppppppuVar15 = (ushort *******)&pppppuStack_1f0;
        func_0x000107c2b204();
      }
      else {
code_r0x00010ae689a0:
        cVar29 = '\x11';
      }
      break;
    case 3:
      pppppppuVar15 = (ushort *******)*param_1;
      param_2 = (ushort *******)&uStack_180;
      pppppppuVar16 = pppppppuVar15;
      (*(code *)(*pppppppuVar15)[3])();
      if ((int)pppppppuVar16 != 0) {
        pppppppuVar16 = (ushort *******)&uStack_180;
        pppppppuVar25 = pppppppuVar15;
        func_0x000107c2b6f8(pppppppuVar15,pppppppuVar16,1);
        if ((int)pppppppuVar25 != 0) {
          ppppppuStack_c8 = ppppppuStack_178;
          ppppppuStack_c0 = ppppppuStack_170;
          pppppppuVar16 = pppppppuVar15;
          FUN_10ae5965c(pppppppuVar15,&ppppppuStack_c8,&pppppuStack_1f0);
          uVar11 = 0;
          if ((ushort *******)ppppppuStack_c0 == (ushort *******)0x0) {
            uVar11 = (uint)pppppppuVar16;
          }
          if ((uVar11 & 1) == 0) {
            func_0x000107c2b29c(0x10,0,0x83,&UNK_10f6d1513,0x26c);
            pppppppuVar16 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar15,2,0x32);
            pppppppuVar25 = pppppppuVar15;
          }
          else {
            ppppppuVar22 = pppppppuVar15[6];
            if (*(int *)(ppppppuVar22 + 0x1a) == 1) {
              ppppppuVar22 = &pppppuStack_1f0;
              FUN_10ae59824(ppppppuVar22,&ppppppuStack_c8,0xfe0d);
              if (((ulong)ppppppuVar22 & 1) == 0) {
                func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x277);
                pppppppuVar16 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar15,2,0x6d);
                pppppppuVar25 = pppppppuVar15;
              }
              else {
                pppppppuVar16 = (ushort *******)ppppppuStack_c8;
                if ((ushort *******)ppppppuStack_c0 == (ushort *******)0x0) {
                  uVar20 = 0x32;
                  uVar18 = 0x286;
                }
                else {
                  uVar20 = 0x32;
                  uVar18 = 0x286;
                  if (((*(char *)ppppppuStack_c8 == '\0') && ((ushort *******)0x2 < ppppppuStack_c0)
                      ) && ((pppppppuVar16 = (ushort *******)((long)ppppppuStack_c8 + 3),
                            (char *)0x1 < (char *)((long)ppppppuStack_c0 + -3) &&
                            (((ushort *******)ppppppuStack_c0 != (ushort *******)0x5 &&
                             ((char *)0x2 < (char *)((long)ppppppuStack_c0 + -5))))))) {
                    pppppppuVar25 =
                         (ushort *******)
                         (ulong)((uint)(*(ushort *)((long)ppppppuStack_c8 + 6) >> 8) |
                                (*(ushort *)((long)ppppppuStack_c8 + 6) & 0xff00ff) << 8);
                    uVar19 = (long)(ppppppuStack_c0 + -1) - (long)pppppppuVar25;
                    if ((pppppppuVar25 <= ppppppuStack_c0 + -1) &&
                       ((1 < uVar19 &&
                        (pcVar3 = (char *)((long)ppppppuStack_c8 + (long)pppppppuVar25),
                        uVar8 = *(ushort *)(pcVar3 + 8),
                        uVar19 - 2 == (ulong)((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8))))) {
                      if (((ushort)(*(ushort *)((long)ppppppuStack_c8 + 1) >> 8 |
                                   *(ushort *)((long)ppppppuStack_c8 + 1) << 8) ==
                           *(ushort *)param_1[0x59]) &&
                         ((ushort)(*(ushort *)((long)ppppppuStack_c8 + 3) >> 8 |
                                  *(ushort *)((long)ppppppuStack_c8 + 3) << 8) ==
                          *(ushort *)param_1[0x58])) {
                        uVar20 = 0x2f;
                        uVar18 = 0x28f;
                        if ((*(char *)((long)ppppppuStack_c8 + 5) ==
                             *(char *)((long)param_1 + 0x622)) &&
                           (pppppppuVar25 == (ushort *******)0x0)) {
                          apppppuStack_98[0] = (ushort *****)CONCAT71(apppppuStack_98[0]._1_7_,0x32)
                          ;
                          pppppppuVar25 = param_1;
                          ppppppuStack_c8 = (ushort ******)pppppppuVar16;
                          FUN_10ae5875c(param_1,apppppuStack_98,&pppppuStack_f8,pppppppuVar2,
                                        &pppppuStack_1f0,pcVar3 + 10);
                          if (((ulong)pppppppuVar25 & 1) != 0) {
                            pppppppuVar16 = param_1;
                            FUN_10ae5cbc0(param_1,&uStack_180,&pppppuStack_1f0);
                            if (((ulong)pppppppuVar16 & 1) == 0) {
                              uVar18 = 0x44;
                              uVar20 = 0x2a2;
                              goto code_r0x00010ae693e4;
                            }
                            ppppppuVar22 = pppppppuVar15[6];
                            goto code_r0x00010ae68c24;
                          }
                          func_0x000107c2b29c(0x10,0,0x8a,&UNK_10f6d1513,0x29b);
                          pppppppuVar16 = (ushort *******)0x2;
                          FUN_10ae60390(pppppppuVar15,2,(ulong)apppppuStack_98[0] & 0xff);
                          pppppppuVar25 = pppppppuVar15;
                          goto LAB_10ae693e8;
                        }
                      }
                      else {
                        uVar20 = 0x2f;
                        uVar18 = 0x28f;
                      }
                    }
                  }
                }
                ppppppuStack_c8 = (ushort ******)pppppppuVar16;
                func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,uVar18);
                pppppppuVar16 = (ushort *******)0x2;
                FUN_10ae60390(pppppppuVar15,2,uVar20);
                pppppppuVar25 = pppppppuVar15;
              }
            }
            else {
code_r0x00010ae68c24:
              if ((*(ushort *)((long)ppppppuVar22 + 0xd4) >> 6 & 1) == 0) {
code_r0x00010ae68c2c:
                param_2 = (ushort *******)&pppppuStack_1f0;
                pppppppuVar25 = param_1;
                FUN_10ae69f5c();
                pppppppuVar16 = param_2;
                if ((int)pppppppuVar25 != 0) {
                  if (((uint)uStack_180 & 1) == 0) {
                    pppppppuVar25 = param_1 + 0x33;
                    param_2 = (ushort *******)ppppppuStack_168;
                    func_0x000107c2b894(pppppppuVar25,ppppppuStack_168,uStack_160);
                    pppppppuVar16 = param_2;
                    if ((int)pppppppuVar25 == 0) goto LAB_10ae693e8;
                  }
                  pppppppuVar16 = pppppppuVar15;
                  (*(code *)(*pppppppuVar15)[5])();
                  if ((int)pppppppuVar16 != 0) {
                    FUN_10ae60390(pppppppuVar15,2,10);
                    uVar18 = 0xff;
                    uVar20 = 0x2d5;
                    goto code_r0x00010ae693e4;
                  }
                  (*(code *)(*pppppppuVar15)[4])(pppppppuVar15);
                  pppppppuVar15 = (ushort *******)param_1[0x47];
                  func_0x000107c2b534();
                  *pppppppuVar2 = (ushort ******)0x0;
                  param_1[0x48] = (ushort ******)0x0;
                  cVar29 = '\x01';
                  *(undefined4 *)(param_1 + 3) = 4;
                  break;
                }
              }
              else {
                ppppppuVar22 = &pppppuStack_1f0;
                FUN_10ae59824(ppppppuVar22,&ppppppuStack_c8,0x29);
                if (((ulong)ppppppuVar22 & 1) == 0) {
                  func_0x000107c2b29c(0x10,0,0x12f,&UNK_10f6d1513,0x2b2);
                  pppppppuVar16 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar15,2,0x2f);
                  pppppppuVar25 = pppppppuVar15;
                }
                else {
                  uStack_138._0_1_ = 0x32;
                  pppppppuVar16 = param_1;
                  func_0x00010ae59cd0(param_1,apppppuStack_98,&pppppuStack_f8,&pppppuStack_118,
                                      &uStack_138,&pppppuStack_1f0,&ppppppuStack_c8);
                  uVar17 = (undefined1)uStack_138;
                  if (((ulong)pppppppuVar16 & 1) != 0) {
                    pppppppuVar16 = param_1;
                    FUN_10ae68018(param_1,param_1[0xbb],&uStack_180,&pppppuStack_f8);
                    if ((int)pppppppuVar16 != 0) goto code_r0x00010ae68c2c;
                    uVar17 = 0x33;
                  }
                  pppppppuVar16 = (ushort *******)0x2;
                  FUN_10ae60390(pppppppuVar15,2,uVar17);
                  pppppppuVar25 = pppppppuVar15;
                }
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae6931c:
      pppppppuVar15 = pppppppuVar16;
      cVar29 = '\x03';
      break;
    case 4:
      ppppppuVar22 = *param_1;
      pppppuVar28 = ppppppuVar22[6];
      pppppppuVar15 = (ushort *******)param_1[0xc2];
      if (pppppppuVar15 == (ushort *******)0x0) {
        func_0x000107c2b3c4(pppppuVar28 + 2,0x20,&UNK_10e525a20);
      }
      else if (((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) == 0) &&
              (pppppppuVar15[1] == (ushort ******)0x20)) {
        ppppppuVar26 = *pppppppuVar15;
        pppppuVar31 = *ppppppuVar26;
        pppppuVar33 = ppppppuVar26[3];
        pppppuVar32 = ppppppuVar26[2];
        pppppuVar28[3] = (ushort ****)ppppppuVar26[1];
        pppppuVar28[2] = (ushort ****)pppppuVar31;
        pppppuVar28[5] = (ushort ****)pppppuVar33;
        pppppuVar28[4] = (ushort ****)pppppuVar32;
      }
      else {
        func_0x000107c2b3c4(pppppuVar28 + 2,0x20,&UNK_10e525a20);
        if ((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) != 0) {
          pppppppuVar16 = (ushort *******)0x20;
          pppppppuVar25 = pppppppuVar15;
          func_0x000107c2b684();
          if ((int)pppppppuVar25 == 0) goto LAB_10ae693e8;
          ppppppuVar26 = *pppppppuVar15;
          pppppuVar31 = (ushort *****)pppppuVar28[2];
          pppppuVar33 = (ushort *****)pppppuVar28[5];
          pppppuVar32 = (ushort *****)pppppuVar28[4];
          ppppppuVar26[1] = (ushort *****)pppppuVar28[3];
          *ppppppuVar26 = pppppuVar31;
          ppppppuVar26[3] = pppppuVar33;
          ppppppuVar26[2] = pppppuVar32;
        }
      }
      ppppppuStack_a8 = (ushort ******)0x0;
      uStack_a0 = 0;
      puStack_1e8 = (ushort *)0x0;
      pppppuStack_1f0 = (ushort *****)0x0;
      ppppppuStack_1d8 = (ushort ******)0x0;
      uStack_1e0 = 0;
      param_2 = (ushort *******)&pppppuStack_1f0;
      ppppppuVar26 = ppppppuVar22;
      (*(code *)(*ppppppuVar22)[0xb])(ppppppuVar22,param_2,&uStack_180,2);
      if ((int)ppppppuVar26 == 0) {
code_r0x00010ae69d9c:
        cVar29 = '\0';
      }
      else {
        iVar12 = (int)&uStack_180;
        param_2 = (ushort *******)0x303;
        func_0x000107c2b228();
        if (iVar12 == 0) goto code_r0x00010ae69d9c;
        puVar14 = &uStack_180;
        param_2 = (ushort *******)(ppppppuVar22[6] + 2);
        func_0x000107c2b21c(puVar14,param_2,0x20);
        if ((int)puVar14 == 0) goto code_r0x00010ae69d9c;
        puVar14 = &uStack_180;
        param_2 = (ushort *******)apppppuStack_98;
        func_0x000107c34f3c(puVar14,param_2,1);
        if ((int)puVar14 == 0) goto code_r0x00010ae69d9c;
        ppppppuVar26 = apppppuStack_98;
        param_2 = (ushort *******)((long)param_1 + 0x623);
        func_0x000107c2b21c(ppppppuVar26,param_2,*(char *)((long)param_1 + 0x643));
        if ((int)ppppppuVar26 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)(ulong)*(ushort *)(param_1[0xbf] + 2);
        iVar12 = (int)&uStack_180;
        func_0x000107c2b228();
        if (iVar12 == 0) goto code_r0x00010ae69d9c;
        iVar12 = (int)&uStack_180;
        param_2 = (ushort *******)0x0;
        func_0x000107c2b218();
        if (iVar12 == 0) goto code_r0x00010ae69d9c;
        puVar14 = &uStack_180;
        param_2 = &ppppppuStack_c8;
        func_0x000107c34f3c(puVar14,param_2,2);
        if ((int)puVar14 == 0) goto code_r0x00010ae69d9c;
        param_2 = &ppppppuStack_c8;
        pppppppuVar15 = param_1;
        func_0x00010ae59ec4();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_2 = &ppppppuStack_c8;
        pppppppuVar15 = param_1;
        FUN_10ae5a0c0();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_2 = &ppppppuStack_c8;
        pppppppuVar15 = param_1;
        FUN_10ae6a27c();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&pppppuStack_1f0;
        ppppppuVar26 = ppppppuVar22;
        (*(code *)(*ppppppuVar22)[0xc])(ppppppuVar22,param_2,&ppppppuStack_a8);
        if (((ulong)ppppppuVar26 & 1) == 0) goto code_r0x00010ae69d9c;
        if (((ulong)param_1[0xc3] & 1) != 0) {
          uVar19 = 0x1e;
          if (*(char *)*ppppppuVar22 != '\0') {
            uVar19 = 0x26;
          }
          param_2 = (ushort *******)(pppppuVar28 + 5);
          pppppppuVar15 = param_1;
          FUN_10ae68138(param_1,param_2,8,ppppppuVar22[6] + 6,0x20,param_1 + 0x33,0,in_x7,
                        ppppppuStack_a8,uStack_a0,uVar19);
          if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae69d9c;
          if (uStack_a0 < uVar19) goto code_r0x00010ae69e28;
          *(ushort *****)((long)ppppppuStack_a8 + uVar19) = pppppuVar28[5];
        }
        ppppppuStack_d8 = ppppppuStack_a8;
        uStack_d0 = uStack_a0;
        ppppppuStack_a8 = (ushort ******)0x0;
        uStack_a0 = 0;
        param_2 = &ppppppuStack_d8;
        ppppppuVar26 = ppppppuVar22;
        (*(code *)(*ppppppuVar22)[0xd])();
        func_0x000107c2b534(ppppppuStack_d8);
        ppppppuStack_d8 = (ushort ******)0x0;
        uStack_d0 = 0;
        if (((ulong)ppppppuVar26 & 1) == 0) goto code_r0x00010ae69d9c;
        func_0x000107c2b534(param_1[0x4b]);
        param_1[0x4b] = (ushort ******)0x0;
        param_1[0x4c] = (ushort ******)0x0;
        if (((-1 < *(short *)((long)ppppppuVar22[6] + 0xd4)) &&
            (ppppppuVar26 = ppppppuVar22, (*(code *)(*ppppppuVar22)[0xe])(), (int)ppppppuVar26 == 0)
            ) || (pppppppuVar15 = param_1, func_0x000107c2b904(), (int)pppppppuVar15 == 0))
        goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)0x2;
        ppppppuVar26 = ppppppuVar22;
        func_0x000107c2b8fc(ppppppuVar22,2,1,param_1[0xbb],param_1 + 0x17,param_1[4]);
        if (((ulong)ppppppuVar26 & 1) == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&pppppuStack_1f0;
        ppppppuVar26 = ppppppuVar22;
        (*(code *)(*ppppppuVar22)[0xb])(ppppppuVar22,param_2,&uStack_180,8);
        if ((int)ppppppuVar26 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&uStack_180;
        pppppppuVar15 = param_1;
        func_0x00010ae5a300();
        if ((int)pppppppuVar15 == 0) goto code_r0x00010ae69d9c;
        param_2 = (ushort *******)&pppppuStack_1f0;
        ppppppuVar26 = ppppppuVar22;
        func_0x000107c2b6fc();
        if ((int)ppppppuVar26 == 0) goto code_r0x00010ae69d9c;
        uVar11 = *(uint *)(param_1 + 0xc3);
        if ((*(ushort *)((long)ppppppuVar22[6] + 0xd4) >> 6 & 1) == 0) {
          uVar4 = uVar11 & 0xffffffdf;
          uVar9 = uVar11 & 0x1000000;
          uVar11 = uVar11 & 0xffffffc0 | uVar11 & 0x1f | (*(byte *)(param_1[1] + 0x1d) & 1) << 5;
          *(uint *)(param_1 + 0xc3) = uVar11;
          if (uVar9 != 0 && ((ulong)param_1[1][0x1d] & 4) != 0) {
            uVar11 = uVar4;
          }
          *(uint *)(param_1 + 0xc3) = uVar11;
        }
        if ((uVar11 >> 5 & 1) != 0) {
          param_2 = (ushort *******)&pppppuStack_1f0;
          ppppppuVar26 = ppppppuVar22;
          (*(code *)(*ppppppuVar22)[0xb])(ppppppuVar22,param_2,&uStack_180,0xd);
          if ((int)ppppppuVar26 != 0) {
            iVar12 = (int)&uStack_180;
            param_2 = (ushort *******)0x0;
            func_0x000107c2b218();
            if (iVar12 != 0) {
              puVar14 = &uStack_180;
              param_2 = (ushort *******)&pppppuStack_f8;
              func_0x000107c34f3c(puVar14,param_2,2);
              if ((int)puVar14 != 0) {
                iVar12 = (int)&pppppuStack_f8;
                param_2 = (ushort *******)0xd;
                func_0x000107c2b228();
                if (iVar12 != 0) {
                  ppppppuVar26 = &pppppuStack_f8;
                  param_2 = (ushort *******)&pppppuStack_118;
                  func_0x000107c34f3c(ppppppuVar26,param_2,2);
                  if ((int)ppppppuVar26 != 0) {
                    ppppppuVar26 = &pppppuStack_118;
                    param_2 = (ushort *******)&uStack_138;
                    func_0x000107c34f3c(ppppppuVar26,param_2,2);
                    if ((int)ppppppuVar26 != 0) {
                      param_2 = (ushort *******)&uStack_138;
                      pppppppuVar15 = param_1;
                      func_0x000107c2b6b0();
                      if (((ulong)pppppppuVar15 & 1) != 0) {
                        pppppuVar28 = param_1[1][10];
                        if (((pppppuVar28 == (ushort *****)0x0) &&
                            (pppppuVar28 = (ushort *****)(*param_1[1])[0xd][0x31],
                            pppppuVar28 == (ushort *****)0x0)) || (*pppppuVar28 == (ushort ****)0x0)
                           ) {
code_r0x00010ae69d54:
                          param_2 = (ushort *******)&pppppuStack_1f0;
                          ppppppuVar26 = ppppppuVar22;
                          func_0x000107c2b6fc();
                          if (((ulong)ppppppuVar26 & 1) != 0) goto code_r0x00010ae69238;
                        }
                        else {
                          iVar12 = (int)&pppppuStack_f8;
                          param_2 = (ushort *******)0x2f;
                          func_0x000107c2b228();
                          if (iVar12 != 0) {
                            ppppppuVar26 = &pppppuStack_f8;
                            param_2 = appppppuStack_158;
                            func_0x000107c34f3c(ppppppuVar26,param_2,2);
                            if ((int)ppppppuVar26 != 0) {
                              param_2 = appppppuStack_158;
                              pppppppuVar15 = param_1;
                              FUN_10ae626b8();
                              if ((int)pppppppuVar15 != 0) {
                                iVar12 = (int)&pppppuStack_f8;
                                func_0x000107c2b20c();
                                if (iVar12 != 0) goto code_r0x00010ae69d54;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto code_r0x00010ae69d9c;
        }
code_r0x00010ae69238:
        if ((*(ushort *)((long)ppppppuVar22[6] + 0xd4) >> 6 & 1) == 0) {
          pppppppuVar15 = param_1;
          FUN_10ae61f18();
          if (((ulong)pppppppuVar15 & 1) == 0) {
            param_2 = (ushort *******)0x0;
            func_0x000107c2b29c(0x10,0,0xae,&UNK_10f6d1513,0x35d);
          }
          else {
            pppppppuVar15 = param_1;
            FUN_10ae66d90();
            if ((int)pppppppuVar15 != 0) {
              uVar21 = 5;
              goto code_r0x00010ae69d74;
            }
          }
          goto code_r0x00010ae69d9c;
        }
        uVar21 = 6;
code_r0x00010ae69d74:
        *(undefined4 *)(param_1 + 3) = uVar21;
        cVar29 = '\x01';
      }
      func_0x000107c2b204(&pppppuStack_1f0);
      pppppppuVar15 = (ushort *******)ppppppuStack_a8;
      func_0x000107c2b534();
      break;
    case 5:
      pppppppuVar15 = param_1;
      FUN_10ae673c0();
      if ((int)pppppppuVar15 == 0) {
        uVar21 = 6;
      }
      else {
        pppppppuVar25 = pppppppuVar15;
        pppppppuVar16 = param_2;
        if ((int)pppppppuVar15 != 1) goto LAB_10ae693e8;
        cVar29 = '\t';
        uVar21 = 5;
      }
      goto code_r0x00010ae69444;
    case 6:
      if ((*(uint *)(param_1 + 0xc3) >> 0x14 & 1) != 0) goto code_r0x00010ae689a0;
      pppppppuVar15 = (ushort *******)*param_1;
      *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x800000;
      pppppppuVar25 = param_1;
      func_0x000107c2b8e4();
      pppppppuVar16 = param_2;
      if ((int)pppppppuVar25 != 0) {
        pppppppuVar16 = (ushort *******)&UNK_10e52b4d2;
        pppppppuVar25 = param_1;
        func_0x000107c2b8f8(param_1,&UNK_10e52b4d2,*(undefined4 *)((long)param_1[0x34] + 4));
        if (((int)pppppppuVar25 != 0) &&
           (pppppppuVar25 = param_1, func_0x000107c2b908(), (int)pppppppuVar25 != 0)) {
          param_2 = (ushort *******)0x3;
          func_0x000107c2b8fc(pppppppuVar15,3,1,param_1[0xbb],param_1 + 0x23,param_1[4]);
          pppppppuVar25 = pppppppuVar15;
          pppppppuVar16 = param_2;
          if ((int)pppppppuVar15 != 0) {
            cVar29 = '\a';
            *(undefined4 *)(param_1 + 3) = 7;
            if ((*(byte *)((long)param_1 + 0x61a) & 8) == 0) {
              cVar29 = '\x01';
            }
            break;
          }
        }
      }
      goto LAB_10ae693e8;
    case 7:
      if ((*(ushort *)((long)(*param_1)[6] + 0xd4) >> 0xc & 1) != 0) {
        if ((*param_1)[0x13] == (ushort *****)0x0) {
          pppppppuVar15 = param_1 + 0x33;
          func_0x000107c2b894(pppppppuVar15,&UNK_10e52b512,4);
          if (((ulong)pppppppuVar15 & 1) != 0) goto code_r0x00010ae68e30;
          uVar18 = 0x44;
          uVar20 = 0x3a1;
code_r0x00010ae693e4:
          pppppppuVar16 = (ushort *******)0x0;
          pppppppuVar25 = (ushort *******)0x10;
          func_0x000107c2b29c(0x10,0,uVar18,&UNK_10f6d1513,uVar20);
        }
        else {
code_r0x00010ae68e30:
          pppppppuVar16 = param_1 + 0x29;
          pppppppuVar25 = param_1;
          func_0x000107c2b914(param_1,pppppppuVar16,&pppppuStack_1f0,0);
          if ((int)pppppppuVar25 != 0) {
            if ((ushort ******)pppppuStack_1f0 != param_1[4]) {
              uVar18 = 0x44;
              uVar20 = 0x3ac;
              goto code_r0x00010ae693e4;
            }
            uStack_180._0_4_ = CONCAT13((char)pppppuStack_1f0,0x14);
            pppppppuVar25 = param_1 + 0x33;
            pppppppuVar16 = (ushort *******)&uStack_180;
            func_0x000107c2b894(pppppppuVar25,pppppppuVar16,4);
            if ((int)pppppppuVar25 != 0) {
              pppppppuVar25 = param_1 + 0x33;
              pppppppuVar16 = param_1 + 0x29;
              func_0x000107c2b894(pppppppuVar25,pppppppuVar16,param_1[4]);
              if (((int)pppppppuVar25 != 0) &&
                 (pppppppuVar25 = param_1, func_0x000107c2b910(), (int)pppppppuVar25 != 0)) {
                pppppppuVar16 = &ppppppuStack_c8;
                pppppppuVar25 = param_1;
                FUN_10ae6a2ec();
                pppppppuVar15 = pppppppuVar25;
                param_2 = pppppppuVar16;
                if (((ulong)pppppppuVar25 & 1) != 0) goto code_r0x00010ae685b8;
              }
            }
          }
        }
        goto LAB_10ae693e8;
      }
code_r0x00010ae685b8:
      *(undefined4 *)(param_1 + 3) = 8;
      cVar29 = '\x04';
      break;
    case 8:
      pppppppuVar30 = (ushort *******)*param_1;
      if ((*(ushort *)((long)pppppppuVar30[6] + 0xd4) >> 0xc & 1) != 0) {
        param_2 = (ushort *******)0x1;
        pppppppuVar15 = pppppppuVar30;
        func_0x000107c2b8fc(pppppppuVar30,1,0,param_1[0xbb],param_1 + 0xb,param_1[4]);
        pppppppuVar25 = pppppppuVar15;
        pppppppuVar16 = param_2;
        if ((int)pppppppuVar15 == 0) goto LAB_10ae693e8;
        *(uint *)(param_1 + 0xc3) = *(uint *)(param_1 + 0xc3) | 0x6800;
      }
      if (pppppppuVar30[0x13] == (ushort ******)0x0) {
        cVar29 = '\x0e';
      }
      else {
        param_2 = (ushort *******)0x2;
        pppppppuVar15 = pppppppuVar30;
        func_0x000107c2b8fc(pppppppuVar30,2,0,param_1[0xbb],param_1 + 0x11,param_1[4]);
        pppppppuVar25 = pppppppuVar15;
        pppppppuVar16 = param_2;
        if ((int)pppppppuVar15 == 0) goto LAB_10ae693e8;
        cVar29 = '\f';
      }
      *(undefined4 *)(param_1 + 3) = 9;
      if ((*(ushort *)((long)pppppppuVar30[6] + 0xd4) & 0x1000) == 0) {
        cVar29 = '\x01';
      }
      break;
    case 9:
      pppppppuVar30 = (ushort *******)*param_1;
      if (pppppppuVar30[0x13] == (ushort ******)0x0) {
        if ((*(ushort *)((long)pppppppuVar30[6] + 0xd4) >> 0xc & 1) != 0) {
          param_2 = (ushort *******)&pppppuStack_1f0;
          pppppppuVar16 = pppppppuVar30;
          (*(code *)(*pppppppuVar30)[3])();
          if ((int)pppppppuVar16 == 0) goto code_r0x00010ae6931c;
          pppppppuVar16 = (ushort *******)&pppppuStack_1f0;
          pppppppuVar25 = pppppppuVar30;
          func_0x000107c2b6f8(pppppppuVar30,pppppppuVar16,5);
          if ((int)pppppppuVar25 == 0) goto LAB_10ae693e8;
          if (uStack_1e0 != 0) {
            FUN_10ae60390(pppppppuVar30,2,0x32);
            uVar18 = 0x89;
            uVar20 = 0x3f5;
            goto code_r0x00010ae693e4;
          }
          (*(code *)(*pppppppuVar30)[4])(pppppppuVar30);
        }
        pppppppuVar16 = (ushort *******)0x2;
        func_0x000107c2b8fc(pppppppuVar30,2,0,param_1[0xbb],param_1 + 0x11,param_1[4]);
        pppppppuVar25 = pppppppuVar30;
        pppppppuVar15 = pppppppuVar30;
        param_2 = pppppppuVar16;
        if ((int)pppppppuVar30 == 0) goto LAB_10ae693e8;
      }
      uVar21 = 10;
code_r0x00010ae69444:
      *(undefined4 *)(param_1 + 3) = uVar21;
      break;
    case 10:
      if (((*(byte *)(param_1[0xbb] + 0x36) >> 6 & 1) != 0) &&
         (pppppppuVar30 = (ushort *******)*param_1,
         (*(ushort *)((long)pppppppuVar30[6] + 0xd4) >> 0xc & 1) == 0)) {
        param_2 = (ushort *******)&pppppuStack_1f0;
        pppppppuVar16 = pppppppuVar30;
        (*(code *)(*pppppppuVar30)[3])();
        if ((int)pppppppuVar16 == 0) goto code_r0x00010ae6931c;
        pppppppuVar16 = (ushort *******)&pppppuStack_1f0;
        pppppppuVar25 = pppppppuVar30;
        func_0x000107c2b6f8(pppppppuVar30,pppppppuVar16,8);
        if ((int)pppppppuVar25 == 0) goto LAB_10ae693e8;
        if (1 < uStack_1e0) {
          pppppppuVar15 =
               (ushort *******)(ulong)((uint)(*puStack_1e8 >> 8) | (*puStack_1e8 & 0xff00ff) << 8);
          if ((pppppppuVar15 <= (ushort *******)(uStack_1e0 - 2)) &&
             (ppppppuStack_c8 = (ushort ******)(puStack_1e8 + 1),
             ppppppuStack_c0 = (ushort ******)pppppppuVar15,
             (ushort *******)(uStack_1e0 - 2) == pppppppuVar15)) {
            uStack_180._0_4_ = 0x14469;
            ppppppuStack_178 = (ushort ******)0x0;
            ppppppuStack_170 = (ushort ******)0x0;
            pppppuStack_f8 = (ushort *****)CONCAT71(pppppuStack_f8._1_7_,0x32);
            pppppppuVar16 = &ppppppuStack_c8;
            apppppuStack_98[0] = (ushort *****)&uStack_180;
            func_0x000107c2b700(pppppppuVar16,&pppppuStack_f8,apppppuStack_98,1,0);
            ppppppuVar22 = ppppppuStack_170;
            pppppppuVar15 = (ushort *******)ppppppuStack_178;
            if (((ulong)pppppppuVar16 & 1) == 0) {
              uVar19 = (ulong)pppppuStack_f8 & 0xff;
            }
            else if (((uint)uStack_180 & 0x1000000) == 0) {
              func_0x000107c2b29c(0x10,0,0xa4,&UNK_10f6d1513,0x424);
              uVar19 = 0x6d;
            }
            else {
              ppppppuVar26 = *pppppppuVar1;
              uVar11 = (int)ppppppuVar26 + 0x1a0;
              param_2 = (ushort *******)ppppppuStack_170;
              func_0x000107c2b684();
              uVar4 = uVar11 ^ 1;
              if ((ushort *******)ppppppuVar22 == (ushort *******)0x0) {
                uVar4 = 1;
              }
              if ((uVar4 & 1) == 0) {
                _memcpy(ppppppuVar26[0x34],pppppppuVar15,ppppppuVar22);
                param_2 = pppppppuVar15;
              }
              if (uVar11 != 0) {
                if (((ulong)pppppuStack_1f0 & 1) == 0) {
                  pppppppuVar15 = param_1 + 0x33;
                  param_2 = (ushort *******)ppppppuStack_1d8;
                  func_0x000107c2b894(pppppppuVar15,ppppppuStack_1d8,uStack_1d0);
                  if (((ulong)pppppppuVar15 & 1) == 0) goto code_r0x00010ae698a0;
                }
                (*(code *)(*pppppppuVar30)[4])();
                pppppppuVar15 = pppppppuVar30;
                goto code_r0x00010ae6858c;
              }
code_r0x00010ae698a0:
              uVar19 = 0x50;
            }
            pppppppuVar16 = (ushort *******)0x2;
            FUN_10ae60390(pppppppuVar30,2,uVar19);
            pppppppuVar25 = pppppppuVar30;
            goto LAB_10ae693e8;
          }
        }
        func_0x000107c2b29c(0x10,0,0x89,&UNK_10f6d1513,0x416);
        pppppppuVar16 = (ushort *******)0x2;
        FUN_10ae60390(pppppppuVar30,2,0x32);
        pppppppuVar25 = pppppppuVar30;
        goto LAB_10ae693e8;
      }
code_r0x00010ae6858c:
      uVar21 = 0xb;
code_r0x00010ae68cb8:
      *(undefined4 *)(param_1 + 3) = uVar21;
code_r0x00010ae68cbc:
      cVar29 = '\x01';
      break;
    case 0xb:
      pppppppuVar30 = (ushort *******)*param_1;
      if ((*(byte *)(param_1 + 0xc3) >> 5 & 1) == 0) {
        if ((*(ushort *)((long)pppppppuVar30[6] + 0xd4) >> 6 & 1) == 0) {
          (*pppppppuVar1)[0x17] = (ushort *****)0x0;
        }
        uVar21 = 0xd;
        goto code_r0x00010ae68cb8;
      }
      pppppuVar28 = param_1[1][0x1d];
      param_2 = (ushort *******)&pppppuStack_1f0;
      pppppppuVar16 = pppppppuVar30;
      (*(code *)(*pppppppuVar30)[3])();
      if ((int)pppppppuVar16 == 0) goto code_r0x00010ae6931c;
      pppppppuVar16 = (ushort *******)&pppppuStack_1f0;
      pppppppuVar25 = pppppppuVar30;
      func_0x000107c2b6f8(pppppppuVar30,pppppppuVar16,0xb);
      if ((int)pppppppuVar25 != 0) {
        param_2 = (ushort *******)&pppppuStack_1f0;
        pppppppuVar25 = param_1;
        func_0x000107c2b8d0(param_1,param_2,((ulong)pppppuVar28 & 2) == 0);
        pppppppuVar16 = param_2;
        if ((int)pppppppuVar25 != 0) {
          if (((ulong)pppppuStack_1f0 & 1) == 0) {
            pppppppuVar25 = param_1 + 0x33;
            param_2 = (ushort *******)ppppppuStack_1d8;
            func_0x000107c2b894(pppppppuVar25,ppppppuStack_1d8,uStack_1d0);
            pppppppuVar16 = param_2;
            if ((int)pppppppuVar25 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar30)[4])();
          uVar21 = 0xc;
          pppppppuVar15 = pppppppuVar30;
          goto code_r0x00010ae68cb8;
        }
      }
      goto LAB_10ae693e8;
    case 0xc:
      if ((param_1[0xbb][0x12] == (ushort *****)0x0) || (*param_1[0xbb][0x12] == (ushort ****)0x0))
      {
code_r0x00010ae69440:
        cVar29 = '\x01';
        uVar21 = 0xd;
        goto code_r0x00010ae69444;
      }
      pppppppuVar15 = (ushort *******)*param_1;
      param_2 = (ushort *******)&pppppuStack_1f0;
      pppppppuVar16 = pppppppuVar15;
      (*(code *)(*pppppppuVar15)[3])();
      if ((int)pppppppuVar16 == 0) goto code_r0x00010ae6931c;
      pppppppuVar25 = param_1;
      func_0x000107c2b704();
      pppppppuVar16 = param_2;
      if ((int)pppppppuVar25 != 1) {
        if ((int)pppppppuVar25 == 2) {
          cVar29 = '\x10';
          uVar21 = 0xc;
          pppppppuVar15 = pppppppuVar25;
          goto code_r0x00010ae69444;
        }
        pppppppuVar16 = (ushort *******)&pppppuStack_1f0;
        pppppppuVar25 = pppppppuVar15;
        func_0x000107c2b6f8(pppppppuVar15,pppppppuVar16,0xf);
        if ((int)pppppppuVar25 != 0) {
          param_2 = (ushort *******)&pppppuStack_1f0;
          pppppppuVar25 = param_1;
          func_0x000107c2b8d4();
          pppppppuVar16 = param_2;
          if ((int)pppppppuVar25 != 0) {
            if (((ulong)pppppuStack_1f0 & 1) == 0) {
              pppppppuVar25 = param_1 + 0x33;
              param_2 = (ushort *******)ppppppuStack_1d8;
              func_0x000107c2b894(pppppppuVar25,ppppppuStack_1d8,uStack_1d0);
              pppppppuVar16 = param_2;
              if ((int)pppppppuVar25 == 0) goto LAB_10ae693e8;
            }
            (*(code *)(*pppppppuVar15)[4])();
            goto code_r0x00010ae69440;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xd:
      if ((*(byte *)((long)param_1 + 0x61b) & 1) == 0) {
code_r0x00010ae68468:
        uVar21 = 0xe;
        goto code_r0x00010ae69444;
      }
      pppppppuVar15 = (ushort *******)*param_1;
      param_2 = (ushort *******)&pppppuStack_1f0;
      pppppppuVar16 = pppppppuVar15;
      (*(code *)(*pppppppuVar15)[3])();
      if ((int)pppppppuVar16 == 0) goto code_r0x00010ae6931c;
      pppppppuVar16 = (ushort *******)&pppppuStack_1f0;
      pppppppuVar25 = pppppppuVar15;
      func_0x000107c2b6f8(pppppppuVar15,pppppppuVar16,0xcb);
      if ((int)pppppppuVar25 != 0) {
        param_2 = (ushort *******)&pppppuStack_1f0;
        pppppppuVar25 = param_1;
        FUN_10ae5aebc();
        pppppppuVar16 = param_2;
        if ((int)pppppppuVar25 != 0) {
          if (((ulong)pppppuStack_1f0 & 1) == 0) {
            pppppppuVar25 = param_1 + 0x33;
            param_2 = (ushort *******)ppppppuStack_1d8;
            func_0x000107c2b894(pppppppuVar25,ppppppuStack_1d8,uStack_1d0);
            pppppppuVar16 = param_2;
            if ((int)pppppppuVar25 == 0) goto LAB_10ae693e8;
          }
          (*(code *)(*pppppppuVar15)[4])();
          goto code_r0x00010ae68468;
        }
      }
      goto LAB_10ae693e8;
    case 0xe:
      pppppppuVar15 = (ushort *******)*param_1;
      param_2 = (ushort *******)&pppppuStack_1f0;
      pppppppuVar16 = pppppppuVar15;
      (*(code *)(*pppppppuVar15)[3])();
      if ((int)pppppppuVar16 == 0) goto code_r0x00010ae6931c;
      pppppppuVar16 = (ushort *******)&pppppuStack_1f0;
      pppppppuVar25 = pppppppuVar15;
      func_0x000107c2b6f8(pppppppuVar15,pppppppuVar16,0x14);
      if ((int)pppppppuVar25 != 0) {
        pppppppuVar16 = (ushort *******)&pppppuStack_1f0;
        pppppppuVar25 = param_1;
        func_0x000107c2b8d8(param_1,pppppppuVar16,
                            *(ushort *)((long)pppppppuVar15[6] + 0xd4) >> 0xc & 1);
        if ((int)pppppppuVar25 != 0) {
          param_2 = (ushort *******)0x3;
          pppppppuVar25 = pppppppuVar15;
          func_0x000107c2b8fc(pppppppuVar15,3,0,param_1[0xbb],param_1 + 0x1d,param_1[4]);
          pppppppuVar16 = param_2;
          if ((int)pppppppuVar25 != 0) {
            if ((*(ushort *)((long)pppppppuVar15[6] + 0xd4) >> 0xc & 1) == 0) {
              if (((ulong)pppppuStack_1f0 & 1) == 0) {
                pppppppuVar25 = param_1 + 0x33;
                param_2 = (ushort *******)ppppppuStack_1d8;
                func_0x000107c2b894(pppppppuVar25,ppppppuStack_1d8,uStack_1d0);
                pppppppuVar16 = param_2;
                if ((int)pppppppuVar25 == 0) goto LAB_10ae693e8;
              }
              pppppppuVar25 = param_1;
              func_0x000107c2b910();
              pppppppuVar16 = param_2;
              if ((int)pppppppuVar25 == 0) goto LAB_10ae693e8;
              uVar21 = 0xf;
            }
            else {
              uVar21 = 0x10;
            }
            *(undefined4 *)(param_1 + 3) = uVar21;
            (*(code *)(*pppppppuVar15)[4])();
            goto code_r0x00010ae68cbc;
          }
        }
      }
      goto LAB_10ae693e8;
    case 0xf:
      param_2 = (ushort *******)&pppppuStack_1f0;
      pppppppuVar15 = param_1;
      FUN_10ae6a2ec();
      pppppppuVar25 = pppppppuVar15;
      pppppppuVar16 = param_2;
      if ((int)pppppppuVar15 == 0) goto LAB_10ae693e8;
      *(undefined4 *)(param_1 + 3) = 0x10;
      cVar29 = '\x04';
      if (((*param_1)[0x13] != (ushort *****)0x0 & (byte)pppppuStack_1f0) == 0) {
        cVar29 = '\x01';
      }
      break;
    case 0x10:
      goto code_r0x00010ae69de8;
    }
    if (*(int *)(param_1 + 3) != iVar7) {
      pppppppuVar15 = (ushort *******)*param_1;
      ppppppuVar22 = pppppppuVar15[0xc];
      if ((ppppppuVar22 != (ushort ******)0x0) ||
         (ppppppuVar22 = (ushort ******)pppppppuVar15[0xd][0x30], ppppppuVar22 != (ushort ******)0x0
         )) {
        param_2 = (ushort *******)0x2001;
        (*(code *)ppppppuVar22)(pppppppuVar15,0x2001,1);
      }
    }
  } while (cVar29 == '\x01');
code_r0x00010ae69de8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return cVar29;
  }
  ___stack_chk_fail();
code_r0x00010ae69e28:
  _abort();
  func_0x000107c2b534(pppppuStack_f8);
  func_0x000107c2b204(&pppppuStack_1f0);
  __Unwind_Resume();
  if ((*(byte *)(pppppppuVar15 + 0x36) >> 5 & 1) == 0) {
    return true;
  }
  ppppppuVar22 = pppppppuVar15[0x38];
  if ((ppppppuVar22 != (ushort ******)0x0) && (param_2[0x17] == ppppppuVar22)) {
    bVar23 = 0;
    ppppppuVar26 = param_2[0x16];
    ppppppuVar27 = pppppppuVar15[0x37];
    do {
      bVar23 = *(byte *)ppppppuVar27 ^ *(byte *)ppppppuVar26 | bVar23;
      ppppppuVar22 = (ushort ******)((long)ppppppuVar22 + -1);
      ppppppuVar26 = (ushort ******)((long)ppppppuVar26 + 1);
      ppppppuVar27 = (ushort ******)((long)ppppppuVar27 + 1);
    } while (ppppppuVar22 != (ushort ******)0x0);
    return bVar23 == 0;
  }
  return false;
}



/* Entry: 10ae69f00; end: 10ae69f5b;  */

bool FUN_10ae69f00(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((*(byte *)(param_1 + 0x1b0) >> 5 & 1) == 0) {
    return true;
  }
  lVar1 = *(long *)(param_1 + 0x1c0);
  if ((lVar1 != 0) && (*(long *)(param_2 + 0xb8) == lVar1)) {
    bVar2 = 0;
    pbVar3 = *(byte **)(param_2 + 0xb0);
    pbVar4 = *(byte **)(param_1 + 0x1b8);
    do {
      bVar2 = *pbVar4 ^ *pbVar3 | bVar2;
      lVar1 = lVar1 + -1;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (lVar1 != 0);
    return bVar2 == 0;
  }
  return false;
}



/* Entry: 10ae69f5c; end: 10ae6a27b;  */

undefined8 * FUN_10ae69f5c(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte bStack_51;
  
  uVar9 = *param_1;
  sVar2 = *(short *)(param_1[0xbb] + 6);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_69 = 0x32;
  puVar3 = param_1;
  FUN_10ae59f44(param_1,&bStack_51,&uStack_68,&uStack_69,param_2);
  if (((ulong)puVar3 & 1) == 0) {
    FUN_10ae60390(uVar9,2,uStack_69);
    return (undefined8 *)0x0;
  }
  if ((bStack_51 & 1) == 0) {
    FUN_10ae60390(uVar9,2,0x2f);
    func_0x000107c2b29c(0x10,0,0xf3,&UNK_10f6d1513,0x3d);
    return (undefined8 *)0x0;
  }
  uStack_80 = 0;
  lStack_78 = 0;
  lVar12 = param_1[0xc2];
  if ((((lVar12 == 0) || ((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) != 0)) ||
      (*(short *)(lVar12 + 0x10) != sVar2)) || (*(long *)(lVar12 + 0x30) == 0)) {
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x000107c2b780(&plStack_a8,sVar2);
    uVar8 = uStack_69;
    if (plStack_a8 != (long *)0x0) {
      puVar3 = &uStack_a0;
      func_0x000107c2b200(puVar3,0x20);
      uVar8 = uStack_69;
      if (((int)puVar3 != 0) &&
         (plVar5 = plStack_a8,
         (**(code **)(*plStack_a8 + 0x20))
                   (plStack_a8,&uStack_a0,&uStack_80,&uStack_69,uStack_68,uStack_60),
         uVar8 = uStack_69, (int)plVar5 != 0)) {
        puVar3 = &uStack_a0;
        func_0x000107c2b784(puVar3,param_1 + 0x4b);
        uVar8 = uStack_69;
        if (((ulong)puVar3 & 1) != 0) {
          if ((lVar12 == 0) || ((*(byte *)((long)param_1 + 0x61a) >> 4 & 1) == 0)) {
LAB_10ae6a118:
            (**(code **)*plStack_a8)(plStack_a8);
            func_0x000107c2b534(plStack_a8);
            func_0x000107c2b204(&uStack_a0);
            goto LAB_10ae6a138;
          }
          *(short *)(lVar12 + 0x10) = sVar2;
          uVar10 = param_1[0x4b];
          lVar11 = param_1[0x4c];
          lVar6 = lVar12 + 0x18;
          func_0x000107c2b684(lVar6,lVar11);
          uVar1 = (uint)lVar6 ^ 1;
          if (lVar11 == 0) {
            uVar1 = 1;
          }
          if ((uVar1 & 1) == 0) {
            _memcpy(*(undefined8 *)(lVar12 + 0x18),uVar10,lVar11);
          }
          lVar11 = lStack_78;
          uVar10 = uStack_80;
          if ((uint)lVar6 != 0) {
            uVar7 = lVar12 + 0x28;
            func_0x000107c2b684(uVar7,lStack_78);
            uVar1 = (uint)uVar7 ^ 1;
            if (lVar11 == 0) {
              uVar1 = 1;
            }
            if ((uVar1 & 1) == 0) {
              _memcpy(*(undefined8 *)(lVar12 + 0x28),uVar10,lVar11);
            }
            if ((uVar7 & 1) != 0) goto LAB_10ae6a118;
          }
          uVar8 = 0x50;
        }
      }
    }
    FUN_10ae60390(uVar9,2,uVar8);
    if (plStack_a8 != (long *)0x0) {
      (**(code **)*plStack_a8)(plStack_a8);
      func_0x000107c2b534(plStack_a8);
    }
    func_0x000107c2b204(&uStack_a0);
  }
  else {
    uVar10 = *(undefined8 *)(lVar12 + 0x18);
    lVar6 = *(long *)(lVar12 + 0x20);
    puVar3 = param_1 + 0x4b;
    puVar4 = puVar3;
    func_0x000107c2b684(puVar3,lVar6);
    uVar1 = (uint)puVar4 ^ 1;
    if (lVar6 == 0) {
      uVar1 = 1;
    }
    if ((uVar1 & 1) == 0) {
      _memcpy(*puVar3,uVar10,lVar6);
    }
    if ((uint)puVar4 != 0) {
      uVar10 = *(undefined8 *)(lVar12 + 0x28);
      lVar12 = *(long *)(lVar12 + 0x30);
      puVar3 = &uStack_80;
      func_0x000107c2b684(puVar3,lVar12);
      uVar1 = (uint)puVar3 ^ 1;
      if (lVar12 == 0) {
        uVar1 = 1;
      }
      if ((uVar1 & 1) == 0) {
        _memcpy(uStack_80,uVar10,lVar12);
      }
      if (((ulong)puVar3 & 1) != 0) {
LAB_10ae6a138:
        func_0x000107c2b8f8(param_1,uStack_80,lStack_78);
        goto LAB_10ae6a184;
      }
    }
    FUN_10ae60390(uVar9,2,0x50);
  }
  param_1 = (undefined8 *)0x0;
LAB_10ae6a184:
  func_0x000107c2b534(uStack_80);
  return param_1;
}



/* Entry: 10ae6a27c; end: 10ae6a2eb;  */

void FUN_10ae6a27c(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  iVar1 = (int)auStack_40;
  uVar2 = param_2;
  func_0x000107c2b228(param_2,0x2b);
  if ((((int)uVar2 != 0) &&
      (uVar2 = param_2, func_0x000107c34f3c(param_2,auStack_40,2), (int)uVar2 != 0)) &&
     (func_0x000107c2b228(auStack_40,*(undefined2 *)(*param_1 + 0x10)), iVar1 != 0)) {
    func_0x000107c2b20c(param_2);
  }
  return;
}



/* Entry: 10ae6a2ec; end: 10ae6a5e3;  */

undefined1 FUN_10ae6a2ec(ulong *param_1,undefined1 *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 in_x7;
  bool bVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined1 uVar13;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_71;
  long alStack_70 [2];
  
  if ((((byte)param_1[0xc3] >> 4 & 1) == 0) ||
     (plVar12 = (long *)*param_1, (*(byte *)((long)plVar12 + 0x81) >> 6 & 1) != 0)) {
    *param_2 = 0;
    return 1;
  }
  func_0x000107c2b850(plVar12,param_1[0xbb]);
  uVar13 = 0;
  bVar10 = true;
  do {
    func_0x000107c2b84c(alStack_70,param_1[0xbb],2);
    if (alStack_70[0] == 0) {
      return 0;
    }
    func_0x000107c2b3c4(alStack_70[0] + 0x178,4,&UNK_10e525a20);
    *(byte *)(alStack_70[0] + 0x1b0) = *(byte *)(alStack_70[0] + 0x1b0) | 8;
    if ((*(byte *)((long)plVar12 + 0xa4) >> 2 & 1) == 0) {
LAB_10ae6a398:
      bVar2 = false;
    }
    else {
      if (plVar12[0x13] == 0) {
        uVar11 = 0x3800;
      }
      else {
        if (*(long *)(plVar12[1] + 0xb8) == 0) goto LAB_10ae6a398;
        uVar11 = 0xffffffff;
      }
      *(undefined4 *)(alStack_70[0] + 0x17c) = uVar11;
      bVar2 = true;
    }
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    plVar5 = plVar12;
    uStack_71 = uVar13;
    (**(code **)(*plVar12 + 0x58))(plVar12,&uStack_a0,auStack_c0,4);
    if ((int)plVar5 == 0) {
LAB_10ae6a578:
      func_0x000107c2b204(&uStack_a0);
      lVar3 = alStack_70[0];
      alStack_70[0] = 0;
      if (lVar3 != 0) {
        func_0x000107c2b874();
      }
      return 0;
    }
    puVar6 = auStack_c0;
    func_0x00010ae1fafc(puVar6,*(undefined4 *)(alStack_70[0] + 0xc0));
    if ((int)puVar6 == 0) goto LAB_10ae6a578;
    puVar6 = auStack_c0;
    func_0x00010ae1fafc(puVar6,*(undefined4 *)(alStack_70[0] + 0x178));
    if ((int)puVar6 == 0) goto LAB_10ae6a578;
    puVar6 = auStack_c0;
    func_0x000107c34f3c(puVar6,auStack_e0,1);
    if ((int)puVar6 == 0) goto LAB_10ae6a578;
    puVar6 = auStack_e0;
    func_0x000107c2b21c(puVar6,&uStack_71,1);
    if ((int)puVar6 == 0) goto LAB_10ae6a578;
    puVar6 = auStack_c0;
    func_0x000107c34f3c(puVar6,auStack_100,2);
    lVar3 = alStack_70[0];
    if ((int)puVar6 == 0) goto LAB_10ae6a578;
    lVar7 = alStack_70[0];
    func_0x000107c2b858(alStack_70[0]);
    lVar8 = lVar3 + 0x10;
    func_0x000107c34fd8(lVar8,(long)*(int *)(lVar3 + 0xc),lVar7,lVar3 + 0x10,
                        (long)*(int *)(lVar3 + 0xc),&UNK_10e52b448,10,in_x7,&uStack_71,1);
    if (((int)lVar8 == 0) ||
       (puVar9 = param_1, FUN_10ae645f4(param_1,auStack_100,alStack_70[0]), (int)puVar9 == 0))
    goto LAB_10ae6a578;
    puVar6 = auStack_c0;
    func_0x000107c34f3c(puVar6,auStack_120,2);
    if ((int)puVar6 == 0) goto LAB_10ae6a578;
    if (bVar2) {
      puVar6 = auStack_120;
      func_0x000107c2b228(puVar6,0x2a);
      if ((int)puVar6 == 0) goto LAB_10ae6a578;
      puVar6 = auStack_120;
      func_0x000107c34f3c(puVar6,auStack_140,2);
      if ((int)puVar6 == 0) goto LAB_10ae6a578;
      puVar6 = auStack_140;
      func_0x00010ae1fafc(puVar6,*(undefined4 *)(alStack_70[0] + 0x17c));
      if ((int)puVar6 == 0) goto LAB_10ae6a578;
      iVar4 = (int)auStack_120;
      func_0x000107c2b20c();
      if (iVar4 == 0) goto LAB_10ae6a578;
    }
    uVar1 = (*(byte *)((long)param_1 + 0x649) | 0xe) & 0xfa;
    puVar6 = auStack_120;
    func_0x000107c2b228(puVar6,uVar1 | uVar1 << 8);
    if ((int)puVar6 == 0) goto LAB_10ae6a578;
    puVar6 = auStack_120;
    func_0x000107c2b228(puVar6,0);
    if ((int)puVar6 == 0) goto LAB_10ae6a578;
    plVar5 = plVar12;
    func_0x000107c2b6fc(plVar12,&uStack_a0);
    func_0x000107c2b204(&uStack_a0);
    lVar3 = alStack_70[0];
    alStack_70[0] = 0;
    if (lVar3 != 0) {
      func_0x000107c2b874();
    }
    if (((ulong)plVar5 & 1) == 0) {
      return 0;
    }
    uVar13 = 1;
    bVar2 = !bVar10;
    bVar10 = false;
    if (bVar2) {
      *param_2 = 1;
      return 1;
    }
  } while( true );
}



/* Entry: 10ae6a5e4; end: 10ae6a60f;  */

undefined8 FUN_10ae6a5e4(void)

{
  return 1;
}



/* Entry: 10ae6a610; end: 10ae6a687;  */

undefined8 FUN_10ae6a610(long param_1,undefined1 *param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 200) + (int)param_3;
  uVar2 = (ushort)uVar1;
  *(ushort *)(param_1 + 200) = uVar2;
  if (uVar2 < param_3) {
    *(undefined2 *)(param_1 + 200) = 0x4001;
  }
  else if ((uVar1 & 0xffff) < 0x4001) {
    return 1;
  }
  func_0x000107c2b29c(0x10,0,0x10e,&UNK_10f6d15f7,0xc6);
  *param_2 = 10;
  return 4;
}



/* Entry: 10ae6a688; end: 10ae6a833;  */

undefined8 FUN_10ae6a688(long param_1,undefined1 *param_2,char *param_3,long param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  long lVar7;
  
  if (param_4 == 2) {
    func_0x000107c2b794(param_1,0,0x15,param_3,2);
    cVar2 = *param_3;
    pcVar5 = *(code **)(param_1 + 0x60);
    uVar6 = (uint)(byte)param_3[1];
    if ((pcVar5 != (code *)0x0) ||
       (pcVar5 = *(code **)(*(long *)(param_1 + 0x68) + 0x180), pcVar5 != (code *)0x0)) {
      (*pcVar5)(param_1,0x4004,CONCAT11(cVar2,param_3[1]));
    }
    if (cVar2 == '\x02') {
      func_0x000107c2b29c(0x10,0,uVar6 + 1000,&UNK_10f6d15f7,0x252);
      FUN_10ae2a054(&UNK_10f6d1668);
      *param_2 = 0;
      return 4;
    }
    if (cVar2 == '\x01') {
      lVar7 = *(long *)(param_1 + 0x30);
      if (uVar6 == 0) {
        *(undefined4 *)(lVar7 + 0xa8) = 1;
        return 3;
      }
      if ((((*(ushort *)(lVar7 + 0xd4) >> 1 & 1) == 0) || (func_0x000107c2b89c(), uVar6 == 0x5a)) ||
         ((uint)param_1 < 0x304)) {
        bVar1 = *(char *)(lVar7 + 0xcb) + 1;
        *(byte *)(lVar7 + 0xcb) = bVar1;
        if (bVar1 < 5) {
          return 1;
        }
        *param_2 = 10;
        uVar3 = 0xdc;
        uVar4 = 0x24b;
      }
      else {
        *param_2 = 0x32;
        uVar3 = 0x66;
        uVar4 = 0x244;
      }
    }
    else {
      *param_2 = 0x2f;
      uVar3 = 0xe3;
      uVar4 = 0x259;
    }
  }
  else {
    *param_2 = 0x32;
    uVar3 = 0x66;
    uVar4 = 0x229;
  }
  func_0x000107c2b29c(0x10,0,uVar3,&UNK_10f6d15f7,uVar4);
  return 4;
}



/* Entry: 10ae6a834; end: 10ae6a8c7;  */

undefined1 * FUN_10ae6a834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_138 [264];
  
  FUN_10ae6abb8(auStack_138,param_3);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(auStack_138,param_1);
  func_0x0001092b4db8(auStack_138,&UNK_10f6d167f,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb(auStack_138,param_2);
  puVar1 = auStack_138;
  FUN_10ae6a8f8(puVar1);
  FUN_10ae6ac1c(auStack_138);
  return puVar1;
}



/* Entry: 10ae6a8c8; end: 10ae6a8f7;  */

undefined8 FUN_10ae6a8c8(undefined8 param_1)

{
  func_0x0001092b4db8(param_1,&UNK_10f6d167f,5);
  return param_1;
}



/* Entry: 10ae6a8f8; end: 10ae6a95f;  */

undefined8 FUN_10ae6a8f8(long param_1)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  func_0x0001092b4db8(param_1,&UNK_10f6d1685,1);
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x00010926dc5c(uVar1,param_1 + 8,&uStack_21);
  return uVar1;
}



/* Entry: 10ae6a960; end: 10ae6a9f3;  */

undefined1 * FUN_10ae6a960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_138 [264];
  
  FUN_10ae6abb8(auStack_138,param_3);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,param_1);
  func_0x0001092b4db8(auStack_138,&UNK_10f6d167f,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,param_2);
  puVar1 = auStack_138;
  FUN_10ae6a8f8(puVar1);
  FUN_10ae6ac1c(auStack_138);
  return puVar1;
}



/* Entry: 10ae6a9f4; end: 10ae6aa87;  */

undefined1 * FUN_10ae6a9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_138 [264];
  
  FUN_10ae6abb8(auStack_138,param_3);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy(auStack_138,param_1);
  func_0x0001092b4db8(auStack_138,&UNK_10f6d167f,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEy(auStack_138,param_2);
  puVar1 = auStack_138;
  FUN_10ae6a8f8(puVar1);
  FUN_10ae6ac1c(auStack_138);
  return puVar1;
}



/* Entry: 10ae6aa88; end: 10ae6ab0b;  */

void FUN_10ae6aa88(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_21;
  
  if ((int)param_2 - 0x20U < 0x5f) {
    func_0x0001092b4db8(param_1,&UNK_10f6d1687,1);
    uStack_21 = (undefined1)param_2;
    func_0x0001092b4db8(param_1,&uStack_21,1);
    func_0x0001092b4db8(param_1,&UNK_10f6d1687,1);
    return;
  }
  func_0x0001092b4db8(param_1,&UNK_10f6d1689,0x14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi_1103464d8)(param_1,param_2);
  return;
}



/* Entry: 10ae6ab0c; end: 10ae6ab9f;  */

undefined1 * FUN_10ae6ab0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_138 [264];
  
  FUN_10ae6abb8(auStack_138,param_3);
  FUN_10ae6aba0(auStack_138,param_1);
  func_0x0001092b4db8(auStack_138,&UNK_10f6d167f,5);
  FUN_10ae6aba0(auStack_138,param_2);
  puVar1 = auStack_138;
  FUN_10ae6a8f8(puVar1);
  FUN_10ae6ac1c(auStack_138);
  return puVar1;
}



/* Entry: 10ae6aba0; end: 10ae6abb7;  */

long * FUN_10ae6aba0(long *param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  char acStack_68 [16];
  long lStack_58;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv_1103464a8)();
    return param_1;
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_68,param_1);
  if (acStack_68[0] == '\x01') {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar5 = *(long *)(lVar1 + 0x28);
    uVar3 = *(uint *)(lVar1 + 8);
    iVar6 = *(int *)(lVar1 + 0x90);
    if (iVar6 == -1) {
      __ZNKSt3__18ios_base6getlocEv(&lStack_58,lVar1);
      plVar4 = &lStack_58;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar4 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_58);
      iVar6 = (int)plVar4;
      *(int *)(lVar1 + 0x90) = iVar6;
    }
    pcVar2 = "";
    if ((uVar3 & 0xb0) != 0x20) {
      pcVar2 = "(null)";
    }
    func_0x0001092b4f20(lVar5,"(null)",pcVar2,"",lVar1,(int)(char)iVar6);
    if (lVar5 == 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | 5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_68);
  return param_1;
}



/* Entry: 10ae6abb8; end: 10ae6ac1b;  */

undefined8 FUN_10ae6abb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010926db08();
  uVar1 = param_2;
  _strlen(param_2);
  func_0x0001092b4db8(param_1,param_2,uVar1);
  func_0x0001092b4db8();
  return param_1;
}



/* Entry: 10ae6ac1c; end: 10ae6aca7;  */

undefined8 * FUN_10ae6ac1c(undefined8 *param_1)

{
  param_1[0xe] = &PTR_DAT_11088d708;
  *param_1 = &PTR_DAT_11088d6e0;
  param_1[1] = &PTR_DAT_11088d7b0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  param_1[1] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  __ZNSt3__16localeD1Ev(param_1 + 2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(param_1,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0xe);
  return param_1;
}



/* Entry: 10ae6aca8; end: 10ae6ae53;  */

long * FUN_10ae6aca8(int param_1,undefined *param_2,undefined8 param_3,code *param_4,
                    undefined8 param_5,ulong param_6,undefined2 *param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  ulong unaff_x23;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong *puStack_aa0;
  ulong uStack_a80;
  long alStack_a70 [64];
  long alStack_870 [128];
  long alStack_470 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = alStack_a70;
  if ((int)(uint)param_2 < 0x41) {
    uStack_a80 = 0;
    pcVar10 = param_4;
    uVar11 = param_5;
  }
  else {
    unaff_x23 = ((ulong)param_2 & 0xffffffff) << 3;
    plVar3 = (long *)0x0;
    pcVar10 = (code *)0x1002;
    uVar11 = 0xffffffff;
    param_6 = 0;
    _mmap(0,unaff_x23,3,0x1002,0xffffffff);
    plVar4 = (long *)0x0;
    if (plVar3 != (long *)0xffffffffffffffff) {
      plVar4 = plVar3;
    }
    bVar2 = plVar4 != (long *)0x0;
    uStack_a80 = 0;
    if (bVar2) {
      uStack_a80 = unaff_x23;
    }
    uVar1 = 0x40;
    if (bVar2) {
      uVar1 = (uint)param_2;
    }
    param_2 = (undefined *)(ulong)uVar1;
    if (bVar2) {
      plVar6 = plVar4;
    }
  }
  puVar9 = (undefined *)(ulong)(param_1 + 1);
  plVar4 = plVar6;
  FUN_10ae781a4(plVar6,param_2);
  iVar12 = (int)param_8;
  plVar3 = plVar6;
  if (0 < (int)plVar4) {
    uVar18 = (ulong)plVar4 & 0xffffffff;
    param_2 = &UNK_10f6d169e;
    unaff_x23 = 0x12;
    plVar15 = plVar6;
    do {
      plVar3 = plVar15 + 1;
      lVar17 = *plVar15;
      if ((int)param_3 == 0) {
        puVar9 = &UNK_10f6d16ab;
        _snprintf(alStack_470,100);
        plVar4 = alStack_470;
      }
      else {
        uVar5 = lVar17 - 1;
        FUN_10ae7bc84(uVar5,alStack_470,0x400);
        if ((uVar5 & 1) == 0) {
          FUN_10ae7bc84(lVar17,alStack_470,0x400);
        }
        puVar9 = param_2;
        _snprintf(alStack_870,0x400);
        plVar4 = alStack_870;
      }
      puStack_aa0 = (ulong *)&DAT_10f48d515;
      (*param_4)(plVar4,param_5);
      iVar12 = (int)param_8;
      uVar18 = uVar18 - 1;
      plVar15 = plVar3;
    } while (uVar18 != 0);
  }
  if (uStack_a80 != 0) {
    _munmap();
    plVar4 = plVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar4;
  }
  ___stack_chk_fail();
  if (puStack_aa0[1] < 0x22) {
    uVar5 = 0;
    uVar16 = 0;
    puStack_aa0[1] = 0;
    uVar18 = *puStack_aa0;
  }
  else {
    uVar1 = 999999999;
    uVar18 = 0x7fffffffffffffff;
    if (uStack_a80 != 0) {
      uVar1 = ~(uint)((long)uStack_a80 >> 0x3f) & 999999999;
      uVar18 = (long)uStack_a80 >> 0x3f ^ 0x7fffffffffffffff;
    }
    uVar5 = (ulong)uVar1;
    if (((ulong)puVar9 & 0xffffffff) != 0xffffffff) {
      uVar5 = ((ulong)puVar9 & 0xffffffff) >> 2;
      uVar18 = uStack_a80;
    }
    uVar13 = *puStack_aa0;
    if ((uint)plVar4 < 3) {
      pcVar14 = (&PTR_s_INFO_110c8abc8)[(ulong)plVar4 & 0xffffffff];
    }
    else {
      pcVar14 = "FATAL";
      if ((uint)plVar4 != 3) {
        pcVar14 = "UNKNOWN";
      }
    }
    FUN_10ae6b034(uVar13,puStack_aa0[1],&UNK_10f6d16ba,0x1b,*pcVar14,uVar18,uVar5 / 1000,pcVar10,
                  param_2,unaff_x23,param_3,plVar3,param_4,param_5,&stack0xfffffffffffffff0,
                  FUN_10ae6ae54);
    uVar18 = *puStack_aa0;
    uVar5 = puStack_aa0[1];
    if ((int)uVar13 < 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar13 & 0xffffffff;
      uVar18 = uVar18 + (uVar13 & 0xffffffff);
      uVar5 = uVar5 - (uVar13 & 0xffffffff);
      *puStack_aa0 = uVar18;
      puStack_aa0[1] = uVar5;
    }
  }
  if (uVar5 <= param_6) {
    param_6 = uVar5;
  }
  _memcpy(uVar18,uVar11,param_6);
  uVar18 = puStack_aa0[1];
  puVar7 = (undefined2 *)(*puStack_aa0 + param_6);
  *puStack_aa0 = (ulong)puVar7;
  puStack_aa0[1] = uVar18 - param_6;
  if (uVar18 - param_6 < 0xe) {
    uVar18 = 0;
    lVar17 = 0;
  }
  else {
    puVar8 = (undefined2 *)((long)puVar7 + 1);
    *(undefined1 *)puVar7 = 0x3a;
    if ((int)param_7 < 0) {
      puVar8 = puVar7 + 1;
      *(undefined1 *)((long)puVar7 + 1) = 0x2d;
      param_7 = (undefined2 *)(ulong)(uint)-(int)param_7;
    }
    func_0x000107c2ba2c(param_7,puVar8);
    puVar7 = param_7 + 1;
    *param_7 = 0x205d;
    lVar17 = (long)puVar7 - *puStack_aa0;
    *puStack_aa0 = (ulong)puVar7;
    uVar18 = puStack_aa0[1] - lVar17;
  }
  puStack_aa0[1] = uVar18;
  plVar6 = (long *)(param_6 + uVar16 + lVar17);
  if (iVar12 == 1) {
    if (4 < uVar18) {
      uVar18 = 5;
    }
    _memcpy(puVar7,&UNK_10f6d16b4,uVar18);
    *puStack_aa0 = *puStack_aa0 + uVar18;
    puStack_aa0[1] = puStack_aa0[1] - uVar18;
    plVar6 = (long *)((long)plVar6 + uVar18);
  }
  return plVar6;
}



/* Entry: 10ae6ae54; end: 10ae6b033;  */

long FUN_10ae6ae54(uint param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6,undefined2 *param_7,int param_8,ulong *param_9)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_9[1] < 0x22) {
    uVar7 = 0;
    uVar9 = 0;
    param_9[1] = 0;
    uVar5 = *param_9;
  }
  else {
    uVar1 = 999999999;
    uVar5 = 0x7fffffffffffffff;
    if (param_2 != 0) {
      uVar1 = ~(uint)((long)param_2 >> 0x3f) & 999999999;
      uVar5 = (long)param_2 >> 0x3f ^ 0x7fffffffffffffff;
    }
    uVar7 = (ulong)uVar1;
    if ((param_3 & 0xffffffff) != 0xffffffff) {
      uVar7 = (param_3 & 0xffffffff) >> 2;
      uVar5 = param_2;
    }
    uVar4 = *param_9;
    if (param_1 < 3) {
      pcVar6 = (&PTR_s_INFO_110c8abc8)[param_1];
    }
    else {
      pcVar6 = "FATAL";
      if (param_1 != 3) {
        pcVar6 = "UNKNOWN";
      }
    }
    FUN_10ae6b034(uVar4,param_9[1],&UNK_10f6d16ba,0x1b,*pcVar6,uVar5,uVar7 / 1000,param_4);
    uVar5 = *param_9;
    uVar7 = param_9[1];
    if ((int)uVar4 < 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar4 & 0xffffffff;
      uVar5 = uVar5 + (uVar4 & 0xffffffff);
      uVar7 = uVar7 - (uVar4 & 0xffffffff);
      *param_9 = uVar5;
      param_9[1] = uVar7;
    }
  }
  if (uVar7 <= param_6) {
    param_6 = uVar7;
  }
  _memcpy(uVar5,param_5,param_6);
  uVar5 = param_9[1];
  puVar2 = (undefined2 *)(*param_9 + param_6);
  *param_9 = (ulong)puVar2;
  param_9[1] = uVar5 - param_6;
  if (uVar5 - param_6 < 0xe) {
    uVar5 = 0;
    lVar8 = 0;
  }
  else {
    puVar3 = (undefined2 *)((long)puVar2 + 1);
    *(undefined1 *)puVar2 = 0x3a;
    if ((int)param_7 < 0) {
      puVar3 = puVar2 + 1;
      *(undefined1 *)((long)puVar2 + 1) = 0x2d;
      param_7 = (undefined2 *)(ulong)(uint)-(int)param_7;
    }
    func_0x000107c2ba2c(param_7,puVar3);
    puVar2 = param_7 + 1;
    *param_7 = 0x205d;
    lVar8 = (long)puVar2 - *param_9;
    *param_9 = (ulong)puVar2;
    uVar5 = param_9[1] - lVar8;
  }
  param_9[1] = uVar5;
  lVar8 = param_6 + uVar9 + lVar8;
  if (param_8 == 1) {
    if (4 < uVar5) {
      uVar5 = 5;
    }
    _memcpy(puVar2,&UNK_10f6d16b4,uVar5);
    *param_9 = *param_9 + uVar5;
    param_9[1] = param_9[1] - uVar5;
    lVar8 = lVar8 + uVar5;
  }
  return lVar8;
}



/* Entry: 10ae6b034; end: 10ae6b0b3;  */

ulong FUN_10ae6b034(ulong param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ae742c4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar3 = param_1 << 3 | 2;
  lVar1 = 1;
  uVar5 = uVar3;
  if (0x7f < param_1 << 3) {
    do {
      uVar4 = uVar5 >> 0xe;
      lVar1 = lVar1 + 1;
      uVar5 = uVar5 >> 7;
    } while (uVar4 != 0);
  }
  uVar4 = param_4[1];
  uVar5 = uVar4;
  if (param_3 <= uVar4) {
    uVar5 = param_3;
  }
  lVar2 = 1;
  if (0x7f < uVar5) {
    do {
      uVar6 = uVar5 >> 0xe;
      uVar5 = uVar5 >> 7;
      lVar2 = lVar2 + 1;
    } while (uVar6 != 0);
  }
  uVar5 = lVar2 + lVar1;
  uVar6 = uVar4 - uVar5;
  if (uVar5 + param_3 <= uVar4 || uVar4 < uVar5) {
    uVar6 = param_3;
  }
  if (uVar4 < uVar6 + uVar5) {
    lVar1 = 0;
  }
  else {
    lVar7 = 0;
    do {
      bVar8 = 0;
      if (lVar1 + -1 != lVar7) {
        bVar8 = 0x80;
      }
      *(byte *)(*param_4 + lVar7) = bVar8 | (byte)uVar3 & 0x7f;
      lVar7 = lVar7 + 1;
      uVar3 = uVar3 >> 7;
    } while (lVar1 != lVar7);
    lVar7 = 0;
    *param_4 = *param_4 + lVar1;
    param_4[1] = param_4[1] - lVar1;
    uVar3 = uVar6;
    do {
      bVar8 = 0;
      if (lVar2 + -1 != lVar7) {
        bVar8 = 0x80;
      }
      *(byte *)(*param_4 + lVar7) = bVar8 | (byte)uVar3 & 0x7f;
      lVar7 = lVar7 + 1;
      uVar3 = uVar3 >> 7;
    } while (lVar2 != lVar7);
    lVar1 = *param_4;
    *param_4 = lVar1 + lVar2;
    param_4[1] = param_4[1] - lVar2;
    _memcpy(lVar1 + lVar2,param_2,uVar6);
    *param_4 = *param_4 + uVar6;
    lVar1 = param_4[1] - uVar6;
  }
  param_4[1] = lVar1;
  return (ulong)(uVar6 + uVar5 <= uVar4);
}



/* Entry: 10ae6b0b4; end: 10ae6b1ff;  */

bool FUN_10ae6b0b4(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  
  uVar2 = param_1 << 3 | 2;
  lVar3 = 1;
  uVar5 = uVar2;
  if (0x7f < (ulong)(param_1 << 3)) {
    do {
      uVar4 = uVar5 >> 0xe;
      lVar3 = lVar3 + 1;
      uVar5 = uVar5 >> 7;
    } while (uVar4 != 0);
  }
  uVar4 = param_4[1];
  uVar5 = uVar4;
  if (param_3 <= uVar4) {
    uVar5 = param_3;
  }
  lVar1 = 1;
  if (0x7f < uVar5) {
    do {
      uVar6 = uVar5 >> 0xe;
      uVar5 = uVar5 >> 7;
      lVar1 = lVar1 + 1;
    } while (uVar6 != 0);
  }
  uVar5 = lVar1 + lVar3;
  uVar6 = uVar4 - uVar5;
  if (uVar5 + param_3 <= uVar4 || uVar4 < uVar5) {
    uVar6 = param_3;
  }
  if (uVar4 < uVar6 + uVar5) {
    lVar3 = 0;
  }
  else {
    lVar7 = 0;
    do {
      bVar8 = 0;
      if (lVar3 + -1 != lVar7) {
        bVar8 = 0x80;
      }
      *(byte *)(*param_4 + lVar7) = bVar8 | (byte)uVar2 & 0x7f;
      lVar7 = lVar7 + 1;
      uVar2 = uVar2 >> 7;
    } while (lVar3 != lVar7);
    lVar7 = 0;
    *param_4 = *param_4 + lVar3;
    param_4[1] = param_4[1] - lVar3;
    uVar2 = uVar6;
    do {
      bVar8 = 0;
      if (lVar1 + -1 != lVar7) {
        bVar8 = 0x80;
      }
      *(byte *)(*param_4 + lVar7) = bVar8 | (byte)uVar2 & 0x7f;
      lVar7 = lVar7 + 1;
      uVar2 = uVar2 >> 7;
    } while (lVar1 != lVar7);
    lVar3 = *param_4;
    *param_4 = lVar3 + lVar1;
    param_4[1] = param_4[1] - lVar1;
    _memcpy(lVar3 + lVar1,param_2,uVar6);
    *param_4 = *param_4 + uVar6;
    lVar3 = param_4[1] - uVar6;
  }
  param_4[1] = lVar3;
  return uVar6 + uVar5 <= uVar4;
}



/* Entry: 10ae6b200; end: 10ae6b4df;  */

undefined1  [16] FUN_10ae6b200(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar2 = param_1 << 3 | 2;
  if ((ulong)(param_1 << 3) < 0x80) {
    lVar3 = 1;
  }
  else {
    lVar3 = 1;
    uVar8 = uVar2;
    do {
      uVar5 = uVar8 >> 0xe;
      uVar8 = uVar8 >> 7;
      lVar3 = lVar3 + 1;
    } while (uVar5 != 0);
  }
  uVar5 = param_3[1];
  uVar8 = uVar5;
  if (param_2 <= uVar5) {
    uVar8 = param_2;
  }
  uVar4 = 1;
  if (0x7f < uVar8) {
    do {
      uVar9 = uVar8 >> 0xe;
      uVar8 = uVar8 >> 7;
      uVar4 = uVar4 + 1;
    } while (uVar9 != 0);
  }
  if (uVar5 < uVar4 + lVar3) {
    lVar3 = 0;
    uVar8 = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    do {
      bVar6 = 0;
      if (lVar3 + -1 != lVar1) {
        bVar6 = 0x80;
      }
      *(byte *)(*param_3 + lVar1) = bVar6 | (byte)uVar2 & 0x7f;
      lVar1 = lVar1 + 1;
      uVar2 = uVar2 >> 7;
    } while (lVar3 != lVar1);
    uVar2 = 0;
    lVar1 = *param_3 + lVar3;
    uVar8 = param_3[1] - lVar3;
    *param_3 = lVar1;
    param_3[1] = uVar8;
    do {
      uVar7 = 0;
      if (uVar4 - 1 != uVar2) {
        uVar7 = 0x80;
      }
      *(undefined1 *)(*param_3 + uVar2) = uVar7;
      uVar2 = uVar2 + 1;
    } while (uVar4 != uVar2);
    if (uVar4 <= uVar8) {
      uVar8 = uVar4;
    }
    *param_3 = *param_3 + uVar4;
    lVar3 = param_3[1] - uVar4;
  }
  param_3[1] = lVar3;
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = lVar1;
  return auVar10;
}



/* Entry: 10ae6b4e0; end: 10ae6b5ff;  */

void FUN_10ae6b4e0(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  
  lVar2 = param_1;
  FUN_10ae6b600();
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
      (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,param_1);
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  if ((param_4 & 1) == 0) {
    ppuVar3 = &PTR___tlv_bootstrap_11340e020;
    (*(code *)PTR___tlv_bootstrap_11340e020)();
    if (*(char *)ppuVar3 == '\x01') {
      lVar2 = *(long *)(param_1 + 0x48) + -1;
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__fwrite_11034c3a0)
                  (*(undefined8 *)(param_1 + 0x40),lVar2,1,*(undefined8 *)PTR____stderrp_11034bdc8);
        return;
      }
    }
    else {
      FUN_10ae7ccdc(lVar2);
      *(undefined1 *)ppuVar3 = 1;
      puVar1 = *(undefined8 **)(lVar2 + 0x10);
      for (puVar4 = *(undefined8 **)(lVar2 + 8); puVar1 != puVar4; puVar4 = puVar4 + 1) {
        (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,param_1);
      }
      *(undefined1 *)ppuVar3 = 0;
      FUN_10ae7d4dc(lVar2);
    }
  }
  return;
}



/* Entry: 10ae6b600; end: 10ae6b68b;  */

undefined8 FUN_10ae6b600(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam00000001138370b8 & 1) == 0) {
    iVar1 = 0x138370b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x20;
      __Znwm();
      FUN_10ae6b8d4();
      uRam00000001138370b0 = uVar2;
      ___cxa_guard_release(0x1138370b8);
    }
  }
  return uRam00000001138370b0;
}



/* Entry: 10ae6b68c; end: 10ae6b807;  */

void FUN_10ae6b68c(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined *puStack_58;
  
  func_0x000107c2b9f0();
  plVar2 = *(long **)(param_1 + 8);
  plVar3 = *(long **)(param_1 + 0x10);
  plVar6 = plVar2;
  if (plVar2 == plVar3) {
LAB_10ae6b6e4:
    if (plVar6 != plVar3) {
      bVar9 = false;
      goto LAB_10ae6b788;
    }
  }
  else {
    do {
      if (*plVar6 == param_2) goto LAB_10ae6b6e4;
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3);
  }
  if (plVar3 < *(long **)(param_1 + 0x18)) {
    plVar11 = plVar3 + 1;
    *plVar3 = param_2;
  }
  else {
    lVar10 = (long)plVar3 - (long)plVar2;
    uVar1 = (lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10ae6bbc4();
LAB_10ae6b7bc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ae6b7c0);
      (*pcVar4)();
    }
    uVar7 = (long)*(long **)(param_1 + 0x18) - (long)plVar2;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 >> 0x3d != 0) {
      func_0x000104c4f740();
      goto LAB_10ae6b7bc;
    }
    lVar5 = uVar8 << 3;
    __Znwm();
    plVar6 = (long *)(lVar5 + lVar10);
    plVar11 = plVar6 + 1;
    *plVar6 = param_2;
    _memcpy(plVar6 + -(lVar10 >> 3),plVar2,lVar10);
    *(long **)(param_1 + 8) = plVar6 + -(lVar10 >> 3);
    *(long **)(param_1 + 0x10) = plVar11;
    *(ulong *)(param_1 + 0x18) = lVar5 + uVar8 * 8;
    if (plVar2 != (long *)0x0) {
      __ZdlPv(plVar2);
    }
  }
  *(long **)(param_1 + 0x10) = plVar11;
  bVar9 = true;
LAB_10ae6b788:
  func_0x000107c2b9fc(param_1);
  if (!bVar9) {
    puStack_58 = &UNK_10f6d172e;
    uStack_60 = 0xd7;
    uStack_5c = 3;
    FUN_10ae6bb34(&uStack_5c,&puStack_58,&uStack_60);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10ae6b7ec);
    (*pcVar4)();
  }
  return;
}



/* Entry: 10ae6b808; end: 10ae6b8d3;  */

void FUN_10ae6b808(long param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  FUN_10ae6b600();
  ppuVar2 = &PTR___tlv_bootstrap_11340e020;
  (*(code *)PTR___tlv_bootstrap_11340e020)();
  if (*(char *)ppuVar2 == '\x01') {
    FUN_10ae7d260(param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    for (puVar3 = *(undefined8 **)(param_1 + 8); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x18))();
    }
  }
  else {
    FUN_10ae7ccdc(param_1);
    *(undefined1 *)ppuVar2 = 1;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    for (puVar3 = *(undefined8 **)(param_1 + 8); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x18))();
    }
    *(undefined1 *)ppuVar2 = 0;
    FUN_10ae7d4dc(param_1);
  }
  return;
}



/* Entry: 10ae6b8d4; end: 10ae6b98b;  */

undefined8 * FUN_10ae6b8d4(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((bRam00000001138370c8 & 1) == 0) {
    iVar1 = 0x138370c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x8;
      __Znwm();
      *puVar2 = &PTR_FUN_110c8ac00;
      puRam00000001138370c0 = puVar2;
      ___cxa_guard_release(0x1138370c8);
    }
  }
  FUN_10ae6b68c(param_1,puRam00000001138370c0);
  return param_1;
}



/* Entry: 10ae6b98c; end: 10ae6b993;  */

void FUN_10ae6b98c(void)

{
  return;
}



/* Entry: 10ae6b994; end: 10ae6ba1b;  */

void FUN_10ae6b994(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (iRam00000001137ed8a8 != 0xdd) {
    FUN_10ae6ba1c();
  }
  plVar1 = (long *)(param_2 + 0x68);
  lVar2 = (long)*(char *)(param_2 + 0x7f);
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_2 + 0x70);
    if (lVar2 != 0) {
      plVar1 = (long *)*plVar1;
      goto LAB_10ae6b9ec;
    }
  }
  else if (*(char *)(param_2 + 0x7f) != '\0') goto LAB_10ae6b9ec;
  lVar2 = *(long *)(param_2 + 0x48) + -1;
  if (lVar2 == 0) {
    return;
  }
  plVar1 = *(long **)(param_2 + 0x40);
LAB_10ae6b9ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(plVar1,lVar2,1,*(undefined8 *)PTR____stderrp_11034bdc8);
  return;
}



/* Entry: 10ae6ba1c; end: 10ae6bb33;  */

void FUN_10ae6ba1c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 auStack_c8 [2];
  char cStack_b1;
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
  long lStack_28;
  
  puVar8 = &uStack_80;
  puVar9 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    if (iRam00000001137ed8a8 != 0) {
      ClearExclusiveLocal();
      puVar7 = (undefined4 *)0x1137ed8a8;
      param_3 = (undefined4 *)&UNK_10e52b5c4;
      param_2 = (undefined8 *)0x3;
      FUN_10ae87864();
      if ((int)puVar7 != 0) goto LAB_10ae6bb04;
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x1137ed8a8,0x10);
    if (bVar4) {
      iRam00000001137ed8a8 = 0x65c2937b;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_58 = 0x7a696c616974696e;
  uStack_60 = 0x493a3a6c73626120;
  uStack_48 = 0x64656c6c61632073;
  uStack_50 = 0x69202928676f4c65;
  uStack_38 = 0x206f74206e657474;
  uStack_40 = 0x6972772065726120;
  uStack_30 = 0xa525245445453;
  uStack_78 = 0x676f6c206c6c4120;
  uStack_80 = 0x3a474e494e524157;
  uStack_68 = 0x65726f6665622073;
  uStack_70 = 0x6567617373656d20;
  _strlen();
  puVar7 = (undefined4 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    param_3 = (undefined4 *)0x1;
    _fwrite();
    param_2 = puVar8;
    puVar7 = (undefined4 *)puVar9;
  }
  do {
    iVar6 = iRam00000001137ed8a8;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x1137ed8a8,0x10);
    if (bVar4) {
      iRam00000001137ed8a8 = 0xdd;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0x5a308d2) {
    puVar7 = (undefined4 *)0x1137ed8a8;
    param_2 = (undefined8 *)0x1;
    FUN_10ae87860();
  }
LAB_10ae6bb04:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    puVar5 = PTR_FUN_113311b68;
    uVar1 = *puVar7;
    uVar10 = *param_2;
    uVar2 = *param_3;
    func_0x000107c31940(auStack_c8,&UNK_10f6d17cb);
    (*(code *)puVar5)(uVar1,uVar10,uVar2,auStack_c8);
    if (cStack_b1 < '\0') {
      __ZdlPv(auStack_c8[0]);
    }
    return;
  }
  return;
}



/* Entry: 10ae6bb34; end: 10ae6bbc3;  */

void FUN_10ae6bb34(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  puVar3 = PTR_FUN_113311b68;
  uVar1 = *param_1;
  uVar4 = *param_2;
  uVar2 = *param_3;
  func_0x000107c31940(auStack_48,&UNK_10f6d17cb);
  (*(code *)puVar3)(uVar1,uVar4,uVar2,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10ae6bbc4; end: 10ae6bbd7;  */

long * FUN_10ae6bbc4(void)

{
  byte *pbVar1;
  long *plVar2;
  ulong *puVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar5 = plVar2[8] + 0x118 + *(long *)(*(long *)(plVar2[8] + 0x118) + -0x18);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  __ZNSt3__18ios_base5clearEj(lVar5,0);
  pbVar4 = (byte *)plVar2[0xd];
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(plVar2[8] + 0x3c58) = 0;
  }
  else {
    lVar5 = plVar2[6] - plVar2[5];
    if (lVar5 != 0) {
      puVar3 = (ulong *)(plVar2 + 9);
      pbVar1 = (byte *)(*puVar3 + lVar5);
      *puVar3 = (ulong)pbVar1;
      plVar2[10] = plVar2[10] - lVar5;
      lVar5 = plVar2[0xe];
      if (pbVar4 <= pbVar1 && lVar5 != 0) {
        uVar6 = (long)pbVar1 - (long)(pbVar4 + lVar5);
        do {
          lVar5 = lVar5 + -1;
          bVar7 = 0;
          if (lVar5 != 0) {
            bVar7 = 0x80;
          }
          *pbVar4 = bVar7 | (byte)uVar6 & 0x7f;
          uVar6 = uVar6 >> 7;
          pbVar4 = pbVar4 + 1;
        } while (lVar5 != 0);
      }
      pbVar4 = (byte *)plVar2[0xb];
      if (pbVar4 != (byte *)0x0) {
        lVar5 = plVar2[0xc];
        if (pbVar4 <= (byte *)*puVar3 && lVar5 != 0) {
          uVar6 = (long)*puVar3 - (long)(pbVar4 + lVar5);
          do {
            lVar5 = lVar5 + -1;
            bVar7 = 0;
            if (lVar5 != 0) {
              bVar7 = 0x80;
            }
            *pbVar4 = bVar7 | (byte)uVar6 & 0x7f;
            uVar6 = uVar6 >> 7;
            pbVar4 = pbVar4 + 1;
          } while (lVar5 != 0);
        }
      }
      lVar5 = plVar2[8];
      uVar6 = *puVar3;
      *(long *)(lVar5 + 0x3c58) = plVar2[10];
      *(ulong *)(lVar5 + 0x3c50) = uVar6;
    }
  }
  *plVar2 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(plVar2 + 1);
  return plVar2;
}



/* Entry: 10ae6bbd8; end: 10ae6bbdb;  */

long * FUN_10ae6bbd8(long *param_1)

{
  byte *pbVar1;
  ulong *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  
  lVar4 = param_1[8] + 0x118 + *(long *)(*(long *)(param_1[8] + 0x118) + -0x18);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  __ZNSt3__18ios_base5clearEj(lVar4,0);
  pbVar3 = (byte *)param_1[0xd];
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_1[8] + 0x3c58) = 0;
  }
  else {
    lVar4 = param_1[6] - param_1[5];
    if (lVar4 != 0) {
      puVar2 = (ulong *)(param_1 + 9);
      pbVar1 = (byte *)(*puVar2 + lVar4);
      *puVar2 = (ulong)pbVar1;
      param_1[10] = param_1[10] - lVar4;
      lVar4 = param_1[0xe];
      if (pbVar3 <= pbVar1 && lVar4 != 0) {
        uVar5 = (long)pbVar1 - (long)(pbVar3 + lVar4);
        do {
          lVar4 = lVar4 + -1;
          bVar6 = 0;
          if (lVar4 != 0) {
            bVar6 = 0x80;
          }
          *pbVar3 = bVar6 | (byte)uVar5 & 0x7f;
          uVar5 = uVar5 >> 7;
          pbVar3 = pbVar3 + 1;
        } while (lVar4 != 0);
      }
      pbVar3 = (byte *)param_1[0xb];
      if (pbVar3 != (byte *)0x0) {
        lVar4 = param_1[0xc];
        if (pbVar3 <= (byte *)*puVar2 && lVar4 != 0) {
          uVar5 = (long)*puVar2 - (long)(pbVar3 + lVar4);
          do {
            lVar4 = lVar4 + -1;
            bVar6 = 0;
            if (lVar4 != 0) {
              bVar6 = 0x80;
            }
            *pbVar3 = bVar6 | (byte)uVar5 & 0x7f;
            uVar5 = uVar5 >> 7;
            pbVar3 = pbVar3 + 1;
          } while (lVar4 != 0);
        }
      }
      lVar4 = param_1[8];
      uVar5 = *puVar2;
      *(long *)(lVar4 + 0x3c58) = param_1[10];
      *(ulong *)(lVar4 + 0x3c50) = uVar5;
    }
  }
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10ae6bbdc; end: 10ae6bc3f;  */

long FUN_10ae6bbdc(long param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [64];
  long lStack_58;
  
  FUN_10ae6c484(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(lStack_58 + 0x118,*param_2);
  FUN_10ae6c56c(auStack_98);
  return param_1;
}



/* Entry: 10ae6bc40; end: 10ae6bca3;  */

long FUN_10ae6bc40(long param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [64];
  long lStack_58;
  
  FUN_10ae6c484(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(lStack_58 + 0x118,*param_2);
  FUN_10ae6c56c(auStack_98);
  return param_1;
}



/* Entry: 10ae6bca4; end: 10ae6bd07;  */

long FUN_10ae6bca4(long param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [64];
  long lStack_58;
  
  FUN_10ae6c484(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(lStack_58 + 0x118,*param_2);
  FUN_10ae6c56c(auStack_98);
  return param_1;
}



/* Entry: 10ae6bd08; end: 10ae6be97;  */

void FUN_10ae6bd08(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x3c58);
  pbStack_50 = *(byte **)(*(long *)(param_1 + 8) + 0x3c50);
  lVar4 = param_3 + 0x14;
  pbVar2 = (byte *)0x7;
  FUN_10ae6b200(7,lVar4,&pbStack_50);
  iVar1 = 6;
  FUN_10ae6b0b4(6,param_2,param_3,&pbStack_50);
  if (iVar1 == 0) {
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x3c58) = 0;
  }
  else {
    if ((pbVar2 != (byte *)0x0) && (pbVar2 <= pbStack_50 && lVar4 != 0)) {
      uVar3 = (long)pbStack_50 - (long)(pbVar2 + lVar4);
      do {
        lVar4 = lVar4 + -1;
        bVar5 = 0;
        if (lVar4 != 0) {
          bVar5 = 0x80;
        }
        *pbVar2 = bVar5 | (byte)uVar3 & 0x7f;
        uVar3 = uVar3 >> 7;
        pbVar2 = pbVar2 + 1;
      } while (lVar4 != 0);
    }
    lVar4 = *(long *)(param_1 + 8);
    *(undefined8 *)(lVar4 + 0x3c58) = uStack_48;
    *(byte **)(lVar4 + 0x3c50) = pbStack_50;
  }
  return;
}



/* Entry: 10ae6be98; end: 10ae6c0b3;  */

long * FUN_10ae6be98(long *param_1,long param_2,undefined4 param_3,uint param_4,long param_5,
                    undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  long lVar9;
  long lVar10;
  undefined4 auStack_58 [2];
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x2a] = 0;
  puVar1 = PTR___ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE_110346b08 + 0x40;
  param_1[0x23] = (long)(PTR___ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE_110346b08 + 0x18);
  param_1[0x24] = (long)puVar1;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x24,0);
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  param_1[0x78a] = (long)(param_1 + 0x37);
  param_1[0x78b] = 15000;
  *(uint *)((long)param_1 + *(long *)(param_1[0x23] + -0x18) + 0x120) =
       *(uint *)((long)param_1 + *(long *)(param_1[0x23] + -0x18) + 0x120) | 0x201;
  lVar5 = param_2;
  _strlen();
  *param_1 = param_2;
  param_1[1] = lVar5;
  lVar5 = param_2;
  _strlen();
  if (lVar5 != 0) {
    lVar2 = -1;
    lVar9 = param_2;
    do {
      lVar10 = lVar2;
      lVar9 = lVar9 + -1;
      if (lVar10 - lVar5 == -1) goto LAB_10ae6bfb0;
      lVar2 = lVar10 + 1;
    } while (*(char *)(lVar9 + lVar5) != '/');
    lVar9 = lVar5 + param_2;
    if (lVar2 != lVar5) {
      lVar5 = lVar10 + 1;
      param_2 = lVar9 - lVar2;
    }
  }
LAB_10ae6bfb0:
  param_1[2] = param_2;
  param_1[3] = lVar5;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  uVar3 = 2;
  if (param_4 < 4) {
    uVar3 = param_4;
  }
  uVar4 = 0;
  if (-1 < (int)param_4) {
    uVar4 = uVar3;
  }
  *(uint *)(param_1 + 5) = uVar4;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = param_5;
  *(undefined4 *)(param_1 + 7) = param_6;
  puVar1 = PTR___tlv_bootstrap_11340e050;
  ppuVar7 = &PTR___tlv_bootstrap_11340e050;
  ppuVar6 = ppuVar7;
  (*(code *)PTR___tlv_bootstrap_11340e050)();
  if (*(char *)ppuVar6 == '\x01') {
    ppuVar7 = &PTR___tlv_bootstrap_11340e038;
    (*(code *)PTR___tlv_bootstrap_11340e038)();
    uVar8 = *(undefined4 *)ppuVar7;
  }
  else {
    _pthread_threadid_np(0,auStack_58);
    ppuVar6 = &PTR___tlv_bootstrap_11340e038;
    (*(code *)PTR___tlv_bootstrap_11340e038)(auStack_58[0]);
    *(undefined4 *)ppuVar6 = extraout_w8;
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar7 = 1;
    uVar8 = extraout_w8_00;
  }
  *(undefined4 *)((long)param_1 + 0x3c) = uVar8;
  return param_1;
}



/* Entry: 10ae6c0b4; end: 10ae6c0e3;  */

undefined4 * FUN_10ae6c0b4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = param_1;
  ___error();
  *puVar2 = uVar1;
  return param_1;
}



/* Entry: 10ae6c0e4; end: 10ae6c437;  */

undefined4 * FUN_10ae6c0e4(undefined4 *param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 *puStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar10 = *(long *)(param_1 + 2);
  iVar9 = *(int *)(lVar10 + 0x28);
  puVar8 = param_1;
  if (-1 < iVar9) {
    if (*(char *)(lVar10 + 0x82) == '\x01') {
      FUN_10ae6bd08(param_1,": ",2);
      FUN_10ae76d90(&pppuStack_78,*param_1);
      uVar1 = uStack_70;
      ppppuVar7 = (undefined8 ****)pppuStack_78;
      if (-1 < (char)bStack_61) {
        uVar1 = (ulong)bStack_61;
        ppppuVar7 = &pppuStack_78;
      }
      func_0x00010ae6bdd0(param_1,ppppuVar7,uVar1);
      FUN_10ae6bd08(param_1,&UNK_10f47a8fa,2);
      uStack_c0 = *param_1;
      FUN_10ae6bbdc(param_1,&uStack_c0);
      FUN_10ae6bd08();
      if ((char)bStack_61 < '\0') {
        __ZdlPv(pppuStack_78);
      }
      lVar10 = *(long *)(param_1 + 2);
      iVar9 = *(int *)(lVar10 + 0x28);
    }
    if (iVar9 == 3) {
      do {
        if (cRam00000001137ed8ac != '\0') {
          ClearExclusiveLocal();
          goto LAB_10ae6c1e0;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(0x1137ed8ac,0x10);
        if (bVar5) {
          cRam00000001137ed8ac = '\x01';
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined1 *)(lVar10 + 0x80) = 1;
    }
LAB_10ae6c1e0:
    lStack_88 = lVar10 + 0x1b8;
    lStack_80 = *(long *)(lVar10 + 0x3c50) - lStack_88;
    puVar2 = (undefined2 *)(lVar10 + 0x3c60);
    uStack_90 = 0x3a96;
    puStack_98 = puVar2;
    if (*(char *)(lVar10 + 0x24) == '\x01') {
      (*(code *)PTR___tlv_bootstrap_11340e020)
                (&PTR___tlv_bootstrap_11340e020,*(undefined8 *)(lVar10 + 0x30),
                 *(undefined4 *)(lVar10 + 0x38),*(undefined4 *)(lVar10 + 0x3c),
                 *(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),
                 *(undefined4 *)(lVar10 + 0x20));
      uVar6 = extraout_x8;
      FUN_10ae6ae54();
    }
    else {
      uVar6 = 0;
    }
    *(undefined8 *)(lVar10 + 0x50) = uVar6;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puVar8 = &uStack_c0;
    func_0x00010ae6b300(puVar8,&lStack_88);
    if (((int)puVar8 != 0) && (CONCAT44(uStack_bc,uStack_c0) == 7)) {
      do {
        if (lStack_b8 == 2) {
          uStack_48 = uStack_a0;
          uStack_50 = uStack_a8;
          if (uStack_90 < 2) break;
          uStack_60 = 0;
          uStack_58 = 0;
          ppppuVar7 = &pppuStack_78;
          func_0x00010ae6b300(ppppuVar7,&uStack_50);
          if ((int)ppppuVar7 != 0) {
            do {
              if (((undefined8 ****)pppuStack_78 == (undefined8 ****)0x6 ||
                   (undefined8 ****)pppuStack_78 == (undefined8 ****)0x1) && (uStack_70 == 2)) {
                uVar1 = uStack_58;
                if (uStack_90 <= uStack_58) {
                  uVar1 = uStack_90;
                }
                _memcpy(puStack_98,uStack_60,uVar1);
                puStack_98 = (undefined2 *)((long)puStack_98 + uVar1);
                uStack_90 = uStack_90 - uVar1;
                if (uVar1 < uStack_58) goto LAB_10ae6c320;
              }
              ppppuVar7 = &pppuStack_78;
              func_0x00010ae6b300(ppppuVar7,&uStack_50);
            } while (((ulong)ppppuVar7 & 1) != 0);
          }
        }
        puVar8 = &uStack_c0;
        func_0x00010ae6b300(puVar8,&lStack_88);
        if (((int)puVar8 == 0) || (CONCAT44(uStack_bc,uStack_c0) != 7)) break;
      } while( true );
    }
LAB_10ae6c320:
    *puStack_98 = 10;
    uVar1 = (long)puStack_98 + (2 - (long)puVar2);
    if (14999 < uVar1) {
      uVar1 = 15000;
    }
    *(undefined2 **)(lVar10 + 0x40) = puVar2;
    *(ulong *)(lVar10 + 0x48) = uVar1;
    lVar10 = *(long *)(param_1 + 2);
    *(long *)(lVar10 + 0x58) = lVar10 + 0x1b8;
    *(long *)(lVar10 + 0x60) = *(long *)(lVar10 + 0x3c50) - (lVar10 + 0x1b8);
    puVar8 = *(undefined4 **)(param_1 + 2);
    if ((puVar8[10] == 3) && ((*(byte *)((long)puVar8 + 0x81) & 1) == 0)) {
      puVar3 = (undefined8 *)(puVar8 + 0x24);
      if ((*(ulong *)(puVar8 + 0x22) & 1) != 0) {
        puVar3 = *(undefined8 **)(puVar8 + 0x24);
      }
      FUN_10ae6b4e0(puVar8,puVar3,*(ulong *)(puVar8 + 0x22) >> 1,*(undefined1 *)(puVar8 + 0x44));
      func_0x000107c2c4d8(*(long *)(param_1 + 2) + 0x68,&UNK_10f593740,0x23);
      FUN_10ae6aca8(0,0x40,1,0x10ae6c690,*(long *)(param_1 + 2) + 0x68);
      puVar8 = *(undefined4 **)(param_1 + 2);
    }
    puVar3 = (undefined8 *)(puVar8 + 0x24);
    if ((*(ulong *)(puVar8 + 0x22) & 1) != 0) {
      puVar3 = *(undefined8 **)(puVar8 + 0x24);
    }
    FUN_10ae6b4e0(puVar8,puVar3,*(ulong *)(puVar8 + 0x22) >> 1,*(undefined1 *)(puVar8 + 0x44));
    if (*(int *)(*(long *)(param_1 + 2) + 0x28) == 3) {
      func_0x00010ae6c6c0();
      if ((char)bStack_61 < '\0') {
        __ZdlPv(pppuStack_78);
      }
      __Unwind_Resume(param_1);
      puVar8 = (undefined4 *)0x1;
      __exit(1);
      func_0x00010ae6bdd0();
      return puVar8;
    }
  }
  return puVar8;
}



/* Entry: 10ae6c438; end: 10ae6c447;  */

undefined8 FUN_10ae6c438(void)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  __exit(1);
  func_0x00010ae6bdd0();
  return uVar1;
}



/* Entry: 10ae6c448; end: 10ae6c483;  */

undefined8 FUN_10ae6c448(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x00010ae6bdd0(param_1,puVar2,uVar1);
  return param_1;
}



/* Entry: 10ae6c484; end: 10ae6c56b;  */

long * FUN_10ae6c484(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeC1Ev(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = (long)&PTR_FUN_110c8ac50;
  param_1[8] = param_2;
  lVar2 = *(long *)(param_2 + 0x3c58);
  plVar3 = param_1 + 9;
  *plVar3 = *(long *)(param_2 + 0x3c50);
  param_1[10] = lVar2;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  lVar1 = 7;
  FUN_10ae6b200(7,lVar2,plVar3);
  param_1[0xb] = lVar1;
  param_1[0xc] = lVar2;
  lVar2 = param_1[10];
  lVar1 = 1;
  FUN_10ae6b200(1,lVar2,plVar3);
  param_1[0xd] = lVar1;
  param_1[0xe] = lVar2;
  lVar1 = *plVar3;
  param_1[5] = lVar1;
  param_1[6] = lVar1;
  param_1[7] = lVar1 + param_1[10];
  lVar1 = param_1[8] + 0x118 + *(long *)(*(long *)(param_1[8] + 0x118) + -0x18);
  *(long **)(lVar1 + 0x28) = param_1;
  __ZNSt3__18ios_base5clearEj(lVar1,0);
  return param_1;
}



/* Entry: 10ae6c56c; end: 10ae6c67b;  */

long * FUN_10ae6c56c(long *param_1)

{
  byte *pbVar1;
  ulong *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  
  lVar4 = param_1[8] + 0x118 + *(long *)(*(long *)(param_1[8] + 0x118) + -0x18);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  __ZNSt3__18ios_base5clearEj(lVar4,0);
  pbVar3 = (byte *)param_1[0xd];
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_1[8] + 0x3c58) = 0;
  }
  else {
    lVar4 = param_1[6] - param_1[5];
    if (lVar4 != 0) {
      puVar2 = (ulong *)(param_1 + 9);
      pbVar1 = (byte *)(*puVar2 + lVar4);
      *puVar2 = (ulong)pbVar1;
      param_1[10] = param_1[10] - lVar4;
      lVar4 = param_1[0xe];
      if (pbVar3 <= pbVar1 && lVar4 != 0) {
        uVar5 = (long)pbVar1 - (long)(pbVar3 + lVar4);
        do {
          lVar4 = lVar4 + -1;
          bVar6 = 0;
          if (lVar4 != 0) {
            bVar6 = 0x80;
          }
          *pbVar3 = bVar6 | (byte)uVar5 & 0x7f;
          uVar5 = uVar5 >> 7;
          pbVar3 = pbVar3 + 1;
        } while (lVar4 != 0);
      }
      pbVar3 = (byte *)param_1[0xb];
      if (pbVar3 != (byte *)0x0) {
        lVar4 = param_1[0xc];
        if (pbVar3 <= (byte *)*puVar2 && lVar4 != 0) {
          uVar5 = (long)*puVar2 - (long)(pbVar3 + lVar4);
          do {
            lVar4 = lVar4 + -1;
            bVar6 = 0;
            if (lVar4 != 0) {
              bVar6 = 0x80;
            }
            *pbVar3 = bVar6 | (byte)uVar5 & 0x7f;
            uVar5 = uVar5 >> 7;
            pbVar3 = pbVar3 + 1;
          } while (lVar4 != 0);
        }
      }
      lVar4 = param_1[8];
      uVar5 = *puVar2;
      *(long *)(lVar4 + 0x3c58) = param_1[10];
      *(ulong *)(lVar4 + 0x3c50) = uVar5;
    }
  }
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10ae6c67c; end: 10ae6c68f;  */

void FUN_10ae6c67c(void)

{
  FUN_10ae6c56c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae6c690; end: 10ae6c6eb;  */

void FUN_10ae6c690(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _strlen();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (param_2,param_1,uVar1);
  return;
}



/* Entry: 10ae6c6ec; end: 10ae6c6ff;  */

void FUN_10ae6c6ec(undefined8 param_1,long param_2)

{
  FUN_10ae6c0e4();
  func_0x00010bdb29dc();
  func_0x000104bd46a0();
  FUN_10ae6c6ec();
  if (param_2 != 0) {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(param_2 + 0x118);
    if ((*(byte *)(param_2 + 0x88) & 1) != 0) {
      __ZdlPv(*(undefined8 *)(param_2 + 0x90));
    }
    if (*(char *)(param_2 + 0x7f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x68));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ae6c700; end: 10ae6c70b;  */

void FUN_10ae6c700(undefined8 param_1,long param_2)

{
  FUN_10ae6c6ec();
  if (param_2 != 0) {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(param_2 + 0x118);
    if ((*(byte *)(param_2 + 0x88) & 1) != 0) {
      __ZdlPv(*(undefined8 *)(param_2 + 0x90));
    }
    if (*(char *)(param_2 + 0x7f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x68));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ae6c70c; end: 10ae6c75b;  */

void FUN_10ae6c70c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev(param_2 + 0x118);
    if ((*(byte *)(param_2 + 0x88) & 1) != 0) {
      __ZdlPv(*(undefined8 *)(param_2 + 0x90));
    }
    if (*(char *)(param_2 + 0x7f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x68));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ae6c75c; end: 10ae6c8b3;  */

ulong FUN_10ae6c75c(ulong param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong *puVar6;
  ulong uVar7;
  
  for (; 0x3ff < param_3; param_3 = param_3 - 0x400) {
    puVar6 = param_2;
    func_0x000107c2b94c(param_2,0x400,&PTR_LOOP_110c8acd8,&UNK_10e52b628);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)puVar6 + param_1;
    param_1 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)puVar6 + param_1) * -0x622015f714c7d297;
    param_2 = param_2 + 0x80;
  }
  if (param_3 < 0x11) {
    if (8 < param_3) {
      uVar1 = (*param_2 >> 0x35 | *param_2 << 0xb) + param_1 + 0x9ddfea08eb382d69;
      uVar7 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ param_1 + 0x9ddfea08eb382d69;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar1;
      return SUB168(auVar4 * auVar5,8) ^ uVar7 * uVar1;
    }
    if (param_3 < 4) {
      if (param_3 == 0) {
        return param_1;
      }
      param_2 = (ulong *)(ulong)((uint)*(byte *)((long)param_2 + (param_3 >> 1)) <<
                                 (ulong)((uint)((param_3 >> 1) << 3) & 0x1f) | (uint)(byte)*param_2
                                | (uint)*(byte *)((long)param_2 + (param_3 - 1)) <<
                                  (ulong)(((uint)(param_3 - 1) & 3) << 3));
    }
    else {
      param_2 = (ulong *)((ulong)*(uint *)((long)param_2 + (param_3 - 4)) <<
                          (param_3 * 8 - 0x20 & 0x3f) | (ulong)(uint)*param_2);
    }
  }
  else {
    func_0x000107c2b94c(param_2,param_3,&PTR_LOOP_110c8acd8,&UNK_10e52b628);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (long)param_2 + param_1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)param_2 + param_1) * -0x622015f714c7d297;
}



/* Entry: 10ae6c8b4; end: 10ae6c913;  */

ulong FUN_10ae6c8b4(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar4 = *param_1;
  uVar2 = param_1[2];
  uVar3 = (uVar4 >> 0xc ^ param_2 >> 7) & uVar2;
  uVar5 = *(undefined8 *)(uVar4 + uVar3);
  lVar1 = 0;
  uVar6 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar5 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar5 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar5 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar5 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar5 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar5 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar5 < -1))))))))
  ;
  while (uVar6 == 0) {
    lVar1 = lVar1 + 8;
    uVar3 = lVar1 + uVar3 & uVar2;
    uVar5 = *(undefined8 *)(uVar4 + uVar3);
    uVar6 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) < -1),
                     CONCAT16(-((char)((ulong)uVar5 >> 0x30) < -1),
                              CONCAT15(-((char)((ulong)uVar5 >> 0x28) < -1),
                                       CONCAT14(-((char)((ulong)uVar5 >> 0x20) < -1),
                                                CONCAT13(-((char)((ulong)uVar5 >> 0x18) < -1),
                                                         CONCAT12(-((char)((ulong)uVar5 >> 0x10) <
                                                                   -1),CONCAT11(-((char)((ulong)
                                                  uVar5 >> 8) < -1),-((char)uVar5 < -1))))))));
  }
  uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
  uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  return uVar3 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar2;
}



/* Entry: 10ae6c914; end: 10ae6cb47;  */

void FUN_10ae6c914(ulong *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  puVar16 = (ulong *)*param_1;
  puVar7 = (ulong *)((long)puVar16 + uVar3);
  puVar10 = puVar16;
  if (0 < (long)uVar3) {
    do {
      puVar11 = puVar10 + 1;
      *puVar10 = (*puVar10 >> 6 & 0x202020202020202) + 0x7e7e7e7e7e7e7e7e | 0x8080808080808080;
      puVar10 = puVar11;
    } while (puVar11 < puVar7);
  }
  uVar17 = *puVar16;
  *(undefined4 *)((long)puVar7 + 4) = *(undefined4 *)((long)puVar16 + 3);
  *(int *)((long)puVar7 + 1) = (int)uVar17;
  *(undefined1 *)((long)puVar16 + uVar3) = 0xff;
  if (uVar3 != 0) {
    uVar17 = 0;
    pcVar2 = (code *)param_2[1];
    pcVar4 = (code *)param_2[2];
    lVar18 = *param_2;
    uVar15 = uVar1;
    do {
      if (*(char *)((long)puVar16 + uVar17) == -2) {
        puVar7 = param_1;
        (*pcVar2)(param_1,uVar15);
        uVar8 = *param_1;
        uVar9 = param_1[2];
        uVar12 = (uVar8 >> 0xc ^ (ulong)puVar7 >> 7) & uVar9;
        uVar19 = *(undefined8 *)(uVar8 + uVar12);
        uVar20 = CONCAT17(-((char)((ulong)uVar19 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar19 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar19 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar19 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar19 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar19 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar19 >> 8) < -1),-((char)uVar19 < -1))))))));
        uVar13 = uVar12;
        if (uVar20 == 0) {
          lVar14 = 8;
          do {
            uVar13 = uVar13 + lVar14 & uVar9;
            uVar19 = *(undefined8 *)(uVar8 + uVar13);
            uVar20 = CONCAT17(-((char)((ulong)uVar19 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar19 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar19 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar19 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar19 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar19 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar19 >> 8) < -1),
                                                           -((char)uVar19 < -1))))))));
            lVar14 = lVar14 + 8;
          } while (uVar20 == 0);
        }
        uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) & uVar9;
        if (((uVar13 - uVar12 ^ uVar17 - uVar12) & uVar3) < 8) {
          bVar6 = (byte)puVar7 & 0x7f;
          *(byte *)(uVar8 + uVar17) = bVar6;
          *(byte *)(uVar8 + (uVar9 & uVar17 - 7) + (uVar9 & 7)) = bVar6;
        }
        else {
          lVar14 = uVar1 + uVar13 * lVar18;
          cVar5 = *(char *)((long)puVar16 + uVar13);
          bVar6 = (byte)puVar7 & 0x7f;
          *(byte *)(uVar8 + uVar13) = bVar6;
          *(byte *)(uVar8 + (uVar13 - 7 & uVar9) + (uVar9 & 7)) = bVar6;
          if (cVar5 == -0x80) {
            (*pcVar4)(param_1,lVar14,uVar15);
            uVar13 = param_1[2];
            uVar8 = *param_1;
            *(undefined1 *)(uVar8 + uVar17) = 0x80;
            *(undefined1 *)(uVar8 + (uVar13 & uVar17 - 7) + (uVar13 & 7)) = 0x80;
          }
          else {
            (*pcVar4)(param_1,param_3,lVar14);
            (*pcVar4)(param_1,lVar14,uVar15);
            (*pcVar4)(param_1,uVar15,param_3);
            uVar17 = uVar17 - 1;
            uVar15 = uVar15 - lVar18;
          }
        }
      }
      uVar17 = uVar17 + 1;
      uVar15 = lVar18 + uVar15;
    } while (uVar17 != uVar3);
  }
  uVar1 = param_1[2];
  lVar18 = 6;
  if (uVar1 != 7) {
    lVar18 = uVar1 - (uVar1 >> 3);
  }
  *(ulong *)(*param_1 - 8) = lVar18 - param_1[3];
  return;
}



/* Entry: 10ae6cb48; end: 10ae6cbe7;  */

void FUN_10ae6cb48(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 10ae6cbe8; end: 10ae6cc73;  */

void FUN_10ae6cbe8(long *param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_1[3] = 0;
  if (param_3 == 0) {
    (**(code **)(param_2 + 0x18))(param_1);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (long)&UNK_10e52b660;
  }
  else {
    lVar3 = param_1[2];
    lVar2 = *param_1;
    _memset(lVar2,0x80,lVar3 + 8);
    *(undefined1 *)(lVar2 + lVar3) = 0xff;
    uVar1 = param_1[2];
    lVar2 = 6;
    if (uVar1 != 7) {
      lVar2 = uVar1 - (uVar1 >> 3);
    }
    *(long *)(*param_1 + -8) = lVar2 - param_1[3];
  }
  return;
}



/* Entry: 10ae6cc74; end: 10ae6ccbb;  */

undefined8 * FUN_10ae6cc74(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  
  puVar5 = (uint *)*param_1;
  uVar1 = *puVar5;
  do {
    uVar2 = *puVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *puVar5 = uVar1 & 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (7 < uVar2) {
    func_0x00010bdb33e0();
  }
  return param_1;
}



/* Entry: 10ae6ccbc; end: 10ae6ccbf;  */

void FUN_10ae6ccbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10ae6ccc0; end: 10ae6ccd3;  */

void FUN_10ae6ccc0(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae6ccd4; end: 10ae6ccdf;  */

undefined * FUN_10ae6ccd4(void)

{
  return &UNK_10e52bf14;
}



/* Entry: 10ae6cce0; end: 10ae6cd0f;  */

void FUN_10ae6cce0(void)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  puVar8 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  *puVar8 = &PTR_FUN_110c8ad08;
  ___cxa_throw();
  while (bVar4 = *(byte *)((long)puVar8 + 0xc), bVar4 == 1) {
    puVar9 = (undefined8 *)puVar8[3];
    __ZdlPv(puVar8);
    puVar1 = (uint *)(puVar9 + 1);
    puVar8 = puVar9;
    if (*puVar1 != 4) {
      do {
        uVar3 = *puVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar3 - 4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((uVar3 & 0xfffffff9) != 0) {
        return;
      }
    }
  }
  if (bVar4 < 4) {
    if (bVar4 == 2) {
      if (puVar8[2] != 0) {
        puVar1 = (uint *)(puVar8[2] + 8);
        do {
          uVar3 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar3 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar3 & 0xfffffff9) == 0) {
          FUN_10ae6cd10();
        }
      }
      func_0x00010ae701fc(puVar8[3]);
    }
    else if (bVar4 == 3) {
      bVar4 = *(byte *)((long)puVar8 + 0xe);
      bVar5 = *(byte *)((long)puVar8 + 0xf);
      plVar2 = puVar8 + (ulong)bVar5 + 2;
      if (*(char *)((long)puVar8 + 0xd) == '\x01') {
        if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
        plVar10 = puVar8 + (ulong)bVar4 + 2;
        do {
          lVar11 = *plVar10;
          puVar1 = (uint *)(lVar11 + 8);
          if (*puVar1 == 4) {
LAB_10ae6e04c:
            bVar4 = *(byte *)(lVar11 + 0xf);
            if ((uint)*(byte *)(lVar11 + 0xe) != (uint)bVar4) {
              plVar12 = (long *)(lVar11 + 0x10 + (ulong)*(byte *)(lVar11 + 0xe) * 8);
              do {
                puVar1 = (uint *)(*plVar12 + 8);
                if (*puVar1 == 4) {
LAB_10ae6e094:
                  FUN_10ae6e194();
                }
                else {
                  do {
                    uVar3 = *puVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar7) {
                      *puVar1 = uVar3 - 4;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e094;
                }
                plVar12 = plVar12 + 1;
              } while (plVar12 != (long *)(lVar11 + 0x10 + (ulong)(uint)bVar4 * 8));
              if (lVar11 == 0) goto LAB_10ae6e0b0;
            }
            __ZdlPv(lVar11);
          }
          else {
            do {
              uVar3 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar3 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e04c;
          }
LAB_10ae6e0b0:
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar2);
      }
      else if (*(char *)((long)puVar8 + 0xd) == '\0') {
        if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
        plVar10 = puVar8 + (ulong)bVar4 + 2;
        do {
          puVar1 = (uint *)(*plVar10 + 8);
          if (*puVar1 == 4) {
LAB_10ae6e000:
            FUN_10ae6e194();
          }
          else {
            do {
              uVar3 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar3 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e000;
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar2);
      }
      else {
        if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
        plVar10 = puVar8 + (ulong)bVar4 + 2;
        do {
          lVar11 = *plVar10;
          puVar1 = (uint *)(lVar11 + 8);
          if (*puVar1 == 4) {
LAB_10ae6e0f4:
            bVar4 = *(byte *)(lVar11 + 0xf);
            if ((uint)*(byte *)(lVar11 + 0xe) != (uint)bVar4) {
              plVar12 = (long *)(lVar11 + 0x10 + (ulong)*(byte *)(lVar11 + 0xe) * 8);
              do {
                puVar1 = (uint *)(*plVar12 + 8);
                if (*puVar1 == 4) {
LAB_10ae6e13c:
                  FUN_10ae6df90();
                }
                else {
                  do {
                    uVar3 = *puVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar7) {
                      *puVar1 = uVar3 - 4;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e13c;
                }
                plVar12 = plVar12 + 1;
              } while (plVar12 != (long *)(lVar11 + 0x10 + (ulong)(uint)bVar4 * 8));
              if (lVar11 == 0) goto LAB_10ae6e158;
            }
            __ZdlPv(lVar11);
          }
          else {
            do {
              uVar3 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar3 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e0f4;
          }
LAB_10ae6e158:
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar2);
      }
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
    }
  }
  else if (bVar4 == 4) {
    FUN_10ae6f8c8(puVar8,*(undefined4 *)(puVar8 + 2),*(undefined4 *)((long)puVar8 + 0x14));
  }
  else if (bVar4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010ae6cdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar8[3])(puVar8);
    return;
  }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar8);
  return;
}



/* Entry: 10ae6cd10; end: 10ae6cdeb;  */

void FUN_10ae6cd10(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  while (bVar4 = *(byte *)(param_1 + 0xc), bVar4 == 1) {
    lVar9 = *(long *)(param_1 + 0x18);
    __ZdlPv(param_1);
    puVar1 = (uint *)(lVar9 + 8);
    param_1 = lVar9;
    if (*puVar1 != 4) {
      do {
        uVar3 = *puVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar3 - 4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((uVar3 & 0xfffffff9) != 0) {
        return;
      }
    }
  }
  if (bVar4 < 4) {
    if (bVar4 == 2) {
      if (*(long *)(param_1 + 0x10) != 0) {
        puVar1 = (uint *)(*(long *)(param_1 + 0x10) + 8);
        do {
          uVar3 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar3 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar3 & 0xfffffff9) == 0) {
          FUN_10ae6cd10();
        }
      }
      func_0x00010ae701fc(*(undefined8 *)(param_1 + 0x18));
    }
    else if (bVar4 == 3) {
      lVar9 = param_1 + 0x10;
      bVar4 = *(byte *)(param_1 + 0xe);
      uVar8 = (ulong)bVar4;
      bVar5 = *(byte *)(param_1 + 0xf);
      plVar2 = (long *)(lVar9 + (ulong)bVar5 * 8);
      if (*(char *)(param_1 + 0xd) == '\x01') {
        if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
        plVar10 = (long *)(lVar9 + uVar8 * 8);
        do {
          lVar9 = *plVar10;
          puVar1 = (uint *)(lVar9 + 8);
          if (*puVar1 == 4) {
LAB_10ae6e04c:
            bVar4 = *(byte *)(lVar9 + 0xf);
            if ((uint)*(byte *)(lVar9 + 0xe) != (uint)bVar4) {
              plVar11 = (long *)(lVar9 + 0x10 + (ulong)*(byte *)(lVar9 + 0xe) * 8);
              do {
                puVar1 = (uint *)(*plVar11 + 8);
                if (*puVar1 == 4) {
LAB_10ae6e094:
                  FUN_10ae6e194();
                }
                else {
                  do {
                    uVar3 = *puVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar7) {
                      *puVar1 = uVar3 - 4;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e094;
                }
                plVar11 = plVar11 + 1;
              } while (plVar11 != (long *)(lVar9 + 0x10 + (ulong)(uint)bVar4 * 8));
              if (lVar9 == 0) goto LAB_10ae6e0b0;
            }
            __ZdlPv(lVar9);
          }
          else {
            do {
              uVar3 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar3 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e04c;
          }
LAB_10ae6e0b0:
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar2);
      }
      else if (*(char *)(param_1 + 0xd) == '\0') {
        if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
        plVar10 = (long *)(lVar9 + uVar8 * 8);
        do {
          puVar1 = (uint *)(*plVar10 + 8);
          if (*puVar1 == 4) {
LAB_10ae6e000:
            FUN_10ae6e194();
          }
          else {
            do {
              uVar3 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar3 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e000;
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar2);
      }
      else {
        if (bVar4 == bVar5) goto code_r0x00010bdbd7ac;
        plVar10 = (long *)(lVar9 + uVar8 * 8);
        do {
          lVar9 = *plVar10;
          puVar1 = (uint *)(lVar9 + 8);
          if (*puVar1 == 4) {
LAB_10ae6e0f4:
            bVar4 = *(byte *)(lVar9 + 0xf);
            if ((uint)*(byte *)(lVar9 + 0xe) != (uint)bVar4) {
              plVar11 = (long *)(lVar9 + 0x10 + (ulong)*(byte *)(lVar9 + 0xe) * 8);
              do {
                puVar1 = (uint *)(*plVar11 + 8);
                if (*puVar1 == 4) {
LAB_10ae6e13c:
                  FUN_10ae6df90();
                }
                else {
                  do {
                    uVar3 = *puVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar7) {
                      *puVar1 = uVar3 - 4;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e13c;
                }
                plVar11 = plVar11 + 1;
              } while (plVar11 != (long *)(lVar9 + 0x10 + (ulong)(uint)bVar4 * 8));
              if (lVar9 == 0) goto LAB_10ae6e158;
            }
            __ZdlPv(lVar9);
          }
          else {
            do {
              uVar3 = *puVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar3 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e0f4;
          }
LAB_10ae6e158:
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar2);
      }
      if (param_1 == 0) {
        return;
      }
    }
  }
  else if (bVar4 == 4) {
    FUN_10ae6f8c8(param_1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  else if (bVar4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010ae6cdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(param_1);
    return;
  }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ae6cdec; end: 10ae6d21b;  */

long * FUN_10ae6cdec(int *param_1,long *param_2,int param_3,long param_4,long *param_5,int param_6)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  long *plVar8;
  char cVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (param_3 != 0) {
    uVar18 = param_3 - 2;
    uVar17 = (long)param_3;
    plVar16 = param_5;
    do {
      plVar15 = *(long **)(param_1 + (uVar17 - 1) * 2 + 2);
      if (param_6 == 1) {
        uVar13 = (ulong)*(byte *)((long)plVar15 + 0xe);
        if ((long)*param_1 < (long)uVar17) {
          lVar10 = *plVar15;
          param_5 = (long *)0x40;
          __Znwm();
          *(undefined4 *)(param_5 + 1) = 4;
          *param_5 = lVar10;
          uVar20 = *(undefined8 *)((long)plVar15 + 0x14);
          uVar19 = *(undefined8 *)((long)plVar15 + 0xc);
          uVar22 = *(undefined8 *)((long)plVar15 + 0x24);
          uVar21 = *(undefined8 *)((long)plVar15 + 0x1c);
          uVar24 = *(undefined8 *)((long)plVar15 + 0x34);
          uVar23 = *(undefined8 *)((long)plVar15 + 0x2c);
          *(undefined4 *)((long)param_5 + 0x3c) = *(undefined4 *)((long)plVar15 + 0x3c);
          *(undefined8 *)((long)param_5 + 0x34) = uVar24;
          *(undefined8 *)((long)param_5 + 0x2c) = uVar23;
          *(undefined8 *)((long)param_5 + 0x24) = uVar22;
          *(undefined8 *)((long)param_5 + 0x1c) = uVar21;
          *(undefined8 *)((long)param_5 + 0x14) = uVar20;
          *(undefined8 *)((long)param_5 + 0xc) = uVar19;
          bVar5 = *(byte *)((long)plVar15 + 0xf);
          plVar8 = plVar15 + uVar13 + 2;
          while (plVar8 = plVar8 + 1, plVar8 != plVar15 + (ulong)bVar5 + 2) {
            piVar11 = (int *)(*plVar8 + 8);
            do {
              cVar9 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar1) {
                *piVar11 = *piVar11 + 4;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          param_6 = 1;
        }
        else {
          puVar2 = (uint *)(plVar15[uVar13 + 2] + 8);
          do {
            uVar4 = *puVar2;
            cVar9 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar1) {
              *puVar2 = uVar4 - 4;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if ((uVar4 & 0xfffffff9) == 0) {
            FUN_10ae6cd10();
          }
          param_6 = 0;
          param_5 = plVar15;
        }
        param_5[uVar13 + 2] = (long)plVar16;
        *param_5 = *param_5 + param_4;
      }
      else if (param_6 == 2) {
        bVar5 = *(byte *)((long)plVar15 + 0xf);
        bVar6 = *(byte *)((long)plVar15 + 0xe);
        if ((ulong)bVar5 - (ulong)bVar6 < 6) {
          if ((long)*param_1 < (long)uVar17) {
            lVar10 = *plVar15;
            plVar8 = (long *)0x40;
            __Znwm();
            *(undefined4 *)(plVar8 + 1) = 4;
            *plVar8 = lVar10;
            uVar20 = *(undefined8 *)((long)plVar15 + 0x14);
            uVar19 = *(undefined8 *)((long)plVar15 + 0xc);
            uVar22 = *(undefined8 *)((long)plVar15 + 0x24);
            uVar21 = *(undefined8 *)((long)plVar15 + 0x1c);
            uVar24 = *(undefined8 *)((long)plVar15 + 0x34);
            uVar23 = *(undefined8 *)((long)plVar15 + 0x2c);
            *(undefined4 *)((long)plVar8 + 0x3c) = *(undefined4 *)((long)plVar15 + 0x3c);
            *(undefined8 *)((long)plVar8 + 0x34) = uVar24;
            *(undefined8 *)((long)plVar8 + 0x2c) = uVar23;
            *(undefined8 *)((long)plVar8 + 0x24) = uVar22;
            *(undefined8 *)((long)plVar8 + 0x1c) = uVar21;
            *(undefined8 *)((long)plVar8 + 0x14) = uVar20;
            *(undefined8 *)((long)plVar8 + 0xc) = uVar19;
            if (bVar6 == bVar5) {
              param_6 = 1;
              plVar15 = plVar8;
            }
            else {
              plVar12 = plVar15 + (ulong)bVar6 + 2;
              do {
                piVar11 = (int *)(*plVar12 + 8);
                do {
                  cVar9 = '\x01';
                  bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                  if (bVar1) {
                    *piVar11 = *piVar11 + 4;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                plVar12 = plVar12 + 1;
              } while (plVar12 != plVar15 + (ulong)bVar5 + 2);
              param_6 = 1;
              plVar15 = plVar8;
            }
          }
          else {
            param_6 = 0;
          }
          uVar13 = (ulong)*(byte *)((long)plVar15 + 0xf);
          if (uVar13 != 6) {
            uVar3 = (6 - uVar13) + (ulong)*(byte *)((long)plVar15 + 0xe);
            *(char *)((long)plVar15 + 0xe) = (char)uVar3;
            *(undefined1 *)((long)plVar15 + 0xf) = 6;
            if (uVar3 < 6) {
              uVar14 = 5;
              plVar8 = plVar15;
              do {
                plVar8[7] = plVar8[uVar13 + 1];
                uVar14 = uVar14 - 1;
                plVar8 = plVar8 + -1;
              } while (uVar3 <= uVar14);
            }
          }
          bVar5 = *(char *)((long)plVar15 + 0xe) - 1;
          *(byte *)((long)plVar15 + 0xe) = bVar5;
          plVar15[(ulong)bVar5 + 2] = (long)plVar16;
          *plVar15 = *plVar15 + param_4;
          param_5 = plVar15;
        }
        else {
          param_5 = (long *)0x40;
          __Znwm();
          *(undefined4 *)(param_5 + 1) = 4;
          if (*(char *)((long)plVar16 + 0xc) == '\x03') {
            cVar9 = *(char *)((long)plVar16 + 0xd) + '\x01';
          }
          else {
            cVar9 = '\0';
          }
          *param_5 = *plVar16;
          *(undefined1 *)((long)param_5 + 0xc) = 3;
          *(char *)((long)param_5 + 0xd) = cVar9;
          *(undefined2 *)((long)param_5 + 0xe) = 0x100;
          param_5[2] = (long)plVar16;
          param_6 = 2;
        }
      }
      else {
        param_5 = plVar16;
        if (param_6 == 0) {
          *plVar15 = *plVar15 + param_4;
          if ((long)uVar17 < 2) {
            return plVar15;
          }
          piVar11 = param_1 + (ulong)uVar18 * 2 + 2;
          do {
            plVar16 = *(long **)piVar11;
            *plVar16 = *plVar16 + param_4;
            uVar18 = (int)uVar17 - 1;
            uVar17 = (ulong)uVar18;
            piVar11 = piVar11 + -2;
          } while (1 < (int)uVar18);
          return plVar16;
        }
      }
      uVar18 = uVar18 - 1;
      bVar1 = 1 < (long)uVar17;
      uVar17 = uVar17 - 1;
      plVar16 = param_5;
    } while (bVar1);
  }
  if (param_6 != 0) {
    if (param_6 == 1) {
      puVar2 = (uint *)(param_2 + 1);
      do {
        uVar18 = *puVar2;
        cVar9 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar1) {
          *puVar2 = uVar18 - 4;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar18 & 0xfffffff9) == 0) {
        FUN_10ae6cd10();
      }
    }
    else {
      plVar16 = (long *)0x40;
      __Znwm();
      *(undefined4 *)(plVar16 + 1) = 4;
      *plVar16 = *param_2 + *param_5;
      bVar5 = *(char *)((long)param_5 + 0xd) + 1;
      *(undefined1 *)((long)plVar16 + 0xc) = 3;
      *(byte *)((long)plVar16 + 0xd) = bVar5;
      *(undefined2 *)((long)plVar16 + 0xe) = 0x200;
      plVar16[2] = (long)param_5;
      plVar16[3] = (long)param_2;
      param_5 = plVar16;
      if ((0xb < bVar5) &&
         (FUN_10ae6f110(), param_5 = plVar16, 0xb < *(byte *)((long)plVar16 + 0xd))) {
        FUN_10ae87b7c(3,&UNK_10f6d18a0,0x118,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10ae6d1b0);
        (*pcVar7)();
      }
    }
  }
  return param_5;
}



/* Entry: 10ae6d21c; end: 10ae6d46f;  */

void FUN_10ae6d21c(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int aiStack_b8 [2];
  undefined8 auStack_b0 [12];
  
  bVar1 = *(byte *)((long)param_1 + 0xd);
  uVar15 = (ulong)bVar1;
  lVar16 = *param_2;
  plVar17 = param_1;
  if (bVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar11 = uVar9;
      if ((*(uint *)(plVar17 + 1) & 0xfffffffd) != 4) break;
      auStack_b0[uVar9] = plVar17;
      uVar9 = uVar9 + 1;
      plVar17 = (long *)plVar17[(ulong)*(byte *)((long)plVar17 + 0xf) + 1];
      uVar11 = uVar15;
    } while (uVar15 != uVar9);
  }
  iVar8 = (int)uVar11;
  aiStack_b8[0] = iVar8;
  if ((*(uint *)(plVar17 + 1) & 0xfffffffd) == 4) {
    aiStack_b8[0] = iVar8 + 1;
  }
  if (iVar8 < (int)(uint)bVar1) {
    piVar13 = aiStack_b8 + (uVar11 & 0xffffffff) * 2;
    lVar10 = uVar15 - (uVar11 & 0xffffffff);
    do {
      piVar13 = piVar13 + 2;
      *(long **)piVar13 = plVar17;
      plVar17 = (long *)plVar17[(ulong)*(byte *)((long)plVar17 + 0xf) + 1];
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  bVar2 = *(byte *)((long)plVar17 + 0xf);
  bVar3 = *(byte *)((long)plVar17 + 0xe);
  if ((ulong)bVar2 - (ulong)bVar3 < 6) {
    if ((int)(uint)bVar1 < aiStack_b8[0]) {
      uVar6 = 0;
      plVar5 = plVar17;
    }
    else {
      lVar10 = *plVar17;
      plVar5 = (long *)0x40;
      __Znwm();
      *(undefined4 *)(plVar5 + 1) = 4;
      *plVar5 = lVar10;
      uVar18 = *(undefined8 *)((long)plVar17 + 0x14);
      uVar6 = *(undefined8 *)((long)plVar17 + 0xc);
      uVar20 = *(undefined8 *)((long)plVar17 + 0x24);
      uVar19 = *(undefined8 *)((long)plVar17 + 0x1c);
      uVar22 = *(undefined8 *)((long)plVar17 + 0x34);
      uVar21 = *(undefined8 *)((long)plVar17 + 0x2c);
      *(undefined4 *)((long)plVar5 + 0x3c) = *(undefined4 *)((long)plVar17 + 0x3c);
      *(undefined8 *)((long)plVar5 + 0x34) = uVar22;
      *(undefined8 *)((long)plVar5 + 0x2c) = uVar21;
      *(undefined8 *)((long)plVar5 + 0x24) = uVar20;
      *(undefined8 *)((long)plVar5 + 0x1c) = uVar19;
      *(undefined8 *)((long)plVar5 + 0x14) = uVar18;
      *(undefined8 *)((long)plVar5 + 0xc) = uVar6;
      if (bVar3 != bVar2) {
        plVar12 = plVar17 + (ulong)bVar3 + 2;
        do {
          piVar13 = (int *)(*plVar12 + 8);
          do {
            cVar7 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar4) {
              *piVar13 = *piVar13 + 4;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar17 + (ulong)bVar2 + 2);
      }
      uVar6 = 1;
    }
    bVar1 = *(byte *)((long)plVar5 + 0xe);
    uVar11 = (ulong)bVar1;
    bVar2 = *(byte *)((long)plVar5 + 0xf);
    uVar9 = (ulong)bVar2;
    if (uVar11 != 0) {
      uVar9 = uVar9 - uVar11;
      *(undefined1 *)((long)plVar5 + 0xe) = 0;
      *(char *)((long)plVar5 + 0xf) = (char)uVar9;
      if (bVar2 != bVar1) {
        plVar17 = plVar5 + 2;
        uVar14 = uVar9;
        do {
          *plVar17 = plVar17[uVar11];
          uVar14 = uVar14 - 1;
          plVar17 = plVar17 + 1;
        } while (uVar14 != 0);
      }
    }
    *(char *)((long)plVar5 + 0xf) = (char)uVar9 + '\x01';
    plVar5[(uVar9 & 0xff) + 2] = (long)param_2;
    *plVar5 = *plVar5 + lVar16;
  }
  else {
    plVar5 = (long *)0x40;
    __Znwm();
    *(undefined4 *)(plVar5 + 1) = 4;
    if (*(char *)((long)param_2 + 0xc) == '\x03') {
      cVar7 = *(char *)((long)param_2 + 0xd) + '\x01';
    }
    else {
      cVar7 = '\0';
    }
    *plVar5 = *param_2;
    *(undefined1 *)((long)plVar5 + 0xc) = 3;
    *(char *)((long)plVar5 + 0xd) = cVar7;
    *(undefined2 *)((long)plVar5 + 0xe) = 0x100;
    plVar5[2] = (long)param_2;
    uVar6 = 2;
  }
  FUN_10ae6d470(aiStack_b8,param_1,uVar15,lVar16,plVar5,uVar6);
  return;
}



/* Entry: 10ae6d470; end: 10ae6df8f;  */

long * FUN_10ae6d470(int *param_1,long *param_2,int param_3,long param_4,long *param_5,ulong param_6
                    )

{
  bool bVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  iVar7 = (int)param_6;
  if (param_3 != 0) {
    uVar17 = param_3 - 2;
    uVar16 = (long)param_3;
    do {
      plVar15 = *(long **)(param_1 + (uVar16 - 1) * 2 + 2);
      iVar7 = (int)param_6;
      if (iVar7 == 1) {
        param_6 = (ulong)((long)uVar16 <= (long)*param_1);
        FUN_10ae6f6a0(plVar15,param_6,param_5,param_4);
        param_5 = plVar15;
      }
      else if (iVar7 == 2) {
        bVar3 = *(byte *)((long)plVar15 + 0xf);
        bVar4 = *(byte *)((long)plVar15 + 0xe);
        if ((ulong)bVar3 - (ulong)bVar4 < 6) {
          if ((long)*param_1 < (long)uVar16) {
            lVar9 = *plVar15;
            plVar6 = (long *)0x40;
            __Znwm();
            *(undefined4 *)(plVar6 + 1) = 4;
            *plVar6 = lVar9;
            uVar19 = *(undefined8 *)((long)plVar15 + 0x14);
            uVar18 = *(undefined8 *)((long)plVar15 + 0xc);
            uVar21 = *(undefined8 *)((long)plVar15 + 0x24);
            uVar20 = *(undefined8 *)((long)plVar15 + 0x1c);
            uVar23 = *(undefined8 *)((long)plVar15 + 0x34);
            uVar22 = *(undefined8 *)((long)plVar15 + 0x2c);
            *(undefined4 *)((long)plVar6 + 0x3c) = *(undefined4 *)((long)plVar15 + 0x3c);
            *(undefined8 *)((long)plVar6 + 0x34) = uVar23;
            *(undefined8 *)((long)plVar6 + 0x2c) = uVar22;
            *(undefined8 *)((long)plVar6 + 0x24) = uVar21;
            *(undefined8 *)((long)plVar6 + 0x1c) = uVar20;
            *(undefined8 *)((long)plVar6 + 0x14) = uVar19;
            *(undefined8 *)((long)plVar6 + 0xc) = uVar18;
            if (bVar4 == bVar3) {
              param_6 = 1;
            }
            else {
              plVar12 = plVar15 + (ulong)bVar4 + 2;
              do {
                piVar11 = (int *)(*plVar12 + 8);
                do {
                  cVar8 = '\x01';
                  bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                  if (bVar1) {
                    *piVar11 = *piVar11 + 4;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                plVar12 = plVar12 + 1;
              } while (plVar12 != plVar15 + (ulong)bVar3 + 2);
              param_6 = 1;
            }
          }
          else {
            param_6 = 0;
            plVar6 = plVar15;
          }
          bVar3 = *(byte *)((long)plVar6 + 0xe);
          uVar10 = (ulong)bVar3;
          bVar4 = *(byte *)((long)plVar6 + 0xf);
          uVar13 = (ulong)bVar4;
          if (uVar10 != 0) {
            uVar13 = uVar13 - uVar10;
            *(undefined1 *)((long)plVar6 + 0xe) = 0;
            *(char *)((long)plVar6 + 0xf) = (char)uVar13;
            if (bVar4 != bVar3) {
              plVar15 = plVar6 + 2;
              uVar14 = uVar13;
              do {
                *plVar15 = plVar15[uVar10];
                uVar14 = uVar14 - 1;
                plVar15 = plVar15 + 1;
              } while (uVar14 != 0);
            }
          }
          *(char *)((long)plVar6 + 0xf) = (char)uVar13 + '\x01';
          plVar6[(uVar13 & 0xff) + 2] = (long)param_5;
          *plVar6 = *plVar6 + param_4;
          param_5 = plVar6;
        }
        else {
          plVar15 = (long *)0x40;
          __Znwm();
          *(undefined4 *)(plVar15 + 1) = 4;
          if (*(char *)((long)param_5 + 0xc) == '\x03') {
            cVar8 = *(char *)((long)param_5 + 0xd) + '\x01';
          }
          else {
            cVar8 = '\0';
          }
          *plVar15 = *param_5;
          *(undefined1 *)((long)plVar15 + 0xc) = 3;
          *(char *)((long)plVar15 + 0xd) = cVar8;
          *(undefined2 *)((long)plVar15 + 0xe) = 0x100;
          plVar15[2] = (long)param_5;
          param_6 = 2;
          param_5 = plVar15;
        }
      }
      else if (iVar7 == 0) {
        *plVar15 = *plVar15 + param_4;
        if ((long)uVar16 < 2) {
          return plVar15;
        }
        piVar11 = param_1 + (ulong)uVar17 * 2 + 2;
        do {
          plVar15 = *(long **)piVar11;
          *plVar15 = *plVar15 + param_4;
          uVar17 = (int)uVar16 - 1;
          uVar16 = (ulong)uVar17;
          piVar11 = piVar11 + -2;
        } while (1 < (int)uVar17);
        return plVar15;
      }
      iVar7 = (int)param_6;
      uVar17 = uVar17 - 1;
      bVar1 = 1 < (long)uVar16;
      uVar16 = uVar16 - 1;
    } while (bVar1);
  }
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      puVar2 = (uint *)(param_2 + 1);
      do {
        uVar17 = *puVar2;
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar1) {
          *puVar2 = uVar17 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar17 & 0xfffffff9) == 0) {
        FUN_10ae6cd10();
      }
    }
    else {
      plVar15 = (long *)0x40;
      __Znwm();
      *(undefined4 *)(plVar15 + 1) = 4;
      *plVar15 = *param_5 + *param_2;
      bVar3 = *(char *)((long)param_2 + 0xd) + 1;
      *(undefined1 *)((long)plVar15 + 0xc) = 3;
      *(byte *)((long)plVar15 + 0xd) = bVar3;
      *(undefined2 *)((long)plVar15 + 0xe) = 0x200;
      plVar15[2] = (long)param_2;
      plVar15[3] = (long)param_5;
      param_5 = plVar15;
      if ((0xb < bVar3) &&
         (FUN_10ae6f110(), param_5 = plVar15, 0xb < *(byte *)((long)plVar15 + 0xd))) {
        FUN_10ae87b7c(3,&UNK_10f6d18a0,0x118,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10ae6d764);
        (*pcVar5)();
      }
    }
  }
  return param_5;
}



/* Entry: 10ae6df90; end: 10ae6e193;  */

void FUN_10ae6df90(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  lVar10 = param_1 + 0x10;
  bVar4 = *(byte *)(param_1 + 0xe);
  uVar8 = (ulong)bVar4;
  bVar5 = *(byte *)(param_1 + 0xf);
  plVar2 = (long *)(lVar10 + (ulong)bVar5 * 8);
  if (*(char *)(param_1 + 0xd) == '\x01') {
    if (bVar4 == bVar5) goto LAB_10ae6e168;
    plVar9 = (long *)(lVar10 + uVar8 * 8);
    do {
      lVar10 = *plVar9;
      puVar1 = (uint *)(lVar10 + 8);
      if (*puVar1 == 4) {
LAB_10ae6e04c:
        bVar4 = *(byte *)(lVar10 + 0xf);
        if ((uint)*(byte *)(lVar10 + 0xe) != (uint)bVar4) {
          plVar11 = (long *)(lVar10 + 0x10 + (ulong)*(byte *)(lVar10 + 0xe) * 8);
          do {
            puVar1 = (uint *)(*plVar11 + 8);
            if (*puVar1 == 4) {
LAB_10ae6e094:
              FUN_10ae6e194();
            }
            else {
              do {
                uVar3 = *puVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar7) {
                  *puVar1 = uVar3 - 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e094;
            }
            plVar11 = plVar11 + 1;
          } while (plVar11 != (long *)(lVar10 + 0x10 + (ulong)(uint)bVar4 * 8));
          if (lVar10 == 0) goto LAB_10ae6e0b0;
        }
        __ZdlPv(lVar10);
      }
      else {
        do {
          uVar3 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar3 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e04c;
      }
LAB_10ae6e0b0:
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  else if (*(char *)(param_1 + 0xd) == '\0') {
    if (bVar4 == bVar5) goto LAB_10ae6e168;
    plVar9 = (long *)(lVar10 + uVar8 * 8);
    do {
      puVar1 = (uint *)(*plVar9 + 8);
      if (*puVar1 == 4) {
LAB_10ae6e000:
        FUN_10ae6e194();
      }
      else {
        do {
          uVar3 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar3 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e000;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  else {
    if (bVar4 == bVar5) goto LAB_10ae6e168;
    plVar9 = (long *)(lVar10 + uVar8 * 8);
    do {
      lVar10 = *plVar9;
      puVar1 = (uint *)(lVar10 + 8);
      if (*puVar1 == 4) {
LAB_10ae6e0f4:
        bVar4 = *(byte *)(lVar10 + 0xf);
        if ((uint)*(byte *)(lVar10 + 0xe) != (uint)bVar4) {
          plVar11 = (long *)(lVar10 + 0x10 + (ulong)*(byte *)(lVar10 + 0xe) * 8);
          do {
            puVar1 = (uint *)(*plVar11 + 8);
            if (*puVar1 == 4) {
LAB_10ae6e13c:
              FUN_10ae6df90();
            }
            else {
              do {
                uVar3 = *puVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar7) {
                  *puVar1 = uVar3 - 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e13c;
            }
            plVar11 = plVar11 + 1;
          } while (plVar11 != (long *)(lVar10 + 0x10 + (ulong)(uint)bVar4 * 8));
          if (lVar10 == 0) goto LAB_10ae6e158;
        }
        __ZdlPv(lVar10);
      }
      else {
        do {
          uVar3 = *puVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar3 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar3 & 0xfffffff9) == 0) goto LAB_10ae6e0f4;
      }
LAB_10ae6e158:
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  if (param_1 == 0) {
    return;
  }
LAB_10ae6e168:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ae6e194; end: 10ae6e22b;  */

void FUN_10ae6e194(long param_1)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(byte *)(param_1 + 0xc) < 6) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18);
    if (*(byte *)(param_1 + 0xc) == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010ae6e1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
    pcVar1 = UNRECOVERED_JUMPTABLE + 8;
    if (*(uint *)pcVar1 != 4) {
      do {
        uVar2 = *(uint *)pcVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(uint *)pcVar1 = uVar2 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar2 & 0xfffffff9) != 0) goto LAB_10ae6e1b0;
    }
    if ((byte)UNRECOVERED_JUMPTABLE[0xc] < 6) {
      (**(code **)(UNRECOVERED_JUMPTABLE + 0x18))(UNRECOVERED_JUMPTABLE);
    }
    else {
      __ZdlPv(UNRECOVERED_JUMPTABLE);
    }
  }
LAB_10ae6e1b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ae6e22c; end: 10ae6e253;  */

long * FUN_10ae6e22c(long *param_1,long *param_2)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  code *pcVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 uVar15;
  uint *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long alStack_c8 [13];
  
  if (*(byte *)((long)param_2 + 0xd) <= *(byte *)((long)param_1 + 0xd)) {
    lVar22 = *param_2;
    bVar4 = *(byte *)((long)param_1 + 0xd);
    bVar5 = *(byte *)((long)param_2 + 0xd);
    uVar9 = (uint)bVar4 - (uint)bVar5;
    uVar23 = (ulong)uVar9;
    plVar24 = param_1;
    if ((int)uVar9 < 1) {
      uVar14 = 0;
    }
    else {
      uVar13 = 0;
      do {
        uVar14 = uVar13;
        if ((*(uint *)(plVar24 + 1) & 0xfffffffd) != 4) break;
        alStack_c8[uVar13 + 1] = (long)plVar24;
        uVar13 = uVar13 + 1;
        plVar24 = (long *)plVar24[(ulong)*(byte *)((long)plVar24 + 0xf) + 1];
        uVar14 = uVar23;
      } while (uVar23 != uVar13);
    }
    iVar12 = (int)uVar14;
    alStack_c8[0]._0_4_ = iVar12;
    if ((*(uint *)(plVar24 + 1) & 0xfffffffd) == 4) {
      alStack_c8[0]._0_4_ = iVar12 + 1;
    }
    if (iVar12 < (int)uVar9) {
      plVar11 = alStack_c8 + (uVar14 & 0xffffffff);
      do {
        plVar11 = plVar11 + 1;
        *plVar11 = (long)plVar24;
        plVar24 = (long *)plVar24[(ulong)*(byte *)((long)plVar24 + 0xf) + 1];
        uVar1 = (int)uVar14 + 1;
        uVar14 = (ulong)uVar1;
      } while ((int)uVar1 < (int)uVar9);
    }
    uVar13 = (ulong)*(byte *)((long)param_2 + 0xf);
    uVar14 = (ulong)*(byte *)((long)param_2 + 0xe);
    if ((*(byte *)((long)plVar24 + 0xf) + uVar13) - (*(byte *)((long)plVar24 + 0xe) + uVar14) < 7) {
      if ((int)uVar9 < (int)alStack_c8[0]) {
        iVar12 = 0;
        plVar11 = plVar24;
      }
      else {
        lVar21 = *plVar24;
        plVar11 = (long *)0x40;
        __Znwm();
        *(undefined4 *)(plVar11 + 1) = 4;
        *plVar11 = lVar21;
        uVar26 = *(undefined8 *)((long)plVar24 + 0x14);
        uVar25 = *(undefined8 *)((long)plVar24 + 0xc);
        uVar28 = *(undefined8 *)((long)plVar24 + 0x24);
        uVar27 = *(undefined8 *)((long)plVar24 + 0x1c);
        uVar30 = *(undefined8 *)((long)plVar24 + 0x34);
        uVar29 = *(undefined8 *)((long)plVar24 + 0x2c);
        *(undefined4 *)((long)plVar11 + 0x3c) = *(undefined4 *)((long)plVar24 + 0x3c);
        *(undefined8 *)((long)plVar11 + 0x34) = uVar30;
        *(undefined8 *)((long)plVar11 + 0x2c) = uVar29;
        *(undefined8 *)((long)plVar11 + 0x24) = uVar28;
        *(undefined8 *)((long)plVar11 + 0x1c) = uVar27;
        *(undefined8 *)((long)plVar11 + 0x14) = uVar26;
        *(undefined8 *)((long)plVar11 + 0xc) = uVar25;
        bVar6 = *(byte *)((long)plVar24 + 0xf);
        if ((uint)*(byte *)((long)plVar24 + 0xe) != (uint)bVar6) {
          plVar17 = plVar24 + (ulong)*(byte *)((long)plVar24 + 0xe) + 2;
          do {
            piVar2 = (int *)(*plVar17 + 8);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
                *piVar2 = *piVar2 + 4;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            plVar17 = plVar17 + 1;
          } while (plVar17 != plVar24 + (ulong)(uint)bVar6 + 2);
          uVar14 = (ulong)*(byte *)((long)param_2 + 0xe);
          uVar13 = (ulong)*(byte *)((long)param_2 + 0xf);
        }
        iVar12 = 1;
      }
      bVar6 = *(byte *)((long)plVar11 + 0xe);
      bVar3 = *(byte *)((long)plVar11 + 0xf);
      uVar18 = (ulong)bVar3;
      if (bVar6 != 0) {
        uVar18 = uVar18 - bVar6;
        *(undefined1 *)((long)plVar11 + 0xe) = 0;
        *(char *)((long)plVar11 + 0xf) = (char)uVar18;
        if (bVar3 != bVar6) {
          plVar24 = plVar11 + 2;
          uVar19 = uVar18;
          do {
            *plVar24 = plVar24[bVar6];
            uVar19 = uVar19 - 1;
            plVar24 = plVar24 + 1;
          } while (uVar19 != 0);
        }
      }
      uVar15 = (undefined1)uVar18;
      if ((int)uVar13 != (int)uVar14) {
        uVar18 = uVar18 & 0xffffffff;
        lVar21 = uVar13 * 8 + uVar14 * -8;
        plVar24 = param_2 + uVar14 + 2;
        do {
          plVar11[uVar18 + 2] = *plVar24;
          uVar18 = uVar18 + 1;
          lVar21 = lVar21 + -8;
          plVar24 = plVar24 + 1;
        } while (lVar21 != 0);
        uVar15 = (undefined1)uVar18;
      }
      *(undefined1 *)((long)plVar11 + 0xf) = uVar15;
      puVar16 = (uint *)(param_2 + 1);
      *plVar11 = *plVar11 + *param_2;
      if ((*puVar16 & 0xfffffffd) == 4) {
        __ZdlPv(param_2);
      }
      else {
        bVar6 = *(byte *)((long)param_2 + 0xf);
        if ((uint)*(byte *)((long)param_2 + 0xe) != (uint)bVar6) {
          plVar24 = param_2 + (ulong)*(byte *)((long)param_2 + 0xe) + 2;
          do {
            piVar2 = (int *)(*plVar24 + 8);
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
                *piVar2 = *piVar2 + 4;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            plVar24 = plVar24 + 1;
          } while (plVar24 != param_2 + (ulong)(uint)bVar6 + 2);
        }
        do {
          uVar9 = *puVar16;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar8) {
            *puVar16 = uVar9 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar9 & 0xfffffff9) == 0) {
          FUN_10ae6cd10(param_2);
        }
      }
    }
    else {
      iVar12 = 2;
      plVar11 = param_2;
    }
    if ((uint)bVar4 == (uint)bVar5) {
      plVar24 = plVar11;
      if (iVar12 != 0) {
        if (iVar12 == 1) {
          puVar16 = (uint *)(param_1 + 1);
          do {
            uVar9 = *puVar16;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar8) {
              *puVar16 = uVar9 - 4;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((uVar9 & 0xfffffff9) == 0) {
            FUN_10ae6cd10(param_1);
          }
        }
        else {
          plVar24 = (long *)0x40;
          __Znwm();
          *(undefined4 *)(plVar24 + 1) = 4;
          *plVar24 = *plVar11 + *param_1;
          bVar4 = *(char *)((long)param_1 + 0xd) + 1;
          *(undefined1 *)((long)plVar24 + 0xc) = 3;
          *(byte *)((long)plVar24 + 0xd) = bVar4;
          *(undefined2 *)((long)plVar24 + 0xe) = 0x200;
          plVar24[2] = (long)param_1;
          plVar24[3] = (long)plVar11;
          if ((0xb < bVar4) && (FUN_10ae6f110(), 0xb < *(byte *)((long)plVar24 + 0xd))) {
            FUN_10ae87b7c(3,&UNK_10f6d18a0,0x118,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10ae6e618);
            (*pcVar10)();
          }
        }
      }
    }
    else {
      plVar24 = alStack_c8;
      FUN_10ae6d470(plVar24,param_1,uVar23,lVar22,plVar11,iVar12);
    }
    return plVar24;
  }
  lVar22 = *param_1;
  bVar4 = *(byte *)((long)param_2 + 0xd);
  bVar5 = *(byte *)((long)param_1 + 0xd);
  uVar9 = (uint)bVar4 - (uint)bVar5;
  uVar23 = (ulong)uVar9;
  plVar24 = param_2;
  if ((int)uVar9 < 1) {
    uVar14 = 0;
  }
  else {
    uVar13 = 0;
    do {
      uVar14 = uVar13;
      if ((*(uint *)(plVar24 + 1) & 0xfffffffd) != 4) break;
      alStack_c8[uVar13 + 1] = (long)plVar24;
      uVar13 = uVar13 + 1;
      plVar24 = (long *)plVar24[(ulong)*(byte *)((long)plVar24 + 0xe) + 2];
      uVar14 = uVar23;
    } while (uVar23 != uVar13);
  }
  iVar12 = (int)uVar14;
  alStack_c8[0]._0_4_ = iVar12;
  if ((*(uint *)(plVar24 + 1) & 0xfffffffd) == 4) {
    alStack_c8[0]._0_4_ = iVar12 + 1;
  }
  if (iVar12 < (int)uVar9) {
    plVar11 = alStack_c8 + (uVar14 & 0xffffffff);
    do {
      plVar11 = plVar11 + 1;
      *plVar11 = (long)plVar24;
      plVar24 = (long *)plVar24[(ulong)*(byte *)((long)plVar24 + 0xe) + 2];
      uVar1 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar9);
  }
  uVar14 = (ulong)*(byte *)((long)param_1 + 0xf);
  uVar13 = (ulong)*(byte *)((long)param_1 + 0xe);
  if ((*(byte *)((long)plVar24 + 0xf) + uVar14) - (*(byte *)((long)plVar24 + 0xe) + uVar13) < 7) {
    if ((int)uVar9 < (int)alStack_c8[0]) {
      iVar12 = 0;
      plVar11 = plVar24;
    }
    else {
      lVar21 = *plVar24;
      plVar11 = (long *)0x40;
      __Znwm();
      *(undefined4 *)(plVar11 + 1) = 4;
      *plVar11 = lVar21;
      uVar26 = *(undefined8 *)((long)plVar24 + 0x14);
      uVar25 = *(undefined8 *)((long)plVar24 + 0xc);
      uVar28 = *(undefined8 *)((long)plVar24 + 0x24);
      uVar27 = *(undefined8 *)((long)plVar24 + 0x1c);
      uVar30 = *(undefined8 *)((long)plVar24 + 0x34);
      uVar29 = *(undefined8 *)((long)plVar24 + 0x2c);
      *(undefined4 *)((long)plVar11 + 0x3c) = *(undefined4 *)((long)plVar24 + 0x3c);
      *(undefined8 *)((long)plVar11 + 0x34) = uVar30;
      *(undefined8 *)((long)plVar11 + 0x2c) = uVar29;
      *(undefined8 *)((long)plVar11 + 0x24) = uVar28;
      *(undefined8 *)((long)plVar11 + 0x1c) = uVar27;
      *(undefined8 *)((long)plVar11 + 0x14) = uVar26;
      *(undefined8 *)((long)plVar11 + 0xc) = uVar25;
      bVar6 = *(byte *)((long)plVar24 + 0xf);
      if ((uint)*(byte *)((long)plVar24 + 0xe) != (uint)bVar6) {
        plVar17 = plVar24 + (ulong)*(byte *)((long)plVar24 + 0xe) + 2;
        do {
          piVar2 = (int *)(*plVar17 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = *piVar2 + 4;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar17 = plVar17 + 1;
        } while (plVar17 != plVar24 + (ulong)(uint)bVar6 + 2);
        uVar13 = (ulong)*(byte *)((long)param_1 + 0xe);
        uVar14 = (ulong)*(byte *)((long)param_1 + 0xf);
      }
      iVar12 = 1;
    }
    uVar18 = (ulong)*(byte *)((long)plVar11 + 0xf);
    if (uVar18 != 6) {
      uVar19 = (6 - uVar18) + (ulong)*(byte *)((long)plVar11 + 0xe);
      *(char *)((long)plVar11 + 0xe) = (char)uVar19;
      *(undefined1 *)((long)plVar11 + 0xf) = 6;
      if (uVar19 < 6) {
        uVar20 = 5;
        plVar24 = plVar11;
        do {
          plVar24[7] = plVar24[uVar18 + 1];
          uVar20 = uVar20 - 1;
          plVar24 = plVar24 + -1;
        } while (uVar19 <= uVar20);
      }
    }
    bVar6 = *(byte *)((long)plVar11 + 0xe);
    *(byte *)((long)plVar11 + 0xe) = ((char)uVar13 - (char)uVar14) + bVar6;
    if ((int)uVar14 != (int)uVar13) {
      lVar21 = uVar13 * 8 + uVar14 * -8;
      plVar24 = param_1 + uVar13 + 2;
      do {
        *(long *)((long)plVar11 + lVar21 + (ulong)bVar6 * 8 + 0x10) = *plVar24;
        lVar21 = lVar21 + 8;
        plVar24 = plVar24 + 1;
      } while (lVar21 != 0);
    }
    puVar16 = (uint *)(param_1 + 1);
    *plVar11 = *plVar11 + *param_1;
    if ((*puVar16 & 0xfffffffd) == 4) {
      __ZdlPv(param_1);
    }
    else {
      bVar6 = *(byte *)((long)param_1 + 0xf);
      if ((uint)*(byte *)((long)param_1 + 0xe) != (uint)bVar6) {
        plVar24 = param_1 + (ulong)*(byte *)((long)param_1 + 0xe) + 2;
        do {
          piVar2 = (int *)(*plVar24 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = *piVar2 + 4;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar24 = plVar24 + 1;
        } while (plVar24 != param_1 + (ulong)(uint)bVar6 + 2);
      }
      do {
        uVar9 = *puVar16;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar16,0x10);
        if (bVar8) {
          *puVar16 = uVar9 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar9 & 0xfffffff9) == 0) {
        FUN_10ae6cd10(param_1);
      }
    }
  }
  else {
    iVar12 = 2;
    plVar11 = param_1;
  }
  if ((uint)bVar4 == (uint)bVar5) {
    plVar24 = plVar11;
    if (iVar12 != 0) {
      if (iVar12 == 1) {
        puVar16 = (uint *)(param_2 + 1);
        do {
          uVar9 = *puVar16;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar8) {
            *puVar16 = uVar9 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar9 & 0xfffffff9) == 0) {
          FUN_10ae6cd10(param_2);
        }
      }
      else {
        plVar24 = (long *)0x40;
        __Znwm();
        *(undefined4 *)(plVar24 + 1) = 4;
        *plVar24 = *param_2 + *plVar11;
        bVar4 = *(char *)((long)plVar11 + 0xd) + 1;
        *(undefined1 *)((long)plVar24 + 0xc) = 3;
        *(byte *)((long)plVar24 + 0xd) = bVar4;
        *(undefined2 *)((long)plVar24 + 0xe) = 0x200;
        plVar24[2] = (long)plVar11;
        plVar24[3] = (long)param_2;
        if ((0xb < bVar4) && (FUN_10ae6f110(), 0xb < *(byte *)((long)plVar24 + 0xd))) {
          FUN_10ae87b7c(3,&UNK_10f6d18a0,0x118,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10ae6e9f4);
          (*pcVar10)();
        }
      }
    }
  }
  else {
    plVar24 = alStack_c8;
    FUN_10ae6cdec(plVar24,param_2,uVar23,lVar22,plVar11,iVar12);
  }
  return plVar24;
}



/* Entry: 10ae6e254; end: 10ae6e9f3;  */

long * FUN_10ae6e254(long *param_1,long *param_2)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  code *pcVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 uVar15;
  long *plVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long alStack_c8 [13];
  
  lVar21 = *param_2;
  bVar3 = *(byte *)((long)param_1 + 0xd);
  bVar4 = *(byte *)((long)param_2 + 0xd);
  uVar9 = (uint)bVar3 - (uint)bVar4;
  uVar22 = (ulong)uVar9;
  plVar23 = param_1;
  if ((int)uVar9 < 1) {
    uVar14 = 0;
  }
  else {
    uVar13 = 0;
    do {
      uVar14 = uVar13;
      if ((*(uint *)(plVar23 + 1) & 0xfffffffd) != 4) break;
      alStack_c8[uVar13 + 1] = (long)plVar23;
      uVar13 = uVar13 + 1;
      plVar23 = (long *)plVar23[(ulong)*(byte *)((long)plVar23 + 0xf) + 1];
      uVar14 = uVar22;
    } while (uVar22 != uVar13);
  }
  iVar12 = (int)uVar14;
  alStack_c8[0]._0_4_ = iVar12;
  if ((*(uint *)(plVar23 + 1) & 0xfffffffd) == 4) {
    alStack_c8[0]._0_4_ = iVar12 + 1;
  }
  if (iVar12 < (int)uVar9) {
    plVar11 = alStack_c8 + (uVar14 & 0xffffffff);
    do {
      plVar11 = plVar11 + 1;
      *plVar11 = (long)plVar23;
      plVar23 = (long *)plVar23[(ulong)*(byte *)((long)plVar23 + 0xf) + 1];
      uVar1 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar9);
  }
  uVar13 = (ulong)*(byte *)((long)param_2 + 0xf);
  uVar14 = (ulong)*(byte *)((long)param_2 + 0xe);
  if ((*(byte *)((long)plVar23 + 0xf) + uVar13) - (*(byte *)((long)plVar23 + 0xe) + uVar14) < 7) {
    if ((int)uVar9 < (int)alStack_c8[0]) {
      iVar12 = 0;
      plVar11 = plVar23;
    }
    else {
      lVar20 = *plVar23;
      plVar11 = (long *)0x40;
      __Znwm();
      *(undefined4 *)(plVar11 + 1) = 4;
      *plVar11 = lVar20;
      uVar25 = *(undefined8 *)((long)plVar23 + 0x14);
      uVar24 = *(undefined8 *)((long)plVar23 + 0xc);
      uVar27 = *(undefined8 *)((long)plVar23 + 0x24);
      uVar26 = *(undefined8 *)((long)plVar23 + 0x1c);
      uVar29 = *(undefined8 *)((long)plVar23 + 0x34);
      uVar28 = *(undefined8 *)((long)plVar23 + 0x2c);
      *(undefined4 *)((long)plVar11 + 0x3c) = *(undefined4 *)((long)plVar23 + 0x3c);
      *(undefined8 *)((long)plVar11 + 0x34) = uVar29;
      *(undefined8 *)((long)plVar11 + 0x2c) = uVar28;
      *(undefined8 *)((long)plVar11 + 0x24) = uVar27;
      *(undefined8 *)((long)plVar11 + 0x1c) = uVar26;
      *(undefined8 *)((long)plVar11 + 0x14) = uVar25;
      *(undefined8 *)((long)plVar11 + 0xc) = uVar24;
      bVar5 = *(byte *)((long)plVar23 + 0xf);
      if ((uint)*(byte *)((long)plVar23 + 0xe) != (uint)bVar5) {
        plVar16 = plVar23 + (ulong)*(byte *)((long)plVar23 + 0xe) + 2;
        do {
          piVar2 = (int *)(*plVar16 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = *piVar2 + 4;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar16 = plVar16 + 1;
        } while (plVar16 != plVar23 + (ulong)(uint)bVar5 + 2);
        uVar14 = (ulong)*(byte *)((long)param_2 + 0xe);
        uVar13 = (ulong)*(byte *)((long)param_2 + 0xf);
      }
      iVar12 = 1;
    }
    bVar5 = *(byte *)((long)plVar11 + 0xe);
    bVar6 = *(byte *)((long)plVar11 + 0xf);
    uVar18 = (ulong)bVar6;
    if (bVar5 != 0) {
      uVar18 = uVar18 - bVar5;
      *(undefined1 *)((long)plVar11 + 0xe) = 0;
      *(char *)((long)plVar11 + 0xf) = (char)uVar18;
      if (bVar6 != bVar5) {
        plVar23 = plVar11 + 2;
        uVar19 = uVar18;
        do {
          *plVar23 = plVar23[bVar5];
          uVar19 = uVar19 - 1;
          plVar23 = plVar23 + 1;
        } while (uVar19 != 0);
      }
    }
    uVar15 = (undefined1)uVar18;
    if ((int)uVar13 != (int)uVar14) {
      uVar18 = uVar18 & 0xffffffff;
      lVar20 = uVar13 * 8 + uVar14 * -8;
      plVar23 = param_2 + uVar14 + 2;
      do {
        plVar11[uVar18 + 2] = *plVar23;
        uVar18 = uVar18 + 1;
        lVar20 = lVar20 + -8;
        plVar23 = plVar23 + 1;
      } while (lVar20 != 0);
      uVar15 = (undefined1)uVar18;
    }
    *(undefined1 *)((long)plVar11 + 0xf) = uVar15;
    puVar17 = (uint *)(param_2 + 1);
    *plVar11 = *plVar11 + *param_2;
    if ((*puVar17 & 0xfffffffd) == 4) {
      __ZdlPv(param_2);
    }
    else {
      bVar5 = *(byte *)((long)param_2 + 0xf);
      if ((uint)*(byte *)((long)param_2 + 0xe) != (uint)bVar5) {
        plVar23 = param_2 + (ulong)*(byte *)((long)param_2 + 0xe) + 2;
        do {
          piVar2 = (int *)(*plVar23 + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = *piVar2 + 4;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          plVar23 = plVar23 + 1;
        } while (plVar23 != param_2 + (ulong)(uint)bVar5 + 2);
      }
      do {
        uVar9 = *puVar17;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar17,0x10);
        if (bVar8) {
          *puVar17 = uVar9 - 4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar9 & 0xfffffff9) == 0) {
        FUN_10ae6cd10(param_2);
      }
    }
  }
  else {
    iVar12 = 2;
    plVar11 = param_2;
  }
  if ((uint)bVar3 == (uint)bVar4) {
    plVar23 = plVar11;
    if (iVar12 != 0) {
      if (iVar12 == 1) {
        puVar17 = (uint *)(param_1 + 1);
        do {
          uVar9 = *puVar17;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar17,0x10);
          if (bVar8) {
            *puVar17 = uVar9 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar9 & 0xfffffff9) == 0) {
          FUN_10ae6cd10(param_1);
        }
      }
      else {
        plVar23 = (long *)0x40;
        __Znwm();
        *(undefined4 *)(plVar23 + 1) = 4;
        *plVar23 = *plVar11 + *param_1;
        bVar3 = *(char *)((long)param_1 + 0xd) + 1;
        *(undefined1 *)((long)plVar23 + 0xc) = 3;
        *(byte *)((long)plVar23 + 0xd) = bVar3;
        *(undefined2 *)((long)plVar23 + 0xe) = 0x200;
        plVar23[2] = (long)param_1;
        plVar23[3] = (long)plVar11;
        if ((0xb < bVar3) && (FUN_10ae6f110(), 0xb < *(byte *)((long)plVar23 + 0xd))) {
          FUN_10ae87b7c(3,&UNK_10f6d18a0,0x118,&UNK_10f6d18c6);
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10ae6e618);
          (*pcVar10)();
        }
      }
    }
  }
  else {
    plVar23 = alStack_c8;
    FUN_10ae6d470(plVar23,param_1,uVar22,lVar21,plVar11,iVar12);
  }
  return plVar23;
}



/* Entry: 10ae6e9f4; end: 10ae6ea6b;  */

undefined8 FUN_10ae6e9f4(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     ((ulong)*(byte *)(param_1 + 0xf) - (ulong)*(byte *)(param_1 + 0xe) == 1)) {
    if (param_2 != (long *)0x0) {
      plVar3 = *(long **)(param_1 + (ulong)*(byte *)(param_1 + 0xe) * 8 + 0x10);
      bVar1 = *(byte *)((long)plVar3 + 0xc);
      if (bVar1 == 1) {
        lVar2 = plVar3[2];
        bVar1 = *(byte *)(plVar3[3] + 0xc);
        plVar6 = (long *)plVar3[3];
      }
      else {
        lVar2 = 0;
        plVar6 = plVar3;
      }
      lVar4 = *plVar3;
      if (bVar1 < 6) {
        lVar5 = plVar6[2];
      }
      else {
        lVar5 = (long)plVar6 + 0xd;
      }
      *param_2 = lVar5 + lVar2;
      param_2[1] = lVar4;
    }
    return 1;
  }
  return 0;
}



/* Entry: 10ae6ea6c; end: 10ae6ed2b;  */

long * FUN_10ae6ea6c(ulong *param_1,ulong param_2,ulong param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  ulong *puVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  long *plStack_a8;
  undefined8 auStack_88 [12];
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 == 0) {
LAB_10ae6eae0:
    plVar9 = (long *)0x0;
  }
  else {
    uVar17 = (uint)*(byte *)((long)param_1 + 0xd);
    do {
      puVar8 = (ulong *)param_1[(ulong)*(byte *)((long)param_1 + 0xe) + 2];
      uVar11 = *puVar8;
      if (uVar11 <= param_2) {
        puVar14 = param_1 + (ulong)*(byte *)((long)param_1 + 0xe) + 3;
        do {
          param_2 = param_2 - uVar11;
          puVar8 = (ulong *)*puVar14;
          uVar11 = *puVar8;
          puVar14 = puVar14 + 1;
        } while (uVar11 <= param_2);
      }
      if (uVar11 < param_2 + param_3) goto LAB_10ae6eae0;
      bVar1 = 0 < (int)uVar17;
      param_1 = puVar8;
      uVar17 = uVar17 - 1;
    } while (bVar1);
    if (param_4 != (long *)0x0) {
      bVar6 = *(byte *)((long)puVar8 + 0xc);
      if (bVar6 == 1) {
        uVar13 = puVar8[2];
        puVar8 = (ulong *)puVar8[3];
        bVar6 = *(byte *)((long)puVar8 + 0xc);
      }
      else {
        uVar13 = 0;
      }
      if (bVar6 < 6) {
        uVar15 = puVar8[2];
      }
      else {
        uVar15 = (long)puVar8 + 0xd;
      }
      if (uVar11 < param_2) {
        plStack_a8 = (long *)&UNK_10f6d18b2;
        func_0x000109262df8();
        puStack_20 = &stack0xfffffffffffffff0;
        uStack_18 = 0x10ae6eb34;
        lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        bVar6 = *(byte *)((long)plStack_a8 + 0xd);
        uVar11 = (ulong)bVar6;
        plVar9 = plStack_a8;
        if (uVar11 != 0) {
          puVar16 = auStack_88;
          uVar13 = uVar11;
          do {
            plVar9 = (long *)plVar9[(ulong)*(byte *)((long)plVar9 + 0xf) + 1];
            if ((*(uint *)(plVar9 + 1) & 0xfffffffd) != 4) goto LAB_10ae6ebc0;
            *puVar16 = plVar9;
            uVar13 = uVar13 - 1;
            puVar16 = puVar16 + 1;
          } while (uVar13 != 0);
        }
        plVar9 = (long *)plVar9[(ulong)*(byte *)((long)plVar9 + 0xf) + 1];
        if (((*(uint *)(plVar9 + 1) & 0xfffffffd) == 4) &&
           (bVar7 = *(byte *)((long)plVar9 + 0xc), 5 < bVar7)) {
          uVar17 = 6;
          if (0xba < bVar7) {
            uVar17 = 0xc;
          }
          iVar2 = -0xe8d;
          if (0xba < bVar7) {
            iVar2 = -0xb800d;
          }
          uVar10 = (uint)bVar7;
          uVar3 = 3;
          if (0x42 < uVar10) {
            uVar3 = uVar17;
          }
          iVar4 = -0x1d;
          if (0x42 < uVar10) {
            iVar4 = iVar2;
          }
          lVar18 = *plVar9;
          uVar13 = (int)((uVar10 << (ulong)uVar3) + iVar4) - lVar18;
          if (uVar13 == 0) {
            plVar12 = (long *)0x0;
          }
          else {
            if (param_2 <= uVar13) {
              uVar13 = param_2;
            }
            plVar12 = (long *)((long)plVar9 + lVar18 + 0xd);
            *plVar9 = uVar13 + lVar18;
            *plStack_a8 = *plStack_a8 + uVar13;
            if (bVar6 != 0) {
              puVar16 = auStack_88;
              do {
                *(long *)*puVar16 = *(long *)*puVar16 + uVar13;
                uVar11 = uVar11 - 1;
                puVar16 = puVar16 + 1;
              } while (uVar11 != 0);
            }
          }
        }
        else {
LAB_10ae6ebc0:
          plVar12 = (long *)0x0;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
          ___stack_chk_fail();
          if (*(char *)((long)plStack_a8 + 0xc) != '\x03') {
            plStack_a8 = (long *)0x0;
            FUN_10ae6f7b0();
          }
          return plStack_a8;
        }
        return plVar12;
      }
      uVar5 = uVar11 - param_2;
      if (param_3 <= uVar11 - param_2) {
        uVar5 = param_3;
      }
      *param_4 = uVar15 + uVar13 + param_2;
      param_4[1] = uVar5;
    }
    plVar9 = (long *)0x1;
  }
  return plVar9;
}



/* Entry: 10ae6ed2c; end: 10ae6f10f;  */

void FUN_10ae6ed2c(long *param_1,long param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte bVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  
  if (param_3 == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(param_2 + 8) & 0xfffffffd) == 4;
  }
  lVar18 = param_2 + 0x10;
  bVar12 = *(byte *)(param_2 + 0xe);
  uVar9 = (ulong)bVar12;
  bVar3 = *(byte *)(param_2 + 0xf);
  if (*(char *)(param_2 + 0xd) == '\0') {
    if (bVar12 != bVar3) {
      plVar20 = (long *)(lVar18 + uVar9 * 8);
      do {
        plVar16 = (long *)*plVar20;
        if (bVar6 == false) {
          plVar24 = plVar16 + 1;
          do {
            cVar8 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar5) {
              *(int *)plVar24 = (int)*plVar24 + 4;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        lVar19 = *plVar16;
        plVar24 = (long *)*param_1;
        bVar12 = *(byte *)((long)plVar24 + 0xf);
        uVar9 = (ulong)bVar12;
        bVar4 = *(byte *)((long)plVar24 + 0xe);
        uVar10 = uVar9 - bVar4;
        if (uVar10 < 6) {
          if (bVar4 == 0) {
LAB_10ae6eeb4:
            *(char *)((long)plVar24 + 0xf) = (char)uVar9 + '\x01';
            plVar24[uVar9 + 2] = (long)plVar16;
          }
          else {
            *(undefined1 *)((long)plVar24 + 0xe) = 0;
            *(char *)((long)plVar24 + 0xf) = (char)uVar10;
            uVar9 = uVar10;
            if (bVar12 == bVar4) goto LAB_10ae6eeb4;
            plVar7 = plVar24 + 2;
            do {
              *plVar7 = plVar7[bVar4];
              uVar9 = uVar9 - 1;
              plVar7 = plVar7 + 1;
            } while (uVar9 != 0);
            *(char *)((long)plVar24 + 0xf) = (char)uVar10 + '\x01';
            (plVar24 + 2)[uVar10] = (long)plVar16;
          }
          *plVar24 = *plVar24 + lVar19;
          lVar17 = 1;
        }
        else {
          plVar7 = (long *)0x40;
          __Znwm();
          *(undefined4 *)(plVar7 + 1) = 4;
          if (*(char *)((long)plVar16 + 0xc) == '\x03') {
            cVar8 = *(char *)((long)plVar16 + 0xd) + '\x01';
          }
          else {
            cVar8 = '\0';
          }
          lVar22 = *plVar16;
          *plVar7 = lVar22;
          *(undefined1 *)((long)plVar7 + 0xc) = 3;
          *(char *)((long)plVar7 + 0xd) = cVar8;
          *(undefined2 *)((long)plVar7 + 0xe) = 0x100;
          plVar7[2] = (long)plVar16;
          *param_1 = (long)plVar7;
          plVar16 = (long *)param_1[1];
          if (plVar16 == (long *)0x0) {
            lVar17 = 0;
            lVar23 = 1;
LAB_10ae6f000:
            plVar16 = (long *)0x40;
            __Znwm();
            *(undefined4 *)(plVar16 + 1) = 4;
            *plVar16 = lVar22 + *plVar24;
            cVar8 = *(char *)((long)plVar24 + 0xd);
            *(undefined1 *)((long)plVar16 + 0xc) = 3;
            *(char *)((long)plVar16 + 0xd) = cVar8 + '\x01';
            *(undefined2 *)((long)plVar16 + 0xe) = 0x200;
            plVar16[2] = (long)plVar24;
            plVar16[3] = (long)plVar7;
            param_1[lVar23] = (long)plVar16;
          }
          else {
            pbVar11 = (byte *)((long)plVar16 + 0xf);
            uVar13 = (ulong)*pbVar11;
            pbVar14 = (byte *)((long)plVar16 + 0xe);
            uVar10 = (ulong)*pbVar14;
            uVar9 = uVar13 - uVar10;
            if (uVar9 < 6) {
              lVar17 = 0;
            }
            else {
              lVar22 = 1;
              plVar21 = plVar7;
              plVar24 = plVar16;
              plVar25 = param_1 + 2;
              do {
                lVar17 = lVar22;
                plVar7 = (long *)0x40;
                __Znwm();
                *(undefined4 *)(plVar7 + 1) = 4;
                if (*(char *)((long)plVar21 + 0xc) == '\x03') {
                  cVar8 = *(char *)((long)plVar21 + 0xd) + '\x01';
                }
                else {
                  cVar8 = '\0';
                }
                lVar22 = *plVar21;
                *plVar7 = lVar22;
                *(undefined1 *)((long)plVar7 + 0xc) = 3;
                *(char *)((long)plVar7 + 0xd) = cVar8;
                *(undefined2 *)((long)plVar7 + 0xe) = 0x100;
                plVar7[2] = (long)plVar21;
                plVar25[-1] = (long)plVar7;
                plVar16 = (long *)*plVar25;
                if (plVar16 == (long *)0x0) {
                  lVar23 = lVar17 + 1;
                  goto LAB_10ae6f000;
                }
                uVar13 = (ulong)*(byte *)((long)plVar16 + 0xf);
                uVar10 = (ulong)*(byte *)((long)plVar16 + 0xe);
                uVar9 = uVar13 - uVar10;
                lVar22 = lVar17 + 1;
                plVar21 = plVar7;
                plVar24 = plVar16;
                plVar25 = plVar25 + 1;
              } while (5 < uVar9);
              pbVar11 = (byte *)((long)plVar16 + 0xf);
              pbVar14 = (byte *)((long)plVar16 + 0xe);
            }
            bVar12 = (byte)uVar13;
            if ((int)uVar10 != 0) {
              *pbVar14 = 0;
              bVar12 = (byte)uVar9;
              *pbVar11 = bVar12;
              if ((int)uVar13 != (int)uVar10) {
                plVar24 = plVar16 + 2;
                do {
                  *plVar24 = plVar24[uVar10];
                  uVar9 = uVar9 - 1;
                  plVar24 = plVar24 + 1;
                } while (uVar9 != 0);
              }
            }
            *pbVar11 = bVar12 + 1;
            plVar16[(ulong)bVar12 + 2] = (long)plVar7;
            *plVar16 = *plVar16 + lVar19;
          }
          lVar17 = lVar17 + 2;
        }
        plVar16 = (long *)param_1[lVar17];
        if (plVar16 != (long *)0x0) {
          plVar24 = param_1 + lVar17 + 1;
          do {
            *plVar16 = *plVar16 + lVar19;
            plVar16 = (long *)*plVar24;
            plVar24 = plVar24 + 1;
          } while (plVar16 != (long *)0x0);
        }
        plVar20 = plVar20 + 1;
      } while (plVar20 != (long *)(lVar18 + (ulong)bVar3 * 8));
    }
  }
  else if (bVar12 != bVar3) {
    lVar19 = (ulong)bVar3 * 8 + uVar9 * -8;
    puVar15 = (undefined8 *)(lVar18 + uVar9 * 8);
    do {
      FUN_10ae6ed2c(param_1,*puVar15,bVar6);
      lVar19 = lVar19 + -8;
      puVar15 = puVar15 + 1;
    } while (lVar19 != 0);
  }
  if (param_3 != 0) {
    if (bVar6 == false) {
      puVar1 = (uint *)(param_2 + 8);
      do {
        uVar2 = *puVar1;
        cVar8 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar2 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar2 & 0xfffffff9) == 0) {
        while (bVar12 = *(byte *)(param_2 + 0xc), bVar12 == 1) {
          lVar18 = *(long *)(param_2 + 0x18);
          __ZdlPv(param_2);
          puVar1 = (uint *)(lVar18 + 8);
          param_2 = lVar18;
          if (*puVar1 != 4) {
            do {
              uVar2 = *puVar1;
              cVar8 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar2 - 4;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((uVar2 & 0xfffffff9) != 0) {
              return;
            }
          }
        }
        if (bVar12 < 4) {
          if (bVar12 == 2) {
            if (*(long *)(param_2 + 0x10) != 0) {
              puVar1 = (uint *)(*(long *)(param_2 + 0x10) + 8);
              do {
                uVar2 = *puVar1;
                cVar8 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = uVar2 - 4;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if ((uVar2 & 0xfffffff9) == 0) {
                FUN_10ae6cd10();
              }
            }
            func_0x00010ae701fc(*(undefined8 *)(param_2 + 0x18));
          }
          else if (bVar12 == 3) {
            lVar18 = param_2 + 0x10;
            bVar12 = *(byte *)(param_2 + 0xe);
            uVar9 = (ulong)bVar12;
            bVar3 = *(byte *)(param_2 + 0xf);
            plVar20 = (long *)(lVar18 + (ulong)bVar3 * 8);
            if (*(char *)(param_2 + 0xd) == '\x01') {
              if (bVar12 == bVar3) goto code_r0x00010bdbd7ac;
              plVar16 = (long *)(lVar18 + uVar9 * 8);
              do {
                lVar18 = *plVar16;
                puVar1 = (uint *)(lVar18 + 8);
                if (*puVar1 == 4) {
LAB_10ae6e04c:
                  bVar12 = *(byte *)(lVar18 + 0xf);
                  if ((uint)*(byte *)(lVar18 + 0xe) != (uint)bVar12) {
                    plVar24 = (long *)(lVar18 + 0x10 + (ulong)*(byte *)(lVar18 + 0xe) * 8);
                    do {
                      puVar1 = (uint *)(*plVar24 + 8);
                      if (*puVar1 == 4) {
LAB_10ae6e094:
                        FUN_10ae6e194();
                      }
                      else {
                        do {
                          uVar2 = *puVar1;
                          cVar8 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar6) {
                            *puVar1 = uVar2 - 4;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if ((uVar2 & 0xfffffff9) == 0) goto LAB_10ae6e094;
                      }
                      plVar24 = plVar24 + 1;
                    } while (plVar24 != (long *)(lVar18 + 0x10 + (ulong)(uint)bVar12 * 8));
                    if (lVar18 == 0) goto LAB_10ae6e0b0;
                  }
                  __ZdlPv(lVar18);
                }
                else {
                  do {
                    uVar2 = *puVar1;
                    cVar8 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar2 - 4;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((uVar2 & 0xfffffff9) == 0) goto LAB_10ae6e04c;
                }
LAB_10ae6e0b0:
                plVar16 = plVar16 + 1;
              } while (plVar16 != plVar20);
            }
            else if (*(char *)(param_2 + 0xd) == '\0') {
              if (bVar12 == bVar3) goto code_r0x00010bdbd7ac;
              plVar16 = (long *)(lVar18 + uVar9 * 8);
              do {
                puVar1 = (uint *)(*plVar16 + 8);
                if (*puVar1 == 4) {
LAB_10ae6e000:
                  FUN_10ae6e194();
                }
                else {
                  do {
                    uVar2 = *puVar1;
                    cVar8 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar2 - 4;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((uVar2 & 0xfffffff9) == 0) goto LAB_10ae6e000;
                }
                plVar16 = plVar16 + 1;
              } while (plVar16 != plVar20);
            }
            else {
              if (bVar12 == bVar3) goto code_r0x00010bdbd7ac;
              plVar16 = (long *)(lVar18 + uVar9 * 8);
              do {
                lVar18 = *plVar16;
                puVar1 = (uint *)(lVar18 + 8);
                if (*puVar1 == 4) {
LAB_10ae6e0f4:
                  bVar12 = *(byte *)(lVar18 + 0xf);
                  if ((uint)*(byte *)(lVar18 + 0xe) != (uint)bVar12) {
                    plVar24 = (long *)(lVar18 + 0x10 + (ulong)*(byte *)(lVar18 + 0xe) * 8);
                    do {
                      puVar1 = (uint *)(*plVar24 + 8);
                      if (*puVar1 == 4) {
LAB_10ae6e13c:
                        FUN_10ae6df90();
                      }
                      else {
                        do {
                          uVar2 = *puVar1;
                          cVar8 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar6) {
                            *puVar1 = uVar2 - 4;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if ((uVar2 & 0xfffffff9) == 0) goto LAB_10ae6e13c;
                      }
                      plVar24 = plVar24 + 1;
                    } while (plVar24 != (long *)(lVar18 + 0x10 + (ulong)(uint)bVar12 * 8));
                    if (lVar18 == 0) goto LAB_10ae6e158;
                  }
                  __ZdlPv(lVar18);
                }
                else {
                  do {
                    uVar2 = *puVar1;
                    cVar8 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar2 - 4;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if ((uVar2 & 0xfffffff9) == 0) goto LAB_10ae6e0f4;
                }
LAB_10ae6e158:
                plVar16 = plVar16 + 1;
              } while (plVar16 != plVar20);
            }
            if (param_2 == 0) {
              return;
            }
          }
        }
        else if (bVar12 == 4) {
          FUN_10ae6f8c8(param_2,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
        }
        else if (bVar12 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010ae6cdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_2 + 0x18))(param_2);
          return;
        }
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
    }
    else if (param_2 != 0) goto code_r0x00010bdbd7ac;
  }
  return;
}



/* Entry: 10ae6f110; end: 10ae6f1e7;  */

undefined1  [16] FUN_10ae6f110(ulong param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  byte bVar8;
  ulong uVar9;
  char cVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 auStack_128 [12];
  long lStack_c8;
  undefined8 *apuStack_90 [13];
  long lStack_28;
  
  ppuVar7 = apuStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *(undefined4 *)(puVar4 + 1) = 4;
  *puVar4 = 0;
  *(undefined4 *)((long)puVar4 + 0xc) = 3;
  apuStack_90[0xc] = (undefined8 *)0x0;
  apuStack_90[0xb] = (undefined8 *)0x0;
  apuStack_90[10] = (undefined8 *)0x0;
  apuStack_90[9] = (undefined8 *)0x0;
  apuStack_90[8] = (undefined8 *)0x0;
  apuStack_90[7] = (undefined8 *)0x0;
  apuStack_90[6] = (undefined8 *)0x0;
  apuStack_90[5] = (undefined8 *)0x0;
  apuStack_90[4] = (undefined8 *)0x0;
  apuStack_90[3] = (undefined8 *)0x0;
  apuStack_90[2] = (undefined8 *)0x0;
  apuStack_90[1] = (undefined8 *)0x0;
  apuStack_90[0] = puVar4;
  FUN_10ae6ed2c(apuStack_90,param_1,1);
  if (apuStack_90[0] != (undefined8 *)0x0) {
    lVar5 = 8;
    puVar4 = apuStack_90[0];
    do {
      puVar14 = (undefined8 *)((long)apuStack_90 + lVar5);
      if ((undefined8 *)*puVar14 == (undefined8 *)0x0) goto LAB_10ae6f1b4;
      lVar5 = lVar5 + 8;
      puVar4 = (undefined8 *)*puVar14;
    } while (lVar5 != 0x68);
    puVar4 = (undefined8 *)0x0;
  }
LAB_10ae6f1b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar16._8_8_ = param_1;
    auVar16._0_8_ = puVar4;
    return auVar16;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)ppuVar7;
  if (*(char *)((long)ppuVar7 + 0xd) == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      if ((*(uint *)(plVar6 + 1) & 0xfffffffd) != 4) goto LAB_10ae6f2f4;
      auStack_128[uVar12] = plVar6;
      uVar12 = uVar12 + 1;
      plVar6 = (long *)plVar6[(ulong)*(byte *)((long)plVar6 + 0xf) + 1];
    } while (*(char *)((long)plVar6 + 0xd) != '\0');
  }
  if ((((*(uint *)(plVar6 + 1) & 0xfffffffd) == 4) &&
      (plVar13 = (long *)plVar6[(ulong)*(byte *)((long)plVar6 + 0xf) + 1],
      5 < *(byte *)((long)plVar13 + 0xc))) && ((*(uint *)(plVar13 + 1) & 0xfffffffd) == 4)) {
    lVar5 = *plVar13;
    bVar8 = *(byte *)((long)plVar13 + 0xc);
    uVar11 = 6;
    if (0xba < bVar8) {
      uVar11 = 0xc;
    }
    iVar15 = -0xe8d;
    if (0xba < bVar8) {
      iVar15 = -0xb800d;
    }
    uVar1 = 3;
    if (0x42 < bVar8) {
      uVar1 = uVar11;
    }
    iVar2 = -0x1d;
    if (0x42 < bVar8) {
      iVar2 = iVar15;
    }
    if (param_1 <= (ulong)((int)(((uint)bVar8 << (ulong)uVar1) + iVar2) - lVar5)) {
      bVar8 = *(byte *)((long)plVar6 + 0xf);
      ppuVar7 = (undefined8 **)plVar6;
      if ((ulong)bVar8 - (ulong)*(byte *)((long)plVar6 + 0xe) == 1) {
        puVar4 = auStack_128 + (uVar12 & 0xffffffff);
        do {
          puVar4 = puVar4 + -1;
          __ZdlPv(ppuVar7);
          iVar15 = (int)uVar12;
          uVar12 = (ulong)(iVar15 - 1);
          if (iVar15 < 1) {
            ppuVar7 = (undefined8 **)0x0;
            goto LAB_10ae6f2f8;
          }
          ppuVar7 = (undefined8 **)*puVar4;
          bVar8 = *(byte *)((long)ppuVar7 + 0xf);
        } while ((ulong)bVar8 - (ulong)*(byte *)((long)ppuVar7 + 0xe) == 1);
      }
      *(byte *)((long)ppuVar7 + 0xf) = bVar8 - 1;
      *ppuVar7 = (undefined8 *)((long)*ppuVar7 - lVar5);
      if (0 < (int)uVar12) {
        uVar9 = (uVar12 & 0xffffffff) + 1;
        puVar4 = auStack_128 + (uVar12 & 0xffffffff);
        do {
          puVar4 = puVar4 + -1;
          ppuVar7 = (undefined8 **)*puVar4;
          *ppuVar7 = (undefined8 *)((long)*ppuVar7 - lVar5);
          uVar9 = uVar9 - 1;
        } while (1 < uVar9);
      }
      do {
        if ((ulong)*(byte *)((long)ppuVar7 + 0xf) - (ulong)*(byte *)((long)ppuVar7 + 0xe) != 1)
        break;
        cVar10 = *(char *)((long)ppuVar7 + 0xd);
        ppuVar7 = (undefined8 **)ppuVar7[(ulong)*(byte *)((long)ppuVar7 + 0xf) + 1];
        __ZdlPv();
      } while (cVar10 != '\0');
      goto LAB_10ae6f2f8;
    }
  }
LAB_10ae6f2f4:
  plVar13 = (long *)0x0;
LAB_10ae6f2f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    plVar6 = (long *)ppuVar7;
    if ((long *)0xff2 < ppuVar7) {
      plVar6 = (long *)0xff3;
    }
    puVar3 = (undefined1 *)0x20;
    if ((long *)0x13 < ppuVar7) {
      puVar3 = (undefined1 *)((long)plVar6 + 0xd);
    }
    uVar12 = 0xfffffffffffffff8;
    if ((undefined1 *)0x200 < puVar3) {
      uVar12 = 0xffffffffffffffc0;
    }
    lVar5 = 8;
    if ((undefined1 *)0x200 < puVar3) {
      lVar5 = 0x40;
    }
    puVar14 = (undefined8 *)((ulong)(puVar3 + lVar5 + -1) & uVar12);
    puVar4 = puVar14;
    __Znwm();
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 1) = 4;
    lVar5 = 3;
    if ((undefined8 *)0x200 < puVar14) {
      lVar5 = 6;
    }
    cVar10 = '\x02';
    if ((undefined8 *)0x200 < puVar14) {
      cVar10 = ':';
    }
    *(char *)((long)puVar4 + 0xc) = (char)((ulong)puVar14 >> lVar5) + cVar10;
    auVar18._8_8_ = param_1;
    auVar18._0_8_ = puVar4;
    return auVar18;
  }
  auVar17._8_8_ = plVar13;
  auVar17._0_8_ = ppuVar7;
  return auVar17;
}



/* Entry: 10ae6f1e8; end: 10ae6f3ff;  */

void FUN_10ae6f1e8(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte bVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  ulong *puVar14;
  ulong auStack_98 [12];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1;
  if (*(char *)((long)param_1 + 0xd) == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      if ((*(uint *)(plVar4 + 1) & 0xfffffffd) != 4) goto LAB_10ae6f2f8;
      auStack_98[uVar9] = (ulong)plVar4;
      uVar9 = uVar9 + 1;
      plVar4 = (long *)plVar4[(ulong)*(byte *)((long)plVar4 + 0xf) + 1];
    } while (*(char *)((long)plVar4 + 0xd) != '\0');
  }
  if ((((*(uint *)(plVar4 + 1) & 0xfffffffd) == 4) &&
      (plVar10 = (long *)plVar4[(ulong)*(byte *)((long)plVar4 + 0xf) + 1],
      5 < *(byte *)((long)plVar10 + 0xc))) && ((*(uint *)(plVar10 + 1) & 0xfffffffd) == 4)) {
    lVar13 = *plVar10;
    bVar5 = *(byte *)((long)plVar10 + 0xc);
    uVar8 = 6;
    if (0xba < bVar5) {
      uVar8 = 0xc;
    }
    iVar12 = -0xe8d;
    if (0xba < bVar5) {
      iVar12 = -0xb800d;
    }
    uVar1 = 3;
    if (0x42 < bVar5) {
      uVar1 = uVar8;
    }
    iVar2 = -0x1d;
    if (0x42 < bVar5) {
      iVar2 = iVar12;
    }
    if (param_2 <= (ulong)((int)(((uint)bVar5 << (ulong)uVar1) + iVar2) - lVar13)) {
      bVar5 = *(byte *)((long)plVar4 + 0xf);
      param_1 = plVar4;
      if ((ulong)bVar5 - (ulong)*(byte *)((long)plVar4 + 0xe) == 1) {
        puVar14 = auStack_98 + (uVar9 & 0xffffffff);
        do {
          puVar14 = puVar14 + -1;
          __ZdlPv(param_1);
          iVar12 = (int)uVar9;
          uVar9 = (ulong)(iVar12 - 1);
          if (iVar12 < 1) {
            param_1 = (long *)0x0;
            goto LAB_10ae6f2f8;
          }
          param_1 = (long *)*puVar14;
          bVar5 = *(byte *)((long)param_1 + 0xf);
        } while ((ulong)bVar5 - (ulong)*(byte *)((long)param_1 + 0xe) == 1);
      }
      *(byte *)((long)param_1 + 0xf) = bVar5 - 1;
      *param_1 = *param_1 - lVar13;
      if (0 < (int)uVar9) {
        uVar6 = (uVar9 & 0xffffffff) + 1;
        puVar14 = auStack_98 + (uVar9 & 0xffffffff);
        do {
          puVar14 = puVar14 + -1;
          param_1 = (long *)*puVar14;
          *param_1 = *param_1 - lVar13;
          uVar6 = uVar6 - 1;
        } while (1 < uVar6);
      }
      do {
        if ((ulong)*(byte *)((long)param_1 + 0xf) - (ulong)*(byte *)((long)param_1 + 0xe) != 1)
        break;
        cVar7 = *(char *)((long)param_1 + 0xd);
        param_1 = (long *)param_1[(ulong)*(byte *)((long)param_1 + 0xf) + 1];
        __ZdlPv();
      } while (cVar7 != '\0');
    }
  }
LAB_10ae6f2f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    plVar4 = param_1;
    if ((long *)0xff2 < param_1) {
      plVar4 = (long *)0xff3;
    }
    uVar9 = 0x20;
    if ((long *)0x13 < param_1) {
      uVar9 = (long)plVar4 + 0xd;
    }
    uVar6 = 0xfffffffffffffff8;
    if (0x200 < uVar9) {
      uVar6 = 0xffffffffffffffc0;
    }
    lVar13 = 8;
    if (0x200 < uVar9) {
      lVar13 = 0x40;
    }
    puVar11 = (undefined8 *)((uVar9 + lVar13) - 1 & uVar6);
    puVar3 = puVar11;
    __Znwm();
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 1) = 4;
    lVar13 = 3;
    if ((undefined8 *)0x200 < puVar11) {
      lVar13 = 6;
    }
    cVar7 = '\x02';
    if ((undefined8 *)0x200 < puVar11) {
      cVar7 = ':';
    }
    *(char *)((long)puVar3 + 0xc) = (char)((ulong)puVar11 >> lVar13) + cVar7;
    return;
  }
  return;
}



/* Entry: 10ae6f400; end: 10ae6f497;  */

void FUN_10ae6f400(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  
  uVar1 = param_1;
  if (0xff2 < param_1) {
    uVar1 = 0xff3;
  }
  uVar2 = 0x20;
  if (0x13 < param_1) {
    uVar2 = uVar1 + 0xd;
  }
  uVar1 = 0xfffffffffffffff8;
  if (0x200 < uVar2) {
    uVar1 = 0xffffffffffffffc0;
  }
  lVar3 = 8;
  if (0x200 < uVar2) {
    lVar3 = 0x40;
  }
  puVar6 = (undefined8 *)((uVar2 + lVar3) - 1 & uVar1);
  puVar4 = puVar6;
  __Znwm();
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 1) = 4;
  lVar3 = 3;
  if ((undefined8 *)0x200 < puVar6) {
    lVar3 = 6;
  }
  cVar5 = '\x02';
  if ((undefined8 *)0x200 < puVar6) {
    cVar5 = ':';
  }
  *(char *)((long)puVar4 + 0xc) = (char)((ulong)puVar6 >> lVar3) + cVar5;
  return;
}



/* Entry: 10ae6f498; end: 10ae6f61b;  */

void FUN_10ae6f498(long param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (*(char *)(param_1 + 0xc) == '\x01') {
    lVar4 = *(long *)(param_1 + 0x18);
    param_2 = *(long *)(param_1 + 0x10) + param_2;
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar2 = (uint *)(param_1 + 8);
    do {
      uVar3 = *puVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = uVar3 - 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    param_1 = lVar4;
    if ((uVar3 & 0xfffffff9) == 0) {
      FUN_10ae6cd10();
    }
  }
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  *puVar7 = param_3;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 1) = 4;
  *(undefined1 *)((long)puVar7 + 0xc) = 1;
  puVar7[2] = param_2;
  puVar7[3] = param_1;
  return;
}


