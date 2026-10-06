/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096bacd0; end: 1096bad97;  */

void FUN_1096bacd0(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long lStack_48;
  long lStack_40;
  
  FUN_109367d10(&lStack_48,(long)((int)param_2 * 3));
  lVar1 = *(long *)(param_1 + 8);
  FUN_1096b6a28(lVar1 + 8,
                (ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 2 & 0xffffffff,
                *(long *)(lVar1 + 0x18),(ulong)(lStack_40 - lStack_48) >> 2 & 0xffffffff);
  if ((int)param_2 < 1) {
    if (lStack_48 == 0) {
      return;
    }
  }
  else {
    param_2 = param_2 & 0x7fffffff;
    puVar3 = (undefined4 *)(lStack_48 + 8);
    puVar2 = (undefined4 *)(param_3 + 8);
    do {
      uVar4 = *puVar3;
      *(undefined8 *)(puVar2 + -2) = *(undefined8 *)(puVar3 + -2);
      *puVar2 = uVar4;
      puVar3 = puVar3 + 3;
      param_2 = param_2 - 1;
      puVar2 = puVar2 + 3;
    } while (param_2 != 0);
  }
  lStack_40 = lStack_48;
  __ZdlPv();
  return;
}



/* Entry: 1096bad98; end: 1096bae1f;  */

void FUN_1096bad98(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10);
  lVar3 = *(long *)(lVar2 + 0x48);
  iVar1 = 0;
  if (lVar3 != 0) {
    iVar1 = (int)((ulong)(*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8)) >> 2);
  }
  FUN_1094cca1c(param_1,(long)*(int *)(lVar2 + 0xc) + (long)iVar1);
  FUN_1096bacd0(param_2,(int)((ulong)(param_1[1] - *param_1) >> 2) * -0x55555555);
  return;
}



/* Entry: 1096bae20; end: 1096baeaf;  */

void FUN_1096bae20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  FUN_1096b6ad4(lVar1 + 8,param_2,
                (ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 2 & 0xffffffff,
                *(long *)(lVar1 + 0x18),3,&uStack_38);
  uStack_48 = uStack_38;
  uStack_40 = uStack_30;
  lVar1 = *(long *)(param_1 + 8) + 8;
  FUN_1096baeb0(lVar1,&uStack_48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_109699d9c(lVar1 + 0x28);
  return;
}



/* Entry: 1096baeb0; end: 1096baf17;  */

void FUN_1096baeb0(long param_1)

{
  FUN_109699d9c(param_1 + 0x28);
  return;
}



/* Entry: 1096baf18; end: 1096bb183;  */

void FUN_1096baf18(long *param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x10);
  lVar8 = *(long *)(lVar7 + 0x48);
  iVar6 = 0;
  if (lVar8 != 0) {
    iVar6 = (int)((ulong)(*(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8)) >> 2);
  }
  FUN_109367d10(&lStack_88,((long)*(int *)(lVar7 + 0xc) + (long)iVar6) * 3);
  lVar7 = *(long *)(param_2 + 8);
  FUN_1096b6a28(lVar7 + 8,
                (ulong)(*(long *)(lVar7 + 0x20) - *(long *)(lVar7 + 0x18)) >> 2 & 0xffffffff,
                *(long *)(lVar7 + 0x18),(ulong)(lStack_80 - lStack_88) >> 2 & 0xffffffff);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x10);
  lVar8 = *(long *)(lVar7 + 0x48);
  iVar6 = 0;
  if (lVar8 != 0) {
    iVar6 = (int)((ulong)(*(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8)) >> 2);
  }
  lVar7 = (long)*(int *)(lVar7 + 0xc) + (long)iVar6;
  if ((int)lVar7 != 0) {
    if ((int)lVar7 < 0) {
      FUN_1096a5d04();
LAB_1096bb144:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1096bb148);
      (*pcVar3)();
    }
    plVar4 = param_1;
    FUN_1096a5d18();
    lVar11 = (long)plVar4 - (param_1[1] - *param_1);
    _memcpy(lVar11);
    lVar8 = *param_1;
    *param_1 = lVar11;
    param_1[1] = (long)plVar4;
    param_1[2] = (long)(plVar4 + lVar7);
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  lVar8 = 0;
  lVar7 = 0;
  do {
    lVar11 = *(long *)(*(long *)(param_2 + 8) + 0x10);
    lVar9 = *(long *)(lVar11 + 0x48);
    iVar6 = 0;
    if (lVar9 != 0) {
      iVar6 = (int)((ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8)) >> 2);
    }
    if ((long)*(int *)(lVar11 + 0xc) + (long)iVar6 <= lVar7) {
      if (lStack_88 != 0) {
        lStack_80 = lStack_88;
        __ZdlPv();
      }
      return;
    }
    uVar13 = *(undefined4 *)((undefined8 *)(lStack_88 + lVar8) + 1);
    uVar14 = *(undefined8 *)(lStack_88 + lVar8);
    uStack_98 = uVar14;
    uStack_90 = uVar13;
    FUN_1096baeb0(*(long *)(param_2 + 8) + 8,&uStack_98);
    puVar12 = (undefined4 *)param_1[1];
    if (puVar12 < (undefined4 *)param_1[2]) {
      *puVar12 = uVar13;
      puVar12[1] = (int)uVar14;
      puVar12 = puVar12 + 2;
    }
    else {
      lVar11 = (long)puVar12 - *param_1;
      uVar1 = (lVar11 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_1096a5d04();
        goto LAB_1096bb144;
      }
      uVar5 = param_1[2] - *param_1;
      uVar10 = (long)uVar5 >> 2;
      if (uVar10 <= uVar1) {
        uVar10 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar5) {
        uVar10 = 0x1fffffffffffffff;
      }
      plVar4 = param_1;
      FUN_1096a5d18();
      puVar2 = (undefined4 *)((long)plVar4 + lVar11);
      *puVar2 = uVar13;
      puVar2[1] = (int)uVar14;
      puVar12 = puVar2 + 2;
      lVar9 = (long)puVar2 - (param_1[1] - *param_1);
      _memcpy(lVar9);
      lVar11 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar12;
      param_1[2] = (long)(plVar4 + uVar10);
      if (lVar11 != 0) {
        __ZdlPv();
      }
    }
    param_1[1] = (long)puVar12;
    lVar7 = lVar7 + 1;
    lVar8 = lVar8 + 0xc;
  } while( true );
}



/* Entry: 1096bb184; end: 1096bb29f;  */

void FUN_1096bb184(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(float *)(*(long *)(param_1 + 8) + 0x60) == 0.0) {
    FUN_1096b9e2c(auStack_80,param_2);
    FUN_1096b985c(&uStack_50,auStack_80,*(long *)(param_1 + 8) + 0x30);
    FUN_1096baa30(param_1);
    lVar1 = *(long *)(param_1 + 8);
    *(undefined8 *)(lVar1 + 0x38) = uStack_48;
    *(undefined8 *)(lVar1 + 0x30) = uStack_50;
    *(undefined8 *)(lVar1 + 0x48) = uStack_38;
    *(undefined8 *)(lVar1 + 0x40) = uStack_40;
    *(undefined8 *)(lVar1 + 0x58) = uStack_28;
    *(undefined8 *)(lVar1 + 0x50) = uStack_30;
  }
  else {
    uVar4 = *(ulong *)param_2;
    uVar5 = uVar4;
    _hypotf(uVar4,uVar4 >> 0x20);
    uStack_50 = CONCAT44((float)(uVar4 >> 0x20) / (float)uVar5,(float)uVar4 / (float)uVar5);
    uStack_48 = 0;
    FUN_1096b9e2c(auStack_80,&uStack_50);
    FUN_1096b985c(&uStack_50,auStack_80,*(long *)(param_1 + 8) + 0x30);
    FUN_1096baa30(param_1);
    lVar1 = *(long *)(param_1 + 8);
    *(undefined8 *)(lVar1 + 0x38) = uStack_48;
    *(undefined8 *)(lVar1 + 0x30) = uStack_50;
    *(undefined8 *)(lVar1 + 0x48) = uStack_38;
    *(undefined8 *)(lVar1 + 0x40) = uStack_40;
    *(undefined8 *)(lVar1 + 0x58) = uStack_28;
    *(undefined8 *)(lVar1 + 0x50) = uStack_30;
    lVar1 = *(long *)(param_1 + 8);
    fVar2 = *param_2;
    fVar6 = param_2[1];
    fVar3 = fVar2;
    _hypotf();
    fVar7 = (float)*(undefined8 *)(lVar1 + 0x68);
    uVar8 = *(undefined8 *)(param_2 + 2);
    *(ulong *)(lVar1 + 0x60) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20) * fVar3,
                  (float)*(undefined8 *)(lVar1 + 0x60) * fVar3);
    *(ulong *)(lVar1 + 0x68) =
         CONCAT44((float)((ulong)uVar8 >> 0x20) +
                  fVar7 * fVar6 + (float)((ulong)*(undefined8 *)(lVar1 + 0x68) >> 0x20) * fVar2,
                  (float)uVar8 + -*(float *)(lVar1 + 0x6c) * fVar6 + fVar7 * fVar2);
  }
  return;
}



/* Entry: 1096bb2a0; end: 1096bb36f;  */

void FUN_1096bb2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6,long *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  (**(code **)(*param_7 + 0x20))(param_7,param_6,*(long *)(param_5 + 8) + 8);
  lVar3 = *(long *)(param_5 + 8);
  lVar1 = *(long *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x20);
  FUN_1096bb814(lVar3 + 0x30);
  uStack_4c = *(undefined4 *)(lVar3 + 0x3c);
  uStack_48 = *(undefined4 *)(lVar3 + 0x4c);
  uStack_44 = *(undefined4 *)(lVar3 + 0x5c);
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  (**(code **)(*param_6 + 0x48))(param_6,&uStack_40,0x10,1);
  (**(code **)(*param_6 + 0x48))(param_6,&uStack_4c,0xc,1);
  (**(code **)(*param_6 + 0x48))(param_6,lVar1,4,(lVar2 - lVar1) * 0x40000000 >> 0x20);
  return;
}



/* Entry: 1096bb370; end: 1096bb583;  */

undefined8 * FUN_1096bb370(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_1 + 8);
  (**(code **)(*param_3 + 0x28))(&ppuStack_70,param_3);
  pppuVar4 = &ppuStack_70;
  ___dynamic_cast(pppuVar4,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
  if (pppuVar4 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  ppuVar13 = pppuVar4[1];
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar9 = ppuVar13 + -1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar3) {
        *(int *)ppuVar9 = *(int *)ppuVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_a8 = *(undefined8 *)(lVar12 + 0x10);
  *(undefined ***)(lVar12 + 0x10) = ppuVar13;
  *(undefined ***)(lVar12 + 8) = &PTR_FUN_110b04b98;
  ppuStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_b0);
  ppuStack_70 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_70);
  lVar12 = param_3[1] + -0x20;
  uVar8 = uRam000000011382aa08;
  func_0x0001096966c0();
  iVar7 = (int)uVar8;
  if (lVar12 == 0) {
    lVar10 = *(long *)(param_1 + 8);
    lVar12 = *(long *)(lVar10 + 0x18);
    lVar1 = *(long *)(lVar10 + 0x20);
    uStack_68 = 0x3f80000000000000;
    ppuStack_70 = (undefined **)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&ppuStack_70,0x10,1);
    if ((int)plVar6 != 1) {
      pppuVar4 = &ppuStack_70;
      FUN_1096bb950(&ppuStack_b0,pppuVar4,&uStack_80);
      iVar7 = (int)pppuVar4;
      puVar5 = (undefined8 *)0x0;
      *(undefined8 *)(lVar10 + 0x38) = uStack_a8;
      *(undefined ***)(lVar10 + 0x30) = ppuStack_b0;
      *(undefined8 *)(lVar10 + 0x48) = uStack_98;
      *(undefined8 *)(lVar10 + 0x40) = uStack_a0;
      *(undefined8 *)(lVar10 + 0x58) = uStack_88;
      *(undefined8 *)(lVar10 + 0x50) = uStack_90;
      goto LAB_1096bb53c;
    }
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&uStack_80,0xc,1);
    pppuVar4 = &ppuStack_70;
    FUN_1096bb950(&ppuStack_b0,pppuVar4,&uStack_80);
    iVar7 = (int)pppuVar4;
    *(undefined8 *)(lVar10 + 0x38) = uStack_a8;
    *(undefined ***)(lVar10 + 0x30) = ppuStack_b0;
    *(undefined8 *)(lVar10 + 0x48) = uStack_98;
    *(undefined8 *)(lVar10 + 0x40) = uStack_a0;
    *(undefined8 *)(lVar10 + 0x58) = uStack_88;
    *(undefined8 *)(lVar10 + 0x50) = uStack_90;
    if ((int)plVar6 == 1) {
      uVar11 = lVar1 - lVar12;
      (**(code **)(*param_2 + 0x40))(param_2,lVar12,4,(long)(uVar11 * 0x40000000) >> 0x20);
      iVar7 = (int)lVar12;
      puVar5 = (undefined8 *)(ulong)((int)(uVar11 >> 2) == (int)param_2);
      goto LAB_1096bb53c;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_1096bb53c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (iVar7 != 0) {
      func_0x000104bd46a0();
    }
    __Unwind_Resume();
    *puVar5 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4();
    return puVar5;
  }
  return puVar5;
}



/* Entry: 1096bb584; end: 1096bb5b7;  */

undefined8 * FUN_1096bb584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096bb5b8; end: 1096bb5eb;  */

void FUN_1096bb5b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096bb5ec; end: 1096bb60f;  */

undefined8 FUN_1096bb5ec(void)

{
  return 3;
}



/* Entry: 1096bb610; end: 1096bb657;  */

void FUN_1096bb610(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096bb658; end: 1096bb6af;  */

undefined8 * FUN_1096bb658(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096bb6b0; end: 1096bb707;  */

void FUN_1096bb6b0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b053a0;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096bb708; end: 1096bb753;  */

void FUN_1096bb708(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096ba870(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096bb754; end: 1096bb783;  */

bool FUN_1096bb754(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b053a0,0);
  return param_1 != 0;
}



/* Entry: 1096bb784; end: 1096bb7cb;  */

long FUN_1096bb784(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096bb7cc; end: 1096bb813;  */

void FUN_1096bb7cc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096bb814; end: 1096bb94f;  */

float FUN_1096bb814(float *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float afStack_18 [6];
  
  afStack_18[2] = 0.0;
  fVar5 = *param_1;
  fVar4 = SQRT(fVar5 * fVar5 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  fVar6 = param_1[5];
  fVar7 = fVar5 + fVar6 + param_1[10];
  if (fVar7 <= 0.0) {
    uVar3 = 2;
    if (param_1[10] <= param_1[(ulong)(fVar5 < fVar6) * 5]) {
      uVar3 = (uint)(fVar5 < fVar6);
    }
    uVar1 = 0;
    if (uVar3 != 2) {
      uVar1 = uVar3 + 1;
    }
    uVar2 = uVar1 - 2;
    if (uVar1 + 1 < 3) {
      uVar2 = uVar1 + 1;
    }
    fVar4 = SQRT(fVar4 + ((param_1[(ulong)uVar3 * 4 + (ulong)uVar3] -
                          param_1[(ulong)uVar1 * 4 + (ulong)uVar1]) -
                         param_1[(ulong)uVar2 * 4 + (ulong)uVar2]));
    afStack_18[(ulong)uVar3 + 2] = fVar4 * 0.5;
    fVar4 = 0.5 / fVar4;
    afStack_18[(ulong)uVar1 + 2] =
         fVar4 * (param_1[(ulong)uVar1 * 4 + (ulong)uVar3] +
                 param_1[(ulong)uVar3 * 4 + (ulong)uVar1]);
    afStack_18[(long)(int)uVar2 + 2] =
         fVar4 * (param_1[(ulong)uVar2 * 4 + (ulong)uVar3] +
                 param_1[(ulong)uVar3 * 4 + (ulong)uVar2]);
  }
  else {
    afStack_18[2] = (0.5 / SQRT(fVar7 + fVar4)) * (param_1[9] - param_1[6]);
  }
  return afStack_18[2];
}



/* Entry: 1096bb950; end: 1096bba37;  */

void FUN_1096bb950(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_2[3] * param_2[3];
  fVar3 = *param_2 * *param_2;
  fVar4 = param_2[1] * param_2[1];
  fVar2 = param_2[2] * param_2[2];
  *param_1 = ((fVar1 + fVar3) - fVar4) - fVar2;
  fVar5 = -(param_2[3] * param_2[2]) + param_2[1] * *param_2;
  param_1[1] = fVar5 + fVar5;
  fVar5 = param_2[3] * param_2[1] + param_2[2] * *param_2;
  param_1[2] = fVar5 + fVar5;
  fVar5 = param_2[3] * param_2[2] + param_2[1] * *param_2;
  fVar1 = fVar1 - fVar3;
  param_1[4] = fVar5 + fVar5;
  param_1[5] = (fVar1 + fVar4) - fVar2;
  fVar3 = -(param_2[3] * *param_2) + param_2[2] * param_2[1];
  param_1[6] = fVar3 + fVar3;
  fVar3 = -(param_2[3] * param_2[1]) + param_2[2] * *param_2;
  param_1[8] = fVar3 + fVar3;
  fVar3 = param_2[3] * *param_2 + param_2[2] * param_2[1];
  param_1[9] = fVar3 + fVar3;
  param_1[10] = (fVar1 - fVar4) + fVar2;
  param_1[3] = *param_3;
  param_1[7] = param_3[1];
  param_1[0xb] = param_3[2];
  return;
}



/* Entry: 1096bba38; end: 1096bbae3;  */

void FUN_1096bba38(long *param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = param_4;
  (**(code **)(*param_4 + 0x28))();
  FUN_1096a5c58(param_1,(long)(int)plVar1);
  lVar4 = 0;
  for (lVar3 = 0; plVar1 = param_4, (**(code **)(*param_4 + 0x28))(), lVar3 < (int)plVar1;
      lVar3 = lVar3 + 1) {
    (**(code **)(*param_4 + 0x30))(param_4,lVar3);
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + lVar4) = param_2;
    ((undefined4 *)(lVar2 + lVar4))[1] = param_3;
    lVar4 = lVar4 + 8;
  }
  return;
}



/* Entry: 1096bbae4; end: 1096bbaf7;  */

void FUN_1096bbae4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096bbaf8; end: 1096bbb27;  */

void FUN_1096bbaf8(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096bbb28; end: 1096bbb5f;  */

void FUN_1096bbb28(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x21;
  __Znam();
  lVar6 = 0x10;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096bbb60; end: 1096bbb8b;  */

void FUN_1096bbb60(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b054e8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096bbb8c; end: 1096bbcc7;  */

void FUN_1096bbb8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 *puStack_48;
  long lStack_28;
  
  pppuVar2 = &ppuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar3 = 0x10b055f8;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    uStack_50 = 0;
    ppuStack_60 = &PTR_DAT_110b05620;
    uStack_58 = 0;
    puVar1 = (undefined1 *)0x1;
    _malloc();
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puStack_48 = puVar1;
    func_0x000107c2accc();
    func_0x000107c2ace0();
    if (puStack_48 != (undefined1 *)0x0) {
      _free();
    }
    func_0x000107c2accc();
    iVar3 = 0x10b055f8;
    func_0x00010969659c(&ppuStack_60);
    uVar4 = param_1[1];
    param_1[1] = uStack_58;
    *param_1 = ppuStack_60;
    ppuStack_60 = &PTR_FUN_110b01d60;
    uStack_58 = uVar4;
    func_0x000107c2acd4();
    param_2 = pppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107c2acf0();
  *param_2 = &PTR_FUN_110b055d8;
  return;
}



/* Entry: 1096bbcc8; end: 1096bbceb;  */

void FUN_1096bbcc8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c2acf0();
  *param_1 = &PTR_FUN_110b055d8;
  return;
}



/* Entry: 1096bbcec; end: 1096bbd1f;  */

undefined8 * FUN_1096bbcec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096bbd20; end: 1096bbd53;  */

void FUN_1096bbd20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096bbd54; end: 1096bbd83;  */

bool FUN_1096bbd54(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b054e8,0);
  return param_1 != 0;
}



/* Entry: 1096bbd84; end: 1096bbddf;  */

void FUN_1096bbd84(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110b01d60;
  uVar4 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar4;
  if (param_2[1] != 0) {
    piVar3 = (int *)(param_2[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_2 = &PTR_FUN_110b055d8;
  return;
}



/* Entry: 1096bbde0; end: 1096bbe27;  */

void FUN_1096bbde0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096bbe28; end: 1096bbe97;  */

undefined8 * FUN_1096bbe28(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096bbe98; end: 1096bbeef;  */

void FUN_1096bbe98(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b055f8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096bbef0; end: 1096bbf4b;  */

void FUN_1096bbef0(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  ppuStack_30 = (undefined **)0x0;
  uStack_28 = 0;
  func_0x000107c2acf0(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = &PTR_FUN_110b055d8;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096bbf4c; end: 1096bbf7b;  */

bool FUN_1096bbf4c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b055f8,0);
  return param_1 != 0;
}



/* Entry: 1096bbf7c; end: 1096bc06f;  */

void FUN_1096bbf7c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar3,*param_2);
  if ((lVar3 == 0) || (puVar5 = *(undefined8 **)(lVar3 + 8), puVar5 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar3 = *(long *)(param_1 + 8) + -0x20;
    puVar5 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar3,param_2);
    *(undefined8 **)(lVar3 + 8) = puVar5;
    *puVar5 = &PTR_FUN_110b01d60;
    uVar6 = *param_3;
    puVar5[1] = param_3[1];
    *puVar5 = uVar6;
    if (puVar5[1] != 0) {
      piVar4 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *puVar5 = &PTR_FUN_110b057c8;
  }
  else if (puVar5[1] != param_3[1]) {
    func_0x000107c2acd4(puVar5);
    uVar6 = *param_3;
    puVar5[1] = param_3[1];
    *puVar5 = uVar6;
    if (puVar5[1] != 0) {
      piVar4 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096bc070; end: 1096bc083;  */

void FUN_1096bc070(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096bc084; end: 1096bc0b3;  */

void FUN_1096bc084(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096bc0b4; end: 1096bc0eb;  */

void FUN_1096bc0b4(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x21;
  __Znam();
  lVar6 = 0x10;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096bc0ec; end: 1096bc117;  */

void FUN_1096bc0ec(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b056d8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096bc118; end: 1096bc253;  */

void FUN_1096bc118(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 *puStack_48;
  long lStack_28;
  
  pppuVar2 = &ppuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar3 = 0x10b057e8;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    uStack_50 = 0;
    ppuStack_60 = &PTR_DAT_110b05810;
    uStack_58 = 0;
    puVar1 = (undefined1 *)0x1;
    _malloc();
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puStack_48 = puVar1;
    func_0x000107c2accc();
    func_0x000107c2ace0();
    if (puStack_48 != (undefined1 *)0x0) {
      _free();
    }
    func_0x000107c2accc();
    iVar3 = 0x10b057e8;
    func_0x00010969659c(&ppuStack_60);
    uVar4 = param_1[1];
    param_1[1] = uStack_58;
    *param_1 = ppuStack_60;
    ppuStack_60 = &PTR_FUN_110b01d60;
    uStack_58 = uVar4;
    func_0x000107c2acd4();
    param_2 = pppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107c2acf0();
  *param_2 = &PTR_FUN_110b057c8;
  return;
}



/* Entry: 1096bc254; end: 1096bc277;  */

void FUN_1096bc254(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c2acf0();
  *param_1 = &PTR_FUN_110b057c8;
  return;
}



/* Entry: 1096bc278; end: 1096bc2ab;  */

undefined8 * FUN_1096bc278(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096bc2ac; end: 1096bc2df;  */

void FUN_1096bc2ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096bc2e0; end: 1096bc30f;  */

bool FUN_1096bc2e0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b056d8,0);
  return param_1 != 0;
}



/* Entry: 1096bc310; end: 1096bc36b;  */

void FUN_1096bc310(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110b01d60;
  uVar4 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar4;
  if (param_2[1] != 0) {
    piVar3 = (int *)(param_2[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_2 = &PTR_FUN_110b057c8;
  return;
}



/* Entry: 1096bc36c; end: 1096bc3b3;  */

void FUN_1096bc36c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096bc3b4; end: 1096bc423;  */

undefined8 * FUN_1096bc3b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096bc424; end: 1096bc47b;  */

void FUN_1096bc424(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b057e8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096bc47c; end: 1096bc4d7;  */

void FUN_1096bc47c(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  ppuStack_30 = (undefined **)0x0;
  uStack_28 = 0;
  func_0x000107c2acf0(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = &PTR_FUN_110b057c8;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096bc4d8; end: 1096bc507;  */

bool FUN_1096bc4d8(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b057e8,0);
  return param_1 != 0;
}



/* Entry: 1096bc508; end: 1096bd18b;  */

void FUN_1096bc508(long *param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  float *pfVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  float *pfVar18;
  undefined8 *puVar19;
  float *pfVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  float fVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined **ppuStack_120;
  long lStack_118;
  float *pfStack_108;
  float *pfStack_100;
  float *pfStack_f0;
  float *pfStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(param_4 + 0x18);
  uStack_d8 = *(undefined8 *)(param_2 + 8);
  pfVar14 = (float *)(lVar21 + 0x28);
  FUN_1096bd5b4(pfVar14,&uStack_d8);
  if (pfVar14 == (float *)0x0) {
    pfVar20 = (float *)0x48;
    __Znwm();
    pfVar5 = pfVar20 + 2;
    pfVar5[0] = 0.0;
    pfVar5[1] = 0.0;
    pfVar20[4] = 0.0;
    pfVar20[5] = 0.0;
    *(undefined ***)pfVar20 = &PTR_DAT_110b05a38;
    pfVar6 = pfVar20 + 6;
    pfVar20[8] = 0.0;
    pfVar20[9] = 0.0;
    pfVar6[0] = 0.0;
    pfVar6[1] = 0.0;
    pfVar20[0xc] = 0.0;
    pfVar20[0xd] = 0.0;
    pfVar20[10] = 0.0;
    pfVar20[0xb] = 0.0;
    pfVar20[0x10] = 0.0;
    pfVar20[0x11] = 0.0;
    pfVar20[0xe] = 0.0;
    pfVar20[0xf] = 0.0;
    pfVar14 = pfVar20;
    func_0x000107c2acdc();
    *(undefined ***)pfVar6 = &PTR_FUN_110b01d60;
    lVar12 = *(long *)pfVar14;
    *(long *)(pfVar20 + 8) = *(long *)(pfVar14 + 2);
    *(long *)pfVar6 = lVar12;
    if (*(long *)(pfVar20 + 8) != 0) {
      piVar13 = (int *)(*(long *)(pfVar20 + 8) + -8);
      do {
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = *piVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(undefined ***)(pfVar20 + 6) = &PTR_FUN_110b051b8;
    pfVar20[0xc] = 0.0;
    pfVar20[0xd] = 0.0;
    pfVar20[0xe] = 0.0;
    pfVar20[0xf] = 0.0;
    pfVar20[10] = 0.0;
    pfVar20[0xb] = 0.0;
    pfVar20[0x10] = 0.0;
    do {
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pfVar5,0x10);
      if (bVar4) {
        *(long *)pfVar5 = *(long *)pfVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uStack_d0 = uStack_d8;
    pfStack_108 = (float *)0x0;
    pfStack_100 = (float *)0x0;
    pfVar14 = (float *)(lVar21 + 0x28);
    pfStack_f0 = pfVar6;
    pfStack_e8 = pfVar20;
    pfStack_c8 = pfVar6;
    pfStack_c0 = pfVar20;
    FUN_1096bd704(pfVar14,&uStack_d0,&uStack_d0);
    pfVar20 = pfStack_c0;
    if (pfStack_c0 != (float *)0x0) {
      pfVar5 = pfStack_c0 + 2;
      do {
        lVar21 = *(long *)pfVar5;
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pfVar5,0x10);
        if (bVar4) {
          *(long *)pfVar5 = lVar21 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*(long *)pfStack_c0 + 0x10))(pfStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pfVar14 = pfVar20;
      }
    }
    pfVar20 = pfStack_100;
    if (pfStack_100 != (float *)0x0) {
      pfVar5 = pfStack_100 + 2;
      do {
        lVar21 = *(long *)pfVar5;
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pfVar5,0x10);
        if (bVar4) {
          *(long *)pfVar5 = lVar21 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*(long *)pfStack_100 + 0x10))(pfStack_100);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pfVar14 = pfVar20;
      }
    }
    pfVar5 = pfStack_e8;
    pfVar20 = pfStack_f0;
    if (pfStack_e8 != (float *)0x0) {
      pfVar6 = pfStack_e8 + 2;
      do {
        lVar21 = *(long *)pfVar6;
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pfVar6,0x10);
        if (bVar4) {
          *(long *)pfVar6 = lVar21 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*(long *)pfStack_e8 + 0x10))(pfStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pfVar14 = pfVar5;
      }
    }
  }
  else {
    pfVar20 = *(float **)(pfVar14 + 6);
  }
  lVar21 = *(long *)(*(long *)(param_3 + 8) + 8);
  iVar40 = (int)((ulong)(*(long *)(*(long *)(param_3 + 8) + 0x10) - lVar21) >> 4);
  if (iVar40 == 0) {
    *(long *)(pfVar20 + 6) = *(long *)(pfVar20 + 4);
    func_0x000107c2acdc();
    if (*(long *)(pfVar20 + 2) != *(long *)(pfVar14 + 2)) {
      func_0x000107c2acd4(pfVar20);
      lVar21 = *(long *)pfVar14;
      *(long *)(pfVar20 + 2) = *(long *)(pfVar14 + 2);
      *(long *)pfVar20 = lVar21;
      if (*(long *)(pfVar20 + 2) != 0) {
        piVar13 = (int *)(*(long *)(pfVar20 + 2) + -8);
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = *piVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    lVar21 = *(long *)pfVar20;
    param_1[1] = *(long *)(pfVar20 + 2);
    *param_1 = lVar21;
    if (param_1[1] != 0) {
      piVar13 = (int *)(param_1[1] + -8);
      do {
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = *piVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *param_1 = (long)&PTR_FUN_110b051b8;
LAB_1096bd0a4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar21 = *(long *)(lVar21 + 8);
    uVar22 = *(long *)(lVar21 + 0x20) - *(long *)(lVar21 + 0x18);
    uVar15 = (long)(uVar22 * 0x20000000) >> 0x20;
    FUN_1096bd228(&pfStack_f0,uVar15);
    lVar12 = *(long *)(pfVar20 + 4);
    lVar21 = *(long *)(pfVar20 + 6);
    lVar24 = lVar21 - lVar12;
    bVar4 = uVar15 < (ulong)((lVar24 >> 3) * -0x30c30c30c30c30c3);
    uVar23 = uVar15 + (lVar24 >> 3) * 0x30c30c30c30c30c3;
    iVar26 = (int)(uVar22 >> 3);
    if (bVar4 || uVar23 == 0) {
      if (bVar4) {
        lVar21 = lVar12 + (long)(int)(uVar22 * 0x20000000 >> 0x20) * 0xa8;
        goto LAB_1096bc900;
      }
LAB_1096bc904:
      lVar21 = *(long *)(pfVar20 + 2);
      uVar23 = uVar22 >> 3 & 0x7fffffff;
      if (lVar21 == 0) {
        lVar12 = *(long *)(*(long *)(param_3 + 8) + 8);
        lVar12 = lVar12 + (long)(int)((ulong)(*(long *)(*(long *)(param_3 + 8) + 0x10) - lVar12) >>
                                     4) * 0x10;
        fVar30 = 0.0;
        if (*(long *)(lVar12 + -8) != 0) {
          func_0x000107c2acd4(pfVar20);
          lVar24 = *(long *)(lVar12 + -0x10);
          *(long *)(pfVar20 + 2) = *(long *)(lVar12 + -8);
          *(long *)pfVar20 = lVar24;
          if (*(long *)(pfVar20 + 2) != 0) {
            piVar13 = (int *)(*(long *)(pfVar20 + 2) + -8);
            do {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar4) {
                *piVar13 = *piVar13 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
        }
      }
      else {
        fVar30 = 2.0;
        if (0 < iVar26) {
          uVar11 = 0;
          lVar12 = *(long *)(pfVar20 + 4);
          pfVar14 = (float *)(lVar12 + 0x48);
          puVar16 = (undefined8 *)(lVar12 + 0x20);
          pfVar5 = (float *)(lVar12 + 0x18);
          do {
            pfVar18 = (float *)(lVar12 + uVar11 * 0xa8);
            pfVar6 = pfVar14;
            lVar24 = 1;
            puVar19 = puVar16;
            do {
              pfVar7 = pfVar18 + lVar24 * 2;
              *(ulong *)pfVar7 =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) +
                            (float)((ulong)*(undefined8 *)pfVar7 >> 0x20),
                            (float)*(undefined8 *)(pfVar7 + 2) + (float)*(undefined8 *)pfVar7);
              lVar25 = 6;
              puVar8 = puVar19;
              pfVar7 = pfVar6;
              do {
                *pfVar7 = pfVar7[0xc] + *pfVar7;
                pfVar7[6] = pfVar7[0x12] + pfVar7[6];
                *puVar8 = CONCAT44((float)((ulong)puVar8[1] >> 0x20) +
                                   (float)((ulong)*puVar8 >> 0x20),(float)puVar8[1] + (float)*puVar8
                                  );
                pfVar7 = pfVar7 + 1;
                lVar25 = lVar25 + -1;
                puVar8 = puVar8 + 3;
              } while (lVar25 != 0);
              pfVar6 = pfVar6 + -0xc;
              puVar19 = puVar19 + -1;
              bVar4 = lVar24 != 0;
              lVar24 = lVar24 + -1;
            } while (bVar4);
            lVar24 = 0;
            pfVar7 = pfVar5;
            pfVar6 = pfVar5;
            do {
              if (lVar24 != 0) {
                lVar25 = 0;
                pfVar9 = pfVar6;
                do {
                  fVar30 = (pfVar7[lVar25] + *pfVar9) * 0.5;
                  *pfVar9 = fVar30;
                  pfVar7[lVar25] = fVar30;
                  lVar25 = lVar25 + 1;
                  pfVar9 = pfVar9 + 6;
                } while (lVar24 != lVar25);
              }
              lVar24 = lVar24 + 1;
              pfVar6 = pfVar6 + 1;
              pfVar7 = pfVar7 + 6;
            } while (lVar24 != 6);
            lVar24 = 0;
            do {
              *(float *)((long)pfVar5 + lVar24) = *(float *)((long)pfVar5 + lVar24) + 1.0;
              lVar24 = lVar24 + 0x1c;
            } while (lVar24 != 0xa8);
            fVar39 = *pfVar18;
            fVar42 = pfVar18[1];
            fVar30 = pfVar18[7] + fVar39 * fVar39;
            fVar35 = pfVar18[6] + fVar42 * fVar42;
            fVar37 = pfVar18[0xd] + fVar42 * fVar39;
            pfVar6 = pfStack_f0 + uVar11 * 5;
            uVar28 = *(undefined8 *)(pfVar6 + 2);
            uVar32 = *(undefined8 *)pfVar6;
            uVar11 = uVar11 + 1;
            pfVar6[2] = fVar35 + fVar35 + (float)uVar28;
            pfVar6[3] = fVar39 + fVar39 + (float)((ulong)uVar28 >> 0x20);
            *pfVar6 = fVar37 + fVar37 + (float)uVar32;
            pfVar6[1] = fVar30 + fVar30 + (float)((ulong)uVar32 >> 0x20);
            pfVar6[4] = fVar42 + fVar42 + pfVar6[4];
            pfVar14 = pfVar14 + 0x2a;
            puVar16 = puVar16 + 0x15;
            pfVar5 = pfVar5 + 0x2a;
            fVar30 = 2.0;
          } while (uVar11 != uVar23);
        }
      }
      FUN_1096a5c58(&pfStack_108,uVar15);
      lVar12 = *(long *)(pfVar20 + 2);
      fVar35 = *(float *)(lVar12 + 8);
      uVar32 = *(undefined8 *)(lVar12 + 0x10);
      fVar37 = *(float *)(lVar12 + 0x14);
      _hypotf(fVar35,*(undefined4 *)(lVar12 + 0xc));
      fVar42 = fVar35 * 0.0;
      lVar12 = *(long *)(*(long *)(param_3 + 8) + 8);
      uVar15 = (*(long *)(*(long *)(param_3 + 8) + 0x10) - lVar12) * 0x10000000 >> 0x1c &
               0xfffffffffffffff0;
      fVar39 = (float)uVar32;
      if (uVar15 != 0) {
        fVar31 = 1.0 / (fVar42 * fVar42 + fVar35 * fVar35);
        fVar38 = -(fVar35 * 0.0) * fVar31;
        fVar31 = fVar35 * fVar31;
        uVar28 = NEON_ext(CONCAT44(-fVar31,-fVar38),CONCAT44(fVar31,fVar38),4,1);
        lVar24 = lVar12 + uVar15;
        do {
          FUN_1096ba118(lVar12,(ulong)((long)pfStack_100 - (long)pfStack_108) >> 3 & 0xffffffff);
          if (0 < iVar26) {
            pfVar14 = pfStack_108;
            pfVar5 = pfStack_f0 + 4;
            uVar15 = uVar22 >> 3 & 0xffffffff;
            do {
              lVar25 = *(long *)pfVar14;
              uVar33 = NEON_rev64(lVar25,4);
              fVar27 = ((float)uVar28 * fVar37 - fVar38 * fVar39) +
                       (float)lVar25 * fVar38 + (float)uVar33 * fVar31;
              fVar29 = ((float)((ulong)uVar28 >> 0x20) * fVar37 - fVar31 * fVar39) +
                       -(float)((ulong)lVar25 >> 0x20) * fVar38 +
                       (float)((ulong)uVar33 >> 0x20) * fVar31;
              auVar34._0_4_ = fVar27 * fVar27 + 0.0;
              auVar34._4_4_ = auVar34._0_4_;
              auVar34._8_4_ = auVar34._0_4_;
              auVar34._12_4_ = fVar29;
              auVar34 = NEON_ext(auVar34,auVar34,8,1);
              pfVar5[-2] = auVar34._0_4_ + pfVar5[-2];
              pfVar5[-1] = auVar34._4_4_ + pfVar5[-1];
              pfVar5[-4] = fVar27 * fVar29 + 0.0 + pfVar5[-4];
              pfVar5[-3] = fVar29 * fVar29 + 0.0 + pfVar5[-3];
              *pfVar5 = fVar27 + *pfVar5;
              uVar15 = uVar15 - 1;
              pfVar14 = pfVar14 + 2;
              pfVar5 = pfVar5 + 5;
            } while (uVar15 != 0);
          }
          fVar30 = fVar30 + 1.0;
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != lVar24);
      }
      if (0 < iVar26) {
        fVar31 = 1.0 / fVar30;
        fVar30 = (float)iVar40 / (fVar30 + -1.0);
        pfVar14 = pfStack_f0;
        uVar15 = uVar23;
        do {
          fVar27 = (float)*(undefined8 *)(pfVar14 + 3) * fVar31;
          fVar29 = (float)((ulong)*(undefined8 *)(pfVar14 + 3) >> 0x20) * fVar31;
          dVar36 = (double)CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20) * fVar31,
                                    (float)*(undefined8 *)(pfVar14 + 1) * fVar31) -
                   (double)CONCAT44(fVar29 * fVar29,fVar27 * fVar27);
          iVar40 = -(uint)(SUB84(dVar36,0) < 0.0);
          iVar41 = -(uint)((float)((ulong)dVar36 >> 0x20) < 0.0);
          fVar38 = (float)CONCAT13((byte)((ulong)dVar36 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                                   CONCAT12((byte)((ulong)dVar36 >> 0x10) &
                                            ~(byte)((uint)iVar40 >> 0x10),
                                            CONCAT11((byte)((ulong)dVar36 >> 8) &
                                                     ~(byte)((uint)iVar40 >> 8),
                                                     SUB81(dVar36,0) & ~(byte)iVar40)));
          *pfVar14 = fVar30 * (fVar31 * *pfVar14 - fVar27 * fVar29);
          *(ulong *)(pfVar14 + 1) =
               CONCAT44((float)(CONCAT17((byte)((ulong)dVar36 >> 0x38) &
                                         ~(byte)((uint)iVar41 >> 0x18),
                                         CONCAT16((byte)((ulong)dVar36 >> 0x30) &
                                                  ~(byte)((uint)iVar41 >> 0x10),
                                                  CONCAT15((byte)((ulong)dVar36 >> 0x28) &
                                                           ~(byte)((uint)iVar41 >> 8),
                                                           CONCAT14((byte)((ulong)dVar36 >> 0x20) &
                                                                    ~(byte)iVar41,fVar38)))) >> 0x20
                               ) * fVar30,fVar38 * fVar30);
          *(ulong *)(pfVar14 + 3) = CONCAT44(fVar29,fVar27);
          pfVar14 = pfVar14 + 5;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        pfVar14 = *(float **)(pfVar20 + 4);
        if (lVar21 == 0) {
          pfVar5 = pfVar14 + 0xd;
          pfVar6 = pfStack_f0 + 3;
          uVar15 = uVar23;
          do {
            fVar30 = pfVar6[-1];
            uVar33 = *(undefined8 *)(pfVar6 + -3);
            *(undefined8 *)(pfVar5 + -0xd) = *(undefined8 *)pfVar6;
            uVar28 = NEON_rev64(uVar33,4);
            *(undefined8 *)(pfVar5 + -7) = uVar28;
            pfVar5[-1] = (float)uVar33;
            *pfVar5 = fVar30;
            pfVar5 = pfVar5 + 0x2a;
            pfVar6 = pfVar6 + 5;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        else {
          uVar15 = 0;
          pfVar5 = pfVar14 + 7;
          pfVar6 = pfVar14 + 6;
          pfVar18 = pfVar14;
          do {
            lVar21 = 0;
            pfVar7 = pfVar14 + uVar15 * 0x2a;
            pfVar9 = pfStack_f0 + uVar15 * 5;
            fVar31 = pfVar9[1];
            fVar38 = pfVar9[2];
            fVar27 = pfVar9[3];
            fVar29 = pfVar9[4];
            fVar43 = pfVar7[7];
            fVar46 = *pfVar7;
            fVar48 = pfVar7[1];
            pfVar10 = pfVar7 + 6;
            fVar49 = *pfVar10;
            fVar30 = *pfVar9 + pfVar7[0xd];
            fVar45 = -(fVar30 * fVar30) + (fVar38 + fVar49) * (fVar31 + fVar43);
            pfVar7 = pfVar5;
            pfVar9 = pfVar18;
            do {
              fVar47 = (-fVar30 / fVar45) * *pfVar7 + ((fVar38 + fVar49) / fVar45) * pfVar7[-1];
              fVar44 = ((fVar31 + fVar43) / fVar45) * *pfVar7 + (-fVar30 / fVar45) * pfVar7[-1];
              *(float *)((long)&uStack_d0 + lVar21) = fVar47;
              *(float *)((long)&uStack_d0 + lVar21 + 4) = fVar44;
              *pfVar9 = *pfVar9 + (fVar29 - fVar48) * fVar44 + (fVar27 - fVar46) * fVar47;
              lVar21 = lVar21 + 8;
              pfVar7 = pfVar7 + 6;
              pfVar9 = pfVar9 + 1;
            } while (lVar21 != 0x30);
            lVar21 = 0;
            pfVar7 = pfVar18;
            do {
              fVar30 = *(float *)(&uStack_d0 + lVar21);
              fVar31 = *(float *)((long)&uStack_d0 + lVar21 * 8 + 4);
              lVar12 = 0x18;
              do {
                *(float *)((long)pfVar7 + lVar12) =
                     *(float *)((long)pfVar7 + lVar12) -
                     (fVar31 * ((float *)((long)pfVar18 + lVar12))[6] +
                     *(float *)((long)pfVar18 + lVar12) * fVar30);
                lVar12 = lVar12 + 4;
              } while (lVar12 != 0x30);
              fVar30 = 0.0;
              if (0.0 <= pfVar10[lVar21 * 7]) {
                fVar30 = pfVar10[lVar21 * 7];
              }
              pfVar10[lVar21 * 7] = fVar30;
              lVar21 = lVar21 + 1;
              pfVar7 = pfVar7 + 6;
            } while (lVar21 != 6);
            lVar21 = 0;
            pfVar9 = pfVar6;
            pfVar7 = pfVar6;
            do {
              if (lVar21 != 0) {
                lVar12 = 0;
                pfVar10 = pfVar7;
                do {
                  fVar30 = (pfVar9[lVar12] + *pfVar10) * 0.5;
                  *pfVar10 = fVar30;
                  pfVar9[lVar12] = fVar30;
                  lVar12 = lVar12 + 1;
                  pfVar10 = pfVar10 + 6;
                } while (lVar21 != lVar12);
              }
              lVar21 = lVar21 + 1;
              pfVar7 = pfVar7 + 1;
              pfVar9 = pfVar9 + 6;
            } while (lVar21 != 6);
            uVar15 = uVar15 + 1;
            pfVar18 = pfVar18 + 0x2a;
            pfVar5 = pfVar5 + 0x2a;
            pfVar6 = pfVar6 + 0x2a;
          } while (uVar15 != uVar23);
        }
        pfVar5 = pfStack_108 + 1;
        pfVar14 = pfVar14 + 1;
        uVar15 = uVar23;
        do {
          fVar30 = pfVar14[-1];
          fVar31 = *pfVar14;
          pfVar5[-1] = fVar39 + -(fVar31 * fVar42) + fVar35 * fVar30;
          *pfVar5 = fVar37 + fVar35 * fVar31 + fVar42 * fVar30;
          pfVar5 = pfVar5 + 2;
          pfVar14 = pfVar14 + 0x2a;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      lStack_118 = *(long *)(param_3 + 8);
      if (lStack_118 != 0) {
        piVar13 = (int *)(lStack_118 + -8);
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = *piVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_120 = &PTR_FUN_110b05928;
      plVar2 = (long *)(*(long *)(lStack_118 + 8) +
                       (long)((int)((ulong)(*(long *)(lStack_118 + 0x10) - *(long *)(lStack_118 + 8)
                                           ) >> 4) / 2) * 0x10);
      lVar21 = *plVar2;
      param_1[1] = plVar2[1];
      *param_1 = lVar21;
      if (param_1[1] != 0) {
        piVar13 = (int *)(param_1[1] + -8);
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar4) {
            *piVar13 = *piVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *param_1 = (long)&PTR_FUN_110b051b8;
      FUN_1096c0b60(param_1,(ulong)((long)pfStack_100 - (long)pfStack_108) >> 3 & 0xffffffff);
      ppuStack_120 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_120);
      if (*(long *)(pfVar20 + 2) != param_1[1]) {
        func_0x000107c2acd4(pfVar20);
        lVar21 = *param_1;
        *(long *)(pfVar20 + 2) = param_1[1];
        *(long *)pfVar20 = lVar21;
        if (*(long *)(pfVar20 + 2) != 0) {
          piVar13 = (int *)(*(long *)(pfVar20 + 2) + -8);
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar4) {
              *piVar13 = *piVar13 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      lVar21 = param_1[1];
      fVar30 = *(float *)(lVar21 + 8);
      _hypotf(fVar30,*(undefined4 *)(lVar21 + 0xc));
      if (0 < iVar26) {
        fVar37 = 1.0 / (fVar30 * 0.0 * fVar30 * 0.0 + fVar30 * fVar30);
        fVar29 = -(fVar30 * 0.0) * fVar37;
        fVar30 = fVar30 * fVar37;
        uVar28 = CONCAT44(-fVar30,-fVar29);
        fVar37 = (float)((ulong)uVar32 >> 0x20);
        fVar38 = (float)((ulong)*(undefined8 *)(lVar21 + 0x10) >> 0x20);
        uVar33 = NEON_ext(CONCAT44(fVar30,fVar29),uVar28,4,1);
        fVar31 = (float)*(undefined8 *)(lVar21 + 0x10);
        uVar32 = NEON_ext(uVar28,CONCAT44(fVar30,fVar29),4,1);
        fVar27 = -(fVar29 * fVar42) + fVar35 * fVar30;
        lVar12 = *(long *)(pfVar20 + 4);
        _hypotf(fVar27,fVar42 * fVar30 + fVar35 * fVar29);
        uVar15 = 0;
        lVar21 = lVar12 + 0x18;
        do {
          lVar24 = 0;
          puVar16 = (undefined8 *)(lVar12 + uVar15 * 0xa8);
          lVar25 = lVar21;
          do {
            lVar17 = 0;
            *(float *)((long)puVar16 + lVar24 * 4) = fVar27 * *(float *)((long)puVar16 + lVar24 * 4)
            ;
            do {
              *(float *)(lVar25 + lVar17) = fVar27 * fVar27 * *(float *)(lVar25 + lVar17);
              lVar17 = lVar17 + 4;
            } while (lVar17 != 0x18);
            lVar24 = lVar24 + 1;
            lVar25 = lVar25 + 0x18;
          } while (lVar24 != 6);
          *puVar16 = CONCAT44(fVar37 * fVar30 + fVar39 * (float)((ulong)uVar32 >> 0x20) +
                              fVar38 * -fVar30 + fVar31 * (float)((ulong)uVar33 >> 0x20) +
                              (float)((ulong)*puVar16 >> 0x20),
                              fVar38 * fVar29 + fVar31 * (float)uVar32 +
                              fVar37 * -fVar29 + fVar39 * (float)uVar33 + (float)*puVar16);
          uVar15 = uVar15 + 1;
          lVar21 = lVar21 + 0xa8;
        } while (uVar15 != uVar23);
      }
      if (pfStack_108 != (float *)0x0) {
        pfStack_100 = pfStack_108;
        __ZdlPv();
      }
      if (pfStack_f0 != (float *)0x0) {
        pfStack_e8 = pfStack_f0;
        __ZdlPv();
      }
      goto LAB_1096bd0a4;
    }
    if (uVar23 <= (ulong)((*(long *)(pfVar20 + 8) - lVar21 >> 3) * -0x30c30c30c30c30c3)) {
      lVar12 = ((uVar23 * 0xa8 - 0xa8) / 0xa8) * 0xa8 + 0xa8;
      _bzero(lVar21,lVar12);
      lVar21 = lVar21 + lVar12;
LAB_1096bc900:
      *(long *)(pfVar20 + 6) = lVar21;
      goto LAB_1096bc904;
    }
    if (-1 < iVar26) {
      lVar21 = *(long *)(pfVar20 + 8) - lVar12 >> 3;
      uVar11 = lVar21 * -0x6186186186186186;
      if (uVar11 < uVar15 || uVar11 - uVar15 == 0) {
        uVar11 = uVar15;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
        uVar11 = 0x186186186186186;
      }
      if (0x186186186186186 < uVar11) {
        func_0x000104c4f740();
        goto LAB_1096bd0f8;
      }
      lVar21 = uVar11 * 0xa8;
      __Znwm();
      lVar25 = ((uVar23 * 0xa8 - 0xa8) / 0xa8) * 0xa8 + 0xa8;
      _bzero(lVar21 + lVar24,lVar25);
      _memcpy(lVar21,lVar12,lVar24);
      *(long *)(pfVar20 + 4) = lVar21;
      *(long *)(pfVar20 + 6) = lVar21 + lVar24 + lVar25;
      *(ulong *)(pfVar20 + 8) = lVar21 + uVar11 * 0xa8;
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
      goto LAB_1096bc904;
    }
  }
  FUN_1096bd358();
LAB_1096bd0f8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1096bd0fc);
  (*pcVar3)();
}



/* Entry: 1096bd18c; end: 1096bd1bf;  */

undefined8 * FUN_1096bd18c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096bd1c0; end: 1096bd1f3;  */

undefined8 * FUN_1096bd1c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096bd1f4; end: 1096bd227;  */

void FUN_1096bd1f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096bd228; end: 1096bd2bf;  */

undefined8 * FUN_1096bd228(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1096bd2c0(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0x14 - 0x14U) / 0x14) * 0x14 + 0x14;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 1096bd2c0; end: 1096bd303;  */

void FUN_1096bd2c0(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 < 0xccccccccccccccd) {
    plVar1 = param_1;
    FUN_1096bd318();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 0x14;
    return;
  }
  FUN_1096bd304();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0xccccccccccccccd) {
    __Znwm(param_2 * 0x14);
    return;
  }
  func_0x000104c4f740();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar2 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1096bd304; end: 1096bd317;  */

void FUN_1096bd304(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0xccccccccccccccd) {
    __Znwm(param_2 * 0x14);
    return;
  }
  func_0x000104c4f740();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1096bd318; end: 1096bd357;  */

void FUN_1096bd318(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xccccccccccccccd) {
    __Znwm(param_2 * 0x14);
    return;
  }
  func_0x000104c4f740();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1096bd358; end: 1096bd36b;  */

void FUN_1096bd358(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  *puVar1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1096bd36c; end: 1096bd39f;  */

void FUN_1096bd36c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096bd3a0; end: 1096bd3bb;  */

void FUN_1096bd3a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096bd3bc; end: 1096bd403;  */

void FUN_1096bd3bc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096bd404; end: 1096bd45b;  */

undefined8 * FUN_1096bd404(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096bd45c; end: 1096bd4b3;  */

void FUN_1096bd45c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b05900;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096bd4b4; end: 1096bd52b;  */

void FUN_1096bd4b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  param_1[1] = puVar1;
  *param_1 = &PTR_FUN_110b058d8;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096bd52c; end: 1096bd55b;  */

bool FUN_1096bd52c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b05900,0);
  return param_1 != 0;
}



/* Entry: 1096bd55c; end: 1096bd5b3;  */

long FUN_1096bd55c(long param_1)

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



/* Entry: 1096bd5b4; end: 1096bd69b;  */

long * FUN_1096bd5b4(long *param_1,ulong *param_2)

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



/* Entry: 1096bd69c; end: 1096bd6bb;  */

void FUN_1096bd69c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b05a38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096bd6bc; end: 1096bd6ff;  */

void FUN_1096bd6bc(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4((undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1096bd700; end: 1096bd703;  */

void FUN_1096bd700(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096bd704; end: 1096bd963;  */

undefined1  [16] FUN_1096bd704(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_1096bd928;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x28;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  lVar6 = *param_3;
  plVar10[3] = param_3[1];
  plVar10[2] = lVar6;
  plVar10[4] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_1096bd964(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_1096bd918;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_1096bd918:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1096bd928:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 1096bd964; end: 1096bda33;  */

void FUN_1096bd964(ulong *param_1,ulong param_2)

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
LAB_1096bd9ac:
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
        func_0x000104c4f740();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            FUN_1092bc814(uVar7 + 0x18);
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
    if (param_2 < uVar7) goto LAB_1096bd9ac;
  }
  return;
}



/* Entry: 1096bda34; end: 1096bdbb7;  */

void FUN_1096bda34(ulong *param_1,ulong param_2)

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
      func_0x000104c4f740();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          FUN_1092bc814(uVar1 + 0x18);
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



/* Entry: 1096bdbb8; end: 1096bdc77;  */

undefined8 * FUN_1096bdbb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b05a88;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x68);
  puVar1[2] = 0x3fee666666666666;
  puVar1[1] = 0x3fa999999999999a;
  puVar1[4] = 0x3fb999999999999a;
  puVar1[3] = 0x4014000000000000;
  puVar1[6] = 0x3ff0000000000000;
  puVar1[5] = 0x3fe8000000000000;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  *puVar1 = &PTR_FUN_110b05ba0;
  return param_1;
}



/* Entry: 1096bdc78; end: 1096be8bf;  */

void FUN_1096bdc78(long *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  undefined8 *puVar14;
  float *pfVar15;
  float *pfVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar29;
  undefined8 uVar26;
  long lVar27;
  double dVar28;
  double dVar30;
  float fVar31;
  undefined8 uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined **ppuStack_110;
  long lStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  
  lVar18 = *(long *)(param_4 + 0x18);
  uStack_d0 = *(long *)(param_2 + 8);
  plVar5 = (long *)(lVar18 + 0x28);
  FUN_1096bd5b4(plVar5,&uStack_d0);
  if (plVar5 == (long *)0x0) {
    plVar17 = (long *)0x60;
    __Znwm();
    plVar6 = plVar17 + 1;
    *plVar6 = 0;
    plVar17[2] = 0;
    *plVar17 = (long)&PTR_FUN_110b05c08;
    plVar21 = plVar17 + 3;
    plVar17[4] = 0;
    *plVar21 = 0;
    plVar17[6] = 0;
    plVar17[5] = 0;
    plVar17[8] = 0;
    plVar17[7] = 0;
    plVar17[10] = 0;
    plVar17[9] = 0;
    plVar17[0xb] = 0;
    plVar5 = plVar17;
    func_0x000107c2acdc();
    *plVar21 = (long)&PTR_FUN_110b01d60;
    lVar22 = *plVar5;
    plVar17[4] = plVar5[1];
    *plVar21 = lVar22;
    if (plVar17[4] != 0) {
      piVar10 = (int *)(plVar17[4] + -8);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar17[3] = (long)&PTR_FUN_110b051b8;
    *(undefined8 *)((long)plVar17 + 0x3c) = 0;
    *(undefined8 *)((long)plVar17 + 0x34) = 0;
    plVar17[10] = 0;
    plVar17[0xb] = 0;
    plVar17[9] = 0;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_c0 = uStack_d0;
    fStack_100 = 0.0;
    fStack_fc = 0.0;
    fStack_f8 = 0.0;
    fStack_f4 = 0.0;
    plVar5 = (long *)(lVar18 + 0x28);
    plStack_e8 = plVar21;
    plStack_e0 = plVar17;
    plStack_b8 = plVar21;
    plStack_b0 = plVar17;
    FUN_1096bd704(plVar5,&lStack_c0,&lStack_c0);
    plVar17 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar6 = plStack_b0 + 1;
      do {
        lVar18 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar5 = plVar17;
      }
    }
    plVar17 = (long *)CONCAT44(fStack_f4,fStack_f8);
    if (plVar17 != (long *)0x0) {
      plVar6 = plVar17 + 1;
      do {
        lVar18 = *plVar6;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar5 = plVar17;
      }
    }
    plVar6 = plStack_e0;
    plVar17 = plStack_e8;
    if (plStack_e0 != (long *)0x0) {
      plVar21 = plStack_e0 + 1;
      do {
        lVar18 = *plVar21;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *plVar21 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar5 = plVar6;
      }
    }
  }
  else {
    plVar17 = (long *)plVar5[3];
  }
  lVar18 = *(long *)(*(long *)(param_3 + 8) + 8);
  if ((*(long *)(*(long *)(param_3 + 8) + 0x10) - lVar18 & 0xffffffff0U) == 0) {
    plVar17[7] = plVar17[6];
    func_0x000107c2acdc();
    if (plVar17[1] != plVar5[1]) {
      func_0x000107c2acd4(plVar17);
      lVar18 = *plVar5;
      plVar17[1] = plVar5[1];
      *plVar17 = lVar18;
      if (plVar17[1] != 0) {
        piVar10 = (int *)(plVar17[1] + -8);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    lVar18 = *plVar17;
    param_1[1] = plVar17[1];
    *param_1 = lVar18;
    if (param_1[1] != 0) {
      piVar10 = (int *)(param_1[1] + -8);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = (long)&PTR_FUN_110b051b8;
    return;
  }
  uVar1 = (int)((ulong)(*(long *)(*(long *)(param_2 + 8) + 0x40) -
                       *(long *)(*(long *)(param_2 + 8) + 0x38)) >> 2) * -0x33333333;
  lVar18 = *(long *)(lVar18 + 8);
  uVar8 = (uint)((ulong)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18)) >> 3);
  if ((int)uVar1 <= (int)uVar8) {
    uVar8 = uVar1;
  }
  uVar20 = (ulong)(int)uVar8;
  FUN_1096bd228(&lStack_c0,uVar20);
  lVar22 = plVar17[6];
  lVar18 = plVar17[7];
  lVar23 = lVar18 - lVar22;
  bVar4 = uVar20 < (ulong)((lVar23 >> 2) * 0x6db6db6db6db6db7);
  uVar13 = uVar20 + (lVar23 >> 2) * -0x6db6db6db6db6db7;
  if (bVar4 || uVar13 == 0) {
    if (bVar4) {
      lVar18 = lVar22 + (long)(int)uVar8 * 0x1c;
      goto LAB_1096be08c;
    }
  }
  else if ((ulong)((plVar17[8] - lVar18 >> 2) * 0x6db6db6db6db6db7) < uVar13) {
    if ((int)uVar8 < 0) {
      FUN_1096bf140();
LAB_1096be83c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1096be840);
      (*pcVar3)();
    }
    lVar18 = plVar17[8] - lVar22 >> 2;
    uVar11 = lVar18 * -0x2492492492492492;
    if (uVar11 < uVar20 || uVar11 - uVar20 == 0) {
      uVar11 = uVar20;
    }
    if (0x492492492492491 < (ulong)(lVar18 * 0x6db6db6db6db6db7)) {
      uVar11 = 0x924924924924924;
    }
    if (0x924924924924924 < uVar11) {
      func_0x000104c4f740();
      goto LAB_1096be83c;
    }
    lVar18 = uVar11 * 0x1c;
    __Znwm();
    lVar19 = ((uVar13 * 0x1c - 0x1c) / 0x1c) * 0x1c + 0x1c;
    _bzero(lVar18 + lVar23,lVar19);
    _memcpy(lVar18,lVar22,lVar23);
    plVar17[6] = lVar18;
    plVar17[7] = lVar18 + lVar23 + lVar19;
    plVar17[8] = lVar18 + uVar11 * 0x1c;
    if (lVar22 != 0) {
      __ZdlPv(lVar22);
    }
  }
  else {
    lVar22 = ((uVar13 * 0x1c - 0x1c) / 0x1c) * 0x1c + 0x1c;
    _bzero(lVar18,lVar22);
    lVar18 = lVar18 + lVar22;
LAB_1096be08c:
    plVar17[7] = lVar18;
  }
  puVar7 = *(undefined8 **)(param_4 + 0x18);
  FUN_1096be8c0();
  uStack_c8 = puVar7[1];
  uStack_d0 = *puVar7;
  lVar22 = plVar17[1];
  lVar18 = lVar22;
  if (lVar22 == 0) {
    lVar18 = *(long *)(*(long *)(param_3 + 8) + 8);
    lVar23 = *(long *)(*(long *)(param_3 + 8) + 0x10);
    func_0x000107c2acd4(plVar17);
    lVar18 = lVar18 + (long)(int)((ulong)(lVar23 - lVar18) >> 4) * 0x10;
    lVar23 = *(long *)(lVar18 + -0x10);
    plVar17[1] = *(long *)(lVar18 + -8);
    *plVar17 = lVar23;
    piVar10 = (int *)(plVar17[1] + -8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar18 = plVar17[1];
  }
  fVar31 = *(float *)(lVar18 + 8);
  fVar37 = *(float *)(lVar18 + 0xc);
  fVar24 = 1.0 / (fVar37 * fVar37 + fVar31 * fVar31);
  fVar38 = -fVar37 * fVar24;
  fVar24 = fVar31 * fVar24;
  fVar36 = (float)((ulong)*(undefined8 *)(lVar18 + 0x10) >> 0x20);
  fVar35 = (float)*(undefined8 *)(lVar18 + 0x10);
  fVar25 = (float)uStack_c8 + ((-uStack_d0._4_4_ * fVar36 + (float)uStack_d0 * fVar35) - fVar35);
  fVar29 = (float)((ulong)uStack_c8 >> 0x20) +
           (((float)uStack_d0 * fVar36 + uStack_d0._4_4_ * fVar35) - fVar36);
  uStack_c8 = CONCAT44(fVar25 * fVar38 + fVar29 * fVar24,-fVar29 * fVar38 + fVar25 * fVar24);
  FUN_1096bea4c(plVar17 + 2,&uStack_d0);
  lVar23 = plVar17[7];
  for (lVar18 = plVar17[6]; lVar18 != lVar23; lVar18 = lVar18 + 0x1c) {
    FUN_1096bea4c(lVar18,&uStack_d0);
  }
  FUN_1096a5c58(&plStack_e8,uVar20);
  lVar18 = *(long *)(*(long *)(param_3 + 8) + 8);
  lVar23 = *(long *)(*(long *)(param_3 + 8) + 0x10) - lVar18;
  uVar13 = lVar23 * 0x10000000 >> 0x1c & 0xfffffffffffffff0;
  if (uVar13 == 0) {
    fVar24 = 0.0;
    dVar30 = 0.0;
    dVar28 = INFINITY;
    dVar33 = 0.0;
  }
  else {
    uVar26 = NEON_ext(CONCAT44(-fVar24,-fVar38),CONCAT44(fVar24,fVar38),4,1);
    lVar19 = lVar18 + uVar13;
    do {
      FUN_1096ba118(lVar18,(ulong)((long)plStack_e0 - (long)plStack_e8) >> 3 & 0xffffffff);
      if (0 < (int)uVar8) {
        plVar5 = plStack_e8;
        pfVar12 = (float *)(lStack_c0 + 0x10);
        uVar13 = (ulong)uVar8;
        do {
          lVar27 = *plVar5;
          uVar32 = NEON_rev64(lVar27,4);
          fVar25 = ((float)uVar26 * fVar36 - fVar38 * fVar35) +
                   (float)lVar27 * fVar38 + (float)uVar32 * fVar24;
          fVar29 = ((float)((ulong)uVar26 >> 0x20) * fVar36 - fVar24 * fVar35) +
                   -(float)((ulong)lVar27 >> 0x20) * fVar38 +
                   (float)((ulong)uVar32 >> 0x20) * fVar24;
          auVar34._0_4_ = fVar25 * fVar25 + 0.0;
          auVar34._4_4_ = auVar34._0_4_;
          auVar34._8_4_ = auVar34._0_4_;
          auVar34._12_4_ = fVar29;
          auVar34 = NEON_ext(auVar34,auVar34,8,1);
          pfVar12[-2] = auVar34._0_4_ + pfVar12[-2];
          pfVar12[-1] = auVar34._4_4_ + pfVar12[-1];
          pfVar12[-4] = fVar25 * fVar29 + 0.0 + pfVar12[-4];
          pfVar12[-3] = fVar29 * fVar29 + 0.0 + pfVar12[-3];
          *pfVar12 = fVar25 + *pfVar12;
          uVar13 = uVar13 - 1;
          plVar5 = plVar5 + 1;
          pfVar12 = pfVar12 + 5;
        } while (uVar13 != 0);
      }
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != lVar19);
    iVar9 = (int)(lVar23 + 0xffffffff0U >> 4);
    dVar30 = (double)(iVar9 + 1U);
    dVar28 = (double)(iVar9 + 2) / dVar30;
    dVar33 = 0.0;
    if (iVar9 != 0) {
      dVar33 = dVar30 / (double)(iVar9 + 2);
    }
    fVar24 = (float)(iVar9 + 1U);
  }
  lVar18 = *(long *)(param_2 + 8);
  if ((int)uVar8 < 1) {
    uVar26 = 0;
  }
  else {
    dVar39 = dVar30 + *(double *)(lVar18 + 0x18);
    fVar25 = (float)(dVar28 * (*(double *)(lVar18 + 0x18) / dVar39));
    fVar29 = (float)(dVar33 * (dVar30 / dVar39));
    fVar24 = 1.0 / fVar24;
    lVar23 = *(long *)(lVar18 + 0x50);
    lVar19 = *(long *)(lVar18 + 0x58);
    pfVar12 = (float *)(*(long *)(lVar18 + 0x38) + 8);
    pfVar15 = (float *)(lVar23 + 4);
    pfVar16 = (float *)(lStack_c0 + 8);
    uVar26 = 0;
    uVar13 = uVar20;
    do {
      fVar40 = *pfVar12;
      uVar32 = *(undefined8 *)(pfVar12 + 1);
      fVar43 = (float)*(undefined8 *)(pfVar16 + 1) * fVar24;
      fVar44 = (float)((ulong)*(undefined8 *)(pfVar16 + 1) >> 0x20) * fVar24;
      fVar41 = fVar24 * pfVar16[-1] - fVar43 * fVar43;
      fVar38 = 0.0;
      if (0.0 <= fVar41) {
        fVar38 = fVar41;
      }
      fVar42 = fVar24 * *pfVar16 - fVar44 * fVar44;
      fVar41 = 0.0;
      if (0.0 <= fVar42) {
        fVar41 = fVar42;
      }
      *(ulong *)(pfVar16 + -2) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar12 + -2) >> 0x20) * fVar25 + fVar38 * fVar29
                    ,(float)*(undefined8 *)(pfVar12 + -2) * fVar25 +
                     (fVar24 * pfVar16[-2] - fVar43 * fVar44) * fVar29);
      fVar43 = (float)uVar32 * 0.0 + fVar43;
      fVar44 = (float)((ulong)uVar32 >> 0x20) * 0.0 + fVar44;
      *pfVar16 = fVar40 * fVar25 + fVar41 * fVar29;
      *(ulong *)(pfVar16 + 1) = CONCAT44(fVar44,fVar43);
      if (lVar23 != lVar19) {
        uVar26 = CONCAT44((float)((ulong)uVar26 >> 0x20) + fVar43 * *pfVar15 + fVar44 * pfVar15[-1],
                          (float)uVar26 + -fVar44 * *pfVar15 + fVar43 * pfVar15[-1]);
      }
      pfVar12 = pfVar12 + 5;
      pfVar15 = pfVar15 + 2;
      pfVar16 = pfVar16 + 5;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  fVar25 = (float)((ulong)uVar26 >> 0x20);
  fVar24 = (float)uVar26;
  if (lVar22 == 0) {
    *(undefined4 *)(plVar17 + 3) = 0x3f800000;
    plVar17[2] = 0x3f80000040000000;
    *(ulong *)((long)plVar17 + 0x24) = CONCAT44(fVar25 + 0.0,fVar24 + 0.0);
    *(ulong *)((long)plVar17 + 0x1c) = CONCAT44(fVar25 + fVar25,fVar24 + fVar24);
    if ((int)uVar8 < 1) goto LAB_1096be65c;
    lVar18 = plVar17[6];
    puVar7 = (undefined8 *)(lStack_c0 + 0xc);
    puVar14 = (undefined8 *)(lVar18 + 0xc);
    uVar13 = uVar20;
    do {
      uVar26 = *puVar7;
      *(undefined4 *)((long)puVar14 + -4) = 0x3f800000;
      *(undefined8 *)((long)puVar14 + -0xc) = 0x3f80000040000000;
      fVar24 = (float)uVar26;
      fVar25 = (float)((ulong)uVar26 >> 0x20);
      puVar14[1] = CONCAT44(fVar25 + 0.0,fVar24 + 0.0);
      *puVar14 = CONCAT44(fVar25 + fVar25,fVar24 + fVar24);
      uVar13 = uVar13 - 1;
      puVar7 = (undefined8 *)((long)puVar7 + 0x14);
      puVar14 = (undefined8 *)((long)puVar14 + 0x1c);
    } while (uVar13 != 0);
  }
  else {
    fStack_fc = (float)(dVar28 * *(double *)(lVar18 + 0x30));
    fStack_100 = 0.0;
    fStack_f8 = fStack_fc;
    fStack_f4 = fVar24;
    fStack_f0 = fVar25;
    FUN_1096bf540(plVar17 + 2);
    func_0x0001096bf5a8(&fStack_100);
    _expf();
    FUN_1096bf154(uVar26,plVar17 + 2);
    if ((int)uVar8 < 1) goto LAB_1096be65c;
    lVar22 = 0;
    lVar18 = 0;
    do {
      lVar23 = plVar17[6];
      puVar7 = (undefined8 *)(lStack_c0 + lVar22);
      fStack_f8 = (float)puVar7[1];
      fStack_f4 = (float)((ulong)puVar7[1] >> 0x20);
      fVar24 = fStack_f4;
      fStack_100 = (float)*puVar7;
      fStack_fc = (float)((ulong)*puVar7 >> 0x20);
      fStack_f0 = *(float *)(puVar7 + 2);
      FUN_1096bf540(lVar23 + lVar18);
      func_0x0001096bf5a8(&fStack_100);
      _expf();
      FUN_1096bf154(fVar24,lVar23 + lVar18);
      lVar18 = lVar18 + 0x1c;
      lVar22 = lVar22 + 0x14;
    } while (uVar20 * 0x1c != lVar18);
    lVar18 = plVar17[6];
  }
  puVar7 = (undefined8 *)(lVar18 + 0xc);
  plVar5 = plStack_e8;
  uVar13 = uVar20;
  do {
    fVar38 = *(float *)(puVar7 + -1);
    fVar24 = *(float *)((long)puVar7 + -4) + 1e-06;
    fVar29 = -(fVar38 * fVar38) + *(float *)((long)puVar7 + -0xc) * fVar24 + 1.1754944e-38;
    fVar25 = ((float)*puVar7 * fVar24 - (float)puVar7[1] * fVar38) / fVar29;
    fVar29 = ((float)((ulong)*puVar7 >> 0x20) * fVar24 - fVar38 * (float)((ulong)puVar7[1] >> 0x20))
             / fVar29;
    *plVar5 = CONCAT44(fVar36 + fVar25 * fVar37 + fVar29 * fVar31,
                       fVar35 + -fVar29 * fVar37 + fVar25 * fVar31);
    puVar7 = (undefined8 *)((long)puVar7 + 0x1c);
    uVar13 = uVar13 - 1;
    plVar5 = plVar5 + 1;
  } while (uVar13 != 0);
LAB_1096be65c:
  lStack_108 = *(long *)(param_3 + 8);
  if (lStack_108 != 0) {
    piVar10 = (int *)(lStack_108 + -8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_110 = &PTR_FUN_110b05928;
  plVar5 = (long *)(*(long *)(lStack_108 + 8) +
                   (long)((int)((ulong)(*(long *)(lStack_108 + 0x10) - *(long *)(lStack_108 + 8)) >>
                               4) / 2) * 0x10);
  lVar18 = *plVar5;
  param_1[1] = plVar5[1];
  *param_1 = lVar18;
  if (param_1[1] != 0) {
    piVar10 = (int *)(param_1[1] + -8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar4) {
        *piVar10 = *piVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)&PTR_FUN_110b051b8;
  FUN_1096c0b60(param_1,(ulong)((long)plStack_e0 - (long)plStack_e8) >> 3 & 0xffffffff);
  ppuStack_110 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_110);
  if (plVar17[1] != param_1[1]) {
    func_0x000107c2acd4(plVar17);
    lVar18 = *param_1;
    plVar17[1] = param_1[1];
    *plVar17 = lVar18;
    if (plVar17[1] != 0) {
      piVar10 = (int *)(plVar17[1] + -8);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  lVar18 = param_1[1];
  fVar24 = *(float *)(lVar18 + 8);
  fVar25 = *(float *)(lVar18 + 0xc);
  fVar38 = 1.0 / (fVar25 * fVar25 + fVar24 * fVar24);
  fVar24 = fVar24 * fVar38;
  fVar29 = -(fVar25 * fVar38);
  fStack_100 = -(fVar29 * fVar37) + fVar31 * fVar24;
  fStack_fc = fVar37 * fVar24 + fVar31 * fVar29;
  fStack_f8 = (*(float *)(lVar18 + 0x14) * fVar29 - *(float *)(lVar18 + 0x10) * fVar24) +
              -(fVar38 * -fVar25) * fVar36 + fVar35 * fVar24;
  fStack_f4 = fVar24 * fVar36 + fVar35 * fVar29 +
              (-(fVar24 * *(float *)(lVar18 + 0x14)) - *(float *)(lVar18 + 0x10) * fVar29);
  FUN_1096bea4c(plVar17 + 2,&fStack_100);
  if (0 < (int)uVar8) {
    lVar18 = 0;
    do {
      FUN_1096bea4c(plVar17[6] + lVar18,&fStack_100);
      lVar18 = lVar18 + 0x1c;
    } while (uVar20 * 0x1c != lVar18);
  }
  if (plStack_e8 != (long *)0x0) {
    plStack_e0 = plStack_e8;
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    plStack_b8 = (long *)lStack_c0;
    __ZdlPv();
  }
  return;
}



/* Entry: 1096be8c0; end: 1096bea4b;  */

/* WARNING: Removing unreachable block (ram,0x0001096be9bc) */
/* WARNING: Removing unreachable block (ram,0x0001096be9c0) */
/* WARNING: Removing unreachable block (ram,0x0001096be9c8) */
/* WARNING: Removing unreachable block (ram,0x0001096be9d0) */
/* WARNING: Removing unreachable block (ram,0x0001096be9d4) */

long * FUN_1096be8c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0x1132dfbf8;
  lVar5 = param_1 + 0x28;
  FUN_1096bd5b4(lVar5,&uStack_28);
  if (lVar5 == 0) {
    plVar6 = (long *)0x40;
    __Znwm();
    plVar4 = plVar6 + 1;
    *plVar4 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110b05c58;
    plStack_48 = plVar6 + 3;
    *(undefined4 *)plStack_48 = 0x3f800000;
    *(undefined8 *)((long)plVar6 + 0x24) = 0;
    *(undefined8 *)((long)plVar6 + 0x1c) = 0;
    *(undefined8 *)((long)plVar6 + 0x34) = 0;
    *(undefined8 *)((long)plVar6 + 0x2c) = 0;
    *(undefined4 *)((long)plVar6 + 0x3c) = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_50 = uStack_28;
    plStack_40 = plVar6;
    plStack_38 = plStack_48;
    plStack_30 = plVar6;
    FUN_1096bd704(param_1 + 0x28,&uStack_50,&uStack_50);
    plVar6 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar4 = plStack_40 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar4 = plStack_30;
    plVar6 = plStack_38;
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    plVar6 = *(long **)(lVar5 + 0x18);
  }
  return plVar6;
}



/* Entry: 1096bea4c; end: 1096bea8f;  */

void FUN_1096bea4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [12];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  fVar9 = (float)*(undefined8 *)((long)param_1 + 0x14);
  fVar10 = (float)((ulong)*(undefined8 *)((long)param_1 + 0x14) >> 0x20);
  uVar1 = *(undefined8 *)*(undefined1 (*) [12])((long)param_1 + 0xc);
  auVar2 = *(undefined1 (*) [12])((long)param_1 + 0xc);
  fVar5 = (float)uVar1;
  fVar6 = (float)((ulong)uVar1 >> 0x20);
  auVar11._0_4_ = -fVar5;
  auVar11._4_4_ = -fVar6;
  auVar11._8_4_ = -fVar9;
  auVar11._12_4_ = -fVar10;
  auVar11 = NEON_rev64(auVar11,4);
  fVar4 = (float)*(undefined8 *)((long)param_2 + 4);
  fVar3 = (float)*param_2;
  fVar7 = auVar11._0_4_ * fVar4 + fVar5 * fVar3;
  fVar8 = auVar2._0_4_ * fVar4 + fVar6 * fVar3;
  fVar9 = auVar11._8_4_ * fVar4 + fVar9 * fVar3;
  fVar10 = auVar2._8_4_ * fVar4 + fVar10 * fVar3;
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(fVar10,fVar9);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(fVar8,fVar7);
  fVar3 = (float)*param_1;
  fVar4 = (float)((ulong)*param_1 >> 0x20);
  fVar5 = (float)param_2[1];
  fVar6 = (float)((ulong)param_2[1] >> 0x20);
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(fVar10 + fVar6 * fVar4,fVar9 + fVar5 * fVar4);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(fVar8 + fVar6 * fVar3,fVar7 + fVar5 * fVar3);
  return;
}



/* Entry: 1096bea90; end: 1096becf7;  */

void FUN_1096bea90(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined2 uStack_36;
  undefined1 uStack_34;
  byte bStack_33;
  undefined1 uStack_32;
  byte bStack_31;
  
  uStack_36 = 1;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_36,2,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 8,8,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x10,8,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x18,8,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x20,8,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x28,8,1);
  (**(code **)(*param_2 + 0x48))(param_2,*(long *)(param_1 + 8) + 0x30,8,1);
  lVar5 = *(long *)(param_1 + 8);
  uVar4 = (*(long *)(lVar5 + 0x40) - *(long *)(lVar5 + 0x38) >> 2) * -0x3333333333333333;
  uVar3 = uVar4;
  if (0x7f < uVar4) {
    do {
      bStack_33 = (byte)uVar3 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_33,1,1);
      uVar4 = uVar3 >> 7;
      uVar2 = uVar3 >> 0xe;
      uVar3 = uVar4;
    } while (uVar2 != 0);
  }
  uStack_34 = (undefined1)uVar4;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_34,1,1);
  lVar1 = *(long *)(lVar5 + 0x40);
  for (lVar5 = *(long *)(lVar5 + 0x38); lVar5 != lVar1; lVar5 = lVar5 + 0x14) {
    (**(code **)(*param_2 + 0x48))(param_2,lVar5,0x14,1);
  }
  lVar5 = *(long *)(param_1 + 8);
  uVar4 = *(long *)(lVar5 + 0x58) - *(long *)(lVar5 + 0x50) >> 3;
  uVar3 = uVar4;
  if (0x7f < uVar4) {
    do {
      bStack_31 = (byte)uVar3 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_31,1,1);
      uVar4 = uVar3 >> 7;
      uVar2 = uVar3 >> 0xe;
      uVar3 = uVar4;
    } while (uVar2 != 0);
  }
  uStack_32 = (undefined1)uVar4;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_32,1,1);
  lVar1 = *(long *)(lVar5 + 0x58);
  for (lVar5 = *(long *)(lVar5 + 0x50); lVar5 != lVar1; lVar5 = lVar5 + 8) {
    (**(code **)(*param_2 + 0x48))(param_2,lVar5,8,1);
  }
  return;
}



/* Entry: 1096becf8; end: 1096bf0d7;  */

bool FUN_1096becf8(long param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  short sStack_4c;
  byte bStack_4a;
  byte bStack_49;
  int iStack_48;
  int iStack_44;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x40))(param_2,&sStack_4c,2,1);
  if ((((((int)plVar2 == 1) &&
        (plVar2 = param_2, (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 8,8,1),
        (int)plVar2 == 1)) &&
       (plVar2 = param_2, (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 0x10,8,1),
       (int)plVar2 == 1)) &&
      ((plVar2 = param_2, (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 0x18,8,1),
       (int)plVar2 == 1 &&
       (plVar2 = param_2, (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 0x20,8,1),
       (int)plVar2 == 1)))) &&
     (plVar2 = param_2, (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 0x28,8,1),
     (int)plVar2 == 1)) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,*(long *)(param_1 + 8) + 0x30,8,1);
    bVar1 = (int)plVar2 == 1;
  }
  else {
    bVar1 = false;
  }
  if (sStack_4c == 0) {
    if (bVar1) {
      lVar5 = *(long *)(param_1 + 8);
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x40))(param_2,&iStack_48,4,1);
      if (((int)plVar2 == 1) && (-1 < iStack_48)) {
        FUN_1096bf63c(lVar5 + 0x38);
        for (lVar4 = *(long *)(lVar5 + 0x38); lVar4 != *(long *)(lVar5 + 0x40); lVar4 = lVar4 + 0x14
            ) {
          plVar2 = param_2;
          (**(code **)(*param_2 + 0x40))(param_2,lVar4,0x14,1);
          if ((int)plVar2 != 1) {
            return false;
          }
        }
        lVar5 = *(long *)(param_1 + 8);
        plVar2 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&iStack_44,4,1);
        if ((int)plVar2 != 1) {
          return false;
        }
        if (iStack_44 < 0) {
          return false;
        }
        FUN_1096b9118(lVar5 + 0x50);
        lVar4 = *(long *)(lVar5 + 0x50);
        if (lVar4 == *(long *)(lVar5 + 0x58)) {
          return true;
        }
        do {
          plVar2 = param_2;
          (**(code **)(*param_2 + 0x40))(param_2,lVar4,8,1);
          bVar1 = ((ulong)plVar2 & 0xffffffff) == 1;
          if (!bVar1) {
            return bVar1;
          }
          lVar4 = lVar4 + 8;
        } while (lVar4 != *(long *)(lVar5 + 0x58));
        return bVar1;
      }
    }
  }
  else if (bVar1) {
    lVar5 = *(long *)(param_1 + 8);
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x40))(param_2,&bStack_4a,1,1);
    if ((int)plVar2 == 1) {
      uVar3 = 0;
      uVar6 = 0;
      do {
        uVar3 = ((ulong)bStack_4a & 0x7f) << (uVar6 & 0x3f) | uVar3;
        if (-1 < (char)bStack_4a) {
          FUN_1096bf63c(lVar5 + 0x38,uVar3);
          lVar4 = *(long *)(lVar5 + 0x38);
          lVar5 = *(long *)(lVar5 + 0x40);
          while( true ) {
            if (lVar4 == lVar5) {
              lVar5 = *(long *)(param_1 + 8);
              plVar2 = param_2;
              (**(code **)(*param_2 + 0x40))(param_2,&bStack_49,1,1);
              if ((int)plVar2 != 1) {
                return false;
              }
              uVar3 = 0;
              uVar6 = 0;
              do {
                uVar3 = ((ulong)bStack_49 & 0x7f) << (uVar6 & 0x3f) | uVar3;
                if (-1 < (char)bStack_49) {
                  FUN_1096b9118(lVar5 + 0x50,uVar3);
                  lVar4 = *(long *)(lVar5 + 0x50);
                  lVar5 = *(long *)(lVar5 + 0x58);
                  if (lVar4 == lVar5) {
                    return true;
                  }
                  do {
                    plVar2 = param_2;
                    (**(code **)(*param_2 + 0x40))(param_2,lVar4,8,1);
                    bVar1 = ((ulong)plVar2 & 0xffffffff) == 1;
                    lVar4 = lVar4 + 8;
                  } while (bVar1 && lVar4 != lVar5);
                  return bVar1;
                }
                uVar6 = uVar6 + 7;
                plVar2 = param_2;
                (**(code **)(*param_2 + 0x40))(param_2,&bStack_49,1,1);
              } while ((int)plVar2 == 1);
              return false;
            }
            plVar2 = param_2;
            (**(code **)(*param_2 + 0x40))(param_2,lVar4,0x14,1);
            if ((int)plVar2 != 1) break;
            lVar4 = lVar4 + 0x14;
          }
          return false;
        }
        uVar6 = uVar6 + 7;
        plVar2 = param_2;
        (**(code **)(*param_2 + 0x40))(param_2,&bStack_4a,1,1);
      } while ((int)plVar2 == 1);
    }
  }
  return false;
}



/* Entry: 1096bf0d8; end: 1096bf10b;  */

undefined8 * FUN_1096bf0d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096bf10c; end: 1096bf13f;  */

void FUN_1096bf10c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096bf140; end: 1096bf153;  */

void FUN_1096bf140(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  fVar3 = *pfVar1;
  pfVar1[2] = param_3 * (pfVar1[2] + pfVar1[1] * 2.0 + fVar3);
  *pfVar1 = fVar3 * param_3 + 1.0;
  pfVar1[1] = param_3 * (pfVar1[1] + fVar3);
  fVar3 = (float)*(undefined8 *)(pfVar1 + 3);
  fVar2 = (float)((ulong)*(undefined8 *)(pfVar1 + 3) >> 0x20);
  *(ulong *)(pfVar1 + 5) =
       CONCAT44(((float)((ulong)*(undefined8 *)(pfVar1 + 5) >> 0x20) + fVar2) * param_3,
                ((float)*(undefined8 *)(pfVar1 + 5) + fVar3) * param_3);
  *(ulong *)(pfVar1 + 3) = CONCAT44(param_2 + fVar2 * param_3,param_1 + fVar3 * param_3);
  return;
}



/* Entry: 1096bf154; end: 1096bf1d7;  */

void FUN_1096bf154(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_4;
  param_4[2] = param_3 * (param_4[2] + param_4[1] * 2.0 + fVar2);
  *param_4 = fVar2 * param_3 + 1.0;
  param_4[1] = param_3 * (param_4[1] + fVar2);
  fVar2 = (float)*(undefined8 *)(param_4 + 3);
  fVar1 = (float)((ulong)*(undefined8 *)(param_4 + 3) >> 0x20);
  *(ulong *)(param_4 + 5) =
       CONCAT44(((float)((ulong)*(undefined8 *)(param_4 + 5) >> 0x20) + fVar1) * param_3,
                ((float)*(undefined8 *)(param_4 + 5) + fVar2) * param_3);
  *(ulong *)(param_4 + 3) = CONCAT44(param_2 + fVar1 * param_3,param_1 + fVar2 * param_3);
  return;
}



/* Entry: 1096bf1d8; end: 1096bf21f;  */

void FUN_1096bf1d8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096bf220; end: 1096bf277;  */

undefined8 * FUN_1096bf220(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096bf278; end: 1096bf2cf;  */

void FUN_1096bf278(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b05ab0;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096bf2d0; end: 1096bf31b;  */

void FUN_1096bf2d0(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096bdbb8(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096bf31c; end: 1096bf34b;  */

bool FUN_1096bf31c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b05ab0,0);
  return param_1 != 0;
}



/* Entry: 1096bf34c; end: 1096bf423;  */

long FUN_1096bf34c(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096bf424; end: 1096bf433;  */

void FUN_1096bf424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b05c08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096bf434; end: 1096bf453;  */

void FUN_1096bf434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b05c08;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096bf454; end: 1096bf497;  */

void FUN_1096bf454(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4((undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1096bf498; end: 1096bf4ab;  */

void FUN_1096bf498(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096bf4ac; end: 1096bf4cb;  */

void FUN_1096bf4ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b05c58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096bf4cc; end: 1096bf4e7;  */

void FUN_1096bf4cc(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1096bf4e8; end: 1096bf53f;  */

long FUN_1096bf4e8(long param_1)

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



/* Entry: 1096bf540; end: 1096bf63b;  */

float FUN_1096bf540(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[1];
  return (((float)*(undefined8 *)(param_1 + 5) * *param_1 -
          (float)*(undefined8 *)(param_1 + 3) * fVar1) +
         ((float)*(undefined8 *)(param_1 + 3) * (param_1[2] + 1e-06) -
         (float)*(undefined8 *)(param_1 + 5) * fVar1)) /
         (-(fVar1 * fVar1) + *param_1 * (param_1[2] + 1e-06) + 1.1754944e-38);
}


