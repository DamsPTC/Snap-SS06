/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b20c200; end: 10b20c317;  */

void FUN_10b20c200(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b20c52c();
  uStack_50 = in_x5;
  uStack_48 = in_x6;
  func_0x00010b20c574();
  func_0x00010b20c61c();
  puVar1 = auStack_a0;
  func_0x00010b20c508(puVar1);
  func_0x00010b20c564();
  func_0x00010b20c5e8();
  puVar2 = &UNK_10f739afd;
  func_0x000107c278b8(auStack_b8,&UNK_10f739afd);
  FUN_10b20c0f0(in_x4);
  FUN_10b20bf38(puVar1,auStack_b8,in_x4,puVar2);
  puVar1 = auStack_d0;
  func_0x00010b20c678(puVar1);
  func_0x00010b20c68c();
  func_0x00010b20c4f4();
  func_0x00010b20c4b8();
  func_0x00010b20c454(auStack_78,puVar1);
  func_0x00010b20c54c();
  func_0x00010b20c598();
  func_0x00010b20c5e0();
  FUN_10b120618(auStack_a0);
  func_0x00010b20c4e0();
  func_0x00010b20c55c();
  FUN_10b120618(auStack_78);
  return;
}



/* Entry: 10b20c318; end: 10b20c41f;  */

void FUN_10b20c318(void)

{
  undefined1 *puVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b20c52c();
  uStack_60 = in_stack_00000000;
  uStack_58 = in_stack_00000008;
  uStack_50 = in_x4;
  uStack_48 = in_x5;
  func_0x00010b20c574();
  func_0x00010b20c61c();
  func_0x00010b20c508(auStack_b0);
  func_0x00010b20c564();
  func_0x00010b20c5e8();
  func_0x00010b20c678(auStack_c8);
  func_0x00010b20c654();
  puVar1 = auStack_e0;
  func_0x000107c27958(puVar1,&uStack_60);
  func_0x00010b20c68c();
  func_0x00010b20c4f4();
  func_0x00010b20c4b8();
  func_0x00010b20c454(auStack_88,puVar1);
  func_0x00010b20c54c();
  func_0x00010b20c598();
  func_0x00010b20c5e0();
  FUN_10b120618(auStack_b0);
  func_0x00010b20c4e0();
  func_0x00010b20c55c();
  FUN_10b120618(auStack_88);
  return;
}



/* Entry: 10b20c420; end: 10b20c4b7;  */

long FUN_10b20c420(long param_1,long param_2)

{
  func_0x000107c27d2c(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 10b20c4b8; end: 10b20c6ff;  */

void FUN_10b20c4b8(void)

{
  long unaff_x22;
  
  func_0x000107c27940(unaff_x22 + 8);
  func_0x000107c27950(unaff_x22 + 8,&stack0xffffffffffffffd0);
  return;
}



/* Entry: 10b20c700; end: 10b20c7f3;  */

void FUN_10b20c700(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [24];
  undefined1 uStack_b0;
  long *aplStack_a8 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  func_0x000107c278b8(auStack_80,&UNK_10f73a28b);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x000107c30400(auStack_68,auStack_80,0,0,0xc,&uStack_98);
  func_0x000107c27914(&uStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000107c30404(aplStack_a8);
  (**(code **)(*aplStack_a8[0] + 0x38))(aplStack_a8[0],auStack_68);
  auStack_c8[0] = 0;
  uStack_b0 = 0;
  FUN_10b20c7f4(param_1,param_2,auStack_c8,(((uint)aplStack_a8[0] ^ 0xffffffff) & 0x101) == 0);
  func_0x000107c279a4(auStack_c8);
  func_0x000107c27d08(aplStack_a8);
  func_0x000107c27f6c(auStack_68);
  return;
}



/* Entry: 10b20c7f4; end: 10b20cc0f;  */

void FUN_10b20c7f4(undefined8 *param_1,undefined8 *param_2,long param_3,undefined1 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined **extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 uStack_d9;
  undefined1 auStack_d8 [24];
  ulong uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_70;
  
  func_0x00010b20e6f0();
  uStack_70 = extraout_x8;
  if ((bRam00000001137f4208 & 1) == 0) {
    iVar5 = 0x137f4208;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      puVar8 = (undefined8 *)0x40;
      __Znwm();
      *puVar8 = 0x32aaaba7;
      puVar8[2] = 0;
      puVar8[1] = 0;
      puVar8[4] = 0;
      puVar8[3] = 0;
      puVar8[6] = 0;
      puVar8[5] = 0;
      puVar8[7] = 0;
      puRam00000001137f4200 = puVar8;
      ___cxa_guard_release(0x1137f4208);
    }
  }
  puVar8 = puRam00000001137f4200;
  __ZNSt3__15mutex4lockEv(puRam00000001137f4200);
  func_0x000107c281d8(&uStack_c0);
  func_0x000107c278b8(auStack_d8,"config");
  uVar3 = *(char *)(param_3 + 0x18) == '\x01';
  if ((bool)uVar3) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(auStack_d8,param_3);
  }
  uVar6 = uStack_c0;
  func_0x000107c278b8(&uStack_a0,"");
  func_0x000107c2ff58(uVar6,4,auStack_d8,&uStack_a0,&uStack_d9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
  if ((uVar6 & 1) == 0) {
    uStack_a0 = 0;
    ppuStack_98 = (undefined **)0x0;
    func_0x000107c28218(&uStack_c0,&uStack_a0);
    func_0x000107c281dc(&uStack_a0);
  }
  FUN_10b13dca0(&uStack_100);
  puVar7 = (undefined8 *)0x198;
  __Znwm();
  plVar10 = puVar7 + 1;
  *plVar10 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110cc7050;
  puVar9 = puVar7 + 3;
  *puVar9 = &PTR_DAT_110cc6f48;
  uStack_a0 = 0x10b20e52c;
  ppuStack_98 = &PTR_DAT_110cc7090;
  puStack_90 = &UNK_10054f908;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[4] = &PTR_FUN_110cc6f98;
  puVar7[8] = lStack_b8;
  puVar7[7] = uStack_c0;
  if (lStack_b8 != 0) {
    do {
      func_0x00010b20e700();
    } while (extraout_w10 != 0);
  }
  uVar11 = *param_2;
  puVar7[10] = param_2[1];
  puVar7[9] = uVar11;
  if (param_2[1] != 0) {
    do {
      func_0x00010b20e700();
    } while (extraout_w10_00 != 0);
  }
  puVar7[0xc] = lStack_f8;
  puVar7[0xb] = uStack_100;
  if (lStack_f8 != 0) {
    do {
      func_0x00010b20e700();
    } while (extraout_w10_01 != 0);
  }
  FUN_10b20e370(puVar7 + 0xd,&uStack_a0);
  *(undefined1 *)(puVar7 + 0x13) = param_4;
  uVar4 = 0x28;
  func_0x000107c2be10();
  puVar7[0x14] = 0x32aaaba7;
  *(undefined1 *)((long)puVar7 + 0x99) = uVar4;
  puVar7[0x16] = 0;
  puVar7[0x15] = 0;
  puVar7[0x18] = 0;
  puVar7[0x17] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x19] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x20] = 0;
  puVar7[0x1f] = 0;
  func_0x000107c27d80(puVar7 + 0x1e,0,0,0);
  *(undefined8 *)((long)puVar7 + 0x129) = 0;
  *(undefined8 *)((long)puVar7 + 0x121) = 0;
  puVar7[0x22] = 0;
  puVar7[0x21] = 0;
  puVar7[0x24] = 0;
  puVar7[0x23] = 0;
  puVar7[0x28] = 0;
  puVar7[0x29] = 0;
  puVar7[0x27] = 0;
  *(undefined2 *)(puVar7 + 0x2a) = 0x101;
  puVar7[0x2b] = 0x32aaaba7;
  puVar7[0x2d] = 0;
  puVar7[0x2c] = 0;
  puVar7[0x2f] = 0;
  puVar7[0x2e] = 0;
  puVar7[0x31] = 0;
  puVar7[0x30] = 0;
  puVar7[0x32] = 0;
  func_0x00010b20e78c();
  if ((puVar7[6] == 0) || (uVar3 = *(long *)(puVar7[6] + 8) == -1, (bool)uVar3)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puStack_f0 = puVar9;
      puStack_e8 = puVar7;
      puStack_b0 = puVar9;
      puStack_a8 = puVar7;
    } while (cVar1 != '\0');
    do {
      func_0x00010b20e7f0();
    } while (extraout_w11 != 0);
    uStack_a0 = puVar7[5];
    puVar7[5] = puVar9;
    puVar7[6] = puVar7;
    ppuStack_98 = extraout_x8_00;
    func_0x00010b20e4dc(&uStack_a0);
    func_0x00010b125840(&puStack_b0);
  }
  *param_1 = puVar9;
  param_1[1] = puVar7;
  puStack_f0 = (undefined8 *)0x0;
  puStack_e8 = (undefined8 *)0x0;
  func_0x00010b125840(&puStack_f0);
  func_0x00010b12487c(&uStack_100);
  func_0x00010b20e7d4();
  func_0x000107c281dc(&uStack_c0);
  __ZNSt3__15mutex6unlockEv(puVar8);
  func_0x00010b20e6d0(uStack_70);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x1137f4208);
    do {
      func_0x00010b20e738();
      func_0x000107c281dc(&uStack_c0);
      __ZNSt3__15mutex6unlockEv(puVar8);
    } while( true );
  }
  return;
}



/* Entry: 10b20cc10; end: 10b20d163;  */

ulong * FUN_10b20cc10(long param_1,undefined8 *******param_2,char *param_3)

{
  undefined8 *****pppppuVar1;
  undefined **ppuVar2;
  byte bVar3;
  undefined **ppuVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *******pppppppuVar14;
  undefined8 extraout_x8;
  ulong uVar15;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar16;
  ulong *puVar17;
  undefined8 *****pppppuVar18;
  long lVar19;
  long *plVar20;
  undefined8 *******pppppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 ******ppppppuVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auStack_520 [16];
  undefined1 uStack_510;
  long lStack_508;
  ulong uStack_500;
  long *plStack_4f8;
  undefined8 *puStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  undefined1 auStack_4d8 [24];
  undefined1 uStack_4c0;
  undefined1 auStack_4b8 [24];
  undefined1 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined1 uStack_418;
  undefined1 uStack_410;
  undefined1 uStack_3f8;
  undefined1 auStack_3f0 [24];
  long *plStack_3d8;
  undefined8 *puStack_3d0;
  undefined1 auStack_3c8 [16];
  undefined8 uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  char cStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  char cStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  char cStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *apuStack_298 [2];
  undefined8 *puStack_288;
  undefined8 uStack_268;
  undefined1 auStack_220 [24];
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 ****ppppuStack_1f0;
  undefined8 ****ppppuStack_1e8;
  undefined1 auStack_1b8 [32];
  undefined8 uStack_198;
  undefined8 ******ppppppuStack_190;
  undefined8 ******ppppppuStack_188;
  undefined8 ***pppuStack_180;
  undefined ***pppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  double dStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined8 ******ppppppuStack_130;
  char cStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined4 auStack_108 [2];
  undefined8 *****pppppuStack_100;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 *****pppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 *****pppppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 ******ppppppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  lVar19 = param_1;
  func_0x00010b20e6f0();
  uStack_120 = 0;
  uStack_48 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  pppppuVar23 = (undefined8 *****)0x0;
  uVar25 = 0;
  lStack_118 = lVar19;
  func_0x00010b20e848(1);
  pppppppuVar21 = (undefined8 *******)&UNK_110ceb410;
  pppppuStack_c8 = (undefined8 *****)&PTR_FUN_110ceb420;
  pppppppuVar8 = (undefined8 *******)&DAT_11383d918;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_b0 = &DAT_11383d918;
  pppppuVar18 = *(undefined8 ******)(param_1 + 0x20);
  pppuStack_c0 = pppppuVar23;
  uStack_b8 = uVar25;
  if (pppppuVar18 == (undefined8 *****)0x0) {
    ppuStack_158 = (undefined **)((ulong)ppuStack_158 & 0xffffffffffffff00);
    cStack_128 = '\0';
  }
  else {
    pppppuStack_d8 = (undefined8 *****)0x0;
    uStack_d0 = 0;
    func_0x000107c278b8(&ppppppuStack_98,"cached_network_mapping.bin");
    param_2 = &ppppppuStack_98;
    pppppuVar23 = pppppuVar18;
    FUN_10b491b9c();
    if ((int)pppppuVar23 == 0) {
      func_0x00010b20e7a0();
LAB_10b20cd88:
      ppuStack_158 = (undefined **)((ulong)ppuStack_158 & 0xffffffffffffff00);
      cStack_128 = '\0';
    }
    else {
      uVar25 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c278b8(&ppppppuStack_f0,"cached_network_mapping.bin");
      FUN_10b4911fc(auStack_108,uVar25,&ppppppuStack_f0);
      ppppppuVar7 = &pppppuStack_d8;
      param_2 = (undefined8 *******)auStack_108;
      func_0x000105640184();
      pppppuVar18 = *ppppppuVar7;
      func_0x000105640484(auStack_108);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_f0);
      func_0x00010b20e7a0();
      if (pppppuVar18 == (undefined8 *****)0x0) goto LAB_10b20cd88;
      func_0x000107c27fdc(&ppppppuStack_f0,(*pppppuStack_d8)[1]);
      param_3 = (char *)((long)ppppppuStack_e8 - (long)ppppppuStack_f0);
      pppppuVar23 = pppppuStack_d8;
      param_2 = (undefined8 *******)ppppppuStack_f0;
      FUN_10b4925bc(pppppuStack_d8,ppppppuStack_f0,param_3);
      if (((ulong)pppppuVar23 & 1) == 0) {
LAB_10b20ce2c:
        cStack_128 = '\0';
        ppuStack_158 = (undefined **)((ulong)ppuStack_158 & 0xffffffffffffff00);
      }
      else {
        pppppuVar23 = pppppuStack_d8;
        FUN_10b4926c0();
        if (ppppppuStack_f0 != ppppppuStack_e8) {
          FUN_10b1371b0();
          pppppuVar1 = pppppuVar23;
          if ((undefined8 *****)0x7ffffffe < pppppuVar23) {
            pppppuVar1 = (undefined8 *****)0x7fffffff;
          }
          param_3 = (char *)((long)ppppppuStack_e8 - (long)ppppppuStack_f0);
          if (pppppuVar1 < param_3) {
            auStack_108[0] = 0;
            FUN_10b24b460();
            ppppppuStack_98 = (undefined8 *******)0x0;
            uStack_90 = 0;
            uStack_88 = (undefined8 *****)0x0;
            pppppuStack_100 = pppppuVar23;
            func_0x00010b20e728(auStack_108,0xd4,&ppppppuStack_98);
            FUN_10b120998(&ppppppuStack_98);
          }
          else {
            uVar15 = 0;
            func_0x000107c3034c();
            if ((uVar15 & 1) != 0) goto LAB_10b20cda0;
          }
          uVar25 = *(undefined8 *)(param_1 + 0x40);
          pppppppuVar8 = &ppppppuStack_98;
          func_0x00010b20e6e4(&ppppppuStack_98);
          func_0x00010b126fec(auStack_70,2);
          func_0x00010b20e71c(auStack_108);
          param_3 = (char *)auStack_108;
          param_2 = (undefined8 *******)0x58;
          func_0x00010b20e728(uVar25,0x58,param_3);
          FUN_10b120998(auStack_108);
          pppppuVar18 = (undefined8 *****)0x38;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      ((undefined *)((long)pppppppuVar8 + (long)pppppuVar18));
            pppppuVar18 = pppppuVar18 + -5;
          } while (pppppuVar18 != (undefined8 *****)0xffffffffffffffe8);
          goto LAB_10b20ce2c;
        }
LAB_10b20cda0:
        uVar25 = 0;
        uVar26 = 0;
        func_0x00010b20e848();
        ppuStack_158 = &PTR_FUN_110ceb420;
        ppuStack_138 = (undefined **)0x0;
        ppppppuStack_130 = (undefined8 *******)0x0;
        puStack_140 = &DAT_11383d918;
        uStack_150 = uVar25;
        uStack_148 = uVar26;
        if (((ulong)pppuStack_c0 & 1) == 0) {
          if ((undefined8 *****)pppuStack_c0 != (undefined8 *****)0x0) goto LAB_10b20cdc8;
LAB_10b20ce44:
          param_2 = (undefined8 *******)&pppppuStack_c8;
          FUN_10b485080(&ppuStack_158);
        }
        else {
          if (*(long *)((ulong)pppuStack_c0 & 0xfffffffffffffffe) == 0) goto LAB_10b20ce44;
LAB_10b20cdc8:
          param_2 = (undefined8 *******)&pppppuStack_c8;
          FUN_10b485048(&ppuStack_158);
        }
        cStack_128 = '\x01';
      }
      func_0x000107c27914(&ppppppuStack_f0);
    }
    func_0x000105640484(&pppppuStack_d8);
  }
  FUN_10b484cf4(&pppppuStack_c8);
  ppppppuVar7 = ppppppuStack_130;
  uVar6 = cStack_128 == '\x01';
  if ((bool)uVar6) {
    uVar25 = *(undefined8 *)(param_1 + 0x40);
    pppppppuVar21 = &ppppppuStack_98;
    func_0x00010b20e6e4(&ppppppuStack_98);
    func_0x00010b126fec(auStack_70,0);
    func_0x00010b20e71c(&pppppuStack_c8);
    puVar16 = &uStack_120;
    func_0x000107c28148(puVar16);
    FUN_10b1135dc(uVar25,0x42,&pppppuStack_c8,puVar16);
    FUN_10b120998(&pppppuStack_c8);
    lVar19 = 0x38;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined *)((long)pppppppuVar21 + lVar19));
      ppuVar4 = ppuStack_138;
      lVar19 = lVar19 + -0x28;
    } while (lVar19 != -0x18);
    FUN_10b20e550(&ppppppuStack_98,1);
    pppppuVar18 = uStack_88;
    ppuVar2 = &PTR_PTR_1133742b8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar2 = ppuVar4;
    }
    uStack_88[2] = (undefined8 ****)0x0;
    *uStack_88 = (undefined8 ****)&PTR_FUN_110cc70c0;
    uStack_88[1] = (undefined8 ****)0x0;
    FUN_10b48a2bc(uStack_88 + 3,0,ppuVar2);
    pppuStack_c0 = uStack_88;
    uStack_88 = (undefined8 *****)0x0;
    pppppuStack_c8 = (undefined8 *****)(pppuStack_c0 + 3);
    func_0x00010b20e5cc(&ppppppuStack_98);
    param_2 = (undefined8 *******)&pppppuStack_c8;
    param_3 = (char *)((ulong)puStack_140 & 0xfffffffffffffffc);
    FUN_10b20d164(param_1,param_2,param_3);
    puVar16 = (undefined8 *)(param_1 + 0x50);
    (*(code *)*puVar16)();
    uVar15 = (long)puVar16 - (long)ppppppuVar7;
    puVar17 = (ulong *)(ulong)(86400000 < (long)uVar15);
    uVar6 = uVar15 == 0x5265c01;
    if (86400000 < (long)uVar15) {
      uStack_88 = (undefined8 *****)CONCAT17(0x10,(undefined7)uStack_88);
      for (lVar19 = 0; uVar12 = (ulong)uStack_88, lVar19 != 0x10; lVar19 = lVar19 + 1) {
        *(undefined1 *)((long)&ppppppuStack_98 + lVar19) = 0;
      }
      dStack_160 = (double)uVar15 / 86400000.0;
      bVar3 = (byte)((ulong)uStack_88 >> 0x38);
      uStack_88 = (undefined8 *****)((ulong)uStack_88 & 0xffffffffffffff00);
      uVar6 = bVar3 == 0;
      uVar15 = uStack_90;
      pppppppuVar8 = (undefined8 *******)ppppppuStack_98;
      if (-1 < (long)uVar12) {
        uVar15 = (ulong)bVar3;
        pppppppuVar8 = &ppppppuStack_98;
      }
      param_3 = "%.2f";
      _snprintf(pppppppuVar8,uVar15,"%.2f");
      param_2 = (undefined8 *******)(long)(int)pppppppuVar8;
      func_0x000107c281b8(&ppppppuStack_98);
      func_0x00010b20e7a0();
    }
    func_0x00010b20e4b4(&pppppuStack_c8);
    pppppppuVar8 = (undefined8 *******)ppppppuVar7;
  }
  else {
    puVar17 = (ulong *)0x1;
  }
  pppuVar9 = &ppuStack_158;
  func_0x00010b20e3ac();
  func_0x00010b20e6d0(uStack_48);
  if ((bool)uVar6) {
    return puVar17;
  }
  ___stack_chk_fail();
  FUN_10b120998(&ppppppuStack_98);
  func_0x000107c27914(&ppppppuStack_f0);
  func_0x000105640484(&pppppuStack_d8);
  ppppppuVar7 = &pppppuStack_c8;
  FUN_10b484cf4();
  func_0x00010b20e730();
  pcStack_168 = FUN_10b20d164;
  pppppppuVar14 = param_2;
  ppppppuStack_190 = pppppppuVar21;
  ppppppuStack_188 = pppppppuVar8;
  pppuStack_180 = pppppuVar18;
  pppuStack_178 = pppuVar9;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010b20e6f0();
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  ppppppuVar22 = *pppppppuVar14;
  ppppppuVar24 = ppppppuVar22;
  uStack_198 = extraout_x8_00;
  func_0x00010b48a52c(ppppppuVar22);
  func_0x000107c2823c(&uStack_208,ppppppuVar24);
  FUN_10b4d1758(ppppppuVar22,uStack_208,(int)uStack_200 - (int)uStack_208);
  if (((ulong)ppppppuVar22 & 1) == 0) {
    pppppuVar18 = ppppppuVar7[8];
    func_0x00010b20e6e4(&ppppuStack_1f0);
    func_0x00010b20e710();
    func_0x00010b20e748(auStack_220,&ppppuStack_1f0);
    func_0x00010b20e728(pppppuVar18,0x70,auStack_220);
    FUN_10b120998(auStack_220);
    do {
      func_0x00010b20e778();
      func_0x00010b20e7e4();
    } while (!(bool)uVar6);
  }
  else {
    __ZNSt3__15mutex4lockEv(ppppppuVar7 + 0x11);
    ppppppuVar22 = param_2[1];
    ppppppuVar24 = *param_2;
    if (param_2[1] != (undefined8 ******)0x0) {
      do {
        func_0x00010b20e700();
      } while (extraout_w10 != 0);
    }
    ppppuStack_1e8 = ppppppuVar7[0x1a];
    ppppuStack_1f0 = ppppppuVar7[0x19];
    ppppppuVar7[0x1a] = ppppppuVar22;
    ppppppuVar7[0x19] = ppppppuVar24;
    func_0x00010b20e4b4(&ppppuStack_1f0);
    func_0x000107c27cfc(ppppppuVar7 + 0x1b,&uStack_208);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (ppppppuVar7 + 0x1e,param_3);
    pppppuVar23 = ppppppuVar7[0x25];
    for (pppppuVar18 = ppppppuVar7[0x24]; uVar6 = pppppuVar18 == pppppuVar23, !(bool)uVar6;
        pppppuVar18 = pppppuVar18 + 2) {
      (*(code *)(**pppppuVar18)[0xb])(*pppppuVar18,ppppppuVar7 + 0x1b);
    }
    __ZNSt3__15mutex6unlockEv(ppppppuVar7 + 0x11);
  }
  puVar17 = &uStack_208;
  func_0x000107c27914();
  func_0x00010b20e6d0(uStack_198);
  if ((bool)uVar6) {
    return puVar17;
  }
  ___stack_chk_fail();
  FUN_10b120998(auStack_220);
  puVar10 = auStack_1b8;
  lVar19 = -0x50;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
    puVar10 = puVar10 + -0x28;
    lVar19 = lVar19 + 0x28;
  } while (lVar19 != 0);
  puVar17 = &uStack_208;
  func_0x000107c27914();
  func_0x00010b20e738();
  puVar11 = puVar17;
  func_0x00010b20e6f0();
  puVar11 = puVar11 + 0x28;
  uStack_268 = extraout_x8_01;
  __ZNSt3__15mutex4lockEv(puVar11);
  uVar6 = 0;
  if (*(char *)((long)puVar17 + 0x139) == '\x01') {
    *(undefined1 *)((long)puVar17 + 0x139) = 0;
    uVar6 = (char)puVar17[0x10] == '\x01';
    if ((!(bool)uVar6) || ((puVar17[0x27] & 1) != 0)) {
      *(undefined1 *)(puVar17 + 0x27) = 0;
      puVar11 = puVar17;
      FUN_10b20cc10();
      if ((int)puVar11 == 0) goto LAB_10b20d710;
    }
    func_0x000107c27958(&uStack_468,&PTR_DAT_110cc6fc0);
    uStack_328 = uStack_460;
    uStack_330 = uStack_468;
    uStack_320 = uStack_458;
    uStack_460 = 0;
    uStack_458 = 0;
    uStack_468 = 0;
    cStack_318 = '\x01';
    apuStack_298[0] = &DAT_10f739b3e;
    func_0x000105c3d708(&uStack_350,apuStack_298);
    puStack_3a0 = &DAT_10f73a0e2;
    func_0x000105c3d708(&uStack_370,&puStack_3a0);
    uStack_310 = uStack_310 & 0xffffffffffffff00;
    uStack_2f8 = cStack_318 == '\x01';
    if ((bool)uStack_2f8) {
      uStack_308 = uStack_328;
      uStack_310 = uStack_330;
      uStack_300 = uStack_320;
      uStack_328 = 0;
      uStack_320 = 0;
      uStack_330 = 0;
    }
    uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
    uStack_2d8 = cStack_338 == '\x01';
    if ((bool)uStack_2d8) {
      uStack_2e8 = uStack_348;
      uStack_2f0 = uStack_350;
      uStack_2e0 = uStack_340;
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_350 = 0;
    }
    uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
    uStack_2b8 = cStack_358 == '\x01';
    if ((bool)uStack_2b8) {
      uStack_2c8 = uStack_368;
      uStack_2d0 = uStack_370;
      uStack_2c0 = uStack_360;
      uStack_368 = 0;
      uStack_360 = 0;
      uStack_370 = 0;
    }
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0x16d;
    func_0x000107c279a4(&uStack_370);
    func_0x000107c279a4(&uStack_350);
    func_0x000107c279a4(&uStack_330);
    func_0x00010b20e7a8();
    uStack_398 = 0;
    puStack_3a0 = (undefined *)0x0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_380 = 0x3f800000;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010b20e840(auStack_3c8);
    FUN_10b20e5dc(auStack_3c8);
    uVar15 = uStack_3b0;
    if (-1 < (long)uStack_3a8) {
      uVar15 = uStack_3a8 >> 0x38;
    }
    if (uVar15 != 0) {
      func_0x000107c278b8(&uStack_468,&DAT_10f433877);
      func_0x000107c27e80(&puStack_3a0,&uStack_468);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      func_0x00010b20e7a8();
    }
    func_0x000107c27958(auStack_3f0,&PTR_DAT_110cc6fc0);
    FUN_10b12b260(apuStack_298,1);
    puVar16 = puStack_288;
    puStack_288[2] = 0;
    *puStack_288 = &PTR_FUN_110cbd7d0;
    puStack_288[1] = 0;
    func_0x000107c278b8(&uStack_468,&UNK_10f73a22f);
    FUN_10b211270(puVar16 + 3,&uStack_468,&puStack_3a0,auStack_3f0,0,&uStack_310);
    func_0x00010b20e7a8();
    puStack_3d0 = puStack_288;
    puStack_288 = (undefined8 *)0x0;
    plStack_3d8 = puStack_3d0 + 3;
    func_0x00010b12b2d8(apuStack_298);
    func_0x00010b20e838();
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_498 = 0;
    auStack_4b8[0] = 0;
    uStack_4a0 = 0;
    auStack_4d8[0] = 0;
    uStack_4c0 = 0;
    uStack_468 = CONCAT35(uStack_468._5_3_,5);
    uStack_460 = CONCAT44(uStack_460._4_4_,2);
    uStack_458 = 1000;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_480 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    func_0x000107c279a4(auStack_4d8);
    func_0x000107c279a4(auStack_4b8);
    func_0x000107c278a8(&uStack_480);
    func_0x000107c278a8(&uStack_498);
    func_0x000107c28144(puVar17 + 0x21);
    uVar15 = puVar17[2];
    uVar12 = puVar17[3];
    uStack_4e8 = uVar15;
    if ((uVar12 == 0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), uStack_4e0 = uVar12, uVar12 == 0))
    goto LAB_10b20d73c;
    plVar20 = (long *)puVar17[6];
    plStack_4f8 = plStack_3d8;
    puStack_4f0 = puStack_3d0;
    plVar13 = plStack_3d8;
    if (puStack_3d0 != (undefined8 *)0x0) {
      do {
        func_0x00010b20e700();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar13 + 0x60))(auStack_3f0);
    uVar6 = uVar15 == 0;
    lStack_508 = 0;
    uStack_500 = uVar12;
    if (!(bool)uVar6) {
      lStack_508 = uVar15 + 8;
    }
    do {
      func_0x00010b20e700();
    } while (extraout_w10_01 != 0);
    func_0x000108c68ab8(apuStack_298,&puStack_3a0);
    auStack_520[0] = 0;
    uStack_510 = 0;
    (**(code **)(*plVar20 + 0x10))
              (plVar20,&plStack_4f8,auStack_3f0,&lStack_508,&uStack_468,apuStack_298,0,auStack_520);
    func_0x0001052b818c(auStack_520);
    func_0x000107c27bb0(apuStack_298);
    func_0x0001052b81ac(&lStack_508);
    func_0x00010b20e838();
    func_0x0001052ac684(&plStack_4f8);
    func_0x00010b125840(&uStack_4e8);
    func_0x00010529fe04(&uStack_468);
    FUN_10b12b2e8(&plStack_3d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3b8);
    func_0x000107c278e0(&puStack_3a0);
    puVar11 = &uStack_310;
    func_0x0001052bb09c(puVar11);
  }
LAB_10b20d710:
  func_0x00010b20e800();
  func_0x00010b20e6d0(uStack_268);
  if ((bool)uVar6) {
    return puVar11;
  }
  ___stack_chk_fail();
LAB_10b20d73c:
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10b20d744);
  (*pcVar5)();
}



/* Entry: 10b20d164; end: 10b20d31f;  */

void FUN_10b20d164(long param_1,ulong *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_3c0 [16];
  undefined1 uStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long *plStack_398;
  undefined8 *puStack_390;
  long lStack_388;
  long lStack_380;
  undefined1 auStack_378 [24];
  undefined1 uStack_360;
  undefined1 auStack_358 [24];
  undefined1 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 uStack_2d0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b0;
  undefined1 uStack_298;
  undefined1 auStack_290 [24];
  long *plStack_278;
  undefined8 *puStack_270;
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  char cStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char cStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  char cStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *apuStack_138 [2];
  undefined8 *puStack_128;
  undefined8 uStack_108;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  puVar8 = param_2;
  func_0x00010b20e6f0();
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar12 = *puVar8;
  uVar13 = uVar12;
  uStack_38 = extraout_x8;
  func_0x00010b48a52c(uVar12);
  func_0x000107c2823c(&uStack_a8,uVar13);
  FUN_10b4d1758(uVar12,uStack_a8,(int)uStack_a0 - (int)uStack_a8);
  if ((uVar12 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010b20e6e4(&uStack_90);
    func_0x00010b20e710();
    func_0x00010b20e748(auStack_c0,&uStack_90);
    func_0x00010b20e728(uVar9,0x70,auStack_c0);
    FUN_10b120998(auStack_c0);
    do {
      func_0x00010b20e778();
      func_0x00010b20e7e4();
    } while (!(bool)in_ZR);
  }
  else {
    __ZNSt3__15mutex4lockEv(param_1 + 0x88);
    uVar12 = param_2[1];
    uVar13 = *param_2;
    if (param_2[1] != 0) {
      do {
        func_0x00010b20e700();
      } while (extraout_w10 != 0);
    }
    uStack_88 = *(undefined8 *)(param_1 + 0xd0);
    uStack_90 = *(undefined8 *)(param_1 + 200);
    *(ulong *)(param_1 + 0xd0) = uVar12;
    *(ulong *)(param_1 + 200) = uVar13;
    func_0x00010b20e4b4(&uStack_90);
    func_0x000107c27cfc(param_1 + 0xd8,&uStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xf0,param_3)
    ;
    puVar5 = *(undefined8 **)(param_1 + 0x128);
    for (puVar4 = *(undefined8 **)(param_1 + 0x120); in_ZR = puVar4 == puVar5, !(bool)in_ZR;
        puVar4 = puVar4 + 2) {
      (**(code **)(*(long *)*puVar4 + 0x58))((long *)*puVar4,param_1 + 0xd8);
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 0x88);
  }
  func_0x000107c27914();
  func_0x00010b20e6d0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b120998(auStack_c0);
  puVar3 = auStack_58;
  lVar10 = -0x50;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    puVar3 = puVar3 + -0x28;
    lVar10 = lVar10 + 0x28;
  } while (lVar10 != 0);
  puVar4 = &uStack_a8;
  func_0x000107c27914();
  func_0x00010b20e738();
  puVar5 = puVar4;
  func_0x00010b20e6f0();
  uStack_108 = extraout_x8_00;
  __ZNSt3__15mutex4lockEv(puVar5 + 0x28);
  uVar2 = 0;
  if (*(char *)((long)puVar4 + 0x139) == '\x01') {
    *(undefined1 *)((long)puVar4 + 0x139) = 0;
    uVar2 = *(char *)(puVar4 + 0x10) == '\x01';
    if ((!(bool)uVar2) || ((*(byte *)(puVar4 + 0x27) & 1) != 0)) {
      *(undefined1 *)(puVar4 + 0x27) = 0;
      puVar5 = puVar4;
      FUN_10b20cc10();
      if ((int)puVar5 == 0) goto LAB_10b20d710;
    }
    func_0x000107c27958(&uStack_308,&PTR_DAT_110cc6fc0);
    uStack_1c8 = uStack_300;
    uStack_1d0 = uStack_308;
    uStack_1c0 = uStack_2f8;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_308 = 0;
    cStack_1b8 = '\x01';
    apuStack_138[0] = &DAT_10f739b3e;
    func_0x000105c3d708(&uStack_1f0,apuStack_138);
    puStack_240 = &DAT_10f73a0e2;
    func_0x000105c3d708(&uStack_210,&puStack_240);
    uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
    uStack_198 = cStack_1b8 == '\x01';
    if ((bool)uStack_198) {
      uStack_1a8 = uStack_1c8;
      uStack_1b0 = uStack_1d0;
      uStack_1a0 = uStack_1c0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1d0 = 0;
    }
    uStack_190 = uStack_190 & 0xffffffffffffff00;
    uStack_178 = cStack_1d8 == '\x01';
    if ((bool)uStack_178) {
      uStack_188 = uStack_1e8;
      uStack_190 = uStack_1f0;
      uStack_180 = uStack_1e0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1f0 = 0;
    }
    uStack_170 = uStack_170 & 0xffffffffffffff00;
    uStack_158 = cStack_1f8 == '\x01';
    if ((bool)uStack_158) {
      uStack_168 = uStack_208;
      uStack_170 = uStack_210;
      uStack_160 = uStack_200;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_210 = 0;
    }
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0x16d;
    func_0x000107c279a4(&uStack_210);
    func_0x000107c279a4(&uStack_1f0);
    func_0x000107c279a4(&uStack_1d0);
    func_0x00010b20e7a8();
    uStack_238 = 0;
    puStack_240 = (undefined *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_220 = 0x3f800000;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x00010b20e840(auStack_268);
    FUN_10b20e5dc(auStack_268);
    uVar13 = uStack_250;
    if (-1 < (long)uStack_248) {
      uVar13 = uStack_248 >> 0x38;
    }
    if (uVar13 != 0) {
      func_0x000107c278b8(&uStack_308,&DAT_10f433877);
      func_0x000107c27e80(&puStack_240,&uStack_308);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      func_0x00010b20e7a8();
    }
    func_0x000107c27958(auStack_290,&PTR_DAT_110cc6fc0);
    FUN_10b12b260(apuStack_138,1);
    puVar5 = puStack_128;
    puStack_128[2] = 0;
    *puStack_128 = &PTR_FUN_110cbd7d0;
    puStack_128[1] = 0;
    func_0x000107c278b8(&uStack_308,&UNK_10f73a22f);
    FUN_10b211270(puVar5 + 3,&uStack_308,&puStack_240,auStack_290,0,&uStack_1b0);
    func_0x00010b20e7a8();
    puStack_270 = puStack_128;
    puStack_128 = (undefined8 *)0x0;
    plStack_278 = puStack_270 + 3;
    func_0x00010b12b2d8(apuStack_138);
    func_0x00010b20e838();
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_338 = 0;
    auStack_358[0] = 0;
    uStack_340 = 0;
    auStack_378[0] = 0;
    uStack_360 = 0;
    uStack_308 = CONCAT35(uStack_308._5_3_,5);
    uStack_300 = CONCAT44(uStack_300._4_4_,2);
    uStack_2f8 = 1000;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_320 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    func_0x000107c279a4(auStack_378);
    func_0x000107c279a4(auStack_358);
    func_0x000107c278a8(&uStack_320);
    func_0x000107c278a8(&uStack_338);
    func_0x000107c28144(puVar4 + 0x21);
    lVar10 = puVar4[2];
    lVar6 = puVar4[3];
    lStack_388 = lVar10;
    if ((lVar6 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_380 = lVar6, lVar6 == 0))
    goto LAB_10b20d73c;
    plVar11 = (long *)puVar4[6];
    plStack_398 = plStack_278;
    puStack_390 = puStack_270;
    plVar7 = plStack_278;
    if (puStack_270 != (undefined8 *)0x0) {
      do {
        func_0x00010b20e700();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar7 + 0x60))(auStack_290);
    uVar2 = lVar10 == 0;
    lStack_3a8 = 0;
    lStack_3a0 = lVar6;
    if (!(bool)uVar2) {
      lStack_3a8 = lVar10 + 8;
    }
    do {
      func_0x00010b20e700();
    } while (extraout_w10_01 != 0);
    func_0x000108c68ab8(apuStack_138,&puStack_240);
    auStack_3c0[0] = 0;
    uStack_3b0 = 0;
    (**(code **)(*plVar11 + 0x10))
              (plVar11,&plStack_398,auStack_290,&lStack_3a8,&uStack_308,apuStack_138,0,auStack_3c0);
    func_0x0001052b818c(auStack_3c0);
    func_0x000107c27bb0(apuStack_138);
    func_0x0001052b81ac(&lStack_3a8);
    func_0x00010b20e838();
    func_0x0001052ac684(&plStack_398);
    func_0x00010b125840(&lStack_388);
    func_0x00010529fe04(&uStack_308);
    FUN_10b12b2e8(&plStack_278);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_258);
    func_0x000107c278e0(&puStack_240);
    func_0x0001052bb09c(&uStack_1b0);
  }
LAB_10b20d710:
  func_0x00010b20e800();
  func_0x00010b20e6d0(uStack_108);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10b20d73c:
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b20d744);
  (*pcVar1)();
}



/* Entry: 10b20d320; end: 10b20d83b;  */

void FUN_10b20d320(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar8;
  undefined1 auStack_300 [16];
  undefined1 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long *plStack_2d8;
  undefined8 *puStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined1 auStack_2b8 [24];
  undefined1 uStack_2a0;
  undefined1 auStack_298 [24];
  undefined1 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined1 uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 uStack_1d8;
  undefined1 auStack_1d0 [24];
  long *plStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  char cStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char cStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  char cStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *apuStack_78 [2];
  undefined8 *puStack_68;
  undefined8 uStack_48;
  
  lVar5 = param_1;
  func_0x00010b20e6f0();
  uStack_48 = extraout_x8;
  __ZNSt3__15mutex4lockEv(lVar5 + 0x140);
  uVar4 = 0;
  if (*(char *)(param_1 + 0x139) == '\x01') {
    *(undefined1 *)(param_1 + 0x139) = 0;
    uVar4 = *(char *)(param_1 + 0x80) == '\x01';
    if ((!(bool)uVar4) || ((*(byte *)(param_1 + 0x138) & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x138) = 0;
      lVar5 = param_1;
      FUN_10b20cc10();
      if ((int)lVar5 == 0) goto LAB_10b20d710;
    }
    func_0x000107c27958(&uStack_248,&PTR_DAT_110cc6fc0);
    uStack_108 = uStack_240;
    uStack_110 = uStack_248;
    uStack_100 = uStack_238;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_248 = 0;
    cStack_f8 = '\x01';
    apuStack_78[0] = &DAT_10f739b3e;
    func_0x000105c3d708(&uStack_130,apuStack_78);
    puStack_180 = &DAT_10f73a0e2;
    func_0x000105c3d708(&uStack_150,&puStack_180);
    uStack_f0 = uStack_f0 & 0xffffffffffffff00;
    uStack_d8 = cStack_f8 == '\x01';
    if ((bool)uStack_d8) {
      uStack_e8 = uStack_108;
      uStack_f0 = uStack_110;
      uStack_e0 = uStack_100;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_110 = 0;
    }
    uStack_d0 = uStack_d0 & 0xffffffffffffff00;
    uStack_b8 = cStack_118 == '\x01';
    if ((bool)uStack_b8) {
      uStack_c8 = uStack_128;
      uStack_d0 = uStack_130;
      uStack_c0 = uStack_120;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_130 = 0;
    }
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    uStack_98 = cStack_138 == '\x01';
    if ((bool)uStack_98) {
      uStack_a8 = uStack_148;
      uStack_b0 = uStack_150;
      uStack_a0 = uStack_140;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_150 = 0;
    }
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0x16d;
    func_0x000107c279a4(&uStack_150);
    func_0x000107c279a4(&uStack_130);
    func_0x000107c279a4(&uStack_110);
    func_0x00010b20e7a8();
    uStack_178 = 0;
    puStack_180 = (undefined *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_160 = 0x3f800000;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010b20e840(auStack_1a8);
    FUN_10b20e5dc(auStack_1a8);
    uVar1 = uStack_190;
    if (-1 < (long)uStack_188) {
      uVar1 = uStack_188 >> 0x38;
    }
    if (uVar1 != 0) {
      func_0x000107c278b8(&uStack_248,&DAT_10f433877);
      func_0x000107c27e80(&puStack_180,&uStack_248);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      func_0x00010b20e7a8();
    }
    func_0x000107c27958(auStack_1d0,&PTR_DAT_110cc6fc0);
    FUN_10b12b260(apuStack_78,1);
    puVar2 = puStack_68;
    puStack_68[2] = 0;
    *puStack_68 = &PTR_FUN_110cbd7d0;
    puStack_68[1] = 0;
    func_0x000107c278b8(&uStack_248,&UNK_10f73a22f);
    FUN_10b211270(puVar2 + 3,&uStack_248,&puStack_180,auStack_1d0,0,&uStack_f0);
    func_0x00010b20e7a8();
    puStack_1b0 = puStack_68;
    puStack_68 = (undefined8 *)0x0;
    plStack_1b8 = puStack_1b0 + 3;
    func_0x00010b12b2d8(apuStack_78);
    func_0x00010b20e838();
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_278 = 0;
    auStack_298[0] = 0;
    uStack_280 = 0;
    auStack_2b8[0] = 0;
    uStack_2a0 = 0;
    uStack_248 = CONCAT35(uStack_248._5_3_,5);
    uStack_240 = CONCAT44(uStack_240._4_4_,2);
    uStack_238 = 1000;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_260 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    func_0x000107c279a4(auStack_2b8);
    func_0x000107c279a4(auStack_298);
    func_0x000107c278a8(&uStack_260);
    func_0x000107c278a8(&uStack_278);
    func_0x000107c28144(param_1 + 0x108);
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *(long *)(param_1 + 0x18);
    lStack_2c8 = lVar5;
    if ((lVar6 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_2c0 = lVar6, lVar6 == 0))
    goto LAB_10b20d73c;
    plVar8 = *(long **)(param_1 + 0x30);
    plStack_2d8 = plStack_1b8;
    puStack_2d0 = puStack_1b0;
    plVar7 = plStack_1b8;
    if (puStack_1b0 != (undefined8 *)0x0) {
      do {
        func_0x00010b20e700();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar7 + 0x60))(auStack_1d0);
    uVar4 = lVar5 == 0;
    lStack_2e8 = 0;
    lStack_2e0 = lVar6;
    if (!(bool)uVar4) {
      lStack_2e8 = lVar5 + 8;
    }
    do {
      func_0x00010b20e700();
    } while (extraout_w10_00 != 0);
    func_0x000108c68ab8(apuStack_78,&puStack_180);
    auStack_300[0] = 0;
    uStack_2f0 = 0;
    (**(code **)(*plVar8 + 0x10))
              (plVar8,&plStack_2d8,auStack_1d0,&lStack_2e8,&uStack_248,apuStack_78,0,auStack_300);
    func_0x0001052b818c(auStack_300);
    func_0x000107c27bb0(apuStack_78);
    func_0x0001052b81ac(&lStack_2e8);
    func_0x00010b20e838();
    func_0x0001052ac684(&plStack_2d8);
    func_0x00010b125840(&lStack_2c8);
    func_0x00010529fe04(&uStack_248);
    FUN_10b12b2e8(&plStack_1b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_198);
    func_0x000107c278e0(&puStack_180);
    func_0x0001052bb09c(&uStack_f0);
  }
LAB_10b20d710:
  func_0x00010b20e800();
  func_0x00010b20e6d0(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_10b20d73c:
  func_0x00010527822c();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b20d744);
  (*pcVar3)();
}



/* Entry: 10b20d83c; end: 10b20d8a3;  */

void FUN_10b20d83c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_2 + 0xf0);
  lVar1 = *(long *)(param_2 + 0xd0);
  uVar2 = *(undefined8 *)(param_2 + 200);
  param_1[1] = *(undefined8 *)(param_2 + 0xd0);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b20e700();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x88);
  return;
}



/* Entry: 10b20d8a4; end: 10b20d8f7;  */

void FUN_10b20d8a4(ulong param_1)

{
  ulong uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x140);
  if (*(char *)(param_1 + 0x138) == '\x01') {
    *(undefined1 *)(param_1 + 0x138) = 0;
    uVar1 = param_1;
    FUN_10b20cc10();
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x139) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x140);
  return;
}



/* Entry: 10b20d8f8; end: 10b20da7b;  */

void FUN_10b20d8f8(long param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int extraout_w11;
  int extraout_w11_00;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x88);
  lVar11 = *param_2;
  if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x128);
LAB_10b20d94c:
    lVar6 = param_2[1];
    if (plVar4 < *(long **)(param_1 + 0x130)) {
      *plVar4 = lVar11;
      plVar4[1] = lVar6;
      if (lVar6 != 0) {
        do {
          func_0x00010b20e7f0();
          plVar4 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      plVar4 = plVar4 + 2;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x120);
      lVar10 = (long)plVar4 - lVar8;
      lVar12 = lVar10 >> 4;
      uVar1 = lVar12 + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_10b20e398();
LAB_10b20da6c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b20da70);
        (*pcVar2)();
      }
      uVar5 = (long)*(long **)(param_1 + 0x130) - lVar8;
      uVar7 = (long)uVar5 >> 3;
      if (uVar7 <= uVar1) {
        uVar7 = uVar1;
      }
      if (0x7fffffffffffffef < uVar5) {
        uVar7 = 0xfffffffffffffff;
      }
      if (uVar7 >> 0x3c != 0) {
        func_0x000104bd35f4();
        goto LAB_10b20da6c;
      }
      lVar3 = uVar7 << 4;
      __Znwm();
      plVar9 = (long *)(lVar3 + lVar10);
      *plVar9 = lVar11;
      plVar9[1] = lVar6;
      if (lVar6 != 0) {
        do {
          func_0x00010b20e7f0();
        } while (extraout_w11_00 != 0);
        lVar8 = *(long *)(param_1 + 0x120);
        lVar10 = *(long *)(param_1 + 0x128) - lVar8;
        lVar12 = lVar10 >> 4;
        plVar9 = extraout_x8_00;
      }
      plVar4 = plVar9 + 2;
      _memcpy(plVar9 + lVar12 * -2,lVar8,lVar10);
      *(long **)(param_1 + 0x120) = plVar9 + lVar12 * -2;
      *(long **)(param_1 + 0x128) = plVar4;
      *(ulong *)(param_1 + 0x130) = lVar3 + uVar7 * 0x10;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
    }
    *(long **)(param_1 + 0x128) = plVar4;
    if (*(long *)(param_1 + 200) != 0) {
      for (plVar9 = *(long **)(param_1 + 0x120); plVar9 != plVar4; plVar9 = plVar9 + 2) {
        (**(code **)(*(long *)*plVar9 + 0x58))((long *)*plVar9,param_1 + 0xd8);
      }
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x128);
    plVar9 = *(long **)(param_1 + 0x120);
    do {
      if (plVar9 == plVar4) goto LAB_10b20d94c;
      lVar6 = *plVar9;
      plVar9 = plVar9 + 2;
    } while (lVar6 != lVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x88);
  return;
}



/* Entry: 10b20da7c; end: 10b20de47;  */

undefined *** FUN_10b20da7c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auStack_331 [9];
  code *pcStack_328;
  ulong auStack_318 [2];
  undefined1 auStack_308 [24];
  long lStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined **ppuStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined *puStack_2c0;
  ulong uStack_2b8;
  undefined8 *puStack_2b0;
  undefined1 auStack_2a8 [80];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined ***pppuStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined **appuStack_228 [3];
  undefined1 auStack_210 [40];
  undefined1 auStack_1e8 [40];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [24];
  undefined8 uStack_198;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined8 auStack_130 [3];
  ulong uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [80];
  undefined8 uStack_48;
  
  lVar2 = param_1;
  func_0x00010b20e6f0();
  uStack_48 = extraout_x8;
  func_0x0001053a4504(lVar2 + 0x108);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  func_0x00010b20e840(alStack_c0);
  uVar12 = 0;
  uVar14 = 0;
  func_0x00010b20e848();
  ppuStack_f0 = &PTR_FUN_110ceb420;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puStack_d8 = &DAT_11383d918;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  plVar3 = (long *)*param_3;
  uStack_e8 = uVar12;
  uStack_e0 = uVar14;
  (**(code **)(*plVar3 + 0x10))();
  uVar1 = (int)plVar3 == 0x130;
  if ((bool)uVar1) {
    func_0x00010b20e814();
    func_0x00010b20e808(*(undefined8 *)(param_1 + 0x40));
    iVar10 = (int)alStack_c0;
    puVar8 = &uStack_b0;
    func_0x00010b20e830();
    goto LAB_10b20dd08;
  }
  func_0x00010b20e814();
  uVar12 = 1;
  FUN_10b20de48(*(undefined8 *)(param_1 + 0x40),1,0,plVar3);
  FUN_10b20e240(&uStack_118);
  uVar13 = uStack_118;
  plVar4 = (long *)*param_4;
  (**(code **)(*plVar4 + 0x18))();
  (**(code **)(*(long *)*param_4 + 0x18))();
  func_0x000107c3034c(uVar13,plVar4,uVar12);
  if ((uVar13 & 1) == 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010b20e6e4(auStack_98);
    func_0x00010b20e710();
    func_0x00010b20e71c(auStack_130);
    puVar8 = auStack_130;
    uVar12 = 0x58;
    func_0x00010b20e728(uVar14,0x58,puVar8);
    func_0x00010b20e7c4();
    do {
      func_0x00010b20e778();
      func_0x00010b20e7e4();
      iVar10 = (int)uVar12;
    } while (!(bool)uVar1);
  }
  else if ((alStack_c0[0] == 0) ||
          (uVar1 = *(ulong *)(uStack_118 + 0x58) == *(ulong *)(alStack_c0[0] + 0x58),
          *(ulong *)(alStack_c0[0] + 0x58) <= *(ulong *)(uStack_118 + 0x58))) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_130,&uStack_b0)
    ;
    (**(code **)(*(long *)*param_3 + 0x20))(auStack_98);
    if ((alStack_c0[0] == 0) ||
       (uVar1 = *(ulong *)(uStack_118 + 0x58) == *(ulong *)(alStack_c0[0] + 0x58),
       *(ulong *)(alStack_c0[0] + 0x58) < *(ulong *)(uStack_118 + 0x58))) {
      puVar5 = auStack_148;
      func_0x000107c278b8(puVar5,&DAT_10f4338fa);
      func_0x00010b20e81c();
      func_0x00010b20e828();
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = auStack_148;
        func_0x000107c278b8(puVar5,&DAT_10f73a270);
        func_0x00010b20e81c();
        func_0x00010b20e828();
        if (puVar5 != (undefined1 *)0x0) goto LAB_10b20dca8;
      }
      else {
LAB_10b20dca8:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (auStack_130,puVar5 + 0x28);
      }
      FUN_10b20d164(param_1,&uStack_118,auStack_130);
    }
    lStack_140 = lStack_110;
    if (lStack_110 != 0) {
      do {
        func_0x00010b20e700();
      } while (extraout_w10 != 0);
    }
    iVar10 = (int)auStack_148;
    puVar8 = auStack_130;
    func_0x00010b20e830();
    func_0x00010b20e7dc();
    func_0x000107c278e0(auStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010b20e6e4(auStack_98);
    func_0x00010b20e710();
    func_0x00010b20e71c(auStack_130);
    puVar8 = auStack_130;
    uVar12 = 0x41;
    func_0x00010b20e728(uVar14,0x41,puVar8);
    func_0x00010b20e7c4();
    do {
      func_0x00010b20e778();
      func_0x00010b20e7e4();
      iVar10 = (int)uVar12;
    } while (!(bool)uVar1);
  }
  func_0x00010b20e4b4(&uStack_118);
LAB_10b20dd08:
  func_0x00010b20e7d4();
  FUN_10b484cf4(&ppuStack_f0);
  FUN_10b20e5dc(alStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b20e6d0(uStack_48);
  if ((bool)uVar1) {
    return (undefined ***)0x1;
  }
  ___stack_chk_fail();
  func_0x00010b20e828();
  func_0x000107c278e0(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  func_0x00010b20e4b4(&uStack_118);
  func_0x00010b20e7d4();
  FUN_10b484cf4(&ppuStack_f0);
  FUN_10b20e5dc(alStack_c0);
  puVar6 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
  func_0x00010b20e730();
  pcStack_158 = FUN_10b20de48;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x00010b20e6f0();
  uStack_198 = extraout_x8_00;
  func_0x00010b20e6e4(auStack_210);
  uVar1 = iVar10 == 0;
  uVar11 = 0;
  if ((bool)uVar1) {
    uVar11 = 2;
  }
  func_0x00010b126fec(auStack_1e8,uVar11);
  func_0x00010b123d80(auStack_1c0,&UNK_10f73a27e,0xc,puVar8);
  func_0x00010b120648(appuStack_228,auStack_210,3);
  pppuVar9 = appuStack_228;
  FUN_10b1135dc(puVar6,0x6f,pppuVar9,plVar3);
  pppuVar7 = appuStack_228;
  FUN_10b120998();
  do {
    func_0x00010b20e778();
    func_0x00010b20e7e4();
  } while (!(bool)uVar1);
  func_0x00010b20e6d0(uStack_198);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_10b120998(appuStack_228);
    puVar5 = auStack_1b0;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010b20e7b0();
    } while (!(bool)uVar1);
    func_0x00010b20e730();
    uStack_250 = 0xffffffffffffff88;
    pcStack_238 = FUN_10b20df80;
    uVar13 = 0;
    uVar15 = 0;
    pppuStack_248 = pppuVar7;
    ppuStack_240 = &puStack_160;
    func_0x00010b20e6f0();
    func_0x00010b20e848();
    ppuStack_2d8 = &PTR_FUN_110ceb420;
    uStack_2b8 = 0;
    puStack_2b0 = (undefined8 *)0x0;
    puStack_2c0 = &DAT_11383d918;
    uStack_2d0 = uVar13;
    uStack_2c8 = uVar15;
    uStack_258 = extraout_x8_01;
    func_0x000107c30248(&puStack_2c0,pppuVar9,0);
    uStack_2c8 = uStack_2c8 | 1;
    if (uStack_2b8 == 0) {
      uVar13 = uStack_2d0;
      if ((uStack_2d0 & 1) != 0) {
        uVar13 = *(ulong *)(uStack_2d0 & 0xfffffffffffffffe);
      }
      func_0x00010b20e3cc();
      uStack_2b8 = uVar13;
    }
    FUN_10b48a6b4();
    if (*(long *)(puVar5 + 0x20) != 0) {
      lStack_2f0 = 0;
      lStack_2e8 = 0;
      uStack_2e0 = 0;
      puVar8 = (undefined8 *)(puVar5 + 0x50);
      (*(code *)*puVar8)();
      pppuVar9 = &ppuStack_2d8;
      puStack_2b0 = puVar8;
      FUN_10b484ec0(pppuVar9);
      func_0x000107c2823c(&lStack_2f0,pppuVar9);
      pppuVar9 = &ppuStack_2d8;
      FUN_10b4d1758(pppuVar9,lStack_2f0,(int)lStack_2e8 - (int)lStack_2f0);
      if (((ulong)pppuVar9 & 1) == 0) {
        uVar12 = *(undefined8 *)(puVar5 + 0x40);
        func_0x00010b20e6e4(auStack_2a8);
        func_0x00010b20e710();
        func_0x00010b20e748(auStack_308,auStack_2a8);
        func_0x00010b20e728(uVar12,0x70,auStack_308);
        func_0x00010b20e7bc();
        do {
          func_0x00010b20e778();
          func_0x00010b20e7e4();
        } while (!(bool)uVar1);
      }
      else {
        uVar12 = *(undefined8 *)(puVar5 + 0x20);
        func_0x000107c278b8(auStack_2a8,"cached_network_mapping.bin");
        FUN_10b4912d0(auStack_318,uVar12,auStack_2a8,0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
        if ((auStack_318[0] == 0) ||
           (uVar13 = auStack_318[0],
           FUN_10b4928b4(auStack_318[0],lStack_2f0,lStack_2e8 - lStack_2f0), (uVar13 & 1) == 0)) {
          uVar12 = *(undefined8 *)(puVar5 + 0x40);
          func_0x00010b20e6e4(auStack_2a8);
          func_0x00010b20e710();
          func_0x00010b20e748(auStack_308,auStack_2a8);
          func_0x00010b20e728(uVar12,0x5b,auStack_308);
          func_0x00010b20e7bc();
          do {
            func_0x00010b20e778();
            func_0x00010b20e7e4();
          } while (!(bool)uVar1);
        }
        else {
          func_0x00010b4929dc(auStack_318[0]);
        }
        func_0x000105640438(auStack_318);
      }
      func_0x000107c27914(&lStack_2f0);
    }
    pppuVar9 = &ppuStack_2d8;
    FUN_10b484cf4(pppuVar9);
    func_0x00010b20e6d0(uStack_258);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010b20e7bc();
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010b20e7b0();
      } while (!(bool)uVar1);
      func_0x000105640438(auStack_318);
      func_0x000107c27914(&lStack_2f0);
      FUN_10b484cf4(&ppuStack_2d8);
      func_0x00010b20e730();
      pcStack_328 = FUN_10b20e240;
      pppuVar9 = (undefined ***)auStack_331;
      auStack_331._1_8_ = &ppuStack_240;
      FUN_10b20e604(pppuVar9);
      return pppuVar9;
    }
    return pppuVar9;
  }
  return pppuVar7;
}



/* Entry: 10b20de48; end: 10b20df7f;  */

void FUN_10b20de48(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uStack_1e1;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  ulong auStack_1c8 [2];
  undefined1 auStack_1b8 [24];
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [80];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x00010b20e6f0();
  uStack_48 = extraout_x8;
  func_0x00010b20e6e4(auStack_c0);
  uVar1 = param_2 == 0;
  uVar7 = 0;
  if ((bool)uVar1) {
    uVar7 = 2;
  }
  func_0x00010b126fec(auStack_98,uVar7);
  func_0x00010b123d80(auStack_70,&UNK_10f73a27e,0xc,param_3);
  func_0x00010b120648(auStack_d8,auStack_c0,3);
  puVar6 = auStack_d8;
  FUN_10b1135dc(param_1,0x6f,puVar6,param_4);
  puVar2 = auStack_d8;
  FUN_10b120998();
  do {
    func_0x00010b20e778();
    func_0x00010b20e7e4();
  } while (!(bool)uVar1);
  func_0x00010b20e6d0(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b120998(auStack_d8);
  puVar3 = auStack_60;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b20e7b0();
  } while (!(bool)uVar1);
  func_0x00010b20e730();
  uStack_100 = 0xffffffffffffff88;
  pcStack_e8 = FUN_10b20df80;
  uVar9 = 0;
  uVar10 = 0;
  puStack_f8 = puVar2;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010b20e6f0();
  func_0x00010b20e848();
  ppuStack_188 = &PTR_FUN_110ceb420;
  uStack_168 = 0;
  puStack_160 = (undefined8 *)0x0;
  puStack_170 = &DAT_11383d918;
  uStack_180 = uVar9;
  uStack_178 = uVar10;
  uStack_108 = extraout_x8_00;
  func_0x000107c30248(&puStack_170,puVar6,0);
  uStack_178 = uStack_178 | 1;
  if (uStack_168 == 0) {
    uVar9 = uStack_180;
    if ((uStack_180 & 1) != 0) {
      uVar9 = *(ulong *)(uStack_180 & 0xfffffffffffffffe);
    }
    FUN_10b20e3cc();
    uStack_168 = uVar9;
  }
  FUN_10b48a6b4();
  if (*(long *)(puVar3 + 0x20) != 0) {
    lStack_1a0 = 0;
    lStack_198 = 0;
    uStack_190 = 0;
    puVar4 = (undefined8 *)(puVar3 + 0x50);
    (*(code *)*puVar4)();
    pppuVar5 = &ppuStack_188;
    puStack_160 = puVar4;
    FUN_10b484ec0(pppuVar5);
    func_0x000107c2823c(&lStack_1a0,pppuVar5);
    pppuVar5 = &ppuStack_188;
    FUN_10b4d1758(pppuVar5,lStack_1a0,(int)lStack_198 - (int)lStack_1a0);
    if (((ulong)pppuVar5 & 1) == 0) {
      uVar8 = *(undefined8 *)(puVar3 + 0x40);
      func_0x00010b20e6e4(auStack_158);
      func_0x00010b20e710();
      func_0x00010b20e748(auStack_1b8,auStack_158);
      func_0x00010b20e728(uVar8,0x70,auStack_1b8);
      func_0x00010b20e7bc();
      do {
        func_0x00010b20e778();
        func_0x00010b20e7e4();
      } while (!(bool)uVar1);
    }
    else {
      uVar8 = *(undefined8 *)(puVar3 + 0x20);
      func_0x000107c278b8(auStack_158,"cached_network_mapping.bin");
      FUN_10b4912d0(auStack_1c8,uVar8,auStack_158,0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
      if ((auStack_1c8[0] == 0) ||
         (uVar9 = auStack_1c8[0], FUN_10b4928b4(auStack_1c8[0],lStack_1a0,lStack_198 - lStack_1a0),
         (uVar9 & 1) == 0)) {
        uVar8 = *(undefined8 *)(puVar3 + 0x40);
        func_0x00010b20e6e4(auStack_158);
        func_0x00010b20e710();
        func_0x00010b20e748(auStack_1b8,auStack_158);
        func_0x00010b20e728(uVar8,0x5b,auStack_1b8);
        func_0x00010b20e7bc();
        do {
          func_0x00010b20e778();
          func_0x00010b20e7e4();
        } while (!(bool)uVar1);
      }
      else {
        func_0x00010b4929dc(auStack_1c8[0]);
      }
      func_0x000105640438(auStack_1c8);
    }
    func_0x000107c27914(&lStack_1a0);
  }
  FUN_10b484cf4(&ppuStack_188);
  func_0x00010b20e6d0(uStack_108);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b20e7bc();
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010b20e7b0();
    } while (!(bool)uVar1);
    func_0x000105640438(auStack_1c8);
    func_0x000107c27914(&lStack_1a0);
    FUN_10b484cf4(&ppuStack_188);
    func_0x00010b20e730();
    pcStack_1d8 = FUN_10b20e240;
    ppuStack_1e0 = &puStack_f0;
    FUN_10b20e604(&uStack_1e1);
    return;
  }
  return;
}



/* Entry: 10b20df80; end: 10b20e23f;  */

void FUN_10b20df80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uStack_101;
  undefined1 *puStack_100;
  code *pcStack_f8;
  ulong auStack_e8 [2];
  undefined1 auStack_d8 [24];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [80];
  undefined8 uStack_28;
  
  uVar4 = 0;
  uVar5 = 0;
  func_0x00010b20e6f0();
  func_0x00010b20e848();
  ppuStack_a8 = &PTR_FUN_110ceb420;
  uStack_88 = 0;
  puStack_80 = (undefined8 *)0x0;
  puStack_90 = &DAT_11383d918;
  uStack_a0 = uVar4;
  uStack_98 = uVar5;
  uStack_28 = extraout_x8;
  func_0x000107c30248(&puStack_90,param_3,0);
  uStack_98 = uStack_98 | 1;
  if (uStack_88 == 0) {
    uVar4 = uStack_a0;
    if ((uStack_a0 & 1) != 0) {
      uVar4 = *(ulong *)(uStack_a0 & 0xfffffffffffffffe);
    }
    FUN_10b20e3cc();
    uStack_88 = uVar4;
  }
  FUN_10b48a6b4();
  if (*(long *)(param_1 + 0x20) != 0) {
    lStack_c0 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x50);
    (*(code *)*puVar1)();
    pppuVar2 = &ppuStack_a8;
    puStack_80 = puVar1;
    FUN_10b484ec0(pppuVar2);
    func_0x000107c2823c(&lStack_c0,pppuVar2);
    pppuVar2 = &ppuStack_a8;
    FUN_10b4d1758(pppuVar2,lStack_c0,(int)lStack_b8 - (int)lStack_c0);
    if (((ulong)pppuVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010b20e6e4(auStack_78);
      func_0x00010b20e710();
      func_0x00010b20e748(auStack_d8,auStack_78);
      func_0x00010b20e728(uVar3,0x70,auStack_d8);
      func_0x00010b20e7bc();
      do {
        func_0x00010b20e778();
        func_0x00010b20e7e4();
      } while (!(bool)in_ZR);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c278b8(auStack_78,"cached_network_mapping.bin");
      FUN_10b4912d0(auStack_e8,uVar3,auStack_78,0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
      if ((auStack_e8[0] == 0) ||
         (uVar4 = auStack_e8[0], FUN_10b4928b4(auStack_e8[0],lStack_c0,lStack_b8 - lStack_c0),
         (uVar4 & 1) == 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010b20e6e4(auStack_78);
        func_0x00010b20e710();
        func_0x00010b20e748(auStack_d8,auStack_78);
        func_0x00010b20e728(uVar3,0x5b,auStack_d8);
        func_0x00010b20e7bc();
        do {
          func_0x00010b20e778();
          func_0x00010b20e7e4();
        } while (!(bool)in_ZR);
      }
      else {
        func_0x00010b4929dc(auStack_e8[0]);
      }
      func_0x000105640438(auStack_e8);
    }
    func_0x000107c27914(&lStack_c0);
  }
  FUN_10b484cf4(&ppuStack_a8);
  func_0x00010b20e6d0(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b20e7bc();
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010b20e7b0();
    } while (!(bool)in_ZR);
    func_0x000105640438(auStack_e8);
    func_0x000107c27914(&lStack_c0);
    FUN_10b484cf4(&ppuStack_a8);
    func_0x00010b20e730();
    pcStack_f8 = FUN_10b20e240;
    puStack_100 = &stack0xfffffffffffffff0;
    FUN_10b20e604(&uStack_101);
    return;
  }
  return;
}



/* Entry: 10b20e240; end: 10b20e27b;  */

void FUN_10b20e240(void)

{
  undefined1 uStack_11;
  
  FUN_10b20e604(&uStack_11);
  return;
}



/* Entry: 10b20e27c; end: 10b20e283;  */

void FUN_10b20e27c(void)

{
  return;
}



/* Entry: 10b20e284; end: 10b20e33f;  */

void FUN_10b20e284(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar10;
  ulong uVar11;
  undefined1 uStack_1e1;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  ulong auStack_1c8 [2];
  undefined1 auStack_1b8 [24];
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [80];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x0001053a4504(param_1 + 0x108);
  plVar6 = (long *)*param_3;
  (**(code **)(*plVar6 + 0x10))();
  plVar7 = plVar6;
  func_0x00010b20e814();
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  if ((int)plVar6 == 0x130) {
    func_0x00010b20e808();
    func_0x00010b20e840(&uStack_48);
    func_0x00010b20e830();
    func_0x00010b20e7dc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0xffffffffffffffc8);
    return;
  }
  func_0x00010b20e6f0();
  uStack_48 = extraout_x8;
  func_0x00010b20e6e4(auStack_c0);
  uVar1 = 1;
  func_0x00010b126fec(auStack_98,2);
  func_0x00010b123d80(auStack_70,&UNK_10f73a27e,0xc,0);
  func_0x00010b120648(auStack_d8,auStack_c0,3);
  puVar9 = auStack_d8;
  FUN_10b1135dc(uVar8,0x6f,puVar9,plVar7);
  puVar2 = auStack_d8;
  FUN_10b120998();
  do {
    func_0x00010b20e778();
    func_0x00010b20e7e4();
  } while (!(bool)uVar1);
  func_0x00010b20e6d0(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b120998(auStack_d8);
  puVar3 = auStack_60;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b20e7b0();
  } while (!(bool)uVar1);
  func_0x00010b20e730();
  uStack_100 = 0xffffffffffffff88;
  pcStack_e8 = FUN_10b20df80;
  uVar10 = 0;
  uVar11 = 0;
  puStack_f8 = puVar2;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010b20e6f0();
  func_0x00010b20e848();
  ppuStack_188 = &PTR_FUN_110ceb420;
  uStack_168 = 0;
  puStack_160 = (undefined8 *)0x0;
  puStack_170 = &DAT_11383d918;
  uStack_180 = uVar10;
  uStack_178 = uVar11;
  uStack_108 = extraout_x8_00;
  func_0x000107c30248(&puStack_170,puVar9,0);
  uStack_178 = uStack_178 | 1;
  if (uStack_168 == 0) {
    uVar10 = uStack_180;
    if ((uStack_180 & 1) != 0) {
      uVar10 = *(ulong *)(uStack_180 & 0xfffffffffffffffe);
    }
    FUN_10b20e3cc();
    uStack_168 = uVar10;
  }
  FUN_10b48a6b4();
  if (*(long *)(puVar3 + 0x20) != 0) {
    lStack_1a0 = 0;
    lStack_198 = 0;
    uStack_190 = 0;
    puVar4 = (undefined8 *)(puVar3 + 0x50);
    (*(code *)*puVar4)();
    pppuVar5 = &ppuStack_188;
    puStack_160 = puVar4;
    FUN_10b484ec0(pppuVar5);
    func_0x000107c2823c(&lStack_1a0,pppuVar5);
    pppuVar5 = &ppuStack_188;
    FUN_10b4d1758(pppuVar5,lStack_1a0,(int)lStack_198 - (int)lStack_1a0);
    if (((ulong)pppuVar5 & 1) == 0) {
      uVar8 = *(undefined8 *)(puVar3 + 0x40);
      func_0x00010b20e6e4(auStack_158);
      func_0x00010b20e710();
      func_0x00010b20e748(auStack_1b8,auStack_158);
      func_0x00010b20e728(uVar8,0x70,auStack_1b8);
      func_0x00010b20e7bc();
      do {
        func_0x00010b20e778();
        func_0x00010b20e7e4();
      } while (!(bool)uVar1);
    }
    else {
      uVar8 = *(undefined8 *)(puVar3 + 0x20);
      func_0x000107c278b8(auStack_158,"cached_network_mapping.bin");
      FUN_10b4912d0(auStack_1c8,uVar8,auStack_158,0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
      if ((auStack_1c8[0] == 0) ||
         (uVar10 = auStack_1c8[0], FUN_10b4928b4(auStack_1c8[0],lStack_1a0,lStack_198 - lStack_1a0),
         (uVar10 & 1) == 0)) {
        uVar8 = *(undefined8 *)(puVar3 + 0x40);
        func_0x00010b20e6e4(auStack_158);
        func_0x00010b20e710();
        func_0x00010b20e748(auStack_1b8,auStack_158);
        func_0x00010b20e728(uVar8,0x5b,auStack_1b8);
        func_0x00010b20e7bc();
        do {
          func_0x00010b20e778();
          func_0x00010b20e7e4();
        } while (!(bool)uVar1);
      }
      else {
        func_0x00010b4929dc(auStack_1c8[0]);
      }
      func_0x000105640438(auStack_1c8);
    }
    func_0x000107c27914(&lStack_1a0);
  }
  FUN_10b484cf4(&ppuStack_188);
  func_0x00010b20e6d0(uStack_108);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b20e7bc();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b20e7b0();
  } while (!(bool)uVar1);
  func_0x000105640438(auStack_1c8);
  func_0x000107c27914(&lStack_1a0);
  FUN_10b484cf4(&ppuStack_188);
  func_0x00010b20e730();
  pcStack_1d8 = FUN_10b20e240;
  ppuStack_1e0 = &puStack_f0;
  FUN_10b20e604(&uStack_1e1);
  return;
}



/* Entry: 10b20e340; end: 10b20e34b;  */

void FUN_10b20e340(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar10;
  ulong uVar11;
  undefined1 uStack_1e1;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  ulong auStack_1c8 [2];
  undefined1 auStack_1b8 [24];
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [80];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x0001053a4504(param_1 + 0x100);
  plVar6 = (long *)*param_3;
  (**(code **)(*plVar6 + 0x10))();
  plVar7 = plVar6;
  func_0x00010b20e814();
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  if ((int)plVar6 == 0x130) {
    func_0x00010b20e808();
    func_0x00010b20e840(&uStack_48);
    func_0x00010b20e830();
    func_0x00010b20e7dc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0xffffffffffffffc8);
    return;
  }
  func_0x00010b20e6f0();
  uStack_48 = extraout_x8;
  func_0x00010b20e6e4(auStack_c0);
  uVar1 = 1;
  func_0x00010b126fec(auStack_98,2);
  func_0x00010b123d80(auStack_70,&UNK_10f73a27e,0xc,0);
  func_0x00010b120648(auStack_d8,auStack_c0,3);
  puVar9 = auStack_d8;
  FUN_10b1135dc(uVar8,0x6f,puVar9,plVar7);
  puVar2 = auStack_d8;
  FUN_10b120998();
  do {
    func_0x00010b20e778();
    func_0x00010b20e7e4();
  } while (!(bool)uVar1);
  func_0x00010b20e6d0(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b120998(auStack_d8);
  puVar3 = auStack_60;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b20e7b0();
  } while (!(bool)uVar1);
  func_0x00010b20e730();
  uStack_100 = 0xffffffffffffff88;
  pcStack_e8 = FUN_10b20df80;
  uVar10 = 0;
  uVar11 = 0;
  puStack_f8 = puVar2;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010b20e6f0();
  func_0x00010b20e848();
  ppuStack_188 = &PTR_FUN_110ceb420;
  uStack_168 = 0;
  puStack_160 = (undefined8 *)0x0;
  puStack_170 = &DAT_11383d918;
  uStack_180 = uVar10;
  uStack_178 = uVar11;
  uStack_108 = extraout_x8_00;
  func_0x000107c30248(&puStack_170,puVar9,0);
  uStack_178 = uStack_178 | 1;
  if (uStack_168 == 0) {
    uVar10 = uStack_180;
    if ((uStack_180 & 1) != 0) {
      uVar10 = *(ulong *)(uStack_180 & 0xfffffffffffffffe);
    }
    FUN_10b20e3cc();
    uStack_168 = uVar10;
  }
  FUN_10b48a6b4();
  if (*(long *)(puVar3 + 0x20) != 0) {
    lStack_1a0 = 0;
    lStack_198 = 0;
    uStack_190 = 0;
    puVar4 = (undefined8 *)(puVar3 + 0x50);
    (*(code *)*puVar4)();
    pppuVar5 = &ppuStack_188;
    puStack_160 = puVar4;
    FUN_10b484ec0(pppuVar5);
    func_0x000107c2823c(&lStack_1a0,pppuVar5);
    pppuVar5 = &ppuStack_188;
    FUN_10b4d1758(pppuVar5,lStack_1a0,(int)lStack_198 - (int)lStack_1a0);
    if (((ulong)pppuVar5 & 1) == 0) {
      uVar8 = *(undefined8 *)(puVar3 + 0x40);
      func_0x00010b20e6e4(auStack_158);
      func_0x00010b20e710();
      func_0x00010b20e748(auStack_1b8,auStack_158);
      func_0x00010b20e728(uVar8,0x70,auStack_1b8);
      func_0x00010b20e7bc();
      do {
        func_0x00010b20e778();
        func_0x00010b20e7e4();
      } while (!(bool)uVar1);
    }
    else {
      uVar8 = *(undefined8 *)(puVar3 + 0x20);
      func_0x000107c278b8(auStack_158,"cached_network_mapping.bin");
      FUN_10b4912d0(auStack_1c8,uVar8,auStack_158,0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
      if ((auStack_1c8[0] == 0) ||
         (uVar10 = auStack_1c8[0], FUN_10b4928b4(auStack_1c8[0],lStack_1a0,lStack_198 - lStack_1a0),
         (uVar10 & 1) == 0)) {
        uVar8 = *(undefined8 *)(puVar3 + 0x40);
        func_0x00010b20e6e4(auStack_158);
        func_0x00010b20e710();
        func_0x00010b20e748(auStack_1b8,auStack_158);
        func_0x00010b20e728(uVar8,0x5b,auStack_1b8);
        func_0x00010b20e7bc();
        do {
          func_0x00010b20e778();
          func_0x00010b20e7e4();
        } while (!(bool)uVar1);
      }
      else {
        func_0x00010b4929dc(auStack_1c8[0]);
      }
      func_0x000105640438(auStack_1c8);
    }
    func_0x000107c27914(&lStack_1a0);
  }
  FUN_10b484cf4(&ppuStack_188);
  func_0x00010b20e6d0(uStack_108);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b20e7bc();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b20e7b0();
  } while (!(bool)uVar1);
  func_0x000105640438(auStack_1c8);
  func_0x000107c27914(&lStack_1a0);
  FUN_10b484cf4(&ppuStack_188);
  func_0x00010b20e730();
  pcStack_1d8 = FUN_10b20e240;
  ppuStack_1e0 = &puStack_f0;
  FUN_10b20e604(&uStack_1e1);
  return;
}



/* Entry: 10b20e34c; end: 10b20e35f;  */

void FUN_10b20e34c(void)

{
  func_0x00010b20e408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20e360; end: 10b20e36f;  */

undefined8 * FUN_10b20e360(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1[-1] = &PTR_DAT_110cc6f48;
  *param_1 = &PTR_FUN_110cc6f98;
  __ZNSt3__15mutexD1Ev(param_1 + 0x27);
  lVar2 = param_1[0x23];
  if (lVar2 != 0) {
    lVar1 = param_1[0x24];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x0001052a1398();
    }
    param_1[0x24] = lVar2;
    __ZdlPv(param_1[0x23]);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1d);
  func_0x000107c27914(param_1 + 0x1a);
  func_0x00010b20e4b4(param_1 + 0x18);
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  (**(code **)param_1[10])();
  func_0x00010b12487c(param_1 + 7);
  func_0x0001052a9ef8(param_1 + 5);
  func_0x000107c281dc(param_1 + 3);
  func_0x00010b20e4dc(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 10b20e370; end: 10b20e397;  */

undefined8 * FUN_10b20e370(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c27cf8(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10b20e398; end: 10b20e3cb;  */

void FUN_10b20e398(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (puVar1[0x30] == '\x01') {
    FUN_10b484cf4();
  }
  return;
}



/* Entry: 10b20e3cc; end: 10b20e503;  */

void FUN_10b20e3cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x68;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x68);
  }
  *puVar1 = &PTR_FUN_110cebef0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[10] = param_1;
  puVar1[0xb] = 0;
  return;
}



/* Entry: 10b20e504; end: 10b20e507;  */

void FUN_10b20e504(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7050;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b20e508; end: 10b20e51b;  */

void FUN_10b20e508(void)

{
  func_0x00010b20e540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20e51c; end: 10b20e54f;  */

void FUN_10b20e51c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b20e524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b20e550; end: 10b20e577;  */

long FUN_10b20e550(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b20e578();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b20e578; end: 10b20e593;  */

void FUN_10b20e578(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x39 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 7);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc70c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b20e594; end: 10b20e597;  */

void FUN_10b20e594(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc70c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b20e598; end: 10b20e5ab;  */

void FUN_10b20e598(void)

{
  func_0x00010b20e5b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20e5ac; end: 10b20e5db;  */

long FUN_10b20e5ac(long param_1)

{
  func_0x00010b48aa88();
  FUN_10b48a7bc(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 10b20e5dc; end: 10b20e603;  */

long FUN_10b20e5dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b20e604; end: 10b20e683;  */

undefined8 * FUN_10b20e604(long *param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x00010b20e6f0();
  uStack_28 = extraout_x8;
  FUN_10b20e550(auStack_40,1);
  FUN_10b20e684(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b20e5cc();
  func_0x00010b20e6d0(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b20e5cc();
  func_0x00010b20e730();
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cc70c0;
  puVar3[1] = 0;
  func_0x00010b20e6c8(puVar3 + 3);
  return puVar3;
}



/* Entry: 10b20e684; end: 10b20e6c7;  */

undefined8 * FUN_10b20e684(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc70c0;
  param_1[1] = 0;
  FUN_10b20e6c8(param_1 + 3);
  return param_1;
}



/* Entry: 10b20e6c8; end: 10b20e8b3;  */

void FUN_10b20e6c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cebef0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



/* Entry: 10b20e8b4; end: 10b20e8c7;  */

void FUN_10b20e8b4(void)

{
  FUN_10b20e8c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20e8c8; end: 10b20e90f;  */

undefined8 * FUN_10b20e8c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc7110;
  func_0x000107c27f10(param_1 + 6);
  func_0x000107c27914(param_1 + 3);
  FUN_10b1e4bdc(param_1 + 1);
  return param_1;
}



/* Entry: 10b20e910; end: 10b20ea8b;  */

long FUN_10b20e910(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long *plStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  plVar2 = (long *)*param_2;
  (**(code **)(*plVar2 + 0x38))(param_1);
  uVar1 = SUB84(plVar2,0);
  func_0x00010b210000();
  (**(code **)(extraout_x8 + 0x20))(param_1 + 0x18);
  func_0x00010b210000();
  (**(code **)(extraout_x8_00 + 0x48))();
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  FUN_10b20ea8c(param_1 + 0x38);
  FUN_10b20f218(param_1 + 0xd8);
  func_0x00010b20ffb8();
  func_0x00010b20ffac();
  func_0x00010b20fef4();
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  func_0x00010b20ff38();
  plVar2 = (long *)*param_2;
  lStack_58 = param_2[1];
  plStack_60 = plVar2;
  if (lStack_58 != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10 != 0);
    plVar2 = (long *)*param_2;
  }
  (**(code **)(*plVar2 + 0x18))(auStack_50);
  (**(code **)(*(long *)*param_2 + 0x10))(auStack_40);
  FUN_10b20eae8(param_1 + 0xd8,&plStack_60);
  FUN_10b20f3d0(&plStack_60);
  return param_1;
}



/* Entry: 10b20ea8c; end: 10b20ea9b;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010b200e0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long * FUN_10b20ea8c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar15;
  long *extraout_x8_04;
  ulong extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  ulong extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  ulong extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  ulong extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  ulong extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long *extraout_x9;
  long *extraout_x9_00;
  long *plVar16;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x9_04;
  long *extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  ulong extraout_x9_09;
  long *extraout_x9_10;
  ulong extraout_x9_11;
  ulong extraout_x9_12;
  ulong extraout_x9_13;
  ulong extraout_x9_14;
  long *extraout_x9_15;
  ulong extraout_x9_16;
  ulong extraout_x9_17;
  ulong extraout_x9_18;
  ulong extraout_x9_19;
  long *extraout_x9_20;
  ulong extraout_x9_21;
  ulong extraout_x9_22;
  ulong extraout_x9_23;
  ulong extraout_x9_24;
  long extraout_x9_25;
  long *extraout_x9_26;
  long *extraout_x9_27;
  long *plVar17;
  long extraout_x9_28;
  long *extraout_x9_29;
  long *extraout_x9_30;
  long extraout_x9_31;
  long *extraout_x9_32;
  long *extraout_x9_33;
  long extraout_x9_34;
  long *extraout_x9_35;
  long *extraout_x9_36;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *extraout_x10_04;
  long *extraout_x10_05;
  long *extraout_x10_06;
  ulong extraout_x10_07;
  ulong extraout_x10_08;
  ulong extraout_x10_09;
  ulong extraout_x10_10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x11_02;
  long *extraout_x11_03;
  long *extraout_x11_04;
  long *extraout_x11_05;
  long *extraout_x11_06;
  long *extraout_x11_07;
  long *extraout_x11_08;
  long *extraout_x11_09;
  long *extraout_x11_10;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x12_02;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *unaff_x27;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *apuStack_78 [3];
  
  ppuVar21 = &PTR_PTR_110cc7180;
  param_2[1] = 0;
  *param_2 = 0;
  plVar9 = param_2 + 2;
  param_2[3] = 0;
  *plVar9 = 0;
  plVar10 = param_2 + 5;
  param_2[6] = 0;
  *plVar10 = 0;
  plVar11 = param_2 + 7;
  param_2[8] = 0;
  *plVar11 = 0;
  plVar12 = param_2 + 10;
  param_2[0xb] = 0;
  *plVar12 = 0;
  plVar24 = param_2 + 0xc;
  param_2[0xd] = 0;
  *plVar24 = 0;
  plVar13 = param_2 + 0xf;
  param_2[0x10] = 0;
  *plVar13 = 0;
  plVar14 = param_2 + 0x11;
  param_2[0x12] = 0;
  *plVar14 = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x13) = 0x3f800000;
  do {
    if (ppuVar21 == &PTR_DAT_110cc73f0) {
      return param_2;
    }
    uVar1 = *(uint *)(ppuVar21 + 1);
    uVar5 = (int)(uVar1 - 3) < 0;
    uVar6 = uVar1 == 3;
    if (uVar1 < 4) {
      puVar22 = *ppuVar21;
      switch(uVar1) {
      case 0:
        puVar8 = (undefined8 *)0x98;
        __Znwm();
        func_0x00010b202278();
        *puVar8 = &PTR_FUN_110cc6228;
        puVar8[1] = 0;
        puVar8[0x12] = puVar22;
        *(undefined4 *)(puVar8 + 0x11) = 8;
        puStack_80 = puVar8;
        apuStack_78[0] = puVar8;
        func_0x000107c2805c();
        func_0x00010b201a74(apuStack_78);
        plVar17 = param_2 + 3;
        FUN_10b201a10(plVar17,puVar22);
        plVar19 = (long *)param_2[1];
        if (plVar19 != (long *)0x0) {
          func_0x00010b2023bc();
          if ((bool)uVar6) {
            unaff_x27 = (long *)(extraout_x8 & (ulong)plVar17);
            uVar6 = true;
          }
          else {
            uVar5 = (long)plVar17 - (long)plVar19 < 0;
            uVar6 = plVar17 == plVar19;
            unaff_x27 = plVar17;
            if (plVar19 <= plVar17) {
              uVar15 = 0;
              if (plVar19 != (long *)0x0) {
                uVar15 = (ulong)plVar17 / (ulong)plVar19;
              }
              unaff_x27 = (long *)((long)plVar17 - uVar15 * (long)plVar19);
            }
          }
          plVar23 = *(long **)(*param_2 + (long)unaff_x27 * 8);
          if (plVar23 != (long *)0x0) {
            do {
              while( true ) {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto code_r0x00010b200e98;
                plVar16 = (long *)plVar23[1];
                if (plVar16 != plVar17) break;
                uVar5 = plVar23[2] - (long)puVar22 < 0;
                uVar6 = false;
                if ((undefined *)plVar23[2] == puVar22) goto code_r0x00010b2016e8;
              }
              if (((ulong)plVar19 & extraout_x8) == 0) {
                plVar16 = (long *)((ulong)plVar16 & extraout_x8);
              }
              else if (plVar19 <= plVar16) {
                uVar15 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar15 = (ulong)plVar16 / (ulong)plVar19;
                }
                plVar16 = (long *)((long)plVar16 - uVar15 * (long)plVar19);
              }
              uVar5 = (long)plVar16 - (long)unaff_x27 < 0;
              uVar6 = plVar16 == unaff_x27;
            } while ((bool)uVar6);
          }
        }
code_r0x00010b200e98:
        plVar16 = (long *)0x20;
        __Znwm();
        plVar23 = plVar16;
        func_0x00010b2023e8(plVar9);
        func_0x00010b20251c(param_2[3]);
        if ((plVar19 == (long *)0x0) || (func_0x00010b20235c(param_1,(int)param_2[4]), (bool)uVar5))
        {
          func_0x00010b2022bc();
          bVar4 = (long *)0x2 < plVar19;
          bVar7 = plVar19 == (long *)0x3;
          func_0x00010b2022a8();
          plVar25 = extraout_x8_07;
          if (!bVar4 || bVar7) {
            plVar25 = extraout_x9_03;
          }
          if ((long)plVar25 - 1U == 0) {
            plVar25 = (long *)0x2;
          }
          else if (((ulong)plVar25 & (long)plVar25 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar19 = (long *)param_2[1];
            plVar23 = plVar25;
          }
          bVar7 = plVar19 <= plVar25;
          uVar6 = plVar25 == plVar19;
          if (!bVar7 || (bool)uVar6) {
            if (!bVar7) {
              func_0x00010b20234c(param_1,(int)param_2[4]);
              if ((bVar7) && (func_0x00010b202510(), extraout_x8_23 == 0)) {
                func_0x00010b202258();
              }
              else {
                __ZNSt3__112__next_primeEm();
              }
              if (plVar25 <= plVar23) {
                plVar25 = plVar23;
              }
              uVar6 = plVar25 == plVar19;
              if (plVar25 < plVar19) {
                if (plVar25 != (long *)0x0) goto code_r0x00010b2011b8;
                FUN_10b201a28(param_2,0);
                plVar19 = (long *)0x0;
                param_2[1] = 0;
              }
              else {
                plVar19 = (long *)param_2[1];
              }
            }
          }
          else {
code_r0x00010b2011b8:
            plVar19 = plVar25;
            if ((ulong)plVar19 >> 0x3d != 0) {
              func_0x000104bd35f4();
code_r0x00010b2017d0:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10b2017d4);
              (*pcVar3)();
            }
            lVar20 = (long)plVar19 << 3;
            __Znwm(lVar20);
            FUN_10b201a28(param_2,lVar20);
            plVar23 = (long *)0x0;
            param_2[1] = (long)plVar19;
            while (plVar19 != plVar23) {
              func_0x00010b202504();
              plVar23 = extraout_x9_15;
            }
            uVar6 = 1;
            if (*plVar9 != 0) {
              func_0x00010b2024d0();
              uVar6 = ((ulong)plVar19 & extraout_x9_16) == 0;
              func_0x00010b2024b8();
              lVar20 = extraout_x8_17;
              uVar15 = extraout_x9_17;
              plVar23 = extraout_x10_03;
              plVar25 = extraout_x11_05;
              while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
                plVar18 = (long *)plVar23[1];
                if (((ulong)plVar19 & uVar15) == 0) {
                  plVar18 = (long *)((ulong)plVar18 & uVar15);
                }
                else if (plVar19 <= plVar18) {
                  uVar2 = 0;
                  if (plVar19 != (long *)0x0) {
                    uVar2 = (ulong)plVar18 / (ulong)plVar19;
                  }
                  plVar18 = (long *)((long)plVar18 - uVar2 * (long)plVar19);
                }
                uVar6 = plVar18 == plVar25;
                if (!(bool)uVar6) {
                  if (*(long *)(lVar20 + (long)plVar18 * 8) == 0) {
                    func_0x00010b2024ac();
                    lVar20 = extraout_x8_19;
                    uVar15 = extraout_x9_19;
                    plVar23 = extraout_x12_01;
                    plVar25 = extraout_x11_07;
                  }
                  else {
                    func_0x00010b202238();
                    lVar20 = extraout_x8_18;
                    uVar15 = extraout_x9_18;
                    plVar23 = extraout_x10_04;
                    plVar25 = extraout_x11_06;
                  }
                }
              }
            }
          }
          func_0x00010b2023bc();
          if ((bool)uVar6) {
            uVar6 = 1;
            unaff_x27 = (long *)(extraout_x8_31 & (ulong)plVar17);
          }
          else {
            uVar6 = plVar17 == plVar19;
            unaff_x27 = plVar17;
            if (plVar19 <= plVar17) {
              uVar15 = 0;
              if (plVar19 != (long *)0x0) {
                uVar15 = (ulong)plVar17 / (ulong)plVar19;
              }
              unaff_x27 = (long *)((long)plVar17 - uVar15 * (long)plVar19);
            }
          }
        }
        plVar17 = *(long **)(*param_2 + (long)unaff_x27 * 8);
        if (plVar17 == (long *)0x0) {
          func_0x00010b20242c();
          if (extraout_x9_31 != 0) {
            func_0x00010b2023a0();
            lVar20 = extraout_x8_32;
            if ((bool)uVar6) {
              plVar17 = (long *)((ulong)extraout_x9_32 & extraout_x10_09);
            }
            else {
              plVar17 = extraout_x9_32;
              if (plVar19 <= extraout_x9_32) {
                func_0x00010b202420();
                lVar20 = extraout_x8_33;
                plVar17 = extraout_x9_33;
              }
            }
            *(long **)(lVar20 + (long)plVar17 * 8) = plVar16;
          }
        }
        else {
          *plVar16 = *plVar17;
          *plVar17 = (long)plVar16;
        }
        apuStack_78[0] = (undefined8 *)0x0;
        param_2[3] = param_2[3] + 1;
        func_0x00010b201a40(apuStack_78);
code_r0x00010b2016e8:
        func_0x00010b202498();
        break;
      case 1:
        puVar8 = (undefined8 *)0xa0;
        __Znwm();
        func_0x00010b202278();
        *puVar8 = &PTR_FUN_110cc6270;
        puVar8[1] = 0;
        puVar8[0x13] = puVar22;
        *(undefined4 *)(puVar8 + 0x11) = 8;
        puStack_80 = puVar8;
        apuStack_78[0] = puVar8;
        func_0x000107c2805c();
        func_0x00010b201b80(apuStack_78);
        plVar17 = param_2 + 8;
        FUN_10b201b1c(plVar17,puVar22);
        plVar19 = (long *)param_2[6];
        if (plVar19 != (long *)0x0) {
          func_0x00010b2023bc();
          if ((bool)uVar6) {
            unaff_x27 = (long *)(extraout_x8_02 & (ulong)plVar17);
            uVar6 = true;
          }
          else {
            uVar5 = (long)plVar17 - (long)plVar19 < 0;
            uVar6 = plVar17 == plVar19;
            unaff_x27 = plVar17;
            if (plVar19 <= plVar17) {
              uVar15 = 0;
              if (plVar19 != (long *)0x0) {
                uVar15 = (ulong)plVar17 / (ulong)plVar19;
              }
              unaff_x27 = (long *)((long)plVar17 - uVar15 * (long)plVar19);
            }
          }
          plVar23 = *(long **)(*plVar10 + (long)unaff_x27 * 8);
          if (plVar23 != (long *)0x0) {
            do {
              while( true ) {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto code_r0x00010b200f4c;
                plVar16 = (long *)plVar23[1];
                if (plVar16 != plVar17) break;
                uVar5 = plVar23[2] - (long)puVar22 < 0;
                uVar6 = false;
                if ((undefined *)plVar23[2] == puVar22) goto code_r0x00010b201780;
              }
              if (((ulong)plVar19 & extraout_x8_02) == 0) {
                plVar16 = (long *)((ulong)plVar16 & extraout_x8_02);
              }
              else if (plVar19 <= plVar16) {
                uVar15 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar15 = (ulong)plVar16 / (ulong)plVar19;
                }
                plVar16 = (long *)((long)plVar16 - uVar15 * (long)plVar19);
              }
              uVar5 = (long)plVar16 - (long)unaff_x27 < 0;
              uVar6 = plVar16 == unaff_x27;
            } while ((bool)uVar6);
          }
        }
code_r0x00010b200f4c:
        plVar16 = (long *)0x20;
        __Znwm();
        plVar23 = plVar16;
        func_0x00010b2023e8(plVar11);
        func_0x00010b20251c(param_2[8]);
        if ((plVar19 == (long *)0x0) || (func_0x00010b20235c(param_1,(int)param_2[9]), (bool)uVar5))
        {
          func_0x00010b2022bc();
          bVar4 = (long *)0x2 < plVar19;
          bVar7 = plVar19 == (long *)0x3;
          func_0x00010b2022a8();
          plVar25 = extraout_x8_08;
          if (!bVar4 || bVar7) {
            plVar25 = extraout_x9_04;
          }
          if ((long)plVar25 - 1U == 0) {
            plVar25 = (long *)0x2;
          }
          else if (((ulong)plVar25 & (long)plVar25 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar19 = (long *)param_2[6];
            plVar23 = plVar25;
          }
          bVar7 = plVar19 <= plVar25;
          uVar6 = plVar25 == plVar19;
          if (!bVar7 || (bool)uVar6) {
            if (!bVar7) {
              func_0x00010b20234c(param_1,(int)param_2[9]);
              if ((bVar7) && (func_0x00010b202510(), extraout_x8_24 == 0)) {
                func_0x00010b202258();
              }
              else {
                __ZNSt3__112__next_primeEm();
              }
              if (plVar25 <= plVar23) {
                plVar25 = plVar23;
              }
              uVar6 = plVar25 == plVar19;
              if (plVar25 < plVar19) {
                if (plVar25 != (long *)0x0) goto code_r0x00010b20128c;
                FUN_10b201b34(plVar10,0);
                plVar19 = (long *)0x0;
                param_2[6] = 0;
              }
              else {
                plVar19 = (long *)param_2[6];
              }
            }
          }
          else {
code_r0x00010b20128c:
            plVar19 = plVar25;
            if ((ulong)plVar19 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto code_r0x00010b2017d0;
            }
            lVar20 = (long)plVar19 << 3;
            __Znwm(lVar20);
            FUN_10b201b34(plVar10,lVar20);
            plVar23 = (long *)0x0;
            param_2[6] = (long)plVar19;
            while (plVar19 != plVar23) {
              func_0x00010b202504();
              plVar23 = extraout_x9_20;
            }
            uVar6 = 1;
            if (*plVar11 != 0) {
              func_0x00010b2024d0();
              uVar6 = ((ulong)plVar19 & extraout_x9_21) == 0;
              func_0x00010b2024b8();
              lVar20 = extraout_x8_20;
              uVar15 = extraout_x9_22;
              plVar23 = extraout_x10_05;
              plVar25 = extraout_x11_08;
              while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
                plVar18 = (long *)plVar23[1];
                if (((ulong)plVar19 & uVar15) == 0) {
                  plVar18 = (long *)((ulong)plVar18 & uVar15);
                }
                else if (plVar19 <= plVar18) {
                  uVar2 = 0;
                  if (plVar19 != (long *)0x0) {
                    uVar2 = (ulong)plVar18 / (ulong)plVar19;
                  }
                  plVar18 = (long *)((long)plVar18 - uVar2 * (long)plVar19);
                }
                uVar6 = plVar18 == plVar25;
                if (!(bool)uVar6) {
                  if (*(long *)(lVar20 + (long)plVar18 * 8) == 0) {
                    func_0x00010b2024ac();
                    lVar20 = extraout_x8_22;
                    uVar15 = extraout_x9_24;
                    plVar23 = extraout_x12_02;
                    plVar25 = extraout_x11_10;
                  }
                  else {
                    func_0x00010b202238();
                    lVar20 = extraout_x8_21;
                    uVar15 = extraout_x9_23;
                    plVar23 = extraout_x10_06;
                    plVar25 = extraout_x11_09;
                  }
                }
              }
            }
          }
          func_0x00010b2023bc();
          if ((bool)uVar6) {
            uVar6 = 1;
            unaff_x27 = (long *)(extraout_x8_34 & (ulong)plVar17);
          }
          else {
            uVar6 = plVar17 == plVar19;
            unaff_x27 = plVar17;
            if (plVar19 <= plVar17) {
              uVar15 = 0;
              if (plVar19 != (long *)0x0) {
                uVar15 = (ulong)plVar17 / (ulong)plVar19;
              }
              unaff_x27 = (long *)((long)plVar17 - uVar15 * (long)plVar19);
            }
          }
        }
        plVar17 = *(long **)(*plVar10 + (long)unaff_x27 * 8);
        if (plVar17 == (long *)0x0) {
          func_0x00010b20242c();
          if (extraout_x9_34 != 0) {
            func_0x00010b2023a0();
            lVar20 = extraout_x8_35;
            if ((bool)uVar6) {
              plVar17 = (long *)((ulong)extraout_x9_35 & extraout_x10_10);
            }
            else {
              plVar17 = extraout_x9_35;
              if (plVar19 <= extraout_x9_35) {
                func_0x00010b202420();
                lVar20 = extraout_x8_36;
                plVar17 = extraout_x9_36;
              }
            }
            *(long **)(lVar20 + (long)plVar17 * 8) = plVar16;
          }
        }
        else {
          *plVar16 = *plVar17;
          *plVar17 = (long)plVar16;
        }
        apuStack_78[0] = (undefined8 *)0x0;
        param_2[8] = param_2[8] + 1;
        func_0x00010b201b4c(apuStack_78);
code_r0x00010b201780:
        FUN_10b180d3c(&puStack_80);
        break;
      case 2:
        plVar17 = param_2 + 0x12;
        FUN_10b201e0c(plVar17,puVar22);
        plVar19 = (long *)param_2[0x10];
        if (plVar19 != (long *)0x0) {
          func_0x00010b2023bc();
          if ((bool)uVar6) {
            unaff_x27 = (long *)(extraout_x8_00 & (ulong)plVar17);
            uVar6 = true;
          }
          else {
            uVar5 = (long)plVar17 - (long)plVar19 < 0;
            uVar6 = plVar17 == plVar19;
            unaff_x27 = plVar17;
            if (plVar19 <= plVar17) {
              uVar15 = 0;
              if (plVar19 != (long *)0x0) {
                uVar15 = (ulong)plVar17 / (ulong)plVar19;
              }
              unaff_x27 = (long *)((long)plVar17 - uVar15 * (long)plVar19);
            }
          }
          plVar23 = *(long **)(*plVar13 + (long)unaff_x27 * 8);
          uVar15 = extraout_x8_00;
          if (plVar23 != (long *)0x0) {
            do {
              while( true ) {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto code_r0x00010b200d38;
                plVar16 = (long *)plVar23[1];
                if (plVar16 != plVar17) break;
                uVar5 = plVar23[2] - (long)puVar22 < 0;
                uVar6 = false;
                if ((undefined *)plVar23[2] == puVar22) goto code_r0x00010b201480;
              }
              if (((ulong)plVar19 & uVar15) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar15);
              }
              else if (plVar19 <= plVar16) {
                func_0x00010b202420();
                uVar15 = extraout_x8_03;
                plVar16 = extraout_x9;
              }
              uVar5 = (long)plVar16 - (long)unaff_x27 < 0;
              uVar6 = plVar16 == unaff_x27;
            } while ((bool)uVar6);
          }
        }
code_r0x00010b200d38:
        plVar23 = (long *)0x180;
        __Znwm();
        plVar16 = plVar23;
        func_0x00010b20231c(plVar14);
        func_0x00010b20251c(param_2[0x12]);
        if ((plVar19 == (long *)0x0) ||
           (func_0x00010b20235c(param_1,(int)param_2[0x13]), (bool)uVar5)) {
          func_0x00010b2022bc();
          bVar4 = (long *)0x2 < plVar19;
          bVar7 = plVar19 == (long *)0x3;
          func_0x00010b2022a8();
          plVar25 = extraout_x8_04;
          if (!bVar4 || bVar7) {
            plVar25 = extraout_x9_00;
          }
          if ((long)plVar25 - 1U == 0) {
            plVar25 = (long *)0x2;
          }
          else if (((ulong)plVar25 & (long)plVar25 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar19 = (long *)param_2[0x10];
            plVar16 = plVar25;
          }
          bVar7 = plVar19 <= plVar25;
          uVar6 = plVar25 == plVar19;
          if (!bVar7 || (bool)uVar6) {
            if (!bVar7) {
              func_0x00010b20234c(param_1,(int)param_2[0x13]);
              if ((bVar7) && (func_0x00010b202510(), extraout_x8_15 == 0)) {
                func_0x00010b202258();
              }
              else {
                __ZNSt3__112__next_primeEm();
              }
              if (plVar25 <= plVar16) {
                plVar25 = plVar16;
              }
              uVar6 = plVar25 == plVar19;
              if (plVar25 < plVar19) {
                if (plVar25 != (long *)0x0) goto code_r0x00010b200fc0;
                FUN_10b201e24(plVar13,0);
                plVar19 = (long *)0x0;
                param_2[0x10] = 0;
              }
              else {
                plVar19 = (long *)param_2[0x10];
              }
            }
          }
          else {
code_r0x00010b200fc0:
            plVar19 = plVar25;
            if ((ulong)plVar19 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto code_r0x00010b2017d0;
            }
            lVar20 = (long)plVar19 << 3;
            __Znwm(lVar20);
            FUN_10b201e24(plVar13,lVar20);
            plVar16 = (long *)0x0;
            param_2[0x10] = (long)plVar19;
            while (plVar19 != plVar16) {
              func_0x00010b202504();
              plVar16 = extraout_x9_05;
            }
            uVar6 = 1;
            if (*plVar14 != 0) {
              func_0x00010b2024e4();
              uVar6 = ((ulong)plVar19 & extraout_x9_06) == 0;
              func_0x00010b2024b8();
              lVar20 = extraout_x8_09;
              uVar15 = extraout_x9_07;
              plVar16 = extraout_x10;
              plVar25 = extraout_x11;
              while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
                plVar18 = (long *)plVar16[1];
                if (((ulong)plVar19 & uVar15) == 0) {
                  plVar18 = (long *)((ulong)plVar18 & uVar15);
                }
                else if (plVar19 <= plVar18) {
                  uVar2 = 0;
                  if (plVar19 != (long *)0x0) {
                    uVar2 = (ulong)plVar18 / (ulong)plVar19;
                  }
                  plVar18 = (long *)((long)plVar18 - uVar2 * (long)plVar19);
                }
                uVar6 = plVar18 == plVar25;
                if (!(bool)uVar6) {
                  if (*(long *)(lVar20 + (long)plVar18 * 8) == 0) {
                    func_0x00010b2024ac();
                    lVar20 = extraout_x8_11;
                    uVar15 = extraout_x9_09;
                    plVar16 = extraout_x12;
                    plVar25 = extraout_x11_01;
                  }
                  else {
                    func_0x00010b202238();
                    lVar20 = extraout_x8_10;
                    uVar15 = extraout_x9_08;
                    plVar16 = extraout_x10_00;
                    plVar25 = extraout_x11_00;
                  }
                }
              }
            }
          }
          func_0x00010b2023bc();
          if ((bool)uVar6) {
            uVar6 = 1;
            unaff_x27 = (long *)(extraout_x8_25 & (ulong)plVar17);
          }
          else {
            uVar6 = plVar17 == plVar19;
            unaff_x27 = plVar17;
            if (plVar19 <= plVar17) {
              uVar15 = 0;
              if (plVar19 != (long *)0x0) {
                uVar15 = (ulong)plVar17 / (ulong)plVar19;
              }
              unaff_x27 = (long *)((long)plVar17 - uVar15 * (long)plVar19);
            }
          }
        }
        plVar17 = *(long **)(*plVar13 + (long)unaff_x27 * 8);
        if (plVar17 == (long *)0x0) {
          func_0x00010b202444();
          if (extraout_x9_25 != 0) {
            func_0x00010b2023a0();
            lVar20 = extraout_x8_26;
            if ((bool)uVar6) {
              plVar17 = (long *)((ulong)extraout_x9_26 & extraout_x10_07);
            }
            else {
              plVar17 = extraout_x9_26;
              if (plVar19 <= extraout_x9_26) {
                func_0x00010b202420();
                lVar20 = extraout_x8_27;
                plVar17 = extraout_x9_27;
              }
            }
            *(long **)(lVar20 + (long)plVar17 * 8) = plVar23;
          }
        }
        else {
          *plVar23 = *plVar17;
          *plVar17 = (long)plVar23;
        }
        apuStack_78[0] = (undefined8 *)0x0;
        param_2[0x12] = param_2[0x12] + 1;
        FUN_10b201e3c(apuStack_78);
code_r0x00010b201480:
        for (lVar20 = 0; lVar20 != 0x2d; lVar20 = lVar20 + 1) {
          puVar8 = (undefined8 *)0xa8;
          __Znwm();
          func_0x00010b202278();
          *puVar8 = &PTR_FUN_110cc6300;
          puVar8[1] = 0;
          *(int *)(puVar8 + 0x13) = (int)lVar20;
          puVar8[0x14] = puVar22;
          *(undefined4 *)(puVar8 + 0x11) = 8;
          puStack_88 = puVar8;
          apuStack_78[0] = puVar8;
          func_0x000107c2805c();
          FUN_10b201edc(apuStack_78);
          puVar8 = puStack_88;
          puStack_88 = (undefined8 *)0x0;
          puStack_80 = (undefined8 *)0x0;
          apuStack_78[0] = (undefined8 *)plVar23[lVar20 + 3];
          plVar23[lVar20 + 3] = (long)puVar8;
          func_0x00010b1802e8(apuStack_78);
          func_0x00010b1802e8(&puStack_80);
          FUN_10b180d3c(&puStack_88);
        }
        break;
      case 3:
        plVar17 = param_2 + 0xd;
        FUN_10b201c28(plVar17,puVar22);
        plVar19 = (long *)param_2[0xb];
        if (plVar19 != (long *)0x0) {
          func_0x00010b2023bc();
          if ((bool)uVar6) {
            unaff_x27 = (long *)(extraout_x8_01 & (ulong)plVar17);
            uVar6 = true;
          }
          else {
            uVar5 = (long)plVar17 - (long)plVar19 < 0;
            uVar6 = plVar17 == plVar19;
            unaff_x27 = plVar17;
            if (plVar19 <= plVar17) {
              uVar15 = 0;
              if (plVar19 != (long *)0x0) {
                uVar15 = (ulong)plVar17 / (ulong)plVar19;
              }
              unaff_x27 = (long *)((long)plVar17 - uVar15 * (long)plVar19);
            }
          }
          plVar23 = *(long **)(*plVar12 + (long)unaff_x27 * 8);
          uVar15 = extraout_x8_01;
          if (plVar23 != (long *)0x0) {
            do {
              while( true ) {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto code_r0x00010b200de8;
                plVar16 = (long *)plVar23[1];
                if (plVar16 != plVar17) break;
                uVar5 = plVar23[2] - (long)puVar22 < 0;
                uVar6 = false;
                if ((undefined *)plVar23[2] == puVar22) goto code_r0x00010b20158c;
              }
              if (((ulong)plVar19 & uVar15) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar15);
              }
              else if (plVar19 <= plVar16) {
                func_0x00010b202420();
                uVar15 = extraout_x8_05;
                plVar16 = extraout_x9_01;
              }
              uVar5 = (long)plVar16 - (long)unaff_x27 < 0;
              uVar6 = plVar16 == unaff_x27;
            } while ((bool)uVar6);
          }
        }
code_r0x00010b200de8:
        plVar23 = (long *)0x180;
        __Znwm();
        plVar16 = plVar23;
        func_0x00010b20231c(plVar24);
        func_0x00010b20251c(param_2[0xd]);
        if ((plVar19 == (long *)0x0) ||
           (func_0x00010b20235c(param_1,(int)param_2[0xe]), (bool)uVar5)) {
          func_0x00010b2022bc();
          bVar4 = (long *)0x2 < plVar19;
          bVar7 = plVar19 == (long *)0x3;
          func_0x00010b2022a8();
          plVar25 = extraout_x8_06;
          if (!bVar4 || bVar7) {
            plVar25 = extraout_x9_02;
          }
          if ((long)plVar25 - 1U == 0) {
            plVar25 = (long *)0x2;
          }
          else if (((ulong)plVar25 & (long)plVar25 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar19 = (long *)param_2[0xb];
            plVar16 = plVar25;
          }
          bVar7 = plVar19 <= plVar25;
          uVar6 = plVar25 == plVar19;
          if (!bVar7 || (bool)uVar6) {
            if (!bVar7) {
              func_0x00010b20234c(param_1,(int)param_2[0xe]);
              if ((bVar7) && (func_0x00010b202510(), extraout_x8_16 == 0)) {
                func_0x00010b202258();
              }
              else {
                __ZNSt3__112__next_primeEm();
              }
              if (plVar25 <= plVar16) {
                plVar25 = plVar16;
              }
              uVar6 = plVar25 == plVar19;
              if (plVar25 < plVar19) {
                if (plVar25 != (long *)0x0) goto code_r0x00010b201094;
                FUN_10b201c40(plVar12,0);
                plVar19 = (long *)0x0;
                param_2[0xb] = 0;
              }
              else {
                plVar19 = (long *)param_2[0xb];
              }
            }
          }
          else {
code_r0x00010b201094:
            plVar19 = plVar25;
            if ((ulong)plVar19 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto code_r0x00010b2017d0;
            }
            lVar20 = (long)plVar19 << 3;
            __Znwm(lVar20);
            FUN_10b201c40(plVar12,lVar20);
            plVar16 = (long *)0x0;
            param_2[0xb] = (long)plVar19;
            while (plVar19 != plVar16) {
              func_0x00010b202504();
              plVar16 = extraout_x9_10;
            }
            uVar6 = 1;
            if (*plVar24 != 0) {
              func_0x00010b2024e4();
              uVar6 = ((ulong)plVar19 & extraout_x9_11) == 0;
              func_0x00010b2024b8();
              lVar20 = extraout_x8_12;
              uVar15 = extraout_x9_12;
              plVar16 = extraout_x10_01;
              plVar25 = extraout_x11_02;
              while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
                plVar18 = (long *)plVar16[1];
                if (((ulong)plVar19 & uVar15) == 0) {
                  plVar18 = (long *)((ulong)plVar18 & uVar15);
                }
                else if (plVar19 <= plVar18) {
                  uVar2 = 0;
                  if (plVar19 != (long *)0x0) {
                    uVar2 = (ulong)plVar18 / (ulong)plVar19;
                  }
                  plVar18 = (long *)((long)plVar18 - uVar2 * (long)plVar19);
                }
                uVar6 = plVar18 == plVar25;
                if (!(bool)uVar6) {
                  if (*(long *)(lVar20 + (long)plVar18 * 8) == 0) {
                    func_0x00010b2024ac();
                    lVar20 = extraout_x8_14;
                    uVar15 = extraout_x9_14;
                    plVar16 = extraout_x12_00;
                    plVar25 = extraout_x11_04;
                  }
                  else {
                    func_0x00010b202238();
                    lVar20 = extraout_x8_13;
                    uVar15 = extraout_x9_13;
                    plVar16 = extraout_x10_02;
                    plVar25 = extraout_x11_03;
                  }
                }
              }
            }
          }
          func_0x00010b2023bc();
          if ((bool)uVar6) {
            uVar6 = 1;
            unaff_x27 = (long *)(extraout_x8_28 & (ulong)plVar17);
          }
          else {
            uVar6 = plVar17 == plVar19;
            unaff_x27 = plVar17;
            if (plVar19 <= plVar17) {
              uVar15 = 0;
              if (plVar19 != (long *)0x0) {
                uVar15 = (ulong)plVar17 / (ulong)plVar19;
              }
              unaff_x27 = (long *)((long)plVar17 - uVar15 * (long)plVar19);
            }
          }
        }
        plVar17 = *(long **)(*plVar12 + (long)unaff_x27 * 8);
        if (plVar17 == (long *)0x0) {
          func_0x00010b202444();
          if (extraout_x9_28 != 0) {
            func_0x00010b2023a0();
            lVar20 = extraout_x8_29;
            if ((bool)uVar6) {
              plVar17 = (long *)((ulong)extraout_x9_29 & extraout_x10_08);
            }
            else {
              plVar17 = extraout_x9_29;
              if (plVar19 <= extraout_x9_29) {
                func_0x00010b202420();
                lVar20 = extraout_x8_30;
                plVar17 = extraout_x9_30;
              }
            }
            *(long **)(lVar20 + (long)plVar17 * 8) = plVar23;
          }
        }
        else {
          *plVar23 = *plVar17;
          *plVar17 = (long)plVar23;
        }
        apuStack_78[0] = (undefined8 *)0x0;
        param_2[0xd] = param_2[0xd] + 1;
        FUN_10b201c58(apuStack_78);
code_r0x00010b20158c:
        plVar23 = plVar23 + 3;
        for (lVar20 = 0; lVar20 != 0x2d; lVar20 = lVar20 + 1) {
          puVar8 = (undefined8 *)0xa0;
          __Znwm();
          func_0x00010b202278();
          *puVar8 = &PTR_FUN_110cc62b8;
          puVar8[1] = 0;
          *(int *)(puVar8 + 0x12) = (int)lVar20;
          puVar8[0x13] = puVar22;
          *(undefined4 *)(puVar8 + 0x11) = 8;
          puStack_80 = puVar8;
          apuStack_78[0] = puVar8;
          func_0x000107c2805c();
          FUN_10b201d60(apuStack_78);
          apuStack_78[0] = puStack_80;
          puStack_80 = (undefined8 *)0x0;
          FUN_10b1c76a8(plVar23,apuStack_78);
          func_0x000107c29c20(apuStack_78);
          func_0x00010b202498();
          plVar23 = plVar23 + 1;
        }
      }
    }
    ppuVar21 = ppuVar21 + 2;
  } while( true );
}



/* Entry: 10b20ea9c; end: 10b20eae7;  */

void FUN_10b20ea9c(undefined8 *param_1,long param_2)

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
  func_0x00010b20fef4();
  return;
}



/* Entry: 10b20eae8; end: 10b20ebcf;  */

void FUN_10b20eae8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b209d4c(auStack_40,param_1 + 8,&uStack_50);
  FUN_10b209da8(alStack_30,auStack_40);
  FUN_10b209df4(auStack_40);
  func_0x00010b20fef4();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x68);
  if (*(char *)(alStack_30[0] + 0x30) == '\x01') {
    FUN_10b20fca4();
  }
  else {
    lVar2 = alStack_30[0];
    FUN_10b20fc7c(alStack_30[0],param_2);
    *(undefined1 *)(lVar2 + 0x30) = 1;
  }
  plVar3 = *(long **)(alStack_30[0] + 0xb0);
  *(undefined8 *)(alStack_30[0] + 0xb0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x68);
  if (plVar3 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x38);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3,alStack_30);
    func_0x00010b20ff94();
  }
  func_0x00010b20ff04();
  return;
}



/* Entry: 10b20ebd0; end: 10b20ebd3;  */

undefined8 * FUN_10b20ebd0(undefined8 *param_1)

{
  undefined **ppuStack_28;
  
  *param_1 = &PTR_FUN_110cc6af8;
  if (param_1[1] != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_10b209bc4(param_1,&ppuStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  FUN_10b209df4(param_1 + 3);
  FUN_10b209df4(param_1 + 1);
  return param_1;
}



/* Entry: 10b20ebd4; end: 10b20ec9b;  */

undefined8 *
FUN_10b20ebd4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 *param_5)

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
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 6) = param_4;
  FUN_10b20ea8c(param_1 + 7);
  FUN_10b20f218(param_1 + 0x1b);
  func_0x00010b20ffb8();
  func_0x00010b20ffac();
  func_0x00010b20fef4();
  uVar1 = *param_5;
  param_1[0x23] = param_5[1];
  param_1[0x22] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  func_0x00010b20ff38();
  return param_1;
}



/* Entry: 10b20ec9c; end: 10b20ecaf;  */

uint FUN_10b20ec9c(long param_1,ulong param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  if ((uint)param_2 < 0x2d) {
    ppuStack_28 = &PTR_DAT_110cc7408;
    param_1 = param_1 + 0x88;
    FUN_10b2020dc(param_1,&ppuStack_28);
    if (param_1 == 0) {
      FUN_10b201c8c(&PTR_DAT_110cc7408,param_2);
    }
    else {
      pbVar2 = (byte *)(param_1 + 0x18);
      FUN_10b2020c0(pbVar2,param_2 & 0xffffffff);
      func_0x000107c29b34();
      uVar1 = (uint)*pbVar2;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 10b20ecb0; end: 10b20ecf7;  */

uint FUN_10b20ecb0(undefined8 *param_1)

{
  long *plVar1;
  
  func_0x00010b20ffd8();
  plVar1 = (long *)*param_1;
  (**(code **)(*plVar1 + 0x40))();
  return (uint)plVar1 ^ 1;
}



/* Entry: 10b20ecf8; end: 10b20ed2f;  */

void FUN_10b20ecf8(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  func_0x00010b20ffd8();
  lVar1 = *(long *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b20ed30; end: 10b20ed3f;  */

uint FUN_10b20ed30(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  param_1 = param_1 + 0x38;
  ppuStack_28 = &PTR_DAT_110cc73f0;
  FUN_10b201f80(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be10(&PTR_DAT_110cc73f0);
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x18);
    func_0x000107c29b34();
    uVar1 = (uint)*pbVar2;
  }
  return uVar1 & 1;
}



/* Entry: 10b20ed40; end: 10b20ed67;  */

undefined1  [16] FUN_10b20ed40(ulong param_1)

{
  undefined1 auVar1 [16];
  
  FUN_10b20ed68();
  auVar1._0_8_ = (param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU)) * 0xe10;
  auVar1[8] = 0 < (long)param_1;
  auVar1._9_7_ = 0;
  return auVar1;
}



/* Entry: 10b20ed68; end: 10b20ed77;  */

void FUN_10b20ed68(long param_1)

{
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cc7430;
  param_1 = param_1 + 0x60;
  func_0x00010b202020(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be18(&PTR_DAT_110cc7430);
  }
  else {
    FUN_10b17f6cc();
  }
  return;
}



/* Entry: 10b20ed78; end: 10b20edef;  */

long FUN_10b20ed78(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10b2029a0();
  FUN_10b1231f8();
  lVar1 = (long)*(int *)(lVar1 + 0x30);
  FUN_10b20ed40();
  if (lVar1 <= param_1) {
    param_1 = lVar1;
  }
  if ((param_2 & 1) == 0) {
    param_1 = lVar1;
  }
  return param_1;
}



/* Entry: 10b20edf0; end: 10b20ee53;  */

long FUN_10b20edf0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  FUN_10b20ee54();
  lVar3 = lVar2 * 0xe10;
  FUN_10b20ed40();
  lVar1 = param_1;
  if (lVar3 <= param_1) {
    lVar1 = lVar3;
  }
  if (lVar2 < 1) {
    lVar1 = param_1;
  }
  if ((param_2 & 1) == 0) {
    lVar1 = lVar3;
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  return param_1 + lVar1 * 1000000;
}



/* Entry: 10b20ee54; end: 10b20ee67;  */

undefined ** FUN_10b20ee54(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuStack_28;
  
  ppuVar2 = &PTR_DAT_110cc7448;
  if ((uint)param_2 < 0x2d) {
    ppuStack_28 = &PTR_DAT_110cc7448;
    param_1 = param_1 + 0xb0;
    FUN_10b202198(param_1,&ppuStack_28);
    if (param_1 == 0) {
      FUN_10b201e70(&PTR_DAT_110cc7448,param_2);
    }
    else {
      puVar1 = (undefined8 *)(param_1 + 0x18);
      FUN_10b20217c(puVar1,param_2 & 0xffffffff);
      FUN_10b17f6cc();
      ppuVar2 = (undefined **)*puVar1;
    }
    return ppuVar2;
  }
  return (undefined **)0x0;
}



/* Entry: 10b20ee68; end: 10b20eefb;  */

void FUN_10b20ee68(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long *plStack_28;
  
  FUN_10b20eefc(auStack_38,param_2 + 0x120);
  lVar1 = *plStack_28;
  if (lVar1 == 0) {
    FUN_10b12785c(param_2 + 0x100);
    FUN_10b20afe4(auStack_48);
    func_0x00010b20ef24(plStack_28,auStack_48);
    FUN_10b1b51a8(auStack_48);
    lVar1 = *plStack_28;
  }
  lVar2 = plStack_28[1];
  *param_1 = lVar1;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c2798c(auStack_38);
  return;
}



/* Entry: 10b20eefc; end: 10b20ef87;  */

void FUN_10b20eefc(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b20ef88; end: 10b20f1b3;  */

void FUN_10b20ef88(long param_1,long **param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long **pplVar2;
  undefined8 *puVar3;
  long *plVar4;
  long **pplVar5;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plStack_d8;
  long *plStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pplVar2 = param_2;
  if (*param_2 != (long *)0x0) {
    uVar1 = param_1 + 0x100;
    FUN_10b127a84();
    if ((uVar1 & 1) == 0) {
      pplVar2 = &plStack_d8;
      FUN_10b20f1b4(pplVar2,param_1 + 0x110);
      plVar4 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        func_0x00010b210000();
        (**(code **)(extraout_x8 + 0x50))();
        (**(code **)(*plVar4 + 0xb0))(plVar4,pplVar2);
        func_0x00010b210000();
        (**(code **)(extraout_x8_00 + 0x58))(auStack_88);
        FUN_10b120f70(&lStack_78,auStack_88);
        FUN_10b0ff1ac(auStack_88);
        if (lStack_78 != 0) {
          lStack_a8 = lStack_78;
          lStack_a0 = lStack_70;
          if (lStack_70 != 0) {
            do {
              func_0x00010b20fee4();
            } while (extraout_w10 != 0);
          }
          plStack_98 = plStack_d8;
          plStack_90 = plStack_d0;
          if (plStack_d0 != (long *)0x0) {
            do {
              func_0x00010b20fee4();
            } while (extraout_w10_00 != 0);
          }
          puStack_50 = (undefined8 *)0x0;
          puVar3 = (undefined8 *)0x28;
          __Znwm();
          *puVar3 = &PTR_SUB_110cc75e8;
          puVar3[1] = lStack_78;
          lStack_a8 = 0;
          lStack_a0 = 0;
          puVar3[2] = lStack_70;
          puVar3[3] = plStack_d8;
          puVar3[4] = plStack_d0;
          plStack_98 = (long *)0x0;
          plStack_90 = (long *)0x0;
          puStack_50 = puVar3;
          (**(code **)(*plStack_d8 + 0xa8))(plStack_d8,auStack_68);
          func_0x000107c27938(auStack_68);
          func_0x00010b20f1f0(&lStack_a8);
        }
        func_0x00010b125840(&lStack_78);
      }
      func_0x00010b120fe8(&plStack_d8);
      plVar4 = *param_2;
      plStack_d0 = param_2[1];
      plStack_d8 = plVar4;
      if (plStack_d0 != (long *)0x0) {
        do {
          func_0x00010b20fee4();
        } while (extraout_w10_01 != 0);
        plVar4 = *param_2;
      }
      (**(code **)(*plVar4 + 0x18))(auStack_c8);
      (**(code **)(**param_2 + 0x10))(auStack_b8);
      pplVar2 = &plStack_d8;
      FUN_10b20eae8(param_1 + 0xd8);
      FUN_10b20f3d0();
    }
  }
  func_0x00010b20ffec(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27938(auStack_68);
    func_0x00010b20f1f0(&lStack_a8);
    func_0x00010b125840(&lStack_78);
    pplVar5 = &plStack_d8;
    func_0x00010b120fe8();
    func_0x00010b20ff30();
    *pplVar5 = (long *)0x0;
    pplVar5[1] = (long *)0x0;
    plVar4 = pplVar2[1];
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      pplVar5[1] = plVar4;
      if (plVar4 != (long *)0x0) {
        *pplVar5 = *pplVar2;
      }
    }
    return;
  }
  return;
}



/* Entry: 10b20f1b4; end: 10b20f217;  */

void FUN_10b20f1b4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10b20f218; end: 10b20f237;  */

void FUN_10b20f218(undefined8 *param_1)

{
  FUN_10b20f238();
  *param_1 = &PTR_FUN_110cc74c0;
  return;
}



/* Entry: 10b20f238; end: 10b20f287;  */

undefined8 * FUN_10b20f238(undefined8 *param_1)

{
  int extraout_w10;
  
  *param_1 = &PTR_FUN_110cc6af8;
  func_0x00010b20f29c(param_1 + 1);
  param_1[4] = param_1[2];
  param_1[3] = param_1[1];
  if (param_1[2] != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10b20f288; end: 10b20f2b7;  */

void FUN_10b20f288(void)

{
  FUN_10b209b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20f2b8; end: 10b20f33b;  */

/* WARNING: Removing unreachable block (ram,0x00010b20f3c8) */

void FUN_10b20f2b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xd0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cc74f8;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0x3cb0b1bb;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x32aaaba7;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x19] = 0;
  param_1[1] = puVar1;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 10b20f33c; end: 10b20f33f;  */

void FUN_10b20f33c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc74f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b20f340; end: 10b20f353;  */

void FUN_10b20f340(void)

{
  FUN_10b20f3b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20f354; end: 10b20f3af;  */

long FUN_10b20f354(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (lVar1 != 0) {
    func_0x00010b20ff24();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xc0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x80);
  lVar1 = param_1 + 0x50;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar1 = param_1 + 0x18;
    func_0x00010b0fe8e8(param_1 + 0x38);
    func_0x0001052a9ef8(param_1 + 0x28);
    func_0x0001003ba378();
    if (lVar1 != 0) {
      func_0x0001000df548();
    }
    return unaff_x19;
  }
  return lVar1;
}



/* Entry: 10b20f3b0; end: 10b20f3cf;  */

void FUN_10b20f3b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20f3d0; end: 10b20f3ff;  */

undefined8 FUN_10b20f3d0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b0fe8e8(param_1 + 0x20);
  func_0x0001052a9ef8(param_1 + 0x10);
  func_0x0001003ba378();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b20f400; end: 10b20f487;  */

undefined8 * FUN_10b20f400(undefined8 *param_1,undefined8 param_2)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  FUN_10b20f488(param_1);
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10 != 0);
  }
  FUN_10b20f4a4(auStack_30,param_2,&uStack_40);
  func_0x000107c27b58(auStack_30);
  FUN_10b197610(&uStack_40);
  return param_1;
}



/* Entry: 10b20f488; end: 10b20f4a3;  */

void FUN_10b20f488(void)

{
  undefined1 uStack_11;
  
  FUN_10b20f684(&uStack_11);
  return;
}



/* Entry: 10b20f4a4; end: 10b20f683;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b20f4a4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  int extraout_w10;
  long lStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long alStack_48 [5];
  
  alStack_48[3] = 0;
  alStack_48[4] = 0;
  alStack_48[1] = 0;
  alStack_48[2] = 0;
  FUN_10b209d4c(&uStack_80,param_2,alStack_48 + 1);
  FUN_10b209da8(alStack_48 + 3,&uStack_80);
  func_0x00010b20ffd0();
  FUN_10b209df4(alStack_48 + 1);
  func_0x000107c27b48(alStack_48);
  func_0x000107c27b4c(&uStack_60,alStack_48[0]);
  lStack_70 = alStack_48[0];
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  alStack_48[0] = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_a0 = alStack_48[3] + 0x68;
  uStack_98 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_48[3];
  FUN_10b20f874();
  if ((int)lVar1 == 0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
    lVar1 = lStack_70;
    *puVar2 = &PTR_FUN_110cc7598;
    puVar2[2] = uStack_78;
    puVar2[1] = uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    lStack_70 = 0;
    puVar2[3] = lVar1;
    plVar3 = *(long **)(alStack_48[3] + 0xb0);
    *(undefined8 **)(alStack_48[3] + 0xb0) = puVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  else {
    FUN_10b209da8(&lStack_90,alStack_48 + 3);
  }
  func_0x000107c2798c(&lStack_a0);
  if (lStack_90 != 0) {
    if (lStack_88 != 0) {
      do {
        func_0x00010b20fee4();
      } while (extraout_w10 != 0);
    }
    FUN_10b20f8c0(&uStack_80);
    func_0x00010b20fef4();
  }
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010b20ff04();
  func_0x00010b20fd08(&uStack_80);
  func_0x000107c27b58(&uStack_60);
  lVar1 = alStack_48[0];
  alStack_48[0] = 0;
  if (lVar1 != 0) {
    func_0x00010b20ff24();
  }
  FUN_10b209df4(alStack_48 + 3);
  return;
}



/* Entry: 10b20f684; end: 10b20f703;  */

undefined1 * FUN_10b20f684(long *param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_10b20f704(auStack_40);
  FUN_10b20f75c(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b20f864();
  func_0x00010b20ffec(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b20f864();
  func_0x00010b20ff30();
  *(undefined8 *)(puVar3 + 8) = uVar4;
  puVar2 = puVar3;
  FUN_10b20f72c();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10b20f704; end: 10b20f72b;  */

long FUN_10b20f704(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b20f72c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b20f72c; end: 10b20f75b;  */

undefined8 * FUN_10b20f72c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1745d1745d1745e) {
    puVar1 = (undefined8 *)(param_2 * 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc7548;
  FUN_10b20f808(param_1 + 3);
  return param_1;
}



/* Entry: 10b20f75c; end: 10b20f79b;  */

undefined8 * FUN_10b20f75c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc7548;
  FUN_10b20f808(param_1 + 3);
  return param_1;
}



/* Entry: 10b20f79c; end: 10b20f79f;  */

void FUN_10b20f79c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7548;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b20f7a0; end: 10b20f7b3;  */

void FUN_10b20f7a0(void)

{
  FUN_10b20f854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20f7b4; end: 10b20f803;  */

void FUN_10b20f7b4(long param_1)

{
  func_0x000107c281bc(param_1 + 0x98);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if (*(char *)(param_1 + 0x88) == '\x01') {
      FUN_10b20f3d0();
    }
    else {
      __ZNSt13exception_ptrD1Ev(param_1 + 0x58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b20f804; end: 10b20f807;  */

void FUN_10b20f804(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20f808; end: 10b20f82f;  */

void FUN_10b20f808(long param_1)

{
  _bzero(param_1,0x98);
  __ZNSt3__115recursive_mutexC1Ev();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 10b20f830; end: 10b20f853;  */

void FUN_10b20f830(long param_1)

{
  __ZNSt3__115recursive_mutexC1Ev();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 10b20f854; end: 10b20f873;  */

void FUN_10b20f854(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7548;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b20f874; end: 10b20f8bf;  */

bool FUN_10b20f874(long param_1)

{
  bool bVar1;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    uStack_28 = 0;
    bVar1 = *(long *)(param_1 + 0xa8) != 0;
    __ZNSt13exception_ptrD1Ev(&uStack_28);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b20f8c0; end: 10b20fbdf;  */

void FUN_10b20f8c0(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [8];
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b20fee4();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = *param_1;
  uStack_e0 = param_2;
  lStack_d8 = param_3;
  __ZNSt3__115recursive_mutex4lockEv(lVar4);
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_10b209d4c(&lStack_60,&uStack_e0,&uStack_70);
  FUN_10b209da8(&uStack_50,&lStack_60);
  FUN_10b209df4(&lStack_60);
  FUN_10b209df4(&uStack_70);
  lStack_60 = uStack_50 + 0x68;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  uVar1 = uStack_50;
  uStack_80 = uStack_50;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10_01 != 0);
  }
  while (uVar3 = uVar1, FUN_10b20f874(), (uVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uVar1 + 0x38,&lStack_60);
  }
  FUN_10b209df4(&uStack_80);
  if (*(long *)(uStack_50 + 0xa8) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88,(long *)(uStack_50 + 0xa8));
    __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b20faa4);
    (*pcVar2)();
  }
  FUN_10b20fc7c(auStack_b8);
  func_0x000107c2798c(&lStack_60);
  FUN_10b209df4(&uStack_50);
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x78) == '\x01') {
    if (*(char *)(lVar5 + 0x70) == '\x01') {
      func_0x00010b20ff80();
      FUN_10b20fca4();
    }
    else {
      __ZNSt13exception_ptrD1Ev(lVar5 + 0x40);
      func_0x00010b20ff80();
      FUN_10b20fc7c();
      *(undefined1 *)(lVar5 + 0x70) = 1;
    }
  }
  else {
    func_0x00010b20ff80();
    FUN_10b20fc7c();
    *(undefined1 *)(lVar5 + 0x70) = 1;
    *(undefined1 *)(lVar5 + 0x78) = 1;
  }
  FUN_10b20f3d0(auStack_b8);
  lVar5 = *param_1;
  puVar6 = *(undefined8 **)(lVar5 + 0x80);
  uStack_c0 = *(undefined8 *)(lVar5 + 0x90);
  puVar7 = *(undefined8 **)(lVar5 + 0x88);
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  puStack_d0 = puVar6;
  puStack_c8 = puVar7;
  __ZNSt3__115recursive_mutex6unlockEv(lVar4);
  for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
    (**(code **)*puVar6)();
  }
  func_0x000107c281bc(&puStack_d0);
  func_0x00010b20ffd0();
  func_0x00010b20ff04();
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b20fbe0; end: 10b20fbe3;  */

undefined8 * FUN_10b20fbe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7598;
  func_0x00010b20fd08(param_1 + 1);
  return param_1;
}



/* Entry: 10b20fbe4; end: 10b20fbf7;  */

void FUN_10b20fbe4(void)

{
  FUN_10b20fc50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20fbf8; end: 10b20fc4f;  */

void FUN_10b20fbf8(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10 != 0);
  }
  FUN_10b20f8c0(param_1 + 8);
  func_0x00010b20fef4();
  return;
}



/* Entry: 10b20fc50; end: 10b20fc7b;  */

undefined8 * FUN_10b20fc50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc7598;
  func_0x00010b20fd08(param_1 + 1);
  return param_1;
}



/* Entry: 10b20fc7c; end: 10b20fca3;  */

void FUN_10b20fc7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



/* Entry: 10b20fca4; end: 10b20fd5b;  */

long FUN_10b20fca4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b20ff64();
  func_0x000107c2bdf4();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x0001052a9ef8(&uStack_30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x00010b0fe8e8(&uStack_30);
  return param_1;
}



/* Entry: 10b20fd5c; end: 10b20fd6f;  */

void FUN_10b20fd5c(void)

{
  func_0x00010b20fd30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20fd70; end: 10b20fd97;  */

void FUN_10b20fd70(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_SUB_110cc75e8;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10b20fd98; end: 10b20fdc3;  */

void FUN_10b20fd98(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_110cc75e8;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b20fee4();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10b20fdc4; end: 10b20fe47;  */

void FUN_10b20fdc4(long param_1)

{
  long *plVar1;
  int extraout_w10;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  FUN_10b20f1b4(&lStack_30,param_1 + 0x18);
  if (lStack_30 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    lStack_40 = lStack_30;
    lStack_38 = lStack_28;
    if (lStack_28 != 0) {
      do {
        func_0x00010b20fee4();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x20))();
    func_0x0001052a1398(&lStack_40);
  }
  func_0x00010b120fe8(&lStack_30);
  return;
}



/* Entry: 10b20fe48; end: 10b20fe7f;  */

long FUN_10b20fe48(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110cc7648);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b20fe80; end: 10b21000b;  */

undefined ** FUN_10b20fe80(void)

{
  return &PTR_DAT_110cc7648;
}



/* Entry: 10b21000c; end: 10b210167;  */

void FUN_10b21000c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  code *pcVar3;
  code **ppcVar4;
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 *puVar5;
  long *plVar6;
  long alStack_108 [2];
  undefined8 uStack_f8;
  long alStack_f0 [5];
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  
  func_0x00010b2111ac();
  ppcVar4 = (code **)(extraout_x8 + 8);
  uStack_68 = extraout_x9;
  FUN_10b210168(alStack_108);
  lVar2 = alStack_108[0];
  if (alStack_108[0] != 0) {
    __ZNSt3__15mutex4lockEv(alStack_108[0] + 0x70);
    if ((*(byte *)(alStack_108[0] + 0x30) & 1) == 0) {
      *(undefined1 *)(alStack_108[0] + 0x30) = 1;
      puVar1 = *(undefined8 **)(alStack_108[0] + 0x40);
      for (puVar5 = *(undefined8 **)(alStack_108[0] + 0x38); in_ZR = puVar5 == puVar1, !(bool)in_ZR;
          puVar5 = puVar5 + 6) {
        plVar6 = *(long **)(alStack_108[0] + 0x10);
        uStack_f8 = *puVar5;
        (**(code **)(puVar5[1] + 0x10))(alStack_f0,puVar5 + 1);
        pcStack_c8 = FUN_10b210dcc;
        ppuStack_c0 = &PTR_DAT_110cc76a0;
        uStack_b8 = uStack_f8;
        (**(code **)(alStack_f0[0] + 0x10))(auStack_b0,alStack_f0);
        ppcVar4 = &pcStack_c8;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x00010b21111c();
        func_0x00010b21110c();
      }
      FUN_10b12b770(alStack_108[0] + 0x38);
    }
    __ZNSt3__15mutex6unlockEv(lVar2 + 0x70);
  }
  FUN_10b12b860();
  func_0x00010b211084(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar6 = alStack_108;
  FUN_10b12b860();
  func_0x00010b2110bc();
  *plVar6 = 0;
  plVar6[1] = 0;
  pcVar3 = ppcVar4[1];
  if (pcVar3 != (code *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar6[1] = (long)pcVar3;
    if (pcVar3 != (code *)0x0) {
      *plVar6 = (long)*ppcVar4;
    }
  }
  return;
}



/* Entry: 10b210168; end: 10b2101a3;  */

void FUN_10b210168(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10b2101a4; end: 10b2103fb;  */

undefined8 ** FUN_10b2101a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 **ppuVar2;
  long *plVar3;
  undefined8 **ppuVar4;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar5;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar6;
  undefined8 extraout_x9;
  undefined8 *puVar7;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_58;
  
  func_0x00010b2111ac();
  uStack_58 = extraout_x9;
  FUN_10b210168(&puStack_d0,extraout_x8 + 8);
  if (puStack_d0 != (undefined8 *)0x0) {
    FUN_10b12b510(&uStack_c0,1);
    puStack_b0[2] = 0;
    *puStack_b0 = &PTR_FUN_110cbd780;
    puStack_b0[1] = 0;
    FUN_10b121fd0(puStack_b0 + 3,param_2);
    puStack_d8 = puStack_b0;
    puStack_b0 = (undefined8 *)0x0;
    puStack_e0 = puStack_d8 + 3;
    FUN_10b12b5b0(&uStack_c0);
    puVar1 = puStack_d0;
    __ZNSt3__15mutex4lockEv(puStack_d0 + 0xe);
    if ((*(byte *)(puStack_d0 + 6) & 1) == 0) {
      puVar5 = puStack_d0;
      puVar9 = puStack_e0;
      puVar6 = puStack_d8;
      if (puStack_d8 != (undefined8 *)0x0) {
        do {
          func_0x00010b21112c();
          puVar5 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      ppuStack_b8 = (undefined **)puVar5[5];
      uStack_c0 = puVar5[4];
      puVar5[5] = puVar6;
      puVar5[4] = puVar9;
      FUN_10b12b58c(&uStack_c0);
      puVar9 = (undefined8 *)puStack_d0[0xc];
      for (puVar5 = (undefined8 *)puStack_d0[0xb]; in_ZR = puVar5 == puVar9, !(bool)in_ZR;
          puVar5 = puVar5 + 1) {
        if (*(int *)(puStack_d0 + 10) == 5 || *(int *)(puStack_d0 + 10) == 3) {
          (**(code **)*puVar5)(puStack_e0);
        }
        else {
          plVar3 = (long *)puStack_d0[2];
          puStack_108 = puStack_d0;
          lStack_100 = lStack_c8;
          puVar6 = puStack_d0;
          if (lStack_c8 != 0) {
            do {
              func_0x00010b21112c();
              puVar6 = extraout_x8_01;
            } while (extraout_w11_00 != 0);
          }
          uStack_f8 = *puVar5;
          puStack_e8 = puStack_d8;
          puStack_f0 = puStack_e0;
          puVar7 = puStack_d8;
          puVar8 = puStack_e0;
          if (puStack_d8 != (undefined8 *)0x0) {
            do {
              func_0x00010b21112c();
              puVar6 = extraout_x8_02;
              puVar7 = puStack_e8;
              puVar8 = puStack_f0;
            } while (extraout_w11_01 != 0);
          }
          uStack_c0 = 0x10b210de8;
          ppuStack_b8 = &PTR_DAT_110cc76b8;
          lStack_a8 = lStack_100;
          puStack_108 = (undefined8 *)0x0;
          lStack_100 = 0;
          puStack_f0 = (undefined8 *)0x0;
          puStack_e8 = (undefined8 *)0x0;
          puStack_b0 = puVar6;
          uStack_a0 = uStack_f8;
          puStack_98 = puVar8;
          puStack_90 = puVar7;
          (**(code **)(*plVar3 + 0x10))();
          func_0x00010b21117c(ppuStack_b8);
          FUN_10b2103fc(&puStack_108);
        }
      }
    }
    __ZNSt3__15mutex6unlockEv(puVar1 + 0xe);
    FUN_10b12b58c(&puStack_e0);
  }
  ppuVar2 = &puStack_d0;
  FUN_10b12b860();
  func_0x00010b211084(uStack_58);
  if ((bool)in_ZR) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  FUN_10b12b58c(&puStack_e0);
  ppuVar4 = &puStack_d0;
  FUN_10b12b860();
  func_0x00010b2110bc();
  FUN_10b12b58c(ppuVar4 + 3);
  func_0x000107c350ac();
  if (ppuVar4 != (undefined8 **)0x0) {
    func_0x000107c278a0();
  }
  return ppuVar2;
}



/* Entry: 10b2103fc; end: 10b210423;  */

undefined8 FUN_10b2103fc(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b12b58c(param_1 + 0x18);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b210424; end: 10b210483;  */

void FUN_10b210424(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b210e2c(auStack_40,param_2);
  FUN_10b210484(&uStack_30,auStack_40);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10b210fb8(&uStack_30);
  FUN_10b12b860(auStack_40);
  return;
}



/* Entry: 10b210484; end: 10b2104a7;  */

void FUN_10b210484(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b210e68(&uStack_11,param_1);
  return;
}


