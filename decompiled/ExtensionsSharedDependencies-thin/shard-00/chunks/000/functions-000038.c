/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000b86f8; end: 000b8723;  */

/* WARNING: Removing unreachable block (ram,0x000b67f4) */
/* WARNING: Removing unreachable block (ram,0x000b6854) */

void FUN_000b86f8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_f0 [96];
  undefined1 auStack_90 [96];
  
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectUnownedLoadStrong(lVar1);
  FUN_000b8528(auStack_f0,4,1);
  FUN_000b6288(auStack_f0);
  FUN_000b86a0(auStack_f0);
  _objc_release(lVar1);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectUnownedLoadStrong(lVar1);
  FUN_000b8528(auStack_90,10,1);
  FUN_000b6288(auStack_90);
  _objc_release(lVar1);
  FUN_000b86a0(auStack_90);
  return;
}



/* Entry: 000b8724; end: 000b875b;  */

void FUN_000b8724(undefined8 param_1)

{
  if (lRam0000000000aed178 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_008433a8);
  return;
}



/* Entry: 000b875c; end: 000b8833;  */

void FUN_000b875c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBoWV_0099ae88 + 0x40;
  lVar2 = 0x13f;
  puStack_50 = puVar1;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar2 + -8) + 0x40;
    puStack_40 = PTR___sBi64_WV_0099ae80 + 0x40;
    puStack_30 = &UNK_007d6958;
    puStack_28 = &UNK_007d6958;
    puStack_38 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 000b8834; end: 000b8853;  */

void FUN_000b8834(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_000b6024(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
               *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 000b8854; end: 000b888f;  */

undefined8 FUN_000b8854(undefined8 param_1,undefined8 param_2)

{
  FUN_000c1a7c(param_2,param_1);
  return param_2;
}



/* Entry: 000b8890; end: 000b88cf;  */

void FUN_000b8890(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed1a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007d7508;
  _swift_getWitnessTable(&DAT_007d7508,&UNK_009aa968);
  puRam0000000000aed1a0 = puVar1;
  return;
}



/* Entry: 000b88d0; end: 000b890f;  */

undefined8 FUN_000b88d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 000b8910; end: 000b895f;  */

void FUN_000b8910(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 1;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined4 *)(unaff_x20 + 0x1c) = 2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd00000000000001d;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x80000000008b86c0;
  return;
}



/* Entry: 000b8960; end: 000b8997;  */

void FUN_000b8960(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 1;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined4 *)(unaff_x20 + 0x1c) = 2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd00000000000001d;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x80000000008b86c0;
  return;
}



/* Entry: 000b8998; end: 000b8bb3;  */

void FUN_000b8998(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_000ba7a0(&uStack_e8);
  uStack_98 = uStack_e0;
  uStack_a0 = uStack_e8;
  uStack_88 = uStack_d0;
  uStack_90 = uStack_d8;
  uStack_128 = uStack_e0;
  uStack_130 = uStack_e8;
  uStack_118 = uStack_d0;
  uStack_120 = uStack_d8;
  uStack_108 = uStack_c0;
  lStack_110 = uStack_c8;
  uStack_f8 = uStack_b0;
  uStack_100 = uStack_b8;
  FUN_000b8bb4(&uStack_a0);
  uStack_130 = 0x6964656d61726170;
  uStack_128 = 0xe900000000000063;
  FUN_000b8bb4(&uStack_90);
  uStack_120 = 0x5f70757472617473;
  uStack_118 = 0xec00000074696e69;
  lVar4 = 0xae64c8;
  func_0x000115a8(0xae64c8,&UNK_007cd140);
  _swift_initStackObject();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = 0x6f6c5f6873617263;
  bVar3 = (param_1 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  uStack_a8 = uStack_c8;
  *(undefined8 *)(lVar4 + 0x28) = 0xea0000000000706f;
  *(undefined8 *)(lVar4 + 0x30) = uVar1;
  *(undefined8 *)(lVar4 + 0x38) = uVar2;
  lVar5 = lVar4;
  func_0x00020958();
  _swift_setDeallocating(lVar4);
  FUN_000ba134((undefined8 *)(lVar4 + 0x20),0xae64d0,&UNK_007cd4a0);
  lVar4 = 0xaed0b0;
  puVar10 = &UNK_007d69f0;
  FUN_000ba134(&uStack_a8,0xaed0b0,&UNK_007d69f0);
  uVar6 = uStack_c0;
  lStack_110 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = uStack_c0;
  if ((uVar6 & 1) == 0) {
    lVar4 = *(long *)(uStack_c0 + 0x10) + 1;
    uVar8 = 0;
    puVar10 = (undefined *)0x1;
    func_0x000b9888(0,lVar4,1,uStack_c0);
  }
  uVar6 = *(ulong *)(uVar8 + 0x10);
  lVar5 = uVar6 + 1;
  uVar9 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    puVar10 = (undefined *)0x1;
    lVar4 = lVar5;
    func_0x000b9888(uVar9,lVar5,1,uVar8);
  }
  *(long *)(uVar9 + 0x10) = lVar5;
  *(undefined8 *)(uVar9 + uVar6 * 8 + 0x20) = 1;
  uStack_78 = uStack_128;
  uStack_80 = uStack_130;
  uStack_68 = uStack_118;
  uStack_70 = uStack_120;
  lStack_60 = lStack_110;
  uStack_48 = uStack_f8;
  uStack_50 = uStack_100;
  puVar7 = &uStack_80;
  uStack_108 = uVar9;
  uStack_58 = uVar9;
  FUN_000b8be8(puVar7);
  FUN_000b92ec();
  FUN_00023358(puVar7,lVar4);
  _swift_release(puVar10);
  FUN_000ba0e0(&uStack_130);
  return;
}



/* Entry: 000b8bb4; end: 000b8be7;  */

undefined8 FUN_000b8bb4(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___sSSN_0099b040 + -8) + 8))();
  return param_1;
}



/* Entry: 000b8be8; end: 000b92eb;  */

undefined8 * FUN_000b8be8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *****pppppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *****pppppuVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 ****ppppuVar18;
  ulong uVar19;
  undefined *puVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 ***pppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 ****ppppuStack_e0;
  ulong uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar3 = param_1;
  FUN_000babf0();
  ppppuVar4 = (undefined8 ****)PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170;
  uVar17 = param_2;
  _objc_opt_self();
  ppppuVar18 = ppppuVar4;
  func_0x0077ee60();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar5 = ppppuVar18;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(ppppuVar18);
  pppuStack_130 = (undefined8 ***)0x2e;
  uStack_128 = 0xe100000000000000;
  lVar6 = 0x7fffffffffffffff;
  pppuStack_d0 = &pppuStack_130;
  FUN_000b9988(0x7fffffffffffffff,1,FUN_000ba4f8,&ppppuStack_e0,ppppuVar5,uVar17);
  uVar14 = *(ulong *)(lVar6 + 0x10);
  if (uVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb90b4);
    (*pcVar2)();
  }
  pppppuVar9 = *(undefined8 ******)(lVar6 + 0x20);
  uVar19 = *(ulong *)(lVar6 + 0x28);
  if ((uVar19 ^ (ulong)pppppuVar9) < 0x4000) {
    uVar19 = 0;
  }
  else {
    pppppuVar12 = *(undefined8 ******)(lVar6 + 0x30);
    uVar14 = *(ulong *)(lVar6 + 0x38);
    if ((uVar14 >> 0x3c & 1) == 0) {
      if ((uVar14 >> 0x3d & 1) == 0) {
        if (((ulong)pppppuVar12 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar12,uVar14);
          pppppuVar9 = pppppuVar12;
        }
        else {
          pppppuVar9 = (undefined8 *****)((uVar14 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        uStack_d8 = uVar14 & 0xffffffffffffff;
        pppppuVar9 = &ppppuStack_e0;
        ppppuStack_e0 = pppppuVar12;
      }
      FUN_000ba1b4();
    }
    else {
      _swift_bridgeObjectRetain(uVar14);
      FUN_000b9d74(pppppuVar9,uVar19,pppppuVar12,uVar14,10);
      _swift_bridgeObjectRelease(uVar14);
    }
    uVar19 = 0;
    if (((ulong)pppppuVar9 & 0xff00000000) != 0x100000000) {
      uVar19 = (ulong)pppppuVar9 & 0xffffffff;
    }
    uVar14 = *(ulong *)(lVar6 + 0x10);
  }
  if (uVar14 < 2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb90c4);
    (*pcVar2)();
  }
  pppppuVar9 = *(undefined8 ******)(lVar6 + 0x40);
  uVar15 = *(ulong *)(lVar6 + 0x48);
  if ((uVar15 ^ (ulong)pppppuVar9) < 0x4000) {
    uVar15 = 0;
  }
  else {
    pppppuVar12 = *(undefined8 ******)(lVar6 + 0x50);
    uVar14 = *(ulong *)(lVar6 + 0x58);
    if ((uVar14 >> 0x3c & 1) == 0) {
      if ((uVar14 >> 0x3d & 1) == 0) {
        if (((ulong)pppppuVar12 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar12,uVar14);
          pppppuVar9 = pppppuVar12;
        }
        else {
          pppppuVar9 = (undefined8 *****)((uVar14 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        uStack_d8 = uVar14 & 0xffffffffffffff;
        pppppuVar9 = &ppppuStack_e0;
        ppppuStack_e0 = pppppuVar12;
      }
      FUN_000ba1b4();
    }
    else {
      _swift_bridgeObjectRetain(uVar14);
      FUN_000b9d74(pppppuVar9,uVar15,pppppuVar12,uVar14,10);
      _swift_bridgeObjectRelease(uVar14);
    }
    uVar15 = 0;
    if (((ulong)pppppuVar9 & 0xff00000000) != 0x100000000) {
      uVar15 = (long)pppppuVar9 << 0x20;
    }
    uVar14 = *(ulong *)(lVar6 + 0x10);
  }
  if (uVar14 < 3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb9118);
    (*pcVar2)();
  }
  pppppuVar9 = *(undefined8 ******)(lVar6 + 0x60);
  uVar16 = *(ulong *)(lVar6 + 0x68);
  if ((uVar16 ^ (ulong)pppppuVar9) < 0x4000) {
    uVar16 = 0;
  }
  else {
    pppppuVar12 = *(undefined8 ******)(lVar6 + 0x70);
    uVar14 = *(ulong *)(lVar6 + 0x78);
    if ((uVar14 >> 0x3c & 1) == 0) {
      if ((uVar14 >> 0x3d & 1) == 0) {
        if (((ulong)pppppuVar12 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar12,uVar14);
          pppppuVar9 = pppppuVar12;
        }
        else {
          pppppuVar9 = (undefined8 *****)((uVar14 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        uStack_d8 = uVar14 & 0xffffffffffffff;
        pppppuVar9 = &ppppuStack_e0;
        ppppuStack_e0 = pppppuVar12;
      }
      FUN_000ba1b4();
    }
    else {
      _swift_bridgeObjectRetain(uVar14);
      FUN_000b9d74(pppppuVar9,uVar16,pppppuVar12,uVar14,10);
      _swift_bridgeObjectRelease(uVar14);
    }
    uVar16 = 0;
    if (((ulong)pppppuVar9 & 0xff00000000) != 0x100000000) {
      uVar16 = (long)pppppuVar9 << 0x20;
    }
    uVar14 = *(ulong *)(lVar6 + 0x10);
  }
  if (uVar14 < 4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb9170);
    (*pcVar2)();
  }
  pppppuVar9 = *(undefined8 ******)(lVar6 + 0x80);
  uVar14 = *(ulong *)(lVar6 + 0x88);
  pppppuVar12 = *(undefined8 ******)(lVar6 + 0x90);
  uVar1 = *(ulong *)(lVar6 + 0x98);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(lVar6);
  if ((uVar14 ^ (ulong)pppppuVar9) >> 0xe == 0) {
    _swift_bridgeObjectRelease(uVar1);
    uVar14 = 0;
  }
  else {
    if ((uVar1 >> 0x3c & 1) == 0) {
      if ((uVar1 >> 0x3d & 1) == 0) {
        if (((ulong)pppppuVar12 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pppppuVar12,uVar1);
          pppppuVar9 = pppppuVar12;
        }
        else {
          pppppuVar9 = (undefined8 *****)((uVar1 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        uStack_d8 = uVar1 & 0xffffffffffffff;
        pppppuVar9 = &ppppuStack_e0;
        ppppuStack_e0 = pppppuVar12;
      }
      FUN_000ba1b4();
    }
    else {
      FUN_000b9d74(pppppuVar9,uVar14,pppppuVar12,uVar1,10);
    }
    _swift_bridgeObjectRelease(uVar1);
    uVar14 = 0;
    if (((ulong)pppppuVar9 & 0xff00000000) != 0x100000000) {
      uVar14 = (ulong)pppppuVar9 & 0xffffffff;
    }
  }
  func_0x00023304(0,0xc000000000000000);
  uVar13 = 0;
  FUN_000ba54c(0,0,0,0xf000000000000000);
  func_0x0078c3a0();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar18 = ppppuVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(ppppuVar4);
  uVar17 = uVar13;
  __sSS10lowercasedSSyF();
  _swift_bridgeObjectRelease(uVar13);
  ppppuVar4 = ppppuVar18;
  __sSS5countSivg(ppppuVar18,uVar17);
  FUN_00023358(0,0xc000000000000000);
  if (ppppuVar4 == (undefined8 ****)0x0) {
    _swift_bridgeObjectRelease(uVar17);
    uVar17 = 0xe400000000000000;
    ppppuVar18 = (undefined8 ****)0x646f7270;
  }
  uStack_f8 = uVar14 | uVar16;
  uStack_100 = uVar15 | uVar19;
  puStack_120 = &UNK_0000676f;
  uStack_118 = 0xe200000000000000;
  uStack_108 = 0xc000000000000000;
  uStack_110 = 0;
  uStack_e8 = 0xc000000000000000;
  uStack_f0 = 0;
  pppuStack_d0 = (undefined8 ***)&UNK_0000676f;
  uStack_c8 = 0xe200000000000000;
  uStack_b8 = 0xc000000000000000;
  uStack_c0 = 0;
  uStack_98 = 0xc000000000000000;
  uStack_a0 = 0;
  pppuStack_130 = ppppuVar18;
  uStack_128 = uVar17;
  ppppuStack_e0 = ppppuVar18;
  uStack_d8 = uVar17;
  uStack_b0 = uStack_100;
  uStack_a8 = uStack_f8;
  FUN_000ba568(&pppuStack_130,&pppuStack_180);
  func_0x000ba5a4(&ppppuStack_e0);
  uStack_158 = uStack_108;
  uStack_160 = uStack_110;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_178 = uStack_128;
  pppuStack_180 = pppuStack_130;
  uStack_168 = uStack_118;
  puStack_170 = puStack_120;
  puVar20 = puStack_120;
  FUN_000baa7c(&pppuStack_180);
  puVar7 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSDate_00ac2c88);
  func_0x007849a0();
  func_0x007928e0();
  _objc_release(puVar7);
  dVar21 = (double)puVar20 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb91cc);
    (*pcVar2)();
  }
  if (dVar21 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb91ec);
    (*pcVar2)();
  }
  if (1.8446744073709552e+19 <= dVar21) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb91f0);
    (*pcVar2)();
  }
  FUN_000ba974((long)dVar21);
  puVar11 = puVar3;
  FUN_000ba938(puVar3,param_2,param_3);
  if (puVar11 == (undefined8 *)0xffffffffffffffff) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb91f4);
    (*pcVar2)();
  }
  func_0x000ba9f8((long)puVar11 + 1);
  puVar11 = puVar3;
  func_0x000ba7e8(puVar3,param_2,param_3);
  puVar8 = puVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar10 = puVar11;
  if (((ulong)puVar8 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
    func_0x000b9780(0,puVar11[2] + 1,1,puVar11);
  }
  uVar14 = puVar10[2];
  puVar11 = puVar10;
  if ((ulong)puVar10[3] >> 1 <= uVar14) {
    puVar11 = (undefined8 *)(ulong)(1 < (ulong)puVar10[3]);
    func_0x000b9780(puVar11,uVar14 + 1,1,puVar10);
  }
  puVar11[2] = uVar14 + 1;
  uVar13 = param_1[1];
  uVar17 = *param_1;
  uVar23 = param_1[3];
  uVar22 = param_1[2];
  uVar24 = param_1[4];
  uVar26 = param_1[7];
  uVar25 = param_1[6];
  puVar11[uVar14 * 8 + 9] = param_1[5];
  puVar11[uVar14 * 8 + 8] = uVar24;
  puVar11[uVar14 * 8 + 0xb] = uVar26;
  puVar11[uVar14 * 8 + 10] = uVar25;
  puVar11[uVar14 * 8 + 5] = uVar13;
  puVar11[uVar14 * 8 + 4] = uVar17;
  puVar11[uVar14 * 8 + 7] = uVar23;
  puVar11[uVar14 * 8 + 6] = uVar22;
  FUN_000ba4bc(param_1,&ppppuStack_e0);
  FUN_000ba828(puVar11);
  FUN_000bab64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  func_0x000ba8b4(2);
  func_0x00023304(puVar3,param_2);
  _swift_retain(param_3);
  FUN_00023358(puVar3,param_2);
  _swift_release(param_3);
  return puVar3;
}



/* Entry: 000b92ec; end: 000b9653;  */

/* WARNING: Removing unreachable block (ram,0x000b95b8) */

void FUN_000b92ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_a8 = param_1;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar9 - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar8 - extraout_x12;
  puVar4 = PTR__OBJC_CLASS___NSURLSession_00ac3078;
  _objc_opt_self(PTR__OBJC_CLASS___NSURLSession_00ac3078);
  func_0x007915e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(0x697274656d2f3176,0xea00000000007363);
  uVar7 = uStack_70;
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar13,uStack_78,uStack_70);
  _swift_bridgeObjectRelease(uVar7);
  lVar2 = lVar13;
  (**(code **)(lVar12 + 0x30))(lVar13,1,lVar3);
  if ((int)lVar2 == 1) {
    _objc_release(puVar4);
    FUN_000ba134(lVar13,0xae6dd0,&UNK_007ce690);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar10,lVar13,lVar3);
    (**(code **)(lVar12 + 0x10))(lVar8,lVar10,lVar3);
    __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
              (puVar9,0x404e000000000000,lVar8,0);
    __s10Foundation10URLRequestV10httpMethodSSSgvs(0x54534f50,0xe400000000000000);
    uVar7 = 0x80000000008b86e0;
    __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
              (0xd000000000000016,0x80000000008b86e0,0x2d746e65746e6f43,0xec00000065707954);
    puVar5 = PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170;
    _objc_opt_self(PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170);
    func_0x00793380();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar5);
    __s10Foundation10URLRequestV8setValue_18forHTTPHeaderFieldySSSg_SStF
              (puVar6,uVar7,0x6567412d72657355,0xea0000000000746e);
    _swift_bridgeObjectRelease(uVar7);
    uStack_78 = uStack_a8;
    uStack_70 = uStack_a0;
    uStack_68 = uStack_98;
    FUN_000ba174();
    FUN_0010b7b8(&uStack_88,0,0,&UNK_009aa3f0,PTR___s10Foundation4DataVN_0099c3c0,uVar7,
                 &PTR_DAT_009ae8f0);
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs(uStack_88,uStack_80);
    uVar7 = uStack_88;
    __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
    puVar5 = puVar4;
    func_0x00781540(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    func_0x0078bb80(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    (**(code **)(lVar11 + 8))(puVar9,lVar1);
    (**(code **)(lVar12 + 8))(lVar10,lVar3);
  }
  return;
}



/* Entry: 000b9654; end: 000b9677;  */

void FUN_000b9654(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000b9678; end: 000b9987;  */

undefined * FUN_000b9678(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0xb9780);
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
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0xaed2a8;
    func_0x000115a8(0xaed2a8,&UNK_007d6a60);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sSsN_0099b340);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 000b9988; end: 000b9d73;  */

undefined *
FUN_000b9988(long param_1,ulong param_2,code *param_3,undefined8 param_4,ulong param_5,ulong param_6
            )

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_80;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb9d0c);
    (*pcVar2)();
  }
  uVar11 = param_6 >> 0x38 & 0xf;
  uVar10 = (uint)(param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar11;
    }
    if (uVar13 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if ((param_6 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      uVar11 = uVar11 | uVar13 << 0x10;
      uVar13 = uVar13 * 4;
      puVar5 = (undefined *)((long)&MACH_HEADER.filetype + 3);
      puStack_80 = PTR___swiftEmptyArrayStorage_0099b8f0;
LAB_000b9a10:
      uVar12 = (ulong)puVar5 >> 0xe;
      puVar7 = puVar5;
      puVar6 = puVar5;
      if (uVar12 != uVar13) {
        do {
          puVar5 = puVar7;
          uVar8 = param_5;
          __sSSySJSS5IndexVcig(puVar5,param_5,param_6);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(puStack_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(uVar8);
            return puVar5;
          }
          _swift_bridgeObjectRelease(uVar8);
          if ((uVar3 & 1) == 0) {
            __sSS5index5afterSS5IndexVAD_tF(puVar5,param_5,param_6);
            puVar7 = puVar5;
            puVar5 = puVar6;
          }
          else {
            if (((ulong)puVar6 >> 0xe != uVar12) || ((param_2 & 1) == 0)) goto LAB_000b9acc;
            __sSS5index5afterSS5IndexVAD_tF(puVar5,param_5,param_6);
            puVar7 = puVar5;
          }
          uVar12 = (ulong)puVar7 >> 0xe;
          puVar6 = puVar5;
          if (uVar12 == uVar13) break;
        } while( true );
      }
      goto LAB_000b9c58;
    }
  }
  uVar13 = param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar11;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return PTR___swiftEmptyArrayStorage_0099b8f0;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if ((param_6 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  uVar11 = uVar11 | uVar13 << 0x10;
  uVar4 = 0xf;
  uVar12 = param_6;
  __sSSySsSnySS5IndexVGcig();
  puVar5 = (undefined *)0x0;
  FUN_000b9678(0,1,1,PTR___swiftEmptyArrayStorage_0099b8f0);
  uVar13 = *(ulong *)(puVar5 + 0x10);
  puStack_80 = puVar5;
  if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar13) {
    puStack_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
    FUN_000b9678(puStack_80,uVar13 + 1,1,puVar5);
  }
  *(ulong *)(puStack_80 + 0x10) = uVar13 + 1;
  *(undefined8 *)(puStack_80 + uVar13 * 0x20 + 0x20) = uVar4;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x28) = uVar11;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x30) = param_5;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x38) = uVar12;
LAB_000b9c6c:
  _swift_bridgeObjectRelease(param_6);
  return puStack_80;
LAB_000b9acc:
  if (uVar12 < (ulong)puVar6 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb9d74);
    (*pcVar2)();
  }
  puVar9 = puVar5;
  uVar12 = param_5;
  uVar3 = param_6;
  __sSSySsSnySS5IndexVGcig();
  puVar7 = puStack_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    plVar1 = (long *)(puStack_80 + 0x10);
    puStack_80 = (undefined *)0x0;
    FUN_000b9678(0,*plVar1 + 1,1);
  }
  uVar8 = *(ulong *)(puStack_80 + 0x10);
  if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar8) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
    FUN_000b9678(puVar7,uVar8 + 1,1,puStack_80);
    puStack_80 = puVar7;
  }
  *(ulong *)(puStack_80 + 0x10) = uVar8 + 1;
  *(undefined **)(puStack_80 + uVar8 * 0x20 + 0x20) = puVar6;
  *(undefined **)(puStack_80 + uVar8 * 0x20 + 0x28) = puVar9;
  *(ulong *)(puStack_80 + uVar8 * 0x20 + 0x30) = uVar12;
  *(ulong *)(puStack_80 + uVar8 * 0x20 + 0x38) = uVar3;
  __sSS5index5afterSS5IndexVAD_tF(puVar5,param_5,param_6);
  if (*(long *)(puStack_80 + 0x10) == param_1) goto LAB_000b9c58;
  goto LAB_000b9a10;
LAB_000b9c58:
  if (((ulong)puVar5 >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)puVar5 >> 0xe <= uVar13) {
      uVar13 = param_6;
      __sSSySsSnySS5IndexVGcig();
      _swift_bridgeObjectRelease(param_6);
      puVar7 = puStack_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puStack_80;
      if (((ulong)puVar7 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_000b9678(0,*(long *)(puStack_80 + 0x10) + 1,1,puStack_80);
      }
      uVar12 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_000b9678(puVar7,uVar12 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar7 + uVar12 * 0x20 + 0x20) = puVar5;
      *(ulong *)(puVar7 + uVar12 * 0x20 + 0x28) = uVar11;
      *(ulong *)(puVar7 + uVar12 * 0x20 + 0x30) = param_5;
      *(ulong *)(puVar7 + uVar12 * 0x20 + 0x38) = uVar13;
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb9d30);
    (*pcVar2)();
  }
  goto LAB_000b9c6c;
}



/* Entry: 000b9d74; end: 000b9e77;  */

/* WARNING: Removing unreachable block (ram,0x000b9e6c) */

ulong FUN_000b9d74(undefined8 ***param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 **ppuStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  FUN_000ba5d8();
  _swift_bridgeObjectRetain(param_4);
  pppuVar1 = &ppuStack_50;
  puVar3 = PTR___sSsN_0099b340;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppuVar1,PTR___sSsN_0099b340,PTR___sSss25LosslessStringConvertiblesWP_0099b350,param_1)
  ;
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_00022254();
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      pppuVar2 = pppuVar1;
    }
    else {
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_000b9e78(pppuVar2);
  }
  else {
    uStack_48 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_50;
    ppuStack_50 = pppuVar1;
    FUN_000b9e78(pppuVar2,(ulong)puVar3 >> 0x38 & 0xf,param_5);
  }
  _swift_bridgeObjectRelease(puVar3);
  return (ulong)pppuVar2 & 0xffffffffff;
}



/* Entry: 000b9e78; end: 000ba0df;  */

ulong FUN_000b9e78(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar5 = (int)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xba0e0);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar5 + 0x57;
      }
      uVar11 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar11 = iVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar11 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_000ba0cc;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar10 * (long)iVar5);
        if (((long)(int)uVar10 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar12 = (uint)bVar3 + iVar6 & 0xff, uVar10 = iVar8 + uVar12, SCARRY4(iVar8,uVar12)))
        goto LAB_000ba0b8;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_000b9ff8:
      uVar9 = 0;
      uVar7 = uVar10;
      goto LAB_000ba0cc;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xba0dc);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = iVar5 + 0x57;
      }
      uVar11 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar11 = iVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar11 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar2 & 0xff) <= uVar12)) goto LAB_000ba0cc;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar10 * (long)iVar5);
        if (((long)(int)uVar10 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar12 = (uint)bVar3 + iVar6 & 0xff, uVar10 = iVar8 - uVar12, SBORROW4(iVar8,uVar12)))
        goto LAB_000ba0b8;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_000b9ff8;
    }
  }
  else if (param_2 != 0) {
    uVar10 = iVar5 + 0x30;
    uVar1 = 0x61;
    if (10 < param_3) {
      uVar1 = iVar5 + 0x57;
    }
    uVar2 = 0x41;
    if (10 < param_3) {
      uVar10 = 0x3a;
      uVar2 = iVar5 + 0x37;
    }
    if (param_1 == (byte *)0x0) {
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      uVar11 = 0;
      do {
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar10 & 0xff) <= (uint)bVar3)) {
          uVar12 = (uint)bVar3;
          if ((uVar12 < 0x41) || ((uVar2 & 0xff) <= uVar12)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar12 < 0x61) || ((uVar1 & 0xff) <= uVar12)) goto LAB_000ba0cc;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        iVar8 = (int)((long)(int)uVar11 * (long)iVar5);
        if (((long)(int)uVar11 * (long)iVar5 - (long)iVar8 != 0) ||
           (uVar11 = (uint)bVar3 + iVar6 & 0xff, uVar7 = iVar8 + uVar11, SCARRY4(iVar8,uVar11)))
        goto LAB_000ba0b8;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        uVar11 = uVar7;
      } while (param_2 != 0);
      uVar9 = 0;
    }
    goto LAB_000ba0cc;
  }
LAB_000ba0b8:
  uVar7 = 0;
  uVar9 = 0x100000000;
LAB_000ba0cc:
  return uVar9 | uVar7;
}



/* Entry: 000ba0e0; end: 000ba113;  */

undefined8 FUN_000ba0e0(undefined8 param_1)

{
  FUN_000bf384();
  return param_1;
}



/* Entry: 000ba114; end: 000ba133;  */

void FUN_000ba114(void)

{
  _objc_opt_self(&PTR_PTR_00aed220);
  return;
}



/* Entry: 000ba134; end: 000ba173;  */

undefined8 FUN_000ba134(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 000ba174; end: 000ba1b3;  */

void FUN_000ba174(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007d6e38;
  _swift_getWitnessTable(&DAT_007d6e38,&UNK_009aa3f0);
  puRam0000000000aed290 = puVar1;
  return;
}



/* Entry: 000ba1b4; end: 000ba4bb;  */

ulong FUN_000ba1b4(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = (uint)(param_4 >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  uVar9 = 4L << uVar3;
  uVar5 = param_2;
  if ((param_2 & 0xc) == uVar9) {
    FUN_0002269c(param_2,param_4,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_000ba25c;
LAB_000ba1fc:
    uVar8 = uVar5 >> 0x10;
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_000ba1fc;
LAB_000ba25c:
    uVar8 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar8 = param_5 >> 0x38 & 0xf;
    }
    if (uVar8 < uVar5 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xba4bc);
      (*pcVar2)();
    }
    uVar8 = 0xf;
    __sSS8UTF8ViewV16_foreignDistance4from2toSiSS5IndexV_AGtF(0xf,uVar5,param_4,param_5);
  }
  if ((param_2 & 0xc) == uVar9) {
    FUN_0002269c(param_2,param_4,param_5);
  }
  if ((param_3 & 0xc) == uVar9) {
    FUN_0002269c(param_3,param_4,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_000ba314;
LAB_000ba218:
    param_2 = (param_3 >> 0x10) - (param_2 >> 0x10);
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_000ba218;
LAB_000ba314:
    uVar5 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar5 = param_5 >> 0x38 & 0xf;
    }
    if (uVar5 < param_2 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xba4ac);
      (*pcVar2)();
    }
    if (uVar5 < param_3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xba4b0);
      (*pcVar2)();
    }
    __sSS8UTF8ViewV16_foreignDistance4from2toSiSS5IndexV_AGtF(param_2,param_3,param_4,param_5);
  }
  uVar5 = uVar8 + param_2;
  if (SCARRY8(uVar8,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xba4a4);
    (*pcVar2)();
  }
  if ((long)uVar5 < (long)uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xba4a8);
    (*pcVar2)();
  }
  pbVar6 = (byte *)0x0;
  if (param_1 != 0) {
    pbVar6 = (byte *)(uVar8 + param_1);
  }
  if (*pbVar6 == 0x2b) {
    if (uVar5 == uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xba4b8);
      (*pcVar2)();
    }
    if (uVar5 - uVar8 != 1) {
      uVar3 = 0;
      lVar7 = param_2 - 1;
      do {
        pbVar6 = pbVar6 + 1;
        if (((9 < *pbVar6 - 0x30) ||
            (iVar4 = (int)((long)(int)uVar3 * 10), (long)(int)uVar3 * 10 - (long)iVar4 != 0)) ||
           (uVar1 = *pbVar6 - 0x30 & 0xff, uVar3 = iVar4 + uVar1, SCARRY4(iVar4,uVar1)))
        goto LAB_000ba470;
        uVar5 = 0;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      goto LAB_000ba478;
    }
  }
  else if (*pbVar6 == 0x2d) {
    if (uVar5 == uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xba4b4);
      (*pcVar2)();
    }
    if (uVar5 - uVar8 != 1) {
      uVar3 = 0;
      lVar7 = param_2 - 1;
      do {
        pbVar6 = pbVar6 + 1;
        if (((9 < *pbVar6 - 0x30) ||
            (iVar4 = (int)((long)(int)uVar3 * 10), (long)(int)uVar3 * 10 - (long)iVar4 != 0)) ||
           (uVar1 = *pbVar6 - 0x30 & 0xff, uVar3 = iVar4 - uVar1, SBORROW4(iVar4,uVar1)))
        goto LAB_000ba470;
        uVar5 = 0;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      goto LAB_000ba478;
    }
  }
  else if (uVar5 != uVar8) {
    uVar3 = 0;
    if (pbVar6 == (byte *)0x0) {
      uVar5 = 0;
    }
    else {
      do {
        if (((9 < *pbVar6 - 0x30) ||
            (iVar4 = (int)((long)(int)uVar3 * 10), (long)(int)uVar3 * 10 - (long)iVar4 != 0)) ||
           (uVar1 = *pbVar6 - 0x30 & 0xff, uVar3 = iVar4 + uVar1, SCARRY4(iVar4,uVar1)))
        goto LAB_000ba470;
        uVar5 = 0;
        param_2 = param_2 - 1;
        pbVar6 = pbVar6 + 1;
      } while (param_2 != 0);
    }
    goto LAB_000ba478;
  }
LAB_000ba470:
  uVar3 = 0;
  uVar5 = 0x100000000;
LAB_000ba478:
  return uVar5 | uVar3;
}



/* Entry: 000ba4bc; end: 000ba4f7;  */

undefined8 FUN_000ba4bc(undefined8 param_1,undefined8 param_2)

{
  FUN_000bf3c4(param_2,param_1);
  return param_2;
}



/* Entry: 000ba4f8; end: 000ba54b;  */

uint FUN_000ba4f8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 000ba54c; end: 000ba567;  */

void FUN_000ba54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000ba568; end: 000ba5d7;  */

undefined8 FUN_000ba568(undefined8 param_1,undefined8 param_2)

{
  FUN_000bee44(param_2,param_1);
  return param_2;
}



/* Entry: 000ba5d8; end: 000ba617;  */

void FUN_000ba5d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSsSTsMc_0099b348;
  _swift_getWitnessTable(PTR___sSsSTsMc_0099b348,PTR___sSsN_0099b340);
  puRam0000000000aed2a0 = puVar1;
  return;
}



/* Entry: 000ba618; end: 000ba627;  */

void FUN_000ba618(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 000ba628; end: 000ba657;  */

void FUN_000ba628(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_000be330();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 000ba658; end: 000ba65f;  */

undefined8 FUN_000ba658(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 000ba660; end: 000ba6d3;  */

void FUN_000ba660(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaed350;
  func_0x000115a8(0xaed350,&UNK_007d6a80);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 000ba6d4; end: 000ba6df;  */

void FUN_000ba6d4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 000ba6e0; end: 000ba78b;  */

void FUN_000ba6e0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000ba78c; end: 000ba79f;  */

bool FUN_000ba78c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000ba7a0; end: 000ba827;  */

void FUN_000ba7a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  func_0x00020958();
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = puVar2;
  param_1[5] = puVar1;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 000ba828; end: 000ba937;  */

void FUN_000ba828(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000be33c(0);
    _swift_allocObject();
    FUN_000bbfcc(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x18) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 000ba938; end: 000ba973;  */

undefined8 FUN_000ba938(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x30,auStack_38,0,0);
  return *(undefined8 *)(param_3 + 0x30);
}



/* Entry: 000ba974; end: 000baa7b;  */

void FUN_000ba974(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000be33c(0);
    _swift_allocObject();
    FUN_000bbfcc(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x30,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x30) = param_1;
  return;
}



/* Entry: 000baa7c; end: 000bab63;  */

void FUN_000baa7c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_000be33c(0);
    _swift_allocObject();
    FUN_000bbfcc();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  _swift_beginAccess(lVar2 + 0x40,auStack_f8,1,0);
  uStack_58 = *(undefined8 *)(lVar2 + 0x78);
  uStack_60 = *(undefined8 *)(lVar2 + 0x70);
  uStack_48 = *(undefined8 *)(lVar2 + 0x88);
  uStack_50 = *(undefined8 *)(lVar2 + 0x80);
  uStack_78 = *(undefined8 *)(lVar2 + 0x58);
  uStack_80 = *(undefined8 *)(lVar2 + 0x50);
  uStack_68 = *(undefined8 *)(lVar2 + 0x68);
  uStack_70 = *(undefined8 *)(lVar2 + 0x60);
  uStack_88 = *(undefined8 *)(lVar2 + 0x48);
  uStack_90 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar2 + 0x68) = uStack_b8;
  *(undefined8 *)(lVar2 + 0x60) = uStack_c0;
  *(undefined8 *)(lVar2 + 0x78) = uStack_a8;
  *(undefined8 *)(lVar2 + 0x70) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x88) = uStack_98;
  *(undefined8 *)(lVar2 + 0x80) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x48) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x40) = uStack_e0;
  *(undefined8 *)(lVar2 + 0x58) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x50) = uStack_d0;
  func_0x000be3a4(&uStack_90,0xaed360,&UNK_007d6a90);
  return;
}



/* Entry: 000bab64; end: 000babef;  */

void FUN_000bab64(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_000be33c(0);
    _swift_allocObject();
    FUN_000bbfcc(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  _swift_beginAccess(lVar3 + 0x90,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x90) = param_1;
  *(undefined1 *)(lVar3 + 0x98) = param_2;
  return;
}



/* Entry: 000babf0; end: 000bac4b;  */

undefined8 FUN_000babf0(void)

{
  if (lRam0000000000aed370 != -1) {
    _swift_once(0xaed370,0xbbf50);
  }
  _swift_retain(uRam0000000000aed378);
  return 0;
}



/* Entry: 000bac4c; end: 000bac93;  */

void FUN_000bac4c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_00119fa0(&uStack_40,&UNK_007d7150,0x56,2);
  uRam0000000000b64950 = uStack_38;
  uRam0000000000b64948 = uStack_40;
  uRam0000000000b64960 = uStack_28;
  uRam0000000000b64958 = uStack_30;
  uRam0000000000b64970 = uStack_18;
  uRam0000000000b64968 = uStack_20;
  return;
}



/* Entry: 000bac94; end: 000bad33;  */

void FUN_000bac94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000aed380 != -1) {
    _swift_once(0xaed380,FUN_000bac4c);
  }
  uVar5 = uRam0000000000b64970;
  uVar4 = uRam0000000000b64968;
  uVar3 = uRam0000000000b64960;
  uVar2 = uRam0000000000b64958;
  uVar1 = uRam0000000000b64950;
  *param_1 = uRam0000000000b64948;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 000bad34; end: 000bad7b;  */

void FUN_000bad34(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_00119fa0(&uStack_40,&UNK_007d7120,0x22,2);
  uRam0000000000b64980 = uStack_38;
  uRam0000000000b64978 = uStack_40;
  uRam0000000000b64990 = uStack_28;
  uRam0000000000b64988 = uStack_30;
  uRam0000000000b649a0 = uStack_18;
  uRam0000000000b64998 = uStack_20;
  return;
}



/* Entry: 000bad7c; end: 000bae63;  */

/* WARNING: Removing unreachable block (ram,0x000bae54) */

void FUN_000bad7c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x150);
LAB_000bade4:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_000bade4;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_000beae4();
          (*pcVar4)(unaff_x20 + 0x30,&UNK_009aa2d0,lVar1,param_2,param_3);
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 000bae64; end: 000baf23;  */

void FUN_000bae64(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  FUN_000baf24();
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,2,param_2,param_3);
    }
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,3,param_2,param_3);
    }
    FUN_0013ad2c(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 000baf24; end: 000bafaf;  */

void FUN_000baf24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x48);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_000beae4();
    (*pcVar1)(&uStack_60,1,&UNK_009aa2d0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 000bafb0; end: 000baffb;  */

void FUN_000bafb0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  return;
}



/* Entry: 000baffc; end: 000bb02b;  */

undefined1  [16] FUN_000baffc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 000bb02c; end: 000bb05f;  */

void FUN_000bb02c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 000bb060; end: 000bb073;  */

undefined1  [16] FUN_000bb060(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0xbb070;
  return auVar1;
}



/* Entry: 000bb074; end: 000bb087;  */

void FUN_000bb074(void)

{
  FUN_000bad7c();
  return;
}



/* Entry: 000bb088; end: 000bb0c7;  */

void FUN_000bb088(void)

{
  FUN_000bae64();
  return;
}



/* Entry: 000bb0c8; end: 000bb0cb;  */

/* WARNING: Removing unreachable block (ram,0x0010f500) */

void FUN_000bb0c8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_009ad0a0,&PTR_DAT_009ad0b8,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 000bb0cc; end: 000bb103;  */

uint FUN_000bb0cc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000bf908();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_000ea51c(param_1,auStack_88);
  uVar3 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 000bb104; end: 000bb15b;  */

uint FUN_000bb104(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_000be3e4(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 000bb15c; end: 000bb1fb;  */

void FUN_000bb15c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000aed388 != -1) {
    _swift_once(0xaed388,FUN_000bad34);
  }
  uVar5 = uRam0000000000b649a0;
  uVar4 = uRam0000000000b64998;
  uVar3 = uRam0000000000b64990;
  uVar2 = uRam0000000000b64988;
  uVar1 = uRam0000000000b64980;
  *param_1 = uRam0000000000b64978;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 000bb1fc; end: 000bb237;  */

void FUN_000bb1fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaed6b8;
  uStack_18 = param_1;
  func_0x000115a8(0xaed6b8,&UNK_007d6fe0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 000bb238; end: 000bb34b;  */

void FUN_000bb238(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_c8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_c8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000bb34c; end: 000bb3eb;  */

uint FUN_000bb34c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_000be3e4(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 000bb3ec; end: 000bb4b7;  */

void FUN_000bb3ec(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_000bb484;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_000bb484;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 4) goto LAB_000bb494;
          pcVar3 = *(code **)(param_3 + 0x48);
        }
LAB_000bb484:
        (*pcVar3)();
      }
LAB_000bb494:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 000bb4b8; end: 000bb59b;  */

void FUN_000bb4b8(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if ((((((int)param_2 == 0) ||
        ((**(code **)(param_7 + 0x18))(param_2,1,param_6,param_7), unaff_x21 == 0)) &&
       ((param_2 >> 0x20 == 0 ||
        ((**(code **)(param_7 + 0x18))(param_2 >> 0x20,2,param_6,param_7), unaff_x21 == 0)))) &&
      (((int)param_3 == 0 ||
       ((**(code **)(param_7 + 0x18))(param_3,3,param_6,param_7), unaff_x21 == 0)))) &&
     ((param_3 >> 0x20 == 0 ||
      ((**(code **)(param_7 + 0x18))(param_3 >> 0x20,4,param_6,param_7), unaff_x21 == 0)))) {
    FUN_0013ad2c(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 000bb59c; end: 000bb5cf;  */

void FUN_000bb59c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 000bb5d0; end: 000bb5ff;  */

undefined1  [16] FUN_000bb5d0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 000bb600; end: 000bb633;  */

void FUN_000bb600(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 000bb634; end: 000bb647;  */

undefined1  [16] FUN_000bb634(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0xbb644;
  return auVar1;
}



/* Entry: 000bb648; end: 000bb67f;  */

void FUN_000bb648(void)

{
  FUN_000bb3ec();
  return;
}



/* Entry: 000bb680; end: 000bb683;  */

/* WARNING: Removing unreachable block (ram,0x0010f500) */

void FUN_000bb680(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_009ad0a0,&PTR_DAT_009ad0b8,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 000bb684; end: 000bb6bb;  */

uint FUN_000bb684(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000bf8c8();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_000ea51c(param_1,auStack_88);
  uVar3 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 000bb6bc; end: 000bb6f3;  */

ulong FUN_000bb6bc(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  long lVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  iVar17 = -(uint)((int)*unaff_x20 == (int)*param_1);
  iVar18 = -(uint)((int)(*unaff_x20 >> 0x20) == (int)((ulong)*param_1 >> 0x20));
  iVar19 = -(uint)((int)unaff_x20[1] == (int)param_1[1]);
  iVar20 = -(uint)((int)(unaff_x20[1] >> 0x20) == (int)((ulong)param_1[1] >> 0x20));
  uVar16 = NEON_umaxv(CONCAT26(CONCAT11(~(byte)((uint)iVar20 >> 8),~(byte)iVar20),
                               CONCAT24(CONCAT11(~(byte)((uint)iVar19 >> 8),~(byte)iVar19),
                                        CONCAT22(CONCAT11(~(byte)((uint)iVar18 >> 8),~(byte)iVar18),
                                                 CONCAT11(~(byte)((uint)iVar17 >> 8),~(byte)iVar17))
                                       )),2);
  if ((uVar16 & 1) != 0) {
    return 0;
  }
  uVar5 = unaff_x20[2];
  pbVar8 = (byte *)unaff_x20[3];
  lVar10 = param_1[2];
  uVar7 = param_1[3];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar8 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar7 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar17 = (int)uVar5;
  if ((ulong)pbVar8 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((uVar5 != 0) || (pbVar8 != (byte *)0xc000000000000000)) || (uVar7 >> 0x3e < 3)) ||
       ((uVar12 = 0, lVar10 != 0 || (uVar7 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar12 = (ulong)pbVar8 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)(uVar5 >> 0x20);
        if (SBORROW4(iVar18,iVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar18 - iVar17);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar5 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
      if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar5 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar11 == 2) {
        uVar12 = *(long *)(uVar5 + 0x18) - *(long *)(uVar5 + 0x10);
        if (SBORROW8(*(long *)(uVar5 + 0x18),*(long *)(uVar5 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = uVar7 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar18 = (int)((ulong)lVar10 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar18 - (int)lVar10)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)uVar5;
          abStack_70[1] = (byte)(uVar5 >> 8);
          abStack_70[2] = (byte)(uVar5 >> 0x10);
          abStack_70[3] = (byte)(uVar5 >> 0x18);
          abStack_70[4] = (byte)(uVar5 >> 0x20);
          abStack_70[5] = (byte)(uVar5 >> 0x28);
          abStack_70[6] = (byte)(uVar5 >> 0x30);
          abStack_70[7] = (byte)(uVar5 >> 0x38);
          abStack_70[8] = (byte)pbVar8;
          abStack_70[9] = (byte)((ulong)pbVar8 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar8 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar8 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar8 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar8 >> 0x28);
          pbVar8 = abStack_70 + ((ulong)pbVar8 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar5 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar15 = (long)iVar17;
        uVar12 = ((long)uVar5 >> 0x20) - lVar15;
        if ((long)uVar5 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar5 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar5 = 0;
        }
        else {
          uVar14 = uVar5;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar15,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar5 = (lVar15 - uVar14) + uVar5;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar5 != 0) {
            if ((long)uVar12 <= (long)uVar14) {
              uVar14 = uVar12;
            }
            pbVar9 = (byte *)(uVar14 + uVar5);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar8 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar15 = *(long *)(uVar5 + 0x10);
        lVar1 = *(long *)(uVar5 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar12 = uVar5;
        if (uVar5 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar15,uVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar5 = (lVar15 - uVar12) + uVar5;
        }
        uVar14 = lVar1 - lVar15;
        if (SBORROW8(lVar1,lVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar5 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if ((long)uVar14 <= (long)uVar12) {
            uVar12 = uVar14;
          }
          pbVar9 = (byte *)(uVar12 + uVar5);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar8 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar5,pbVar9,lVar10,uVar7);
      uVar5 = (ulong)abStack_70[0];
      pbVar8 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar5 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar5;
  }
  ___stack_chk_fail();
  lVar15 = (long)pbVar8 - uVar5;
  if (SBORROW8((long)pbVar8,uVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar14 = *unaff_x20;
  uVar12 = uVar14 & 0xffffffffffffff8;
  uVar5 = uVar12 + 0x20 + uVar5 * 8;
  uVar6 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar7 = uVar5;
  _swift_arrayDestroy(uVar5,lVar15,uVar6);
  lVar1 = lVar10 - lVar15;
  if (SBORROW8(lVar10,lVar15)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar14 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar12 + 0x10);
      lVar15 = uVar7 - (long)pbVar8;
    }
    else {
      uVar7 = uVar12;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar7 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar15 = uVar7 - (long)pbVar8;
    }
    if (SBORROW8(uVar7,(long)pbVar8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar5 = uVar5 + lVar10 * 8;
    uVar7 = uVar12 + 0x20 + (long)pbVar8 * 8;
    if (uVar5 != uVar7 || uVar7 + lVar15 * 8 <= uVar5) {
      _memmove(uVar5,uVar7,lVar15 << 3);
    }
    if (uVar14 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uVar7 = uVar12;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar7 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar12 + 0x10) = uVar7 + lVar1;
  }
  if (0 < lVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar7;
}



/* Entry: 000bb6f4; end: 000bb793;  */

void FUN_000bb6f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000aed398 != -1) {
    _swift_once(0xaed398,0xbb3a4);
  }
  uVar5 = uRam0000000000b649d0;
  uVar4 = uRam0000000000b649c8;
  uVar3 = uRam0000000000b649c0;
  uVar2 = uRam0000000000b649b8;
  uVar1 = uRam0000000000b649b0;
  *param_1 = uRam0000000000b649a8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 000bb794; end: 000bb7cf;  */

void FUN_000bb794(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaed6a8;
  uStack_18 = param_1;
  func_0x000115a8(0xaed6a8,&UNK_007d6fd8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 000bb7d0; end: 000bb8c3;  */

void FUN_000bb7d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_98,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000bb8c4; end: 000bb8f7;  */

ulong FUN_000bb8c4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *unaff_x20;
  ulong uVar17;
  long lVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  iVar20 = -(uint)((int)*param_1 == (int)*param_2);
  iVar21 = -(uint)((int)((ulong)*param_1 >> 0x20) == (int)((ulong)*param_2 >> 0x20));
  iVar22 = -(uint)((int)param_1[1] == (int)param_2[1]);
  iVar23 = -(uint)((int)((ulong)param_1[1] >> 0x20) == (int)((ulong)param_2[1] >> 0x20));
  uVar19 = NEON_umaxv(CONCAT26(CONCAT11(~(byte)((uint)iVar23 >> 8),~(byte)iVar23),
                               CONCAT24(CONCAT11(~(byte)((uint)iVar22 >> 8),~(byte)iVar22),
                                        CONCAT22(CONCAT11(~(byte)((uint)iVar21 >> 8),~(byte)iVar21),
                                                 CONCAT11(~(byte)((uint)iVar20 >> 8),~(byte)iVar20))
                                       )),2);
  if ((uVar19 & 1) != 0) {
    return 0;
  }
  lVar12 = param_2[2];
  uVar7 = param_2[3];
  lVar8 = param_1[2];
  pbVar10 = (byte *)param_1[3];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar7 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  iVar20 = (int)lVar8;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar14 = 0;
    if ((((lVar8 != 0) || (pbVar10 != (byte *)0xc000000000000000)) || (uVar7 >> 0x3e < 3)) ||
       ((uVar14 = 0, lVar12 != 0 || (uVar7 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar14 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar21 = (int)((ulong)lVar8 >> 0x20);
        if (SBORROW4(iVar21,iVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar14 = (ulong)(iVar21 - iVar20);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar15 != 2) {
        uVar7 = (ulong)(uVar14 == 0);
        goto LAB_00038af8;
      }
      uVar16 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
      if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar14 != uVar16) {
LAB_0003899c:
        uVar7 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar13 == 2) {
        uVar14 = *(long *)(lVar8 + 0x18) - *(long *)(lVar8 + 0x10);
        if (SBORROW8(*(long *)(lVar8 + 0x18),*(long *)(lVar8 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar14 = 0;
      if (1 < uVar15) goto LAB_00038898;
LAB_000388cc:
      if (uVar15 == 0) {
        uVar16 = uVar7 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar21 = (int)((ulong)lVar12 >> 0x20);
      if (SBORROW4(iVar21,(int)lVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar14 != (long)(iVar21 - (int)lVar12)) goto LAB_0003899c;
    }
    if (0 < (long)uVar14) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)lVar8;
          abStack_70[1] = (byte)((ulong)lVar8 >> 8);
          abStack_70[2] = (byte)((ulong)lVar8 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar8 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar8 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar8 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar8 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar8 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar7 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar18 = (long)iVar20;
        lVar5 = (lVar8 >> 0x20) - lVar18;
        if (lVar8 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar8 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar8 = 0;
        }
        else {
          lVar6 = lVar8;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar8 = (lVar18 - lVar6) + lVar8;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar8 != 0) {
            if (lVar5 <= lVar6) {
              lVar6 = lVar5;
            }
            pbVar11 = (byte *)(lVar6 + lVar8);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar18 = *(long *)(lVar8 + 0x10);
        lVar6 = *(long *)(lVar8 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar5 = lVar8;
        if (lVar8 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,lVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar8 = (lVar18 - lVar5) + lVar8;
        }
        lVar1 = lVar6 - lVar18;
        if (SBORROW8(lVar6,lVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar8 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar5) {
            lVar5 = lVar1;
          }
          pbVar11 = (byte *)(lVar5 + lVar8);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar8,pbVar11,lVar12,uVar7);
      uVar7 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar7 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar7;
  }
  ___stack_chk_fail();
  lVar8 = (long)pbVar10 - uVar7;
  if (SBORROW8((long)pbVar10,uVar7)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar17 = *unaff_x20;
  uVar16 = uVar17 & 0xffffffffffffff8;
  uVar7 = uVar16 + 0x20 + uVar7 * 8;
  uVar9 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar7;
  _swift_arrayDestroy(uVar7,lVar8,uVar9);
  lVar5 = lVar12 - lVar8;
  if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar5 != 0) {
    if (uVar17 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar16 + 0x10);
      lVar8 = uVar14 - (long)pbVar10;
    }
    else {
      uVar14 = uVar16;
      if ((uVar17 & 0x8000000000000000) != 0) {
        uVar14 = uVar17;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar8 = uVar14 - (long)pbVar10;
    }
    if (SBORROW8(uVar14,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar7 = uVar7 + lVar12 * 8;
    uVar14 = uVar16 + 0x20 + (long)pbVar10 * 8;
    if (uVar7 != uVar14 || uVar14 + lVar8 * 8 <= uVar7) {
      _memmove(uVar7,uVar14,lVar8 << 3);
    }
    if (uVar17 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar14 = uVar16;
      if ((uVar17 & 0x8000000000000000) != 0) {
        uVar14 = uVar17;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar5)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar14 + lVar5;
  }
  if (0 < lVar12) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 000bb8f8; end: 000bb93f;  */

void FUN_000bb8f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_00119fa0(&uStack_40,&UNK_007d70c0,0x39,2);
  uRam0000000000b649e0 = uStack_38;
  uRam0000000000b649d8 = uStack_40;
  uRam0000000000b649f0 = uStack_28;
  uRam0000000000b649e8 = uStack_30;
  uRam0000000000b64a00 = uStack_18;
  uRam0000000000b649f8 = uStack_20;
  return;
}



/* Entry: 000bb940; end: 000bba4f;  */

/* WARNING: Removing unreachable block (ram,0x000bba4c) */

void FUN_000bb940(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_000bb9c8;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_000bb9b8:
        (*pcVar3)();
      }
      else if (lVar1 == 3) {
        (**(code **)(param_3 + 0x1b8))
                  (unaff_x20 + 0x20,&UNK_009ac930,&UNK_009ac930,&PTR_DAT_009ac748,&PTR_DAT_009ac760,
                   param_2,param_3);
      }
      else if (lVar1 == 4) {
        pcVar3 = *(code **)(param_3 + 0x70);
        goto LAB_000bb9b8;
      }
LAB_000bb9c8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 000bba50; end: 000bbb57;  */

void FUN_000bba50(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
        ((*(long *)(unaff_x20[4] + 0x10) == 0 ||
         ((**(code **)(param_3 + 0x198))
                    (unaff_x20[4],3,&UNK_009ac930,&UNK_009ac930,&PTR_DAT_009ac748,&PTR_DAT_009ac760,
                     param_2,param_3), unaff_x21 == 0)))) &&
       ((*(long *)(unaff_x20[5] + 0x10) == 0 ||
        ((**(code **)(param_3 + 0x140))(unaff_x20[5],4,param_2,param_3), unaff_x21 == 0)))) {
      FUN_0013ad2c(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
    }
  }
  return;
}



/* Entry: 000bbb58; end: 000bbb9f;  */

void FUN_000bbb58(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  func_0x00020958();
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = puVar2;
  param_1[5] = puVar1;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 000bbba0; end: 000bbbbb;  */

undefined1  [16] FUN_000bbba0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe600000000000000;
  auVar1._0_8_ = 0x63697274654d;
  return auVar1;
}



/* Entry: 000bbbbc; end: 000bbbeb;  */

undefined1  [16] FUN_000bbbbc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                  *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 000bbbec; end: 000bbc1f;  */

void FUN_000bbbec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 000bbc20; end: 000bbc33;  */

undefined1  [16] FUN_000bbc20(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0xbbc30;
  return auVar1;
}



/* Entry: 000bbc34; end: 000bbc5b;  */

void FUN_000bbc34(void)

{
  FUN_000bb940();
  return;
}



/* Entry: 000bbc5c; end: 000bbc5f;  */

/* WARNING: Removing unreachable block (ram,0x0010f500) */

void FUN_000bbc5c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_009ad0a0,&PTR_DAT_009ad0b8,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 000bbc60; end: 000bbc97;  */

uint FUN_000bbc60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000bf888();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_000ea51c(param_1,auStack_88);
  uVar3 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 000bbc98; end: 000bbcdf;  */

uint FUN_000bbc98(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_000be6f4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 000bbce0; end: 000bbd7f;  */

void FUN_000bbce0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000aed3a8 != -1) {
    _swift_once(0xaed3a8,FUN_000bb8f8);
  }
  uVar5 = uRam0000000000b64a00;
  uVar4 = uRam0000000000b649f8;
  uVar3 = uRam0000000000b649f0;
  uVar2 = uRam0000000000b649e8;
  uVar1 = uRam0000000000b649e0;
  *param_1 = uRam0000000000b649d8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 000bbd80; end: 000bbdbb;  */

void FUN_000bbd80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaed698;
  uStack_18 = param_1;
  func_0x000115a8(0xaed698,&UNK_007d6fd0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 000bbdbc; end: 000bbebf;  */

void FUN_000bbdbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_b8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_b8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000bbec0; end: 000bbfcb;  */

uint FUN_000bbec0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_000be6f4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 000bbfcc; end: 000bc463;  */

void FUN_000bbfcc(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [80];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar11 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar11 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar15 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar15 = puVar3;
  puVar10 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar10 = puVar3;
  puVar14 = (undefined4 *)(unaff_x20 + 0x28);
  *puVar14 = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x90);
  *puVar4 = 0;
  puVar18 = (undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *puVar18 = 0;
  puVar19 = (undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *puVar19 = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0xa0);
  *puVar7 = 0;
  *(undefined1 *)(unaff_x20 + 0x98) = 1;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0xe000000000000000;
  puVar8 = (undefined4 *)(unaff_x20 + 0xb0);
  *puVar8 = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0xb8);
  *puVar9 = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0xe000000000000000;
  puVar5 = (undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x20 + 0xd0) = 0xc000000000000000;
  *puVar5 = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xe0) = 0xc000000000000000;
  *puVar6 = 0;
  _swift_beginAccess(param_1 + 0x10,auStack_128,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  _swift_beginAccess(puVar11,auStack_140,1,0);
  *puVar11 = uVar17;
  _swift_beginAccess(param_1 + 0x18,auStack_158,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar15,auStack_170,1,0);
  *puVar15 = uVar12;
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar12);
  _swift_beginAccess(param_1 + 0x20,auStack_188,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(puVar10,auStack_1a0,1,0);
  uVar17 = *puVar10;
  *puVar10 = uVar12;
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRelease(uVar17);
  _swift_beginAccess(param_1 + 0x28,auStack_1b8,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  _swift_beginAccess(puVar14,auStack_1d0,1,0);
  *puVar14 = uVar1;
  _swift_beginAccess(param_1 + 0x30,auStack_1e8,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  _swift_beginAccess(puVar19,auStack_200,1,0);
  *puVar19 = uVar12;
  _swift_beginAccess(param_1 + 0x38,auStack_218,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  _swift_beginAccess(unaff_x20 + 0x38,auStack_230,1,0);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar12;
  _swift_beginAccess(param_1 + 0x40,auStack_248,0,0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x68);
  uStack_f0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x78);
  uStack_e0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x88);
  uStack_d0 = *(undefined8 *)(param_1 + 0x80);
  uStack_108 = *(undefined8 *)(param_1 + 0x48);
  uStack_110 = *(undefined8 *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x58);
  uStack_100 = *(undefined8 *)(param_1 + 0x50);
  _swift_beginAccess(puVar18,auStack_260,1,0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_c0 = *puVar18;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_108;
  *puVar18 = uStack_110;
  FUN_000be35c(&uStack_110,auStack_2b0,0xaed360,&UNK_007d6a90);
  func_0x000be3a4(&uStack_c0,0xaed360,&UNK_007d6a90);
  _swift_beginAccess(param_1 + 0x90,auStack_2b0,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined1 *)(param_1 + 0x98);
  _swift_beginAccess(puVar4,auStack_2c8,1,0);
  *puVar4 = uVar12;
  *(undefined1 *)(unaff_x20 + 0x98) = uVar2;
  _swift_beginAccess(param_1 + 0xa0,auStack_2e0,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0xa0);
  uVar17 = *(undefined8 *)(param_1 + 0xa8);
  _swift_beginAccess(puVar7,auStack_2f8,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xa8);
  *puVar7 = uVar12;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar17;
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRelease(uVar13);
  _swift_beginAccess(param_1 + 0xb0,auStack_310,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  _swift_beginAccess(puVar8,auStack_328,1,0);
  *puVar8 = uVar1;
  _swift_beginAccess(param_1 + 0xb8,auStack_340,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0xb8);
  uVar17 = *(undefined8 *)(param_1 + 0xc0);
  _swift_beginAccess(puVar9,auStack_358,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xc0);
  *puVar9 = uVar12;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar17;
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRelease(uVar13);
  _swift_beginAccess(param_1 + 200,auStack_370,0,0);
  uVar12 = *(undefined8 *)(param_1 + 200);
  uVar17 = *(undefined8 *)(param_1 + 0xd0);
  _swift_beginAccess(puVar5,auStack_388,1,0);
  uVar13 = *puVar5;
  uVar16 = *(undefined8 *)(unaff_x20 + 0xd0);
  *puVar5 = uVar12;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar17;
  func_0x00023304(uVar12,uVar17);
  FUN_00023358(uVar13,uVar16);
  _swift_beginAccess(param_1 + 0xd8,auStack_3a0,0,0);
  uVar12 = *(undefined8 *)(param_1 + 0xd8);
  uVar17 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00023304(uVar12,uVar17);
  _swift_release(param_1);
  _swift_beginAccess(puVar6,auStack_3b8,1,0);
  uVar13 = *puVar6;
  uVar16 = *(undefined8 *)(unaff_x20 + 0xe0);
  *puVar6 = uVar12;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar17;
  FUN_00023358(uVar13,uVar16);
  return;
}



/* Entry: 000bc464; end: 000bc4ef;  */

void FUN_000bc464(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_000bf7cc(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
               *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
               *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
               *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
               *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xc0));
  FUN_00023358(*(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0));
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 000bc4f0; end: 000bc57f;  */

void FUN_000bc4f0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_000be33c(0);
    _swift_allocObject();
    FUN_000bbfcc(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_000bc580();
  return;
}



/* Entry: 000bc580; end: 000bc7eb;  */

/* WARNING: Removing unreachable block (ram,0x000bc67c) */
/* WARNING: Removing unreachable block (ram,0x000bc74c) */
/* WARNING: Removing unreachable block (ram,0x000bc784) */
/* WARNING: Removing unreachable block (ram,0x000bc768) */
/* WARNING: Removing unreachable block (ram,0x000bc7a0) */

void FUN_000bc580(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_000bc7ec(param_2,param_1,param_3,param_4);
        goto LAB_000bc62c;
      case 2:
        FUN_000bc880(param_2,param_1,param_3,param_4);
        goto LAB_000bc62c;
      case 3:
        FUN_000bc914(param_2,param_1,param_3,param_4);
        goto LAB_000bc62c;
      case 4:
        _swift_beginAccess(param_1 + 0x28,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x78);
        lVar2 = param_1 + 0x28;
        break;
      case 5:
        _swift_beginAccess(param_1 + 0x30,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x90);
        lVar2 = param_1 + 0x30;
        break;
      case 6:
        _swift_beginAccess(param_1 + 0x38,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x90);
        lVar2 = param_1 + 0x38;
        break;
      case 7:
        FUN_000bc9a8(param_2,param_1,param_3,param_4);
        goto LAB_000bc62c;
      case 8:
        FUN_000bca3c(param_2,param_1,param_3,param_4);
        goto LAB_000bc62c;
      case 9:
        _swift_beginAccess(param_1 + 0xa0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0xa0;
        break;
      case 10:
        _swift_beginAccess(param_1 + 0xb0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0xd8);
        lVar2 = param_1 + 0xb0;
        break;
      case 0xb:
        _swift_beginAccess(param_1 + 0xb8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0xb8;
        break;
      case 0xc:
        _swift_beginAccess(param_1 + 200,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 200;
        break;
      default:
        goto LAB_000bc62c;
      case 0xe:
        _swift_beginAccess(param_1 + 0xd8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0xd8;
      }
      (*pcVar3)(lVar2,param_3,param_4);
      _swift_endAccess(auStack_68);
LAB_000bc62c:
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 000bc7ec; end: 000bc87f;  */

void FUN_000bc7ec(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_000bebe0();
  (*pcVar2)(param_2 + 0x10,&UNK_009aa360,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 000bc880; end: 000bc913;  */

void FUN_000bc880(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x18;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_000bebe0();
  (*pcVar2)(param_2 + 0x18,&UNK_009aa360,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 000bc914; end: 000bc9a7;  */

void FUN_000bc914(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x20;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_000bebe0();
  (*pcVar2)(param_2 + 0x20,&UNK_009aa360,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 000bc9a8; end: 000bca3b;  */

void FUN_000bc9a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_000be9e8();
  (*pcVar2)(param_2 + 0x40,&UNK_009aa248,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 000bca3c; end: 000bcacf;  */

void FUN_000bca3c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x90;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000bf948();
  (*pcVar2)(param_2 + 0x90,&UNK_009aa1d0,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}


