/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1a8e8c; end: 10b1a94ef;  */

void FUN_10b1a8e8c(long param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x9;
  code *extraout_x9_00;
  ulong extraout_x9_01;
  int extraout_w10;
  long unaff_x19;
  undefined8 ***pppuVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  undefined8 ***unaff_x30;
  undefined8 *apuStack_2a8 [3];
  undefined8 **ppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined1 uStack_270;
  undefined1 auStack_258 [32];
  undefined1 uStack_238;
  undefined1 uStack_230;
  undefined1 uStack_208;
  undefined1 uStack_200;
  undefined1 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_d8;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined8 uStack_10;
  
  func_0x00010b1aac94();
  func_0x00010b1aa2b8();
  pppuVar2 = (undefined8 ***)(param_1 + 0x708);
  pppuVar6 = (undefined8 ***)0x1008;
  lVar8 = 0x1280;
  pppuVar7 = (undefined8 ***)0x13a8;
  uStack_10 = extraout_x8;
  FUN_10b1a0a70(param_1 + 0x90,pppuVar2);
  func_0x00010b1aab48();
  func_0x00010b1aa98c();
  func_0x00010b1aa8dc();
  FUN_10b24f5cc(unaff_x19 + 0x1280);
  func_0x00010b121af0(unaff_x19 + 0x1008);
  func_0x00010b1257d4(unaff_x19 + 0x13a8);
  func_0x00010b11fabc(unaff_x19 + 0x13b8,unaff_x19 + 5000);
  if (*(long *)(unaff_x19 + 0x13b8) == 0) {
    func_0x00010b1aabd4();
    func_0x00010b1aaaa8();
    func_0x00010b1aabc0();
    func_0x00010b1aa508();
    func_0x00010b1aa4a8();
    func_0x00010b1aa2cc();
    func_0x00010b1aa434();
    pppuVar6 = &ppuStack_290;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
      func_0x00010b1aabb4();
    } while (!(bool)in_ZR);
LAB_10b1a9200:
    func_0x00010b1aa4ec();
  }
  else {
    if ((*(byte *)(unaff_x19 + 0x700) & 1) == 0) {
      pppuVar6 = *(undefined8 ****)(unaff_x19 + 0x90);
      *(undefined8 ****)(unaff_x19 + 0x708) = pppuVar6;
      *(long *)(unaff_x19 + 0x710) = *(long *)(unaff_x19 + 0x98);
      if (*(long *)(unaff_x19 + 0x98) != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10 != 0);
      }
      if (pppuVar6 == (undefined8 ***)0x0) {
        func_0x00010b1aabd4();
        func_0x00010b1aaaa8();
        func_0x00010b1aa5f0();
        func_0x00010b1aa4a8();
        func_0x00010b1aa2cc();
        func_0x00010b1aa434();
        pppuVar7 = &ppuStack_290;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
          func_0x00010b1aabb4();
        } while (!(bool)in_ZR);
        FUN_10b19af84(&ppuStack_290,*(undefined8 *)(unaff_x19 + 0x13b8));
        func_0x00010b1aaf18();
        func_0x00010b1aaf10();
        FUN_10b122f98(&ppuStack_290);
        iVar3 = 0;
      }
      else {
        func_0x00010b1aabe0();
        func_0x00010b1aa880();
        func_0x00010b1aab80();
        func_0x00010b1aaf40(&ppuStack_290);
        func_0x00010b1aa6a8();
        func_0x00010b1aa6e4();
        func_0x00010b1aa9a4();
        func_0x00010b1aa468();
        iVar3 = 3;
      }
      func_0x00010b1aab40();
      if (pppuVar6 != (undefined8 ***)0x0) goto LAB_10b1a9208;
      goto LAB_10b1a9200;
    }
    lVar8 = 0x13d8;
    FUN_10b19af84(unaff_x19 + 0x13d8,*(undefined8 *)(unaff_x19 + 0x13f8));
    lVar4 = *(long *)(unaff_x19 + 0x13f8);
    __ZNSt3__15mutex4lockEv(lVar4 + 0x548);
    func_0x00010b1aa8c0();
    func_0x00010b1aafbc();
    func_0x00010b1aa96c();
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    ppuStack_290 = (undefined8 ***)0x0;
    uStack_278 = uStack_278 & 0xffffffffffffff00;
    func_0x00010b1aa40c(&ppuStack_290);
    unaff_x30 = &ppuStack_290;
    FUN_10b1151e4(lVar4 + 0xf0);
    puVar5 = *(undefined8 **)(unaff_x19 + 0x13f8);
    pppuVar7 = &ppuStack_290;
    func_0x00010b121af0();
    func_0x00010b1aa8a4();
    if ((*(byte *)(unaff_x19 + 0xe00) & 1) == 0) {
      func_0x00010b1aabd4();
      func_0x00010b1aaaa8();
      func_0x00010b1aabc0();
      func_0x00010b1aa508();
      func_0x00010b1aa4a8();
      func_0x00010b1aa2cc();
      pppuVar6 = (undefined8 ***)(unaff_x19 + 0x1370);
      func_0x00010b1aa434();
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
        func_0x00010b1aabb4();
      } while (!(bool)in_ZR);
      func_0x00010b1aa928();
      func_0x000107c278b8(pppuVar6);
      unaff_x30 = (undefined8 ***)&UNK_10f7312f5;
      func_0x00010b139e90(unaff_x19 + 0x1320);
      uStack_288 = *(undefined8 *)(unaff_x19 + 0x1378);
      ppuStack_290 = *pppuVar6;
      func_0x00010b1ab0f0();
      uStack_270 = 0;
      auStack_258[0] = 0;
      uStack_280 = extraout_x8_00;
      uStack_278 = extraout_x9_01;
      if (*(char *)(param_1 + 0x1338) == '\x01') {
        func_0x00010b1aa908(&ppuStack_290);
        auStack_258[0] = extraout_w8;
      }
      func_0x00010b1aa6a8();
      func_0x00010b1aa6e4();
      func_0x00010b1aab70();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar6);
    }
    else {
      func_0x00010b1aa94c();
      if (pppuVar7 != (undefined8 ***)0x0) {
        func_0x00010b1aad3c();
        (*extraout_x9)(apuStack_2a8);
        func_0x00010b1aad3c(*puVar5);
        (*extraout_x9_00)(&ppuStack_290);
        pppuVar6 = (undefined8 ***)apuStack_2a8;
        unaff_x30 = &ppuStack_290;
        func_0x000107c278d0();
        func_0x00010b1aa850();
        func_0x00010b1aaa10();
        if ((int)pppuVar6 != 0) {
          pppuVar6 = *(undefined8 ****)(unaff_x19 + 0x1398);
          func_0x00010b1aaaa8();
          func_0x00010b1aa5a4(apuStack_2a8,&ppuStack_290);
          unaff_x30 = (undefined8 ***)0xbb;
          func_0x00010b1aa470(pppuVar6,0xbb,apuStack_2a8);
          func_0x00010b1aa434();
          func_0x00010b1aa454(&ppuStack_290);
        }
      }
      func_0x00010b1aaf70(*(undefined8 *)(unaff_x19 + 0x13f8));
      func_0x00010b1aa7a0();
      FUN_10b1a0b4c(&ppuStack_290);
      func_0x00010b1aa6a8();
      func_0x00010b1aa6e4();
      func_0x00010b1aabcc();
    }
    pppuVar7 = (undefined8 ***)0x1358;
    func_0x00010b1aac18();
    FUN_10b125534(unaff_x19 + 0x1358);
    func_0x00010b1aab68();
    func_0x00010b1aac8c();
  }
  iVar3 = 3;
LAB_10b1a9208:
  func_0x00010b1aab24();
  func_0x00010b1aaa00();
  func_0x00010b12487c(unaff_x19 + 0x1398);
  func_0x00010b1aac10();
  uVar1 = iVar3 == 3;
  if (!(bool)uVar1) goto LAB_10b1a9260;
  while( true ) {
    func_0x00010b1aa598();
    *(undefined1 *)((long)pppuVar2 + 0xcfc) = extraout_w8_00;
    func_0x00010b1aa66c();
    if ((bool)uVar1) {
      ppuStack_290 = unaff_x30;
      func_0x00010b1ab08c();
      FUN_10b14bca0();
    }
    else {
      pppuVar2 = (undefined8 ***)apuStack_2a8;
      __ZNSt13exception_ptrC1ERKS_(apuStack_2a8);
      ppuStack_290 = pppuVar2;
      func_0x00010b1ab08c();
      FUN_10b14bb60();
      func_0x00010b1aa5d8();
    }
LAB_10b1a9260:
    func_0x00010b1aa5c0();
    func_0x00010b1aa42c();
    func_0x00010b1aa28c(uStack_10);
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    if ((int)unaff_x30 == 0) {
      do {
        func_0x00010b1aa5e8();
        func_0x00010b1aaf4c();
      } while ((int)unaff_x30 == 0);
      func_0x00010b1aab48();
      func_0x00010b1aa98c();
      func_0x00010b1aa8dc();
      FUN_10b24f5cc(unaff_x19 + lVar8);
      func_0x00010b121af0(unaff_x19 + (long)pppuVar6);
      func_0x00010b1257d4(unaff_x19 + (long)pppuVar7);
    }
    else {
      func_0x00010b1aa434();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_280);
      func_0x00010b1aac18();
      FUN_10b125534(unaff_x19 + 0x1358);
      func_0x00010b1aab68();
      func_0x00010b1aac8c();
      func_0x00010b1aab24();
      func_0x00010b1aaa00();
    }
    func_0x00010b12487c(unaff_x19 + 0x1398);
    func_0x00010b1aac10();
    func_0x00010b1aa878();
    func_0x00010b1aaa48();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10b1a94f0; end: 10b1a958b;  */

void FUN_10b1a94f0(long param_1)

{
  if ((*(byte *)(param_1 + 0x1404) & 1) == 0) {
    func_0x00010b1960f8(param_1 + 0x708);
    FUN_10b125534(param_1 + 0x1340);
    func_0x00010b1aa8dc();
    FUN_10b24f5cc(param_1 + 0x1280);
    func_0x00010b121af0(param_1 + 0x1008);
    func_0x00010b1257d4(param_1 + 0x13a8);
    func_0x00010b12487c(param_1 + 0x1398);
    func_0x00010b124c0c(param_1 + 5000);
  }
  func_0x00010b1aa5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1a958c; end: 10b1a9677;  */

void FUN_10b1a958c(long param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  FUN_10b1a533c(uVar1);
  FUN_10b1a5388(param_1 + 0x38,uVar1);
  FUN_10b1a3de8((undefined8 *)(param_1 + 0x68));
  func_0x00010b1aa598();
  *(undefined1 *)(param_1 + 0x78) = extraout_w8;
  puStack_38 = (undefined1 *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x00010b1aad18();
    func_0x0001052b80c8();
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_40);
    puStack_38 = auStack_40;
    func_0x00010b1aad18();
    func_0x0001052b7f08();
    __ZNSt13exception_ptrD1Ev(auStack_40);
  }
  FUN_10b1a53e0(param_1 + 0x10);
  func_0x00010b1aa42c();
  return;
}



/* Entry: 10b1a9678; end: 10b1a96a3;  */

void FUN_10b1a9678(long param_1)

{
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    func_0x00010b1aaf20();
  }
  func_0x00010b1aae80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1a96a4; end: 10b1a982b;  */

void FUN_10b1a96a4(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  code **ppcVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_38;
  
  func_0x00010b1aa2b8();
  uStack_38 = extraout_x8;
  FUN_10b12d0d0(param_1 + 0x80);
  func_0x00010b1aae18();
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x70);
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  uVar4 = *(undefined8 *)(unaff_x19 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10_00 != 0);
  }
  pcStack_98 = FUN_10b1a5b28;
  ppuStack_90 = &PTR_FUN_110cc2ad8;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = uVar3;
  uStack_80 = uVar4;
  func_0x00010b1aa6d0();
  (*extraout_x8_00)();
  func_0x00010b1aa384();
  func_0x00010b1aaa08();
  func_0x00010b1aa9f8();
  func_0x00010b1aa6b4();
  func_0x00010b1aa840();
  while( true ) {
    func_0x00010b1aa598();
    *(undefined1 *)(unaff_x19 + 0xa0) = extraout_w8;
    func_0x00010b1aa9ec();
    if ((bool)in_ZR) {
      uStack_a8 = CONCAT71(uStack_a8._1_7_,extraout_w8_00);
      pcStack_98 = (code *)&uStack_a8;
      ppcVar2 = &pcStack_98;
      func_0x000107c27b6c(unaff_x19 + 0x10);
    }
    else {
      func_0x00010b1aa67c(&uStack_a8);
      ppcVar2 = &pcStack_98;
      pcStack_98 = (code *)&uStack_a8;
      func_0x000104bf33ec(unaff_x19 + 0x10);
      func_0x00010b1aa5d8();
    }
    func_0x00010b1aa4d4();
    lVar1 = unaff_x19 + 0x50;
    FUN_10b19c1ec(lVar1);
    func_0x00010b1aa42c();
    func_0x00010b1aa28c(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)ppcVar2 == 0) {
      do {
        func_0x00010b1aa424();
        func_0x000104bd46a0(lVar1);
      } while ((int)ppcVar2 == 0);
      func_0x00010b1aae18();
    }
    func_0x00010b1aa840();
    func_0x00010b1aab60();
    func_0x00010b1aa6dc();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10b1a982c; end: 10b1a9863;  */

void FUN_10b1a982c(long param_1)

{
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    func_0x00010b1aae18();
    func_0x00010b1aa840();
  }
  func_0x00010b1aa4d4();
  FUN_10b19c1ec(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1a9864; end: 10b1a9a47;  */

void FUN_10b1a9864(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 extraout_w8;
  int extraout_w10;
  undefined8 *puVar6;
  undefined1 auStack_48 [8];
  
  FUN_10b12d0d0(param_1 + 0xb0);
  func_0x00010b1aae10();
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x108);
  *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x110);
  if (*(long *)(param_1 + 0x110) != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  func_0x00010b11fabc(param_1 + 0xf8,param_1 + 0x68);
  lVar5 = param_1 + 0x118;
  func_0x00010b1a614c(lVar5);
  func_0x0001052a06f8(param_1 + 0xb0,lVar5);
  puVar6 = *(undefined8 **)(param_1 + 0x50);
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  do {
    uVar4 = puVar6 == puVar1;
    if ((bool)uVar4) {
      if ((*(long *)(param_1 + 0xf8) != 0) && ((*(byte *)(param_1 + 0xf0) & 1) == 0)) {
        func_0x00010b1aabe0();
        FUN_10b1a15e4(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8));
        func_0x00010b1aa468();
      }
      func_0x0001052a038c(param_1 + 0xb0);
      func_0x00010b1aab14();
      func_0x00010b1aab2c();
      func_0x00010b1aa6b4();
      func_0x00010b1aae08();
      func_0x00010b1aa598();
      *(undefined1 *)(param_1 + 0x128) = extraout_w8;
      func_0x00010b1aa9ec();
      if ((bool)uVar4) {
        func_0x00010b1ab098();
        func_0x000107c27b6c();
      }
      else {
        func_0x00010b1aa67c(auStack_48);
        func_0x00010b1ab098();
        func_0x000104bf33ec();
        func_0x00010b1aab9c();
      }
      func_0x00010b1aa4d4();
      FUN_10b1a15b4(param_1 + 0x50);
      func_0x00010b1aa42c();
      return;
    }
    if (*(char *)(param_1 + 0xf0) == '\x01') {
      if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
        func_0x000104bdc2c8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1a99cc);
        (*pcVar3)();
      }
      uVar2 = *(undefined4 *)(param_1 + 200);
      lVar5 = param_1 + 0xd0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x78);
      lVar5 = param_1 + 0x80;
    }
    (**(code **)(*(long *)*puVar6 + 0x18))
              ((long *)*puVar6,uVar2,lVar5,(ulong)*(uint *)(param_1 + 0x98) | 0x100000000);
    puVar6 = puVar6 + 2;
  } while( true );
}



/* Entry: 10b1a9a48; end: 10b1a9a7f;  */

void FUN_10b1a9a48(long param_1)

{
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    func_0x00010b1aae10();
    func_0x00010b1aae08();
  }
  func_0x00010b1aa4d4();
  FUN_10b1a15b4(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1a9a80; end: 10b1a9ca3;  */

void FUN_10b1a9a80(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  undefined4 uVar3;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar4;
  long *plVar5;
  undefined1 *apuStack_50 [3];
  undefined1 auStack_38 [8];
  
  FUN_10b12d0d0(param_1 + 0xa8);
  func_0x00010b1aade8();
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x100);
  if (*(long *)(param_1 + 0x108) != 0) {
    do {
      func_0x00010b1aa2e0();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_1 + 0x110;
  func_0x00010b1a614c(lVar4);
  func_0x0001052a06f8(param_1 + 0xa8,lVar4);
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    lVar4 = *(long *)(param_1 + 0xc0);
    uVar2 = lVar4 == 9;
    if ((bool)uVar2) {
LAB_10b1a9b7c:
      func_0x00010b1aad84();
      if (extraout_x8 != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b1aabe8(*(undefined1 *)(param_1 + 0xa0));
      func_0x00010b1aab00();
      goto LAB_10b1a9ba4;
    }
    plVar5 = *(long **)(param_1 + 0x68);
    func_0x000104bff97c(apuStack_50,param_1 + 200,"");
    func_0x00010b1aa8b8(*(undefined8 *)(*plVar5 + 0x18),plVar5,lVar4,apuStack_50);
  }
  else {
    uVar2 = *(char *)(param_1 + 100) == '\x01';
    if (!(bool)uVar2) goto LAB_10b1a9b7c;
    iVar1 = *(int *)(param_1 + 0x60);
    plVar5 = *(long **)(param_1 + 0x68);
    func_0x000107c278b8(apuStack_50,&UNK_10f731696);
    uVar3 = 2;
    if (iVar1 != 0x194) {
      uVar3 = 0;
    }
    uVar2 = iVar1 == 0x193;
    if ((bool)uVar2) {
      uVar3 = 1;
    }
    (**(code **)(*plVar5 + 0x18))
              (plVar5,uVar3,apuStack_50,(ulong)*(uint *)(param_1 + 0x60) | 0x100000000);
  }
  func_0x00010b1aadb4();
LAB_10b1a9ba4:
  func_0x0001052a038c(param_1 + 0xa8);
  func_0x00010b1aac20();
  func_0x00010b1aa6b4();
  func_0x00010b1aa900();
  func_0x00010b1aa598();
  *(undefined1 *)(param_1 + 0x120) = extraout_w8;
  func_0x00010b1aa9ec();
  if ((bool)uVar2) {
    apuStack_50[0] = auStack_38;
    func_0x000107c27b6c(param_1 + 0x10,apuStack_50);
  }
  else {
    func_0x00010b1aa67c(auStack_38);
    apuStack_50[0] = auStack_38;
    func_0x000104bf33ec(param_1 + 0x10,apuStack_50);
    __ZNSt13exception_ptrD1Ev(auStack_38);
  }
  func_0x00010b1aa4d4();
  FUN_10b19e5b8(param_1 + 0x50);
  func_0x00010b1aa42c();
  return;
}



/* Entry: 10b1a9ca4; end: 10b1a9cdb;  */

void FUN_10b1a9ca4(long param_1)

{
  if ((*(byte *)(param_1 + 0x120) & 1) == 0) {
    func_0x00010b1aade8();
    func_0x00010b1aa900();
  }
  func_0x00010b1aa4d4();
  FUN_10b19e5b8(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1a9cdc; end: 10b1aa223;  */

void FUN_10b1a9cdc(code ***param_1,code ****param_2)

{
  code ***pppcVar1;
  bool bVar2;
  undefined1 uVar3;
  code ***pppcVar4;
  long lVar5;
  code ***pppcVar6;
  undefined1 *puVar7;
  code ****ppppcVar8;
  undefined8 extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x19;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auStack_2f8 [40];
  code **ppcStack_2d0;
  code ***pppcStack_2c8;
  code **ppcStack_2c0;
  long alStack_2b8 [2];
  undefined1 uStack_2a8;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [32];
  undefined1 uStack_268;
  undefined1 uStack_260;
  undefined1 uStack_238;
  undefined1 uStack_230;
  undefined1 uStack_190;
  undefined1 uStack_188;
  undefined1 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_108;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  undefined8 uStack_48;
  
  ppppcVar8 = (code ****)&stack0xfffffffffffffcf0;
  func_0x00010b1aa2b8();
  pppcVar1 = param_1 + 0x73;
  pppcVar6 = param_1 + 0x7a;
  pppcVar4 = param_1;
  uStack_48 = extraout_x8;
  if (*(char *)(param_1 + 0x7e) != '\x02') {
    uVar3 = *(char *)(param_1 + 0x7e) == '\x01';
    if ((bool)uVar3) {
LAB_10b1a9d18:
      func_0x000105c40888(unaff_x19 + 0x350,pppcVar1);
      param_2 = (code ****)(unaff_x19 + 0x350);
      FUN_10b16a20c(unaff_x19 + 0x38);
      pppcVar4 = (code ***)(unaff_x19 + 0x350);
      func_0x0001052a038c(pppcVar4);
      func_0x00010b1aab50();
LAB_10b1a9d3c:
      bVar2 = false;
      iVar9 = 3;
    }
    else {
      pppcVar4 = (code ***)(unaff_x19 + 0x350);
      func_0x000105c40888(unaff_x19 + 0x308,pppcVar4);
      func_0x00010b1aadbc();
      if (*(char *)(unaff_x19 + 0x348) == '\x01') {
        uVar3 = *(int *)(unaff_x19 + 800) == 9;
        if ((bool)uVar3) {
          param_2 = *(code *****)(unaff_x19 + 1000);
          FUN_10b1a241c(pppcVar1,*(undefined8 *)(unaff_x19 + 0x3e0));
          pppcVar4 = pppcVar1;
          func_0x000105c417a8();
          if (((ulong)pppcVar4 & 1) == 0) {
            *(undefined1 *)(param_1 + 0x7e) = 1;
            func_0x00010b1ab0b8(&ppcStack_2c0);
            func_0x000105c41834();
            unaff_x19 = alStack_2b8[0];
            if (alStack_2b8[0] == 0) goto LAB_10b1a9fb4;
            do {
              func_0x00010b1aa374();
              lVar10 = extraout_x9;
            } while (extraout_w11 != 0);
            goto LAB_10b1a9ffc;
          }
          goto LAB_10b1a9d18;
        }
        uVar3 = false;
        if (*(char *)(*(long *)(unaff_x19 + 0x3e0) + 0x6f0) == '\x01') {
          uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x3e0) + 0xc0);
          FUN_10b12983c(&ppcStack_2c0,*(undefined4 *)(unaff_x19 + 0xa8));
          func_0x00010b1ab144();
          FUN_10b123d58(auStack_298,"code",4);
          param_2 = (code ****)&ppcStack_2c0;
          func_0x00010b120648(&stack0xfffffffffffffcf0,param_2,2);
          func_0x00010b1aa344(uVar12);
          func_0x00010b1aa754();
          lVar10 = 0x38;
          do {
            pppcVar4 = (code ***)((long)&ppcStack_2c0 + lVar10);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppcVar4);
            lVar10 = lVar10 + -0x28;
            uVar3 = lVar10 == -0x18;
          } while (!(bool)uVar3);
        }
        func_0x00010b1aa49c();
        goto LAB_10b1a9d3c;
      }
      lVar5 = *(long *)(unaff_x19 + 0x3e0);
      uVar3 = *(char *)(lVar5 + 0x6f0) == '\x01';
      lVar10 = lVar5;
      if ((bool)uVar3) {
        func_0x00010b1aaf88();
        lVar10 = *(long *)(unaff_x19 + 0x3e0);
        if ((int)lVar5 != 0) {
          uVar12 = *(undefined8 *)(lVar10 + 0xc0);
          FUN_10b12983c(&ppcStack_2c0,*(undefined4 *)(unaff_x19 + 0xa8));
          func_0x00010b1aa5a4(&stack0xfffffffffffffcf0,&ppcStack_2c0);
          param_2 = (code ****)0xbe;
          func_0x00010b1aa470(uVar12,0xbe,&stack0xfffffffffffffcf0);
          func_0x00010b1aa754();
          func_0x00010b1aa454(&ppcStack_2c0);
          lVar10 = *(long *)(unaff_x19 + 0x3e0);
        }
      }
      FUN_10b19af84(&ppcStack_2c0,lVar10);
      FUN_10b19af40(*(undefined8 *)(unaff_x19 + 0x3e0));
      pppcVar4 = &ppcStack_2c0;
      FUN_10b122f98(pppcVar4);
      iVar9 = 0;
      bVar2 = true;
    }
    func_0x00010b1aa5ac();
    if (!bVar2) goto LAB_10b1a9f58;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_fe = 0;
    alStack_2b8[0] = 0;
    alStack_2b8[1] = 0;
    ppcStack_2c0 = (code **)0x0;
    uStack_2a8 = 0;
    func_0x00010b1aa40c(&ppcStack_2c0);
    FUN_10b1151e4(unaff_x19 + 0x90,&ppcStack_2c0);
    lVar10 = *(long *)(unaff_x19 + 0x3e0);
    func_0x00010b121af0(&ppcStack_2c0);
    *(long *)(unaff_x19 + 0x398) = lVar10;
    FUN_10b1a6110((undefined8 *)(unaff_x19 + 0x3a0),*(undefined8 *)(lVar10 + 8),
                  *(undefined8 *)(lVar10 + 0x10));
    plVar11 = *(long **)(*(long *)(unaff_x19 + 0x3e0) + 0x440);
    FUN_10b14b870(unaff_x19 + 0x350);
    FUN_10b14b830(pppcVar6,unaff_x19 + 0x350);
    *(undefined8 *)(unaff_x19 + 0x3a0) = 0;
    *(undefined8 *)(unaff_x19 + 0x3a8) = 0;
    FUN_10b14bbfc(auStack_2f8,unaff_x19 + 0x350);
    ppcStack_2c0 = (code **)FUN_10b1a4c50;
    FUN_10b1a4ec0(alStack_2b8,&stack0xfffffffffffffcf0);
    param_2 = (code ****)&ppcStack_2c0;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x00010b1aa400(alStack_2b8[0]);
    FUN_10b1a4c28(&stack0xfffffffffffffcf0);
    FUN_10b14bab0(unaff_x19 + 0x350);
    pppcVar4 = pppcVar6;
    func_0x000105c417a8();
    if (((ulong)pppcVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x7e) = 2;
      func_0x000105c41834(&ppcStack_2c0,pppcVar6);
      unaff_x19 = alStack_2b8[0];
      pppcVar4 = pppcVar6;
      param_2 = ppppcVar8;
      if (alStack_2b8[0] == 0) goto LAB_10b1a9fb4;
      do {
        func_0x00010b1aa374();
        lVar10 = extraout_x9_00;
      } while (extraout_w11_00 != 0);
LAB_10b1a9ffc:
      if (lVar10 != 0) goto LAB_10b1a9fb4;
      func_0x00010b1aa310();
      func_0x00010b1aa774();
      goto LAB_10b1a9fb4;
    }
  }
  func_0x00010b1aafc8();
  func_0x00010b1aa49c();
  func_0x00010b1aa5ac();
  func_0x00010b1aa718();
  func_0x00010b1aae98();
  iVar9 = 3;
LAB_10b1a9f58:
  func_0x00010b1aa870();
  func_0x00010b1aa6c8();
  uVar3 = iVar9 == 3;
  ppppcVar8 = param_2;
  if (!(bool)uVar3) goto LAB_10b1a9fac;
  while( true ) {
    func_0x00010b1aacbc();
    func_0x00010b1aa66c();
    if ((bool)uVar3) {
      pppcVar4 = (code ***)(unaff_x19 + 0x10);
      ppppcVar8 = &pppcStack_2c8;
      pppcStack_2c8 = (code ***)param_2;
      FUN_10b14bca0(pppcVar4);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&ppcStack_2d0);
      ppppcVar8 = &pppcStack_2c8;
      pppcStack_2c8 = &ppcStack_2d0;
      FUN_10b14bb60(unaff_x19 + 0x10);
      pppcVar4 = &ppcStack_2d0;
      __ZNSt13exception_ptrD1Ev(pppcVar4);
    }
LAB_10b1a9fac:
    func_0x00010b1aa5c0();
    func_0x00010b1aa42c();
    param_2 = ppppcVar8;
LAB_10b1a9fb4:
    func_0x00010b1aa28c(uStack_48);
    if ((bool)uVar3) break;
    ___stack_chk_fail();
    if ((int)param_2 == 0) {
      do {
        __Unwind_Resume(pppcVar4);
        func_0x000104bd46a0();
      } while ((int)param_2 == 0);
      func_0x00010b1aa5ac();
      func_0x00010b1aa718();
      func_0x00010b1aae98();
    }
    else {
      func_0x00010b1aa754();
      puVar7 = auStack_288;
      lVar10 = -0x50;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
        puVar7 = puVar7 + -0x28;
        lVar10 = lVar10 + 0x28;
        uVar3 = lVar10 == 0;
      } while (!(bool)uVar3);
      func_0x00010b1aa5ac();
    }
    func_0x00010b1aa870();
    func_0x00010b1aa6c8();
    func_0x00010b1aaed8();
    func_0x00010b1aaa48();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10b1aa224; end: 10b1aa28b;  */

code * FUN_10b1aa224(code *param_1,long param_2)

{
  bool bVar1;
  code *pcVar2;
  int extraout_w8;
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined1 auStack_e0 [160];
  
  UNRECOVERED_JUMPTABLE = (code *)(ulong)(byte)param_1[0x3f0];
  switch(param_1[0x3f0]) {
  case (code)0x0:
  case (code)0x32:
  case (code)0x84:
  case (code)0xdc:
    func_0x00010b1aadbc();
    break;
  case (code)0x1:
    func_0x0001052a55c0(param_1 + 0x398);
    func_0x00010b1aa5ac();
    break;
  case (code)0x2:
    func_0x0001052a55c0(param_1 + 0x3d0);
    func_0x00010b1aae98();
    break;
  case (code)0x3:
    goto code_r0x00010b1aa27c;
  case (code)0x4:
  case (code)0x33:
  case (code)0x54:
  case (code)0x85:
  case (code)0xab:
  case (code)0xdd:
  case (code)0xf6:
    UNRECOVERED_JUMPTABLE = *(code **)UNRECOVERED_JUMPTABLE;
  case (code)0xf9:
    pcVar2 = (code *)(unaff_x21 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010b1aa390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pcVar2);
    return pcVar2;
  case (code)0x5:
  case (code)0x55:
  case (code)0x86:
  case (code)0xde:
    return param_1;
  case (code)0x8:
  case (code)0x15:
  case (code)0x17:
  case (code)0x1e:
  case (code)0x2d:
  case (code)0x3e:
  case (code)0x45:
  case (code)0x58:
  case (code)0x65:
  case (code)0x67:
  case (code)0x6e:
  case (code)0x7d:
  case (code)0x89:
  case (code)0x96:
  case (code)0x98:
  case (code)0xa4:
  case (code)0xb2:
  case (code)0xc1:
  case (code)0xd0:
  case (code)0xd4:
  case (code)0xe1:
  case (code)0xee:
  case (code)0xf0:
  case (code)0xfe:
    return param_1;
  case (code)0xb:
  case (code)0x5b:
  case (code)0x8c:
  case (code)0xe4:
    return param_1;
  case (code)0xd:
  case (code)0x23:
  case (code)0x4c:
  case (code)0x5d:
  case (code)0x73:
  case (code)0x8e:
  case (code)0xb7:
  case (code)0xe6:
  case (code)0xf7:
    param_1 = UNRECOVERED_JUMPTABLE + 0x1c8;
  case (code)0x9:
  case (code)0x59:
  case (code)0x8a:
  case (code)0xd5:
  case (code)0xd6:
  case (code)0xe2:
  case (code)0xff:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_1,0xb0);
    return param_1;
  default:
    return param_1;
  case (code)0x13:
  case (code)0x37:
  case (code)0x38:
  case (code)0x42:
  case (code)0x49:
  case (code)0x4e:
  case (code)0x63:
  case (code)0x94:
  case (code)0xae:
  case (code)0xec:
    func_0x00010b135850();
    if (extraout_w8 == 1) {
      __ZNSt3__121recursive_timed_mutex6unlockEv(*(ulong *)param_1);
    }
    return param_1;
  case (code)0x18:
  case (code)0x20:
  case (code)0x68:
  case (code)0x70:
  case (code)0x99:
  case (code)0xb4:
  case (code)0xf1:
    return param_1;
  case (code)0x1a:
  case (code)0x2b:
  case (code)0x30:
  case (code)0x46:
  case (code)0x4b:
  case (code)0x6a:
  case (code)0x7b:
  case (code)0x80:
  case (code)0x9b:
  case (code)0xa2:
  case (code)0xa7:
  case (code)0xbf:
  case (code)0xc4:
  case (code)0xc8:
  case (code)0xce:
  case (code)0xd3:
  case (code)0xd8:
  case (code)0xf3:
  case (code)0xfc:
    *(ulong *)(param_1 + 8) = unaff_x20;
  case (code)0x6:
  case (code)0x43:
  case (code)0x52:
  case (code)0x56:
  case (code)0x87:
  case (code)0xdf:
    param_1 = *(code **)param_1;
  case (code)0xf:
  case (code)0x12:
  case (code)0x25:
  case (code)0x28:
  case (code)0x2a:
  case (code)0x35:
  case (code)0x4f:
  case (code)0x5f:
  case (code)0x62:
  case (code)0x75:
  case (code)0x78:
  case (code)0x7a:
  case (code)0x90:
  case (code)0x93:
  case (code)0xa0:
  case (code)0xb9:
  case (code)0xbc:
  case (code)0xbe:
  case (code)0xca:
  case (code)0xcd:
  case (code)0xe8:
  case (code)0xeb:
    goto __ZdlPv;
  case (code)0x1c:
  case (code)0x6c:
  case (code)0xad:
  case (code)0xb0:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
  case (code)0xa:
  case (code)0x39:
  case (code)0x5a:
  case (code)0x8b:
  case (code)0x9c:
  case (code)0xc5:
  case (code)0xe3:
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + 0x10);
  case (code)0x1b:
  case (code)0x3a:
  case (code)0x6b:
  case (code)0x9d:
  case (code)0xaf:
  case (code)0xf4:
  case (code)0x36:
  case (code)0x3b:
                    /* WARNING: Could not recover jumptable at 0x00010b1aa31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return param_1;
  case (code)0x1d:
  case (code)0x6d:
  case (code)0xb1:
    *(code **)param_1 = UNRECOVERED_JUMPTABLE;
  case (code)0x29:
  case (code)0x34:
  case (code)0x79:
  case (code)0xac:
  case (code)0xbd:
  case (code)0xcc:
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 8);
  case (code)0xa6:
    *(code **)(param_1 + 8) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)(param_2 + 8) = 0;
    return param_1;
  case (code)0x22:
  case (code)0x72:
  case (code)0xb6:
    param_1 = (code *)&stack0x00000020;
  case (code)0x31:
  case (code)0x81:
  case (code)0x82:
  case (code)0x83:
  case (code)0xd9:
  case (code)0xda:
  case (code)0xdb:
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
              (param_1);
    return param_1;
  case (code)0x3f:
  case (code)0xc:
  case (code)0x5c:
  case (code)0x8d:
  case (code)0xe5:
    goto __Unwind_Resume;
  case (code)0x40:
  case (code)0xa5:
  case (code)0xfd:
    UNRECOVERED_JUMPTABLE = *(code **)UNRECOVERED_JUMPTABLE;
  case (code)0x14:
  case (code)0x2e:
  case (code)0x4d:
  case (code)0x64:
  case (code)0x7e:
  case (code)0x95:
  case (code)0xc2:
  case (code)0xd1:
  case (code)0xed:
    param_1 = (code *)(unaff_x23 + 8);
  case (code)0x7:
  case (code)0xe:
  case (code)0x11:
  case (code)0x16:
  case (code)0x1f:
  case (code)0x24:
  case (code)0x27:
  case (code)0x3d:
  case (code)0x57:
  case (code)0x5e:
  case (code)0x61:
  case (code)0x66:
  case (code)0x6f:
  case (code)0x74:
  case (code)0x77:
  case (code)0x88:
  case (code)0x8f:
  case (code)0x92:
  case (code)0x97:
  case (code)0x9f:
  case (code)0xb3:
  case (code)0xb8:
  case (code)0xbb:
  case (code)0xe0:
  case (code)0xe7:
  case (code)0xea:
  case (code)0xef:
  case (code)0xf8:
                    /* WARNING: Could not recover jumptable at 0x00010b1aa408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return param_1;
  case (code)0x44:
  case (code)0x50:
    return param_1;
  case (code)0x48:
    return param_1;
  case (code)0x4a:
    return param_1;
  case (code)0x51:
  case (code)0xc9:
    FUN_10b1a49fc(param_1,auStack_e0);
    param_1[0x80] = (code)0x1;
    return param_1;
  case (code)0x53:
  case (code)0x9e:
  case (code)0xaa:
    bVar1 = (bool)ExclusiveMonitorPass(UNRECOVERED_JUMPTABLE,0x10);
    if (bVar1) {
      *(ulong *)UNRECOVERED_JUMPTABLE = *(ulong *)UNRECOVERED_JUMPTABLE - 1;
      ExclusiveMonitorsStatus();
    }
    return param_1;
  case (code)0xa3:
  case (code)0xfa:
__Unwind_Resume:
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Unwind_Resume_11034bd20)(param_1);
    return param_1;
  case (code)0xc6:
                    /* WARNING: Could not emulate address calculation at 0x00010b1aa330 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(UNRECOVERED_JUMPTABLE + 8))();
    return param_1;
  case (code)0xc7:
  case (code)0xd2:
    pcVar2 = (code *)(unaff_x21 + 8);
                    /* WARNING: Could not emulate address calculation at 0x00010b1aa3ac */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)UNRECOVERED_JUMPTABLE)(pcVar2);
    return pcVar2;
  case (code)0xf5:
    return param_1;
  }
  func_0x00010b1aa870();
  func_0x00010b1aa6c8();
code_r0x00010b1aa27c:
  func_0x00010b1aa5c0();
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return param_1;
}



/* Entry: 10b1aa28c; end: 10b1ab1df;  */

void FUN_10b1aa28c(void)

{
  return;
}



/* Entry: 10b1ab1e0; end: 10b1ab53f;  */

void FUN_10b1ab1e0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,ulong param_7)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long extraout_x8;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w12;
  undefined4 *extraout_x13;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uStack_138;
  long lStack_130;
  undefined4 auStack_128 [6];
  undefined4 auStack_110 [2];
  long lStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  
  uVar5 = *(undefined4 *)(param_2 + 0x2a);
  if ((param_7 & 0x100000000) != 0) {
    uVar5 = (undefined4)param_7;
  }
  FUN_10b1ab540(auStack_88,param_2 + 0x1c);
  FUN_10b1ac220(uStack_78,param_3);
  func_0x00010b1ad9a4();
  func_0x000107c2798c(auStack_88);
  if (*param_1 == 0) {
    func_0x00010b1ad99c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_88,param_3);
    lVar8 = param_2[4];
    lVar6 = *(long *)(lVar8 + 0x10);
    uStack_c8 = *(undefined8 *)(lVar6 + 0x108);
    uStack_d0 = *(undefined8 *)(lVar6 + 0x100);
    lStack_108 = lVar8;
    if (*(long *)(lVar6 + 0x108) != 0) {
      do {
        func_0x00010b1ad778();
      } while (extraout_w10 != 0);
      lStack_108 = param_2[4];
    }
    lVar6 = *(long *)(lStack_108 + 0x30);
    uStack_d8 = *(undefined8 *)(lVar6 + 0x58);
    uStack_e0 = *(undefined8 *)(lVar6 + 0x50);
    if (*(long *)(lVar6 + 0x58) != 0) {
      do {
        func_0x00010b1ad778();
      } while (extraout_w10_00 != 0);
      lStack_108 = param_2[4];
      lVar6 = *(long *)(lStack_108 + 0x30);
    }
    uStack_e8 = *(undefined8 *)(lVar6 + 0x68);
    uStack_f0 = *(undefined8 *)(lVar6 + 0x60);
    if (*(long *)(lVar6 + 0x68) != 0) {
      do {
        func_0x00010b1ad778();
      } while (extraout_w10_01 != 0);
      lStack_108 = param_2[4];
    }
    puVar7 = auStack_128;
    uStack_100 = 0;
    lVar6 = lStack_108;
    auStack_128[0] = uVar5;
    if (param_2[5] != 0) {
      do {
        func_0x00010b1ad924();
      } while (extraout_w12 != 0);
      lVar6 = param_2[4];
      lStack_108 = extraout_x8;
      uStack_100 = extraout_x9;
      puVar7 = extraout_x13;
    }
    auStack_110[0] = uVar5;
    *(undefined8 *)(puVar7 + 2) = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    uStack_f8 = 1;
    bVar2 = (byte)*(undefined8 *)(lVar6 + 0x10);
    FUN_10b18ff10();
    func_0x00010b1ad94c(*(undefined8 *)(param_2[4] + 0x10));
    func_0x00010b1ad94c(*(undefined8 *)(param_2[4] + 0x10));
    if (*param_6 == 0) {
      func_0x00010b1ad94c(*(undefined8 *)(param_2[4] + 0x10));
    }
    uVar3 = (undefined1)*(undefined8 *)(param_2[4] + 0x10);
    FUN_10b11f6a8();
    uStack_138 = *param_2;
    lStack_130 = param_2[1];
    if (lStack_130 == 0) {
      lStack_130 = 0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lStack_130 != 0) {
        FUN_10b19b680(&lStack_c0,lVar8,&uStack_d0,param_2 + 2,param_3,param_4,param_5,&uStack_e0,
                      &uStack_f0,param_6,auStack_110,bVar2 ^ 1,uVar3,&uStack_138);
        lStack_98 = lStack_b8;
        lStack_a0 = lStack_c0;
        if (lStack_b8 != 0) {
          do {
            func_0x00010b1ad778();
          } while (extraout_w10_02 != 0);
        }
        func_0x00010b1a3830(&lStack_c0);
        func_0x00010b125888(&uStack_138);
        FUN_10b1a3cac(auStack_110);
        func_0x00010b1ad9d0();
        func_0x000106e50c54(&uStack_f0);
        func_0x000107c27c20(&uStack_e0);
        FUN_10b197610(&uStack_d0);
        FUN_10b1ab540(&lStack_c0,param_2 + 0x1c);
        uVar4 = uStack_b0;
        FUN_10b1ac220(uStack_b0,auStack_88);
        func_0x00010b1ad9a4();
        if (*param_1 == 0) {
          func_0x00010b1ad99c();
          FUN_10b1a5ae8(uVar4,&lStack_a0);
          param_1[1] = lStack_98;
          *param_1 = lStack_a0;
          lStack_a0 = 0;
          lStack_98 = 0;
        }
        func_0x000107c2798c(&lStack_c0);
        func_0x00010b129c40(&lStack_a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
        return;
      }
    }
    func_0x00010527822c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1ab4cc);
    (*pcVar1)();
  }
  return;
}



/* Entry: 10b1ab540; end: 10b1ab567;  */

void FUN_10b1ab540(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b1ab568; end: 10b1ab5e3;  */

void FUN_10b1ab568(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  FUN_10b1ab540(auStack_38,param_2 + 0xe0);
  lVar1 = lStack_28;
  FUN_10b1ac644(lStack_28,param_3);
  if (lVar1 != 0) {
    func_0x00010b1ad9a4(lVar1 + 0x28);
    if (*param_1 != 0) goto LAB_10b1ab5c4;
    func_0x00010b1ad99c();
    FUN_10b1ac718(lStack_28,lVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10b1ab5c4:
  func_0x000107c2798c(auStack_38);
  return;
}



/* Entry: 10b1ab5e4; end: 10b1ab77b;  */

void FUN_10b1ab5e4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x9;
  int extraout_w11;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  
  puVar2 = (undefined8 *)0x68;
  __Znwm();
  *puVar2 = FUN_10b1ad1b4;
  puVar2[1] = FUN_10b1ad27c;
  FUN_10b124f8c(puVar2 + 2);
  FUN_10b124f40(param_1,puVar2 + 2);
  if (*(long *)(param_2 + 0x148) != 0) {
    puVar1 = puVar2 + 10;
    FUN_10b1b016c(puVar1);
    puVar3 = puVar1;
    FUN_10b12d174();
    if (((ulong)puVar3 & 1) == 0) {
      *(undefined1 *)(puVar2 + 0xc) = 0;
      puStack_60 = puVar2;
      puStack_58 = puVar1;
      FUN_10b12d1c8(auStack_50,puVar1,&puStack_60);
      if (plStack_48 == (long *)0x0) {
        return;
      }
      do {
        func_0x00010b1ad7a8();
      } while (extraout_w11 != 0);
      if (extraout_x9 != 0) {
        return;
      }
      func_0x00010b1ad8ec(*(undefined8 *)(*plStack_48 + 0x10));
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      return;
    }
    FUN_10b12d0d0(puVar1);
    func_0x000107c27b58(puVar1);
  }
  FUN_10b124fa8(puVar2 + 7);
  func_0x00010b1ad904();
  if (*(char *)(puVar2 + 8) == '\x01') {
    puStack_38 = auStack_40;
    func_0x000107c27b6c(puVar2 + 2,&puStack_38);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_40,puVar2 + 7);
    puStack_38 = auStack_40;
    func_0x000104bf33ec(puVar2 + 2,&puStack_38);
    __ZNSt13exception_ptrD1Ev(auStack_40);
  }
  func_0x00010b1ad894();
  func_0x00010b1ad7f8();
  return;
}



/* Entry: 10b1ab77c; end: 10b1ab80f;  */

void FUN_10b1ab77c(undefined8 *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  code **ppcVar5;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  code **ppcStack_100;
  undefined1 *puStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  long alStack_e0 [3];
  code *pcStack_c8;
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_28;
  
  func_0x00010b1ad934();
  pcStack_58 = FUN_10b1acdcc;
  ppuStack_50 = &PTR_FUN_110cc3118;
  ppcVar5 = &pcStack_58;
  puStack_48 = param_1;
  uStack_40 = param_2;
  uStack_28 = extraout_x9;
  FUN_10b1ab810(*param_1);
  (*(code *)*ppuStack_50)();
  func_0x00010b1ad934(uStack_28);
  if (extraout_x9_00 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_50;
  (*(code *)*ppuStack_50)(pppuVar1);
  func_0x00010b1ad7b8();
  plVar4 = alStack_e0;
  plVar2 = alStack_e0;
  pcStack_68 = FUN_10b1ab810;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = &stack0xfffffffffffffff0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(alStack_e0,pppuVar1);
  pcStack_c8 = *ppcVar5;
  ppcVar5 = ppcVar5 + 1;
  (**(code **)(*ppcVar5 + 0x10))(auStack_c0,ppcVar5);
  FUN_10b1ac868(extraout_x8_00,alStack_e0,&pcStack_c8);
  func_0x00010b1ad8a4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1ad934(uStack_98);
  if (extraout_x9_01 == extraout_x8_01) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1ad8a4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1ad7b8();
  pcStack_e8 = FUN_10b1ab8c8;
  plVar3 = plVar2;
  ppcStack_100 = ppcVar5;
  puStack_f8 = (undefined1 *)plVar4;
  ppuStack_f0 = &puStack_70;
  FUN_10b126318();
  plVar4 = (long *)*plVar2;
  if ((int)plVar3 == 0) {
    FUN_10b1262f4();
    if (*(char *)(*plVar4 + 0x670) == '\x01') {
      plVar4 = (long *)*plVar2;
      goto LAB_10b1ab918;
    }
  }
  else if ((*(byte *)(plVar4[3] + 0x670) & 1) != 0) {
LAB_10b1ab918:
    FUN_10b13e1a0(&lStack_110,plVar4);
    if (lStack_110 == 0) {
      *extraout_x8_02 = 0;
      extraout_x8_02[1] = 0;
    }
    else {
      lStack_120 = lStack_110;
      uStack_118 = uStack_108;
      lStack_110 = 0;
      uStack_108 = 0;
      FUN_10b1ab77c(extraout_x8_02,plVar2,&lStack_120);
      func_0x00010b1ad7f0();
    }
    func_0x00010b1ad944();
    return;
  }
  *extraout_x8_02 = 0;
  extraout_x8_02[1] = 0;
  return;
}



/* Entry: 10b1ab810; end: 10b1ab8c7;  */

void FUN_10b1ab810(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x9;
  long *plVar4;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_80 [3];
  undefined8 uStack_68;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  plVar3 = alStack_80;
  plVar1 = alStack_80;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(alStack_80,param_2);
  uStack_68 = *param_3;
  plVar4 = param_3 + 1;
  (**(code **)(*plVar4 + 0x10))(auStack_60,plVar4);
  FUN_10b1ac868(param_1,alStack_80,&uStack_68);
  func_0x00010b1ad8a4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1ad934(uStack_38);
  if (extraout_x9 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1ad8a4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1ad7b8();
  pcStack_88 = FUN_10b1ab8c8;
  plVar2 = plVar1;
  plStack_a0 = plVar4;
  puStack_98 = (undefined1 *)plVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_10b126318();
  plVar3 = (long *)*plVar1;
  if ((int)plVar2 == 0) {
    FUN_10b1262f4();
    if (*(char *)(*plVar3 + 0x670) == '\x01') {
      plVar3 = (long *)*plVar1;
      goto LAB_10b1ab918;
    }
  }
  else if ((*(byte *)(plVar3[3] + 0x670) & 1) != 0) {
LAB_10b1ab918:
    FUN_10b13e1a0(&lStack_b0,plVar3);
    if (lStack_b0 == 0) {
      *extraout_x8_00 = 0;
      extraout_x8_00[1] = 0;
    }
    else {
      lStack_c0 = lStack_b0;
      uStack_b8 = uStack_a8;
      lStack_b0 = 0;
      uStack_a8 = 0;
      FUN_10b1ab77c(extraout_x8_00,plVar1,&lStack_c0);
      func_0x00010b1ad7f0();
    }
    func_0x00010b1ad944();
    return;
  }
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  return;
}



/* Entry: 10b1ab8c8; end: 10b1ab973;  */

void FUN_10b1ab8c8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_2;
  FUN_10b126318();
  plVar2 = (long *)*param_2;
  if ((int)plVar1 == 0) {
    FUN_10b1262f4();
    if (*(char *)(*plVar2 + 0x670) == '\x01') {
      plVar2 = (long *)*param_2;
      goto LAB_10b1ab918;
    }
  }
  else if ((*(byte *)(plVar2[3] + 0x670) & 1) != 0) {
LAB_10b1ab918:
    FUN_10b13e1a0(&lStack_30,plVar2);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      lStack_40 = lStack_30;
      uStack_38 = uStack_28;
      lStack_30 = 0;
      uStack_28 = 0;
      FUN_10b1ab77c(param_1,param_2,&lStack_40);
      func_0x00010b1ad7f0();
    }
    func_0x00010b1ad944();
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b1ab974; end: 10b1abef7;  */

void FUN_10b1ab974(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong extraout_x8;
  long extraout_x9;
  undefined8 uVar10;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  puVar4 = (undefined8 *)0xd8;
  __Znwm();
  *puVar4 = FUN_10b1ad2a8;
  puVar4[1] = FUN_10b1ad730;
  FUN_10b12880c(puVar4 + 2);
  puVar11 = puVar4 + 7;
  *(undefined1 *)puVar11 = 0;
  puVar4[2] = &PTR_FUN_110cc30a0;
  *(undefined1 *)(puVar4 + 10) = 0;
  func_0x00010b1287cc(param_1,puVar4 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar4 + 0xb,param_2);
  puVar6 = puVar4 + 0x10;
  FUN_10b1b9728(puVar6);
  puVar5 = puVar6;
  FUN_10b1270a8();
  if (((ulong)puVar5 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x1a) = 0;
    puStack_a0 = puVar4;
    puStack_98 = puVar6;
    FUN_10b12713c(&uStack_90,puVar6,&puStack_a0);
    if (plStack_88 != (long *)0x0) {
      do {
        func_0x00010b1ad7a8();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b1ad8ec(*(undefined8 *)(*plStack_88 + 0x10));
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
  }
  else {
    FUN_10b113e08(puVar4 + 0xe,puVar6);
    FUN_10b120e24(puVar6);
    FUN_10b113eb4(puVar6,puVar4 + 0xe,puVar4 + 0xb);
    FUN_10b1ab8c8(&puStack_70,puVar6);
    puVar5 = puStack_70;
    if (puStack_70 == (undefined8 *)0x0) {
      iVar14 = 0;
    }
    else {
      func_0x00010b1ad9b4();
      iVar14 = 3;
    }
    func_0x00010b125888(&puStack_70);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_10b13e1a0(&puStack_70,*puVar6);
      puVar5 = puStack_70;
      if (puStack_70 == (undefined8 *)0x0) {
        iVar14 = 0;
      }
      else {
        puVar4[0x12] = puStack_70;
        puVar4[0x13] = lStack_68;
        puStack_70 = (undefined8 *)0x0;
        lStack_68 = 0;
        FUN_10b1ab77c(&uStack_90,puVar6,puVar4 + 0x12);
        func_0x00010b1ad9b4();
        func_0x00010b1ad808();
        func_0x00010b1ad8fc();
        iVar14 = 3;
      }
      func_0x00010b1ad820();
      if (puVar5 == (undefined8 *)0x0) {
        func_0x00010b1ad9c4();
        puVar5 = puVar4 + 0x16;
        FUN_10b113ed8();
        if (((ulong)puVar5 & 1) == 0) {
          *(undefined1 *)(puVar4 + 0x1a) = 1;
          __ZNSt3__115recursive_mutex4lockEv(puVar4[0x16]);
          lVar8 = puVar4[0x16];
          if ((*(byte *)(lVar8 + 0x58) & 1) != 0) {
            func_0x00010b1ad978();
            func_0x00010b1ad8ec(*puVar4);
            return;
          }
          puVar6 = *(undefined8 **)(lVar8 + 0x68);
          bVar3 = *(undefined8 **)(lVar8 + 0x70) <= puVar6;
          if (bVar3) {
            lVar13 = *(long *)(lVar8 + 0x60);
            lVar15 = (long)puVar6 - lVar13;
            if ((lVar15 >> 3) + 1U >> 0x3d != 0) {
              func_0x00010552fc6c();
LAB_10b1abdb8:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1abdbc);
              (*pcVar2)();
            }
            func_0x00010b1ad870((long)*(undefined8 **)(lVar8 + 0x70) - lVar13);
            uVar1 = extraout_x9_02;
            if (bVar3) {
              uVar1 = extraout_x8;
            }
            if (uVar1 == 0) {
              lVar7 = 0;
            }
            else {
              if (uVar1 >> 0x3d != 0) {
                func_0x000104bd35f4();
                goto LAB_10b1abdb8;
              }
              lVar7 = uVar1 << 3;
              __Znwm();
            }
            puVar6 = (undefined8 *)(lVar7 + lVar15);
            puVar5 = puVar6 + 1;
            *puVar6 = puVar4;
            _memcpy(puVar6 + -(lVar15 >> 3),lVar13,lVar15);
            *(undefined8 **)(lVar8 + 0x60) = puVar6 + -(lVar15 >> 3);
            *(undefined8 **)(lVar8 + 0x68) = puVar5;
            *(ulong *)(lVar8 + 0x70) = lVar7 + uVar1 * 8;
            if (lVar13 != 0) {
              __ZdlPv(lVar13);
            }
          }
          else {
            puVar5 = puVar6 + 1;
            *puVar6 = puVar4;
          }
          *(undefined8 **)(lVar8 + 0x68) = puVar5;
          func_0x00010b1ad978();
          return;
        }
        plVar12 = puVar4 + 0x16;
        FUN_10b113f00();
        lVar13 = *plVar12;
        puVar4[0x14] = lVar13;
        lVar8 = plVar12[1];
        puVar4[0x15] = lVar8;
        if (lVar8 != 0) {
          do {
            func_0x00010b1ad778();
          } while (extraout_w10 != 0);
        }
        func_0x00010b1ad818();
        plStack_88 = *(long **)(lVar13 + 0x10);
        uStack_90 = *(undefined8 *)(lVar13 + 8);
        if (*(long *)(lVar13 + 0x10) != 0) {
          do {
            func_0x00010b1ad778();
          } while (extraout_w10_00 != 0);
        }
        FUN_10b126248(&puStack_70);
        func_0x00010b1ad89c();
        puVar4[0x19] = lStack_68;
        puVar4[0x18] = puStack_70;
        puStack_70 = (undefined8 *)0x0;
        lStack_68 = 0;
        FUN_10b1ab77c(&uStack_90,puVar6,puVar4 + 0x18);
        func_0x00010b1ad9b4();
        func_0x00010b1ad808();
        func_0x00010b1ad8e4();
        func_0x00010b1ad820();
        func_0x00010b1ad8dc();
        iVar14 = 3;
      }
    }
    func_0x00010b1257f8(puVar6);
    func_0x00010b1ad828();
    func_0x00010b1ad800();
    if (iVar14 == 3) {
      func_0x00010b1ad914();
      if (*(char *)(puVar4 + 9) == '\x01') {
        puVar6 = puVar4 + 3;
        __ZNSt3__112__get_sp_mutEPKv(puVar6);
        __ZNSt3__18__sp_mut4lockEv();
        puVar5 = (undefined8 *)puVar4[3];
        lVar8 = puVar4[4];
        puVar4[3] = 0;
        puVar4[4] = 0;
        __ZNSt3__18__sp_mut6unlockEv(puVar6);
        puStack_70 = puVar5;
        lStack_68 = lVar8;
        __ZNSt3__15mutex4lockEv(puVar5 + 9);
        uVar9 = *puVar11;
        if (*(char *)(puVar5 + 2) == '\x01') {
          uVar10 = puVar4[8];
          *puVar11 = 0;
          puVar4[8] = 0;
          lVar8 = puVar5[1];
          *puVar5 = uVar9;
          puVar5[1] = uVar10;
          puVar6 = puStack_70;
          if (lVar8 != 0) {
            do {
              func_0x00010b1ad7a8();
            } while (extraout_w11_00 != 0);
            puVar6 = puStack_70;
            if (extraout_x9_00 == 0) {
              func_0x00010b1ad788();
              func_0x00010b1ad810();
              puVar6 = puStack_70;
            }
          }
        }
        else {
          *puVar5 = uVar9;
          puVar5[1] = puVar4[8];
          *puVar11 = 0;
          puVar4[8] = 0;
          *(undefined1 *)(puVar5 + 2) = 1;
          puVar6 = puVar5;
        }
        plVar12 = (long *)puVar6[0x12];
        puVar6[0x12] = 0;
        __ZNSt3__15mutex6unlockEv(puVar5 + 9);
        if (plVar12 == (long *)0x0) {
          __ZNSt3__118condition_variable10notify_allEv(puVar6 + 3);
        }
        else {
          (**(code **)(*plVar12 + 0x10))(plVar12,&puStack_70);
          func_0x00010b1ad798();
        }
        if (lStack_68 != 0) {
          do {
            func_0x00010b1ad7a8();
          } while (extraout_w11_01 != 0);
          if (extraout_x9_01 == 0) {
            func_0x00010b1ad788();
            func_0x00010b1ad810();
          }
        }
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_78,puVar11);
        puStack_70 = &uStack_78;
        FUN_10b128c20(puVar4 + 2,&puStack_70);
        __ZNSt13exception_ptrD1Ev(&uStack_78);
      }
    }
    func_0x00010b1ad88c();
    func_0x00010b1ad7f8();
  }
  return;
}



/* Entry: 10b1abef8; end: 10b1abefb;  */

long FUN_10b1abef8(long param_1)

{
  long extraout_x8;
  
  func_0x00010b1359d0(&PTR_FUN_110cbd9a0);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x00010b134a28();
    FUN_10b128bc4();
    func_0x00010b135d24();
  }
  FUN_10b120a3c(param_1 + 0x18);
  FUN_10b120a3c();
  return param_1;
}



/* Entry: 10b1abefc; end: 10b1abf0f;  */

void FUN_10b1abefc(void)

{
  FUN_10b128b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1abf10; end: 10b1abf43;  */

long FUN_10b1abf10(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x20;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b1abf44(param_1 + 0x28);
  }
  func_0x00010b1359d0(&PTR_FUN_110cbd9a0);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x00010b134a28();
    FUN_10b128bc4();
    func_0x00010b135d24();
  }
  FUN_10b120a3c(param_1 + 0x18);
  FUN_10b120a3c(unaff_x20);
  return param_1;
}



/* Entry: 10b1abf44; end: 10b1abf6b;  */

void FUN_10b1abf44(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010b125888();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b1abf6c; end: 10b1abfb7;  */

long FUN_10b1abf6c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b1abfb8; end: 10b1ac027;  */

void FUN_10b1abfb8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10b1ac028(lVar1 + 0xa0);
    FUN_10b1ac15c(lVar1 + 0xa8);
    FUN_10b1ac15c(lVar1 + 0xa0);
    FUN_10b1ac184(lVar1 + 0x70);
    __ZNSt3__15mutexD1Ev(lVar1 + 0x30);
    func_0x000107c27c20(lVar1 + 0x20);
    FUN_10b1abf6c(lVar1 + 0x10);
    func_0x00010b1257d4(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1ac028; end: 10b1ac08b;  */

void FUN_10b1ac028(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  while (lStack_28 = *(long *)(param_1 + 8), lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10b1ac08c(param_1,&lStack_28);
    FUN_10b1ac15c(&lStack_28);
  }
  return;
}



/* Entry: 10b1ac08c; end: 10b1ac12f;  */

void FUN_10b1ac08c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (*param_1 == lVar3) {
    func_0x00010b1ac0e8(param_1,*(undefined8 *)(lVar3 + 0x18));
    lVar3 = *param_2;
  }
  if (param_1[1] == lVar3) {
    func_0x00010b1ac0e8(param_1 + 1,*(undefined8 *)(lVar3 + 0x10));
    lVar3 = *param_2;
  }
  lVar1 = *(long *)(lVar3 + 0x10);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  if (lVar1 != 0) {
    func_0x00010b9a09a4(lVar1 + 0x18,&stack0xffffffffffffffe8);
  }
  func_0x00010b9a0a78(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 10b1ac130; end: 10b1ac15b;  */

void FUN_10b1ac130(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b1ac154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b1ac15c; end: 10b1ac183;  */

undefined8 * FUN_10b1ac15c(undefined8 *param_1)

{
  FUN_10b1ac130(*param_1);
  return param_1;
}



/* Entry: 10b1ac184; end: 10b1ac1ff;  */

void FUN_10b1ac184(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b1ac200(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x20;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b1ac200; end: 10b1ac21f;  */

void FUN_10b1ac200(void)

{
  func_0x00010b1ad9dc();
  FUN_10b1ac15c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1ac220; end: 10b1ac58f;  */

long * FUN_10b1ac220(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong extraout_x8;
  long lVar6;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  long *plVar8;
  long *plVar9;
  long *extraout_x10;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_x11;
  long *unaff_x19;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x25;
  
  func_0x00010b1ad9dc();
  func_0x000107c278c4();
  uVar14 = unaff_x19[1];
  if (uVar14 != 0) {
    uVar13 = uVar14 - 1;
    if ((uVar14 & uVar13) == 0) {
      unaff_x25 = uVar13 & param_1;
    }
    else {
      unaff_x25 = param_1;
      if (uVar14 <= param_1) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = param_1 / uVar14;
        }
        unaff_x25 = param_1 - uVar5 * uVar14;
      }
    }
    plVar12 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10b1ac2dc;
          uVar5 = plVar12[1];
          if (uVar5 != param_1) break;
          plVar4 = plVar12 + 2;
          func_0x000107c278d0(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) goto LAB_10b1ac558;
        }
        if ((uVar14 & uVar13) == 0) {
          uVar5 = uVar5 & uVar13;
        }
        else if (uVar14 <= uVar5) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar5 / uVar14;
          }
          uVar5 = uVar5 - uVar7 * uVar14;
        }
      } while (uVar5 == unaff_x25);
    }
  }
LAB_10b1ac2dc:
  plVar4 = unaff_x19 + 2;
  plVar12 = (long *)0x38;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar12 + 2,param_2);
  plVar12[5] = 0;
  plVar12[6] = 0;
  if ((uVar14 != 0) && ((float)(unaff_x19[3] + 1) <= *(float *)(unaff_x19 + 4) * (float)uVar14))
  goto LAB_10b1ac4e0;
  bVar2 = 2 < uVar14;
  bVar3 = uVar14 == 3;
  func_0x00010b1ad9e8(uVar14 << 1);
  uVar13 = extraout_x8;
  if (!bVar2 || bVar3) {
    uVar13 = extraout_x9;
  }
  if (uVar13 - 1 == 0) {
    uVar13 = 2;
  }
  else if ((uVar13 & uVar13 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar14 = unaff_x19[1];
  if (uVar14 < uVar13) {
LAB_10b1ac384:
    if (uVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1ac580);
      (*pcVar1)();
    }
    __Znwm(uVar13 << 3);
    FUN_10b1ac590();
    unaff_x19[1] = uVar13;
    lVar6 = *unaff_x19;
    for (uVar14 = 0; uVar13 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar6 + uVar14 * 8) = 0;
    }
    plVar8 = (long *)*plVar4;
    uVar14 = uVar13;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar7 = uVar13 - 1;
      uVar5 = 0;
      if (uVar13 != 0) {
        uVar5 = uVar10 / uVar13;
      }
      uVar11 = uVar10;
      if (uVar13 <= uVar10) {
        uVar11 = uVar10 - uVar5 * uVar13;
      }
      if ((uVar13 & uVar7) == 0) {
        uVar11 = uVar10 & uVar7;
      }
      *(long **)(lVar6 + uVar11 * 8) = plVar4;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar5 = plVar8[1];
        if ((uVar13 & uVar7) == 0) {
          uVar5 = uVar5 & uVar7;
        }
        else if (uVar13 <= uVar5) {
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar10 * uVar13;
        }
        if (uVar5 != uVar11) {
          if (*(long *)(lVar6 + uVar5 * 8) == 0) {
            *(long **)(lVar6 + uVar5 * 8) = plVar9;
            uVar11 = uVar5;
          }
          else {
            func_0x00010b1ad850();
            lVar6 = extraout_x8_00;
            uVar7 = extraout_x9_00;
            plVar8 = extraout_x10;
            uVar11 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar13 < uVar14) {
    uVar5 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b1ad830();
    }
    if (uVar13 <= uVar5) {
      uVar13 = uVar5;
    }
    if (uVar13 < uVar14) {
      if (uVar13 != 0) goto LAB_10b1ac384;
      FUN_10b1ac590();
      unaff_x19[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = unaff_x19[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x25 = uVar14 - 1 & param_1;
  }
  else {
    unaff_x25 = param_1;
    if (uVar14 <= param_1) {
      uVar13 = 0;
      if (uVar14 != 0) {
        uVar13 = param_1 / uVar14;
      }
      unaff_x25 = param_1 - uVar13 * uVar14;
    }
  }
LAB_10b1ac4e0:
  lVar6 = *unaff_x19;
  plVar8 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar4;
    *plVar4 = (long)plVar12;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar4;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar5 * uVar14;
      }
      *(long **)(lVar6 + uVar13 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  func_0x00010b1ad960();
LAB_10b1ac558:
  return plVar12 + 5;
}



/* Entry: 10b1ac590; end: 10b1ac5a7;  */

void FUN_10b1ac590(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1ac5a8; end: 10b1ac5cb;  */

undefined8 FUN_10b1ac5a8(undefined8 param_1)

{
  FUN_10b1ac5cc(param_1,0);
  return param_1;
}



/* Entry: 10b1ac5cc; end: 10b1ac5e3;  */

void FUN_10b1ac5cc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010b1ac624(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10b1ac5e4; end: 10b1ac643;  */

void FUN_10b1ac5e4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010b1ac624(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b1ac644; end: 10b1ac717;  */

long FUN_10b1ac644(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b1ac718; end: 10b1ac74b;  */

undefined8 FUN_10b1ac718(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10b1ac74c(auStack_38);
  func_0x00010b1ad960();
  return uVar1;
}



/* Entry: 10b1ac74c; end: 10b1ac867;  */

void FUN_10b1ac74c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b1ac800;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b1ac800;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b1ac800:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10b1ac868; end: 10b1acce7;  */

void FUN_10b1ac868(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x9;
  ulong uVar9;
  ulong extraout_x9_00;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *extraout_x10;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *extraout_x11;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *unaff_x28;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if ((bRam00000001137f40e0 & 1) == 0) {
    iVar5 = 0x137f40e0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      puVar11 = (undefined8 *)0x68;
      __Znwm();
      *puVar11 = 0x32aaaba7;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      puVar11[2] = 0;
      puVar11[1] = 0;
      puVar11[4] = 0;
      puVar11[3] = 0;
      puVar11[6] = 0;
      puVar11[5] = 0;
      puVar11[8] = 0;
      puVar11[7] = 0;
      puVar11[10] = 0;
      puVar11[9] = 0;
      *(undefined4 *)(puVar11 + 0xc) = 0x3f800000;
      puRam00000001137f40d8 = puVar11;
      ___cxa_guard_release(0x1137f40e0);
    }
  }
  puVar1 = puRam00000001137f40d8;
  plVar10 = puRam00000001137f40d8 + 8;
  puStack_90 = puRam00000001137f40d8;
  uStack_88 = 1;
  __ZNSt3__15mutex4lockEv(puRam00000001137f40d8);
  puVar11 = puVar1 + 0xb;
  plStack_80 = plVar10;
  func_0x000107c278c4(puVar11,param_2);
  puVar18 = (undefined8 *)puVar1[9];
  if (puVar18 != (undefined8 *)0x0) {
    uVar17 = (long)puVar18 - 1;
    if (((ulong)puVar18 & uVar17) == 0) {
      unaff_x28 = (undefined8 *)(uVar17 & (ulong)puVar11);
    }
    else {
      unaff_x28 = puVar11;
      if (puVar18 <= puVar11) {
        uVar9 = 0;
        if (puVar18 != (undefined8 *)0x0) {
          uVar9 = (ulong)puVar11 / (ulong)puVar18;
        }
        unaff_x28 = (undefined8 *)((long)puVar11 - uVar9 * (long)puVar18);
      }
    }
    plVar16 = *(long **)(*plVar10 + (long)unaff_x28 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10b1ac96c;
          puVar8 = (undefined8 *)plVar16[1];
          if (puVar8 != puVar11) break;
          plVar6 = plVar16 + 2;
          func_0x000107c278d0(plVar6,param_2);
          if (((ulong)plVar6 & 1) != 0) goto LAB_10b1acbf0;
        }
        if (((ulong)puVar18 & uVar17) == 0) {
          puVar8 = (undefined8 *)((ulong)puVar8 & uVar17);
        }
        else if (puVar18 <= puVar8) {
          uVar9 = 0;
          if (puVar18 != (undefined8 *)0x0) {
            uVar9 = (ulong)puVar8 / (ulong)puVar18;
          }
          puVar8 = (undefined8 *)((long)puVar8 - uVar9 * (long)puVar18);
        }
      } while (puVar8 == unaff_x28);
    }
  }
LAB_10b1ac96c:
  plVar16 = (long *)0x38;
  __Znwm();
  plVar6 = puVar1 + 10;
  uStack_68 = 0;
  *plVar16 = 0;
  plVar16[1] = (long)puVar11;
  plStack_78 = plVar16;
  plStack_70 = plVar6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar16 + 2,param_2);
  plVar16[6] = 0;
  plVar16[5] = 0;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  if ((puVar18 != (undefined8 *)0x0) &&
     ((float)(puVar1[0xb] + 1) <= *(float *)(puVar1 + 0xc) * (float)puVar18)) goto LAB_10b1acb78;
  bVar3 = (undefined8 *)0x2 < puVar18;
  bVar4 = puVar18 == (undefined8 *)0x3;
  func_0x00010b1ad9e8((long)puVar18 << 1);
  puVar8 = extraout_x8;
  if (!bVar3 || bVar4) {
    puVar8 = extraout_x9;
  }
  if ((long)puVar8 - 1U == 0) {
    puVar8 = (undefined8 *)0x2;
  }
  else if (((ulong)puVar8 & (long)puVar8 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  puVar18 = (undefined8 *)puVar1[9];
  if (puVar18 < puVar8) {
LAB_10b1aca1c:
    if ((ulong)puVar8 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1acca4);
      (*pcVar2)();
    }
    lVar7 = (long)puVar8 << 3;
    __Znwm(lVar7);
    FUN_10b1acd6c(plVar10,lVar7);
    puVar1[9] = puVar8;
    lVar7 = puVar1[8];
    for (puVar18 = (undefined8 *)0x0; puVar8 != puVar18; puVar18 = (undefined8 *)((long)puVar18 + 1)
        ) {
      *(undefined8 *)(lVar7 + (long)puVar18 * 8) = 0;
    }
    plVar12 = (long *)*plVar6;
    puVar18 = puVar8;
    if (plVar12 != (long *)0x0) {
      puVar14 = (undefined8 *)plVar12[1];
      uVar9 = (long)puVar8 - 1;
      uVar17 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        uVar17 = (ulong)puVar14 / (ulong)puVar8;
      }
      puVar15 = puVar14;
      if (puVar8 <= puVar14) {
        puVar15 = (undefined8 *)((long)puVar14 - uVar17 * (long)puVar8);
      }
      if (((ulong)puVar8 & uVar9) == 0) {
        puVar15 = (undefined8 *)((ulong)puVar14 & uVar9);
      }
      *(long **)(lVar7 + (long)puVar15 * 8) = plVar6;
      while (plVar13 = plVar12, plVar12 = (long *)*plVar13, plVar12 != (long *)0x0) {
        puVar14 = (undefined8 *)plVar12[1];
        if (((ulong)puVar8 & uVar9) == 0) {
          puVar14 = (undefined8 *)((ulong)puVar14 & uVar9);
        }
        else if (puVar8 <= puVar14) {
          uVar17 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            uVar17 = (ulong)puVar14 / (ulong)puVar8;
          }
          puVar14 = (undefined8 *)((long)puVar14 - uVar17 * (long)puVar8);
        }
        if (puVar14 != puVar15) {
          if (*(long *)(lVar7 + (long)puVar14 * 8) == 0) {
            *(long **)(lVar7 + (long)puVar14 * 8) = plVar13;
            puVar15 = puVar14;
          }
          else {
            func_0x00010b1ad850();
            lVar7 = extraout_x8_00;
            uVar9 = extraout_x9_00;
            plVar12 = extraout_x10;
            puVar15 = extraout_x11;
          }
        }
      }
    }
  }
  else if (puVar8 < puVar18) {
    puVar14 = (undefined8 *)(long)((float)(ulong)puVar1[0xb] / *(float *)(puVar1 + 0xc));
    if ((puVar18 < (undefined8 *)0x3) || (((ulong)puVar18 & (long)puVar18 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b1ad830();
    }
    if (puVar8 <= puVar14) {
      puVar8 = puVar14;
    }
    if (puVar8 < puVar18) {
      if (puVar8 != (undefined8 *)0x0) goto LAB_10b1aca1c;
      FUN_10b1acd6c(plVar10,0);
      puVar1[9] = 0;
      puVar18 = (undefined8 *)0x0;
    }
    else {
      puVar18 = (undefined8 *)puVar1[9];
    }
  }
  if (((ulong)puVar18 & (long)puVar18 - 1U) == 0) {
    unaff_x28 = (undefined8 *)((long)puVar18 - 1U & (ulong)puVar11);
  }
  else {
    unaff_x28 = puVar11;
    if (puVar18 <= puVar11) {
      uVar17 = 0;
      if (puVar18 != (undefined8 *)0x0) {
        uVar17 = (ulong)puVar11 / (ulong)puVar18;
      }
      unaff_x28 = (undefined8 *)((long)puVar11 - uVar17 * (long)puVar18);
    }
  }
LAB_10b1acb78:
  lVar7 = *plVar10;
  plVar10 = *(long **)(lVar7 + (long)unaff_x28 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar16 = *plVar6;
    *plVar6 = (long)plVar16;
    *(long **)(lVar7 + (long)unaff_x28 * 8) = plVar6;
    if (*plVar16 != 0) {
      puVar11 = *(undefined8 **)(*plVar16 + 8);
      if (((ulong)puVar18 & (long)puVar18 - 1U) == 0) {
        puVar11 = (undefined8 *)((ulong)puVar11 & (long)puVar18 - 1U);
      }
      else if (puVar18 <= puVar11) {
        uVar17 = 0;
        if (puVar18 != (undefined8 *)0x0) {
          uVar17 = (ulong)puVar11 / (ulong)puVar18;
        }
        puVar11 = (undefined8 *)((long)puVar11 - uVar17 * (long)puVar18);
      }
      *(long **)(lVar7 + (long)puVar11 * 8) = plVar16;
    }
  }
  else {
    *plVar16 = *plVar10;
    *plVar10 = (long)plVar16;
  }
  plStack_78 = (long *)0x0;
  puVar1[0xb] = puVar1[0xb] + 1;
  FUN_10b1acd84(&plStack_78);
LAB_10b1acbf0:
  func_0x00010b1ad980();
  FUN_10b1acce8(param_1,plVar16 + 5);
  if (*param_1 == 0) {
    func_0x00010b125888(param_1);
    (*(code *)*param_3)(param_1,param_3);
    func_0x00010b1acd24(plVar16 + 5,*param_1,param_1[1]);
  }
  func_0x000107c2798c(&puStack_90);
  return;
}



/* Entry: 10b1acce8; end: 10b1acd6b;  */

void FUN_10b1acce8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10b1acd6c; end: 10b1acd83;  */

void FUN_10b1acd6c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1acd84; end: 10b1acdcb;  */

long * FUN_10b1acd84(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10b1abf6c(lVar1 + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    func_0x00010b1ad9ac();
  }
  return param_1;
}



/* Entry: 10b1acdcc; end: 10b1acffb;  */

void FUN_10b1acdcc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w12;
  int extraout_w12_00;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar2 = *(undefined8 **)(param_2 + 0x18);
  uVar1 = **(undefined8 **)(param_2 + 0x10);
  lVar3 = (*(undefined8 **)(param_2 + 0x10))[1];
  puVar6 = (undefined8 *)0x170;
  __Znwm();
  plVar8 = puVar6 + 1;
  *plVar8 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110cc30d8;
  puVar10 = puVar6 + 3;
  if (lVar3 != 0) {
    do {
      FUN_10b1ad778();
    } while (extraout_w10 != 0);
  }
  uVar7 = *puVar2;
  lVar9 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  *puVar10 = 0;
  puVar6[4] = 0;
  puVar6[5] = uVar1;
  puVar6[6] = lVar3;
  uStack_80 = 0;
  lStack_78 = 0;
  puVar6[7] = uVar7;
  puVar6[8] = lVar9;
  uStack_90 = 0;
  uStack_88 = 0;
  if (lVar3 != 0) {
    do {
      func_0x00010b1ad924();
      uVar7 = extraout_x8;
      lVar9 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uVar11 = 0;
  if (lVar9 != 0) {
    do {
      func_0x00010b1ad924();
      uVar7 = extraout_x8_00;
      uVar11 = extraout_x9_00;
    } while (extraout_w12_00 != 0);
  }
  puVar6[9] = uVar1;
  puVar6[10] = lVar3;
  puStack_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  puVar6[0xb] = uVar7;
  puVar6[0xc] = uVar11;
  uStack_70 = 0;
  lStack_68 = 0;
  puVar6[0xd] = 0x32aaaba7;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  puVar6[0x15] = 0;
  puVar6[0x14] = 0;
  puVar6[0x17] = 0;
  puVar6[0x16] = 0;
  puVar6[0x18] = 0;
  *(undefined4 *)(puVar6 + 0x19) = 0x3f800000;
  puVar6[0x1b] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x1c] = 0;
  *(undefined4 *)(puVar6 + 0x1e) = 0x3f800000;
  func_0x00010b1ad820();
  func_0x00010b1257f8(&puStack_60);
  puVar6[0x1f] = 0x32aaaba7;
  puVar6[0x21] = 0;
  puVar6[0x20] = 0;
  puVar6[0x23] = 0;
  puVar6[0x22] = 0;
  puVar6[0x25] = 0;
  puVar6[0x24] = 0;
  puVar6[0x27] = 0;
  puVar6[0x26] = 0;
  puVar6[0x29] = 0;
  puVar6[0x28] = 0;
  puVar6[0x2a] = 0;
  *(undefined4 *)(puVar6 + 0x2b) = 0x3f800000;
  puVar6[0x2c] = 0;
  *(undefined4 *)(puVar6 + 0x2d) = 1;
  func_0x00010b1ad944();
  func_0x00010b1257f8(&uStack_80);
  *param_1 = puVar10;
  param_1[1] = puVar6;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = *plVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puStack_60 = puVar10;
  puStack_58 = puVar6;
  func_0x00010b1acd24(puVar10,puVar10,puVar6);
  func_0x00010b125888(&puStack_60);
  uVar1 = puVar6[3];
  lVar3 = puVar6[4];
  uStack_80 = uVar1;
  lStack_78 = lVar3;
  if (lVar3 != 0) {
    do {
      FUN_10b1ad778();
    } while (extraout_w10_00 != 0);
  }
  lVar9 = puVar6[8];
  uVar11 = puVar6[8];
  puVar10 = (undefined8 *)puVar6[7];
  uVar7 = 0xc0;
  __Znwm(0xc0);
  puStack_60 = puVar10;
  puStack_58 = (undefined8 *)uVar11;
  if (lVar9 != 0) {
    do {
      FUN_10b1ad778();
    } while (extraout_w10_01 != 0);
  }
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_70 = uVar1;
  lStack_68 = lVar3;
  FUN_10b1afc2c(uVar7,&puStack_60,&uStack_70);
  FUN_10b1abf6c(&uStack_70);
  func_0x00010b1257d4(&puStack_60);
  uStack_90 = 0;
  FUN_10b1abfb8(puVar6 + 0x2c,uVar7);
  func_0x00010b1abf94(&uStack_90);
  FUN_10b1abf6c(&uStack_80);
  return;
}



/* Entry: 10b1acffc; end: 10b1acfff;  */

void FUN_10b1acffc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc30d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1ad000; end: 10b1ad013;  */

void FUN_10b1ad000(void)

{
  FUN_10b1ad0dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1ad014; end: 10b1ad0db;  */

long FUN_10b1ad014(long param_1)

{
  long lVar1;
  long *plVar2;
  
  func_0x00010b1abf94(param_1 + 0x160);
  plVar2 = *(long **)(param_1 + 0x148);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x00010b1ac624(lVar1);
    func_0x00010b1ad9ac();
  }
  lVar1 = *(long *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xf8);
  func_0x000107c278e0(param_1 + 0xd0);
  plVar2 = *(long **)(param_1 + 0xb8);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10b1ad0f0(lVar1);
    func_0x00010b1ad9ac();
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  func_0x00010b1257d4(param_1 + 0x58);
  func_0x00010b1257f8(param_1 + 0x48);
  func_0x00010b1257d4(param_1 + 0x38);
  func_0x00010b1257f8(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 10b1ad0dc; end: 10b1ad0ef;  */

void FUN_10b1ad0dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1ad0f0; end: 10b1ad137;  */

void FUN_10b1ad0f0(void)

{
  func_0x00010b1ad9dc();
  func_0x00010b1ad110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1ad138; end: 10b1ad153;  */

void FUN_10b1ad138(void)

{
  return;
}



/* Entry: 10b1ad154; end: 10b1ad18f;  */

undefined8 * FUN_10b1ad154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_10b1ad190();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



/* Entry: 10b1ad190; end: 10b1ad1b3;  */

void FUN_10b1ad190(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1abf44();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b1ad1b4; end: 10b1ad27b;  */

void FUN_10b1ad1b4(long param_1)

{
  undefined1 auStack_30 [8];
  
  FUN_10b12d0d0(param_1 + 0x50);
  func_0x00010b1ad994();
  FUN_10b124fa8(param_1 + 0x38);
  func_0x00010b1ad904();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000107c27b6c(param_1 + 0x10,&stack0xffffffffffffffd8);
  }
  else {
    func_0x00010b1ad8b4();
    func_0x000104bf33ec(param_1 + 0x10,&stack0xffffffffffffffd8);
    __ZNSt13exception_ptrD1Ev(auStack_30);
  }
  func_0x00010b1ad894();
  func_0x00010b1ad7f8();
  return;
}



/* Entry: 10b1ad27c; end: 10b1ad2a7;  */

void FUN_10b1ad27c(long param_1)

{
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    func_0x00010b1ad994();
  }
  func_0x00010b1ad894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1ad2a8; end: 10b1ad72f;  */

void FUN_10b1ad2a8(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong extraout_x8;
  undefined8 uVar8;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  
  if (*(char *)(param_1 + 0x1a) == '\0') {
    FUN_10b113e08(param_1 + 0xe,param_1 + 0x10);
    func_0x00010b1ad968();
    FUN_10b113eb4(param_1 + 0x10,param_1 + 0xe,param_1 + 0xb);
    FUN_10b1ab8c8(&puStack_60,param_1 + 0x10);
    puVar9 = puStack_60;
    if (puStack_60 == (undefined8 *)0x0) {
      iVar11 = 0;
    }
    else {
      func_0x00010b1ad7e4();
      iVar11 = 3;
    }
    func_0x00010b1ad808();
    if (puVar9 != (undefined8 *)0x0) goto LAB_10b1ad400;
    FUN_10b13e1a0(&puStack_70,param_1[0x10]);
    puVar9 = puStack_70;
    if (puStack_70 == (undefined8 *)0x0) {
      iVar11 = 0;
    }
    else {
      param_1[0x12] = puStack_70;
      param_1[0x13] = uStack_68;
      puStack_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      FUN_10b1ab77c(&puStack_60,param_1 + 0x10,param_1 + 0x12);
      func_0x00010b1ad7e4();
      func_0x00010b1ad808();
      func_0x00010b1ad8fc();
      iVar11 = 3;
    }
    func_0x00010b1ad7f0();
    if (puVar9 != (undefined8 *)0x0) goto LAB_10b1ad400;
    func_0x00010b1ad9c4();
    puVar9 = param_1 + 0x16;
    FUN_10b113ed8();
    if (((ulong)puVar9 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1a) = 1;
      __ZNSt3__115recursive_mutex4lockEv(param_1[0x16]);
      lVar6 = param_1[0x16];
      if ((*(byte *)(lVar6 + 0x58) & 1) != 0) {
        func_0x00010b1ad9bc();
        func_0x00010b1ad8ec(*param_1);
        return;
      }
      plVar10 = *(long **)(lVar6 + 0x68);
      bVar3 = *(long **)(lVar6 + 0x70) <= plVar10;
      if (bVar3) {
        lVar12 = *(long *)(lVar6 + 0x60);
        lVar13 = (long)plVar10 - lVar12;
        if ((lVar13 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b1ad62c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1ad630);
          (*pcVar2)();
        }
        func_0x00010b1ad870((long)*(long **)(lVar6 + 0x70) - lVar12);
        uVar1 = extraout_x9_01;
        if (bVar3) {
          uVar1 = extraout_x8;
        }
        if (uVar1 == 0) {
          lVar5 = 0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1ad62c;
          }
          lVar5 = uVar1 << 3;
          __Znwm();
        }
        plVar10 = (long *)(lVar5 + lVar13);
        plVar14 = plVar10 + 1;
        *plVar10 = (long)param_1;
        _memcpy(plVar10 + -(lVar13 >> 3),lVar12,lVar13);
        *(long **)(lVar6 + 0x60) = plVar10 + -(lVar13 >> 3);
        *(long **)(lVar6 + 0x68) = plVar14;
        *(ulong *)(lVar6 + 0x70) = lVar5 + uVar1 * 8;
        if (lVar12 != 0) {
          __ZdlPv(lVar12);
        }
      }
      else {
        plVar14 = plVar10 + 1;
        *plVar10 = (long)param_1;
      }
      *(long **)(lVar6 + 0x68) = plVar14;
      func_0x00010b1ad9bc();
      return;
    }
  }
  puVar4 = param_1 + 0x16;
  FUN_10b113f00();
  puVar9 = (undefined8 *)*puVar4;
  param_1[0x14] = puVar9;
  lVar6 = puVar4[1];
  param_1[0x15] = lVar6;
  if (lVar6 != 0) {
    do {
      FUN_10b1ad778();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1ad818();
  lStack_58 = puVar9[2];
  puStack_60 = (undefined8 *)puVar9[1];
  if (puVar9[2] != 0) {
    do {
      FUN_10b1ad778();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b126248(&puStack_70);
  func_0x00010b1ad89c();
  param_1[0x19] = uStack_68;
  param_1[0x18] = puStack_70;
  puStack_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_10b1ab77c(&puStack_60,param_1 + 0x10,param_1 + 0x18);
  func_0x00010b1ad7e4();
  func_0x00010b1ad808();
  func_0x00010b1ad8e4();
  func_0x00010b1ad7f0();
  func_0x00010b1ad8dc();
  iVar11 = 3;
LAB_10b1ad400:
  func_0x00010b1ad970();
  func_0x00010b1ad828();
  func_0x00010b1ad800();
  if (iVar11 == 3) {
    func_0x00010b1ad914();
    if (*(char *)(param_1 + 9) == '\x01') {
      puVar9 = param_1 + 3;
      __ZNSt3__112__get_sp_mutEPKv(puVar9);
      __ZNSt3__18__sp_mut4lockEv();
      puVar4 = (undefined8 *)param_1[3];
      lVar6 = param_1[4];
      param_1[3] = 0;
      param_1[4] = 0;
      __ZNSt3__18__sp_mut6unlockEv(puVar9);
      puStack_60 = puVar4;
      lStack_58 = lVar6;
      __ZNSt3__15mutex4lockEv(puVar4 + 9);
      uVar7 = param_1[7];
      if (*(char *)(puVar4 + 2) == '\x01') {
        uVar8 = param_1[8];
        param_1[7] = 0;
        param_1[8] = 0;
        lVar6 = puVar4[1];
        *puVar4 = uVar7;
        puVar4[1] = uVar8;
        puVar9 = puStack_60;
        if (lVar6 != 0) {
          do {
            func_0x00010b1ad7a8();
          } while (extraout_w11 != 0);
          puVar9 = puStack_60;
          if (extraout_x9 == 0) {
            func_0x00010b1ad788();
            func_0x00010b1ad810();
            puVar9 = puStack_60;
          }
        }
      }
      else {
        *puVar4 = uVar7;
        puVar4[1] = param_1[8];
        param_1[7] = 0;
        param_1[8] = 0;
        *(undefined1 *)(puVar4 + 2) = 1;
        puVar9 = puVar4;
      }
      plVar10 = (long *)puVar9[0x12];
      puVar9[0x12] = 0;
      __ZNSt3__15mutex6unlockEv(puVar4 + 9);
      if (plVar10 == (long *)0x0) {
        __ZNSt3__118condition_variable10notify_allEv(puVar9 + 3);
      }
      else {
        (**(code **)(*plVar10 + 0x10))(plVar10,&puStack_60);
        func_0x00010b1ad798();
      }
      if (lStack_58 != 0) {
        do {
          func_0x00010b1ad7a8();
        } while (extraout_w11_00 != 0);
        if (extraout_x9_00 == 0) {
          func_0x00010b1ad788();
          func_0x00010b1ad810();
        }
      }
    }
    else {
      func_0x00010b1ad8b4();
      puStack_60 = puVar9;
      FUN_10b128c20(param_1 + 2,&puStack_60);
      __ZNSt13exception_ptrD1Ev(&puStack_70);
    }
  }
  func_0x00010b1ad88c();
  func_0x00010b1ad7f8();
  return;
}



/* Entry: 10b1ad730; end: 10b1ad777;  */

void FUN_10b1ad730(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\0') {
    func_0x00010b1ad968();
  }
  else {
    if (*(char *)(param_1 + 0xd0) == '\x02') goto LAB_10b1ad768;
    func_0x00010b1ad818();
    func_0x00010b1ad970();
    func_0x00010b1ad828();
  }
  func_0x00010b1ad800();
LAB_10b1ad768:
  func_0x00010b1ad88c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1ad778; end: 10b1ad9fb;  */

void FUN_10b1ad778(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b1ad9fc; end: 10b1adb3f;  */

void FUN_10b1ad9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000113839598 & 1) == 0) {
    iVar1 = 0x13839598;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10b1aec40(&puStack_68,&PTR_DAT_110cc3130);
      FUN_10b1aedbc(0x113839560,&puStack_68);
      func_0x00010b1aee18(&puStack_68);
      ___cxa_guard_release(0x113839598);
    }
  }
  if ((bRam00000001138395c0 & 1) == 0) {
    iVar1 = 0x138395c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (cRam0000000113839590 == '\x01') {
        FUN_10b1adc14(&puStack_68,0x113839560);
      }
      else {
        puStack_68 = &UNK_10e52b660;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
      }
      FUN_10b1aee38(0x1138395a0,&puStack_68);
      FUN_10b1af194(&puStack_68);
      ___cxa_guard_release(0x1138395c0);
    }
  }
  FUN_10b1adb40(param_1,0x1138395a0,param_2,param_3);
  return;
}



/* Entry: 10b1adb40; end: 10b1adc13;  */

void FUN_10b1adb40(undefined1 *param_1,long param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uStack_50;
  undefined1 uStack_4c;
  uint uStack_48;
  undefined1 uStack_44;
  
  puVar1 = &uStack_50;
  uStack_4c = 1;
  uStack_44 = 1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  FUN_10b1aea34();
  if (param_2 == 0) {
    uStack_4c = 1;
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_44 = 0;
    uStack_50 = param_3;
    func_0x00010b1afbb4();
    if (param_2 == 0) {
      uStack_50 = uStack_50 & 0xffffff00;
      uStack_4c = 0;
      uStack_44 = 1;
      uStack_48 = param_4;
      func_0x00010b1afbb4();
      if (param_2 == 0) {
        uStack_50 = uStack_50 & 0xffffff00;
        uStack_4c = 0;
        uStack_48 = uStack_48 & 0xffffff00;
        uStack_44 = 0;
        func_0x00010b1afbb4();
        if (param_2 == 0) {
          *param_1 = 0;
          param_1[0x50] = 0;
          return;
        }
      }
    }
  }
  FUN_10b2522f0(param_1,0,*(undefined8 *)((long)puVar1 + 0x10));
  param_1[0x50] = 1;
  return;
}



/* Entry: 10b1adc14; end: 10b1add8f;  */

void FUN_10b1adc14(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar5 = *(ulong *)(param_2 + 0x10);
  puVar6 = (ulong *)(param_2 + 0x10);
  if ((uVar5 & 1) != 0) {
    puVar6 = (ulong *)(uVar5 + 7);
  }
  puVar1 = puVar6 + *(int *)(param_2 + 0x18);
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    uVar5 = *puVar6;
    iVar4 = *(int *)(uVar5 + 0x10);
    iVar3 = *(int *)(uVar5 + 0x28);
    if (iVar4 == 0 && iVar3 == 0) {
      func_0x00010b1afafc();
    }
    else if (iVar4 == 0) {
      for (lVar7 = (long)iVar3 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
        func_0x00010b1afafc();
      }
    }
    else {
      lVar7 = *(long *)(uVar5 + 0x18);
      if (iVar3 == 0) {
        for (lVar7 = (long)iVar4 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
          func_0x00010b1afafc();
        }
      }
      else {
        lVar2 = lVar7 + (long)iVar4 * 4;
        for (; lVar7 != lVar2; lVar7 = lVar7 + 4) {
          for (lVar8 = (long)*(int *)(uVar5 + 0x28) << 2; lVar8 != 0; lVar8 = lVar8 + -4) {
            func_0x00010b1afafc();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b1add90; end: 10b1adfd3;  */

ulong FUN_10b1add90(long *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,
                   uint param_6,long param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  ulong auStack_80 [2];
  
  lVar13 = *param_1;
  if (((param_2 < 1 || (long)param_3 < 1) || (long)param_4 < 1) ||
     (uVar16 = param_1[2], (long)uVar16 < 1 || lVar13 < 1)) {
    uVar14 = 0;
    uVar15 = 0x100000000;
    goto LAB_10b1adde4;
  }
  if (param_2 < lVar13) {
    if ((*(byte *)(param_7 + 0x3d) & 1) != 0) {
LAB_10b1ade48:
      uVar14 = 0;
      uVar9 = (ulong)*(int *)(param_7 + 0x40);
      uVar15 = 0x300000000;
      if ((*(int *)(param_7 + 0x40) < 1) || (fVar18 = *(float *)(param_7 + 0x44), fVar18 <= 0.0))
      goto LAB_10b1adde4;
      uVar15 = param_3 * param_2;
      uVar17 = uVar15 >> 3;
      uVar14 = param_4;
      if (uVar15 >> 3 <= param_4) {
        uVar14 = uVar17;
      }
      if (7 < uVar15) {
        param_4 = uVar14;
      }
      if ((long)param_5 <= (long)param_4) {
        param_5 = param_4;
      }
      if ((param_6 & 1) == 0) {
        param_5 = param_4;
      }
      uVar14 = param_5;
      if (uVar15 >> 3 <= param_5) {
        uVar14 = uVar17;
      }
      if (7 < uVar15) {
        param_5 = uVar14;
      }
      lVar12 = param_1[1];
      FUN_10b4a1840(auStack_80);
      uVar5 = auStack_80[0];
      uVar4 = auStack_80[0];
      uVar6 = param_4;
      FUN_10b1adfd4();
      uVar10 = (long)(fVar18 * (float)uVar16) - lVar12;
      uVar10 = uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU);
      FUN_10b1adfd4();
      uVar7 = (ulong)(fVar18 * (float)uVar17);
      uVar16 = auStack_80[0];
      FUN_10b1adfd4();
      uVar17 = uVar4;
      uVar8 = uVar6;
      if (param_5 != param_4) {
        FUN_10b1adfd4();
        uVar17 = auStack_80[0];
        uVar8 = param_5;
      }
      uVar14 = 0;
      uVar15 = 0x400000000;
      if (((((uVar6 & 1) != 0) && ((uVar10 & 1) != 0)) && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0))
      {
        if (-1 < (long)(uVar5 | uVar4 | uVar16 | uVar17)) {
          lVar12 = (long)(fVar18 * (float)param_3);
          uVar14 = uVar9;
          if ((long)uVar17 <= (long)uVar9) {
            uVar14 = uVar17;
          }
          lVar11 = uVar16 - uVar14;
          if (param_2 < lVar13) {
            bVar2 = lVar12 <= (long)uVar5;
            bVar1 = bVar2 && SBORROW8(lVar11,lVar12);
            bVar3 = bVar2 && lVar11 == lVar12;
            bVar2 = bVar2 && lVar11 - lVar12 < 0;
          }
          else {
            bVar1 = SBORROW8(lVar11,lVar12);
            bVar2 = lVar11 - lVar12 < 0;
            bVar3 = lVar11 == lVar12;
          }
          if ((bVar3 || bVar2 != bVar1) && (long)uVar4 <= (long)uVar9) {
            uVar15 = 0;
            uVar14 = 1;
            goto LAB_10b1adfac;
          }
        }
        uVar14 = 0;
        uVar15 = 0x500000000;
      }
LAB_10b1adfac:
      func_0x000107c27f58(auStack_80);
      goto LAB_10b1adde4;
    }
  }
  else if (*(char *)(param_7 + 0x3c) == '\x01') goto LAB_10b1ade48;
  uVar14 = 0;
  uVar15 = 0x200000000;
LAB_10b1adde4:
  uVar16 = 0x100;
  if (lVar13 <= param_2) {
    uVar16 = 0;
  }
  return uVar14 | uVar15 | uVar16;
}



/* Entry: 10b1adfd4; end: 10b1ae0a3;  */

undefined1  [16] FUN_10b1adfd4(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_68 [24];
  long lStack_50;
  long lStack_48;
  
  if (param_2 == 0) {
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 1;
  }
  else if (param_1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c278b8(auStack_68,&DAT_10f7317b2);
    FUN_10b4a1970(&lStack_50,param_1,param_2,auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
    if ((lStack_50 == lStack_48) || (uVar1 = *(ulong *)(lStack_50 + 8), (long)uVar1 < 1)) {
      uVar2 = 0;
      uVar1 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 0x7fffffffffffff00;
      uVar1 = uVar1 & 0xff;
      uVar2 = 1;
    }
    func_0x000107c2be38(&lStack_50);
  }
  auVar4._0_8_ = uVar3 | uVar1;
  auVar4._8_8_ = uVar2;
  return auVar4;
}



/* Entry: 10b1ae0a4; end: 10b1ae0f3;  */

long FUN_10b1ae0a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  func_0x00010b1afba8();
  lVar1 = uStack_28 + 0x28;
  func_0x000106886674(lVar1,param_2);
  func_0x00010b1afba0();
  return lVar1;
}



/* Entry: 10b1ae0f4; end: 10b1ae11f;  */

void FUN_10b1ae0f4(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b1ae120; end: 10b1ae263;  */

undefined1 *
FUN_10b1ae120(undefined1 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010b1afb68();
  uStack_58 = extraout_x8;
  func_0x00010b1afb50();
  if (extraout_x8_00 != 0) {
    bVar2 = *(byte *)(param_3 + 0x17);
    in_ZR = bVar2 == 0;
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    if (uVar1 != 0) {
      func_0x00010b1afba8();
      param_1 = puStack_c8;
      FUN_10b1ae264(puStack_c8,param_3);
      if (((ulong)param_1 & 1) == 0) {
        func_0x00010b1afbc0(puStack_c8);
        func_0x000106886674();
        if (((ulong)param_1 & 1) == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_c0,param_2);
          uStack_70 = 0;
          uStack_78 = 0;
          uStack_60 = 0;
          uStack_68 = 0;
          puStack_88 = &UNK_1053a6a3c;
          ppuStack_80 = &PTR_DAT_110873830;
          uStack_a8 = param_4;
          uStack_a4 = param_5;
          uStack_a0 = param_6;
          uStack_98 = param_7;
          uStack_90 = param_8;
          func_0x00010b1ae280(puStack_c8,param_3);
          FUN_10b1ae2b4();
          param_1 = auStack_c0;
          func_0x00010b1ad110(param_1);
          func_0x00010b1afbc0(puStack_c8);
          func_0x000107c27d10();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        }
      }
      func_0x00010b1afba0();
    }
  }
  func_0x00010b1afb10(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar3 = auStack_c0;
  func_0x00010b1ad110(puVar3);
  func_0x00010b1afba0();
  func_0x00010b1afb78();
  FUN_10b1af25c();
  return (undefined1 *)(ulong)(puVar3 != (undefined1 *)0x0);
}



/* Entry: 10b1ae264; end: 10b1ae2b3;  */

bool FUN_10b1ae264(long param_1)

{
  FUN_10b1af25c();
  return param_1 != 0;
}



/* Entry: 10b1ae2b4; end: 10b1ae33f;  */

long FUN_10b1ae2b4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c27b9c();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000107c28168(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



/* Entry: 10b1ae340; end: 10b1ae533;  */

/* WARNING: Removing unreachable block (ram,0x00010b1ae510) */
/* WARNING: Removing unreachable block (ram,0x00010b1ae514) */
/* WARNING: Removing unreachable block (ram,0x00010b1ae518) */

undefined8 * FUN_10b1ae340(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_1f0 [16];
  long lStack_1e0;
  undefined8 auStack_1d8 [13];
  byte bStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [24];
  undefined *apuStack_e8 [5];
  undefined1 auStack_c0 [40];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = param_1;
  func_0x00010b1afb68();
  uStack_48 = extraout_x8;
  FUN_10b1f7264(*puVar2);
  uVar7 = *(undefined8 *)param_1[2];
  uVar6 = 0xde;
  if (*(char *)(param_2 + 0x20) == '\0') {
    uVar6 = 0xdf;
  }
  uVar9 = (ulong)uVar6;
  FUN_10b12983c(apuStack_e8,*(undefined4 *)(param_2 + 0x18));
  func_0x00010b12aca4(auStack_c0,*(undefined4 *)(param_2 + 0x1c));
  __ZNSt3__19to_stringEx(&uStack_118,*(undefined8 *)(param_2 + 0x28));
  puStack_98 = &UNK_10f73177e;
  uStack_90 = 9;
  uStack_80 = uStack_110;
  uStack_88 = uStack_118;
  uStack_78 = uStack_108;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  __ZNSt3__19to_stringEx(&uStack_130,*(undefined8 *)(param_2 + 0x30));
  puStack_70 = &UNK_10f731788;
  uStack_68 = 8;
  uStack_58 = uStack_128;
  uStack_60 = uStack_130;
  uStack_50 = uStack_120;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  func_0x00010b120648(auStack_100,apuStack_e8,4);
  puVar5 = auStack_100;
  FUN_10b114b00(uVar7,uVar9,puVar5,1);
  FUN_10b120998(auStack_100);
  lVar8 = 0x88;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)apuStack_e8 + lVar8);
    lVar8 = lVar8 + -0x28;
    uVar1 = lVar8 == -0x18;
  } while (!(bool)uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
  puVar2 = &uStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1afb10(uStack_48);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  FUN_10b120998(auStack_100);
  puVar3 = &uStack_60;
  lVar8 = -0xa0;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    iVar4 = (int)puVar5;
    puVar3 = puVar3 + -5;
    lVar8 = lVar8 + 0x28;
  } while (lVar8 != 0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
  puVar3 = &uStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  uVar1 = apuStack_e8 == &puStack_70;
  func_0x00010b1afb78();
  uStack_150 = 1;
  pcStack_138 = FUN_10b1ae534;
  lStack_160 = param_2;
  ppuStack_158 = &puStack_70;
  puStack_148 = puVar2;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010b1afb68();
  uStack_168 = extraout_x8_00;
  func_0x00010b1afb50();
  if (extraout_x8_01 != 0) {
    auStack_1d8[0]._0_1_ = 0;
    bStack_170 = 0;
    FUN_10b1ae0f4(auStack_1f0,puVar3 + 4);
    lVar8 = lStack_1e0;
    FUN_10b1af7c4(lStack_1e0,uVar9);
    uVar1 = iVar4 == 2;
    if ((!(bool)uVar1) && (lVar8 != 0)) {
      FUN_10b1ae630(auStack_1d8,lVar8 + 0x28);
      FUN_10b1af884(lStack_1e0 + 0x28,auStack_1d8);
      FUN_10b1af9d8(lStack_1e0,lVar8);
    }
    func_0x000107c2798c(auStack_1f0);
    if ((iVar4 == 0) && ((bStack_170 & 1) != 0)) {
      FUN_10b1ae340(puVar3,auStack_1d8,uVar9);
    }
    puVar3 = auStack_1d8;
    FUN_10b1af23c();
  }
  func_0x00010b1afb10(uStack_168);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar2 = auStack_1d8;
    FUN_10b1af23c();
    func_0x00010b1afb78();
    if (*(char *)(puVar2 + 0xd) == '\x01') {
      FUN_10b1ae2b4();
    }
    else {
      FUN_10b1af1c4();
    }
    return puVar2;
  }
  return puVar3;
}



/* Entry: 10b1ae534; end: 10b1ae62f;  */

undefined1 * FUN_10b1ae534(undefined1 *param_1,undefined8 param_2,int param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined1 auStack_a8 [104];
  byte bStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1afb68();
  uStack_38 = extraout_x8;
  func_0x00010b1afb50();
  if (extraout_x8_00 != 0) {
    auStack_a8[0] = 0;
    bStack_40 = 0;
    FUN_10b1ae0f4(auStack_c0,param_1 + 0x20);
    lVar1 = lStack_b0;
    FUN_10b1af7c4(lStack_b0,param_2);
    in_ZR = param_3 == 2;
    if ((!(bool)in_ZR) && (lVar1 != 0)) {
      FUN_10b1ae630(auStack_a8,lVar1 + 0x28);
      FUN_10b1af884(lStack_b0 + 0x28,auStack_a8);
      FUN_10b1af9d8(lStack_b0,lVar1);
    }
    func_0x000107c2798c(auStack_c0);
    if ((param_3 == 0) && ((bStack_40 & 1) != 0)) {
      FUN_10b1ae340(param_1,auStack_a8,param_2);
    }
    param_1 = auStack_a8;
    FUN_10b1af23c();
  }
  func_0x00010b1afb10(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = auStack_a8;
  FUN_10b1af23c();
  func_0x00010b1afb78();
  if (puVar2[0x68] == '\x01') {
    FUN_10b1ae2b4();
  }
  else {
    FUN_10b1af1c4();
  }
  return puVar2;
}



/* Entry: 10b1ae630; end: 10b1ae663;  */

long FUN_10b1ae630(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_10b1ae2b4();
  }
  else {
    FUN_10b1af1c4();
  }
  return param_1;
}



/* Entry: 10b1ae664; end: 10b1aea33;  */

undefined1  [16] FUN_10b1ae664(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  uint6 uVar15;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined8 uVar16;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_130 [4];
  undefined1 uStack_12c;
  undefined1 auStack_128 [4];
  undefined1 uStack_124;
  long lStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [24];
  ulong auStack_a8 [2];
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *pcStack_70;
  long lStack_68;
  byte bStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1afb68();
  uStack_38 = extraout_x8;
  func_0x00010b1afb50();
  if (extraout_x8_00 == 0) {
    lVar10 = 0;
    goto LAB_10b1ae934;
  }
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  plVar5 = param_1 + 4;
  FUN_10b1ae0f4(auStack_a8);
  func_0x00010b1afb94(uStack_98);
  if (plVar5 == (long *)0x0) {
    func_0x00010b1afc24();
    lVar10 = 0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_110,plVar5 + 5)
    ;
    func_0x00010b1afc24();
    puVar9 = (ulong *)*param_1;
    func_0x00010b1afc10(auStack_a8);
    uStack_f8._0_1_ = 0;
    uStack_f8._4_1_ = 0;
    param_2 = auStack_a8;
    FUN_10b1f6888(puVar9,param_2,&uStack_f8);
    func_0x00010b121e00(auStack_a8);
    if ((int)puVar9 == 0) {
      auStack_a8[0]._0_1_ = 0;
      bStack_40 = 0;
      plVar5 = param_1 + 4;
      FUN_10b1ae0f4(auStack_128);
      func_0x00010b1afb94(lStack_118);
      if (plVar5 == (long *)0x0) {
        lVar10 = *param_1;
        func_0x00010b1afc10(&uStack_f8);
        auStack_130[0] = 0;
        uStack_12c = 0;
        param_2 = &uStack_f8;
        FUN_10b1f6888(lVar10,param_2,auStack_130);
        func_0x00010b1afbfc();
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_110,plVar5 + 5);
        param_2 = &uStack_110;
        lVar10 = lStack_118;
        FUN_10b1af7c4();
        if (lVar10 != 0) {
          func_0x00010b1afbcc();
          FUN_10b1af9d8(lStack_118);
          param_2 = puVar9;
        }
        func_0x00010b1afbc0(lStack_118);
        func_0x00010b1af8b4();
        lVar10 = 0;
      }
      func_0x00010b1afba0();
      if (plVar5 != (long *)0x0) {
        if ((bStack_40 & 1) != 0) {
          in_ZR = *(char *)(lStack_68 + 8) == '\x01';
          if (!(bool)in_ZR) {
            (*pcStack_70)(&pcStack_70);
            in_ZR = bStack_40 == 1;
            if (!(bool)in_ZR) goto LAB_10b1ae920;
          }
          lVar10 = *param_1;
          func_0x00010b1afc10(&uStack_f8);
          auStack_128[0] = 0;
          uStack_124 = 0;
          param_2 = &uStack_f8;
          FUN_10b1f6888(lVar10,param_2,auStack_128);
          func_0x00010b1afbfc();
          if ((int)lVar10 == 0) {
            in_ZR = 0;
            if (bStack_40 == 1) {
              uVar16 = *(undefined8 *)param_1[2];
              FUN_10b12983c(&uStack_f8,uStack_90);
              func_0x00010b12aca4(auStack_d0,uStack_8c);
              func_0x00010b120648(auStack_128,&uStack_f8,2);
              param_2 = (ulong *)0xe1;
              FUN_10b114b00(uVar16,0xe1,auStack_128,1);
              FUN_10b120998(auStack_128);
              lVar10 = 0x38;
              do {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                          ((long)&uStack_f8 + lVar10);
                lVar10 = lVar10 + -0x28;
                in_ZR = lVar10 == -0x18;
              } while (!(bool)in_ZR);
            }
            goto LAB_10b1ae920;
          }
          func_0x00010b1afbec();
          goto LAB_10b1ae8a0;
        }
LAB_10b1ae920:
        lVar10 = 0;
      }
    }
    else {
      auStack_a8[0]._0_1_ = 0;
      bStack_40 = 0;
      param_1 = param_1 + 4;
      FUN_10b1ae0f4(&uStack_f8);
      func_0x00010b1afb94(lStack_e8);
      if (param_1 == (long *)0x0) {
LAB_10b1ae880:
        bVar4 = false;
        lVar10 = 1;
      }
      else {
        param_1 = param_1 + 5;
        param_2 = &uStack_110;
        func_0x000107c278d0();
        if (((ulong)param_1 & 1) == 0) goto LAB_10b1ae880;
        param_2 = &uStack_110;
        lVar10 = lStack_e8;
        FUN_10b1af7c4();
        if (lVar10 != 0) {
          func_0x00010b1afbcc();
          FUN_10b1af9d8(lStack_e8);
          param_2 = puVar9;
        }
        func_0x00010b1afbc0(lStack_e8);
        func_0x00010b1af8b4();
        lVar10 = 0;
        bVar4 = true;
      }
      func_0x000107c2798c(&uStack_f8);
      if (bVar4) {
        in_ZR = bStack_40 == 1;
        if ((bool)in_ZR) {
          func_0x00010b1afbec();
        }
LAB_10b1ae8a0:
        lVar10 = 1;
      }
    }
    FUN_10b1af23c(auStack_a8);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
LAB_10b1ae934:
  func_0x00010b1afb10(uStack_38);
  if ((bool)in_ZR) {
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = lVar10;
    return auVar23;
  }
  ___stack_chk_fail();
  func_0x00010b1afc04();
  FUN_10b120998();
  puVar6 = auStack_c0;
  lVar10 = -0x50;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
    puVar6 = puVar6 + -0x28;
    lVar10 = lVar10 + 0x28;
  } while (lVar10 != 0);
  FUN_10b1af23c(auStack_a8);
  puVar9 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1afb78();
  Hint_Prefetch(*puVar9,0,2,0);
  puVar7 = param_2;
  FUN_10b1aeb88(*puVar9);
  lVar10 = 0;
  uVar1 = puVar9[1];
  uVar2 = puVar9[2];
  uVar11 = *puVar9;
  uVar8 = uVar11 >> 0xc ^ (ulong)puVar7 >> 7;
  bVar3 = (byte)puVar7;
  uVar15 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar8 = uVar8 & uVar2;
    uVar16 = *(undefined8 *)(uVar11 + uVar8);
    cVar17 = (char)((ulong)uVar16 >> 8);
    cVar18 = (char)((ulong)uVar16 >> 0x10);
    cVar19 = (char)((ulong)uVar16 >> 0x18);
    cVar20 = (char)((ulong)uVar16 >> 0x20);
    cVar21 = (char)((ulong)uVar16 >> 0x28);
    bVar14 = (byte)((ulong)uVar16 >> 0x30);
    bVar22 = (byte)((ulong)uVar16 >> 0x38);
    for (uVar12 = CONCAT17(-(bVar22 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar14 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar21 == (char)(uVar15 >> 0x28)),
                                             CONCAT14(-(cVar20 == (char)(uVar15 >> 0x20)),
                                                      CONCAT13(-(cVar19 == (char)(uVar15 >> 0x18)),
                                                               CONCAT12(-(cVar18 ==
                                                                         (char)(uVar15 >> 0x10)),
                                                                        CONCAT11(-(cVar17 ==
                                                                                  (char)(uVar15 >> 8
                                                                                        )),
                                                                                 -((char)uVar16 ==
                                                                                  (char)uVar15))))))
                                   )) & 0x8080808080808080; uVar12 != 0;
        uVar12 = uVar12 - 1 & uVar12) {
      uVar13 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar8 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar2;
      puVar9 = (ulong *)(uVar1 + uVar13 * 0x18);
      puVar7 = param_2;
      FUN_10b1aeb2c(param_2,puVar9);
      if ((int)puVar7 != 0) {
        lVar10 = uVar11 + uVar13;
        goto LAB_10b1aeafc;
      }
    }
    bVar14 = NEON_umaxv(CONCAT17(-(bVar22 == 0x80),
                                 CONCAT16(-(bVar14 == 0x80),
                                          CONCAT15(-(cVar21 == -0x80),
                                                   CONCAT14(-(cVar20 == -0x80),
                                                            CONCAT13(-(cVar19 == -0x80),
                                                                     CONCAT12(-(cVar18 == -0x80),
                                                                              CONCAT11(-(cVar17 ==
                                                                                        -0x80),-((
                                                  char)uVar16 == -0x80)))))))),1);
    if ((bVar14 & 1) != 0) break;
    lVar10 = lVar10 + 8;
    uVar8 = lVar10 + uVar8;
  }
  lVar10 = 0;
LAB_10b1aeafc:
  auVar24._8_8_ = puVar9;
  auVar24._0_8_ = lVar10;
  return auVar24;
}



/* Entry: 10b1aea34; end: 10b1aeb2b;  */

undefined1  [16] FUN_10b1aea34(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined1 auVar19 [16];
  
  Hint_Prefetch(*param_1,0,2,0);
  uVar8 = param_2;
  FUN_10b1aeb88(*param_1);
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ uVar8 >> 7;
  bVar3 = (byte)uVar8;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar4 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar2;
      param_1 = (ulong *)(uVar1 + uVar9 * 0x18);
      uVar4 = param_2;
      FUN_10b1aeb2c(param_2,param_1);
      if ((int)uVar4 != 0) {
        lVar6 = uVar7 + uVar9;
        goto LAB_10b1aeafc;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  lVar6 = 0;
LAB_10b1aeafc:
  auVar19._8_8_ = param_1;
  auVar19._0_8_ = lVar6;
  return auVar19;
}



/* Entry: 10b1aeb2c; end: 10b1aeb87;  */

bool FUN_10b1aeb2c(uint *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = (byte)param_2[1];
  uVar3 = (uint)bVar1;
  uVar4 = (uint)(byte)param_1[1];
  if (bVar1 == (byte)param_1[1] && bVar1 != 0) {
    uVar3 = *param_2;
    uVar4 = *param_1;
  }
  if (uVar3 == uVar4) {
    bVar2 = (char)param_2[3] == (char)param_1[3];
    if (bVar2 && (char)param_2[3] != '\0') {
      bVar2 = param_2[2] == param_1[2];
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10b1aeb88; end: 10b1aebbf;  */

void FUN_10b1aeb88(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_LOOP_110c8acd8;
  FUN_10b1aebc0(&PTR_LOOP_110c8acd8,*param_1,*(undefined1 *)(param_1 + 1));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)ppuVar2 + (ulong)(uint)param_1[2];
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    ppuVar2 = (undefined **)
              (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)ppuVar2 + (ulong)(uint)param_1[2]) * -0x622015f714c7d297);
  }
  FUN_10b1aec14(ppuVar2,&stack0xffffffffffffffef);
  return;
}



/* Entry: 10b1aebc0; end: 10b1aebef;  */

void FUN_10b1aebc0(ulong param_1,ulong param_2,byte param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  byte bStack_11;
  
  uVar1 = param_1 + (param_2 & 0xffffffff);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  if ((param_3 & 1) != 0) {
    param_1 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
  }
  bStack_11 = param_3 & 1;
  FUN_10b1aec14(param_1,&bStack_11);
  return;
}



/* Entry: 10b1aebf0; end: 10b1aec13;  */

void FUN_10b1aebf0(undefined8 param_1,undefined1 param_2)

{
  undefined1 uStack_11;
  
  uStack_11 = param_2;
  FUN_10b1aec14(param_1,&uStack_11);
  return;
}



/* Entry: 10b1aec14; end: 10b1aec1b;  */

/* WARNING: Removing unreachable block (ram,0x000100062e10) */
/* WARNING: Removing unreachable block (ram,0x000100062dc4) */
/* WARNING: Removing unreachable block (ram,0x000100062d84) */
/* WARNING: Removing unreachable block (ram,0x000100062d64) */
/* WARNING: Removing unreachable block (ram,0x000100062d6c) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c794) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c7a4) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c7d8) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c810) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c818) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c858) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c880) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c884) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c860) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c7e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c7fc) */
/* WARNING: Removing unreachable block (ram,0x00010ae6c840) */

ulong FUN_10b1aec14(long param_1,ulong param_2)

{
  ulong extraout_x8;
  ulong extraout_x10;
  
  func_0x0001053abacc(param_2,1);
  func_0x000100061c28((param_2 & 0xffffffff) + param_1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10b1aec1c; end: 10b1aec3f;  */

void FUN_10b1aec1c(long param_1,undefined8 param_2)

{
  FUN_10b2522f0(param_1,0,param_2);
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 10b1aec40; end: 10b1aec4f;  */

void FUN_10b1aec40(undefined1 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  long lStack_30;
  
  func_0x000107c30194(&lStack_38,*param_2,param_2[1],param_2[4],param_2[5]);
  if (lStack_38 == lStack_30) {
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  else {
    ppuStack_68 = &PTR_FUN_110ccb5b0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    pppuVar2 = &ppuStack_68;
    func_0x000107c3034c(pppuVar2,lStack_38,(int)lStack_30 - (int)lStack_38);
    bVar1 = ((ulong)pppuVar2 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      FUN_10b1aed0c(param_1,&ppuStack_68);
    }
    param_1[0x30] = !bVar1;
    FUN_10b252720(&ppuStack_68);
  }
  func_0x000107c27914(&lStack_38);
  return;
}



/* Entry: 10b1aec50; end: 10b1aed0b;  */

void FUN_10b1aec50(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  long lStack_30;
  
  func_0x000107c30194(&lStack_38,param_2,param_3,*(undefined8 *)(param_4 + 0x10),
                      *(undefined8 *)(param_4 + 0x18));
  if (lStack_38 == lStack_30) {
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  else {
    ppuStack_68 = &PTR_FUN_110ccb5b0;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    pppuVar2 = &ppuStack_68;
    func_0x000107c3034c(pppuVar2,lStack_38,(int)lStack_30 - (int)lStack_38);
    bVar1 = ((ulong)pppuVar2 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      FUN_10b1aed0c(param_1,&ppuStack_68);
    }
    param_1[0x30] = !bVar1;
    FUN_10b252720(&ppuStack_68);
  }
  func_0x000107c27914(&lStack_38);
  return;
}



/* Entry: 10b1aed0c; end: 10b1aed17;  */

undefined8 * FUN_10b1aed0c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ccb5b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10b1aed58(param_1,param_2);
  return param_1;
}



/* Entry: 10b1aed18; end: 10b1aed57;  */

undefined8 * FUN_10b1aed18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110ccb5b0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10b1aed58(param_1,param_3);
  return param_1;
}



/* Entry: 10b1aed58; end: 10b1aedbb;  */

long FUN_10b1aed58(long param_1,long param_2)

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
      FUN_10b252980(param_1);
    }
    else {
      FUN_10b252948(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1aedbc; end: 10b1aede7;  */

undefined1 * FUN_10b1aedbc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_10b1aede8();
  return param_1;
}



/* Entry: 10b1aede8; end: 10b1aedfb;  */

void FUN_10b1aede8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_10b1aed0c();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 10b1aedfc; end: 10b1aee37;  */

void FUN_10b1aedfc(long param_1)

{
  FUN_10b1aed0c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10b1aee38; end: 10b1aee53;  */

void FUN_10b1aee38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10b1aee54; end: 10b1aefa7;  */

void FUN_10b1aee54(long *param_1,ulong *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  
  Hint_Prefetch(*param_2,0,2,0);
  puVar5 = param_3;
  FUN_10b1aeb88(*param_2);
  lVar6 = 0;
  uVar8 = *param_2;
  uVar11 = param_2[2];
  uVar4 = uVar8 >> 0xc ^ (ulong)puVar5 >> 7;
  bVar2 = (byte)puVar5;
  uVar13 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar4 = uVar4 & uVar11;
    uVar14 = *(undefined8 *)(uVar8 + uVar4);
    cVar15 = (char)((ulong)uVar14 >> 8);
    cVar16 = (char)((ulong)uVar14 >> 0x10);
    cVar17 = (char)((ulong)uVar14 >> 0x18);
    cVar18 = (char)((ulong)uVar14 >> 0x20);
    cVar19 = (char)((ulong)uVar14 >> 0x28);
    bVar12 = (byte)((ulong)uVar14 >> 0x30);
    bVar20 = (byte)((ulong)uVar14 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar20 == (bVar2 & 0x7f)),
                          CONCAT16(-(bVar12 == (bVar2 & 0x7f)),
                                   CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                            CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                     CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                              CONCAT12(-(cVar16 ==
                                                                        (char)(uVar13 >> 0x10)),
                                                                       CONCAT11(-(cVar15 ==
                                                                                 (char)(uVar13 >> 8)
                                                                                 ),-((char)uVar14 ==
                                                                                    (char)uVar13))))
                                                    )))) & 0x8080808080808080; uVar7 != 0;
        uVar7 = uVar7 - 1 & uVar7) {
      uVar10 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = param_2[1];
      puVar9 = (ulong *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar11);
      puVar5 = param_3;
      FUN_10b1aeb2c(param_3,uVar10 + (long)puVar9 * 0x18);
      if (((ulong)puVar5 & 1) != 0) {
        uVar3 = 0;
        goto LAB_10b1aef3c;
      }
    }
    bVar12 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                 CONCAT16(-(bVar12 == 0x80),
                                          CONCAT15(-(cVar19 == -0x80),
                                                   CONCAT14(-(cVar18 == -0x80),
                                                            CONCAT13(-(cVar17 == -0x80),
                                                                     CONCAT12(-(cVar16 == -0x80),
                                                                              CONCAT11(-(cVar15 ==
                                                                                        -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
    if ((bVar12 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar4 = lVar6 + uVar4;
  }
  puVar9 = param_2;
  FUN_10b1aefa8();
  puVar5 = (undefined8 *)(param_2[1] + (long)puVar9 * 0x18);
  uVar14 = *param_3;
  puVar5[1] = param_3[1];
  *puVar5 = uVar14;
  puVar5[2] = param_4;
  uVar8 = *param_2;
  uVar10 = param_2[1];
  uVar3 = 1;
LAB_10b1aef3c:
  *param_1 = uVar8 + (long)puVar9;
  param_1[1] = uVar10 + (long)puVar9 * 0x18;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}



/* Entry: 10b1aefa8; end: 10b1af09b;  */

void FUN_10b1aefa8(long *param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  plVar3 = param_1;
  lVar11 = param_2;
  func_0x00010b1afb68();
  uStack_28 = extraout_x8;
  func_0x000107c2b954();
  lVar5 = *param_1;
  if ((*(long *)(lVar5 + -8) == 0) && (*(char *)(lVar5 + (long)plVar3) != -2)) {
    uVar7 = param_1[2];
    if ((uVar7 < 9) || (uVar7 * 0x19 < (ulong)(param_1[3] << 5))) {
      FUN_10b1af09c(param_1,uVar7 << 1 | 1);
    }
    else {
      func_0x00010ae6c914(param_1,&UNK_110cc3160,auStack_40);
    }
    plVar3 = param_1;
    lVar11 = param_2;
    func_0x000107c2b954();
    lVar5 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  bVar2 = *(char *)(lVar5 + (long)plVar3) == -0x80;
  *(ulong *)(lVar5 + -8) = *(long *)(lVar5 + -8) - (ulong)bVar2;
  bVar1 = (byte)param_2 & 0x7f;
  uVar7 = param_1[2];
  *(byte *)(lVar5 + (long)plVar3) = bVar1;
  *(byte *)(lVar5 + (uVar7 & (long)plVar3 - 7U) + (uVar7 & 7)) = bVar1;
  func_0x00010b1afb10(uStack_28);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *plVar3;
  puVar9 = (undefined8 *)plVar3[1];
  lVar10 = plVar3[2];
  plVar3[2] = lVar11;
  func_0x000107810840();
  lVar12 = plVar3[1];
  for (lVar11 = 0; lVar10 != lVar11; lVar11 = lVar11 + 1) {
    if (-1 < *(char *)(lVar5 + lVar11)) {
      puVar6 = puVar9;
      FUN_10b1aeb88();
      plVar4 = plVar3;
      func_0x000107c2b954(plVar3,puVar6);
      bVar1 = (byte)puVar6 & 0x7f;
      uVar7 = plVar3[2];
      lVar8 = *plVar3;
      *(byte *)(lVar8 + (long)plVar4) = bVar1;
      *(byte *)(lVar8 + ((long)plVar4 - 7U & uVar7) + (uVar7 & 7)) = bVar1;
      puVar6 = (undefined8 *)(lVar12 + (long)plVar4 * 0x18);
      uVar14 = puVar9[1];
      uVar13 = *puVar9;
      puVar6[2] = puVar9[2];
      puVar6[1] = uVar14;
      *puVar6 = uVar13;
    }
    puVar9 = puVar9 + 3;
  }
  if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar5 + -8);
    return;
  }
  return;
}



/* Entry: 10b1af09c; end: 10b1af177;  */

void FUN_10b1af09c(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = *param_1;
  puVar7 = (undefined8 *)param_1[1];
  lVar8 = param_1[2];
  param_1[2] = param_2;
  func_0x000107810840();
  lVar10 = param_1[1];
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      puVar4 = puVar7;
      FUN_10b1aeb88();
      plVar3 = param_1;
      func_0x000107c2b954(param_1,puVar4);
      bVar2 = (byte)puVar4 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)plVar3) = bVar2;
      *(byte *)(lVar6 + ((long)plVar3 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      puVar4 = (undefined8 *)(lVar10 + (long)plVar3 * 0x18);
      uVar12 = puVar7[1];
      uVar11 = *puVar7;
      puVar4[2] = puVar7[2];
      puVar4[1] = uVar12;
      *puVar4 = uVar11;
    }
    puVar7 = puVar7 + 3;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10b1af178; end: 10b1af193;  */

void FUN_10b1af178(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_LOOP_110c8acd8;
  FUN_10b1aebc0(&PTR_LOOP_110c8acd8,*param_2,*(undefined1 *)(param_2 + 1));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)ppuVar2 + (ulong)(uint)param_2[2];
  if ((*(byte *)(param_2 + 3) & 1) != 0) {
    ppuVar2 = (undefined **)
              (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)ppuVar2 + (ulong)(uint)param_2[2]) * -0x622015f714c7d297);
  }
  FUN_10b1aec14(ppuVar2,&stack0xffffffffffffffef);
  return;
}



/* Entry: 10b1af194; end: 10b1af1c3;  */

long * FUN_10b1af194(long *param_1)

{
  if (param_1[2] != 0) {
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10b1af1c4; end: 10b1af1df;  */

void FUN_10b1af1c4(long param_1)

{
  FUN_10b1af1e0();
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 10b1af1e0; end: 10b1af23b;  */

undefined8 * FUN_10b1af1e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_1[7] = param_2[7];
  (**(code **)(param_2[8] + 0x10))(param_1 + 8);
  return param_1;
}



/* Entry: 10b1af23c; end: 10b1af25b;  */

void FUN_10b1af23c(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x00010b1ad110();
  }
  return;
}



/* Entry: 10b1af25c; end: 10b1af31b;  */

long FUN_10b1af25c(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        func_0x00010b1afc18();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10b1af31c; end: 10b1af727;  */

undefined1  [16]
FUN_10b1af31c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  ulong uVar13;
  undefined1 auVar14 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar6 = param_1 + 3;
  func_0x000107c278c4();
  plVar12 = (long *)param_1[1];
  if (plVar12 != (long *)0x0) {
    uVar13 = (long)plVar12 - 1;
    if (((ulong)plVar12 & uVar13) == 0) {
      unaff_x25 = (long *)(uVar13 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar12 <= plVar6) {
        uVar5 = 0;
        if (plVar12 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar12;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar12);
      }
    }
    plVar11 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10b1af3e0;
          plVar4 = (long *)plVar11[1];
          if (plVar4 != plVar6) break;
          plVar4 = plVar11 + 2;
          func_0x000107c278d0(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10b1af6f0;
          }
        }
        if (((ulong)plVar12 & uVar13) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar13);
        }
        else if (plVar12 <= plVar4) {
          uVar5 = 0;
          if (plVar12 != (long *)0x0) {
            uVar5 = (ulong)plVar4 / (ulong)plVar12;
          }
          plVar4 = (long *)((long)plVar4 - uVar5 * (long)plVar12);
        }
      } while (plVar4 == unaff_x25);
    }
  }
LAB_10b1af3e0:
  uVar3 = *param_4;
  plVar4 = param_1 + 2;
  plVar11 = (long *)0x90;
  __Znwm();
  uStack_58 = 0;
  *plVar11 = 0;
  plVar11[1] = (long)plVar6;
  plStack_68 = plVar11;
  plStack_60 = plVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar11 + 2,uVar3);
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[10] = 0;
  plVar11[9] = 0;
  plVar11[0xc] = 0;
  plVar11[0xb] = 0;
  plVar11[0xe] = 0;
  plVar11[0xd] = 0;
  plVar11[0x11] = 0;
  plVar11[0x10] = 0;
  plVar11[0xf] = 0;
  plVar11[6] = 0;
  plVar11[5] = 0;
  *(undefined4 *)(plVar11 + 8) = 5;
  *(undefined1 *)(plVar11 + 9) = 1;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = (long)&UNK_1053a6a3c;
  plVar11[0xd] = (long)&PTR_DAT_110873830;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((plVar12 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar12)) goto LAB_10b1af670;
  uVar13 = 1;
  if ((long *)0x2 < plVar12) {
    uVar13 = (ulong)(((ulong)plVar12 & (long)plVar12 - 1U) != 0);
  }
  plVar11 = (long *)(uVar13 | (long)plVar12 << 1);
  plVar12 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar11 <= plVar12) {
    plVar11 = plVar12;
  }
  if ((long)plVar11 - 1U == 0) {
    plVar11 = (long *)0x2;
  }
  else if (((ulong)plVar11 & (long)plVar11 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar12 = (long *)param_1[1];
  if (plVar12 < plVar11) {
LAB_10b1af4dc:
    if ((ulong)plVar11 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1af718);
      (*pcVar1)();
    }
    lVar2 = (long)plVar11 << 3;
    __Znwm(lVar2);
    FUN_10b1af728(param_1,lVar2);
    param_1[1] = (long)plVar11;
    lVar2 = *param_1;
    for (plVar12 = (long *)0x0; plVar11 != plVar12; plVar12 = (long *)((long)plVar12 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar12 * 8) = 0;
    }
    plVar7 = (long *)*plVar4;
    plVar12 = plVar11;
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)plVar7[1];
      uVar5 = (long)plVar11 - 1;
      uVar13 = 0;
      if (plVar11 != (long *)0x0) {
        uVar13 = (ulong)plVar8 / (ulong)plVar11;
      }
      plVar9 = plVar8;
      if (plVar11 <= plVar8) {
        plVar9 = (long *)((long)plVar8 - uVar13 * (long)plVar11);
      }
      if (((ulong)plVar11 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar8 & uVar5);
      }
      *(long **)(lVar2 + (long)plVar9 * 8) = plVar4;
      while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
        plVar10 = (long *)plVar7[1];
        if (((ulong)plVar11 & uVar5) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar5);
        }
        else if (plVar11 <= plVar10) {
          uVar13 = 0;
          if (plVar11 != (long *)0x0) {
            uVar13 = (ulong)plVar10 / (ulong)plVar11;
          }
          plVar10 = (long *)((long)plVar10 - uVar13 * (long)plVar11);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar8;
            plVar9 = plVar10;
          }
          else {
            *plVar8 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
            **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar7;
            plVar7 = plVar8;
          }
        }
      }
    }
  }
  else if (plVar11 < plVar12) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 - 1) & 0x3fU));
    }
    if (plVar11 <= plVar7) {
      plVar11 = plVar7;
    }
    if (plVar11 < plVar12) {
      if (plVar11 != (long *)0x0) goto LAB_10b1af4dc;
      FUN_10b1af728(param_1,0);
      param_1[1] = 0;
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar12 - 1U & (ulong)plVar6);
  }
  else {
    unaff_x25 = plVar6;
    if (plVar12 <= plVar6) {
      uVar13 = 0;
      if (plVar12 != (long *)0x0) {
        uVar13 = (ulong)plVar6 / (ulong)plVar12;
      }
      unaff_x25 = (long *)((long)plVar6 - uVar13 * (long)plVar12);
    }
  }
LAB_10b1af670:
  plVar11 = plStack_68;
  lVar2 = *param_1;
  plVar6 = *(long **)(lVar2 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    *plStack_68 = *plVar4;
    *plVar4 = (long)plStack_68;
    *(long **)(lVar2 + (long)unaff_x25 * 8) = plVar4;
    if (*plStack_68 != 0) {
      plVar6 = *(long **)(*plStack_68 + 8);
      if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar12 - 1U);
      }
      else if (plVar12 <= plVar6) {
        uVar13 = 0;
        if (plVar12 != (long *)0x0) {
          uVar13 = (ulong)plVar6 / (ulong)plVar12;
        }
        plVar6 = (long *)((long)plVar6 - uVar13 * (long)plVar12);
      }
      *(long **)(lVar2 + (long)plVar6 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar6;
    *plVar6 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b1af740(&plStack_68);
  uVar3 = 1;
LAB_10b1af6f0:
  auVar14._8_8_ = uVar3;
  auVar14._0_8_ = plVar11;
  return auVar14;
}



/* Entry: 10b1af728; end: 10b1af73f;  */

void FUN_10b1af728(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


