/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f69f10; end: 103f69f47; +[SCLensCarouselPerformanceOperationEvent deactivationRequestedWithUuid:] */

void FUN_103f69f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_103f6a554();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f69f48; end: 103f69f97; +[SCLensCarouselPerformanceOperationEvent operationCompletedWithUuid:processingTime:resultCode:] */

void FUN_103f69f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  FUN_103f6a634(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 103f69f98; end: 103f6a0ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f69f98(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113035e00) == '\0') {
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_113035e08))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6a09c);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_113035e10) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6a0a4);
      (*pcVar1)();
    }
    (*param_1)(param_2,*(undefined8 *)(unaff_x20 + _DAT_113035e08),lVar2,
               *(byte *)(unaff_x20 + _DAT_113035e10) & 1,*(undefined8 *)(unaff_x20 + _DAT_113035e18)
              );
  }
  else if (*(char *)(unaff_x20 + _DAT_113035e00) == '\x01') {
    if (((undefined8 *)(unaff_x20 + _DAT_113035e20))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6a098);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113035e20));
  }
  else {
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_113035e28))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6a0a0);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113035e30) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6a0a8);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113035e38) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6a0ac);
      (*pcVar1)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_113035e30),
               *(undefined8 *)(unaff_x20 + _DAT_113035e28),lVar2,
               *(undefined8 *)(unaff_x20 + _DAT_113035e38));
  }
  return;
}



/* Entry: 103f6a0ac; end: 103f6a10f; -[SCLensCarouselPerformanceOperationEvent matchActivationRequested:deactivationRequested:operationCompleted:] */

void FUN_103f6a0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_103f69f98(FUN_103f6a8e8,auStack_40,FUN_103f6a938,auStack_60,FUN_103f6a970,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 103f6a110; end: 103f6a143;  */

void FUN_103f6a110(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f6a144; end: 103f6a1a7; -[SCLensCarouselPerformanceOperationEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6a144(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113035e08 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113035e18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113035e20 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113035e28 + 8))
  ;
  return;
}



/* Entry: 103f6a1a8; end: 103f6a417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6a1a8(undefined8 *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined7 uStack_290;
  undefined1 uStack_289;
  undefined7 uStack_288;
  undefined1 uStack_281;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined7 uStack_278;
  undefined1 uStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined7 uStack_250;
  undefined1 uStack_249;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  undefined1 uStack_239;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  undefined1 uStack_229;
  undefined7 uStack_228;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  undefined8 uStack_188;
  long lStack_180;
  byte bStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined8 uStack_f0;
  long lStack_e8;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  
  if (*(char *)(param_2 + _DAT_113035e00) == '\0') {
    lVar4 = ((undefined8 *)(param_2 + _DAT_113035e08))[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f6a408);
      (*pcVar2)();
    }
    bVar1 = *(byte *)(param_2 + _DAT_113035e10);
    if (bVar1 == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f6a410);
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_113035e08);
    if (*(long *)(param_2 + _DAT_113035e18) == 0) {
      func_0x000103f6a9e0(&uStack_210);
    }
    else {
      _objc_retain();
      func_0x0001045038f4(&uStack_f0);
      func_0x000103f6aa08(&uStack_f0);
      uStack_1c8 = uStack_a8;
      uStack_1d0 = uStack_b0;
      uStack_1b8 = uStack_98;
      uStack_1c0 = uStack_a0;
      uStack_1a8 = uStack_88;
      uStack_1b0 = uStack_90;
      uStack_19f = CONCAT17(uStack_78,uStack_7f);
      uStack_1a7 = uStack_87;
      uStack_1a0 = uStack_80;
      uStack_208 = lStack_e8;
      uStack_210 = uStack_f0;
      uStack_1f8 = uStack_d8;
      uStack_200 = uStack_e0;
      uStack_1e8 = uStack_c8;
      uStack_1f0 = uStack_d0;
      uStack_1d8 = uStack_b8;
      uStack_1e0 = uStack_c0;
    }
    bStack_178 = bVar1 & 1;
    uStack_231 = (undefined1)uStack_1b8;
    uStack_230 = (undefined7)((ulong)uStack_1b8 >> 8);
    uStack_239 = (undefined1)uStack_1c0;
    uStack_238 = (undefined7)((ulong)uStack_1c0 >> 8);
    uStack_241 = (undefined1)uStack_1c8;
    uStack_240 = (undefined7)((ulong)uStack_1c8 >> 8);
    uStack_249 = (undefined1)uStack_1d0;
    uStack_248 = (undefined7)((ulong)uStack_1d0 >> 8);
    uStack_229 = (undefined1)uStack_1b0;
    uStack_228 = (undefined7)((ulong)uStack_1b0 >> 8);
    uStack_281 = (undefined1)uStack_208;
    uStack_280 = (undefined7)((ulong)uStack_208 >> 8);
    uStack_289 = (undefined1)uStack_210;
    uStack_288 = (undefined7)((ulong)uStack_210 >> 8);
    uStack_271 = (undefined1)uStack_1f8;
    uStack_270 = (undefined7)((ulong)uStack_1f8 >> 8);
    uStack_279 = (undefined1)uStack_200;
    uStack_278 = (undefined7)((ulong)uStack_200 >> 8);
    uStack_261 = (undefined1)uStack_1e8;
    uStack_260 = (undefined7)((ulong)uStack_1e8 >> 8);
    uStack_269 = (undefined1)uStack_1f0;
    uStack_268 = (undefined7)((ulong)uStack_1f0 >> 8);
    uStack_251 = (undefined1)uStack_1d8;
    uStack_250 = (undefined7)((ulong)uStack_1d8 >> 8);
    uStack_259 = (undefined1)uStack_1e0;
    uStack_258 = (undefined7)((ulong)uStack_1e0 >> 8);
    uStack_13f = uStack_258;
    uStack_138 = uStack_251;
    uStack_147 = uStack_260;
    uStack_140 = uStack_259;
    uStack_14f = uStack_268;
    uStack_148 = uStack_261;
    uStack_157 = uStack_270;
    uStack_150 = uStack_269;
    uStack_15f = uStack_278;
    uStack_158 = uStack_271;
    uStack_167 = uStack_280;
    uStack_160 = uStack_279;
    uStack_16f = uStack_288;
    uStack_168 = uStack_281;
    uStack_177 = uStack_290;
    uStack_170 = uStack_289;
    uStack_ff = (undefined7)uStack_19f;
    uStack_f8 = (undefined1)((ulong)uStack_19f >> 0x38);
    uStack_107 = uStack_1a7;
    uStack_100 = uStack_1a0;
    uStack_10f = uStack_228;
    uStack_108 = uStack_1a8;
    uStack_117 = uStack_230;
    uStack_110 = uStack_229;
    uStack_11f = uStack_238;
    uStack_118 = uStack_231;
    uStack_127 = uStack_240;
    uStack_120 = uStack_239;
    uStack_12f = uStack_248;
    uStack_128 = uStack_241;
    uStack_137 = uStack_250;
    uStack_130 = uStack_249;
    uStack_188 = uVar3;
    lStack_180 = lVar4;
    func_0x000103f6aa00(&uStack_188);
  }
  else {
    if (*(char *)(param_2 + _DAT_113035e00) == '\x01') {
      lVar4 = ((undefined8 *)(param_2 + _DAT_113035e20))[1];
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f6a404);
        (*pcVar2)();
      }
      uStack_188 = *(undefined8 *)(param_2 + _DAT_113035e20);
      lStack_180 = lVar4;
      func_0x000103f6a9d4(&uStack_188);
      uStack_90 = CONCAT71(uStack_127,uStack_128);
      goto LAB_103f6a380;
    }
    lVar4 = ((undefined8 *)(param_2 + _DAT_113035e28))[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f6a40c);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_113035e30) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f6a414);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_113035e38) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f6a418);
      (*pcVar2)();
    }
    uStack_188 = *(undefined8 *)(param_2 + _DAT_113035e28);
    uVar3 = *(undefined8 *)(param_2 + _DAT_113035e38);
    uVar5 = *(undefined8 *)(param_2 + _DAT_113035e30);
    bStack_178 = (byte)uVar5;
    uStack_177 = (undefined7)((ulong)uVar5 >> 8);
    uStack_170 = (undefined1)uVar3;
    uStack_16f = (undefined7)((ulong)uVar3 >> 8);
    lStack_180 = lVar4;
    func_0x000103f6a9c8(&uStack_188);
  }
  uStack_90 = CONCAT71(uStack_127,uStack_128);
LAB_103f6a380:
  uStack_68 = CONCAT71(uStack_ff,uStack_100);
  uStack_70 = CONCAT71(uStack_107,uStack_108);
  uStack_60 = CONCAT11(uStack_f7,uStack_f8);
  uStack_c8 = CONCAT71(uStack_15f,uStack_160);
  uStack_d0 = CONCAT71(uStack_167,uStack_168);
  uStack_b8 = CONCAT71(uStack_14f,uStack_150);
  uStack_c0 = CONCAT71(uStack_157,uStack_158);
  uStack_a8 = CONCAT71(uStack_13f,uStack_140);
  uStack_b0 = CONCAT71(uStack_147,uStack_148);
  uStack_98 = CONCAT71(uStack_12f,uStack_130);
  uStack_a0 = CONCAT71(uStack_137,uStack_138);
  uStack_d8 = CONCAT71(uStack_16f,uStack_170);
  uStack_e0 = CONCAT71(uStack_177,bStack_178);
  lStack_e8 = lStack_180;
  uStack_f0 = uStack_188;
  uStack_88 = uStack_120;
  uStack_87 = uStack_11f;
  uStack_80 = uStack_118;
  uStack_7f = uStack_117;
  uStack_78 = uStack_110;
  uStack_77 = uStack_10f;
  _swift_bridgeObjectRetain(lVar4);
  param_1[0xd] = CONCAT71(uStack_87,uStack_88);
  param_1[0xc] = uStack_90;
  param_1[0xf] = CONCAT71(uStack_77,uStack_78);
  param_1[0xe] = CONCAT71(uStack_7f,uStack_80);
  param_1[0x11] = uStack_68;
  param_1[0x10] = uStack_70;
  *(undefined2 *)(param_1 + 0x12) = uStack_60;
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[9] = uStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  param_1[1] = lStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  return;
}



/* Entry: 103f6a418; end: 103f6a45f;  */

undefined8 FUN_103f6a418(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103f6a460; end: 103f6a553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6a460(long param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_103f6a720();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113035e00) = 0;
  plVar1 = (long *)(lVar5 + _DAT_113035e08);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined1 *)(lVar5 + _DAT_113035e10) = param_3;
  *(undefined8 *)(lVar5 + _DAT_113035e18) = param_4;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113035e20);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113035e28);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113035e30);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113035e38);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 103f6a554; end: 103f6a633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6a554(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_103f6a720();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113035e00) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113035e08);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_113035e10) = 2;
  *(undefined8 *)(lVar5 + _DAT_113035e18) = 0;
  plVar2 = (long *)(lVar5 + _DAT_113035e20);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113035e28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113035e30);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113035e38);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 103f6a634; end: 103f6a71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6a634(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_2;
  FUN_103f6a720();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113035e00) = 2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113035e08);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_113035e10) = 2;
  *(undefined8 *)(lVar5 + _DAT_113035e18) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113035e20);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_113035e28);
  *plVar2 = param_2;
  plVar2[1] = param_3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113035e30);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113035e38);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 103f6a720; end: 103f6a73f;  */

void FUN_103f6a720(void)

{
  _objc_opt_self(&PTR_PTR_11296bf60);
  return;
}



/* Entry: 103f6a740; end: 103f6a8a7;  */

int FUN_103f6a740(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f6a7bc;
        goto LAB_103f6a7a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f6a7a0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103f6a7bc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f6a8a8; end: 103f6a8e7;  */

void FUN_103f6a8a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0380;
  _swift_getWitnessTable(&UNK_10dcb0380,&UNK_110726800);
  puRam0000000113035e68 = puVar1;
  return;
}



/* Entry: 103f6a8e8; end: 103f6a937;  */

void FUN_103f6a8e8(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3 & 1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f6a938; end: 103f6a96f;  */

void FUN_103f6a938(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f6a970; end: 103f6a9c7;  */

void FUN_103f6a970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(param_1,lVar1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103f6a9c8; end: 103f6aa0b;  */

void FUN_103f6a9c8(long param_1)

{
  *(undefined1 *)(param_1 + 0x91) = 2;
  return;
}



/* Entry: 103f6aa0c; end: 103f6aa1b; -[LensCarouselPreviewDependencyServices previewViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6aa0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035e70));
  return;
}



/* Entry: 103f6aa1c; end: 103f6aa3b; -[LensCarouselPreviewDependencyServices previewCarouselScrollSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6aa1c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113035e78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f6aa3c; end: 103f6ab03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6aa3c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035e70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113035e78) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6ab04; end: 103f6ab7b; -[LensCarouselPreviewDependencyServices initWithPreviewViewProvider:previewCarouselScrollSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6ab04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035e70) = param_3;
  *(undefined8 *)(param_1 + _DAT_113035e78) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f6ab7c; end: 103f6abdb; -[LensCarouselPreviewDependencyServices init] */

void FUN_103f6ab7c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselPreviewServices.LensCarouselPreviewDependencyServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6aba8);
  (*pcVar1)();
}



/* Entry: 103f6abdc; end: 103f6ac13; -[LensCarouselPreviewDependencyServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6abdc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113035e70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113035e78));
  return;
}



/* Entry: 103f6ac14; end: 103f6ac33;  */

void FUN_103f6ac14(void)

{
  _objc_opt_self(&PTR_PTR_11296c058);
  return;
}



/* Entry: 103f6ac34; end: 103f6ac5f;  */

void FUN_103f6ac34(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000103f6ac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(0,0,param_1,param_2);
  return;
}



/* Entry: 103f6ac60; end: 103f6ad0b;  */

void FUN_103f6ac60(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f6ad0c; end: 103f6ad67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6ad0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113035ea8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6ad68; end: 103f6adc7; -[_TtC27LensCarouselPreviewServices40PreviewLensIconImpressionLoggingServices init] */

void FUN_103f6ad68(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselPreviewServices.PreviewLensIconImpressionLoggingServices",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6ad94);
  (*pcVar1)();
}



/* Entry: 103f6adc8; end: 103f6adcb;  */

void FUN_103f6adc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0470;
  _swift_getWitnessTable(&UNK_10dcb0470,&UNK_110726990);
  puRam0000000113035eb0 = puVar1;
  return;
}



/* Entry: 103f6adcc; end: 103f6ae0b;  */

void FUN_103f6adcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035eb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0470;
  _swift_getWitnessTable(&UNK_10dcb0470,&UNK_110726990);
  puRam0000000113035eb0 = puVar1;
  return;
}



/* Entry: 103f6ae0c; end: 103f6af6f;  */

int FUN_103f6ae0c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f6ae88;
        goto LAB_103f6ae6c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f6ae6c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103f6ae88:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f6af70; end: 103f6af7f; -[_TtC27LensCarouselPreviewServices40PreviewLensIconImpressionLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6af70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113035ea8));
  return;
}



/* Entry: 103f6af80; end: 103f6af8f; -[_TtC27LensCarouselPreviewServices55SCSnapEditorScopedLensCarouselPreviewDependencyServices lensCarouselPreviewDependencyServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6af80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035ee0));
  return;
}



/* Entry: 103f6af90; end: 103f6b027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6af90(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035ee0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6b028; end: 103f6b07f; -[_TtC27LensCarouselPreviewServices55SCSnapEditorScopedLensCarouselPreviewDependencyServices initWithLensCarouselPreviewDependencyServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035ee0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f6b080; end: 103f6b0df; -[_TtC27LensCarouselPreviewServices55SCSnapEditorScopedLensCarouselPreviewDependencyServices init] */

void FUN_103f6b080(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselPreviewServices.SCSnapEditorScopedLensCarouselPreviewDependencyServices",
             0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6b0ac);
  (*pcVar1)();
}



/* Entry: 103f6b0e0; end: 103f6b0ef; -[_TtC27LensCarouselPreviewServices55SCSnapEditorScopedLensCarouselPreviewDependencyServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035ee0));
  return;
}



/* Entry: 103f6b0f0; end: 103f6b10f;  */

void FUN_103f6b0f0(void)

{
  _objc_opt_self(&PTR_PTR_11296c1e0);
  return;
}



/* Entry: 103f6b110; end: 103f6b127;  */

bool FUN_103f6b110(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f6b128; end: 103f6b167;  */

void FUN_103f6b128(void)

{
  undefined *puVar1;
  
  if (puRam0000000113035f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb05e0;
  _swift_getWitnessTable(&UNK_10dcb05e0,&UNK_110726a68);
  puRam0000000113035f10 = puVar1;
  return;
}



/* Entry: 103f6b168; end: 103f6b213;  */

void FUN_103f6b168(void)

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



/* Entry: 103f6b214; end: 103f6b24b;  */

void FUN_103f6b214(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103f6b24c; end: 103f6b297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b24c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035f18) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6b298; end: 103f6b2ef; -[_TtC31SCLensCarouselSchedulerServices45SCCameraUIScopedLensCarouselSchedulerServices initWithLensCarouselSchedulerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035f18) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f6b2f0; end: 103f6b34f; -[_TtC31SCLensCarouselSchedulerServices45SCCameraUIScopedLensCarouselSchedulerServices init] */

void FUN_103f6b2f0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselSchedulerServices.SCCameraUIScopedLensCarouselSchedulerServices",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6b31c);
  (*pcVar1)();
}



/* Entry: 103f6b350; end: 103f6b35f; -[_TtC31SCLensCarouselSchedulerServices45SCCameraUIScopedLensCarouselSchedulerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035f18));
  return;
}



/* Entry: 103f6b360; end: 103f6b3ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b360(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035f48) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6b3ac; end: 103f6b403; -[_TtC31SCLensCarouselSchedulerServices31SCLensCarouselSchedulerServices initWithLensCarouselScheduler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b3ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035f48) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f6b404; end: 103f6b463; -[_TtC31SCLensCarouselSchedulerServices31SCLensCarouselSchedulerServices init] */

void FUN_103f6b404(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselSchedulerServices.SCLensCarouselSchedulerServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6b430);
  (*pcVar1)();
}



/* Entry: 103f6b464; end: 103f6b473; -[_TtC31SCLensCarouselSchedulerServices31SCLensCarouselSchedulerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035f48));
  return;
}



/* Entry: 103f6b474; end: 103f6b483; -[_TtC31SCLensCarouselSchedulerServices53SCLensTalkCarouselScopedLensCarouselSchedulerServices lensCarouselSchedulerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035f78));
  return;
}



/* Entry: 103f6b484; end: 103f6b51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b484(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035f78) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6b51c; end: 103f6b573; -[_TtC31SCLensCarouselSchedulerServices53SCLensTalkCarouselScopedLensCarouselSchedulerServices initWithLensCarouselSchedulerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035f78) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f6b574; end: 103f6b5d3; -[_TtC31SCLensCarouselSchedulerServices53SCLensTalkCarouselScopedLensCarouselSchedulerServices init] */

void FUN_103f6b574(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselSchedulerServices.SCLensTalkCarouselScopedLensCarouselSchedulerServices"
             ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6b5a0);
  (*pcVar1)();
}



/* Entry: 103f6b5d4; end: 103f6b5e3; -[_TtC31SCLensCarouselSchedulerServices53SCLensTalkCarouselScopedLensCarouselSchedulerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035f78));
  return;
}



/* Entry: 103f6b5e4; end: 103f6b603;  */

void FUN_103f6b5e4(void)

{
  _objc_opt_self(&PTR_PTR_11296c420);
  return;
}



/* Entry: 103f6b604; end: 103f6b613; -[_TtC31SCLensCarouselSchedulerServices44SCPreviewScopedLensCarouselSchedulerServices lensCarouselSchedulerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035fa8));
  return;
}



/* Entry: 103f6b614; end: 103f6b6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b614(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035fa8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6b6ac; end: 103f6b703; -[_TtC31SCLensCarouselSchedulerServices44SCPreviewScopedLensCarouselSchedulerServices initWithLensCarouselSchedulerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b6ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035fa8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f6b704; end: 103f6b763; -[_TtC31SCLensCarouselSchedulerServices44SCPreviewScopedLensCarouselSchedulerServices init] */

void FUN_103f6b704(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselSchedulerServices.SCPreviewScopedLensCarouselSchedulerServices",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6b730);
  (*pcVar1)();
}



/* Entry: 103f6b764; end: 103f6b773; -[_TtC31SCLensCarouselSchedulerServices44SCPreviewScopedLensCarouselSchedulerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035fa8));
  return;
}



/* Entry: 103f6b774; end: 103f6b793;  */

void FUN_103f6b774(void)

{
  _objc_opt_self(&PTR_PTR_11296c4e0);
  return;
}



/* Entry: 103f6b794; end: 103f6b7a3; -[_TtC31SCLensCarouselSchedulerServices47SCSnapEditorScopedLensCarouselSchedulerServices lensCarouselSchedulerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113035fd8));
  return;
}



/* Entry: 103f6b7a4; end: 103f6b83b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b7a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113035fd8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6b83c; end: 103f6b893; -[_TtC31SCLensCarouselSchedulerServices47SCSnapEditorScopedLensCarouselSchedulerServices initWithLensCarouselSchedulerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b83c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113035fd8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f6b894; end: 103f6b8f3; -[_TtC31SCLensCarouselSchedulerServices47SCSnapEditorScopedLensCarouselSchedulerServices init] */

void FUN_103f6b894(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensCarouselSchedulerServices.SCSnapEditorScopedLensCarouselSchedulerServices",0x4f,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6b8c0);
  (*pcVar1)();
}



/* Entry: 103f6b8f4; end: 103f6b903; -[_TtC31SCLensCarouselSchedulerServices47SCSnapEditorScopedLensCarouselSchedulerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113035fd8));
  return;
}



/* Entry: 103f6b904; end: 103f6b923;  */

void FUN_103f6b904(void)

{
  _objc_opt_self(&PTR_PTR_11296c5a0);
  return;
}



/* Entry: 103f6b924; end: 103f6b97b;  */

int FUN_103f6b924(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103f6b97c; end: 103f6b98b; -[SCLensCarouselSchedulerOperationResult processingTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f6b97c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036008);
}



/* Entry: 103f6b98c; end: 103f6b9a3; -[SCLensCarouselSchedulerOperationResult resultCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f6b98c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113036010);
}



/* Entry: 103f6b9a4; end: 103f6bacf; -[SCLensCarouselSchedulerOperationResult initWithProcessingTime:resultCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6b9a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_113036008) = param_1;
  *(undefined8 *)(param_2 + _DAT_113036010) = param_4;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6bad0; end: 103f6bad3; -[SCLensCarouselSchedulerOperationResult copyWithZone:] */

void FUN_103f6bad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f6bad4; end: 103f6baef; -[SCLensCarouselSchedulerOperationResult description] */

void FUN_103f6bad4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f6baf0; end: 103f6bb8b; -[SCLensCarouselSchedulerOperationResult init] */

void FUN_103f6baf0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensCarouselSchedulerServices/LensCarouselSchedulerOperationResultWrapper.swift",
             0x51,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6bb38);
  (*pcVar1)();
}



/* Entry: 103f6bb8c; end: 103f6bb8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6bb8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113036008) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113036010) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6bb90; end: 103f6bb9f; -[_TtC25SCLensURLBrowsingServices25SCLensURLBrowsingServices lensURLBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6bb90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113036040));
  return;
}



/* Entry: 103f6bba0; end: 103f6bbeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6bba0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113036040) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6bbec; end: 103f6bc43; -[_TtC25SCLensURLBrowsingServices25SCLensURLBrowsingServices initWithLensURLBrowser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6bbec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113036040) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f6bc44; end: 103f6bca3; -[_TtC25SCLensURLBrowsingServices25SCLensURLBrowsingServices init] */

void FUN_103f6bc44(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensURLBrowsingServices.SCLensURLBrowsingServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6bc70);
  (*pcVar1)();
}



/* Entry: 103f6bca4; end: 103f6bcbb; -[_TtC25SCLensURLBrowsingServices25SCLensURLBrowsingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6bca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113036040));
  return;
}



/* Entry: 103f6bcbc; end: 103f6bd5b;  */

void FUN_103f6bcbc(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f6bd5c; end: 103f6bd5f;  */

void FUN_103f6bd5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0840;
  _swift_getWitnessTable(&UNK_10dcb0840,&UNK_110726c88);
  puRam0000000113036070 = puVar1;
  return;
}



/* Entry: 103f6bd60; end: 103f6bd9f;  */

void FUN_103f6bd60(void)

{
  undefined *puVar1;
  
  if (puRam0000000113036070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0840;
  _swift_getWitnessTable(&UNK_10dcb0840,&UNK_110726c88);
  puRam0000000113036070 = puVar1;
  return;
}



/* Entry: 103f6bda0; end: 103f6be8b;  */

uint FUN_103f6bda0(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103f6be8c; end: 103f6bed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6be8c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113036078) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f6bed8; end: 103f6bf2f; -[_TtC31CameraPreviewPresentingServices31CameraPreviewPresentingServices initWithCameraPreviewPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6bed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113036078) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f6bf30; end: 103f6bf8f; -[_TtC31CameraPreviewPresentingServices31CameraPreviewPresentingServices init] */

void FUN_103f6bf30(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CameraPreviewPresentingServices.CameraPreviewPresentingServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6bf5c);
  (*pcVar1)();
}



/* Entry: 103f6bf90; end: 103f6bf9f; -[_TtC31CameraPreviewPresentingServices31CameraPreviewPresentingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f6bf90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113036078));
  return;
}



/* Entry: 103f6bfa0; end: 103f6c03f;  */

void FUN_103f6bfa0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f6c040; end: 103f6c063;  */

void FUN_103f6c040(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 103f6c064; end: 103f6c07f; -[SCCameraPreviewPresenterEvents description] */

void FUN_103f6c064(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f6c080; end: 103f6c0c7; -[SCCameraPreviewPresenterEvents init] */

void FUN_103f6c080(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "CameraPreviewPresentingServices/CameraPreviewPresenterEventsWrapper.swift",0x49,2,0x24
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f6c0c8);
  (*pcVar1)();
}



/* Entry: 103f6c0c8; end: 103f6c0cb; -[SCCameraPreviewPresenterEvents copyWithZone:] */

void FUN_103f6c0c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f6c0cc; end: 103f6c10b; +[SCCameraPreviewPresenterEvents willEnterPreview] */

void FUN_103f6c0cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_1;
  _objc_allocWithZone();
  uStack_30 = uVar1;
  uStack_28 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f6c10c; end: 103f6c117; -[SCCameraPreviewPresenterEvents matchWillEnterPreview:] */

void FUN_103f6c10c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103f6c114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 103f6c118; end: 103f6c16b;  */

void FUN_103f6c118(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f6c16c; end: 103f6c25b;  */

uint FUN_103f6c16c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103f6c25c; end: 103f6c29b;  */

void FUN_103f6c25c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130360d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb0964;
  _swift_getWitnessTable(&UNK_10dcb0964,&UNK_110726d50);
  puRam00000001130360d8 = puVar1;
  return;
}


