/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108163bd8; end: 108163c8b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108163bd8(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long alStack_40 [2];
  
  (**(code **)(*param_3 + 0x28))(alStack_40,param_3,param_4);
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  if (alStack_40[0] != 0) {
    piVar1 = (int *)(alStack_40[0] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(puVar4 + 1) = 1;
  *puVar4 = &PTR_FUN_110a28da0;
  alStack_40[1] = 0;
  puVar4[2] = alStack_40[0];
  puVar4[3] = uVar5;
  FUN_1081636b0(alStack_40 + 1);
  *param_1 = puVar4;
  FUN_1081636b0(alStack_40);
  return;
}



/* Entry: 108163c8c; end: 108163ceb;  */

void FUN_108163c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  (**(code **)(param_1 + 0x50))(param_3,&uStack_28);
  if ((int)uVar1 != 0) {
    func_0x00010742a308(*(undefined8 *)(param_1 + 0x88),uStack_28);
    (**(code **)(param_1 + 0x58))(param_3,uStack_28,**(undefined8 **)(param_1 + 0x88));
  }
  return;
}



/* Entry: 108163cec; end: 108163d6b;  */

undefined8
FUN_108163cec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x78) * *(long *)(param_1 + 0x80);
  (**(code **)(param_1 + 0x58))
            (param_4,*(long *)(param_1 + 0x78),*(long *)(param_1 + 0x60) + lVar2 * 4);
  if ((int)param_4 == 0) {
    return param_4;
  }
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x60) + lVar2 * 4;
    lVar4 = *(long *)(param_1 + 0x78);
    _memcmp(lVar1,lVar1 + lVar4 * -4,lVar4 << 2);
    if ((int)lVar1 == 0) {
      lVar2 = lVar2 - lVar4;
      goto LAB_108163d5c;
    }
  }
  *(long *)(param_1 + 0x80) = lVar3 + 1;
LAB_108163d5c:
  *param_5 = (int)lVar2;
  return param_4;
}



/* Entry: 108163d6c; end: 108163f17;  */

undefined *** FUN_108163d6c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = param_3;
    FUN_108154b58(param_3,&UNK_10f47d2f3);
    ppuStack_e8 = (undefined **)((ulong)ppuStack_e8 & 0xffffffffffffff00);
    FUN_108158ab4();
    if ((uVar4 & 1) == 0) {
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      ppuStack_e8 = &PTR_FUN_110a28d00;
      pcStack_98 = FUN_108164168;
      pcStack_90 = FUN_1081641a4;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_60 = param_4;
      FUN_1081604c8(param_1,param_2,param_3,&ppuStack_e8);
      uVar3 = (uint)param_1;
      FUN_108161ccc();
    }
    else {
      uStack_58 = 0;
      uStack_50 = 0;
      func_0x0001072f8f08(&ppuStack_e8,&uStack_58,3);
      func_0x0001074714f0(param_4,&ppuStack_e8);
      uVar1 = 0;
      func_0x0001056d1ce4();
      func_0x00010816433c();
      FUN_108154e4c();
      func_0x000108164318();
      uVar2 = uVar1;
      func_0x00010816433c();
      FUN_108154e4c();
      func_0x000108164318();
      uVar3 = uVar2;
      func_0x00010816433c();
      FUN_108154e4c();
      func_0x000108164318();
      uVar3 = uVar1 | uVar2 | uVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined ***)(ulong)(uVar3 & 1);
  }
  ___stack_chk_fail();
  pppuVar5 = &ppuStack_e8;
  FUN_108161ccc();
  func_0x000108164334();
  func_0x0001056d1ce4(pppuVar5 + 0xc);
  *pppuVar5 = &PTR_DAT_110a289d8;
  FUN_108160fd0(pppuVar5 + 4);
  FUN_108160f8c(pppuVar5 + 1);
  return pppuVar5;
}



/* Entry: 108163f18; end: 108163f1b;  */

undefined8 * FUN_108163f18(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 0xc);
  *param_1 = &PTR_DAT_110a289d8;
  FUN_108160fd0(param_1 + 4);
  FUN_108160f8c(param_1 + 1);
  return param_1;
}



/* Entry: 108163f1c; end: 108164003;  */

void FUN_108163f1c(long param_1,long param_2,ulong *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lStack_50;
  undefined8 uStack_48;
  
  puVar4 = param_3;
  FUN_10815ca50();
  if (puVar4 != (ulong *)0x0) {
    *(undefined1 *)(param_1 + 0x29) = 1;
    uVar6 = *(undefined8 *)(param_2 + 0x48);
    if ((*puVar4 & 7) == 0) {
      pbVar5 = (byte *)((long)puVar4 + 1);
    }
    else {
      pbVar5 = (byte *)((*puVar4 & 0xfffffffffffffff8) + 8);
    }
    FUN_1083a3348(&uStack_48,pbVar5);
    piVar1 = (int *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_50 = param_1;
    FUN_10815cedc(uVar6,&uStack_48,param_4,&lStack_50);
    FUN_10815db6c(&lStack_50);
    FUN_1083a3ca0(uStack_48);
  }
  FUN_108163d6c(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 108164004; end: 108164017;  */

void FUN_108164004(void)

{
  FUN_108161ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108164018; end: 10816403f;  */

undefined8 * FUN_108164018(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 10);
  *param_1 = &PTR_DAT_110a289a8;
  FUN_108160fd0(param_1 + 5);
  FUN_108160f8c(param_1 + 2);
  return param_1;
}



/* Entry: 108164040; end: 108164053;  */

void FUN_108164040(void)

{
  FUN_108164018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108164054; end: 108164167;  */

byte FUN_108164054(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined8 *puVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar9 = param_1;
  FUN_1081608d0();
  puVar11 = (undefined8 *)(*(long *)(param_1 + 0x50) + (uVar9 >> 0x20) * 4);
  puVar12 = (undefined8 *)**(undefined8 **)(param_1 + 0x70);
  if ((int)(uVar9 >> 0x20) == (int)param_2) {
    lVar14 = *(long *)(param_1 + 0x68);
    lVar13 = lVar14 << 2;
    puVar7 = puVar12;
    _memcmp(puVar12,puVar11,lVar13);
    if ((int)puVar7 == 0) {
      bVar8 = 0;
    }
    else {
      if (lVar14 != 0) {
        _memmove(puVar12,puVar11,lVar13);
      }
      bVar8 = 1;
    }
  }
  else {
    bVar8 = 0;
    fVar6 = (float)uVar9;
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x50) + (param_2 & 0xffffffff) * 4);
    for (uVar9 = *(ulong *)(param_1 + 0x68); 3 < uVar9; uVar9 = uVar9 - 4) {
      fVar16 = (float)*puVar11;
      fVar17 = (float)((ulong)*puVar11 >> 0x20);
      fVar18 = (float)puVar11[1];
      fVar19 = (float)((ulong)puVar11[1] >> 0x20);
      fVar16 = fVar16 + ((float)*puVar7 - fVar16) * fVar6;
      fVar17 = fVar17 + ((float)((ulong)*puVar7 >> 0x20) - fVar17) * fVar6;
      fVar18 = fVar18 + ((float)puVar7[1] - fVar18) * fVar6;
      fVar19 = fVar19 + ((float)((ulong)puVar7[1] >> 0x20) - fVar19) * fVar6;
      iVar2 = -(uint)(fVar16 == (float)*puVar12);
      iVar3 = -(uint)(fVar17 == (float)((ulong)*puVar12 >> 0x20));
      iVar4 = -(uint)(fVar18 == (float)puVar12[1]);
      iVar5 = -(uint)(fVar19 == (float)((ulong)puVar12[1] >> 0x20));
      auVar1[1] = ~(byte)((uint)iVar2 >> 8);
      auVar1[0] = ~(byte)iVar2;
      auVar1[2] = ~(byte)((uint)iVar2 >> 0x10);
      auVar1[3] = ~(byte)((uint)iVar2 >> 0x18);
      auVar1[4] = ~(byte)iVar3;
      auVar1[5] = ~(byte)((uint)iVar3 >> 8);
      auVar1[6] = ~(byte)((uint)iVar3 >> 0x10);
      auVar1[7] = ~(byte)((uint)iVar3 >> 0x18);
      auVar1[8] = ~(byte)iVar4;
      auVar1[9] = ~(byte)((uint)iVar4 >> 8);
      auVar1[10] = ~(byte)((uint)iVar4 >> 0x10);
      auVar1[0xb] = ~(byte)((uint)iVar4 >> 0x18);
      auVar1[0xc] = ~(byte)iVar5;
      auVar1[0xd] = ~(byte)((uint)iVar5 >> 8);
      auVar1[0xe] = ~(byte)((uint)iVar5 >> 0x10);
      auVar1[0xf] = ~(byte)((uint)iVar5 >> 0x18);
      cVar15 = NEON_umaxv(auVar1,1);
      bVar8 = bVar8 | cVar15 != '\0';
      puVar12[1] = CONCAT44(fVar19,fVar18);
      *puVar12 = CONCAT44(fVar17,fVar16);
      puVar7 = puVar7 + 2;
      puVar11 = puVar11 + 2;
      puVar12 = puVar12 + 2;
    }
    for (uVar10 = 0; uVar9 != uVar10; uVar10 = uVar10 + 1) {
      fVar16 = *(float *)((long)puVar11 + uVar10 * 4);
      fVar16 = fVar16 + fVar6 * (*(float *)((long)puVar7 + uVar10 * 4) - fVar16);
      bVar8 = bVar8 | fVar16 != *(float *)((long)puVar12 + uVar10 * 4);
      *(float *)((long)puVar12 + uVar10 * 4) = fVar16;
    }
  }
  return bVar8;
}



/* Entry: 108164168; end: 1081641a3;  */

bool FUN_108164168(ulong *param_1,undefined8 *param_2)

{
  FUN_108155f00();
  if (param_1 != (ulong *)0x0) {
    *param_2 = *(undefined8 *)(*param_1 & 0xfffffffffffffff8);
  }
  return param_1 != (ulong *)0x0;
}



/* Entry: 1081641a4; end: 10816422f;  */

bool FUN_1081641a4(ulong *param_1,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_108155f00();
  if ((param_1 == (ulong *)0x0) || (*(long *)(*param_1 & 0xfffffffffffffff8) != param_2)) {
    bVar1 = false;
  }
  else {
    param_2 = param_2 + 1;
    lVar3 = 8;
    do {
      param_2 = param_2 + -1;
      bVar1 = param_2 == 0;
      if (param_2 == 0) {
        return true;
      }
      uVar2 = (*param_1 & 0xfffffffffffffff8) + lVar3;
      FUN_10815c694(uVar2,param_3);
      lVar3 = lVar3 + 8;
      param_3 = param_3 + 4;
    } while ((uVar2 & 1) != 0);
  }
  return bVar1;
}



/* Entry: 108164230; end: 108164317;  */

void FUN_108164230(void)

{
  func_0x000108164344();
  return;
}



/* Entry: 108164318; end: 10816434f;  */

long FUN_108164318(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  
  FUN_10815ca50();
  if (param_3 != (ulong *)0x0) {
    *(undefined1 *)(unaff_x20 + 0x29) = 1;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x48);
    if ((*param_3 & 7) == 0) {
      pbVar4 = (byte *)((long)param_3 + 1);
    }
    else {
      pbVar4 = (byte *)((*param_3 & 0xfffffffffffffff8) + 8);
    }
    FUN_1083a3348(&ppuStack_a0,pbVar4);
    piVar1 = (int *)(unaff_x20 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10815d1d4(uVar5,&ppuStack_a0,param_4,&stack0xffffffffffffffb8);
    FUN_10815db6c(&stack0xffffffffffffffb8);
    FUN_1083a3ca0(ppuStack_a0);
  }
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_68 = 1;
  uStack_5c = 0;
  uStack_64 = 0;
  ppuStack_a0 = &PTR_FUN_110a28a48;
  uStack_50 = param_4;
  FUN_1081604c8();
  FUN_108160a4c(&ppuStack_a0);
  return unaff_x20;
}



/* Entry: 108164350; end: 108164627;  */

void FUN_108164350(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar8 = *param_2;
  uStack_98 = 0;
  plVar7 = (long *)0x58;
  __Znwm();
  uStack_68 = *param_4;
  *param_4 = 0;
  uStack_88 = 0;
  FUN_1081874f0(&lStack_60,&uStack_68);
  plVar7[2] = 0;
  *(undefined4 *)(plVar7 + 1) = 1;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(undefined2 *)(plVar7 + 5) = 0;
  *plVar7 = (long)&PTR_DAT_110a28e50;
  plVar7[6] = lStack_60;
  lStack_60 = 0;
  FUN_108164628(&lStack_60);
  FUN_108154cb4(&uStack_68);
  *plVar7 = (long)&PTR_SUB_110a28de8;
  if ((bRam0000000113729d38 & 1) == 0) {
    iVar6 = 0x13729d38;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1083a3348(&plStack_58,&UNK_10df03bb3);
      FUN_108164880(&plStack_80,&plStack_58);
      plVar4 = plStack_80;
      plStack_80 = (long *)0x0;
      FUN_108154bd8(&plStack_80);
      FUN_1083a3ca0(plStack_58);
      plRam0000000113729d30 = plVar4;
      ___cxa_guard_release(0x113729d38);
    }
  }
  plVar4 = plRam0000000113729d30;
  if (plRam0000000113729d30 != (long *)0x0) {
    plVar1 = plRam0000000113729d30 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7[7] = (long)plVar4;
  plStack_80 = param_3;
  lStack_78 = lVar8;
  plStack_70 = plVar7;
  FUN_108164708(&plStack_80,0,plVar7 + 8);
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  FUN_108164708();
  plStack_90 = plVar7;
  FUN_108154cb4(&uStack_88);
  FUN_10816040c(plVar7 + 2);
  FUN_108164674(&uStack_98,plVar7 + 6);
  plStack_90 = (long *)0x0;
  if ((plVar7[2] == plVar7[3]) && ((*(byte *)((long)plVar7 + 0x29) & 1) == 0)) {
    plStack_58 = plVar7;
    (**(code **)(*plVar7 + 0x18))(0,plVar7);
  }
  else {
    plStack_58 = (long *)0x0;
    plStack_80 = plVar7;
    FUN_108155570(*(undefined8 *)(lVar8 + 0x70),&plStack_80);
    FUN_108155920(&plStack_80);
  }
  FUN_1081646bc(&plStack_58);
  FUN_1081646bc(&plStack_90);
  uVar5 = uStack_98;
  uStack_98 = 0;
  *param_1 = uVar5;
  FUN_108164628(&uStack_98);
  return;
}



/* Entry: 108164628; end: 10816464f;  */

undefined8 * FUN_108164628(undefined8 *param_1)

{
  FUN_108164650(*param_1);
  return param_1;
}



/* Entry: 108164650; end: 108164673;  */

void FUN_108164650(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081649a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108164674; end: 1081646bb;  */

long * FUN_108164674(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000108164988(param_1);
  }
  return param_1;
}



/* Entry: 1081646bc; end: 108164707;  */

long * FUN_1081646bc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108164708; end: 108164757;  */

undefined8 * FUN_108164708(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = *param_1;
  FUN_108169570(uVar3);
  FUN_108154e4c();
  FUN_108161330(uVar2,uVar1,uVar3,param_3);
  return param_1;
}



/* Entry: 108164758; end: 1081647af;  */

undefined8 * FUN_108164758(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a28e50;
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 1081647b0; end: 1081647c3;  */

void FUN_1081647b0(void)

{
  func_0x000108164788();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081647c4; end: 10816487f;  */

void FUN_1081647c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_40 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) / 100.0,
                       (float)*(undefined8 *)(param_1 + 0x40) / 100.0);
  uStack_38 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) / 100.0,
                       (float)*(undefined8 *)(param_1 + 0x48) / 100.0);
  uStack_30 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) / 100.0,
                       (float)*(undefined8 *)(param_1 + 0x50) / 100.0);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_108346318(&uStack_58,&uStack_40,0x18);
  uStack_50 = uStack_58;
  uStack_58 = 0;
  FUN_1083948e4(auStack_48,uVar2,&uStack_50);
  FUN_1081648e4(uVar1,auStack_48);
  FUN_108115b2c(auStack_48);
  FUN_108154c48(&uStack_50);
  func_0x0001078bddf8(&uStack_58);
  return;
}



/* Entry: 108164880; end: 1081648e3;  */

void FUN_108164880(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_1083a33c4(&uStack_28,param_2);
  FUN_108394238(param_1);
  FUN_1083a3ca0(uStack_28);
  return;
}



/* Entry: 1081648e4; end: 108164953;  */

void FUN_1081648e4(long param_1,long *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x38) == *param_2) {
    return;
  }
  func_0x000108164928();
  uStack_21 = 1;
  func_0x00010818add8(auStack_38);
  if ((bStack_2c & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x28);
    uVar4 = (uint)uVar2;
    if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar2 | 8;
        *(short *)(param_1 + 0x28) = (short)uVar4;
        uStack_21 = 0;
      }
      *(ushort *)(param_1 + 0x28) = (ushort)uVar4 | 4;
      puStack_40 = &uStack_21;
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      if ((uVar4 >> 4 & 1) == 0) {
        if (puVar3 != (undefined8 *)0x0) {
          func_0x00010818ad34(&puStack_40);
        }
      }
      else {
        puVar1 = (undefined8 *)puVar3[1];
        for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
          func_0x00010818ad34(&puStack_40,*puVar3);
        }
      }
    }
  }
  func_0x00010818a9f8(auStack_38);
  return;
}



/* Entry: 108164954; end: 1081649ab;  */

void FUN_108164954(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001081649a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081649ac; end: 108164c67;  */

void FUN_1081649ac(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  lVar4 = *param_2;
  uStack_a0 = 0;
  plVar3 = (long *)0x58;
  __Znwm();
  uStack_60 = *param_4;
  *param_4 = 0;
  uStack_90 = 0;
  FUN_1081874f0(&plStack_58,&uStack_60);
  plVar3[2] = 0;
  *(undefined4 *)(plVar3 + 1) = 1;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *(undefined2 *)(plVar3 + 5) = 0;
  *plVar3 = (long)&PTR_DAT_110a28ef0;
  plVar3[6] = (long)plStack_58;
  plStack_58 = (long *)0x0;
  FUN_108164628(&plStack_58);
  FUN_108154cb4(&uStack_60);
  *plVar3 = (long)&PTR_SUB_110a28e88;
  FUN_1083a3348(&uStack_68,&UNK_10df03ced);
  FUN_108164880(&plStack_88,&uStack_68);
  plVar2 = plStack_88;
  plStack_88 = (long *)0x0;
  plVar3[7] = (long)plVar2;
  FUN_108154bd8(&plStack_88);
  FUN_1083a3ca0(uStack_68);
  FUN_1083a3348(&uStack_70,&UNK_10df03d51);
  FUN_108164880(&plStack_88,&uStack_70);
  plVar2 = plStack_88;
  plStack_88 = (long *)0x0;
  plVar3[8] = (long)plVar2;
  FUN_108154bd8(&plStack_88);
  FUN_1083a3ca0(uStack_70);
  *(undefined4 *)((long)plVar3 + 0x4c) = 0;
  *(undefined4 *)(plVar3 + 9) = 0;
  *(undefined4 *)(plVar3 + 10) = 0;
  plStack_88 = param_3;
  lStack_80 = lVar4;
  plStack_78 = plVar3;
  FUN_108164708(&plStack_88,0);
  FUN_108164708();
  FUN_108164708();
  plStack_98 = plVar3;
  FUN_108154cb4(&uStack_90);
  FUN_10816040c(plVar3 + 2);
  FUN_108164674(&uStack_a0,plVar3 + 6);
  plStack_98 = (long *)0x0;
  if ((plVar3[2] == plVar3[3]) && ((*(byte *)((long)plVar3 + 0x29) & 1) == 0)) {
    plStack_58 = plVar3;
    (**(code **)(*plVar3 + 0x18))(0,plVar3);
  }
  else {
    plStack_58 = (long *)0x0;
    plStack_88 = plVar3;
    FUN_108155570(*(undefined8 *)(lVar4 + 0x70),&plStack_88);
    FUN_108155920(&plStack_88);
  }
  FUN_108164c68(&plStack_58);
  FUN_108164c68(&plStack_98);
  uVar1 = uStack_a0;
  uStack_a0 = 0;
  *param_1 = uVar1;
  FUN_108164628(&uStack_a0);
  return;
}



/* Entry: 108164c68; end: 108164cb7;  */

long * FUN_108164c68(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108164cb8; end: 108164d17;  */

undefined8 * FUN_108164cb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a28ef0;
  FUN_108164628(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108164d18; end: 108164d2b;  */

void FUN_108164d18(void)

{
  func_0x000108164ce8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108164d2c; end: 10816510f;  */

undefined8 ** FUN_108164d2c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  long *extraout_x8;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 *puStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float afStack_a8 [2];
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined8 uStack_7c;
  float fStack_74;
  undefined8 uStack_70;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  long lStack_48;
  
  ppuVar9 = &puStack_c0;
  ppuVar6 = &puStack_c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  fVar15 = (float)NEON_fminnm((float)(double)(long)(*(float *)(param_1 + 0x50) + 0.5),0x4effffff);
  if (fVar15 <= -2.1474835e+09) {
    fVar15 = -2.1474835e+09;
  }
  if ((int)fVar15 == 0) {
    fVar15 = 150.0;
    fVar17 = *(float *)(param_1 + 0x48);
    fVar16 = *(float *)(param_1 + 0x4c);
    if (fVar17 <= -150.0 && fVar17 <= 150.0) {
      fVar15 = -150.0;
    }
    if (-150.0 < fVar17 && fVar17 <= 150.0) {
      fVar15 = fVar17;
    }
    fVar17 = 100.0;
    if (fVar16 <= -50.0 && fVar16 <= 100.0) {
      fVar17 = -50.0;
    }
    if (-50.0 < fVar16 && fVar16 <= 100.0) {
      fVar17 = fVar16;
    }
    if (ABS(fVar15 / 150.0) <= 0.00024414062) {
      uStack_a0 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x38);
      fVar15 = (fVar15 / 150.0) * 1.8;
      _exp2f();
      afStack_a8[0] = fVar15;
      FUN_108346318(&fStack_98,afStack_a8,4);
      fStack_98 = 0.0;
      fStack_94 = 0.0;
      FUN_1083948e4(&uStack_a0,uVar13,afStack_a8);
      FUN_108154c48(afStack_a8);
      func_0x0001078bddf8(&fStack_98);
      fVar16 = *(float *)(param_1 + 0x4c);
    }
    if (ABS(fVar16) <= 0.00024414062) {
      uStack_b0 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      fStack_94 = (fVar17 / 100.0) * 3.1415927;
      fStack_98 = (fStack_94 * -2.0) / 3.0;
      fStack_90 = 1.0 - fStack_94 / 3.0;
      FUN_108346318(&uStack_b8,&fStack_98,0xc);
      uVar13 = uStack_b8;
      uStack_b8 = 0;
      fStack_98 = (float)uVar13;
      fStack_94 = (float)((ulong)uVar13 >> 0x20);
      FUN_1083948e4(&uStack_b0,uVar12,&fStack_98);
      FUN_108154c48(&fStack_98);
      func_0x0001078bddf8(&uStack_b8);
    }
    uStack_b8 = uStack_a0;
    uStack_a0 = 0;
    FUN_10811e68c(&puStack_c0,&uStack_b0,&uStack_b8);
    FUN_108115b2c(&uStack_b8);
    FUN_108115b2c(&uStack_b0);
    FUN_108115b2c(&uStack_a0);
  }
  else {
    fVar16 = *(float *)(param_1 + 0x48);
    fVar17 = *(float *)(param_1 + 0x4c);
    fVar15 = 100.0;
    if (fVar17 <= -100.0 && fVar17 <= 100.0) {
      fVar15 = -100.0;
    }
    if (-100.0 < fVar17 && fVar17 <= 100.0) {
      fVar15 = fVar17;
    }
    fVar15 = fVar15 / 100.0;
    if (fVar15 <= 0.0) {
      fStack_98 = fVar15 + 1.0;
    }
    else {
      fStack_98 = 0.00024414062;
      if (0.00024414062 <= 1.0 - fVar15) {
        fStack_98 = 1.0 - fVar15;
      }
      fStack_98 = 1.0 / fStack_98;
    }
    fVar15 = 100.0;
    if (fVar16 <= -100.0 && fVar16 <= 100.0) {
      fVar15 = -100.0;
    }
    if (-100.0 < fVar16 && fVar16 <= 100.0) {
      fVar15 = fVar16;
    }
    fVar16 = 1.0;
    if (1.0 <= fStack_98) {
      fVar16 = fStack_98;
    }
    fStack_88 = (fVar15 / 255.0) * fVar16 + (1.0 - fStack_98) * 0.5;
    fStack_94 = 0.0;
    fStack_90 = 0.0;
    uStack_8c = 0;
    uStack_84 = 0;
    uStack_7c = 0;
    uStack_70 = 0;
    uStack_64 = 0;
    uStack_54 = 0x3f80000000000000;
    uStack_5c = 0;
    uStack_4c = 0;
    fStack_80 = fStack_98;
    fStack_74 = fStack_88;
    fStack_68 = fStack_98;
    fStack_60 = fStack_88;
    FUN_1083ae048(&puStack_c0,&fStack_98,1);
  }
  FUN_1081648e4(uVar11);
  FUN_108115b2c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_108154c48(&fStack_98);
    func_0x0001078bddf8(&uStack_b8);
    FUN_108115b2c(&uStack_a0);
    __Unwind_Resume();
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = (undefined8 *)0x78;
    __Znwm();
    plStack_110 = (long *)*param_3;
    *param_3 = 0;
    uStack_130 = 0;
    FUN_1081659f0(&plStack_128,&plStack_110,1);
    FUN_10818d360(puVar7,&plStack_128);
    FUN_10815640c(&plStack_128);
    FUN_108154cb4(&plStack_110);
    *puVar7 = &PTR_FUN_110a28f28;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar10 = ppuVar6[2];
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xb] = puVar10;
    *(undefined4 *)(puVar7 + 0xe) = 0;
    puStack_140 = puVar7;
    FUN_108154cb4(&uStack_130);
    puVar10 = *ppuVar6;
    plVar8 = (long *)0x50;
    __Znwm();
    puStack_140 = (undefined8 *)0x0;
    uStack_130 = 0;
    plVar8[2] = 0;
    *(undefined4 *)(plVar8 + 1) = 1;
    plVar8[3] = 0;
    plVar8[4] = 0;
    *(undefined2 *)(plVar8 + 5) = 0;
    plStack_110 = (long *)0x0;
    plVar8[6] = (long)puVar7;
    FUN_1081653ac(&plStack_110);
    *plVar8 = (long)&PTR_FUN_110a28f80;
    plStack_128 = (long *)ppuVar9;
    puStack_120 = puVar10;
    plStack_118 = plVar8;
    FUN_108164708(&plStack_128,0,plVar8 + 8);
    FUN_108164708();
    FUN_1081662b4();
    FUN_108164708();
    FUN_1081653ac(&uStack_130);
    FUN_10816040c(plVar8 + 2);
    lVar14 = plVar8[6];
    if (lVar14 != 0) {
      piVar1 = (int *)(lVar14 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_138 = 0;
    if ((plVar8[2] == plVar8[3]) && ((*(byte *)((long)plVar8 + 0x29) & 1) == 0)) {
      plStack_110 = plVar8;
      (**(code **)(*plVar8 + 0x18))(0,plVar8);
    }
    else {
      plStack_110 = (long *)0x0;
      plStack_128 = plVar8;
      FUN_108155570(puVar10[0xe],&plStack_128);
      FUN_108155920(&plStack_128);
    }
    FUN_10816626c(&plStack_110);
    FUN_10816626c(&uStack_138);
    *extraout_x8 = lVar14;
    func_0x00010816645c();
    ppuVar6 = &puStack_140;
    FUN_1081653ac();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      FUN_10816626c(&plStack_110);
      FUN_10816626c(&uStack_138);
      func_0x00010816645c();
      ppuVar9 = &puStack_140;
      FUN_1081653ac();
      func_0x000108166404();
      func_0x00010816646c();
      if (ppuVar9 != (undefined8 **)0x0) {
        ppuVar2 = ppuVar9 + 1;
        do {
          iVar3 = *(int *)ppuVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar5) {
            *(int *)ppuVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          (*(code *)(*ppuVar9)[2])();
        }
      }
      return ppuVar6;
    }
    return ppuVar6;
  }
  return ppuVar6;
}



/* Entry: 108165110; end: 1081653ab;  */

undefined8 ** FUN_108165110(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 **ppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  plStack_50 = (long *)*param_4;
  *param_4 = 0;
  uStack_70 = 0;
  FUN_1081659f0(&plStack_68,&plStack_50,1);
  FUN_10818d360(puVar6,&plStack_68);
  FUN_10815640c(&plStack_68);
  FUN_108154cb4(&plStack_50);
  *puVar6 = &PTR_FUN_110a28f28;
  puVar6[9] = 0;
  puVar6[10] = 0;
  lVar10 = param_2[2];
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xb] = lVar10;
  *(undefined4 *)(puVar6 + 0xe) = 0;
  puStack_80 = puVar6;
  FUN_108154cb4(&uStack_70);
  lVar11 = *param_2;
  plVar7 = (long *)0x50;
  __Znwm();
  puStack_80 = (undefined8 *)0x0;
  uStack_70 = 0;
  plVar7[2] = 0;
  *(undefined4 *)(plVar7 + 1) = 1;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(undefined2 *)(plVar7 + 5) = 0;
  plStack_50 = (long *)0x0;
  plVar7[6] = (long)puVar6;
  FUN_1081653ac(&plStack_50);
  *plVar7 = (long)&PTR_FUN_110a28f80;
  plStack_68 = param_3;
  lStack_60 = lVar11;
  plStack_58 = plVar7;
  FUN_108164708(&plStack_68,0,plVar7 + 8);
  FUN_108164708();
  FUN_1081662b4();
  FUN_108164708();
  FUN_1081653ac(&uStack_70);
  FUN_10816040c(plVar7 + 2);
  lVar10 = plVar7[6];
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_78 = 0;
  if ((plVar7[2] == plVar7[3]) && ((*(byte *)((long)plVar7 + 0x29) & 1) == 0)) {
    plStack_50 = plVar7;
    (**(code **)(*plVar7 + 0x18))(0,plVar7);
  }
  else {
    plStack_50 = (long *)0x0;
    plStack_68 = plVar7;
    FUN_108155570(*(undefined8 *)(lVar11 + 0x70),&plStack_68);
    FUN_108155920(&plStack_68);
  }
  FUN_10816626c(&plStack_50);
  FUN_10816626c(&uStack_78);
  *param_1 = lVar10;
  func_0x00010816645c();
  ppuVar8 = &puStack_80;
  FUN_1081653ac();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  FUN_10816626c(&plStack_50);
  FUN_10816626c(&uStack_78);
  func_0x00010816645c();
  ppuVar9 = &puStack_80;
  FUN_1081653ac();
  func_0x000108166404();
  func_0x00010816646c();
  if (ppuVar9 != (undefined8 **)0x0) {
    ppuVar2 = ppuVar9 + 1;
    do {
      iVar3 = *(int *)ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *(int *)ppuVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      (*(code *)(*ppuVar9)[2])();
    }
  }
  return ppuVar8;
}



/* Entry: 1081653ac; end: 1081653f3;  */

void FUN_1081653ac(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x00010816646c();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 1081653f4; end: 108165423;  */

void FUN_1081653f4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_38;
  
  func_0x000106f47224(param_1 + 10);
  func_0x000106f47224(param_1 + 9);
  *param_1 = &PTR_DAT_110a2c208;
  plVar3 = (long *)param_1[7];
  for (plVar2 = (long *)param_1[6]; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    uVar1 = 0;
    if (*plVar2 != 0) {
      do {
        func_0x00010818d5e8();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar1;
    FUN_10818a6d4(param_1,&uStack_38);
    func_0x00010818d620();
  }
  FUN_10815640c(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108165424; end: 108165437;  */

void FUN_108165424(void)

{
  FUN_1081653f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108165438; end: 10816588b;  */

undefined4 FUN_108165438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uStack_d8;
  float fStack_cc;
  undefined8 *puStack_c8;
  undefined8 *apuStack_c0 [5];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar10 = *(undefined8 **)(param_1 + 0x30);
  if (*(float *)(param_1 + 0x70) == 0.0) {
    uVar12 = 0;
  }
  else {
    if ((bRam0000000113729d48 & 1) == 0) {
      iVar2 = 0x13729d48;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_1083a3348(&uStack_98,&UNK_10df03ebf);
        uStack_60 = 0;
        puStack_78 = (undefined *)0x0;
        pppuStack_80 = (undefined8 ***)0x0;
        uStack_68 = 0;
        uStack_70 = 0;
        FUN_108394278(&uStack_90,&uStack_98,&pppuStack_80);
        lVar5 = uStack_90;
        uStack_90 = 0;
        FUN_108154bd8(&uStack_90);
        FUN_1083a3ca0(uStack_98);
        lRam0000000113729d40 = lVar5;
        ___cxa_guard_release(0x113729d48);
      }
    }
    puStack_c8 = (undefined8 *)0x0;
    if (lRam0000000113729d40 != 0) {
      do {
        func_0x00010816640c();
        puStack_c8 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_108165d58(apuStack_c0,&puStack_c8);
    pppuVar3 = (undefined8 ***)&puStack_c8;
    FUN_108154c00();
    fVar13 = ABS(*(float *)(param_1 + 0x70)) * 0.25;
    dVar11 = (double)fVar13;
    _pow(dVar11,0x4008000000000000);
    fStack_cc = (float)(dVar11 * 1.3);
    puVar7 = &UNK_10f47d302;
    func_0x000108166478();
    ppppuVar4 = &pppuStack_80;
    pppuStack_80 = pppuVar3;
    puStack_78 = puVar7;
    func_0x000108165c30(ppppuVar4,param_1 + 0x60);
    puVar7 = &UNK_10f47d30b;
    func_0x000108166478();
    pppuStack_80 = ppppuVar4;
    puStack_78 = puVar7;
    func_0x000108165c30(&pppuStack_80,param_1 + 0x68);
    uVar12 = NEON_fmov(0x3f800000,4);
    uStack_90._0_4_ = (float)uVar12 / (float)*(undefined8 *)(param_1 + 0x68);
    uStack_90._4_4_ =
         (float)((ulong)uVar12 >> 0x20) / (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
    puVar7 = &UNK_10f47d314;
    pppuVar3 = (undefined8 ***)apuStack_c0;
    func_0x000108165c0c(pppuVar3,&UNK_10f47d314,0xc);
    pppuStack_80 = pppuVar3;
    puStack_78 = puVar7;
    func_0x000108165c30(&pppuStack_80,&uStack_90);
    puVar7 = &UNK_10f47d321;
    pppuVar3 = (undefined8 ***)apuStack_c0;
    func_0x000108165c0c(pppuVar3,&UNK_10f47d321,3);
    pppuStack_80 = pppuVar3;
    puStack_78 = puVar7;
    func_0x000108165c7c(&pppuStack_80,&fStack_cc);
    fVar13 = 1.0 / (((fVar13 + 1.0) * 0.5) / SQRT(fVar13));
    puVar7 = &UNK_10f47d325;
    pppuVar3 = (undefined8 ***)apuStack_c0;
    uStack_90._0_4_ = fVar13;
    func_0x000108165c0c(pppuVar3,&UNK_10f47d325,6);
    pppuStack_80 = pppuVar3;
    puStack_78 = puVar7;
    func_0x000108166434();
    _asinf();
    uStack_90._0_4_ = 1.0 / fVar13;
    puVar7 = &UNK_10f47d32c;
    pppuVar3 = (undefined8 ***)apuStack_c0;
    func_0x000108165c0c(pppuVar3,&UNK_10f47d32c,0xd);
    pppuStack_80 = pppuVar3;
    puStack_78 = puVar7;
    func_0x000108166434();
    uVar1 = 0x3f800000;
    if (*(float *)(param_1 + 0x70) <= 0.0) {
      uVar1 = 0xbf800000;
    }
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
    puVar7 = &UNK_10f47d33a;
    pppuVar3 = (undefined8 ***)apuStack_c0;
    func_0x000108165c0c(pppuVar3,&UNK_10f47d33a,10);
    pppuStack_80 = pppuVar3;
    puStack_78 = puVar7;
    func_0x000108166434();
    plVar8 = (long *)(param_1 + 0x50);
    if ((*plVar8 == 0) || (lVar5 = param_1, FUN_10818d4a4(), (int)lVar5 != 0)) {
      puVar9 = *(undefined8 **)(param_1 + 0x30);
      FUN_10818a8b4(*puVar9,0,0x113254e20);
      FUN_108383398(&pppuStack_80);
      uVar12 = *puVar9;
      uStack_90 = 0;
      uStack_88 = *(undefined8 *)(param_1 + 0x58);
      ppppuVar4 = &pppuStack_80;
      FUN_1083835c4(ppppuVar4,&uStack_90,0);
      FUN_10818c910(uVar12,ppppuVar4,0);
      FUN_10838362c(&uStack_98,&pppuStack_80);
      FUN_1083bd100(&uStack_90,uStack_98,1,1,1,0,0);
      uVar12 = uStack_90;
      uStack_90 = 0;
      func_0x000108114f18(plVar8,uVar12);
      func_0x000108166464();
      func_0x00010811496c(&uStack_98);
      FUN_108383490(&pppuStack_80);
    }
    lVar5 = 0;
    if (*plVar8 != 0) {
      do {
        func_0x00010816640c();
        lVar5 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    puVar7 = &UNK_10f47d345;
    pppuVar3 = (undefined8 ***)apuStack_c0;
    uStack_90 = lVar5;
    func_0x000108165cc8(pppuVar3,&UNK_10f47d345,7);
    pppuStack_80 = pppuVar3;
    puStack_78 = puVar7;
    FUN_108165cec(&pppuStack_80,&uStack_90);
    func_0x000108166464();
    FUN_108394a04(&uStack_d8,apuStack_c0,0);
    FUN_108166068(apuStack_c0);
    uVar12 = uStack_d8;
  }
  uStack_d8 = 0;
  func_0x000108114f18(param_1 + 0x48,uVar12);
  func_0x000106f47224(&uStack_d8);
  puVar6 = (undefined4 *)*puVar10;
  FUN_10818a8b4(puVar6,param_2,param_3);
  return *puVar6;
}



/* Entry: 10816588c; end: 1081659e7;  */

void FUN_10816588c(long param_1)

{
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_178 [40];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined1 auStack_c0 [144];
  
  func_0x00010816648c();
  if (*(float *)(param_1 + 0x70) != 0.0) {
    FUN_10818ccbc(&uStack_150);
    func_0x00010833b800(auStack_178);
    FUN_10818d01c(&uStack_150,unaff_x20 + 0x18,auStack_178,1);
    FUN_1081660c4(auStack_c0,&uStack_150);
    FUN_10818cd40(&uStack_150);
    FUN_10833c3b4();
    uStack_11c = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_114 = 0x3f800000;
    uStack_10c = 0x40800000;
    uVar2 = 0;
    if (*(long *)(unaff_x20 + 0x48) != 0) {
      do {
        func_0x00010816640c();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_148 = uVar2;
    FUN_108165bc8(0);
    func_0x000108166454();
    FUN_1083762f4(&uStack_150,3);
    (**(code **)(*unaff_x19 + 0xa8))();
    FUN_108375e94(&uStack_150);
    FUN_10818cd40(auStack_c0);
    return;
  }
  plVar1 = (long *)**(long **)(unaff_x20 + 0x30);
  if ((((*(ushort *)(plVar1 + 5) >> 6 & 1) == 0) &&
      (*(float *)(plVar1 + 3) < *(float *)(plVar1 + 4))) &&
     (*(float *)((long)plVar1 + 0x1c) < *(float *)((long)plVar1 + 0x24))) {
                    /* WARNING: Could not recover jumptable at 0x00010818c944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  return;
}



/* Entry: 1081659e8; end: 1081659ef;  */

undefined8 FUN_1081659e8(void)

{
  return 0;
}



/* Entry: 1081659f0; end: 108165a1f;  */

undefined8 * FUN_1081659f0(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108165a20(param_1,param_2,param_2 + param_3 * 8,param_3);
  return param_1;
}



/* Entry: 108165a20; end: 108165a9f;  */

void FUN_108165a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_108165aa0(param_1,param_4);
    FUN_108165ad8(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x000108165b9c(&uStack_40);
  return;
}



/* Entry: 108165aa0; end: 108165ad7;  */

void FUN_108165aa0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_108156cb8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
  }
  else {
    FUN_108156c38();
    plVar1 = param_1 + 2;
    FUN_108165b0c();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 108165ad8; end: 108165b0b;  */

void FUN_108165ad8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_108165b0c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 108165b0c; end: 108165b1f;  */

void FUN_108165b0c(void)

{
  FUN_108165b20();
  return;
}



/* Entry: 108165b20; end: 108165bc7;  */

undefined8 * FUN_108165b20(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; puStack_28 = param_4, param_2 != param_3; param_2 = param_2 + 1) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010816640c();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_4 = uVar1;
    param_4 = param_4 + 1;
  }
  uStack_38 = 1;
  FUN_108156db4(&uStack_50);
  return param_4;
}



/* Entry: 108165bc8; end: 108165beb;  */

void FUN_108165bc8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108166430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108165bec; end: 108165ceb;  */

void FUN_108165bec(void)

{
  func_0x000108166498();
  func_0x000108114f18();
  return;
}



/* Entry: 108165cec; end: 108165d57;  */

long * FUN_108165cec(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    uVar1 = *param_2;
    *param_2 = 0;
    uStack_28 = 0;
    func_0x000108166058(*(long *)(*param_1 + 0x10) + (long)*(int *)(lVar2 + 0x14) * 8,uVar1);
    FUN_108165f8c(&uStack_28);
    func_0x000108166454();
  }
  return param_1;
}



/* Entry: 108165d58; end: 108165dd3;  */

long * FUN_108165d58(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  FUN_10839436c();
  FUN_1083464e4(param_1 + 1);
  FUN_108165dd4(param_1 + 2,(*(long *)(*param_1 + 0x60) - *(long *)(*param_1 + 0x58)) / 0x18);
  return param_1;
}



/* Entry: 108165dd4; end: 108165e3f;  */

undefined8 * FUN_108165dd4(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  puStack_30 = param_1;
  if (param_2 != 0) {
    FUN_108165e40(param_1);
    FUN_108165e78(param_1,param_2);
  }
  uStack_28 = 1;
  FUN_108165eec(&puStack_30);
  return param_1;
}



/* Entry: 108165e40; end: 108165e77;  */

void FUN_108165e40(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 >> 0x3d != 0) {
    FUN_108165e9c();
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = puVar3;
    for (lVar4 = param_2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    param_1[1] = (long)(puVar3 + param_2);
    return;
  }
  plVar2 = param_1 + 2;
  FUN_108165eb0();
  *param_1 = (long)plVar2;
  param_1[1] = (long)plVar2;
  param_1[2] = (long)(plVar2 + param_2);
  return;
}



/* Entry: 108165e78; end: 108165e9b;  */

void FUN_108165e78(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 108165e9c; end: 108165eaf;  */

void FUN_108165e9c(void)

{
  func_0x000104bd47e8(&UNK_10f47d2fb);
  FUN_108165ed0();
  return;
}



/* Entry: 108165eb0; end: 108165ecf;  */

void FUN_108165eb0(void)

{
  FUN_108165ed0();
  return;
}



/* Entry: 108165ed0; end: 108165eeb;  */

long FUN_108165ed0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000108165f18(param_1);
  }
  return param_1;
}



/* Entry: 108165eec; end: 108165f4f;  */

long FUN_108165eec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000108165f18(param_1);
  }
  return param_1;
}



/* Entry: 108165f50; end: 108165f57;  */

void FUN_108165f50(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010816648c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_108165f8c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108165f58; end: 108165f8b;  */

void FUN_108165f58(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010816648c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_108165f8c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108165f8c; end: 108165faf;  */

void FUN_108165f8c(void)

{
  func_0x00010816646c();
  FUN_108165fb0();
  return;
}



/* Entry: 108165fb0; end: 108165fdf;  */

void FUN_108165fb0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108166430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108165fe0; end: 108166047;  */

undefined8 FUN_108165fe0(long param_1)

{
  long *plVar1;
  undefined8 uStack_28;
  
  plVar1 = (long *)(param_1 + 8);
  if (*(int *)*plVar1 != 1) {
    FUN_108346318(&uStack_28,*(undefined8 *)(*plVar1 + 0x18),*(undefined8 *)(*plVar1 + 0x20));
    FUN_108166048(plVar1,uStack_28);
    func_0x000108165fd4(0);
  }
  return *(undefined8 *)(*plVar1 + 0x18);
}



/* Entry: 108166048; end: 108166067;  */

void FUN_108166048(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  *param_1 = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((piVar4 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(piVar4 + 2) != (code *)0x0) {
      (**(code **)(piVar4 + 2))(*(undefined8 *)(piVar4 + 6),*(undefined8 *)(piVar4 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(piVar4);
    return;
  }
  return;
}



/* Entry: 108166068; end: 1081660c3;  */

undefined8 FUN_108166068(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 unaff_x19;
  
  func_0x000108166098(param_1 + 2);
  func_0x0001078bddf8(param_1 + 1);
  func_0x000108154d64();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return unaff_x19;
}



/* Entry: 1081660c4; end: 108166147;  */

long FUN_1081660c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar4 = uRam0000000113254e38;
  uVar3 = uRam0000000113254e30;
  uVar2 = uRam0000000113254e28;
  uVar1 = uRam0000000113254e20;
  *(undefined8 *)(param_1 + 0x30) = uRam0000000113254e28;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar5 = uRam0000000113254e40;
  *(undefined8 *)(param_1 + 0x48) = uRam0000000113254e40;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_108166148();
  return param_1;
}



/* Entry: 108166148; end: 10816618b;  */

void FUN_108166148(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010816648c();
  *param_1 = *param_2;
  FUN_1081661b0(param_1 + 1,param_2 + 1);
  FUN_108165bec(unaff_x20 + 0x80,unaff_x19 + 0x80);
  *(undefined4 *)(unaff_x20 + 0x88) = *(undefined4 *)(unaff_x19 + 0x88);
  *(undefined4 *)(unaff_x19 + 0x88) = 0xffffffff;
  return;
}



/* Entry: 10816618c; end: 1081661af;  */

void FUN_10816618c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108166430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081661b0; end: 108166223;  */

void FUN_1081661b0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010816648c();
  func_0x000108164928();
  FUN_108165bec(unaff_x20 + 8,unaff_x19 + 8);
  FUN_108165bec(unaff_x20 + 0x10,unaff_x19 + 0x10);
  func_0x000108166204(unaff_x20 + 0x18,unaff_x19 + 0x18);
  _memcpy(unaff_x20 + 0x20,unaff_x19 + 0x20,0x54);
  return;
}



/* Entry: 108166224; end: 108166233;  */

void FUN_108166224(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108166430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108166234; end: 10816626b;  */

long * FUN_108166234(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  FUN_108154c6c(param_1 + 3);
  func_0x000106f47224(param_1 + 2);
  func_0x000106f47224(param_1 + 1);
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000108115bc4();
    }
  }
  return param_1;
}



/* Entry: 10816626c; end: 1081662b3;  */

void FUN_10816626c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x00010816646c();
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 1081662b4; end: 1081662fb;  */

undefined8 * FUN_1081662b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = *param_1;
  FUN_108169570(uVar3);
  FUN_108154e4c();
  FUN_108162b98(uVar2,uVar1,uVar3,param_3);
  return param_1;
}



/* Entry: 1081662fc; end: 10816632b;  */

undefined8 * FUN_1081662fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a28fe8;
  FUN_1081653ac(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10816632c; end: 10816632f;  */

undefined8 * FUN_10816632c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a28fe8;
  FUN_1081653ac(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108166330; end: 108166343;  */

void FUN_108166330(void)

{
  FUN_1081662fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108166344; end: 1081663ef;  */

void FUN_108166344(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  fVar5 = *(float *)(param_1 + 0x3c);
  bVar3 = false;
  if ((*(float *)(lVar4 + 0x60) == *(float *)(param_1 + 0x38)) &&
     (bVar3 = false, !NAN(*(float *)(lVar4 + 100)) && !NAN(fVar5))) {
    bVar3 = *(float *)(lVar4 + 100) == fVar5;
  }
  if (!bVar3) {
    *(float *)(lVar4 + 0x60) = *(float *)(param_1 + 0x38);
    *(float *)(lVar4 + 100) = fVar5;
    func_0x000108166440();
  }
  fVar5 = *(float *)(param_1 + 0x44);
  bVar3 = false;
  if ((*(float *)(lVar4 + 0x68) == *(float *)(param_1 + 0x40)) &&
     (bVar3 = false, !NAN(*(float *)(lVar4 + 0x6c)) && !NAN(fVar5))) {
    bVar3 = *(float *)(lVar4 + 0x6c) == fVar5;
  }
  if (!bVar3) {
    *(float *)(lVar4 + 0x68) = *(float *)(param_1 + 0x40);
    *(float *)(lVar4 + 0x6c) = fVar5;
    func_0x000108166440();
  }
  if (*(float *)(lVar4 + 0x70) != *(float *)(param_1 + 0x48)) {
    *(float *)(lVar4 + 0x70) = *(float *)(param_1 + 0x48);
    func_0x000108166440();
  }
  func_0x00010816645c();
  return;
}



/* Entry: 1081663f0; end: 1081664ab;  */

void FUN_1081663f0(void)

{
  return;
}



/* Entry: 1081664ac; end: 108166923;  */

long ** FUN_1081664ac(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  long **pplVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long **pplStack_158;
  long *plStack_150;
  long **pplStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b8;
  undefined1 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long **pplStack_90;
  long **pplStack_88;
  undefined1 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10818b15c(&plStack_98,0xffff0000);
  func_0x000108167260();
  func_0x000108167260();
  func_0x000108167260();
  func_0x000108167260(&plStack_98);
  FUN_108166a28(&plStack_120,&plStack_98,5);
  lVar9 = 0x20;
  do {
    FUN_108158f04((long)&plStack_98 + lVar9);
    lVar9 = lVar9 + -8;
  } while (lVar9 != -8);
  lVar12 = *param_2;
  uStack_128 = 0;
  plVar6 = (long *)0xd8;
  __Znwm();
  plVar5 = plStack_118;
  plVar10 = plStack_120;
  uStack_c0 = *param_4;
  *param_4 = 0;
  plStack_100 = plStack_120;
  lStack_f0 = lStack_110;
  plStack_f8 = plStack_118;
  plStack_120 = (long *)0x0;
  plStack_118 = (long *)0x0;
  lStack_110 = 0;
  uStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  lStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  pplStack_b8 = &plStack_d8;
  uStack_b0 = 0;
  lVar9 = (long)plVar5 - (long)plVar10;
  if (lVar9 != 0) {
    FUN_108166ad0(&plStack_d8,lVar9 >> 3);
    plStack_98 = &lStack_c8;
    plStack_a8 = plStack_d0;
    pplStack_90 = &plStack_a8;
    pplStack_88 = &plStack_a0;
    plVar11 = plStack_d0;
    for (; plVar10 != plVar5; plVar10 = plVar10 + 1) {
      lVar9 = *plVar10;
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *plVar11 = lVar9;
      plVar11 = plVar11 + 1;
    }
    uStack_80 = 1;
    plStack_a0 = plVar11;
    FUN_108166c28(&plStack_98);
    plStack_d0 = plVar11;
  }
  uStack_b0 = 1;
  func_0x000108166ca8(&pplStack_b8);
  FUN_1081879f4(&pplStack_b8,&uStack_c0,&plStack_d8);
  plVar6[2] = 0;
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[3] = 0;
  plVar6[4] = 0;
  *(undefined2 *)(plVar6 + 5) = 0;
  *plVar6 = (long)&PTR_DAT_110a29088;
  plVar6[6] = (long)pplStack_b8;
  pplStack_b8 = (long **)0x0;
  FUN_1081669d4(&pplStack_b8);
  FUN_108166924(&plStack_d8);
  FUN_108154cb4(&uStack_c0);
  *plVar6 = (long)&PTR_SUB_110a29020;
  plVar6[8] = (long)plStack_f8;
  plVar6[7] = (long)plStack_100;
  plVar6[9] = lStack_f0;
  plStack_100 = (long *)0x0;
  plStack_f8 = (long *)0x0;
  *(undefined4 *)(plVar6 + 10) = 0;
  plVar6[0xc] = 0;
  plVar6[0xb] = 0;
  plVar6[0x12] = 0;
  plVar6[0x11] = 0;
  lStack_f0 = 0;
  plVar6[0x18] = 0;
  plVar6[0x17] = 0;
  plVar6[0xe] = 0;
  plVar6[0xd] = 0;
  plVar6[0x10] = 0;
  plVar6[0xf] = 0;
  plVar6[0x14] = 0;
  plVar6[0x13] = 0;
  plVar6[0x16] = 0;
  plVar6[0x15] = 0;
  *(undefined8 *)((long)plVar6 + 0xcc) = 0;
  *(undefined8 *)((long)plVar6 + 0xc4) = 0;
  plStack_98 = param_3;
  pplStack_90 = (long **)lVar12;
  pplStack_88 = (long **)plVar6;
  FUN_108164708(&plStack_98,0);
  FUN_108166d68();
  FUN_108166d68();
  FUN_108166d68();
  FUN_108166d68();
  FUN_108166d68();
  plStack_108 = plVar6;
  FUN_108166924(&plStack_100);
  FUN_108154cb4(&uStack_e0);
  FUN_10816040c(plVar6 + 2);
  func_0x000108166cd4(&uStack_128,plVar6 + 6);
  plStack_108 = (long *)0x0;
  if ((plVar6[2] == plVar6[3]) && ((*(byte *)((long)plVar6 + 0x29) & 1) == 0)) {
    plStack_d8 = plVar6;
    (**(code **)(*plVar6 + 0x18))(0,plVar6);
  }
  else {
    plStack_d8 = (long *)0x0;
    plStack_98 = plVar6;
    FUN_108155570(*(undefined8 *)(lVar12 + 0x70),&plStack_98);
    FUN_108155920(&plStack_98);
  }
  FUN_108166d1c(&plStack_d8);
  FUN_108166d1c(&plStack_108);
  uVar4 = uStack_128;
  uStack_128 = 0;
  *param_1 = uVar4;
  FUN_1081669d4(&uStack_128);
  pplVar7 = &plStack_120;
  FUN_108166924();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pplVar7;
  }
  ___stack_chk_fail();
  FUN_108166d1c(&plStack_d8);
  FUN_108166d1c(&plStack_108);
  FUN_1081669d4(&uStack_128);
  FUN_108166924(&plStack_120);
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_138 = FUN_108166924;
  pplStack_158 = pplVar8;
  plStack_150 = plVar6;
  pplStack_148 = pplVar7;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000108166958(&pplStack_158);
  return pplVar8;
}



/* Entry: 108166924; end: 108166993;  */

undefined8 FUN_108166924(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108166958(&uStack_28);
  return param_1;
}



/* Entry: 108166994; end: 10816699b;  */

void FUN_108166994(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    FUN_108158f04();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10816699c; end: 1081669d3;  */

void FUN_10816699c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    FUN_108158f04();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1081669d4; end: 1081669fb;  */

undefined8 * FUN_1081669d4(undefined8 *param_1)

{
  FUN_1081669fc(*param_1);
  return param_1;
}



/* Entry: 1081669fc; end: 108166a27;  */

void FUN_1081669fc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108166a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108166a28; end: 108166a57;  */

undefined8 * FUN_108166a28(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108166a58(param_1,param_2,param_2 + param_3 * 8,param_3);
  return param_1;
}



/* Entry: 108166a58; end: 108166acf;  */

void FUN_108166a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_108166ad0(param_1,param_4);
    FUN_108166b08(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x000108166ca8(&uStack_40);
  return;
}



/* Entry: 108166ad0; end: 108166b07;  */

void FUN_108166ad0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_108166b50();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
  }
  else {
    FUN_108166b3c();
    plVar1 = param_1 + 2;
    func_0x000108166b90();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 108166b08; end: 108166b3b;  */

void FUN_108166b08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000108166b90();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 108166b3c; end: 108166b4f;  */

void FUN_108166b3c(void)

{
  func_0x000104bd47e8(&UNK_10f47d34d);
  FUN_108166b74();
  return;
}



/* Entry: 108166b50; end: 108166b73;  */

void FUN_108166b50(void)

{
  FUN_108166b74();
  return;
}



/* Entry: 108166b74; end: 108166ba3;  */

void FUN_108166b74(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  FUN_108166ba4();
  return;
}



/* Entry: 108166ba4; end: 108166c27;  */

long * FUN_108166ba4(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_50;
  long **pplStack_48;
  long **pplStack_40;
  undefined1 uStack_38;
  long *plStack_30;
  long *plStack_28;
  
  pplStack_48 = &plStack_30;
  pplStack_40 = &plStack_28;
  plVar5 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plVar5 = lVar4;
    plVar5 = plVar5 + 1;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  plStack_30 = param_4;
  plStack_28 = plVar5;
  FUN_108166c28(&uStack_50);
  return plVar5;
}



/* Entry: 108166c28; end: 108166c57;  */

long FUN_108166c28(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108166c58(param_1);
  }
  return param_1;
}



/* Entry: 108166c58; end: 108166c77;  */

void FUN_108166c58(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    FUN_108158f04();
  }
  return;
}



/* Entry: 108166c78; end: 108166d1b;  */

void FUN_108166c78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    FUN_108158f04();
  }
  return;
}



/* Entry: 108166d1c; end: 108166d67;  */

long * FUN_108166d1c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108166d68; end: 108166db7;  */

undefined8 * FUN_108166d68(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = *param_1;
  FUN_108169570(uVar3);
  FUN_108154e4c();
  FUN_108163f1c(uVar2,uVar1,uVar3,param_3);
  return param_1;
}



/* Entry: 108166db8; end: 108166e37;  */

undefined8 * FUN_108166db8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a29088;
  FUN_1081669d4(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108166e38; end: 108166e4b;  */

void FUN_108166e38(void)

{
  func_0x000108166de8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108166e4c; end: 10816702b;  */

void FUN_108166e4c(long param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fStack_34;
  
  fVar3 = (float)NEON_fminnm((float)(double)(long)(*(float *)(param_1 + 0x50) + 0.5),0x4effffff);
  if (fVar3 <= -2.1474835e+09) {
    fVar3 = -2.1474835e+09;
  }
  iVar2 = (int)fVar3;
  FUN_10816702c(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),0);
  if (iVar2 == 3) {
    func_0x000108167288();
    func_0x000108167214();
    func_0x00010816723c();
    FUN_108163830();
    func_0x000108167214();
    func_0x000108167254();
    func_0x000108167224();
    func_0x000108167214();
    func_0x000108167248();
    FUN_108163830();
  }
  else {
    if (iVar2 == 2) {
      func_0x000108167288();
      func_0x000108167214();
      func_0x00010816723c();
      func_0x00010816726c();
      FUN_108163830();
      func_0x0001081672a0(0x3f000000);
      func_0x000108167214();
      func_0x000108167254();
      func_0x000108167224();
      func_0x000108167214();
      func_0x000108167248();
      func_0x000108167224();
      func_0x000108167230();
      uVar4 = 0x3f000000;
    }
    else {
      if (iVar2 != 1) {
        FUN_108163830();
        func_0x000108167214();
        func_0x00010816723c();
        func_0x000108167224();
        func_0x000108167214();
        func_0x000108167254();
        func_0x000108167224();
        func_0x000108167214();
        func_0x000108167248();
        func_0x000108167224();
        func_0x000108167214();
        func_0x0001081672b8();
        lVar1 = param_1 + 0x88;
        goto LAB_108166ff8;
      }
      func_0x000108167288();
      func_0x000108167214();
      func_0x00010816723c();
      func_0x00010816726c();
      func_0x000108167230();
      func_0x0001081672a0(0x3e800000);
      func_0x000108167214();
      func_0x000108167254();
      func_0x00010816726c();
      func_0x000108167230();
      func_0x0001081672a0(0x3f000000);
      func_0x000108167214();
      func_0x000108167248();
      func_0x00010816726c();
      func_0x000108167230();
      uVar4 = 0x3f400000;
    }
    func_0x0001081672a0(uVar4);
  }
  func_0x000108167214();
  func_0x0001081672b8();
  lVar1 = param_1 + 0x58;
LAB_108166ff8:
  FUN_108163830(lVar1);
  func_0x000108167214();
  fStack_34 = (100.0 - *(float *)(param_1 + 0xd0)) / 100.0;
  FUN_10816712c(*(undefined8 *)(param_1 + 0x30),&fStack_34);
  return;
}



/* Entry: 10816702c; end: 10816704b;  */

undefined1 * FUN_10816702c(undefined1 *param_1,int *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puStack_50;
  undefined1 auStack_48 [12];
  byte bStack_3c;
  undefined1 uStack_31;
  
  if (param_3 < (ulong)((long)param_2 - (long)param_1 >> 3)) {
    return param_1 + param_3 * 8;
  }
  FUN_10816714c();
  if (*(int *)(param_1 + 0x48) != *param_2) {
    *(int *)(param_1 + 0x48) = *param_2;
    uStack_31 = 1;
    func_0x00010818add8(auStack_48);
    if ((bStack_3c & 1) == 0) {
      uVar2 = *(ushort *)(param_1 + 0x28);
      uVar5 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2 | 8;
          *(short *)(param_1 + 0x28) = (short)uVar5;
          uStack_31 = 0;
        }
        *(ushort *)(param_1 + 0x28) = (ushort)uVar5 | 4;
        puStack_50 = &uStack_31;
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        if ((uVar5 >> 4 & 1) == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_50);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar4[1];
          for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            func_0x00010818ad34(&puStack_50,*puVar4);
          }
        }
      }
    }
    puVar3 = auStack_48;
    func_0x00010818a9f8(puVar3);
    return puVar3;
  }
  return param_1;
}



/* Entry: 10816704c; end: 10816706b;  */

void FUN_10816704c(long param_1,int *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  if (*(int *)(param_1 + 0x48) != *param_2) {
    *(int *)(param_1 + 0x48) = *param_2;
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(param_1 + 0x28);
      uVar4 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar4 = uVar2 | 8;
          *(short *)(param_1 + 0x28) = (short)uVar4;
          uStack_21 = 0;
        }
        *(ushort *)(param_1 + 0x28) = (ushort)uVar4 | 4;
        puStack_40 = &uStack_21;
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        if ((uVar4 >> 4 & 1) == 0) {
          if (puVar3 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar3[1];
          for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar3);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10816706c; end: 10816712b;  */

undefined4
FUN_10816706c(undefined8 param_1,undefined8 param_2,float param_3,float param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  uVar2 = param_1;
  FUN_108167160();
  func_0x000108167278();
  uVar1 = uVar2;
  FUN_108167160(param_6);
  func_0x000108167278();
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  uVar1 = CONCAT44((float)((ulong)uVar1 >> 0x20) - fVar3,(float)uVar1 - (float)uVar2);
  func_0x000108167180(uVar1,param_1);
  func_0x000108167278();
  uVar2 = CONCAT44(fVar3 + (float)((ulong)uVar1 >> 0x20),(float)uVar2 + (float)uVar1);
  func_0x000108167180(uVar2,0x437f0000);
  fVar3 = (float)uVar2;
  func_0x000108167278();
  fStack_3c = fVar3 + 0.5;
  uStack_48 = 0x437f0000437f0000;
  uStack_50 = 0x437f0000437f0000;
  fStack_40 = (float)-(uint)(255.0 < fStack_3c);
  func_0x000108167194(&uStack_50);
  uVar2 = CONCAT44(-(uint)(0.0 < fStack_3c),-(uint)(0.0 < fStack_40));
  fVar3 = (float)-(uint)(0.0 < param_3);
  fVar4 = (float)-(uint)(0.0 < param_4);
  fStack_38 = param_3;
  fStack_34 = param_4;
  func_0x000108167194(uVar2,&fStack_40);
  func_0x000108167278();
  return CONCAT13((char)(int)fVar4,
                  CONCAT12((char)(int)fVar3,
                           CONCAT11((char)(int)(float)((ulong)uVar2 >> 0x20),(char)(int)(float)uVar2
                                   )));
}


