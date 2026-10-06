/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1034ee490; end: 1034ee7d7;  */

/* WARNING: Removing unreachable block (ram,0x0001034ee714) */

void FUN_1034ee490(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  long lStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined1 auStack_818 [424];
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
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
  long lStack_440;
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
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 auStack_3a0 [53];
  undefined8 auStack_1f8 [53];
  
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  lStack_3e0 = 1;
  uStack_3a8 = 0;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_670,auStack_1f8,0x1a1);
    puVar2 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar2 == 0x16) {
      puVar3 = &uStack_670;
      func_0x0001034e961c();
      uStack_438 = uStack_3d8;
      lStack_440 = lStack_3e0;
      uStack_428 = uStack_3c8;
      uStack_430 = uStack_3d0;
      uStack_418 = uStack_3b8;
      uStack_420 = uStack_3c0;
      uStack_408 = uStack_3a8;
      uStack_410 = uStack_3b0;
      uStack_458 = uStack_3f8;
      uStack_460 = uStack_400;
      uStack_448 = uStack_3e8;
      uStack_450 = uStack_3f0;
      func_0x000107c610b4(auStack_818,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_818,&uStack_9c0);
      puVar2 = &uStack_460;
      FUN_10350317c(puVar2,0x112f74d48,&UNK_10dbd0de0);
      uStack_3f8 = puVar3[1];
      uStack_400 = *puVar3;
      uStack_3e8 = puVar3[3];
      uStack_3f0 = puVar3[2];
      uStack_3b8 = puVar3[9];
      uStack_3c0 = puVar3[8];
      uStack_3a8 = puVar3[0xb];
      uStack_3b0 = puVar3[10];
      uStack_3d8 = puVar3[5];
      lStack_3e0 = puVar3[4];
      uStack_3c8 = puVar3[7];
      uStack_3d0 = puVar3[6];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502c94();
  (*pcVar6)(&uStack_400,&UNK_110668a98,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_498 = uStack_3d8;
    lStack_4a0 = lStack_3e0;
    uStack_488 = uStack_3c8;
    uStack_490 = uStack_3d0;
    uStack_478 = uStack_3b8;
    uStack_480 = uStack_3c0;
    uStack_468 = uStack_3a8;
    uStack_470 = uStack_3b0;
    uStack_4b8 = uStack_3f8;
    uStack_4c0 = uStack_400;
    uStack_4a8 = uStack_3e8;
    uStack_4b0 = uStack_3f0;
    uStack_438 = uStack_3d8;
    lStack_440 = lStack_3e0;
    uStack_428 = uStack_3c8;
    uStack_430 = uStack_3d0;
    uStack_418 = uStack_3b8;
    uStack_420 = uStack_3c0;
    uStack_408 = uStack_3a8;
    uStack_410 = uStack_3b0;
    uStack_458 = uStack_3f8;
    uStack_460 = uStack_400;
    uStack_448 = uStack_3e8;
    uStack_450 = uStack_3f0;
    if (lStack_3e0 != 1) {
      if (iVar1 == 1) {
        uStack_648 = uStack_3d8;
        lStack_650 = lStack_3e0;
        uStack_638 = uStack_3c8;
        uStack_640 = uStack_3d0;
        uStack_628 = uStack_3b8;
        uStack_630 = uStack_3c0;
        uStack_618 = uStack_3a8;
        uStack_620 = uStack_3b0;
        uStack_668 = uStack_3f8;
        uStack_670 = uStack_400;
        uStack_658 = uStack_3e8;
        uStack_660 = uStack_3f0;
        FUN_1034e962c(&uStack_670,auStack_818);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_648 = uStack_3d8;
        lStack_650 = lStack_3e0;
        uStack_638 = uStack_3c8;
        uStack_640 = uStack_3d0;
        uStack_628 = uStack_3b8;
        uStack_630 = uStack_3c0;
        uStack_618 = uStack_3a8;
        uStack_620 = uStack_3b0;
        uStack_668 = uStack_3f8;
        uStack_670 = uStack_400;
        uStack_658 = uStack_3e8;
        uStack_660 = uStack_3f0;
        FUN_1034e962c(&uStack_670,auStack_818);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&uStack_400,0x112f74d48,&UNK_10dbd0de0);
      uStack_998 = uStack_438;
      lStack_9a0 = lStack_440;
      uStack_988 = uStack_428;
      uStack_990 = uStack_430;
      uStack_978 = uStack_418;
      uStack_980 = uStack_420;
      uStack_968 = uStack_408;
      uStack_970 = uStack_410;
      uStack_9b8 = uStack_458;
      uStack_9c0 = uStack_460;
      uStack_9a8 = uStack_448;
      uStack_9b0 = uStack_450;
      func_0x0001034e9620(&uStack_9c0);
      func_0x000107c610b4(auStack_818,&uStack_9c0,0x1a1);
      func_0x0001034e92ac(auStack_818);
      func_0x000107c610b4(&uStack_670,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_818,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar2 = &uStack_670;
      goto LAB_1034ee668;
    }
  }
  uVar4 = 0x112f74d48;
  puVar5 = &UNK_10dbd0de0;
  puVar2 = &uStack_400;
LAB_1034ee668:
  FUN_10350317c(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034ee7d8; end: 1034eeb2b;  */

/* WARNING: Removing unreachable block (ram,0x0001034eea64) */

void FUN_1034ee7d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  long lStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined1 auStack_818 [424];
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 auStack_3a0 [53];
  undefined8 auStack_1f8 [53];
  
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  lStack_3e0 = 1;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_670,auStack_1f8,0x1a1);
    puVar2 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar2 == 0x17) {
      puVar3 = &uStack_670;
      FUN_1034e9668();
      uStack_438 = uStack_3d8;
      lStack_440 = lStack_3e0;
      uStack_428 = uStack_3c8;
      uStack_430 = uStack_3d0;
      uStack_418 = uStack_3b8;
      uStack_420 = uStack_3c0;
      uStack_410 = uStack_3b0;
      uStack_458 = uStack_3f8;
      uStack_460 = uStack_400;
      uStack_448 = uStack_3e8;
      uStack_450 = uStack_3f0;
      func_0x000107c610b4(auStack_818,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_818,&uStack_9c0);
      puVar2 = &uStack_460;
      FUN_10350317c(puVar2,0x112f74d50,&UNK_10dbd0de8);
      uStack_3f8 = puVar3[1];
      uStack_400 = *puVar3;
      uStack_3e8 = puVar3[3];
      uStack_3f0 = puVar3[2];
      uStack_3c8 = puVar3[7];
      uStack_3d0 = puVar3[6];
      uStack_3b8 = puVar3[9];
      uStack_3c0 = puVar3[8];
      uStack_3b0 = puVar3[10];
      uStack_3d8 = puVar3[5];
      lStack_3e0 = puVar3[4];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502cd4();
  (*pcVar6)(&uStack_400,&UNK_110669170,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_498 = uStack_3d8;
    lStack_4a0 = lStack_3e0;
    uStack_488 = uStack_3c8;
    uStack_490 = uStack_3d0;
    uStack_478 = uStack_3b8;
    uStack_480 = uStack_3c0;
    uStack_470 = uStack_3b0;
    uStack_4b8 = uStack_3f8;
    uStack_4c0 = uStack_400;
    uStack_4a8 = uStack_3e8;
    uStack_4b0 = uStack_3f0;
    uStack_438 = uStack_3d8;
    lStack_440 = lStack_3e0;
    uStack_428 = uStack_3c8;
    uStack_430 = uStack_3d0;
    uStack_418 = uStack_3b8;
    uStack_420 = uStack_3c0;
    uStack_410 = uStack_3b0;
    uStack_458 = uStack_3f8;
    uStack_460 = uStack_400;
    uStack_448 = uStack_3e8;
    uStack_450 = uStack_3f0;
    if (lStack_3e0 != 1) {
      if (iVar1 == 1) {
        uStack_648 = uStack_3d8;
        lStack_650 = lStack_3e0;
        uStack_638 = uStack_3c8;
        uStack_640 = uStack_3d0;
        uStack_628 = uStack_3b8;
        uStack_630 = uStack_3c0;
        uStack_620 = uStack_3b0;
        uStack_668 = uStack_3f8;
        uStack_670 = uStack_400;
        uStack_658 = uStack_3e8;
        uStack_660 = uStack_3f0;
        FUN_1034e9678(&uStack_670,auStack_818);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_648 = uStack_3d8;
        lStack_650 = lStack_3e0;
        uStack_638 = uStack_3c8;
        uStack_640 = uStack_3d0;
        uStack_628 = uStack_3b8;
        uStack_630 = uStack_3c0;
        uStack_620 = uStack_3b0;
        uStack_668 = uStack_3f8;
        uStack_670 = uStack_400;
        uStack_658 = uStack_3e8;
        uStack_660 = uStack_3f0;
        FUN_1034e9678(&uStack_670,auStack_818);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&uStack_400,0x112f74d50,&UNK_10dbd0de8);
      uStack_998 = uStack_438;
      lStack_9a0 = lStack_440;
      uStack_988 = uStack_428;
      uStack_990 = uStack_430;
      uStack_978 = uStack_418;
      uStack_980 = uStack_420;
      uStack_970 = uStack_410;
      uStack_9b8 = uStack_458;
      uStack_9c0 = uStack_460;
      uStack_9a8 = uStack_448;
      uStack_9b0 = uStack_450;
      FUN_1034e9668(&uStack_9c0);
      func_0x000107c610b4(auStack_818,&uStack_9c0,0x1a1);
      func_0x0001034e92ac(auStack_818);
      func_0x000107c610b4(&uStack_670,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_818,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar2 = &uStack_670;
      goto LAB_1034ee9b0;
    }
  }
  uVar4 = 0x112f74d50;
  puVar5 = &UNK_10dbd0de8;
  puVar2 = &uStack_400;
LAB_1034ee9b0:
  FUN_10350317c(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034eeb2c; end: 1034eebbf;  */

void FUN_1034eeb2c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x438;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x438,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034eebc0; end: 1034eec53;  */

void FUN_1034eebc0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x450;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x450,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034eec54; end: 1034ef197;  */

/* WARNING: Removing unreachable block (ram,0x0001034ef0a8) */

void FUN_1034eec54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x21;
  code *pcVar8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined1 auStack_a38 [424];
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
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
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
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
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
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [424];
  undefined1 auStack_1f8 [424];
  
  puVar5 = &uStack_be0;
  func_0x000103503154(&uStack_470);
  uStack_498 = uStack_3c8;
  uStack_4a0 = uStack_3d0;
  uStack_488 = uStack_3b8;
  uStack_490 = uStack_3c0;
  uStack_478 = uStack_3a8;
  uStack_480 = uStack_3b0;
  uStack_4d8 = uStack_408;
  uStack_4e0 = uStack_410;
  uStack_4c8 = uStack_3f8;
  uStack_4d0 = uStack_400;
  uStack_4a8 = uStack_3d8;
  uStack_4b0 = uStack_3e0;
  uStack_4b8 = uStack_3e8;
  uStack_4c0 = uStack_3f0;
  uStack_518 = uStack_448;
  uStack_520 = uStack_450;
  uStack_508 = uStack_438;
  uStack_510 = uStack_440;
  uStack_4e8 = uStack_418;
  uStack_4f0 = uStack_420;
  uStack_4f8 = uStack_428;
  uStack_500 = uStack_430;
  uStack_528 = uStack_458;
  uStack_530 = uStack_460;
  uStack_538 = uStack_468;
  uStack_540 = uStack_470;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    func_0x000107c610b4(&uStack_890,auStack_1f8,0x1a1);
    puVar3 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar3 == 0x18) {
      puVar4 = &uStack_890;
      FUN_1034e96b4();
      uStack_568 = uStack_498;
      uStack_570 = uStack_4a0;
      uStack_558 = uStack_488;
      uStack_560 = uStack_490;
      uStack_548 = uStack_478;
      uStack_550 = uStack_480;
      uStack_5a8 = uStack_4d8;
      uStack_5b0 = uStack_4e0;
      uStack_598 = uStack_4c8;
      uStack_5a0 = uStack_4d0;
      uStack_578 = uStack_4a8;
      uStack_580 = uStack_4b0;
      uStack_588 = uStack_4b8;
      uStack_590 = uStack_4c0;
      uStack_5e8 = uStack_518;
      uStack_5f0 = uStack_520;
      uStack_5d8 = uStack_508;
      uStack_5e0 = uStack_510;
      uStack_5b8 = uStack_4e8;
      uStack_5c0 = uStack_4f0;
      uStack_5c8 = uStack_4f8;
      uStack_5d0 = uStack_500;
      uStack_5f8 = uStack_528;
      uStack_600 = uStack_530;
      uStack_608 = uStack_538;
      uStack_610 = uStack_540;
      func_0x000107c610b4(auStack_a38,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_a38,&uStack_be0);
      FUN_10350317c(&uStack_610,0x112f74d58,&UNK_10dbd0df0);
      uStack_bd8 = puVar4[1];
      uStack_be0 = *puVar4;
      uStack_ba8 = puVar4[7];
      uStack_bb0 = puVar4[6];
      uStack_b98 = puVar4[9];
      uStack_ba0 = puVar4[8];
      uStack_bc8 = puVar4[3];
      uStack_bd0 = puVar4[2];
      uStack_bb8 = puVar4[5];
      uStack_bc0 = puVar4[4];
      uStack_b68 = puVar4[0xf];
      uStack_b70 = puVar4[0xe];
      uStack_b58 = puVar4[0x11];
      uStack_b60 = puVar4[0x10];
      uStack_b88 = puVar4[0xb];
      uStack_b90 = puVar4[10];
      uStack_b78 = puVar4[0xd];
      uStack_b80 = puVar4[0xc];
      uStack_b28 = puVar4[0x17];
      uStack_b30 = puVar4[0x16];
      uStack_b18 = puVar4[0x19];
      uStack_b20 = puVar4[0x18];
      uStack_b48 = puVar4[0x13];
      uStack_b50 = puVar4[0x12];
      uStack_b38 = puVar4[0x15];
      uStack_b40 = puVar4[0x14];
      func_0x000103503178(&uStack_be0);
      uStack_498 = uStack_b38;
      uStack_4a0 = uStack_b40;
      uStack_488 = uStack_b28;
      uStack_490 = uStack_b30;
      uStack_478 = uStack_b18;
      uStack_480 = uStack_b20;
      uStack_4d8 = uStack_b78;
      uStack_4e0 = uStack_b80;
      uStack_4c8 = uStack_b68;
      uStack_4d0 = uStack_b70;
      uStack_4a8 = uStack_b48;
      uStack_4b0 = uStack_b50;
      uStack_4b8 = uStack_b58;
      uStack_4c0 = uStack_b60;
      uStack_518 = uStack_bb8;
      uStack_520 = uStack_bc0;
      uStack_508 = uStack_ba8;
      uStack_510 = uStack_bb0;
      uStack_4e8 = uStack_b88;
      uStack_4f0 = uStack_b90;
      uStack_4f8 = uStack_b98;
      uStack_500 = uStack_ba0;
      uStack_528 = uStack_bc8;
      uStack_530 = uStack_bd0;
      uStack_538 = uStack_bd8;
      uStack_540 = uStack_be0;
      puVar3 = (undefined1 *)puVar5;
    }
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  func_0x000103502e14();
  (*pcVar8)(&uStack_540,&UNK_110660228,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_638 = uStack_498;
    uStack_640 = uStack_4a0;
    uStack_628 = uStack_488;
    uStack_630 = uStack_490;
    uStack_618 = uStack_478;
    uStack_620 = uStack_480;
    uStack_678 = uStack_4d8;
    uStack_680 = uStack_4e0;
    uStack_668 = uStack_4c8;
    uStack_670 = uStack_4d0;
    uStack_648 = uStack_4a8;
    uStack_650 = uStack_4b0;
    uStack_658 = uStack_4b8;
    uStack_660 = uStack_4c0;
    uStack_6b8 = uStack_518;
    uStack_6c0 = uStack_520;
    uStack_6a8 = uStack_508;
    uStack_6b0 = uStack_510;
    uStack_688 = uStack_4e8;
    uStack_690 = uStack_4f0;
    uStack_698 = uStack_4f8;
    uStack_6a0 = uStack_500;
    uStack_6c8 = uStack_528;
    uStack_6d0 = uStack_530;
    uStack_6d8 = uStack_538;
    uStack_6e0 = uStack_540;
    uStack_568 = uStack_498;
    uStack_570 = uStack_4a0;
    uStack_558 = uStack_488;
    uStack_560 = uStack_490;
    uStack_548 = uStack_478;
    uStack_550 = uStack_480;
    uStack_5a8 = uStack_4d8;
    uStack_5b0 = uStack_4e0;
    uStack_598 = uStack_4c8;
    uStack_5a0 = uStack_4d0;
    uStack_578 = uStack_4a8;
    uStack_580 = uStack_4b0;
    uStack_588 = uStack_4b8;
    uStack_590 = uStack_4c0;
    uStack_5e8 = uStack_518;
    uStack_5f0 = uStack_520;
    uStack_5d8 = uStack_508;
    uStack_5e0 = uStack_510;
    uStack_5b8 = uStack_4e8;
    uStack_5c0 = uStack_4f0;
    uStack_5c8 = uStack_4f8;
    uStack_5d0 = uStack_500;
    uStack_5f8 = uStack_528;
    uStack_600 = uStack_530;
    uStack_608 = uStack_538;
    uStack_610 = uStack_540;
    iVar1 = (int)&uStack_6e0;
    func_0x000100d54df4();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_7e8 = uStack_638;
        uStack_7f0 = uStack_640;
        uStack_7d8 = uStack_628;
        uStack_7e0 = uStack_630;
        uStack_7c8 = uStack_618;
        uStack_7d0 = uStack_620;
        uStack_828 = uStack_678;
        uStack_830 = uStack_680;
        uStack_818 = uStack_668;
        uStack_820 = uStack_670;
        uStack_808 = uStack_658;
        uStack_810 = uStack_660;
        uStack_7f8 = uStack_648;
        uStack_800 = uStack_650;
        uStack_868 = uStack_6b8;
        uStack_870 = uStack_6c0;
        uStack_858 = uStack_6a8;
        uStack_860 = uStack_6b0;
        uStack_848 = uStack_698;
        uStack_850 = uStack_6a0;
        uStack_838 = uStack_688;
        uStack_840 = uStack_690;
        uStack_888 = uStack_6d8;
        uStack_890 = uStack_6e0;
        uStack_878 = uStack_6c8;
        uStack_880 = uStack_6d0;
        FUN_1034a9504(&uStack_890,auStack_a38);
      }
      else {
        pcVar8 = *(code **)(param_4 + 8);
        uStack_7e8 = uStack_638;
        uStack_7f0 = uStack_640;
        uStack_7d8 = uStack_628;
        uStack_7e0 = uStack_630;
        uStack_7c8 = uStack_618;
        uStack_7d0 = uStack_620;
        uStack_828 = uStack_678;
        uStack_830 = uStack_680;
        uStack_818 = uStack_668;
        uStack_820 = uStack_670;
        uStack_808 = uStack_658;
        uStack_810 = uStack_660;
        uStack_7f8 = uStack_648;
        uStack_800 = uStack_650;
        uStack_868 = uStack_6b8;
        uStack_870 = uStack_6c0;
        uStack_858 = uStack_6a8;
        uStack_860 = uStack_6b0;
        uStack_848 = uStack_698;
        uStack_850 = uStack_6a0;
        uStack_838 = uStack_688;
        uStack_840 = uStack_690;
        uStack_888 = uStack_6d8;
        uStack_890 = uStack_6e0;
        uStack_878 = uStack_6c8;
        uStack_880 = uStack_6d0;
        FUN_1034a9504(&uStack_890,auStack_a38);
        (*pcVar8)(param_3,param_4);
      }
      FUN_10350317c(&uStack_540,0x112f74d58,&UNK_10dbd0df0);
      uStack_b38 = uStack_568;
      uStack_b40 = uStack_570;
      uStack_b28 = uStack_558;
      uStack_b30 = uStack_560;
      uStack_b18 = uStack_548;
      uStack_b20 = uStack_550;
      uStack_b78 = uStack_5a8;
      uStack_b80 = uStack_5b0;
      uStack_b68 = uStack_598;
      uStack_b70 = uStack_5a0;
      uStack_b58 = uStack_588;
      uStack_b60 = uStack_590;
      uStack_b48 = uStack_578;
      uStack_b50 = uStack_580;
      uStack_bb8 = uStack_5e8;
      uStack_bc0 = uStack_5f0;
      uStack_ba8 = uStack_5d8;
      uStack_bb0 = uStack_5e0;
      uStack_b98 = uStack_5c8;
      uStack_ba0 = uStack_5d0;
      uStack_b88 = uStack_5b8;
      uStack_b90 = uStack_5c0;
      uStack_bd8 = uStack_608;
      uStack_be0 = uStack_610;
      uStack_bc8 = uStack_5f8;
      uStack_bd0 = uStack_600;
      FUN_1034e96b4(&uStack_be0);
      func_0x000107c610b4(auStack_a38,&uStack_be0,0x1a1);
      func_0x0001034e92ac(auStack_a38);
      func_0x000107c610b4(&uStack_890,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_a38,0x1a1);
      uVar6 = 0x112f73c68;
      puVar7 = &UNK_10dbcfb78;
      puVar5 = &uStack_890;
      goto LAB_1034eefa4;
    }
  }
  uVar6 = 0x112f74d58;
  puVar7 = &UNK_10dbd0df0;
  puVar5 = &uStack_540;
LAB_1034eefa4:
  FUN_10350317c(puVar5,uVar6,puVar7);
  return;
}



/* Entry: 1034ef198; end: 1034ef22b;  */

void FUN_1034ef198(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x468;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103502dd4();
  (*pcVar2)(param_2 + 0x468,&UNK_11065fdd0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ef22c; end: 1034ef2bf;  */

void FUN_1034ef22c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x560;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x560,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ef2c0; end: 1034ef61b;  */

/* WARNING: Removing unreachable block (ram,0x0001034ef550) */

void FUN_1034ef2c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_9f0;
  long lStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined1 auStack_848 [424];
  undefined8 uStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_480;
  long lStack_478;
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
  undefined8 uStack_410;
  long lStack_408;
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
  undefined8 auStack_3a0 [53];
  undefined8 auStack_1f8 [53];
  
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  lStack_408 = 0;
  uStack_410 = 0;
  func_0x000107c610b4(auStack_3a0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1f8,param_1 + 0x20,0x1a1);
  puVar2 = auStack_3a0;
  FUN_1034e9250();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    func_0x000107c610b4(&uStack_6a0,auStack_1f8,0x1a1);
    puVar2 = auStack_1f8;
    func_0x0001034e9264();
    if ((int)puVar2 == 0x19) {
      puVar3 = &uStack_6a0;
      func_0x0001034e96c4();
      lStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_420 = 0;
      func_0x000107c610b4(auStack_848,auStack_3a0,0x1a1);
      FUN_1034e9270(auStack_848,&uStack_9f0);
      puVar2 = &uStack_480;
      FUN_10350317c(puVar2,0x112f74d60,&UNK_10dbd0df8);
      uStack_3f8 = puVar3[3];
      uStack_400 = puVar3[2];
      uStack_3e8 = puVar3[5];
      uStack_3f0 = puVar3[4];
      lStack_408 = puVar3[1];
      uStack_410 = *puVar3;
      uStack_3c8 = puVar3[9];
      uStack_3d0 = puVar3[8];
      uStack_3b8 = puVar3[0xb];
      uStack_3c0 = puVar3[10];
      uStack_3b0 = puVar3[0xc];
      uStack_3d8 = puVar3[7];
      uStack_3e0 = puVar3[6];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1034c7298();
  (*pcVar6)(&uStack_410,&UNK_110663558,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_4a8 = uStack_3c8;
    uStack_4b0 = uStack_3d0;
    uStack_498 = uStack_3b8;
    uStack_4a0 = uStack_3c0;
    uStack_490 = uStack_3b0;
    lStack_4e8 = lStack_408;
    uStack_4f0 = uStack_410;
    uStack_4d8 = uStack_3f8;
    uStack_4e0 = uStack_400;
    uStack_4b8 = uStack_3d8;
    uStack_4c0 = uStack_3e0;
    uStack_4c8 = uStack_3e8;
    uStack_4d0 = uStack_3f0;
    uStack_468 = uStack_3f8;
    uStack_470 = uStack_400;
    lStack_478 = lStack_408;
    uStack_480 = uStack_410;
    uStack_420 = uStack_3b0;
    uStack_458 = uStack_3e8;
    uStack_460 = uStack_3f0;
    uStack_448 = uStack_3d8;
    uStack_450 = uStack_3e0;
    uStack_428 = uStack_3b8;
    uStack_430 = uStack_3c0;
    uStack_438 = uStack_3c8;
    uStack_440 = uStack_3d0;
    if (lStack_408 != 0) {
      if (iVar1 == 1) {
        uStack_658 = uStack_3c8;
        uStack_660 = uStack_3d0;
        uStack_648 = uStack_3b8;
        uStack_650 = uStack_3c0;
        uStack_640 = uStack_3b0;
        lStack_698 = lStack_408;
        uStack_6a0 = uStack_410;
        uStack_688 = uStack_3f8;
        uStack_690 = uStack_400;
        uStack_678 = uStack_3e8;
        uStack_680 = uStack_3f0;
        uStack_668 = uStack_3d8;
        uStack_670 = uStack_3e0;
        func_0x0001034c730c(&uStack_6a0,auStack_848);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_658 = uStack_3c8;
        uStack_660 = uStack_3d0;
        uStack_648 = uStack_3b8;
        uStack_650 = uStack_3c0;
        uStack_640 = uStack_3b0;
        lStack_698 = lStack_408;
        uStack_6a0 = uStack_410;
        uStack_688 = uStack_3f8;
        uStack_690 = uStack_400;
        uStack_678 = uStack_3e8;
        uStack_680 = uStack_3f0;
        uStack_668 = uStack_3d8;
        uStack_670 = uStack_3e0;
        func_0x0001034c730c(&uStack_6a0,auStack_848);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10350317c(&uStack_410,0x112f74d60,&UNK_10dbd0df8);
      uStack_9a8 = uStack_438;
      uStack_9b0 = uStack_440;
      uStack_998 = uStack_428;
      uStack_9a0 = uStack_430;
      uStack_990 = uStack_420;
      lStack_9e8 = lStack_478;
      uStack_9f0 = uStack_480;
      uStack_9d8 = uStack_468;
      uStack_9e0 = uStack_470;
      uStack_9c8 = uStack_458;
      uStack_9d0 = uStack_460;
      uStack_9b8 = uStack_448;
      uStack_9c0 = uStack_450;
      func_0x0001034e96c8(&uStack_9f0);
      func_0x000107c610b4(auStack_848,&uStack_9f0,0x1a1);
      func_0x0001034e92ac(auStack_848);
      func_0x000107c610b4(&uStack_6a0,param_1 + 0x20,0x1a1);
      func_0x000107c610b4(param_1 + 0x20,auStack_848,0x1a1);
      uVar4 = 0x112f73c68;
      puVar5 = &UNK_10dbcfb78;
      puVar2 = &uStack_6a0;
      goto LAB_1034ef438;
    }
  }
  uVar4 = 0x112f74d60;
  puVar5 = &UNK_10dbd0df8;
  puVar2 = &uStack_410;
LAB_1034ef438:
  FUN_10350317c(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1034ef61c; end: 1034ef6af;  */

void FUN_1034ef61c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x580;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103502d94();
  (*pcVar2)(param_2 + 0x580,&UNK_11065fac8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ef6b0; end: 1034ef743;  */

void FUN_1034ef6b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x5d8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103502d54();
  (*pcVar2)(param_2 + 0x5d8,&UNK_11065f658,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ef744; end: 1034ef7d7;  */

void FUN_1034ef744(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x5f8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103502d14();
  (*pcVar2)(param_2 + 0x5f8,&UNK_11065dfc0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034ef7d8; end: 1034f03bf;  */

void FUN_1034ef7d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x21;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined1 auStack_1180 [424];
  undefined1 auStack_fd8 [424];
  undefined1 auStack_e30 [424];
  long lStack_c88;
  undefined1 uStack_c80;
  undefined1 auStack_ae0 [24];
  undefined1 auStack_ac8 [24];
  undefined1 auStack_ab0 [424];
  undefined1 auStack_908 [424];
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [424];
  undefined1 auStack_588 [424];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [424];
  long lStack_220;
  undefined1 uStack_218;
  undefined1 auStack_78 [24];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  lVar7 = lVar5;
  func_0x000103559d2c(lVar5,uVar1);
  lVar3 = 0;
  func_0x000103559d2c(0,1);
  if (lVar7 != lVar3) {
    pcVar6 = *(code **)(param_4 + 0x80);
    lStack_220 = lVar5;
    uStack_218 = uVar1;
    func_0x000101568cc4();
    (*pcVar6)(&lStack_220,1,&UNK_110664c98,lVar3,param_3,param_4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000107c610b4(auStack_3c8,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(&lStack_220,param_1 + 0x20,0x1a1);
  iVar2 = (int)auStack_3c8;
  FUN_1034e9250();
  if (iVar2 != 1) {
    plVar4 = &lStack_220;
    func_0x0001034e9264();
    switch((ulong)plVar4 & 0xffffffff) {
    case 0:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f03c0(param_1,param_2,param_3,param_4);
      break;
    case 1:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f0498(param_1,param_2,param_3,param_4);
      break;
    case 2:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f0574(param_1,param_2,param_3,param_4);
      break;
    case 3:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f0650(param_1,param_2,param_3,param_4);
      break;
    case 4:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f072c(param_1,param_2,param_3,param_4);
      break;
    case 5:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f0818(param_1,param_2,param_3,param_4);
      break;
    case 6:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f08f4(param_1,param_2,param_3,param_4);
      break;
    case 7:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f09d0(param_1,param_2,param_3,param_4);
      break;
    case 8:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f0aac(param_1,param_2,param_3,param_4);
      break;
    case 9:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f0b88(param_1,param_2,param_3,param_4);
      break;
    case 10:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f0c64(param_1,param_2,param_3,param_4);
      break;
    case 0xb:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f0d40(param_1,param_2,param_3,param_4);
      break;
    case 0xc:
      func_0x000107c610b4(auStack_588,auStack_3c8,0x1a1);
      FUN_1034e9270(auStack_588,auStack_730);
      FUN_1034f0e1c(param_1,param_2,param_3,param_4);
      break;
    default:
      goto LAB_1034efbf8;
    }
    if (unaff_x21 != 0) {
      FUN_10350317c(auStack_3c8,0x112f73c68,&UNK_10dbcfb78);
      return;
    }
    FUN_10350317c(auStack_3c8,0x112f73c68,&UNK_10dbcfb78);
  }
LAB_1034efbf8:
  func_0x000107c61428(param_1 + 0x1c8,auStack_3e0,0,0);
  lVar7 = *(long *)(param_1 + 0x1c8);
  if (*(long *)(lVar7 + 0x10) != 0) {
    pcVar6 = *(code **)(param_4 + 0x118);
    func_0x000101568c04();
    func_0x000107c61434(lVar7);
    (*pcVar6)();
    if (unaff_x21 != 0) {
      func_0x000107c6142c(lVar7);
      return;
    }
    func_0x000107c6142c(lVar7);
  }
  FUN_1034f0f04(param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  FUN_1034f0fa4(param_1,param_2,param_3,param_4);
  FUN_1034f105c(param_1,param_2,param_3,param_4);
  FUN_1034f1104(param_1,param_2,param_3,param_4);
  FUN_1034f11b0(param_1,param_2,param_3,param_4);
  FUN_1034f1258(param_1,param_2,param_3,param_4);
  FUN_1034f1304(param_1,param_2,param_3,param_4);
  func_0x000107c610b4(auStack_730,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_588,param_1 + 0x20,0x1a1);
  iVar2 = (int)auStack_730;
  FUN_1034e9250();
  if (iVar2 != 1) {
    iVar2 = (int)auStack_588;
    func_0x0001034e9264();
    if (iVar2 == 0xe) {
      func_0x000107c610b4(auStack_908,auStack_730,0x1a1);
      FUN_1034e9270(auStack_908,auStack_ab0);
      FUN_1034f1494(param_1,param_2,param_3,param_4);
    }
    else {
      if (iVar2 != 0xd) goto LAB_1034efdf0;
      func_0x000107c610b4(auStack_908,auStack_730,0x1a1);
      FUN_1034e9270(auStack_908,auStack_ab0);
      FUN_1034f13b0(param_1,param_2,param_3,param_4);
    }
    FUN_10350317c(auStack_730,0x112f73c68,&UNK_10dbcfb78);
  }
LAB_1034efdf0:
  FUN_1034f1570(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x368,auStack_748,0,0);
  lVar7 = *(long *)(param_1 + 0x368);
  if (*(long *)(lVar7 + 0x10) != 0) {
    pcVar6 = *(code **)(param_4 + 0x118);
    func_0x000101568c04();
    func_0x000107c61434(lVar7);
    (*pcVar6)();
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c61428(param_1 + 0x370,auStack_760,0,0);
  lVar7 = *(long *)(param_1 + 0x370);
  if (*(long *)(lVar7 + 0x10) != 0) {
    pcVar6 = *(code **)(param_4 + 0x118);
    func_0x000101568c04();
    func_0x000107c61434(lVar7);
    (*pcVar6)();
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c610b4(auStack_ab0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_908,param_1 + 0x20,0x1a1);
  iVar2 = (int)auStack_ab0;
  FUN_1034e9250();
  if (iVar2 != 1) {
    iVar2 = (int)auStack_908;
    func_0x0001034e9264();
    if (iVar2 < 0x11) {
      if (iVar2 == 0xf) {
        func_0x000107c610b4(&lStack_c88,auStack_ab0,0x1a1);
        FUN_1034e9270(&lStack_c88,auStack_e30);
        FUN_1034f169c(param_1,param_2,param_3,param_4);
      }
      else {
        if (iVar2 != 0x10) goto LAB_1034f0098;
        func_0x000107c610b4(&lStack_c88,auStack_ab0,0x1a1);
        FUN_1034e9270(&lStack_c88,auStack_e30);
        FUN_1034f1790(param_1,param_2,param_3,param_4);
      }
    }
    else if (iVar2 == 0x11) {
      func_0x000107c610b4(&lStack_c88,auStack_ab0,0x1a1);
      FUN_1034e9270(&lStack_c88,auStack_e30);
      FUN_1034f186c(param_1,param_2,param_3,param_4);
    }
    else if (iVar2 == 0x12) {
      func_0x000107c610b4(&lStack_c88,auStack_ab0,0x1a1);
      FUN_1034e9270(&lStack_c88,auStack_e30);
      FUN_1034f1948(param_1,param_2,param_3,param_4);
    }
    else {
      if (iVar2 != 0x13) goto LAB_1034f0098;
      func_0x000107c610b4(&lStack_c88,auStack_ab0,0x1a1);
      FUN_1034e9270(&lStack_c88,auStack_e30);
      FUN_1034f1a44(param_1,param_2,param_3,param_4);
    }
    FUN_10350317c(auStack_ab0,0x112f73c68,&UNK_10dbcfb78);
  }
LAB_1034f0098:
  lVar7 = param_1 + 0x378;
  func_0x000107c61428(lVar7,auStack_ac8,0,0);
  if (*(long *)(param_1 + 0x378) != 0) {
    uStack_c80 = *(undefined1 *)(param_1 + 0x380);
    pcVar6 = *(code **)(param_4 + 0x80);
    lStack_c88 = *(long *)(param_1 + 0x378);
    func_0x0001015c9d14();
    (*pcVar6)(&lStack_c88,0x21,&UNK_11065dc68,lVar7,param_3,param_4);
  }
  FUN_1034f1b30(param_1,param_2,param_3,param_4);
  FUN_1034f1bdc(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x3a0,auStack_ae0,0,0);
  lVar7 = *(long *)(param_1 + 0x3a0);
  if (*(long *)(lVar7 + 0x10) != 0) {
    pcVar6 = *(code **)(param_4 + 0x118);
    func_0x000101568c04();
    func_0x000107c61434(lVar7);
    (*pcVar6)();
    func_0x000107c6142c(lVar7);
  }
  FUN_1034f1ccc(param_1,param_2,param_3,param_4);
  FUN_1034f1d74(param_1,param_2,param_3,param_4);
  FUN_1034f1e38(param_1,param_2,param_3,param_4);
  FUN_1034f1f10(param_1,param_2,param_3,param_4);
  FUN_1034f1fb8(param_1,param_2,param_3,param_4);
  func_0x000107c610b4(auStack_e30,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(&lStack_c88,param_1 + 0x20,0x1a1);
  iVar2 = (int)auStack_e30;
  FUN_1034e9250();
  if (iVar2 != 1) {
    iVar2 = (int)&lStack_c88;
    func_0x0001034e9264();
    if (iVar2 == 0x17) {
      func_0x000107c610b4(auStack_fd8,auStack_e30,0x1a1);
      FUN_1034e9270(auStack_fd8,auStack_1180);
      FUN_1034f2144(param_1,param_2,param_3,param_4);
    }
    else {
      if (iVar2 != 0x16) goto LAB_1034f02e4;
      func_0x000107c610b4(auStack_fd8,auStack_e30,0x1a1);
      FUN_1034e9270(auStack_fd8,auStack_1180);
      FUN_1034f2060(param_1,param_2,param_3,param_4);
    }
    FUN_10350317c(auStack_e30,0x112f73c68,&UNK_10dbcfb78);
  }
LAB_1034f02e4:
  FUN_1034f2230(param_1,param_2,param_3,param_4);
  FUN_1034f22d8(param_1,param_2,param_3,param_4);
  FUN_1034f2384(param_1,param_2,param_3,param_4);
  FUN_1034f248c(param_1,param_2,param_3,param_4);
  FUN_1034f260c(param_1,param_2,param_3,param_4);
  FUN_1034f26b0(param_1,param_2,param_3,param_4);
  FUN_1034f27a8(param_1,param_2,param_3,param_4);
  FUN_1034f2864(param_1,param_2,param_3,param_4);
  FUN_1034f2918(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1034f03c0; end: 1034f0497;  */

void FUN_1034f03c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0) {
      puVar2 = auStack_538;
      func_0x0001034e926c();
      uStack_540 = puVar2[4];
      uStack_558 = puVar2[1];
      uStack_560 = *puVar2;
      uStack_548 = puVar2[3];
      uStack_550 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502794();
      (*pcVar3)(&uStack_560,2,&UNK_110669320,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f0498);
  (*pcVar3)();
}



/* Entry: 1034f0498; end: 1034f0573;  */

void FUN_1034f0498(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 1) {
      puVar2 = auStack_538;
      func_0x0001034e92b0();
      uStack_540 = puVar2[2];
      uStack_548 = puVar2[1];
      uStack_550 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001035027d4();
      (*pcVar3)(&uStack_550,3,&UNK_110667f00,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f0574);
  (*pcVar3)();
}



/* Entry: 1034f0574; end: 1034f064f;  */

void FUN_1034f0574(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 2) {
      puVar2 = auStack_538;
      func_0x0001034e92c0();
      uStack_578 = puVar2[1];
      uStack_580 = *puVar2;
      uStack_568 = puVar2[3];
      uStack_570 = puVar2[2];
      uStack_558 = puVar2[5];
      uStack_560 = puVar2[4];
      uStack_548 = puVar2[7];
      uStack_550 = puVar2[6];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502814();
      (*pcVar3)(&uStack_580,4,&UNK_1106688e8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f0650);
  (*pcVar3)();
}



/* Entry: 1034f0650; end: 1034f072b;  */

void FUN_1034f0650(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 3) {
      puVar2 = auStack_538;
      FUN_1034e930c();
      uStack_540 = puVar2[2];
      uStack_548 = puVar2[1];
      uStack_550 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502854();
      (*pcVar3)(&uStack_550,5,&UNK_11066a9c0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f072c);
  (*pcVar3)();
}



/* Entry: 1034f072c; end: 1034f0817;  */

void FUN_1034f072c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 4) {
      puVar2 = auStack_538;
      func_0x0001034e931c();
      uStack_5a8 = puVar2[1];
      uStack_5b0 = *puVar2;
      uStack_598 = puVar2[3];
      uStack_5a0 = puVar2[2];
      uStack_588 = puVar2[5];
      uStack_590 = puVar2[4];
      uStack_578 = puVar2[7];
      uStack_580 = puVar2[6];
      uStack_568 = puVar2[9];
      uStack_570 = puVar2[8];
      uStack_558 = puVar2[0xb];
      uStack_560 = puVar2[10];
      uStack_548 = puVar2[0xd];
      uStack_550 = puVar2[0xc];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502894();
      (*pcVar3)(&uStack_5b0,6,&UNK_110668730,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f0818);
  (*pcVar3)();
}



/* Entry: 1034f0818; end: 1034f08f3;  */

void FUN_1034f0818(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 5) {
      puVar2 = auStack_538;
      FUN_1034e9368();
      uStack_540 = puVar2[2];
      uStack_548 = puVar2[1];
      uStack_550 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001035028d4();
      (*pcVar3)(&uStack_550,7,&UNK_110664720,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f08f4);
  (*pcVar3)();
}



/* Entry: 1034f08f4; end: 1034f09cf;  */

void FUN_1034f08f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auStack_6d8 [416];
  undefined1 auStack_538 [424];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 6) {
      puVar2 = auStack_538;
      func_0x0001034e9378(puVar2);
      puVar3 = auStack_6d8;
      func_0x000107c610b4(puVar3,puVar2,0x1a0);
      pcVar4 = *(code **)(param_4 + 0x88);
      func_0x000103502914();
      (*pcVar4)(auStack_6d8,8,&UNK_1106659d0,puVar3,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1034f09d0);
  (*pcVar4)();
}



/* Entry: 1034f09d0; end: 1034f0aab;  */

void FUN_1034f09d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auStack_698 [352];
  undefined1 auStack_538 [424];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 7) {
      puVar2 = auStack_538;
      func_0x0001034e9388(puVar2);
      puVar3 = auStack_698;
      func_0x000107c610b4(puVar3,puVar2,0x160);
      pcVar4 = *(code **)(param_4 + 0x88);
      func_0x000103502954();
      (*pcVar4)(auStack_698,9,&UNK_110669598,puVar3,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1034f0aac);
  (*pcVar4)();
}



/* Entry: 1034f0aac; end: 1034f0b87;  */

void FUN_1034f0aac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 8) {
      puVar2 = auStack_538;
      func_0x0001034e9398();
      uStack_540 = puVar2[2];
      uStack_548 = puVar2[1];
      uStack_550 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502994();
      (*pcVar3)(&uStack_550,10,&UNK_110666c90,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f0b88);
  (*pcVar3)();
}



/* Entry: 1034f0b88; end: 1034f0c63;  */

void FUN_1034f0b88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 9) {
      puVar2 = auStack_538;
      func_0x0001034e93a8();
      uStack_540 = puVar2[2];
      uStack_548 = puVar2[1];
      uStack_550 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001035029d4();
      (*pcVar3)(&uStack_550,0xb,&UNK_110669630,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f0c64);
  (*pcVar3)();
}



/* Entry: 1034f0c64; end: 1034f0d3f;  */

void FUN_1034f0c64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 10) {
      puVar2 = auStack_538;
      func_0x0001034e93b8();
      uStack_540 = puVar2[2];
      uStack_548 = puVar2[1];
      uStack_550 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502a14();
      (*pcVar3)(&uStack_550,0xc,&UNK_110665b00,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f0d40);
  (*pcVar3)();
}



/* Entry: 1034f0d40; end: 1034f0e1b;  */

void FUN_1034f0d40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0xb) {
      puVar2 = auStack_538;
      func_0x0001034e93c8();
      uStack_578 = puVar2[1];
      uStack_580 = *puVar2;
      uStack_568 = puVar2[3];
      uStack_570 = puVar2[2];
      uStack_558 = puVar2[5];
      uStack_560 = puVar2[4];
      uStack_548 = puVar2[7];
      uStack_550 = puVar2[6];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502a54();
      (*pcVar3)(&uStack_580,0xd,&UNK_110668e10,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f0e1c);
  (*pcVar3)();
}



/* Entry: 1034f0e1c; end: 1034f0f03;  */

void FUN_1034f0e1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0xc) {
      puVar2 = auStack_538;
      FUN_1034e9414();
      uStack_568 = *puVar2;
      uStack_540 = puVar2[5];
      uStack_558 = puVar2[2];
      uStack_560 = puVar2[1];
      uStack_548 = puVar2[4];
      uStack_550 = puVar2[3];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502a94();
      (*pcVar3)(&uStack_568,0xe,&UNK_1106651a0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f0f04);
  (*pcVar3)();
}



/* Entry: 1034f0f04; end: 1034f0fa3;  */

void FUN_1034f0f04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x1d0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0x1e0);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1d8);
    uStack_70 = *(undefined8 *)(param_1 + 0x1d0);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1034ffecc();
    (*pcVar2)(&uStack_70,0x10,&UNK_11065d750,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f0fa4; end: 1034f105b;  */

void FUN_1034f0fa4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x1e8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x228);
  if (lStack_70 != 1) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x1f0);
    uStack_b0 = *puVar1;
    uStack_98 = *(undefined8 *)(param_1 + 0x200);
    uStack_a0 = *(undefined8 *)(param_1 + 0x1f8);
    uStack_88 = *(undefined8 *)(param_1 + 0x210);
    uStack_90 = *(undefined8 *)(param_1 + 0x208);
    uStack_78 = *(undefined8 *)(param_1 + 0x220);
    uStack_80 = *(undefined8 *)(param_1 + 0x218);
    uStack_60 = *(undefined8 *)(param_1 + 0x238);
    uStack_68 = *(undefined8 *)(param_1 + 0x230);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x000103502f54();
    (*pcVar3)(&uStack_b0,0x11,&UNK_1106698f0,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1034f105c; end: 1034f1103;  */

void FUN_1034f105c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x240;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x250);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x248);
    uStack_70 = *(undefined8 *)(param_1 + 0x240);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x12,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f1104; end: 1034f11af;  */

void FUN_1034f1104(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 600);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x268);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x260);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x13,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1034f11b0; end: 1034f1257;  */

void FUN_1034f11b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x270;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x280);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x278);
    uStack_70 = *(undefined8 *)(param_1 + 0x270);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x14,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f1258; end: 1034f1303;  */

void FUN_1034f1258(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x288);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x298);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x290);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x15,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1034f1304; end: 1034f13af;  */

void FUN_1034f1304(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x2a0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x2a0) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x2a0) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x2b0);
    uStack_68 = *(undefined8 *)(param_1 + 0x2a8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0x16,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f13b0; end: 1034f1493;  */

void FUN_1034f13b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0xd) {
      puVar2 = auStack_538;
      func_0x0001034e9424();
      uStack_598 = puVar2[1];
      uStack_5a0 = *puVar2;
      uStack_588 = puVar2[3];
      uStack_590 = puVar2[2];
      uStack_578 = puVar2[5];
      uStack_580 = puVar2[4];
      uStack_568 = puVar2[7];
      uStack_570 = puVar2[6];
      uStack_558 = puVar2[9];
      uStack_560 = puVar2[8];
      uStack_548 = puVar2[0xb];
      uStack_550 = puVar2[10];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502ad4();
      (*pcVar3)(&uStack_5a0,0x17,&UNK_1106606f8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f1494);
  (*pcVar3)();
}



/* Entry: 1034f1494; end: 1034f156f;  */

void FUN_1034f1494(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auStack_648 [272];
  undefined1 auStack_538 [424];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0xe) {
      puVar2 = auStack_538;
      func_0x0001034e9434(puVar2);
      puVar3 = auStack_648;
      func_0x000107c610b4(puVar3,puVar2,0x110);
      pcVar4 = *(code **)(param_4 + 0x88);
      func_0x000103502b14();
      (*pcVar4)(auStack_648,0x18,&UNK_11065e438,puVar3,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1034f1570);
  (*pcVar4)();
}



/* Entry: 1034f1570; end: 1034f169b;  */

void FUN_1034f1570(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined1 auStack_1b8 [24];
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
  
  puVar1 = (undefined8 *)(param_1 + 0x2b8);
  func_0x000107c61428(puVar1,auStack_1b8,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0x330);
  uStack_80 = *(undefined8 *)(param_1 + 0x328);
  uStack_118 = *(undefined8 *)(param_1 + 0x340);
  uStack_120 = *(undefined8 *)(param_1 + 0x338);
  uStack_68 = *(undefined8 *)(param_1 + 0x340);
  uStack_70 = *(undefined8 *)(param_1 + 0x338);
  uStack_108 = *(undefined8 *)(param_1 + 0x350);
  uStack_110 = *(undefined8 *)(param_1 + 0x348);
  uStack_58 = *(undefined8 *)(param_1 + 0x350);
  uStack_60 = *(undefined8 *)(param_1 + 0x348);
  uStack_f8 = *(undefined8 *)(param_1 + 0x360);
  uStack_100 = *(undefined8 *)(param_1 + 0x358);
  uStack_b8 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_158 = *(undefined8 *)(param_1 + 0x300);
  uStack_160 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_a8 = *(undefined8 *)(param_1 + 0x300);
  uStack_b0 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_148 = *(undefined8 *)(param_1 + 0x310);
  uStack_150 = *(undefined8 *)(param_1 + 0x308);
  uStack_98 = *(undefined8 *)(param_1 + 0x310);
  uStack_a0 = *(undefined8 *)(param_1 + 0x308);
  uStack_138 = *(undefined8 *)(param_1 + 800);
  uStack_140 = *(undefined8 *)(param_1 + 0x318);
  uStack_88 = *(undefined8 *)(param_1 + 800);
  uStack_90 = *(undefined8 *)(param_1 + 0x318);
  uStack_128 = *(undefined8 *)(param_1 + 0x330);
  uStack_130 = *(undefined8 *)(param_1 + 0x328);
  uStack_198 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_1a0 = *puVar1;
  uStack_188 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_190 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_178 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_180 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_168 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_170 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_e8 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_f0 = *puVar1;
  uStack_d8 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_c8 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_48 = *(undefined8 *)(param_1 + 0x360);
  uStack_50 = *(undefined8 *)(param_1 + 0x358);
  puVar1 = &uStack_1a0;
  FUN_1034fe93c();
  if ((int)puVar1 != 1) {
    uStack_1e8 = uStack_68;
    uStack_1f0 = uStack_70;
    uStack_1d8 = uStack_58;
    uStack_1e0 = uStack_60;
    uStack_1c8 = uStack_48;
    uStack_1d0 = uStack_50;
    uStack_228 = uStack_a8;
    uStack_230 = uStack_b0;
    uStack_218 = uStack_98;
    uStack_220 = uStack_a0;
    uStack_208 = uStack_88;
    uStack_210 = uStack_90;
    uStack_1f8 = uStack_78;
    uStack_200 = uStack_80;
    uStack_268 = uStack_e8;
    uStack_270 = uStack_f0;
    uStack_258 = uStack_d8;
    uStack_260 = uStack_e0;
    uStack_248 = uStack_c8;
    uStack_250 = uStack_d0;
    uStack_238 = uStack_b8;
    uStack_240 = uStack_c0;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103502f14();
    (*pcVar2)(&uStack_270,0x19,&UNK_11065e170,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f169c; end: 1034f178f;  */

void FUN_1034f169c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0xf) {
      puVar2 = auStack_538;
      FUN_1034e9480();
      uStack_598 = puVar2[1];
      uStack_5a0 = *puVar2;
      uStack_588 = puVar2[3];
      uStack_590 = puVar2[2];
      uStack_578 = puVar2[5];
      uStack_580 = puVar2[4];
      uStack_568 = puVar2[7];
      uStack_570 = puVar2[6];
      uStack_558 = puVar2[9];
      uStack_560 = puVar2[8];
      uStack_548 = puVar2[0xb];
      uStack_550 = puVar2[10];
      uStack_540 = puVar2[0xc];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502b54();
      (*pcVar3)(&uStack_5a0,0x1c,&UNK_110666108,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f1790);
  (*pcVar3)();
}



/* Entry: 1034f1790; end: 1034f186b;  */

void FUN_1034f1790(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0x10) {
      puVar2 = auStack_538;
      FUN_1034e94cc();
      uStack_578 = puVar2[1];
      uStack_580 = *puVar2;
      uStack_568 = puVar2[3];
      uStack_570 = puVar2[2];
      uStack_558 = puVar2[5];
      uStack_560 = puVar2[4];
      uStack_548 = puVar2[7];
      uStack_550 = puVar2[6];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502b94();
      (*pcVar3)(&uStack_580,0x1d,&UNK_110664ff0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f186c);
  (*pcVar3)();
}



/* Entry: 1034f186c; end: 1034f1947;  */

void FUN_1034f186c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0x11) {
      puVar2 = auStack_538;
      FUN_1034e9518();
      uStack_578 = puVar2[1];
      uStack_580 = *puVar2;
      uStack_568 = puVar2[3];
      uStack_570 = puVar2[2];
      uStack_558 = puVar2[5];
      uStack_560 = puVar2[4];
      uStack_548 = puVar2[7];
      uStack_550 = puVar2[6];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502bd4();
      (*pcVar3)(&uStack_580,0x1e,&UNK_110666ae0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f1948);
  (*pcVar3)();
}



/* Entry: 1034f1948; end: 1034f1a43;  */

void FUN_1034f1948(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0x12) {
      puVar2 = auStack_538;
      FUN_1034e9564();
      uStack_5f8 = puVar2[1];
      uStack_600 = *puVar2;
      uStack_5e8 = puVar2[3];
      uStack_5f0 = puVar2[2];
      uStack_5d8 = puVar2[5];
      uStack_5e0 = puVar2[4];
      uStack_5c8 = puVar2[7];
      uStack_5d0 = puVar2[6];
      uStack_5b8 = puVar2[9];
      uStack_5c0 = puVar2[8];
      uStack_5a8 = puVar2[0xb];
      uStack_5b0 = puVar2[10];
      uStack_598 = puVar2[0xd];
      uStack_5a0 = puVar2[0xc];
      uStack_588 = puVar2[0xf];
      uStack_590 = puVar2[0xe];
      uStack_578 = puVar2[0x11];
      uStack_580 = puVar2[0x10];
      uStack_568 = puVar2[0x13];
      uStack_570 = puVar2[0x12];
      uStack_558 = puVar2[0x15];
      uStack_560 = puVar2[0x14];
      uStack_548 = puVar2[0x17];
      uStack_550 = puVar2[0x16];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502c14();
      (*pcVar3)(&uStack_600,0x1f,&UNK_110668c48,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f1a44);
  (*pcVar3)();
}



/* Entry: 1034f1a44; end: 1034f1b2f;  */

void FUN_1034f1a44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0x13) {
      puVar2 = auStack_538;
      func_0x0001034e9574();
      uStack_578 = puVar2[1];
      uStack_580 = *puVar2;
      uStack_568 = puVar2[3];
      uStack_570 = puVar2[2];
      uStack_558 = puVar2[5];
      uStack_560 = puVar2[4];
      uStack_548 = puVar2[7];
      uStack_550 = puVar2[6];
      uStack_540 = puVar2[8];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502c54();
      (*pcVar3)(&uStack_580,0x20,&UNK_11065f8d8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f1b30);
  (*pcVar3)();
}



/* Entry: 1034f1b30; end: 1034f1bdb;  */

void FUN_1034f1b30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x388;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x398);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x390);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x388);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar2)(auStack_70,0x22,&UNK_110790980,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f1bdc; end: 1034f1ccb;  */

void FUN_1034f1bdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0x14) {
      puVar2 = auStack_538;
      FUN_1034e95c0();
      uStack_588 = puVar2[1];
      uStack_590 = *puVar2;
      uStack_578 = puVar2[3];
      uStack_580 = puVar2[2];
      uStack_568 = puVar2[5];
      uStack_570 = puVar2[4];
      uStack_558 = puVar2[7];
      uStack_560 = puVar2[6];
      uStack_548 = puVar2[9];
      uStack_550 = puVar2[8];
      uStack_540 = puVar2[10];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502ed4();
      (*pcVar3)(&uStack_590,0x23,&UNK_110660ea0,puVar2,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1034f1ccc; end: 1034f1d73;  */

void FUN_1034f1ccc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x3a8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x3a8) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x3a8) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x3b8);
    uStack_68 = *(undefined8 *)(param_1 + 0x3b0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0x25,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f1d74; end: 1034f1e37;  */

void FUN_1034f1d74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x3c0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_70 = *(ulong *)(param_1 + 0x3e0);
  if ((uStack_70 & 0xff) != 3) {
    uStack_90 = *(undefined8 *)(param_1 + 0x3c0);
    uStack_88 = (undefined1)*(undefined8 *)(param_1 + 0x3c8);
    uStack_78 = *(undefined8 *)(param_1 + 0x3d8);
    uStack_80 = *(undefined8 *)(param_1 + 0x3d0);
    uStack_60 = *(undefined8 *)(param_1 + 0x3f0);
    uStack_68 = *(undefined8 *)(param_1 + 1000);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103502e94();
    (*pcVar2)(&uStack_90,0x26,&UNK_11065f390,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f1e38; end: 1034f1f0f;  */

void FUN_1034f1e38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0x15) {
      puVar2 = auStack_538;
      FUN_1034e960c();
      uStack_548 = puVar2[1];
      uStack_550 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502e54();
      (*pcVar3)(&uStack_550,0x27,&UNK_1106629a0,puVar2,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1034f1f10; end: 1034f1fb7;  */

void FUN_1034f1f10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x3f8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x400);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x3f8);
    uStack_60 = *(undefined8 *)(param_1 + 0x410);
    uStack_68 = *(undefined8 *)(param_1 + 0x408);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0x28,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f1fb8; end: 1034f205f;  */

void FUN_1034f1fb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x418;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x420);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x418);
    uStack_60 = *(undefined8 *)(param_1 + 0x430);
    uStack_68 = *(undefined8 *)(param_1 + 0x428);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0x29,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f2060; end: 1034f2143;  */

void FUN_1034f2060(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0x16) {
      puVar2 = auStack_538;
      func_0x0001034e961c();
      uStack_598 = puVar2[1];
      uStack_5a0 = *puVar2;
      uStack_588 = puVar2[3];
      uStack_590 = puVar2[2];
      uStack_578 = puVar2[5];
      uStack_580 = puVar2[4];
      uStack_568 = puVar2[7];
      uStack_570 = puVar2[6];
      uStack_558 = puVar2[9];
      uStack_560 = puVar2[8];
      uStack_548 = puVar2[0xb];
      uStack_550 = puVar2[10];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502c94();
      (*pcVar3)(&uStack_5a0,0x2a,&UNK_110668a98,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f2144);
  (*pcVar3)();
}



/* Entry: 1034f2144; end: 1034f222f;  */

void FUN_1034f2144(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0x17) {
      puVar2 = auStack_538;
      FUN_1034e9668();
      uStack_588 = puVar2[1];
      uStack_590 = *puVar2;
      uStack_578 = puVar2[3];
      uStack_580 = puVar2[2];
      uStack_568 = puVar2[5];
      uStack_570 = puVar2[4];
      uStack_558 = puVar2[7];
      uStack_560 = puVar2[6];
      uStack_548 = puVar2[9];
      uStack_550 = puVar2[8];
      uStack_540 = puVar2[10];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502cd4();
      (*pcVar3)(&uStack_590,0x2b,&UNK_110669170,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034f2230);
  (*pcVar3)();
}



/* Entry: 1034f2230; end: 1034f22d7;  */

void FUN_1034f2230(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x438;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x438) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x438) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x448);
    uStack_68 = *(undefined8 *)(param_1 + 0x440);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0x2c,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f22d8; end: 1034f2383;  */

void FUN_1034f22d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x450;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x450) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x450) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x460);
    uStack_68 = *(undefined8 *)(param_1 + 0x458);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0x2d,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f2384; end: 1034f248b;  */

void FUN_1034f2384(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0x18) {
      puVar2 = auStack_538;
      FUN_1034e96b4();
      uStack_608 = puVar2[1];
      uStack_610 = *puVar2;
      uStack_5f8 = puVar2[3];
      uStack_600 = puVar2[2];
      uStack_5e8 = puVar2[5];
      uStack_5f0 = puVar2[4];
      uStack_5d8 = puVar2[7];
      uStack_5e0 = puVar2[6];
      uStack_5c8 = puVar2[9];
      uStack_5d0 = puVar2[8];
      uStack_5b8 = puVar2[0xb];
      uStack_5c0 = puVar2[10];
      uStack_5a8 = puVar2[0xd];
      uStack_5b0 = puVar2[0xc];
      uStack_598 = puVar2[0xf];
      uStack_5a0 = puVar2[0xe];
      uStack_588 = puVar2[0x11];
      uStack_590 = puVar2[0x10];
      uStack_578 = puVar2[0x13];
      uStack_580 = puVar2[0x12];
      uStack_568 = puVar2[0x15];
      uStack_570 = puVar2[0x14];
      uStack_558 = puVar2[0x17];
      uStack_560 = puVar2[0x16];
      uStack_548 = puVar2[0x19];
      uStack_550 = puVar2[0x18];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502e14();
      (*pcVar3)(&uStack_610,0x2e,&UNK_110660228,puVar2,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1034f248c; end: 1034f260b;  */

void FUN_1034f248c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [24];
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = (undefined8 *)(param_1 + 0x468);
  func_0x000107c61428(puVar1,auStack_268,0,0);
  uStack_88 = *(undefined8 *)(param_1 + 0x530);
  uStack_90 = *(undefined8 *)(param_1 + 0x528);
  uStack_178 = *(undefined8 *)(param_1 + 0x540);
  uStack_180 = *(undefined8 *)(param_1 + 0x538);
  uStack_98 = *(undefined8 *)(param_1 + 0x520);
  uStack_a0 = *(undefined8 *)(param_1 + 0x518);
  uStack_188 = *(undefined8 *)(param_1 + 0x530);
  uStack_190 = *(undefined8 *)(param_1 + 0x528);
  uStack_78 = *(undefined8 *)(param_1 + 0x540);
  uStack_80 = *(undefined8 *)(param_1 + 0x538);
  uStack_168 = *(undefined8 *)(param_1 + 0x550);
  uStack_170 = *(undefined8 *)(param_1 + 0x548);
  uStack_c8 = *(undefined8 *)(param_1 + 0x4f0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x4e8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x500);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x4f8);
  uStack_d8 = *(undefined8 *)(param_1 + 0x4e0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x4d8);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x4f0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x4e8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x500);
  uStack_c0 = *(undefined8 *)(param_1 + 0x4f8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x510);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x508);
  uStack_a8 = *(undefined8 *)(param_1 + 0x510);
  uStack_b0 = *(undefined8 *)(param_1 + 0x508);
  uStack_198 = *(undefined8 *)(param_1 + 0x520);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x518);
  uStack_108 = *(undefined8 *)(param_1 + 0x4b0);
  uStack_110 = *(undefined8 *)(param_1 + 0x4a8);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x4c0);
  uStack_200 = *(undefined8 *)(param_1 + 0x4b8);
  uStack_118 = *(undefined8 *)(param_1 + 0x4a0);
  uStack_120 = *(undefined8 *)(param_1 + 0x498);
  uStack_208 = *(undefined8 *)(param_1 + 0x4b0);
  uStack_210 = *(undefined8 *)(param_1 + 0x4a8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x4c0);
  uStack_100 = *(undefined8 *)(param_1 + 0x4b8);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x4d0);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x4c8);
  uStack_e8 = *(undefined8 *)(param_1 + 0x4d0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x4c8);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x4e0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x4d8);
  uStack_248 = *(undefined8 *)(param_1 + 0x470);
  uStack_250 = *puVar1;
  uStack_238 = *(undefined8 *)(param_1 + 0x480);
  uStack_240 = *(undefined8 *)(param_1 + 0x478);
  uStack_228 = *(undefined8 *)(param_1 + 0x490);
  uStack_230 = *(undefined8 *)(param_1 + 0x488);
  uStack_218 = *(undefined8 *)(param_1 + 0x4a0);
  uStack_220 = *(undefined8 *)(param_1 + 0x498);
  uStack_148 = *(undefined8 *)(param_1 + 0x470);
  uStack_150 = *puVar1;
  uStack_138 = *(undefined8 *)(param_1 + 0x480);
  uStack_140 = *(undefined8 *)(param_1 + 0x478);
  uStack_128 = *(undefined8 *)(param_1 + 0x490);
  uStack_130 = *(undefined8 *)(param_1 + 0x488);
  uStack_68 = *(undefined8 *)(param_1 + 0x550);
  uStack_70 = *(undefined8 *)(param_1 + 0x548);
  uStack_160 = *(undefined8 *)(param_1 + 0x558);
  uStack_60 = *(undefined8 *)(param_1 + 0x558);
  puVar1 = &uStack_250;
  func_0x000100d54cec();
  if ((int)puVar1 != 1) {
    uStack_298 = uStack_88;
    uStack_2a0 = uStack_90;
    uStack_288 = uStack_78;
    uStack_290 = uStack_80;
    uStack_278 = uStack_68;
    uStack_280 = uStack_70;
    uStack_270 = uStack_60;
    uStack_2d8 = uStack_c8;
    uStack_2e0 = uStack_d0;
    uStack_2c8 = uStack_b8;
    uStack_2d0 = uStack_c0;
    uStack_2b8 = uStack_a8;
    uStack_2c0 = uStack_b0;
    uStack_2a8 = uStack_98;
    uStack_2b0 = uStack_a0;
    uStack_318 = uStack_108;
    uStack_320 = uStack_110;
    uStack_308 = uStack_f8;
    uStack_310 = uStack_100;
    uStack_2f8 = uStack_e8;
    uStack_300 = uStack_f0;
    uStack_2e8 = uStack_d8;
    uStack_2f0 = uStack_e0;
    uStack_358 = uStack_148;
    uStack_360 = uStack_150;
    uStack_348 = uStack_138;
    uStack_350 = uStack_140;
    uStack_338 = uStack_128;
    uStack_340 = uStack_130;
    uStack_328 = uStack_118;
    uStack_330 = uStack_120;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103502dd4();
    (*pcVar2)(&uStack_360,0x2f,&UNK_11065fdd0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f260c; end: 1034f26af;  */

void FUN_1034f260c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x560;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x568);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x560);
    uStack_60 = *(undefined8 *)(param_1 + 0x578);
    uStack_68 = *(undefined8 *)(param_1 + 0x570);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0x30,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f26b0; end: 1034f27a7;  */

void FUN_1034f26b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [53];
  undefined1 auStack_390 [424];
  undefined1 auStack_1e8 [424];
  
  func_0x000107c610b4(auStack_390,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_1e8,param_1 + 0x20,0x1a1);
  iVar1 = (int)auStack_390;
  FUN_1034e9250();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_538,auStack_1e8,0x1a1);
    iVar1 = (int)auStack_1e8;
    func_0x0001034e9264();
    if (iVar1 == 0x19) {
      puVar2 = auStack_538;
      func_0x0001034e96c4();
      uStack_598 = puVar2[1];
      uStack_5a0 = *puVar2;
      uStack_588 = puVar2[3];
      uStack_590 = puVar2[2];
      uStack_578 = puVar2[5];
      uStack_580 = puVar2[4];
      uStack_568 = puVar2[7];
      uStack_570 = puVar2[6];
      uStack_558 = puVar2[9];
      uStack_560 = puVar2[8];
      uStack_548 = puVar2[0xb];
      uStack_550 = puVar2[10];
      uStack_540 = puVar2[0xc];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_1034c7298();
      (*pcVar3)(&uStack_5a0,0x31,&UNK_110663558,puVar2,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1034f27a8; end: 1034f2863;  */

void FUN_1034f27a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x580);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x5c0);
  if (lStack_70 != 1) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x588);
    uStack_b0 = *puVar1;
    uStack_98 = *(undefined8 *)(param_1 + 0x598);
    uStack_a0 = *(undefined8 *)(param_1 + 0x590);
    uStack_88 = *(undefined8 *)(param_1 + 0x5a8);
    uStack_90 = *(undefined8 *)(param_1 + 0x5a0);
    uStack_78 = *(undefined8 *)(param_1 + 0x5b8);
    uStack_80 = *(undefined8 *)(param_1 + 0x5b0);
    uStack_60 = *(undefined8 *)(param_1 + 0x5d0);
    uStack_68 = *(undefined8 *)(param_1 + 0x5c8);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x000103502d94();
    (*pcVar3)(&uStack_b0,0x32,&UNK_11065fac8,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1034f2864; end: 1034f2917;  */

void FUN_1034f2864(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x5d8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x5f0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x5e8);
    uStack_78 = *(undefined8 *)(param_1 + 0x5d8);
    uStack_70 = (undefined1)*(undefined8 *)(param_1 + 0x5e0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103502d54();
    (*pcVar2)(&uStack_78,0x33,&UNK_11065f658,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1034f2918; end: 1034f29cf;  */

void FUN_1034f2918(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x5f8);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x628);
  if (lStack_70 != 1) {
    uStack_98 = *(undefined8 *)(param_1 + 0x600);
    uStack_a0 = *puVar1;
    uStack_88 = *(undefined8 *)(param_1 + 0x610);
    uStack_90 = *(undefined8 *)(param_1 + 0x608);
    uStack_78 = *(undefined8 *)(param_1 + 0x620);
    uStack_80 = *(undefined8 *)(param_1 + 0x618);
    uStack_60 = *(undefined8 *)(param_1 + 0x638);
    uStack_68 = *(undefined8 *)(param_1 + 0x630);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x000103502d14();
    (*pcVar3)(&uStack_a0,0x34,&UNK_11065dfc0,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1034f29d0; end: 1034f5467;  */

undefined8 FUN_1034f29d0(long param_1,long param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_2110;
  ulong uStack_2108;
  ulong uStack_2100;
  undefined8 uStack_20f8;
  undefined8 uStack_20f0;
  undefined8 uStack_20e8;
  undefined8 uStack_20e0;
  undefined8 uStack_20d8;
  undefined8 uStack_20d0;
  undefined8 uStack_20c8;
  undefined8 uStack_20c0;
  undefined8 uStack_20b8;
  undefined8 uStack_20b0;
  undefined8 uStack_20a8;
  undefined8 uStack_20a0;
  undefined8 uStack_2098;
  undefined8 uStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  undefined8 uStack_2078;
  undefined8 uStack_2070;
  undefined8 uStack_2068;
  undefined8 uStack_2060;
  undefined8 uStack_2058;
  undefined8 uStack_2050;
  undefined8 uStack_2048;
  undefined8 uStack_2040;
  undefined8 uStack_2038;
  undefined8 uStack_2030;
  undefined8 uStack_2028;
  undefined8 uStack_2020;
  undefined8 uStack_2018;
  undefined8 uStack_2010;
  ulong uStack_1f50;
  long lStack_1f48;
  ulong uStack_1f40;
  undefined8 uStack_1f38;
  undefined8 uStack_1f30;
  undefined8 uStack_1f28;
  undefined8 uStack_1f20;
  undefined8 uStack_1f18;
  long lStack_1f10;
  ulong uStack_1f08;
  long lStack_1f00;
  ulong uStack_1ef8;
  undefined8 uStack_1ef0;
  undefined8 uStack_1ee8;
  undefined8 uStack_1ee0;
  undefined8 uStack_1ed8;
  undefined8 uStack_1ed0;
  long lStack_1ec8;
  ulong uStack_1ec0;
  long lStack_1eb8;
  ulong uStack_1eb0;
  undefined8 uStack_1ea8;
  ulong uStack_1ea0;
  long lStack_1e98;
  ulong uStack_1e90;
  undefined8 uStack_1e88;
  undefined8 uStack_1e80;
  undefined8 uStack_1e78;
  undefined8 uStack_1e70;
  undefined8 uStack_1e68;
  long lStack_1e60;
  ulong uStack_1da0;
  undefined8 uStack_1d98;
  undefined8 uStack_1d90;
  undefined8 uStack_1d88;
  undefined8 uStack_1d80;
  undefined8 uStack_1d78;
  undefined8 uStack_1d70;
  undefined8 uStack_1d68;
  undefined8 uStack_1d60;
  undefined8 uStack_1d58;
  undefined8 uStack_1d50;
  ulong uStack_1ca0;
  long lStack_1c98;
  ulong uStack_1c90;
  undefined8 uStack_1c88;
  undefined8 uStack_1c80;
  undefined8 uStack_1c78;
  undefined8 uStack_1c70;
  undefined8 uStack_1c68;
  long lStack_1c60;
  ulong uStack_1c58;
  long lStack_1c50;
  ulong uStack_1c48;
  undefined8 uStack_1c40;
  undefined8 uStack_1c38;
  undefined8 uStack_1c30;
  undefined8 uStack_1c28;
  undefined8 uStack_1c20;
  long lStack_1c18;
  ulong uStack_1c10;
  long lStack_1c08;
  ulong uStack_1c00;
  undefined8 uStack_1bf8;
  ulong uStack_1bf0;
  long lStack_1be8;
  ulong uStack_1be0;
  undefined8 uStack_1bd8;
  undefined8 uStack_1bd0;
  undefined8 uStack_1bc8;
  undefined8 uStack_1bc0;
  undefined8 uStack_1bb8;
  long lStack_1bb0;
  ulong uStack_1ba0;
  long lStack_1b98;
  ulong uStack_1b90;
  undefined8 uStack_1b88;
  undefined8 uStack_1b80;
  undefined8 uStack_1b78;
  long lStack_1b70;
  undefined8 uStack_1b68;
  long lStack_1b60;
  ulong uStack_1b58;
  long lStack_1b50;
  ulong uStack_1b48;
  undefined8 uStack_1b40;
  undefined8 uStack_1b38;
  undefined8 uStack_1b30;
  long lStack_1b28;
  undefined8 uStack_1b20;
  long lStack_1b18;
  ulong uStack_1b10;
  long lStack_1b08;
  ulong uStack_1b00;
  undefined8 uStack_1af8;
  ulong uStack_1af0;
  long lStack_1ae8;
  ulong uStack_1ae0;
  undefined8 uStack_1ad8;
  undefined8 uStack_1ad0;
  undefined8 uStack_1ac8;
  undefined8 uStack_1ac0;
  undefined8 uStack_1ab8;
  long lStack_1ab0;
  ulong uStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  undefined8 uStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  undefined8 uStack_1a70;
  undefined8 uStack_1a68;
  undefined8 uStack_1a60;
  undefined1 auStack_1a48 [72];
  ulong uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19e8;
  undefined8 uStack_19e0;
  undefined8 uStack_19d8;
  undefined8 uStack_19d0;
  undefined8 uStack_19c8;
  undefined8 uStack_19c0;
  undefined1 auStack_19b0 [24];
  undefined1 auStack_1998 [24];
  ulong uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  undefined8 uStack_1960;
  undefined8 uStack_1958;
  long lStack_1950;
  undefined8 uStack_1948;
  long lStack_1940;
  ulong uStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined1 auStack_18e0 [24];
  undefined1 auStack_18c8 [24];
  undefined1 auStack_18b0 [24];
  undefined1 auStack_1898 [24];
  ulong uStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  long lStack_1850;
  undefined8 uStack_1848;
  long lStack_1840;
  ulong uStack_1838;
  undefined8 uStack_1830;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  long lStack_1800;
  undefined8 uStack_17f8;
  undefined8 uStack_17f0;
  ulong uStack_17e8;
  long lStack_17e0;
  ulong uStack_17d8;
  undefined8 uStack_17d0;
  undefined1 auStack_17c0 [24];
  undefined1 auStack_17a8 [24];
  undefined1 auStack_1790 [24];
  undefined1 auStack_1778 [24];
  ulong uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined1 auStack_1660 [24];
  undefined1 auStack_1648 [24];
  undefined1 auStack_1630 [24];
  undefined1 auStack_1618 [24];
  undefined1 auStack_1600 [24];
  undefined1 auStack_15e8 [24];
  undefined1 auStack_15d0 [24];
  undefined1 auStack_15b8 [24];
  undefined1 auStack_15a0 [24];
  undefined1 auStack_1588 [24];
  undefined1 auStack_1570 [24];
  undefined1 auStack_1558 [24];
  undefined1 auStack_1540 [24];
  undefined1 auStack_1528 [24];
  undefined1 auStack_1510 [24];
  undefined1 auStack_14f8 [24];
  undefined1 auStack_14e0 [24];
  undefined1 auStack_14c8 [24];
  undefined1 auStack_14b0 [24];
  undefined1 auStack_1498 [24];
  undefined1 auStack_1480 [24];
  undefined1 auStack_1468 [24];
  undefined1 auStack_1450 [24];
  undefined1 auStack_1438 [24];
  ulong uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  ulong uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined1 auStack_12c0 [24];
  undefined1 auStack_12a8 [24];
  undefined1 auStack_1290 [24];
  undefined1 auStack_1278 [24];
  undefined1 auStack_1260 [24];
  undefined1 auStack_1248 [24];
  undefined1 auStack_1230 [24];
  undefined1 auStack_1218 [24];
  undefined1 auStack_1200 [24];
  undefined1 auStack_11e8 [24];
  undefined1 auStack_11d0 [24];
  undefined1 auStack_11b8 [24];
  ulong uStack_11a0;
  long lStack_1198;
  ulong uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  long lStack_1160;
  ulong uStack_1158;
  long lStack_1150;
  ulong uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  long lStack_1110;
  ulong uStack_1108;
  long lStack_1100;
  ulong uStack_10f8;
  undefined8 uStack_10f0;
  undefined1 auStack_10e0 [24];
  undefined1 auStack_10c8 [24];
  undefined1 auStack_10b0 [24];
  undefined1 auStack_1098 [24];
  ulong uStack_1080;
  long lStack_1078;
  ulong uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  long lStack_1040;
  ulong uStack_1038;
  long lStack_1030;
  ulong uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  long lStack_ff8;
  ulong uStack_ff0;
  long lStack_fe8;
  ulong uStack_fe0;
  undefined8 uStack_fd8;
  ulong uStack_fd0;
  long lStack_fc8;
  ulong uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  long lStack_f90;
  ulong uStack_d30;
  long lStack_d28;
  ulong uStack_d20;
  undefined8 uStack_d18;
  ulong uStack_d10;
  long lStack_d08;
  long lStack_d00;
  undefined8 uStack_cf8;
  long lStack_cf0;
  ulong uStack_ce8;
  long lStack_ce0;
  ulong uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  long lStack_cb8;
  undefined8 uStack_cb0;
  long lStack_ca8;
  ulong uStack_ca0;
  long lStack_c98;
  ulong uStack_c90;
  undefined8 uStack_c88;
  ulong uStack_c80;
  long lStack_c78;
  ulong uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  long lStack_c40;
  ulong uStack_c38;
  long lStack_c30;
  ulong uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  long lStack_bf8;
  ulong uStack_bf0;
  long lStack_be8;
  ulong uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  long lStack_bb0;
  ulong uStack_ba8;
  long lStack_ba0;
  ulong uStack_b98;
  undefined8 uStack_b90;
  ulong uStack_b88;
  long lStack_b80;
  ulong uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  long lStack_b48;
  undefined1 auStack_9e0 [424];
  undefined1 auStack_838 [424];
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  undefined8 uStack_660;
  undefined1 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  ulong uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined1 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  ulong uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  ulong uStack_5f0;
  long lStack_5e8;
  ulong uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  ulong uStack_5a8;
  long lStack_5a0;
  ulong uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  ulong uStack_560;
  long lStack_558;
  ulong uStack_550;
  undefined8 uStack_548;
  ulong uStack_540;
  long lStack_538;
  ulong uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
  ulong uStack_4f8;
  long lStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  ulong uStack_4b0;
  long lStack_4a8;
  ulong uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_490;
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
  ulong uStack_430;
  long lStack_428;
  ulong uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  ulong uStack_3e8;
  long lStack_3e0;
  undefined1 auStack_3d0 [424];
  undefined1 auStack_228 [440];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_678,0,0);
  lVar14 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  func_0x000107c61428(param_2 + 0x10,auStack_690,0,0);
  lVar22 = *(long *)(param_2 + 0x10);
  uVar3 = *(undefined1 *)(param_2 + 0x18);
  func_0x000103559d2c(lVar14,uVar2);
  func_0x000103559d2c(lVar22,uVar3);
  if (lVar14 != lVar22) {
    return 0;
  }
  func_0x000107c610b4(auStack_9e0,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(&uStack_d30,param_1 + 0x20,0x1a1);
  func_0x000107c610b4(auStack_838,param_2 + 0x20,0x1a1);
  func_0x000107c610b4(&uStack_b88,param_2 + 0x20,0x1a1);
  iVar4 = (int)&uStack_d30;
  FUN_1034e9250();
  if (iVar4 == 1) {
    iVar4 = (int)&uStack_b88;
    FUN_1034e9250();
    if (iVar4 != 1) goto LAB_1034f2b8c;
    func_0x000107c610b4(&uStack_1080,&uStack_d30,0x1a1);
    FUN_1034ff638(auStack_9e0,auStack_228,0x112f73c68,&UNK_10dbcfb78);
    FUN_1034ff638(auStack_838,auStack_228,0x112f73c68,&UNK_10dbcfb78);
    FUN_10350317c(&uStack_1080,0x112f73c68,&UNK_10dbcfb78);
  }
  else {
    func_0x000107c610b4(&uStack_1080,&uStack_d30,0x1a1);
    iVar4 = (int)&uStack_b88;
    FUN_1034e9250();
    if (iVar4 == 1) {
LAB_1034f2b8c:
      func_0x000107c610b4(&uStack_1080,&uStack_d30,0x349);
      FUN_1034ff638(auStack_9e0,auStack_228,0x112f73c68,&UNK_10dbcfb78);
      FUN_1034ff638(auStack_838,auStack_228,0x112f73c68,&UNK_10dbcfb78);
      uVar19 = 0x112f74bd8;
      puVar9 = &UNK_10dbd0d68;
      puVar7 = &uStack_1080;
      goto LAB_1034f2c04;
    }
    func_0x000107c610b4(&uStack_1f50,&uStack_b88,0x1a1);
    func_0x000107c610b4(auStack_228,&uStack_b88,0x1a1);
    func_0x000107c610b4(auStack_3d0,&uStack_1080,0x1a1);
    FUN_1034ff638(auStack_9e0,&uStack_2100,0x112f73c68,&UNK_10dbcfb78);
    FUN_1034ff638(auStack_838,&uStack_2100,0x112f73c68,&UNK_10dbcfb78);
    puVar6 = auStack_3d0;
    FUN_1034fea40(puVar6,auStack_228);
    FUN_10350317c(&uStack_1f50,0x112f73c68,&UNK_10dbcfb78);
    FUN_10350317c(&uStack_d30,0x112f73c68,&UNK_10dbcfb78);
    if (((ulong)puVar6 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x1c8,auStack_1098,0,0);
  uVar15 = *(ulong *)(param_1 + 0x1c8);
  func_0x000107c61428(param_2 + 0x1c8,auStack_10b0,0,0);
  uVar19 = *(undefined8 *)(param_2 + 0x1c8);
  func_0x000107c61434(uVar15);
  func_0x000107c61434(uVar19);
  uVar25 = uVar15;
  func_0x000101565c24(uVar15,uVar19);
  func_0x000107c6142c(uVar15);
  func_0x000107c6142c(uVar19);
  if ((uVar25 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x1d0,auStack_10c8,0,0);
  func_0x000107c61428(param_2 + 0x1d0,auStack_10e0,0,0);
  uVar25 = *(ulong *)(param_1 + 0x1d0);
  uVar19 = *(undefined8 *)(param_1 + 0x1d8);
  uVar23 = *(ulong *)(param_1 + 0x1e0);
  uVar15 = *(ulong *)(param_2 + 0x1d0);
  uVar10 = *(undefined8 *)(param_2 + 0x1d8);
  uVar28 = *(ulong *)(param_2 + 0x1e0);
  if (uVar23 == 0) {
    if (uVar28 != 0) goto LAB_1034f2dac;
    FUN_103500a58(uVar25,uVar19,0);
    FUN_103500a58(uVar15,uVar10,0);
    FUN_103503054(uVar25,uVar19,0);
  }
  else {
    if (uVar28 == 0) {
LAB_1034f2dac:
      FUN_103500a58(uVar25,uVar19,uVar23);
      FUN_103500a58(uVar15,uVar10,uVar28);
      FUN_103503054(uVar25,uVar19,uVar23);
LAB_1034f2de8:
      FUN_103503054(uVar15,uVar10,uVar28);
      return 0;
    }
    if (uVar23 == uVar28) {
      FUN_103500a58(uVar25,uVar19,uVar23);
      FUN_103500a58(uVar15,uVar10,uVar23);
    }
    else {
      FUN_103500a58(uVar25,uVar19,uVar23);
      FUN_103500a58(uVar15,uVar10,uVar28);
      func_0x000107c6157c(uVar23);
      func_0x000107c6157c(uVar28);
      uVar20 = uVar23;
      FUN_1034fb368(uVar23,uVar28);
      func_0x000107c61574(uVar28);
      func_0x000107c61574(uVar23);
      if ((uVar20 & 1) == 0) {
        FUN_103503054(uVar15,uVar10,uVar28);
        uVar15 = uVar25;
        uVar10 = uVar19;
        uVar28 = uVar23;
        goto LAB_1034f2de8;
      }
    }
    uVar20 = uVar25;
    func_0x000100e25fcc(uVar25,uVar19,uVar15,uVar10);
    FUN_103503054(uVar15,uVar10,uVar28);
    FUN_103503054(uVar25,uVar19,uVar23);
    if ((uVar20 & 1) == 0) {
      return 0;
    }
  }
  puVar7 = (ulong *)(param_1 + 0x1e8);
  func_0x000107c61428(puVar7,auStack_11b8,0,0);
  puVar1 = (ulong *)(param_2 + 0x1e8);
  func_0x000107c61428(puVar1,auStack_11d0,0,0);
  uStack_1178 = *(undefined8 *)(param_1 + 0x210);
  uStack_1180 = *(undefined8 *)(param_1 + 0x208);
  uStack_1168 = *(undefined8 *)(param_1 + 0x220);
  uStack_1170 = *(undefined8 *)(param_1 + 0x218);
  uStack_1158 = *(ulong *)(param_1 + 0x230);
  lStack_1160 = *(long *)(param_1 + 0x228);
  lStack_1150 = *(long *)(param_1 + 0x238);
  lStack_1198 = *(long *)(param_1 + 0x1f0);
  uStack_11a0 = *puVar7;
  uStack_1188 = *(undefined8 *)(param_1 + 0x200);
  uStack_1190 = *(ulong *)(param_1 + 0x1f8);
  uStack_10f0 = *(undefined8 *)(param_2 + 0x238);
  uStack_1108 = *(ulong *)(param_2 + 0x220);
  lStack_1110 = *(long *)(param_2 + 0x218);
  uStack_10f8 = *(ulong *)(param_2 + 0x230);
  lStack_1100 = *(long *)(param_2 + 0x228);
  uStack_1128 = *(undefined8 *)(param_2 + 0x200);
  uStack_1130 = *(undefined8 *)(param_2 + 0x1f8);
  uStack_1118 = *(undefined8 *)(param_2 + 0x210);
  uStack_1120 = *(undefined8 *)(param_2 + 0x208);
  uStack_1138 = *(undefined8 *)(param_2 + 0x1f0);
  uStack_1140 = *puVar1;
  uStack_d30 = uStack_11a0;
  lStack_d28 = lStack_1198;
  uStack_d20 = uStack_1190;
  uStack_d18 = uStack_1188;
  uStack_d10 = uStack_1180;
  lStack_d08 = uStack_1178;
  lStack_d00 = uStack_1170;
  uStack_cf8 = uStack_1168;
  lStack_cf0 = lStack_1160;
  uStack_ce8 = uStack_1158;
  lStack_ce0 = lStack_1150;
  uStack_cd8 = uStack_1140;
  uStack_cd0 = uStack_1138;
  uStack_cc8 = uStack_1130;
  uStack_cc0 = uStack_1128;
  lStack_cb8 = uStack_1120;
  uStack_cb0 = uStack_1118;
  lStack_ca8 = lStack_1110;
  uStack_ca0 = uStack_1108;
  lStack_c98 = lStack_1100;
  uStack_c90 = uStack_10f8;
  uStack_c88 = uStack_10f0;
  if (lStack_1160 == 1) {
    if (lStack_1100 != 1) goto LAB_1034f2ff4;
    uStack_1058 = *(undefined8 *)(param_1 + 0x210);
    uStack_1060 = *(undefined8 *)(param_1 + 0x208);
    uStack_1048 = *(undefined8 *)(param_1 + 0x220);
    uStack_1050 = *(undefined8 *)(param_1 + 0x218);
    uStack_1038 = *(ulong *)(param_1 + 0x230);
    lStack_1040 = *(long *)(param_1 + 0x228);
    lStack_1030 = *(long *)(param_1 + 0x238);
    lStack_1078 = *(long *)(param_1 + 0x1f0);
    uStack_1080 = *puVar7;
    uStack_1068 = *(undefined8 *)(param_1 + 0x200);
    uStack_1070 = *(ulong *)(param_1 + 0x1f8);
    FUN_1034ff638(&uStack_11a0,&uStack_1f50,0x112f73c80,&UNK_10dbcfb80);
    FUN_1034ff638(&uStack_1140,&uStack_1f50,0x112f73c80,&UNK_10dbcfb80);
    FUN_10350317c(&uStack_1080,0x112f73c80,&UNK_10dbcfb80);
  }
  else {
    if (lStack_1100 == 1) {
LAB_1034f2ff4:
      uStack_1080 = uStack_11a0;
      lStack_1078 = lStack_1198;
      uStack_1070 = uStack_1190;
      uStack_1068 = uStack_1188;
      uStack_1060 = uStack_1180;
      uStack_1058 = uStack_1178;
      uStack_1050 = uStack_1170;
      uStack_1048 = uStack_1168;
      lStack_1040 = lStack_1160;
      uStack_1038 = uStack_1158;
      lStack_1030 = lStack_1150;
      uStack_1028 = uStack_1140;
      uStack_1020 = uStack_1138;
      uStack_1018 = uStack_1130;
      uStack_1010 = uStack_1128;
      uStack_1008 = uStack_1120;
      uStack_1000 = uStack_1118;
      lStack_ff8 = lStack_1110;
      uStack_ff0 = uStack_1108;
      lStack_fe8 = lStack_1100;
      uStack_fe0 = uStack_10f8;
      uStack_fd8 = uStack_10f0;
      FUN_1034ff638(&uStack_11a0,&uStack_1f50,0x112f73c80,&UNK_10dbcfb80);
      FUN_1034ff638(&uStack_1140,&uStack_1f50,0x112f73c80,&UNK_10dbcfb80);
      uVar19 = 0x112f73c88;
      puVar9 = &UNK_10dbcfb88;
      goto LAB_1034f3098;
    }
    uStack_1058 = *(undefined8 *)(param_2 + 0x210);
    uStack_1060 = *(undefined8 *)(param_2 + 0x208);
    uStack_1048 = *(undefined8 *)(param_2 + 0x220);
    uStack_1050 = *(undefined8 *)(param_2 + 0x218);
    uStack_1038 = *(ulong *)(param_2 + 0x230);
    lStack_1040 = *(long *)(param_2 + 0x228);
    lStack_1030 = *(long *)(param_2 + 0x238);
    lStack_1078 = *(long *)(param_2 + 0x1f0);
    uStack_1080 = *puVar1;
    uStack_1068 = *(undefined8 *)(param_2 + 0x200);
    uStack_1070 = *(ulong *)(param_2 + 0x1f8);
    uStack_468 = *(undefined8 *)(param_1 + 0x210);
    uStack_470 = *(undefined8 *)(param_1 + 0x208);
    uStack_458 = *(undefined8 *)(param_1 + 0x220);
    uStack_460 = *(undefined8 *)(param_1 + 0x218);
    uStack_448 = *(undefined8 *)(param_1 + 0x230);
    uStack_450 = *(undefined8 *)(param_1 + 0x228);
    uStack_440 = *(undefined8 *)(param_1 + 0x238);
    uStack_488 = *(undefined8 *)(param_1 + 0x1f0);
    uStack_490 = *puVar7;
    uStack_478 = *(undefined8 *)(param_1 + 0x200);
    uStack_480 = *(undefined8 *)(param_1 + 0x1f8);
    uStack_430 = uStack_1080;
    lStack_428 = lStack_1078;
    uStack_420 = uStack_1070;
    uStack_418 = uStack_1068;
    uStack_410 = uStack_1060;
    uStack_408 = uStack_1058;
    uStack_400 = uStack_1050;
    uStack_3f8 = uStack_1048;
    lStack_3f0 = lStack_1040;
    uStack_3e8 = uStack_1038;
    lStack_3e0 = lStack_1030;
    FUN_1034ff638(&uStack_11a0,&uStack_1f50,0x112f73c80,&UNK_10dbcfb80);
    FUN_1034ff638(&uStack_1140,&uStack_1f50,0x112f73c80,&UNK_10dbcfb80);
    puVar7 = &uStack_490;
    FUN_1035b5db0(puVar7,&uStack_430);
    FUN_10350317c(&uStack_1080,0x112f73c80,&UNK_10dbcfb80);
    FUN_10350317c(&uStack_d30,0x112f73c80,&UNK_10dbcfb80);
    if (((ulong)puVar7 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x240,auStack_11e8,0,0);
  func_0x000107c61428(param_2 + 0x240,auStack_1200,0,0);
  lVar24 = *(long *)(param_1 + 0x240);
  uVar20 = *(ulong *)(param_1 + 0x248);
  uVar16 = *(ulong *)(param_1 + 0x250);
  lVar14 = *(long *)(param_2 + 0x240);
  uVar15 = *(ulong *)(param_2 + 0x248);
  uVar25 = *(ulong *)(param_2 + 0x250);
  uVar28 = uVar16;
  uVar23 = uVar20;
  lVar22 = lVar24;
  if (uVar16 >> 0x3c < 0xf) {
    if (uVar25 >> 0x3c < 0xf) {
      func_0x000100d54cb4(lVar24,uVar20,uVar16);
      if (lVar24 == lVar14) {
        func_0x000100d54cb4(lVar24,uVar15,uVar25);
        uVar28 = uVar20;
        func_0x000100e25fcc(uVar20,uVar16,uVar15,uVar25);
        func_0x000100d54cd0(lVar24,uVar15,uVar25);
        if ((uVar28 & 1) == 0) goto LAB_1034f3858;
        goto LAB_1034f3228;
      }
LAB_1034f382c:
      func_0x000100d54cb4(lVar14,uVar15,uVar25);
LAB_1034f383c:
      func_0x000100d54cd0(lVar14,uVar15,uVar25);
      goto LAB_1034f3858;
    }
  }
  else if (0xe < uVar25 >> 0x3c) {
    func_0x000100d54cb4(lVar24,uVar20,uVar16);
    func_0x000100d54cb4(lVar14,uVar15,uVar25);
LAB_1034f3228:
    func_0x000100d54cd0(lVar24,uVar20,uVar16);
    func_0x000107c61428(param_1 + 600,auStack_1218,0,0);
    func_0x000107c61428(param_2 + 600,auStack_1230,0,0);
    lVar24 = *(long *)(param_1 + 600);
    uVar20 = *(ulong *)(param_1 + 0x260);
    uVar16 = *(ulong *)(param_1 + 0x268);
    lVar14 = *(long *)(param_2 + 600);
    uVar15 = *(ulong *)(param_2 + 0x260);
    uVar25 = *(ulong *)(param_2 + 0x268);
    uVar28 = uVar16;
    uVar23 = uVar20;
    lVar22 = lVar24;
    if (uVar16 >> 0x3c < 0xf) {
      if (uVar25 >> 0x3c < 0xf) {
        func_0x000100d54cb4(lVar24,uVar20,uVar16);
        if (lVar24 != lVar14) goto LAB_1034f382c;
        func_0x000100d54cb4(lVar24,uVar15,uVar25);
        uVar28 = uVar20;
        func_0x000100e25fcc(uVar20,uVar16,uVar15,uVar25);
        func_0x000100d54cd0(lVar24,uVar15,uVar25);
        if ((uVar28 & 1) == 0) goto LAB_1034f3858;
        goto LAB_1034f32b0;
      }
    }
    else if (0xe < uVar25 >> 0x3c) {
      func_0x000100d54cb4(lVar24,uVar20,uVar16);
      func_0x000100d54cb4(lVar14,uVar15,uVar25);
LAB_1034f32b0:
      func_0x000100d54cd0(lVar24,uVar20,uVar16);
      func_0x000107c61428(param_1 + 0x270,auStack_1248,0,0);
      func_0x000107c61428(param_2 + 0x270,auStack_1260,0,0);
      lVar24 = *(long *)(param_1 + 0x270);
      uVar20 = *(ulong *)(param_1 + 0x278);
      uVar16 = *(ulong *)(param_1 + 0x280);
      lVar14 = *(long *)(param_2 + 0x270);
      uVar15 = *(ulong *)(param_2 + 0x278);
      uVar25 = *(ulong *)(param_2 + 0x280);
      uVar28 = uVar16;
      uVar23 = uVar20;
      lVar22 = lVar24;
      if (uVar16 >> 0x3c < 0xf) {
        if (uVar25 >> 0x3c < 0xf) {
          func_0x000100d54cb4(lVar24,uVar20,uVar16);
          if (lVar24 != lVar14) goto LAB_1034f382c;
          func_0x000100d54cb4(lVar24,uVar15,uVar25);
          uVar28 = uVar20;
          func_0x000100e25fcc(uVar20,uVar16,uVar15,uVar25);
          func_0x000100d54cd0(lVar24,uVar15,uVar25);
          if ((uVar28 & 1) == 0) goto LAB_1034f3858;
          goto LAB_1034f3338;
        }
      }
      else if (0xe < uVar25 >> 0x3c) {
        func_0x000100d54cb4(lVar24,uVar20,uVar16);
        func_0x000100d54cb4(lVar14,uVar15,uVar25);
LAB_1034f3338:
        func_0x000100d54cd0(lVar24,uVar20,uVar16);
        func_0x000107c61428(param_1 + 0x288,auStack_1278,0,0);
        func_0x000107c61428(param_2 + 0x288,auStack_1290,0,0);
        lVar24 = *(long *)(param_1 + 0x288);
        uVar20 = *(ulong *)(param_1 + 0x290);
        uVar16 = *(ulong *)(param_1 + 0x298);
        lVar14 = *(long *)(param_2 + 0x288);
        uVar15 = *(ulong *)(param_2 + 0x290);
        uVar25 = *(ulong *)(param_2 + 0x298);
        uVar28 = uVar16;
        uVar23 = uVar20;
        lVar22 = lVar24;
        if (uVar16 >> 0x3c < 0xf) {
          if (uVar25 >> 0x3c < 0xf) {
            func_0x000100d54cb4(lVar24,uVar20,uVar16);
            if (lVar24 != lVar14) goto LAB_1034f382c;
            func_0x000100d54cb4(lVar24,uVar15,uVar25);
            uVar28 = uVar20;
            func_0x000100e25fcc(uVar20,uVar16,uVar15,uVar25);
            func_0x000100d54cd0(lVar24,uVar15,uVar25);
            if ((uVar28 & 1) == 0) goto LAB_1034f3858;
            goto LAB_1034f33c0;
          }
        }
        else if (0xe < uVar25 >> 0x3c) {
          func_0x000100d54cb4(lVar24,uVar20,uVar16);
          func_0x000100d54cb4(lVar14,uVar15,uVar25);
LAB_1034f33c0:
          func_0x000100d54cd0(lVar24,uVar20,uVar16);
          func_0x000107c61428(param_1 + 0x2a0,auStack_12a8,0,0);
          func_0x000107c61428(param_2 + 0x2a0,auStack_12c0,0,0);
          uVar20 = *(ulong *)(param_1 + 0x2a0);
          uVar16 = *(ulong *)(param_1 + 0x2a8);
          uVar17 = *(undefined8 *)(param_1 + 0x2b0);
          uVar15 = *(ulong *)(param_2 + 0x2a0);
          uVar25 = *(ulong *)(param_2 + 0x2a8);
          uVar19 = *(undefined8 *)(param_2 + 0x2b0);
          uVar10 = uVar17;
          uVar28 = uVar16;
          uVar23 = uVar20;
          if ((uVar20 & 0xff) == 2) {
            if ((uVar15 & 0xff) == 2) {
              func_0x000101541464(uVar20,uVar16,uVar17);
              func_0x000101541464(uVar15,uVar25,uVar19);
LAB_1034f3448:
              func_0x000101556278(uVar20,uVar16,uVar17);
              puVar7 = (ulong *)(param_1 + 0x2b8);
              func_0x000107c61428(puVar7,auStack_1438,0,0);
              puVar1 = (ulong *)(param_2 + 0x2b8);
              func_0x000107c61428(puVar1,auStack_1450,0,0);
              lStack_cb8 = *(undefined8 *)(param_1 + 0x330);
              uStack_cc0 = *(undefined8 *)(param_1 + 0x328);
              uStack_1398 = *(undefined8 *)(param_1 + 0x340);
              uStack_13a0 = *(undefined8 *)(param_1 + 0x338);
              lStack_ca8 = *(long *)(param_1 + 0x340);
              uStack_cb0 = *(undefined8 *)(param_1 + 0x338);
              uStack_1388 = *(undefined8 *)(param_1 + 0x350);
              uStack_1390 = *(undefined8 *)(param_1 + 0x348);
              lStack_c98 = *(long *)(param_1 + 0x350);
              uStack_ca0 = *(ulong *)(param_1 + 0x348);
              uStack_1378 = *(undefined8 *)(param_1 + 0x360);
              uStack_1380 = *(undefined8 *)(param_1 + 0x358);
              uStack_cf8 = *(undefined8 *)(param_1 + 0x2f0);
              lStack_d00 = *(undefined8 *)(param_1 + 0x2e8);
              uStack_13d8 = *(undefined8 *)(param_1 + 0x300);
              uStack_13e0 = *(undefined8 *)(param_1 + 0x2f8);
              uStack_ce8 = *(ulong *)(param_1 + 0x300);
              lStack_cf0 = *(long *)(param_1 + 0x2f8);
              uStack_13c8 = *(undefined8 *)(param_1 + 0x310);
              uStack_13d0 = *(undefined8 *)(param_1 + 0x308);
              uStack_cd8 = *(ulong *)(param_1 + 0x310);
              lStack_ce0 = *(long *)(param_1 + 0x308);
              uStack_13b8 = *(undefined8 *)(param_1 + 800);
              uStack_13c0 = *(undefined8 *)(param_1 + 0x318);
              uStack_cc8 = *(undefined8 *)(param_1 + 800);
              uStack_cd0 = *(undefined8 *)(param_1 + 0x318);
              uStack_13a8 = *(undefined8 *)(param_1 + 0x330);
              uStack_13b0 = *(undefined8 *)(param_1 + 0x328);
              uStack_1418 = *(undefined8 *)(param_1 + 0x2c0);
              uStack_1420 = *puVar7;
              uStack_1408 = *(undefined8 *)(param_1 + 0x2d0);
              uStack_1410 = *(undefined8 *)(param_1 + 0x2c8);
              uStack_13f8 = *(undefined8 *)(param_1 + 0x2e0);
              uStack_1400 = *(undefined8 *)(param_1 + 0x2d8);
              uStack_13e8 = *(undefined8 *)(param_1 + 0x2f0);
              uStack_13f0 = *(undefined8 *)(param_1 + 0x2e8);
              lStack_d28 = *(long *)(param_1 + 0x2c0);
              uStack_d30 = *puVar7;
              uStack_d18 = *(undefined8 *)(param_1 + 0x2d0);
              uStack_d20 = *(ulong *)(param_1 + 0x2c8);
              lStack_d08 = *(undefined8 *)(param_1 + 0x2e0);
              uStack_d10 = *(undefined8 *)(param_1 + 0x2d8);
              uStack_c08 = *(undefined8 *)(param_2 + 0x330);
              uStack_c10 = *(undefined8 *)(param_2 + 0x328);
              uStack_12e8 = *(undefined8 *)(param_2 + 0x340);
              uStack_12f0 = *(undefined8 *)(param_2 + 0x338);
              lStack_bf8 = *(long *)(param_2 + 0x340);
              uStack_c00 = *(undefined8 *)(param_2 + 0x338);
              uStack_12d8 = *(undefined8 *)(param_2 + 0x350);
              uStack_12e0 = *(undefined8 *)(param_2 + 0x348);
              lStack_be8 = *(long *)(param_2 + 0x350);
              uStack_bf0 = *(ulong *)(param_2 + 0x348);
              uStack_12c8 = *(undefined8 *)(param_2 + 0x360);
              uStack_12d0 = *(undefined8 *)(param_2 + 0x358);
              uStack_c48 = *(undefined8 *)(param_2 + 0x2f0);
              uStack_c50 = *(undefined8 *)(param_2 + 0x2e8);
              uStack_1328 = *(undefined8 *)(param_2 + 0x300);
              uStack_1330 = *(undefined8 *)(param_2 + 0x2f8);
              uStack_c38 = *(ulong *)(param_2 + 0x300);
              lStack_c40 = *(long *)(param_2 + 0x2f8);
              uStack_1318 = *(undefined8 *)(param_2 + 0x310);
              uStack_1320 = *(undefined8 *)(param_2 + 0x308);
              uStack_c28 = *(ulong *)(param_2 + 0x310);
              lStack_c30 = *(long *)(param_2 + 0x308);
              uStack_1308 = *(undefined8 *)(param_2 + 800);
              uStack_1310 = *(undefined8 *)(param_2 + 0x318);
              uStack_c18 = *(undefined8 *)(param_2 + 800);
              uStack_c20 = *(undefined8 *)(param_2 + 0x318);
              uStack_12f8 = *(undefined8 *)(param_2 + 0x330);
              uStack_1300 = *(undefined8 *)(param_2 + 0x328);
              uStack_1368 = *(undefined8 *)(param_2 + 0x2c0);
              uStack_1370 = *puVar1;
              uStack_1358 = *(undefined8 *)(param_2 + 0x2d0);
              uStack_1360 = *(undefined8 *)(param_2 + 0x2c8);
              uStack_1348 = *(undefined8 *)(param_2 + 0x2e0);
              uStack_1350 = *(undefined8 *)(param_2 + 0x2d8);
              uStack_1338 = *(undefined8 *)(param_2 + 0x2f0);
              uStack_1340 = *(undefined8 *)(param_2 + 0x2e8);
              lStack_c78 = *(long *)(param_2 + 0x2c0);
              uStack_c80 = *puVar1;
              uStack_c68 = *(undefined8 *)(param_2 + 0x2d0);
              uStack_c70 = *(ulong *)(param_2 + 0x2c8);
              uStack_c58 = *(undefined8 *)(param_2 + 0x2e0);
              uStack_c60 = *(undefined8 *)(param_2 + 0x2d8);
              uStack_bd8 = *(undefined8 *)(param_2 + 0x360);
              uStack_be0 = *(ulong *)(param_2 + 0x358);
              uStack_c88 = *(undefined8 *)(param_1 + 0x360);
              uStack_c90 = *(ulong *)(param_1 + 0x358);
              iVar4 = (int)&uStack_d30;
              FUN_1034fe93c();
              if (iVar4 == 1) {
                iVar4 = (int)&uStack_c80;
                FUN_1034fe93c();
                if (iVar4 != 1) {
LAB_1034f3974:
                  func_0x000107c610b4(&uStack_1080,&uStack_d30,0x160);
                  FUN_1034ff638(&uStack_1420,&uStack_1f50,0x112f73c90,&UNK_10dbcfb90);
                  FUN_1034ff638(&uStack_1370,&uStack_1f50,0x112f73c90,&UNK_10dbcfb90);
                  uVar19 = 0x112f73c98;
                  puVar9 = &UNK_10dbcfb98;
                  goto LAB_1034f3098;
                }
                lStack_ff8 = lStack_ca8;
                uStack_1000 = uStack_cb0;
                lStack_fe8 = lStack_c98;
                uStack_ff0 = uStack_ca0;
                uStack_fd8 = uStack_c88;
                uStack_fe0 = uStack_c90;
                uStack_1038 = uStack_ce8;
                lStack_1040 = lStack_cf0;
                uStack_1028 = uStack_cd8;
                lStack_1030 = lStack_ce0;
                uStack_1008 = lStack_cb8;
                uStack_1010 = uStack_cc0;
                uStack_1018 = uStack_cc8;
                uStack_1020 = uStack_cd0;
                lStack_1078 = lStack_d28;
                uStack_1080 = uStack_d30;
                uStack_1068 = uStack_d18;
                uStack_1070 = uStack_d20;
                uStack_1048 = uStack_cf8;
                uStack_1050 = lStack_d00;
                uStack_1058 = lStack_d08;
                uStack_1060 = uStack_d10;
                FUN_1034ff638(&uStack_1420,&uStack_1f50,0x112f73c90,&UNK_10dbcfb90);
                FUN_1034ff638(&uStack_1370,&uStack_1f50,0x112f73c90,&UNK_10dbcfb90);
                FUN_10350317c(&uStack_1080,0x112f73c90,&UNK_10dbcfb90);
              }
              else {
                lStack_ff8 = lStack_ca8;
                uStack_1000 = uStack_cb0;
                lStack_fe8 = lStack_c98;
                uStack_ff0 = uStack_ca0;
                uStack_fd8 = uStack_c88;
                uStack_fe0 = uStack_c90;
                uStack_1038 = uStack_ce8;
                lStack_1040 = lStack_cf0;
                uStack_1028 = uStack_cd8;
                lStack_1030 = lStack_ce0;
                uStack_1008 = lStack_cb8;
                uStack_1010 = uStack_cc0;
                uStack_1018 = uStack_cc8;
                uStack_1020 = uStack_cd0;
                lStack_1078 = lStack_d28;
                uStack_1080 = uStack_d30;
                uStack_1068 = uStack_d18;
                uStack_1070 = uStack_d20;
                uStack_1048 = uStack_cf8;
                uStack_1050 = lStack_d00;
                uStack_1058 = lStack_d08;
                uStack_1060 = uStack_d10;
                iVar4 = (int)&uStack_c80;
                FUN_1034fe93c();
                if (iVar4 == 1) goto LAB_1034f3974;
                lStack_1ec8 = lStack_bf8;
                uStack_1ed0 = uStack_c00;
                lStack_1eb8 = lStack_be8;
                uStack_1ec0 = uStack_bf0;
                uStack_1ea8 = uStack_bd8;
                uStack_1eb0 = uStack_be0;
                uStack_1f08 = uStack_c38;
                lStack_1f10 = lStack_c40;
                uStack_1ef8 = uStack_c28;
                lStack_1f00 = lStack_c30;
                uStack_1ee8 = uStack_c18;
                uStack_1ef0 = uStack_c20;
                uStack_1ed8 = uStack_c08;
                uStack_1ee0 = uStack_c10;
                lStack_1f48 = lStack_c78;
                uStack_1f50 = uStack_c80;
                uStack_1f38 = uStack_c68;
                uStack_1f40 = uStack_c70;
                uStack_1f28 = uStack_c58;
                uStack_1f30 = uStack_c60;
                uStack_1f18 = uStack_c48;
                uStack_1f20 = uStack_c50;
                lStack_4b8 = lStack_bf8;
                uStack_4c0 = uStack_c00;
                lStack_4a8 = lStack_be8;
                uStack_4b0 = uStack_bf0;
                uStack_498 = uStack_bd8;
                uStack_4a0 = uStack_be0;
                uStack_4f8 = uStack_c38;
                lStack_500 = lStack_c40;
                uStack_4e8 = uStack_c28;
                lStack_4f0 = lStack_c30;
                uStack_4c8 = uStack_c08;
                uStack_4d0 = uStack_c10;
                uStack_4d8 = uStack_c18;
                uStack_4e0 = uStack_c20;
                lStack_538 = lStack_c78;
                uStack_540 = uStack_c80;
                uStack_528 = uStack_c68;
                uStack_530 = uStack_c70;
                uStack_508 = uStack_c48;
                uStack_510 = uStack_c50;
                uStack_518 = uStack_c58;
                uStack_520 = uStack_c60;
                lStack_568 = lStack_ff8;
                uStack_570 = uStack_1000;
                lStack_558 = lStack_fe8;
                uStack_560 = uStack_ff0;
                uStack_548 = uStack_fd8;
                uStack_550 = uStack_fe0;
                uStack_5a8 = uStack_1038;
                lStack_5b0 = lStack_1040;
                uStack_598 = uStack_1028;
                lStack_5a0 = lStack_1030;
                uStack_578 = uStack_1008;
                uStack_580 = uStack_1010;
                uStack_588 = uStack_1018;
                uStack_590 = uStack_1020;
                lStack_5e8 = lStack_1078;
                uStack_5f0 = uStack_1080;
                uStack_5d8 = uStack_1068;
                uStack_5e0 = uStack_1070;
                uStack_5b8 = uStack_1048;
                uStack_5c0 = uStack_1050;
                uStack_5c8 = uStack_1058;
                uStack_5d0 = uStack_1060;
                FUN_1034ff638(&uStack_1420,&uStack_2100,0x112f73c90,&UNK_10dbcfb90);
                FUN_1034ff638(&uStack_1370,&uStack_2100,0x112f73c90,&UNK_10dbcfb90);
                puVar7 = &uStack_5f0;
                FUN_103505224(puVar7,&uStack_540);
                FUN_10350317c(&uStack_1f50,0x112f73c90,&UNK_10dbcfb90);
                FUN_10350317c(&uStack_d30,0x112f73c90,&UNK_10dbcfb90);
                if (((ulong)puVar7 & 1) == 0) {
                  return 0;
                }
              }
              func_0x000107c61428(param_1 + 0x368,auStack_1468,0,0);
              uVar15 = *(ulong *)(param_1 + 0x368);
              func_0x000107c61428(param_2 + 0x368,auStack_1480,0,0);
              uVar19 = *(undefined8 *)(param_2 + 0x368);
              func_0x000107c61434(uVar15);
              func_0x000107c61434(uVar19);
              uVar25 = uVar15;
              func_0x000101565c24(uVar15,uVar19);
              func_0x000107c6142c(uVar15);
              func_0x000107c6142c(uVar19);
              if ((uVar25 & 1) == 0) {
                return 0;
              }
              func_0x000107c61428(param_1 + 0x370,auStack_1498,0,0);
              uVar15 = *(ulong *)(param_1 + 0x370);
              func_0x000107c61428(param_2 + 0x370,auStack_14b0,0,0);
              uVar19 = *(undefined8 *)(param_2 + 0x370);
              func_0x000107c61434(uVar15);
              func_0x000107c61434(uVar19);
              uVar25 = uVar15;
              func_0x000101565c24(uVar15,uVar19);
              func_0x000107c6142c(uVar15);
              func_0x000107c6142c(uVar19);
              if ((uVar25 & 1) == 0) {
                return 0;
              }
              func_0x000107c61428(param_1 + 0x378,auStack_14c8,0,0);
              lVar22 = *(long *)(param_1 + 0x378);
              func_0x000107c61428(param_2 + 0x378,auStack_14e0,0,0);
              lVar14 = *(long *)(param_2 + 0x378);
              if (*(char *)(param_2 + 0x380) == '\x01') {
                if (lVar14 < 4) {
                  if (lVar14 < 2) {
                    if (lVar14 == 0) {
                      if (lVar22 != 0) {
                        return 0;
                      }
                    }
                    else if (lVar22 != 1) {
                      return 0;
                    }
                  }
                  else if (lVar14 == 2) {
                    if (lVar22 != 2) {
                      return 0;
                    }
                  }
                  else if (lVar22 != 3) {
                    return 0;
                  }
                }
                else if (lVar14 < 6) {
                  if (lVar14 == 4) {
                    if (lVar22 != 4) {
                      return 0;
                    }
                  }
                  else if (lVar22 != 5) {
                    return 0;
                  }
                }
                else if (lVar14 == 6) {
                  if (lVar22 != 6) {
                    return 0;
                  }
                }
                else if (lVar22 != 7) {
                  return 0;
                }
              }
              else if (lVar22 != lVar14) {
                return 0;
              }
              func_0x000107c61428(param_1 + 0x388,auStack_14f8,0,0);
              func_0x000107c61428(param_2 + 0x388,auStack_1510,0,0);
              lVar24 = *(long *)(param_1 + 0x388);
              uVar20 = *(ulong *)(param_1 + 0x390);
              uVar16 = *(ulong *)(param_1 + 0x398);
              lVar14 = *(long *)(param_2 + 0x388);
              uVar15 = *(ulong *)(param_2 + 0x390);
              uVar25 = *(ulong *)(param_2 + 0x398);
              uVar28 = uVar16;
              uVar23 = uVar20;
              lVar22 = lVar24;
              if (uVar16 >> 0x3c < 0xf) {
                if (uVar25 >> 0x3c < 0xf) {
                  func_0x000100d54cb4(lVar24,uVar20,uVar16);
                  func_0x000100d54cb4(lVar14,uVar15,uVar25);
                  if ((float)lVar24 != (float)lVar14) goto LAB_1034f383c;
                  uVar28 = uVar20;
                  func_0x000100e25fcc(uVar20,uVar16,uVar15,uVar25);
                  func_0x000100d54cd0(lVar14,uVar15,uVar25);
                  if ((uVar28 & 1) == 0) goto LAB_1034f3858;
                  goto LAB_1034f3d80;
                }
              }
              else if (0xe < uVar25 >> 0x3c) {
                func_0x000100d54cb4(lVar24,uVar20,uVar16);
                func_0x000100d54cb4(lVar14,uVar15,uVar25);
LAB_1034f3d80:
                func_0x000100d54cd0(lVar24,uVar20,uVar16);
                func_0x000107c61428(param_1 + 0x3a0,auStack_1528,0,0);
                uVar15 = *(ulong *)(param_1 + 0x3a0);
                func_0x000107c61428(param_2 + 0x3a0,auStack_1540,0,0);
                uVar19 = *(undefined8 *)(param_2 + 0x3a0);
                func_0x000107c61434(uVar15);
                func_0x000107c61434(uVar19);
                uVar25 = uVar15;
                func_0x000101565c24(uVar15,uVar19);
                func_0x000107c6142c(uVar15);
                func_0x000107c6142c(uVar19);
                if ((uVar25 & 1) == 0) {
                  return 0;
                }
                func_0x000107c61428(param_1 + 0x3a8,auStack_1558,0,0);
                func_0x000107c61428(param_2 + 0x3a8,auStack_1570,0,0);
                uVar20 = *(ulong *)(param_1 + 0x3a8);
                uVar16 = *(ulong *)(param_1 + 0x3b0);
                uVar17 = *(undefined8 *)(param_1 + 0x3b8);
                uVar15 = *(ulong *)(param_2 + 0x3a8);
                uVar25 = *(ulong *)(param_2 + 0x3b0);
                uVar19 = *(undefined8 *)(param_2 + 0x3b8);
                uVar10 = uVar17;
                uVar28 = uVar16;
                uVar23 = uVar20;
                if ((uVar20 & 0xff) == 2) {
                  if ((uVar15 & 0xff) == 2) {
                    func_0x000101541464(uVar20,uVar16,uVar17);
                    func_0x000101541464(uVar15,uVar25,uVar19);
LAB_1034f3f24:
                    func_0x000101556278(uVar20,uVar16,uVar17);
                    func_0x000107c61428(param_1 + 0x3c0,auStack_1588,0,0);
                    func_0x000107c61428(param_2 + 0x3c0,auStack_15a0,0,0);
                    uVar29 = *(undefined8 *)(param_1 + 0x3c0);
                    uVar27 = *(undefined8 *)(param_1 + 0x3c8);
                    uVar26 = *(undefined8 *)(param_1 + 0x3d0);
                    uVar21 = *(undefined8 *)(param_1 + 0x3d8);
                    uVar25 = *(ulong *)(param_1 + 0x3e0);
                    uVar12 = *(undefined8 *)(param_1 + 1000);
                    uVar11 = *(undefined8 *)(param_1 + 0x3f0);
                    uVar18 = *(undefined8 *)(param_2 + 0x3c0);
                    uVar30 = *(undefined8 *)(param_2 + 0x3c8);
                    uVar19 = *(undefined8 *)(param_2 + 0x3d0);
                    uVar10 = *(undefined8 *)(param_2 + 0x3d8);
                    uVar15 = *(ulong *)(param_2 + 0x3e0);
                    uVar17 = *(undefined8 *)(param_2 + 1000);
                    uVar13 = *(undefined8 *)(param_2 + 0x3f0);
                    if ((uVar25 & 0xff) == 3) {
                      if ((uVar15 & 0xff) != 3) {
LAB_1034f4068:
                        FUN_1034fe988(uVar29,uVar27,uVar26,uVar21,uVar25,uVar12,uVar11,
                                      &SUB_10006c00c,&SUB_101541464);
                        FUN_1034fe988(uVar18,uVar30,uVar19,uVar10,uVar15,uVar17,uVar13,
                                      &SUB_10006c00c,&SUB_101541464);
                        FUN_1034fe988(uVar29,uVar27,uVar26,uVar21,uVar25,uVar12,uVar11,
                                      &SUB_10006c090,&SUB_101556278);
                        FUN_1034fe988(uVar18,uVar30,uVar19,uVar10,uVar15,uVar17,uVar13,
                                      &SUB_10006c090,&SUB_101556278);
                        return 0;
                      }
                      FUN_1034fe988(uVar29,uVar27,uVar26,uVar21,uVar25,uVar12,uVar11,&SUB_10006c00c,
                                    &SUB_101541464);
                      FUN_1034fe988(uVar18,uVar30,uVar19,uVar10,uVar15,uVar17,uVar13,&SUB_10006c00c,
                                    &SUB_101541464);
                      FUN_1034fe988(uVar29,uVar27,uVar26,uVar21,uVar25,uVar12,uVar11,&SUB_10006c090,
                                    &SUB_101556278);
                    }
                    else {
                      if ((uVar15 & 0xff) == 3) goto LAB_1034f4068;
                      uStack_620 = (undefined1)uVar30;
                      uStack_658 = (undefined1)uVar27;
                      uStack_660 = uVar29;
                      uStack_650 = uVar26;
                      uStack_648 = uVar21;
                      uStack_640 = uVar25;
                      uStack_638 = uVar12;
                      uStack_630 = uVar11;
                      uStack_628 = uVar18;
                      uStack_618 = uVar19;
                      uStack_610 = uVar10;
                      uStack_608 = uVar15;
                      uStack_600 = uVar17;
                      uStack_5f8 = uVar13;
                      FUN_1034fe988(uVar29,uVar27,uVar26,uVar21,uVar25,uVar12,uVar11,&SUB_10006c00c,
                                    &SUB_101541464);
                      FUN_1034fe988(uVar18,uVar30,uVar19,uVar10,uVar15,uVar17,uVar13,&SUB_10006c00c,
                                    &SUB_101541464);
                      puVar8 = &uStack_660;
                      FUN_10350e408(puVar8,&uStack_628);
                      FUN_1034fe988(uVar18,uVar30,uVar19,uVar10,uVar15,uVar17,uVar13,&SUB_10006c090,
                                    &SUB_101556278);
                      FUN_1034fe988(uVar29,uVar27,uVar26,uVar21,uVar25,uVar12,uVar11,&SUB_10006c090,
                                    &SUB_101556278);
                      if (((ulong)puVar8 & 1) == 0) {
                        return 0;
                      }
                    }
                    func_0x000107c61428(param_1 + 0x3f8,auStack_15b8,0,0);
                    func_0x000107c61428(param_2 + 0x3f8,auStack_15d0,0,0);
                    uVar25 = *(ulong *)(param_1 + 0x3f8);
                    lVar14 = *(long *)(param_1 + 0x400);
                    uStack_2108 = *(ulong *)(param_1 + 0x408);
                    uStack_2110 = *(undefined8 *)(param_1 + 0x410);
                    uVar15 = *(ulong *)(param_2 + 0x3f8);
                    lVar22 = *(long *)(param_2 + 0x400);
                    uVar10 = *(undefined8 *)(param_2 + 0x408);
                    uVar19 = *(undefined8 *)(param_2 + 0x410);
                    if (lVar14 == 0) {
                      if (lVar22 == 0) {
                        func_0x000101597350(uVar25,0,uStack_2108,uStack_2110);
                        func_0x000101597350(uVar15,0,uVar10,uVar19);
LAB_1034f438c:
                        func_0x000101597ae4(uVar25,lVar14,uStack_2108,uStack_2110);
                        func_0x000107c61428(param_1 + 0x418,auStack_15e8,0,0);
                        func_0x000107c61428(param_2 + 0x418,auStack_1600,0,0);
                        uVar25 = *(ulong *)(param_1 + 0x418);
                        lVar14 = *(long *)(param_1 + 0x420);
                        uStack_2108 = *(ulong *)(param_1 + 0x428);
                        uStack_2110 = *(undefined8 *)(param_1 + 0x430);
                        uVar15 = *(ulong *)(param_2 + 0x418);
                        lVar22 = *(long *)(param_2 + 0x420);
                        uVar10 = *(undefined8 *)(param_2 + 0x428);
                        uVar19 = *(undefined8 *)(param_2 + 0x430);
                        if (lVar14 == 0) {
                          if (lVar22 == 0) {
                            func_0x000101597350(uVar25,0,uStack_2108,uStack_2110);
                            func_0x000101597350(uVar15,0,uVar10,uVar19);
                            goto LAB_1034f450c;
                          }
                        }
                        else if (lVar22 != 0) {
                          if (((uVar25 != uVar15) || (lVar14 != lVar22)) &&
                             (uVar28 = uVar25, func_0x000107c605b8(uVar25,lVar14,uVar15,lVar22,0),
                             (uVar28 & 1) == 0)) goto LAB_1034f4ce4;
                          func_0x000101597350(uVar25,lVar14,uStack_2108,uStack_2110);
                          func_0x000101597350(uVar15,lVar22,uVar10,uVar19);
                          uVar28 = uStack_2108;
                          func_0x000100e25fcc(uStack_2108,uStack_2110,uVar10,uVar19);
                          func_0x000101597ae4(uVar15,lVar22,uVar10,uVar19);
                          if ((uVar28 & 1) == 0) goto LAB_1034f4d34;
LAB_1034f450c:
                          func_0x000101597ae4(uVar25,lVar14,uStack_2108,uStack_2110);
                          func_0x000107c61428(param_1 + 0x438,auStack_1618,0,0);
                          func_0x000107c61428(param_2 + 0x438,auStack_1630,0,0);
                          uVar20 = *(ulong *)(param_1 + 0x438);
                          uVar16 = *(ulong *)(param_1 + 0x440);
                          uVar17 = *(undefined8 *)(param_1 + 0x448);
                          uVar15 = *(ulong *)(param_2 + 0x438);
                          uVar25 = *(ulong *)(param_2 + 0x440);
                          uVar19 = *(undefined8 *)(param_2 + 0x448);
                          uVar10 = uVar17;
                          uVar28 = uVar16;
                          uVar23 = uVar20;
                          if ((uVar20 & 0xff) == 2) {
                            if ((uVar15 & 0xff) == 2) {
                              func_0x000101541464(uVar20,uVar16,uVar17);
                              func_0x000101541464(uVar15,uVar25,uVar19);
LAB_1034f4594:
                              func_0x000101556278(uVar20,uVar16,uVar17);
                              func_0x000107c61428(param_1 + 0x450,auStack_1648,0,0);
                              func_0x000107c61428(param_2 + 0x450,auStack_1660,0,0);
                              uVar20 = *(ulong *)(param_1 + 0x450);
                              uVar16 = *(ulong *)(param_1 + 0x458);
                              uVar17 = *(undefined8 *)(param_1 + 0x460);
                              uVar15 = *(ulong *)(param_2 + 0x450);
                              uVar25 = *(ulong *)(param_2 + 0x458);
                              uVar19 = *(undefined8 *)(param_2 + 0x460);
                              uVar10 = uVar17;
                              uVar28 = uVar16;
                              uVar23 = uVar20;
                              if ((uVar20 & 0xff) == 2) {
                                if ((uVar15 & 0xff) == 2) {
                                  func_0x000101541464(uVar20,uVar16,uVar17);
                                  func_0x000101541464(uVar15,uVar25,uVar19);
LAB_1034f46dc:
                                  func_0x000101556278(uVar20,uVar16,uVar17);
                                  puVar7 = (ulong *)(param_1 + 0x468);
                                  func_0x000107c61428(puVar7,auStack_1778,0,0);
                                  puVar1 = (ulong *)(param_2 + 0x468);
                                  func_0x000107c61428(puVar1,auStack_1790,0,0);
                                  iVar4 = (int)&uStack_c38;
                                  uStack_c68 = *(undefined8 *)(param_1 + 0x530);
                                  uStack_c70 = *(ulong *)(param_1 + 0x528);
                                  uStack_1688 = *(undefined8 *)(param_1 + 0x540);
                                  uStack_1690 = *(undefined8 *)(param_1 + 0x538);
                                  lStack_c78 = *(long *)(param_1 + 0x520);
                                  uStack_c80 = *(ulong *)(param_1 + 0x518);
                                  uStack_1698 = *(undefined8 *)(param_1 + 0x530);
                                  uStack_16a0 = *(undefined8 *)(param_1 + 0x528);
                                  uStack_c58 = *(undefined8 *)(param_1 + 0x540);
                                  uStack_c60 = *(undefined8 *)(param_1 + 0x538);
                                  uStack_1678 = *(undefined8 *)(param_1 + 0x550);
                                  uStack_1680 = *(undefined8 *)(param_1 + 0x548);
                                  lStack_ca8 = *(long *)(param_1 + 0x4f0);
                                  uStack_cb0 = *(undefined8 *)(param_1 + 0x4e8);
                                  uStack_16c8 = *(undefined8 *)(param_1 + 0x500);
                                  uStack_16d0 = *(undefined8 *)(param_1 + 0x4f8);
                                  lStack_cb8 = *(undefined8 *)(param_1 + 0x4e0);
                                  uStack_cc0 = *(undefined8 *)(param_1 + 0x4d8);
                                  uStack_16d8 = *(undefined8 *)(param_1 + 0x4f0);
                                  uStack_16e0 = *(undefined8 *)(param_1 + 0x4e8);
                                  lStack_c98 = *(long *)(param_1 + 0x500);
                                  uStack_ca0 = *(ulong *)(param_1 + 0x4f8);
                                  uStack_16b8 = *(undefined8 *)(param_1 + 0x510);
                                  uStack_16c0 = *(undefined8 *)(param_1 + 0x508);
                                  uStack_c88 = *(undefined8 *)(param_1 + 0x510);
                                  uStack_c90 = *(ulong *)(param_1 + 0x508);
                                  uStack_16a8 = *(undefined8 *)(param_1 + 0x520);
                                  uStack_16b0 = *(undefined8 *)(param_1 + 0x518);
                                  uStack_ce8 = *(ulong *)(param_1 + 0x4b0);
                                  lStack_cf0 = *(long *)(param_1 + 0x4a8);
                                  uStack_1708 = *(undefined8 *)(param_1 + 0x4c0);
                                  uStack_1710 = *(undefined8 *)(param_1 + 0x4b8);
                                  uStack_cf8 = *(undefined8 *)(param_1 + 0x4a0);
                                  lStack_d00 = *(undefined8 *)(param_1 + 0x498);
                                  uStack_1718 = *(undefined8 *)(param_1 + 0x4b0);
                                  uStack_1720 = *(undefined8 *)(param_1 + 0x4a8);
                                  uStack_cd8 = *(ulong *)(param_1 + 0x4c0);
                                  lStack_ce0 = *(long *)(param_1 + 0x4b8);
                                  uStack_16f8 = *(undefined8 *)(param_1 + 0x4d0);
                                  uStack_1700 = *(undefined8 *)(param_1 + 0x4c8);
                                  uStack_cc8 = *(undefined8 *)(param_1 + 0x4d0);
                                  uStack_cd0 = *(undefined8 *)(param_1 + 0x4c8);
                                  uStack_16e8 = *(undefined8 *)(param_1 + 0x4e0);
                                  uStack_16f0 = *(undefined8 *)(param_1 + 0x4d8);
                                  uStack_1758 = *(undefined8 *)(param_1 + 0x470);
                                  uStack_1760 = *puVar7;
                                  uStack_1748 = *(undefined8 *)(param_1 + 0x480);
                                  uStack_1750 = *(undefined8 *)(param_1 + 0x478);
                                  uStack_1738 = *(undefined8 *)(param_1 + 0x490);
                                  uStack_1740 = *(undefined8 *)(param_1 + 0x488);
                                  uStack_1728 = *(undefined8 *)(param_1 + 0x4a0);
                                  uStack_1730 = *(undefined8 *)(param_1 + 0x498);
                                  lStack_d28 = *(long *)(param_1 + 0x470);
                                  uStack_d30 = *puVar7;
                                  uStack_d18 = *(undefined8 *)(param_1 + 0x480);
                                  uStack_d20 = *(ulong *)(param_1 + 0x478);
                                  lStack_d08 = *(undefined8 *)(param_1 + 0x490);
                                  uStack_d10 = *(undefined8 *)(param_1 + 0x488);
                                  uStack_c48 = *(undefined8 *)(param_1 + 0x550);
                                  uStack_c50 = *(undefined8 *)(param_1 + 0x548);
                                  uStack_b70 = *(undefined8 *)(param_2 + 0x530);
                                  uStack_b78 = *(ulong *)(param_2 + 0x528);
                                  uStack_2028 = *(undefined8 *)(param_2 + 0x540);
                                  uStack_2030 = *(undefined8 *)(param_2 + 0x538);
                                  lStack_b80 = *(long *)(param_2 + 0x520);
                                  uStack_b88 = *(ulong *)(param_2 + 0x518);
                                  uStack_2038 = *(undefined8 *)(param_2 + 0x530);
                                  uStack_2040 = *(undefined8 *)(param_2 + 0x528);
                                  uStack_b60 = *(undefined8 *)(param_2 + 0x540);
                                  uStack_b68 = *(undefined8 *)(param_2 + 0x538);
                                  uStack_2018 = *(undefined8 *)(param_2 + 0x550);
                                  uStack_2020 = *(undefined8 *)(param_2 + 0x548);
                                  lStack_bb0 = *(long *)(param_2 + 0x4f0);
                                  uStack_bb8 = *(undefined8 *)(param_2 + 0x4e8);
                                  uStack_2068 = *(undefined8 *)(param_2 + 0x500);
                                  uStack_2070 = *(undefined8 *)(param_2 + 0x4f8);
                                  uStack_bc0 = *(undefined8 *)(param_2 + 0x4e0);
                                  uStack_bc8 = *(undefined8 *)(param_2 + 0x4d8);
                                  uStack_2078 = *(undefined8 *)(param_2 + 0x4f0);
                                  uStack_2080 = *(undefined8 *)(param_2 + 0x4e8);
                                  lStack_ba0 = *(long *)(param_2 + 0x500);
                                  uStack_ba8 = *(ulong *)(param_2 + 0x4f8);
                                  uStack_2058 = *(undefined8 *)(param_2 + 0x510);
                                  uStack_2060 = *(undefined8 *)(param_2 + 0x508);
                                  uStack_b90 = *(undefined8 *)(param_2 + 0x510);
                                  uStack_b98 = *(ulong *)(param_2 + 0x508);
                                  uStack_2048 = *(undefined8 *)(param_2 + 0x520);
                                  uStack_2050 = *(undefined8 *)(param_2 + 0x518);
                                  uStack_bf0 = *(ulong *)(param_2 + 0x4b0);
                                  lStack_bf8 = *(long *)(param_2 + 0x4a8);
                                  uStack_20a8 = *(undefined8 *)(param_2 + 0x4c0);
                                  uStack_20b0 = *(undefined8 *)(param_2 + 0x4b8);
                                  uStack_c00 = *(undefined8 *)(param_2 + 0x4a0);
                                  uStack_c08 = *(undefined8 *)(param_2 + 0x498);
                                  uStack_20b8 = *(undefined8 *)(param_2 + 0x4b0);
                                  uStack_20c0 = *(undefined8 *)(param_2 + 0x4a8);
                                  uStack_be0 = *(ulong *)(param_2 + 0x4c0);
                                  lStack_be8 = *(long *)(param_2 + 0x4b8);
                                  uStack_2098 = *(undefined8 *)(param_2 + 0x4d0);
                                  uStack_20a0 = *(undefined8 *)(param_2 + 0x4c8);
                                  uStack_bd0 = *(undefined8 *)(param_2 + 0x4d0);
                                  uStack_bd8 = *(undefined8 *)(param_2 + 0x4c8);
                                  uStack_2088 = *(undefined8 *)(param_2 + 0x4e0);
                                  uStack_2090 = *(undefined8 *)(param_2 + 0x4d8);
                                  uStack_20f8 = *(undefined8 *)(param_2 + 0x470);
                                  uStack_2100 = *puVar1;
                                  uStack_20e8 = *(undefined8 *)(param_2 + 0x480);
                                  uStack_20f0 = *(undefined8 *)(param_2 + 0x478);
                                  uStack_20d8 = *(undefined8 *)(param_2 + 0x490);
                                  uStack_20e0 = *(undefined8 *)(param_2 + 0x488);
                                  uStack_20c8 = *(undefined8 *)(param_2 + 0x4a0);
                                  uStack_20d0 = *(undefined8 *)(param_2 + 0x498);
                                  lStack_c30 = *(long *)(param_2 + 0x470);
                                  uStack_c38 = *puVar1;
                                  uStack_c20 = *(undefined8 *)(param_2 + 0x480);
                                  uStack_c28 = *(ulong *)(param_2 + 0x478);
                                  uStack_c10 = *(undefined8 *)(param_2 + 0x490);
                                  uStack_c18 = *(undefined8 *)(param_2 + 0x488);
                                  uStack_b50 = *(undefined8 *)(param_2 + 0x550);
                                  uStack_b58 = *(undefined8 *)(param_2 + 0x548);
                                  uStack_1670 = *(undefined8 *)(param_1 + 0x558);
                                  lStack_c40 = *(long *)(param_1 + 0x558);
                                  uStack_2010 = *(undefined8 *)(param_2 + 0x558);
                                  lStack_b48 = *(long *)(param_2 + 0x558);
                                  iVar5 = (int)&uStack_d30;
                                  func_0x000100d54cec();
                                  if (iVar5 == 1) {
                                    func_0x000100d54cec();
                                    if (iVar4 != 1) {
LAB_1034f4a04:
                                      func_0x000107c610b4(&uStack_1080,&uStack_d30,0x1f0);
                                      FUN_1034ff638(&uStack_1760,&uStack_1f50,0x112f73ca0,
                                                    &UNK_10dbcfba0);
                                      FUN_1034ff638(&uStack_2100,&uStack_1f50,0x112f73ca0,
                                                    &UNK_10dbcfba0);
                                      uVar19 = 0x112f73ca8;
                                      puVar9 = &UNK_10dbcfba8;
LAB_1034f3098:
                                      FUN_10350317c(&uStack_1080,uVar19,puVar9);
                                      return 0;
                                    }
                                    uStack_fb8 = uStack_c68;
                                    uStack_fc0 = uStack_c70;
                                    uStack_fa8 = uStack_c58;
                                    uStack_fb0 = uStack_c60;
                                    uStack_f98 = uStack_c48;
                                    uStack_fa0 = uStack_c50;
                                    lStack_f90 = lStack_c40;
                                    lStack_ff8 = lStack_ca8;
                                    uStack_1000 = uStack_cb0;
                                    lStack_fe8 = lStack_c98;
                                    uStack_ff0 = uStack_ca0;
                                    uStack_fd8 = uStack_c88;
                                    uStack_fe0 = uStack_c90;
                                    lStack_fc8 = lStack_c78;
                                    uStack_fd0 = uStack_c80;
                                    uStack_1038 = uStack_ce8;
                                    lStack_1040 = lStack_cf0;
                                    uStack_1028 = uStack_cd8;
                                    lStack_1030 = lStack_ce0;
                                    uStack_1018 = uStack_cc8;
                                    uStack_1020 = uStack_cd0;
                                    uStack_1008 = lStack_cb8;
                                    uStack_1010 = uStack_cc0;
                                    lStack_1078 = lStack_d28;
                                    uStack_1080 = uStack_d30;
                                    uStack_1068 = uStack_d18;
                                    uStack_1070 = uStack_d20;
                                    uStack_1058 = lStack_d08;
                                    uStack_1060 = uStack_d10;
                                    uStack_1048 = uStack_cf8;
                                    uStack_1050 = lStack_d00;
                                    FUN_1034ff638(&uStack_1760,&uStack_1f50,0x112f73ca0,
                                                  &UNK_10dbcfba0);
                                    FUN_1034ff638(&uStack_2100,&uStack_1f50,0x112f73ca0,
                                                  &UNK_10dbcfba0);
                                    FUN_10350317c(&uStack_1080,0x112f73ca0,&UNK_10dbcfba0);
                                  }
                                  else {
                                    uStack_1ad8 = uStack_c68;
                                    uStack_1ae0 = uStack_c70;
                                    uStack_1ac8 = uStack_c58;
                                    uStack_1ad0 = uStack_c60;
                                    uStack_1ab8 = uStack_c48;
                                    uStack_1ac0 = uStack_c50;
                                    lStack_1ab0 = lStack_c40;
                                    lStack_1b18 = lStack_ca8;
                                    uStack_1b20 = uStack_cb0;
                                    lStack_1b08 = lStack_c98;
                                    uStack_1b10 = uStack_ca0;
                                    uStack_1af8 = uStack_c88;
                                    uStack_1b00 = uStack_c90;
                                    lStack_1ae8 = lStack_c78;
                                    uStack_1af0 = uStack_c80;
                                    uStack_1b58 = uStack_ce8;
                                    lStack_1b60 = lStack_cf0;
                                    uStack_1b48 = uStack_cd8;
                                    lStack_1b50 = lStack_ce0;
                                    uStack_1b38 = uStack_cc8;
                                    uStack_1b40 = uStack_cd0;
                                    lStack_1b28 = lStack_cb8;
                                    uStack_1b30 = uStack_cc0;
                                    lStack_1b98 = lStack_d28;
                                    uStack_1ba0 = uStack_d30;
                                    uStack_1b88 = uStack_d18;
                                    uStack_1b90 = uStack_d20;
                                    uStack_1b78 = lStack_d08;
                                    uStack_1b80 = uStack_d10;
                                    uStack_1b68 = uStack_cf8;
                                    lStack_1b70 = lStack_d00;
                                    func_0x000100d54cec();
                                    if (iVar4 == 1) goto LAB_1034f4a04;
                                    uStack_1bd8 = uStack_b70;
                                    uStack_1be0 = uStack_b78;
                                    uStack_1bc8 = uStack_b60;
                                    uStack_1bd0 = uStack_b68;
                                    uStack_1bb8 = uStack_b50;
                                    uStack_1bc0 = uStack_b58;
                                    lStack_1c18 = lStack_bb0;
                                    uStack_1c20 = uStack_bb8;
                                    lStack_1c08 = lStack_ba0;
                                    uStack_1c10 = uStack_ba8;
                                    uStack_1bf8 = uStack_b90;
                                    uStack_1c00 = uStack_b98;
                                    lStack_1be8 = lStack_b80;
                                    uStack_1bf0 = uStack_b88;
                                    uStack_1c58 = uStack_bf0;
                                    lStack_1c60 = lStack_bf8;
                                    uStack_1c48 = uStack_be0;
                                    lStack_1c50 = lStack_be8;
                                    uStack_1c38 = uStack_bd0;
                                    uStack_1c40 = uStack_bd8;
                                    uStack_1c28 = uStack_bc0;
                                    uStack_1c30 = uStack_bc8;
                                    lStack_1c98 = lStack_c30;
                                    uStack_1ca0 = uStack_c38;
                                    uStack_1c88 = uStack_c20;
                                    uStack_1c90 = uStack_c28;
                                    uStack_1c78 = uStack_c10;
                                    uStack_1c80 = uStack_c18;
                                    uStack_1c68 = uStack_c00;
                                    uStack_1c70 = uStack_c08;
                                    uStack_fb8 = uStack_b70;
                                    uStack_fc0 = uStack_b78;
                                    uStack_fa8 = uStack_b60;
                                    uStack_fb0 = uStack_b68;
                                    uStack_f98 = uStack_b50;
                                    uStack_fa0 = uStack_b58;
                                    lStack_ff8 = lStack_bb0;
                                    uStack_1000 = uStack_bb8;
                                    lStack_fe8 = lStack_ba0;
                                    uStack_ff0 = uStack_ba8;
                                    uStack_fd8 = uStack_b90;
                                    uStack_fe0 = uStack_b98;
                                    lStack_fc8 = lStack_b80;
                                    uStack_fd0 = uStack_b88;
                                    uStack_1038 = uStack_bf0;
                                    lStack_1040 = lStack_bf8;
                                    uStack_1028 = uStack_be0;
                                    lStack_1030 = lStack_be8;
                                    uStack_1018 = uStack_bd0;
                                    uStack_1020 = uStack_bd8;
                                    uStack_1008 = uStack_bc0;
                                    uStack_1010 = uStack_bc8;
                                    lStack_1078 = lStack_c30;
                                    uStack_1080 = uStack_c38;
                                    uStack_1068 = uStack_c20;
                                    uStack_1070 = uStack_c28;
                                    lStack_1bb0 = lStack_b48;
                                    lStack_f90 = lStack_b48;
                                    uStack_1058 = uStack_c10;
                                    uStack_1060 = uStack_c18;
                                    uStack_1048 = uStack_c00;
                                    uStack_1050 = uStack_c08;
                                    uStack_1e88 = uStack_1ad8;
                                    uStack_1e90 = uStack_1ae0;
                                    uStack_1e78 = uStack_1ac8;
                                    uStack_1e80 = uStack_1ad0;
                                    uStack_1e68 = uStack_1ab8;
                                    uStack_1e70 = uStack_1ac0;
                                    lStack_1e60 = lStack_1ab0;
                                    lStack_1ec8 = lStack_1b18;
                                    uStack_1ed0 = uStack_1b20;
                                    lStack_1eb8 = lStack_1b08;
                                    uStack_1ec0 = uStack_1b10;
                                    uStack_1ea8 = uStack_1af8;
                                    uStack_1eb0 = uStack_1b00;
                                    lStack_1e98 = lStack_1ae8;
                                    uStack_1ea0 = uStack_1af0;
                                    uStack_1f08 = uStack_1b58;
                                    lStack_1f10 = lStack_1b60;
                                    uStack_1ef8 = uStack_1b48;
                                    lStack_1f00 = lStack_1b50;
                                    uStack_1ee8 = uStack_1b38;
                                    uStack_1ef0 = uStack_1b40;
                                    uStack_1ed8 = lStack_1b28;
                                    uStack_1ee0 = uStack_1b30;
                                    lStack_1f48 = lStack_1b98;
                                    uStack_1f50 = uStack_1ba0;
                                    uStack_1f38 = uStack_1b88;
                                    uStack_1f40 = uStack_1b90;
                                    uStack_1f28 = uStack_1b78;
                                    uStack_1f30 = uStack_1b80;
                                    uStack_1f18 = uStack_1b68;
                                    uStack_1f20 = lStack_1b70;
                                    FUN_1034ff638(&uStack_1760,&uStack_1da0,0x112f73ca0,
                                                  &UNK_10dbcfba0);
                                    FUN_1034ff638(&uStack_2100,&uStack_1da0,0x112f73ca0,
                                                  &UNK_10dbcfba0);
                                    puVar7 = &uStack_1f50;
                                    FUN_1035130b8(puVar7,&uStack_1080);
                                    FUN_10350317c(&uStack_1ca0,0x112f73ca0,&UNK_10dbcfba0);
                                    FUN_10350317c(&uStack_d30,0x112f73ca0,&UNK_10dbcfba0);
                                    if (((ulong)puVar7 & 1) == 0) {
                                      return 0;
                                    }
                                  }
                                  func_0x000107c61428(param_1 + 0x560,auStack_17a8,0,0);
                                  func_0x000107c61428(param_2 + 0x560,auStack_17c0,0,0);
                                  uVar25 = *(ulong *)(param_1 + 0x560);
                                  lVar14 = *(long *)(param_1 + 0x568);
                                  uStack_2108 = *(ulong *)(param_1 + 0x570);
                                  uStack_2110 = *(undefined8 *)(param_1 + 0x578);
                                  uVar15 = *(ulong *)(param_2 + 0x560);
                                  lVar22 = *(long *)(param_2 + 0x568);
                                  uVar10 = *(undefined8 *)(param_2 + 0x570);
                                  uVar19 = *(undefined8 *)(param_2 + 0x578);
                                  if (lVar14 == 0) {
                                    if (lVar22 == 0) {
                                      func_0x000101597350(uVar25,0,uStack_2108,uStack_2110);
                                      func_0x000101597350(uVar15,0,uVar10,uVar19);
                                      goto LAB_1034f4d64;
                                    }
                                  }
                                  else if (lVar22 != 0) {
                                    if (((uVar25 != uVar15) || (lVar14 != lVar22)) &&
                                       (uVar28 = uVar25,
                                       func_0x000107c605b8(uVar25,lVar14,uVar15,lVar22,0),
                                       (uVar28 & 1) == 0)) goto LAB_1034f4ce4;
                                    func_0x000101597350(uVar25,lVar14,uStack_2108,uStack_2110);
                                    func_0x000101597350(uVar15,lVar22,uVar10,uVar19);
                                    uVar28 = uStack_2108;
                                    func_0x000100e25fcc(uStack_2108,uStack_2110,uVar10,uVar19);
                                    func_0x000101597ae4(uVar15,lVar22,uVar10,uVar19);
                                    if ((uVar28 & 1) == 0) goto LAB_1034f4d34;
LAB_1034f4d64:
                                    func_0x000101597ae4(uVar25,lVar14,uStack_2108,uStack_2110);
                                    puVar7 = (ulong *)(param_1 + 0x580);
                                    func_0x000107c61428(puVar7,auStack_1898,0,0);
                                    func_0x000107c61428((ulong *)(param_2 + 0x580),auStack_18b0,0,0)
                                    ;
                                    uStack_1858 = *(undefined8 *)(param_1 + 0x5a8);
                                    uStack_1860 = *(undefined8 *)(param_1 + 0x5a0);
                                    uStack_1848 = *(undefined8 *)(param_1 + 0x5b8);
                                    lStack_1850 = *(long *)(param_1 + 0x5b0);
                                    uStack_1838 = *(ulong *)(param_1 + 0x5c8);
                                    lStack_1840 = *(long *)(param_1 + 0x5c0);
                                    uStack_1830 = *(undefined8 *)(param_1 + 0x5d0);
                                    uStack_1878 = *(undefined8 *)(param_1 + 0x588);
                                    uStack_1880 = *(ulong *)(param_1 + 0x580);
                                    uStack_1868 = *(undefined8 *)(param_1 + 0x598);
                                    uStack_1870 = *(undefined8 *)(param_1 + 0x590);
                                    uStack_17d0 = *(undefined8 *)(param_2 + 0x5d0);
                                    uStack_17d8 = *(ulong *)(param_2 + 0x5c8);
                                    lStack_17e0 = *(long *)(param_2 + 0x5c0);
                                    uStack_17e8 = *(ulong *)(param_2 + 0x5b8);
                                    uStack_17f0 = *(undefined8 *)(param_2 + 0x5b0);
                                    uStack_17f8 = *(undefined8 *)(param_2 + 0x5a8);
                                    lStack_1800 = *(long *)(param_2 + 0x5a0);
                                    uStack_1808 = *(undefined8 *)(param_2 + 0x598);
                                    uStack_1810 = *(undefined8 *)(param_2 + 0x590);
                                    uStack_1818 = *(undefined8 *)(param_2 + 0x588);
                                    uStack_1820 = *(undefined8 *)(param_2 + 0x580);
                                    uStack_d30 = uStack_1880;
                                    lStack_d28 = uStack_1878;
                                    uStack_d20 = uStack_1870;
                                    uStack_d18 = uStack_1868;
                                    uStack_d10 = uStack_1860;
                                    lStack_d08 = uStack_1858;
                                    lStack_d00 = lStack_1850;
                                    uStack_cf8 = uStack_1848;
                                    lStack_cf0 = lStack_1840;
                                    uStack_ce8 = uStack_1838;
                                    lStack_ce0 = uStack_1830;
                                    uStack_cd8 = uStack_1820;
                                    uStack_cd0 = uStack_1818;
                                    uStack_cc8 = uStack_1810;
                                    uStack_cc0 = uStack_1808;
                                    lStack_cb8 = lStack_1800;
                                    uStack_cb0 = uStack_17f8;
                                    lStack_ca8 = uStack_17f0;
                                    uStack_ca0 = uStack_17e8;
                                    lStack_c98 = lStack_17e0;
                                    uStack_c90 = uStack_17d8;
                                    uStack_c88 = uStack_17d0;
                                    if (lStack_1840 == 1) {
                                      if (lStack_17e0 != 1) {
LAB_1034f4ec8:
                                        uStack_1ba0 = uStack_1880;
                                        lStack_1b98 = uStack_1878;
                                        uStack_1b90 = uStack_1870;
                                        uStack_1b88 = uStack_1868;
                                        uStack_1b80 = uStack_1860;
                                        uStack_1b78 = uStack_1858;
                                        lStack_1b70 = lStack_1850;
                                        uStack_1b68 = uStack_1848;
                                        lStack_1b60 = lStack_1840;
                                        uStack_1b58 = uStack_1838;
                                        lStack_1b50 = uStack_1830;
                                        uStack_1b48 = uStack_1820;
                                        uStack_1b40 = uStack_1818;
                                        uStack_1b38 = uStack_1810;
                                        uStack_1b30 = uStack_1808;
                                        lStack_1b28 = lStack_1800;
                                        uStack_1b20 = uStack_17f8;
                                        lStack_1b18 = uStack_17f0;
                                        uStack_1b10 = uStack_17e8;
                                        lStack_1b08 = lStack_17e0;
                                        uStack_1b00 = uStack_17d8;
                                        uStack_1af8 = uStack_17d0;
                                        FUN_1034ff638(&uStack_1880,&uStack_1ca0,0x112f73cb0,
                                                      &UNK_10dbcfbb0);
                                        FUN_1034ff638(&uStack_1820,&uStack_1ca0,0x112f73cb0,
                                                      &UNK_10dbcfbb0);
                                        uVar19 = 0x112f73cb8;
                                        puVar9 = &UNK_10dbcfbb8;
                                        goto LAB_1034f4f68;
                                      }
                                      uStack_1b78 = *(undefined8 *)(param_1 + 0x5a8);
                                      uStack_1b80 = *(undefined8 *)(param_1 + 0x5a0);
                                      uStack_1b68 = *(undefined8 *)(param_1 + 0x5b8);
                                      lStack_1b70 = *(undefined8 *)(param_1 + 0x5b0);
                                      uStack_1b58 = *(ulong *)(param_1 + 0x5c8);
                                      lStack_1b60 = *(long *)(param_1 + 0x5c0);
                                      lStack_1b50 = *(long *)(param_1 + 0x5d0);
                                      lStack_1b98 = *(long *)(param_1 + 0x588);
                                      uStack_1ba0 = *puVar7;
                                      uStack_1b88 = *(undefined8 *)(param_1 + 0x598);
                                      uStack_1b90 = *(ulong *)(param_1 + 0x590);
                                      FUN_1034ff638(&uStack_1880,&uStack_1ca0,0x112f73cb0,
                                                    &UNK_10dbcfbb0);
                                      FUN_1034ff638(&uStack_1820,&uStack_1ca0,0x112f73cb0,
                                                    &UNK_10dbcfbb0);
                                      FUN_10350317c(&uStack_1ba0,0x112f73cb0,&UNK_10dbcfbb0);
                                    }
                                    else {
                                      if (lStack_17e0 == 1) goto LAB_1034f4ec8;
                                      uStack_1c78 = *(undefined8 *)(param_2 + 0x5a8);
                                      uStack_1c80 = *(undefined8 *)(param_2 + 0x5a0);
                                      uStack_1c68 = *(undefined8 *)(param_2 + 0x5b8);
                                      uStack_1c70 = *(undefined8 *)(param_2 + 0x5b0);
                                      uStack_1c58 = *(ulong *)(param_2 + 0x5c8);
                                      lStack_1c60 = *(long *)(param_2 + 0x5c0);
                                      lStack_1c50 = *(long *)(param_2 + 0x5d0);
                                      lStack_1c98 = *(long *)(param_2 + 0x588);
                                      uStack_1ca0 = *(ulong *)(param_2 + 0x580);
                                      uStack_1c88 = *(undefined8 *)(param_2 + 0x598);
                                      uStack_1c90 = *(ulong *)(param_2 + 0x590);
                                      uStack_1d78 = *(undefined8 *)(param_1 + 0x5a8);
                                      uStack_1d80 = *(undefined8 *)(param_1 + 0x5a0);
                                      uStack_1d68 = *(undefined8 *)(param_1 + 0x5b8);
                                      uStack_1d70 = *(undefined8 *)(param_1 + 0x5b0);
                                      uStack_1d58 = *(undefined8 *)(param_1 + 0x5c8);
                                      uStack_1d60 = *(undefined8 *)(param_1 + 0x5c0);
                                      uStack_1d50 = *(undefined8 *)(param_1 + 0x5d0);
                                      uStack_1d98 = *(undefined8 *)(param_1 + 0x588);
                                      uStack_1da0 = *puVar7;
                                      uStack_1d88 = *(undefined8 *)(param_1 + 0x598);
                                      uStack_1d90 = *(undefined8 *)(param_1 + 0x590);
                                      uStack_1ba0 = uStack_1ca0;
                                      lStack_1b98 = lStack_1c98;
                                      uStack_1b90 = uStack_1c90;
                                      uStack_1b88 = uStack_1c88;
                                      uStack_1b80 = uStack_1c80;
                                      uStack_1b78 = uStack_1c78;
                                      lStack_1b70 = uStack_1c70;
                                      uStack_1b68 = uStack_1c68;
                                      lStack_1b60 = lStack_1c60;
                                      uStack_1b58 = uStack_1c58;
                                      lStack_1b50 = lStack_1c50;
                                      FUN_1034ff638(&uStack_1880,&uStack_1aa0,0x112f73cb0,
                                                    &UNK_10dbcfbb0);
                                      FUN_1034ff638(&uStack_1820,&uStack_1aa0,0x112f73cb0,
                                                    &UNK_10dbcfbb0);
                                      puVar7 = &uStack_1da0;
                                      FUN_1035114b4(puVar7,&uStack_1ca0);
                                      FUN_10350317c(&uStack_1ba0,0x112f73cb0,&UNK_10dbcfbb0);
                                      FUN_10350317c(&uStack_d30,0x112f73cb0,&UNK_10dbcfbb0);
                                      if (((ulong)puVar7 & 1) == 0) {
                                        return 0;
                                      }
                                    }
                                    func_0x000107c61428(param_1 + 0x5d8,auStack_18c8,0,0);
                                    func_0x000107c61428(param_2 + 0x5d8,auStack_18e0,0,0);
                                    uVar15 = *(ulong *)(param_1 + 0x5d8);
                                    uVar17 = *(undefined8 *)(param_1 + 0x5e0);
                                    uVar19 = *(undefined8 *)(param_1 + 0x5e8);
                                    uVar25 = *(ulong *)(param_1 + 0x5f0);
                                    uVar10 = *(undefined8 *)(param_2 + 0x5d8);
                                    uVar12 = *(undefined8 *)(param_2 + 0x5e0);
                                    uVar11 = *(undefined8 *)(param_2 + 0x5e8);
                                    uVar28 = *(ulong *)(param_2 + 0x5f0);
                                    if (uVar25 >> 0x3c < 0xf) {
                                      if (0xe < uVar28 >> 0x3c) goto LAB_1034f50f8;
                                      func_0x0001034fea24(uVar15,uVar17,uVar19,uVar25);
                                      func_0x0001034fea24(uVar10,uVar12,uVar11,uVar28);
                                      uVar23 = uVar15;
                                      FUN_10350f514(uVar15,uVar17,uVar19,uVar25,uVar10,uVar12,uVar11
                                                    ,uVar28);
                                      func_0x000100d54dc0(uVar10,uVar12,uVar11,uVar28);
                                      func_0x000100d54dc0(uVar15,uVar17,uVar19,uVar25);
                                      if ((uVar23 & 1) == 0) {
                                        return 0;
                                      }
                                    }
                                    else {
                                      if (uVar28 >> 0x3c < 0xf) {
LAB_1034f50f8:
                                        func_0x0001034fea24(uVar15,uVar17,uVar19,uVar25);
                                        func_0x0001034fea24(uVar10,uVar12,uVar11,uVar28);
                                        func_0x000100d54dc0(uVar15,uVar17,uVar19,uVar25);
                                        func_0x000100d54dc0(uVar10,uVar12,uVar11,uVar28);
                                        return 0;
                                      }
                                      func_0x0001034fea24(uVar15,uVar17,uVar19,uVar25);
                                      func_0x0001034fea24(uVar10,uVar12,uVar11,uVar28);
                                      func_0x000100d54dc0(uVar15,uVar17,uVar19,uVar25);
                                    }
                                    puVar7 = (ulong *)(param_1 + 0x5f8);
                                    func_0x000107c61428(puVar7,auStack_1998,0,0);
                                    puVar1 = (ulong *)(param_2 + 0x5f8);
                                    func_0x000107c61428(puVar1,auStack_19b0,0,0);
                                    uStack_18f0 = *(undefined8 *)(param_2 + 0x638);
                                    uStack_1958 = *(undefined8 *)(param_1 + 0x620);
                                    uStack_1960 = *(undefined8 *)(param_1 + 0x618);
                                    uStack_1948 = *(undefined8 *)(param_1 + 0x630);
                                    lStack_1950 = *(long *)(param_1 + 0x628);
                                    lStack_1940 = *(long *)(param_1 + 0x638);
                                    uStack_1978 = *(undefined8 *)(param_1 + 0x600);
                                    uStack_1980 = *puVar7;
                                    uStack_1968 = *(undefined8 *)(param_1 + 0x610);
                                    uStack_1970 = *(undefined8 *)(param_1 + 0x608);
                                    uStack_1928 = *(undefined8 *)(param_2 + 0x600);
                                    uStack_1930 = *puVar1;
                                    uStack_cd0 = *(undefined8 *)(param_2 + 0x610);
                                    uStack_cd8 = *(undefined8 *)(param_2 + 0x608);
                                    uStack_1908 = *(undefined8 *)(param_2 + 0x620);
                                    uStack_1910 = *(undefined8 *)(param_2 + 0x618);
                                    uStack_18f8 = *(undefined8 *)(param_2 + 0x630);
                                    uStack_1900 = *(undefined8 *)(param_2 + 0x628);
                                    uStack_1918 = *(undefined8 *)(param_2 + 0x610);
                                    uStack_1920 = *(undefined8 *)(param_2 + 0x608);
                                    uStack_cc0 = *(undefined8 *)(param_2 + 0x620);
                                    uStack_cc8 = *(undefined8 *)(param_2 + 0x618);
                                    lStack_ce0 = *(undefined8 *)(param_2 + 0x600);
                                    uStack_ce8 = *puVar1;
                                    uStack_cb0 = *(undefined8 *)(param_2 + 0x630);
                                    lStack_cb8 = *(long *)(param_2 + 0x628);
                                    lStack_ca8 = *(undefined8 *)(param_2 + 0x638);
                                    uStack_d30 = uStack_1980;
                                    lStack_d28 = uStack_1978;
                                    uStack_d20 = uStack_1970;
                                    uStack_d18 = uStack_1968;
                                    uStack_d10 = uStack_1960;
                                    lStack_d08 = uStack_1958;
                                    lStack_d00 = lStack_1950;
                                    uStack_cf8 = uStack_1948;
                                    lStack_cf0 = lStack_1940;
                                    if (lStack_1950 == 1) {
                                      if (lStack_cb8 == 1) {
                                        uStack_1b78 = *(undefined8 *)(param_1 + 0x620);
                                        uStack_1b80 = *(undefined8 *)(param_1 + 0x618);
                                        uStack_1b68 = *(undefined8 *)(param_1 + 0x630);
                                        lStack_1b70 = *(undefined8 *)(param_1 + 0x628);
                                        lStack_1b60 = *(undefined8 *)(param_1 + 0x638);
                                        lStack_1b98 = *(undefined8 *)(param_1 + 0x600);
                                        uStack_1ba0 = *puVar7;
                                        uStack_1b88 = *(undefined8 *)(param_1 + 0x610);
                                        uStack_1b90 = *(undefined8 *)(param_1 + 0x608);
                                        FUN_1034ff638(&uStack_1980,&uStack_1aa0,0x112f73cc0,
                                                      &UNK_10dbcfbc0);
                                        FUN_1034ff638(&uStack_1930,&uStack_1aa0,0x112f73cc0,
                                                      &UNK_10dbcfbc0);
                                        FUN_10350317c(&uStack_1ba0,0x112f73cc0,&UNK_10dbcfbc0);
                                        return 1;
                                      }
                                    }
                                    else if (lStack_cb8 != 1) {
                                      uStack_1b78 = *(undefined8 *)(param_2 + 0x620);
                                      uStack_1b80 = *(undefined8 *)(param_2 + 0x618);
                                      uStack_1b68 = *(undefined8 *)(param_2 + 0x630);
                                      lStack_1b70 = *(undefined8 *)(param_2 + 0x628);
                                      lStack_1b60 = *(undefined8 *)(param_2 + 0x638);
                                      lStack_1b98 = *(undefined8 *)(param_2 + 0x600);
                                      uStack_1ba0 = *puVar1;
                                      uStack_1b88 = *(undefined8 *)(param_2 + 0x610);
                                      uStack_1b90 = *(undefined8 *)(param_2 + 0x608);
                                      uStack_1a98 = *(undefined8 *)(param_1 + 0x600);
                                      uStack_1aa0 = *puVar7;
                                      uStack_1a88 = *(undefined8 *)(param_1 + 0x610);
                                      uStack_1a90 = *(undefined8 *)(param_1 + 0x608);
                                      uStack_1a78 = *(undefined8 *)(param_1 + 0x620);
                                      uStack_1a80 = *(undefined8 *)(param_1 + 0x618);
                                      uStack_1a68 = *(undefined8 *)(param_1 + 0x630);
                                      uStack_1a70 = *(undefined8 *)(param_1 + 0x628);
                                      uStack_1a60 = *(undefined8 *)(param_1 + 0x638);
                                      uStack_1a00 = uStack_1ba0;
                                      uStack_19f8 = lStack_1b98;
                                      uStack_19f0 = uStack_1b90;
                                      uStack_19e8 = uStack_1b88;
                                      uStack_19e0 = uStack_1b80;
                                      uStack_19d8 = uStack_1b78;
                                      uStack_19d0 = lStack_1b70;
                                      uStack_19c8 = uStack_1b68;
                                      uStack_19c0 = lStack_1b60;
                                      FUN_1034ff638(&uStack_1980,auStack_1a48,0x112f73cc0,
                                                    &UNK_10dbcfbc0);
                                      FUN_1034ff638(&uStack_1930,auStack_1a48,0x112f73cc0,
                                                    &UNK_10dbcfbc0);
                                      puVar7 = &uStack_1aa0;
                                      FUN_103503f38(puVar7,&uStack_1ba0);
                                      FUN_10350317c(&uStack_1a00,0x112f73cc0,&UNK_10dbcfbc0);
                                      FUN_10350317c(&uStack_d30,0x112f73cc0,&UNK_10dbcfbc0);
                                      if (((ulong)puVar7 & 1) == 0) {
                                        return 0;
                                      }
                                      return 1;
                                    }
                                    uStack_1ba0 = uStack_1980;
                                    lStack_1b98 = uStack_1978;
                                    uStack_1b90 = uStack_1970;
                                    uStack_1b88 = uStack_1968;
                                    uStack_1b80 = uStack_1960;
                                    uStack_1b78 = uStack_1958;
                                    lStack_1b70 = lStack_1950;
                                    uStack_1b68 = uStack_1948;
                                    lStack_1b60 = lStack_1940;
                                    uStack_1b58 = uStack_ce8;
                                    lStack_1b50 = lStack_ce0;
                                    uStack_1b48 = uStack_cd8;
                                    uStack_1b40 = uStack_cd0;
                                    uStack_1b38 = uStack_cc8;
                                    uStack_1b30 = uStack_cc0;
                                    lStack_1b28 = lStack_cb8;
                                    uStack_1b20 = uStack_cb0;
                                    lStack_1b18 = lStack_ca8;
                                    FUN_1034ff638(&uStack_1980,&uStack_1aa0,0x112f73cc0,
                                                  &UNK_10dbcfbc0);
                                    FUN_1034ff638(&uStack_1930,&uStack_1aa0,0x112f73cc0,
                                                  &UNK_10dbcfbc0);
                                    uVar19 = 0x112f73cc8;
                                    puVar9 = &UNK_10dbcfbc8;
LAB_1034f4f68:
                                    FUN_10350317c(&uStack_1ba0,uVar19,puVar9);
                                    return 0;
                                  }
                                  goto LAB_1034f4488;
                                }
                              }
                              else if ((uVar15 & 0xff) != 2) {
                                func_0x000101541464(uVar20,uVar16,uVar17);
                                func_0x000101541464(uVar15,uVar25,uVar19);
                                if ((((uint)uVar15 ^ (uint)uVar20) & 1) != 0) goto LAB_1034f38f8;
                                func_0x000100e25fcc(uVar16,uVar17,uVar25,uVar19);
                                func_0x000101556278(uVar15,uVar25,uVar19);
                                if ((uVar28 & 1) == 0) goto LAB_1034f3a10;
                                goto LAB_1034f46dc;
                              }
                            }
                          }
                          else if ((uVar15 & 0xff) != 2) {
                            func_0x000101541464(uVar20,uVar16,uVar17);
                            func_0x000101541464(uVar15,uVar25,uVar19);
                            if ((((uint)uVar15 ^ (uint)uVar20) & 1) != 0) goto LAB_1034f38f8;
                            func_0x000100e25fcc(uVar16,uVar17,uVar25,uVar19);
                            func_0x000101556278(uVar15,uVar25,uVar19);
                            if ((uVar28 & 1) == 0) goto LAB_1034f3a10;
                            goto LAB_1034f4594;
                          }
                          goto LAB_1034f3890;
                        }
                      }
                    }
                    else if (lVar22 != 0) {
                      if (((uVar25 == uVar15) && (lVar14 == lVar22)) ||
                         (uVar28 = uVar25, func_0x000107c605b8(uVar25,lVar14,uVar15,lVar22,0),
                         (uVar28 & 1) != 0)) {
                        func_0x000101597350(uVar25,lVar14,uStack_2108,uStack_2110);
                        func_0x000101597350(uVar15,lVar22,uVar10,uVar19);
                        uVar28 = uStack_2108;
                        func_0x000100e25fcc(uStack_2108,uStack_2110,uVar10,uVar19);
                        func_0x000101597ae4(uVar15,lVar22,uVar10,uVar19);
                        if ((uVar28 & 1) == 0) goto LAB_1034f4d34;
                        goto LAB_1034f438c;
                      }
LAB_1034f4ce4:
                      func_0x000101597350(uVar25,lVar14,uStack_2108,uStack_2110);
                      func_0x000101597350(uVar15,lVar22,uVar10,uVar19);
                      func_0x000101597ae4(uVar15,lVar22,uVar10,uVar19);
LAB_1034f4d34:
                      func_0x000101597ae4(uVar25,lVar14,uStack_2108,uStack_2110);
                      return 0;
                    }
LAB_1034f4488:
                    uStack_d20 = uStack_2108;
                    uStack_d18 = uStack_2110;
                    uStack_d30 = uVar25;
                    lStack_d28 = lVar14;
                    uStack_d10 = uVar15;
                    lStack_d08 = lVar22;
                    lStack_d00 = uVar10;
                    uStack_cf8 = uVar19;
                    func_0x000101597350(uVar25,lVar14);
                    func_0x000101597350(uVar15,lVar22,uVar10,uVar19);
                    uVar19 = 0x112db7ec0;
                    puVar9 = &UNK_10d966840;
                    puVar7 = &uStack_d30;
LAB_1034f2c04:
                    FUN_10350317c(puVar7,uVar19,puVar9);
                    return 0;
                  }
                }
                else if ((uVar15 & 0xff) != 2) {
                  func_0x000101541464(uVar20,uVar16,uVar17);
                  func_0x000101541464(uVar15,uVar25,uVar19);
                  if ((((uint)uVar15 ^ (uint)uVar20) & 1) != 0) goto LAB_1034f38f8;
                  func_0x000100e25fcc(uVar16,uVar17,uVar25,uVar19);
                  func_0x000101556278(uVar15,uVar25,uVar19);
                  if ((uVar28 & 1) == 0) goto LAB_1034f3a10;
                  goto LAB_1034f3f24;
                }
                goto LAB_1034f3890;
              }
              goto LAB_1034f3794;
            }
          }
          else if ((uVar15 & 0xff) != 2) {
            func_0x000101541464(uVar20,uVar16,uVar17);
            func_0x000101541464(uVar15,uVar25,uVar19);
            if ((((uint)uVar15 ^ (uint)uVar20) & 1) == 0) {
              func_0x000100e25fcc(uVar16,uVar17,uVar25,uVar19);
              func_0x000101556278(uVar15,uVar25,uVar19);
              if ((uVar28 & 1) == 0) goto LAB_1034f3a10;
              goto LAB_1034f3448;
            }
LAB_1034f38f8:
            func_0x000101556278(uVar15,uVar25,uVar19);
            goto LAB_1034f3a10;
          }
LAB_1034f3890:
          uVar20 = uVar15;
          uVar16 = uVar25;
          uVar17 = uVar19;
          func_0x000101541464(uVar23,uVar28,uVar10);
          func_0x000101541464(uVar20,uVar16,uVar17);
          func_0x000101556278(uVar23,uVar28,uVar10);
LAB_1034f3a10:
          func_0x000101556278(uVar20,uVar16,uVar17);
          return 0;
        }
      }
    }
  }
LAB_1034f3794:
  lVar24 = lVar14;
  uVar20 = uVar15;
  uVar16 = uVar25;
  func_0x000100d54cb4(lVar22,uVar23,uVar28);
  func_0x000100d54cb4(lVar24,uVar20,uVar16);
  func_0x000100d54cd0(lVar22,uVar23,uVar28);
LAB_1034f3858:
  func_0x000100d54cd0(lVar24,uVar20,uVar16);
  return 0;
}



/* Entry: 1034f5468; end: 1034f54bb;  */

void FUN_1034f5468(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f73cd0 != -1) {
    func_0x000107c61568(0x112f73cd0,FUN_1034e7fd0);
  }
  uVar1 = uRam0000000112f73cd8;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1034f54bc; end: 1034f5517;  */

void FUN_1034f54bc(void)

{
  FUN_1034f6fec();
  return;
}



/* Entry: 1034f5518; end: 1034f554f;  */

uint FUN_1034f5518(long param_1,long param_2)

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
  func_0x000103502454();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
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



/* Entry: 1034f5550; end: 1034f555b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1034f5550(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1034f29d0(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1034f555c; end: 1034f55fb;  */

/* WARNING: Possible PIC construction at 0x0001034f55a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034f55b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034f55ac) */
/* WARNING: Removing unreachable block (ram,0x0001034f55bc) */

void FUN_1034f555c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f73f50 != -1) {
    func_0x000107c61568(0x112f73f50,FUN_1034e7f88);
  }
  uVar5 = uRam0000000113807378;
  uVar4 = uRam0000000113807370;
  uVar3 = uRam0000000113807368;
  uVar2 = uRam0000000113807360;
  uVar1 = uRam0000000113807358;
  *param_1 = uRam0000000113807350;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1034f55fc; end: 1034f560f;  */

void FUN_1034f55fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f74b68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f74b68,&UNK_10dbd07f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1034f5610; end: 1034f5647;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1034f5610(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  func_0x0001018dde30();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 1034f5648; end: 1034f5653;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1034f5648(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1034f29d0(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1034f5654; end: 1034f569b;  */

void FUN_1034f5654(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd0990,0x3d0,2);
  uRam0000000113807388 = uStack_38;
  uRam0000000113807380 = uStack_40;
  uRam0000000113807398 = uStack_28;
  uRam0000000113807390 = uStack_30;
  uRam00000001138073a8 = uStack_18;
  uRam00000001138073a0 = uStack_20;
  return;
}



/* Entry: 1034f569c; end: 1034f56bb;  */

void FUN_1034f569c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1034ff618();
  func_0x000107c613fc();
  FUN_1034f5708();
  uRam0000000112f73c78 = uVar1;
  return;
}



/* Entry: 1034f56bc; end: 1034f5707;  */

void FUN_1034f56bc(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_2)();
  func_0x000107c613fc();
  (*param_4)();
  *param_5 = uVar1;
  return;
}



/* Entry: 1034f5708; end: 1034f58ab;  */

void FUN_1034f5708(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 2;
  *(undefined8 *)(unaff_x20 + 0x150) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 2;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined1 *)(unaff_x20 + 400) = 1;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined1 *)(unaff_x20 + 0x1a0) = 1;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 2;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined1 *)(unaff_x20 + 0x1c8) = 1;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined1 *)(unaff_x20 + 0x208) = 1;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined1 *)(unaff_x20 + 0x218) = 1;
  *(undefined8 *)(unaff_x20 + 0x220) = 2;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined1 *)(unaff_x20 + 0x280) = 1;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined1 *)(unaff_x20 + 0x2b0) = 1;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 2;
  *(undefined8 *)(unaff_x20 + 0x348) = 0;
  *(undefined8 *)(unaff_x20 + 0x340) = 0;
  *(undefined8 *)(unaff_x20 + 0x358) = 0;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x20 + 0x328) = 0;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x338) = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined8 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x318) = 0;
  *(undefined8 *)(unaff_x20 + 0x310) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x370) = 0;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x378) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x390) = 0;
  *(undefined1 *)(unaff_x20 + 0x3a8) = 1;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 2;
  *(undefined8 *)(unaff_x20 + 0x400) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x418) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x478) = 0;
  *(undefined8 *)(unaff_x20 + 0x470) = 0;
  *(undefined8 *)(unaff_x20 + 0x468) = 0;
  *(undefined8 *)(unaff_x20 + 0x460) = 0;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  *(undefined8 *)(unaff_x20 + 0x450) = 0;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 0;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0;
  *(undefined8 *)(unaff_x20 + 0x480) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x490) = 0;
  *(undefined8 *)(unaff_x20 + 0x488) = 0;
  *(undefined8 *)(unaff_x20 + 0x498) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x4a0) = 0;
  *(undefined1 *)(unaff_x20 + 0x4a8) = 1;
  *(undefined8 *)(unaff_x20 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x4d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d8) = 0xf000000000000000;
  return;
}



/* Entry: 1034f58ac; end: 1034f6d63;  */

void FUN_1034f58ac(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_ac0 [24];
  undefined1 auStack_aa8 [24];
  undefined1 auStack_a90 [24];
  undefined1 auStack_a78 [24];
  undefined1 auStack_a60 [24];
  undefined1 auStack_a48 [24];
  undefined1 auStack_a30 [24];
  undefined1 auStack_a18 [24];
  undefined1 auStack_a00 [24];
  undefined1 auStack_9e8 [120];
  undefined1 auStack_970 [24];
  undefined1 auStack_958 [24];
  undefined1 auStack_940 [24];
  undefined1 auStack_928 [24];
  undefined1 auStack_910 [24];
  undefined1 auStack_8f8 [24];
  undefined1 auStack_8e0 [24];
  undefined1 auStack_8c8 [24];
  undefined1 auStack_8b0 [24];
  undefined1 auStack_898 [24];
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  undefined1 auStack_850 [24];
  undefined1 auStack_838 [24];
  undefined1 auStack_820 [24];
  undefined1 auStack_808 [24];
  undefined1 auStack_7f0 [24];
  undefined1 auStack_7d8 [24];
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [24];
  undefined1 auStack_790 [24];
  undefined1 auStack_778 [24];
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [24];
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [24];
  undefined1 auStack_6d0 [24];
  undefined1 auStack_6b8 [24];
  undefined1 auStack_6a0 [24];
  undefined1 auStack_688 [24];
  undefined1 auStack_670 [24];
  undefined1 auStack_658 [24];
  undefined1 auStack_640 [24];
  undefined1 auStack_628 [24];
  undefined1 auStack_610 [24];
  undefined1 auStack_5f8 [24];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined1 auStack_5b0 [24];
  undefined1 auStack_598 [24];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
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
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
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
  
  puVar14 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar14 = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  puVar10 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar10 = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *puVar12 = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  puVar3 = (undefined8 *)(unaff_x20 + 0x58);
  *puVar3 = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *puVar9 = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xf000000000000000;
  puVar4 = (undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0xf000000000000000;
  puVar5 = (undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *puVar6 = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *puVar7 = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *puVar8 = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 2;
  *(undefined8 *)(unaff_x20 + 0x150) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 2;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined1 *)(unaff_x20 + 400) = 1;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined1 *)(unaff_x20 + 0x1a0) = 1;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 2;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined1 *)(unaff_x20 + 0x1c8) = 1;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x208) = 1;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined1 *)(unaff_x20 + 0x218) = 1;
  *(undefined8 *)(unaff_x20 + 0x220) = 2;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined1 *)(unaff_x20 + 0x280) = 1;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined1 *)(unaff_x20 + 0x2b0) = 1;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 2;
  *(undefined8 *)(unaff_x20 + 0x348) = 0;
  *(undefined8 *)(unaff_x20 + 0x340) = 0;
  *(undefined8 *)(unaff_x20 + 0x358) = 0;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x20 + 0x328) = 0;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x338) = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined8 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x318) = 0;
  *(undefined8 *)(unaff_x20 + 0x310) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x370) = 0;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x378) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x390) = 0;
  *(undefined1 *)(unaff_x20 + 0x3a8) = 1;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 2;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0xf000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + 0x3f8);
  *(undefined8 *)(unaff_x20 + 0x400) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x418) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x478) = 0;
  *(undefined8 *)(unaff_x20 + 0x470) = 0;
  *(undefined8 *)(unaff_x20 + 0x468) = 0;
  *(undefined8 *)(unaff_x20 + 0x460) = 0;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  *(undefined8 *)(unaff_x20 + 0x450) = 0;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 0;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0;
  *(undefined8 *)(unaff_x20 + 0x480) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x490) = 0;
  *(undefined8 *)(unaff_x20 + 0x488) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x498) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x4a8) = 1;
  *(undefined8 *)(unaff_x20 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x4d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d8) = 0xf000000000000000;
  func_0x000107c61428(param_1 + 0x10,auStack_178,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  func_0x000107c61428(puVar14,auStack_190,1,0);
  *puVar14 = uVar16;
  *(undefined1 *)(unaff_x20 + 0x18) = uVar2;
  func_0x000107c61428(param_1 + 0x20,auStack_1a8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined1 *)(param_1 + 0x28);
  func_0x000107c61428(puVar10,auStack_1c0,1,0);
  *puVar10 = uVar16;
  *(undefined1 *)(unaff_x20 + 0x28) = uVar2;
  func_0x000107c61428(param_1 + 0x30,auStack_1d8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(puVar12,auStack_1f0,1,0);
  uVar19 = *puVar12;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
  *puVar12 = uVar16;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar17;
  func_0x000100d54cb4(uVar16,uVar13,uVar17);
  func_0x000100d54cd0(uVar19,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0x48,auStack_208,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined1 *)(param_1 + 0x50);
  func_0x000107c61428(unaff_x20 + 0x48,auStack_220,1,0);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar16;
  *(undefined1 *)(unaff_x20 + 0x50) = uVar2;
  func_0x000107c61428(param_1 + 0x58,auStack_238,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined1 *)(param_1 + 0x60);
  func_0x000107c61428(puVar3,auStack_250,1,0);
  *puVar3 = uVar16;
  *(undefined1 *)(unaff_x20 + 0x60) = uVar2;
  func_0x000107c61428(param_1 + 0x68,auStack_268,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x68);
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  uVar17 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c61428(puVar9,auStack_280,1,0);
  uVar19 = *puVar9;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
  *puVar9 = uVar16;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar17;
  func_0x000100d54cb4(uVar16,uVar13,uVar17);
  func_0x000100d54cd0(uVar19,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0x80,auStack_298,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x80);
  uVar13 = *(undefined8 *)(param_1 + 0x88);
  uVar17 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c61428(puVar4,auStack_2b0,1,0);
  uVar19 = *puVar4;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x90);
  *puVar4 = uVar16;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar17;
  func_0x000100d54cb4(uVar16,uVar13,uVar17);
  func_0x000100d54cd0(uVar19,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0x98,auStack_2c8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x98);
  uVar13 = *(undefined8 *)(param_1 + 0xa0);
  uVar17 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c61428(puVar5,auStack_2e0,1,0);
  uVar19 = *puVar5;
  uVar11 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xa8);
  *puVar5 = uVar16;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar17;
  func_0x000100d54cb4(uVar16,uVar13,uVar17);
  func_0x000100d54cd0(uVar19,uVar11,uVar15);
  func_0x000107c61428(param_1 + 0xb0,auStack_2f8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0xb0);
  uVar15 = *(undefined8 *)(param_1 + 0xb8);
  uVar11 = *(undefined8 *)(param_1 + 0xc0);
  uVar17 = *(undefined8 *)(param_1 + 200);
  func_0x000107c61428(puVar8,auStack_310,1,0);
  uVar18 = *puVar8;
  uVar13 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar20 = *(undefined8 *)(unaff_x20 + 200);
  *puVar8 = uVar16;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar11;
  *(undefined8 *)(unaff_x20 + 200) = uVar17;
  func_0x000101597350(uVar16,uVar15,uVar11,uVar17);
  func_0x000101597ae4(uVar18,uVar13,uVar19,uVar20);
  func_0x000107c61428(param_1 + 0xd0,auStack_328,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0xd0);
  uVar15 = *(undefined8 *)(param_1 + 0xd8);
  uVar11 = *(undefined8 *)(param_1 + 0xe0);
  uVar17 = *(undefined8 *)(param_1 + 0xe8);
  func_0x000107c61428(puVar7,auStack_340,1,0);
  uVar18 = *puVar7;
  uVar13 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xe8);
  *puVar7 = uVar16;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar17;
  func_0x000101597350(uVar16,uVar15,uVar11,uVar17);
  func_0x000101597ae4(uVar18,uVar13,uVar19,uVar20);
  func_0x000107c61428(param_1 + 0xf0,auStack_358,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0xf0);
  uVar15 = *(undefined8 *)(param_1 + 0xf8);
  uVar11 = *(undefined8 *)(param_1 + 0x100);
  uVar17 = *(undefined8 *)(param_1 + 0x108);
  func_0x000107c61428(puVar6,auStack_370,1,0);
  uVar18 = *puVar6;
  uVar13 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x108);
  *puVar6 = uVar16;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar17;
  func_0x000101597350(uVar16,uVar15,uVar11,uVar17);
  func_0x000101597ae4(uVar18,uVar13,uVar19,uVar20);
  func_0x000107c61428(param_1 + 0x110,auStack_388,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x110);
  uVar13 = *(undefined8 *)(param_1 + 0x118);
  uVar17 = *(undefined8 *)(param_1 + 0x120);
  func_0x000107c61428(unaff_x20 + 0x110,auStack_3a0,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x120);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar17;
  func_0x000100d54cb4(uVar16,uVar13,uVar17);
  func_0x000100d54cd0(uVar11,uVar15,uVar19);
  func_0x000107c61428(param_1 + 0x128,auStack_3b8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x128);
  uVar13 = *(undefined8 *)(param_1 + 0x130);
  uVar17 = *(undefined8 *)(param_1 + 0x138);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x128),auStack_3d0,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x20 + 0x128) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x130) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar17;
  func_0x000100d54cb4(uVar16,uVar13,uVar17);
  func_0x000100d54cd0(uVar11,uVar15,uVar19);
  func_0x000107c61428(param_1 + 0x140,auStack_3e8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x140);
  uVar13 = *(undefined8 *)(param_1 + 0x148);
  uVar17 = *(undefined8 *)(param_1 + 0x150);
  func_0x000107c61428(unaff_x20 + 0x140,auStack_400,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x150);
  *(undefined8 *)(unaff_x20 + 0x140) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x148) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x150) = uVar17;
  func_0x000100d54cb4(uVar16,uVar13,uVar17);
  func_0x000100d54cd0(uVar11,uVar15,uVar19);
  func_0x000107c61428(param_1 + 0x158,auStack_418,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x158);
  uVar13 = *(undefined8 *)(param_1 + 0x160);
  uVar17 = *(undefined8 *)(param_1 + 0x168);
  func_0x000107c61428(unaff_x20 + 0x158,auStack_430,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x20 + 0x158) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x160) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x168) = uVar17;
  func_0x000101541464(uVar16,uVar13,uVar17);
  func_0x000101556278(uVar11,uVar15,uVar19);
  func_0x000107c61428(param_1 + 0x170,auStack_448,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x170);
  uVar13 = *(undefined8 *)(param_1 + 0x178);
  uVar17 = *(undefined8 *)(param_1 + 0x180);
  func_0x000107c61428(unaff_x20 + 0x170,auStack_460,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x180);
  *(undefined8 *)(unaff_x20 + 0x170) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x178) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x180) = uVar17;
  func_0x000101541464(uVar16,uVar13,uVar17);
  func_0x000101556278(uVar11,uVar15,uVar19);
  func_0x000107c61428(param_1 + 0x188,auStack_478,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x188);
  uVar2 = *(undefined1 *)(param_1 + 400);
  func_0x000107c61428(unaff_x20 + 0x188,auStack_490,1,0);
  *(undefined8 *)(unaff_x20 + 0x188) = uVar16;
  *(undefined1 *)(unaff_x20 + 400) = uVar2;
  func_0x000107c61428(param_1 + 0x198,auStack_4a8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x198);
  uVar2 = *(undefined1 *)(param_1 + 0x1a0);
  func_0x000107c61428(unaff_x20 + 0x198,auStack_4c0,1,0);
  *(undefined8 *)(unaff_x20 + 0x198) = uVar16;
  *(undefined1 *)(unaff_x20 + 0x1a0) = uVar2;
  func_0x000107c61428(param_1 + 0x1a8,auStack_4d8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x1a8);
  uVar13 = *(undefined8 *)(param_1 + 0x1b0);
  uVar17 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x000107c61428(unaff_x20 + 0x1a8,auStack_4f0,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x1b8);
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar17;
  func_0x000101541464(uVar16,uVar13,uVar17);
  func_0x000101556278(uVar11,uVar15,uVar19);
  func_0x000107c61428(param_1 + 0x1c0,auStack_508,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x1c0);
  uVar2 = *(undefined1 *)(param_1 + 0x1c8);
  func_0x000107c61428(unaff_x20 + 0x1c0,auStack_520,1,0);
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar16;
  *(undefined1 *)(unaff_x20 + 0x1c8) = uVar2;
  func_0x000107c61428(param_1 + 0x1d0,auStack_538,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x1d0);
  uVar13 = *(undefined8 *)(param_1 + 0x1d8);
  uVar17 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x000107c61428(unaff_x20 + 0x1d0,auStack_550,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x1e0);
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uVar17;
  func_0x000100d54cb4(uVar16,uVar13,uVar17);
  func_0x000100d54cd0(uVar11,uVar15,uVar19);
  func_0x000107c61428(param_1 + 0x1e8,auStack_568,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x1e8);
  uVar13 = *(undefined8 *)(param_1 + 0x1f0);
  uVar17 = *(undefined8 *)(param_1 + 0x1f8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x1e8),auStack_580,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x1f8);
  *(undefined8 *)(unaff_x20 + 0x1e8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uVar17;
  func_0x000100d54cb4(uVar16,uVar13,uVar17);
  func_0x000100d54cd0(uVar11,uVar15,uVar19);
  func_0x000107c61428(param_1 + 0x200,auStack_598,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x200);
  uVar2 = *(undefined1 *)(param_1 + 0x208);
  func_0x000107c61428(unaff_x20 + 0x200,auStack_5b0,1,0);
  *(undefined8 *)(unaff_x20 + 0x200) = uVar16;
  *(undefined1 *)(unaff_x20 + 0x208) = uVar2;
  func_0x000107c61428(param_1 + 0x210,auStack_5c8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x210);
  uVar2 = *(undefined1 *)(param_1 + 0x218);
  func_0x000107c61428(unaff_x20 + 0x210,auStack_5e0,1,0);
  *(undefined8 *)(unaff_x20 + 0x210) = uVar16;
  *(undefined1 *)(unaff_x20 + 0x218) = uVar2;
  func_0x000107c61428(param_1 + 0x220,auStack_5f8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x220);
  uVar11 = *(undefined8 *)(param_1 + 0x228);
  uVar13 = *(undefined8 *)(param_1 + 0x230);
  func_0x000107c61428(unaff_x20 + 0x220,auStack_610,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x220);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x228);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x230);
  *(undefined8 *)(unaff_x20 + 0x220) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x228) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x230) = uVar13;
  func_0x000101541464(uVar16,uVar11,uVar13);
  func_0x000101556278(uVar15,uVar17,uVar19);
  func_0x000107c61428(param_1 + 0x238,auStack_628,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x238);
  uVar11 = *(undefined8 *)(param_1 + 0x240);
  uVar13 = *(undefined8 *)(param_1 + 0x248);
  uVar15 = *(undefined8 *)(param_1 + 0x250);
  func_0x000107c61428(unaff_x20 + 0x238,auStack_640,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x238);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x240);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x248);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x250);
  *(undefined8 *)(unaff_x20 + 0x238) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x240) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x248) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x250) = uVar15;
  func_0x000101597350(uVar16,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar17,uVar19,uVar18,uVar20);
  func_0x000107c61428(param_1 + 600,auStack_658,0,0);
  uVar16 = *(undefined8 *)(param_1 + 600);
  uVar11 = *(undefined8 *)(param_1 + 0x260);
  uVar13 = *(undefined8 *)(param_1 + 0x268);
  uVar15 = *(undefined8 *)(param_1 + 0x270);
  func_0x000107c61428(unaff_x20 + 600,auStack_670,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 600);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x260);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x268);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x20 + 600) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x260) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x268) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x270) = uVar15;
  func_0x000101597350(uVar16,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar17,uVar19,uVar18,uVar20);
  func_0x000107c61428(param_1 + 0x278,auStack_688,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x278);
  uVar2 = *(undefined1 *)(param_1 + 0x280);
  func_0x000107c61428(unaff_x20 + 0x278,auStack_6a0,1,0);
  *(undefined8 *)(unaff_x20 + 0x278) = uVar16;
  *(undefined1 *)(unaff_x20 + 0x280) = uVar2;
  func_0x000107c61428(param_1 + 0x288,auStack_6b8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x288);
  uVar11 = *(undefined8 *)(param_1 + 0x290);
  uVar13 = *(undefined8 *)(param_1 + 0x298);
  uVar15 = *(undefined8 *)(param_1 + 0x2a0);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x288),auStack_6d0,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x298);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x2a0);
  *(undefined8 *)(unaff_x20 + 0x288) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x290) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x298) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar15;
  func_0x000101597350(uVar16,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar17,uVar19,uVar18,uVar20);
  func_0x000107c61428(param_1 + 0x2a8,auStack_6e8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x2a8);
  uVar2 = *(undefined1 *)(param_1 + 0x2b0);
  func_0x000107c61428(unaff_x20 + 0x2a8,auStack_700,1,0);
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar16;
  *(undefined1 *)(unaff_x20 + 0x2b0) = uVar2;
  func_0x000107c61428(param_1 + 0x2b8,auStack_718,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x2b8);
  uVar11 = *(undefined8 *)(param_1 + 0x2c0);
  uVar13 = *(undefined8 *)(param_1 + 0x2c8);
  uVar15 = *(undefined8 *)(param_1 + 0x2d0);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x2b8),auStack_730,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x2d0);
  *(undefined8 *)(unaff_x20 + 0x2b8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uVar15;
  func_0x000101597350(uVar16,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar17,uVar19,uVar18,uVar20);
  func_0x000107c61428(param_1 + 0x2d8,auStack_748,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x2d8);
  uVar11 = *(undefined8 *)(param_1 + 0x2e0);
  uVar13 = *(undefined8 *)(param_1 + 0x2e8);
  uVar15 = *(undefined8 *)(param_1 + 0x2f0);
  func_0x000107c61428(unaff_x20 + 0x2d8,auStack_760,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x2e0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x2f0);
  *(undefined8 *)(unaff_x20 + 0x2d8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uVar15;
  func_0x000101597350(uVar16,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar17,uVar19,uVar18,uVar20);
  func_0x000107c61428(param_1 + 0x2f8,auStack_778,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x2f8);
  uVar11 = *(undefined8 *)(param_1 + 0x300);
  uVar13 = *(undefined8 *)(param_1 + 0x308);
  func_0x000107c61428(unaff_x20 + 0x2f8,auStack_790,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x2f8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x300);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x308);
  *(undefined8 *)(unaff_x20 + 0x2f8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x300) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x308) = uVar13;
  func_0x000101541464(uVar16,uVar11,uVar13);
  func_0x000101556278(uVar15,uVar17,uVar19);
  func_0x000107c61428(param_1 + 0x310,auStack_7a8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x310);
  uVar11 = *(undefined8 *)(param_1 + 0x318);
  uVar13 = *(undefined8 *)(param_1 + 800);
  uVar15 = *(undefined8 *)(param_1 + 0x328);
  func_0x000107c61428(unaff_x20 + 0x310,auStack_7c0,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x310);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x318);
  uVar18 = *(undefined8 *)(unaff_x20 + 800);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x328);
  *(undefined8 *)(unaff_x20 + 0x310) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x318) = uVar11;
  *(undefined8 *)(unaff_x20 + 800) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x328) = uVar15;
  func_0x000101597350(uVar16,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar17,uVar19,uVar18,uVar20);
  func_0x000107c61428(param_1 + 0x330,auStack_7d8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x330);
  uVar11 = *(undefined8 *)(param_1 + 0x338);
  uVar13 = *(undefined8 *)(param_1 + 0x340);
  uVar15 = *(undefined8 *)(param_1 + 0x348);
  func_0x000107c61428(unaff_x20 + 0x330,auStack_7f0,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x330);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x338);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x340);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x348);
  *(undefined8 *)(unaff_x20 + 0x330) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x338) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x340) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x348) = uVar15;
  func_0x000101597350(uVar16,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar17,uVar19,uVar18,uVar20);
  func_0x000107c61428(param_1 + 0x350,auStack_808,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x350);
  uVar11 = *(undefined8 *)(param_1 + 0x358);
  uVar13 = *(undefined8 *)(param_1 + 0x360);
  func_0x000107c61428(unaff_x20 + 0x350,auStack_820,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x350);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x358);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x360);
  *(undefined8 *)(unaff_x20 + 0x350) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x358) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x360) = uVar13;
  func_0x000100d54cb4(uVar16,uVar11,uVar13);
  func_0x000100d54cd0(uVar15,uVar17,uVar19);
  func_0x000107c61428(param_1 + 0x368,auStack_838,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x368);
  uVar11 = *(undefined8 *)(param_1 + 0x370);
  uVar13 = *(undefined8 *)(param_1 + 0x378);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x368),auStack_850,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x368);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x370);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x378);
  *(undefined8 *)(unaff_x20 + 0x368) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x370) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x378) = uVar13;
  func_0x000100d54cb4(uVar16,uVar11,uVar13);
  func_0x000100d54cd0(uVar15,uVar17,uVar19);
  func_0x000107c61428(param_1 + 0x380,auStack_868,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x380);
  uVar11 = *(undefined8 *)(param_1 + 0x388);
  uVar13 = *(undefined8 *)(param_1 + 0x390);
  uVar15 = *(undefined8 *)(param_1 + 0x398);
  func_0x000107c61428(unaff_x20 + 0x380,auStack_880,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x380);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x388);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x390);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x398);
  *(undefined8 *)(unaff_x20 + 0x380) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x388) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x390) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x398) = uVar15;
  func_0x000101597350(uVar16,uVar11,uVar13,uVar15);
  func_0x000101597ae4(uVar17,uVar19,uVar18,uVar20);
  func_0x000107c61428(param_1 + 0x3a0,auStack_898,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x3a0);
  uVar2 = *(undefined1 *)(param_1 + 0x3a8);
  func_0x000107c61428(unaff_x20 + 0x3a0,auStack_8b0,1,0);
  *(undefined8 *)(unaff_x20 + 0x3a0) = uVar16;
  *(undefined1 *)(unaff_x20 + 0x3a8) = uVar2;
  func_0x000107c61428(param_1 + 0x3b0,auStack_8c8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x3b0);
  uVar11 = *(undefined8 *)(param_1 + 0x3b8);
  uVar13 = *(undefined8 *)(param_1 + 0x3c0);
  func_0x000107c61428(unaff_x20 + 0x3b0,auStack_8e0,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3b8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x3c0);
  *(undefined8 *)(unaff_x20 + 0x3b0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x3b8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x3c0) = uVar13;
  func_0x000100d54cb4(uVar16,uVar11,uVar13);
  func_0x000100d54cd0(uVar15,uVar17,uVar19);
  func_0x000107c61428(param_1 + 0x3c8,auStack_8f8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x3c8);
  uVar11 = *(undefined8 *)(param_1 + 0x3d0);
  uVar13 = *(undefined8 *)(param_1 + 0x3d8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x3c8),auStack_910,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3c8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3d0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x3d8);
  *(undefined8 *)(unaff_x20 + 0x3c8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x3d0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x3d8) = uVar13;
  func_0x000100d54cb4(uVar16,uVar11,uVar13);
  func_0x000100d54cd0(uVar15,uVar17,uVar19);
  func_0x000107c61428(param_1 + 0x3e0,auStack_928,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x3e0);
  uVar11 = *(undefined8 *)(param_1 + 1000);
  uVar13 = *(undefined8 *)(param_1 + 0x3f0);
  func_0x000107c61428(unaff_x20 + 0x3e0,auStack_940,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3e0);
  uVar17 = *(undefined8 *)(unaff_x20 + 1000);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x3f0);
  *(undefined8 *)(unaff_x20 + 0x3e0) = uVar16;
  *(undefined8 *)(unaff_x20 + 1000) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uVar13;
  func_0x000101541464(uVar16,uVar11,uVar13);
  func_0x000101556278(uVar15,uVar17,uVar19);
  func_0x000107c61428((undefined8 *)(param_1 + 0x3f8),auStack_958,0,0);
  uStack_118 = *(undefined8 *)(param_1 + 0x440);
  uStack_120 = *(undefined8 *)(param_1 + 0x438);
  uStack_108 = *(undefined8 *)(param_1 + 0x450);
  uStack_110 = *(undefined8 *)(param_1 + 0x448);
  uStack_f8 = *(undefined8 *)(param_1 + 0x460);
  uStack_100 = *(undefined8 *)(param_1 + 0x458);
  uStack_f0 = *(undefined8 *)(param_1 + 0x468);
  uStack_158 = *(undefined8 *)(param_1 + 0x400);
  uStack_160 = *(undefined8 *)(param_1 + 0x3f8);
  uStack_148 = *(undefined8 *)(param_1 + 0x410);
  uStack_150 = *(undefined8 *)(param_1 + 0x408);
  uStack_138 = *(undefined8 *)(param_1 + 0x420);
  uStack_140 = *(undefined8 *)(param_1 + 0x418);
  uStack_128 = *(undefined8 *)(param_1 + 0x430);
  uStack_130 = *(undefined8 *)(param_1 + 0x428);
  func_0x000107c61428(puVar1,auStack_970,1,0);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x440);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x438);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x450);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x448);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x460);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x458);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x468);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x400);
  uStack_e0 = *puVar1;
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x410);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x408);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x420);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x418);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x430);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x428);
  *(undefined8 *)(unaff_x20 + 0x420) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x418) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x430) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x428) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x400) = uStack_158;
  *puVar1 = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x410) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x408) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x468) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x450) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x448) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x460) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x458) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x440) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x438) = uStack_120;
  FUN_1034ff638(&uStack_160,auStack_9e8,0x112db4a50,&UNK_10dbcfbd0);
  FUN_10350317c(&uStack_e0,0x112db4a50,&UNK_10dbcfbd0);
  func_0x000107c61428(param_1 + 0x470,auStack_9e8,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x470);
  uVar11 = *(undefined8 *)(param_1 + 0x478);
  uVar13 = *(undefined8 *)(param_1 + 0x480);
  func_0x000107c61428(unaff_x20 + 0x470,auStack_a00,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x470);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x478);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x480);
  *(undefined8 *)(unaff_x20 + 0x470) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x478) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x480) = uVar13;
  func_0x000100d54cb4(uVar16,uVar11,uVar13);
  func_0x000100d54cd0(uVar15,uVar17,uVar19);
  func_0x000107c61428(param_1 + 0x488,auStack_a18,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x488);
  uVar11 = *(undefined8 *)(param_1 + 0x490);
  uVar13 = *(undefined8 *)(param_1 + 0x498);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x488),auStack_a30,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x488);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x490);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x498);
  *(undefined8 *)(unaff_x20 + 0x488) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x490) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x498) = uVar13;
  func_0x000100d54cb4(uVar16,uVar11,uVar13);
  func_0x000100d54cd0(uVar15,uVar17,uVar19);
  func_0x000107c61428(param_1 + 0x4a0,auStack_a48,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x4a0);
  uVar2 = *(undefined1 *)(param_1 + 0x4a8);
  func_0x000107c61428(unaff_x20 + 0x4a0,auStack_a60,1,0);
  *(undefined8 *)(unaff_x20 + 0x4a0) = uVar16;
  *(undefined1 *)(unaff_x20 + 0x4a8) = uVar2;
  func_0x000107c61428(param_1 + 0x4b0,auStack_a78,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x4b0);
  uVar11 = *(undefined8 *)(param_1 + 0x4b8);
  uVar13 = *(undefined8 *)(param_1 + 0x4c0);
  func_0x000107c61428(unaff_x20 + 0x4b0,auStack_a90,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x4b0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x4b8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x4c0);
  *(undefined8 *)(unaff_x20 + 0x4b0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x4b8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x4c0) = uVar13;
  func_0x000100d54cb4(uVar16,uVar11,uVar13);
  func_0x000100d54cd0(uVar15,uVar17,uVar19);
  func_0x000107c61428(param_1 + 0x4c8,auStack_aa8,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0x4c8);
  uVar17 = *(undefined8 *)(param_1 + 0x4d0);
  uVar19 = *(undefined8 *)(param_1 + 0x4d8);
  func_0x000100d54cb4(uVar15,uVar17,uVar19);
  func_0x000107c61574(param_1);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x4c8),auStack_ac0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x4c8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x4d0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x4d8);
  *(undefined8 *)(unaff_x20 + 0x4c8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x4d0) = uVar17;
  *(undefined8 *)(unaff_x20 + 0x4d8) = uVar19;
  func_0x000100d54cd0(uVar16,uVar11,uVar13);
  return;
}



/* Entry: 1034f6d64; end: 1034f6feb;  */

void FUN_1034f6d64(void)

{
  long unaff_x20;
  
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                      *(undefined8 *)(unaff_x20 + 0x180));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                      *(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                      *(undefined8 *)(unaff_x20 + 0x230));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x238),*(undefined8 *)(unaff_x20 + 0x240),
                      *(undefined8 *)(unaff_x20 + 0x248),*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 600),*(undefined8 *)(unaff_x20 + 0x260),
                      *(undefined8 *)(unaff_x20 + 0x268),*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x288),*(undefined8 *)(unaff_x20 + 0x290),
                      *(undefined8 *)(unaff_x20 + 0x298),*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x2b8),*(undefined8 *)(unaff_x20 + 0x2c0),
                      *(undefined8 *)(unaff_x20 + 0x2c8),*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x2d8),*(undefined8 *)(unaff_x20 + 0x2e0),
                      *(undefined8 *)(unaff_x20 + 0x2e8),*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x2f8),*(undefined8 *)(unaff_x20 + 0x300),
                      *(undefined8 *)(unaff_x20 + 0x308));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x310),*(undefined8 *)(unaff_x20 + 0x318),
                      *(undefined8 *)(unaff_x20 + 800),*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x330),*(undefined8 *)(unaff_x20 + 0x338),
                      *(undefined8 *)(unaff_x20 + 0x340),*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x350),*(undefined8 *)(unaff_x20 + 0x358),
                      *(undefined8 *)(unaff_x20 + 0x360));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x368),*(undefined8 *)(unaff_x20 + 0x370),
                      *(undefined8 *)(unaff_x20 + 0x378));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0x380),*(undefined8 *)(unaff_x20 + 0x388),
                      *(undefined8 *)(unaff_x20 + 0x390),*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x3b0),*(undefined8 *)(unaff_x20 + 0x3b8),
                      *(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x3c8),*(undefined8 *)(unaff_x20 + 0x3d0),
                      *(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x3e0),*(undefined8 *)(unaff_x20 + 1000),
                      *(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x0001015713a4(*(undefined8 *)(unaff_x20 + 0x3f8),*(undefined8 *)(unaff_x20 + 0x400),
                      *(undefined8 *)(unaff_x20 + 0x408),*(undefined8 *)(unaff_x20 + 0x410),
                      *(undefined8 *)(unaff_x20 + 0x418),*(undefined8 *)(unaff_x20 + 0x420),
                      *(undefined8 *)(unaff_x20 + 0x428),*(undefined8 *)(unaff_x20 + 0x430),
                      *(undefined8 *)(unaff_x20 + 0x438),*(undefined8 *)(unaff_x20 + 0x440),
                      *(undefined8 *)(unaff_x20 + 0x448),*(undefined8 *)(unaff_x20 + 0x450),
                      *(undefined8 *)(unaff_x20 + 0x458),*(undefined8 *)(unaff_x20 + 0x460),
                      *(undefined8 *)(unaff_x20 + 0x468));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x470),*(undefined8 *)(unaff_x20 + 0x478),
                      *(undefined8 *)(unaff_x20 + 0x480));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x488),*(undefined8 *)(unaff_x20 + 0x490),
                      *(undefined8 *)(unaff_x20 + 0x498));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x4b0),*(undefined8 *)(unaff_x20 + 0x4b8),
                      *(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000100d54cd0(*(undefined8 *)(unaff_x20 + 0x4c8),*(undefined8 *)(unaff_x20 + 0x4d0),
                      *(undefined8 *)(unaff_x20 + 0x4d8));
  return;
}



/* Entry: 1034f6fec; end: 1034f709f;  */

void FUN_1034f6fec(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *in_x3;
  code *in_x5;
  code *in_x6;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    (*in_x3)(0);
    func_0x000107c613fc();
    (*in_x5)(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  (*in_x6)();
  return;
}



/* Entry: 1034f70a0; end: 1034f76db;  */

/* WARNING: Removing unreachable block (ram,0x0001034f7170) */
/* WARNING: Removing unreachable block (ram,0x0001034f7368) */
/* WARNING: Removing unreachable block (ram,0x0001034f72c0) */
/* WARNING: Removing unreachable block (ram,0x0001034f74d8) */
/* WARNING: Removing unreachable block (ram,0x0001034f752c) */
/* WARNING: Removing unreachable block (ram,0x0001034f7510) */
/* WARNING: Removing unreachable block (ram,0x0001034f72f8) */
/* WARNING: Removing unreachable block (ram,0x0001034f726c) */
/* WARNING: Removing unreachable block (ram,0x0001034f7234) */
/* WARNING: Removing unreachable block (ram,0x0001034f74f4) */
/* WARNING: Removing unreachable block (ram,0x0001034f7458) */
/* WARNING: Removing unreachable block (ram,0x0001034f75ac) */
/* WARNING: Removing unreachable block (ram,0x0001034f734c) */
/* WARNING: Removing unreachable block (ram,0x0001034f76bc) */
/* WARNING: Removing unreachable block (ram,0x0001034f7658) */
/* WARNING: Removing unreachable block (ram,0x0001034f7558) */
/* WARNING: Removing unreachable block (ram,0x0001034f7574) */
/* WARNING: Removing unreachable block (ram,0x0001034f7218) */
/* WARNING: Removing unreachable block (ram,0x0001034f71e0) */
/* WARNING: Removing unreachable block (ram,0x0001034f7690) */
/* WARNING: Removing unreachable block (ram,0x0001034f72dc) */
/* WARNING: Removing unreachable block (ram,0x0001034f7610) */
/* WARNING: Removing unreachable block (ram,0x0001034f7250) */
/* WARNING: Removing unreachable block (ram,0x0001034f76d8) */
/* WARNING: Removing unreachable block (ram,0x0001034f7590) */
/* WARNING: Removing unreachable block (ram,0x0001034f742c) */
/* WARNING: Removing unreachable block (ram,0x0001034f75c8) */
/* WARNING: Removing unreachable block (ram,0x0001034f718c) */
/* WARNING: Removing unreachable block (ram,0x0001034f71c4) */
/* WARNING: Removing unreachable block (ram,0x0001034f7288) */
/* WARNING: Removing unreachable block (ram,0x0001034f73f4) */
/* WARNING: Removing unreachable block (ram,0x0001034f7674) */
/* WARNING: Removing unreachable block (ram,0x0001034f71fc) */
/* WARNING: Removing unreachable block (ram,0x0001034f7330) */
/* WARNING: Removing unreachable block (ram,0x0001034f762c) */
/* WARNING: Removing unreachable block (ram,0x0001034f74a0) */
/* WARNING: Removing unreachable block (ram,0x0001034f75e4) */
/* WARNING: Removing unreachable block (ram,0x0001034f7410) */
/* WARNING: Removing unreachable block (ram,0x0001034f7384) */
/* WARNING: Removing unreachable block (ram,0x0001034f74bc) */
/* WARNING: Removing unreachable block (ram,0x0001034f72a4) */
/* WARNING: Removing unreachable block (ram,0x0001034f7314) */
/* WARNING: Removing unreachable block (ram,0x0001034f73bc) */
/* WARNING: Removing unreachable block (ram,0x0001034f7474) */
/* WARNING: Removing unreachable block (ram,0x0001034f73a0) */
/* WARNING: Removing unreachable block (ram,0x0001034f73d8) */
/* WARNING: Removing unreachable block (ram,0x0001034f71a8) */

void FUN_1034f70a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1034f76dc(param_2,param_1,param_3,param_4,0x103502754,&UNK_110664e28);
        break;
      case 2:
        FUN_1034f777c(param_2,param_1,param_3,param_4);
        break;
      case 3:
        FUN_1034f7810(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_1034f78a4(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1034f7938(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_1034f79cc(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_1034f7a60(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_1034f7af4(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_1034f7b88(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_1034f7c1c(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_1034f7cb0(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_1034f7d44(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_1034f7dd8(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_1034f7e6c(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_1034f7f00(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_1034f7f94(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_1034f8028(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_1034f80bc(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_1034f8150(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_1034f81e4(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_1034f8278(param_2,param_1,param_3,param_4,&SUB_1015d5420,&UNK_110790b00);
        break;
      case 0x16:
        FUN_1034f8318(param_2,param_1,param_3,param_4,&SUB_1015d5420,&UNK_110790b00);
        break;
      case 0x17:
        FUN_1034f83b8(param_2,param_1,param_3,param_4);
        break;
      case 0x18:
        FUN_1034f844c(param_2,param_1,param_3,param_4);
        break;
      case 0x19:
        FUN_1034f84e0(param_2,param_1,param_3,param_4);
        break;
      case 0x1a:
        FUN_1034f8574(param_2,param_1,param_3,param_4);
        break;
      case 0x1b:
        FUN_1034f8608(param_2,param_1,param_3,param_4,&SUB_101568c04,&UNK_110790c80);
        break;
      case 0x1c:
        FUN_1034f86a8(param_2,param_1,param_3,param_4);
        break;
      case 0x1d:
        FUN_1034f873c(param_2,param_1,param_3,param_4,&SUB_101568c04,&UNK_110790c80);
        break;
      case 0x1e:
        FUN_1034f87dc(param_2,param_1,param_3,param_4);
        break;
      case 0x1f:
        FUN_1034f8870(param_2,param_1,param_3,param_4,&SUB_101568c04,&UNK_110790c80);
        break;
      case 0x20:
        FUN_1034f8910(param_2,param_1,param_3,param_4);
        break;
      case 0x21:
        FUN_1034f89a4(param_2,param_1,param_3,param_4);
        break;
      case 0x22:
        FUN_1034f8a38(param_2,param_1,param_3,param_4);
        break;
      case 0x23:
        FUN_1034f8acc(param_2,param_1,param_3,param_4);
        break;
      case 0x24:
        FUN_1034f8b60(param_2,param_1,param_3,param_4);
        break;
      case 0x25:
        FUN_1034f8bf4(param_2,param_1,param_3,param_4);
        break;
      case 0x26:
        FUN_1034f8c88(param_2,param_1,param_3,param_4);
        break;
      case 0x27:
        FUN_1034f8d1c(param_2,param_1,param_3,param_4);
        break;
      case 0x28:
        FUN_1034f8db0(param_2,param_1,param_3,param_4);
        break;
      case 0x29:
        FUN_1034f8e44(param_2,param_1,param_3,param_4);
        break;
      case 0x2a:
        FUN_1034f8ed8(param_2,param_1,param_3,param_4);
        break;
      case 0x2b:
        FUN_1034f8f6c(param_2,param_1,param_3,param_4,&SUB_1015719bc,&UNK_11065e910);
        break;
      case 0x2c:
        FUN_1034f900c(param_2,param_1,param_3,param_4);
        break;
      case 0x2d:
        FUN_1034f90a0(param_2,param_1,param_3,param_4);
        break;
      case 0x2e:
        FUN_1034f9134(param_2,param_1,param_3,param_4);
        break;
      case 0x2f:
        FUN_1034f91c8(param_2,param_1,param_3,param_4);
        break;
      case 0x30:
        FUN_1034f925c(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1034f76dc; end: 1034f777b;  */

void FUN_1034f76dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  (*param_5)();
  (*pcVar2)(param_2 + 0x10,param_6,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 1034f777c; end: 1034f780f;  */

void FUN_1034f777c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x20;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103502714();
  (*pcVar2)(param_2 + 0x20,&UNK_11065eec8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7810; end: 1034f78a3;  */

void FUN_1034f7810(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x30;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x30,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f78a4; end: 1034f7937;  */

void FUN_1034f78a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x48;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103502494();
  (*pcVar2)(param_2 + 0x48,&UNK_11065d7e8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7938; end: 1034f79cb;  */

void FUN_1034f7938(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103502494();
  (*pcVar2)(param_2 + 0x58,&UNK_11065d7e8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f79cc; end: 1034f7a5f;  */

void FUN_1034f79cc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x68;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x68,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7a60; end: 1034f7af3;  */

void FUN_1034f7a60(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x80,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7af4; end: 1034f7b87;  */

void FUN_1034f7af4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x98,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7b88; end: 1034f7c1b;  */

void FUN_1034f7b88(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0xb0,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7c1c; end: 1034f7caf;  */

void FUN_1034f7c1c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0xd0,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7cb0; end: 1034f7d43;  */

void FUN_1034f7cb0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xf0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0xf0,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7d44; end: 1034f7dd7;  */

void FUN_1034f7d44(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x110;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x110,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7dd8; end: 1034f7e6b;  */

void FUN_1034f7dd8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x128;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x128,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7e6c; end: 1034f7eff;  */

void FUN_1034f7e6c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x140;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x140,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7f00; end: 1034f7f93;  */

void FUN_1034f7f00(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x158;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x158,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f7f94; end: 1034f8027;  */

void FUN_1034f7f94(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x170;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x170,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f8028; end: 1034f80bb;  */

void FUN_1034f8028(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x188;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035024d4();
  (*pcVar2)(param_2 + 0x188,&UNK_11065d878,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f80bc; end: 1034f814f;  */

void FUN_1034f80bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x198;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035026d4();
  (*pcVar2)(param_2 + 0x198,&UNK_11065eba8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f8150; end: 1034f81e3;  */

void FUN_1034f8150(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1a8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x1a8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f81e4; end: 1034f8277;  */

void FUN_1034f81e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103502514();
  (*pcVar2)(param_2 + 0x1c0,&UNK_11065d908,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f8278; end: 1034f8317;  */

void FUN_1034f8278(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x1d0;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  (*param_5)();
  (*pcVar2)(param_2 + 0x1d0,param_6,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 1034f8318; end: 1034f83b7;  */

void FUN_1034f8318(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x1e8;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  (*param_5)();
  (*pcVar2)(param_2 + 0x1e8,param_6,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 1034f83b8; end: 1034f844b;  */

void FUN_1034f83b8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x200;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103502694();
  (*pcVar2)(param_2 + 0x200,&UNK_11065ed38,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f844c; end: 1034f84df;  */

void FUN_1034f844c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x210;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103502654();
  (*pcVar2)(param_2 + 0x210,&UNK_11065ddf8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1034f84e0; end: 1034f8573;  */

void FUN_1034f84e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x220;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x220,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}


