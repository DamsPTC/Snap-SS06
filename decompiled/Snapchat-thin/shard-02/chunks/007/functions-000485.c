/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020d7668; end: 1020d76ab;  */

void FUN_1020d7668(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1020d76ac; end: 1020d7773;  */

long * FUN_1020d76ac(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar6;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    lVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar2;
    *(char *)(param_1 + 6) = (char)param_2[6];
    iVar4 = *(int *)(param_3 + 0x14);
    lVar5 = 0;
    func_0x000107c5f340();
    pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
    func_0x000107c61434(lVar6);
    func_0x000107c61434(lVar1);
    func_0x000107c61434(lVar2);
    (*pcVar8)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar5);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020d7774; end: 1020d77c7;  */

void FUN_1020d7774(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000107c5f340();
                    /* WARNING: Could not recover jumptable at 0x0001020d77c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 1020d77c8; end: 1020d7863;  */

undefined8 * FUN_1020d77c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  iVar4 = *(int *)(param_3 + 0x14);
  lVar5 = 0;
  func_0x000107c5f340();
  pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  (*pcVar6)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar5);
  return param_1;
}



/* Entry: 1020d7864; end: 1020d7a13;  */

undefined8 * FUN_1020d7864(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  param_1[4] = param_2[4];
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5f340();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 1020d7a14; end: 1020d7a2b;  */

void FUN_1020d7a14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020d7a2c; end: 1020d7a63;  */

void FUN_1020d7a2c(undefined8 param_1)

{
  if (lRam0000000112e57940 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6af060);
  return;
}



/* Entry: 1020d7a64; end: 1020d7ad7;  */

void FUN_1020d7a64(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10da5af38;
  lVar1 = 0x13f;
  func_0x000107c5f340();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020d7ad8; end: 1020d7ae7;  */

void FUN_1020d7ad8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6af088,1);
  return;
}



/* Entry: 1020d7ae8; end: 1020d84ef;  */

void FUN_1020d7ae8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined7 uStack_a08;
  undefined1 uStack_a01;
  undefined7 uStack_a00;
  undefined1 uStack_9f9;
  undefined7 uStack_9f8;
  undefined1 uStack_9f1;
  undefined7 uStack_9f0;
  undefined1 uStack_9e9;
  undefined7 uStack_9e8;
  undefined1 uStack_9e1;
  undefined7 uStack_9e0;
  undefined1 uStack_9d9;
  undefined7 uStack_9d8;
  undefined1 uStack_9d1;
  undefined7 uStack_9d0;
  undefined1 uStack_9c9;
  undefined7 uStack_9c8;
  undefined1 uStack_9c1;
  undefined7 uStack_9c0;
  undefined1 uStack_9b9;
  undefined7 uStack_9b8;
  undefined1 uStack_9b1;
  undefined7 uStack_9b0;
  undefined1 uStack_9a9;
  undefined7 uStack_9a8;
  undefined1 uStack_9a1;
  undefined7 uStack_9a0;
  undefined1 uStack_999;
  undefined7 uStack_998;
  undefined1 uStack_991;
  undefined7 uStack_990;
  undefined1 uStack_989;
  undefined7 uStack_988;
  undefined1 uStack_981;
  undefined7 uStack_980;
  undefined1 uStack_979;
  undefined7 uStack_978;
  undefined1 uStack_971;
  undefined7 uStack_970;
  undefined1 uStack_969;
  undefined7 uStack_968;
  undefined1 uStack_961;
  undefined7 uStack_960;
  undefined1 uStack_959;
  undefined7 uStack_958;
  undefined1 uStack_951;
  undefined7 uStack_950;
  undefined1 uStack_949;
  undefined7 uStack_948;
  undefined1 uStack_941;
  undefined7 uStack_940;
  undefined1 uStack_939;
  undefined7 uStack_938;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined *puStack_818;
  undefined8 uStack_810;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined1 uStack_650;
  undefined7 uStack_64f;
  undefined1 uStack_648;
  undefined7 uStack_647;
  undefined1 uStack_640;
  undefined7 uStack_63f;
  undefined1 uStack_638;
  undefined7 uStack_637;
  undefined1 uStack_630;
  undefined7 uStack_62f;
  undefined1 uStack_628;
  undefined7 uStack_627;
  undefined1 uStack_620;
  undefined7 uStack_61f;
  undefined1 uStack_618;
  undefined7 uStack_617;
  undefined1 uStack_610;
  undefined7 uStack_60f;
  undefined1 uStack_608;
  undefined7 uStack_607;
  undefined1 uStack_600;
  undefined7 uStack_5ff;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 uStack_5ef;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined1 uStack_5e0;
  undefined7 uStack_5df;
  undefined1 uStack_5d8;
  undefined7 uStack_5d7;
  undefined1 uStack_5d0;
  undefined7 uStack_5cf;
  undefined1 uStack_5c8;
  undefined7 uStack_5c7;
  undefined1 uStack_5c0;
  undefined7 uStack_5bf;
  undefined1 uStack_5b8;
  undefined7 uStack_5b7;
  undefined1 uStack_5b0;
  undefined7 uStack_5af;
  undefined1 uStack_5a8;
  undefined7 uStack_5a7;
  undefined1 uStack_5a0;
  undefined7 uStack_59f;
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined1 uStack_590;
  undefined7 uStack_58f;
  undefined1 uStack_588;
  undefined7 uStack_587;
  undefined1 uStack_580;
  undefined7 uStack_57f;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 uStack_568;
  undefined8 uStack_567;
  undefined8 uStack_55f;
  undefined8 uStack_557;
  undefined8 uStack_54f;
  undefined8 uStack_547;
  undefined8 uStack_53f;
  undefined8 uStack_537;
  undefined8 uStack_52f;
  undefined8 uStack_527;
  undefined8 uStack_51f;
  undefined8 uStack_517;
  undefined8 uStack_50f;
  undefined8 uStack_507;
  undefined8 uStack_4ff;
  undefined8 uStack_4f7;
  undefined8 uStack_4ef;
  undefined8 uStack_4e7;
  undefined8 uStack_4df;
  undefined8 uStack_4d7;
  undefined8 uStack_4cf;
  undefined8 uStack_4c7;
  undefined8 uStack_4bf;
  undefined8 uStack_4b7;
  undefined8 uStack_4af;
  undefined8 uStack_4a7;
  undefined7 uStack_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
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
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  func_0x000107c5f410();
  func_0x0001020d7ff0(&uStack_180);
  uStack_758 = uStack_d8;
  uStack_760 = uStack_e0;
  uStack_748 = uStack_c8;
  uStack_750 = uStack_d0;
  uStack_798 = uStack_118;
  uStack_7a0 = uStack_120;
  uStack_788 = uStack_108;
  uStack_790 = uStack_110;
  uStack_778 = uStack_f8;
  uStack_780 = uStack_100;
  uStack_768 = uStack_e8;
  uStack_770 = uStack_f0;
  uStack_7d8 = uStack_158;
  uStack_7e0 = uStack_160;
  uStack_7c8 = uStack_148;
  uStack_7d0 = uStack_150;
  uStack_7b8 = uStack_138;
  uStack_7c0 = uStack_140;
  uStack_7a8 = uStack_128;
  uStack_7b0 = uStack_130;
  uStack_7f8 = uStack_178;
  uStack_800 = uStack_180;
  uStack_7e8 = uStack_168;
  uStack_7f0 = uStack_170;
  uStack_698 = uStack_e8;
  uStack_6a0 = uStack_f0;
  uStack_688 = uStack_d8;
  uStack_690 = uStack_e0;
  uStack_678 = uStack_c8;
  uStack_680 = uStack_d0;
  uStack_668 = uStack_b8;
  uStack_670 = uStack_c0;
  uStack_6d8 = uStack_128;
  uStack_6e0 = uStack_130;
  uStack_6c8 = uStack_118;
  uStack_6d0 = uStack_120;
  uStack_6b8 = uStack_108;
  uStack_6c0 = uStack_110;
  uStack_6a8 = uStack_f8;
  uStack_6b0 = uStack_100;
  uStack_718 = uStack_168;
  uStack_720 = uStack_170;
  uStack_708 = uStack_158;
  uStack_710 = uStack_160;
  uStack_6f8 = uStack_148;
  uStack_700 = uStack_150;
  uStack_6e8 = uStack_138;
  uStack_6f0 = uStack_140;
  uStack_738 = uStack_b8;
  uStack_740 = uStack_c0;
  uStack_728 = uStack_178;
  uStack_730 = uStack_180;
  FUN_1020d8504(&uStack_800,&uStack_290,0x112e57978,&UNK_10da5afa0);
  func_0x0001020d854c(&uStack_730,0x112e57978,&UNK_10da5afa0);
  uStack_969 = (undefined1)uStack_768;
  uStack_968 = (undefined7)((ulong)uStack_768 >> 8);
  uStack_971 = (undefined1)uStack_770;
  uStack_970 = (undefined7)((ulong)uStack_770 >> 8);
  uStack_959 = (undefined1)uStack_758;
  uStack_958 = (undefined7)((ulong)uStack_758 >> 8);
  uStack_961 = (undefined1)uStack_760;
  uStack_960 = (undefined7)((ulong)uStack_760 >> 8);
  uStack_949 = (undefined1)uStack_748;
  uStack_948 = (undefined7)((ulong)uStack_748 >> 8);
  uStack_951 = (undefined1)uStack_750;
  uStack_950 = (undefined7)((ulong)uStack_750 >> 8);
  uStack_939 = (undefined1)uStack_738;
  uStack_938 = (undefined7)((ulong)uStack_738 >> 8);
  uStack_941 = (undefined1)uStack_740;
  uStack_940 = (undefined7)((ulong)uStack_740 >> 8);
  uStack_9a9 = (undefined1)uStack_7a8;
  uStack_9a8 = (undefined7)((ulong)uStack_7a8 >> 8);
  uStack_9b1 = (undefined1)uStack_7b0;
  uStack_9b0 = (undefined7)((ulong)uStack_7b0 >> 8);
  uStack_999 = (undefined1)uStack_798;
  uStack_998 = (undefined7)((ulong)uStack_798 >> 8);
  uStack_9a1 = (undefined1)uStack_7a0;
  uStack_9a0 = (undefined7)((ulong)uStack_7a0 >> 8);
  uStack_989 = (undefined1)uStack_788;
  uStack_988 = (undefined7)((ulong)uStack_788 >> 8);
  uStack_991 = (undefined1)uStack_790;
  uStack_990 = (undefined7)((ulong)uStack_790 >> 8);
  uStack_979 = (undefined1)uStack_778;
  uStack_978 = (undefined7)((ulong)uStack_778 >> 8);
  uStack_981 = (undefined1)uStack_780;
  uStack_980 = (undefined7)((ulong)uStack_780 >> 8);
  uStack_9e9 = (undefined1)uStack_7e8;
  uStack_9e8 = (undefined7)((ulong)uStack_7e8 >> 8);
  uStack_9f1 = (undefined1)uStack_7f0;
  uStack_9f0 = (undefined7)((ulong)uStack_7f0 >> 8);
  uStack_9d9 = (undefined1)uStack_7d8;
  uStack_9d8 = (undefined7)((ulong)uStack_7d8 >> 8);
  uStack_9e1 = (undefined1)uStack_7e0;
  uStack_9e0 = (undefined7)((ulong)uStack_7e0 >> 8);
  uStack_9c9 = (undefined1)uStack_7c8;
  uStack_9c8 = (undefined7)((ulong)uStack_7c8 >> 8);
  uStack_9d1 = (undefined1)uStack_7d0;
  uStack_9d0 = (undefined7)((ulong)uStack_7d0 >> 8);
  uStack_9b9 = (undefined1)uStack_7b8;
  uStack_9b8 = (undefined7)((ulong)uStack_7b8 >> 8);
  uStack_9c1 = (undefined1)uStack_7c0;
  uStack_9c0 = (undefined7)((ulong)uStack_7c0 >> 8);
  uStack_9f9 = (undefined1)uStack_7f8;
  uStack_9f8 = (undefined7)((ulong)uStack_7f8 >> 8);
  uStack_a01 = (undefined1)uStack_800;
  uStack_a00 = (undefined7)((ulong)uStack_800 >> 8);
  lVar1 = 0;
  FUN_1020d7a2c();
  uVar2 = 0x17;
  func_0x0001026ff8a8(0x4036000000000000,0x17,unaff_x20 + *(int *)(lVar1 + 0x14));
  uStack_5a7 = uStack_960;
  uStack_5a0 = uStack_959;
  uStack_5af = uStack_968;
  uStack_5a8 = uStack_961;
  uStack_597 = uStack_950;
  uStack_590 = uStack_949;
  uStack_59f = uStack_958;
  uStack_598 = uStack_951;
  uStack_587 = uStack_940;
  uStack_58f = uStack_948;
  uStack_588 = uStack_941;
  uStack_5e7 = uStack_9a0;
  uStack_5e0 = uStack_999;
  uStack_5ef = uStack_9a8;
  uStack_5e8 = uStack_9a1;
  uStack_5d7 = uStack_990;
  uStack_5d0 = uStack_989;
  uStack_5df = uStack_998;
  uStack_5d8 = uStack_991;
  uStack_5c7 = uStack_980;
  uStack_5c0 = uStack_979;
  uStack_5cf = uStack_988;
  uStack_5c8 = uStack_981;
  uStack_5b7 = uStack_970;
  uStack_5b0 = uStack_969;
  uStack_5bf = uStack_978;
  uStack_5b8 = uStack_971;
  uStack_627 = uStack_9e0;
  uStack_620 = uStack_9d9;
  uStack_62f = uStack_9e8;
  uStack_628 = uStack_9e1;
  uStack_617 = uStack_9d0;
  uStack_610 = uStack_9c9;
  uStack_61f = uStack_9d8;
  uStack_618 = uStack_9d1;
  uStack_607 = uStack_9c0;
  uStack_600 = uStack_9b9;
  uStack_60f = uStack_9c8;
  uStack_608 = uStack_9c1;
  uStack_5f7 = uStack_9b0;
  uStack_5f0 = uStack_9a9;
  uStack_5ff = uStack_9b8;
  uStack_5f8 = uStack_9b1;
  uStack_647 = uStack_a00;
  uStack_640 = uStack_9f9;
  uStack_64f = uStack_a08;
  uStack_648 = uStack_a01;
  uStack_658 = 0;
  uStack_650 = 0;
  uStack_580 = uStack_939;
  uStack_57f = uStack_938;
  uStack_637 = uStack_9f0;
  uStack_630 = uStack_9e9;
  uStack_63f = uStack_9f8;
  uStack_638 = uStack_9f1;
  puVar3 = &UNK_10da5afa8;
  uStack_660 = param_2;
  func_0x000107c614e0();
  uStack_1c8 = CONCAT71(uStack_597,uStack_598);
  uStack_1d0 = CONCAT71(uStack_59f,uStack_5a0);
  uStack_1b8 = CONCAT71(uStack_587,uStack_588);
  uStack_1c0 = CONCAT71(uStack_58f,uStack_590);
  uStack_208 = CONCAT71(uStack_5d7,uStack_5d8);
  uStack_210 = CONCAT71(uStack_5df,uStack_5e0);
  uStack_1f8 = CONCAT71(uStack_5c7,uStack_5c8);
  uStack_200 = CONCAT71(uStack_5cf,uStack_5d0);
  uStack_1e8 = CONCAT71(uStack_5b7,uStack_5b8);
  uStack_1f0 = CONCAT71(uStack_5bf,uStack_5c0);
  uStack_1d8 = CONCAT71(uStack_5a7,uStack_5a8);
  uStack_1e0 = CONCAT71(uStack_5af,uStack_5b0);
  uStack_248 = CONCAT71(uStack_617,uStack_618);
  uStack_250 = CONCAT71(uStack_61f,uStack_620);
  uStack_238 = CONCAT71(uStack_607,uStack_608);
  uStack_240 = CONCAT71(uStack_60f,uStack_610);
  uStack_228 = CONCAT71(uStack_5f7,uStack_5f8);
  uStack_230 = CONCAT71(uStack_5ff,uStack_600);
  uStack_218 = CONCAT71(uStack_5e7,uStack_5e8);
  uStack_220 = CONCAT71(uStack_5ef,uStack_5f0);
  uStack_278 = CONCAT71(uStack_647,uStack_648);
  uStack_280 = CONCAT71(uStack_64f,uStack_650);
  uStack_288 = uStack_658;
  uStack_290 = uStack_660;
  uStack_268 = CONCAT71(uStack_637,uStack_638);
  uStack_270 = CONCAT71(uStack_63f,uStack_640);
  uStack_258 = CONCAT71(uStack_627,uStack_628);
  uStack_260 = CONCAT71(uStack_62f,uStack_630);
  uStack_4bf = CONCAT17(uStack_959,uStack_960);
  uStack_4c7 = CONCAT17(uStack_961,uStack_968);
  uStack_4af = CONCAT17(uStack_949,uStack_950);
  uStack_4b7 = CONCAT17(uStack_951,uStack_958);
  uStack_4a7 = CONCAT17(uStack_941,uStack_948);
  uStack_49f = uStack_940;
  uStack_4ff = CONCAT17(uStack_999,uStack_9a0);
  uStack_507 = CONCAT17(uStack_9a1,uStack_9a8);
  uStack_4ef = CONCAT17(uStack_989,uStack_990);
  uStack_4f7 = CONCAT17(uStack_991,uStack_998);
  uStack_4df = CONCAT17(uStack_979,uStack_980);
  uStack_4e7 = CONCAT17(uStack_981,uStack_988);
  uStack_4cf = CONCAT17(uStack_969,uStack_970);
  uStack_4d7 = CONCAT17(uStack_971,uStack_978);
  uStack_53f = CONCAT17(uStack_9d9,uStack_9e0);
  uStack_547 = CONCAT17(uStack_9e1,uStack_9e8);
  uStack_52f = CONCAT17(uStack_9c9,uStack_9d0);
  uStack_537 = CONCAT17(uStack_9d1,uStack_9d8);
  uStack_51f = CONCAT17(uStack_9b9,uStack_9c0);
  uStack_527 = CONCAT17(uStack_9c1,uStack_9c8);
  uStack_50f = CONCAT17(uStack_9a9,uStack_9b0);
  uStack_517 = CONCAT17(uStack_9b1,uStack_9b8);
  uStack_55f = CONCAT17(uStack_9f9,uStack_a00);
  uStack_567 = CONCAT17(uStack_a01,uStack_a08);
  uStack_54f = CONCAT17(uStack_9e9,uStack_9f0);
  uStack_557 = CONCAT17(uStack_9f1,uStack_9f8);
  uStack_1b0 = CONCAT71(uStack_57f,uStack_580);
  uStack_570 = 0;
  uStack_568 = 0;
  uStack_498 = uStack_939;
  uStack_497 = uStack_938;
  uStack_578 = param_2;
  FUN_1020d8504(&uStack_660,&uStack_180,0x112e57980,&UNK_10da5afd8);
  func_0x0001020d854c(&uStack_578,0x112e57980,&UNK_10da5afd8);
  uVar4 = 0xbf;
  func_0x0001026ff7d0();
  uStack_3c8 = uStack_1c8;
  uStack_3d0 = uStack_1d0;
  uStack_3b8 = uStack_1b8;
  uStack_3c0 = uStack_1c0;
  uStack_408 = uStack_208;
  uStack_410 = uStack_210;
  uStack_3f8 = uStack_1f8;
  uStack_400 = uStack_200;
  uStack_3e8 = uStack_1e8;
  uStack_3f0 = uStack_1f0;
  uStack_3d8 = uStack_1d8;
  uStack_3e0 = uStack_1e0;
  uStack_448 = uStack_248;
  uStack_450 = uStack_250;
  uStack_438 = uStack_238;
  uStack_440 = uStack_240;
  uStack_428 = uStack_228;
  uStack_430 = uStack_230;
  uStack_418 = uStack_218;
  uStack_420 = uStack_220;
  uStack_488 = uStack_288;
  uStack_490 = uStack_290;
  uStack_478 = uStack_278;
  uStack_480 = uStack_280;
  uStack_468 = uStack_268;
  uStack_470 = uStack_270;
  uStack_458 = uStack_258;
  uStack_460 = uStack_260;
  uStack_3b0 = uStack_1b0;
  puVar5 = &UNK_10da5afe0;
  puStack_3a8 = puVar3;
  uStack_3a0 = uVar2;
  func_0x000107c614e0();
  uStack_838 = uStack_3c8;
  uStack_840 = uStack_3d0;
  uStack_828 = uStack_3b8;
  uStack_830 = uStack_3c0;
  puStack_818 = puStack_3a8;
  uStack_820 = uStack_3b0;
  uStack_810 = uStack_3a0;
  uStack_878 = uStack_408;
  uStack_880 = uStack_410;
  uStack_868 = uStack_3f8;
  uStack_870 = uStack_400;
  uStack_858 = uStack_3e8;
  uStack_860 = uStack_3f0;
  uStack_848 = uStack_3d8;
  uStack_850 = uStack_3e0;
  uStack_8b8 = uStack_448;
  uStack_8c0 = uStack_450;
  uStack_8a8 = uStack_438;
  uStack_8b0 = uStack_440;
  uStack_898 = uStack_428;
  uStack_8a0 = uStack_430;
  uStack_888 = uStack_418;
  uStack_890 = uStack_420;
  uStack_8f8 = uStack_488;
  uStack_900 = uStack_490;
  uStack_8e8 = uStack_478;
  uStack_8f0 = uStack_480;
  uStack_8d8 = uStack_468;
  uStack_8e0 = uStack_470;
  uStack_8c8 = uStack_458;
  uStack_8d0 = uStack_460;
  uStack_2c8 = uStack_1c8;
  uStack_2d0 = uStack_1d0;
  uStack_2b8 = uStack_1b8;
  uStack_2c0 = uStack_1c0;
  uStack_308 = uStack_208;
  uStack_310 = uStack_210;
  uStack_2f8 = uStack_1f8;
  uStack_300 = uStack_200;
  uStack_2e8 = uStack_1e8;
  uStack_2f0 = uStack_1f0;
  uStack_2d8 = uStack_1d8;
  uStack_2e0 = uStack_1e0;
  uStack_348 = uStack_248;
  uStack_350 = uStack_250;
  uStack_338 = uStack_238;
  uStack_340 = uStack_240;
  uStack_328 = uStack_228;
  uStack_330 = uStack_230;
  uStack_318 = uStack_218;
  uStack_320 = uStack_220;
  uStack_388 = uStack_288;
  uStack_390 = uStack_290;
  uStack_378 = uStack_278;
  uStack_380 = uStack_280;
  uStack_368 = uStack_268;
  uStack_370 = uStack_270;
  uStack_358 = uStack_258;
  uStack_360 = uStack_260;
  uStack_2b0 = uStack_1b0;
  puStack_2a8 = puVar3;
  uStack_2a0 = uVar2;
  FUN_1020d8504(&uStack_490,&uStack_180,0x112e57988,&UNK_10da5b010);
  func_0x0001020d854c(&uStack_390,0x112e57988,&UNK_10da5b010);
  uStack_1c8 = uStack_838;
  uStack_1d0 = uStack_840;
  uStack_1b8 = uStack_828;
  uStack_1c0 = uStack_830;
  puStack_1a8 = puStack_818;
  uStack_1b0 = uStack_820;
  uStack_208 = uStack_878;
  uStack_210 = uStack_880;
  uStack_1f8 = uStack_868;
  uStack_200 = uStack_870;
  uStack_1e8 = uStack_858;
  uStack_1f0 = uStack_860;
  uStack_1d8 = uStack_848;
  uStack_1e0 = uStack_850;
  uStack_248 = uStack_8b8;
  uStack_250 = uStack_8c0;
  uStack_238 = uStack_8a8;
  uStack_240 = uStack_8b0;
  uStack_228 = uStack_898;
  uStack_230 = uStack_8a0;
  uStack_218 = uStack_888;
  uStack_220 = uStack_890;
  uStack_288 = uStack_8f8;
  uStack_290 = uStack_900;
  uStack_278 = uStack_8e8;
  uStack_280 = uStack_8f0;
  uStack_268 = uStack_8d8;
  uStack_270 = uStack_8e0;
  uStack_258 = uStack_8c8;
  uStack_260 = uStack_8d0;
  uStack_b8 = uStack_838;
  uStack_c0 = uStack_840;
  uStack_a8 = uStack_828;
  uStack_b0 = uStack_830;
  puStack_98 = puStack_818;
  uStack_a0 = uStack_820;
  uStack_f8 = uStack_878;
  uStack_100 = uStack_880;
  uStack_e8 = uStack_868;
  uStack_f0 = uStack_870;
  uStack_d8 = uStack_858;
  uStack_e0 = uStack_860;
  uStack_c8 = uStack_848;
  uStack_d0 = uStack_850;
  uStack_138 = uStack_8b8;
  uStack_140 = uStack_8c0;
  uStack_128 = uStack_8a8;
  uStack_130 = uStack_8b0;
  uStack_118 = uStack_898;
  uStack_120 = uStack_8a0;
  uStack_108 = uStack_888;
  uStack_110 = uStack_890;
  uStack_178 = uStack_8f8;
  uStack_180 = uStack_900;
  uStack_168 = uStack_8e8;
  uStack_170 = uStack_8f0;
  uStack_1a0 = uStack_810;
  uStack_158 = uStack_8d8;
  uStack_160 = uStack_8e0;
  uStack_148 = uStack_8c8;
  uStack_150 = uStack_8d0;
  uStack_90 = uStack_810;
  puStack_198 = puVar5;
  uStack_190 = uVar4;
  puStack_88 = puVar5;
  uStack_80 = uVar4;
  FUN_1020d8504(&uStack_290,&uStack_a08,0x112e57990,&UNK_10da5b018);
  func_0x0001020d854c(&uStack_180,0x112e57990,&UNK_10da5b018);
  func_0x000107c610b4(param_1,&uStack_290,0x108);
  return;
}



/* Entry: 1020d84f0; end: 1020d8503;  */

void FUN_1020d84f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020d8504; end: 1020d858b;  */

undefined8 FUN_1020d8504(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1020d858c; end: 1020d85a7;  */

void FUN_1020d858c(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
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



/* Entry: 1020d85a8; end: 1020d873b;  */

void FUN_1020d85a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e579a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57990;
  func_0x00010002969c(0x112e57990,&UNK_10da5b018);
  uVar2 = uVar1;
  func_0x0001020d8640();
  uVar3 = 0x112d4fb58;
  func_0x0001020d86f8(0x112d4fb58,0x112d4fb60,&UNK_10d915b10,
                      PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e579a8 = puVar4;
  return;
}



/* Entry: 1020d873c; end: 1020d875b;  */

undefined1  [16] FUN_1020d873c(void)

{
  return ZEXT816(0x1104c9950);
}



/* Entry: 1020d875c; end: 1020d8acf;  */

void FUN_1020d875c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_5b0 [192];
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 uStack_4a0;
  undefined7 uStack_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined7 uStack_41f;
  undefined1 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
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
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte bStack_150;
  undefined7 uStack_14f;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  func_0x000107c5f7ac();
  FUN_1020d8ad0(&uStack_120);
  uStack_438 = uStack_f8;
  uStack_440 = uStack_100;
  uStack_428 = uStack_e8;
  uStack_430 = uStack_f0;
  uStack_41f = uStack_df;
  uStack_418 = uStack_d8;
  uStack_427 = uStack_e7;
  uStack_420 = uStack_e0;
  uStack_458 = uStack_118;
  uStack_460 = uStack_120;
  uStack_448 = uStack_108;
  uStack_450 = uStack_110;
  uStack_3e8 = uStack_f8;
  uStack_3f0 = uStack_100;
  uStack_3e0 = uStack_f0;
  uStack_408 = uStack_118;
  uStack_410 = uStack_120;
  uStack_3f8 = uStack_108;
  uStack_400 = uStack_110;
  uVar6 = 0x112e579c0;
  FUN_1020d8b78(&uStack_460,&uStack_1e0,0x112e579c0,&UNK_10da5b0e0);
  puVar3 = &uStack_410;
  func_0x0001020d8bc0(puVar3,0x112e579c0,&UNK_10da5b0e0);
  uStack_1b8 = uStack_438;
  uStack_1c0 = uStack_440;
  uStack_1a8 = uStack_428;
  uStack_1b0 = uStack_430;
  uStack_19f = uStack_41f;
  uStack_198 = uStack_418;
  uStack_1a7 = uStack_427;
  uStack_1a0 = uStack_420;
  uStack_1d8 = uStack_458;
  uStack_1e0 = uStack_460;
  uStack_1c8 = uStack_448;
  uStack_1d0 = uStack_450;
  func_0x000107c5f7ac();
  uStack_388 = uStack_1b8;
  uStack_390 = uStack_1c0;
  uStack_378 = uStack_1a8;
  uStack_380 = uStack_1b0;
  uStack_36f = uStack_19f;
  uStack_368 = uStack_198;
  uStack_377 = uStack_1a7;
  uStack_370 = uStack_1a0;
  uStack_3a8 = uStack_1d8;
  uStack_3b0 = uStack_1e0;
  uStack_398 = uStack_1c8;
  uStack_3a0 = uStack_1d0;
  uStack_3c0 = param_2;
  uStack_3b8 = param_3;
  func_0x000107c5f2d4(&uStack_490,0x404e000000000000,0,0x404e000000000000,0,puVar3,uVar6);
  uStack_4c8 = uStack_398;
  uStack_4d0 = uStack_3a0;
  uStack_4b8 = uStack_388;
  uStack_4c0 = uStack_390;
  uStack_4a8 = uStack_378;
  uStack_4b0 = uStack_380;
  uStack_49f = uStack_36f;
  uStack_498 = uStack_368;
  uStack_4a7 = uStack_377;
  uStack_4a0 = uStack_370;
  uStack_4e8 = uStack_3b8;
  uStack_4f0 = uStack_3c0;
  uStack_4d8 = uStack_3a8;
  uStack_4e0 = uStack_3b0;
  uStack_328 = uStack_1b8;
  uStack_330 = uStack_1c0;
  uStack_320 = uStack_1b0;
  uStack_348 = uStack_1d8;
  uStack_350 = uStack_1e0;
  uStack_338 = uStack_1c8;
  uStack_340 = uStack_1d0;
  uStack_360 = param_2;
  uStack_358 = param_3;
  FUN_1020d8b78(&uStack_3c0,&uStack_120,0x112e579c8,&UNK_10da5b0e8);
  puVar3 = &uStack_360;
  func_0x0001020d8bc0(puVar3,0x112e579c8,&UNK_10da5b0e8);
  func_0x000107c5f574();
  puVar4 = puVar3;
  func_0x000107c5f580();
  uVar2 = 0;
  func_0x000107c5f57c();
  puVar5 = puVar3;
  func_0x000107c5f57c(puVar3);
  func_0x000107c5f57c((uint)puVar5 & uVar2);
  uVar2 = uVar2 | (uint)puVar3;
  func_0x000107c5f57c();
  puVar3 = puVar4;
  func_0x000107c5f57c(puVar4);
  func_0x000107c5f57c((uint)puVar3 & uVar2);
  bVar1 = (byte)uVar2 | (byte)puVar4;
  func_0x000107c5f57c();
  uStack_298 = uStack_488;
  uStack_2a0 = uStack_490;
  uStack_288 = uStack_478;
  uStack_290 = uStack_480;
  uStack_278 = uStack_468;
  uStack_280 = uStack_470;
  uStack_2d8 = uStack_4c8;
  uStack_2e0 = uStack_4d0;
  uStack_2c8 = uStack_4b8;
  uStack_2d0 = uStack_4c0;
  uStack_2c0 = uStack_4b0;
  uStack_2f8 = uStack_4e8;
  uStack_300 = uStack_4f0;
  uStack_2e8 = uStack_4d8;
  uStack_2f0 = uStack_4e0;
  uStack_208 = uStack_488;
  uStack_210 = uStack_490;
  uStack_1f8 = uStack_478;
  uStack_200 = uStack_480;
  uStack_1e8 = uStack_468;
  uStack_1f0 = uStack_470;
  uStack_248 = uStack_4c8;
  uStack_250 = uStack_4d0;
  uStack_238 = uStack_4b8;
  uStack_240 = uStack_4c0;
  uStack_230 = uStack_4b0;
  uStack_268 = uStack_4e8;
  uStack_270 = uStack_4f0;
  uStack_258 = uStack_4d8;
  uStack_260 = uStack_4e0;
  FUN_1020d8b78(&uStack_300,&uStack_120,0x112e579d0,&UNK_10da5b0f0);
  func_0x0001020d8bc0(&uStack_270,0x112e579d0,&UNK_10da5b0f0);
  uStack_178 = uStack_488;
  uStack_180 = uStack_490;
  uStack_168 = uStack_478;
  uStack_170 = uStack_480;
  uStack_158 = uStack_468;
  uStack_160 = uStack_470;
  uStack_1b8 = uStack_4c8;
  uStack_1c0 = uStack_4d0;
  uStack_1a8 = (undefined1)uStack_4b8;
  uStack_1a7 = (undefined7)((ulong)uStack_4b8 >> 8);
  uStack_1b0 = uStack_4c0;
  uStack_188 = CONCAT71(uStack_497,uStack_498);
  uStack_190 = CONCAT71(uStack_49f,uStack_4a0);
  uStack_198 = uStack_4a8;
  uStack_197 = uStack_4a7;
  uStack_1a0 = (undefined1)uStack_4b0;
  uStack_19f = (undefined7)((ulong)uStack_4b0 >> 8);
  uStack_1d8 = uStack_4e8;
  uStack_1e0 = uStack_4f0;
  uStack_1c8 = uStack_4d8;
  uStack_1d0 = uStack_4e0;
  uStack_b8 = uStack_488;
  uStack_c0 = uStack_490;
  uStack_a8 = uStack_478;
  uStack_b0 = uStack_480;
  uStack_98 = uStack_468;
  uStack_a0 = uStack_470;
  uStack_f8 = uStack_4c8;
  uStack_100 = uStack_4d0;
  uStack_f0 = uStack_4c0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  uStack_12f = 0;
  uStack_138 = 0;
  uStack_137 = 0;
  uStack_128 = 1;
  uStack_108 = uStack_4d8;
  uStack_110 = uStack_4e0;
  uStack_118 = uStack_4e8;
  uStack_120 = uStack_4f0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 1;
  bStack_150 = bVar1;
  uStack_e8 = uStack_1a8;
  uStack_e7 = uStack_1a7;
  uStack_e0 = uStack_1a0;
  uStack_df = uStack_19f;
  bStack_90 = bVar1;
  FUN_1020d8b78(&uStack_1e0,auStack_5b0,0x112e579d8,&UNK_10da5b0f8);
  func_0x0001020d8bc0(&uStack_120,0x112e579d8,&UNK_10da5b0f8);
  param_1[0x11] = uStack_158;
  param_1[0x10] = uStack_160;
  param_1[0x13] = uStack_148;
  param_1[0x12] = CONCAT71(uStack_14f,bStack_150);
  param_1[0x15] = CONCAT71(uStack_137,uStack_138);
  param_1[0x14] = uStack_140;
  *(ulong *)((long)param_1 + 0xb1) = CONCAT17(uStack_128,uStack_12f);
  *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_130,uStack_137);
  param_1[9] = CONCAT71(uStack_197,uStack_198);
  param_1[8] = CONCAT71(uStack_19f,uStack_1a0);
  param_1[0xb] = uStack_188;
  param_1[10] = uStack_190;
  param_1[0xd] = uStack_178;
  param_1[0xc] = uStack_180;
  param_1[0xf] = uStack_168;
  param_1[0xe] = uStack_170;
  param_1[1] = uStack_1d8;
  *param_1 = uStack_1e0;
  param_1[3] = uStack_1c8;
  param_1[2] = uStack_1d0;
  param_1[5] = uStack_1b8;
  param_1[4] = uStack_1c0;
  param_1[7] = CONCAT71(uStack_1a7,uStack_1a8);
  param_1[6] = uStack_1b0;
  return;
}



/* Entry: 1020d8ad0; end: 1020d8b67;  */

void FUN_1020d8ad0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0x62;
  func_0x0001026ff81c(0x62,0x74);
  uVar2 = 0x3d;
  func_0x0001026ff7d0();
  uVar3 = uVar2;
  func_0x000107c5f6d4(0x3fd3333333333333);
  func_0x000107c61574(uVar2);
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 1) = 0x100;
  param_1[2] = uVar3;
  param_1[4] = 0;
  param_1[3] = 0x4010000000000000;
  param_1[5] = 0x4008000000000000;
  param_1[7] = 0x51;
  param_1[6] = 0x195;
  param_1[8] = 0x4040000000000000;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



/* Entry: 1020d8b68; end: 1020d8b77;  */

void FUN_1020d8b68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020d8b78; end: 1020d8cef;  */

undefined8 FUN_1020d8b78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1020d8cf0; end: 1020d8d3f;  */

void FUN_1020d8cf0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e579f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e579c8;
  func_0x00010002969c(0x112e579c8,&UNK_10da5b0e8);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910;
  func_0x000107c61520(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910,uVar1);
  puRam0000000112e579f0 = puVar2;
  return;
}



/* Entry: 1020d8d40; end: 1020d9e27;  */

long * FUN_1020d8d40(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    uVar9 = 0x112e57758;
    func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
    plVar10 = param_2;
    func_0x000107c614c4(param_2,uVar9);
    bVar8 = (int)plVar10 != 1;
    if (bVar8) {
      *param_1 = *param_2;
      func_0x000107c6157c();
    }
    else {
      lVar11 = 0;
      func_0x000107c5f340();
      (**(code **)(*(long *)(lVar11 + -8) + 0x10))(param_1,param_2,lVar11);
    }
    func_0x000107c6159c(param_1,uVar9,!bVar8);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar9 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar9;
    uVar5 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar5;
    lVar12 = 0;
    func_0x0001020c31a0();
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x18));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x18));
    uVar6 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar6;
    uVar19 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar19;
    lVar13 = 0;
    func_0x0001020c2460();
    lVar17 = (long)*(int *)(lVar13 + 0x18);
    lVar14 = 0;
    func_0x000107c5ede0();
    lVar16 = *(long *)(lVar14 + -8);
    pcVar18 = *(code **)(lVar16 + 0x30);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar19);
    lVar11 = (long)puVar4 + lVar17;
    (*pcVar18)(lVar11,1,lVar14);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar3 + lVar17,(long)puVar4 + lVar17,lVar14);
      (**(code **)(lVar16 + 0x38))((long)puVar3 + lVar17,0,1,lVar14);
    }
    else {
      lVar11 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar3 + lVar17,(long)puVar4 + lVar17,
                          *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
    lVar13 = (long)*(int *)(lVar13 + 0x1c);
    lVar11 = (long)puVar4 + lVar13;
    (*pcVar18)(lVar11,1,lVar14);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar3 + lVar13,(long)puVar4 + lVar13,lVar14);
      (**(code **)(lVar16 + 0x38))((long)puVar3 + lVar13,0,1,lVar14);
    }
    else {
      lVar11 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar3 + lVar13,(long)puVar4 + lVar13,
                          *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x1c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x1c));
    uVar9 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar9;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x20)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x20));
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x24));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x24));
    uVar9 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar9;
    uVar5 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar5;
    uVar6 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar6;
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 6);
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar11 = puVar3[1];
    uVar19 = *puVar3;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar4[1] = puVar3[1];
    *puVar4 = uVar19;
    func_0x000107c61434();
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar15 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar11 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c(lVar11);
  return param_1;
}



/* Entry: 1020d9e28; end: 1020d9e3f;  */

void FUN_1020d9e28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020d9e40; end: 1020d9e77;  */

void FUN_1020d9e40(undefined8 param_1)

{
  if (lRam0000000112e57a50 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6af0f4);
  return;
}



/* Entry: 1020d9e78; end: 1020d9f07;  */

void FUN_1020d9e78(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001020d6274();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x0001020c31a0();
    if (param_2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
      func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 1020d9f08; end: 1020d9f17;  */

void FUN_1020d9f08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6af11c,1);
  return;
}



/* Entry: 1020d9f18; end: 1020da617;  */

void FUN_1020d9f18(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  undefined8 *puVar12;
  long extraout_x8_00;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar14;
  undefined8 *puVar15;
  long alStack_150 [6];
  long alStack_120 [4];
  undefined8 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
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
  
  lVar13 = 0x112e57ab8;
  alStack_120[3] = param_2;
  lStack_e0 = param_1;
  func_0x0001000285a8(0x112e57ab8,&UNK_10da5b1b0);
  lStack_f0 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar13 = (long)alStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = (undefined8 *)(lVar13 - extraout_x12);
  lVar13 = 0x112e57ac0;
  puStack_100 = puVar12;
  func_0x0001000285a8(0x112e57ac0,&UNK_10da5b1b8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_f8 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (undefined8 *)(lVar13 - extraout_x12_00);
  lVar13 = 0;
  FUN_1020d9e40();
  puVar12 = (undefined8 *)(param_2 + *(int *)(lVar13 + 0x14));
  lVar13 = 0;
  func_0x0001020c31a0();
  puVar1 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar13 + 0x18));
  alStack_120[2] = *puVar1;
  uVar10 = puVar1[1];
  alStack_120[1] = puVar1[2];
  uVar3 = puVar1[3];
  lVar13 = 0;
  FUN_1020d4c3c();
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar13 + 0x1c));
  lVar7 = 0;
  func_0x0001020c2460();
  iVar5 = *(int *)(lVar7 + 0x18);
  lVar8 = 0;
  func_0x000107c5ede0();
  pcVar14 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar14)((long)puVar1 + (long)iVar5,1,1,lVar8);
  (*pcVar14)((long)puVar1 + (long)*(int *)(lVar7 + 0x1c),1,1,lVar8);
  *puVar1 = alStack_120[2];
  puVar1[1] = uVar10;
  puVar1[2] = alStack_120[1];
  puVar1[3] = uVar3;
  uVar2 = *puVar12;
  uVar4 = puVar12[1];
  puVar9 = &UNK_10da5b1c0;
  func_0x000107c614e0();
  *puVar15 = puVar9;
  *(undefined1 *)(puVar15 + 1) = 0;
  uStack_d8 = 0;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar10);
  uVar10 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  func_0x000107c5f728(puVar15 + 2,&uStack_d8,uVar10);
  uStack_d8 = 0;
  uVar10 = 0x112e57ac8;
  func_0x0001000285a8(0x112e57ac8,&UNK_10da5b1f0);
  puVar11 = &uStack_d8;
  func_0x000107c5f728(puVar15 + 4,puVar11,uVar10);
  puVar12 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar13 + 0x20));
  *puVar12 = uVar2;
  puVar12[1] = uVar4;
  *(undefined8 *)((long)puVar15 + (long)*(int *)(lVar13 + 0x24)) = 0x4037000000000000;
  func_0x000107c5f43c();
  puVar1 = puStack_100;
  *puStack_100 = puVar11;
  puVar1[1] = 0x4010000000000000;
  *(undefined1 *)(puVar1 + 2) = 0;
  lVar13 = 0x112e57ad0;
  puVar9 = &UNK_10da5b1f8;
  func_0x0001000285a8();
  lVar7 = alStack_120[3];
  func_0x0001020da324((long)puVar1 + (long)*(int *)(lVar13 + 0x2c));
  func_0x000107c5f7b0();
  puVar15[-2] = lVar7;
  puVar15[-1] = puVar9;
  *(undefined1 *)(puVar15 + -3) = 1;
  puVar15[-4] = 0;
  *(undefined1 *)(puVar15 + -5) = 1;
  puVar15[-6] = 0;
  func_0x000107c5f388(&uStack_d8,0,1,0,1,0x7ff0000000000000,0,0,1);
  lVar7 = lStack_f8;
  puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lStack_f0 + 0x24));
  puVar12[9] = uStack_90;
  puVar12[8] = uStack_98;
  puVar12[0xb] = uStack_80;
  puVar12[10] = uStack_88;
  puVar12[0xd] = uStack_70;
  puVar12[0xc] = uStack_78;
  puVar12[1] = uStack_d0;
  *puVar12 = uStack_d8;
  puVar12[3] = uStack_c0;
  puVar12[2] = uStack_c8;
  puVar12[5] = uStack_b0;
  puVar12[4] = uStack_b8;
  puVar12[7] = uStack_a0;
  puVar12[6] = uStack_a8;
  func_0x0001020da944(puVar15,lStack_f8,0x112e57ac0,&UNK_10da5b1b8);
  lVar8 = lStack_e8;
  func_0x0001020da944(puVar1,lStack_e8,0x112e57ab8,&UNK_10da5b1b0);
  lVar6 = lStack_e0;
  func_0x0001020da944(lVar7,lStack_e0,0x112e57ac0,&UNK_10da5b1b8);
  lVar13 = 0x112e57ad8;
  func_0x0001000285a8(0x112e57ad8,&UNK_10da5b200);
  func_0x0001020da944(lVar8,lVar6 + *(int *)(lVar13 + 0x30),0x112e57ab8,&UNK_10da5b1b0);
  puVar12 = (undefined8 *)(lVar6 + *(int *)(lVar13 + 0x40));
  puVar12[1] = 0xce;
  *puVar12 = 0x87;
  puVar12[2] = 0x4038000000000000;
  *(undefined1 *)(puVar12 + 3) = 1;
  func_0x0001020da98c(puVar1,0x112e57ab8,&UNK_10da5b1b0);
  func_0x0001020da98c(puVar15,0x112e57ac0,&UNK_10da5b1b8);
  func_0x0001020da98c(lVar8,0x112e57ab8,&UNK_10da5b1b0);
  func_0x0001020da98c(lVar7,0x112e57ac0,&UNK_10da5b1b8);
  return;
}



/* Entry: 1020da618; end: 1020da623;  */

void FUN_1020da618(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020da624; end: 1020da79b;  */

void FUN_1020da624(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_2 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = &stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112e57a90;
  func_0x0001000285a8(0x112e57a90,&UNK_10da5b190);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar6 = (long *)(puVar4 + -extraout_x8);
  func_0x000107c5f410();
  *plVar6 = lVar2;
  plVar6[1] = 0x4028000000000000;
  *(undefined1 *)(plVar6 + 2) = 0;
  lVar2 = 0x112e57a98;
  func_0x0001000285a8(0x112e57a98,&UNK_10da5b198);
  FUN_1020d9f18((undefined1 *)((long)plVar6 + (long)*(int *)(lVar2 + 0x2c)));
  *(undefined1 *)((long)plVar6 + (long)*(int *)(lVar1 + 0x24)) = 0;
  func_0x0001020da9cc();
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar8 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_1104c99a8;
  func_0x000107c613fc(&UNK_1104c99a8,uVar8 + lVar7,uVar5 | 7);
  func_0x0001020da79c(puVar4,puVar3 + uVar8);
  func_0x0001020da848();
  func_0x000107c5f620(param_1,1,0x1020da7e0,puVar3,lVar1,puVar4);
  func_0x000107c61574(puVar3);
  func_0x0001020da98c(plVar6,0x112e57a90,&UNK_10da5b190);
  return;
}



/* Entry: 1020da79c; end: 1020daa4b;  */

undefined8 FUN_1020da79c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1020d9e40();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020daa4c; end: 1020db857;  */

long * FUN_1020daa4c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar11;
    lVar17 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar17;
    lVar8 = 0;
    func_0x0001020c31a0();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x18));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    uVar4 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar4;
    lVar9 = 0;
    func_0x0001020c2460();
    lVar16 = (long)*(int *)(lVar9 + 0x18);
    lVar10 = 0;
    func_0x000107c5ede0();
    lVar12 = *(long *)(lVar10 + -8);
    pcVar18 = *(code **)(lVar12 + 0x30);
    func_0x000107c61434(lVar11);
    func_0x000107c61434(lVar17);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    lVar11 = (long)puVar2 + lVar16;
    (*pcVar18)(lVar11,1,lVar10);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar12 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,lVar10);
      (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar16,0,1,lVar10);
    }
    else {
      lVar11 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar1 + lVar16,(long)puVar2 + lVar16,
                          *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
    lVar17 = (long)*(int *)(lVar9 + 0x1c);
    lVar11 = (long)puVar2 + lVar17;
    (*pcVar18)(lVar11,1,lVar10);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar12 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar10);
      (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar17,0,1,lVar10);
    }
    else {
      lVar11 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar1 + lVar17,(long)puVar2 + lVar17,
                          *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x20)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x20));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    uVar4 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar4;
    uVar5 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar5;
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 6);
    iVar6 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar15 = puVar1[1];
    uVar14 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar14;
    uVar14 = *(undefined8 *)((long)param_2 + (long)iVar6);
    *(undefined8 *)((long)param_1 + (long)iVar6) = uVar14;
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c6157c(uVar15);
    func_0x000107c61434(uVar14);
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar13 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar11 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020db858; end: 1020db86f;  */

void FUN_1020db858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020db870; end: 1020db8a7;  */

void FUN_1020db870(undefined8 param_1)

{
  if (lRam0000000112e57b40 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6af144);
  return;
}



/* Entry: 1020db8a8; end: 1020db92b;  */

void FUN_1020db8a8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001020c31a0();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_28 = PTR___sBbWV_11034d660 + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020db92c; end: 1020db93b;  */

void FUN_1020db92c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6af16c,1);
  return;
}



/* Entry: 1020db93c; end: 1020dbfcb;  */

void FUN_1020db93c(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  lVar14 = 0x112e57b88;
  lStack_a0 = param_1;
  func_0x0001000285a8(0x112e57b88,&UNK_10da5b2c8);
  lStack_a8 = *(long *)(lVar14 + -8);
  lStack_c0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = 0x112e57b90;
  puStack_d0 = auStack_110 + -extraout_x8;
  func_0x0001000285a8(0x112e57b90,&UNK_10da5b2d0);
  lStack_b8 = *(long *)(lVar14 + -8);
  lStack_b0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar13 = (long)(auStack_110 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  lVar6 = 0;
  lStack_d8 = lVar13;
  FUN_1020db870();
  lVar18 = *(long *)(lVar6 + -8);
  lVar19 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - (lVar19 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112e57b98;
  func_0x0001000285a8(0x112e57b98,&UNK_10da5b2d8);
  lStack_e8 = *(long *)(lVar14 + -8);
  lStack_e0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  lVar14 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_f0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_00;
  uVar16 = *(undefined8 *)(param_2 + *(int *)(lVar6 + 0x18));
  puVar7 = &UNK_10da5b2e8;
  lStack_f8 = param_2;
  lStack_98 = lVar14;
  auStack_70[0] = uVar16;
  func_0x000107c614e0();
  puStack_100 = puVar7;
  func_0x0001020dc504(param_2,lVar13);
  uVar21 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar20 = uVar21 + 0x10 & (uVar21 ^ 0xffffffffffffffff);
  puVar7 = &UNK_1104c9a10;
  func_0x000107c613fc(&UNK_1104c9a10,uVar20 + lVar19,uVar21 | 7);
  func_0x0001020dc548(lVar13,puVar7 + uVar20);
  func_0x000107c61434(uVar16);
  uVar16 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar8 = 0x112e57ba0;
  uStack_108 = uVar16;
  func_0x0001000285a8(0x112e57ba0,&UNK_10da5b308);
  uVar16 = 0x112e57ba8;
  func_0x0001020dca14(0x112e57ba8,0x112d38270,&UNK_10d905a20,PTR___sSayxGSksMc_11034dd18);
  uVar9 = 0x112e57bb0;
  func_0x00010002969c(0x112e57bb0,&UNK_10da5b310);
  uVar10 = 0x112e57bb8;
  func_0x0001020dca14(0x112e57bb8,0x112e57bb0,&UNK_10da5b310,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar11 = uVar10;
  FUN_1020dc5d8();
  puStack_88 = &UNK_1104c92c8;
  puVar12 = &uStack_90;
  uStack_90 = uVar9;
  uStack_80 = uVar10;
  uStack_78 = uVar11;
  func_0x000107c614f4(puVar12,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  *(undefined8 **)(lVar14 + -0x10) = puVar12;
  lVar2 = lStack_98;
  func_0x000107c5f788(lStack_98,auStack_70,puStack_100,FUN_1020dc58c,puVar7,uStack_108,uVar8,uVar16,
                      PTR___sSSSHsWP_11034da90);
  func_0x0001020dc504(lStack_f8,lVar13);
  puVar7 = &UNK_1104c9a38;
  func_0x000107c613fc(&UNK_1104c9a38,uVar20 + lVar19,uVar21 | 7);
  func_0x0001020dc548(lVar13,puVar7 + uVar20);
  uVar16 = 0x112e57bc8;
  func_0x0001000285a8(0x112e57bc8,&UNK_10da5b318);
  uVar8 = 0x112e57bd0;
  FUN_1020dc8ac(0x112e57bd0,0x112e57bc8,&UNK_10da5b318,0x1020dc7e8);
  puVar1 = puStack_d0;
  func_0x000107c5f738(puStack_d0,FUN_1020dc784,puVar7,FUN_1020dc3d4,0,uVar16,uVar8);
  uStack_90 = CONCAT71(uStack_90._1_7_,1);
  uVar16 = 0x112e57be8;
  func_0x0001020dca14(0x112e57be8,0x112e57b88,&UNK_10da5b2c8,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  lVar14 = lStack_c0;
  lVar19 = lStack_d8;
  func_0x000107c5f60c(lStack_d8,&uStack_90,lStack_c0,&UNK_1104c92c8,uVar16,uVar11);
  (**(code **)(lStack_a8 + 8))(puVar1,lVar14);
  lVar18 = lStack_e0;
  lVar13 = lStack_e8;
  lVar6 = lStack_f0;
  pcVar15 = *(code **)(lStack_e8 + 0x10);
  (*pcVar15)(lStack_f0,lVar2,lStack_e0);
  lVar4 = lStack_b0;
  lVar3 = lStack_b8;
  lVar2 = lStack_c8;
  pcVar17 = *(code **)(lStack_b8 + 0x10);
  (*pcVar17)(lStack_c8,lVar19,lStack_b0);
  lVar5 = lStack_a0;
  (*pcVar15)(lStack_a0,lVar6,lVar18);
  lVar14 = 0x112e57bf0;
  func_0x0001000285a8(0x112e57bf0,&UNK_10da5b328);
  (*pcVar17)(lVar5 + *(int *)(lVar14 + 0x30),lVar2,lVar4);
  pcVar15 = *(code **)(lVar3 + 8);
  (*pcVar15)(lVar19,lVar4);
  pcVar17 = *(code **)(lVar13 + 8);
  (*pcVar17)(lStack_98,lVar18);
  (*pcVar15)(lVar2,lVar4);
  (*pcVar17)(lVar6,lVar18);
  return;
}



/* Entry: 1020dbfcc; end: 1020dc053;  */

/* WARNING: Possible PIC construction at 0x0001020dc034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020dc038) */

void FUN_1020dbfcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar2 = 0;
  FUN_1020db870();
  pcVar1 = *(code **)((long)param_1 + (long)*(int *)(lVar2 + 0x14));
  uStack_68 = *param_1;
  uStack_60 = param_1[1];
  uStack_48 = 0x80;
  uStack_58 = param_2;
  uStack_50 = param_3;
  func_0x000107c61434(uStack_60);
  func_0x000107c61434(param_3);
  (*pcVar1)(&uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020dc054; end: 1020dc3d3;  */

void FUN_1020dc054(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  undefined8 uStack_550;
  undefined1 auStack_548 [8];
  undefined8 uStack_540;
  undefined1 auStack_538 [8];
  undefined8 auStack_530 [2];
  undefined1 auStack_520 [8];
  undefined8 *puStack_518;
  undefined1 auStack_510 [192];
  undefined1 *puStack_450;
  undefined1 **ppuStack_448;
  undefined1 uStack_440;
  undefined7 uStack_43f;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 **ppuStack_3b8;
  undefined1 uStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 *puStack_330;
  undefined1 **ppuStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 *puStack_270;
  undefined1 **ppuStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined1 **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
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
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar2 = 0;
  puStack_518 = param_1;
  func_0x000107c5f58c();
  lVar12 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_520 + lVar1;
  puStack_140 = param_3;
  ppuStack_138 = (undefined1 **)param_4;
  func_0x000100e8b654();
  func_0x000107c61434(param_4);
  ppuVar4 = &puStack_140;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  func_0x000107c5f594();
  (**(code **)(lVar12 + 0x68))
            (puVar6,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_1103492d8,lVar2);
  puVar5 = puVar6;
  func_0x000107c5f5a4(0x403e000000000000,param_2);
  (**(code **)(lVar12 + 8))(puVar6,lVar2);
  puVar6 = puVar5;
  ppuVar9 = ppuVar4;
  puVar11 = puVar8;
  lVar2 = lVar3;
  func_0x000107c5f5d4();
  func_0x000107c61574(puVar5);
  func_0x000100f795bc(ppuVar4,puVar8,lVar3);
  func_0x000107c6142c();
  func_0x000107c5f7ac();
  *(undefined8 *)((long)auStack_530 + lVar1) = param_6;
  *(undefined **)((long)auStack_530 + lVar1 + 8) = puVar8;
  auStack_538[lVar1] = 1;
  *(undefined8 *)((long)&uStack_540 + lVar1) = 0;
  auStack_548[lVar1] = 1;
  *(undefined8 *)((long)&uStack_550 + lVar1) = 0;
  uVar7 = 0;
  uVar10 = 1;
  func_0x000107c5f388(&lStack_1b0,0,1,0,1,0x7ff0000000000000,0,0,1);
  func_0x000107c5f7ac();
  uStack_3e8 = uStack_168;
  uStack_3f0 = uStack_170;
  uStack_3d8 = uStack_158;
  uStack_3e0 = uStack_160;
  uStack_3c8 = uStack_148;
  uStack_3d0 = uStack_150;
  uStack_428 = uStack_1a8;
  lStack_430 = lStack_1b0;
  uStack_418 = uStack_198;
  uStack_420 = uStack_1a0;
  uStack_408 = uStack_188;
  uStack_410 = uStack_190;
  uStack_3f8 = uStack_178;
  uStack_400 = uStack_180;
  puStack_450 = puVar6;
  ppuStack_448 = ppuVar9;
  uStack_440 = (char)puVar11;
  lStack_438 = lVar2;
  func_0x000107c5f2d4(&lStack_b0,0,1,0x4046000000000000,0,uVar7,uVar10);
  uStack_d8 = uStack_3e8;
  uStack_e0 = uStack_3f0;
  uStack_c8 = uStack_3d8;
  uStack_d0 = uStack_3e0;
  uStack_b8 = uStack_3c8;
  uStack_c0 = uStack_3d0;
  uStack_108 = uStack_418;
  uStack_110 = uStack_420;
  uStack_e8 = uStack_3f8;
  uStack_f0 = uStack_400;
  uStack_f8 = uStack_408;
  uStack_100 = uStack_410;
  uStack_130 = CONCAT71(uStack_43f,uStack_440);
  lStack_128 = lStack_438;
  uStack_118 = uStack_428;
  lStack_120 = lStack_430;
  ppuStack_138 = ppuStack_448;
  puStack_140 = puStack_450;
  uStack_358 = uStack_168;
  uStack_360 = uStack_170;
  uStack_348 = uStack_158;
  uStack_350 = uStack_160;
  uStack_338 = uStack_148;
  uStack_340 = uStack_150;
  uStack_398 = uStack_1a8;
  lStack_3a0 = lStack_1b0;
  uStack_388 = uStack_198;
  uStack_390 = uStack_1a0;
  uStack_378 = uStack_188;
  uStack_380 = uStack_190;
  uStack_368 = uStack_178;
  uStack_370 = uStack_180;
  puStack_3c0 = puVar6;
  ppuStack_3b8 = ppuVar9;
  uStack_3b0 = (char)puVar11;
  lStack_3a8 = lVar2;
  FUN_1020dc98c(&puStack_450,&puStack_270,0x112e57c10,&UNK_10da5b338);
  func_0x0001020dc9d4(&puStack_3c0,0x112e57c10,&UNK_10da5b338);
  uStack_2a8 = uStack_b8;
  uStack_2b0 = uStack_c0;
  uStack_298 = uStack_a8;
  lStack_2a0 = lStack_b0;
  uStack_288 = uStack_98;
  uStack_290 = uStack_a0;
  uStack_278 = uStack_88;
  uStack_280 = uStack_90;
  uStack_2e8 = uStack_f8;
  uStack_2f0 = uStack_100;
  uStack_2d8 = uStack_e8;
  uStack_2e0 = uStack_f0;
  uStack_2c8 = uStack_d8;
  uStack_2d0 = uStack_e0;
  uStack_2b8 = uStack_c8;
  uStack_2c0 = uStack_d0;
  ppuStack_328 = ppuStack_138;
  puStack_330 = puStack_140;
  lStack_318 = lStack_128;
  uStack_320 = uStack_130;
  uStack_308 = uStack_118;
  lStack_310 = lStack_120;
  uStack_2f8 = uStack_108;
  uStack_300 = uStack_110;
  uStack_1e8 = uStack_b8;
  uStack_1f0 = uStack_c0;
  uStack_1d8 = uStack_a8;
  lStack_1e0 = lStack_b0;
  uStack_1c8 = uStack_98;
  uStack_1d0 = uStack_a0;
  uStack_1b8 = uStack_88;
  uStack_1c0 = uStack_90;
  uStack_228 = uStack_f8;
  uStack_230 = uStack_100;
  uStack_218 = uStack_e8;
  uStack_220 = uStack_f0;
  uStack_208 = uStack_d8;
  uStack_210 = uStack_e0;
  uStack_1f8 = uStack_c8;
  uStack_200 = uStack_d0;
  ppuStack_268 = ppuStack_138;
  puStack_270 = puStack_140;
  lStack_258 = lStack_128;
  uStack_260 = uStack_130;
  uStack_248 = uStack_118;
  lStack_250 = lStack_120;
  uStack_238 = uStack_108;
  uStack_240 = uStack_110;
  FUN_1020dc98c(&puStack_330,auStack_510,0x112e57bf8,&UNK_10da5b330);
  func_0x0001020dc9d4(&puStack_270,0x112e57bf8,&UNK_10da5b330);
  puStack_518[0x11] = uStack_2a8;
  puStack_518[0x10] = uStack_2b0;
  puStack_518[0x13] = uStack_298;
  puStack_518[0x12] = lStack_2a0;
  puStack_518[0x15] = uStack_288;
  puStack_518[0x14] = uStack_290;
  puStack_518[0x17] = uStack_278;
  puStack_518[0x16] = uStack_280;
  puStack_518[9] = uStack_2e8;
  puStack_518[8] = uStack_2f0;
  puStack_518[0xb] = uStack_2d8;
  puStack_518[10] = uStack_2e0;
  puStack_518[0xd] = uStack_2c8;
  puStack_518[0xc] = uStack_2d0;
  puStack_518[0xf] = uStack_2b8;
  puStack_518[0xe] = uStack_2c0;
  puStack_518[1] = ppuStack_328;
  *puStack_518 = puStack_330;
  puStack_518[3] = lStack_318;
  puStack_518[2] = uStack_320;
  puStack_518[5] = uStack_308;
  puStack_518[4] = lStack_310;
  puStack_518[7] = uStack_2f8;
  puStack_518[6] = uStack_300;
  return;
}



/* Entry: 1020dc3d4; end: 1020dc4a7;  */

void FUN_1020dc3d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c5f7ac();
  param_1[1] = 0xcc;
  *param_1 = 0x21b;
  param_1[2] = 0x4038000000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar1 = 0;
  uVar2 = 1;
  func_0x000107c5f388(&uStack_c0,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  param_1[0xd] = uStack_78;
  param_1[0xc] = uStack_80;
  param_1[0xf] = uStack_68;
  param_1[0xe] = uStack_70;
  param_1[0x11] = uStack_58;
  param_1[0x10] = uStack_60;
  param_1[5] = uStack_b8;
  param_1[4] = uStack_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  param_1[9] = uStack_98;
  param_1[8] = uStack_a0;
  param_1[0xb] = uStack_88;
  param_1[10] = uStack_90;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_50,0,1,0x4046000000000000,0,uVar1,uVar2);
  param_1[0x13] = uStack_48;
  param_1[0x12] = uStack_50;
  param_1[0x15] = uStack_38;
  param_1[0x14] = uStack_40;
  param_1[0x17] = uStack_28;
  param_1[0x16] = uStack_30;
  return;
}



/* Entry: 1020dc4a8; end: 1020dc4b3;  */

void FUN_1020dc4a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020dc4b4; end: 1020dc58b;  */

void FUN_1020dc4b4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c5f410();
  *param_1 = param_2;
  param_1[1] = 0x4028000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = 0x112e57b80;
  func_0x0001000285a8(0x112e57b80,&UNK_10da5b2c0);
  FUN_1020db93c((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  return;
}



/* Entry: 1020dc58c; end: 1020dc5d7;  */

void FUN_1020dc58c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  FUN_1020db870();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar4 = 0;
  FUN_1020db870();
  lVar6 = *(long *)(lVar4 + -8);
  lVar8 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = auStack_80 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112e57bb0;
  func_0x0001000285a8(0x112e57bb0,&UNK_10da5b310);
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x0001020dc504(unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)),puVar10);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar1 = &UNK_1104c9a60;
  func_0x000107c613fc(&UNK_1104c9a60,uVar9 + 0x10,uVar5 | 7);
  func_0x0001020dc548(puVar10,puVar1 + uVar7);
  *(undefined8 *)(puVar1 + uVar9) = uVar2;
  *(undefined8 *)((long)(puVar1 + uVar9) + 8) = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar3;
  func_0x000107c61434(uVar3);
  uVar2 = 0x112e57bf8;
  func_0x0001000285a8(0x112e57bf8,&UNK_10da5b330);
  uVar3 = 0x112e57c00;
  FUN_1020dc8ac(0x112e57c00,0x112e57bf8,&UNK_10da5b330,FUN_1020dc91c);
  func_0x000107c5f738((long)puVar10 - extraout_x8,FUN_1020dc860,puVar1,FUN_1020dc8a4,auStack_80,
                      uVar2,uVar3);
  auStack_80[0] = 1;
  uVar2 = 0x112e57bb8;
  func_0x0001020dca14(0x112e57bb8,0x112e57bb0,&UNK_10da5b310,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar3 = uVar2;
  FUN_1020dc5d8();
  func_0x000107c5f60c(param_1,auStack_80,lVar4,&UNK_1104c92c8,uVar2,uVar3);
  (**(code **)(lVar11 + 8))((long)puVar10 - extraout_x8,lVar4);
  return;
}



/* Entry: 1020dc5d8; end: 1020dc617;  */

void FUN_1020dc5d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e57bc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5a678;
  func_0x000107c61520(&UNK_10da5a678,&UNK_1104c92c8);
  puRam0000000112e57bc0 = puVar1;
  return;
}



/* Entry: 1020dc618; end: 1020dc783;  */

void FUN_1020dc618(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  lVar4 = 0;
  FUN_1020db870();
  lVar13 = *(long *)(lVar4 + -8);
  uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar8 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar8;
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 8));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x18));
  lVar5 = 0;
  func_0x0001020c31a0();
  lVar2 = lVar1 + *(int *)(lVar5 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 8));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x18));
  lVar6 = 0;
  func_0x0001020c2460();
  iVar3 = *(int *)(lVar6 + 0x18);
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar7 + -8);
  pcVar12 = *(code **)(lVar10 + 0x30);
  lVar11 = lVar2 + iVar3;
  (*pcVar12)(lVar11,1,lVar7);
  if ((int)lVar11 == 0) {
    (**(code **)(lVar10 + 8))(lVar2 + iVar3,lVar7);
  }
  iVar3 = *(int *)(lVar6 + 0x1c);
  lVar11 = lVar2 + iVar3;
  (*pcVar12)(lVar11,1,lVar7);
  if ((int)lVar11 == 0) {
    (**(code **)(lVar10 + 8))(lVar2 + iVar3,lVar7);
  }
  lVar11 = *(long *)(lVar13 + 0x40);
  func_0x000107c6142c(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x1c) + 8));
  lVar2 = lVar1 + *(int *)(lVar5 + 0x24);
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 8));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x28));
  func_0x000107c61574(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x14) + 8));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x18)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(unaff_x20,lVar11 + uVar8,uVar9 | 7);
  return;
}



/* Entry: 1020dc784; end: 1020dc85f;  */

void FUN_1020dc784(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  lVar2 = 0;
  FUN_1020db870();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
  uStack_48 = *puVar1;
  uStack_40 = puVar1[1];
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0xc0;
  (**(code **)((long)puVar1 + (long)*(int *)(lVar2 + 0x14)))(&uStack_48);
  return;
}



/* Entry: 1020dc860; end: 1020dc8a3;  */

/* WARNING: Possible PIC construction at 0x0001020dc034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020dc038) */

void FUN_1020dc860(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar5 = 0;
  FUN_1020db870();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar6 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar6);
  lVar5 = 0;
  FUN_1020db870();
  pcVar2 = *(code **)((long)puVar1 + (long)*(int *)(lVar5 + 0x14));
  uStack_68 = *puVar1;
  uStack_60 = puVar1[1];
  uStack_48 = 0x80;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  func_0x000107c61434(uStack_60);
  func_0x000107c61434(uVar4);
  (*pcVar2)(&uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 1020dc8a4; end: 1020dc8ab;  */

void FUN_1020dc8a4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 in_x3;
  long extraout_x8;
  long lVar12;
  long unaff_x20;
  undefined8 uStack_550;
  undefined1 auStack_548 [8];
  undefined8 uStack_540;
  undefined1 auStack_538 [8];
  undefined8 auStack_530 [2];
  undefined1 auStack_520 [8];
  undefined8 *puStack_518;
  undefined1 auStack_510 [192];
  undefined1 *puStack_450;
  undefined1 **ppuStack_448;
  undefined1 uStack_440;
  undefined7 uStack_43f;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 **ppuStack_3b8;
  undefined1 uStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 *puStack_330;
  undefined1 **ppuStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 *puStack_270;
  undefined1 **ppuStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined1 **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
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
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar5 = *(undefined1 **)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  puStack_518 = param_1;
  func_0x000107c5f58c();
  lVar12 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_520 + lVar1;
  puStack_140 = puVar5;
  ppuStack_138 = (undefined1 **)uVar7;
  func_0x000100e8b654();
  func_0x000107c61434(uVar7);
  ppuVar4 = &puStack_140;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  func_0x000107c5f594();
  (**(code **)(lVar12 + 0x68))
            (puVar6,*(undefined4 *)PTR___s7SwiftUI4FontV6DesignO7defaultyA2EmFWC_1103492d8,lVar2);
  puVar5 = puVar6;
  func_0x000107c5f5a4(0x403e000000000000,param_2);
  (**(code **)(lVar12 + 8))(puVar6,lVar2);
  puVar6 = puVar5;
  ppuVar9 = ppuVar4;
  puVar11 = puVar8;
  lVar2 = lVar3;
  func_0x000107c5f5d4();
  func_0x000107c61574(puVar5);
  func_0x000100f795bc(ppuVar4,puVar8,lVar3);
  func_0x000107c6142c();
  func_0x000107c5f7ac();
  *(undefined8 *)((long)auStack_530 + lVar1) = in_x3;
  *(undefined **)((long)auStack_530 + lVar1 + 8) = puVar8;
  auStack_538[lVar1] = 1;
  *(undefined8 *)((long)&uStack_540 + lVar1) = 0;
  auStack_548[lVar1] = 1;
  *(undefined8 *)((long)&uStack_550 + lVar1) = 0;
  uVar7 = 0;
  uVar10 = 1;
  func_0x000107c5f388(&lStack_1b0,0,1,0,1,0x7ff0000000000000,0,0,1);
  func_0x000107c5f7ac();
  uStack_3e8 = uStack_168;
  uStack_3f0 = uStack_170;
  uStack_3d8 = uStack_158;
  uStack_3e0 = uStack_160;
  uStack_3c8 = uStack_148;
  uStack_3d0 = uStack_150;
  uStack_428 = uStack_1a8;
  lStack_430 = lStack_1b0;
  uStack_418 = uStack_198;
  uStack_420 = uStack_1a0;
  uStack_408 = uStack_188;
  uStack_410 = uStack_190;
  uStack_3f8 = uStack_178;
  uStack_400 = uStack_180;
  puStack_450 = puVar6;
  ppuStack_448 = ppuVar9;
  uStack_440 = (char)puVar11;
  lStack_438 = lVar2;
  func_0x000107c5f2d4(&lStack_b0,0,1,0x4046000000000000,0,uVar7,uVar10);
  uStack_d8 = uStack_3e8;
  uStack_e0 = uStack_3f0;
  uStack_c8 = uStack_3d8;
  uStack_d0 = uStack_3e0;
  uStack_b8 = uStack_3c8;
  uStack_c0 = uStack_3d0;
  uStack_108 = uStack_418;
  uStack_110 = uStack_420;
  uStack_e8 = uStack_3f8;
  uStack_f0 = uStack_400;
  uStack_f8 = uStack_408;
  uStack_100 = uStack_410;
  uStack_130 = CONCAT71(uStack_43f,uStack_440);
  lStack_128 = lStack_438;
  uStack_118 = uStack_428;
  lStack_120 = lStack_430;
  ppuStack_138 = ppuStack_448;
  puStack_140 = puStack_450;
  uStack_358 = uStack_168;
  uStack_360 = uStack_170;
  uStack_348 = uStack_158;
  uStack_350 = uStack_160;
  uStack_338 = uStack_148;
  uStack_340 = uStack_150;
  uStack_398 = uStack_1a8;
  lStack_3a0 = lStack_1b0;
  uStack_388 = uStack_198;
  uStack_390 = uStack_1a0;
  uStack_378 = uStack_188;
  uStack_380 = uStack_190;
  uStack_368 = uStack_178;
  uStack_370 = uStack_180;
  puStack_3c0 = puVar6;
  ppuStack_3b8 = ppuVar9;
  uStack_3b0 = (char)puVar11;
  lStack_3a8 = lVar2;
  FUN_1020dc98c(&puStack_450,&puStack_270,0x112e57c10,&UNK_10da5b338);
  func_0x0001020dc9d4(&puStack_3c0,0x112e57c10,&UNK_10da5b338);
  uStack_2a8 = uStack_b8;
  uStack_2b0 = uStack_c0;
  uStack_298 = uStack_a8;
  lStack_2a0 = lStack_b0;
  uStack_288 = uStack_98;
  uStack_290 = uStack_a0;
  uStack_278 = uStack_88;
  uStack_280 = uStack_90;
  uStack_2e8 = uStack_f8;
  uStack_2f0 = uStack_100;
  uStack_2d8 = uStack_e8;
  uStack_2e0 = uStack_f0;
  uStack_2c8 = uStack_d8;
  uStack_2d0 = uStack_e0;
  uStack_2b8 = uStack_c8;
  uStack_2c0 = uStack_d0;
  ppuStack_328 = ppuStack_138;
  puStack_330 = puStack_140;
  lStack_318 = lStack_128;
  uStack_320 = uStack_130;
  uStack_308 = uStack_118;
  lStack_310 = lStack_120;
  uStack_2f8 = uStack_108;
  uStack_300 = uStack_110;
  uStack_1e8 = uStack_b8;
  uStack_1f0 = uStack_c0;
  uStack_1d8 = uStack_a8;
  lStack_1e0 = lStack_b0;
  uStack_1c8 = uStack_98;
  uStack_1d0 = uStack_a0;
  uStack_1b8 = uStack_88;
  uStack_1c0 = uStack_90;
  uStack_228 = uStack_f8;
  uStack_230 = uStack_100;
  uStack_218 = uStack_e8;
  uStack_220 = uStack_f0;
  uStack_208 = uStack_d8;
  uStack_210 = uStack_e0;
  uStack_1f8 = uStack_c8;
  uStack_200 = uStack_d0;
  ppuStack_268 = ppuStack_138;
  puStack_270 = puStack_140;
  lStack_258 = lStack_128;
  uStack_260 = uStack_130;
  uStack_248 = uStack_118;
  lStack_250 = lStack_120;
  uStack_238 = uStack_108;
  uStack_240 = uStack_110;
  FUN_1020dc98c(&puStack_330,auStack_510,0x112e57bf8,&UNK_10da5b330);
  func_0x0001020dc9d4(&puStack_270,0x112e57bf8,&UNK_10da5b330);
  puStack_518[0x11] = uStack_2a8;
  puStack_518[0x10] = uStack_2b0;
  puStack_518[0x13] = uStack_298;
  puStack_518[0x12] = lStack_2a0;
  puStack_518[0x15] = uStack_288;
  puStack_518[0x14] = uStack_290;
  puStack_518[0x17] = uStack_278;
  puStack_518[0x16] = uStack_280;
  puStack_518[9] = uStack_2e8;
  puStack_518[8] = uStack_2f0;
  puStack_518[0xb] = uStack_2d8;
  puStack_518[10] = uStack_2e0;
  puStack_518[0xd] = uStack_2c8;
  puStack_518[0xc] = uStack_2d0;
  puStack_518[0xf] = uStack_2b8;
  puStack_518[0xe] = uStack_2c0;
  puStack_518[1] = ppuStack_328;
  *puStack_518 = puStack_330;
  puStack_518[3] = lStack_318;
  puStack_518[2] = uStack_320;
  puStack_518[5] = uStack_308;
  puStack_518[4] = lStack_310;
  puStack_518[7] = uStack_2f8;
  puStack_518[6] = uStack_300;
  return;
}



/* Entry: 1020dc8ac; end: 1020dc91b;  */

void FUN_1020dc8ac(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 1020dc91c; end: 1020dc98b;  */

void FUN_1020dc91c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000112e57c08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57c10;
  func_0x00010002969c(0x112e57c10,&UNK_10da5b338);
  puStack_20 = PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8;
  puStack_18 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_20);
  puRam0000000112e57c08 = puVar2;
  return;
}



/* Entry: 1020dc98c; end: 1020dca57;  */

undefined8 FUN_1020dc98c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1020dca58; end: 1020dcb27;  */

long * FUN_1020dca58(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar6 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar6;
    lVar1 = param_2[4];
    param_1[3] = param_2[3];
    param_1[4] = lVar1;
    lVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar2;
    *(char *)(param_1 + 7) = (char)param_2[7];
    iVar4 = *(int *)(param_3 + 0x18);
    lVar5 = 0;
    func_0x000107c5f340();
    pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
    func_0x000107c61434(lVar6);
    func_0x000107c61434(lVar1);
    func_0x000107c61434(lVar2);
    (*pcVar8)((undefined1 *)((long)param_1 + (long)iVar4),
              (undefined1 *)((long)param_2 + (long)iVar4),lVar5);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020dcb28; end: 1020dcb7b;  */

void FUN_1020dcb28(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5f340();
                    /* WARNING: Could not recover jumptable at 0x0001020dcb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 1020dcb7c; end: 1020dcc1f;  */

undefined1 * FUN_1020dcb7c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  param_1[0x38] = param_2[0x38];
  iVar4 = *(int *)(param_3 + 0x18);
  lVar5 = 0;
  func_0x000107c5f340();
  pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  (*pcVar6)(param_1 + iVar4,param_2 + iVar4,lVar5);
  return param_1;
}



/* Entry: 1020dcc20; end: 1020dcdef;  */

undefined1 * FUN_1020dcc20(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  param_1[0x38] = param_2[0x38];
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5f340();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))(param_1 + iVar1,param_2 + iVar1,lVar2);
  return param_1;
}



/* Entry: 1020dcdf0; end: 1020dce1b;  */

void FUN_1020dcdf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020dce1c; end: 1020dce97;  */

void FUN_1020dce1c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10da5b390;
  puStack_30 = &UNK_10da5b3a8;
  lVar1 = 0x13f;
  func_0x000107c5f340();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020dce98; end: 1020dcf5b;  */

undefined1  [16] FUN_1020dce98(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = 0;
  func_0x0001020e0768();
  iVar4 = *(int *)(lVar5 + 0x14);
  lVar5 = 0;
  func_0x0001020c31a0();
  puVar1 = (undefined8 *)(unaff_x20 + iVar4 + (long)*(int *)(lVar5 + 0x18));
  lVar5 = puVar1[1];
  uVar2 = 0;
  if (lVar5 != 0) {
    uVar2 = *puVar1;
  }
  lVar3 = -0x2000000000000000;
  if (lVar5 != 0) {
    lVar3 = lVar5;
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar2,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  lVar5 = puVar1[3];
  uVar2 = 0;
  if (lVar5 != 0) {
    uVar2 = puVar1[2];
  }
  lVar3 = -0x2000000000000000;
  if (lVar5 != 0) {
    lVar3 = lVar5;
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar2,lVar3);
  func_0x000107c6142c(lVar3);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1020dcf5c; end: 1020dd8d3;  */

void FUN_1020dcf5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  long alStack_1d0 [6];
  long alStack_1a0 [5];
  long lStack_178;
  long *plStack_170;
  ulong auStack_168 [3];
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 uStack_119;
  long lStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
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
  
  lVar16 = 0x112e57dd8;
  uStack_140 = param_1;
  func_0x0001000285a8(0x112e57dd8,&UNK_10da5b5c0);
  lStack_138 = *(long *)(lVar16 + -8);
  lStack_130 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_138 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)alStack_1a0 - extraout_x8;
  lVar16 = 0x112e56bd0;
  func_0x0001000285a8(0x112e56bd0,&UNK_10da59fb8);
  lVar12 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar18 = (long *)(lVar10 - extraout_x8_00);
  func_0x000107c5f410();
  *plVar18 = lVar12;
  plVar18[1] = 0;
  *(undefined1 *)(plVar18 + 2) = 1;
  lVar12 = 0x112e57de0;
  func_0x0001000285a8(0x112e57de0,&UNK_10da5b5d0);
  lVar5 = unaff_x20;
  FUN_1020dd8d4((long)plVar18 + (long)*(int *)(lVar12 + 0x2c));
  uVar3 = (undefined1)lVar5;
  func_0x000107c5f578();
  uVar20 = 0x4023000000000000;
  func_0x000107c5f280();
  lVar12 = 0x112e57de8;
  func_0x0001000285a8(0x112e57de8,&UNK_10da5b5d8);
  puVar1 = (undefined1 *)((long)plVar18 + (long)*(int *)(lVar12 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 8) = uVar20;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  lVar5 = 0;
  func_0x0001020e0768();
  iVar4 = *(int *)(lVar5 + 0x18);
  func_0x000101315130(0);
  dVar21 = 31.0;
  uVar20 = 0x14;
  func_0x0001026ff9e0(0x14,unaff_x20 + iVar4);
  func_0x000107c4b63c();
  func_0x000107c61170(uVar20);
  lVar12 = unaff_x20 + iVar4;
  dVar22 = 22.0;
  lVar6 = 0x17;
  func_0x0001026ff9e0();
  func_0x000107c4b63c();
  func_0x000107c61170();
  dVar21 = dVar21 + dVar22 + 5.0;
  dVar22 = (double)NEON_fminnm(dVar21 * 0.5,0x403e000000000000);
  dVar21 = (double)(long)(dVar21 + dVar22);
  if (dVar21 <= 60.0) {
    dVar21 = 60.0;
  }
  func_0x000107c5f7ac();
  plVar18[-2] = lVar6;
  plVar18[-1] = lVar12;
  *(undefined1 *)(plVar18 + -3) = 1;
  plVar18[-4] = 0;
  *(undefined1 *)(plVar18 + -5) = 1;
  plVar18[-6] = 0;
  func_0x000107c5f388(&uStack_f8,0,1,0,1,0,1,dVar21,0);
  lVar12 = 0x112e57df0;
  func_0x0001000285a8(0x112e57df0,&UNK_10da5b5e0);
  puVar2 = (undefined8 *)((long)plVar18 + (long)*(int *)(lVar12 + 0x24));
  puVar2[9] = uStack_b0;
  puVar2[8] = uStack_b8;
  puVar2[0xb] = uStack_a0;
  puVar2[10] = uStack_a8;
  puVar2[0xd] = uStack_90;
  puVar2[0xc] = uStack_98;
  puVar2[1] = uStack_f0;
  *puVar2 = uStack_f8;
  puVar2[3] = uStack_e0;
  puVar2[2] = uStack_e8;
  puVar2[5] = uStack_d0;
  puVar2[4] = uStack_d8;
  puVar2[7] = uStack_c0;
  puVar2[6] = uStack_c8;
  lVar12 = 0x112e57df8;
  func_0x0001000285a8(0x112e57df8,&UNK_10da5b5e8);
  *(undefined1 *)((long)plVar18 + (long)*(int *)(lVar12 + 0x24)) = 0;
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar5 + 0x1c));
  uVar3 = *puVar1;
  uVar13 = *(undefined8 *)(puVar1 + 8);
  lStack_118 = CONCAT71(lStack_118._1_7_,uVar3);
  uVar20 = 0x112d4f580;
  puStack_110 = (undefined *)uVar13;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  uVar7 = uVar20;
  func_0x000107c5f72c(&uStack_128);
  lStack_178 = lVar10;
  if ((char)uStack_128 == '\x01') {
    uVar7 = 0x16;
    func_0x0001026ff7d0();
  }
  else {
    func_0x000107c5f6cc();
  }
  uVar8 = uVar7;
  func_0x000107c5f56c();
  puVar2 = (undefined8 *)((long)plVar18 + (long)*(int *)(lVar16 + 0x24));
  lStack_148 = lVar16;
  *puVar2 = uVar7;
  *(char *)(puVar2 + 1) = (char)uVar8;
  lStack_118 = CONCAT71(lStack_118._1_7_,uVar3);
  puStack_110 = (undefined *)uVar13;
  func_0x000107c5f72c(&uStack_128,uVar20);
  uVar3 = (char)uStack_128;
  lVar16 = *(long *)(lVar5 + -8);
  lVar5 = *(long *)(lVar16 + 0x40);
  plStack_170 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)plVar18 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  FUN_1020e084c();
  uVar7 = 0;
  func_0x000107c5fcec();
  puVar9 = PTR___sScMMa_11034fc70;
  func_0x000107c5fce8();
  uVar20 = 0x112d45220;
  func_0x0001020e0c18(0x112d45220,puVar9,PTR___sScMScAsMc_11034fc78);
  auStack_168[1] = (ulong)*(byte *)(lVar16 + 0x50);
  auStack_168[0] = ~auStack_168[1];
  uVar17 = auStack_168[1] + 0x20 & (auStack_168[1] ^ 0xffffffffffffffff);
  puVar9 = &UNK_1104c9ac0;
  auStack_168[2] = lVar5;
  func_0x000107c613fc(&UNK_1104c9ac0,uVar17 + lVar5,auStack_168[1] | 7);
  *(undefined8 *)(puVar9 + 0x10) = uVar7;
  *(undefined8 *)(puVar9 + 0x18) = uVar20;
  func_0x0001020e0890(lVar12,puVar9 + uVar17);
  lVar16 = 0;
  func_0x000107c5fd0c();
  lVar6 = *(long *)(lVar16 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = lVar5 + 0xfU & 0xfffffffffffffff0;
  lVar5 = lVar12 - uVar17;
  func_0x000107c5fcf4(lVar5);
  iVar4 = 2;
  func_0x000100029b9c(2,0x1a,4,0);
  if (iVar4 == 0) {
    lVar12 = 0x112e56bc0;
    func_0x0001000285a8(0x112e56bc0,&UNK_10da59fa8);
    lVar10 = lStack_178;
    puVar2 = (undefined8 *)(lStack_178 + *(int *)(lVar12 + 0x24));
    lVar12 = 0x112e56bc8;
    func_0x0001000285a8(0x112e56bc8,&UNK_10da59fb0);
    *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28)) = uVar3;
    (**(code **)(lVar6 + 0x20))((long)puVar2 + (long)*(int *)(lVar12 + 0x24),lVar5,lVar16);
    *puVar2 = &UNK_10da5b600;
    puVar2[1] = puVar9;
    func_0x000100ce2e50(plVar18,lVar10);
  }
  else {
    lVar10 = 0x112e56bd8;
    func_0x0001000285a8(0x112e56bd8,&UNK_10da59fc0);
    alStack_1a0[1] = *(long *)(lVar10 + -8);
    alStack_1a0[2] = lVar10;
    alStack_1a0[3] = lVar5;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(alStack_1a0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
    uStack_119 = uVar3;
    lStack_118 = 0;
    puStack_110 = (undefined *)0xe000000000000000;
    alStack_1a0[0] = lVar5 - extraout_x8_01;
    alStack_1a0[4] = lVar12;
    func_0x000107c602fc(0x11);
    func_0x000107c6142c(puStack_110);
    lStack_118 = -0x2fffffffffffffcb;
    puStack_110 = (undefined *)0x800000010f062330;
    uStack_128 = 0x40;
    puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar11);
    puVar11 = puStack_110;
    lVar10 = lStack_118;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar14 = (lVar5 - extraout_x8_01) - uVar17;
    (**(code **)(lVar6 + 0x10))(lVar14,lVar5,lVar16);
    *(undefined **)(lVar14 + -8) = PTR___sSbSQsWP_11034dd50;
    *(undefined **)(lVar14 + -0x10) = PTR___sSbN_11034dd40;
    lVar12 = alStack_1a0[0];
    func_0x000107c5f498(alStack_1a0[0],&uStack_119,lVar10,puVar11,0,0,lVar14,&UNK_10da5b600,puVar9);
    (**(code **)(lVar6 + 8))(lVar5,lVar16);
    lVar10 = lStack_178;
    func_0x000100ce2e50(plVar18,lStack_178);
    lVar16 = 0x112e56be0;
    func_0x0001000285a8(0x112e56be0,&UNK_10da5b620);
    (**(code **)(alStack_1a0[1] + 0x20))(lVar10 + *(int *)(lVar16 + 0x24),lVar12,alStack_1a0[2]);
  }
  plVar18 = plStack_170;
  lVar16 = 0x112e57e00;
  func_0x0001000285a8(0x112e57e00,&UNK_10da5b608);
  alStack_1a0[4] = *(long *)(lVar16 + -8);
  plStack_170 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_1a0[4] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)plVar18 - extraout_x8_02;
  lVar12 = 0;
  func_0x000107c5f35c();
  lVar19 = *(long *)(lVar12 + -8);
  alStack_1a0[3] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar5 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f358(lVar5,0x3fd3333333333333,0x4024000000000000);
  uVar17 = auStack_168[2];
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - (uVar17 + 0xf & 0xfffffffffffffff0);
  FUN_1020e084c(unaff_x20,lVar6,0x1020e0768);
  uVar15 = auStack_168[1] + 0x10 & auStack_168[0];
  puVar9 = &UNK_1104c9ae8;
  func_0x000107c613fc(&UNK_1104c9ae8,uVar15 + uVar17,auStack_168[1] | 7);
  func_0x0001020e0890(lVar6,puVar9 + uVar15);
  uVar20 = 0x112e57e08;
  func_0x0001020e0c18(0x112e57e08,PTR___s7SwiftUI16LongPressGestureVMa_110348ae0,
                      PTR___s7SwiftUI16LongPressGestureVAA0E0AAMc_110348ad8);
  func_0x000107c5f794(lVar14,0x1020e0984,puVar9,lVar12,uVar20);
  func_0x000107c61574(puVar9);
  (**(code **)(lVar19 + 8))(lVar5,lVar12);
  func_0x000107c5f2a8();
  lVar12 = lVar5;
  func_0x0001020e09c0();
  lStack_118 = lStack_148;
  puStack_110 = PTR___sSbN_11034dd40;
  puStack_100 = PTR___sSbSQsWP_11034dd50;
  plVar18 = &lStack_118;
  lStack_108 = lVar12;
  func_0x000107c614f4(plVar18,&DAT_10e6aeaac,1);
  uVar20 = 0x112e57e40;
  FUN_1020e0f30(0x112e57e40,0x112e57e00,&UNK_10da5b608,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1103488d8);
  lVar12 = lStack_130;
  func_0x000107c5f654(uStack_140,lVar14,lVar5,lStack_130,lVar16,plVar18,uVar20);
  (**(code **)(alStack_1a0[4] + 8))(lVar14,lVar16);
  (**(code **)(lStack_138 + 8))(lVar10,lVar12);
  return;
}



/* Entry: 1020dd8d4; end: 1020de05f;  */

void FUN_1020dd8d4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar10;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 auStack_1a0 [2];
  long alStack_190 [17];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0x112e57e48;
  alStack_190[0xe] = param_1;
  func_0x0001000285a8(0x112e57e48,&UNK_10da5b628);
  alStack_190[0xc] = *(long *)(lVar3 + -8);
  alStack_190[10] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_190[0xc] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112e57e50;
  alStack_190[9] = (long)alStack_190 - extraout_x8;
  func_0x0001000285a8(0x112e57e50,&UNK_10da5b630);
  lStack_f0 = *(long *)(lVar3 + -8);
  alStack_190[0xd] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar7 = ((long)alStack_190 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_190[0xb] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  lVar3 = 0x112e57e58;
  lStack_f8 = lVar7;
  func_0x0001000285a8(0x112e57e58,&UNK_10da5b638);
  alStack_190[4] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar16 = (long *)(lVar7 - extraout_x8_01);
  lVar3 = 0x112e57e60;
  func_0x0001000285a8(0x112e57e60,&UNK_10da5b640);
  lStack_100 = *(long *)(lVar3 + -8);
  alStack_190[8] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  lVar8 = (long)plVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  alStack_190[7] = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_00;
  lVar3 = 0;
  alStack_190[0x10] = lVar8;
  func_0x0001020e0768();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112e57e68;
  alStack_190[1] = extraout_x12_01;
  func_0x0001000285a8(0x112e57e68,&UNK_10da5b648);
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar8 - extraout_x8_03;
  lVar7 = 0x112e57e70;
  func_0x0001000285a8(0x112e57e70,&UNK_10da5b650);
  lStack_108 = *(long *)(lVar7 + -8);
  alStack_190[6] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar9 = lVar12 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  alStack_190[5] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_02;
  alStack_190[0xf] = param_2;
  lStack_e8 = lVar9;
  FUN_1020e084c(param_2,lVar8,0x1020e0768);
  alStack_190[2] = (long)*(byte *)(lVar10 + 0x50);
  uVar17 = alStack_190[2] + 0x10U & (alStack_190[2] ^ 0xffffffffffffffffU);
  puVar4 = &UNK_1104c9b10;
  func_0x000107c613fc(&UNK_1104c9b10,uVar17 + extraout_x12_01,alStack_190[2] | 7);
  func_0x0001020e0890(lVar8,puVar4 + uVar17);
  uVar5 = 0x112e57e78;
  uStack_d0 = param_2;
  func_0x0001000285a8(0x112e57e78,&UNK_10da5b658);
  uVar6 = 0x112e57e80;
  FUN_1020e0f30(0x112e57e80,0x112e57e78,&UNK_10da5b658,
                PTR___s7SwiftUI6IDViewVyxq_GAA4ViewAAMc_110349888);
  func_0x000107c5f738(lVar12,FUN_1020e0df0,puVar4,0x1020e0dfc,&uStack_e0,uVar5,uVar6);
  uVar5 = 0x112e57e88;
  FUN_1020e0f30(0x112e57e88,0x112e57e68,&UNK_10da5b648,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  FUN_1020e0e04();
  alStack_190[3] = uVar5;
  func_0x000107c5f60c(lStack_e8);
  (**(code **)(lVar14 + 8))(lVar12,lVar3);
  func_0x000107c5f43c();
  *plVar16 = lVar12;
  plVar16[1] = 0x4014000000000000;
  *(undefined1 *)(plVar16 + 2) = 0;
  lVar3 = 0x112e57e98;
  puVar4 = &UNK_10da5b660;
  func_0x0001000285a8();
  lVar12 = alStack_190[0xf];
  lVar7 = alStack_190[0xf];
  FUN_1020de28c((long)plVar16 + (long)*(int *)(lVar3 + 0x2c));
  func_0x000107c5f7b0();
  *(long *)(lVar9 + -0x10) = lVar7;
  *(undefined **)(lVar9 + -8) = puVar4;
  *(undefined1 *)(lVar9 + -0x18) = 1;
  *(undefined8 *)(lVar9 + -0x20) = 0;
  *(undefined1 *)(lVar9 + -0x28) = 1;
  *(undefined8 *)(lVar9 + -0x30) = 0;
  func_0x000107c5f388(&uStack_e0,0,1,0,1,0x7ff0000000000000,0,0,1);
  lVar3 = 0x112e57ea0;
  func_0x0001000285a8(0x112e57ea0,&UNK_10da5b668);
  puVar1 = (undefined8 *)((long)plVar16 + (long)*(int *)(lVar3 + 0x24));
  puVar1[9] = uStack_98;
  puVar1[8] = uStack_a0;
  puVar1[0xb] = uStack_88;
  puVar1[10] = uStack_90;
  puVar1[0xd] = uStack_78;
  puVar1[0xc] = uStack_80;
  uVar5 = uStack_d0;
  puVar1[1] = uStack_d8;
  *puVar1 = uStack_e0;
  puVar1[3] = uStack_c8;
  puVar1[2] = uVar5;
  puVar1[5] = uStack_b8;
  puVar1[4] = uStack_c0;
  lVar7 = alStack_190[4];
  puVar1[7] = uStack_a8;
  puVar1[6] = uStack_b0;
  *(undefined1 *)((long)plVar16 + (long)*(int *)(alStack_190[4] + 0x24)) = 0;
  FUN_1020e084c(lVar12,lVar8,0x1020e0768);
  lVar3 = alStack_190[2];
  puVar4 = &UNK_1104c9b38;
  func_0x000107c613fc(&UNK_1104c9b38,uVar17 + alStack_190[1],alStack_190[2] | 7);
  func_0x0001020e0890(lVar8,puVar4 + uVar17);
  uVar5 = 0x112e57ea8;
  FUN_1020e0a78(0x112e57ea8,0x112e57e58,&UNK_10da5b638,FUN_1020e0e8c);
  lVar10 = alStack_190[0x10];
  func_0x000107c5f620(alStack_190[0x10],1,FUN_1020e0e44,puVar4,lVar7,uVar5);
  func_0x000107c61574(puVar4);
  func_0x0001020e0fc4(plVar16,0x112e57e58,&UNK_10da5b638);
  FUN_1020e084c(alStack_190[0xf],lVar8,0x1020e0768);
  puVar4 = &UNK_1104c9b60;
  func_0x000107c613fc(&UNK_1104c9b60,uVar17 + alStack_190[1],lVar3 | 7);
  func_0x0001020e0890(lVar8,puVar4 + uVar17);
  uVar5 = 0x112e57870;
  func_0x0001000285a8(0x112e57870,&UNK_10da5aee8);
  uVar6 = uVar5;
  FUN_1020d7194();
  lVar3 = alStack_190[9];
  func_0x000107c5f738(alStack_190[9],FUN_1020e0f24,puVar4,FUN_1020de74c,0,uVar5,uVar6);
  FUN_1020e0f30(0x112e57ec8,0x112e57e48,&UNK_10da5b628,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  lVar2 = lStack_f8;
  lVar7 = alStack_190[10];
  func_0x000107c5f60c(lStack_f8);
  (**(code **)(alStack_190[0xc] + 8))(lVar3,lVar7);
  lVar12 = alStack_190[6];
  lVar7 = alStack_190[5];
  pcVar11 = *(code **)(lStack_108 + 0x10);
  (*pcVar11)(alStack_190[5],lStack_e8,alStack_190[6]);
  lVar9 = alStack_190[8];
  lVar8 = alStack_190[7];
  pcVar13 = *(code **)(lStack_100 + 0x10);
  (*pcVar13)(alStack_190[7],lVar10,alStack_190[8]);
  lVar14 = alStack_190[0xd];
  lVar10 = alStack_190[0xb];
  pcVar15 = *(code **)(lStack_f0 + 0x10);
  (*pcVar15)(alStack_190[0xb],lVar2,alStack_190[0xd]);
  lVar2 = alStack_190[0xe];
  (*pcVar11)(alStack_190[0xe],lVar7,lVar12);
  lVar3 = 0x112e57ed0;
  func_0x0001000285a8(0x112e57ed0,&UNK_10da5b680);
  (*pcVar13)(lVar2 + *(int *)(lVar3 + 0x30),lVar8,lVar9);
  (*pcVar15)(lVar2 + *(int *)(lVar3 + 0x40),lVar10,lVar14);
  pcVar11 = *(code **)(lStack_f0 + 8);
  (*pcVar11)(lStack_f8,lVar14);
  pcVar13 = *(code **)(lStack_100 + 8);
  (*pcVar13)(alStack_190[0x10],lVar9);
  pcVar15 = *(code **)(lStack_108 + 8);
  (*pcVar15)(lStack_e8,lVar12);
  (*pcVar11)(lVar10,lVar14);
  (*pcVar13)(lVar8,lVar9);
  (*pcVar15)(lVar7,lVar12);
  return;
}



/* Entry: 1020de060; end: 1020de28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020de060(long *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_48;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    lVar3 = 0;
    func_0x0001020e0768();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x14));
    uVar5 = *puVar1;
    uVar4 = puVar1[1];
    func_0x000107c61174(lVar6);
    func_0x000100083b20(&uStack_48);
    func_0x00010451c820(0);
    func_0x0001045198cc(uVar5,uVar4,0,0,10);
    FUN_1020c7768();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uStack_48);
    func_0x000107c61170(uVar5);
    return;
  }
  lVar6 = param_1[1];
  uVar4 = 0;
  func_0x0001020d05f8(0);
  uVar5 = 0x112e56cb0;
  func_0x0001020e0c18(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar6,uVar4,uVar5);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020de160);
  (*pcVar2)();
}



/* Entry: 1020de28c; end: 1020de573;  */

void FUN_1020de28c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar17;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [5];
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar14 = 0x112e57ed8;
  func_0x0001000285a8(0x112e57ed8,&UNK_10da5b688);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar14 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_78 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined1 *)(lVar14 - extraout_x12);
  lVar7 = 0;
  func_0x0001020e0768();
  lVar14 = param_2 + *(int *)(lVar7 + 0x14);
  lVar8 = 0;
  alStack_c0[3] = param_2;
  func_0x0001020c31a0();
  puVar15 = (undefined8 *)(lVar14 + *(int *)(lVar8 + 0x1c));
  uStack_70 = *puVar15;
  uVar12 = puVar15[1];
  lVar9 = lVar8;
  uStack_68 = uVar12;
  func_0x000100e8b654();
  func_0x000107c61434(uVar12);
  puVar10 = &uStack_70;
  puVar13 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  alStack_c0[4] = (long)*(int *)(lVar7 + 0x18);
  uVar11 = 0x14;
  func_0x0001026ff8a8(0x403f000000000000,0x14,param_2 + alStack_c0[4]);
  uVar12 = uVar11;
  puVar15 = puVar10;
  puVar16 = puVar13;
  lVar7 = lVar9;
  func_0x000107c5f5d4();
  uStack_94 = SUB84(puVar16,0);
  puStack_90 = puVar15;
  uStack_88 = uVar12;
  lStack_80 = lVar7;
  func_0x000107c61574(uVar11);
  func_0x000100f795bc(puVar10,puVar13,lVar9);
  func_0x000107c6142c(param_5);
  puVar13 = &UNK_10da5b4c0;
  func_0x000107c614e0();
  uStack_c8._4_4_ = (uint)*(byte *)(lVar14 + *(int *)(lVar8 + 0x20));
  puVar15 = (undefined8 *)(lVar14 + *(int *)(lVar8 + 0x24));
  uVar12 = *puVar15;
  uVar1 = puVar15[1];
  uVar11 = puVar15[2];
  uVar2 = puVar15[3];
  uStack_d0 = puVar15[4];
  uVar3 = puVar15[5];
  uVar4 = *(undefined1 *)(puVar15 + 6);
  lVar14 = 0;
  alStack_c0[0] = uVar1;
  alStack_c0[1] = uVar2;
  alStack_c0[2] = uVar3;
  func_0x0001020dce08();
  iVar5 = *(int *)(lVar14 + 0x18);
  lVar14 = 0;
  func_0x000107c5f340();
  (**(code **)(*(long *)(lVar14 + -8) + 0x10))(puVar17 + iVar5,alStack_c0[3] + alStack_c0[4],lVar14)
  ;
  *puVar17 = (char)uStack_c8._4_4_;
  *(undefined8 *)(puVar17 + 8) = uVar12;
  *(undefined8 *)(puVar17 + 0x10) = uVar1;
  *(undefined8 *)(puVar17 + 0x18) = uVar11;
  *(undefined8 *)(puVar17 + 0x20) = uVar2;
  *(undefined8 *)(puVar17 + 0x28) = uStack_d0;
  *(undefined8 *)(puVar17 + 0x30) = uVar3;
  puVar17[0x38] = uVar4;
  lVar7 = lStack_78;
  FUN_1020e0f7c(puVar17,lStack_78,0x112e57ed8,&UNK_10da5b688);
  lVar9 = lStack_80;
  uVar12 = uStack_88;
  puVar15 = puStack_90;
  uVar6 = uStack_94;
  *param_1 = uStack_88;
  param_1[1] = puStack_90;
  *(char *)(param_1 + 2) = (char)uStack_94;
  param_1[3] = lStack_80;
  param_1[4] = puVar13;
  param_1[5] = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  lVar14 = 0x112e57ee0;
  func_0x0001000285a8(0x112e57ee0,&UNK_10da5b690);
  FUN_1020e0f7c(lVar7,(long)param_1 + (long)*(int *)(lVar14 + 0x30),0x112e57ed8,&UNK_10da5b688);
  func_0x000107c61434(alStack_c0[0]);
  func_0x000107c61434(alStack_c0[1]);
  func_0x000107c61434(alStack_c0[2]);
  func_0x000100f8a880(uVar12,puVar15,uVar6);
  func_0x000107c61434(lVar9);
  func_0x000107c6157c(puVar13);
  func_0x0001020e0fc4(puVar17,0x112e57ed8,&UNK_10da5b688);
  func_0x0001020e0fc4(lVar7,0x112e57ed8,&UNK_10da5b688);
  func_0x000100f795bc(uVar12,puVar15,uVar6);
  func_0x000107c61574(puVar13);
  func_0x000107c6142c(lVar9);
  return;
}



/* Entry: 1020de574; end: 1020de68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020de574(long *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_48;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar3 = 0;
    func_0x0001020e0768();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x14));
    uVar6 = *puVar1;
    uVar5 = puVar1[1];
    func_0x000107c61174(lVar7);
    func_0x000100083b20(&uStack_48);
    puVar4 = &UNK_1104c9b88;
    func_0x000107c613fc(&UNK_1104c9b88,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar7);
    func_0x000107c6157c(puVar4);
    FUN_1020c7944(uVar6,uVar5,FUN_1020e0f74,puVar4);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uStack_48);
    func_0x000107c61578(puVar4,2);
    return;
  }
  lVar7 = param_1[1];
  uVar5 = 0;
  func_0x0001020d05f8(0);
  uVar6 = 0x112e56cb0;
  func_0x0001020e0c18(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar7,uVar5,uVar6);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020de68c);
  (*pcVar2)();
}



/* Entry: 1020de68c; end: 1020de74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020de68c(long *param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_38;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    lVar3 = 0;
    func_0x0001020e0768();
    iVar1 = *(int *)(lVar3 + 0x14);
    func_0x000107c61174(lVar6);
    func_0x000100083b20(&uStack_38);
    FUN_1020c7b24((long)param_1 + (long)iVar1);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uStack_38);
    return;
  }
  lVar6 = param_1[1];
  uVar4 = 0;
  func_0x0001020d05f8(0);
  uVar5 = 0x112e56cb0;
  func_0x0001020e0c18(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar6,uVar4,uVar5);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020de74c);
  (*pcVar2)();
}



/* Entry: 1020de74c; end: 1020de7a7;  */

void FUN_1020de74c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5f580();
  param_1[1] = 0x48;
  *param_1 = 0x6c;
  param_1[2] = 0x4038000000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar1 = 0x4032c00000000000;
  func_0x000107c5f280();
  *(undefined1 *)(param_1 + 4) = param_6;
  param_1[5] = uVar1;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[8] = param_5;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



/* Entry: 1020de7a8; end: 1020de837;  */

void FUN_1020de7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  uVar3 = 0x112d45220;
  func_0x0001020e0c18(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020de838,uVar2,uVar3);
  return;
}



/* Entry: 1020de838; end: 1020de8fb;  */

void FUN_1020de838(void)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar3 = 0;
  func_0x0001020e0768();
  iVar2 = *(int *)(lVar3 + 0x1c);
  *(int *)(unaff_x22 + 0x50) = iVar2;
  puVar1 = (undefined1 *)(lVar6 + iVar2);
  uVar5 = *(undefined8 *)(puVar1 + 8);
  *(undefined1 *)(unaff_x22 + 0x10) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar5;
  uVar5 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  func_0x000107c5f72c(unaff_x22 + 0x54);
  if (*(char *)(unaff_x22 + 0x54) == '\x01') {
    plVar4 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1020de8fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              (200000000);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001020de8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020de8fc; end: 1020de95b;  */

void FUN_1020de8fc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x48));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
    pcVar1 = FUN_1020de95c;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
    pcVar1 = (code *)0x1020e101c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1020de95c; end: 1020de9af;  */

void FUN_1020de95c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  *(undefined1 *)(unaff_x22 + 0x55) = 0;
  func_0x000107c5f730((undefined1 *)(unaff_x22 + 0x55),uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001020de9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020de9b0; end: 1020deaa7;  */

void FUN_1020de9b0(undefined8 param_1,long *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 uStack_31;
  
  puVar3 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0);
  func_0x000107c48b08();
  func_0x000107c451c4();
  func_0x000107c61170(puVar3);
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar4 = 0;
    func_0x0001020e0768();
    iVar1 = *(int *)(lVar4 + 0x14);
    func_0x000107c61174(lVar7);
    FUN_1020d08ac((long)param_2 + (long)iVar1);
    func_0x000107c61170(lVar7);
    uStack_31 = 1;
    uVar6 = 0x112d4f580;
    func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
    func_0x000107c5f730(&uStack_31,uVar6);
    return;
  }
  lVar7 = param_2[1];
  uVar5 = 0;
  func_0x0001020d05f8(0);
  uVar6 = 0x112e56cb0;
  func_0x0001020e0c18(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar7,uVar5,uVar6);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020deaa8);
  (*pcVar2)();
}



/* Entry: 1020deaa8; end: 1020deaab;  */

void FUN_1020deaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  long alStack_1d0 [6];
  long alStack_1a0 [5];
  long lStack_178;
  long *plStack_170;
  ulong auStack_168 [3];
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 uStack_119;
  long lStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
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
  
  lVar16 = 0x112e57dd8;
  uStack_140 = param_1;
  func_0x0001000285a8(0x112e57dd8,&UNK_10da5b5c0);
  lStack_138 = *(long *)(lVar16 + -8);
  lStack_130 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_138 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)alStack_1a0 - extraout_x8;
  lVar16 = 0x112e56bd0;
  func_0x0001000285a8(0x112e56bd0,&UNK_10da59fb8);
  lVar12 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar18 = (long *)(lVar10 - extraout_x8_00);
  func_0x000107c5f410();
  *plVar18 = lVar12;
  plVar18[1] = 0;
  *(undefined1 *)(plVar18 + 2) = 1;
  lVar12 = 0x112e57de0;
  func_0x0001000285a8(0x112e57de0,&UNK_10da5b5d0);
  lVar5 = unaff_x20;
  FUN_1020dd8d4((long)plVar18 + (long)*(int *)(lVar12 + 0x2c));
  uVar3 = (undefined1)lVar5;
  func_0x000107c5f578();
  uVar20 = 0x4023000000000000;
  func_0x000107c5f280();
  lVar12 = 0x112e57de8;
  func_0x0001000285a8(0x112e57de8,&UNK_10da5b5d8);
  puVar1 = (undefined1 *)((long)plVar18 + (long)*(int *)(lVar12 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 8) = uVar20;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  lVar5 = 0;
  func_0x0001020e0768();
  iVar4 = *(int *)(lVar5 + 0x18);
  func_0x000101315130(0);
  dVar21 = 31.0;
  uVar20 = 0x14;
  func_0x0001026ff9e0(0x14,unaff_x20 + iVar4);
  func_0x000107c4b63c();
  func_0x000107c61170(uVar20);
  lVar12 = unaff_x20 + iVar4;
  dVar22 = 22.0;
  lVar6 = 0x17;
  func_0x0001026ff9e0();
  func_0x000107c4b63c();
  func_0x000107c61170();
  dVar21 = dVar21 + dVar22 + 5.0;
  dVar22 = (double)NEON_fminnm(dVar21 * 0.5,0x403e000000000000);
  dVar21 = (double)(long)(dVar21 + dVar22);
  if (dVar21 <= 60.0) {
    dVar21 = 60.0;
  }
  func_0x000107c5f7ac();
  plVar18[-2] = lVar6;
  plVar18[-1] = lVar12;
  *(undefined1 *)(plVar18 + -3) = 1;
  plVar18[-4] = 0;
  *(undefined1 *)(plVar18 + -5) = 1;
  plVar18[-6] = 0;
  func_0x000107c5f388(&uStack_f8,0,1,0,1,0,1,dVar21,0);
  lVar12 = 0x112e57df0;
  func_0x0001000285a8(0x112e57df0,&UNK_10da5b5e0);
  puVar2 = (undefined8 *)((long)plVar18 + (long)*(int *)(lVar12 + 0x24));
  puVar2[9] = uStack_b0;
  puVar2[8] = uStack_b8;
  puVar2[0xb] = uStack_a0;
  puVar2[10] = uStack_a8;
  puVar2[0xd] = uStack_90;
  puVar2[0xc] = uStack_98;
  puVar2[1] = uStack_f0;
  *puVar2 = uStack_f8;
  puVar2[3] = uStack_e0;
  puVar2[2] = uStack_e8;
  puVar2[5] = uStack_d0;
  puVar2[4] = uStack_d8;
  puVar2[7] = uStack_c0;
  puVar2[6] = uStack_c8;
  lVar12 = 0x112e57df8;
  func_0x0001000285a8(0x112e57df8,&UNK_10da5b5e8);
  *(undefined1 *)((long)plVar18 + (long)*(int *)(lVar12 + 0x24)) = 0;
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar5 + 0x1c));
  uVar3 = *puVar1;
  uVar13 = *(undefined8 *)(puVar1 + 8);
  lStack_118 = CONCAT71(lStack_118._1_7_,uVar3);
  uVar20 = 0x112d4f580;
  puStack_110 = (undefined *)uVar13;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  uVar7 = uVar20;
  func_0x000107c5f72c(&uStack_128);
  lStack_178 = lVar10;
  if ((char)uStack_128 == '\x01') {
    uVar7 = 0x16;
    func_0x0001026ff7d0();
  }
  else {
    func_0x000107c5f6cc();
  }
  uVar8 = uVar7;
  func_0x000107c5f56c();
  puVar2 = (undefined8 *)((long)plVar18 + (long)*(int *)(lVar16 + 0x24));
  lStack_148 = lVar16;
  *puVar2 = uVar7;
  *(char *)(puVar2 + 1) = (char)uVar8;
  lStack_118 = CONCAT71(lStack_118._1_7_,uVar3);
  puStack_110 = (undefined *)uVar13;
  func_0x000107c5f72c(&uStack_128,uVar20);
  uVar3 = (char)uStack_128;
  lVar16 = *(long *)(lVar5 + -8);
  lVar5 = *(long *)(lVar16 + 0x40);
  plStack_170 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)plVar18 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  FUN_1020e084c();
  uVar7 = 0;
  func_0x000107c5fcec();
  puVar9 = PTR___sScMMa_11034fc70;
  func_0x000107c5fce8();
  uVar20 = 0x112d45220;
  func_0x0001020e0c18(0x112d45220,puVar9,PTR___sScMScAsMc_11034fc78);
  auStack_168[1] = (ulong)*(byte *)(lVar16 + 0x50);
  auStack_168[0] = ~auStack_168[1];
  uVar17 = auStack_168[1] + 0x20 & (auStack_168[1] ^ 0xffffffffffffffff);
  puVar9 = &UNK_1104c9ac0;
  auStack_168[2] = lVar5;
  func_0x000107c613fc(&UNK_1104c9ac0,uVar17 + lVar5,auStack_168[1] | 7);
  *(undefined8 *)(puVar9 + 0x10) = uVar7;
  *(undefined8 *)(puVar9 + 0x18) = uVar20;
  func_0x0001020e0890(lVar12,puVar9 + uVar17);
  lVar16 = 0;
  func_0x000107c5fd0c();
  lVar6 = *(long *)(lVar16 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = lVar5 + 0xfU & 0xfffffffffffffff0;
  lVar5 = lVar12 - uVar17;
  func_0x000107c5fcf4(lVar5);
  iVar4 = 2;
  func_0x000100029b9c(2,0x1a,4,0);
  if (iVar4 == 0) {
    lVar12 = 0x112e56bc0;
    func_0x0001000285a8(0x112e56bc0,&UNK_10da59fa8);
    lVar10 = lStack_178;
    puVar2 = (undefined8 *)(lStack_178 + *(int *)(lVar12 + 0x24));
    lVar12 = 0x112e56bc8;
    func_0x0001000285a8(0x112e56bc8,&UNK_10da59fb0);
    *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28)) = uVar3;
    (**(code **)(lVar6 + 0x20))((long)puVar2 + (long)*(int *)(lVar12 + 0x24),lVar5,lVar16);
    *puVar2 = &UNK_10da5b600;
    puVar2[1] = puVar9;
    func_0x000100ce2e50(plVar18,lVar10);
  }
  else {
    lVar10 = 0x112e56bd8;
    func_0x0001000285a8(0x112e56bd8,&UNK_10da59fc0);
    alStack_1a0[1] = *(long *)(lVar10 + -8);
    alStack_1a0[2] = lVar10;
    alStack_1a0[3] = lVar5;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(alStack_1a0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
    uStack_119 = uVar3;
    lStack_118 = 0;
    puStack_110 = (undefined *)0xe000000000000000;
    alStack_1a0[0] = lVar5 - extraout_x8_01;
    alStack_1a0[4] = lVar12;
    func_0x000107c602fc(0x11);
    func_0x000107c6142c(puStack_110);
    lStack_118 = -0x2fffffffffffffcb;
    puStack_110 = (undefined *)0x800000010f062330;
    uStack_128 = 0x40;
    puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar11);
    puVar11 = puStack_110;
    lVar10 = lStack_118;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar14 = (lVar5 - extraout_x8_01) - uVar17;
    (**(code **)(lVar6 + 0x10))(lVar14,lVar5,lVar16);
    *(undefined **)(lVar14 + -8) = PTR___sSbSQsWP_11034dd50;
    *(undefined **)(lVar14 + -0x10) = PTR___sSbN_11034dd40;
    lVar12 = alStack_1a0[0];
    func_0x000107c5f498(alStack_1a0[0],&uStack_119,lVar10,puVar11,0,0,lVar14,&UNK_10da5b600,puVar9);
    (**(code **)(lVar6 + 8))(lVar5,lVar16);
    lVar10 = lStack_178;
    func_0x000100ce2e50(plVar18,lStack_178);
    lVar16 = 0x112e56be0;
    func_0x0001000285a8(0x112e56be0,&UNK_10da5b620);
    (**(code **)(alStack_1a0[1] + 0x20))(lVar10 + *(int *)(lVar16 + 0x24),lVar12,alStack_1a0[2]);
  }
  plVar18 = plStack_170;
  lVar16 = 0x112e57e00;
  func_0x0001000285a8(0x112e57e00,&UNK_10da5b608);
  alStack_1a0[4] = *(long *)(lVar16 + -8);
  plStack_170 = plVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_1a0[4] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)plVar18 - extraout_x8_02;
  lVar12 = 0;
  func_0x000107c5f35c();
  lVar19 = *(long *)(lVar12 + -8);
  alStack_1a0[3] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar5 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f358(lVar5,0x3fd3333333333333,0x4024000000000000);
  uVar17 = auStack_168[2];
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - (uVar17 + 0xf & 0xfffffffffffffff0);
  FUN_1020e084c(unaff_x20,lVar6,0x1020e0768);
  uVar15 = auStack_168[1] + 0x10 & auStack_168[0];
  puVar9 = &UNK_1104c9ae8;
  func_0x000107c613fc(&UNK_1104c9ae8,uVar15 + uVar17,auStack_168[1] | 7);
  func_0x0001020e0890(lVar6,puVar9 + uVar15);
  uVar20 = 0x112e57e08;
  func_0x0001020e0c18(0x112e57e08,PTR___s7SwiftUI16LongPressGestureVMa_110348ae0,
                      PTR___s7SwiftUI16LongPressGestureVAA0E0AAMc_110348ad8);
  func_0x000107c5f794(lVar14,0x1020e0984,puVar9,lVar12,uVar20);
  func_0x000107c61574(puVar9);
  (**(code **)(lVar19 + 8))(lVar5,lVar12);
  func_0x000107c5f2a8();
  lVar12 = lVar5;
  func_0x0001020e09c0();
  lStack_118 = lStack_148;
  puStack_110 = PTR___sSbN_11034dd40;
  puStack_100 = PTR___sSbSQsWP_11034dd50;
  plVar18 = &lStack_118;
  lStack_108 = lVar12;
  func_0x000107c614f4(plVar18,&DAT_10e6aeaac,1);
  uVar20 = 0x112e57e40;
  FUN_1020e0f30(0x112e57e40,0x112e57e00,&UNK_10da5b608,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1103488d8);
  lVar12 = lStack_130;
  func_0x000107c5f654(uStack_140,lVar14,lVar5,lStack_130,lVar16,plVar18,uVar20);
  (**(code **)(alStack_1a0[4] + 8))(lVar14,lVar16);
  (**(code **)(lStack_138 + 8))(lVar10,lVar12);
  return;
}



/* Entry: 1020deaac; end: 1020deb0b;  */

long FUN_1020deaac(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_1 + *(int *)(param_3 + 0x14);
  FUN_1020c34a8(uVar1,param_2 + *(int *)(param_3 + 0x14));
  if ((uVar1 & 1) != 0) {
    param_1 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdb6044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___s7SwiftUI15DynamicTypeSizeO2eeoiySbAC_ACtFZ_110348a48)
              (param_1,param_2 + *(int *)(param_3 + 0x18));
    return param_1;
  }
  return 0;
}



/* Entry: 1020deb0c; end: 1020ded3b;  */

void FUN_1020deb0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long alStack_70 [2];
  
  lVar4 = 0x112e57cd0;
  alStack_70[1] = param_1;
  func_0x0001000285a8(0x112e57cd0,&UNK_10da5b478);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  lVar5 = 0x112e57cd8;
  func_0x0001000285a8(0x112e57cd8,&UNK_10da5b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12_00;
  uVar11 = param_6;
  FUN_1020ded3c(lVar10);
  uVar3 = (undefined1)uVar11;
  func_0x000107c5f580();
  uVar11 = 0x4014000000000000;
  func_0x000107c5f280();
  puVar1 = (undefined1 *)(lVar10 + *(int *)(lVar5 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 8) = uVar11;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_1020df050(lVar8,param_6);
  uVar11 = 0xbf;
  func_0x0001026ff7d0();
  puVar6 = &UNK_10da5b488;
  func_0x000107c614e0();
  puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar4 + 0x24));
  *puVar2 = puVar6;
  puVar2[1] = uVar11;
  FUN_1020e0f7c(lVar10,lVar9,0x112e57cd8,&UNK_10da5b480);
  FUN_1020e0f7c(lVar8,lVar7,0x112e57cd0,&UNK_10da5b478);
  lVar5 = alStack_70[1];
  FUN_1020e0f7c(lVar9,alStack_70[1],0x112e57cd8,&UNK_10da5b480);
  lVar4 = 0x112e57ce0;
  func_0x0001000285a8(0x112e57ce0,&UNK_10da5b4b8);
  FUN_1020e0f7c(lVar7,lVar5 + *(int *)(lVar4 + 0x30),0x112e57cd0,&UNK_10da5b478);
  func_0x0001020e0fc4(lVar8,0x112e57cd0,&UNK_10da5b478);
  func_0x0001020e0fc4(lVar10,0x112e57cd8,&UNK_10da5b480);
  func_0x0001020e0fc4(lVar7,0x112e57cd0,&UNK_10da5b478);
  func_0x0001020e0fc4(lVar9,0x112e57cd8,&UNK_10da5b480);
  return;
}



/* Entry: 1020ded3c; end: 1020df04f;  */

void FUN_1020ded3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte *param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 auStack_a0 [3];
  undefined2 auStack_88 [4];
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = 0x112e57cf0;
  func_0x0001000285a8(0x112e57cf0,&UNK_10da5b500);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)auStack_a0 + -extraout_x8);
  lVar7 = 0x112e57cf8;
  func_0x0001000285a8(0x112e57cf8,&UNK_10da5b508);
  lVar8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)puVar13 - extraout_x8_00);
  bVar4 = *param_6;
  if (bVar4 - 2 < 2) {
    lVar8 = 0;
    func_0x000107c5f37c();
    iVar5 = *(int *)(lVar8 + 0x14);
    uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
    lVar8 = 0;
    func_0x000107c5f41c();
    (**(code **)(*(long *)(lVar8 + -8) + 0x68))((long)puVar13 + (long)iVar5,uVar3,lVar8);
    auVar15 = NEON_fmov(0x4008000000000000,8);
    *(long *)((long)auStack_a0 + -extraout_x8 + 8) = auVar15._8_8_;
    *puVar13 = auVar15._0_8_;
    uVar9 = 0x2f;
    if (bVar4 != 2) {
      uVar9 = 0x30;
    }
    func_0x0001026ff7d0();
    lVar8 = 0x112d50058;
    puVar11 = &UNK_10d916410;
    func_0x0001000285a8(0x112d50058,&UNK_10d916410);
    *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x34)) = uVar9;
    *(undefined2 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x38)) = 0x100;
    func_0x000107c5f7ac();
    func_0x000107c5f2d4(&uStack_80,0x4028000000000000,0,0x4028000000000000,0,lVar8,puVar11);
    lVar8 = 0x112d50060;
    func_0x0001000285a8(0x112d50060,&UNK_10d916418);
    puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x24));
    puVar1[1] = auStack_78[0];
    *puVar1 = uStack_80;
    puVar1[3] = CONCAT62(uStack_66,uStack_68);
    puVar1[2] = auStack_78[1];
    puVar1[5] = uStack_58;
    puVar1[4] = uStack_60;
    func_0x000107c5f568();
    uVar9 = auStack_78[1];
    uVar14 = func_0x000107c5f280(0x3ff0000000000000);
    puVar2 = (undefined1 *)((long)puVar13 + (long)*(int *)(lVar6 + 0x24));
    *puVar2 = (char)lVar8;
    *(undefined8 *)(puVar2 + 8) = uVar14;
    *(undefined8 *)(puVar2 + 0x10) = uVar9;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    puVar2[0x28] = 0;
    FUN_1020e0f7c(puVar13,puVar12,0x112e57cf0,&UNK_10da5b500);
    func_0x000107c6159c(puVar12,lVar7,1);
    uVar9 = 0x112e57d00;
    func_0x0001000285a8(0x112e57d00,&UNK_10da5b510);
    uVar14 = uVar9;
    FUN_1020df474();
    uVar10 = uVar14;
    func_0x0001020df4e4();
    func_0x000107c5f490(param_1,puVar12,uVar9,lVar6,uVar14,uVar10);
    func_0x0001020e0fc4(puVar13,0x112e57cf0,&UNK_10da5b500);
  }
  else {
    if (bVar4 == 0) {
      auStack_a0[1] = 0xcd;
      auStack_a0[0] = 0x196;
      auStack_88[0] = 0;
    }
    else {
      auStack_a0[1] = 0x31;
      auStack_a0[0] = 0x77;
      auStack_88[0] = 0x100;
    }
    auStack_a0[2] = 0x402c000000000000;
    FUN_1020d720c();
    func_0x000107c5f490(&uStack_80,auStack_a0,&UNK_1104c9c68,&UNK_1104c9c68,lVar8,lVar8);
    puVar12[1] = auStack_78[0];
    *puVar12 = uStack_80;
    puVar12[2] = auStack_78[1];
    *(undefined2 *)(puVar12 + 3) = uStack_68;
    func_0x000107c6159c(puVar12,lVar7,0);
    uVar9 = 0x112e57d00;
    func_0x0001000285a8(0x112e57d00,&UNK_10da5b510);
    uVar14 = uVar9;
    FUN_1020df474();
    uVar10 = uVar14;
    func_0x0001020df4e4();
    func_0x000107c5f490(param_1,puVar12,uVar9,lVar6,uVar14,uVar10);
  }
  return;
}



/* Entry: 1020df050; end: 1020df3bf;  */

void FUN_1020df050(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined4 uVar12;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 auStack_280 [2];
  undefined8 uStack_270;
  uint uStack_264;
  undefined *apuStack_260 [6];
  long lStack_230;
  undefined4 uStack_224;
  undefined *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 auStack_200 [80];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte bStack_150;
  undefined7 uStack_14f;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte bStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
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
  undefined8 uStack_7f;
  
  lVar4 = 0;
  FUN_1020d7a2c();
  lStack_230 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar12 = (undefined4)lVar4;
  lVar4 = (long)&uStack_270 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_208 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)(lVar4 - extraout_x12);
  uStack_c0 = *(undefined8 *)(param_6 + 8);
  uVar8 = *(undefined8 *)(param_6 + 0x10);
  uStack_b8 = uVar8;
  func_0x000100e8b654();
  func_0x000107c61434(uVar8);
  puVar5 = &uStack_c0;
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  puVar6 = &UNK_10da5b4c0;
  uStack_224 = uVar12;
  puStack_220 = puVar9;
  puStack_218 = puVar5;
  uStack_210 = param_9;
  func_0x000107c614e0();
  bVar11 = (byte)uVar12;
  uVar7 = 0xb7c2;
  uVar10 = 0xa200000000000000;
  apuStack_260[5] = puVar6;
  func_0x000107c5f414();
  *(undefined2 *)(puVar13 + -1) = 0x100;
  puVar13[-2] = 0;
  bVar11 = bVar11 & 1;
  func_0x000107c5f5d8();
  uVar8 = uVar7;
  func_0x000107c5f568();
  uVar14 = 0x4008000000000000;
  func_0x000107c5f280();
  uStack_140 = (undefined1)uVar8;
  uStack_128 = (undefined1)param_4;
  uStack_127 = (undefined7)((ulong)param_4 >> 8);
  uStack_120 = (undefined1)param_5;
  uStack_11f = (undefined7)((ulong)param_5 >> 8);
  uStack_118 = 0;
  uStack_c8 = 0;
  uStack_160 = uVar7;
  uStack_158 = uVar10;
  bStack_150 = bVar11;
  uStack_148 = param_9;
  uStack_138 = uVar14;
  uStack_130 = param_3;
  uStack_110 = uVar7;
  uStack_108 = uVar10;
  bStack_100 = bVar11;
  uStack_f8 = param_9;
  uStack_f0 = uStack_140;
  uStack_e8 = uVar14;
  uStack_e0 = param_3;
  uStack_d8 = param_4;
  uStack_d0 = param_5;
  FUN_1020e0f7c(&uStack_160,&uStack_c0,0x112d4f490,&UNK_10d915340);
  func_0x0001020e0fc4(&uStack_110,0x112d4f490,&UNK_10d915340);
  apuStack_260[1] = *(undefined **)(param_6 + 8);
  uVar7 = *(undefined8 *)(param_6 + 0x10);
  uVar8 = *(undefined8 *)(param_6 + 0x18);
  uVar10 = *(undefined8 *)(param_6 + 0x20);
  apuStack_260[0] = *(undefined **)(param_6 + 0x28);
  uVar14 = *(undefined8 *)(param_6 + 0x30);
  uStack_264 = (uint)*(byte *)(param_6 + 0x38);
  lVar4 = 0;
  apuStack_260[2] = (undefined *)uVar7;
  apuStack_260[3] = (undefined *)uVar10;
  apuStack_260[4] = (undefined *)uVar14;
  func_0x0001020dce08();
  iVar1 = *(int *)(lVar4 + 0x18);
  iVar2 = *(int *)(lStack_230 + 0x14);
  lVar4 = 0;
  func_0x000107c5f340();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))((long)puVar13 + (long)iVar2,param_6 + iVar1,lVar4);
  puVar6 = apuStack_260[0];
  *puVar13 = apuStack_260[1];
  puVar13[1] = uVar7;
  puVar13[2] = uVar8;
  puVar13[3] = uVar10;
  puVar13[4] = puVar6;
  puVar13[5] = uVar14;
  *(char *)(puVar13 + 6) = (char)uStack_264;
  lVar3 = lStack_208;
  uStack_190 = CONCAT71(uStack_13f,uStack_140);
  uStack_188 = uStack_138;
  uStack_178 = uStack_128;
  uStack_180 = uStack_130;
  uStack_16f = CONCAT17(uStack_118,uStack_11f);
  uStack_177 = uStack_127;
  uStack_170 = uStack_120;
  uStack_1a0 = CONCAT71(uStack_14f,bStack_150);
  uStack_1a8 = uStack_158;
  uStack_1b0 = uStack_160;
  uStack_198 = uStack_148;
  FUN_1020e084c(puVar13,lStack_208,FUN_1020d7a2c);
  uVar8 = uStack_210;
  puVar5 = puStack_218;
  puVar9 = puStack_220;
  uVar12 = uStack_224;
  puVar6 = apuStack_260[5];
  *param_1 = puStack_218;
  param_1[1] = puStack_220;
  *(char *)(param_1 + 2) = (char)uStack_224;
  param_1[3] = uStack_210;
  param_1[4] = apuStack_260[5];
  param_1[5] = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  uStack_98 = uStack_188;
  uStack_a0 = uStack_190;
  uStack_88 = uStack_178;
  uStack_90 = uStack_180;
  uStack_7f = uStack_16f;
  uStack_87 = uStack_177;
  uStack_80 = uStack_170;
  uStack_b8 = uStack_1a8;
  uStack_c0 = uStack_1b0;
  uStack_a8 = uStack_198;
  uStack_b0 = uStack_1a0;
  param_1[8] = uStack_1a8;
  param_1[7] = uStack_1b0;
  *(undefined8 *)((long)param_1 + 0x79) = uStack_16f;
  *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_170,uStack_177);
  param_1[0xe] = CONCAT71(uStack_177,uStack_178);
  param_1[0xd] = uStack_180;
  param_1[0xc] = uStack_188;
  param_1[0xb] = uStack_190;
  param_1[10] = uStack_198;
  param_1[9] = uStack_1a0;
  lVar4 = 0x112e57ce8;
  func_0x0001000285a8(0x112e57ce8,&UNK_10da5b4f8);
  FUN_1020e084c(lVar3,(long)param_1 + (long)*(int *)(lVar4 + 0x40),FUN_1020d7a2c);
  func_0x000107c61434(apuStack_260[2]);
  func_0x000107c61434(apuStack_260[3]);
  func_0x000107c61434(apuStack_260[4]);
  func_0x000100f8a880(puVar5,puVar9,uVar12);
  func_0x000107c61434(uVar8);
  func_0x000107c6157c(puVar6);
  FUN_1020e0f7c(&uStack_c0,auStack_200,0x112d4f490,&UNK_10d915340);
  func_0x0001020daa10(puVar13);
  func_0x0001020daa10(lVar3);
  func_0x0001020e0fc4(&uStack_1b0,0x112d4f490,&UNK_10d915340);
  func_0x000100f795bc(puVar5,puVar9,uVar12);
  func_0x000107c61574(puVar6);
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 1020df3c0; end: 1020df45f;  */

void FUN_1020df3c0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar2 = param_2;
  func_0x000107c5f410();
  *param_1 = lVar2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x112e57cc0;
  func_0x0001000285a8(0x112e57cc0,&UNK_10da5b438);
  FUN_1020deb0c((long)param_1 + (long)*(int *)(lVar2 + 0x2c));
  uVar3 = 0x17;
  func_0x0001026ff8a8(0x4036000000000000,0x17,unaff_x20 + *(int *)(param_2 + 0x18));
  puVar4 = &UNK_10da5b440;
  func_0x000107c614e0();
  lVar2 = 0x112e57cc8;
  func_0x0001000285a8(0x112e57cc8,&UNK_10da5b470);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  *puVar1 = puVar4;
  puVar1[1] = uVar3;
  return;
}



/* Entry: 1020df460; end: 1020df473;  */

char * FUN_1020df460(char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if (*param_1 == *param_2) {
    uVar7 = *(ulong *)(param_1 + 8);
    uVar8 = *(ulong *)(param_1 + 0x18);
    lVar10 = *(long *)(param_1 + 0x20);
    uVar9 = *(ulong *)(param_1 + 0x28);
    lVar11 = *(long *)(param_1 + 0x30);
    bVar5 = param_1[0x38];
    uVar1 = *(ulong *)(param_2 + 0x18);
    lVar3 = *(long *)(param_2 + 0x20);
    uVar2 = *(ulong *)(param_2 + 0x28);
    lVar4 = *(long *)(param_2 + 0x30);
    bVar6 = param_2[0x38];
    if ((((uVar7 == *(ulong *)(param_2 + 8)) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))) ||
        (func_0x000107c605b8(), (uVar7 & 1) != 0)) &&
       (((uVar8 == uVar1 && (lVar10 == lVar3)) ||
        (func_0x000107c605b8(uVar8,lVar10,uVar1,lVar3,0), (uVar8 & 1) != 0)))) {
      if ((uVar9 == uVar2) && (lVar11 == lVar4)) {
        if (bVar5 == bVar6) {
LAB_1020df6e4:
          lVar10 = 0;
          func_0x0001020dce08();
          param_1 = param_1 + *(int *)(lVar10 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdb6044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___s7SwiftUI15DynamicTypeSizeO2eeoiySbAC_ACtFZ_110348a48)
                    (param_1,param_2 + *(int *)(lVar10 + 0x18));
          return param_1;
        }
      }
      else {
        func_0x000107c605b8(uVar9,lVar11,uVar2,lVar4,0);
        if (((uVar9 & 1) != 0) && (((bVar5 ^ bVar6) & 1) == 0)) goto LAB_1020df6e4;
      }
    }
  }
  return (char *)0x0;
}



/* Entry: 1020df474; end: 1020df5f3;  */

void FUN_1020df474(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e57d08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57d00;
  func_0x00010002969c(0x112e57d00,&UNK_10da5b510);
  uVar2 = uVar1;
  FUN_1020d720c();
  puVar3 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10;
  uStack_30 = uVar2;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10,
                      uVar1,&uStack_30);
  puRam0000000112e57d08 = puVar3;
  return;
}



/* Entry: 1020df5f4; end: 1020df73b;  */

char * FUN_1020df5f4(char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if (*param_1 == *param_2) {
    uVar7 = *(ulong *)(param_1 + 8);
    uVar8 = *(ulong *)(param_1 + 0x18);
    lVar10 = *(long *)(param_1 + 0x20);
    uVar9 = *(ulong *)(param_1 + 0x28);
    lVar11 = *(long *)(param_1 + 0x30);
    bVar5 = param_1[0x38];
    uVar1 = *(ulong *)(param_2 + 0x18);
    lVar3 = *(long *)(param_2 + 0x20);
    uVar2 = *(ulong *)(param_2 + 0x28);
    lVar4 = *(long *)(param_2 + 0x30);
    bVar6 = param_2[0x38];
    if ((((uVar7 == *(ulong *)(param_2 + 8)) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))) ||
        (func_0x000107c605b8(), (uVar7 & 1) != 0)) &&
       (((uVar8 == uVar1 && (lVar10 == lVar3)) ||
        (func_0x000107c605b8(uVar8,lVar10,uVar1,lVar3,0), (uVar8 & 1) != 0)))) {
      if ((uVar9 == uVar2) && (lVar11 == lVar4)) {
        if (bVar5 == bVar6) {
LAB_1020df6e4:
          lVar10 = 0;
          func_0x0001020dce08();
          param_1 = param_1 + *(int *)(lVar10 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdb6044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___s7SwiftUI15DynamicTypeSizeO2eeoiySbAC_ACtFZ_110348a48)
                    (param_1,param_2 + *(int *)(lVar10 + 0x18));
          return param_1;
        }
      }
      else {
        func_0x000107c605b8(uVar9,lVar11,uVar2,lVar4,0);
        if (((uVar9 & 1) != 0) && (((bVar5 ^ bVar6) & 1) == 0)) goto LAB_1020df6e4;
      }
    }
  }
  return (char *)0x0;
}



/* Entry: 1020df73c; end: 1020df7f3;  */

void FUN_1020df73c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e57d28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57cc8;
  func_0x00010002969c(0x112e57cc8,&UNK_10da5b470);
  uVar2 = 0x112e57d30;
  FUN_1020e0f30(0x112e57d30,0x112e57d38,&UNK_10da5b518,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  uVar3 = 0x112e02e08;
  FUN_1020e0f30(0x112e02e08,0x112e02e10,&UNK_10d9deec0,
                PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e57d28 = puVar4;
  return;
}



/* Entry: 1020df7f4; end: 1020e074f;  */

long * FUN_1020df7f4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  
  uVar11 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar13 = *param_2;
  *param_1 = lVar13;
  if ((uVar11 >> 0x11 & 1) == 0) {
    param_1[1] = param_2[1];
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    uVar8 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar8;
    lVar14 = 0;
    func_0x0001020c31a0();
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x18));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x18));
    uVar9 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar9;
    uVar10 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar10;
    lVar15 = 0;
    func_0x0001020c2460();
    lVar18 = (long)*(int *)(lVar15 + 0x18);
    lVar16 = 0;
    func_0x000107c5ede0();
    lVar19 = *(long *)(lVar16 + -8);
    pcVar20 = *(code **)(lVar19 + 0x30);
    func_0x000107c61174(lVar13);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar8);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar10);
    lVar13 = (long)puVar4 + lVar18;
    (*pcVar20)(lVar13,1,lVar16);
    if ((int)lVar13 == 0) {
      (**(code **)(lVar19 + 0x10))((long)puVar3 + lVar18,(long)puVar4 + lVar18,lVar16);
      (**(code **)(lVar19 + 0x38))((long)puVar3 + lVar18,0,1,lVar16);
    }
    else {
      lVar13 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar3 + lVar18,(long)puVar4 + lVar18,
                          *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
    lVar15 = (long)*(int *)(lVar15 + 0x1c);
    lVar13 = (long)puVar4 + lVar15;
    (*pcVar20)(lVar13,1,lVar16);
    if ((int)lVar13 == 0) {
      (**(code **)(lVar19 + 0x10))((long)puVar3 + lVar15,(long)puVar4 + lVar15,lVar16);
      (**(code **)(lVar19 + 0x38))((long)puVar3 + lVar15,0,1,lVar16);
    }
    else {
      lVar13 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar3 + lVar15,(long)puVar4 + lVar15,
                          *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x1c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x1c));
    uVar7 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar7;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x20)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x20));
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x24));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x24));
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    uVar9 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar9;
    uVar10 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar10;
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 6);
    iVar12 = *(int *)(param_3 + 0x18);
    lVar13 = 0;
    func_0x000107c5f340();
    pcVar20 = *(code **)(*(long *)(lVar13 + -8) + 0x10);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar8);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar10);
    (*pcVar20)((long)param_1 + (long)iVar12,(long)param_2 + (long)iVar12,lVar13);
    puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *puVar5 = *puVar6;
    *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  }
  else {
    uVar17 = (ulong)uVar11 & 0xff;
    param_1 = (long *)(lVar13 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1020e0750; end: 1020e077b;  */

void FUN_1020e0750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020e077c; end: 1020e07ab;  */

void FUN_1020e077c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1020e07ac; end: 1020e083b;  */

void FUN_1020e07ac(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10da5b530;
  lVar1 = 0x13f;
  func_0x0001020c31a0();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x000107c5f340();
    if (param_2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &UNK_10da5b530;
      func_0x000107c6153c(param_1,0x100,4,&puStack_40,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 1020e083c; end: 1020e084b;  */

void FUN_1020e083c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6af20c,1);
  return;
}



/* Entry: 1020e084c; end: 1020e08d3;  */

undefined8 FUN_1020e084c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020e08d4; end: 1020e0947;  */

void FUN_1020e08d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x0001020e0768();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1020e0948;
  plVar5[4] = unaff_x20 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  lVar3 = 0;
  func_0x000107c5fcec(0,uVar1);
  puVar2 = PTR___sScMMa_11034fc70;
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[5] = lVar4;
  lVar4 = 0x112d45220;
  func_0x0001020e0c18(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar5[6] = lVar3;
  plVar5[7] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020de838,lVar3,lVar4);
  return;
}



/* Entry: 1020e0948; end: 1020e0983;  */

void FUN_1020e0948(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020e0980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020e0984; end: 1020e0a77;  */

void FUN_1020e0984(void)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  undefined1 uStack_31;
  
  lVar8 = 0;
  func_0x0001020e0768();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  plVar1 = (long *)(unaff_x20 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  puVar4 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0);
  func_0x000107c48b08();
  func_0x000107c451c4();
  func_0x000107c61170(puVar4);
  lVar8 = *plVar1;
  if (lVar8 != 0) {
    lVar5 = 0;
    func_0x0001020e0768();
    iVar2 = *(int *)(lVar5 + 0x14);
    func_0x000107c61174(lVar8);
    FUN_1020d08ac((long)plVar1 + (long)iVar2);
    func_0x000107c61170(lVar8);
    uStack_31 = 1;
    uVar7 = 0x112d4f580;
    func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
    func_0x000107c5f730(&uStack_31,uVar7);
    return;
  }
  lVar8 = plVar1[1];
  uVar6 = 0;
  func_0x0001020d05f8(0);
  uVar7 = 0x112e56cb0;
  func_0x0001020e0c18(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar8,uVar6,uVar7);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1020deaa8);
  (*pcVar3)();
}



/* Entry: 1020e0a78; end: 1020e0b07;  */

void FUN_1020e0a78(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    uVar2 = 0x112d4fe68;
    FUN_1020e0f30(0x112d4fe68,0x112d4fe70,&UNK_10da5a660,
                  PTR___s7SwiftUI21_ContentShapeModifierVyxGAA04ViewE0AAMc_110348fd8);
    puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    uStack_38 = uVar2;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar3;
  }
  return;
}



/* Entry: 1020e0b08; end: 1020e0c57;  */

void FUN_1020e0b08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e57e20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57df0;
  func_0x00010002969c(0x112e57df0,&UNK_10da5b5e0);
  uVar2 = uVar1;
  func_0x0001020e0b80();
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e57e20 = puVar3;
  return;
}



/* Entry: 1020e0c58; end: 1020e0def;  */

void FUN_1020e0c58(void)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  long lVar14;
  
  lVar4 = 0;
  func_0x0001020e0768();
  lVar9 = *(long *)(lVar4 + -8);
  uVar11 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  func_0x000107c61170(*puVar1);
  iVar2 = *(int *)(lVar4 + 0x14);
  func_0x000107c6142c(*(undefined8 *)((long)puVar1 + (long)iVar2 + 8));
  func_0x000107c6142c(*(undefined8 *)((long)puVar1 + (long)iVar2 + 0x18));
  lVar5 = 0;
  func_0x0001020c31a0();
  lVar12 = (long)*(int *)(lVar5 + 0x18) + (long)iVar2;
  func_0x000107c6142c(*(undefined8 *)((long)puVar1 + lVar12 + 8));
  func_0x000107c6142c(*(undefined8 *)((long)puVar1 + lVar12 + 0x18));
  lVar6 = 0;
  func_0x0001020c2460();
  iVar3 = *(int *)(lVar6 + 0x18);
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar7 + -8);
  pcVar13 = *(code **)(lVar14 + 0x30);
  lVar8 = (long)puVar1 + iVar3 + lVar12;
  (*pcVar13)(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar14 + 8))((long)puVar1 + iVar3 + lVar12,lVar7);
  }
  iVar3 = *(int *)(lVar6 + 0x1c);
  lVar8 = (long)puVar1 + iVar3 + lVar12;
  (*pcVar13)(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar14 + 8))((long)puVar1 + iVar3 + lVar12,lVar7);
  }
  lVar12 = *(long *)(lVar9 + 0x40);
  func_0x000107c6142c(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x1c) + (long)iVar2 + 8)
                     );
  lVar8 = (long)*(int *)(lVar5 + 0x24) + (long)iVar2;
  func_0x000107c6142c(*(undefined8 *)((long)puVar1 + lVar8 + 8));
  func_0x000107c6142c(*(undefined8 *)((long)puVar1 + lVar8 + 0x18));
  func_0x000107c6142c(*(undefined8 *)((long)puVar1 + lVar8 + 0x28));
  iVar2 = *(int *)(lVar4 + 0x18);
  lVar8 = 0;
  func_0x000107c5f340();
  (**(code **)(*(long *)(lVar8 + -8) + 8))((long)puVar1 + (long)iVar2,lVar8);
  func_0x000107c61574(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x1c) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(unaff_x20,lVar12 + uVar10,uVar11 | 7);
  return;
}



/* Entry: 1020e0df0; end: 1020e0e03;  */

void FUN_1020e0df0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x0001020e0768();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001020e0e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1020de060(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1020e0e04; end: 1020e0e43;  */

void FUN_1020e0e04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e57e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5a614;
  func_0x000107c61520(&UNK_10da5a614,&UNK_1104c9250);
  puRam0000000112e57e90 = puVar1;
  return;
}



/* Entry: 1020e0e44; end: 1020e0e4f;  */

void FUN_1020e0e44(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x0001020e0768();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001020e0e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1020de574(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1020e0e50; end: 1020e0e8b;  */

void FUN_1020e0e50(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x0001020e0768();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001020e0e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1020e0e8c; end: 1020e0f23;  */

void FUN_1020e0e8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e57eb0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57ea0;
  func_0x00010002969c(0x112e57ea0,&UNK_10da5b668);
  uVar2 = 0x112e57eb8;
  FUN_1020e0f30(0x112e57eb8,0x112e57ec0,&UNK_10da5b670,
                PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e57eb0 = puVar3;
  return;
}



/* Entry: 1020e0f24; end: 1020e0f2f;  */

void FUN_1020e0f24(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x0001020e0768();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001020e0e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1020de68c(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1020e0f30; end: 1020e0f73;  */

void FUN_1020e0f30(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1020e0f74; end: 1020e0f7b;  */

void FUN_1020e0f74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1020c030c();
    puVar5 = &UNK_1104c9430;
    func_0x000107c613fc(&UNK_1104c9430,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar3);
    puVar6 = &UNK_1104c96d8;
    func_0x000107c613fc(&UNK_1104c96d8,0x30,7);
    puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined **)(puVar6 + 0x18) = puVar2;
    *(undefined **)(puVar6 + 0x20) = puVar4;
    *(undefined **)(puVar6 + 0x28) = puVar1;
    func_0x000107c61434(puVar4);
    uVar7 = 0x62;
    func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5aa40,puVar6,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(puVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(uVar7);
  }
  return;
}



/* Entry: 1020e0f7c; end: 1020e1003;  */

undefined8 FUN_1020e0f7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1020e1004; end: 1020e101f;  */

void FUN_1020e1004(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}


