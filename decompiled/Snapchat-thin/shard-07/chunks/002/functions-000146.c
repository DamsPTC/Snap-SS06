/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052b500c; end: 1052b5023;  */

void FUN_1052b500c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1052b5024; end: 1052b503f;  */

void FUN_1052b5024(long param_1)

{
  FUN_1052b4c6c();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1052b5040; end: 1052b50af;  */

void FUN_1052b5040(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_1052b50b0();
      func_0x0001052b53a0();
      func_0x0001052b5398();
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      lVar2 = param_2[1] - (plVar1[1] - *plVar1);
      _memcpy(lVar2);
      param_2[1] = lVar2;
      lVar2 = *plVar1;
      plVar1[1] = lVar2;
      *plVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar2;
      lVar2 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_1052b5144(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x0001052b53b4();
    func_0x0001052b53a0();
  }
  return;
}



/* Entry: 1052b50b0; end: 1052b50c3;  */

void FUN_1052b50b0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] - (plVar1[1] - *plVar1);
  _memcpy(lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1052b50c4; end: 1052b5143;  */

void FUN_1052b50c4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
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



/* Entry: 1052b5144; end: 1052b51af;  */

long * FUN_1052b5144(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001052b518c();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1052b51b0; end: 1052b51cb;  */

long * FUN_1052b51b0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1052b51f8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1052b51cc; end: 1052b51f7;  */

long * FUN_1052b51cc(long *param_1)

{
  FUN_1052b51f8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1052b51f8; end: 1052b521b;  */

void FUN_1052b51f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1052b521c; end: 1052b525f;  */

undefined8 * FUN_1052b521c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_1052b5260();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 1052b5260; end: 1052b52eb;  */

long FUN_1052b5260(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_1052b52ec(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_1052b5144(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  puStack_38 = puStack_38 + 2;
  func_0x0001052b53b4();
  lVar2 = param_1[1];
  func_0x0001052b53a0();
  return lVar2;
}



/* Entry: 1052b52ec; end: 1052b5363;  */

long * FUN_1052b52ec(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_1052b50b0();
  FUN_1052b4d30();
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return param_1;
}



/* Entry: 1052b5364; end: 1052b53d3;  */

void FUN_1052b5364(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1052b53d4; end: 1052b5bef;  */

void FUN_1052b53d4(ulong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  long lVar7;
  undefined1 auStack_458 [16];
  undefined8 uStack_448;
  undefined1 auStack_440 [16];
  undefined8 uStack_430;
  undefined1 auStack_428 [16];
  undefined8 uStack_418;
  undefined1 auStack_410 [16];
  undefined8 uStack_400;
  undefined1 auStack_3f8 [16];
  undefined1 auStack_3e8 [16];
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [16];
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [16];
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [16];
  undefined8 uStack_390;
  undefined1 auStack_388 [16];
  undefined8 uStack_378;
  undefined1 auStack_370 [16];
  undefined8 uStack_360;
  undefined1 auStack_358 [16];
  undefined8 uStack_348;
  undefined1 auStack_340 [16];
  undefined8 uStack_330;
  undefined1 auStack_328 [16];
  undefined8 uStack_318;
  undefined1 auStack_310 [16];
  undefined8 uStack_300;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [32];
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [32];
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052b1e10();
  FUN_1052b2054(param_1);
  FUN_1052b2d64(param_1);
  FUN_1052b36d4(param_1);
  FUN_1052b3f24(param_1);
  FUN_1052b439c(param_1);
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9f28);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9f28) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052b5460;
  if ((bRam00000001136b9f30 & 1) == 0) goto LAB_1052b5488;
  while( true ) {
    func_0x000108b80888(0x1136b9f48,param_1);
LAB_1052b5460:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
LAB_1052b5488:
    iVar3 = 0x136b9f30;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_1052b5c88();
      pcVar4 = "resolveUrl";
      func_0x0001003a83dc(&uStack_300,"resolveUrl");
      FUN_1052b6458();
      func_0x0001052b63b0();
      func_0x0001003adcc0(auStack_1a8,pcVar4);
      func_0x000104bdbd7c();
      func_0x0001052b6348();
      func_0x0001052b6314(auStack_310);
      uStack_188 = uStack_300;
      uStack_300 = 0;
      func_0x0001003aef98(auStack_180,auStack_310);
      pcVar4 = "resolveUrlAsync";
      func_0x0001003a83dc(&uStack_318,"resolveUrlAsync");
      FUN_1052b614c();
      func_0x000104bdbd7c();
      puVar5 = auStack_1c8;
      func_0x0001003adcc0(puVar5,pcVar4);
      func_0x000104bdbd7c();
      func_0x0001003adcc0(auStack_1b8,puVar5);
      func_0x000104bdbd48(auStack_328,0x1136b9f58,auStack_1c8,2);
      uStack_170 = uStack_318;
      uStack_318 = 0;
      func_0x0001003aef98(auStack_168,auStack_328);
      pcVar4 = "resolveContentBundle";
      func_0x0001003a83dc(&uStack_330,"resolveContentBundle");
      FUN_1052b44c0();
      func_0x0001052b63f8();
      func_0x0001003adcc0(auStack_1e8,pcVar4);
      func_0x000104bdbd7c();
      func_0x0001052b6348();
      func_0x0001052b6314(auStack_340);
      uStack_158 = uStack_330;
      uStack_330 = 0;
      func_0x0001003aef98(auStack_150,auStack_340);
      pcVar4 = "resolveContentBundleWithMetadata";
      func_0x0001003a83dc(&uStack_348,"resolveContentBundleWithMetadata");
      FUN_1052b40e4();
      func_0x0001052b63f8();
      func_0x0001003adcc0(auStack_208,pcVar4);
      func_0x000104bdbd7c();
      func_0x0001052b6348();
      func_0x0001052b6314(auStack_358);
      uStack_140 = uStack_348;
      uStack_348 = 0;
      func_0x0001003aef98(auStack_138,auStack_358);
      pcVar4 = "resolveContentBundleAsPlatformResult";
      func_0x0001003a83dc(&uStack_360,"resolveContentBundleAsPlatformResult");
      FUN_1052b6458();
      func_0x0001052b63f8();
      func_0x0001003adcc0(auStack_218,pcVar4);
      func_0x0001052b6328(auStack_370);
      uStack_128 = uStack_360;
      uStack_360 = 0;
      func_0x0001003aef98(auStack_120,auStack_370);
      pcVar4 = "extractAllContentLocationsFromContentBundle";
      func_0x0001003a83dc(&uStack_378,"extractAllContentLocationsFromContentBundle");
      if ((bRam00000001136b9f40 & 1) == 0) {
        pcVar4 = (char *)0x1136b9f40;
        ___cxa_guard_acquire();
        if ((int)pcVar4 != 0) {
          FUN_1052b44c0();
          func_0x00010b990868(0x1136b9f68);
          pcVar4 = (char *)0x1136b9f40;
          ___cxa_guard_release(0x1136b9f40);
        }
      }
      FUN_1052b39bc();
      func_0x0001003adcc0(auStack_228,pcVar4);
      func_0x000104bdbd48(auStack_388,0x1136b9f68,auStack_228,1);
      uStack_110 = uStack_378;
      uStack_378 = 0;
      func_0x0001003aef98(auStack_108,auStack_388);
      pcVar4 = "resolveSerializedContentObject";
      func_0x0001003a83dc(&uStack_390,"resolveSerializedContentObject");
      FUN_1052b6458();
      func_0x000108b80a94();
      func_0x0001003adcc0(auStack_248,pcVar4);
      func_0x000104bdbd7c();
      func_0x0001052b6348();
      func_0x0001052b6314(auStack_3a0);
      uStack_f8 = uStack_390;
      uStack_390 = 0;
      func_0x0001003aef98(auStack_f0,auStack_3a0);
      pcVar4 = "resolveSerializedContentObjectAsync";
      func_0x0001003a83dc(&uStack_3a8,"resolveSerializedContentObjectAsync");
      FUN_1052b614c();
      func_0x000108b80a94();
      puVar5 = auStack_268;
      func_0x0001003adcc0(puVar5,pcVar4);
      func_0x000104bdbd7c();
      func_0x0001003adcc0(auStack_258,puVar5);
      func_0x000104bdbd48(auStack_3b8,0x1136b9f58,auStack_268,2);
      uStack_e0 = uStack_3a8;
      uStack_3a8 = 0;
      func_0x0001003aef98(auStack_d8,auStack_3b8);
      pcVar4 = "resolveContentLocationToURLs";
      func_0x0001003a83dc(&uStack_3c0,"resolveContentLocationToURLs");
      FUN_1052977e0();
      pcVar6 = pcVar4;
      FUN_1052b44c0();
      func_0x0001003adcc0(auStack_288,pcVar6);
      func_0x000104bdbd7c();
      func_0x0001052b6348();
      func_0x0001052b6314(auStack_3d0);
      uStack_c8 = uStack_3c0;
      uStack_3c0 = 0;
      func_0x0001003aef98(auStack_c0,auStack_3d0);
      pcVar6 = "updateNetworkMapping";
      func_0x0001003a83dc(&uStack_3d8,"updateNetworkMapping");
      func_0x0001003b166c(auStack_3f8);
      func_0x000108b80a94();
      func_0x0001003adcc0(auStack_298,pcVar6);
      func_0x000104bdbd48(auStack_3e8,auStack_3f8,auStack_298,1);
      uStack_b0 = uStack_3d8;
      uStack_3d8 = 0;
      func_0x0001003aef98(auStack_a8,auStack_3e8);
      pcVar6 = "getUrlForRelativePathWithinAssetGroup";
      func_0x0001003a83dc(&uStack_400,"getUrlForRelativePathWithinAssetGroup");
      func_0x000104bdbd7c();
      func_0x0001052b63b0();
      puVar5 = auStack_2c8;
      func_0x0001003adcc0(puVar5,pcVar6);
      func_0x000104bdbd7c();
      func_0x0001052b6348();
      func_0x000104bdbd7c();
      func_0x0001003adcc0(auStack_2a8,puVar5);
      func_0x000104bdbd48(auStack_410,pcVar4,auStack_2c8,3);
      uStack_98 = uStack_400;
      uStack_400 = 0;
      func_0x0001003aef98(auStack_90,auStack_410);
      pcVar4 = "getContentIdFromContentUrl";
      func_0x0001003a83dc(&uStack_418);
      func_0x000104bf1120();
      func_0x0001052b63b0();
      func_0x0001003adcc0(auStack_2d8,pcVar4);
      func_0x0001052b6328(auStack_428);
      uStack_80 = uStack_418;
      uStack_418 = 0;
      func_0x0001003aef98(auStack_78,auStack_428);
      pcVar4 = "isContentObjectExpired";
      func_0x0001003a83dc(&uStack_430,"isContentObjectExpired");
      func_0x000104bef4f0();
      func_0x000108b80a94();
      func_0x0001003adcc0(auStack_2e8,pcVar4);
      func_0x0001052b6328(auStack_440);
      uStack_68 = uStack_430;
      uStack_430 = 0;
      func_0x0001003aef98(auStack_60,auStack_440);
      pcVar4 = "convertContentUrlToContentObject";
      func_0x0001003a83dc(&uStack_448);
      func_0x000108b80a94();
      func_0x0001052b63b0();
      func_0x0001003adcc0(auStack_2f8,pcVar4);
      func_0x0001052b6328(auStack_458);
      uStack_50 = uStack_448;
      uStack_448 = 0;
      func_0x0001003aef98(auStack_48,auStack_458);
      func_0x000104bdbd44(0x1136b9f48,0x1138191d0,1,&uStack_188,0xe);
      lVar7 = 0x138;
      do {
        func_0x0001003b1c5c(auStack_180 + lVar7 + -8);
        lVar7 = lVar7 + -0x18;
        uVar2 = lVar7 == -0x18;
      } while (!(bool)uVar2);
      func_0x0001052b6320(auStack_458);
      func_0x0001052b6320(auStack_2f8);
      func_0x0001003a8c94(&uStack_448);
      func_0x0001052b6320(auStack_440);
      func_0x0001052b6320(auStack_2e8);
      func_0x0001003a8c94(&uStack_430);
      func_0x0001052b6320(auStack_428);
      func_0x0001052b6320(auStack_2d8);
      func_0x0001003a8c94(&uStack_418);
      func_0x0001052b6320(auStack_410);
      do {
        func_0x0001052b6334();
        func_0x0001052b6360();
      } while (!(bool)uVar2);
      func_0x0001003a8c94(&uStack_400);
      func_0x0001052b6320(auStack_3e8);
      func_0x0001052b6320(auStack_298);
      func_0x0001052b6320(auStack_3f8);
      func_0x0001003a8c94(&uStack_3d8);
      func_0x0001052b6320(auStack_3d0);
      do {
        func_0x0001052b6334();
        func_0x0001052b6360();
      } while (!(bool)uVar2);
      func_0x0001003a8c94(&uStack_3c0);
      func_0x0001052b6320(auStack_3b8);
      do {
        func_0x0001052b6334();
        func_0x0001052b6360();
      } while (!(bool)uVar2);
      func_0x0001003a8c94(&uStack_3a8);
      func_0x0001052b6320(auStack_3a0);
      do {
        func_0x0001052b6334();
        func_0x0001052b6360();
      } while (!(bool)uVar2);
      func_0x0001003a8c94(&uStack_390);
      func_0x0001052b6320(auStack_388);
      func_0x0001052b6320(auStack_228);
      func_0x0001003a8c94(&uStack_378);
      func_0x0001052b6320(auStack_370);
      func_0x0001052b6320(auStack_218);
      func_0x0001003a8c94(&uStack_360);
      func_0x0001052b6320(auStack_358);
      do {
        func_0x0001052b6334();
        func_0x0001052b6360();
      } while (!(bool)uVar2);
      func_0x0001003a8c94(&uStack_348);
      func_0x0001052b6320(auStack_340);
      do {
        func_0x0001052b6334();
        func_0x0001052b6360();
      } while (!(bool)uVar2);
      func_0x0001003a8c94(&uStack_330);
      func_0x0001052b6320(auStack_328);
      do {
        func_0x0001052b6334();
        func_0x0001052b6360();
      } while (!(bool)uVar2);
      func_0x0001003a8c94(&uStack_318);
      func_0x0001052b6320(auStack_310);
      do {
        func_0x0001052b6334();
        func_0x0001052b6360();
      } while (!(bool)uVar2);
      func_0x0001003a8c94(&uStack_300);
      ___cxa_guard_release(0x1136b9f30);
    }
  }
  return;
}



/* Entry: 1052b5bf0; end: 1052b5c87;  */

undefined8 FUN_1052b5bf0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam00000001138191c8 & 1) == 0) {
    iVar4 = 0x138191c8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052b5c88();
      lStack_20 = lRam00000001138191d0;
      if (lRam00000001138191d0 != 0) {
        piVar1 = (int *)(lRam00000001138191d0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x1138191b8,&lStack_20);
      func_0x0001052b6424();
      ___cxa_guard_release(0x1138191c8);
    }
  }
  return 0x1138191b8;
}



/* Entry: 1052b5c88; end: 1052b5cdb;  */

void FUN_1052b5c88(void)

{
  int iVar1;
  
  if ((bRam00000001138191d8 & 1) == 0) {
    iVar1 = 0x138191d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1138191d0,"_djinni_interface_ContentResolver");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138191d8);
      return;
    }
  }
  return;
}



/* Entry: 1052b5cdc; end: 1052b5d53;  */

void FUN_1052b5cdc(long param_1)

{
  func_0x0001052b5d04(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1052b5d54; end: 1052b5da7;  */

void FUN_1052b5d54(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 1052b5da8; end: 1052b5e57;  */

undefined8 * FUN_1052b5da8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001052b5e30(&uStack_30);
  return param_1;
}



/* Entry: 1052b5e58; end: 1052b5f83;  */

void FUN_1052b5e58(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052b5d54(&lStack_40,param_2,&uStack_50);
  FUN_1052b5da8(&lStack_30,&lStack_40);
  func_0x0001052b5e30(&lStack_40);
  func_0x0001052b5e30(&uStack_50);
  lStack_40 = lStack_30 + 0x278;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  lStack_60 = lStack_30;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1052b5f84(lStack_30 + 0x248,&lStack_40,&lStack_60);
  func_0x0001052b5e30(&lStack_60);
  if (*(long *)(lStack_30 + 0x2b8) == 0) {
    FUN_1052b5fcc(param_1);
    func_0x0001000df5a0(&lStack_40);
    func_0x0001052b5e30(&lStack_30);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_68,lStack_30 + 0x2b8);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052b5f38);
  (*pcVar4)();
}



/* Entry: 1052b5f84; end: 1052b5fc3;  */

void FUN_1052b5f84(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_1052b5fc4(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 1052b5fc4; end: 1052b5fcb;  */

bool FUN_1052b5fc4(long *param_1)

{
  bool bVar1;
  undefined8 uStack_28;
  
  if ((*(byte *)(*param_1 + 0x240) & 1) == 0) {
    uStack_28 = 0;
    bVar1 = *(long *)(*param_1 + 0x2b8) != 0;
    __ZNSt13exception_ptrD1Ev(&uStack_28);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1052b5fcc; end: 1052b610b;  */

void FUN_1052b5fcc(void)

{
  func_0x0001052b6388();
  func_0x0001052b5fec();
  return;
}



/* Entry: 1052b610c; end: 1052b6113;  */

void FUN_1052b610c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    FUN_1052b41d0();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1052b6114; end: 1052b614b;  */

void FUN_1052b6114(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    FUN_1052b41d0();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1052b614c; end: 1052b61bb;  */

void FUN_1052b614c(void)

{
  int iVar1;
  
  if ((bRam00000001136b9f38 & 1) == 0) {
    iVar1 = 0x136b9f38;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b6458();
      func_0x00010b9911c4(0x1136b9f58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b9f38);
      return;
    }
  }
  return;
}



/* Entry: 1052b61bc; end: 1052b61cb;  */

void FUN_1052b61bc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052b61c0);
  (*pcVar1)();
}



/* Entry: 1052b61cc; end: 1052b61f3;  */

long FUN_1052b61cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052b61f4; end: 1052b61fb;  */

void FUN_1052b61f4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052b61f8);
  (*pcVar1)();
}



/* Entry: 1052b61fc; end: 1052b625f;  */

void FUN_1052b61fc(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001052b63b8();
  func_0x0001052b6374();
  uStack_38 = 0;
  uStack_40 = param_1;
  func_0x0001052b6400();
  func_0x0001052b63c8();
  func_0x0001052b63e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x0001052b6444();
  func_0x0001052b6418();
  func_0x0001052b642c();
  func_0x000104bda93c(auStack_58);
  func_0x0001052b6424();
  func_0x0001052b6350();
  func_0x0001003a8c94(&uStack_40);
  return;
}



/* Entry: 1052b6260; end: 1052b6287;  */

void FUN_1052b6260(undefined8 param_1,long param_2)

{
  func_0x0001052b6438(*(undefined8 *)(param_2 + 0x18));
  func_0x0001052b6350();
  return;
}



/* Entry: 1052b6288; end: 1052b62eb;  */

void FUN_1052b6288(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001052b63b8();
  func_0x0001052b6374();
  uStack_38 = 0;
  uStack_40 = param_1;
  func_0x0001052b6400();
  func_0x0001052b63c8();
  func_0x0001052b63e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x0001052b6444();
  func_0x0001052b6418();
  func_0x0001052b642c();
  func_0x000104bda93c(auStack_58);
  func_0x0001052b6424();
  func_0x0001052b6350();
  func_0x0001003a8c94(&uStack_40);
  return;
}



/* Entry: 1052b62ec; end: 1052b6313;  */

void FUN_1052b62ec(undefined8 param_1,long param_2)

{
  func_0x0001052b6438(*(undefined8 *)(param_2 + 0x18));
  func_0x0001052b6350();
  return;
}



/* Entry: 1052b6314; end: 1052b6457;  */

void FUN_1052b6314(void)

{
  undefined4 uStack_14;
  
  uStack_14 = 0x1000000;
  func_0x0001003b16ac(&uStack_14);
  return;
}



/* Entry: 1052b6458; end: 1052b6587;  */

undefined8 * FUN_1052b6458(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138191f0 & 1) == 0) {
    param_1 = (undefined8 *)0x1138191f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_PlatformContentResolveResult");
      pcVar1 = "url";
      func_0x0001003a83dc(auStack_68,"url");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "extractedParams";
      func_0x0001003a83dc(auStack_70,"extractedParams");
      FUN_1052b45d4();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      param_3 = auStack_58;
      param_2 = (undefined8 *)0x0;
      func_0x000104bdbd44(0x1138191e0,auStack_60,0,param_3,2);
      lVar2 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar2);
        lVar2 = lVar2 + -0x18;
        in_ZR = lVar2 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = (undefined8 *)0x1138191f0;
      ___cxa_guard_release();
    }
  }
  FUN_1052b65c8(uStack_28);
  if ((bool)in_ZR) {
    return (undefined8 *)0x1138191e0;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001052b5fec(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 1052b6588; end: 1052b65c7;  */

undefined8 * FUN_1052b6588(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001052b5fec(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 1052b65c8; end: 1052b65db;  */

void FUN_1052b65c8(void)

{
  return;
}



/* Entry: 1052b65dc; end: 1052b66e3;  */

undefined1 * FUN_1052b65dc(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined4 auStack_48 [2];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052b66e4();
  func_0x0001003b2110(auStack_68,0x113819200);
  FUN_10527ecb8(auStack_58,param_2);
  auStack_48[0] = *(undefined4 *)(param_2 + 0x18);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_1052b6814(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -4;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_1052b66e4;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113819208 & 1) == 0) {
    puVar4 = (undefined1 *)0x113819208;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_PrefetchHint");
      pcVar5 = "kbPerTimeWindow";
      func_0x0001003a83dc(auStack_d8,"kbPerTimeWindow");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "timeWindowMs";
      func_0x0001003a83dc(auStack_e0,"timeWindowMs");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138191f8,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x113819208;
      ___cxa_guard_release(0x113819208);
    }
  }
  FUN_1052b6814(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138191f8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 1052b66e4; end: 1052b6813;  */

undefined8 FUN_1052b66e4(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819208 & 1) == 0) {
    param_1 = 0x113819208;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_PrefetchHint");
      pcVar1 = "kbPerTimeWindow";
      func_0x0001003a83dc(auStack_68,"kbPerTimeWindow");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "timeWindowMs";
      func_0x0001003a83dc(auStack_70,"timeWindowMs");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138191f8,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113819208;
      ___cxa_guard_release(0x113819208);
    }
  }
  FUN_1052b6814(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138191f8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052b6814; end: 1052b6827;  */

void FUN_1052b6814(void)

{
  return;
}



/* Entry: 1052b6828; end: 1052b6957;  */

undefined8 FUN_1052b6828(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819220 & 1) == 0) {
    param_1 = 0x113819220;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_SeekPoint");
      pcVar1 = "timsOffsetMs";
      func_0x0001003a83dc(auStack_68,"timsOffsetMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "byteOffset";
      func_0x0001003a83dc(auStack_70,"byteOffset");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113819210,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113819220;
      ___cxa_guard_release(0x113819220);
    }
  }
  FUN_1052b6958(uStack_28);
  if ((bool)in_ZR) {
    return 0x113819210;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052b6958; end: 1052b696b;  */

void FUN_1052b6958(void)

{
  return;
}



/* Entry: 1052b696c; end: 1052b6d97;  */

undefined8 FUN_1052b696c(void)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined1 *unaff_x19;
  long lVar3;
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [48];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9f78 & 1) == 0) {
    iVar1 = 0x136b9f78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_1d8,"_djinni_record_VariantInfo");
      pcVar2 = "variant";
      func_0x0001003a83dc(auStack_1e0,"variant");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_1d0,auStack_1e0,pcVar2);
      pcVar2 = "width";
      func_0x0001003a83dc(auStack_1e8,"width");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_1b8,auStack_1e8,pcVar2);
      unaff_x19 = auStack_1d0;
      pcVar2 = "height";
      func_0x0001003a83dc(auStack_1f0,"height");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_1a0,auStack_1f0,pcVar2);
      func_0x0001003a83dc(auStack_1f8,"codec");
      if ((bRam00000001136b9f80 & 1) == 0) goto LAB_1052b6d5c;
      goto LAB_1052b6a7c;
    }
  }
  while (func_0x0001052b6f3c(uStack_38), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_1052b6d5c:
    iVar1 = 0x136b9f80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1136b9f88);
      ___cxa_guard_release(0x1136b9f80);
    }
LAB_1052b6a7c:
    func_0x0001003b1b50(unaff_x19 + 0x48,auStack_1f8,0x1136b9f88);
    pcVar2 = "vqa";
    func_0x0001003a83dc(auStack_200,"vqa");
    FUN_1052b6d98();
    func_0x0001003b1b50(auStack_170,auStack_200,pcVar2);
    pcVar2 = "bitrateKbps";
    func_0x0001003a83dc(auStack_208,"bitrateKbps");
    func_0x000104bef760();
    func_0x0001003b1b50(auStack_158,auStack_208,pcVar2);
    pcVar2 = "durationMs";
    func_0x0001003a83dc(auStack_210,"durationMs");
    func_0x000104bef5f8();
    func_0x0001003b1b50(auStack_140,auStack_210,pcVar2);
    pcVar2 = "vqaSamplingRate";
    func_0x0001003a83dc(auStack_218,"vqaSamplingRate");
    FUN_1052b6d98();
    func_0x0001003b1b50(auStack_128,auStack_218,pcVar2);
    pcVar2 = "variantConfigId";
    func_0x0001003a83dc(auStack_220,"variantConfigId");
    func_0x000104bdbd7c();
    func_0x0001003b1b50(auStack_110,auStack_220,pcVar2);
    pcVar2 = "variantUsecase";
    func_0x0001003a83dc(auStack_228,"variantUsecase");
    func_0x000104bef760();
    func_0x0001003b1b50(auStack_f8,auStack_228,pcVar2);
    pcVar2 = "featureContentType";
    func_0x0001003a83dc(auStack_230,"featureContentType");
    func_0x000104bef760();
    func_0x0001003b1b50(auStack_e0,auStack_230,pcVar2);
    pcVar2 = "rankerProfile";
    func_0x0001003a83dc(auStack_238,"rankerProfile");
    func_0x000104bdbd7c();
    func_0x0001003b1b50(auStack_c8,auStack_238,pcVar2);
    pcVar2 = "rankerBandwidthKbps";
    func_0x0001003a83dc(auStack_240,"rankerBandwidthKbps");
    func_0x000104bef760();
    func_0x0001003b1b50(auStack_b0,auStack_240,pcVar2);
    pcVar2 = "rankerResults";
    func_0x0001003a83dc(auStack_248,"rankerResults");
    func_0x000104bf1120();
    func_0x0001003b1b50(auStack_98,auStack_248,pcVar2);
    pcVar2 = "latencyEstimationVariants";
    func_0x0001003a83dc(auStack_250,"latencyEstimationVariants");
    func_0x000104bf1120();
    func_0x0001003b1b50(auStack_80,auStack_250,pcVar2);
    pcVar2 = "calibrationSignals";
    func_0x0001003a83dc(auStack_258,"calibrationSignals");
    func_0x000104bf1120();
    func_0x0001003b1b50(auStack_68,auStack_258,pcVar2);
    pcVar2 = "variantScoreDetails";
    func_0x0001003a83dc(auStack_260,"variantScoreDetails");
    func_0x000104bf1120();
    func_0x0001003b1b50(auStack_50,auStack_260,pcVar2);
    unaff_x19 = auStack_1d0;
    func_0x000104bdbd44(0x113819228,auStack_1d8,0,auStack_1d0,0x11);
    lVar3 = 0x180;
    do {
      func_0x0001003b1c5c(unaff_x19 + lVar3);
      lVar3 = lVar3 + -0x18;
      in_ZR = lVar3 == -0x18;
    } while (!(bool)in_ZR);
    func_0x0001003a8c94(auStack_260);
    func_0x0001003a8c94(auStack_258);
    func_0x0001003a8c94(auStack_250);
    func_0x0001003a8c94(auStack_248);
    func_0x0001003a8c94(auStack_240);
    func_0x0001003a8c94(auStack_238);
    func_0x0001003a8c94(auStack_230);
    func_0x0001003a8c94(auStack_228);
    func_0x0001003a8c94(auStack_220);
    func_0x0001003a8c94(auStack_218);
    func_0x0001003a8c94(auStack_210);
    func_0x0001003a8c94(auStack_208);
    func_0x0001003a8c94(auStack_200);
    func_0x0001003a8c94(auStack_1f8);
    func_0x0001003a8c94(auStack_1f0);
    func_0x0001003a8c94(auStack_1e8);
    func_0x0001003a8c94(auStack_1e0);
    func_0x0001003a8c94(auStack_1d8);
    ___cxa_guard_release(0x1136b9f78);
  }
  return 0x113819228;
}



/* Entry: 1052b6d98; end: 1052b6def;  */

undefined8 FUN_1052b6d98(void)

{
  int iVar1;
  
  if ((bRam00000001130cc5c0 & 1) == 0) {
    iVar1 = 0x130cc5c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001008d65e8(0x1130cc5b0);
      ___cxa_guard_release(0x1130cc5c0);
    }
  }
  return 0x1130cc5b0;
}



/* Entry: 1052b6df0; end: 1052b6f4f;  */

void FUN_1052b6df0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 *param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 *param_13,undefined4 param_14,undefined4 param_15,undefined8 *param_16,
                  undefined8 *param_17,undefined8 *param_18,undefined8 *param_19)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_3 = param_4;
  param_3[1] = param_5;
  param_3[2] = param_6;
  param_3[3] = param_7;
  param_3[4] = param_1;
  param_3[5] = param_8;
  *(undefined8 *)(param_3 + 6) = param_9;
  param_3[8] = param_2;
  uVar2 = param_10[1];
  uVar1 = *param_10;
  *(undefined8 *)(param_3 + 0xe) = param_10[2];
  *(undefined8 *)(param_3 + 0xc) = uVar2;
  *(undefined8 *)(param_3 + 10) = uVar1;
  param_10[1] = 0;
  param_10[2] = 0;
  *param_10 = 0;
  param_3[0x10] = param_11;
  param_3[0x11] = param_12;
  uVar2 = param_13[1];
  uVar1 = *param_13;
  *(undefined8 *)(param_3 + 0x16) = param_13[2];
  *(undefined8 *)(param_3 + 0x14) = uVar2;
  *(undefined8 *)(param_3 + 0x12) = uVar1;
  param_13[1] = 0;
  param_13[2] = 0;
  *param_13 = 0;
  *(undefined1 *)(param_3 + 0x1a) = 0;
  param_3[0x18] = param_14;
  *(undefined1 *)(param_3 + 0x20) = 0;
  if (*(char *)(param_16 + 3) == '\x01') {
    uVar2 = param_16[1];
    uVar1 = *param_16;
    *(undefined8 *)(param_3 + 0x1e) = param_16[2];
    *(undefined8 *)(param_3 + 0x1c) = uVar2;
    *(undefined8 *)(param_3 + 0x1a) = uVar1;
    param_16[1] = 0;
    param_16[2] = 0;
    *param_16 = 0;
    *(undefined1 *)(param_3 + 0x20) = 1;
  }
  *(undefined1 *)(param_3 + 0x22) = 0;
  *(undefined1 *)(param_3 + 0x28) = 0;
  if (*(char *)(param_17 + 3) == '\x01') {
    uVar2 = param_17[1];
    uVar1 = *param_17;
    *(undefined8 *)(param_3 + 0x26) = param_17[2];
    *(undefined8 *)(param_3 + 0x24) = uVar2;
    *(undefined8 *)(param_3 + 0x22) = uVar1;
    param_17[1] = 0;
    param_17[2] = 0;
    *param_17 = 0;
    *(undefined1 *)(param_3 + 0x28) = 1;
  }
  *(undefined1 *)(param_3 + 0x2a) = 0;
  *(undefined1 *)(param_3 + 0x30) = 0;
  if (*(char *)(param_18 + 3) == '\x01') {
    uVar2 = param_18[1];
    uVar1 = *param_18;
    *(undefined8 *)(param_3 + 0x2e) = param_18[2];
    *(undefined8 *)(param_3 + 0x2c) = uVar2;
    *(undefined8 *)(param_3 + 0x2a) = uVar1;
    param_18[1] = 0;
    param_18[2] = 0;
    *param_18 = 0;
    *(undefined1 *)(param_3 + 0x30) = 1;
  }
  *(undefined1 *)(param_3 + 0x32) = 0;
  *(undefined1 *)(param_3 + 0x38) = 0;
  if (*(char *)(param_19 + 3) == '\x01') {
    uVar2 = param_19[1];
    uVar1 = *param_19;
    *(undefined8 *)(param_3 + 0x36) = param_19[2];
    *(undefined8 *)(param_3 + 0x34) = uVar2;
    *(undefined8 *)(param_3 + 0x32) = uVar1;
    param_19[1] = 0;
    param_19[2] = 0;
    *param_19 = 0;
    *(undefined1 *)(param_3 + 0x38) = 1;
  }
  return;
}



/* Entry: 1052b6f50; end: 1052b70af;  */

long FUN_1052b6f50(long param_1,int param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819248 & 1) == 0) {
    param_1 = 0x113819248;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_VideoMetadata");
      pcVar1 = "prefetchHint";
      func_0x0001003a83dc(auStack_80,"prefetchHint");
      FUN_1052ac518();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar1);
      pcVar1 = "isFastStartEnabled";
      func_0x0001003a83dc(auStack_88,"isFastStartEnabled");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar1);
      pcVar1 = "streamingProtocol";
      func_0x0001003a83dc(auStack_90,"streamingProtocol");
      FUN_1052ac4bc();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar1);
      puVar3 = auStack_70;
      uVar2 = 0;
      param_4 = 3;
      func_0x000104bdbd44(0x113819238,auStack_78);
      lVar4 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar4);
        param_3 = SUB81(puVar3,0);
        param_2 = (int)uVar2;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = 0x113819248;
      ___cxa_guard_release();
    }
  }
  FUN_1052b70dc(uStack_28);
  if ((bool)in_ZR) {
    return 0x113819238;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  FUN_1052ac5d8();
  *(undefined1 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x2c) = param_4;
  return param_1;
}



/* Entry: 1052b70b0; end: 1052b70db;  */

void FUN_1052b70b0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  FUN_1052ac5d8();
  *(undefined1 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x2c) = param_4;
  return;
}



/* Entry: 1052b70dc; end: 1052b70ef;  */

void FUN_1052b70dc(void)

{
  return;
}



/* Entry: 1052b70f0; end: 1052b725b;  */

undefined8 FUN_1052b70f0(undefined8 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819260 & 1) == 0) {
    iVar1 = 0x13819260;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_LoggingInfo");
      pcVar2 = "lastDeletedTime";
      func_0x0001003a83dc(auStack_80,"lastDeletedTime");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar2);
      pcVar2 = "deletionReason";
      func_0x0001003a83dc(auStack_88,"deletionReason");
      FUN_1052b725c();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar2);
      pcVar2 = "contentAttribution";
      func_0x0001003a83dc(auStack_90,"contentAttribution");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113819250,auStack_78,0,auStack_70,3);
      lVar4 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      ___cxa_guard_release(0x113819260);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return 0x113819250;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc5d8 & 1) == 0) {
    iVar1 = 0x130cc5d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b72b8();
      func_0x00010b990784(0x1130cc5c8);
      ___cxa_guard_release(0x1130cc5d8);
    }
  }
  return 0x1130cc5c8;
}



/* Entry: 1052b725c; end: 1052b72b7;  */

undefined8 FUN_1052b725c(void)

{
  int iVar1;
  
  if ((bRam00000001130cc5d8 & 1) == 0) {
    iVar1 = 0x130cc5d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b72b8();
      func_0x00010b990784(0x1130cc5c8);
      ___cxa_guard_release(0x1130cc5d8);
    }
  }
  return 0x1130cc5c8;
}



/* Entry: 1052b72b8; end: 1052b730f;  */

undefined8 FUN_1052b72b8(void)

{
  int iVar1;
  
  if ((bRam00000001130cc5f0 & 1) == 0) {
    iVar1 = 0x130cc5f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc5e0);
      ___cxa_guard_release(0x1130cc5f0);
    }
  }
  return 0x1130cc5e0;
}



/* Entry: 1052b7310; end: 1052b7793;  */

void FUN_1052b7310(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [16];
  undefined8 uStack_298;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined8 uStack_270;
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052b8648();
  FUN_1052b8928(param_1);
  FUN_1052ba5ac(param_1);
  FUN_1052bbd1c(param_1);
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9f98);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9f98) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052b738c;
  if ((bRam00000001136b9fa8 & 1) == 0) goto LAB_1052b73a8;
  while( true ) {
    func_0x000108b80888(0x1136b9fe8,param_1);
LAB_1052b738c:
    func_0x0001052b84ec(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052b73a8:
    iVar2 = 0x136b9fa8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b7794();
      pcVar3 = "submit";
      func_0x0001003a83dc(&uStack_1f8,"submit");
      func_0x0001003b166c(auStack_218);
      FUN_1052babec();
      puVar4 = auStack_120;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x000104bdbd7c();
      func_0x0001052b844c();
      FUN_1052bc018();
      puVar5 = auStack_100;
      func_0x0001003adcc0(puVar5,puVar4);
      FUN_1052be804();
      puVar4 = auStack_f0;
      func_0x0001003adcc0(puVar4,puVar5);
      FUN_1052b8218();
      func_0x0001003adcc0(auStack_e0,puVar4);
      FUN_1052b8274();
      func_0x0001052b843c();
      FUN_1052b82c4();
      func_0x0001003adcc0(auStack_c0,0x1136ba008);
      func_0x000104bdbd48(auStack_208,auStack_218,auStack_120,7);
      uStack_b0 = uStack_1f8;
      uStack_1f8 = 0;
      func_0x0001003aef98(auStack_a8,auStack_208);
      pcVar3 = "submitProgressiveDownloadRequest";
      func_0x0001003a83dc(&uStack_220,"submitProgressiveDownloadRequest");
      func_0x0001003b166c(auStack_240);
      FUN_1052babec();
      puVar4 = auStack_1a0;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x000104bdbd7c();
      func_0x0001052b844c();
      FUN_1052be804();
      puVar5 = auStack_180;
      func_0x0001003adcc0(puVar5,puVar4);
      FUN_1052b837c();
      puVar4 = auStack_170;
      func_0x0001003adcc0(puVar4,puVar5);
      func_0x000104bef4f0();
      puVar5 = auStack_160;
      func_0x0001003adcc0(puVar5,puVar4);
      FUN_1052b8274();
      func_0x0001052b843c();
      FUN_1052b8b78();
      func_0x0001003adcc0(auStack_140,puVar5);
      FUN_1052b82c4();
      func_0x0001003adcc0(auStack_130,0x1136ba008);
      func_0x000104bdbd48(auStack_230,auStack_240,auStack_1a0,8);
      uStack_98 = uStack_220;
      uStack_220 = 0;
      func_0x0001003aef98(auStack_90,auStack_230);
      pcVar3 = "cancelRequest";
      func_0x0001003a83dc(&uStack_248,"cancelRequest");
      func_0x0001003b166c(auStack_268);
      func_0x000104bdbd7c();
      func_0x0001003adcc0(auStack_1b0,pcVar3);
      func_0x000104bdbd48(auStack_258,auStack_268,auStack_1b0,1);
      uStack_80 = uStack_248;
      uStack_248 = 0;
      func_0x0001003aef98(auStack_78,auStack_258);
      pcVar3 = "updateRequestContext";
      func_0x0001003a83dc(&uStack_270,"updateRequestContext");
      func_0x0001003b166c(auStack_290);
      func_0x000104bdbd7c();
      func_0x0001003adcc0(auStack_1d0,pcVar3);
      FUN_1052be804();
      func_0x0001052b844c();
      func_0x000104bdbd48(auStack_280,auStack_290,auStack_1d0,2);
      uStack_68 = uStack_270;
      uStack_270 = 0;
      func_0x0001003aef98(auStack_60,auStack_280);
      pcVar3 = "monitorProgress";
      func_0x0001003a83dc(&uStack_298);
      func_0x0001003b166c(auStack_2b8);
      func_0x000104bdbd7c();
      func_0x0001003adcc0(auStack_1f0,pcVar3);
      FUN_1052b8830();
      func_0x0001052b844c();
      func_0x000104bdbd48(auStack_2a8,auStack_2b8,auStack_1f0,2);
      uStack_50 = uStack_298;
      uStack_298 = 0;
      func_0x0001003aef98(auStack_48,auStack_2a8);
      func_0x000104bdbd44(0x1136b9fe8,0x1136b9fc8,1,&uStack_b0,5);
      lVar6 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a8 + lVar6 + -8);
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001052b83fc(auStack_2a8);
      do {
        func_0x0001052b8414();
        func_0x0001052b84e0();
      } while (!(bool)in_ZR);
      func_0x0001052b83fc(auStack_2b8);
      func_0x0001003a8c94(&uStack_298);
      func_0x0001052b83fc(auStack_280);
      do {
        func_0x0001052b8414();
        func_0x0001052b84e0();
      } while (!(bool)in_ZR);
      func_0x0001052b83fc(auStack_290);
      func_0x0001003a8c94(&uStack_270);
      func_0x0001052b83fc(auStack_258);
      func_0x0001052b83fc(auStack_1b0);
      func_0x0001052b83fc(auStack_268);
      func_0x0001003a8c94(&uStack_248);
      func_0x0001052b83fc(auStack_230);
      do {
        func_0x0001052b8414();
        func_0x0001052b84e0();
      } while (!(bool)in_ZR);
      func_0x0001052b83fc(auStack_240);
      func_0x0001003a8c94(&uStack_220);
      func_0x0001052b83fc(auStack_208);
      do {
        func_0x0001052b8414();
        func_0x0001052b84e0();
      } while (!(bool)in_ZR);
      func_0x0001052b83fc(auStack_218);
      func_0x0001003a8c94(&uStack_1f8);
      ___cxa_guard_release(0x1136b9fa8);
    }
  }
  return;
}



/* Entry: 1052b7794; end: 1052b77f3;  */

void FUN_1052b7794(void)

{
  int iVar1;
  
  if ((bRam00000001136b9fd0 & 1) == 0) {
    iVar1 = 0x136b9fd0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1136b9fc8,"_djinni_interface_NetworkManager");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b9fd0);
      return;
    }
  }
  return;
}



/* Entry: 1052b77f4; end: 1052b7843;  */

undefined1  [16] FUN_1052b77f4(long param_1,ulong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  FUN_1052b7844(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    func_0x000100066230(param_1 + 0x28,param_3);
  }
  auVar1._8_8_ = param_2 & 0xff;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1052b7844; end: 1052b7a77;  */

undefined1  [16]
FUN_1052b7844(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x26;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  plVar5 = param_1 + 3;
  func_0x000100102e7c();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x26 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar7 <= plVar5) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar4 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1052b7910;
          plVar2 = (long *)plVar6[1];
          if (plVar2 != plVar5) break;
          plVar2 = plVar6 + 2;
          func_0x0001000e107c(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1052b7a44;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar2 = (long *)((ulong)plVar2 & uVar8);
        }
        else if (plVar7 <= plVar2) {
          uVar4 = 0;
          if (plVar7 != (long *)0x0) {
            uVar4 = (ulong)plVar2 / (ulong)plVar7;
          }
          plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar7);
        }
      } while (plVar2 == unaff_x26);
    }
  }
LAB_1052b7910:
  FUN_1052b7a78(aplStack_78,param_1,plVar5,param_3,param_4);
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    func_0x00010028b120(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  plVar6 = aplStack_78[0];
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
    *(long **)(lVar3 + (long)unaff_x26 * 8) = plVar5;
    if (*aplStack_78[0] != 0) {
      plVar5 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar3 + (long)plVar5 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x0001002aa08c(aplStack_78);
  uVar1 = 1;
LAB_1052b7a44:
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 1052b7a78; end: 1052b7aeb;  */

void FUN_1052b7a78(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1052b7aec(puVar1 + 2,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1052b7aec; end: 1052b7b1f;  */

void FUN_1052b7aec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x28) = param_3[2];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 1052b7b20; end: 1052b7b8f;  */

void FUN_1052b7b20(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar2;
  param_1[1] = lVar3;
  func_0x0001052b840c();
  return;
}



/* Entry: 1052b7b90; end: 1052b7bd7;  */

void FUN_1052b7b90(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long unaff_x19;
  
  func_0x0001052b8464();
  func_0x0001052b7bf0(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(unaff_x19 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1052b7bd8; end: 1052b7bdb;  */

void FUN_1052b7bd8(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x0001052b8464();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_1052b7e74();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052b7ddc(unaff_x19 + 0x18);
  func_0x0001052b7ddc((long *)(param_1 + 8));
  return;
}



/* Entry: 1052b7bdc; end: 1052b7c0b;  */

void FUN_1052b7bdc(void)

{
  FUN_1052b7e10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052b7c0c; end: 1052b7c0f;  */

void FUN_1052b7c0c(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x0001052b8464();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_1052b7e74();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052b7ddc(unaff_x19 + 0x18);
  func_0x0001052b7ddc((long *)(param_1 + 8));
  return;
}



/* Entry: 1052b7c10; end: 1052b7c23;  */

void FUN_1052b7c10(void)

{
  FUN_1052b7e10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052b7c24; end: 1052b7cdf;  */

undefined1 * FUN_1052b7c24(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_1052b7ce0(auStack_40);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110875320;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[7] = 0;
  puStack_30[8] = 0x3cb0b1bb;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0xe] = 0x32aaaba7;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x14] = 0;
  puStack_30[0x13] = 0;
  puStack_30[0x16] = 0;
  puStack_30[0x15] = 0;
  puStack_30[0x17] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_1052b7e00();
  func_0x0001052b84ec(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1052b7d08();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1052b7ce0; end: 1052b7d07;  */

long FUN_1052b7ce0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1052b7d08();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1052b7d08; end: 1052b7d33;  */

void FUN_1052b7d08(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x155555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xc0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110875320;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052b7d34; end: 1052b7d37;  */

void FUN_1052b7d34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110875320;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052b7d38; end: 1052b7d4b;  */

void FUN_1052b7d38(void)

{
  func_0x0001052b7d58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052b7d4c; end: 1052b7d6b;  */

long FUN_1052b7d4c(long param_1)

{
  func_0x0001052b7da8(param_1 + 0xb8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xb0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  return param_1 + 0x18;
}



/* Entry: 1052b7d6c; end: 1052b7dff;  */

long FUN_1052b7d6c(long param_1)

{
  func_0x0001052b7da8(param_1 + 0xa0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x98);
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x28);
  return param_1;
}



/* Entry: 1052b7e00; end: 1052b7e0f;  */

void FUN_1052b7e00(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1052b7e10; end: 1052b7e73;  */

void FUN_1052b7e10(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x0001052b8464();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_1052b7e74();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052b7ddc(unaff_x19 + 0x18);
  func_0x0001052b7ddc((long *)(param_1 + 8));
  return;
}



/* Entry: 1052b7e74; end: 1052b7ee7;  */

void FUN_1052b7e74(undefined8 param_1)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_DAT_1107e6938;
  func_0x000104bdfe3c(auStack_28,&ppuStack_30);
  FUN_1052b7ee8(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 1052b7ee8; end: 1052b7f07;  */

void FUN_1052b7ee8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1052b7f08(param_1,&uStack_18);
  return;
}



/* Entry: 1052b7f08; end: 1052b7fa3;  */

void FUN_1052b7f08(undefined8 param_1,long *param_2)

{
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x0001052b8424();
  func_0x0001052b849c();
  func_0x0001052b7ddc(auStack_40);
  func_0x0001052b840c();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x58);
  FUN_1052b8030(param_2,alStack_30);
  func_0x0001052b8454(alStack_30[0]);
  if (param_2 == (long *)0x0) {
    func_0x0001052b847c();
  }
  else {
    func_0x0001052b8488(*(undefined8 *)(*param_2 + 0x10));
    func_0x0001052b83ec();
  }
  func_0x0001052b841c();
  return;
}



/* Entry: 1052b7fa4; end: 1052b7ff7;  */

void FUN_1052b7fa4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 1052b7ff8; end: 1052b802f;  */

undefined8 * FUN_1052b7ff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001052b840c();
  return param_1;
}



/* Entry: 1052b8030; end: 1052b8043;  */

void FUN_1052b8030(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x98,*param_1);
  return;
}



/* Entry: 1052b8044; end: 1052b8063;  */

void FUN_1052b8044(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1052b80c8(param_1,&uStack_18);
  return;
}



/* Entry: 1052b8064; end: 1052b80c7;  */

void FUN_1052b8064(undefined8 param_1)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  __ZNSt13runtime_errorC1ERKS_(auStack_38);
  FUN_1052b2bd0(auStack_28,auStack_38);
  FUN_1052b7ee8(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt13runtime_errorD1Ev(auStack_38);
  return;
}



/* Entry: 1052b80c8; end: 1052b818b;  */

void FUN_1052b80c8(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  func_0x0001052b8424();
  func_0x0001052b849c();
  func_0x0001052b7ddc(auStack_40);
  func_0x0001052b840c();
  __ZNSt3__15mutex4lockEv(puStack_30 + 0xb);
  puVar1 = (undefined8 *)*param_2;
  if (*(char *)(puStack_30 + 4) == '\x01') {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar4 = *(undefined8 *)((long)puVar1 + 0xc);
    *(undefined8 *)((long)puStack_30 + 0x14) = *(undefined8 *)((long)puVar1 + 0x14);
    *(undefined8 *)((long)puStack_30 + 0xc) = uVar4;
    puStack_30[1] = uVar3;
    *puStack_30 = uVar2;
  }
  else {
    uVar2 = *puVar1;
    uVar4 = puVar1[3];
    uVar3 = puVar1[2];
    puStack_30[1] = puVar1[1];
    *puStack_30 = uVar2;
    puStack_30[3] = uVar4;
    puStack_30[2] = uVar3;
    *(undefined1 *)(puStack_30 + 4) = 1;
  }
  func_0x0001052b8454();
  if (param_2 == (long *)0x0) {
    func_0x0001052b847c();
  }
  else {
    func_0x0001052b8488(*(undefined8 *)(*param_2 + 0x10));
    func_0x0001052b83ec();
  }
  func_0x0001052b841c();
  return;
}



/* Entry: 1052b818c; end: 1052b81ab;  */

void FUN_1052b818c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001052b7ddc();
  }
  return;
}



/* Entry: 1052b81ac; end: 1052b8217;  */

void FUN_1052b81ac(long param_1)

{
  func_0x0001052b8500();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052b8218; end: 1052b8273;  */

undefined8 FUN_1052b8218(void)

{
  int iVar1;
  
  if ((bRam00000001130cc608 & 1) == 0) {
    iVar1 = 0x130cc608;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052b837c();
      func_0x00010b990784(0x1130cc5f8);
      ___cxa_guard_release(0x1130cc608);
    }
  }
  return 0x1130cc5f8;
}



/* Entry: 1052b8274; end: 1052b82c3;  */

void FUN_1052b8274(void)

{
  int iVar1;
  
  if ((bRam00000001136b9fb0 & 1) == 0) {
    iVar1 = 0x136b9fb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1136b9ff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b9fb0);
      return;
    }
  }
  return;
}



/* Entry: 1052b82c4; end: 1052b837b;  */

void FUN_1052b82c4(void)

{
  int iVar1;
  
  if ((bRam00000001136b9fb8 & 1) == 0) {
    iVar1 = 0x136b9fb8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if ((bRam00000001136b9fc0 & 1) == 0) {
        iVar1 = 0x136b9fc0;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          FUN_1052b70f0();
          func_0x00010b9911c4(0x1136ba018);
          ___cxa_guard_release(0x1136b9fc0);
        }
      }
      func_0x00010b990784(0x1136ba018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b9fb8);
      return;
    }
  }
  return;
}



/* Entry: 1052b837c; end: 1052b83eb;  */

undefined8 FUN_1052b837c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam00000001130cc620 & 1) == 0) {
    uVar1 = 0x1130cc620;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000104bdbd7c();
      uVar2 = uVar1;
      func_0x000104bdbd7c();
      func_0x00010b9912a0(0x1130cc610,uVar1,uVar2);
      ___cxa_guard_release(0x1130cc620);
    }
  }
  return 0x1130cc610;
}



/* Entry: 1052b83ec; end: 1052b850b;  */

void FUN_1052b83ec(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001052b83f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 8))();
  return;
}



/* Entry: 1052b850c; end: 1052b8647;  */

ulong FUN_1052b850c(ulong param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  long lVar5;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  long lStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113819278 & 1) == 0) {
    param_1 = 0x113819278;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_Progress");
      pcVar3 = "totalUnitCount";
      func_0x0001003a83dc(auStack_68,"totalUnitCount");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar3);
      pcVar3 = "completedUnitCount";
      func_0x0001003a83dc(auStack_70,"completedUnitCount");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar3);
      unaff_x19 = auStack_58;
      uVar4 = 0;
      func_0x000104bdbd44(0x113819268,auStack_60,0,auStack_58,2);
      lVar5 = 0x18;
      do {
        func_0x0001003b1c5c(unaff_x19 + lVar5);
        param_2 = (int)uVar4;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113819278;
      ___cxa_guard_release();
      unaff_x20 = 0xffffffffffffffe8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return 0x113819268;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_78 = FUN_1052b8648;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113819280);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113819280) = 1;
  uStack_90 = unaff_x20;
  puStack_88 = unaff_x19;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bVar1 & 1) != 0) goto LAB_1052b86a0;
  if ((bRam00000001138192b0 & 1) == 0) goto LAB_1052b86cc;
  while( true ) {
    param_1 = 0x1138192a0;
    func_0x000108b80888(0x1138192a0);
LAB_1052b86a0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) break;
    ___stack_chk_fail();
LAB_1052b86cc:
    iVar2 = 0x138192b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b88cc();
      pcVar3 = "onProgress";
      func_0x0001003a83dc(&uStack_f0,"onProgress");
      func_0x0001003b166c(auStack_110);
      FUN_1052b850c();
      func_0x0001003adcc0(auStack_d8,pcVar3);
      func_0x000104bdbd48(auStack_100,auStack_110,auStack_d8,1);
      uStack_c8 = uStack_f0;
      uStack_f0 = 0;
      func_0x0001003aef98(auStack_c0,auStack_100);
      pcVar3 = "onError";
      func_0x0001003a83dc(&uStack_118,"onError");
      func_0x0001003b166c(auStack_138);
      FUN_1052c521c();
      func_0x0001003adcc0(auStack_e8,pcVar3);
      func_0x000104bdbd48(auStack_128,auStack_138,auStack_e8,1);
      uStack_b0 = uStack_118;
      uStack_118 = 0;
      func_0x0001003aef98(auStack_a8,auStack_128);
      func_0x000104bdbd44(0x1138192a0,0x1138192b8,1,&uStack_c8,2);
      lVar5 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c0 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      FUN_1052b8920(auStack_128);
      FUN_1052b8920(auStack_e8);
      FUN_1052b8920(auStack_138);
      func_0x0001003a8c94(&uStack_118);
      FUN_1052b8920(auStack_100);
      FUN_1052b8920(auStack_d8);
      FUN_1052b8920(auStack_110);
      func_0x0001003a8c94(&uStack_f0);
      ___cxa_guard_release(0x1138192b0);
    }
  }
  return param_1;
}



/* Entry: 1052b8648; end: 1052b882f;  */

void FUN_1052b8648(ulong param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113819280);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113819280) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052b86a0;
  if ((bRam00000001138192b0 & 1) == 0) goto LAB_1052b86cc;
  while( true ) {
    func_0x000108b80888(0x1138192a0);
LAB_1052b86a0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) break;
    ___stack_chk_fail();
LAB_1052b86cc:
    iVar2 = 0x138192b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b88cc();
      pcVar3 = "onProgress";
      func_0x0001003a83dc(&uStack_80,"onProgress");
      func_0x0001003b166c(auStack_a0);
      FUN_1052b850c();
      func_0x0001003adcc0(auStack_68,pcVar3);
      func_0x000104bdbd48(auStack_90,auStack_a0,auStack_68,1);
      uStack_58 = uStack_80;
      uStack_80 = 0;
      func_0x0001003aef98(auStack_50,auStack_90);
      pcVar3 = "onError";
      func_0x0001003a83dc(&uStack_a8,"onError");
      func_0x0001003b166c(auStack_c8);
      FUN_1052c521c();
      func_0x0001003adcc0(auStack_78,pcVar3);
      func_0x000104bdbd48(auStack_b8,auStack_c8,auStack_78,1);
      uStack_40 = uStack_a8;
      uStack_a8 = 0;
      func_0x0001003aef98(auStack_38,auStack_b8);
      func_0x000104bdbd44(0x1138192a0,0x1138192b8,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      FUN_1052b8920(auStack_b8);
      FUN_1052b8920(auStack_78);
      FUN_1052b8920(auStack_c8);
      func_0x0001003a8c94(&uStack_a8);
      FUN_1052b8920(auStack_90);
      FUN_1052b8920(auStack_68);
      FUN_1052b8920(auStack_a0);
      func_0x0001003a8c94(&uStack_80);
      ___cxa_guard_release(0x1138192b0);
    }
  }
  return;
}



/* Entry: 1052b8830; end: 1052b88cb;  */

undefined8 FUN_1052b8830(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819298 & 1) == 0) {
    iVar4 = 0x13819298;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052b88cc();
      lStack_20 = lRam00000001138192b8;
      if (lRam00000001138192b8 != 0) {
        piVar1 = (int *)(lRam00000001138192b8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819288,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113819298);
    }
  }
  return 0x113819288;
}



/* Entry: 1052b88cc; end: 1052b891f;  */

void FUN_1052b88cc(void)

{
  int iVar1;
  
  if ((bRam00000001138192c0 & 1) == 0) {
    iVar1 = 0x138192c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1138192b8,"_djinni_interface_ProgressCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138192c0);
      return;
    }
  }
  return;
}



/* Entry: 1052b8920; end: 1052b8927;  */

void FUN_1052b8920(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  func_0x0001003adc0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}



/* Entry: 1052b8928; end: 1052b8b77;  */

void FUN_1052b8928(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  long lVar7;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052c484c();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136ba028);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136ba028) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052b898c;
  if ((bRam00000001136ba030 & 1) == 0) goto LAB_1052b89b0;
  while( true ) {
    func_0x000108b80888(0x1136ba038,param_1);
LAB_1052b898c:
    func_0x0001052b8d74(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052b89b0:
    iVar2 = 0x136ba030;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052b8c14();
      pcVar3 = "onUpdate";
      func_0x0001003a83dc(&uStack_d0,"onUpdate");
      func_0x0001003b166c(auStack_f0);
      FUN_1052b8d88();
      puVar4 = auStack_98;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_1052b8cb4();
      puVar5 = auStack_88;
      func_0x0001003adcc0(puVar5,puVar4);
      FUN_1052a097c();
      func_0x0001003adcc0(auStack_78,puVar5);
      func_0x000104bdbd48(auStack_e0,auStack_f0,auStack_98,3);
      uStack_68 = uStack_d0;
      uStack_d0 = 0;
      func_0x0001003aef98(auStack_60,auStack_e0);
      pcVar3 = "onUpdateDataRef";
      func_0x0001003a83dc(&uStack_f8,"onUpdateDataRef");
      func_0x000104bef4f0();
      pcVar6 = pcVar3;
      FUN_1052b8d88();
      puVar4 = auStack_c8;
      func_0x0001003adcc0(puVar4,pcVar6);
      FUN_1052b8d10();
      puVar5 = auStack_b8;
      func_0x0001003adcc0(puVar5,puVar4);
      FUN_1052a097c();
      func_0x0001003adcc0(auStack_a8,puVar5);
      func_0x000104bdbd48(auStack_108,pcVar3,auStack_c8,3);
      uStack_50 = uStack_f8;
      uStack_f8 = 0;
      func_0x0001003aef98(auStack_48,auStack_108);
      func_0x000104bdbd44(0x1136ba038,0x1138192e0,1,&uStack_68,2);
      lVar7 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_60 + lVar7 + -8);
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x18);
      func_0x0001052b8d6c(auStack_108);
      lVar7 = 0x28;
      do {
        func_0x0001003adc18(auStack_c8 + lVar7);
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != -8);
      func_0x0001003a8c94(&uStack_f8);
      func_0x0001052b8d6c(auStack_e0);
      lVar7 = 0x28;
      do {
        func_0x0001003adc18(auStack_98 + lVar7);
        lVar7 = lVar7 + -0x10;
        in_ZR = lVar7 == -8;
      } while (!(bool)in_ZR);
      func_0x0001052b8d6c(auStack_f0);
      func_0x0001003a8c94(&uStack_d0);
      ___cxa_guard_release(0x1136ba030);
    }
  }
  return;
}



/* Entry: 1052b8b78; end: 1052b8c13;  */

undefined8 FUN_1052b8b78(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam00000001138192d8 & 1) == 0) {
    iVar4 = 0x138192d8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052b8c14();
      lStack_20 = lRam00000001138192e0;
      if (lRam00000001138192e0 != 0) {
        piVar1 = (int *)(lRam00000001138192e0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x1138192c8,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x1138192d8);
    }
  }
  return 0x1138192c8;
}



/* Entry: 1052b8c14; end: 1052b8c67;  */

void FUN_1052b8c14(void)

{
  int iVar1;
  
  if ((bRam00000001138192e8 & 1) == 0) {
    iVar1 = 0x138192e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1138192e0,"_djinni_interface_ProgressiveDownloadCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138192e8);
      return;
    }
  }
  return;
}



/* Entry: 1052b8c68; end: 1052b8c6f;  */

void FUN_1052b8c68(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052b8c6c);
  (*pcVar1)();
}



/* Entry: 1052b8c70; end: 1052b8c8b;  */

void FUN_1052b8c70(long param_1)

{
  FUN_1052a0844();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1052b8c8c; end: 1052b8cb3;  */

void FUN_1052b8c8c(long param_1)

{
  func_0x000100687584(param_1 + 0x30);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 1052b8cb4; end: 1052b8d0f;  */

undefined8 FUN_1052b8cb4(void)

{
  int iVar1;
  
  if ((bRam00000001130cc638 & 1) == 0) {
    iVar1 = 0x130cc638;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052c4a58();
      func_0x00010b990784(0x1130cc628);
      ___cxa_guard_release(0x1130cc638);
    }
  }
  return 0x1130cc628;
}


