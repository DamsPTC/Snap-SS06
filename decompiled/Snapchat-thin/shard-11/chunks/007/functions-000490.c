/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088a8da4; end: 1088a8e73;  */

undefined8 FUN_1088a8da4(undefined8 param_1)

{
  FUN_1088a9d28(param_1);
  return param_1;
}



/* Entry: 1088a8e74; end: 1088a8ed3;  */

undefined8 FUN_1088a8e74(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  FUN_1088a9de4(auStack_18);
  return param_1;
}



/* Entry: 1088a8ed4; end: 1088a8f0f;  */

void FUN_1088a8ed4(undefined8 param_1)

{
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1088ab440(&uStack_29);
  FUN_1088ab380(param_1,&uStack_29);
  return;
}



/* Entry: 1088a8f10; end: 1088a8f27;  */

undefined8 FUN_1088a8f10(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1088a8f28; end: 1088a8f97;  */

undefined8 FUN_1088a8f28(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088ad564(param_1,param_2);
  return param_1;
}



/* Entry: 1088a8f98; end: 1088a93b7;  */

void FUN_1088a8f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_f8 [27];
  byte bStack_dd;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar7 = (undefined8 *)0x50;
  uStack_a0 = param_3;
  uStack_98 = param_2;
  uStack_90 = param_1;
  __Znwm();
  *puVar7 = FUN_1088ad9cc;
  puVar7[1] = FUN_1088add44;
  puVar1 = puVar7 + 4;
  uVar14 = (long)puVar7 + 0x49;
  plVar2 = puVar7 + 5;
  puVar13 = puVar7 + 6;
  puVar3 = puVar7 + 7;
  uVar4 = (long)puVar7 + 0x4b;
  puVar5 = puVar7 + 2;
  puVar7[8] = param_2;
  FUN_1088ad5b8(puVar1,param_3);
  func_0x0001088ad630(puVar5);
  FUN_1088ad664(param_1,puVar5);
  func_0x000107c2a188(puVar5);
  uVar8 = uVar14;
  func_0x000107c2a18c();
  if ((uVar8 & 1) == 0) {
    *(undefined1 *)(puVar7 + 9) = 0;
    FUN_1088ad6b8();
    ppuVar11 = &puStack_88;
    puStack_88 = puVar7;
    func_0x0001088ad6e8(ppuVar11);
    FUN_108885f40(uVar14,ppuVar11);
  }
  else {
    func_0x000107c2a19c(uVar14);
    FUN_1088ad718(puVar13,puVar7[8] + 0x38,puVar1);
    FUN_108894808(plVar2,puVar13);
    plVar9 = plVar2;
    func_0x000107c2a1a4();
    if (((ulong)plVar9 & 1) == 0) {
      *(undefined1 *)(puVar7 + 9) = 1;
      puVar10 = puVar7;
      FUN_1088ad6b8();
      ppuVar11 = &puStack_80;
      puStack_80 = puVar10;
      func_0x0001088ad6e8(ppuVar11);
      plVar9 = plVar2;
      func_0x000107c28830(plVar2,ppuVar11);
      if (((ulong)plVar9 & 1) != 0) {
        return;
      }
    }
    plVar9 = plVar2;
    func_0x000107c28870();
    bStack_dd = *plVar9 == 0;
    FUN_108894834(plVar2);
    func_0x000108894868(puVar13);
    *(byte *)((long)puVar7 + 0x4a) = bStack_dd & 1;
    if ((*(byte *)((long)puVar7 + 0x4a) & 1) != 0) {
      lVar15 = puVar7[8];
      uVar12 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_f8,&UNK_10f4afc25,lVar15 + 0x20);
      func_0x00010889489c(uVar12,auStack_f8);
      ___cxa_throw(uVar12,&PTR_DAT_110a60aa8,FUN_10865a9d4);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1088a93b8);
      (*pcVar6)();
    }
    func_0x0001088a93f8(puVar3,puVar1);
    puVar13 = puVar3;
    func_0x000107c2a1a4();
    if (((ulong)puVar13 & 1) == 0) {
      *(undefined1 *)(puVar7 + 9) = 2;
      puVar13 = puVar7;
      FUN_1088ad6b8();
      ppuVar11 = &puStack_78;
      puStack_78 = puVar13;
      func_0x0001088ad6e8(ppuVar11);
      puVar13 = puVar3;
      func_0x000107c28830(puVar3,ppuVar11);
      if (((ulong)puVar13 & 1) != 0) {
        return;
      }
    }
    puVar13 = puVar3;
    FUN_1088a9420(puVar3);
    FUN_1088ad80c(puVar5,puVar13);
    func_0x0001088a94dc(puVar3);
    FUN_108885f88(puVar5);
    uVar14 = uVar4;
    func_0x000107c2a18c();
    if ((uVar14 & 1) == 0) {
      *puVar7 = 0;
      *(undefined1 *)(puVar7 + 9) = 3;
      FUN_1088ad6b8();
      ppuVar11 = apuStack_70;
      apuStack_70[0] = puVar7;
      func_0x0001088ad6e8(ppuVar11);
      FUN_108885f40(uVar4,ppuVar11);
    }
    else {
      func_0x000107c2a19c(uVar4);
      func_0x0001088ad858(puVar5);
      func_0x0001088a9510(puVar1);
      __ZdlPv(puVar7);
    }
  }
  return;
}



/* Entry: 1088a93b8; end: 1088a93cf;  */

undefined8 FUN_1088a93b8(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1088a93d0; end: 1088a941f;  */

void FUN_1088a93d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1088ad5b8(param_1,param_2);
  return;
}



/* Entry: 1088a9420; end: 1088a949f;  */

void FUN_1088a9420(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_30 [8];
  ulong uStack_28;
  
  uVar2 = param_1;
  uStack_28 = param_1;
  func_0x000107c2a1f0();
  FUN_10888e2bc();
  if ((uVar2 & 1) == 0) {
    func_0x000107c2a1f0(param_1);
    FUN_1088a9ec0();
    return;
  }
  func_0x000107c2a1f0(param_1);
  __ZNSt13exception_ptrC1ERKS_(auStack_30,param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1088a9488);
  (*pcVar1)();
}



/* Entry: 1088a94a0; end: 1088a9543;  */

undefined8 FUN_1088a94a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a9f28(param_1,param_2);
  return param_1;
}



/* Entry: 1088a9544; end: 1088a958f;  */

uint FUN_1088a9544(undefined8 param_1)

{
  FUN_1088a9590(param_1);
  return (uint)param_1 & 1;
}



/* Entry: 1088a9590; end: 1088a95ab;  */

byte FUN_1088a9590(long param_1)

{
  return *(byte *)(param_1 + 0x38) & 1;
}



/* Entry: 1088a95ac; end: 1088a96b3;  */

undefined8 FUN_1088a95ac(undefined8 param_1)

{
  FUN_1088aa320(param_1);
  return param_1;
}



/* Entry: 1088a96b4; end: 1088a9707;  */

long FUN_1088a96b4(long param_1)

{
  func_0x0001088aa458(param_1 + -8);
  return param_1 + -8;
}



/* Entry: 1088a9708; end: 1088a9753;  */

uint FUN_1088a9708(undefined8 param_1)

{
  FUN_1088a9754(param_1);
  return (uint)param_1 & 1;
}



/* Entry: 1088a9754; end: 1088a9783;  */

byte FUN_1088a9754(long param_1)

{
  return *(byte *)(param_1 + 4) & 1;
}



/* Entry: 1088a9784; end: 1088a98bb;  */

undefined8 FUN_1088a9784(undefined8 param_1)

{
  func_0x0001088a97b8(param_1);
  return param_1;
}



/* Entry: 1088a98bc; end: 1088a98d7;  */

void FUN_1088a98bc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 1088a98d8; end: 1088a9a0f;  */

undefined8 FUN_1088a98d8(undefined8 param_1)

{
  func_0x0001088a990c(param_1);
  return param_1;
}



/* Entry: 1088a9a10; end: 1088a9a4b;  */

void FUN_1088a9a10(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 1088a9a4c; end: 1088a9a73;  */

void FUN_1088a9a4c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



/* Entry: 1088a9a74; end: 1088a9acf;  */

undefined8 FUN_1088a9a74(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
    func_0x00010888ec74();
    func_0x000107c287e0();
    *(long *)(param_1 + 0x30) = lVar1;
  }
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1088a9ad0; end: 1088a9af3;  */

long FUN_1088a9ad0(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 1088a9af4; end: 1088a9d0b;  */

undefined8 FUN_1088a9af4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088a9b30(param_1,param_2);
  return param_1;
}



/* Entry: 1088a9d0c; end: 1088a9d27;  */

void FUN_1088a9d0c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 1088a9d28; end: 1088a9dcf;  */

undefined8 * FUN_1088a9d28(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001088a9d68(param_1 + 2);
  return param_1;
}



/* Entry: 1088a9dd0; end: 1088a9de3;  */

undefined8 FUN_1088a9dd0(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088a9de4; end: 1088a9e17;  */

undefined8 FUN_1088a9de4(undefined8 param_1)

{
  FUN_1088a9e18(param_1);
  return param_1;
}



/* Entry: 1088a9e18; end: 1088a9e47;  */

void FUN_1088a9e18(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1088a9e48; end: 1088a9ebf;  */

undefined8 FUN_1088a9e48(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088a9e84(param_1,param_2);
  return param_1;
}



/* Entry: 1088a9ec0; end: 1088a9f13;  */

void FUN_1088a9ec0(long param_1)

{
  func_0x0001088a9ef0(param_1 + 0x98);
  return;
}



/* Entry: 1088a9f14; end: 1088a9f27;  */

undefined8 FUN_1088a9f14(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088a9f28; end: 1088aa017;  */

undefined8 FUN_1088a9f28(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088a9f64(param_1,param_2);
  return param_1;
}



/* Entry: 1088aa018; end: 1088aa077;  */

undefined8 FUN_1088aa018(undefined8 param_1,undefined8 param_2)

{
  FUN_1088aa078(param_1);
  func_0x0001088aa0ac(param_1,param_2);
  return param_1;
}



/* Entry: 1088aa078; end: 1088aa12b;  */

undefined8 FUN_1088aa078(undefined8 param_1)

{
  FUN_1088aa12c(param_1);
  return param_1;
}



/* Entry: 1088aa12c; end: 1088aa147;  */

void FUN_1088aa12c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  return;
}



/* Entry: 1088aa148; end: 1088aa187;  */

void FUN_1088aa148(long param_1,undefined8 param_2)

{
  FUN_1088aa19c(param_1,param_2);
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1088aa188; end: 1088aa19b;  */

undefined8 FUN_1088aa188(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088aa19c; end: 1088aa1f3;  */

void FUN_1088aa19c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088aa1c8(param_1,param_2);
  return;
}



/* Entry: 1088aa1f4; end: 1088aa22f;  */

undefined8 FUN_1088aa1f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1088aa230(param_1,param_2);
  return param_1;
}



/* Entry: 1088aa230; end: 1088aa2a3;  */

long FUN_1088aa230(long param_1,long param_2)

{
  func_0x000107c2a1d4(param_1,param_2);
  func_0x000107c2a1d4(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return param_1;
}



/* Entry: 1088aa2a4; end: 1088aa30b;  */

undefined8 FUN_1088aa2a4(undefined8 param_1)

{
  func_0x00010888e32c(param_1);
  return param_1;
}



/* Entry: 1088aa30c; end: 1088aa31f;  */

undefined8 FUN_1088aa30c(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088aa320; end: 1088aa5d3;  */

undefined8 FUN_1088aa320(undefined8 param_1)

{
  func_0x0001088aa354(param_1);
  return param_1;
}



/* Entry: 1088aa5d4; end: 1088aa627;  */

undefined8 FUN_1088aa5d4(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [8];
  long lStack_30;
  long *plStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  plStack_28 = param_2;
  uStack_20 = param_1;
  func_0x0001088aa664(auStack_38,param_1);
  puVar1 = auStack_38;
  FUN_1088aa6a0();
  lStack_30 = (long)puVar1 * *plStack_28;
  FUN_1088aa6b8(&uStack_18,&lStack_30);
  return uStack_18;
}



/* Entry: 1088aa628; end: 1088aa69f;  */

undefined8 FUN_1088aa628(undefined8 param_1,undefined8 param_2)

{
  FUN_1088aa7cc(param_1,param_2);
  return param_1;
}



/* Entry: 1088aa6a0; end: 1088aa6b7;  */

undefined8 FUN_1088aa6a0(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1088aa6b8; end: 1088aa73b;  */

undefined8 FUN_1088aa6b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1088aa7a8(param_1,param_2);
  return param_1;
}



/* Entry: 1088aa73c; end: 1088aa7a7;  */

undefined1 * FUN_1088aa73c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  puVar1 = &uStack_21;
  uStack_20 = param_1;
  func_0x0001088aa76c(puVar1,param_1);
  return puVar1;
}



/* Entry: 1088aa7a8; end: 1088aa7cb;  */

void FUN_1088aa7a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1088aa7cc; end: 1088aa813;  */

long * FUN_1088aa7cc(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = param_2;
  plStack_28 = param_1;
  FUN_1088aa814();
  puVar1 = &uStack_38;
  uStack_38 = param_2;
  func_0x000108891f5c();
  *param_1 = (long)puVar1;
  return param_1;
}



/* Entry: 1088aa814; end: 1088aa87f;  */

undefined1 * FUN_1088aa814(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  puVar1 = &uStack_21;
  uStack_20 = param_1;
  func_0x0001088aa844(puVar1,param_1);
  return puVar1;
}



/* Entry: 1088aa880; end: 1088aa94b;  */

long FUN_1088aa880(long param_1,undefined8 param_2)

{
  FUN_10889f68c(param_1,0x1088aa8cc);
  func_0x0001088aa910(param_1 + 8,param_2);
  return param_1;
}



/* Entry: 1088aa94c; end: 1088aa973;  */

void FUN_1088aa94c(undefined8 param_1)

{
  FUN_10888ea64(param_1);
  FUN_1088aacb4();
  return;
}



/* Entry: 1088aa974; end: 1088aacb3;  */

void FUN_1088aa974(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined4 uStack_4bc;
  undefined1 auStack_4b8 [80];
  undefined1 auStack_468 [344];
  undefined1 **ppuStack_310;
  undefined1 *puStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  undefined1 auStack_2f0 [448];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [80];
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar7 = param_2[1];
  plStack_60 = param_2;
  uStack_58 = param_1;
  FUN_108885a44(auStack_d8,0x22e);
  FUN_108681bac(auStack_b0,lVar7 + 400,auStack_d8,1,1);
  FUN_108657130(auStack_d8);
  FUN_10889fa84(auStack_100);
  FUN_10889fa84(auStack_118);
  do {
    func_0x000108885a88(lVar7 + 0x180);
    FUN_1088630fc(auStack_2f0);
    FUN_10867b070(auStack_130,auStack_2f0);
    func_0x00010889fab8(auStack_118,auStack_130);
    func_0x00010888e928(auStack_130);
    func_0x00010889faf4(auStack_2f0);
    puVar2 = auStack_118;
    puStack_2f8 = puVar2;
    FUN_108886a54();
    puVar3 = puStack_2f8;
    puStack_300 = puVar2;
    func_0x000108886a98();
    puStack_308 = puVar3;
    while( true ) {
      ppuVar4 = &puStack_300;
      func_0x000108886adc(ppuVar4,&puStack_308);
      if ((((uint)ppuVar4 ^ 1) & 1) == 0) break;
      ppuVar4 = &puStack_300;
      FUN_108886b24();
      ppuStack_310 = ppuVar4;
      FUN_10889fb28(lVar7 + 0x180);
      FUN_1086a125c(auStack_4b8);
      uVar5 = 0;
      FUN_108894134();
      if ((uVar5 & 1) == 0) {
        uStack_4bc = 5;
      }
      else {
        uVar5 = 0;
        FUN_108889770();
        func_0x000108889794();
        FUN_10889fb40();
        if ((uVar5 & 1) == 0) {
          uStack_4bc = 5;
        }
        else {
          puVar2 = auStack_468;
          FUN_108886b3c();
          func_0x000108886b60();
          puStack_4c8 = puVar2;
          FUN_10889fb98(&uStack_4d8,lVar7 + 0x5c);
          FUN_108667ea0(puVar2,lVar7 + 0x10,uStack_4d8,uStack_4d0);
          if (((ulong)puVar2 & 1) == 0) {
            FUN_10889fbd4(auStack_100,auStack_4b8);
            uStack_4bc = 0;
          }
          else {
            uStack_4bc = 5;
          }
        }
      }
      func_0x00010888e95c(auStack_4b8);
      func_0x000108886e20(&puStack_300);
    }
    uVar5 = 0;
    FUN_10889fc00();
    if ((uVar5 & 1) == 0) {
      puVar2 = auStack_118;
      func_0x00010889fc28();
      plVar6 = (long *)(puVar2 + 0x20);
      FUN_10889fc44();
      *param_2 = *plVar6 + 1;
    }
    uVar5 = 0;
    FUN_10889fc00();
    uVar1 = 0;
    if ((uVar5 & 1) != 0) {
      uVar1 = 0;
      FUN_10889fc00();
      uVar1 = uVar1 ^ 1;
    }
  } while ((uVar1 & 1) != 0);
  uVar5 = 0;
  FUN_10889fc00();
  if ((uVar5 & 1) == 0) {
    FUN_10889fc9c(param_1,auStack_100);
  }
  else {
    FUN_10889fc68(param_1);
  }
  uStack_4bc = 1;
  func_0x00010888e928(auStack_118);
  func_0x00010888e928(auStack_100);
  FUN_108681bac(auStack_b0);
  return;
}



/* Entry: 1088aacb4; end: 1088aacdb;  */

void FUN_1088aacb4(long param_1)

{
  FUN_1088aacdc(param_1 + 8);
  return;
}



/* Entry: 1088aacdc; end: 1088aacef;  */

undefined8 FUN_1088aacdc(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088aacf0; end: 1088aadcf;  */

undefined8 FUN_1088aacf0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088aad2c(param_1,param_2);
  return param_1;
}



/* Entry: 1088aadd0; end: 1088aade3;  */

void FUN_1088aadd0(void)

{
  return;
}



/* Entry: 1088aade4; end: 1088aae2f;  */

undefined8 FUN_1088aade4(undefined8 param_1,undefined8 param_2)

{
  FUN_1088aaec0(param_1,&PTR_FUN_110a80440,param_2);
  return param_1;
}



/* Entry: 1088aae30; end: 1088aae63;  */

void FUN_1088aae30(undefined8 param_1)

{
  FUN_1088a04dc(param_1);
  FUN_1088aacb4(param_1);
  return;
}



/* Entry: 1088aae64; end: 1088aaebf;  */

void FUN_1088aae64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1088aacb4(param_2);
  func_0x0001088aad94(param_1,uVar1);
  FUN_1088a056c(param_2,param_1);
  return;
}



/* Entry: 1088aaec0; end: 1088aafc3;  */

long FUN_1088aaec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x0001088a066c(param_1,param_2);
  func_0x0001088aaf20(param_1 + 8,param_3);
  lVar1 = param_1;
  FUN_1088aacb4(param_1);
  func_0x0001088aaf64(param_1,lVar1);
  return param_1;
}



/* Entry: 1088aafc4; end: 1088ab01f;  */

void FUN_1088aafc4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}



/* Entry: 1088ab020; end: 1088ab053;  */

void FUN_1088ab020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c3024c(param_1,param_2,param_3);
  return;
}



/* Entry: 1088ab054; end: 1088ab17f;  */

void FUN_1088ab054(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_2;
  lStack_30 = param_1;
  do {
    uStack_50 = 0;
    uVar1 = param_1 + 0x10;
    func_0x000107c27ff0(uVar1,&uStack_50,1,2);
    if ((uVar1 & 1) != 0) {
      func_0x0001088ab0f8(lStack_48 + 0x98,uStack_40);
      FUN_10889861c(param_1 + 0x10,2,3);
      func_0x000107c31508(param_1,uStack_38);
      return;
    }
  } while (((uint)uStack_50 >> 1 & 1) == 0);
  return;
}



/* Entry: 1088ab180; end: 1088ab1d7;  */

void FUN_1088ab180(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088ab1ac(param_1,param_2);
  return;
}



/* Entry: 1088ab1d8; end: 1088ab287;  */

void FUN_1088ab1d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_2;
  lStack_30 = param_1;
  do {
    uStack_50 = 0;
    uVar1 = param_1 + 0x10;
    func_0x000107c27ff0(uVar1,&uStack_50,1,2);
    if ((uVar1 & 1) != 0) {
      FUN_1088ab288(lStack_48 + 0x98,uStack_40);
      FUN_10889861c(param_1 + 0x10,2,3);
      func_0x000107c31508(param_1,uStack_38);
      return;
    }
  } while (((uint)uStack_50 >> 1 & 1) == 0);
  return;
}



/* Entry: 1088ab288; end: 1088ab30f;  */

void FUN_1088ab288(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a2700(param_1);
  func_0x0001088ab2d0(param_1,param_2);
  FUN_10888e73c(param_1);
  return;
}



/* Entry: 1088ab310; end: 1088ab33b;  */

void FUN_1088ab310(undefined8 param_1,undefined8 param_2)

{
  FUN_1088ab33c(param_1,param_2);
  return;
}



/* Entry: 1088ab33c; end: 1088ab37f;  */

void FUN_1088ab33c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



/* Entry: 1088ab380; end: 1088ab43f;  */

void FUN_1088ab380(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001088ab474(auStack_40);
  FUN_1088ab4b4(auStack_40);
  FUN_1088ab4cc();
  puVar1 = auStack_40;
  FUN_1088ab500();
  puVar2 = puVar1;
  FUN_1088ab598(puVar1);
  FUN_1088ab524(param_1,puVar2,puVar1);
  FUN_1088ab5c0(auStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_28 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_28);
  }
  return;
}



/* Entry: 1088ab440; end: 1088ab4b3;  */

undefined8 FUN_1088ab440(undefined8 param_1)

{
  FUN_1088ad4e4(param_1);
  return param_1;
}



/* Entry: 1088ab4b4; end: 1088ab4cb;  */

undefined8 FUN_1088ab4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1088ab4cc; end: 1088ab4ff;  */

undefined8 FUN_1088ab4cc(undefined8 param_1)

{
  FUN_1088ab7a8(param_1);
  return param_1;
}



/* Entry: 1088ab500; end: 1088ab523;  */

undefined8 FUN_1088ab500(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return uVar1;
}



/* Entry: 1088ab524; end: 1088ab597;  */

/* WARNING: Removing unreachable block (ram,0x0001088ab580) */

void FUN_1088ab524(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1088ad408(param_1);
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_1088ad43c(param_1);
  return;
}



/* Entry: 1088ab598; end: 1088ab5bf;  */

void FUN_1088ab598(long param_1)

{
  func_0x0001088ad468(param_1 + 0x18);
  return;
}



/* Entry: 1088ab5c0; end: 1088ab683;  */

undefined8 FUN_1088ab5c0(undefined8 param_1)

{
  FUN_1088ad47c(param_1);
  return param_1;
}



/* Entry: 1088ab684; end: 1088ab6af;  */

void FUN_1088ab684(undefined8 param_1,undefined8 param_2)

{
  FUN_1088ab6fc(param_1,param_2);
  return;
}



/* Entry: 1088ab6b0; end: 1088ab6e7;  */

undefined8 FUN_1088ab6b0(undefined8 param_1)

{
  FUN_1088ab6e8(param_1);
  return param_1;
}



/* Entry: 1088ab6e8; end: 1088ab6fb;  */

undefined8 FUN_1088ab6e8(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088ab6fc; end: 1088ab743;  */

void FUN_1088ab6fc(ulong param_1,ulong param_2)

{
  FUN_1088ab744();
  if (param_1 < param_2) {
    func_0x000104bd35f4();
  }
  func_0x0001088ab76c(param_2);
  return;
}



/* Entry: 1088ab744; end: 1088ab7a7;  */

ulong FUN_1088ab744(ulong param_1)

{
  FUN_10888fbcc();
  return param_1 / 0x30;
}



/* Entry: 1088ab7a8; end: 1088ab84b;  */

undefined8 * FUN_1088ab7a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_3d [13];
  undefined8 *puStack_30;
  undefined1 uStack_21;
  
  puStack_30 = param_1;
  FUN_10889a90c(param_1,0);
  *param_1 = &PTR_DAT_110a80468;
  FUN_1088ab84c(param_1 + 3,&uStack_21);
  FUN_1088ab888(param_1);
  puVar1 = param_1;
  FUN_1088ab598(param_1);
  func_0x0001088ab8b0(auStack_3d,puVar1);
  return param_1;
}



/* Entry: 1088ab84c; end: 1088ab887;  */

undefined8 FUN_1088ab84c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088ab9f8(param_1,param_2);
  return param_1;
}



/* Entry: 1088ab888; end: 1088ab8d7;  */

void FUN_1088ab888(long param_1)

{
  FUN_1088aba30(param_1 + 0x18);
  return;
}



/* Entry: 1088ab8d8; end: 1088ab977;  */

undefined8 FUN_1088ab8d8(undefined8 param_1)

{
  func_0x0001088ad22c(param_1);
  return param_1;
}



/* Entry: 1088ab978; end: 1088ab99b;  */

void FUN_1088ab978(undefined8 param_1)

{
  FUN_1088ad2b0(param_1);
  return;
}



/* Entry: 1088ab99c; end: 1088aba2f;  */

void FUN_1088ab99c(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long lStack_28;
  
  lVar1 = param_1;
  lStack_28 = param_1;
  FUN_1088ab888(param_1);
  func_0x0001088ab648(&uStack_29,lVar1);
  FUN_1088ab8d8(param_1 + 0x18);
  FUN_1088ad384(param_1);
  func_0x0001088ad350(&uStack_29,param_1,1);
  return;
}



/* Entry: 1088aba30; end: 1088aba43;  */

undefined8 FUN_1088aba30(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088aba44; end: 1088aba67;  */

void FUN_1088aba44(undefined8 param_1)

{
  FUN_1088aba68(param_1);
  return;
}



/* Entry: 1088aba68; end: 1088abadb;  */

void FUN_1088aba68(undefined8 param_1)

{
  _memset(param_1,0,0x18);
  func_0x0001088abaa8(param_1);
  return;
}



/* Entry: 1088abadc; end: 1088abb47;  */

undefined8 * FUN_1088abadc(undefined8 *param_1)

{
  FUN_1088abb48(param_1);
  FUN_1088abb70(param_1 + 1);
  *param_1 = &PTR_FUN_110a804b8;
  return param_1;
}



/* Entry: 1088abb48; end: 1088abb6f;  */

void FUN_1088abb48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5fb10;
  return;
}



/* Entry: 1088abb70; end: 1088abbf7;  */

long FUN_1088abb70(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = param_1;
  FUN_1088abd48(param_1);
  func_0x0001088abd7c(param_1 + 8);
  FUN_1088abdb0(auStack_48);
  lVar2 = param_1 + 8;
  lVar1 = param_1;
  FUN_1088abe40();
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  func_0x0001088abe78(&lStack_58,auStack_48);
  FUN_1088abea4(auStack_48);
  return param_1;
}



/* Entry: 1088abbf8; end: 1088abc0b;  */

undefined8 FUN_1088abbf8(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088abc0c; end: 1088abc77;  */

undefined8 FUN_1088abc0c(undefined8 param_1)

{
  func_0x0001088acc68(param_1);
  return param_1;
}



/* Entry: 1088abc78; end: 1088abce3;  */

void FUN_1088abc78(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [64];
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = param_2;
  lStack_28 = param_1;
  FUN_1088acd0c(auStack_70,param_2);
  FUN_1088acce0(param_1 + 8,auStack_70);
  FUN_1088a95ac(auStack_70);
  return;
}



/* Entry: 1088abce4; end: 1088abd47;  */

void FUN_1088abce4(long param_1)

{
  undefined1 auStack_68 [64];
  long lStack_28;
  
  lStack_28 = param_1;
  func_0x0001088ad0f4(auStack_68);
  FUN_1088acce0(param_1 + 8,auStack_68);
  FUN_1088a95ac(auStack_68);
  return;
}


