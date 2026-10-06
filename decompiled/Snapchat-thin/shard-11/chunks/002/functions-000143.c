/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082ad7e4; end: 1082ad807;  */

void FUN_1082ad7e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1082ad808; end: 1082ad84b;  */

undefined8 * FUN_1082ad808(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1082ad84c();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 1082ad84c; end: 1082ad8e7;  */

long FUN_1082ad84c(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x0001082ade44();
  FUN_1082ad8e8();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_1082ad778();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  func_0x0001082ae050();
  lVar2 = unaff_x19[1];
  FUN_1082ad7b8(&plStack_58);
  return lVar2;
}



/* Entry: 1082ad8e8; end: 1082ad927;  */

long * FUN_1082ad8e8(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_1082ad6f0();
  FUN_1082ad958();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x0001082aded4();
  }
  return param_1;
}



/* Entry: 1082ad928; end: 1082ad957;  */

long FUN_1082ad928(long param_1)

{
  FUN_1082ad958();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001082aded4();
  }
  return param_1;
}



/* Entry: 1082ad958; end: 1082ad9af;  */

void FUN_1082ad958(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      FUN_1082837dc();
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 1082ad9b0; end: 1082adab7;  */

void FUN_1082ad9b0(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if (param_1 != param_2) {
    func_0x0001082ade44();
    if (((*(byte *)(param_1 + 0xc) & 1) == 0) || ((*(uint *)(param_2 + 0xc) & 1) == 0)) {
      if ((*(uint *)(param_2 + 0xc) & 1) == 0) {
        FUN_108283888(0x3ff0000000000000);
        FUN_1082838b8();
      }
      else {
        *unaff_x20 = 0;
        *(undefined4 *)((long)unaff_x20 + 0xc) = 1;
      }
      *(undefined4 *)(unaff_x20 + 1) = 0;
      func_0x0001082adf18();
      FUN_1082adab8();
      FUN_1082adab8();
      func_0x0001082adf24();
    }
    else {
      uVar3 = *unaff_x19;
      *unaff_x19 = *unaff_x20;
      *unaff_x20 = uVar3;
      uVar1 = *(undefined4 *)(unaff_x19 + 1);
      *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(unaff_x20 + 1);
      *(undefined4 *)(unaff_x20 + 1) = uVar1;
      uVar2 = *(uint *)((long)unaff_x19 + 0xc);
      *(uint *)((long)unaff_x19 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) & 0xfffffffe | uVar2 & 1;
      *(uint *)((long)unaff_x20 + 0xc) = uVar2 & 0xfffffffe | *(uint *)((long)unaff_x20 + 0xc) & 1;
    }
  }
  return;
}



/* Entry: 1082adab8; end: 1082adb37;  */

undefined8 * FUN_1082adab8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  cVar1 = SBORROW8((long)param_1,(long)param_2);
  cVar2 = (long)param_1 - (long)param_2 < 0;
  if (param_1 != param_2) {
    puVar4 = param_2;
    func_0x0001082ad990(param_1);
    uVar3 = SUB84(puVar4,0);
    if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) {
      func_0x0001082adfc0();
      if (cVar2 != cVar1) {
        FUN_10828380c(0x3ff0000000000000,param_1);
        func_0x0001082ae008();
        FUN_108283830();
        uVar3 = *(undefined4 *)(param_2 + 1);
      }
      *(undefined4 *)(param_1 + 1) = uVar3;
      FUN_1082838b8(param_2,*param_1);
    }
    else {
      if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
        func_0x0001082aded4();
      }
      func_0x0001082addf0();
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_1;
}



/* Entry: 1082adb38; end: 1082add4b;  */

void FUN_1082adb38(int param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  do {
    if ((int)param_3 < 0x21) {
      plVar8 = param_2;
      do {
        do {
          plVar4 = plVar8;
          plVar8 = plVar4 + 1;
          if (param_2 + (long)(int)param_3 + -1 < plVar8) {
            return;
          }
          lVar6 = plVar4[1];
          uVar2 = *(uint *)(lVar6 + 0x14);
        } while (*(uint *)(*plVar4 + 0x14) <= uVar2);
        do {
          plVar3 = plVar4;
          plVar3[1] = *plVar3;
          if (plVar3 <= param_2) break;
          plVar4 = plVar3 + -1;
        } while (uVar2 < *(uint *)(plVar3[-1] + 0x14));
        *plVar3 = lVar6;
      } while( true );
    }
    if (param_1 == 0) {
      uVar12 = (ulong)param_3;
      for (uVar7 = (ulong)(param_3 >> 1); uVar7 != 0; uVar7 = uVar7 - 1) {
        lVar6 = param_2[uVar7 - 1];
        uVar10 = uVar7;
        while( true ) {
          uVar11 = uVar10 * 2;
          if (uVar12 <= uVar11 && uVar11 - uVar12 != 0) break;
          if ((uVar12 > uVar11) &&
             (*(uint *)((param_2 + uVar10 * 2)[-1] + 0x14) < *(uint *)(param_2[uVar10 * 2] + 0x14)))
          {
            uVar11 = uVar11 + 1;
          }
          if (*(uint *)(param_2[uVar11 - 1] + 0x14) <= *(uint *)(lVar6 + 0x14)) break;
          param_2[uVar10 - 1] = param_2[uVar11 - 1];
          uVar10 = uVar11;
        }
        param_2[uVar10 - 1] = lVar6;
      }
      do {
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          return;
        }
        lVar6 = *param_2;
        *param_2 = param_2[uVar12];
        param_2[uVar12] = lVar6;
        lVar6 = *param_2;
        uVar7 = 1;
        while( true ) {
          uVar10 = uVar7 * 2;
          if (uVar12 <= uVar10 && uVar10 - uVar12 != 0) break;
          if ((uVar12 > uVar10) &&
             (*(uint *)((param_2 + uVar7 * 2)[-1] + 0x14) < *(uint *)(param_2[uVar7 * 2] + 0x14))) {
            uVar10 = uVar10 + 1;
          }
          param_2[uVar7 - 1] = param_2[uVar10 - 1];
          uVar7 = uVar10;
        }
        while (1 < uVar7) {
          if (*(uint *)(lVar6 + 0x14) <= *(uint *)(param_2[(uVar7 >> 1) - 1] + 0x14)) break;
          param_2[uVar7 - 1] = param_2[(uVar7 >> 1) - 1];
          uVar7 = uVar7 >> 1;
        }
        param_2[uVar7 - 1] = lVar6;
      } while( true );
    }
    uVar2 = param_3 - 1 >> 1;
    plVar3 = param_2 + ((ulong)param_3 - 1);
    lVar6 = param_2[uVar2];
    param_2[uVar2] = *plVar3;
    *plVar3 = lVar6;
    plVar4 = param_2;
    for (plVar8 = param_2; plVar8 < plVar3; plVar8 = plVar8 + 1) {
      lVar9 = *plVar8;
      plVar5 = plVar4;
      if (*(uint *)(lVar9 + 0x14) < *(uint *)(lVar6 + 0x14)) {
        *plVar8 = *plVar4;
        plVar5 = plVar4 + 1;
        *plVar4 = lVar9;
      }
      plVar4 = plVar5;
    }
    param_1 = param_1 + -1;
    lVar6 = *plVar4;
    *plVar4 = *plVar3;
    *plVar3 = lVar6;
    uVar12 = (ulong)((long)plVar4 - (long)param_2) >> 3;
    FUN_1082adb38(param_1,param_2,uVar12);
    iVar1 = (int)uVar12 + 1;
    param_2 = param_2 + iVar1;
    param_3 = param_3 - iVar1;
  } while( true );
}



/* Entry: 1082add4c; end: 1082ae0df;  */

void FUN_1082add4c(void)

{
  return;
}



/* Entry: 1082ae0e0; end: 1082ae17b;  */

undefined8 * FUN_1082ae0e0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_38;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_38 = 0;
  func_0x00010828c59c(param_1 + 2);
  FUN_1082afb10(&uStack_38);
  return param_1;
}



/* Entry: 1082ae17c; end: 1082ae3c7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082ae17c(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 *param_5,
                  undefined4 param_6,undefined8 param_7,undefined8 *param_8,uint param_9,
                  undefined4 param_10,undefined4 param_11,long *param_12,undefined8 param_13,
                  undefined8 param_14)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_270;
  long lStack_268;
  ulong auStack_260 [17];
  undefined4 uStack_1d8;
  undefined8 auStack_1d0 [43];
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uVar9;
  
  func_0x0001082afd8c();
  puVar4 = param_8;
  auStack_260[0] = param_3;
  uStack_70 = extraout_x8;
  if (*param_2 != 0) {
    if ((char)param_10 == '\0') {
      iVar5 = 1;
    }
    else {
      uVar3 = param_3;
      FUN_108368974(param_3,param_3 >> 0x20);
      iVar5 = (int)uVar3 + 1;
    }
    uVar3 = param_2[2];
    puVar4 = param_5;
    FUN_10828a6b0(uVar3,auStack_260,param_4,param_7,param_8,(char)param_10);
    if ((uVar3 & 1) != 0) {
      lVar7 = *param_12;
      puVar4 = (undefined8 *)(ulong)param_9;
      uVar8 = param_14;
      FUN_1082ae3c8(&lStack_268,param_2,param_3,param_4);
      lVar1 = lStack_268;
      uVar9 = (undefined4)((ulong)uVar8 >> 0x20);
      if (lStack_268 == 0) {
        auStack_1d0[0] = 0;
        uStack_78 = 0;
        auStack_260[1] = 0;
        uStack_1d8 = 0;
        if (lVar7 == 0) {
          iVar2 = 0;
LAB_1082ae300:
          puVar4 = (undefined8 *)(ulong)param_9;
          FUN_10829f264(param_1,param_2[1],param_3,param_4,param_5,param_7,param_8,puVar4,
                        param_10._1_1_,param_6,iVar2,auStack_1d0[0],iVar5,uVar9,param_13,param_14);
        }
        else {
          puVar4 = auStack_1d0;
          plVar6 = param_2;
          FUN_1082ae5b4(param_2,param_4,param_6,param_3,param_12,iVar5,puVar4,auStack_260 + 1);
          iVar2 = (int)plVar6;
          if (iVar2 != 0) goto LAB_1082ae300;
          *param_1 = 0;
        }
        FUN_1082afb84(auStack_260 + 1);
        FUN_1082afb5c(auStack_1d0);
      }
      else {
        lStack_268 = 0;
        if (lVar7 == 0) {
          *param_1 = lVar1;
        }
        else {
          lStack_270 = lVar1;
          FUN_1082ae434(param_1,param_2,&lStack_270,param_6,param_3,param_12,iVar5);
          FUN_108283764(&lStack_270);
        }
      }
      FUN_108283764();
      goto LAB_1082ae360;
    }
  }
  *param_1 = 0;
LAB_1082ae360:
  func_0x0001082afd28(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_108283764(&lStack_270);
    FUN_108283764(&lStack_268);
    func_0x0001082afcc4();
    FUN_1082ae8d8(extraout_x8_00);
    if ((((ulong)puVar4 & 1) == 0) && (plVar6 = (long *)*extraout_x8_00, plVar6 != (long *)0x0)) {
      func_0x0001082a0974((long)plVar6 + *(long *)(*plVar6 + -0x18));
    }
    return;
  }
  return;
}



/* Entry: 1082ae3c8; end: 1082ae433;  */

void FUN_1082ae3c8(long *param_1)

{
  ulong in_x6;
  
  FUN_1082ae8d8(param_1);
  if (((in_x6 & 1) == 0) && (param_1 = (long *)*param_1, param_1 != (long *)0x0)) {
    func_0x0001082a0974((long)param_1 + *(long *)(*param_1 + -0x18));
  }
  return;
}



/* Entry: 1082ae434; end: 1082ae5b3;  */

void FUN_1082ae434(long *param_1,long *param_2,long *param_3,long param_4,ulong param_5,long param_6
                  ,long *param_7)

{
  undefined8 *puVar1;
  long ***ppplVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  long *plVar7;
  long *****ppppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined1 *puVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long *****ppppplVar15;
  undefined8 extraout_x8;
  long lVar16;
  long ***ppplVar17;
  long *plVar18;
  ulong uVar19;
  long ***ppplVar20;
  long ****pppplVar21;
  undefined8 *puVar22;
  long ***ppplVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  undefined1 auStack_430 [32];
  undefined1 auStack_410 [56];
  undefined1 auStack_3d8 [32];
  undefined1 auStack_3b8 [56];
  undefined8 uStack_380;
  undefined1 auStack_378 [32];
  undefined8 uStack_358;
  undefined1 auStack_350 [32];
  ulong auStack_330 [2];
  undefined1 auStack_2b0 [88];
  char cStack_258;
  long alStack_240 [16];
  undefined4 uStack_1c0;
  long ****apppplStack_1b8 [43];
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  plVar18 = param_3;
  func_0x0001082afd8c();
  apppplStack_1b8[0] = (long ****)0x0;
  uStack_60 = 0;
  alStack_240[0] = 0;
  uStack_1c0 = 0;
  plVar18 = (long *)*plVar18;
  uStack_58 = extraout_x8;
  (**(code **)(*(long *)((long)plVar18 + *(long *)(*plVar18 + -0x18)) + 0x50))
            (auStack_2b0,(long)plVar18 + *(long *)(*plVar18 + -0x18));
  puVar11 = auStack_2b0;
  ppppplVar15 = apppplStack_1b8;
  plVar18 = alStack_240;
  plVar7 = param_2;
  lVar12 = param_4;
  uVar26 = param_5;
  plVar14 = param_7;
  FUN_1082ae5b4(param_2,puVar11);
  uVar5 = cStack_258 == '\x01';
  if ((bool)uVar5) {
    func_0x0001082afcb8(auStack_2b0);
  }
  if ((int)plVar7 == 0) {
    lVar16 = 0;
  }
  else {
    plVar18 = (long *)*param_3;
    if (plVar18 == (long *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      puVar11 = (undefined1 *)((long)plVar18 + *(long *)(*plVar18 + -0x18));
    }
    lVar12 = 0;
    ppppplVar15 = (long *****)apppplStack_1b8[0];
    FUN_10829f560(param_2[1],puVar11);
    lVar16 = *param_3;
    *param_3 = 0;
    uVar26 = param_5;
    param_6 = param_4;
    plVar14 = plVar7;
    plVar18 = param_7;
  }
  *param_1 = lVar16;
  FUN_1082afb84(alStack_240);
  FUN_1082afb5c();
  func_0x0001082afd28(uStack_58);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  FUN_1082afb84(alStack_240);
  ppppplVar8 = apppplStack_1b8;
  FUN_1082afb5c();
  func_0x0001082afcc4();
  pppplVar9 = ppppplVar8[2];
  iVar13 = (int)lVar12;
  (*(code *)(*pppplVar9)[0xb])(pppplVar9,lVar12,puVar11);
  if ((int)pppplVar9 != 0) {
    uVar19 = uVar26 >> 0x20;
    ppplVar20 = ppppplVar8[2][3];
    FUN_1082af938(ppppplVar15,plVar14);
    func_0x0001082af9f4(plVar18,plVar14);
    for (uVar24 = 0; uVar24 != ((uint)plVar14 & ((int)(uint)plVar14 >> 0x1f ^ 0xffffffffU));
        uVar24 = uVar24 + 1) {
      if (((long)*(int *)(ppppplVar15 + 0x2b) <= (long)uVar24) ||
         ((long)(int)plVar18[0x10] <= (long)uVar24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1082ae860);
        (*pcVar4)();
      }
      puVar22 = (undefined8 *)(param_6 + uVar24 * 0x18);
      auStack_330[0] = uVar26 & 0xffffffff | uVar19 << 0x20;
      pppplVar21 = *ppppplVar15 + uVar24 * 3;
      lVar12 = *plVar18;
      ppplVar23 = (long ***)*puVar22;
      iVar25 = (int)uVar26;
      if (ppplVar23 == (long ***)0x0) {
        *pppplVar21 = (long ***)0x0;
        pppplVar21[1] = (long ***)0x0;
      }
      else {
        iVar6 = iVar13;
        func_0x0001082afaf4();
        ppplVar17 = (long ***)((long)iVar6 * (long)iVar25);
        ppplVar2 = ppplVar17;
        if ((long ***)puVar22[1] != (long ***)0x0) {
          ppplVar2 = (long ***)puVar22[1];
        }
        if (ppplVar2 < ppplVar17) {
          return;
        }
        uVar3 = (uint)((ulong)ppplVar20 >> 0x21) & 1;
        if (ppplVar2 == ppplVar17) {
          uVar3 = 1;
        }
        if ((iVar13 == (int)pppplVar9) && (uVar3 != 0)) {
          *pppplVar21 = ppplVar23;
          pppplVar21[1] = ppplVar2;
        }
        else {
          puVar1 = (undefined8 *)(lVar12 + uVar24 * 8);
          pppplVar10 = pppplVar9;
          func_0x0001082afaf4();
          ppplVar23 = (long ***)((long)(int)pppplVar10 * (long)iVar25);
          lVar12 = (long)ppplVar23 * (long)(int)uVar19;
          __Znam(lVar12);
          func_0x0001082a1e8c(puVar1,lVar12);
          *pppplVar21 = (long ***)*puVar1;
          pppplVar21[1] = ppplVar23;
          uStack_358 = 0;
          FUN_1082a0b14(auStack_350,iVar13,3,&uStack_358,auStack_330);
          FUN_10810a400(&uStack_358);
          uStack_380 = 0;
          FUN_1082a0b14(auStack_378,pppplVar9,3,&uStack_380,auStack_330);
          FUN_10810a400(&uStack_380);
          FUN_1082a0b6c(auStack_3d8,auStack_378);
          FUN_10829082c(auStack_3b8,auStack_3d8,*puVar1,ppplVar23);
          FUN_1082a0b6c(auStack_430,auStack_350);
          FUN_10828db68(auStack_410,auStack_430,*puVar22,ppplVar2);
          puVar11 = auStack_3b8;
          FUN_10828cc04(puVar11,auStack_410,0);
          func_0x00010827ed24(auStack_410);
          func_0x00010828afb8(auStack_430);
          func_0x00010827ec18(auStack_3b8);
          func_0x00010828afb8(auStack_3d8);
          func_0x00010828afb8(auStack_378);
          func_0x00010828afb8(auStack_350);
          if ((int)puVar11 == 0) {
            return;
          }
        }
      }
      uVar3 = iVar25 / 2;
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar26 = (ulong)uVar3;
      uVar3 = (int)uVar19 / 2;
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar19 = (ulong)uVar3;
    }
  }
  return;
}



/* Entry: 1082ae5b4; end: 1082ae8d7;  */

void FUN_1082ae5b4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,long *param_7,long *param_8)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [56];
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [56];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  ulong auStack_70 [2];
  
  plVar6 = *(long **)(param_1 + 0x10);
  iVar9 = (int)param_3;
  (**(code **)(*plVar6 + 0x58))(plVar6,param_3,param_2);
  if ((int)plVar6 != 0) {
    uVar11 = param_4 >> 0x20;
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_1082af938(param_7,param_6);
    func_0x0001082af9f4(param_8,param_6);
    for (uVar17 = 0; uVar17 != ((uint)param_6 & ((int)(uint)param_6 >> 0x1f ^ 0xffffffffU));
        uVar17 = uVar17 + 1) {
      if (((long)(int)param_7[0x2b] <= (long)uVar17) || ((long)(int)param_8[0x10] <= (long)uVar17))
      {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1082ae860);
        (*pcVar4)();
      }
      plVar14 = (long *)(param_5 + uVar17 * 0x18);
      auStack_70[0] = param_4 & 0xffffffff | uVar11 << 0x20;
      plVar13 = (long *)(*param_7 + uVar17 * 0x18);
      lVar15 = *param_8;
      lVar16 = *plVar14;
      iVar18 = (int)param_4;
      if (lVar16 == 0) {
        *plVar13 = 0;
        plVar13[1] = 0;
      }
      else {
        iVar5 = iVar9;
        func_0x0001082afaf4();
        uVar10 = (long)iVar5 * (long)iVar18;
        uVar2 = uVar10;
        if (plVar14[1] != 0) {
          uVar2 = plVar14[1];
        }
        if (uVar2 < uVar10) {
          return;
        }
        uVar3 = (uint)((ulong)uVar12 >> 0x21) & 1;
        if (uVar2 == uVar10) {
          uVar3 = 1;
        }
        if ((iVar9 == (int)plVar6) && (uVar3 != 0)) {
          *plVar13 = lVar16;
          plVar13[1] = uVar2;
        }
        else {
          plVar1 = (long *)(lVar15 + uVar17 * 8);
          plVar7 = plVar6;
          func_0x0001082afaf4();
          lVar16 = (long)(int)plVar7 * (long)iVar18;
          lVar15 = lVar16 * (int)uVar11;
          __Znam(lVar15);
          func_0x0001082a1e8c(plVar1,lVar15);
          *plVar13 = *plVar1;
          plVar13[1] = lVar16;
          uStack_98 = 0;
          FUN_1082a0b14(auStack_90,iVar9,3,&uStack_98,auStack_70);
          FUN_10810a400(&uStack_98);
          uStack_c0 = 0;
          FUN_1082a0b14(auStack_b8,plVar6,3,&uStack_c0,auStack_70);
          FUN_10810a400(&uStack_c0);
          FUN_1082a0b6c(auStack_118,auStack_b8);
          FUN_10829082c(auStack_f8,auStack_118,*plVar1,lVar16);
          FUN_1082a0b6c(auStack_170,auStack_90);
          FUN_10828db68(auStack_150,auStack_170,*plVar14,uVar2);
          puVar8 = auStack_f8;
          FUN_10828cc04(puVar8,auStack_150,0);
          func_0x00010827ed24(auStack_150);
          func_0x00010828afb8(auStack_170);
          func_0x00010827ec18(auStack_f8);
          func_0x00010828afb8(auStack_118);
          func_0x00010828afb8(auStack_b8);
          func_0x00010828afb8(auStack_90);
          if ((int)puVar8 == 0) {
            return;
          }
        }
      }
      uVar3 = iVar18 / 2;
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      param_4 = (ulong)uVar3;
      uVar3 = (int)uVar11 / 2;
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar11 = (ulong)uVar3;
    }
  }
  return;
}



/* Entry: 1082ae8d8; end: 1082ae99f;  */

void FUN_1082ae8d8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_78 [40];
  
  if (((param_6 & 1) == 0) &&
     (((uint)*(undefined8 *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + 0x18) >> 3 & 1) == 0)) {
    *param_1 = 0;
  }
  else {
    FUN_10827a214(auStack_78);
    FUN_1082b2cb0(*(undefined8 *)(param_2 + 0x10),param_4,param_3,param_6,param_7,param_8,param_9,
                  auStack_78);
    FUN_1082aed18(param_1,param_2,auStack_78,param_10,param_11);
    FUN_10827a250(auStack_78);
  }
  return;
}



/* Entry: 1082ae9a0; end: 1082aeaeb;  */

/* WARNING: Removing unreachable block (ram,0x0001082ae1dc) */

void FUN_1082ae9a0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 *param_8,
                  uint param_9,int param_10,undefined1 param_11,long *param_12,undefined8 param_13,
                  undefined8 param_14)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar5;
  long *extraout_x8_01;
  long lVar6;
  undefined8 uVar7;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 auStack_258 [16];
  undefined4 uStack_1d8;
  undefined8 auStack_1d0 [40];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined4 uVar8;
  
  if (*param_12 == 0) {
LAB_1082aeab8:
    *param_1 = 0;
    return;
  }
  uStack_68 = param_3;
  if (param_10 == 0) {
    if (*param_2 != 0) {
      uStack_7c = SUB84(param_8,0);
      uVar3 = param_2[2];
      uStack_80 = param_6;
      FUN_10828a6b0(uVar3,&uStack_68,param_4,param_7,param_8,0,param_5);
      if ((uVar3 & 1) != 0) {
        uStack_90 = param_13;
        uStack_88 = param_14;
        func_0x0001082afdfc(&uStack_70);
        FUN_1082aeaec();
        if (uStack_70 == 0) {
          *param_1 = 0;
        }
        else {
          uStack_78 = uStack_70;
          uStack_70 = 0;
          FUN_1082ae434(param_1,param_2,&uStack_78,uStack_80,param_3,param_12,1);
          FUN_108283764(&uStack_78);
        }
        FUN_108283764(&uStack_70);
        return;
      }
    }
    goto LAB_1082aeab8;
  }
  func_0x0001082afdfc(param_1);
  func_0x0001082afd8c();
  puVar4 = param_8;
  uStack_260 = param_3;
  uStack_70 = extraout_x8;
  if (*param_2 != 0) {
    uVar3 = param_2[2];
    puVar4 = param_5;
    FUN_10828a6b0(uVar3,&uStack_260,param_4,param_7,param_8,0);
    if ((uVar3 & 1) != 0) {
      lVar6 = *param_12;
      puVar4 = (undefined8 *)(ulong)param_9;
      uVar7 = param_14;
      FUN_1082ae3c8(&lStack_268,param_2,param_3,param_4);
      lVar1 = lStack_268;
      uVar8 = (undefined4)((ulong)uVar7 >> 0x20);
      if (lStack_268 == 0) {
        auStack_1d0[0] = 0;
        uStack_78 = uStack_78 & 0xffffffff00000000;
        auStack_258[0] = 0;
        uStack_1d8 = 0;
        if (lVar6 == 0) {
          iVar2 = 0;
LAB_1082ae300:
          puVar4 = (undefined8 *)(ulong)param_9;
          FUN_10829f264(extraout_x8_01,param_2[1],param_3,param_4,param_5,param_7,param_8,puVar4,
                        param_11,param_6,iVar2,auStack_1d0[0],1,uVar8,param_13,param_14);
        }
        else {
          puVar4 = auStack_1d0;
          plVar5 = param_2;
          FUN_1082ae5b4(param_2,param_4,param_6,param_3,param_12,1,puVar4,auStack_258);
          iVar2 = (int)plVar5;
          if (iVar2 != 0) goto LAB_1082ae300;
          *extraout_x8_01 = 0;
        }
        FUN_1082afb84(auStack_258);
        FUN_1082afb5c(auStack_1d0);
      }
      else {
        lStack_268 = 0;
        if (lVar6 == 0) {
          *extraout_x8_01 = lVar1;
        }
        else {
          lStack_270 = lVar1;
          FUN_1082ae434(extraout_x8_01,param_2,&lStack_270,param_6,param_3,param_12,1);
          FUN_108283764(&lStack_270);
        }
      }
      FUN_108283764();
      goto LAB_1082ae360;
    }
  }
  *extraout_x8_01 = 0;
LAB_1082ae360:
  func_0x0001082afd28(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_108283764(&lStack_270);
    FUN_108283764(&lStack_268);
    func_0x0001082afcc4();
    FUN_1082ae8d8(extraout_x8_00);
    if ((((ulong)puVar4 & 1) == 0) && (plVar5 = (long *)*extraout_x8_00, plVar5 != (long *)0x0)) {
      func_0x0001082a0974((long)plVar5 + *(long *)(*plVar5 + -0x18));
    }
    return;
  }
  return;
}



/* Entry: 1082aeaec; end: 1082aebdf;  */

void FUN_1082aeaec(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  undefined8 uStack_68;
  
  if (*param_2 != 0) {
    uVar1 = param_2[2];
    uStack_68 = param_3;
    FUN_10828a6b0(uVar1,&uStack_68,param_4,param_6,param_7,0,param_5);
    if ((uVar1 & 1) != 0) {
      func_0x000108320fa4(param_3);
      FUN_1082ae8d8(param_1,param_2,param_3,param_4);
      if (*param_1 != 0) {
        return;
      }
      FUN_108283764(param_1);
      FUN_10829f1c4(param_1,param_2[1],param_3,param_4,param_5,param_6,param_7,0,1,param_8,param_10,
                    param_11);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1082aebe0; end: 1082aed17;  */

void FUN_1082aebe0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  long lVar1;
  ulong uVar2;
  long lStack_70;
  undefined8 uStack_68;
  
  if (*param_2 != 0) {
    uVar2 = param_2[2];
    uStack_68 = param_3;
    FUN_10828a6b0(uVar2,&uStack_68,param_4,param_6,param_7,param_8,param_5);
    if ((uVar2 & 1) != 0) {
      FUN_1082ae3c8(&lStack_70,param_2,param_3,param_4);
      lVar1 = lStack_70;
      if (lStack_70 == 0) {
        FUN_10829f1c4(param_1,param_2[1],param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10);
      }
      else {
        lStack_70 = 0;
        *param_1 = lVar1;
      }
      FUN_108283764(&lStack_70);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1082aed18; end: 1082aed6b;  */

void FUN_1082aed18(long *param_1,long *param_2)

{
  param_2 = (long *)*param_2;
  FUN_1082aba94();
  if (param_2 != (long *)0x0) {
    FUN_1082aed6c();
    (**(code **)(*param_2 + 0x58))();
  }
  *param_1 = (long)param_2;
  return;
}



/* Entry: 1082aed6c; end: 1082aeda7;  */

void FUN_1082aed6c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_1082afa98(param_1 + 0x13,&uStack_30);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



/* Entry: 1082aeda8; end: 1082aedd3;  */

void FUN_1082aeda8(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  long extraout_x9;
  int iVar5;
  long *plVar6;
  undefined1 auStack_148 [112];
  undefined1 auStack_d8 [88];
  char cStack_80;
  undefined8 uStack_68;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    return;
  }
  plVar4 = (long *)param_2[1];
  func_0x0001082a00a8();
  uStack_68 = extraout_x8;
  FUN_10829f190();
  iVar5 = (int)param_4;
  uVar2 = iVar5 == 0;
  if (0 < iVar5) {
    plVar6 = (long *)plVar4[2];
    func_0x0001082835f0(auStack_d8,param_3);
    plVar3 = plVar6;
    (**(code **)(*plVar6 + 0x20))(plVar6,auStack_d8,*(undefined4 *)(param_3 + 0x30));
    if ((int)plVar3 == 0) {
      uVar2 = cStack_80 == '\x01';
      if ((bool)uVar2) {
        func_0x0001082a0088(auStack_d8);
      }
    }
    else {
      func_0x0001082835f0(auStack_148,param_3);
      plVar3 = plVar6;
      (**(code **)(*plVar6 + 0x40))(plVar6,auStack_148,param_4);
      func_0x0001082a00e8();
      if ((bool)uVar2) {
        func_0x0001082a0074();
      }
      uVar2 = cStack_80 == '\x01';
      if ((bool)uVar2) {
        func_0x0001082a0088(auStack_d8);
      }
      if (((ulong)plVar3 & 1) != 0) {
        iVar1 = (int)plVar6[6];
        uVar2 = *(int *)(param_3 + 4) <= iVar1 && *(int *)(param_3 + 8) == iVar1;
        if (*(int *)(param_3 + 4) <= iVar1 && *(int *)(param_3 + 8) <= iVar1) {
          (**(code **)(*plVar4 + 0x150))(param_1,plVar4,param_3,param_4,param_5,param_6);
          uVar2 = iVar5 == 1;
          if (((!(bool)uVar2) && (*param_1 != 0)) &&
             ((*(byte *)((long)plVar6 + 0x19) >> 6 & 1) == 0)) {
            func_0x0001082a0184();
            (**(code **)(*(long *)(extraout_x8_00 + extraout_x9) + 0x68))
                      (extraout_x8_00 + extraout_x9);
            func_0x0001082a012c();
          }
          goto LAB_10829f7dc;
        }
      }
    }
  }
  *param_1 = 0;
LAB_10829f7dc:
  func_0x0001082a0094(uStack_68);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082a01a8();
  func_0x0001082a0190();
  *extraout_x8_01 = 0;
  return;
}



/* Entry: 1082aedd4; end: 1082aedff;  */

void FUN_1082aedd4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_1082a4d18();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1082aee00; end: 1082aee9b;  */

void FUN_1082aee00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *unaff_x19;
  long lStack_48;
  
  func_0x0001082afdf0();
  FUN_1082aee9c();
  lVar1 = lStack_48;
  if (lStack_48 == 0) {
    func_0x0001082afcd8();
    FUN_1082aeed0(&lStack_48,param_1,param_4,param_3,param_2,1);
    if (lStack_48 == 0) {
      lVar1 = 0;
      goto LAB_1082aee78;
    }
    func_0x0001082a088c(lStack_48,param_5);
    lVar1 = lStack_48;
  }
  lStack_48 = 0;
LAB_1082aee78:
  *unaff_x19 = lVar1;
  func_0x0001082afcd8();
  return;
}



/* Entry: 1082aee9c; end: 1082aeecf;  */

void FUN_1082aee9c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 uStack_28;
  
  func_0x0001082afdf0();
  FUN_1082aedd4();
  uVar1 = uStack_28;
  uStack_28 = 0;
  *unaff_x19 = uVar1;
  FUN_1082837dc(&uStack_28);
  return;
}



/* Entry: 1082aeed0; end: 1082aef4f;  */

void FUN_1082aeed0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x19;
  undefined8 uStack_38;
  
  func_0x0001082afdf0();
  FUN_1082af050();
  if ((uStack_38 == 0) ||
     (lVar1 = uStack_38, func_0x0001082afd68(uStack_38,param_2), (int)lVar1 == 0)) {
    uStack_38 = 0;
  }
  *unaff_x19 = uStack_38;
  func_0x0001082afcd8();
  return;
}



/* Entry: 1082aef50; end: 1082af04f;  */

void FUN_1082aef50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  long lVar1;
  long *unaff_x19;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001082afdf0();
  FUN_1082aee9c();
  lVar1 = lStack_48;
  if (lStack_48 == 0) {
    func_0x0001082afcd8();
    func_0x0001082afdd0(&lStack_48,param_1,param_3,param_2);
    if (lStack_48 == 0) {
      *unaff_x19 = 0;
    }
    else {
      func_0x0001082a088c(lStack_48,param_4);
      lVar1 = lStack_48;
      FUN_1082a0214();
      uStack_50 = 0;
      if (lVar1 == 0) {
        FUN_1082af21c(&uStack_50,param_3);
      }
      (*param_5)();
      if (*(long *)(lStack_48 + 0xb8) == 0) {
        func_0x0001082afd68(lStack_48,uStack_50);
      }
      else {
        func_0x0001082a0268();
      }
      lVar1 = lStack_48;
      lStack_48 = 0;
      *unaff_x19 = lVar1;
      FUN_1082afac0(&uStack_50);
    }
  }
  else {
    lStack_48 = 0;
    *unaff_x19 = lVar1;
  }
  func_0x0001082afcd8();
  return;
}



/* Entry: 1082af050; end: 1082af21b;  */

void FUN_1082af050(long *param_1,long *param_2,ulong param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  long lStack_78;
  long lStack_70;
  long alStack_68 [5];
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else if (param_5 == 0) {
    uVar1 = 0x80;
    if ((int)param_4 != 5) {
      uVar1 = 0x1000;
    }
    if (uVar1 <= param_3) {
      uVar1 = param_3;
    }
    uVar4 = uVar1;
    if (-1 < (long)uVar1) {
      uVar4 = uVar1 - 1;
      for (uVar5 = 1; uVar5 < 0x40; uVar5 = uVar5 << 1) {
        uVar4 = uVar4 >> (uVar5 & 0x3f) | uVar4;
      }
      uVar4 = uVar4 + 1;
    }
    uVar5 = (uVar4 >> 1) + (uVar4 >> 2);
    if (uVar1 <= uVar5) {
      uVar4 = uVar5;
    }
    FUN_10827a214(alStack_68);
    FUN_1082a0330(uVar4,param_4,alStack_68);
    lVar2 = *param_2;
    FUN_1082aba94(lVar2,alStack_68);
    iVar6 = param_6;
    lStack_70 = lVar2;
    if (lVar2 == 0) {
      iVar6 = 0;
      if ((*(ulong *)(param_2[2] + 0x18) & 0x200000) == 0) {
        iVar6 = param_6;
      }
      FUN_10829f844(&lStack_78,param_2[1],uVar4,param_4,0);
      lVar2 = lStack_70;
      lStack_70 = lStack_78;
      lStack_78 = 0;
      FUN_1082afbac(lVar2);
      func_0x0001082afcd8();
    }
    lVar2 = lStack_70;
    if (((iVar6 == 0) || (lStack_70 == 0)) ||
       (lVar3 = lStack_70, FUN_1082a02a8(), lVar2 = lStack_70, (int)lVar3 != 0)) {
      lStack_70 = 0;
    }
    else {
      lVar2 = 0;
    }
    *param_1 = lVar2;
    FUN_10826b598(&lStack_70);
    FUN_10827a250(alStack_68);
  }
  else {
    uVar7 = *(undefined8 *)(param_2[2] + 0x18);
    FUN_10829f844(alStack_68,param_2[1],param_3,param_4);
    lVar2 = alStack_68[0];
    if (((param_6 == 0) || (((uint)uVar7 >> 0x15 & 1) != 0)) ||
       ((alStack_68[0] == 0 ||
        (lVar3 = alStack_68[0], FUN_1082a02a8(), lVar2 = alStack_68[0], (int)lVar3 != 0)))) {
      alStack_68[0] = 0;
    }
    else {
      lVar2 = 0;
    }
    *param_1 = lVar2;
    func_0x0001082afd78();
  }
  return;
}



/* Entry: 1082af21c; end: 1082af253;  */

undefined8 FUN_1082af21c(undefined8 *param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10840ffdc(param_2,1);
  }
  FUN_1082afae4(param_1,param_2);
  return *param_1;
}



/* Entry: 1082af254; end: 1082af3af;  */

void FUN_1082af254(undefined8 *param_1,undefined8 param_2,short *param_3,ulong param_4,uint param_5,
                  short param_6,long param_7)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  bool bVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  short *psStack_78;
  undefined8 uStack_70;
  short *psStack_68;
  
  uVar6 = (uint)param_4;
  uVar1 = param_5 * uVar6;
  uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  func_0x0001082afdd0(&psStack_68,param_2,uVar10,1);
  if (psStack_68 == (short *)0x0) {
    *param_1 = 0;
    goto LAB_1082af38c;
  }
  psVar7 = psStack_68;
  FUN_1082a0214();
  psStack_78 = (short *)0x0;
  uStack_70 = 0;
  if (psVar7 == (short *)0x0) {
    FUN_1082af3b0(&psStack_78,(long)(int)uVar1);
    bVar4 = psStack_78 == (short *)0x0;
    psVar7 = psStack_78;
  }
  else {
    bVar4 = true;
  }
  psVar5 = psVar7;
  for (uVar8 = 0; uVar8 != (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar8 = uVar8 + 1) {
    psVar2 = psVar5;
    psVar3 = param_3;
    for (uVar9 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)); uVar9 != 0; uVar9 = uVar9 - 1)
    {
      *psVar2 = *psVar3 + param_6 * (short)uVar8;
      psVar2 = psVar2 + 1;
      psVar3 = psVar3 + 1;
    }
    psVar5 = (short *)((long)psVar5 +
                      (-(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1));
  }
  if (bVar4) {
    func_0x0001082a0268();
LAB_1082af35c:
    if (param_7 != 0) {
      func_0x0001082aedbc(param_2,param_7,psStack_68);
    }
    psVar7 = psStack_68;
    psStack_68 = (short *)0x0;
  }
  else {
    psVar5 = psStack_68;
    func_0x0001082a02d0(psStack_68,psVar7,0,uVar10,0);
    if (((ulong)psVar5 & 1) != 0) goto LAB_1082af35c;
    psVar7 = (short *)0x0;
  }
  *param_1 = psVar7;
  func_0x0001081a3a7c(&psStack_78);
LAB_1082af38c:
  func_0x0001082afd78();
  return;
}



/* Entry: 1082af3b0; end: 1082af3e7;  */

void FUN_1082af3b0(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_1082afbf8(auStack_30);
  FUN_1082afbbc(param_1,auStack_30);
  func_0x0001081a3a7c(auStack_30);
  return;
}



/* Entry: 1082af3e8; end: 1082af41f;  */

/* WARNING: Removing unreachable block (ram,0x0001082af360) */

void FUN_1082af3e8(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  short *psVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  short *psVar6;
  short *psVar7;
  short *psStack_78;
  undefined8 uStack_70;
  short *psStack_68;
  
  func_0x0001082afdd0(&psStack_68,param_2,0xc000,1);
  if (psStack_68 == (short *)0x0) {
    *param_1 = 0;
    goto LAB_1082af38c;
  }
  psVar3 = psStack_68;
  FUN_1082a0214();
  psStack_78 = (short *)0x0;
  uStack_70 = 0;
  if (psVar3 == (short *)0x0) {
    FUN_1082af3b0(&psStack_78,0x6000);
    bVar1 = psStack_78 == (short *)0x0;
    psVar3 = psStack_78;
  }
  else {
    bVar1 = true;
  }
  psVar2 = psVar3;
  for (lVar4 = 0; lVar4 != 0x1000; lVar4 = lVar4 + 1) {
    lVar5 = 6;
    psVar6 = psVar2;
    psVar7 = (short *)&UNK_10df14b40;
    do {
      *psVar6 = *psVar7 + (short)lVar4 * 4;
      lVar5 = lVar5 + -1;
      psVar6 = psVar6 + 1;
      psVar7 = psVar7 + 1;
    } while (lVar5 != 0);
    psVar2 = psVar2 + 6;
  }
  if (bVar1) {
    func_0x0001082a0268();
LAB_1082af35c:
    psVar3 = psStack_68;
    psStack_68 = (short *)0x0;
  }
  else {
    psVar2 = psStack_68;
    func_0x0001082a02d0(psStack_68,psVar3,0,0xc000,0);
    if (((ulong)psVar2 & 1) != 0) goto LAB_1082af35c;
    psVar3 = (short *)0x0;
  }
  *param_1 = psVar3;
  func_0x0001081a3a7c(&psStack_78);
LAB_1082af38c:
  func_0x0001082afd78();
  return;
}



/* Entry: 1082af420; end: 1082af753;  */

void FUN_1082af420(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long lVar8;
  long *plVar9;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 auStack_170 [56];
  undefined1 auStack_138 [4];
  byte bStack_134;
  char cStack_e0;
  long alStack_c8 [14];
  undefined8 uStack_58;
  
  func_0x0001082afd8c();
  uVar4 = (int)param_3 == 0;
  lVar1 = 0x10;
  if ((bool)uVar4) {
    lVar1 = 8;
  }
  uStack_58 = extraout_x8;
  if (*(long *)((long)param_2 + lVar1) != 0) {
    bVar5 = true;
    goto LAB_1082af65c;
  }
  if ((*(long *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x80) != 0) &&
     (plVar9 = param_2, (**(code **)(*param_2 + 0x20))(param_2,param_3), (int)plVar9 != 0)) {
    FUN_10827a1fc(auStack_170);
    plVar9 = *(long **)(param_1 + 8);
    func_0x0001082afddc();
    func_0x0001082afdc4();
    (**(code **)(*plVar9 + 0xd8))(auStack_138,plVar9,alStack_c8);
    func_0x0001082afd80();
    if ((bool)uVar4) {
      func_0x0001082afca4();
    }
    if ((bStack_134 & 1) == 0) {
LAB_1082af688:
      uVar4 = cStack_e0 == '\x01';
      if ((bool)uVar4) {
        func_0x0001082afcb8(auStack_138);
      }
      func_0x0001082afdb4();
      bVar5 = false;
      goto LAB_1082af65c;
    }
    lVar8 = *(long *)(*param_2 + -0x18);
    uVar3 = *(undefined1 *)((long)param_2 + lVar8 + 0xbc);
    plVar9 = *(long **)(param_1 + 0x10);
    iVar6 = (int)param_2[3];
    if (((int)param_3 != 0) && (uVar4 = 0, iVar6 == 1)) {
      (**(code **)(*(long *)((long)param_2 + lVar8) + 0x50))(alStack_c8);
      plVar7 = plVar9;
      (**(code **)(*plVar9 + 0x30))(plVar9,alStack_c8);
      iVar2 = *(int *)((long)plVar9 + 0x44);
      iVar6 = (int)plVar7;
      uVar4 = iVar6 == iVar2;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
      func_0x0001082afd80();
      if ((bool)uVar4) {
        func_0x0001082afca4();
      }
      plVar9 = *(long **)(param_1 + 0x10);
      lVar8 = *(long *)(*param_2 + -0x18);
    }
    FUN_108281dc0(plVar9,auStack_138,*(undefined8 *)((long)param_2 + lVar8 + 0xb0),1,iVar6,0,uVar3,0
                  ,auStack_170);
    FUN_1082aedd4(alStack_c8,param_1,auStack_170);
    lStack_178 = alStack_c8[0];
    alStack_c8[0] = 0;
    FUN_1082837dc(alStack_c8);
    lVar8 = lStack_178;
    if (lStack_178 == 0) {
      plVar9 = *(long **)(param_1 + 8);
      func_0x0001082afddc();
      func_0x0001082afdc4();
      (**(code **)(*plVar9 + 0xd0))
                (&lStack_180,plVar9,alStack_c8,
                 *(undefined8 *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0xb0),iVar6);
      lVar8 = lStack_178;
      lStack_178 = lStack_180;
      lStack_180 = 0;
      func_0x0001082afc94(lVar8);
      FUN_108271b3c(&lStack_180);
      func_0x0001082afd80();
      if ((bool)uVar4) {
        func_0x0001082afca4();
      }
      if (lStack_178 == 0) {
        func_0x0001082afdbc();
        goto LAB_1082af688;
      }
      func_0x0001082aedbc(param_1,auStack_170);
      lVar8 = lStack_178;
    }
    lStack_178 = 0;
    lStack_188 = lVar8;
    FUN_1082a8140(param_2,&lStack_188,param_3);
    FUN_108271b3c(&lStack_188);
    func_0x0001082afdbc();
    if (cStack_e0 == '\x01') {
      func_0x0001082afcb8(auStack_138);
    }
    func_0x0001082afdb4();
  }
  uVar4 = *(long *)((long)param_2 + lVar1) == 0;
  bVar5 = !(bool)uVar4;
LAB_1082af65c:
  func_0x0001082afd28(uStack_58,bVar5);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082afdbc();
  if (cStack_e0 == '\x01') {
    func_0x0001082afcb8(auStack_138);
  }
  func_0x0001082afdb4();
  do {
    func_0x0001082afcc4();
  } while( true );
}



/* Entry: 1082af754; end: 1082af83b;  */

void FUN_1082af754(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  code *extraout_x9;
  long lStack_60;
  undefined8 uStack_58;
  
  if (*param_2 != 0) {
    uVar2 = param_2[2];
    uStack_58 = param_3;
    FUN_10828a6b0(uVar2,&uStack_58,param_4,1,param_5,0,0);
    if ((uVar2 & 1) != 0) {
      func_0x0001082afd9c(&lStack_60,param_2);
      FUN_1082af83c();
      lVar1 = lStack_60;
      if (lStack_60 == 0) {
        func_0x0001082afd9c(param_1);
        (*extraout_x9)();
      }
      else {
        lStack_60 = 0;
        *param_1 = lVar1;
      }
      FUN_108271b3c(&lStack_60);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1082af83c; end: 1082af8ff;  */

void FUN_1082af83c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined1 auStack_88 [40];
  
  FUN_10827a214(auStack_88);
  FUN_108281f14(param_2[2],param_4,param_3,2,param_5,0,param_6,param_7,auStack_88);
  lVar1 = *param_2;
  FUN_1082aba94(lVar1,auStack_88);
  if (lVar1 != 0) {
    FUN_1082aed6c(lVar1,param_8,param_9);
  }
  *param_1 = lVar1;
  FUN_10827a250(auStack_88);
  return;
}



/* Entry: 1082af900; end: 1082af937;  */

void FUN_1082af900(undefined8 *param_1,long *param_2)

{
  if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082af914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2[1] + 0x50))();
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1082af938; end: 1082afa97;  */

void FUN_1082af938(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  for (uVar2 = uVar4 + (long)(int)param_1[0x2b] * 0x18; uVar4 < uVar2; uVar2 = uVar2 - 0x18) {
    func_0x0001078bddf8(uVar2 - 8);
  }
  if ((uint)param_1[0x2b] == param_2) {
    puVar1 = (ulong *)*param_1;
  }
  else {
    if (0xe < (int)(uint)param_1[0x2b]) {
      _free(*param_1);
    }
    if ((int)param_2 < 0xf) {
      puVar1 = param_1 + 1;
      if ((int)param_2 < 1) {
        puVar1 = (ulong *)0x0;
      }
    }
    else {
      puVar1 = (ulong *)(ulong)param_2;
      FUN_10840ffdc(puVar1,0x18);
    }
    *param_1 = (ulong)puVar1;
    *(uint *)(param_1 + 0x2b) = param_2;
  }
  puVar3 = puVar1 + (long)(int)param_2 * 3;
  for (; puVar1 < puVar3; puVar1 = puVar1 + 3) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}



/* Entry: 1082afa98; end: 1082afabf;  */

void FUN_1082afa98(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  func_0x000107328610(param_1,&uStack_20);
  return;
}



/* Entry: 1082afac0; end: 1082afae3;  */

undefined8 FUN_1082afac0(undefined8 param_1)

{
  FUN_1082afae4(param_1,0);
  return param_1;
}



/* Entry: 1082afae4; end: 1082afb0f;  */

void FUN_1082afae4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 1082afb10; end: 1082afb5b;  */

long * FUN_1082afb10(long *param_1)

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



/* Entry: 1082afb5c; end: 1082afb83;  */

undefined8 FUN_1082afb5c(undefined8 param_1)

{
  FUN_1082af938(param_1,0);
  return param_1;
}



/* Entry: 1082afb84; end: 1082afbab;  */

undefined8 FUN_1082afb84(undefined8 param_1)

{
  func_0x0001082af9f4(param_1,0);
  return param_1;
}



/* Entry: 1082afbac; end: 1082afbbb;  */

void FUN_1082afbac(long *param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = param_1 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (param_1[0x10] == 0) {
    if ((*(int *)((long)param_1 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 1082afbbc; end: 1082afbf7;  */

long FUN_1082afbbc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    FUN_1082afc68(param_1);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  return param_1;
}



/* Entry: 1082afbf8; end: 1082afc4f;  */

undefined8 * FUN_1082afbf8(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (-1 < param_2) {
    param_1[1] = param_2;
    lVar2 = 0;
    if (param_2 != 0) {
      lVar2 = param_2 << 1;
      __Znam(lVar2);
    }
    FUN_1082afc50(param_1,lVar2);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082afc3c);
  (*pcVar1)();
}



/* Entry: 1082afc50; end: 1082afc67;  */

void FUN_1082afc50(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1082afc68; end: 1082afc93;  */

undefined8 FUN_1082afc68(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_1082afc50(param_1,uVar1);
  return param_1;
}



/* Entry: 1082afc94; end: 1082afe87;  */

void FUN_1082afc94(long *param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = param_1 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (param_1[0x10] == 0) {
    if ((*(int *)((long)param_1 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 1082afe88; end: 1082aff6f;  */

undefined1  [16] FUN_1082afe88(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  
  plVar3 = param_1 + 1;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  if (*plVar3 != 0) {
    plVar2 = param_1;
    func_0x0001082afe10(param_1,param_2);
    if (plVar2 < (long *)param_1[5]) goto LAB_1082aff44;
    param_1[5] = param_1[5] << 1;
    FUN_1082b00ac(param_1 + 2,plVar3);
  }
  FUN_1082af050(&uStack_38,*(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x80),param_1[5],
                (int)param_1[7],0,0);
  uVar1 = uStack_38;
  uStack_38 = 0;
  FUN_10828fbc8(plVar3,uVar1);
  FUN_10826b598(&uStack_38);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_1[10] + 1;
  func_0x0001082afe10(param_1,param_2);
  plVar2 = param_1;
LAB_1082aff44:
  auVar4._0_8_ = *plVar3;
  auVar4._8_8_ = plVar2;
  return auVar4;
}



/* Entry: 1082aff70; end: 1082b0083;  */

void FUN_1082aff70(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  for (uVar2 = 0; uVar2 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3);
      uVar2 = (ulong)((int)uVar2 + 1)) {
    func_0x0001082a0268(*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8));
    uStack_38 = *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8);
    *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8) = 0;
    (**(code **)(*param_2 + 0x90))(param_2,&uStack_38);
    FUN_10826b598(&uStack_38);
  }
  FUN_10826b020(param_1 + 0x10);
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    plVar1 = (long *)0x18;
    __Znwm();
    lVar3 = *(long *)(param_1 + 0x40);
    *plVar1 = param_1;
    plVar1[1] = lVar3;
    plVar1[2] = *(long *)(param_1 + 0x50);
    pcStack_70 = FUN_1082b0084;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_48 = 1;
    uStack_40 = 0;
    plStack_50 = plVar1;
    (**(code **)(*param_2 + 0x78))(param_2,&pcStack_70,0);
    FUN_1082671e4(&pcStack_70);
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  return;
}



/* Entry: 1082b0084; end: 1082b00ab;  */

void FUN_1082b0084(long *param_1)

{
  long lVar1;
  
  if (((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
     (param_1[2] == *(long *)(lVar1 + 0x50))) {
    *(long *)(lVar1 + 0x48) = param_1[1];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b00ac; end: 1082b00f7;  */

undefined8 * FUN_1082b00ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = param_1;
    FUN_1082b00f8();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 1082b00f8; end: 1082b022f;  */

long * FUN_1082b00f8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar8 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  lVar14 = (long)plVar4 - (long)plVar8 >> 3;
  uVar1 = lVar14 + 1;
  if (uVar1 >> 0x3d == 0) {
    plStack_58 = param_1 + 2;
    uVar13 = *plStack_58 - (long)plVar8 >> 2;
    if (uVar13 <= uVar1) {
      uVar13 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(*plStack_58 - (long)plVar8)) {
      uVar13 = 0x1fffffffffffffff;
    }
    if (uVar13 == 0) {
      lVar7 = 0;
    }
    else {
      if (uVar13 >> 0x3d != 0) goto LAB_1082b022c;
      lVar7 = uVar13 << 3;
      __Znwm();
    }
    puVar3 = (undefined8 *)(lVar7 + ((long)plVar4 - (long)plVar8));
    uVar9 = *param_2;
    *param_2 = 0;
    *puVar3 = uVar9;
    plVar10 = puVar3 + -lVar14;
    for (plVar11 = plVar8; plVar11 != plVar4; plVar11 = plVar11 + 1) {
      lVar12 = *plVar11;
      if (lVar12 != 0) {
        piVar2 = (int *)(lVar12 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *plVar10 = lVar12;
      plVar10 = plVar10 + 1;
    }
    for (; plVar8 != plVar4; plVar8 = plVar8 + 1) {
      FUN_10826b598(plVar8);
    }
    lStack_78 = *param_1;
    *param_1 = (long)(puVar3 + -lVar14);
    param_1[1] = (long)(puVar3 + 1);
    lStack_60 = param_1[2];
    param_1[2] = lVar7 + uVar13 * 8;
    lStack_70 = lStack_78;
    lStack_68 = lStack_78;
    FUN_1082b0244(&lStack_78);
    return puVar3 + 1;
  }
  FUN_1082b0230();
LAB_1082b022c:
  func_0x000104bd35f4();
  plVar8 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar14 = plVar8[1];
  while (lVar14 != plVar8[2]) {
    plVar8[2] = plVar8[2] + -8;
    FUN_10826b598();
  }
  if (*plVar8 != 0) {
    __ZdlPv();
  }
  return plVar8;
}



/* Entry: 1082b0230; end: 1082b0243;  */

long * FUN_1082b0230(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = plVar1[1];
  while (lVar2 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -8;
    FUN_10826b598();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 1082b0244; end: 1082b028f;  */

long * FUN_1082b0244(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    FUN_10826b598();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1082b0290; end: 1082b029b;  */

void FUN_1082b0290(long *****param_1,float *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined1 in_ZR;
  char cVar5;
  uint uVar6;
  long *****ppppplVar7;
  undefined8 *puVar8;
  long lVar9;
  float *pfVar10;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  long ****pppplVar11;
  long ****pppplVar12;
  long *****unaff_x20;
  long *****ppppplVar13;
  ushort uVar14;
  int iVar15;
  int iVar17;
  long ****pppplVar16;
  long ****pppplVar18;
  long ****pppplVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float unaff_s9;
  long ****pppplStack_c10;
  long lStack_c08;
  undefined4 auStack_c00 [4];
  long ****pppplStack_bf0;
  long ****pppplStack_be8;
  long ****pppplStack_be0;
  long ****pppplStack_bd8;
  undefined1 *puStack_bd0;
  code *pcStack_bc8;
  long ***ppplStack_bc0;
  undefined8 *puStack_bb8;
  long ***ppplStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  float fStack_b90;
  float fStack_b8c;
  long ****pppplStack_b88;
  undefined1 uStack_b80;
  undefined1 uStack_b58;
  long ***appplStack_b50 [347];
  undefined8 uStack_78;
  
  lVar9 = 0;
  pfVar10 = (float *)0x0;
  func_0x00010834ac2c();
  uStack_78 = extraout_x8_00;
  func_0x00010834ace8();
  ppppplVar7 = param_1;
  if ((extraout_x8_01 & 1) != 0) goto LAB_1083498e0;
  ppppplVar13 = (long *****)param_1[7];
  uStack_b80 = 0;
  uStack_b58 = 0;
  pppplStack_b88 = (long ****)ppppplVar13;
  if (lVar9 != 0) {
    ppppplVar7 = &pppplStack_b88;
    FUN_108349b00();
    FUN_108363e94();
    ppppplVar13 = (long *****)param_1[7];
  }
  unaff_x20 = param_1;
  if (*param_3 == 0 && param_3[2] == 0) {
    fVar24 = *(float *)(param_3 + 8);
    bVar2 = *(byte *)(param_3 + 9);
    ppppplVar7 = ppppplVar13;
    FUN_10827a0d8();
    bVar1 = 0;
    if (fVar24 != 0.0 || bVar2 >> 6 != 2) {
      bVar1 = bVar2 >> 6;
    }
    iVar15 = 0;
    if (bVar1 != 2) {
      iVar15 = (int)ppppplVar7;
    }
    in_ZR = 0;
    if (iVar15 == 1) {
      cVar5 = bVar1 == 0;
      if ((bVar1 == 0) || (fVar24 == 0.0)) {
LAB_1083498f8:
        uStack_ba0 = (long ****)0x0;
        uStack_b98 = 0;
        if (lVar9 != 0) {
          param_2 = pfVar10;
        }
        ppppplVar7 = (long *****)param_1[7];
        puVar8 = &uStack_ba0;
        FUN_1083645e0(ppppplVar7,puVar8,param_2,2);
        fVar3 = (float)uStack_ba0;
        if ((float)uStack_b98 < (float)uStack_ba0) {
          uStack_ba0 = (long ****)CONCAT44(uStack_ba0._4_4_,(float)uStack_b98);
          uStack_b98 = CONCAT44(uStack_b98._4_4_,fVar3);
        }
        fVar3 = uStack_ba0._4_4_;
        fVar4 = uStack_b98._4_4_;
        if (uStack_b98._4_4_ < uStack_ba0._4_4_) {
          uStack_ba0 = (long ****)CONCAT44(uStack_b98._4_4_,(float)uStack_ba0);
          uStack_b98 = CONCAT44(fVar3,(float)uStack_b98);
        }
        uStack_ba8 = uStack_b98;
        ppplStack_bb0 = (long ***)uStack_ba0;
        in_ZR = (*(byte *)(param_3 + 9) & 0xc0) == 0;
        if (!(bool)in_ZR) {
          in_ZR = *(float *)(param_3 + 8) == 0.0;
          if ((bool)in_ZR) {
            ppplStack_bb0 =
                 (long ***)
                 CONCAT44((float)((ulong)uStack_ba0 >> 0x20) + -1.0,SUB84(uStack_ba0,0) + -1.0);
            uStack_ba8 = CONCAT44((float)((ulong)uStack_b98 >> 0x20) + 1.0,(float)uStack_b98 + 1.0);
          }
          else {
            in_ZR = cVar5 == '\x02';
            if (!(bool)in_ZR) {
              unaff_s9 = *(float *)(param_3 + 8);
              fVar24 = fVar4;
              FUN_108349bfc(param_1[7]);
            }
            ppppplVar7 = (long *****)&ppplStack_bb0;
            func_0x00010816882c(unaff_s9 * 0.5,fVar24 * 0.5);
          }
        }
        iVar20 = -(uint)(SUB84(ppplStack_bb0,0) <= -8.5070587e+37);
        fVar24 = (float)((ulong)ppplStack_bb0 >> 0x20);
        iVar21 = -(uint)(fVar24 <= -8.5070587e+37);
        iVar22 = -(uint)((float)uStack_ba8 <= 8.5070587e+37);
        iVar23 = -(uint)((float)((ulong)uStack_ba8 >> 0x20) <= 8.5070587e+37);
        iVar15 = -(uint)(-8.5070587e+37 <= SUB84(ppplStack_bb0,0));
        iVar17 = -(uint)(-8.5070587e+37 <= fVar24);
        uVar14 = NEON_umaxv(CONCAT44(CONCAT22(CONCAT11(~(byte)((uint)iVar23 >> 8),~(byte)iVar23),
                                              CONCAT11(~(byte)((uint)iVar22 >> 8),~(byte)iVar22)),
                                     CONCAT22(CONCAT11(~(byte)((uint)iVar17 >> 8),~(byte)iVar17),
                                              CONCAT11(~(byte)((uint)iVar15 >> 8),~(byte)iVar15))),2
                           );
        if ((uVar14 & 1) == 0) {
          ppppplVar7 = (long *****)&ppplStack_bb0;
          func_0x0001083486bc(uVar14,0xfe7ffffffe7fffff,
                              CONCAT22(CONCAT11(~(byte)((uint)iVar21 >> 8),~(byte)iVar21),
                                       CONCAT11(~(byte)((uint)iVar20 >> 8),~(byte)iVar20)));
          in_ZR = cVar5 == '\0';
          uVar6 = (uint)ppppplVar7;
          if ((bool)in_ZR) {
            uVar6 = 1;
          }
          if ((uVar6 & 1) == 0) {
            func_0x00010834ac8c();
          }
          else {
            pppplVar11 = &ppplStack_bb0;
            func_0x00010812f180();
            ppppplVar7 = (long *****)param_1[8];
            ppplStack_bc0 = (long ***)pppplVar11;
            puStack_bb8 = puVar8;
            FUN_108349328(ppppplVar7,&ppplStack_bc0);
            if (((ulong)ppppplVar7 & 1) == 0) {
              ppppplVar7 = (long *****)appplStack_b50;
              func_0x00010834acac(ppppplVar7,param_1,pppplStack_b88);
              uVar6 = *(uint *)(param_3 + 9);
              if (cVar5 == '\0') {
                if ((uVar6 & 1) == 0) {
                  func_0x00010834ac74();
                  FUN_10839c8a4();
                }
                else {
                  func_0x00010834ac74();
                  FUN_10839b540();
                }
              }
              else {
                in_ZR = cVar5 == '\x01';
                if ((bool)in_ZR) {
                  if ((uVar6 & 1) == 0) {
                    func_0x00010834ac74();
                    FUN_108397c28();
                  }
                  else {
                    func_0x00010834ac74();
                    FUN_10839b888();
                  }
                }
                else if ((uVar6 & 1) == 0) {
                  ppppplVar7 = (long *****)&uStack_ba0;
                  FUN_10839d33c(ppppplVar7,&fStack_b90);
                }
                else {
                  ppppplVar7 = (long *****)&uStack_ba0;
                  FUN_10839bdb4(ppppplVar7,&fStack_b90);
                }
              }
              func_0x00010834ac3c(appplStack_b50);
            }
          }
        }
        goto LAB_1083498e0;
      }
      in_ZR = *param_2 == param_2[2];
      if ((*param_2 < param_2[2]) &&
         ((in_ZR = param_2[1] == param_2[3], param_2[1] < param_2[3] &&
          (in_ZR = 0, (*(byte *)(param_3 + 9) & 0x30) == 0)))) {
        fVar24 = 1.4142135;
        in_ZR = *(float *)((long)param_3 + 0x44) == 1.4142135;
        if (1.4142135 <= *(float *)((long)param_3 + 0x44)) {
          fStack_b90 = *(float *)(param_3 + 8);
          FUN_108349bfc(ppppplVar13);
          cVar5 = '\x02';
          fStack_b8c = fVar24;
          unaff_s9 = fStack_b90;
          goto LAB_1083498f8;
        }
      }
    }
  }
  func_0x00010834ac8c();
LAB_1083498e0:
  func_0x00010834ac18(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppppplVar13 = ppppplVar7;
  func_0x00010834ac3c(appplStack_b50);
  func_0x00010834ac60();
  pcStack_bc8 = FUN_108349b00;
  pppplStack_be0 = (long ****)unaff_x20;
  pppplStack_bd8 = (long ****)ppppplVar7;
  puStack_bd0 = &stack0xfffffffffffffff0;
  if (((ulong)ppppplVar13[6] & 1) == 0) {
    pppplVar11 = *ppppplVar13;
    pppplVar12 = (long ****)pppplVar11[4];
    pppplVar19 = (long ****)*pppplVar11;
    pppplVar18 = (long ****)pppplVar11[3];
    pppplVar16 = (long ****)pppplVar11[2];
    ppppplVar13[2] = (long ****)pppplVar11[1];
    ppppplVar13[1] = pppplVar19;
    ppppplVar13[4] = pppplVar18;
    ppppplVar13[3] = pppplVar16;
    ppppplVar13[5] = pppplVar12;
    *(undefined1 *)(ppppplVar13 + 6) = 1;
    ppppplVar7 = ppppplVar13 + 1;
    FUN_108193f7c();
    *ppppplVar13 = (long ****)ppppplVar7;
  }
  pppplVar12 = pppplStack_bd8;
  pppplVar11 = pppplStack_be0;
  ppppplVar7 = ppppplVar13 + 1;
  if (((ulong)ppppplVar13[6] & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  iVar15 = (int)&pppplStack_c10;
  pppplStack_bf0 = pppplVar11;
  pppplStack_be8 = pppplVar12;
  pppplStack_bd8 = (long ****)FUN_108193f94;
  *extraout_x8 = 0;
  extraout_x8[0x10] = 0;
  auStack_c00[0] = 0;
  ppppplVar13 = ppppplVar7;
  pppplStack_be0 = (long ****)&puStack_bd0;
  func_0x0001081943b0();
  pppplStack_c10 = (long ****)ppppplVar13;
  _strlen();
  lStack_c08 = (long)ppppplVar7 + (long)ppppplVar13;
  FUN_10818fb90(&pppplStack_c10,auStack_c00);
  if (iVar15 != 0) {
    FUN_10819401c(extraout_x8,auStack_c00);
  }
  func_0x000108194398();
  return;
}



/* Entry: 1082b029c; end: 1082b032b;  */

void FUN_1082b029c(undefined8 *param_1,uint param_2,int param_3)

{
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x40800000;
  FUN_1083762f4(param_1,1);
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffe | param_2;
  FUN_108376208(param_1,param_3 << 0x18 | 0xffffff);
  return;
}



/* Entry: 1082b032c; end: 1082b040b;  */

void FUN_1082b032c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long unaff_x19;
  undefined1 auStack_c0 [56];
  undefined8 uStack_88;
  undefined1 auStack_80 [80];
  
  func_0x0001082b077c();
  if (*(long *)(param_2 + 0x50) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x50) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_88 = 0;
  FUN_1082b15a4(auStack_80);
  func_0x000108115b70(&uStack_88);
  FUN_1083a63b0(param_2 + 0x40,auStack_80);
  func_0x0001082b07b8();
  func_0x0001082b07d0();
  *(undefined8 *)(unaff_x19 + 0x78) = param_3;
  FUN_108376ad8(auStack_c0);
  FUN_108287e50(param_2,auStack_c0);
  if (param_5 == 0xff) {
    func_0x0001082b0768();
    func_0x0001082b040c();
  }
  else {
    func_0x0001082b0768();
    func_0x0001082b0438();
  }
  func_0x0001082b07b0();
  func_0x0001082b07a8();
  return;
}



/* Entry: 1082b040c; end: 1082b0443;  */

void FUN_1082b040c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,float *param_6,long *param_7,undefined8 *param_8)

{
  float *pfVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  long *plVar11;
  long **pplVar12;
  undefined8 uVar13;
  float *pfVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int iVar18;
  float *pfVar19;
  long **unaff_x25;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  long *plStack_c18;
  undefined1 auStack_c10 [80];
  undefined1 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 uStack_bb0;
  undefined1 uStack_b88;
  undefined8 uStack_b80;
  byte bStack_b72;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined4 uStack_b68;
  undefined4 uStack_b64;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_78;
  
  bVar6 = (*(uint *)(param_7 + 9) & 0xc0) == 0x40;
  uVar9 = *(float *)(param_7 + 8) == 0.0 && bVar6;
  uVar17 = (ulong)(*(float *)(param_7 + 8) != 0.0 || !bVar6);
  lVar15 = 0;
  iVar18 = 0;
  func_0x00010834ac2c();
  uStack_78 = extraout_x8;
  func_0x00010834ace8();
  if ((extraout_x8_00 & 1) == 0) {
    FUN_108376ad8(&uStack_b80);
    uStack_bb8 = *(undefined8 *)(param_5 + 0x38);
    uStack_bb0 = 0;
    uStack_b88 = 0;
    bStack_b72 = bStack_b72 | 4;
    if (lVar15 != 0) {
      if ((*param_7 == 0) && (uVar9 = (*(byte *)(param_7 + 9) & 0xc0) == 0, (bool)uVar9)) {
        FUN_108349b00(&uStack_bb8);
        FUN_108363e94();
      }
      else {
        uVar9 = iVar18 == 0;
        pfVar14 = param_6;
        if ((bool)uVar9) {
          pfVar14 = (float *)&uStack_b80;
        }
        iVar18 = 1;
        FUN_1083796e4(param_6,lVar15,pfVar14,1);
        param_6 = pfVar14;
      }
    }
    unaff_x25 = &plStack_c18;
    auStack_c10[0] = 0;
    uStack_bc0 = 0;
    plVar11 = param_7;
    plStack_c18 = param_7;
    FUN_108349e68(param_7,uStack_bb8,&uStack_b50);
    if ((int)plVar11 != 0) {
      plVar11 = param_7;
      FUN_10837626c();
      fVar22 = (float)uStack_b50;
      uVar9 = (float)uStack_b50 == 1.0;
      if ((bool)uVar9) {
        pplVar12 = &plStack_c18;
        FUN_10827d610();
        *(undefined4 *)(pplVar12 + 8) = 0;
      }
      else if (((ulong)plVar11 >> 0x20 & 1) != 0) {
        uVar10 = (uint)plVar11;
        uVar9 = uVar10 == 0xc;
        if ((uVar10 < 0xd) && (uVar9 = (1 << (ulong)(uVar10 & 0x1f) & 0x1b1cU) == 0, !(bool)uVar9))
        {
          FUN_108188360();
          pplVar12 = &plStack_c18;
          FUN_10827d610();
          *(undefined4 *)(pplVar12 + 8) = 0;
          fVar20 = (float)(uint)((int)param_7 * (int)(fVar22 * 256.0) >> 8) * 0.003921569;
          uVar9 = fVar20 == 1.0;
          fVar22 = 1.0;
          if (fVar20 <= 1.0) {
            fVar22 = fVar20;
          }
          param_2 = 0;
          if (fVar22 <= 0.0) {
            fVar22 = 0.0;
          }
          *(float *)((long)pplVar12 + 0x3c) = fVar22;
        }
      }
    }
    if ((*plStack_c18 == 0) && (uVar9 = (*(byte *)(plStack_c18 + 9) & 0xc0) == 0, (bool)uVar9)) {
      pfVar19 = (float *)0x1;
      pfVar14 = param_6;
    }
    else {
      puVar16 = (undefined8 *)0x0;
      uStack_c28 = 0;
      uStack_c20 = 0;
      if ((*(byte *)(*(long *)(param_5 + 0x40) + 0x31) & 1) == 0) {
        uStack_b48 = 0;
        uStack_b50 = 0x3f800000;
        uStack_b38 = 0;
        uStack_b40 = 0x3f800000;
        uStack_b30 = 0x103f800000;
        uVar13 = *(undefined8 *)(param_5 + 0x38);
        FUN_10818cfd0(uVar13,&uStack_b50);
        if ((int)uVar13 == 0) {
          puVar16 = (undefined8 *)0x0;
        }
        else {
          func_0x00010834acd4();
          lVar15 = 0;
          if ((bool)uVar9) {
            lVar15 = extraout_x9;
          }
          uStack_b58 = ((undefined8 *)(extraout_x8_01 + lVar15))[1];
          uVar13 = *(undefined8 *)(extraout_x8_01 + lVar15);
          uStack_b60 = uVar13;
          func_0x0001082889e4(&uStack_b60,0xffffffff,0xffffffff);
          uVar21 = (undefined4)uVar13;
          FUN_10817500c(&uStack_b60);
          uStack_b70 = uVar21;
          uStack_b6c = param_2;
          uStack_b68 = param_3;
          uStack_b64 = param_4;
          FUN_108364f90(&uStack_b50,&uStack_c28,&uStack_b70,1);
          puVar16 = &uStack_c28;
        }
      }
      FUN_10837f038(param_6,plStack_c18,&uStack_b80,puVar16,*(undefined8 *)(param_5 + 0x38));
      pfVar14 = (float *)&uStack_b80;
      pfVar19 = param_6;
    }
    pfVar1 = pfVar14;
    if (iVar18 == 0) {
      pfVar1 = (float *)&uStack_b80;
    }
    FUN_1083796e4(pfVar14,uStack_bb8,pfVar1,1);
    plVar11 = plStack_c18;
    pfVar14 = pfVar1;
    func_0x0001083773e0();
    fVar22 = pfVar14[2];
    bVar6 = true;
    bVar8 = false;
    if (-8.5070587e+37 <= *pfVar14) {
      bVar6 = false;
      bVar8 = true;
      if (!NAN(pfVar14[1])) {
        bVar6 = pfVar14[1] < -8.5070587e+37;
        bVar8 = false;
      }
    }
    uVar9 = false;
    bVar7 = true;
    if (bVar6 == bVar8) {
      uVar9 = false;
      bVar7 = true;
      if (!NAN(fVar22)) {
        uVar9 = fVar22 == 8.5070587e+37;
        bVar7 = 8.5070587e+37 <= fVar22;
      }
    }
    if ((!bVar7 || (bool)uVar9) &&
       (uVar9 = pfVar14[3] == 8.5070587e+37, pfVar14[3] <= 8.5070587e+37)) {
      uStack_b50 = 0;
      FUN_1083494dc(&uStack_b48,0xab0);
      if (param_8 == (undefined8 *)0x0) {
        param_8 = &uStack_b50;
        FUN_108349420(param_8,param_5,0,plVar11,uVar17);
      }
      uVar17 = plVar11[2];
      if ((uVar17 == 0) ||
         (FUN_108363338(uVar17,pfVar1,*(undefined8 *)(param_5 + 0x38),
                        *(undefined8 *)(param_5 + 0x40),param_8,pfVar19), (uVar17 & 1) == 0)) {
        uVar10 = *(uint *)(plVar11 + 9);
        uVar5 = uVar10 >> 2 & 3;
        pcVar3 = (code *)0x10839cde4;
        if (uVar5 != 2) {
          pcVar3 = FUN_10839cb1c;
        }
        pcVar4 = (code *)0x10839d090;
        if (uVar5 != 1) {
          pcVar4 = pcVar3;
        }
        pcVar3 = FUN_10839d084;
        if (uVar5 != 2) {
          pcVar3 = FUN_10839cdd8;
        }
        pcVar2 = FUN_10839d330;
        if (uVar5 != 1) {
          pcVar2 = pcVar3;
        }
        if ((uVar10 & 1) != 0) {
          pcVar4 = pcVar2;
        }
        pcVar3 = FUN_10839acc8;
        if ((uVar10 & 1) != 0) {
          pcVar3 = FUN_10839ad68;
        }
        uVar9 = (int)pfVar19 == 0;
        if (!(bool)uVar9) {
          pcVar4 = pcVar3;
        }
        (*pcVar4)(pfVar1,*(undefined8 *)(param_5 + 0x40),param_8);
      }
      func_0x00010834ac3c(&uStack_b50);
    }
    FUN_10819a688(auStack_c10);
    FUN_10837ca5c(uStack_b80);
  }
  func_0x00010834ac18(uStack_78);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  FUN_10819a688(unaff_x25 + 1);
  FUN_10837ca5c(uStack_b80);
  func_0x00010834ac60();
  return;
}



/* Entry: 1082b0444; end: 1082b0563;  */

void FUN_1082b0444(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  byte bVar1;
  long unaff_x19;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [80];
  
  func_0x0001082b077c();
  func_0x0001082b07b8();
  func_0x0001082b07d0();
  *(undefined8 *)(unaff_x19 + 0x78) = param_3;
  bVar1 = *(byte *)(param_2 + 0x38);
  if (bVar1 != 4) {
    if (*(char *)(param_2 + 0x3b) != '\x01') {
      switch(bVar1) {
      case 0:
      case 1:
      case 6:
        break;
      case 2:
        FUN_1082b0290(unaff_x19 + 0x40,param_2,auStack_80);
        break;
      case 3:
        FUN_108349d24(unaff_x19 + 0x40,param_2,auStack_80);
        break;
      default:
        goto LAB_1082b0480;
      }
      goto LAB_1082b0528;
    }
    if ((bVar1 < 7) && ((1 << (ulong)(bVar1 & 0x1f) & 0x43U) != 0)) {
      FUN_108349754(unaff_x19 + 0x40,auStack_80);
      goto LAB_1082b0528;
    }
  }
LAB_1082b0480:
  FUN_108376ad8(auStack_c0);
  FUN_1082d8288(param_2,auStack_c0,1);
  if (param_5 == 0xff) {
    func_0x0001082b0768();
    func_0x0001082b040c();
  }
  else {
    func_0x0001082b0768();
    func_0x0001082b0438();
  }
  func_0x0001082b07b0();
LAB_1082b0528:
  func_0x0001082b07a8();
  return;
}



/* Entry: 1082b0564; end: 1082b0633;  */

ulong FUN_1082b0564(float *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  *param_1 = -(float)iVar1;
  param_1[1] = -(float)iVar2;
  uStack_48 = CONCAT44(param_2[3] - iVar2,param_2[2] - iVar1);
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0x200000001;
  uVar3 = *(ulong *)(param_1 + 2);
  uStack_38 = uStack_48;
  FUN_10832ff5c(uVar3,&uStack_58);
  if ((uVar3 & 1) != 0) {
    FUN_10827aaec(*(undefined8 *)(param_1 + 2),0);
    *(code **)(param_1 + 0x1c) = FUN_1083366e0;
    FUN_1082b0634(param_1 + 0x12,*(undefined8 *)(param_1 + 2));
    func_0x000108386f34(param_1 + 0x24,&uStack_40);
    *(float **)(param_1 + 0x20) = param_1 + 0x24;
  }
  FUN_10810a400(&uStack_58);
  return uVar3;
}



/* Entry: 1082b0634; end: 1082b065f;  */

undefined8 * FUN_1082b0634(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x000108152830(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1082b0660; end: 1082b0763;  */

void FUN_1082b0660(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  long alStack_80 [10];
  
  lVar1 = *(long *)(param_2 + 8);
  alStack_80[9] = *(undefined8 *)(lVar1 + 0x20);
  alStack_80[7] = 0;
  alStack_80[8] = 0x200000001;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  alStack_80[6] = 0;
  alStack_80[3] = 0;
  alStack_80[2] = 0;
  alStack_80[5] = 0;
  alStack_80[4] = 0;
  alStack_80[1] = 0;
  alStack_80[0] = 0;
  FUN_10832ffd4();
  FUN_108330bac(alStack_80,alStack_80 + 7,lVar1,uVar2,FUN_1082b0764,0);
  if (alStack_80[0] != 0) {
    *(undefined1 *)(alStack_80[0] + 0x59) = 2;
  }
  FUN_1082b8914(&uStack_98,param_3,alStack_80,0,param_4,1);
  uVar2 = uStack_98;
  uStack_98 = 0;
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 1) = uStack_90;
  *(undefined2 *)((long)param_1 + 0xc) = uStack_8c;
  FUN_1082764bc(&uStack_98);
  FUN_108330548(alStack_80);
  FUN_10810a400(alStack_80 + 7);
  return;
}



/* Entry: 1082b0764; end: 1082b07db;  */

void FUN_1082b0764(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 1082b07dc; end: 1082b08f3;  */

void FUN_1082b07dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  
  if (**(int **)(param_1 + 0x18) != 0) {
    FUN_1083a3a90(param_3,&UNK_10f483bc2);
  }
  if (**(int **)(param_1 + 0x20) != 0) {
    FUN_1082b08f4(*(int **)(param_1 + 0x20) + 2);
  }
  puVar3 = &UNK_10f483be2;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    goto code_r0x0001082b0880;
  case 1:
    puVar3 = &UNK_10f483beb;
    break;
  case 2:
    break;
  case 3:
    puVar3 = &UNK_10f483be5;
    break;
  case 4:
    puVar3 = &UNK_10f483bef;
    break;
  default:
    FUN_10841076c(&UNK_10f483bf7);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1082b08f4);
    (*pcVar2)();
  }
  FUN_1082b08f4(puVar3);
code_r0x0001082b0880:
  iVar1 = *(int *)(param_1 + 8);
  func_0x000108395460();
  if (iVar1 == 0) {
    puVar3 = &UNK_10f483bdc;
  }
  else {
    puVar3 = &UNK_10f483bd2;
  }
  FUN_1083a3a90(param_3,puVar3);
  return;
}



/* Entry: 1082b08f4; end: 1082b0907;  */

void FUN_1082b08f4(undefined8 param_1)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_1;
  FUN_1083a3ab4();
  return;
}



/* Entry: 1082b0908; end: 1082b0a47;  */

void FUN_1082b0908(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lVar7 = 0;
  lVar4 = (param_2[1] - *param_2) / 0x18 + 1;
  plVar6 = (long *)(*param_2 + -0x18);
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      uVar3 = *(ulong *)(*(long *)(*(long *)(param_2[3] + 0x20) + 0x10) + 0x48);
      uVar1 = param_3;
      if (param_3 <= uVar3) {
        uVar1 = uVar3;
      }
      FUN_1082af050(&lStack_48,*(undefined8 *)(*(long *)(param_2[3] + 0x20) + 0x80),uVar1,3,0,0);
      if (lStack_48 == 0) {
        bVar2 = false;
LAB_1082b09f4:
        plVar8 = (long *)0x0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      else {
        FUN_1082a0214();
        bVar2 = lStack_48 != 0;
        if (lStack_48 == 0) goto LAB_1082b09f4;
        FUN_1082b0a48(param_2,&lStack_48,auStack_50);
        lVar7 = 0;
        plVar8 = (long *)(param_2[1] + -0x18);
      }
      FUN_1082b0f38();
      if (!bVar2) {
        return;
      }
      lVar5 = *plVar8;
      break;
    }
    plVar8 = plVar6 + 3;
    lVar5 = plVar6[3];
    uVar1 = 0;
    if (param_4 != 0) {
      uVar1 = ((param_4 - 1) + plVar6[5]) / param_4;
    }
    lVar7 = uVar1 * param_4;
    plVar6 = plVar8;
  } while ((ulong)(*(long *)(lVar5 + 0xc0) - lVar7) < param_3);
  plVar8[2] = lVar7 + param_3;
  lVar4 = plVar8[1];
  *param_1 = lVar5;
  param_1[1] = lVar7;
  param_1[2] = lVar4 + lVar7;
  return;
}



/* Entry: 1082b0a48; end: 1082b0a83;  */

long FUN_1082b0a48(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1082b0b20();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_1082b0b64();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 1082b0a84; end: 1082b0b1f;  */

void FUN_1082b0a84(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_38;
  
  lVar2 = 0;
  for (uVar3 = 0; uVar3 < (ulong)((param_1[1] - *param_1) / 0x18); uVar3 = uVar3 + 1) {
    func_0x0001082a0268(*(undefined8 *)(*param_1 + lVar2));
    uStack_38 = *(undefined8 *)(*param_1 + lVar2);
    plVar1 = (long *)param_1[3];
    *(undefined8 *)(*param_1 + lVar2) = 0;
    (**(code **)(*plVar1 + 0x90))(plVar1,&uStack_38);
    FUN_1082b0f38();
    lVar2 = lVar2 + 0x18;
  }
  FUN_10826b08c(param_1);
  return;
}



/* Entry: 1082b0b20; end: 1082b0b63;  */

void FUN_1082b0b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1082b0c18(param_1 + 0x10,lVar1,param_2,param_3);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 1082b0b64; end: 1082b0c17;  */

long FUN_1082b0b64(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x0001082b0c4c(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_1082b0d3c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  func_0x0001082b0c18(param_1 + 2,lStack_48,param_2,param_3);
  lStack_48 = lStack_48 + 0x18;
  FUN_1082b0c9c(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x0001082b0ec8(auStack_58);
  return lVar2;
}



/* Entry: 1082b0c18; end: 1082b0c9b;  */

void FUN_1082b0c18(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  *param_3 = 0;
  uVar2 = *param_4;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = 0;
  FUN_1082b0f38();
  return;
}



/* Entry: 1082b0c9c; end: 1082b0d27;  */

void FUN_1082b0c9c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_1082b0dd8(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1082b0d28; end: 1082b0d3b;  */

long * FUN_1082b0d28(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f483c8b;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001082b0d88();
  }
  lVar2 = param_4 + param_3 * 0x18;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x18;
  return plVar1;
}



/* Entry: 1082b0d3c; end: 1082b0dab;  */

long * FUN_1082b0d3c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001082b0d88();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1082b0dac; end: 1082b0dd7;  */

void FUN_1082b0dac(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_60;
  long **pplStack_58;
  long **pplStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  pplStack_58 = &plStack_40;
  pplStack_50 = &plStack_38;
  plStack_38 = param_4;
  for (plVar4 = param_2; plVar4 != param_3; plVar4 = plVar4 + 3) {
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plStack_38 = lVar5;
    lVar5 = plVar4[1];
    plStack_38[2] = plVar4[2];
    plStack_38[1] = lVar5;
    plStack_38 = plStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  plStack_40 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    FUN_10826b598(param_2);
  }
  func_0x0001082b0e84(&uStack_60);
  return;
}



/* Entry: 1082b0dd8; end: 1082b0ef3;  */

void FUN_1082b0dd8(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  long **pplStack_48;
  long **pplStack_40;
  undefined1 uStack_38;
  long *plStack_30;
  long *plStack_28;
  
  pplStack_48 = &plStack_30;
  pplStack_40 = &plStack_28;
  plStack_28 = param_4;
  for (plVar4 = param_2; plVar4 != param_3; plVar4 = plVar4 + 3) {
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plStack_28 = lVar5;
    lVar5 = plVar4[1];
    plStack_28[2] = plVar4[2];
    plStack_28[1] = lVar5;
    plStack_28 = plStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  plStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    FUN_10826b598(param_2);
  }
  func_0x0001082b0e84(&uStack_50);
  return;
}



/* Entry: 1082b0ef4; end: 1082b0efb;  */

void FUN_1082b0ef4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    FUN_10826b598();
  }
  return;
}



/* Entry: 1082b0efc; end: 1082b0f37;  */

void FUN_1082b0efc(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    FUN_10826b598();
  }
  return;
}



/* Entry: 1082b0f38; end: 1082b0f4f;  */

void FUN_1082b0f38(void)

{
  long extraout_x8;
  
  func_0x00010826bb48(&stack0x00000008);
  if (extraout_x8 != 0) {
    func_0x00010826bac8();
  }
  return;
}



/* Entry: 1082b0f50; end: 1082b1007;  */

void FUN_1082b0f50(uint *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  
  uVar9 = *(ushort *)(param_2 + (param_3 & 0xffffffff) * 2);
  if ((uVar9 >> 4 & 1) == 0) {
    uVar5 = *(ushort *)(param_2 + (param_3 & 0xffffffff) * 2 + 0xe);
    uVar8 = uVar5 & uVar9;
    *param_1 = (uint)uVar8;
    if ((uVar8 & 1) != 0) {
      return;
    }
    if ((uVar9 & 1) == 0) {
      FUN_1082b1008(param_1 + 1,param_2 + 4,param_3,param_4);
    }
    else {
      *(undefined2 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((uVar5 & 1) != 0) {
      *(undefined2 *)((long)param_1 + 0x16) = 0;
      *(undefined8 *)((long)param_1 + 0xe) = 0;
      return;
    }
    param_1 = (uint *)((long)param_1 + 0xe);
    puVar7 = (ushort *)(param_2 + 0x12);
  }
  else {
    *param_1 = (uint)uVar9;
    if ((uVar9 & 1) != 0) {
      return;
    }
    param_1 = param_1 + 1;
    puVar7 = (ushort *)(param_2 + 4);
  }
  uVar5 = (ushort)(1 << (ulong)((int)param_4 - 1U & 0x1f));
  uVar9 = uVar5 - 1;
  bVar1 = (byte)puVar7[3];
  bVar2 = *(byte *)((long)puVar7 + 7);
  bVar3 = bVar1;
  if (bVar1 <= bVar2) {
    bVar3 = bVar2;
  }
  if (bVar3 < 8) {
    uVar8 = puVar7[4] & uVar9;
  }
  else {
    uVar8 = uVar5;
    if (10 < bVar3) {
      uVar8 = uVar9 & puVar7[4] | uVar5;
    }
  }
  uVar4 = (&UNK_10df14cd0)[bVar2];
  *(ushort *)(param_1 + 2) = uVar8;
  *(undefined1 *)((long)param_1 + 7) = uVar4;
  *(undefined *)((long)param_1 + 6) = (&UNK_10df14cd0)[bVar1];
  uVar6 = puVar7[1];
  if (((int)param_3 == 0) || (3 < uVar6)) {
    uVar9 = puVar7[2] & uVar9;
  }
  else {
    if (uVar6 == 0) {
      *(ushort *)(param_1 + 1) = uVar5;
      uVar10 = 6;
      uVar9 = uVar5;
      goto LAB_1082b10b0;
    }
    uVar9 = uVar9 & puVar7[2] | uVar5;
  }
  *(ushort *)(param_1 + 1) = uVar9;
  uVar10 = *(undefined2 *)(&UNK_10df14cde + (ulong)uVar6 * 2);
LAB_1082b10b0:
  *(undefined2 *)((long)param_1 + 2) = uVar10;
  *(ushort *)param_1 = (*puVar7 | uVar5) & (uVar9 | uVar8);
  return;
}



/* Entry: 1082b1008; end: 1082b111f;  */

void FUN_1082b1008(ushort *param_1,ushort *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  
  uVar5 = (ushort)(1 << (ulong)(param_4 - 1U & 0x1f));
  uVar7 = uVar5 - 1;
  bVar1 = (byte)param_2[3];
  bVar2 = *(byte *)((long)param_2 + 7);
  bVar3 = bVar1;
  if (bVar1 <= bVar2) {
    bVar3 = bVar2;
  }
  if (bVar3 < 8) {
    uVar6 = param_2[4] & uVar7;
  }
  else {
    uVar6 = uVar5;
    if (10 < bVar3) {
      uVar6 = uVar7 & param_2[4] | uVar5;
    }
  }
  uVar4 = (&UNK_10df14cd0)[bVar2];
  param_1[4] = uVar6;
  *(undefined1 *)((long)param_1 + 7) = uVar4;
  *(undefined *)(param_1 + 3) = (&UNK_10df14cd0)[bVar1];
  uVar8 = param_2[1];
  if ((param_3 == 0) || (3 < uVar8)) {
    uVar7 = param_2[2] & uVar7;
  }
  else {
    if (uVar8 == 0) {
      param_1[2] = uVar5;
      uVar8 = 6;
      uVar7 = uVar5;
      goto LAB_1082b10b0;
    }
    uVar7 = uVar7 & param_2[2] | uVar5;
  }
  param_1[2] = uVar7;
  uVar8 = *(ushort *)(&UNK_10df14cde + (ulong)uVar8 * 2);
LAB_1082b10b0:
  param_1[1] = uVar8;
  *param_1 = (*param_2 | uVar5) & (uVar7 | uVar6);
  return;
}



/* Entry: 1082b1120; end: 1082b117b;  */

void FUN_1082b1120(long *param_1,int param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (**(code **)(*param_1 + 0x10))(param_1,8,*param_3,param_4,param_5);
    param_3 = param_3 + 1;
  }
  return;
}



/* Entry: 1082b117c; end: 1082b118b;  */

void FUN_1082b117c(void)

{
  return;
}



/* Entry: 1082b118c; end: 1082b11eb;  */

int FUN_1082b118c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    iVar1 = *(int *)(param_1 + 0x40) + 2;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) {
      return -1;
    }
    iVar1 = 0;
  }
  iVar2 = iVar1;
  if (param_2 != 0) {
    FUN_1082b11ec();
    iVar2 = iVar1 + 4;
    if ((int)param_1 == 0) {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}



/* Entry: 1082b11ec; end: 1082b1207;  */

bool FUN_1082b11ec(uint param_1)

{
  func_0x0001083a630c();
  return 1 < param_1;
}



/* Entry: 1082b1208; end: 1082b1317;  */

void FUN_1082b1208(undefined4 param_1,undefined4 *param_2,long param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_3 + 0x18) == 1) {
    uVar7 = *(undefined4 *)(param_3 + 0x1c);
    *param_2 = param_1;
    param_2[1] = uVar7;
    iVar3 = *(int *)(param_3 + 0x40);
    _memcpy(param_2 + 2,*(undefined8 *)(param_3 + 0x20),(long)(iVar3 << 2));
    lVar6 = (long)iVar3 + 2;
  }
  else {
    lVar6 = 0;
  }
  if (param_4 != 1) {
    return;
  }
  lVar4 = param_3;
  FUN_1082b11ec();
  if ((int)lVar4 == 0) {
    return;
  }
  param_2 = param_2 + lVar6;
  *param_2 = param_1;
  uVar2 = *(uint *)(param_3 + 0xc);
  uVar1 = 0;
  if ((param_5 & *(long *)(param_3 + 0x10) == 0) == 0) {
    uVar1 = (uVar2 & 0xffff) << 4;
  }
  if ((param_5 >> 1 & 1) != 0) {
    uVar5 = 0;
    uVar7 = 0xbf800000;
    if ((*(long *)(param_3 + 0x10) == 0) || (uVar7 = 0xbf800000, *(int *)(param_3 + 0x18) == 1))
    goto LAB_1082b12dc;
  }
  if ((uVar2 & 0xff0000) == 0) {
    uVar5 = 0;
    uVar7 = *(undefined4 *)(param_3 + 8);
  }
  else {
    uVar5 = uVar2 >> 0x10;
    uVar7 = 0xbf800000;
  }
LAB_1082b12dc:
  lVar6 = param_3;
  func_0x0001083a630c();
  param_2[1] = (uint)lVar6 | (uVar5 & 0xff) << 2 | uVar1;
  param_2[2] = uVar7;
  param_2[3] = *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 1082b1318; end: 1082b13cb;  */

void FUN_1082b1318(ulong param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x0001082b15f0();
    if ((int)lVar1 == 1) {
      uVar2 = param_1;
      func_0x0001083a630c();
      if ((uVar2 & 1) != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x18) = 1;
      FUN_10827eea8(param_1 + 0x20,0);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      func_0x0001082b15f0(*param_2);
    }
    func_0x0001082b139c(param_1 + 0x10,param_2);
  }
  return;
}



/* Entry: 1082b13cc; end: 1082b14bf;  */

long FUN_1082b13cc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == 1) {
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    FUN_108405bd0(uVar5,uVar4,uVar1,&uStack_54,&uStack_58,&uStack_5c,0);
    uVar2 = param_2;
    FUN_108405cc8(uStack_54,uStack_5c,uVar5,param_2,param_4,param_3,0,uVar4,uVar1,uStack_58,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  else {
    func_0x00010837dca8(lVar3,param_2,param_4,param_3,0);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
  }
  *(byte *)(param_2 + 0xe) = *(byte *)(param_2 + 0xe) | 4;
  return 1;
}



/* Entry: 1082b14c0; end: 1082b14f3;  */

void FUN_1082b14c0(int param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001082b15dc();
  if (param_1 != 0) {
    param_3[1] = uStack_28;
    *param_3 = uStack_30;
  }
  return;
}



/* Entry: 1082b14f4; end: 1082b15a3;  */

void FUN_1082b14f4(ulong param_1,long param_2,uint *param_3,long param_4)

{
  int iVar1;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined1 auStack_50 [4];
  float fStack_4c;
  int iVar2;
  
  iVar1 = (int)auStack_50;
  iVar2 = (int)auStack_50;
  uVar3 = param_1;
  func_0x0001082b15dc();
  lVar5 = param_2;
  if (((uVar3 & 1) != 0) || (lVar5 = param_4, *(long *)(param_1 + 0x10) == 0)) {
    FUN_1082b11ec();
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        return;
      }
      uVar4 = (uint)(fStack_4c < 0.0);
    }
    else {
      FUN_1083a6340(auStack_50,param_2,lVar5);
      if (iVar2 == 0) {
        return;
      }
      *(byte *)(param_2 + 0xe) = *(byte *)(param_2 + 0xe) | 4;
      uVar4 = 1;
    }
    *param_3 = uVar4;
  }
  return;
}



/* Entry: 1082b15a4; end: 1082b15ff;  */

void FUN_1082b15a4(long *param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001082b15d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1082b1600; end: 1082b169f;  */

long FUN_1082b1600(ulong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x6c) == 3) {
    lVar2 = 0;
  }
  else {
    if (param_5 != 0) {
      func_0x000108320fa4(param_2);
    }
    uVar1 = param_1;
    func_0x00010828398c();
    if ((int)uVar1 == 0) {
      FUN_108283a40(param_1);
      uVar1 = (long)(int)param_2 * (long)(int)((ulong)param_2 >> 0x20) * param_1;
    }
    else {
      func_0x000108344674();
    }
    lVar2 = uVar1 * (long)param_3;
    if (param_4 != 0) {
      lVar2 = lVar2 + uVar1 / 3;
    }
  }
  return lVar2;
}



/* Entry: 1082b16a0; end: 1082b177b;  */

void FUN_1082b16a0(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piStack_30;
  undefined8 uStack_28;
  
  puVar4 = (undefined4 *)0x18;
  __Znwm();
  uVar5 = *param_2;
  *param_2 = 0;
  lVar6 = 0;
  if ((param_1[0x10] != 0) && (lVar6 = *(long *)(param_1[0x10] + 0x20), lVar6 != 0)) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *puVar4 = 1;
  uStack_28 = 0;
  *(undefined8 *)(puVar4 + 2) = uVar5;
  *(long *)(puVar4 + 4) = lVar6;
  FUN_1082b177c(param_1 + 0x18);
  func_0x000108114364(&uStack_28);
  piStack_30 = (int *)param_1[0x18];
  if (piStack_30 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piStack_30,0x10);
      if (bVar3) {
        *piStack_30 = *piStack_30 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*param_1 + 0x78))(param_1,&piStack_30);
  func_0x0001082b1834(piStack_30);
  return;
}



/* Entry: 1082b177c; end: 1082b178b;  */

void FUN_1082b177c(undefined8 *param_1,undefined8 param_2)

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
  if (iVar1 + -1 != 0) {
    return;
  }
  if (piVar4 != (int *)0x0) {
    FUN_1082b178c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b178c; end: 1082b17fb;  */

long FUN_1082b178c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(int *)(lVar1 + 0x88) = *(int *)(lVar1 + 0x88) + 1;
  FUN_1082b17fc(param_1 + 8,0);
  *(int *)(*(long *)(param_1 + 0x10) + 0x88) = *(int *)(*(long *)(param_1 + 0x10) + 0x88) + -1;
  func_0x000108114364((long *)(param_1 + 0x10));
  func_0x000108267174(param_1 + 8);
  return param_1;
}



/* Entry: 1082b17fc; end: 1082b183f;  */

void FUN_1082b17fc(undefined8 *param_1,undefined8 param_2)

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
  if (iVar1 + -1 != 0) {
    return;
  }
  if (piVar4 != (int *)0x0) {
    FUN_1082671e4(piVar4 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(piVar4);
  return;
}



/* Entry: 1082b1840; end: 1082b1897;  */

long * FUN_1082b1840(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  }
  *param_1 = (long)plVar1;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  func_0x0001082b2718();
  return param_1;
}



/* Entry: 1082b1898; end: 1082b1953;  */

long FUN_1082b1898(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x0001082b26c4(param_11);
  *(undefined4 *)(lVar2 + 0x18) = param_7;
  iVar1 = (int)lVar2 + 0x20;
  FUN_108283324();
  *(undefined8 *)(param_1 + 0x90) = param_3;
  *(undefined4 *)(param_1 + 0x98) = param_4;
  *(undefined1 *)(param_1 + 0x9c) = param_5;
  *(undefined4 *)(param_1 + 0xa0) = param_8;
  FUN_1082a04c8();
  *(int *)(param_1 + 0xa4) = iVar1;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  *(undefined1 *)(param_1 + 0xcb) = param_6;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  func_0x0001082b2764();
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffffffffffff;
  return param_1;
}


