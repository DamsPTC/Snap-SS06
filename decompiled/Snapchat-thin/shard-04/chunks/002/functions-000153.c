/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103214698; end: 1032146db;  */

void FUN_103214698(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4cc10 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10321634c(0xff);
  puVar2 = &DAT_10db9e5b0;
  func_0x000107c61520(&DAT_10db9e5b0,uVar1);
  puRam0000000112f4cc10 = puVar2;
  return;
}



/* Entry: 1032146dc; end: 10321475b;  */

void FUN_1032146dc(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c4a564();
      if ((uVar1 & 1) == 0) {
        func_0x000107c4a56c(uVar2);
      }
      func_0x000107c61170(uVar2);
    }
  }
  return;
}



/* Entry: 10321475c; end: 10321479b;  */

void FUN_10321475c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cc18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9e4a8;
  func_0x000107c61520(&DAT_10db9e4a8,&UNK_110626ad0);
  puRam0000000112f4cc18 = puVar1;
  return;
}



/* Entry: 10321479c; end: 1032147af;  */

void FUN_10321479c(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1032147b0; end: 103214803;  */

undefined8 FUN_1032147b0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000112f4cd10 != -1) {
    func_0x000107c61568(0x112f4cd10,FUN_103214f78);
  }
  uVar1 = uRam0000000113807138;
  func_0x000107c61174(uRam0000000113807138);
  return uVar1;
}



/* Entry: 103214804; end: 1032149e3;  */

void FUN_103214804(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,code *param_7)

{
  undefined *puVar1;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 uStack_27f;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined2 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_18f;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_df;
  
  (*param_7)();
  if ((param_2 & 1) == 0) {
    FUN_103214e7c();
    if (param_6 == 0) {
      func_0x0001031e60c4(&lStack_230);
    }
    else {
      lStack_358 = param_6;
      func_0x0001031e60f0(&lStack_358);
      uStack_108 = uStack_2e0;
      lStack_110 = lStack_2e8;
      uStack_f8 = uStack_2d0;
      uStack_100 = uStack_2d8;
      uStack_f0 = uStack_2c8;
      uStack_df = CONCAT17(uStack_2b0,uStack_2b7);
      uStack_138 = uStack_310;
      uStack_140 = uStack_318;
      uStack_128 = uStack_300;
      uStack_130 = uStack_308;
      uStack_118 = uStack_2f0;
      uStack_120 = uStack_2f8;
      uStack_178 = uStack_350;
      lStack_180 = lStack_358;
      uStack_168 = uStack_340;
      uStack_170 = uStack_348;
      uStack_158 = uStack_330;
      uStack_160 = uStack_338;
      lStack_148 = lStack_320;
      uStack_150 = uStack_328;
      func_0x0001031e6100(&lStack_180);
      uStack_1a8 = uStack_f8;
      uStack_1b0 = uStack_100;
      uStack_1a0 = uStack_f0;
      uStack_18f = uStack_df;
      uStack_1e8 = uStack_138;
      uStack_1f0 = uStack_140;
      uStack_1d8 = uStack_128;
      uStack_1e0 = uStack_130;
      uStack_1c8 = uStack_118;
      uStack_1d0 = uStack_120;
      uStack_1b8 = uStack_108;
      lStack_1c0 = lStack_110;
      uStack_228 = uStack_178;
      lStack_230 = lStack_180;
      uStack_218 = uStack_168;
      uStack_220 = uStack_170;
      uStack_208 = uStack_158;
      uStack_210 = uStack_160;
      lStack_1f8 = lStack_148;
      uStack_200 = uStack_150;
    }
    uStack_2a8 = uStack_1b8;
    uStack_2b0 = (undefined1)lStack_1c0;
    uStack_2af = (undefined7)((ulong)lStack_1c0 >> 8);
    uStack_298 = uStack_1a8;
    uStack_2a0 = uStack_1b0;
    uStack_290 = uStack_1a0;
    uStack_27f = uStack_18f;
    lStack_2e8 = lStack_1f8;
    uStack_2f0 = uStack_200;
    uStack_2d8 = uStack_1e8;
    uStack_2e0 = uStack_1f0;
    uStack_2c8 = uStack_1d8;
    uStack_2d0 = uStack_1e0;
    uStack_2b8 = (undefined1)uStack_1c8;
    uStack_2b7 = (undefined7)((ulong)uStack_1c8 >> 8);
    uStack_2c0 = (undefined1)uStack_1d0;
    uStack_2bf = (undefined7)((ulong)uStack_1d0 >> 8);
    uStack_318 = uStack_228;
    lStack_320 = lStack_230;
    uStack_308 = uStack_218;
    uStack_310 = uStack_220;
    uStack_2f8 = uStack_208;
    uStack_300 = uStack_210;
    puVar1 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174(param_6);
    func_0x000107c5beb4();
    func_0x000107c61180();
    lStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0x746e6f43696e696d;
    uStack_340 = 0xeb00000000747865;
    uStack_328 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0x100;
    uStack_240 = 0;
    uStack_238 = 1;
    uStack_338 = param_2;
    uStack_330 = param_3;
    puStack_260 = puVar1;
    func_0x0001031e60ec(&lStack_358);
    func_0x000107c610b4(&lStack_180,&lStack_358,0x128);
  }
  else {
    FUN_103214e3c(&lStack_180);
  }
  func_0x000107c610b4(param_1,&lStack_180,0x128);
  return;
}



/* Entry: 1032149e4; end: 1032149ef;  */

void FUN_1032149e4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long unaff_x20;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 uStack_27f;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined2 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_18f;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_df;
  
  (**(code **)(unaff_x20 + 0x10))();
  if ((param_2 & 1) == 0) {
    FUN_103214e7c();
    if (param_6 == 0) {
      func_0x0001031e60c4(&lStack_230);
    }
    else {
      lStack_358 = param_6;
      func_0x0001031e60f0(&lStack_358);
      uStack_108 = uStack_2e0;
      lStack_110 = lStack_2e8;
      uStack_f8 = uStack_2d0;
      uStack_100 = uStack_2d8;
      uStack_f0 = uStack_2c8;
      uStack_df = CONCAT17(uStack_2b0,uStack_2b7);
      uStack_138 = uStack_310;
      uStack_140 = uStack_318;
      uStack_128 = uStack_300;
      uStack_130 = uStack_308;
      uStack_118 = uStack_2f0;
      uStack_120 = uStack_2f8;
      uStack_178 = uStack_350;
      lStack_180 = lStack_358;
      uStack_168 = uStack_340;
      uStack_170 = uStack_348;
      uStack_158 = uStack_330;
      uStack_160 = uStack_338;
      lStack_148 = lStack_320;
      uStack_150 = uStack_328;
      func_0x0001031e6100(&lStack_180);
      uStack_1a8 = uStack_f8;
      uStack_1b0 = uStack_100;
      uStack_1a0 = uStack_f0;
      uStack_18f = uStack_df;
      uStack_1e8 = uStack_138;
      uStack_1f0 = uStack_140;
      uStack_1d8 = uStack_128;
      uStack_1e0 = uStack_130;
      uStack_1c8 = uStack_118;
      uStack_1d0 = uStack_120;
      uStack_1b8 = uStack_108;
      lStack_1c0 = lStack_110;
      uStack_228 = uStack_178;
      lStack_230 = lStack_180;
      uStack_218 = uStack_168;
      uStack_220 = uStack_170;
      uStack_208 = uStack_158;
      uStack_210 = uStack_160;
      lStack_1f8 = lStack_148;
      uStack_200 = uStack_150;
    }
    uStack_2a8 = uStack_1b8;
    uStack_2b0 = (undefined1)lStack_1c0;
    uStack_2af = (undefined7)((ulong)lStack_1c0 >> 8);
    uStack_298 = uStack_1a8;
    uStack_2a0 = uStack_1b0;
    uStack_290 = uStack_1a0;
    uStack_27f = uStack_18f;
    lStack_2e8 = lStack_1f8;
    uStack_2f0 = uStack_200;
    uStack_2d8 = uStack_1e8;
    uStack_2e0 = uStack_1f0;
    uStack_2c8 = uStack_1d8;
    uStack_2d0 = uStack_1e0;
    uStack_2b8 = (undefined1)uStack_1c8;
    uStack_2b7 = (undefined7)((ulong)uStack_1c8 >> 8);
    uStack_2c0 = (undefined1)uStack_1d0;
    uStack_2bf = (undefined7)((ulong)uStack_1d0 >> 8);
    uStack_318 = uStack_228;
    lStack_320 = lStack_230;
    uStack_308 = uStack_218;
    uStack_310 = uStack_220;
    uStack_2f8 = uStack_208;
    uStack_300 = uStack_210;
    puVar1 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174(param_6);
    func_0x000107c5beb4();
    func_0x000107c61180();
    lStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0x746e6f43696e696d;
    uStack_340 = 0xeb00000000747865;
    uStack_328 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0x100;
    uStack_240 = 0;
    uStack_238 = 1;
    uStack_338 = param_2;
    uStack_330 = param_3;
    puStack_260 = puVar1;
    func_0x0001031e60ec(&lStack_358);
    func_0x000107c610b4(&lStack_180,&lStack_358,0x128);
  }
  else {
    FUN_103214e3c(&lStack_180);
  }
  func_0x000107c610b4(param_1,&lStack_180,0x128);
  return;
}



/* Entry: 1032149f0; end: 103214a6f;  */

void FUN_1032149f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4cc20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b548;
  func_0x00010002969c(0x112f4b548,&UNK_10db9ab40);
  uVar2 = 0x112f4cc28;
  FUN_103214c30(0x112f4cc28,&UNK_10dcf9fe4);
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f4cc20 = puVar3;
  return;
}



/* Entry: 103214a70; end: 103214ba7;  */

undefined * FUN_103214a70(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)0x112d755d0;
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  FUN_10326da44();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  pcVar3 = FUN_1032147b0;
  FUN_10326d7dc(FUN_1032147b0,0,uVar2);
  func_0x000107c61170(uVar2);
  pcVar4 = pcVar3;
  func_0x0001006c733c(pcVar3);
  func_0x000107c61574(pcVar3);
  puVar5 = &UNK_110626b18;
  func_0x000107c613fc(&UNK_110626b18,0x20,7);
  uVar2 = unaff_x20[1];
  uVar7 = *unaff_x20;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  puVar6 = &UNK_110626b40;
  func_0x000107c613fc(&UNK_110626b40,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x103214e6c;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  func_0x000107c6157c(uVar2);
  uVar2 = 0x112f4b548;
  func_0x0001000285a8(0x112f4b548,&UNK_10db9ab40);
  uVar7 = 0x103214e70;
  func_0x0001000bfde0(0x103214e70,puVar6,uVar2);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar6);
  FUN_1032149f0();
  func_0x0001000c2068();
  func_0x000107c61574(uVar7);
  return puVar6;
}



/* Entry: 103214ba8; end: 103214bcb;  */

void FUN_103214ba8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103214bcc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103214bcc; end: 103214c2f;  */

void FUN_103214bcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cc30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9e4c4;
  func_0x000107c61520(&DAT_10db9e4c4,&UNK_110626ad0);
  puRam0000000112f4cc30 = puVar1;
  return;
}



/* Entry: 103214c30; end: 103214c7b;  */

void FUN_103214c30(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0x112f4b560;
    func_0x00010002969c(0x112f4b560,&UNK_10db9b890);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103214c7c; end: 103214c93;  */

undefined ** FUN_103214c7c(void)

{
  return &PTR_DAT_110626a38;
}



/* Entry: 103214c94; end: 103214ccb;  */

undefined * FUN_103214c94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_10321475c();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 103214ccc; end: 103214cd3;  */

void FUN_103214ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103214cd4; end: 103214d3f;  */

undefined8 * FUN_103214cd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 103214d40; end: 103214de3;  */

int FUN_103214d40(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103214de4; end: 103214e3b;  */

void FUN_103214de4(undefined8 param_1,undefined1 *param_2)

{
  long unaff_x20;
  undefined1 auStack_158 [296];
  
  (**(code **)(unaff_x20 + 0x10))
            (auStack_158,*param_2,*(undefined8 *)(param_2 + 8),param_2[0x10],
             *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  func_0x000107c610b4(param_1,auStack_158,0x128);
  return;
}



/* Entry: 103214e3c; end: 103214e7b;  */

void FUN_103214e3c(undefined8 *param_1)

{
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 103214e7c; end: 103214f47;  */

undefined1  [16] FUN_103214e7c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffee;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1313c0);
  uVar3 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f1313e0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103214f48);
  (*pcVar1)();
}



/* Entry: 103214f48; end: 103214f57;  */

void FUN_103214f48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103214f58; end: 103214f77;  */

void FUN_103214f58(void)

{
  func_0x000107c61168(&PTR_PTR_112f4ccb8);
  return;
}



/* Entry: 103214f78; end: 103215163;  */

void FUN_103214f78(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_103214f58();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f131410);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam0000000113807138 = puVar3;
  return;
}



/* Entry: 103215164; end: 103215173;  */

void FUN_103215164(void)

{
  uRam0000000112f4cd20 = 1;
  return;
}



/* Entry: 103215174; end: 10321529f;  */

void FUN_103215174(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = unaff_x20 + 0x40;
  func_0x000107c61618();
  pcVar2 = "deinit";
  func_0x0001000c10c0("deinit");
  func_0x000107c61180();
  puVar3 = &UNK_110626c28;
  func_0x000107c613fc(&UNK_110626c28,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  pcStack_50 = FUN_1032152a0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110626c40;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(lVar1);
  func_0x000107c615e8(pcVar2);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x00010282409c(unaff_x20 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1032152a0; end: 1032152cb;  */

void FUN_1032152a0(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + 0x10),PTR_s_dismissPresenter_1125bea28);
    return;
  }
  return;
}



/* Entry: 1032152cc; end: 1032152eb;  */

void FUN_1032152cc(void)

{
  FUN_103215174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032152ec; end: 10321542b;  */

long FUN_1032152ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x40,0);
  *(undefined1 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  if (lRam0000000112f4cd18 != -1) {
    func_0x000107c61568(0x112f4cd18,0x103215060);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return unaff_x20;
}



/* Entry: 10321542c; end: 1032155db;  */

/* WARNING: Possible PIC construction at 0x0001032154a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103215500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032155a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103215504) */
/* WARNING: Removing unreachable block (ram,0x0001032154a4) */
/* WARNING: Removing unreachable block (ram,0x0001032154c4) */
/* WARNING: Removing unreachable block (ram,0x0001032155c4) */
/* WARNING: Removing unreachable block (ram,0x0001032154ec) */
/* WARNING: Removing unreachable block (ram,0x0001032155a8) */

void FUN_10321542c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if (cRam0000000112f4cd20 == '\x01') {
    cRam0000000112f4cd20 = '\0';
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 != 0) {
      func_0x000107c5d7b4();
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        func_0x000107c4cc08(lVar2);
        func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 1032155dc; end: 10321562f;  */

void FUN_1032155dc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_103215638();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103215630; end: 103215637;  */

void FUN_103215630(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103215638();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103215638; end: 103215acf;  */

void FUN_103215638(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c450a4(0x4034000000000000,0x4034000000000000);
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    return;
  }
  puVar4 = PTR_PTR_1126c3378;
  func_0x000107c61168();
  puVar5 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c451b0();
  func_0x000107c61180();
  func_0x000107c44f94();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c450a4(0x4028000000000000,0x4028000000000000);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126b15a0;
  func_0x000107c61168();
  func_0x000107c3ee6c(0x4028000000000000,0x4028000000000000);
  func_0x000107c61180();
  puVar5 = &UNK_110626c78;
  puVar7 = puVar5;
  func_0x000107c613fc(&UNK_110626c78,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar8 = &UNK_110626d18;
  func_0x000107c613fc(&UNK_110626d18,0x18,7);
  uVar18 = 0;
  func_0x000107c61614(puVar8 + 0x10,0);
  puVar9 = PTR_PTR_1126b0ae0;
  func_0x000107c61168();
  puVar10 = puVar9;
  FUN_10321643c();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar18);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1032163bc;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110626d30;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar11);
  puVar13 = puStack_80;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar13);
  puVar12 = puVar5;
  func_0x000107c613fc(&UNK_110626c78,0x18,7);
  func_0x000107c61644(puVar12 + 0x10);
  puVar13 = &UNK_110626d68;
  func_0x000107c613fc(&UNK_110626d68,0x20,7);
  *(undefined **)(puVar13 + 0x10) = puVar12;
  *(undefined **)(puVar13 + 0x18) = puVar8;
  pcStack_88 = (code *)0x1032163c4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110626d80;
  ppuVar14 = &puStack_a8;
  puStack_80 = puVar13;
  func_0x000107c60bc4();
  puVar13 = puStack_80;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar13);
  func_0x000107c613fc(&UNK_110626c78,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  pcStack_88 = (code *)0x1032163cc;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110626da8;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  uVar18 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f131440);
  func_0x000107c40af4(0x4018000000000000,puVar9);
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61428(puVar8 + 0x10,&puStack_a8,1,0);
  func_0x000107c61604(puVar8 + 0x10,puVar9);
  func_0x000107c61604(unaff_x20 + 0x40,puVar9);
  lVar16 = *(long *)(unaff_x20 + 0x20);
  if (lVar16 != 0) {
    func_0x000107c4d80c();
    func_0x000107c61180();
    lVar17 = lVar16;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    if (lVar17 != 0) {
      func_0x000107c5c2e0(lVar17);
      func_0x000107c615e8(lVar17);
    }
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x000107c4dc2c();
  }
  lVar16 = *(long *)(unaff_x20 + 0x10);
  if (lVar16 != 0) {
    func_0x000107c42e68();
    func_0x000107c61180();
    lVar17 = lVar16;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    if (lVar17 != 0) {
      func_0x000107c4bf68(lVar17);
      func_0x000107c61574(puVar8);
      func_0x000107c615e8(lVar17);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar4);
      puVar9 = puVar6;
      goto LAB_103215aa4;
    }
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(puVar7);
LAB_103215aa4:
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 103215ad0; end: 103215cd7;  */

void FUN_103215ad0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    func_0x000107c5edd0(puVar10,0xd00000000000001f,0x800000010f131460);
    puVar2 = puVar10;
    (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
    if ((int)puVar2 == 1) {
      func_0x0001000293e4(puVar10);
    }
    else {
      (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar1);
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c5ed90();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar6 = 0;
      func_0x000100dfa6ec(0);
      uVar7 = 0x112d377a8;
      FUN_1032163d4(0x112d377a8,0xff,&SUB_100dfa6ec,&UNK_10d901780);
      puVar8 = puVar5;
      func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
      func_0x000107c6142c(puVar5);
      func_0x000107c4de70(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar8);
      (**(code **)(lVar11 + 8))(lVar9,lVar1);
    }
  }
  else {
    FUN_103215cd8();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103215cd8; end: 10321607f;  */

/* WARNING: Possible PIC construction at 0x000103215da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103215ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103215ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103215ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103215f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010321603c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010321604c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103216040) */
/* WARNING: Removing unreachable block (ram,0x000103215f04) */
/* WARNING: Removing unreachable block (ram,0x000103215ef4) */
/* WARNING: Removing unreachable block (ram,0x000103215ee4) */
/* WARNING: Removing unreachable block (ram,0x000103215ec4) */
/* WARNING: Removing unreachable block (ram,0x000103215dac) */
/* WARNING: Removing unreachable block (ram,0x000103215db0) */
/* WARNING: Removing unreachable block (ram,0x000103215f28) */
/* WARNING: Removing unreachable block (ram,0x000103215dcc) */
/* WARNING: Removing unreachable block (ram,0x000103215df0) */
/* WARNING: Removing unreachable block (ram,0x000103215f34) */
/* WARNING: Removing unreachable block (ram,0x000103215df8) */
/* WARNING: Removing unreachable block (ram,0x000103216050) */

void FUN_103215cd8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) {
    return;
  }
  puVar2 = *(undefined **)(unaff_x20 + 0x50);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c4dc3c();
  }
  if (*(long *)(unaff_x20 + 0x28) == 0) {
    func_0x000107c5edd0(puVar7,0xd00000000000001f,0x800000010f131460);
    puVar3 = puVar7;
    (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
    if ((int)puVar3 == 1) {
      func_0x0001000293e4(puVar7);
      return;
    }
    (**(code **)(lVar8 + 0x20))
              ((long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),puVar7,lVar1);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c5ed90();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar5 = 0;
    func_0x000100dfa6ec(0);
    uVar6 = 0x112d377a8;
    FUN_1032163d4(0x112d377a8,0xff,&SUB_100dfa6ec,&UNK_10d901780);
    func_0x000107c5f9dc(puVar4,uVar5,PTR___sypN_11034f1a8 + 8,uVar6);
    func_0x000107c6142c(puVar4);
    func_0x000107c4de70(puVar2);
  }
  else {
    func_0x00010451338c();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103216080; end: 1032162a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103216080(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x18) + _DAT_113083868);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        puVar2 = PTR_PTR_1126e2840;
        func_0x000107c610f8(PTR_PTR_1126e2840);
        func_0x000107c453e4();
        func_0x000107c571f8();
        func_0x000107c5958c(puVar2);
        func_0x000107c59560(puVar2);
        func_0x000107c541e4(puVar2);
        func_0x000107c52bd4(puVar2);
        func_0x000107c4bfb0(lVar1);
        func_0x000107c61574(param_1);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(puVar2);
        goto LAB_103216168;
      }
    }
    func_0x000107c61574();
  }
LAB_103216168:
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4207c();
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 1032162a4; end: 1032162bf;  */

void FUN_1032162a4(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1032162c0; end: 10321630f;  */

undefined * FUN_1032162c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = 0x112f4cc10;
  FUN_1032163d4(0x112f4cc10,param_2,FUN_10321634c,&DAT_10db9e5b0);
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 103216310; end: 10321634b;  */

void FUN_103216310(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f4cd28;
  FUN_1032163d4(0x112f4cd28,param_2,FUN_10321634c,&DAT_10db9e5d8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 10321634c; end: 10321636b;  */

void FUN_10321634c(void)

{
  func_0x000107c61168(&PTR_PTR_112f4cdb0);
  return;
}



/* Entry: 10321636c; end: 103216397;  */

void FUN_10321636c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b558 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b560;
  func_0x00010002969c(0x112f4b560,&UNK_10db9b890);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b558 = puVar2;
  return;
}



/* Entry: 103216398; end: 1032163bb; -[_TtC32SCContextStoragePlanUpsellPlugin31StoragePlanUpsellIANCoordinator plusSubscribeDidDismiss] */

void FUN_103216398(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 0;
  func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1032163bc; end: 1032163d3;  */

void FUN_1032163bc(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    func_0x000107c5edd0(puVar11,0xd00000000000001f,0x800000010f131460);
    puVar3 = puVar11;
    (**(code **)(lVar12 + 0x30))(puVar11,1,lVar2);
    if ((int)puVar3 == 1) {
      func_0x0001000293e4(puVar11);
    }
    else {
      (**(code **)(lVar12 + 0x20))(lVar10,puVar11,lVar2);
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5ed90();
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar7 = 0;
      func_0x000100dfa6ec(0);
      uVar8 = 0x112d377a8;
      FUN_1032163d4(0x112d377a8,0xff,&SUB_100dfa6ec,&UNK_10d901780);
      puVar9 = puVar6;
      func_0x000107c5f9dc(puVar6,uVar7,PTR___sypN_11034f1a8 + 8,uVar8);
      func_0x000107c6142c(puVar6);
      func_0x000107c4de70(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar9);
      (**(code **)(lVar12 + 8))(lVar10,lVar2);
    }
  }
  else {
    FUN_103215cd8();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1032163d4; end: 103216413;  */

void FUN_1032163d4(long *param_1,undefined8 param_2,code *param_3,long param_4)

{
  if (*param_1 == 0) {
    (*param_3)(param_2);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 103216414; end: 10321643b;  */

void FUN_103216414(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10321643c; end: 103216507;  */

undefined1  [16] FUN_10321643c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f131480);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1314a0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103216508);
  (*pcVar1)();
}



/* Entry: 103216508; end: 10321651b;  */

void FUN_103216508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110626ec8;
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(&UNK_110626ec8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10321651c,puVar1);
  return;
}



/* Entry: 10321651c; end: 10321663f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10321651c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lStack_70;
  byte bStack_67;
  
  func_0x000100083b20(&lStack_70);
  uVar5 = (ulong)bStack_67;
  func_0x000100083b20(&lStack_70);
  lVar1 = *(long *)(lStack_70 + _DAT_1130190c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    lVar2 = lStack_70;
    func_0x000107c61174(lStack_70);
    FUN_10321985c(uVar5,lStack_70);
    func_0x000107c61170(lVar2);
    if (((uVar5 & 1) != 0) || (lVar3 = lVar1, func_0x000107c5dd30(), (int)lVar3 != 0)) {
      lVar3 = lVar1;
      func_0x000107c5dd2c();
      param_1[3] = &UNK_110627818;
      lVar4 = lVar3;
      func_0x000103217470();
      param_1[4] = lVar4;
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
      *(char *)param_1 = (char)lVar3;
      return;
    }
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    func_0x000107c615e8(lVar1);
    lStack_70 = lVar2;
  }
  func_0x000107c61170(lStack_70);
  return;
}



/* Entry: 103216640; end: 103216653;  */

void FUN_103216640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110626ef0;
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(&UNK_110626ef0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103216654,puVar1);
  return;
}



/* Entry: 103216654; end: 1032166e3;  */

void FUN_103216654(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_68;
  undefined1 auStack_60 [9];
  byte bStack_57;
  
  func_0x000100083b20(auStack_60);
  uVar2 = (ulong)bStack_57;
  func_0x000100083b20(&uStack_68);
  FUN_10321985c(uVar2,uStack_68);
  func_0x000107c61170();
  if ((uVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
    uStack_68 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000103217430();
    puVar1 = &UNK_1106284e0;
  }
  param_1[3] = puVar1;
  param_1[4] = uStack_68;
  return;
}



/* Entry: 1032166e4; end: 1032166f7;  */

void FUN_1032166e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110626f18;
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(&UNK_110626f18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032166f8,puVar1);
  return;
}



/* Entry: 1032166f8; end: 103216793;  */

void FUN_1032166f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uStack_68;
  undefined1 auStack_60 [9];
  byte bStack_57;
  
  func_0x000100083b20(auStack_60);
  uVar4 = (ulong)bStack_57;
  func_0x000100083b20(&uStack_68);
  FUN_10321985c(uVar4,uStack_68);
  func_0x000107c61170();
  if ((uVar4 & 1) == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
    uVar3 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar3 = uStack_68;
    FUN_10321dbac();
    uVar1 = uVar3;
    func_0x0001032173f0();
    puVar2 = &UNK_110627ce8;
  }
  param_1[3] = puVar2;
  param_1[4] = uVar1;
  *param_1 = uVar3;
  return;
}



/* Entry: 103216794; end: 1032167a7;  */

void FUN_103216794(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110626f40;
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(&UNK_110626f40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032167a8,puVar1);
  return;
}



/* Entry: 1032167a8; end: 103216837;  */

void FUN_1032167a8(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_68;
  undefined1 auStack_60 [9];
  byte bStack_57;
  
  func_0x000100083b20(auStack_60);
  uVar2 = (ulong)bStack_57;
  func_0x000100083b20(&uStack_68);
  FUN_10321985c(uVar2,uStack_68);
  func_0x000107c61170();
  if ((uVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
    uStack_68 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x0001032173b0();
    puVar1 = &UNK_110627b40;
  }
  param_1[3] = puVar1;
  param_1[4] = uStack_68;
  return;
}



/* Entry: 103216838; end: 10321684b;  */

void FUN_103216838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110626f68;
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(&UNK_110626f68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10321684c,puVar1);
  return;
}



/* Entry: 10321684c; end: 1032168db;  */

void FUN_10321684c(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_68;
  undefined1 auStack_60 [9];
  byte bStack_57;
  
  func_0x000100083b20(auStack_60);
  uVar2 = (ulong)bStack_57;
  func_0x000100083b20(&uStack_68);
  FUN_10321985c(uVar2,uStack_68);
  func_0x000107c61170();
  if ((uVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
    uStack_68 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000103217370();
    puVar1 = &UNK_110627fb0;
  }
  param_1[3] = puVar1;
  param_1[4] = uStack_68;
  return;
}



/* Entry: 1032168dc; end: 1032168ef;  */

void FUN_1032168dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110626f90;
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(&UNK_110626f90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032168f0,puVar1);
  return;
}



/* Entry: 1032168f0; end: 10321699f;  */

void FUN_1032168f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uStack_70;
  byte bStack_67;
  
  func_0x000100083b20(&uStack_70);
  uVar1 = uStack_70;
  uVar4 = (ulong)bStack_67;
  func_0x000100083b20(&uStack_70);
  FUN_10321985c(uVar4,uStack_70);
  func_0x000107c61170(uStack_70);
  if ((uVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
    uVar2 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010843607c();
    uVar2 = uVar1;
    func_0x000103217330();
    *(char *)param_1 = (char)uVar1;
    *(undefined1 *)((long)param_1 + 1) = 0;
    puVar3 = &UNK_110627970;
  }
  param_1[3] = puVar3;
  param_1[4] = uVar2;
  return;
}



/* Entry: 1032169a0; end: 1032169b3;  */

void FUN_1032169a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110626fb8;
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(&UNK_110626fb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103216a3c,puVar1);
  return;
}



/* Entry: 1032169b4; end: 103216a3b;  */

void FUN_1032169b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_4,param_3);
  return;
}



/* Entry: 103216a3c; end: 103216acb;  */

void FUN_103216a3c(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_68;
  undefined1 auStack_60 [9];
  byte bStack_57;
  
  func_0x000100083b20(auStack_60);
  uVar2 = (ulong)bStack_57;
  func_0x000100083b20(&uStack_68);
  FUN_10321985c(uVar2,uStack_68);
  func_0x000107c61170();
  if ((uVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
    uStack_68 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x0001032172f0();
    puVar1 = &UNK_1106283f0;
  }
  param_1[3] = puVar1;
  param_1[4] = uStack_68;
  return;
}



/* Entry: 103216acc; end: 103216d5b;  */

void FUN_103216acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110626fe0;
  func_0x000107c613fc(&UNK_110626fe0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x103216b64,puVar1);
  return;
}



/* Entry: 103216d5c; end: 103216ddb;  */

void FUN_103216d5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110627008;
  func_0x000107c613fc(&UNK_110627008,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103216e08,puVar1);
  return;
}



/* Entry: 103216ddc; end: 103216e07;  */

void FUN_103216ddc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103216e08; end: 103216eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103216e08(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lStack_60;
  byte bStack_57;
  
  func_0x000100083b20(&lStack_60);
  func_0x000100083b20(&lStack_60);
  uVar4 = (ulong)bStack_57;
  lVar1 = lStack_60;
  func_0x000107c61174();
  FUN_10321985c(uVar4,lStack_60);
  func_0x000107c61170(lVar1);
  if ((uVar4 & 1) != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_1130190c8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c4ded8();
      if ((int)lVar3 != 0) {
        param_1[3] = &UNK_110628620;
        func_0x000103217270();
        param_1[4] = lVar3;
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar1);
        return;
      }
      func_0x000107c615e8(lVar2);
    }
  }
  func_0x000107c61170(lVar1);
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 103216ef0; end: 10321718f;  */

void FUN_103216ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110627030;
  func_0x000107c613fc(&UNK_110627030,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(0x103216fb8,puVar1);
  return;
}



/* Entry: 103217190; end: 10321722f;  */

undefined1  [16] FUN_103217190(void)

{
  return ZEXT816(0x110627058);
}



/* Entry: 103217230; end: 1032174af;  */

void FUN_103217230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ce70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9f670;
  func_0x000107c61520(&DAT_10db9f670,&UNK_1106282b0);
  puRam0000000112f4ce70 = puVar1;
  return;
}



/* Entry: 1032174b0; end: 10321753b;  */

void FUN_1032174b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f4cf18;
  func_0x0001000285a8(0x112f4cf18,&UNK_10db9e8f0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10321753c; end: 10321759f;  */

void FUN_10321753c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103217b8c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110627258;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032175a0; end: 1032175a7;  */

void FUN_1032175a0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103217b8c();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110627258;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032175a8; end: 1032175d7;  */

void FUN_1032175a8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1032175d8; end: 10321770f;  */

undefined * FUN_1032175d8(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long alStack_78 [5];
  
  lVar6 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_a1 = *(undefined1 *)(lVar6 + 0x112f4cee8);
    func_0x00010008a7c8(alStack_78,&uStack_a1);
    lVar2 = alStack_78[0];
    if (alStack_78[0] == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = 0;
LAB_103217620:
      FUN_103217710(&uStack_a0);
    }
    else {
      func_0x000100083b20(&uStack_a0);
      func_0x000107c61574(lVar2);
      if (lStack_88 == 0) goto LAB_103217620;
      FUN_103217758(&uStack_a0,alStack_78);
      puVar3 = puVar5;
      func_0x000107c61558();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_103217878(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_103217878(puVar5,uVar1 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      FUN_103217758(alStack_78,puVar5 + uVar1 * 0x28 + 0x20);
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 0x2b) {
      return puVar5;
    }
  } while( true );
}



/* Entry: 103217710; end: 103217757;  */

undefined8 FUN_103217710(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4cf28;
  func_0x0001000285a8(0x112f4cf28,&UNK_10db9e900);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103217758; end: 10321776f;  */

undefined8 * FUN_103217758(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 103217770; end: 103217793;  */

void FUN_103217770(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103217794; end: 103217877;  */

void FUN_103217794(void)

{
  FUN_1032175d8();
  return;
}



/* Entry: 103217878; end: 1032179bb;  */

undefined * FUN_103217878(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1032179bc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f4b2d8;
    func_0x0001000285a8(0x112f4b2d8,&UNK_10db9a7b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f4b2e0;
    func_0x0001000285a8(0x112f4b2e0,&UNK_10db9eb60);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1032179bc; end: 1032179bf;  */

void FUN_1032179bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cf90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9e910;
  func_0x000107c61520(&UNK_10db9e910,&UNK_1106272e8);
  puRam0000000112f4cf90 = puVar1;
  return;
}



/* Entry: 1032179c0; end: 103217a2b;  */

void FUN_1032179c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cf90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9e910;
  func_0x000107c61520(&UNK_10db9e910,&UNK_1106272e8);
  puRam0000000112f4cf90 = puVar1;
  return;
}



/* Entry: 103217a2c; end: 103217a2f;  */

void FUN_103217a2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cfa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9e9c8;
  func_0x000107c61520(&UNK_10db9e9c8,&UNK_110627398);
  puRam0000000112f4cfa8 = puVar1;
  return;
}



/* Entry: 103217a30; end: 103217a9b;  */

void FUN_103217a30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cfa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9e9c8;
  func_0x000107c61520(&UNK_10db9e9c8,&UNK_110627398);
  puRam0000000112f4cfa8 = puVar1;
  return;
}



/* Entry: 103217a9c; end: 103217adf;  */

void FUN_103217a9c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103217ae0; end: 103217ae3;  */

void FUN_103217ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9ea38;
  func_0x000107c61520(&UNK_10db9ea38,&UNK_110627398);
  puRam0000000112f4cfc0 = puVar1;
  return;
}



/* Entry: 103217ae4; end: 103217b23;  */

void FUN_103217ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9ea38;
  func_0x000107c61520(&UNK_10db9ea38,&UNK_110627398);
  puRam0000000112f4cfc0 = puVar1;
  return;
}



/* Entry: 103217b24; end: 103217b27;  */

void FUN_103217b24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9e9f0;
  func_0x000107c61520(&UNK_10db9e9f0,&UNK_110627398);
  puRam0000000112f4cfc8 = puVar1;
  return;
}



/* Entry: 103217b28; end: 103217b67;  */

void FUN_103217b28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4cfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9e9f0;
  func_0x000107c61520(&UNK_10db9e9f0,&UNK_110627398);
  puRam0000000112f4cfc8 = puVar1;
  return;
}



/* Entry: 103217b68; end: 103217b8b;  */

void FUN_103217b68(void)

{
  return;
}



/* Entry: 103217b8c; end: 103217bab;  */

void FUN_103217b8c(void)

{
  func_0x000107c61168(&PTR_PTR_112f4d038);
  return;
}



/* Entry: 103217bac; end: 103217d3f;  */

int FUN_103217bac(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xd5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x2a) {
      iVar2 = 4;
    }
    if (param_2 + 0x2a >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103217c28;
        goto LAB_103217c0c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103217c0c:
      return ((uint)*param_1 | uVar1 << 8) - 0x2a;
    }
  }
LAB_103217c28:
  iVar2 = *param_1 - 0x2b;
  if (*param_1 < 0x2b) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103217d40; end: 103217dd7;  */

void FUN_103217d40(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4d098,&UNK_10db9eb70);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103217dd8,param_1);
  return;
}



/* Entry: 103217dd8; end: 103217ddf;  */

void FUN_103217dd8(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103217ee0();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 103217de0; end: 103217e0f;  */

void FUN_103217de0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103217e10; end: 103217eab;  */

undefined8
FUN_103217e10(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
             undefined1 param_5,long param_6,undefined1 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  long lStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_5f = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  lStack_48 = param_6;
  uStack_40 = param_7;
  func_0x00010008a7c8(&uStack_38,&uStack_68);
  func_0x000100083b20(&uStack_68);
  func_0x000107c61574(uStack_38);
  lVar1 = lStack_48;
  uVar2 = CONCAT71(uStack_4f,uStack_50);
  func_0x0001000a8868(&uStack_68,uVar2);
  (**(code **)(lVar1 + 8))(uVar2,lVar1);
  func_0x0001000834e4(&uStack_68);
  return uVar2;
}



/* Entry: 103217eac; end: 103217ecf;  */

void FUN_103217eac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103217ed0; end: 103217edf;  */

undefined1  [16] FUN_103217ed0(void)

{
  return ZEXT816(0x110627420);
}



/* Entry: 103217ee0; end: 103217eff;  */

void FUN_103217ee0(void)

{
  func_0x000107c61168(&PTR_PTR_112f4d0e0);
  return;
}



/* Entry: 103217f00; end: 103217f2b;  */

long FUN_103217f00(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103217f2c; end: 103217ff7;  */

int FUN_103217f2c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 2)) {
    uVar1 = *(byte *)(param_1 + 2) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103217ff8; end: 103218133;  */

long FUN_103217ff8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar3 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  uVar3 = 0x112f4d140;
  func_0x0001000285a8(0x112f4d140,&UNK_10db9ec30);
  uVar4 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar4;
  *(undefined8 *)(lVar1 + 0x60) = uVar3;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x78) = uStack_78;
  *(undefined8 *)(lVar1 + 0x70) = uStack_80;
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_88;
  *(undefined8 *)(lVar1 + 0x98) = uStack_90;
  FUN_103218304(&uStack_60,auStack_a0,0x112f4b520,&UNK_10db9b280);
  FUN_103218304(&uStack_70,auStack_a0,0x112f4d140,&UNK_10db9ec30);
  FUN_103218304(&uStack_80,auStack_a0,0x112f4b520,&UNK_10db9b280);
  FUN_103218304(&uStack_90,auStack_a0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 103218134; end: 10321816f;  */

void FUN_103218134(undefined8 *param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_103218274(&uStack_60);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  param_1[7] = uStack_28;
  param_1[6] = uStack_30;
  return;
}


