/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108029f2c; end: 108029f77;  */

void FUN_108029f2c(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010802a134();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010802a20c();
  func_0x00010802a240();
  return;
}



/* Entry: 108029f78; end: 108029fc3;  */

long * FUN_108029f78(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = plVar1;
  plVar4 = plVar1;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar2 = 8;
    if (param_2 <= *(int *)((long)plVar5 + 0x1c)) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= *(int *)((long)plVar5 + 0x1c)) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < *(int *)((long)plVar3 + 0x1c))) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 108029fc4; end: 10802a0cb;  */

long * FUN_108029fc4(long *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  plVar5 = param_1 + 1;
  *plVar5 = 0;
  param_1[2] = 0;
  *param_1 = (long)plVar5;
  plVar6 = (long *)*param_2;
  do {
    if (plVar6 == param_2 + 1) {
      return param_1;
    }
    plVar4 = (long *)*param_1;
    cVar1 = SBORROW8((long)plVar5,(long)plVar4);
    cVar2 = (long)plVar5 - (long)plVar4 < 0;
    plVar3 = plVar5;
    if (plVar5 == plVar4) {
LAB_10802a024:
      plVar4 = plVar5;
      plVar7 = plVar5;
      if (*plVar5 != 0) {
        plVar4 = plVar3 + 1;
        plStack_58 = plVar3;
        goto LAB_10802a050;
      }
LAB_10802a05c:
      func_0x00010802a294();
      uStack_60 = 1;
      *(undefined4 *)((long)plVar3 + 0x1c) = *(undefined4 *)((long)plVar6 + 0x1c);
      plStack_68 = plVar5;
      FUN_108029f2c(param_1,plVar7,plVar4,plVar3);
      lStack_70 = 0;
      plVar3 = &lStack_70;
      func_0x000108029f54();
    }
    else {
      FUN_10802a464();
      func_0x00010802a3c4();
      if (cVar2 != cVar1) goto LAB_10802a024;
      plVar3 = param_1;
      FUN_108029ee4(param_1,&plStack_58);
      plVar4 = plVar3;
LAB_10802a050:
      plVar7 = plStack_58;
      if (*plVar4 == 0) goto LAB_10802a05c;
    }
    func_0x00010802a414();
    plVar6 = plVar3;
  } while( true );
}



/* Entry: 10802a0cc; end: 10802a44f;  */

void FUN_10802a0cc(undefined8 param_1)

{
  undefined4 in_w8;
  undefined8 in_x9;
  undefined4 *unaff_x19;
  long unaff_x26;
  undefined8 in_register_00005008;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  
  *(undefined8 *)(unaff_x26 + 0xb0) = in_register_00005008;
  *(undefined8 *)(unaff_x26 + 0xa8) = param_1;
  uStack00000000000000f0 = 0;
  uStack00000000000000f8 = 0;
  uStack00000000000000e8 = 0;
  *unaff_x19 = in_w8;
  *(undefined8 *)(unaff_x19 + 6) = in_x9;
  *(undefined8 *)(unaff_x19 + 4) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 2) = param_1;
  uStack0000000000000160 = 0;
  uStack0000000000000168 = 0;
  uStack0000000000000158 = 0;
  *(undefined1 *)(unaff_x19 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000158);
  return;
}



/* Entry: 10802a450; end: 10802a463;  */

void FUN_10802a450(void)

{
  FUN_108029f78();
  return;
}



/* Entry: 10802a464; end: 10802a57b;  */

long * FUN_10802a464(void)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x21;
  
  plVar3 = (long *)*unaff_x21;
  if ((long *)*unaff_x21 == (long *)0x0) {
    do {
      plVar3 = (long *)unaff_x21[2];
      bVar1 = unaff_x21 == (long *)*plVar3;
      unaff_x21 = plVar3;
    } while (bVar1);
    return plVar3;
  }
  do {
    plVar2 = plVar3;
    plVar3 = (long *)plVar2[1];
  } while (plVar3 != (long *)0x0);
  return plVar2;
}



/* Entry: 10802a57c; end: 10802a60b;  */

void FUN_10802a57c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  
  uVar1 = param_2;
  func_0x00010b5ac9ac();
  func_0x000100291d50(&uStack_38,uVar1);
  func_0x00010b4d1758(param_2,uStack_38,iStack_30 - (int)uStack_38);
  func_0x00010054f8dc(&uStack_50,&uStack_38);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  func_0x000100100fec(&uStack_50);
  func_0x000100100fec(&uStack_38);
  return;
}



/* Entry: 10802a60c; end: 10802a6b7;  */

void FUN_10802a60c(undefined1 *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  
  func_0x00010054f8dc(&lStack_38,param_2);
  ppuStack_78 = &PTR_DAT_110d15940;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  if (lStack_38 != lStack_30) {
    pppuVar1 = &ppuStack_78;
    func_0x00010006369c(pppuVar1,lStack_38,(int)lStack_30 - (int)lStack_38);
    if (((ulong)pppuVar1 & 1) != 0) {
      FUN_10802b4b8(param_1,&ppuStack_78);
      goto LAB_10802a680;
    }
  }
  *param_1 = 0;
  param_1[0x40] = 0;
LAB_10802a680:
  func_0x00010b5ac7e0(&ppuStack_78);
  func_0x000100100fec(&lStack_38);
  return;
}



/* Entry: 10802a6b8; end: 10802a77b;  */

ulong FUN_10802a6b8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010802bdc8();
  if (lVar3 == 0) {
    func_0x00010802bdb8();
    __ZNSt13runtime_errorC1EPKc();
    goto LAB_10802a750;
  }
  if (*(int *)(lVar3 + 0x38) == 1) {
    uVar2 = (ulong)*(uint *)(*(long *)(lVar3 + 0x30) + 0x48);
  }
  else {
    uVar2 = 0;
  }
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x38) + 0x18);
    if (uVar1 != 0) {
      return uVar1;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    if (lVar3 != 0) {
      return uVar2 - lVar3;
    }
  }
  if (uVar2 == 0) {
    FUN_10802a7e8(param_1,param_2);
    if ((int)param_1 != 2) {
      do {
        func_0x00010802bdb8();
        __ZNSt13runtime_errorC1EPKc();
LAB_10802a750:
        func_0x00010802bd2c();
      } while( true );
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10802a77c; end: 10802a7e7;  */

long FUN_10802a77c(void)

{
  long *plVar1;
  long lVar2;
  int *extraout_x8;
  int *piVar3;
  int *extraout_x9;
  long *extraout_x10;
  long extraout_x11;
  long lVar4;
  
  func_0x00010802beb4();
  piVar3 = extraout_x8;
  do {
    if (piVar3 == extraout_x9) {
      return 0;
    }
    plVar1 = extraout_x10;
    for (lVar4 = extraout_x11; lVar4 != 0; lVar4 = lVar4 + -8) {
      lVar2 = *plVar1;
      if (((*(int *)(lVar2 + 0x28) == *piVar3) && (*(int *)(lVar2 + 0x38) == 1)) &&
         (*(int *)(*(long *)(lVar2 + 0x30) + 0x4c) == 5)) {
        return lVar2;
      }
      plVar1 = plVar1 + 1;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}



/* Entry: 10802a7e8; end: 10802a92b;  */

undefined4 FUN_10802a7e8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long extraout_x8;
  ulong auStack_70 [4];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x00010802bdc8();
  if (lVar2 == 0) {
    func_0x00010802bdb8();
    auStack_70[0] = (ulong)*(uint *)(param_1 + 0x50);
    auStack_70[1] = 0;
    func_0x0001003a91d4(&UNK_10f471c95);
    func_0x0001003a9204(&uStack_50);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (lVar2,&uStack_50);
    func_0x00010802bd2c();
  }
  else {
    lVar3 = lVar2;
    func_0x00010802a998();
    if (lVar3 != 0) {
      return *(undefined4 *)(lVar3 + 0x4c);
    }
    func_0x00010802bdb8();
    if (*(int *)(lVar2 + 0x38) == 1) {
      ppuVar4 = *(undefined ***)(lVar2 + 0x30);
    }
    else {
      ppuVar4 = &PTR_PTR_1133aa968;
    }
    func_0x00010802be4c(ppuVar4[4]);
    uStack_50 = *(undefined8 *)(extraout_x8 + 0x10);
    uStack_40 = (ulong)*(uint *)(lVar2 + 0x28);
    uStack_48 = 0;
    uStack_38 = 0;
    func_0x0001003a91d4(&UNK_10f471cd6);
    func_0x0001003a9204(auStack_70);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (lVar3,auStack_70);
    func_0x00010802bd2c();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10802a8fc);
  (*pcVar1)();
}



/* Entry: 10802a92c; end: 10802a9f3;  */

long FUN_10802a92c(void)

{
  long *plVar1;
  long lVar2;
  int *extraout_x8;
  int *piVar3;
  int *extraout_x9;
  long *extraout_x10;
  long extraout_x11;
  long lVar4;
  
  func_0x00010802beb4();
  piVar3 = extraout_x8;
  do {
    if (piVar3 == extraout_x9) {
      return 0;
    }
    plVar1 = extraout_x10;
    for (lVar4 = extraout_x11; lVar4 != 0; lVar4 = lVar4 + -8) {
      lVar2 = *plVar1;
      if (((*(int *)(lVar2 + 0x28) == *piVar3) && (*(int *)(lVar2 + 0x38) == 1)) &&
         (*(int *)(*(long *)(lVar2 + 0x30) + 0x4c) == 5)) {
        return lVar2;
      }
      plVar1 = plVar1 + 1;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}



/* Entry: 10802a9f4; end: 10802acd3;  */

void FUN_10802a9f4(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  undefined8 *extraout_x10_02;
  undefined8 *extraout_x10_03;
  long *extraout_x10_04;
  long *extraout_x10_05;
  long *unaff_x23;
  undefined8 *puVar11;
  long lVar12;
  long *unaff_x24;
  long *plVar13;
  long lVar14;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar10 = &uStack_70;
  uStack_68 = 0;
  ppuVar4 = &PTR_PTR_1133aad40;
  if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(param_2 + 0x30);
  }
  func_0x00010802be4c(ppuVar4[3]);
  uStack_70 = 0;
  func_0x00010802bd74();
  for (; bVar7 = unaff_x23 == unaff_x24, !bVar7; unaff_x23 = unaff_x23 + 1) {
    func_0x00010802bd1c(*unaff_x23);
    plVar13 = extraout_x8;
    if (!bVar7) {
      plVar13 = extraout_x10;
    }
    plVar1 = plVar13 + (int)extraout_x8[1];
    for (; bVar7 = plVar13 == plVar1, !bVar7; plVar13 = plVar13 + 1) {
      if ((*(byte *)(*plVar13 + 0x10) >> 3 & 1) != 0) {
        func_0x00010802bd1c(*(undefined8 *)(*plVar13 + 0x48));
        plVar5 = extraout_x8_00;
        if (!bVar7) {
          plVar5 = extraout_x10_00;
        }
        for (lVar14 = (long)(int)extraout_x8_00[1] << 3; lVar14 != 0; lVar14 = lVar14 + -8) {
          if (*(int *)(*plVar5 + 0x14) != 0) {
            func_0x00010802be58();
          }
          plVar5 = plVar5 + 1;
        }
      }
    }
  }
  func_0x00010802bd74();
  for (; bVar7 = unaff_x23 == unaff_x24, !bVar7; unaff_x23 = unaff_x23 + 1) {
    if ((*(byte *)(*unaff_x23 + 0x10) >> 1 & 1) != 0) {
      func_0x00010802bd1c(*(undefined8 *)(*unaff_x23 + 0x20));
      plVar13 = extraout_x8_01;
      if (!bVar7) {
        plVar13 = extraout_x10_01;
      }
      for (lVar14 = (long)(int)extraout_x8_01[1] << 3; lVar14 != 0; lVar14 = lVar14 + -8) {
        if (*(int *)(*plVar13 + 0x14) != 0) {
          func_0x00010802be58();
        }
        plVar13 = plVar13 + 1;
      }
    }
  }
  uVar8 = *(undefined ***)(param_2 + 0x30) == (undefined **)0x0;
  ppuVar4 = &PTR_PTR_1133aad40;
  if (!(bool)uVar8) {
    ppuVar4 = *(undefined ***)(param_2 + 0x30);
  }
  func_0x00010802be4c(ppuVar4[4]);
  func_0x00010802bd1c();
  puVar9 = extraout_x8_02;
  if (!(bool)uVar8) {
    puVar9 = extraout_x10_02;
  }
  puVar2 = puVar9 + *(int *)(extraout_x8_02 + 1);
  for (; bVar7 = puVar9 == puVar2, !bVar7; puVar9 = puVar9 + 1) {
    func_0x00010802bd1c(*puVar9);
    puVar11 = extraout_x8_03;
    if (!bVar7) {
      puVar11 = extraout_x10_03;
    }
    puVar3 = puVar11 + *(int *)(extraout_x8_03 + 1);
    for (; bVar7 = puVar11 == puVar3, !bVar7; puVar11 = puVar11 + 1) {
      func_0x00010802bd1c(*puVar11);
      plVar13 = extraout_x8_04;
      if (!bVar7) {
        plVar13 = extraout_x10_04;
      }
      plVar1 = plVar13 + (int)extraout_x8_04[1];
      for (; bVar7 = plVar13 == plVar1, !bVar7; plVar13 = plVar13 + 1) {
        if ((*(byte *)(*plVar13 + 0x10) & 1) != 0) {
          func_0x00010802bd1c(*(undefined8 *)(*plVar13 + 0x18));
          plVar5 = extraout_x8_05;
          if (!bVar7) {
            plVar5 = extraout_x10_05;
          }
          for (lVar14 = (long)(int)extraout_x8_05[1] << 3; lVar14 != 0; lVar14 = lVar14 + -8) {
            if (*(int *)(*plVar5 + 0x14) != 0) {
              func_0x00010802be58();
            }
            plVar5 = plVar5 + 1;
          }
        }
      }
    }
  }
  lVar14 = 0;
  lVar12 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar9 = puVar10;
  while (puVar9 != puVar10) {
    func_0x00010002c7d4();
    lVar12 = lVar12 + -1;
    lVar14 = lVar14 + -0x20;
  }
  if (lVar12 == 0) {
    FUN_10802b68c(puVar10,puVar10,0);
    FUN_10802b6ec(param_1,puVar10);
  }
  else {
    if ((ulong)-lVar12 >> 0x3b != 0) {
      FUN_10802b730();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10802acac);
      (*pcVar6)();
    }
    lVar12 = -lVar14;
    __Znwm();
    *param_1 = lVar12;
    param_1[1] = lVar12;
    param_1[2] = lVar12 - lVar14;
    FUN_10802b584(param_1,puVar10,puVar10);
  }
  func_0x00010802b994(uStack_70);
  return;
}



/* Entry: 10802acd4; end: 10802adf7;  */

void FUN_10802acd4(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010802be1c();
  puStack_50 = param_1 + 1;
  puVar5 = puStack_50;
  puVar6 = puStack_50;
  if ((undefined8 *)*puStack_50 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(unaff_x20 + 0x10);
    puVar4 = (undefined8 *)*puStack_50;
    do {
      while( true ) {
        puVar5 = puVar4;
        uVar2 = *(uint *)(puVar5 + 6);
        bVar3 = *(int *)(unaff_x20 + 0x14) < *(int *)((long)puVar5 + 0x34);
        if (uVar1 != uVar2) {
          bVar3 = uVar1 < uVar2;
        }
        if (!bVar3) break;
        puVar4 = (undefined8 *)*puVar5;
        puVar6 = puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) goto LAB_10802ad6c;
      }
      bVar3 = *(int *)((long)puVar5 + 0x34) < *(int *)(unaff_x20 + 0x14);
      if (uVar1 != uVar2) {
        bVar3 = uVar2 < uVar1;
      }
      if (!bVar3) {
        return;
      }
      puVar4 = (undefined8 *)puVar5[1];
    } while ((undefined8 *)puVar5[1] != (undefined8 *)0x0);
    puVar6 = puVar5 + 1;
  }
LAB_10802ad6c:
  func_0x00010802bdf4();
  uStack_48 = 0;
  puStack_58 = param_1;
  FUN_10802b63c(param_1 + 4);
  uStack_48 = CONCAT71(uStack_48._1_7_,1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = puVar5;
  *puVar6 = param_1;
  if (*(long *)*unaff_x19 != 0) {
    *unaff_x19 = *(long *)*unaff_x19;
  }
  func_0x00010002c5b0(unaff_x19[1],param_1);
  unaff_x19[2] = unaff_x19[2] + 1;
  puStack_58 = (undefined8 *)0x0;
  func_0x00010802b9d4(&puStack_58);
  return;
}



/* Entry: 10802adf8; end: 10802ae93;  */

void FUN_10802adf8(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  long *extraout_x9_02;
  ulong *extraout_x9_03;
  long lVar9;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar10;
  ulong uVar11;
  
  func_0x00010802be1c();
  FUN_10802ae94();
  plVar4 = (long *)(param_1 + 0x10);
  func_0x00010802be40(*plVar4);
  plVar1 = plVar4;
  if (!(bool)in_ZR) {
    plVar1 = extraout_x9_02;
  }
  for (lVar9 = (long)(int)plVar4[1] << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
    if ((*(int *)(*plVar1 + 0x10) == *(int *)(unaff_x20 + 0x10)) &&
       (*(int *)(*plVar1 + 0x14) == *(int *)(unaff_x20 + 0x14))) {
      return;
    }
    plVar1 = plVar1 + 1;
  }
  uVar5 = 0x20;
  __Znwm();
  func_0x00010802bedc();
  func_0x00010b5a7a84();
  puVar6 = unaff_x19;
  FUN_10802ae94();
  puVar3 = puVar6 + 2;
  uVar10 = *(ulong *)(uVar5 + 8);
  if ((uVar10 & 1) != 0) {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
  }
  uVar11 = puVar6[4];
  uVar2 = uVar11 == uVar10;
  if (((bool)uVar2) && (puVar7 = puVar3, func_0x0001053a91c8(), (int)puVar7 == 0)) {
    func_0x00010802be40(*puVar3);
    puVar7 = puVar3;
    if (!(bool)uVar2) {
      puVar7 = extraout_x9_03;
    }
    uVar10 = puVar6[3];
    puVar8 = puVar3;
    func_0x00010006818c();
    if ((int)uVar10 < (int)puVar8) {
      uVar10 = puVar7[(int)puVar6[3]];
      puVar8 = puVar3;
      func_0x00010006818c();
      puVar7[(int)puVar8] = uVar10;
    }
    uVar10 = puVar6[3];
    *(int *)(puVar6 + 3) = (int)uVar10 + 1;
    puVar7[(int)uVar10] = uVar5;
    if ((*puVar3 & 1) != 0) {
      func_0x00010802be0c();
    }
    return;
  }
  func_0x00010802be1c(puVar3,uVar5);
  if ((uVar10 == 0) && (uVar11 != 0)) {
    if (unaff_x20 != 0) {
      func_0x00010802bd58();
    }
  }
  else if (uVar11 != uVar10) {
    FUN_10802bb20(uVar11);
    func_0x00010802bd44();
    unaff_x20 = unaff_x21;
  }
  uVar2 = (int)unaff_x19[1] == *(int *)((long)unaff_x19 + 0xc);
  if (*(int *)((long)unaff_x19 + 0xc) < (int)unaff_x19[1]) {
    func_0x000100064580(unaff_x19,1);
code_r0x0001053a9270:
    uVar5 = *unaff_x19;
  }
  else {
    puVar3 = unaff_x19;
    func_0x0001053a91c8();
    uVar5 = unaff_x19[1];
    if ((int)puVar3 != 0) {
      func_0x0001053a95e4(*unaff_x19);
      puVar3 = unaff_x19;
      if (!(bool)uVar2) {
        puVar3 = extraout_x9_00;
      }
      if (((long *)*puVar3 != (long *)0x0) && (unaff_x19[2] == 0)) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar3 = unaff_x19;
    func_0x00010006818c();
    uVar2 = (int)uVar5 == (int)puVar3;
    if ((int)uVar5 < (int)puVar3) {
      uVar2 = (*unaff_x19 & 1) == 0;
      puVar3 = unaff_x19;
      if (!(bool)uVar2) {
        puVar3 = (ulong *)(*unaff_x19 + (long)(int)unaff_x19[1] * 8 + 7);
      }
      uVar5 = *puVar3;
      func_0x00010006818c(unaff_x19);
      func_0x0001053a95e4(*unaff_x19);
      puVar3 = unaff_x19;
      if (!(bool)uVar2) {
        puVar3 = extraout_x9_01;
      }
      *puVar3 = uVar5;
      goto code_r0x0001053a9270;
    }
    uVar5 = *unaff_x19;
    if ((uVar5 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar5);
code_r0x0001053a9278:
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar2) {
    unaff_x19 = extraout_x9;
  }
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 10802ae94; end: 10802aea3;  */

void FUN_10802ae94(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010802bea8();
    }
    func_0x00010802b7ec();
    *(ulong *)(param_1 + 0x48) = uVar1;
  }
  return;
}



/* Entry: 10802aea4; end: 10802af43;  */

void FUN_10802aea4(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  undefined1 in_ZR;
  long *extraout_x8;
  long *plVar4;
  long *extraout_x10;
  ulong uVar5;
  long lVar6;
  
  FUN_10802af44();
  func_0x00010802af54();
  func_0x00010802af64();
  func_0x00010802bd1c(param_1);
  plVar4 = extraout_x8;
  if (!(bool)in_ZR) {
    plVar4 = extraout_x10;
  }
  plVar2 = plVar4 + *(int *)(param_1 + 0x18);
  for (; plVar4 != plVar2; plVar4 = plVar4 + 1) {
    lVar6 = *plVar4;
    if (*(int *)(lVar6 + 0x2c) == 0) {
      iVar1 = *(int *)(param_1 + 0x28) + 1;
      *(int *)(param_1 + 0x28) = iVar1;
      *(int *)(lVar6 + 0x2c) = iVar1;
    }
    uVar5 = *(ulong *)(lVar6 + 0x10);
    puVar3 = (ulong *)(lVar6 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + 7);
    }
    for (lVar6 = (long)*(int *)(lVar6 + 0x18) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      uVar5 = *puVar3;
      if (*(int *)(uVar5 + 0x50) == 0) {
        iVar1 = *(int *)(param_1 + 0x2c) + 1;
        *(int *)(param_1 + 0x2c) = iVar1;
        *(int *)(uVar5 + 0x50) = iVar1;
      }
      puVar3 = puVar3 + 1;
    }
  }
  return;
}



/* Entry: 10802af44; end: 10802af73;  */

void FUN_10802af44(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010802bea8();
    }
    func_0x00010802b860();
    *(ulong *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 10802af74; end: 10802b09f;  */

void FUN_10802af74(long param_1,ulong param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *extraout_x9;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  ulong uStack_38;
  
  puVar4 = auStack_80;
  lVar9 = param_1;
  uVar5 = param_2;
  func_0x00010802af54();
  func_0x00010802af64();
  plVar3 = (long *)(lVar9 + 0x10);
  func_0x00010802be40(*plVar3);
  plVar6 = plVar3;
  if (!(bool)in_ZR) {
    plVar6 = extraout_x9;
  }
  plVar1 = plVar6 + (int)plVar3[1];
  do {
    if (plVar6 == plVar1) {
      func_0x00010802bdb8();
      func_0x00010b4d1338(auStack_80,param_1);
      func_0x0001005d466c();
      uStack_50 = param_2 & 0xffffffff;
      uStack_48 = 0;
      puStack_40 = puVar4;
      uStack_38 = uVar5;
      func_0x0001003a91d4(&UNK_10f471d1b);
      func_0x0001003a9204(auStack_68);
      func_0x0001052768d8(plVar3,auStack_68);
      func_0x00010802bd8c();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10802b06c);
      (*pcVar2)();
    }
    plVar3 = (long *)*plVar6;
    uVar8 = plVar3[2];
    puVar7 = (ulong *)(plVar3 + 2);
    if ((uVar8 & 1) != 0) {
      puVar7 = (ulong *)(uVar8 + 7);
    }
    lVar9 = (long)*(int *)(plVar3 + 3) << 3;
    while (lVar9 != 0) {
      uVar5 = *puVar7;
      lVar9 = lVar9 + -8;
      puVar7 = puVar7 + 1;
      if (*(int *)(uVar5 + 0x50) == (int)param_2) {
        return;
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



/* Entry: 10802b0a0; end: 10802b4b7;  */

undefined4 FUN_10802b0a0(ulong *param_1,long param_2,undefined8 *param_3,int param_4,int param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  int *piVar12;
  long lVar13;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  long lVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 *puStack_70;
  ulong *puStack_68;
  
  puVar11 = param_1;
  func_0x00010802be4c(param_1[6]);
  func_0x00010802be4c(*(undefined8 *)(extraout_x8 + 0x18));
  iVar16 = *(int *)(extraout_x8_00 + 0x2c) + 1;
  func_0x00010802af54();
  func_0x00010802af64();
  *(int *)((long)puVar11 + 0x2c) = iVar16;
  puVar3 = (undefined8 *)0x58;
  __Znwm();
  *puVar3 = &PTR_DAT_110d14b30;
  puVar3[1] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  func_0x00010802bdfc();
  func_0x00010b5a83bc();
  *(int *)(puVar3 + 10) = iVar16;
  if ((*(byte *)(puVar3 + 2) & 1) != 0) {
    func_0x00010b5a7e00(puVar3);
  }
  if (param_5 != 0) {
    puVar4 = param_3;
    puVar11 = param_1;
    FUN_10802a77c();
    puVar9 = (undefined1 *)0x0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_10802b430;
    puVar5 = puVar4;
    func_0x00010802bdf4();
    *puVar5 = &PTR_DAT_110d153f0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    func_0x00010802bdfc();
    func_0x00010b5aac04();
    iVar16 = (int)param_1[4];
    if ((int)param_1[7] != 0) {
      iVar16 = (int)param_1[7];
    }
    *(int *)(puVar5 + 5) = iVar16 + 1;
    *(int *)(param_1 + 7) = iVar16 + 1;
    puVar11 = param_1 + 3;
    uVar17 = puVar5[1];
    if ((uVar17 & 1) != 0) {
      uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
    }
    uVar18 = param_1[5];
    uVar2 = uVar18 == uVar17;
    if (((bool)uVar2) && (puVar6 = puVar11, func_0x0001053a91c8(), (int)puVar6 == 0)) {
      func_0x00010802be40(param_1[3]);
      puVar6 = puVar11;
      if (!(bool)uVar2) {
        puVar6 = extraout_x9_00;
      }
      uVar17 = param_1[4];
      puVar8 = puVar11;
      func_0x00010006818c();
      if ((int)uVar17 < (int)puVar8) {
        uVar17 = puVar6[(int)param_1[4]];
        func_0x00010006818c();
        puVar6[(int)puVar11] = uVar17;
      }
      uVar17 = param_1[4];
      *(int *)(param_1 + 4) = (int)uVar17 + 1;
      puVar6[(int)uVar17] = (ulong)puVar5;
      if ((param_1[3] & 1) != 0) {
        func_0x00010802be0c();
      }
    }
    else {
      FUN_10802bb6c(puVar11,puVar5,uVar17,uVar18);
    }
    piVar12 = (int *)puVar3[4];
    for (lVar13 = (long)*(int *)(puVar3 + 3) << 2; lVar13 != 0; lVar13 = lVar13 + -4) {
      if (*piVar12 == *(int *)(puVar4 + 5)) {
        *piVar12 = *(int *)(puVar5 + 5);
        break;
      }
      piVar12 = piVar12 + 1;
    }
  }
  param_1 = (ulong *)(param_2 + 0x10);
  uVar17 = puVar3[1];
  if ((uVar17 & 1) != 0) {
    uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
  }
  uVar18 = *(ulong *)(param_2 + 0x20);
  uVar2 = uVar18 == uVar17;
  if (((bool)uVar2) && (puVar11 = param_1, func_0x0001053a91c8(), (int)puVar11 == 0)) {
    func_0x00010802be40(*(undefined8 *)(param_2 + 0x10));
    puVar11 = param_1;
    if (!(bool)uVar2) {
      puVar11 = extraout_x9;
    }
    iVar16 = *(int *)(param_2 + 0x18);
    puVar6 = param_1;
    func_0x00010006818c();
    if (iVar16 < (int)puVar6) {
      uVar17 = puVar11[*(int *)(param_2 + 0x18)];
      puVar6 = param_1;
      func_0x00010006818c();
      puVar11[(int)puVar6] = uVar17;
    }
    iVar16 = *(int *)(param_2 + 0x18);
    *(int *)(param_2 + 0x18) = iVar16 + 1;
    puVar11[iVar16] = (ulong)puVar3;
    if ((*(ulong *)(param_2 + 0x10) & 1) != 0) {
      func_0x00010802be0c();
    }
  }
  else {
    FUN_10802bbf8(param_1,puVar3,uVar17,uVar18);
  }
  lVar13 = 0;
  lVar14 = 8;
  iVar16 = -1;
  while( true ) {
    param_4 = param_4 + 1;
    uVar17 = (ulong)*(int *)(param_2 + 0x18);
    if ((long)uVar17 <= lVar13) {
      if ((-1 < iVar16) && (iVar16 < *(int *)(param_2 + 0x18))) {
        while( true ) {
          iVar15 = (int)uVar17;
          if (iVar15 < 2 || iVar16 + 1 == iVar15) break;
          uVar17 = (ulong)(iVar15 - 1);
          func_0x0001053a9198(param_1,uVar17,iVar15 + -2);
        }
      }
      return *(undefined4 *)(puVar3 + 10);
    }
    puVar11 = (ulong *)0x0;
    lVar7 = lVar13;
    FUN_10802bc98(lVar13,0,&UNK_10f471d6a);
    if (lVar7 != 0) break;
    puVar11 = (ulong *)(ulong)*(uint *)(param_2 + 0x18);
    lVar7 = lVar13;
    FUN_10802bccc(lVar13,puVar11,&UNK_10f471e1f);
    if (lVar7 != 0) {
      FUN_10802bcb8();
      func_0x00010802be28();
      goto LAB_10802b424;
    }
    puVar11 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar11 = (ulong *)((*param_1 + lVar14) - 1);
    }
    iVar15 = param_4;
    if (*(int *)(*puVar11 + 0x50) != *(int *)(param_3 + 10)) {
      iVar15 = iVar16;
    }
    lVar13 = lVar13 + 1;
    lVar14 = lVar14 + 8;
    iVar16 = iVar15;
  }
  FUN_10802bcb8();
  func_0x00010802be28();
LAB_10802b424:
  func_0x00010bdb2a88();
  puVar9 = auStack_88;
  func_0x00010ae6c700(puVar9);
LAB_10802b430:
  func_0x00010802bdb8();
  func_0x00010b4d1338(auStack_a0,param_1);
  puVar10 = auStack_a0;
  func_0x0001005d466c();
  puStack_70 = puVar10;
  puStack_68 = puVar11;
  func_0x0001003a91d4(&UNK_10f471d46);
  func_0x0001003a9204(auStack_88);
  func_0x0001052768d8(puVar9,auStack_88);
  func_0x00010802bd8c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10802b484);
  (*pcVar1)();
}



/* Entry: 10802b4b8; end: 10802b4d3;  */

void FUN_10802b4b8(long param_1)

{
  FUN_10802b4d4();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10802b4d4; end: 10802b4df;  */

undefined8 * FUN_10802b4d4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d15940;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10802b520(param_1,param_2);
  return param_1;
}



/* Entry: 10802b4e0; end: 10802b51f;  */

undefined8 * FUN_10802b4e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110d15940;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10802b520(param_1,param_3);
  return param_1;
}



/* Entry: 10802b520; end: 10802b583;  */

long FUN_10802b520(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b5acb7c(param_1);
    }
    else {
      func_0x00010b5acb44(param_1);
    }
  }
  return param_1;
}



/* Entry: 10802b584; end: 10802b63b;  */

void FUN_10802b584(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  while (lStack_48 = lVar1, param_2 != param_3) {
    FUN_10802b63c(lVar1,param_2 + 0x20);
    func_0x00010002c7d4();
    lVar1 = lStack_48 + 0x20;
  }
  uStack_58 = 1;
  FUN_10802b648(&lStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10802b63c; end: 10802b647;  */

undefined8 * FUN_10802b63c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d149d0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5a787c(param_1,param_2);
  return param_1;
}



/* Entry: 10802b648; end: 10802b68b;  */

long FUN_10802b648(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      func_0x00010b5a78b0();
    }
  }
  return param_1;
}



/* Entry: 10802b68c; end: 10802b6eb;  */

long FUN_10802b68c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  while (param_1 != param_2) {
    func_0x00010b5a7a84(lVar1,param_1 + 0x20);
    func_0x00010002c7d4();
    lVar1 = lVar1 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return param_3;
}



/* Entry: 10802b6ec; end: 10802b727;  */

void FUN_10802b6ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x20;
    func_0x00010b5a78b0();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10802b728; end: 10802b72f;  */

void FUN_10802b728(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x00010b5a78b0();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10802b730; end: 10802b743;  */

undefined * FUN_10802b730(void)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  puStack_38 = puVar1;
  func_0x00010802b778(&puStack_38);
  return puVar1;
}



/* Entry: 10802b744; end: 10802ba17;  */

undefined8 FUN_10802b744(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010802b778(&uStack_28);
  return param_1;
}



/* Entry: 10802ba18; end: 10802bb1f;  */

void FUN_10802ba18(ulong *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong *extraout_x9_02;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_2 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar5 = param_1[2];
  uVar1 = uVar5 == uVar4;
  if (((bool)uVar1) && (puVar2 = param_1, func_0x0001053a91c8(), (int)puVar2 == 0)) {
    func_0x00010802be40(*param_1);
    puVar2 = param_1;
    if (!(bool)uVar1) {
      puVar2 = extraout_x9_02;
    }
    uVar4 = param_1[1];
    puVar3 = param_1;
    func_0x00010006818c();
    if ((int)uVar4 < (int)puVar3) {
      uVar4 = puVar2[(int)param_1[1]];
      puVar3 = param_1;
      func_0x00010006818c();
      puVar2[(int)puVar3] = uVar4;
    }
    uVar4 = param_1[1];
    *(int *)(param_1 + 1) = (int)uVar4 + 1;
    puVar2[(int)uVar4] = param_2;
    if ((*param_1 & 1) != 0) {
      func_0x00010802be0c();
    }
    return;
  }
  func_0x00010802be1c(param_1,param_2);
  if ((uVar4 == 0) && (uVar5 != 0)) {
    if (unaff_x20 != 0) {
      func_0x00010802bd58();
    }
  }
  else if (uVar5 != uVar4) {
    FUN_10802bb20(uVar5);
    func_0x00010802bd44();
    unaff_x20 = unaff_x21;
  }
  uVar1 = (int)unaff_x19[1] == *(int *)((long)unaff_x19 + 0xc);
  if (*(int *)((long)unaff_x19 + 0xc) < (int)unaff_x19[1]) {
    func_0x000100064580(unaff_x19,1);
code_r0x0001053a9270:
    uVar4 = *unaff_x19;
  }
  else {
    puVar2 = unaff_x19;
    func_0x0001053a91c8();
    uVar4 = unaff_x19[1];
    if ((int)puVar2 != 0) {
      func_0x0001053a95e4(*unaff_x19);
      puVar2 = unaff_x19;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_00;
      }
      if (((long *)*puVar2 != (long *)0x0) && (unaff_x19[2] == 0)) {
        (**(code **)(*(long *)*puVar2 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar2 = unaff_x19;
    func_0x00010006818c();
    uVar1 = (int)uVar4 == (int)puVar2;
    if ((int)uVar4 < (int)puVar2) {
      uVar1 = (*unaff_x19 & 1) == 0;
      puVar2 = unaff_x19;
      if (!(bool)uVar1) {
        puVar2 = (ulong *)(*unaff_x19 + (long)(int)unaff_x19[1] * 8 + 7);
      }
      uVar4 = *puVar2;
      func_0x00010006818c(unaff_x19);
      func_0x0001053a95e4(*unaff_x19);
      puVar2 = unaff_x19;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_01;
      }
      *puVar2 = uVar4;
      goto code_r0x0001053a9270;
    }
    uVar4 = *unaff_x19;
    if ((uVar4 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar4);
code_r0x0001053a9278:
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    unaff_x19 = extraout_x9;
  }
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 10802bb20; end: 10802bb6b;  */

void FUN_10802bb20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_DAT_110d149d0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10802bb6c; end: 10802bbb7;  */

void FUN_10802bb6c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010802be1c();
  if ((param_3 == 0) && (param_4 != 0)) {
    func_0x00010802bd58();
  }
  else if (param_4 != param_3) {
    FUN_10802bbb8(param_4);
    func_0x00010802bd44();
    unaff_x20 = unaff_x21;
  }
  uVar1 = (int)unaff_x19[1] == *(int *)((long)unaff_x19 + 0xc);
  if (*(int *)((long)unaff_x19 + 0xc) < (int)unaff_x19[1]) {
    func_0x000100064580();
code_r0x0001053a9270:
    uVar3 = *unaff_x19;
  }
  else {
    puVar2 = unaff_x19;
    func_0x0001053a91c8();
    uVar3 = unaff_x19[1];
    if ((int)puVar2 != 0) {
      func_0x0001053a95e4(*unaff_x19);
      puVar2 = unaff_x19;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_00;
      }
      if (((long *)*puVar2 != (long *)0x0) && (unaff_x19[2] == 0)) {
        (**(code **)(*(long *)*puVar2 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar2 = unaff_x19;
    func_0x00010006818c();
    uVar1 = (int)uVar3 == (int)puVar2;
    if ((int)uVar3 < (int)puVar2) {
      uVar1 = (*unaff_x19 & 1) == 0;
      puVar2 = unaff_x19;
      if (!(bool)uVar1) {
        puVar2 = (ulong *)(*unaff_x19 + (long)(int)unaff_x19[1] * 8 + 7);
      }
      uVar3 = *puVar2;
      func_0x00010006818c();
      func_0x0001053a95e4(*unaff_x19);
      puVar2 = unaff_x19;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_01;
      }
      *puVar2 = uVar3;
      goto code_r0x0001053a9270;
    }
    uVar3 = *unaff_x19;
    if ((uVar3 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar3);
code_r0x0001053a9278:
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    unaff_x19 = extraout_x9;
  }
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 10802bbb8; end: 10802bbf7;  */

void FUN_10802bbb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010802bdf4();
  }
  else {
    func_0x00010802be74();
  }
  *puVar1 = &PTR_DAT_110d153f0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 7) = 0;
  func_0x00010802bdfc();
  return;
}



/* Entry: 10802bbf8; end: 10802bc43;  */

void FUN_10802bbf8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010802be1c();
  if ((param_3 == 0) && (param_4 != 0)) {
    func_0x00010802bd58();
  }
  else if (param_4 != param_3) {
    FUN_10802bc44(param_4);
    func_0x00010802bd44();
    unaff_x20 = unaff_x21;
  }
  uVar1 = (int)unaff_x19[1] == *(int *)((long)unaff_x19 + 0xc);
  if (*(int *)((long)unaff_x19 + 0xc) < (int)unaff_x19[1]) {
    func_0x000100064580();
code_r0x0001053a9270:
    uVar3 = *unaff_x19;
  }
  else {
    puVar2 = unaff_x19;
    func_0x0001053a91c8();
    uVar3 = unaff_x19[1];
    if ((int)puVar2 != 0) {
      func_0x0001053a95e4(*unaff_x19);
      puVar2 = unaff_x19;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_00;
      }
      if (((long *)*puVar2 != (long *)0x0) && (unaff_x19[2] == 0)) {
        (**(code **)(*(long *)*puVar2 + 8))();
      }
      goto code_r0x0001053a9278;
    }
    puVar2 = unaff_x19;
    func_0x00010006818c();
    uVar1 = (int)uVar3 == (int)puVar2;
    if ((int)uVar3 < (int)puVar2) {
      uVar1 = (*unaff_x19 & 1) == 0;
      puVar2 = unaff_x19;
      if (!(bool)uVar1) {
        puVar2 = (ulong *)(*unaff_x19 + (long)(int)unaff_x19[1] * 8 + 7);
      }
      uVar3 = *puVar2;
      func_0x00010006818c();
      func_0x0001053a95e4(*unaff_x19);
      puVar2 = unaff_x19;
      if (!(bool)uVar1) {
        puVar2 = extraout_x9_01;
      }
      *puVar2 = uVar3;
      goto code_r0x0001053a9270;
    }
    uVar3 = *unaff_x19;
    if ((uVar3 & 1) == 0) goto code_r0x0001053a9278;
  }
  func_0x0001053a9620(uVar3);
code_r0x0001053a9278:
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  func_0x0001053a95e4();
  if (!(bool)uVar1) {
    unaff_x19 = extraout_x9;
  }
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 10802bc44; end: 10802bc97;  */

void FUN_10802bc44(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0x58;
    __Znwm();
  }
  else {
    lVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x58);
  }
  func_0x00010802bda8(&UNK_110d14b20);
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(lVar1 + 0x50) = 0;
  return;
}



/* Entry: 10802bc98; end: 10802bcb7;  */

void FUN_10802bc98(void)

{
  func_0x00010802be94();
  func_0x00010802bcec();
  return;
}



/* Entry: 10802bcb8; end: 10802bccb;  */

undefined1  [16] FUN_10802bcb8(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (long)(char)param_1[1][7];
  if (-1 < auVar1._8_8_) {
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  return *param_1;
}



/* Entry: 10802bccc; end: 10802bceb;  */

void FUN_10802bccc(void)

{
  func_0x00010802be94();
  func_0x00010802bd04();
  return;
}



/* Entry: 10802bcec; end: 10802bef7;  */

undefined1 * FUN_10802bcec(int *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_138 [264];
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar2 <= iVar1) {
    return (undefined1 *)0x0;
  }
  func_0x00010ae6abb8(auStack_138,param_3);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,(long)iVar1);
  func_0x0001092b4db8(auStack_138,&UNK_10f6d167f,5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,(long)iVar2);
  puVar3 = auStack_138;
  func_0x00010ae6a8f8(puVar3);
  func_0x00010ae6ac1c(auStack_138);
  return puVar3;
}



/* Entry: 10802bef8; end: 10802bf37;  */

void FUN_10802bef8(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10802bf38(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010802cb7c(&uStack_30);
  return;
}



/* Entry: 10802bf38; end: 10802bf9f;  */

void FUN_10802bf38(undefined8 param_1)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_10802bfa0(auStack_30);
  func_0x00010802bfbc(auStack_40,auStack_30);
  func_0x00010802bfdc(param_1,auStack_40);
  FUN_10802ce04(auStack_40);
  FUN_10802ccc8(auStack_30);
  return;
}



/* Entry: 10802bfa0; end: 10802bffb;  */

void FUN_10802bfa0(void)

{
  undefined1 uStack_11;
  
  FUN_10802cba0(&uStack_11);
  return;
}



/* Entry: 10802bffc; end: 10802c3ff;  */

void FUN_10802bffc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lStack_148;
  long lStack_140;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [36];
  int iStack_7c;
  byte bStack_78;
  
  FUN_108031894(auStack_a0,param_3);
  if ((bStack_78 & 1) == 0) {
    func_0x000107c278b8(&uStack_f8,&UNK_10f471e35);
    uVar15 = uStack_e8;
    uStack_e0 = 0;
    uStack_d0 = uStack_f0;
    uStack_d8 = uStack_f8;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    FUN_10802d004(uVar15);
    func_0x00010802d114();
    puVar7 = &uStack_f8;
  }
  else {
    if (iStack_7c != 0) {
      puStack_130 = (undefined8 *)0x0;
      puStack_128 = (undefined8 *)0x0;
      puStack_120 = (undefined8 *)0x0;
      (**(code **)(**(long **)(param_2 + 8) + 0x10))(&lStack_148,*(long **)(param_2 + 8),auStack_a0)
      ;
      for (lVar12 = lStack_148; lVar12 != lStack_140; lVar12 = lVar12 + 0x10) {
        FUN_10803175c(&uStack_c0,lVar12);
        puVar4 = puStack_128;
        puVar7 = puStack_130;
        if (puStack_128 < puStack_120) {
          *puStack_128 = 0;
          puStack_128[1] = 0;
          puStack_128[2] = 0;
          puStack_128[1] = uStack_b8;
          *puStack_128 = uStack_c0;
          puStack_128[2] = uStack_b0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          puVar11 = puStack_128 + 3;
        }
        else {
          lVar13 = (long)puStack_128 - (long)puStack_130;
          uVar1 = lVar13 / 0x18 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar1) {
            func_0x00010802ca20();
LAB_10802c2a0:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10802c2a4);
            (*pcVar5)();
          }
          uVar3 = ((long)puStack_120 - (long)puStack_130) / 0x18;
          uVar10 = uVar3 * 2;
          if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
            uVar10 = uVar1;
          }
          if (0x555555555555554 < uVar3) {
            uVar10 = 0xaaaaaaaaaaaaaaa;
          }
          if (0xaaaaaaaaaaaaaaa < uVar10) {
            func_0x000104bd35f4();
            goto LAB_10802c2a0;
          }
          lVar6 = uVar10 * 0x18;
          __Znwm();
          puVar11 = (undefined8 *)(lVar6 + lVar13);
          puVar11[1] = uStack_b8;
          *puVar11 = uStack_c0;
          puVar11[2] = uStack_b0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_c0 = 0;
          puVar14 = puVar11 + (lVar13 / -0x18) * 3;
          puVar8 = puVar14;
          for (puVar9 = puVar7; puVar9 != puVar4; puVar9 = puVar9 + 3) {
            uVar15 = *puVar9;
            puVar8[1] = puVar9[1];
            *puVar8 = uVar15;
            puVar8[2] = puVar9[2];
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
            puVar8 = puVar8 + 3;
          }
          for (; puVar7 != puVar4; puVar7 = puVar7 + 3) {
            func_0x000100100fec(puVar7);
          }
          puVar11 = puVar11 + 3;
          puStack_120 = (undefined8 *)(lVar6 + uVar10 * 0x18);
          bVar2 = puStack_130 != (undefined8 *)0x0;
          puStack_130 = puVar14;
          if (bVar2) {
            puStack_128 = puVar11;
            __ZdlPv();
          }
        }
        puStack_128 = puVar11;
        func_0x000100100fec(&uStack_c0);
      }
      FUN_10802ca34(&lStack_148);
      param_1[1] = puStack_128;
      *param_1 = puStack_130;
      param_1[2] = puStack_120;
      puStack_130 = (undefined8 *)0x0;
      puStack_128 = (undefined8 *)0x0;
      puStack_120 = (undefined8 *)0x0;
      *(undefined1 *)(param_1 + 4) = 1;
      func_0x0001080241ec(&puStack_130);
      goto LAB_10802c26c;
    }
    func_0x000107c278b8(&uStack_110,&UNK_10f471e54);
    uVar15 = uStack_100;
    uStack_e0 = 0;
    uStack_d0 = uStack_108;
    uStack_d8 = uStack_110;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    FUN_10802d004(uVar15);
    func_0x00010802d114();
    puVar7 = &uStack_110;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
LAB_10802c26c:
  FUN_10802caec(auStack_a0);
  return;
}



/* Entry: 10802c400; end: 10802c47b;  */

void FUN_10802c400(undefined8 *param_1,long param_2)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  (**(code **)(**(long **)(param_2 + 8) + 0x18))(auStack_50);
  FUN_10803175c(&uStack_40,auStack_50);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x00010802d148();
  func_0x000100100fec(&uStack_40);
  FUN_10802cfe0(auStack_50);
  return;
}



/* Entry: 10802c47c; end: 10802c727;  */

void FUN_10802c47c(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 auStack_f0 [2];
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  int iStack_c8;
  char cStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_78 [64];
  byte bStack_38;
  
  FUN_10802a60c(auStack_78,param_3);
  if ((bStack_38 & 1) == 0) {
    func_0x000107c278b8(&uStack_b8,&UNK_10f4715dd);
    uVar1 = uStack_a8;
    uStack_e0 = uStack_b0;
    uStack_e8 = uStack_b8;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    uStack_90 = uStack_b0;
    uStack_98 = uStack_b8;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    auStack_f0[0] = 0;
    func_0x00010802d188(uVar1);
    func_0x00010802d048();
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_e8 = 0;
    func_0x00010802d03c();
    func_0x00010802d0c0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b8);
    goto LAB_10802c5dc;
  }
  FUN_1080317f0(auStack_f0,param_4);
  if (cStack_c0 == '\x01') {
    uVar2 = 0;
    FUN_108032788();
    if ((uVar2 & 1) == 0) goto LAB_10802c584;
    FUN_10802aea4(auStack_78);
    if (iStack_c8 == 2) {
      FUN_10802ec34(auStack_f0,auStack_78);
    }
    FUN_10802a57c(&uStack_a0,auStack_78);
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[2] = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    func_0x00010802d148();
    func_0x000100100fec(&uStack_a0);
  }
  else {
LAB_10802c584:
    func_0x000107c278b8(&uStack_128,&UNK_10f471e86);
    uVar1 = uStack_118;
    uStack_110 = 0;
    uStack_100 = uStack_120;
    uStack_108 = uStack_128;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_a0 = (ulong)uStack_a0._4_4_ << 0x20;
    func_0x00010802d11c(uVar1);
    func_0x00010802d048();
    func_0x00010802d188();
    func_0x00010802d03c();
    func_0x00010802d0c0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_128);
  }
  func_0x00010802cb0c(auStack_f0);
LAB_10802c5dc:
  func_0x00010802d0f4();
  return;
}



/* Entry: 10802c728; end: 10802c7c7;  */

void FUN_10802c728(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 unaff_x19;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [64];
  byte bStack_28;
  
  func_0x00010802d104();
  if ((bStack_28 & 1) == 0) {
    func_0x00010802d0dc();
    uStack_a8 = 0;
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    func_0x00010802d12c();
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    func_0x00010802d048();
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    func_0x00010802d03c();
    func_0x00010802d0c0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
  }
  else {
    iVar1 = (int)auStack_68;
    FUN_108031c48();
    *(bool *)unaff_x19 = iVar1 == param_3;
    func_0x00010802d148();
  }
  func_0x00010802d0ec();
  return;
}



/* Entry: 10802c7c8; end: 10802c85b;  */

void FUN_10802c7c8(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x19;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [64];
  byte bStack_28;
  
  func_0x00010802d104();
  if ((bStack_28 & 1) == 0) {
    func_0x00010802d0dc();
    uStack_a8 = 0;
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    func_0x00010802d12c();
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    func_0x00010802d048();
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    func_0x00010802d03c();
    func_0x00010802d0c0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
  }
  else {
    uVar1 = SUB84(auStack_68,0);
    FUN_108031c48();
    *unaff_x19 = uVar1;
    func_0x00010802d148();
  }
  func_0x00010802d0ec();
  return;
}



/* Entry: 10802c85c; end: 10802ca07;  */

void FUN_10802c85c(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  bool bVar6;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [48];
  undefined **ppuStack_48;
  byte bStack_38;
  
  puVar4 = &uStack_f0;
  FUN_10802a60c(auStack_78,param_3);
  if ((bStack_38 & 1) == 0) {
    func_0x000107c278b8(&uStack_d8,&UNK_10f4715dd);
    uVar2 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_98 = uStack_d8;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    func_0x00010802d048(uVar2);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    func_0x00010802d03c();
    func_0x00010802d0c0();
    puVar4 = &uStack_d8;
  }
  else {
    ppuVar1 = &PTR_PTR_1133aaf30;
    if (ppuStack_48 != (undefined **)0x0) {
      ppuVar1 = ppuStack_48;
    }
    FUN_10802a9f4(&uStack_a0,ppuVar1);
    uVar3 = uStack_98;
    bVar6 = false;
    for (uVar5 = uStack_a0; uVar5 != uVar3; uVar5 = uVar5 + 0x20) {
      if (*(int *)(uVar5 + 0x14) == 3) {
        FUN_108031938(*(undefined4 *)(uVar5 + 0x10),auStack_78);
        bVar6 = true;
      }
    }
    FUN_10802b744(&uStack_a0);
    if (bVar6) {
      FUN_10802a57c(&uStack_a0,auStack_78);
      param_1[1] = uStack_98;
      *param_1 = uStack_a0;
      param_1[2] = uStack_90;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_a0 = 0;
      func_0x00010802d148();
      func_0x000100100fec(&uStack_a0);
      goto LAB_10802c9c8;
    }
    func_0x000107c278b8(&uStack_f0,&UNK_10f471ea8);
    uStack_c0 = 0;
    uStack_b0 = uStack_e8;
    uStack_b8 = uStack_f0;
    func_0x00010802d12c();
    uStack_a0 = (ulong)uStack_a0._4_4_ << 0x20;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    func_0x00010802d048();
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    func_0x00010802d03c();
    func_0x00010802d0c0();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
LAB_10802c9c8:
  func_0x00010802d0f4();
  return;
}



/* Entry: 10802ca08; end: 10802ca0b;  */

undefined8 * FUN_10802ca08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a180a8;
  func_0x00010802cb58(param_1 + 1);
  return param_1;
}



/* Entry: 10802ca0c; end: 10802ca33;  */

void FUN_10802ca0c(void)

{
  FUN_10802cb2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10802ca34; end: 10802caa7;  */

undefined8 FUN_10802ca34(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010802ca68(&uStack_28);
  return param_1;
}



/* Entry: 10802caa8; end: 10802caaf;  */

void FUN_10802caa8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    FUN_10802cfe0();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10802cab0; end: 10802caeb;  */

void FUN_10802cab0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    FUN_10802cfe0();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10802caec; end: 10802cb2b;  */

void FUN_10802caec(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010b59019c();
  }
  return;
}



/* Entry: 10802cb2c; end: 10802cb9f;  */

undefined8 * FUN_10802cb2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a180a8;
  func_0x00010802cb58(param_1 + 1);
  return param_1;
}



/* Entry: 10802cba0; end: 10802cc33;  */

undefined1 * FUN_10802cba0(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  puVar1 = auStack_40;
  func_0x00010802d0a8();
  uVar3 = 1;
  FUN_10802cc34();
  *puStack_30 = &PTR_FUN_110a18140;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_110a182d8;
  puStack_30[4] = 0x32aaaba7;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x10] = puStack_30 + 0x11;
  func_0x00010802d078();
  func_0x00010802ccb8();
  func_0x00010802d090();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_10802cc5c();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10802cc34; end: 10802cc5b;  */

long FUN_10802cc34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10802cc5c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10802cc5c; end: 10802cc8b;  */

void FUN_10802cc5c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1af286bca1af287) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x98);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a18140;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10802cc8c; end: 10802cc8f;  */

void FUN_10802cc8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a18140;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10802cc90; end: 10802cca3;  */

void FUN_10802cc90(void)

{
  func_0x00010802ccac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10802cca4; end: 10802ccc7;  */

void FUN_10802cca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010802d0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10802ccc8; end: 10802cceb;  */

void FUN_10802ccc8(long param_1)

{
  func_0x00010802d13c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10802ccec; end: 10802cd4b;  */

long FUN_10802ccec(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010802d0a8();
  FUN_10802cd4c(auStack_40,1);
  FUN_10802cd98();
  func_0x00010802d078();
  func_0x00010802cdf4();
  func_0x00010802d090();
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x00010802d17c();
  func_0x00010802cdf4();
  lVar1 = lStack_30;
  func_0x00010802d0c8();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_10802cd74();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10802cd4c; end: 10802cd73;  */

long FUN_10802cd4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10802cd74();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10802cd74; end: 10802cd97;  */

undefined8 * FUN_10802cd74(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a18190;
  FUN_10802fd78(param_1 + 3);
  return param_1;
}



/* Entry: 10802cd98; end: 10802cdc7;  */

undefined8 * FUN_10802cd98(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a18190;
  FUN_10802fd78(param_1 + 3);
  return param_1;
}



/* Entry: 10802cdc8; end: 10802cdcb;  */

void FUN_10802cdc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a18190;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10802cdcc; end: 10802cddf;  */

void FUN_10802cdcc(void)

{
  func_0x00010802cde8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10802cde0; end: 10802ce03;  */

void FUN_10802cde0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010802d0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10802ce04; end: 10802ce27;  */

void FUN_10802ce04(long param_1)

{
  func_0x00010802d13c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10802ce28; end: 10802ce87;  */

long FUN_10802ce28(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010802d0a8();
  FUN_10802ce88(auStack_40,1);
  FUN_10802ced4();
  func_0x00010802d078();
  func_0x00010802cfd0();
  func_0x00010802d090();
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x00010802d17c();
  func_0x00010802cfd0();
  lVar1 = lStack_30;
  func_0x00010802d0c8();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_10802ceb0();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10802ce88; end: 10802ceaf;  */

long FUN_10802ce88(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10802ceb0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10802ceb0; end: 10802ced3;  */

undefined8 * FUN_10802ceb0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a181e0;
  FUN_10802cf24(param_1 + 3);
  return param_1;
}



/* Entry: 10802ced4; end: 10802cf03;  */

undefined8 * FUN_10802ced4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a181e0;
  FUN_10802cf24(param_1 + 3);
  return param_1;
}



/* Entry: 10802cf04; end: 10802cf07;  */

void FUN_10802cf04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a181e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10802cf08; end: 10802cf1b;  */

void FUN_10802cf08(void)

{
  FUN_10802cfc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10802cf1c; end: 10802cf23;  */

void FUN_10802cf1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010802d0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10802cf24; end: 10802cfc3;  */

undefined8 * FUN_10802cf24(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = *param_2;
  lStack_38 = param_2[1];
  if (lStack_38 == 0) {
    *param_1 = &PTR_FUN_110a180a8;
    param_1[1] = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = &PTR_FUN_110a180a8;
    param_1[1] = 0;
    param_1[2] = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_28 = param_1[2];
    uStack_30 = param_1[1];
  }
  param_1[1] = uStack_40;
  param_1[2] = lStack_38;
  func_0x00010802cb58(&uStack_30);
  func_0x00010802cb58(&uStack_40);
  return param_1;
}



/* Entry: 10802cfc4; end: 10802cfdf;  */

void FUN_10802cfc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a181e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10802cfe0; end: 10802d003;  */

void FUN_10802cfe0(long param_1)

{
  func_0x00010802d13c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10802d004; end: 10802d1c7;  */

void FUN_10802d004(undefined8 param_1,undefined8 param_2)

{
  long in_x10;
  long unaff_x29;
  undefined8 in_register_00005008;
  undefined4 *in_stack_00000000;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  
  *(undefined4 *)(unaff_x29 + -0xb0) = 0;
  *(undefined8 *)(in_x10 + 0x30) = in_register_00005008;
  *(undefined8 *)(in_x10 + 0x28) = param_2;
  uStack00000000000000b0 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000a8 = 0;
  *in_stack_00000000 = 0;
  *(undefined8 *)(in_stack_00000000 + 6) = param_1;
  *(undefined8 *)(in_stack_00000000 + 4) = in_register_00005008;
  *(undefined8 *)(in_stack_00000000 + 2) = param_2;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined1 *)(in_stack_00000000 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x29 + -0xa8);
  return;
}



/* Entry: 10802d1c8; end: 10802d2d7;  */

void FUN_10802d1c8(ulong *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long *extraout_x9;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = param_2;
  FUN_10802a6b8(param_2,param_3);
  uVar4 = param_2;
  FUN_10802a7e8(param_2,param_3);
  bVar1 = (int)uVar4 == 2;
  plVar6 = (long *)(param_4 + 0x28);
  bVar2 = bVar1;
  func_0x00010802ea30(*plVar6);
  if (!bVar2) {
    plVar6 = extraout_x9;
  }
  lVar7 = (long)*(int *)(param_4 + 0x30) << 3;
  do {
    if (lVar7 == 0) {
      bVar2 = (int)uVar4 == 2;
      param_1[1] = -(ulong)((long)((ulong)bVar2 << 0x3f) < 0) & 0x1cc8 ^ 6000;
      *param_1 = -(ulong)((long)((ulong)CONCAT14(bVar2,(uint)bVar2) << 0x3f) < 0) & 0x154 ^ 1000;
      param_1[2] = uVar3;
      *(bool *)(param_1 + 3) = bVar1;
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
      return;
    }
    lVar8 = *plVar6;
    ppuVar5 = &PTR_PTR_1133a4758;
    if (*(undefined ***)(lVar8 + 0x18) != (undefined **)0x0) {
      ppuVar5 = *(undefined ***)(lVar8 + 0x18);
    }
    FUN_108031b24(ppuVar5,param_2,param_3);
    lVar7 = lVar7 + -8;
    plVar6 = plVar6 + 1;
  } while ((int)ppuVar5 == 0);
  uVar4 = *(ulong *)(lVar8 + 0x20);
  param_1[1] = *(ulong *)(lVar8 + 0x28);
  *param_1 = uVar4;
  param_1[2] = uVar3;
  *(bool *)(param_1 + 3) = bVar1;
  *(int *)((long)param_1 + 0x1c) = *(int *)(lVar8 + 0x30) + -1;
  return;
}



/* Entry: 10802d2d8; end: 10802d487;  */

void FUN_10802d2d8(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  int iVar5;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong auStack_60 [2];
  ulong uStack_50;
  
  puVar8 = (undefined8 *)(param_3 + 0x10);
  func_0x00010802ea30(*puVar8);
  puVar9 = puVar8;
  if (!(bool)in_ZR) {
    puVar9 = extraout_x9;
  }
LAB_10802d310:
  do {
    func_0x00010802ea30();
    puVar2 = puVar8;
    if (!(bool)in_ZR) {
      puVar2 = extraout_x9_00;
    }
    if (puVar9 == puVar2 + *(int *)(param_3 + 0x18)) break;
    uVar4 = *puVar9;
    FUN_10802a7e8(uVar4,param_4);
    in_ZR = false;
    if ((int)uVar4 == 3) {
      FUN_10802d1c8(auStack_60,*puVar9,param_4,param_2);
      in_ZR = uStack_50 == auStack_60[0];
      if (uStack_50 < auStack_60[0]) {
        func_0x00010802eacc();
        goto LAB_10802d310;
      }
    }
    puVar9 = puVar9 + 1;
  } while( true );
  ppuVar3 = &PTR_PTR_1133a4be0;
  if (*(undefined ***)(param_2 + 0x40) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x40);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  iVar5 = *(int *)(ppuVar3 + 2);
  if (iVar5 < 1) {
    for (lVar7 = 0; lVar7 < *(int *)(ppuVar3 + 5); lVar7 = lVar7 + 1) {
      if (lVar7 == 0) {
        auStack_60[0] = *(ulong *)ppuVar3[6];
LAB_10802d40c:
        func_0x00010802ea3c();
      }
      else {
        puVar1 = (ulong *)((long)ppuVar3[6] + lVar7 * 8);
        auStack_60[0] = *puVar1;
        if (puVar1[-1] < auStack_60[0]) goto LAB_10802d40c;
      }
    }
  }
  else {
    for (lVar7 = 0; lVar7 < iVar5; lVar7 = lVar7 + 1) {
      if (lVar7 == 0) {
        auStack_60[0] = *(ulong *)ppuVar3[3];
LAB_10802d3c8:
        func_0x00010802ea3c();
        iVar5 = *(int *)(ppuVar3 + 2);
      }
      else {
        puVar1 = (ulong *)((long)ppuVar3[3] + lVar7 * 8);
        auStack_60[0] = *puVar1;
        if (puVar1[-1] < auStack_60[0]) goto LAB_10802d3c8;
      }
    }
  }
  auStack_60[0] = (long)ppuVar3[0xc] * 1000;
  uVar6 = auStack_60[0];
  if (*param_1 != param_1[1]) {
    uVar6 = auStack_60[0] - *(long *)(param_1[1] + -8);
  }
  if (uVar6 - 1 < 3000) {
    func_0x00010802ea3c();
  }
  return;
}



/* Entry: 10802d488; end: 10802d48f;  */

long FUN_10802d488(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  
  puVar1 = param_1;
  func_0x00010802ea30(*param_1,param_1,param_2,param_2 + 8);
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  FUN_10802e3b4();
  func_0x00010802ea30(*param_1);
  if (!(bool)in_ZR) {
    param_1 = extraout_x9_00;
  }
  return (long)param_1 + ((param_2 - (long)puVar1) * 0x20000000 >> 0x1d);
}



/* Entry: 10802d490; end: 10802d7ef;  */

void FUN_10802d490(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 in_ZR;
  bool bVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined8 *extraout_x9;
  undefined *puVar18;
  long extraout_x10;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  undefined *puStack_a0;
  undefined *apuStack_98 [4];
  ulong *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar6 = *(int *)(param_2 + 0x18);
  iVar17 = (int)((ulong)(param_4[1] - *param_4) >> 3);
  puStack_78 = (ulong *)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  puVar12 = (undefined8 *)(param_2 + 0x10);
  func_0x00010802ea30(*puVar12);
  if (!(bool)in_ZR) {
    puVar12 = extraout_x9;
  }
  puVar8 = puStack_78;
  uVar9 = uStack_70;
  for (lVar25 = extraout_x10 << 3; puStack_78 = puVar8, uStack_70 = uVar9, lVar25 != 0;
      lVar25 = lVar25 + -8) {
    FUN_10802d1c8(apuStack_98,*puVar12,param_3,param_5);
    FUN_10802df84(&puStack_78,apuStack_98);
    puVar12 = puVar12 + 1;
    puVar8 = puStack_78;
    uVar9 = uStack_70;
  }
  lVar25 = 0;
  iVar27 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  apuStack_98[0] = (undefined *)0x0;
  iVar24 = iVar6 - iVar17;
  do {
    while( true ) {
      bVar10 = false;
      bVar11 = false;
      if (iVar27 < iVar6) {
        bVar11 = SBORROW4((int)lVar25,iVar17);
        bVar10 = (int)lVar25 - iVar17 < 0;
      }
      if (bVar10 == bVar11) {
        FUN_10802e114(&puStack_78);
        return;
      }
      lVar26 = (long)iVar27;
      puVar13 = puVar8;
      FUN_10802d7f0(puVar8,uVar9,lVar26);
      lVar20 = *param_4;
      puVar14 = *(undefined **)(lVar20 + lVar25 * 8);
      puVar3 = (undefined *)0x0;
      if (apuStack_98[0] <= puVar14) {
        puVar3 = puVar14 + -(long)apuStack_98[0];
      }
      puVar18 = (undefined *)*puVar13;
      if (puVar18 <= puVar3) break;
      iVar24 = iVar24 + 1;
LAB_10802d7a4:
      lVar25 = lVar25 + 1;
    }
    ppuVar4 = &PTR_PTR_1133a4be0;
    if (*(undefined ***)(param_5 + 0x40) != (undefined **)0x0) {
      ppuVar4 = *(undefined ***)(param_5 + 0x40);
    }
    puVar19 = ppuVar4[0xd];
    puVar21 = ppuVar4[0xf];
    if ((0 < iVar24 && iVar27 < iVar6 + -1) &&
       (puVar19 != (undefined *)0x0 && puVar21 < apuStack_98[0])) {
      bVar10 = false;
      puVar23 = (undefined *)0x0;
      uVar7 = 0;
      if (puVar19 != (undefined *)0x0) {
        uVar7 = (ulong)((long)apuStack_98[0] - (long)puVar21) / (ulong)puVar19;
      }
      puVar22 = puVar19 + (long)puVar19 * uVar7 + (long)puVar21;
      puStack_a0 = (undefined *)0x0;
      puVar5 = puVar14;
      if (apuStack_98[0] <= puVar14) {
        puVar5 = apuStack_98[0];
      }
      do {
        puVar15 = puVar5 + (long)puVar22 * 2 + ((long)apuStack_98[0] * -2 - (long)puVar14);
        while( true ) {
          if (*(undefined **)(lVar20 + lVar25 * 8) < puVar22) {
            if (!bVar10) goto LAB_10802d6c4;
            FUN_10802e088(param_1,&puStack_a0);
            FUN_10802e088(param_1,*param_4 + lVar25 * 8);
            apuStack_98[0] = apuStack_98[0] + (long)puVar3;
            iVar27 = iVar27 + 2;
            iVar24 = iVar24 + -1;
            goto LAB_10802d7a4;
          }
          if (apuStack_98[0] < puVar22) break;
          puVar22 = puVar22 + (long)puVar19;
          puVar15 = puVar15 + (long)puVar19 * 2;
        }
        puVar1 = puVar22 + -(long)apuStack_98[0];
        if (puVar1 < puVar3) {
          puVar16 = puVar14 + (long)apuStack_98[0] + (-(long)puVar22 - (long)puVar5);
          puVar2 = (undefined *)-(long)puVar15;
          if (puVar16 <= puVar1) {
            puVar2 = puVar15;
          }
          if (puVar18 <= puVar1) {
            if ((puVar13[3] & 1) == 0) {
              if (puVar1 <= (undefined *)puVar13[2] &&
                  (undefined *)puVar8[lVar26 * 4 + 4] <= puVar16) goto LAB_10802d688;
            }
            else if ((undefined *)puVar8[lVar26 * 4 + 4] <= puVar16) {
LAB_10802d688:
              if (((puVar8[lVar26 * 4 + 7] & 1) != 0) ||
                 (puVar16 <= (undefined *)puVar8[lVar26 * 4 + 6])) {
                if ((bool)(bVar10 & puVar23 <= puVar2)) {
                  bVar10 = true;
                }
                else {
                  bVar10 = true;
                  puVar23 = puVar2;
                  puStack_a0 = puVar22;
                }
              }
            }
          }
        }
        puVar22 = puVar19 + (long)puVar22;
      } while( true );
    }
LAB_10802d6c4:
    if (((puVar13[3] & 1) != 0) || (puVar14 = (undefined *)puVar13[2], puVar3 <= puVar14)) {
      apuStack_98[0] = *(undefined **)(lVar20 + lVar25 * 8);
      FUN_10802e088(param_1,apuStack_98);
      iVar27 = iVar27 + 1;
      goto LAB_10802d7a4;
    }
    if ((puVar21 <= apuStack_98[0] && (long)apuStack_98[0] - (long)puVar21 != 0) &&
       (puVar19 != (undefined *)0x0)) {
      uVar7 = 0;
      if (puVar19 != (undefined *)0x0) {
        uVar7 = (ulong)((long)apuStack_98[0] - (long)puVar21) / (ulong)puVar19;
      }
      for (puVar21 = puVar19 + (long)puVar19 * uVar7 + (long)puVar21;
          puVar21 < *(undefined **)(lVar20 + lVar25 * 8); puVar21 = puVar21 + (long)puVar19) {
        if ((apuStack_98[0] < puVar21) &&
           (puVar18 <= puVar21 + -(long)apuStack_98[0] && puVar21 + -(long)apuStack_98[0] <= puVar14
           )) {
          apuStack_98[0] = puVar21;
          FUN_10802e088(param_1,apuStack_98);
          goto LAB_10802d72c;
        }
      }
    }
    apuStack_98[0] = apuStack_98[0] + (long)puVar14;
    FUN_10802e088(param_1,apuStack_98);
LAB_10802d72c:
    iVar27 = iVar27 + 1;
    iVar24 = iVar24 + -1;
  } while( true );
}



/* Entry: 10802d7f0; end: 10802d80f;  */

ulong ** FUN_10802d7f0(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong **ppuVar13;
  int iVar14;
  long *extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  ulong uVar31;
  long lStack_118;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  undefined1 uStack_104;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_3 < (long *)(param_2 - param_1 >> 5)) {
    return (ulong **)(param_1 + (long)param_3 * 0x20);
  }
  func_0x00010802e07c();
  lVar3 = *param_3;
  lVar4 = param_3[1];
  puStack_90 = (ulong *)0x0;
  uStack_88 = 0;
  uVar15 = *(ulong *)(param_1 + 0x10);
  uStack_80 = 0;
  puVar11 = (ulong *)(param_1 + 0x10);
  if ((uVar15 & 1) != 0) {
    puVar11 = (ulong *)(uVar15 + 7);
  }
  puVar7 = puStack_90;
  uVar8 = uStack_88;
  for (lVar26 = (long)*(int *)(param_1 + 0x18) << 3; puStack_90 = puVar7, uStack_88 = uVar8,
      lVar26 != 0; lVar26 = lVar26 + -8) {
    FUN_10802d1c8(&uStack_e0,*puVar11,param_2,param_4);
    FUN_10802df84(&puStack_90,&uStack_e0);
    puVar11 = puVar11 + 1;
    puVar7 = puStack_90;
    uVar8 = uStack_88;
  }
  iVar24 = 0;
  iVar30 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  lStack_d8 = 0;
  uStack_e0 = 0;
  lStack_100 = 0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  iVar14 = (int)((ulong)(lVar4 - lVar3) >> 3);
  uVar15 = 1;
  do {
    while (lVar26 = lStack_f8, (uVar15 & 1) == 0) {
      if (lStack_b8 == 0) {
        extraout_x8[1] = lStack_a8;
        *extraout_x8 = lStack_b0;
        extraout_x8[2] = lStack_a0;
        lStack_a8 = 0;
        lStack_a0 = 0;
        lStack_b0 = 0;
LAB_10802dc10:
        func_0x00010048b0a4(&lStack_100);
        FUN_10802e140(&uStack_e0);
        func_0x00010048b0a4(&lStack_b0);
        ppuVar13 = &puStack_90;
        FUN_10802e114(ppuVar13);
        return ppuVar13;
      }
      uVar15 = (lStack_b8 + lStack_c0) - 1;
      piVar1 = (int *)(*(long *)(lStack_d8 + (uVar15 >> 8) * 8) + (uVar15 & 0xff) * 0x10);
      iVar25 = *piVar1;
      uVar6 = piVar1[2];
      if ((*(byte *)(piVar1 + 3) & 1) == 0) {
        FUN_10802e49c(&uStack_e0);
        func_0x00010802eb08();
        iVar30 = iVar30 + -1;
        iVar24 = iVar25 + iVar24 + ~uVar6;
        uVar15 = extraout_x8_00;
      }
      else {
        uVar5 = piVar1[1];
        if ((int)uVar5 < (int)uVar6) {
          *(undefined8 *)(lStack_f8 + -8) = *(undefined8 *)(*param_3 + (long)(int)uVar6 * 8 + -8);
          iVar24 = iVar24 + -1;
          uVar15 = 1;
        }
        else {
          FUN_10802e49c(&uStack_e0);
          func_0x00010802eb08();
          iVar24 = iVar25 + iVar24 + ~uVar5;
          iVar30 = iVar30 + -1;
          uVar15 = extraout_x8_01;
        }
      }
    }
    iVar25 = *(int *)(param_1 + 0x18);
    if (iVar25 <= iVar30) {
      extraout_x8[1] = lStack_f8;
      *extraout_x8 = lStack_100;
LAB_10802dc00:
      extraout_x8[2] = lStack_f0;
      lStack_f8 = 0;
      lStack_f0 = 0;
      lStack_100 = 0;
      goto LAB_10802dc10;
    }
    if (iVar24 < iVar14) {
      puVar11 = puVar7;
      FUN_10802d7f0(puVar7,uVar8,(long)iVar30);
      if (lStack_100 == lStack_f8) {
        lVar26 = 0;
      }
      else {
        lVar26 = *(long *)(lStack_f8 + -8);
      }
      uVar18 = 0;
      bVar17 = false;
      lVar23 = 0;
      bVar9 = false;
      uVar16 = puVar11[2];
      puVar21 = puVar11 + 1;
      uVar15 = *puVar21;
      puVar2 = puVar11 + 2;
      if (uVar15 <= uVar16) {
        puVar2 = puVar21;
      }
      if ((byte)puVar11[3] == 0) {
        puVar21 = puVar2;
      }
      uVar28 = 0xffffffff;
      uVar12 = 0xffffffff;
      uVar22 = 0xffffffff;
      while( true ) {
        iVar10 = (int)uVar12;
        iVar27 = (int)uVar28;
        iVar20 = (int)uVar22;
        uVar29 = lVar23 + iVar24;
        iStack_110 = iVar24;
        if ((lVar4 - lVar3) * 0x20000000 >> 0x20 <= (long)uVar29) break;
        uVar31 = *(long *)(*param_3 + (long)iVar24 * 8 + lVar23 * 8) - lVar26;
        if (uVar31 < *puVar11) {
          if (iVar24 == iVar14 + -1) {
            *extraout_x8 = lStack_100;
            extraout_x8[1] = lStack_f8;
            goto LAB_10802dc00;
          }
        }
        else {
          if (*puVar21 < uVar31) {
            if (bVar9) break;
            if (((byte)puVar11[3] & 1) == 0) {
              iVar19 = iVar24 + (int)lVar23 + -1;
              if (uVar16 <= uVar15) {
                uVar15 = uVar16;
              }
              uVar15 = uVar15 & 0xffffffff;
              iStack_10c = iVar10;
              uStack_104 = uVar18;
              goto LAB_10802daf4;
            }
LAB_10802dabc:
            uVar12 = (ulong)(uint)(iVar24 + (int)lVar23);
            uVar18 = 1;
            bVar17 = true;
            uVar22 = uVar12;
            uVar29 = uVar12;
          }
          else if (!bVar9) goto LAB_10802dabc;
          iVar10 = (int)uVar12;
          iVar27 = (int)uVar29;
          iVar20 = (int)uVar22;
          if (*(int *)((long)puVar11 + 0x1c) <= lVar23) break;
          bVar9 = true;
          uVar28 = uVar29;
        }
        lVar23 = lVar23 + 1;
      }
      iVar19 = -1;
      uVar15 = 0xffffffff;
      iStack_10c = iVar10;
      uStack_104 = uVar18;
LAB_10802daf4:
      iStack_108 = iVar27;
      if (iVar20 < iVar27 && iVar14 - iVar24 <= iVar25 - iVar30) {
        iStack_108 = iVar20;
      }
      iVar25 = iStack_108;
      if (bVar17) {
        func_0x00010802eab4();
        FUN_10802e088(&lStack_100,*param_3 + (long)iVar25 * 8);
        iVar24 = iVar25 + 1;
      }
      else {
        if ((int)uVar15 < 1) {
          uVar15 = *(long *)(*param_3 + (long)iVar24 * 8) - lVar26;
          if (uVar16 < uVar15) {
            uVar15 = uVar16;
            iStack_108 = iVar24 + -1;
            iVar25 = iVar24;
          }
          else {
            iVar25 = iVar24 + 1;
            uStack_104 = 1;
            iStack_108 = iVar24;
          }
        }
        else {
          iStack_108 = iVar19;
          iVar25 = iVar19 + 1;
        }
        iStack_10c = iStack_108;
        func_0x00010802eab4();
        lStack_118 = uVar15 + lVar26;
        FUN_10802def8(&lStack_100,&lStack_118);
        iVar24 = iVar25;
      }
      iVar30 = iVar30 + 1;
      uVar15 = 1;
    }
    else {
      uVar15 = 0;
      if (lStack_100 != lStack_f8) {
        uVar22 = lStack_f8 - lStack_100 >> 3;
        uVar16 = lStack_a8 - lStack_b0 >> 3;
        if ((uVar16 < uVar22) ||
           ((uVar15 = 0, uVar22 == uVar16 &&
            (uVar15 = 0, *(ulong *)(lStack_a8 + -8) < *(ulong *)(lStack_f8 + -8))))) {
          lStack_a8 = lStack_b0;
          for (lVar23 = lStack_100; lVar23 != lVar26; lVar23 = lVar23 + 8) {
            FUN_10802e088(&lStack_b0,lVar23);
          }
          uVar15 = 0;
        }
      }
    }
  } while( true );
}



/* Entry: 10802d810; end: 10802dcaf;  */

void FUN_10802d810(long *param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  int *piVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  int iVar19;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  long lStack_108;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined1 uStack_f4;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar3 = *param_4;
  lVar4 = param_4[1];
  puStack_80 = (ulong *)0x0;
  uStack_78 = 0;
  uVar14 = *(ulong *)(param_2 + 0x10);
  uStack_70 = 0;
  puVar11 = (ulong *)(param_2 + 0x10);
  if ((uVar14 & 1) != 0) {
    puVar11 = (ulong *)(uVar14 + 7);
  }
  puVar7 = puStack_80;
  uVar8 = uStack_78;
  for (lVar25 = (long)*(int *)(param_2 + 0x18) << 3; puStack_80 = puVar7, uStack_78 = uVar8,
      lVar25 != 0; lVar25 = lVar25 + -8) {
    FUN_10802d1c8(&uStack_d0,*puVar11,param_3,param_5);
    FUN_10802df84(&puStack_80,&uStack_d0);
    puVar11 = puVar11 + 1;
    puVar7 = puStack_80;
    uVar8 = uStack_78;
  }
  iVar23 = 0;
  iVar29 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  iVar13 = (int)((ulong)(lVar4 - lVar3) >> 3);
  uVar14 = 1;
  do {
    while (lVar25 = lStack_e8, (uVar14 & 1) == 0) {
      if (lStack_a8 == 0) {
        param_1[1] = lStack_98;
        *param_1 = lStack_a0;
        param_1[2] = lStack_90;
        lStack_98 = 0;
        lStack_90 = 0;
        lStack_a0 = 0;
LAB_10802dc10:
        func_0x00010048b0a4(&lStack_f0);
        FUN_10802e140(&uStack_d0);
        func_0x00010048b0a4(&lStack_a0);
        FUN_10802e114(&puStack_80);
        return;
      }
      uVar14 = (lStack_a8 + lStack_b0) - 1;
      piVar1 = (int *)(*(long *)(lStack_c8 + (uVar14 >> 8) * 8) + (uVar14 & 0xff) * 0x10);
      iVar24 = *piVar1;
      uVar6 = piVar1[2];
      if ((*(byte *)(piVar1 + 3) & 1) == 0) {
        FUN_10802e49c(&uStack_d0);
        func_0x00010802eb08();
        iVar29 = iVar29 + -1;
        iVar23 = iVar24 + iVar23 + ~uVar6;
        uVar14 = extraout_x8;
      }
      else {
        uVar5 = piVar1[1];
        if ((int)uVar5 < (int)uVar6) {
          *(undefined8 *)(lStack_e8 + -8) = *(undefined8 *)(*param_4 + (long)(int)uVar6 * 8 + -8);
          iVar23 = iVar23 + -1;
          uVar14 = 1;
        }
        else {
          FUN_10802e49c(&uStack_d0);
          func_0x00010802eb08();
          iVar23 = iVar24 + iVar23 + ~uVar5;
          iVar29 = iVar29 + -1;
          uVar14 = extraout_x8_00;
        }
      }
    }
    iVar24 = *(int *)(param_2 + 0x18);
    if (iVar24 <= iVar29) {
      param_1[1] = lStack_e8;
      *param_1 = lStack_f0;
LAB_10802dc00:
      param_1[2] = lStack_e0;
      lStack_e8 = 0;
      lStack_e0 = 0;
      lStack_f0 = 0;
      goto LAB_10802dc10;
    }
    if (iVar23 < iVar13) {
      puVar11 = puVar7;
      FUN_10802d7f0(puVar7,uVar8,(long)iVar29);
      if (lStack_f0 == lStack_e8) {
        lVar25 = 0;
      }
      else {
        lVar25 = *(long *)(lStack_e8 + -8);
      }
      uVar17 = 0;
      bVar16 = false;
      lVar22 = 0;
      bVar9 = false;
      uVar15 = puVar11[2];
      puVar20 = puVar11 + 1;
      uVar14 = *puVar20;
      puVar2 = puVar11 + 2;
      if (uVar14 <= uVar15) {
        puVar2 = puVar20;
      }
      if ((byte)puVar11[3] == 0) {
        puVar20 = puVar2;
      }
      uVar27 = 0xffffffff;
      uVar12 = 0xffffffff;
      uVar21 = 0xffffffff;
      while( true ) {
        iVar10 = (int)uVar12;
        iVar26 = (int)uVar27;
        iVar19 = (int)uVar21;
        uVar28 = lVar22 + iVar23;
        iStack_100 = iVar23;
        if ((lVar4 - lVar3) * 0x20000000 >> 0x20 <= (long)uVar28) break;
        uVar30 = *(long *)(*param_4 + (long)iVar23 * 8 + lVar22 * 8) - lVar25;
        if (uVar30 < *puVar11) {
          if (iVar23 == iVar13 + -1) {
            *param_1 = lStack_f0;
            param_1[1] = lStack_e8;
            goto LAB_10802dc00;
          }
        }
        else {
          if (*puVar20 < uVar30) {
            if (bVar9) break;
            if (((byte)puVar11[3] & 1) == 0) {
              iVar18 = iVar23 + (int)lVar22 + -1;
              if (uVar15 <= uVar14) {
                uVar14 = uVar15;
              }
              uVar14 = uVar14 & 0xffffffff;
              iStack_fc = iVar10;
              uStack_f4 = uVar17;
              goto LAB_10802daf4;
            }
LAB_10802dabc:
            uVar12 = (ulong)(uint)(iVar23 + (int)lVar22);
            uVar17 = 1;
            bVar16 = true;
            uVar21 = uVar12;
            uVar28 = uVar12;
          }
          else if (!bVar9) goto LAB_10802dabc;
          iVar10 = (int)uVar12;
          iVar26 = (int)uVar28;
          iVar19 = (int)uVar21;
          if (*(int *)((long)puVar11 + 0x1c) <= lVar22) break;
          bVar9 = true;
          uVar27 = uVar28;
        }
        lVar22 = lVar22 + 1;
      }
      iVar18 = -1;
      uVar14 = 0xffffffff;
      iStack_fc = iVar10;
      uStack_f4 = uVar17;
LAB_10802daf4:
      iStack_f8 = iVar26;
      if (iVar19 < iVar26 && iVar13 - iVar23 <= iVar24 - iVar29) {
        iStack_f8 = iVar19;
      }
      iVar24 = iStack_f8;
      if (bVar16) {
        func_0x00010802eab4();
        FUN_10802e088(&lStack_f0,*param_4 + (long)iVar24 * 8);
        iVar23 = iVar24 + 1;
      }
      else {
        if ((int)uVar14 < 1) {
          uVar14 = *(long *)(*param_4 + (long)iVar23 * 8) - lVar25;
          if (uVar15 < uVar14) {
            uVar14 = uVar15;
            iStack_f8 = iVar23 + -1;
            iVar24 = iVar23;
          }
          else {
            iVar24 = iVar23 + 1;
            uStack_f4 = 1;
            iStack_f8 = iVar23;
          }
        }
        else {
          iStack_f8 = iVar18;
          iVar24 = iVar18 + 1;
        }
        iStack_fc = iStack_f8;
        func_0x00010802eab4();
        lStack_108 = uVar14 + lVar25;
        FUN_10802def8(&lStack_f0,&lStack_108);
        iVar23 = iVar24;
      }
      iVar29 = iVar29 + 1;
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
      if (lStack_f0 != lStack_e8) {
        uVar21 = lStack_e8 - lStack_f0 >> 3;
        uVar15 = lStack_98 - lStack_a0 >> 3;
        if ((uVar15 < uVar21) ||
           ((uVar14 = 0, uVar21 == uVar15 &&
            (uVar14 = 0, *(ulong *)(lStack_98 + -8) < *(ulong *)(lStack_e8 + -8))))) {
          lStack_98 = lStack_a0;
          for (lVar22 = lStack_f0; lVar22 != lVar25; lVar22 = lVar22 + 8) {
            FUN_10802e088(&lStack_a0,lVar22);
          }
          uVar14 = 0;
        }
      }
    }
  } while( true );
}



/* Entry: 10802dcb0; end: 10802dd63;  */

void FUN_10802dcb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  FUN_10802a6b8();
  uVar3 = param_1;
  FUN_10802a7e8(param_1,param_2);
  uVar4 = uVar3;
  func_0x00010802eae0();
  if ((int)uVar3 == 2 && uVar2 < param_3) {
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x00010802eae0();
    *(ulong *)(uVar4 + 0x18) = param_3;
    FUN_10802af44(param_2);
    FUN_10802a92c(param_1,param_2);
    func_0x00010802e2b4();
    *(int *)(param_1 + 0x48) = (int)param_3;
  }
  else {
    *(ulong *)(uVar4 + 0x18) = param_3;
    func_0x00010802eae0();
    ppuVar1 = &PTR_PTR_11339d900;
    if (*(undefined ***)(param_1 + 0x38) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x38);
    }
    *(undefined **)(uVar4 + 0x10) = ppuVar1[2] + (uVar2 - param_3 >> 1);
  }
  return;
}



/* Entry: 10802dd64; end: 10802dd73;  */

void FUN_10802dd64(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010802e268();
    *(ulong *)(param_1 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 10802dd74; end: 10802ded3;  */

void FUN_10802dd74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_98 [24];
  long lStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  
  FUN_10802d2d8(auStack_68,param_2,param_3,param_4);
  func_0x00010802eaf4(&lStack_80);
  FUN_10802d810();
  uVar3 = lStack_80 == lStack_78;
  if ((bool)uVar3) {
    func_0x00010802eaf4(auStack_98);
    FUN_10802d490();
    func_0x0001073588ec(&lStack_80,auStack_98);
    func_0x00010048b0a4(auStack_98);
  }
  uVar5 = 0;
  puVar6 = (undefined8 *)(param_3 + 0x10);
  func_0x00010802ea30(*puVar6);
  puVar7 = puVar6;
  if (!(bool)uVar3) {
    puVar7 = extraout_x9;
  }
  while( true ) {
    func_0x00010802ea30();
    puVar2 = puVar6;
    if (!(bool)uVar3) {
      puVar2 = extraout_x9_00;
    }
    if (puVar7 == puVar2 + *(int *)(param_3 + 0x18)) break;
    uVar1 = lStack_78 - lStack_80 >> 3;
    uVar3 = uVar5 == uVar1;
    if (uVar5 < uVar1) {
      plVar4 = &lStack_80;
      FUN_10802ded4(plVar4,uVar5);
      lVar8 = *plVar4;
      if (uVar5 != 0) {
        plVar4 = &lStack_80;
        FUN_10802ded4(plVar4,uVar5 - 1);
        lVar8 = lVar8 - *plVar4;
      }
      FUN_10802dcb0(*puVar7,param_4,lVar8);
      FUN_10802adf8(*puVar7,param_1);
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    else {
      func_0x00010802eacc();
    }
  }
  func_0x00010048b0a4(&lStack_80);
  func_0x00010048b0a4(auStack_68);
  return;
}



/* Entry: 10802ded4; end: 10802def7;  */

long * FUN_10802ded4(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *unaff_x19;
  
  uVar1 = (long *)(param_1[1] - *param_1 >> 3) <= param_2;
  if (!(bool)uVar1) {
    return (long *)(*param_1 + (long)param_2 * 8);
  }
  FUN_10802e358();
  func_0x00010802eb1c();
  if ((bool)uVar1) {
    plVar2 = unaff_x19;
    FUN_10802df30();
  }
  else {
    plVar2 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = (long)plVar2;
  return plVar2 + -1;
}



/* Entry: 10802def8; end: 10802df2f;  */

undefined8 * FUN_10802def8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x00010802eb1c();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10802df30();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 10802df30; end: 10802df83;  */

undefined8 FUN_10802df30(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010802e9f8();
  func_0x00010802ea9c();
  if (param_2 != 0) {
    func_0x00010048ac4c();
  }
  func_0x00010802ea58();
  func_0x00010802eac0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010802ea50();
  return uVar1;
}



/* Entry: 10802df84; end: 10802e067;  */

undefined8 * FUN_10802df84(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar5 = (undefined8 *)param_1[1];
  uVar2 = (undefined8 *)param_1[2] <= puVar5;
  if (!(bool)uVar2) {
    uVar11 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar5[1] = param_2[1];
    *puVar5 = uVar11;
    puVar5[3] = uVar13;
    puVar5[2] = uVar12;
    puVar5 = puVar5 + 4;
    puVar4 = param_1;
LAB_10802e044:
    param_1[1] = puVar5;
    return puVar4;
  }
  puVar8 = (undefined8 *)*param_1;
  lVar10 = (long)puVar5 - (long)puVar8;
  uVar1 = (lVar10 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar6 = (long)param_1[2] - (long)puVar8;
    uVar7 = (long)uVar6 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    uVar2 = 0x7fffffffffffffdf < uVar6;
    if ((bool)uVar2) {
      uVar7 = 0x7ffffffffffffff;
    }
    if (uVar7 >> 0x3b == 0) {
      lVar3 = uVar7 << 5;
      __Znwm();
      puVar9 = (undefined8 *)(lVar3 + lVar10);
      uVar11 = *param_2;
      uVar13 = param_2[3];
      uVar12 = param_2[2];
      puVar9[1] = param_2[1];
      *puVar9 = uVar11;
      puVar9[3] = uVar13;
      puVar9[2] = uVar12;
      puVar5 = puVar9 + 4;
      puVar9 = puVar9 + (lVar10 >> 5) * -4;
      puVar4 = puVar9;
      _memcpy(puVar9,puVar8,lVar10);
      *param_1 = puVar9;
      param_1[1] = puVar5;
      param_1[2] = lVar3 + uVar7 * 0x20;
      if (puVar8 != (undefined8 *)0x0) {
        __ZdlPv(puVar8);
        puVar4 = puVar8;
      }
      goto LAB_10802e044;
    }
  }
  else {
    FUN_10802e068();
  }
  func_0x000104bd35f4();
  puVar5 = (undefined8 *)&UNK_10f471ecf;
  func_0x000104bd47e8();
  func_0x00010802eae8();
  func_0x00010802eb1c();
  if ((bool)uVar2) {
    puVar8 = param_1;
    FUN_10802e0c0();
  }
  else {
    puVar8 = puVar5 + 1;
    *puVar5 = *param_2;
  }
  param_1[1] = puVar8;
  return puVar8 + -1;
}



/* Entry: 10802e068; end: 10802e087;  */

undefined8 * FUN_10802e068(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  
  puVar1 = (undefined8 *)&UNK_10f471ecf;
  func_0x000104bd47e8();
  func_0x00010802eae8();
  func_0x00010802eb1c();
  if ((bool)in_CY) {
    puVar2 = unaff_x19;
    FUN_10802e0c0();
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  unaff_x19[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10802e088; end: 10802e0bf;  */

undefined8 * FUN_10802e088(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x00010802eb1c();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10802e0c0();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -1;
}



/* Entry: 10802e0c0; end: 10802e113;  */

undefined8 FUN_10802e0c0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010802e9f8();
  func_0x00010802ea9c();
  if (param_2 != 0) {
    func_0x00010048ac4c();
  }
  func_0x00010802ea58();
  func_0x00010802eac0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010802ea50();
  return uVar1;
}


