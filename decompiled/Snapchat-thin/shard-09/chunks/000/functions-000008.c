/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067e6424; end: 1067e64df; -[SCNSecurityConfigurationClientSecurityConfigurationClient lookup:] */

long * FUN_1067e6424(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0001067e6628();
  return plVar1;
}



/* Entry: 1067e64e0; end: 1067e6533; -[SCNSecurityConfigurationClientSecurityConfigurationClient .cxx_destruct] */

void FUN_1067e64e0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_11093fc98;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1067e65ec((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1067e6534; end: 1067e6577; -[SCNSecurityConfigurationClientSecurityConfigurationClient .cxx_construct] */

undefined8 * FUN_1067e6534(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1067e6618();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1067e6578; end: 1067e65eb;  */

void FUN_1067e6578(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126ce390;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1067e6618();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1067e65ec(&uStack_30);
  return;
}



/* Entry: 1067e65ec; end: 1067e6617;  */

long FUN_1067e65ec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1067e6618; end: 1067e6647;  */

void FUN_1067e6618(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1067e6648; end: 1067e6697;  */

void FUN_1067e6648(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_28;
  undefined1 uStack_21;
  
  uStack_28 = param_3;
  uStack_21 = param_2;
  FUN_1067e6698(&uStack_40,&uStack_21,&uStack_28);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1067e6b94(&uStack_40);
  return;
}



/* Entry: 1067e6698; end: 1067e66c3;  */

void FUN_1067e6698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1067e6994(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1067e66c4; end: 1067e6917;  */

bool FUN_1067e66c4(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  uVar24 = (ulong)*(uint *)(param_1 + 0xc);
  if (((int)*(uint *)(param_1 + 0xc) < 1) ||
     (uVar23 = (ulong)*(char *)(param_1 + 8), (long)uVar23 < 1)) {
    bVar4 = false;
  }
  else {
    uVar7 = 0;
    uVar9 = 0;
    uVar10 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    plVar3 = puVar2 + 1;
    for (uVar11 = uVar10 >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
      uVar9 = (plVar3[-1] * -0x775ed61580000000 | (ulong)(plVar3[-1] * -0x783c846eeebdac2b) >> 0x21)
              * 0x4cf5ad432745937f ^ uVar9;
      uVar8 = (*plVar3 * 0x4e8b26fe00000000 | (ulong)(*plVar3 * 0x4cf5ad432745937f) >> 0x1f) *
              -0x783c846eeebdac2b ^ uVar7;
      uVar9 = ((uVar9 >> 0x25 | uVar9 << 0x1b) + uVar7) * 5 + 0x52dce729;
      uVar7 = (uVar9 + (uVar8 >> 0x21 | uVar8 << 0x1f)) * 5 + 0x38495ab5;
      plVar3 = plVar3 + 2;
    }
    pbVar1 = (byte *)((long)puVar2 + (uVar10 & 0xfffffffffffffff0));
    uVar11 = 0;
    uVar8 = 0;
    uVar22 = 0;
    uVar21 = 0;
    uVar20 = 0;
    uVar19 = 0;
    uVar18 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    switch(uVar10 & 0xf) {
    case 0xf:
      uVar12 = (ulong)pbVar1[0xe] << 0x30;
    case 0xe:
      uVar13 = uVar12 | (ulong)pbVar1[0xd] << 0x28;
    case 0xd:
      uVar14 = uVar13 ^ (ulong)pbVar1[0xc] << 0x20;
    case 0xc:
      uVar15 = uVar14 ^ (ulong)pbVar1[0xb] << 0x18;
    case 0xb:
      uVar16 = uVar15 ^ (ulong)pbVar1[10] << 0x10;
    case 10:
      uVar17 = uVar16 ^ (ulong)pbVar1[9] << 8;
    case 9:
      uVar7 = ((uVar17 ^ pbVar1[8]) * 0x4e8b26fe00000000 |
              (uVar17 ^ pbVar1[8]) * 0x4cf5ad432745937f >> 0x1f) * -0x783c846eeebdac2b ^ uVar7;
    case 8:
      uVar18 = (ulong)pbVar1[7] << 0x38;
    case 7:
      uVar19 = uVar18 | (ulong)pbVar1[6] << 0x30;
    case 6:
      uVar20 = uVar19 ^ (ulong)pbVar1[5] << 0x28;
    case 5:
      uVar21 = uVar20 ^ (ulong)pbVar1[4] << 0x20;
    case 4:
      uVar22 = uVar21 ^ (ulong)pbVar1[3] << 0x18;
    case 3:
      uVar8 = uVar22 ^ (ulong)pbVar1[2] << 0x10;
    case 2:
      uVar11 = uVar8 ^ (ulong)pbVar1[1] << 8;
    case 1:
      uVar9 = ((uVar11 ^ *pbVar1) * -0x775ed61580000000 |
              (uVar11 ^ *pbVar1) * -0x783c846eeebdac2b >> 0x21) * 0x4cf5ad432745937f ^ uVar9;
    case 0:
      lVar6 = (uVar9 ^ uVar10) + (uVar7 ^ uVar10);
      lVar5 = lVar6;
      FUN_1067e6930();
      lVar6 = lVar6 + (uVar7 ^ uVar10);
      FUN_1067e6930();
      uVar9 = lVar6 + lVar5;
      lVar6 = uVar9 + lVar6;
      uVar7 = 0;
    }
    do {
      uVar10 = uVar23;
      if (uVar23 == uVar7) break;
      uVar10 = 0;
      if (uVar24 != 0) {
        uVar10 = uVar9 / uVar24;
      }
      uVar11 = uVar9 - uVar10 * uVar24;
      uVar8 = uVar11 >> 3;
      uVar10 = uVar7;
      if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) <= uVar8) break;
      uVar9 = uVar9 + lVar6;
      uVar7 = uVar7 + 1;
    } while ((*(byte *)(*(long *)(param_1 + 0x10) + uVar8) >> (ulong)((uint)uVar11 & 7) & 1) != 0);
    bVar4 = uVar23 <= uVar10;
  }
  return bVar4;
}



/* Entry: 1067e6918; end: 1067e691b;  */

undefined8 * FUN_1067e6918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093fcb8;
  func_0x000100100fec(param_1 + 2);
  return param_1;
}



/* Entry: 1067e691c; end: 1067e692f;  */

void FUN_1067e691c(void)

{
  FUN_1067e6968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e6930; end: 1067e6967;  */

ulong FUN_1067e6930(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (param_1 ^ param_1 >> 0x21) * -0xae502812aa7333;
  uVar1 = (uVar1 ^ uVar1 >> 0x21) * -0x3b314601e57a13ad;
  return uVar1 ^ uVar1 >> 0x21;
}



/* Entry: 1067e6968; end: 1067e6993;  */

undefined8 * FUN_1067e6968(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093fcb8;
  func_0x000100100fec(param_1 + 2);
  return param_1;
}



/* Entry: 1067e6994; end: 1067e6a4b;  */

undefined1 *
FUN_1067e6994(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [16];
  long lStack_40;
  long lStack_38;
  
  puVar2 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1067e6a4c(auStack_50,1);
  FUN_1067e6a90(lStack_40,param_3,param_4,param_5);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001067e6b84();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001067e6b84(auStack_50);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_1067e6a74();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1067e6a4c; end: 1067e6a73;  */

long FUN_1067e6a4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1067e6a74();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1067e6a74; end: 1067e6a8f;  */

undefined8 * FUN_1067e6a74(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3a == 0) {
    puVar1 = (undefined8 *)(param_2 << 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11093fd08;
  FUN_1067e6afc(param_1 + 3);
  return param_1;
}



/* Entry: 1067e6a90; end: 1067e6ad3;  */

undefined8 * FUN_1067e6a90(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11093fd08;
  FUN_1067e6afc(param_1 + 3);
  return param_1;
}



/* Entry: 1067e6ad4; end: 1067e6ad7;  */

void FUN_1067e6ad4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093fd08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067e6ad8; end: 1067e6aeb;  */

void FUN_1067e6ad8(void)

{
  FUN_1067e6b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e6aec; end: 1067e6afb;  */

void FUN_1067e6aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067e6af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1067e6afc; end: 1067e6b73;  */

undefined8 *
FUN_1067e6afc(undefined8 *param_1,undefined1 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *param_2;
  uVar1 = *param_3;
  func_0x00010054f8dc(&uStack_50,param_4);
  *param_1 = &PTR_FUN_11093fcb8;
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[4] = uStack_40;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_50);
  return param_1;
}



/* Entry: 1067e6b74; end: 1067e6b93;  */

void FUN_1067e6b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093fd08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067e6b94; end: 1067e6bbb;  */

long FUN_1067e6b94(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1067e6bbc; end: 1067e6bc3;  */

void FUN_1067e6bbc(void)

{
  return;
}



/* Entry: 1067e6bc4; end: 1067e6d37;  */

void FUN_1067e6bc4(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined1 *puStack_a38;
  long *plStack_a30;
  long *plStack_a28;
  undefined8 ***pppuStack_a20;
  code *pcStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined1 *puStack_9f8;
  undefined8 auStack_9f0 [2];
  char cStack_9d9;
  long lStack_9d8;
  undefined8 *puStack_9d0;
  char *pcStack_9c8;
  undefined8 *puStack_9c0;
  long *plStack_9b8;
  long *plStack_9b0;
  long **pplStack_9a8;
  undefined8 ***pppuStack_9a0;
  code *pcStack_998;
  long alStack_990 [3];
  long *plStack_978;
  long **applStack_970 [2];
  char cStack_959;
  long lStack_958;
  undefined8 *puStack_950;
  long *plStack_948;
  long *plStack_940;
  long *plStack_938;
  undefined8 ***pppuStack_930;
  code *pcStack_928;
  char acStack_920 [24];
  undefined1 *puStack_908;
  undefined8 auStack_900 [2];
  char cStack_8e9;
  long lStack_8e8;
  undefined8 *puStack_8e0;
  char *pcStack_8d8;
  undefined8 *puStack_8d0;
  long *plStack_8c8;
  char *pcStack_8c0;
  long *plStack_8b8;
  undefined8 ***pppuStack_8b0;
  code *pcStack_8a8;
  char acStack_898 [24];
  char *pcStack_880;
  undefined8 auStack_878 [2];
  char cStack_861;
  undefined8 auStack_860 [2];
  char cStack_849;
  long lStack_848;
  undefined8 *puStack_840;
  char *pcStack_838;
  undefined8 *puStack_830;
  long *plStack_828;
  char *pcStack_820;
  long *plStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  char acStack_7f8 [24];
  char *pcStack_7e0;
  undefined8 auStack_7d8 [2];
  char cStack_7c1;
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  undefined8 *puStack_7a0;
  char *pcStack_798;
  undefined8 *puStack_790;
  long *plStack_788;
  long *plStack_780;
  long *plStack_778;
  undefined8 ***pppuStack_770;
  code *pcStack_768;
  char acStack_760 [24];
  undefined1 *puStack_748;
  undefined8 auStack_740 [2];
  char cStack_729;
  long lStack_728;
  undefined8 *puStack_720;
  char *pcStack_718;
  undefined8 *puStack_710;
  long *plStack_708;
  char *pcStack_700;
  long *plStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  char acStack_6d8 [24];
  char *pcStack_6c0;
  undefined8 auStack_6b8 [2];
  char cStack_6a1;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  char *pcStack_678;
  undefined8 *puStack_670;
  long *plStack_668;
  long *plStack_660;
  long *plStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  char acStack_640 [24];
  undefined1 *puStack_628;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  char *pcStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5c0 [24];
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  char *pcStack_578;
  undefined8 *puStack_570;
  long *plStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  char acStack_540 [24];
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  char *pcStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  char *pcStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  char *pcStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  char acStack_438 [24];
  char *pcStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  char *pcStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_11093fd48;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fd48,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1067e6d38;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar2 = pcVar1;
  pcVar11 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    plVar5 = (long *)&UNK_11093fd98;
    unaff_x23 = acStack_118;
    pcVar2 = acStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fd98,pcVar2,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar14 = 0;
    pcVar6 = (char *)auStack_f8;
    pcVar11 = param_4;
    do {
      if ((&cStack_c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar15);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcVar10 = acStack_1a0;
  pcStack_128 = FUN_1067e6f68;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar9 = pcVar2;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar6;
  plStack_148 = plVar13;
  pcStack_140 = pcVar1;
  plStack_138 = plVar15;
  ppuStack_130 = &puStack_90;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    plVar12 = (long *)&UNK_11093fde8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093fde8,acStack_1a0,pcVar2);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar9 = pcVar10;
    pcVar11 = pcVar2;
    pcVar6 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar2;
      pcVar6 = acStack_1a0;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar2 = acStack_220;
  pcStack_1a8 = FUN_1067e70dc;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar1 = pcVar9;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar6;
  plStack_1c8 = plVar15;
  plStack_1c0 = plVar13;
  plStack_1b8 = plVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar12);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar1);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    plVar3 = (long *)&UNK_11093fe38;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093fe38,acStack_220,pcVar9);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar1 = pcVar2;
    pcVar11 = pcVar9;
    pcVar6 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar1 = pcVar2;
      pcVar11 = pcVar9;
      pcVar6 = acStack_220;
    }
  }
  plVar13 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_2a0;
  pcStack_228 = FUN_1067e7250;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar3;
  pcVar2 = pcVar1;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar6;
  plStack_248 = plVar15;
  plStack_240 = plVar13;
  plStack_238 = plVar12;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_280;
    func_0x00010002b838(auStack_280,pcVar2);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    plVar5 = (long *)&UNK_11093fe88;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093fe88,acStack_2a0,pcVar1);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar2 = pcVar9;
    pcVar11 = pcVar1;
    pcVar6 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar2 = pcVar9;
      pcVar11 = pcVar1;
      pcVar6 = acStack_2a0;
    }
  }
  plVar13 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_320;
  pcStack_2a8 = FUN_1067e73c4;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar1 = pcVar2;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar6;
  plStack_2c8 = plVar15;
  plStack_2c0 = plVar13;
  plStack_2b8 = plVar3;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_300;
    func_0x00010002b838(auStack_300,pcVar1);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
    plVar12 = (long *)&UNK_11093fed8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093fed8,acStack_320,pcVar2);
    puStack_308 = acStack_320;
    func_0x00010007e5dc(&puStack_308);
    pcVar1 = pcVar9;
    pcVar11 = pcVar2;
    pcVar6 = acStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar1 = pcVar9;
      pcVar11 = pcVar2;
      pcVar6 = acStack_320;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_3a0;
  pcStack_328 = FUN_1067e7538;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar2 = pcVar1;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = (undefined8 *)pcVar6;
  plStack_348 = plVar15;
  plStack_340 = plVar13;
  plStack_338 = plVar5;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar12);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_380;
    func_0x00010002b838(auStack_380,pcVar2);
    acStack_3a0[0] = '\0';
    acStack_3a0[1] = '\0';
    acStack_3a0[2] = '\0';
    acStack_3a0[3] = '\0';
    acStack_3a0[4] = '\0';
    acStack_3a0[5] = '\0';
    acStack_3a0[6] = '\0';
    acStack_3a0[7] = '\0';
    acStack_3a0[8] = '\0';
    acStack_3a0[9] = '\0';
    acStack_3a0[10] = '\0';
    acStack_3a0[0xb] = '\0';
    acStack_3a0[0xc] = '\0';
    acStack_3a0[0xd] = '\0';
    acStack_3a0[0xe] = '\0';
    acStack_3a0[0xf] = '\0';
    acStack_3a0[0x10] = '\0';
    acStack_3a0[0x11] = '\0';
    acStack_3a0[0x12] = '\0';
    acStack_3a0[0x13] = '\0';
    acStack_3a0[0x14] = '\0';
    acStack_3a0[0x15] = '\0';
    acStack_3a0[0x16] = '\0';
    acStack_3a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3a0,auStack_380,&lStack_368,1);
    plVar3 = (long *)&UNK_11093ff28;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093ff28,acStack_3a0,pcVar1);
    puStack_388 = acStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    pcVar2 = pcVar9;
    pcVar11 = pcVar1;
    pcVar6 = acStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      pcVar2 = pcVar9;
      pcVar11 = pcVar1;
      pcVar6 = acStack_3a0;
    }
  }
  plVar13 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcStack_3a8 = FUN_1067e76ac;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar3;
  pcVar1 = pcVar2;
  pcVar9 = pcVar11;
  puStack_3e0 = unaff_x24;
  pcStack_3d8 = unaff_x23;
  puStack_3d0 = (undefined8 *)pcVar6;
  plStack_3c8 = plVar15;
  plStack_3c0 = plVar13;
  plStack_3b8 = plVar12;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(plVar3);
  _objc_retain(pcVar2);
  pcVar6 = (char *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x24 = auStack_418;
    func_0x00010002b838(auStack_418,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_400,pcVar1);
    acStack_438[0] = '\0';
    acStack_438[1] = '\0';
    acStack_438[2] = '\0';
    acStack_438[3] = '\0';
    acStack_438[4] = '\0';
    acStack_438[5] = '\0';
    acStack_438[6] = '\0';
    acStack_438[7] = '\0';
    acStack_438[8] = '\0';
    acStack_438[9] = '\0';
    acStack_438[10] = '\0';
    acStack_438[0xb] = '\0';
    acStack_438[0xc] = '\0';
    acStack_438[0xd] = '\0';
    acStack_438[0xe] = '\0';
    acStack_438[0xf] = '\0';
    acStack_438[0x10] = '\0';
    acStack_438[0x11] = '\0';
    acStack_438[0x12] = '\0';
    acStack_438[0x13] = '\0';
    acStack_438[0x14] = '\0';
    acStack_438[0x15] = '\0';
    acStack_438[0x16] = '\0';
    acStack_438[0x17] = '\0';
    func_0x00010007e1e8(acStack_438,auStack_418,&lStack_3e8,2);
    plVar5 = (long *)&UNK_11093ff78;
    unaff_x23 = acStack_438;
    pcVar1 = acStack_438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093ff78,pcVar1,pcVar11);
    pcStack_420 = unaff_x23;
    func_0x00010007e5dc(&pcStack_420);
    lVar14 = 0;
    pcVar6 = (char *)auStack_418;
    pcVar9 = pcVar11;
    do {
      if ((&cStack_3e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar2);
  plVar15 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(pcVar2);
  _objc_release(plVar3);
  plVar12 = plVar15;
  __Unwind_Resume();
  pcVar10 = acStack_4c0;
  pcStack_448 = FUN_1067e78dc;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar5;
  pcVar11 = pcVar1;
  puStack_480 = unaff_x24;
  pcStack_478 = unaff_x23;
  puStack_470 = (undefined8 *)pcVar6;
  plStack_468 = plVar15;
  pcStack_460 = pcVar2;
  plStack_458 = plVar3;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_4a0;
    func_0x00010002b838(auStack_4a0,pcVar2);
    acStack_4c0[0] = '\0';
    acStack_4c0[1] = '\0';
    acStack_4c0[2] = '\0';
    acStack_4c0[3] = '\0';
    acStack_4c0[4] = '\0';
    acStack_4c0[5] = '\0';
    acStack_4c0[6] = '\0';
    acStack_4c0[7] = '\0';
    acStack_4c0[8] = '\0';
    acStack_4c0[9] = '\0';
    acStack_4c0[10] = '\0';
    acStack_4c0[0xb] = '\0';
    acStack_4c0[0xc] = '\0';
    acStack_4c0[0xd] = '\0';
    acStack_4c0[0xe] = '\0';
    acStack_4c0[0xf] = '\0';
    acStack_4c0[0x10] = '\0';
    acStack_4c0[0x11] = '\0';
    acStack_4c0[0x12] = '\0';
    acStack_4c0[0x13] = '\0';
    acStack_4c0[0x14] = '\0';
    acStack_4c0[0x15] = '\0';
    acStack_4c0[0x16] = '\0';
    acStack_4c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_4c0,auStack_4a0,&lStack_488,1);
    plVar13 = (long *)&UNK_11093ffc8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093ffc8,acStack_4c0,pcVar1);
    puStack_4a8 = acStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    pcVar11 = pcVar10;
    pcVar9 = pcVar1;
    pcVar6 = acStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      pcVar11 = pcVar10;
      pcVar9 = pcVar1;
      pcVar6 = acStack_4c0;
    }
  }
  plVar12 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar12;
  __Unwind_Resume();
  pcVar2 = acStack_540;
  pcStack_4c8 = FUN_1067e7a50;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar13;
  pcVar1 = pcVar11;
  puStack_500 = unaff_x24;
  pcStack_4f8 = unaff_x23;
  puStack_4f0 = (undefined8 *)pcVar6;
  plStack_4e8 = plVar15;
  plStack_4e0 = plVar12;
  plStack_4d8 = plVar5;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(plVar13);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x23 = (char *)auStack_520;
    func_0x00010002b838(auStack_520,pcVar1);
    acStack_540[0] = '\0';
    acStack_540[1] = '\0';
    acStack_540[2] = '\0';
    acStack_540[3] = '\0';
    acStack_540[4] = '\0';
    acStack_540[5] = '\0';
    acStack_540[6] = '\0';
    acStack_540[7] = '\0';
    acStack_540[8] = '\0';
    acStack_540[9] = '\0';
    acStack_540[10] = '\0';
    acStack_540[0xb] = '\0';
    acStack_540[0xc] = '\0';
    acStack_540[0xd] = '\0';
    acStack_540[0xe] = '\0';
    acStack_540[0xf] = '\0';
    acStack_540[0x10] = '\0';
    acStack_540[0x11] = '\0';
    acStack_540[0x12] = '\0';
    acStack_540[0x13] = '\0';
    acStack_540[0x14] = '\0';
    acStack_540[0x15] = '\0';
    acStack_540[0x16] = '\0';
    acStack_540[0x17] = '\0';
    func_0x00010007e1e8(acStack_540,auStack_520,&lStack_508,1);
    plVar3 = (long *)&UNK_110940018;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940018,acStack_540,pcVar11);
    puStack_528 = acStack_540;
    func_0x00010007e5dc(&puStack_528);
    pcVar1 = pcVar2;
    pcVar9 = pcVar11;
    pcVar6 = acStack_540;
    if (cStack_509 < '\0') {
      __ZdlPv(auStack_520[0]);
      pcVar1 = pcVar2;
      pcVar9 = pcVar11;
      pcVar6 = acStack_540;
    }
  }
  plVar5 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar4 = plVar5;
  __Unwind_Resume();
  pcVar11 = acStack_5c0;
  pcStack_548 = FUN_1067e7bc4;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar3;
  pcVar2 = pcVar1;
  puStack_580 = unaff_x24;
  pcStack_578 = unaff_x23;
  puStack_570 = (undefined8 *)pcVar6;
  plStack_568 = plVar15;
  plStack_560 = plVar5;
  plStack_558 = plVar13;
  pppuStack_550 = &pppuStack_4d0;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_5a0;
    func_0x00010002b838(auStack_5a0,pcVar2);
    acStack_5c0[0] = '\0';
    acStack_5c0[1] = '\0';
    acStack_5c0[2] = '\0';
    acStack_5c0[3] = '\0';
    acStack_5c0[4] = '\0';
    acStack_5c0[5] = '\0';
    acStack_5c0[6] = '\0';
    acStack_5c0[7] = '\0';
    acStack_5c0[8] = '\0';
    acStack_5c0[9] = '\0';
    acStack_5c0[10] = '\0';
    acStack_5c0[0xb] = '\0';
    acStack_5c0[0xc] = '\0';
    acStack_5c0[0xd] = '\0';
    acStack_5c0[0xe] = '\0';
    acStack_5c0[0xf] = '\0';
    acStack_5c0[0x10] = '\0';
    acStack_5c0[0x11] = '\0';
    acStack_5c0[0x12] = '\0';
    acStack_5c0[0x13] = '\0';
    acStack_5c0[0x14] = '\0';
    acStack_5c0[0x15] = '\0';
    acStack_5c0[0x16] = '\0';
    acStack_5c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_5c0,auStack_5a0,&lStack_588,1);
    plVar12 = (long *)&UNK_110940068;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940068,acStack_5c0,pcVar1);
    puStack_5a8 = acStack_5c0;
    func_0x00010007e5dc(&puStack_5a8);
    pcVar2 = pcVar11;
    pcVar9 = pcVar1;
    pcVar6 = acStack_5c0;
    if (cStack_589 < '\0') {
      __ZdlPv(auStack_5a0[0]);
      pcVar2 = pcVar11;
      pcVar9 = pcVar1;
      pcVar6 = acStack_5c0;
    }
  }
  plVar13 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar11 = acStack_640;
  pcStack_5c8 = FUN_1067e7d38;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar12;
  pcVar1 = pcVar2;
  puStack_600 = unaff_x24;
  pcStack_5f8 = unaff_x23;
  puStack_5f0 = (undefined8 *)pcVar6;
  plStack_5e8 = plVar15;
  plStack_5e0 = plVar13;
  plStack_5d8 = plVar3;
  pppuStack_5d0 = &pppuStack_550;
  _objc_retain(plVar12);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_620;
    func_0x00010002b838(auStack_620,pcVar1);
    acStack_640[0] = '\0';
    acStack_640[1] = '\0';
    acStack_640[2] = '\0';
    acStack_640[3] = '\0';
    acStack_640[4] = '\0';
    acStack_640[5] = '\0';
    acStack_640[6] = '\0';
    acStack_640[7] = '\0';
    acStack_640[8] = '\0';
    acStack_640[9] = '\0';
    acStack_640[10] = '\0';
    acStack_640[0xb] = '\0';
    acStack_640[0xc] = '\0';
    acStack_640[0xd] = '\0';
    acStack_640[0xe] = '\0';
    acStack_640[0xf] = '\0';
    acStack_640[0x10] = '\0';
    acStack_640[0x11] = '\0';
    acStack_640[0x12] = '\0';
    acStack_640[0x13] = '\0';
    acStack_640[0x14] = '\0';
    acStack_640[0x15] = '\0';
    acStack_640[0x16] = '\0';
    acStack_640[0x17] = '\0';
    func_0x00010007e1e8(acStack_640,auStack_620,&lStack_608,1);
    plVar5 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109400b8,acStack_640,pcVar2);
    puStack_628 = acStack_640;
    func_0x00010007e5dc(&puStack_628);
    pcVar1 = pcVar11;
    pcVar9 = pcVar2;
    pcVar6 = acStack_640;
    if (cStack_609 < '\0') {
      __ZdlPv(auStack_620[0]);
      pcVar1 = pcVar11;
      pcVar9 = pcVar2;
      pcVar6 = acStack_640;
    }
  }
  plVar13 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcStack_648 = FUN_1067e7eac;
  lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar5;
  pcVar2 = pcVar1;
  pcVar11 = pcVar9;
  puStack_680 = unaff_x24;
  pcStack_678 = unaff_x23;
  puStack_670 = (undefined8 *)pcVar6;
  plStack_668 = plVar15;
  plStack_660 = plVar13;
  plStack_658 = plVar12;
  pppuStack_650 = &pppuStack_5d0;
  _objc_retain(plVar5);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x24 = auStack_6b8;
    func_0x00010002b838(auStack_6b8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_6a0,pcVar2);
    acStack_6d8[0] = '\0';
    acStack_6d8[1] = '\0';
    acStack_6d8[2] = '\0';
    acStack_6d8[3] = '\0';
    acStack_6d8[4] = '\0';
    acStack_6d8[5] = '\0';
    acStack_6d8[6] = '\0';
    acStack_6d8[7] = '\0';
    acStack_6d8[8] = '\0';
    acStack_6d8[9] = '\0';
    acStack_6d8[10] = '\0';
    acStack_6d8[0xb] = '\0';
    acStack_6d8[0xc] = '\0';
    acStack_6d8[0xd] = '\0';
    acStack_6d8[0xe] = '\0';
    acStack_6d8[0xf] = '\0';
    acStack_6d8[0x10] = '\0';
    acStack_6d8[0x11] = '\0';
    acStack_6d8[0x12] = '\0';
    acStack_6d8[0x13] = '\0';
    acStack_6d8[0x14] = '\0';
    acStack_6d8[0x15] = '\0';
    acStack_6d8[0x16] = '\0';
    acStack_6d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_6d8,auStack_6b8,&lStack_688,2);
    plVar3 = (long *)&UNK_110940108;
    unaff_x23 = acStack_6d8;
    pcVar2 = acStack_6d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940108,pcVar2,pcVar9);
    pcStack_6c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_6c0);
    lVar14 = 0;
    pcVar6 = (char *)auStack_6b8;
    pcVar11 = pcVar9;
    do {
      if ((&cStack_689)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_6a1 < '\0') {
    __ZdlPv(auStack_6b8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar5);
  plVar12 = plVar15;
  __Unwind_Resume();
  pcVar10 = acStack_760;
  pcStack_6e8 = FUN_1067e80dc;
  lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar9 = pcVar2;
  puStack_720 = unaff_x24;
  pcStack_718 = unaff_x23;
  puStack_710 = (undefined8 *)pcVar6;
  plStack_708 = plVar15;
  pcStack_700 = pcVar1;
  plStack_6f8 = plVar5;
  pppuStack_6f0 = &pppuStack_650;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_740;
    func_0x00010002b838(auStack_740,pcVar1);
    acStack_760[0] = '\0';
    acStack_760[1] = '\0';
    acStack_760[2] = '\0';
    acStack_760[3] = '\0';
    acStack_760[4] = '\0';
    acStack_760[5] = '\0';
    acStack_760[6] = '\0';
    acStack_760[7] = '\0';
    acStack_760[8] = '\0';
    acStack_760[9] = '\0';
    acStack_760[10] = '\0';
    acStack_760[0xb] = '\0';
    acStack_760[0xc] = '\0';
    acStack_760[0xd] = '\0';
    acStack_760[0xe] = '\0';
    acStack_760[0xf] = '\0';
    acStack_760[0x10] = '\0';
    acStack_760[0x11] = '\0';
    acStack_760[0x12] = '\0';
    acStack_760[0x13] = '\0';
    acStack_760[0x14] = '\0';
    acStack_760[0x15] = '\0';
    acStack_760[0x16] = '\0';
    acStack_760[0x17] = '\0';
    func_0x00010007e1e8(acStack_760,auStack_740,&lStack_728,1);
    plVar13 = (long *)&UNK_110940158;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940158,acStack_760,pcVar2);
    puStack_748 = acStack_760;
    func_0x00010007e5dc(&puStack_748);
    pcVar9 = pcVar10;
    pcVar11 = pcVar2;
    pcVar6 = acStack_760;
    if (cStack_729 < '\0') {
      __ZdlPv(auStack_740[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar2;
      pcVar6 = acStack_760;
    }
  }
  plVar5 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_728) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar4 = plVar5;
  __Unwind_Resume();
  pcStack_768 = FUN_1067e8250;
  lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  pcVar1 = pcVar9;
  pcVar2 = pcVar11;
  puStack_7a0 = unaff_x24;
  pcStack_798 = unaff_x23;
  puStack_790 = (undefined8 *)pcVar6;
  plStack_788 = plVar15;
  plStack_780 = plVar5;
  plStack_778 = plVar3;
  pppuStack_770 = &pppuStack_6f0;
  _objc_retain(plVar13);
  _objc_retain(pcVar9);
  puVar16 = (undefined8 *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_7d8;
    func_0x00010002b838(auStack_7d8,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_7c0,pcVar1);
    acStack_7f8[0] = '\0';
    acStack_7f8[1] = '\0';
    acStack_7f8[2] = '\0';
    acStack_7f8[3] = '\0';
    acStack_7f8[4] = '\0';
    acStack_7f8[5] = '\0';
    acStack_7f8[6] = '\0';
    acStack_7f8[7] = '\0';
    acStack_7f8[8] = '\0';
    acStack_7f8[9] = '\0';
    acStack_7f8[10] = '\0';
    acStack_7f8[0xb] = '\0';
    acStack_7f8[0xc] = '\0';
    acStack_7f8[0xd] = '\0';
    acStack_7f8[0xe] = '\0';
    acStack_7f8[0xf] = '\0';
    acStack_7f8[0x10] = '\0';
    acStack_7f8[0x11] = '\0';
    acStack_7f8[0x12] = '\0';
    acStack_7f8[0x13] = '\0';
    acStack_7f8[0x14] = '\0';
    acStack_7f8[0x15] = '\0';
    acStack_7f8[0x16] = '\0';
    acStack_7f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_7f8,auStack_7d8,&lStack_7a8,2);
    plVar12 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_7f8;
    pcVar1 = acStack_7f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401a8,pcVar1,pcVar11);
    pcStack_7e0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_7e0);
    lVar14 = 0;
    puVar16 = auStack_7d8;
    pcVar2 = pcVar11;
    do {
      if ((&cStack_7a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_7c1 < '\0') {
    __ZdlPv(auStack_7d8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(plVar13);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcStack_808 = FUN_1067e8480;
  lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar12;
  pcVar6 = pcVar1;
  puStack_840 = unaff_x24;
  pcStack_838 = unaff_x23;
  puStack_830 = puVar16;
  plStack_828 = plVar15;
  pcStack_820 = pcVar9;
  plStack_818 = plVar13;
  pppuStack_810 = &pppuStack_770;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar11 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_878;
    func_0x00010002b838(auStack_878,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_860,pcVar6);
    acStack_898[0] = '\0';
    acStack_898[1] = '\0';
    acStack_898[2] = '\0';
    acStack_898[3] = '\0';
    acStack_898[4] = '\0';
    acStack_898[5] = '\0';
    acStack_898[6] = '\0';
    acStack_898[7] = '\0';
    acStack_898[8] = '\0';
    acStack_898[9] = '\0';
    acStack_898[10] = '\0';
    acStack_898[0xb] = '\0';
    acStack_898[0xc] = '\0';
    acStack_898[0xd] = '\0';
    acStack_898[0xe] = '\0';
    acStack_898[0xf] = '\0';
    acStack_898[0x10] = '\0';
    acStack_898[0x11] = '\0';
    acStack_898[0x12] = '\0';
    acStack_898[0x13] = '\0';
    acStack_898[0x14] = '\0';
    acStack_898[0x15] = '\0';
    acStack_898[0x16] = '\0';
    acStack_898[0x17] = '\0';
    func_0x00010007e1e8(acStack_898,auStack_878,&lStack_848,2);
    plVar5 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_898;
    pcVar6 = acStack_898;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar6,pcVar2);
    pcStack_880 = unaff_x23;
    func_0x00010007e5dc(&pcStack_880);
    lVar14 = 0;
    pcVar11 = (char *)auStack_878;
    do {
      if ((&cStack_849)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_860 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_861 < '\0') {
    __ZdlPv(auStack_878[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_920;
  pcStack_8a8 = FUN_1067e86b0;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar5;
  pcVar2 = pcVar6;
  puStack_8e0 = unaff_x24;
  pcStack_8d8 = unaff_x23;
  puStack_8d0 = (undefined8 *)pcVar11;
  plStack_8c8 = plVar15;
  pcStack_8c0 = pcVar1;
  plStack_8b8 = plVar12;
  pppuStack_8b0 = &pppuStack_810;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_900;
    func_0x00010002b838(auStack_900,pcVar1);
    acStack_920[0] = '\0';
    acStack_920[1] = '\0';
    acStack_920[2] = '\0';
    acStack_920[3] = '\0';
    acStack_920[4] = '\0';
    acStack_920[5] = '\0';
    acStack_920[6] = '\0';
    acStack_920[7] = '\0';
    acStack_920[8] = '\0';
    acStack_920[9] = '\0';
    acStack_920[10] = '\0';
    acStack_920[0xb] = '\0';
    acStack_920[0xc] = '\0';
    acStack_920[0xd] = '\0';
    acStack_920[0xe] = '\0';
    acStack_920[0xf] = '\0';
    acStack_920[0x10] = '\0';
    acStack_920[0x11] = '\0';
    acStack_920[0x12] = '\0';
    acStack_920[0x13] = '\0';
    acStack_920[0x14] = '\0';
    acStack_920[0x15] = '\0';
    acStack_920[0x16] = '\0';
    acStack_920[0x17] = '\0';
    func_0x00010007e1e8(acStack_920,auStack_900,&lStack_8e8,1);
    plVar13 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_920,pcVar6);
    puStack_908 = acStack_920;
    func_0x00010007e5dc(&puStack_908);
    pcVar2 = pcVar9;
    pcVar11 = acStack_920;
    if (cStack_8e9 < '\0') {
      __ZdlPv(auStack_900[0]);
      pcVar2 = pcVar9;
      pcVar11 = acStack_920;
    }
  }
  plVar12 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar4 = alStack_990;
  pcStack_928 = FUN_1067e8824;
  lStack_958 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = (long **)0x0;
  puStack_950 = (undefined8 *)pcVar11;
  plStack_948 = plVar15;
  plStack_940 = plVar12;
  plStack_938 = plVar5;
  pppuStack_930 = &pppuStack_8b0;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar13 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_970,pcVar1);
    alStack_990[0] = 0;
    alStack_990[1] = 0;
    alStack_990[2] = 0;
    func_0x00010007e1e8(alStack_990,applStack_970,&lStack_958,1);
    plVar13 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_990,pcVar2);
    pplVar7 = &plStack_978;
    plStack_978 = alStack_990;
    func_0x00010007e5dc();
    pcVar2 = (char *)plVar4;
    plVar15 = alStack_990;
    if (cStack_959 < '\0') {
      pplVar7 = applStack_970[0];
      __ZdlPv();
      pcVar2 = (char *)plVar4;
      plVar15 = alStack_990;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_958) {
    return;
  }
  ___stack_chk_fail();
  plStack_978 = plVar15;
  func_0x00010007e5dc(&plStack_978);
  if (cStack_959 < '\0') {
    __ZdlPv(applStack_970[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_998 = FUN_1067e893c;
  lStack_9d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar13;
  puStack_9d0 = unaff_x24;
  pcStack_9c8 = unaff_x23;
  puStack_9c0 = (undefined8 *)pcVar11;
  plStack_9b8 = plVar15;
  plStack_9b0 = plVar12;
  pplStack_9a8 = pplVar7;
  pppuStack_9a0 = &pppuStack_930;
  _objc_retain(plVar13);
  if (pplVar8 != (long **)0x0) {
    plVar15 = pplVar8[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_9f0,pcVar1);
    uStack_a10 = 0;
    uStack_a08 = 0;
    uStack_a00 = 0;
    func_0x00010007e1e8(&uStack_a10,auStack_9f0,&lStack_9d8,1);
    plVar5 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_a10,pcVar2);
    puStack_9f8 = (undefined1 *)&uStack_a10;
    func_0x00010007e5dc(&puStack_9f8);
    if (cStack_9d9 < '\0') {
      __ZdlPv(auStack_9f0[0]);
    }
  }
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar12 = plVar15;
  __Unwind_Resume();
  puStack_a38 = (undefined1 *)&uStack_a50;
  pcStack_a18 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_a50 = 0;
    uStack_a48 = 0;
    uStack_a40 = 0;
    plStack_a30 = plVar15;
    plStack_a28 = plVar13;
    pppuStack_a20 = &pppuStack_9a0;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_a50,plVar5);
    func_0x00010007e5dc(&puStack_a38);
  }
  return;
}



/* Entry: 1067e6d38; end: 1067e6f67;  */

void FUN_1067e6d38(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined1 *puStack_9b8;
  long *plStack_9b0;
  long *plStack_9a8;
  undefined8 ***pppuStack_9a0;
  code *pcStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined1 *puStack_978;
  undefined8 auStack_970 [2];
  char cStack_959;
  long lStack_958;
  undefined8 *puStack_950;
  char *pcStack_948;
  undefined8 *puStack_940;
  long *plStack_938;
  long *plStack_930;
  long **pplStack_928;
  undefined8 ***pppuStack_920;
  code *pcStack_918;
  long alStack_910 [3];
  long *plStack_8f8;
  long **applStack_8f0 [2];
  char cStack_8d9;
  long lStack_8d8;
  undefined8 *puStack_8d0;
  long *plStack_8c8;
  long *plStack_8c0;
  long *plStack_8b8;
  undefined8 ***pppuStack_8b0;
  code *pcStack_8a8;
  char acStack_8a0 [24];
  undefined1 *puStack_888;
  undefined8 auStack_880 [2];
  char cStack_869;
  long lStack_868;
  undefined8 *puStack_860;
  char *pcStack_858;
  undefined8 *puStack_850;
  long *plStack_848;
  char *pcStack_840;
  long *plStack_838;
  undefined8 ***pppuStack_830;
  code *pcStack_828;
  char acStack_818 [24];
  char *pcStack_800;
  undefined8 auStack_7f8 [2];
  char cStack_7e1;
  undefined8 auStack_7e0 [2];
  char cStack_7c9;
  long lStack_7c8;
  undefined8 *puStack_7c0;
  char *pcStack_7b8;
  undefined8 *puStack_7b0;
  long *plStack_7a8;
  char *pcStack_7a0;
  long *plStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  char acStack_778 [24];
  char *pcStack_760;
  undefined8 auStack_758 [2];
  char cStack_741;
  undefined8 auStack_740 [2];
  char cStack_729;
  long lStack_728;
  undefined8 *puStack_720;
  char *pcStack_718;
  undefined8 *puStack_710;
  long *plStack_708;
  long *plStack_700;
  long *plStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  char acStack_6e0 [24];
  undefined1 *puStack_6c8;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  char *pcStack_698;
  undefined8 *puStack_690;
  long *plStack_688;
  char *pcStack_680;
  long *plStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  char acStack_658 [24];
  char *pcStack_640;
  undefined8 auStack_638 [2];
  char cStack_621;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  char *pcStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5c0 [24];
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  char *pcStack_578;
  undefined8 *puStack_570;
  long *plStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  char acStack_540 [24];
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  char *pcStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  char *pcStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  char acStack_440 [24];
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  char *pcStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  char *pcStack_3e0;
  long *plStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  char *pcStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_2;
  pcVar1 = param_3;
  pcVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar2 = (char *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    plVar14 = (long *)&UNK_11093fd98;
    unaff_x23 = acStack_98;
    pcVar1 = acStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093fd98,pcVar1,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar13 = 0;
    pcVar2 = (char *)auStack_78;
    pcVar10 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  plVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  plVar12 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_120;
  pcStack_a8 = FUN_1067e6f68;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar14;
  pcVar8 = pcVar1;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar2;
  plStack_c8 = plVar15;
  pcStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar14);
  plVar15 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    plVar4 = (long *)&UNK_11093fde8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093fde8,acStack_120,pcVar1);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar9;
    pcVar10 = pcVar1;
    pcVar2 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar9;
      pcVar10 = pcVar1;
      pcVar2 = acStack_120;
    }
  }
  plVar12 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar3 = plVar12;
  __Unwind_Resume();
  pcVar9 = acStack_1a0;
  pcStack_128 = FUN_1067e70dc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  pcVar1 = pcVar8;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar2;
  plStack_148 = plVar15;
  plStack_140 = plVar12;
  plStack_138 = plVar14;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar4);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    plVar5 = (long *)&UNK_11093fe38;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11093fe38,acStack_1a0,pcVar8);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar1 = pcVar9;
    pcVar10 = pcVar8;
    pcVar2 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar1 = pcVar9;
      pcVar10 = pcVar8;
      pcVar2 = acStack_1a0;
    }
  }
  plVar15 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_220;
  pcStack_1a8 = FUN_1067e7250;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar8 = pcVar1;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar2;
  plStack_1c8 = plVar14;
  plStack_1c0 = plVar15;
  plStack_1b8 = plVar4;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar5);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar2);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    plVar12 = (long *)&UNK_11093fe88;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11093fe88,acStack_220,pcVar1);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar8 = pcVar9;
    pcVar10 = pcVar1;
    pcVar2 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar8 = pcVar9;
      pcVar10 = pcVar1;
      pcVar2 = acStack_220;
    }
  }
  plVar15 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_2a0;
  pcStack_228 = FUN_1067e73c4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar12;
  pcVar1 = pcVar8;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar2;
  plStack_248 = plVar14;
  plStack_240 = plVar15;
  plStack_238 = plVar5;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar12);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_280;
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    plVar4 = (long *)&UNK_11093fed8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11093fed8,acStack_2a0,pcVar8);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar1 = pcVar9;
    pcVar10 = pcVar8;
    pcVar2 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar1 = pcVar9;
      pcVar10 = pcVar8;
      pcVar2 = acStack_2a0;
    }
  }
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_320;
  pcStack_2a8 = FUN_1067e7538;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  pcVar8 = pcVar1;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar2;
  plStack_2c8 = plVar14;
  plStack_2c0 = plVar15;
  plStack_2b8 = plVar12;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar4);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_300;
    func_0x00010002b838(auStack_300,pcVar2);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
    plVar5 = (long *)&UNK_11093ff28;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11093ff28,acStack_320,pcVar1);
    puStack_308 = acStack_320;
    func_0x00010007e5dc(&puStack_308);
    pcVar8 = pcVar9;
    pcVar10 = pcVar1;
    pcVar2 = acStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar8 = pcVar9;
      pcVar10 = pcVar1;
      pcVar2 = acStack_320;
    }
  }
  plVar15 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcStack_328 = FUN_1067e76ac;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar1 = pcVar8;
  pcVar9 = pcVar10;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = (undefined8 *)pcVar2;
  plStack_348 = plVar14;
  plStack_340 = plVar15;
  plStack_338 = plVar4;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar5);
  _objc_retain(pcVar8);
  pcVar2 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x24 = auStack_398;
    func_0x00010002b838(auStack_398,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_380,pcVar1);
    acStack_3b8[0] = '\0';
    acStack_3b8[1] = '\0';
    acStack_3b8[2] = '\0';
    acStack_3b8[3] = '\0';
    acStack_3b8[4] = '\0';
    acStack_3b8[5] = '\0';
    acStack_3b8[6] = '\0';
    acStack_3b8[7] = '\0';
    acStack_3b8[8] = '\0';
    acStack_3b8[9] = '\0';
    acStack_3b8[10] = '\0';
    acStack_3b8[0xb] = '\0';
    acStack_3b8[0xc] = '\0';
    acStack_3b8[0xd] = '\0';
    acStack_3b8[0xe] = '\0';
    acStack_3b8[0xf] = '\0';
    acStack_3b8[0x10] = '\0';
    acStack_3b8[0x11] = '\0';
    acStack_3b8[0x12] = '\0';
    acStack_3b8[0x13] = '\0';
    acStack_3b8[0x14] = '\0';
    acStack_3b8[0x15] = '\0';
    acStack_3b8[0x16] = '\0';
    acStack_3b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3b8,auStack_398,&lStack_368,2);
    plVar12 = (long *)&UNK_11093ff78;
    unaff_x23 = acStack_3b8;
    pcVar1 = acStack_3b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11093ff78,pcVar1,pcVar10);
    pcStack_3a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_3a0);
    lVar13 = 0;
    pcVar2 = (char *)auStack_398;
    pcVar9 = pcVar10;
    do {
      if ((&cStack_369)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar8);
  plVar14 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar8);
  _objc_release(plVar5);
  plVar4 = plVar14;
  __Unwind_Resume();
  pcVar11 = acStack_440;
  pcStack_3c8 = FUN_1067e78dc;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar12;
  pcVar10 = pcVar1;
  puStack_400 = unaff_x24;
  pcStack_3f8 = unaff_x23;
  puStack_3f0 = (undefined8 *)pcVar2;
  plStack_3e8 = plVar14;
  pcStack_3e0 = pcVar8;
  plStack_3d8 = plVar5;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(plVar12);
  plVar14 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar14 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_420;
    func_0x00010002b838(auStack_420,pcVar2);
    acStack_440[0] = '\0';
    acStack_440[1] = '\0';
    acStack_440[2] = '\0';
    acStack_440[3] = '\0';
    acStack_440[4] = '\0';
    acStack_440[5] = '\0';
    acStack_440[6] = '\0';
    acStack_440[7] = '\0';
    acStack_440[8] = '\0';
    acStack_440[9] = '\0';
    acStack_440[10] = '\0';
    acStack_440[0xb] = '\0';
    acStack_440[0xc] = '\0';
    acStack_440[0xd] = '\0';
    acStack_440[0xe] = '\0';
    acStack_440[0xf] = '\0';
    acStack_440[0x10] = '\0';
    acStack_440[0x11] = '\0';
    acStack_440[0x12] = '\0';
    acStack_440[0x13] = '\0';
    acStack_440[0x14] = '\0';
    acStack_440[0x15] = '\0';
    acStack_440[0x16] = '\0';
    acStack_440[0x17] = '\0';
    func_0x00010007e1e8(acStack_440,auStack_420,&lStack_408,1);
    plVar15 = (long *)&UNK_11093ffc8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11093ffc8,acStack_440,pcVar1);
    puStack_428 = acStack_440;
    func_0x00010007e5dc(&puStack_428);
    pcVar10 = pcVar11;
    pcVar9 = pcVar1;
    pcVar2 = acStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      pcVar10 = pcVar11;
      pcVar9 = pcVar1;
      pcVar2 = acStack_440;
    }
  }
  plVar4 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar3 = plVar4;
  __Unwind_Resume();
  pcVar8 = acStack_4c0;
  pcStack_448 = FUN_1067e7a50;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar1 = pcVar10;
  puStack_480 = unaff_x24;
  pcStack_478 = unaff_x23;
  puStack_470 = (undefined8 *)pcVar2;
  plStack_468 = plVar14;
  plStack_460 = plVar4;
  plStack_458 = plVar12;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(plVar15);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_4a0;
    func_0x00010002b838(auStack_4a0,pcVar1);
    acStack_4c0[0] = '\0';
    acStack_4c0[1] = '\0';
    acStack_4c0[2] = '\0';
    acStack_4c0[3] = '\0';
    acStack_4c0[4] = '\0';
    acStack_4c0[5] = '\0';
    acStack_4c0[6] = '\0';
    acStack_4c0[7] = '\0';
    acStack_4c0[8] = '\0';
    acStack_4c0[9] = '\0';
    acStack_4c0[10] = '\0';
    acStack_4c0[0xb] = '\0';
    acStack_4c0[0xc] = '\0';
    acStack_4c0[0xd] = '\0';
    acStack_4c0[0xe] = '\0';
    acStack_4c0[0xf] = '\0';
    acStack_4c0[0x10] = '\0';
    acStack_4c0[0x11] = '\0';
    acStack_4c0[0x12] = '\0';
    acStack_4c0[0x13] = '\0';
    acStack_4c0[0x14] = '\0';
    acStack_4c0[0x15] = '\0';
    acStack_4c0[0x16] = '\0';
    acStack_4c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_4c0,auStack_4a0,&lStack_488,1);
    plVar5 = (long *)&UNK_110940018;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940018,acStack_4c0,pcVar10);
    puStack_4a8 = acStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    pcVar1 = pcVar8;
    pcVar9 = pcVar10;
    pcVar2 = acStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      pcVar1 = pcVar8;
      pcVar9 = pcVar10;
      pcVar2 = acStack_4c0;
    }
  }
  plVar4 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  plVar3 = plVar4;
  __Unwind_Resume();
  pcVar8 = acStack_540;
  pcStack_4c8 = FUN_1067e7bc4;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar10 = pcVar1;
  puStack_500 = unaff_x24;
  pcStack_4f8 = unaff_x23;
  puStack_4f0 = (undefined8 *)pcVar2;
  plStack_4e8 = plVar14;
  plStack_4e0 = plVar4;
  plStack_4d8 = plVar15;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(plVar5);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_520;
    func_0x00010002b838(auStack_520,pcVar2);
    acStack_540[0] = '\0';
    acStack_540[1] = '\0';
    acStack_540[2] = '\0';
    acStack_540[3] = '\0';
    acStack_540[4] = '\0';
    acStack_540[5] = '\0';
    acStack_540[6] = '\0';
    acStack_540[7] = '\0';
    acStack_540[8] = '\0';
    acStack_540[9] = '\0';
    acStack_540[10] = '\0';
    acStack_540[0xb] = '\0';
    acStack_540[0xc] = '\0';
    acStack_540[0xd] = '\0';
    acStack_540[0xe] = '\0';
    acStack_540[0xf] = '\0';
    acStack_540[0x10] = '\0';
    acStack_540[0x11] = '\0';
    acStack_540[0x12] = '\0';
    acStack_540[0x13] = '\0';
    acStack_540[0x14] = '\0';
    acStack_540[0x15] = '\0';
    acStack_540[0x16] = '\0';
    acStack_540[0x17] = '\0';
    func_0x00010007e1e8(acStack_540,auStack_520,&lStack_508,1);
    plVar12 = (long *)&UNK_110940068;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940068,acStack_540,pcVar1);
    puStack_528 = acStack_540;
    func_0x00010007e5dc(&puStack_528);
    pcVar10 = pcVar8;
    pcVar9 = pcVar1;
    pcVar2 = acStack_540;
    if (cStack_509 < '\0') {
      __ZdlPv(auStack_520[0]);
      pcVar10 = pcVar8;
      pcVar9 = pcVar1;
      pcVar2 = acStack_540;
    }
  }
  plVar15 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar8 = acStack_5c0;
  pcStack_548 = FUN_1067e7d38;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar12;
  pcVar1 = pcVar10;
  puStack_580 = unaff_x24;
  pcStack_578 = unaff_x23;
  puStack_570 = (undefined8 *)pcVar2;
  plStack_568 = plVar14;
  plStack_560 = plVar15;
  plStack_558 = plVar5;
  pppuStack_550 = &pppuStack_4d0;
  _objc_retain(plVar12);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_5a0;
    func_0x00010002b838(auStack_5a0,pcVar1);
    acStack_5c0[0] = '\0';
    acStack_5c0[1] = '\0';
    acStack_5c0[2] = '\0';
    acStack_5c0[3] = '\0';
    acStack_5c0[4] = '\0';
    acStack_5c0[5] = '\0';
    acStack_5c0[6] = '\0';
    acStack_5c0[7] = '\0';
    acStack_5c0[8] = '\0';
    acStack_5c0[9] = '\0';
    acStack_5c0[10] = '\0';
    acStack_5c0[0xb] = '\0';
    acStack_5c0[0xc] = '\0';
    acStack_5c0[0xd] = '\0';
    acStack_5c0[0xe] = '\0';
    acStack_5c0[0xf] = '\0';
    acStack_5c0[0x10] = '\0';
    acStack_5c0[0x11] = '\0';
    acStack_5c0[0x12] = '\0';
    acStack_5c0[0x13] = '\0';
    acStack_5c0[0x14] = '\0';
    acStack_5c0[0x15] = '\0';
    acStack_5c0[0x16] = '\0';
    acStack_5c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_5c0,auStack_5a0,&lStack_588,1);
    plVar4 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109400b8,acStack_5c0,pcVar10);
    puStack_5a8 = acStack_5c0;
    func_0x00010007e5dc(&puStack_5a8);
    pcVar1 = pcVar8;
    pcVar9 = pcVar10;
    pcVar2 = acStack_5c0;
    if (cStack_589 < '\0') {
      __ZdlPv(auStack_5a0[0]);
      pcVar1 = pcVar8;
      pcVar9 = pcVar10;
      pcVar2 = acStack_5c0;
    }
  }
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcStack_5c8 = FUN_1067e7eac;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  pcVar10 = pcVar1;
  pcVar8 = pcVar9;
  puStack_600 = unaff_x24;
  pcStack_5f8 = unaff_x23;
  puStack_5f0 = (undefined8 *)pcVar2;
  plStack_5e8 = plVar14;
  plStack_5e0 = plVar15;
  plStack_5d8 = plVar12;
  pppuStack_5d0 = &pppuStack_550;
  _objc_retain(plVar4);
  _objc_retain(pcVar1);
  pcVar2 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x24 = auStack_638;
    func_0x00010002b838(auStack_638,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_620,pcVar2);
    acStack_658[0] = '\0';
    acStack_658[1] = '\0';
    acStack_658[2] = '\0';
    acStack_658[3] = '\0';
    acStack_658[4] = '\0';
    acStack_658[5] = '\0';
    acStack_658[6] = '\0';
    acStack_658[7] = '\0';
    acStack_658[8] = '\0';
    acStack_658[9] = '\0';
    acStack_658[10] = '\0';
    acStack_658[0xb] = '\0';
    acStack_658[0xc] = '\0';
    acStack_658[0xd] = '\0';
    acStack_658[0xe] = '\0';
    acStack_658[0xf] = '\0';
    acStack_658[0x10] = '\0';
    acStack_658[0x11] = '\0';
    acStack_658[0x12] = '\0';
    acStack_658[0x13] = '\0';
    acStack_658[0x14] = '\0';
    acStack_658[0x15] = '\0';
    acStack_658[0x16] = '\0';
    acStack_658[0x17] = '\0';
    func_0x00010007e1e8(acStack_658,auStack_638,&lStack_608,2);
    plVar5 = (long *)&UNK_110940108;
    unaff_x23 = acStack_658;
    pcVar10 = acStack_658;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940108,pcVar10,pcVar9);
    pcStack_640 = unaff_x23;
    func_0x00010007e5dc(&pcStack_640);
    lVar13 = 0;
    pcVar2 = (char *)auStack_638;
    pcVar8 = pcVar9;
    do {
      if ((&cStack_609)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_620 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar1);
  plVar14 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_621 < '\0') {
    __ZdlPv(auStack_638[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar4);
  plVar12 = plVar14;
  __Unwind_Resume();
  pcVar11 = acStack_6e0;
  pcStack_668 = FUN_1067e80dc;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar5;
  pcVar9 = pcVar10;
  puStack_6a0 = unaff_x24;
  pcStack_698 = unaff_x23;
  puStack_690 = (undefined8 *)pcVar2;
  plStack_688 = plVar14;
  pcStack_680 = pcVar1;
  plStack_678 = plVar4;
  pppuStack_670 = &pppuStack_5d0;
  _objc_retain(plVar5);
  plVar14 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar14 = (long *)plVar12[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_6c0;
    func_0x00010002b838(auStack_6c0,pcVar1);
    acStack_6e0[0] = '\0';
    acStack_6e0[1] = '\0';
    acStack_6e0[2] = '\0';
    acStack_6e0[3] = '\0';
    acStack_6e0[4] = '\0';
    acStack_6e0[5] = '\0';
    acStack_6e0[6] = '\0';
    acStack_6e0[7] = '\0';
    acStack_6e0[8] = '\0';
    acStack_6e0[9] = '\0';
    acStack_6e0[10] = '\0';
    acStack_6e0[0xb] = '\0';
    acStack_6e0[0xc] = '\0';
    acStack_6e0[0xd] = '\0';
    acStack_6e0[0xe] = '\0';
    acStack_6e0[0xf] = '\0';
    acStack_6e0[0x10] = '\0';
    acStack_6e0[0x11] = '\0';
    acStack_6e0[0x12] = '\0';
    acStack_6e0[0x13] = '\0';
    acStack_6e0[0x14] = '\0';
    acStack_6e0[0x15] = '\0';
    acStack_6e0[0x16] = '\0';
    acStack_6e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_6e0,auStack_6c0,&lStack_6a8,1);
    plVar15 = (long *)&UNK_110940158;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940158,acStack_6e0,pcVar10);
    puStack_6c8 = acStack_6e0;
    func_0x00010007e5dc(&puStack_6c8);
    pcVar9 = pcVar11;
    pcVar8 = pcVar10;
    pcVar2 = acStack_6e0;
    if (cStack_6a9 < '\0') {
      __ZdlPv(auStack_6c0[0]);
      pcVar9 = pcVar11;
      pcVar8 = pcVar10;
      pcVar2 = acStack_6e0;
    }
  }
  plVar4 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar4;
  __Unwind_Resume();
  pcStack_6e8 = FUN_1067e8250;
  lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar15;
  pcVar1 = pcVar9;
  pcVar10 = pcVar8;
  puStack_720 = unaff_x24;
  pcStack_718 = unaff_x23;
  puStack_710 = (undefined8 *)pcVar2;
  plStack_708 = plVar14;
  plStack_700 = plVar4;
  plStack_6f8 = plVar5;
  pppuStack_6f0 = &pppuStack_670;
  _objc_retain(plVar15);
  _objc_retain(pcVar9);
  puVar16 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = auStack_758;
    func_0x00010002b838(auStack_758,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_740,pcVar1);
    acStack_778[0] = '\0';
    acStack_778[1] = '\0';
    acStack_778[2] = '\0';
    acStack_778[3] = '\0';
    acStack_778[4] = '\0';
    acStack_778[5] = '\0';
    acStack_778[6] = '\0';
    acStack_778[7] = '\0';
    acStack_778[8] = '\0';
    acStack_778[9] = '\0';
    acStack_778[10] = '\0';
    acStack_778[0xb] = '\0';
    acStack_778[0xc] = '\0';
    acStack_778[0xd] = '\0';
    acStack_778[0xe] = '\0';
    acStack_778[0xf] = '\0';
    acStack_778[0x10] = '\0';
    acStack_778[0x11] = '\0';
    acStack_778[0x12] = '\0';
    acStack_778[0x13] = '\0';
    acStack_778[0x14] = '\0';
    acStack_778[0x15] = '\0';
    acStack_778[0x16] = '\0';
    acStack_778[0x17] = '\0';
    func_0x00010007e1e8(acStack_778,auStack_758,&lStack_728,2);
    plVar12 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_778;
    pcVar1 = acStack_778;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109401a8,pcVar1,pcVar8);
    pcStack_760 = unaff_x23;
    func_0x00010007e5dc(&pcStack_760);
    lVar13 = 0;
    puVar16 = auStack_758;
    pcVar10 = pcVar8;
    do {
      if ((&cStack_729)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_740 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar9);
  plVar14 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_728) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_741 < '\0') {
    __ZdlPv(auStack_758[0]);
  }
  _objc_release(pcVar9);
  _objc_release(plVar15);
  plVar5 = plVar14;
  __Unwind_Resume();
  pcStack_788 = FUN_1067e8480;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar12;
  pcVar2 = pcVar1;
  puStack_7c0 = unaff_x24;
  pcStack_7b8 = unaff_x23;
  puStack_7b0 = puVar16;
  plStack_7a8 = plVar14;
  pcStack_7a0 = pcVar9;
  plStack_798 = plVar15;
  pppuStack_790 = &pppuStack_6f0;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar8 = (char *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar14 = (long *)plVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_7f8;
    func_0x00010002b838(auStack_7f8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_7e0,pcVar2);
    acStack_818[0] = '\0';
    acStack_818[1] = '\0';
    acStack_818[2] = '\0';
    acStack_818[3] = '\0';
    acStack_818[4] = '\0';
    acStack_818[5] = '\0';
    acStack_818[6] = '\0';
    acStack_818[7] = '\0';
    acStack_818[8] = '\0';
    acStack_818[9] = '\0';
    acStack_818[10] = '\0';
    acStack_818[0xb] = '\0';
    acStack_818[0xc] = '\0';
    acStack_818[0xd] = '\0';
    acStack_818[0xe] = '\0';
    acStack_818[0xf] = '\0';
    acStack_818[0x10] = '\0';
    acStack_818[0x11] = '\0';
    acStack_818[0x12] = '\0';
    acStack_818[0x13] = '\0';
    acStack_818[0x14] = '\0';
    acStack_818[0x15] = '\0';
    acStack_818[0x16] = '\0';
    acStack_818[0x17] = '\0';
    func_0x00010007e1e8(acStack_818,auStack_7f8,&lStack_7c8,2);
    plVar4 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_818;
    pcVar2 = acStack_818;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109401f8,pcVar2,pcVar10);
    pcStack_800 = unaff_x23;
    func_0x00010007e5dc(&pcStack_800);
    lVar13 = 0;
    pcVar8 = (char *)auStack_7f8;
    do {
      if ((&cStack_7c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar1);
  plVar14 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_7e1 < '\0') {
    __ZdlPv(auStack_7f8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar5 = plVar14;
  __Unwind_Resume();
  pcVar9 = acStack_8a0;
  pcStack_828 = FUN_1067e86b0;
  lStack_868 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar4;
  pcVar10 = pcVar2;
  puStack_860 = unaff_x24;
  pcStack_858 = unaff_x23;
  puStack_850 = (undefined8 *)pcVar8;
  plStack_848 = plVar14;
  pcStack_840 = pcVar1;
  plStack_838 = plVar12;
  pppuStack_830 = &pppuStack_790;
  _objc_retain(plVar4);
  plVar14 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar14 = (long *)plVar5[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_880;
    func_0x00010002b838(auStack_880,pcVar1);
    acStack_8a0[0] = '\0';
    acStack_8a0[1] = '\0';
    acStack_8a0[2] = '\0';
    acStack_8a0[3] = '\0';
    acStack_8a0[4] = '\0';
    acStack_8a0[5] = '\0';
    acStack_8a0[6] = '\0';
    acStack_8a0[7] = '\0';
    acStack_8a0[8] = '\0';
    acStack_8a0[9] = '\0';
    acStack_8a0[10] = '\0';
    acStack_8a0[0xb] = '\0';
    acStack_8a0[0xc] = '\0';
    acStack_8a0[0xd] = '\0';
    acStack_8a0[0xe] = '\0';
    acStack_8a0[0xf] = '\0';
    acStack_8a0[0x10] = '\0';
    acStack_8a0[0x11] = '\0';
    acStack_8a0[0x12] = '\0';
    acStack_8a0[0x13] = '\0';
    acStack_8a0[0x14] = '\0';
    acStack_8a0[0x15] = '\0';
    acStack_8a0[0x16] = '\0';
    acStack_8a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_8a0,auStack_880,&lStack_868,1);
    plVar15 = (long *)&UNK_110940398;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940398,acStack_8a0,pcVar2);
    puStack_888 = acStack_8a0;
    func_0x00010007e5dc(&puStack_888);
    pcVar10 = pcVar9;
    pcVar8 = acStack_8a0;
    if (cStack_869 < '\0') {
      __ZdlPv(auStack_880[0]);
      pcVar10 = pcVar9;
      pcVar8 = acStack_8a0;
    }
  }
  plVar12 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_868) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar5 = plVar12;
  __Unwind_Resume();
  plVar3 = alStack_910;
  pcStack_8a8 = FUN_1067e8824;
  lStack_8d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = (long **)0x0;
  puStack_8d0 = (undefined8 *)pcVar8;
  plStack_8c8 = plVar14;
  plStack_8c0 = plVar12;
  plStack_8b8 = plVar4;
  pppuStack_8b0 = &pppuStack_830;
  if (plVar5 != (long *)0x0) {
    plVar12 = (long *)plVar5[1];
    pcVar1 = "true";
    if ((int)plVar15 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_8f0,pcVar1);
    alStack_910[0] = 0;
    alStack_910[1] = 0;
    alStack_910[2] = 0;
    func_0x00010007e1e8(alStack_910,applStack_8f0,&lStack_8d8,1);
    plVar15 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_910,pcVar10);
    pplVar6 = &plStack_8f8;
    plStack_8f8 = alStack_910;
    func_0x00010007e5dc();
    pcVar10 = (char *)plVar3;
    plVar14 = alStack_910;
    if (cStack_8d9 < '\0') {
      pplVar6 = applStack_8f0[0];
      __ZdlPv();
      pcVar10 = (char *)plVar3;
      plVar14 = alStack_910;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8d8) {
    return;
  }
  ___stack_chk_fail();
  plStack_8f8 = plVar14;
  func_0x00010007e5dc(&plStack_8f8);
  if (cStack_8d9 < '\0') {
    __ZdlPv(applStack_8f0[0]);
  }
  pplVar7 = pplVar6;
  __Unwind_Resume();
  pcStack_918 = FUN_1067e893c;
  lStack_958 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar15;
  puStack_950 = unaff_x24;
  pcStack_948 = unaff_x23;
  puStack_940 = (undefined8 *)pcVar8;
  plStack_938 = plVar14;
  plStack_930 = plVar12;
  pplStack_928 = pplVar6;
  pppuStack_920 = &pppuStack_8b0;
  _objc_retain(plVar15);
  if (pplVar7 != (long **)0x0) {
    plVar14 = pplVar7[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    func_0x00010002b838(auStack_970,pcVar1);
    uStack_990 = 0;
    uStack_988 = 0;
    uStack_980 = 0;
    func_0x00010007e1e8(&uStack_990,auStack_970,&lStack_958,1);
    plVar4 = (long *)&UNK_110940438;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940438,&uStack_990,pcVar10);
    puStack_978 = (undefined1 *)&uStack_990;
    func_0x00010007e5dc(&puStack_978);
    if (cStack_959 < '\0') {
      __ZdlPv(auStack_970[0]);
    }
  }
  plVar14 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_958) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  plVar12 = plVar14;
  __Unwind_Resume();
  puStack_9b8 = (undefined1 *)&uStack_9d0;
  pcStack_998 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_9d0 = 0;
    uStack_9c8 = 0;
    uStack_9c0 = 0;
    plStack_9b0 = plVar14;
    plStack_9a8 = plVar15;
    pppuStack_9a0 = &pppuStack_920;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_9d0,plVar4);
    func_0x00010007e5dc(&puStack_9b8);
  }
  return;
}



/* Entry: 1067e6f68; end: 1067e70db;  */

void FUN_1067e6f68(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined1 *puStack_918;
  long *plStack_910;
  long *plStack_908;
  undefined8 ***pppuStack_900;
  code *pcStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined1 *puStack_8d8;
  undefined8 auStack_8d0 [2];
  char cStack_8b9;
  long lStack_8b8;
  undefined8 *puStack_8b0;
  char *pcStack_8a8;
  undefined8 *puStack_8a0;
  long *plStack_898;
  long *plStack_890;
  long **pplStack_888;
  undefined8 ***pppuStack_880;
  code *pcStack_878;
  long alStack_870 [3];
  long *plStack_858;
  long **applStack_850 [2];
  char cStack_839;
  long lStack_838;
  undefined8 *puStack_830;
  long *plStack_828;
  long *plStack_820;
  long *plStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  char acStack_800 [24];
  undefined1 *puStack_7e8;
  undefined8 auStack_7e0 [2];
  char cStack_7c9;
  long lStack_7c8;
  undefined8 *puStack_7c0;
  char *pcStack_7b8;
  undefined8 *puStack_7b0;
  long *plStack_7a8;
  char *pcStack_7a0;
  long *plStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  char acStack_778 [24];
  char *pcStack_760;
  undefined8 auStack_758 [2];
  char cStack_741;
  undefined8 auStack_740 [2];
  char cStack_729;
  long lStack_728;
  undefined8 *puStack_720;
  char *pcStack_718;
  undefined8 *puStack_710;
  long *plStack_708;
  char *pcStack_700;
  long *plStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  char acStack_6d8 [24];
  char *pcStack_6c0;
  undefined8 auStack_6b8 [2];
  char cStack_6a1;
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *puStack_680;
  char *pcStack_678;
  undefined8 *puStack_670;
  long *plStack_668;
  long *plStack_660;
  long *plStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  char acStack_640 [24];
  undefined1 *puStack_628;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  char *pcStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  char *pcStack_5e0;
  long *plStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5b8 [24];
  char *pcStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  char *pcStack_558;
  undefined8 *puStack_550;
  long *plStack_548;
  long *plStack_540;
  long *plStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  char acStack_520 [24];
  undefined1 *puStack_508;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  char *pcStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  char acStack_4a0 [24];
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  char *pcStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  char acStack_420 [24];
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  char *pcStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  char *pcStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_280 [24];
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_11093fde8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fde8,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_100;
  pcStack_88 = FUN_1067e70dc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar2 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    plVar5 = (long *)&UNK_11093fe38;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fe38,acStack_100,pcVar1);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar2 = pcVar6;
    param_4 = pcVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar2 = pcVar6;
      param_4 = pcVar1;
    }
  }
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume();
  pcVar6 = acStack_180;
  pcStack_108 = FUN_1067e7250;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar5;
  pcVar1 = pcVar2;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar5);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_160;
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    plVar15 = (long *)&UNK_11093fe88;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fe88,acStack_180,pcVar2);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar1 = pcVar6;
    param_4 = pcVar2;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar1 = pcVar6;
      param_4 = pcVar2;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  __Unwind_Resume();
  pcVar6 = acStack_200;
  pcStack_188 = FUN_1067e73c4;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar2 = pcVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar15);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_1e0;
    func_0x00010002b838(auStack_1e0,pcVar2);
    acStack_200[0] = '\0';
    acStack_200[1] = '\0';
    acStack_200[2] = '\0';
    acStack_200[3] = '\0';
    acStack_200[4] = '\0';
    acStack_200[5] = '\0';
    acStack_200[6] = '\0';
    acStack_200[7] = '\0';
    acStack_200[8] = '\0';
    acStack_200[9] = '\0';
    acStack_200[10] = '\0';
    acStack_200[0xb] = '\0';
    acStack_200[0xc] = '\0';
    acStack_200[0xd] = '\0';
    acStack_200[0xe] = '\0';
    acStack_200[0xf] = '\0';
    acStack_200[0x10] = '\0';
    acStack_200[0x11] = '\0';
    acStack_200[0x12] = '\0';
    acStack_200[0x13] = '\0';
    acStack_200[0x14] = '\0';
    acStack_200[0x15] = '\0';
    acStack_200[0x16] = '\0';
    acStack_200[0x17] = '\0';
    func_0x00010007e1e8(acStack_200,auStack_1e0,&lStack_1c8,1);
    plVar5 = (long *)&UNK_11093fed8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fed8,acStack_200,pcVar1);
    puStack_1e8 = acStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    pcVar2 = pcVar6;
    param_4 = pcVar1;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      pcVar2 = pcVar6;
      param_4 = pcVar1;
    }
  }
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume();
  pcVar6 = acStack_280;
  pcStack_208 = FUN_1067e7538;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar5;
  pcVar1 = pcVar2;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(plVar5);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_260;
    func_0x00010002b838(auStack_260,pcVar1);
    acStack_280[0] = '\0';
    acStack_280[1] = '\0';
    acStack_280[2] = '\0';
    acStack_280[3] = '\0';
    acStack_280[4] = '\0';
    acStack_280[5] = '\0';
    acStack_280[6] = '\0';
    acStack_280[7] = '\0';
    acStack_280[8] = '\0';
    acStack_280[9] = '\0';
    acStack_280[10] = '\0';
    acStack_280[0xb] = '\0';
    acStack_280[0xc] = '\0';
    acStack_280[0xd] = '\0';
    acStack_280[0xe] = '\0';
    acStack_280[0xf] = '\0';
    acStack_280[0x10] = '\0';
    acStack_280[0x11] = '\0';
    acStack_280[0x12] = '\0';
    acStack_280[0x13] = '\0';
    acStack_280[0x14] = '\0';
    acStack_280[0x15] = '\0';
    acStack_280[0x16] = '\0';
    acStack_280[0x17] = '\0';
    func_0x00010007e1e8(acStack_280,auStack_260,&lStack_248,1);
    plVar15 = (long *)&UNK_11093ff28;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ff28,acStack_280,pcVar2);
    puStack_268 = acStack_280;
    func_0x00010007e5dc(&puStack_268);
    pcVar1 = pcVar6;
    param_4 = pcVar2;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      pcVar1 = pcVar6;
      param_4 = pcVar2;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  __Unwind_Resume();
  pcStack_288 = FUN_1067e76ac;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar2 = pcVar1;
  pcVar11 = param_4;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(plVar15);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_2e0,pcVar2);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    plVar5 = (long *)&UNK_11093ff78;
    unaff_x23 = acStack_318;
    pcVar2 = acStack_318;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ff78,pcVar2,param_4);
    pcStack_300 = unaff_x23;
    func_0x00010007e5dc(&pcStack_300);
    lVar14 = 0;
    pcVar6 = (char *)auStack_2f8;
    pcVar11 = param_4;
    do {
      if ((&cStack_2c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar15);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcVar10 = acStack_3a0;
  pcStack_328 = FUN_1067e78dc;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar9 = pcVar2;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = (undefined8 *)pcVar6;
  plStack_348 = plVar13;
  pcStack_340 = pcVar1;
  plStack_338 = plVar15;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_380;
    func_0x00010002b838(auStack_380,pcVar1);
    acStack_3a0[0] = '\0';
    acStack_3a0[1] = '\0';
    acStack_3a0[2] = '\0';
    acStack_3a0[3] = '\0';
    acStack_3a0[4] = '\0';
    acStack_3a0[5] = '\0';
    acStack_3a0[6] = '\0';
    acStack_3a0[7] = '\0';
    acStack_3a0[8] = '\0';
    acStack_3a0[9] = '\0';
    acStack_3a0[10] = '\0';
    acStack_3a0[0xb] = '\0';
    acStack_3a0[0xc] = '\0';
    acStack_3a0[0xd] = '\0';
    acStack_3a0[0xe] = '\0';
    acStack_3a0[0xf] = '\0';
    acStack_3a0[0x10] = '\0';
    acStack_3a0[0x11] = '\0';
    acStack_3a0[0x12] = '\0';
    acStack_3a0[0x13] = '\0';
    acStack_3a0[0x14] = '\0';
    acStack_3a0[0x15] = '\0';
    acStack_3a0[0x16] = '\0';
    acStack_3a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3a0,auStack_380,&lStack_368,1);
    plVar12 = (long *)&UNK_11093ffc8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093ffc8,acStack_3a0,pcVar2);
    puStack_388 = acStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    pcVar9 = pcVar10;
    pcVar11 = pcVar2;
    pcVar6 = acStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar2;
      pcVar6 = acStack_3a0;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar2 = acStack_420;
  pcStack_3a8 = FUN_1067e7a50;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar1 = pcVar9;
  puStack_3e0 = unaff_x24;
  pcStack_3d8 = unaff_x23;
  puStack_3d0 = (undefined8 *)pcVar6;
  plStack_3c8 = plVar15;
  plStack_3c0 = plVar13;
  plStack_3b8 = plVar5;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(plVar12);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_400;
    func_0x00010002b838(auStack_400,pcVar1);
    acStack_420[0] = '\0';
    acStack_420[1] = '\0';
    acStack_420[2] = '\0';
    acStack_420[3] = '\0';
    acStack_420[4] = '\0';
    acStack_420[5] = '\0';
    acStack_420[6] = '\0';
    acStack_420[7] = '\0';
    acStack_420[8] = '\0';
    acStack_420[9] = '\0';
    acStack_420[10] = '\0';
    acStack_420[0xb] = '\0';
    acStack_420[0xc] = '\0';
    acStack_420[0xd] = '\0';
    acStack_420[0xe] = '\0';
    acStack_420[0xf] = '\0';
    acStack_420[0x10] = '\0';
    acStack_420[0x11] = '\0';
    acStack_420[0x12] = '\0';
    acStack_420[0x13] = '\0';
    acStack_420[0x14] = '\0';
    acStack_420[0x15] = '\0';
    acStack_420[0x16] = '\0';
    acStack_420[0x17] = '\0';
    func_0x00010007e1e8(acStack_420,auStack_400,&lStack_3e8,1);
    plVar3 = (long *)&UNK_110940018;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940018,acStack_420,pcVar9);
    puStack_408 = acStack_420;
    func_0x00010007e5dc(&puStack_408);
    pcVar1 = pcVar2;
    pcVar11 = pcVar9;
    pcVar6 = acStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      pcVar1 = pcVar2;
      pcVar11 = pcVar9;
      pcVar6 = acStack_420;
    }
  }
  plVar13 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_4a0;
  pcStack_428 = FUN_1067e7bc4;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar3;
  pcVar2 = pcVar1;
  puStack_460 = unaff_x24;
  pcStack_458 = unaff_x23;
  puStack_450 = (undefined8 *)pcVar6;
  plStack_448 = plVar15;
  plStack_440 = plVar13;
  plStack_438 = plVar12;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_480;
    func_0x00010002b838(auStack_480,pcVar2);
    acStack_4a0[0] = '\0';
    acStack_4a0[1] = '\0';
    acStack_4a0[2] = '\0';
    acStack_4a0[3] = '\0';
    acStack_4a0[4] = '\0';
    acStack_4a0[5] = '\0';
    acStack_4a0[6] = '\0';
    acStack_4a0[7] = '\0';
    acStack_4a0[8] = '\0';
    acStack_4a0[9] = '\0';
    acStack_4a0[10] = '\0';
    acStack_4a0[0xb] = '\0';
    acStack_4a0[0xc] = '\0';
    acStack_4a0[0xd] = '\0';
    acStack_4a0[0xe] = '\0';
    acStack_4a0[0xf] = '\0';
    acStack_4a0[0x10] = '\0';
    acStack_4a0[0x11] = '\0';
    acStack_4a0[0x12] = '\0';
    acStack_4a0[0x13] = '\0';
    acStack_4a0[0x14] = '\0';
    acStack_4a0[0x15] = '\0';
    acStack_4a0[0x16] = '\0';
    acStack_4a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_4a0,auStack_480,&lStack_468,1);
    plVar5 = (long *)&UNK_110940068;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940068,acStack_4a0,pcVar1);
    puStack_488 = acStack_4a0;
    func_0x00010007e5dc(&puStack_488);
    pcVar2 = pcVar9;
    pcVar11 = pcVar1;
    pcVar6 = acStack_4a0;
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
      pcVar2 = pcVar9;
      pcVar11 = pcVar1;
      pcVar6 = acStack_4a0;
    }
  }
  plVar13 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_520;
  pcStack_4a8 = FUN_1067e7d38;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar1 = pcVar2;
  puStack_4e0 = unaff_x24;
  pcStack_4d8 = unaff_x23;
  puStack_4d0 = (undefined8 *)pcVar6;
  plStack_4c8 = plVar15;
  plStack_4c0 = plVar13;
  plStack_4b8 = plVar3;
  pppuStack_4b0 = &pppuStack_430;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_500;
    func_0x00010002b838(auStack_500,pcVar1);
    acStack_520[0] = '\0';
    acStack_520[1] = '\0';
    acStack_520[2] = '\0';
    acStack_520[3] = '\0';
    acStack_520[4] = '\0';
    acStack_520[5] = '\0';
    acStack_520[6] = '\0';
    acStack_520[7] = '\0';
    acStack_520[8] = '\0';
    acStack_520[9] = '\0';
    acStack_520[10] = '\0';
    acStack_520[0xb] = '\0';
    acStack_520[0xc] = '\0';
    acStack_520[0xd] = '\0';
    acStack_520[0xe] = '\0';
    acStack_520[0xf] = '\0';
    acStack_520[0x10] = '\0';
    acStack_520[0x11] = '\0';
    acStack_520[0x12] = '\0';
    acStack_520[0x13] = '\0';
    acStack_520[0x14] = '\0';
    acStack_520[0x15] = '\0';
    acStack_520[0x16] = '\0';
    acStack_520[0x17] = '\0';
    func_0x00010007e1e8(acStack_520,auStack_500,&lStack_4e8,1);
    plVar12 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109400b8,acStack_520,pcVar2);
    puStack_508 = acStack_520;
    func_0x00010007e5dc(&puStack_508);
    pcVar1 = pcVar9;
    pcVar11 = pcVar2;
    pcVar6 = acStack_520;
    if (cStack_4e9 < '\0') {
      __ZdlPv(auStack_500[0]);
      pcVar1 = pcVar9;
      pcVar11 = pcVar2;
      pcVar6 = acStack_520;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcStack_528 = FUN_1067e7eac;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar2 = pcVar1;
  pcVar9 = pcVar11;
  puStack_560 = unaff_x24;
  pcStack_558 = unaff_x23;
  puStack_550 = (undefined8 *)pcVar6;
  plStack_548 = plVar15;
  plStack_540 = plVar13;
  plStack_538 = plVar5;
  pppuStack_530 = &pppuStack_4b0;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_598;
    func_0x00010002b838(auStack_598,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_580,pcVar2);
    acStack_5b8[0] = '\0';
    acStack_5b8[1] = '\0';
    acStack_5b8[2] = '\0';
    acStack_5b8[3] = '\0';
    acStack_5b8[4] = '\0';
    acStack_5b8[5] = '\0';
    acStack_5b8[6] = '\0';
    acStack_5b8[7] = '\0';
    acStack_5b8[8] = '\0';
    acStack_5b8[9] = '\0';
    acStack_5b8[10] = '\0';
    acStack_5b8[0xb] = '\0';
    acStack_5b8[0xc] = '\0';
    acStack_5b8[0xd] = '\0';
    acStack_5b8[0xe] = '\0';
    acStack_5b8[0xf] = '\0';
    acStack_5b8[0x10] = '\0';
    acStack_5b8[0x11] = '\0';
    acStack_5b8[0x12] = '\0';
    acStack_5b8[0x13] = '\0';
    acStack_5b8[0x14] = '\0';
    acStack_5b8[0x15] = '\0';
    acStack_5b8[0x16] = '\0';
    acStack_5b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_5b8,auStack_598,&lStack_568,2);
    plVar3 = (long *)&UNK_110940108;
    unaff_x23 = acStack_5b8;
    pcVar2 = acStack_5b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940108,pcVar2,pcVar11);
    pcStack_5a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_5a0);
    lVar14 = 0;
    pcVar6 = (char *)auStack_598;
    pcVar9 = pcVar11;
    do {
      if ((&cStack_569)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_581 < '\0') {
    __ZdlPv(auStack_598[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar5 = plVar15;
  __Unwind_Resume();
  pcVar10 = acStack_640;
  pcStack_5c8 = FUN_1067e80dc;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar11 = pcVar2;
  puStack_600 = unaff_x24;
  pcStack_5f8 = unaff_x23;
  puStack_5f0 = (undefined8 *)pcVar6;
  plStack_5e8 = plVar15;
  pcStack_5e0 = pcVar1;
  plStack_5d8 = plVar12;
  pppuStack_5d0 = &pppuStack_530;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_620;
    func_0x00010002b838(auStack_620,pcVar1);
    acStack_640[0] = '\0';
    acStack_640[1] = '\0';
    acStack_640[2] = '\0';
    acStack_640[3] = '\0';
    acStack_640[4] = '\0';
    acStack_640[5] = '\0';
    acStack_640[6] = '\0';
    acStack_640[7] = '\0';
    acStack_640[8] = '\0';
    acStack_640[9] = '\0';
    acStack_640[10] = '\0';
    acStack_640[0xb] = '\0';
    acStack_640[0xc] = '\0';
    acStack_640[0xd] = '\0';
    acStack_640[0xe] = '\0';
    acStack_640[0xf] = '\0';
    acStack_640[0x10] = '\0';
    acStack_640[0x11] = '\0';
    acStack_640[0x12] = '\0';
    acStack_640[0x13] = '\0';
    acStack_640[0x14] = '\0';
    acStack_640[0x15] = '\0';
    acStack_640[0x16] = '\0';
    acStack_640[0x17] = '\0';
    func_0x00010007e1e8(acStack_640,auStack_620,&lStack_608,1);
    plVar13 = (long *)&UNK_110940158;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940158,acStack_640,pcVar2);
    puStack_628 = acStack_640;
    func_0x00010007e5dc(&puStack_628);
    pcVar11 = pcVar10;
    pcVar9 = pcVar2;
    pcVar6 = acStack_640;
    if (cStack_609 < '\0') {
      __ZdlPv(auStack_620[0]);
      pcVar11 = pcVar10;
      pcVar9 = pcVar2;
      pcVar6 = acStack_640;
    }
  }
  plVar5 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar4 = plVar5;
  __Unwind_Resume();
  pcStack_648 = FUN_1067e8250;
  lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  pcVar1 = pcVar11;
  pcVar2 = pcVar9;
  puStack_680 = unaff_x24;
  pcStack_678 = unaff_x23;
  puStack_670 = (undefined8 *)pcVar6;
  plStack_668 = plVar15;
  plStack_660 = plVar5;
  plStack_658 = plVar3;
  pppuStack_650 = &pppuStack_5d0;
  _objc_retain(plVar13);
  _objc_retain(pcVar11);
  puVar16 = (undefined8 *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_6b8;
    func_0x00010002b838(auStack_6b8,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_6a0,pcVar1);
    acStack_6d8[0] = '\0';
    acStack_6d8[1] = '\0';
    acStack_6d8[2] = '\0';
    acStack_6d8[3] = '\0';
    acStack_6d8[4] = '\0';
    acStack_6d8[5] = '\0';
    acStack_6d8[6] = '\0';
    acStack_6d8[7] = '\0';
    acStack_6d8[8] = '\0';
    acStack_6d8[9] = '\0';
    acStack_6d8[10] = '\0';
    acStack_6d8[0xb] = '\0';
    acStack_6d8[0xc] = '\0';
    acStack_6d8[0xd] = '\0';
    acStack_6d8[0xe] = '\0';
    acStack_6d8[0xf] = '\0';
    acStack_6d8[0x10] = '\0';
    acStack_6d8[0x11] = '\0';
    acStack_6d8[0x12] = '\0';
    acStack_6d8[0x13] = '\0';
    acStack_6d8[0x14] = '\0';
    acStack_6d8[0x15] = '\0';
    acStack_6d8[0x16] = '\0';
    acStack_6d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_6d8,auStack_6b8,&lStack_688,2);
    plVar12 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_6d8;
    pcVar1 = acStack_6d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401a8,pcVar1,pcVar9);
    pcStack_6c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_6c0);
    lVar14 = 0;
    puVar16 = auStack_6b8;
    pcVar2 = pcVar9;
    do {
      if ((&cStack_689)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar11);
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_6a1 < '\0') {
    __ZdlPv(auStack_6b8[0]);
  }
  _objc_release(pcVar11);
  _objc_release(plVar13);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcStack_6e8 = FUN_1067e8480;
  lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar12;
  pcVar6 = pcVar1;
  puStack_720 = unaff_x24;
  pcStack_718 = unaff_x23;
  puStack_710 = puVar16;
  plStack_708 = plVar15;
  pcStack_700 = pcVar11;
  plStack_6f8 = plVar13;
  pppuStack_6f0 = &pppuStack_650;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar11 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_758;
    func_0x00010002b838(auStack_758,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_740,pcVar6);
    acStack_778[0] = '\0';
    acStack_778[1] = '\0';
    acStack_778[2] = '\0';
    acStack_778[3] = '\0';
    acStack_778[4] = '\0';
    acStack_778[5] = '\0';
    acStack_778[6] = '\0';
    acStack_778[7] = '\0';
    acStack_778[8] = '\0';
    acStack_778[9] = '\0';
    acStack_778[10] = '\0';
    acStack_778[0xb] = '\0';
    acStack_778[0xc] = '\0';
    acStack_778[0xd] = '\0';
    acStack_778[0xe] = '\0';
    acStack_778[0xf] = '\0';
    acStack_778[0x10] = '\0';
    acStack_778[0x11] = '\0';
    acStack_778[0x12] = '\0';
    acStack_778[0x13] = '\0';
    acStack_778[0x14] = '\0';
    acStack_778[0x15] = '\0';
    acStack_778[0x16] = '\0';
    acStack_778[0x17] = '\0';
    func_0x00010007e1e8(acStack_778,auStack_758,&lStack_728,2);
    plVar5 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_778;
    pcVar6 = acStack_778;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar6,pcVar2);
    pcStack_760 = unaff_x23;
    func_0x00010007e5dc(&pcStack_760);
    lVar14 = 0;
    pcVar11 = (char *)auStack_758;
    do {
      if ((&cStack_729)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_740 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_728) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_741 < '\0') {
    __ZdlPv(auStack_758[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_800;
  pcStack_788 = FUN_1067e86b0;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar5;
  pcVar2 = pcVar6;
  puStack_7c0 = unaff_x24;
  pcStack_7b8 = unaff_x23;
  puStack_7b0 = (undefined8 *)pcVar11;
  plStack_7a8 = plVar15;
  pcStack_7a0 = pcVar1;
  plStack_798 = plVar12;
  pppuStack_790 = &pppuStack_6f0;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_7e0;
    func_0x00010002b838(auStack_7e0,pcVar1);
    acStack_800[0] = '\0';
    acStack_800[1] = '\0';
    acStack_800[2] = '\0';
    acStack_800[3] = '\0';
    acStack_800[4] = '\0';
    acStack_800[5] = '\0';
    acStack_800[6] = '\0';
    acStack_800[7] = '\0';
    acStack_800[8] = '\0';
    acStack_800[9] = '\0';
    acStack_800[10] = '\0';
    acStack_800[0xb] = '\0';
    acStack_800[0xc] = '\0';
    acStack_800[0xd] = '\0';
    acStack_800[0xe] = '\0';
    acStack_800[0xf] = '\0';
    acStack_800[0x10] = '\0';
    acStack_800[0x11] = '\0';
    acStack_800[0x12] = '\0';
    acStack_800[0x13] = '\0';
    acStack_800[0x14] = '\0';
    acStack_800[0x15] = '\0';
    acStack_800[0x16] = '\0';
    acStack_800[0x17] = '\0';
    func_0x00010007e1e8(acStack_800,auStack_7e0,&lStack_7c8,1);
    plVar13 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_800,pcVar6);
    puStack_7e8 = acStack_800;
    func_0x00010007e5dc(&puStack_7e8);
    pcVar2 = pcVar9;
    pcVar11 = acStack_800;
    if (cStack_7c9 < '\0') {
      __ZdlPv(auStack_7e0[0]);
      pcVar2 = pcVar9;
      pcVar11 = acStack_800;
    }
  }
  plVar12 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar4 = alStack_870;
  pcStack_808 = FUN_1067e8824;
  lStack_838 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = (long **)0x0;
  puStack_830 = (undefined8 *)pcVar11;
  plStack_828 = plVar15;
  plStack_820 = plVar12;
  plStack_818 = plVar5;
  pppuStack_810 = &pppuStack_790;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar13 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_850,pcVar1);
    alStack_870[0] = 0;
    alStack_870[1] = 0;
    alStack_870[2] = 0;
    func_0x00010007e1e8(alStack_870,applStack_850,&lStack_838,1);
    plVar13 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_870,pcVar2);
    pplVar7 = &plStack_858;
    plStack_858 = alStack_870;
    func_0x00010007e5dc();
    pcVar2 = (char *)plVar4;
    plVar15 = alStack_870;
    if (cStack_839 < '\0') {
      pplVar7 = applStack_850[0];
      __ZdlPv();
      pcVar2 = (char *)plVar4;
      plVar15 = alStack_870;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_838) {
    return;
  }
  ___stack_chk_fail();
  plStack_858 = plVar15;
  func_0x00010007e5dc(&plStack_858);
  if (cStack_839 < '\0') {
    __ZdlPv(applStack_850[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_878 = FUN_1067e893c;
  lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar13;
  puStack_8b0 = unaff_x24;
  pcStack_8a8 = unaff_x23;
  puStack_8a0 = (undefined8 *)pcVar11;
  plStack_898 = plVar15;
  plStack_890 = plVar12;
  pplStack_888 = pplVar7;
  pppuStack_880 = &pppuStack_810;
  _objc_retain(plVar13);
  if (pplVar8 != (long **)0x0) {
    plVar15 = pplVar8[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_8d0,pcVar1);
    uStack_8f0 = 0;
    uStack_8e8 = 0;
    uStack_8e0 = 0;
    func_0x00010007e1e8(&uStack_8f0,auStack_8d0,&lStack_8b8,1);
    plVar5 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_8f0,pcVar2);
    puStack_8d8 = (undefined1 *)&uStack_8f0;
    func_0x00010007e5dc(&puStack_8d8);
    if (cStack_8b9 < '\0') {
      __ZdlPv(auStack_8d0[0]);
    }
  }
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar12 = plVar15;
  __Unwind_Resume();
  puStack_918 = (undefined1 *)&uStack_930;
  pcStack_8f8 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_930 = 0;
    uStack_928 = 0;
    uStack_920 = 0;
    plStack_910 = plVar15;
    plStack_908 = plVar13;
    pppuStack_900 = &pppuStack_880;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_930,plVar5);
    func_0x00010007e5dc(&puStack_918);
  }
  return;
}



/* Entry: 1067e70dc; end: 1067e724f;  */

void FUN_1067e70dc(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined1 *puStack_898;
  long *plStack_890;
  long *plStack_888;
  undefined8 ***pppuStack_880;
  code *pcStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined1 *puStack_858;
  undefined8 auStack_850 [2];
  char cStack_839;
  long lStack_838;
  undefined8 *puStack_830;
  char *pcStack_828;
  undefined8 *puStack_820;
  long *plStack_818;
  long *plStack_810;
  long **pplStack_808;
  undefined8 ***pppuStack_800;
  code *pcStack_7f8;
  long alStack_7f0 [3];
  long *plStack_7d8;
  long **applStack_7d0 [2];
  char cStack_7b9;
  long lStack_7b8;
  undefined8 *puStack_7b0;
  long *plStack_7a8;
  long *plStack_7a0;
  long *plStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  char acStack_780 [24];
  undefined1 *puStack_768;
  undefined8 auStack_760 [2];
  char cStack_749;
  long lStack_748;
  undefined8 *puStack_740;
  char *pcStack_738;
  undefined8 *puStack_730;
  long *plStack_728;
  char *pcStack_720;
  long *plStack_718;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  char acStack_6f8 [24];
  char *pcStack_6e0;
  undefined8 auStack_6d8 [2];
  char cStack_6c1;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  char *pcStack_698;
  undefined8 *puStack_690;
  long *plStack_688;
  char *pcStack_680;
  long *plStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  char acStack_658 [24];
  char *pcStack_640;
  undefined8 auStack_638 [2];
  char cStack_621;
  undefined8 auStack_620 [2];
  char cStack_609;
  long lStack_608;
  undefined8 *puStack_600;
  char *pcStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5c0 [24];
  undefined1 *puStack_5a8;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  char *pcStack_578;
  undefined8 *puStack_570;
  long *plStack_568;
  char *pcStack_560;
  long *plStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  char acStack_538 [24];
  char *pcStack_520;
  undefined8 auStack_518 [2];
  char cStack_501;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  char *pcStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  char acStack_4a0 [24];
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  char *pcStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  char acStack_420 [24];
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  char *pcStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  char *pcStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_11093fe38;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fe38,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_100;
  pcStack_88 = FUN_1067e7250;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar15;
  pcVar2 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    plVar4 = (long *)&UNK_11093fe88;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fe88,acStack_100,pcVar1);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar2 = pcVar6;
    param_4 = pcVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar2 = pcVar6;
      param_4 = pcVar1;
    }
  }
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume();
  pcVar6 = acStack_180;
  pcStack_108 = FUN_1067e73c4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar4;
  pcVar1 = pcVar2;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar4);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_160;
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    plVar15 = (long *)&UNK_11093fed8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fed8,acStack_180,pcVar2);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar1 = pcVar6;
    param_4 = pcVar2;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar1 = pcVar6;
      param_4 = pcVar2;
    }
  }
  plVar13 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  __Unwind_Resume();
  pcVar6 = acStack_200;
  pcStack_188 = FUN_1067e7538;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar15;
  pcVar2 = pcVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar15);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_1e0;
    func_0x00010002b838(auStack_1e0,pcVar2);
    acStack_200[0] = '\0';
    acStack_200[1] = '\0';
    acStack_200[2] = '\0';
    acStack_200[3] = '\0';
    acStack_200[4] = '\0';
    acStack_200[5] = '\0';
    acStack_200[6] = '\0';
    acStack_200[7] = '\0';
    acStack_200[8] = '\0';
    acStack_200[9] = '\0';
    acStack_200[10] = '\0';
    acStack_200[0xb] = '\0';
    acStack_200[0xc] = '\0';
    acStack_200[0xd] = '\0';
    acStack_200[0xe] = '\0';
    acStack_200[0xf] = '\0';
    acStack_200[0x10] = '\0';
    acStack_200[0x11] = '\0';
    acStack_200[0x12] = '\0';
    acStack_200[0x13] = '\0';
    acStack_200[0x14] = '\0';
    acStack_200[0x15] = '\0';
    acStack_200[0x16] = '\0';
    acStack_200[0x17] = '\0';
    func_0x00010007e1e8(acStack_200,auStack_1e0,&lStack_1c8,1);
    plVar4 = (long *)&UNK_11093ff28;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ff28,acStack_200,pcVar1);
    puStack_1e8 = acStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    pcVar2 = pcVar6;
    param_4 = pcVar1;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      pcVar2 = pcVar6;
      param_4 = pcVar1;
    }
  }
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume();
  pcStack_208 = FUN_1067e76ac;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar4;
  pcVar1 = pcVar2;
  pcVar11 = param_4;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(plVar4);
  _objc_retain(pcVar2);
  pcVar6 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x24 = auStack_278;
    func_0x00010002b838(auStack_278,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_260,pcVar1);
    acStack_298[0] = '\0';
    acStack_298[1] = '\0';
    acStack_298[2] = '\0';
    acStack_298[3] = '\0';
    acStack_298[4] = '\0';
    acStack_298[5] = '\0';
    acStack_298[6] = '\0';
    acStack_298[7] = '\0';
    acStack_298[8] = '\0';
    acStack_298[9] = '\0';
    acStack_298[10] = '\0';
    acStack_298[0xb] = '\0';
    acStack_298[0xc] = '\0';
    acStack_298[0xd] = '\0';
    acStack_298[0xe] = '\0';
    acStack_298[0xf] = '\0';
    acStack_298[0x10] = '\0';
    acStack_298[0x11] = '\0';
    acStack_298[0x12] = '\0';
    acStack_298[0x13] = '\0';
    acStack_298[0x14] = '\0';
    acStack_298[0x15] = '\0';
    acStack_298[0x16] = '\0';
    acStack_298[0x17] = '\0';
    func_0x00010007e1e8(acStack_298,auStack_278,&lStack_248,2);
    plVar15 = (long *)&UNK_11093ff78;
    unaff_x23 = acStack_298;
    pcVar1 = acStack_298;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ff78,pcVar1,param_4);
    pcStack_280 = unaff_x23;
    func_0x00010007e5dc(&pcStack_280);
    lVar14 = 0;
    pcVar6 = (char *)auStack_278;
    pcVar11 = param_4;
    do {
      if ((&cStack_249)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar2);
  plVar13 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(pcVar2);
  _objc_release(plVar4);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcVar10 = acStack_320;
  pcStack_2a8 = FUN_1067e78dc;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar15;
  pcVar9 = pcVar1;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar6;
  plStack_2c8 = plVar13;
  pcStack_2c0 = pcVar2;
  plStack_2b8 = plVar4;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(plVar15);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_300;
    func_0x00010002b838(auStack_300,pcVar2);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
    plVar12 = (long *)&UNK_11093ffc8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ffc8,acStack_320,pcVar1);
    puStack_308 = acStack_320;
    func_0x00010007e5dc(&puStack_308);
    pcVar9 = pcVar10;
    pcVar11 = pcVar1;
    pcVar6 = acStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar1;
      pcVar6 = acStack_320;
    }
  }
  plVar4 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcVar2 = acStack_3a0;
  pcStack_328 = FUN_1067e7a50;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar1 = pcVar9;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = (undefined8 *)pcVar6;
  plStack_348 = plVar13;
  plStack_340 = plVar4;
  plStack_338 = plVar15;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar12);
  plVar15 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_380;
    func_0x00010002b838(auStack_380,pcVar1);
    acStack_3a0[0] = '\0';
    acStack_3a0[1] = '\0';
    acStack_3a0[2] = '\0';
    acStack_3a0[3] = '\0';
    acStack_3a0[4] = '\0';
    acStack_3a0[5] = '\0';
    acStack_3a0[6] = '\0';
    acStack_3a0[7] = '\0';
    acStack_3a0[8] = '\0';
    acStack_3a0[9] = '\0';
    acStack_3a0[10] = '\0';
    acStack_3a0[0xb] = '\0';
    acStack_3a0[0xc] = '\0';
    acStack_3a0[0xd] = '\0';
    acStack_3a0[0xe] = '\0';
    acStack_3a0[0xf] = '\0';
    acStack_3a0[0x10] = '\0';
    acStack_3a0[0x11] = '\0';
    acStack_3a0[0x12] = '\0';
    acStack_3a0[0x13] = '\0';
    acStack_3a0[0x14] = '\0';
    acStack_3a0[0x15] = '\0';
    acStack_3a0[0x16] = '\0';
    acStack_3a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3a0,auStack_380,&lStack_368,1);
    plVar3 = (long *)&UNK_110940018;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940018,acStack_3a0,pcVar9);
    puStack_388 = acStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    pcVar1 = pcVar2;
    pcVar11 = pcVar9;
    pcVar6 = acStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      pcVar1 = pcVar2;
      pcVar11 = pcVar9;
      pcVar6 = acStack_3a0;
    }
  }
  plVar13 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar5 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_420;
  pcStack_3a8 = FUN_1067e7bc4;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  pcVar2 = pcVar1;
  puStack_3e0 = unaff_x24;
  pcStack_3d8 = unaff_x23;
  puStack_3d0 = (undefined8 *)pcVar6;
  plStack_3c8 = plVar15;
  plStack_3c0 = plVar13;
  plStack_3b8 = plVar12;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_400;
    func_0x00010002b838(auStack_400,pcVar2);
    acStack_420[0] = '\0';
    acStack_420[1] = '\0';
    acStack_420[2] = '\0';
    acStack_420[3] = '\0';
    acStack_420[4] = '\0';
    acStack_420[5] = '\0';
    acStack_420[6] = '\0';
    acStack_420[7] = '\0';
    acStack_420[8] = '\0';
    acStack_420[9] = '\0';
    acStack_420[10] = '\0';
    acStack_420[0xb] = '\0';
    acStack_420[0xc] = '\0';
    acStack_420[0xd] = '\0';
    acStack_420[0xe] = '\0';
    acStack_420[0xf] = '\0';
    acStack_420[0x10] = '\0';
    acStack_420[0x11] = '\0';
    acStack_420[0x12] = '\0';
    acStack_420[0x13] = '\0';
    acStack_420[0x14] = '\0';
    acStack_420[0x15] = '\0';
    acStack_420[0x16] = '\0';
    acStack_420[0x17] = '\0';
    func_0x00010007e1e8(acStack_420,auStack_400,&lStack_3e8,1);
    plVar4 = (long *)&UNK_110940068;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940068,acStack_420,pcVar1);
    puStack_408 = acStack_420;
    func_0x00010007e5dc(&puStack_408);
    pcVar2 = pcVar9;
    pcVar11 = pcVar1;
    pcVar6 = acStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      pcVar2 = pcVar9;
      pcVar11 = pcVar1;
      pcVar6 = acStack_420;
    }
  }
  plVar13 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar5 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_4a0;
  pcStack_428 = FUN_1067e7d38;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar4;
  pcVar1 = pcVar2;
  puStack_460 = unaff_x24;
  pcStack_458 = unaff_x23;
  puStack_450 = (undefined8 *)pcVar6;
  plStack_448 = plVar15;
  plStack_440 = plVar13;
  plStack_438 = plVar3;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(plVar4);
  plVar15 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_480;
    func_0x00010002b838(auStack_480,pcVar1);
    acStack_4a0[0] = '\0';
    acStack_4a0[1] = '\0';
    acStack_4a0[2] = '\0';
    acStack_4a0[3] = '\0';
    acStack_4a0[4] = '\0';
    acStack_4a0[5] = '\0';
    acStack_4a0[6] = '\0';
    acStack_4a0[7] = '\0';
    acStack_4a0[8] = '\0';
    acStack_4a0[9] = '\0';
    acStack_4a0[10] = '\0';
    acStack_4a0[0xb] = '\0';
    acStack_4a0[0xc] = '\0';
    acStack_4a0[0xd] = '\0';
    acStack_4a0[0xe] = '\0';
    acStack_4a0[0xf] = '\0';
    acStack_4a0[0x10] = '\0';
    acStack_4a0[0x11] = '\0';
    acStack_4a0[0x12] = '\0';
    acStack_4a0[0x13] = '\0';
    acStack_4a0[0x14] = '\0';
    acStack_4a0[0x15] = '\0';
    acStack_4a0[0x16] = '\0';
    acStack_4a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_4a0,auStack_480,&lStack_468,1);
    plVar12 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109400b8,acStack_4a0,pcVar2);
    puStack_488 = acStack_4a0;
    func_0x00010007e5dc(&puStack_488);
    pcVar1 = pcVar9;
    pcVar11 = pcVar2;
    pcVar6 = acStack_4a0;
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
      pcVar1 = pcVar9;
      pcVar11 = pcVar2;
      pcVar6 = acStack_4a0;
    }
  }
  plVar13 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar5 = plVar13;
  __Unwind_Resume();
  pcStack_4a8 = FUN_1067e7eac;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar2 = pcVar1;
  pcVar9 = pcVar11;
  puStack_4e0 = unaff_x24;
  pcStack_4d8 = unaff_x23;
  puStack_4d0 = (undefined8 *)pcVar6;
  plStack_4c8 = plVar15;
  plStack_4c0 = plVar13;
  plStack_4b8 = plVar4;
  pppuStack_4b0 = &pppuStack_430;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_518;
    func_0x00010002b838(auStack_518,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_500,pcVar2);
    acStack_538[0] = '\0';
    acStack_538[1] = '\0';
    acStack_538[2] = '\0';
    acStack_538[3] = '\0';
    acStack_538[4] = '\0';
    acStack_538[5] = '\0';
    acStack_538[6] = '\0';
    acStack_538[7] = '\0';
    acStack_538[8] = '\0';
    acStack_538[9] = '\0';
    acStack_538[10] = '\0';
    acStack_538[0xb] = '\0';
    acStack_538[0xc] = '\0';
    acStack_538[0xd] = '\0';
    acStack_538[0xe] = '\0';
    acStack_538[0xf] = '\0';
    acStack_538[0x10] = '\0';
    acStack_538[0x11] = '\0';
    acStack_538[0x12] = '\0';
    acStack_538[0x13] = '\0';
    acStack_538[0x14] = '\0';
    acStack_538[0x15] = '\0';
    acStack_538[0x16] = '\0';
    acStack_538[0x17] = '\0';
    func_0x00010007e1e8(acStack_538,auStack_518,&lStack_4e8,2);
    plVar3 = (long *)&UNK_110940108;
    unaff_x23 = acStack_538;
    pcVar2 = acStack_538;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940108,pcVar2,pcVar11);
    pcStack_520 = unaff_x23;
    func_0x00010007e5dc(&pcStack_520);
    lVar14 = 0;
    pcVar6 = (char *)auStack_518;
    pcVar9 = pcVar11;
    do {
      if ((&cStack_4e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_500 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_501 < '\0') {
    __ZdlPv(auStack_518[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar4 = plVar15;
  __Unwind_Resume();
  pcVar10 = acStack_5c0;
  pcStack_548 = FUN_1067e80dc;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar11 = pcVar2;
  puStack_580 = unaff_x24;
  pcStack_578 = unaff_x23;
  puStack_570 = (undefined8 *)pcVar6;
  plStack_568 = plVar15;
  pcStack_560 = pcVar1;
  plStack_558 = plVar12;
  pppuStack_550 = &pppuStack_4b0;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_5a0;
    func_0x00010002b838(auStack_5a0,pcVar1);
    acStack_5c0[0] = '\0';
    acStack_5c0[1] = '\0';
    acStack_5c0[2] = '\0';
    acStack_5c0[3] = '\0';
    acStack_5c0[4] = '\0';
    acStack_5c0[5] = '\0';
    acStack_5c0[6] = '\0';
    acStack_5c0[7] = '\0';
    acStack_5c0[8] = '\0';
    acStack_5c0[9] = '\0';
    acStack_5c0[10] = '\0';
    acStack_5c0[0xb] = '\0';
    acStack_5c0[0xc] = '\0';
    acStack_5c0[0xd] = '\0';
    acStack_5c0[0xe] = '\0';
    acStack_5c0[0xf] = '\0';
    acStack_5c0[0x10] = '\0';
    acStack_5c0[0x11] = '\0';
    acStack_5c0[0x12] = '\0';
    acStack_5c0[0x13] = '\0';
    acStack_5c0[0x14] = '\0';
    acStack_5c0[0x15] = '\0';
    acStack_5c0[0x16] = '\0';
    acStack_5c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_5c0,auStack_5a0,&lStack_588,1);
    plVar13 = (long *)&UNK_110940158;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940158,acStack_5c0,pcVar2);
    puStack_5a8 = acStack_5c0;
    func_0x00010007e5dc(&puStack_5a8);
    pcVar11 = pcVar10;
    pcVar9 = pcVar2;
    pcVar6 = acStack_5c0;
    if (cStack_589 < '\0') {
      __ZdlPv(auStack_5a0[0]);
      pcVar11 = pcVar10;
      pcVar9 = pcVar2;
      pcVar6 = acStack_5c0;
    }
  }
  plVar4 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_5c8 = FUN_1067e8250;
  lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  pcVar1 = pcVar11;
  pcVar2 = pcVar9;
  puStack_600 = unaff_x24;
  pcStack_5f8 = unaff_x23;
  puStack_5f0 = (undefined8 *)pcVar6;
  plStack_5e8 = plVar15;
  plStack_5e0 = plVar4;
  plStack_5d8 = plVar3;
  pppuStack_5d0 = &pppuStack_550;
  _objc_retain(plVar13);
  _objc_retain(pcVar11);
  puVar16 = (undefined8 *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_638;
    func_0x00010002b838(auStack_638,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_620,pcVar1);
    acStack_658[0] = '\0';
    acStack_658[1] = '\0';
    acStack_658[2] = '\0';
    acStack_658[3] = '\0';
    acStack_658[4] = '\0';
    acStack_658[5] = '\0';
    acStack_658[6] = '\0';
    acStack_658[7] = '\0';
    acStack_658[8] = '\0';
    acStack_658[9] = '\0';
    acStack_658[10] = '\0';
    acStack_658[0xb] = '\0';
    acStack_658[0xc] = '\0';
    acStack_658[0xd] = '\0';
    acStack_658[0xe] = '\0';
    acStack_658[0xf] = '\0';
    acStack_658[0x10] = '\0';
    acStack_658[0x11] = '\0';
    acStack_658[0x12] = '\0';
    acStack_658[0x13] = '\0';
    acStack_658[0x14] = '\0';
    acStack_658[0x15] = '\0';
    acStack_658[0x16] = '\0';
    acStack_658[0x17] = '\0';
    func_0x00010007e1e8(acStack_658,auStack_638,&lStack_608,2);
    plVar12 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_658;
    pcVar1 = acStack_658;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401a8,pcVar1,pcVar9);
    pcStack_640 = unaff_x23;
    func_0x00010007e5dc(&pcStack_640);
    lVar14 = 0;
    puVar16 = auStack_638;
    pcVar2 = pcVar9;
    do {
      if ((&cStack_609)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_620 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar11);
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_608) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_621 < '\0') {
    __ZdlPv(auStack_638[0]);
  }
  _objc_release(pcVar11);
  _objc_release(plVar13);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcStack_668 = FUN_1067e8480;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar12;
  pcVar6 = pcVar1;
  puStack_6a0 = unaff_x24;
  pcStack_698 = unaff_x23;
  puStack_690 = puVar16;
  plStack_688 = plVar15;
  pcStack_680 = pcVar11;
  plStack_678 = plVar13;
  pppuStack_670 = &pppuStack_5d0;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar11 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_6d8;
    func_0x00010002b838(auStack_6d8,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_6c0,pcVar6);
    acStack_6f8[0] = '\0';
    acStack_6f8[1] = '\0';
    acStack_6f8[2] = '\0';
    acStack_6f8[3] = '\0';
    acStack_6f8[4] = '\0';
    acStack_6f8[5] = '\0';
    acStack_6f8[6] = '\0';
    acStack_6f8[7] = '\0';
    acStack_6f8[8] = '\0';
    acStack_6f8[9] = '\0';
    acStack_6f8[10] = '\0';
    acStack_6f8[0xb] = '\0';
    acStack_6f8[0xc] = '\0';
    acStack_6f8[0xd] = '\0';
    acStack_6f8[0xe] = '\0';
    acStack_6f8[0xf] = '\0';
    acStack_6f8[0x10] = '\0';
    acStack_6f8[0x11] = '\0';
    acStack_6f8[0x12] = '\0';
    acStack_6f8[0x13] = '\0';
    acStack_6f8[0x14] = '\0';
    acStack_6f8[0x15] = '\0';
    acStack_6f8[0x16] = '\0';
    acStack_6f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_6f8,auStack_6d8,&lStack_6a8,2);
    plVar4 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_6f8;
    pcVar6 = acStack_6f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar6,pcVar2);
    pcStack_6e0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_6e0);
    lVar14 = 0;
    pcVar11 = (char *)auStack_6d8;
    do {
      if ((&cStack_6a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_6c1 < '\0') {
    __ZdlPv(auStack_6d8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_780;
  pcStack_708 = FUN_1067e86b0;
  lStack_748 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar4;
  pcVar2 = pcVar6;
  puStack_740 = unaff_x24;
  pcStack_738 = unaff_x23;
  puStack_730 = (undefined8 *)pcVar11;
  plStack_728 = plVar15;
  pcStack_720 = pcVar1;
  plStack_718 = plVar12;
  pppuStack_710 = &pppuStack_670;
  _objc_retain(plVar4);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_760;
    func_0x00010002b838(auStack_760,pcVar1);
    acStack_780[0] = '\0';
    acStack_780[1] = '\0';
    acStack_780[2] = '\0';
    acStack_780[3] = '\0';
    acStack_780[4] = '\0';
    acStack_780[5] = '\0';
    acStack_780[6] = '\0';
    acStack_780[7] = '\0';
    acStack_780[8] = '\0';
    acStack_780[9] = '\0';
    acStack_780[10] = '\0';
    acStack_780[0xb] = '\0';
    acStack_780[0xc] = '\0';
    acStack_780[0xd] = '\0';
    acStack_780[0xe] = '\0';
    acStack_780[0xf] = '\0';
    acStack_780[0x10] = '\0';
    acStack_780[0x11] = '\0';
    acStack_780[0x12] = '\0';
    acStack_780[0x13] = '\0';
    acStack_780[0x14] = '\0';
    acStack_780[0x15] = '\0';
    acStack_780[0x16] = '\0';
    acStack_780[0x17] = '\0';
    func_0x00010007e1e8(acStack_780,auStack_760,&lStack_748,1);
    plVar13 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_780,pcVar6);
    puStack_768 = acStack_780;
    func_0x00010007e5dc(&puStack_768);
    pcVar2 = pcVar9;
    pcVar11 = acStack_780;
    if (cStack_749 < '\0') {
      __ZdlPv(auStack_760[0]);
      pcVar2 = pcVar9;
      pcVar11 = acStack_780;
    }
  }
  plVar12 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_748) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar5 = alStack_7f0;
  pcStack_788 = FUN_1067e8824;
  lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = (long **)0x0;
  puStack_7b0 = (undefined8 *)pcVar11;
  plStack_7a8 = plVar15;
  plStack_7a0 = plVar12;
  plStack_798 = plVar4;
  pppuStack_790 = &pppuStack_710;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar13 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_7d0,pcVar1);
    alStack_7f0[0] = 0;
    alStack_7f0[1] = 0;
    alStack_7f0[2] = 0;
    func_0x00010007e1e8(alStack_7f0,applStack_7d0,&lStack_7b8,1);
    plVar13 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_7f0,pcVar2);
    pplVar7 = &plStack_7d8;
    plStack_7d8 = alStack_7f0;
    func_0x00010007e5dc();
    pcVar2 = (char *)plVar5;
    plVar15 = alStack_7f0;
    if (cStack_7b9 < '\0') {
      pplVar7 = applStack_7d0[0];
      __ZdlPv();
      pcVar2 = (char *)plVar5;
      plVar15 = alStack_7f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_7d8 = plVar15;
  func_0x00010007e5dc(&plStack_7d8);
  if (cStack_7b9 < '\0') {
    __ZdlPv(applStack_7d0[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_7f8 = FUN_1067e893c;
  lStack_838 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar13;
  puStack_830 = unaff_x24;
  pcStack_828 = unaff_x23;
  puStack_820 = (undefined8 *)pcVar11;
  plStack_818 = plVar15;
  plStack_810 = plVar12;
  pplStack_808 = pplVar7;
  pppuStack_800 = &pppuStack_790;
  _objc_retain(plVar13);
  if (pplVar8 != (long **)0x0) {
    plVar15 = pplVar8[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_850,pcVar1);
    uStack_870 = 0;
    uStack_868 = 0;
    uStack_860 = 0;
    func_0x00010007e1e8(&uStack_870,auStack_850,&lStack_838,1);
    plVar4 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_870,pcVar2);
    puStack_858 = (undefined1 *)&uStack_870;
    func_0x00010007e5dc(&puStack_858);
    if (cStack_839 < '\0') {
      __ZdlPv(auStack_850[0]);
    }
  }
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_838) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar12 = plVar15;
  __Unwind_Resume();
  puStack_898 = (undefined1 *)&uStack_8b0;
  pcStack_878 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_8b0 = 0;
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    plStack_890 = plVar15;
    plStack_888 = plVar13;
    pppuStack_880 = &pppuStack_800;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_8b0,plVar4);
    func_0x00010007e5dc(&puStack_898);
  }
  return;
}



/* Entry: 1067e7250; end: 1067e73c3;  */

void FUN_1067e7250(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined1 *puStack_818;
  long *plStack_810;
  long *plStack_808;
  undefined8 ***pppuStack_800;
  code *pcStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined1 *puStack_7d8;
  undefined8 auStack_7d0 [2];
  char cStack_7b9;
  long lStack_7b8;
  undefined8 *puStack_7b0;
  char *pcStack_7a8;
  undefined8 *puStack_7a0;
  long *plStack_798;
  long *plStack_790;
  long **pplStack_788;
  undefined8 ***pppuStack_780;
  code *pcStack_778;
  long alStack_770 [3];
  long *plStack_758;
  long **applStack_750 [2];
  char cStack_739;
  long lStack_738;
  undefined8 *puStack_730;
  long *plStack_728;
  long *plStack_720;
  long *plStack_718;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  char acStack_700 [24];
  undefined1 *puStack_6e8;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  undefined8 *puStack_6c0;
  char *pcStack_6b8;
  undefined8 *puStack_6b0;
  long *plStack_6a8;
  char *pcStack_6a0;
  long *plStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  char acStack_678 [24];
  char *pcStack_660;
  undefined8 auStack_658 [2];
  char cStack_641;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 *puStack_620;
  char *pcStack_618;
  undefined8 *puStack_610;
  long *plStack_608;
  char *pcStack_600;
  long *plStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  char acStack_5d8 [24];
  char *pcStack_5c0;
  undefined8 auStack_5b8 [2];
  char cStack_5a1;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  undefined8 *puStack_580;
  char *pcStack_578;
  undefined8 *puStack_570;
  long *plStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  char acStack_540 [24];
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  char *pcStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  char *pcStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4b8 [24];
  char *pcStack_4a0;
  undefined8 auStack_498 [2];
  char cStack_481;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  char *pcStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  char acStack_420 [24];
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  char *pcStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_11093fe88;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fe88,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_100;
  pcStack_88 = FUN_1067e73c4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar2 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    plVar5 = (long *)&UNK_11093fed8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fed8,acStack_100,pcVar1);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar2 = pcVar6;
    param_4 = pcVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar2 = pcVar6;
      param_4 = pcVar1;
    }
  }
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume();
  pcVar6 = acStack_180;
  pcStack_108 = FUN_1067e7538;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar5;
  pcVar1 = pcVar2;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar5);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_160;
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    plVar15 = (long *)&UNK_11093ff28;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ff28,acStack_180,pcVar2);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar1 = pcVar6;
    param_4 = pcVar2;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar1 = pcVar6;
      param_4 = pcVar2;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  __Unwind_Resume();
  pcStack_188 = FUN_1067e76ac;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar2 = pcVar1;
  pcVar11 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar15);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_1e0,pcVar2);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
    plVar5 = (long *)&UNK_11093ff78;
    unaff_x23 = acStack_218;
    pcVar2 = acStack_218;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ff78,pcVar2,param_4);
    pcStack_200 = unaff_x23;
    func_0x00010007e5dc(&pcStack_200);
    lVar14 = 0;
    pcVar6 = (char *)auStack_1f8;
    pcVar11 = param_4;
    do {
      if ((&cStack_1c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar15);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcVar10 = acStack_2a0;
  pcStack_228 = FUN_1067e78dc;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar9 = pcVar2;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar6;
  plStack_248 = plVar13;
  pcStack_240 = pcVar1;
  plStack_238 = plVar15;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_280;
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    plVar12 = (long *)&UNK_11093ffc8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093ffc8,acStack_2a0,pcVar2);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar9 = pcVar10;
    pcVar11 = pcVar2;
    pcVar6 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar2;
      pcVar6 = acStack_2a0;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar2 = acStack_320;
  pcStack_2a8 = FUN_1067e7a50;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar1 = pcVar9;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar6;
  plStack_2c8 = plVar15;
  plStack_2c0 = plVar13;
  plStack_2b8 = plVar5;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar12);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_300;
    func_0x00010002b838(auStack_300,pcVar1);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
    plVar3 = (long *)&UNK_110940018;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940018,acStack_320,pcVar9);
    puStack_308 = acStack_320;
    func_0x00010007e5dc(&puStack_308);
    pcVar1 = pcVar2;
    pcVar11 = pcVar9;
    pcVar6 = acStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar1 = pcVar2;
      pcVar11 = pcVar9;
      pcVar6 = acStack_320;
    }
  }
  plVar13 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_3a0;
  pcStack_328 = FUN_1067e7bc4;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar3;
  pcVar2 = pcVar1;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = (undefined8 *)pcVar6;
  plStack_348 = plVar15;
  plStack_340 = plVar13;
  plStack_338 = plVar12;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_380;
    func_0x00010002b838(auStack_380,pcVar2);
    acStack_3a0[0] = '\0';
    acStack_3a0[1] = '\0';
    acStack_3a0[2] = '\0';
    acStack_3a0[3] = '\0';
    acStack_3a0[4] = '\0';
    acStack_3a0[5] = '\0';
    acStack_3a0[6] = '\0';
    acStack_3a0[7] = '\0';
    acStack_3a0[8] = '\0';
    acStack_3a0[9] = '\0';
    acStack_3a0[10] = '\0';
    acStack_3a0[0xb] = '\0';
    acStack_3a0[0xc] = '\0';
    acStack_3a0[0xd] = '\0';
    acStack_3a0[0xe] = '\0';
    acStack_3a0[0xf] = '\0';
    acStack_3a0[0x10] = '\0';
    acStack_3a0[0x11] = '\0';
    acStack_3a0[0x12] = '\0';
    acStack_3a0[0x13] = '\0';
    acStack_3a0[0x14] = '\0';
    acStack_3a0[0x15] = '\0';
    acStack_3a0[0x16] = '\0';
    acStack_3a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3a0,auStack_380,&lStack_368,1);
    plVar5 = (long *)&UNK_110940068;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940068,acStack_3a0,pcVar1);
    puStack_388 = acStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    pcVar2 = pcVar9;
    pcVar11 = pcVar1;
    pcVar6 = acStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      pcVar2 = pcVar9;
      pcVar11 = pcVar1;
      pcVar6 = acStack_3a0;
    }
  }
  plVar13 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_420;
  pcStack_3a8 = FUN_1067e7d38;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar1 = pcVar2;
  puStack_3e0 = unaff_x24;
  pcStack_3d8 = unaff_x23;
  puStack_3d0 = (undefined8 *)pcVar6;
  plStack_3c8 = plVar15;
  plStack_3c0 = plVar13;
  plStack_3b8 = plVar3;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_400;
    func_0x00010002b838(auStack_400,pcVar1);
    acStack_420[0] = '\0';
    acStack_420[1] = '\0';
    acStack_420[2] = '\0';
    acStack_420[3] = '\0';
    acStack_420[4] = '\0';
    acStack_420[5] = '\0';
    acStack_420[6] = '\0';
    acStack_420[7] = '\0';
    acStack_420[8] = '\0';
    acStack_420[9] = '\0';
    acStack_420[10] = '\0';
    acStack_420[0xb] = '\0';
    acStack_420[0xc] = '\0';
    acStack_420[0xd] = '\0';
    acStack_420[0xe] = '\0';
    acStack_420[0xf] = '\0';
    acStack_420[0x10] = '\0';
    acStack_420[0x11] = '\0';
    acStack_420[0x12] = '\0';
    acStack_420[0x13] = '\0';
    acStack_420[0x14] = '\0';
    acStack_420[0x15] = '\0';
    acStack_420[0x16] = '\0';
    acStack_420[0x17] = '\0';
    func_0x00010007e1e8(acStack_420,auStack_400,&lStack_3e8,1);
    plVar12 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109400b8,acStack_420,pcVar2);
    puStack_408 = acStack_420;
    func_0x00010007e5dc(&puStack_408);
    pcVar1 = pcVar9;
    pcVar11 = pcVar2;
    pcVar6 = acStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      pcVar1 = pcVar9;
      pcVar11 = pcVar2;
      pcVar6 = acStack_420;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcStack_428 = FUN_1067e7eac;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar2 = pcVar1;
  pcVar9 = pcVar11;
  puStack_460 = unaff_x24;
  pcStack_458 = unaff_x23;
  puStack_450 = (undefined8 *)pcVar6;
  plStack_448 = plVar15;
  plStack_440 = plVar13;
  plStack_438 = plVar5;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_498;
    func_0x00010002b838(auStack_498,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_480,pcVar2);
    acStack_4b8[0] = '\0';
    acStack_4b8[1] = '\0';
    acStack_4b8[2] = '\0';
    acStack_4b8[3] = '\0';
    acStack_4b8[4] = '\0';
    acStack_4b8[5] = '\0';
    acStack_4b8[6] = '\0';
    acStack_4b8[7] = '\0';
    acStack_4b8[8] = '\0';
    acStack_4b8[9] = '\0';
    acStack_4b8[10] = '\0';
    acStack_4b8[0xb] = '\0';
    acStack_4b8[0xc] = '\0';
    acStack_4b8[0xd] = '\0';
    acStack_4b8[0xe] = '\0';
    acStack_4b8[0xf] = '\0';
    acStack_4b8[0x10] = '\0';
    acStack_4b8[0x11] = '\0';
    acStack_4b8[0x12] = '\0';
    acStack_4b8[0x13] = '\0';
    acStack_4b8[0x14] = '\0';
    acStack_4b8[0x15] = '\0';
    acStack_4b8[0x16] = '\0';
    acStack_4b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_4b8,auStack_498,&lStack_468,2);
    plVar3 = (long *)&UNK_110940108;
    unaff_x23 = acStack_4b8;
    pcVar2 = acStack_4b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940108,pcVar2,pcVar11);
    pcStack_4a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_4a0);
    lVar14 = 0;
    pcVar6 = (char *)auStack_498;
    pcVar9 = pcVar11;
    do {
      if ((&cStack_469)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_480 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_481 < '\0') {
    __ZdlPv(auStack_498[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar5 = plVar15;
  __Unwind_Resume();
  pcVar10 = acStack_540;
  pcStack_4c8 = FUN_1067e80dc;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar11 = pcVar2;
  puStack_500 = unaff_x24;
  pcStack_4f8 = unaff_x23;
  puStack_4f0 = (undefined8 *)pcVar6;
  plStack_4e8 = plVar15;
  pcStack_4e0 = pcVar1;
  plStack_4d8 = plVar12;
  pppuStack_4d0 = &pppuStack_430;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_520;
    func_0x00010002b838(auStack_520,pcVar1);
    acStack_540[0] = '\0';
    acStack_540[1] = '\0';
    acStack_540[2] = '\0';
    acStack_540[3] = '\0';
    acStack_540[4] = '\0';
    acStack_540[5] = '\0';
    acStack_540[6] = '\0';
    acStack_540[7] = '\0';
    acStack_540[8] = '\0';
    acStack_540[9] = '\0';
    acStack_540[10] = '\0';
    acStack_540[0xb] = '\0';
    acStack_540[0xc] = '\0';
    acStack_540[0xd] = '\0';
    acStack_540[0xe] = '\0';
    acStack_540[0xf] = '\0';
    acStack_540[0x10] = '\0';
    acStack_540[0x11] = '\0';
    acStack_540[0x12] = '\0';
    acStack_540[0x13] = '\0';
    acStack_540[0x14] = '\0';
    acStack_540[0x15] = '\0';
    acStack_540[0x16] = '\0';
    acStack_540[0x17] = '\0';
    func_0x00010007e1e8(acStack_540,auStack_520,&lStack_508,1);
    plVar13 = (long *)&UNK_110940158;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940158,acStack_540,pcVar2);
    puStack_528 = acStack_540;
    func_0x00010007e5dc(&puStack_528);
    pcVar11 = pcVar10;
    pcVar9 = pcVar2;
    pcVar6 = acStack_540;
    if (cStack_509 < '\0') {
      __ZdlPv(auStack_520[0]);
      pcVar11 = pcVar10;
      pcVar9 = pcVar2;
      pcVar6 = acStack_540;
    }
  }
  plVar5 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar4 = plVar5;
  __Unwind_Resume();
  pcStack_548 = FUN_1067e8250;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  pcVar1 = pcVar11;
  pcVar2 = pcVar9;
  puStack_580 = unaff_x24;
  pcStack_578 = unaff_x23;
  puStack_570 = (undefined8 *)pcVar6;
  plStack_568 = plVar15;
  plStack_560 = plVar5;
  plStack_558 = plVar3;
  pppuStack_550 = &pppuStack_4d0;
  _objc_retain(plVar13);
  _objc_retain(pcVar11);
  puVar16 = (undefined8 *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_5b8;
    func_0x00010002b838(auStack_5b8,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_5a0,pcVar1);
    acStack_5d8[0] = '\0';
    acStack_5d8[1] = '\0';
    acStack_5d8[2] = '\0';
    acStack_5d8[3] = '\0';
    acStack_5d8[4] = '\0';
    acStack_5d8[5] = '\0';
    acStack_5d8[6] = '\0';
    acStack_5d8[7] = '\0';
    acStack_5d8[8] = '\0';
    acStack_5d8[9] = '\0';
    acStack_5d8[10] = '\0';
    acStack_5d8[0xb] = '\0';
    acStack_5d8[0xc] = '\0';
    acStack_5d8[0xd] = '\0';
    acStack_5d8[0xe] = '\0';
    acStack_5d8[0xf] = '\0';
    acStack_5d8[0x10] = '\0';
    acStack_5d8[0x11] = '\0';
    acStack_5d8[0x12] = '\0';
    acStack_5d8[0x13] = '\0';
    acStack_5d8[0x14] = '\0';
    acStack_5d8[0x15] = '\0';
    acStack_5d8[0x16] = '\0';
    acStack_5d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_5d8,auStack_5b8,&lStack_588,2);
    plVar12 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_5d8;
    pcVar1 = acStack_5d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401a8,pcVar1,pcVar9);
    pcStack_5c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_5c0);
    lVar14 = 0;
    puVar16 = auStack_5b8;
    pcVar2 = pcVar9;
    do {
      if ((&cStack_589)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar11);
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_5a1 < '\0') {
    __ZdlPv(auStack_5b8[0]);
  }
  _objc_release(pcVar11);
  _objc_release(plVar13);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcStack_5e8 = FUN_1067e8480;
  lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar12;
  pcVar6 = pcVar1;
  puStack_620 = unaff_x24;
  pcStack_618 = unaff_x23;
  puStack_610 = puVar16;
  plStack_608 = plVar15;
  pcStack_600 = pcVar11;
  plStack_5f8 = plVar13;
  pppuStack_5f0 = &pppuStack_550;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar11 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_658;
    func_0x00010002b838(auStack_658,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_640,pcVar6);
    acStack_678[0] = '\0';
    acStack_678[1] = '\0';
    acStack_678[2] = '\0';
    acStack_678[3] = '\0';
    acStack_678[4] = '\0';
    acStack_678[5] = '\0';
    acStack_678[6] = '\0';
    acStack_678[7] = '\0';
    acStack_678[8] = '\0';
    acStack_678[9] = '\0';
    acStack_678[10] = '\0';
    acStack_678[0xb] = '\0';
    acStack_678[0xc] = '\0';
    acStack_678[0xd] = '\0';
    acStack_678[0xe] = '\0';
    acStack_678[0xf] = '\0';
    acStack_678[0x10] = '\0';
    acStack_678[0x11] = '\0';
    acStack_678[0x12] = '\0';
    acStack_678[0x13] = '\0';
    acStack_678[0x14] = '\0';
    acStack_678[0x15] = '\0';
    acStack_678[0x16] = '\0';
    acStack_678[0x17] = '\0';
    func_0x00010007e1e8(acStack_678,auStack_658,&lStack_628,2);
    plVar5 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_678;
    pcVar6 = acStack_678;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar6,pcVar2);
    pcStack_660 = unaff_x23;
    func_0x00010007e5dc(&pcStack_660);
    lVar14 = 0;
    pcVar11 = (char *)auStack_658;
    do {
      if ((&cStack_629)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_640 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_641 < '\0') {
    __ZdlPv(auStack_658[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_700;
  pcStack_688 = FUN_1067e86b0;
  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar5;
  pcVar2 = pcVar6;
  puStack_6c0 = unaff_x24;
  pcStack_6b8 = unaff_x23;
  puStack_6b0 = (undefined8 *)pcVar11;
  plStack_6a8 = plVar15;
  pcStack_6a0 = pcVar1;
  plStack_698 = plVar12;
  pppuStack_690 = &pppuStack_5f0;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_6e0;
    func_0x00010002b838(auStack_6e0,pcVar1);
    acStack_700[0] = '\0';
    acStack_700[1] = '\0';
    acStack_700[2] = '\0';
    acStack_700[3] = '\0';
    acStack_700[4] = '\0';
    acStack_700[5] = '\0';
    acStack_700[6] = '\0';
    acStack_700[7] = '\0';
    acStack_700[8] = '\0';
    acStack_700[9] = '\0';
    acStack_700[10] = '\0';
    acStack_700[0xb] = '\0';
    acStack_700[0xc] = '\0';
    acStack_700[0xd] = '\0';
    acStack_700[0xe] = '\0';
    acStack_700[0xf] = '\0';
    acStack_700[0x10] = '\0';
    acStack_700[0x11] = '\0';
    acStack_700[0x12] = '\0';
    acStack_700[0x13] = '\0';
    acStack_700[0x14] = '\0';
    acStack_700[0x15] = '\0';
    acStack_700[0x16] = '\0';
    acStack_700[0x17] = '\0';
    func_0x00010007e1e8(acStack_700,auStack_6e0,&lStack_6c8,1);
    plVar13 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_700,pcVar6);
    puStack_6e8 = acStack_700;
    func_0x00010007e5dc(&puStack_6e8);
    pcVar2 = pcVar9;
    pcVar11 = acStack_700;
    if (cStack_6c9 < '\0') {
      __ZdlPv(auStack_6e0[0]);
      pcVar2 = pcVar9;
      pcVar11 = acStack_700;
    }
  }
  plVar12 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar4 = alStack_770;
  pcStack_708 = FUN_1067e8824;
  lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = (long **)0x0;
  puStack_730 = (undefined8 *)pcVar11;
  plStack_728 = plVar15;
  plStack_720 = plVar12;
  plStack_718 = plVar5;
  pppuStack_710 = &pppuStack_690;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar13 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_750,pcVar1);
    alStack_770[0] = 0;
    alStack_770[1] = 0;
    alStack_770[2] = 0;
    func_0x00010007e1e8(alStack_770,applStack_750,&lStack_738,1);
    plVar13 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_770,pcVar2);
    pplVar7 = &plStack_758;
    plStack_758 = alStack_770;
    func_0x00010007e5dc();
    pcVar2 = (char *)plVar4;
    plVar15 = alStack_770;
    if (cStack_739 < '\0') {
      pplVar7 = applStack_750[0];
      __ZdlPv();
      pcVar2 = (char *)plVar4;
      plVar15 = alStack_770;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_738) {
    return;
  }
  ___stack_chk_fail();
  plStack_758 = plVar15;
  func_0x00010007e5dc(&plStack_758);
  if (cStack_739 < '\0') {
    __ZdlPv(applStack_750[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_778 = FUN_1067e893c;
  lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar13;
  puStack_7b0 = unaff_x24;
  pcStack_7a8 = unaff_x23;
  puStack_7a0 = (undefined8 *)pcVar11;
  plStack_798 = plVar15;
  plStack_790 = plVar12;
  pplStack_788 = pplVar7;
  pppuStack_780 = &pppuStack_710;
  _objc_retain(plVar13);
  if (pplVar8 != (long **)0x0) {
    plVar15 = pplVar8[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_7d0,pcVar1);
    uStack_7f0 = 0;
    uStack_7e8 = 0;
    uStack_7e0 = 0;
    func_0x00010007e1e8(&uStack_7f0,auStack_7d0,&lStack_7b8,1);
    plVar5 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_7f0,pcVar2);
    puStack_7d8 = (undefined1 *)&uStack_7f0;
    func_0x00010007e5dc(&puStack_7d8);
    if (cStack_7b9 < '\0') {
      __ZdlPv(auStack_7d0[0]);
    }
  }
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar12 = plVar15;
  __Unwind_Resume();
  puStack_818 = (undefined1 *)&uStack_830;
  pcStack_7f8 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_830 = 0;
    uStack_828 = 0;
    uStack_820 = 0;
    plStack_810 = plVar15;
    plStack_808 = plVar13;
    pppuStack_800 = &pppuStack_780;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_830,plVar5);
    func_0x00010007e5dc(&puStack_818);
  }
  return;
}



/* Entry: 1067e73c4; end: 1067e7537;  */

void FUN_1067e73c4(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined1 *puStack_798;
  long *plStack_790;
  long *plStack_788;
  undefined8 ***pppuStack_780;
  code *pcStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined1 *puStack_758;
  undefined8 auStack_750 [2];
  char cStack_739;
  long lStack_738;
  undefined8 *puStack_730;
  char *pcStack_728;
  undefined8 *puStack_720;
  long *plStack_718;
  long *plStack_710;
  long **pplStack_708;
  undefined8 ***pppuStack_700;
  code *pcStack_6f8;
  long alStack_6f0 [3];
  long *plStack_6d8;
  long **applStack_6d0 [2];
  char cStack_6b9;
  long lStack_6b8;
  undefined8 *puStack_6b0;
  long *plStack_6a8;
  long *plStack_6a0;
  long *plStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  char acStack_680 [24];
  undefined1 *puStack_668;
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  undefined8 *puStack_640;
  char *pcStack_638;
  undefined8 *puStack_630;
  long *plStack_628;
  char *pcStack_620;
  long *plStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  char acStack_5f8 [24];
  char *pcStack_5e0;
  undefined8 auStack_5d8 [2];
  char cStack_5c1;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  char *pcStack_598;
  undefined8 *puStack_590;
  long *plStack_588;
  char *pcStack_580;
  long *plStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  char acStack_558 [24];
  char *pcStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined8 *puStack_500;
  char *pcStack_4f8;
  undefined8 *puStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  char *pcStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  char *pcStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  char acStack_438 [24];
  char *pcStack_420;
  undefined8 auStack_418 [2];
  char cStack_401;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  char *pcStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_11093fed8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093fed8,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_100;
  pcStack_88 = FUN_1067e7538;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar15;
  pcVar2 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    plVar4 = (long *)&UNK_11093ff28;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ff28,acStack_100,pcVar1);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar2 = pcVar6;
    param_4 = pcVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar2 = pcVar6;
      param_4 = pcVar1;
    }
  }
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume();
  pcStack_108 = FUN_1067e76ac;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar4;
  pcVar1 = pcVar2;
  pcVar11 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar4);
  _objc_retain(pcVar2);
  pcVar6 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
    plVar15 = (long *)&UNK_11093ff78;
    unaff_x23 = acStack_198;
    pcVar1 = acStack_198;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ff78,pcVar1,param_4);
    pcStack_180 = unaff_x23;
    func_0x00010007e5dc(&pcStack_180);
    lVar14 = 0;
    pcVar6 = (char *)auStack_178;
    pcVar11 = param_4;
    do {
      if ((&cStack_149)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar2);
  plVar13 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar2);
  _objc_release(plVar4);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcVar10 = acStack_220;
  pcStack_1a8 = FUN_1067e78dc;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar15;
  pcVar9 = pcVar1;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar6;
  plStack_1c8 = plVar13;
  pcStack_1c0 = pcVar2;
  plStack_1b8 = plVar4;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(plVar15);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar2);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    plVar12 = (long *)&UNK_11093ffc8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ffc8,acStack_220,pcVar1);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar9 = pcVar10;
    pcVar11 = pcVar1;
    pcVar6 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar1;
      pcVar6 = acStack_220;
    }
  }
  plVar4 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcVar2 = acStack_2a0;
  pcStack_228 = FUN_1067e7a50;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar1 = pcVar9;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar6;
  plStack_248 = plVar13;
  plStack_240 = plVar4;
  plStack_238 = plVar15;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar12);
  plVar15 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_280;
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    plVar3 = (long *)&UNK_110940018;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940018,acStack_2a0,pcVar9);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar1 = pcVar2;
    pcVar11 = pcVar9;
    pcVar6 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar1 = pcVar2;
      pcVar11 = pcVar9;
      pcVar6 = acStack_2a0;
    }
  }
  plVar13 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar5 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_320;
  pcStack_2a8 = FUN_1067e7bc4;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar3;
  pcVar2 = pcVar1;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar6;
  plStack_2c8 = plVar15;
  plStack_2c0 = plVar13;
  plStack_2b8 = plVar12;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_300;
    func_0x00010002b838(auStack_300,pcVar2);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
    plVar4 = (long *)&UNK_110940068;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940068,acStack_320,pcVar1);
    puStack_308 = acStack_320;
    func_0x00010007e5dc(&puStack_308);
    pcVar2 = pcVar9;
    pcVar11 = pcVar1;
    pcVar6 = acStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar2 = pcVar9;
      pcVar11 = pcVar1;
      pcVar6 = acStack_320;
    }
  }
  plVar13 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar5 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_3a0;
  pcStack_328 = FUN_1067e7d38;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar4;
  pcVar1 = pcVar2;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = (undefined8 *)pcVar6;
  plStack_348 = plVar15;
  plStack_340 = plVar13;
  plStack_338 = plVar3;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar4);
  plVar15 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_380;
    func_0x00010002b838(auStack_380,pcVar1);
    acStack_3a0[0] = '\0';
    acStack_3a0[1] = '\0';
    acStack_3a0[2] = '\0';
    acStack_3a0[3] = '\0';
    acStack_3a0[4] = '\0';
    acStack_3a0[5] = '\0';
    acStack_3a0[6] = '\0';
    acStack_3a0[7] = '\0';
    acStack_3a0[8] = '\0';
    acStack_3a0[9] = '\0';
    acStack_3a0[10] = '\0';
    acStack_3a0[0xb] = '\0';
    acStack_3a0[0xc] = '\0';
    acStack_3a0[0xd] = '\0';
    acStack_3a0[0xe] = '\0';
    acStack_3a0[0xf] = '\0';
    acStack_3a0[0x10] = '\0';
    acStack_3a0[0x11] = '\0';
    acStack_3a0[0x12] = '\0';
    acStack_3a0[0x13] = '\0';
    acStack_3a0[0x14] = '\0';
    acStack_3a0[0x15] = '\0';
    acStack_3a0[0x16] = '\0';
    acStack_3a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3a0,auStack_380,&lStack_368,1);
    plVar12 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109400b8,acStack_3a0,pcVar2);
    puStack_388 = acStack_3a0;
    func_0x00010007e5dc(&puStack_388);
    pcVar1 = pcVar9;
    pcVar11 = pcVar2;
    pcVar6 = acStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      pcVar1 = pcVar9;
      pcVar11 = pcVar2;
      pcVar6 = acStack_3a0;
    }
  }
  plVar13 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar5 = plVar13;
  __Unwind_Resume();
  pcStack_3a8 = FUN_1067e7eac;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar2 = pcVar1;
  pcVar9 = pcVar11;
  puStack_3e0 = unaff_x24;
  pcStack_3d8 = unaff_x23;
  puStack_3d0 = (undefined8 *)pcVar6;
  plStack_3c8 = plVar15;
  plStack_3c0 = plVar13;
  plStack_3b8 = plVar4;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_418;
    func_0x00010002b838(auStack_418,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_400,pcVar2);
    acStack_438[0] = '\0';
    acStack_438[1] = '\0';
    acStack_438[2] = '\0';
    acStack_438[3] = '\0';
    acStack_438[4] = '\0';
    acStack_438[5] = '\0';
    acStack_438[6] = '\0';
    acStack_438[7] = '\0';
    acStack_438[8] = '\0';
    acStack_438[9] = '\0';
    acStack_438[10] = '\0';
    acStack_438[0xb] = '\0';
    acStack_438[0xc] = '\0';
    acStack_438[0xd] = '\0';
    acStack_438[0xe] = '\0';
    acStack_438[0xf] = '\0';
    acStack_438[0x10] = '\0';
    acStack_438[0x11] = '\0';
    acStack_438[0x12] = '\0';
    acStack_438[0x13] = '\0';
    acStack_438[0x14] = '\0';
    acStack_438[0x15] = '\0';
    acStack_438[0x16] = '\0';
    acStack_438[0x17] = '\0';
    func_0x00010007e1e8(acStack_438,auStack_418,&lStack_3e8,2);
    plVar3 = (long *)&UNK_110940108;
    unaff_x23 = acStack_438;
    pcVar2 = acStack_438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940108,pcVar2,pcVar11);
    pcStack_420 = unaff_x23;
    func_0x00010007e5dc(&pcStack_420);
    lVar14 = 0;
    pcVar6 = (char *)auStack_418;
    pcVar9 = pcVar11;
    do {
      if ((&cStack_3e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_400 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_401 < '\0') {
    __ZdlPv(auStack_418[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar4 = plVar15;
  __Unwind_Resume();
  pcVar10 = acStack_4c0;
  pcStack_448 = FUN_1067e80dc;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar11 = pcVar2;
  puStack_480 = unaff_x24;
  pcStack_478 = unaff_x23;
  puStack_470 = (undefined8 *)pcVar6;
  plStack_468 = plVar15;
  pcStack_460 = pcVar1;
  plStack_458 = plVar12;
  pppuStack_450 = &pppuStack_3b0;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_4a0;
    func_0x00010002b838(auStack_4a0,pcVar1);
    acStack_4c0[0] = '\0';
    acStack_4c0[1] = '\0';
    acStack_4c0[2] = '\0';
    acStack_4c0[3] = '\0';
    acStack_4c0[4] = '\0';
    acStack_4c0[5] = '\0';
    acStack_4c0[6] = '\0';
    acStack_4c0[7] = '\0';
    acStack_4c0[8] = '\0';
    acStack_4c0[9] = '\0';
    acStack_4c0[10] = '\0';
    acStack_4c0[0xb] = '\0';
    acStack_4c0[0xc] = '\0';
    acStack_4c0[0xd] = '\0';
    acStack_4c0[0xe] = '\0';
    acStack_4c0[0xf] = '\0';
    acStack_4c0[0x10] = '\0';
    acStack_4c0[0x11] = '\0';
    acStack_4c0[0x12] = '\0';
    acStack_4c0[0x13] = '\0';
    acStack_4c0[0x14] = '\0';
    acStack_4c0[0x15] = '\0';
    acStack_4c0[0x16] = '\0';
    acStack_4c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_4c0,auStack_4a0,&lStack_488,1);
    plVar13 = (long *)&UNK_110940158;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940158,acStack_4c0,pcVar2);
    puStack_4a8 = acStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    pcVar11 = pcVar10;
    pcVar9 = pcVar2;
    pcVar6 = acStack_4c0;
    if (cStack_489 < '\0') {
      __ZdlPv(auStack_4a0[0]);
      pcVar11 = pcVar10;
      pcVar9 = pcVar2;
      pcVar6 = acStack_4c0;
    }
  }
  plVar4 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_4c8 = FUN_1067e8250;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  pcVar1 = pcVar11;
  pcVar2 = pcVar9;
  puStack_500 = unaff_x24;
  pcStack_4f8 = unaff_x23;
  puStack_4f0 = (undefined8 *)pcVar6;
  plStack_4e8 = plVar15;
  plStack_4e0 = plVar4;
  plStack_4d8 = plVar3;
  pppuStack_4d0 = &pppuStack_450;
  _objc_retain(plVar13);
  _objc_retain(pcVar11);
  puVar16 = (undefined8 *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_538;
    func_0x00010002b838(auStack_538,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_520,pcVar1);
    acStack_558[0] = '\0';
    acStack_558[1] = '\0';
    acStack_558[2] = '\0';
    acStack_558[3] = '\0';
    acStack_558[4] = '\0';
    acStack_558[5] = '\0';
    acStack_558[6] = '\0';
    acStack_558[7] = '\0';
    acStack_558[8] = '\0';
    acStack_558[9] = '\0';
    acStack_558[10] = '\0';
    acStack_558[0xb] = '\0';
    acStack_558[0xc] = '\0';
    acStack_558[0xd] = '\0';
    acStack_558[0xe] = '\0';
    acStack_558[0xf] = '\0';
    acStack_558[0x10] = '\0';
    acStack_558[0x11] = '\0';
    acStack_558[0x12] = '\0';
    acStack_558[0x13] = '\0';
    acStack_558[0x14] = '\0';
    acStack_558[0x15] = '\0';
    acStack_558[0x16] = '\0';
    acStack_558[0x17] = '\0';
    func_0x00010007e1e8(acStack_558,auStack_538,&lStack_508,2);
    plVar12 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_558;
    pcVar1 = acStack_558;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401a8,pcVar1,pcVar9);
    pcStack_540 = unaff_x23;
    func_0x00010007e5dc(&pcStack_540);
    lVar14 = 0;
    puVar16 = auStack_538;
    pcVar2 = pcVar9;
    do {
      if ((&cStack_509)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar11);
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_521 < '\0') {
    __ZdlPv(auStack_538[0]);
  }
  _objc_release(pcVar11);
  _objc_release(plVar13);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcStack_568 = FUN_1067e8480;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar12;
  pcVar6 = pcVar1;
  puStack_5a0 = unaff_x24;
  pcStack_598 = unaff_x23;
  puStack_590 = puVar16;
  plStack_588 = plVar15;
  pcStack_580 = pcVar11;
  plStack_578 = plVar13;
  pppuStack_570 = &pppuStack_4d0;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar11 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_5d8;
    func_0x00010002b838(auStack_5d8,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_5c0,pcVar6);
    acStack_5f8[0] = '\0';
    acStack_5f8[1] = '\0';
    acStack_5f8[2] = '\0';
    acStack_5f8[3] = '\0';
    acStack_5f8[4] = '\0';
    acStack_5f8[5] = '\0';
    acStack_5f8[6] = '\0';
    acStack_5f8[7] = '\0';
    acStack_5f8[8] = '\0';
    acStack_5f8[9] = '\0';
    acStack_5f8[10] = '\0';
    acStack_5f8[0xb] = '\0';
    acStack_5f8[0xc] = '\0';
    acStack_5f8[0xd] = '\0';
    acStack_5f8[0xe] = '\0';
    acStack_5f8[0xf] = '\0';
    acStack_5f8[0x10] = '\0';
    acStack_5f8[0x11] = '\0';
    acStack_5f8[0x12] = '\0';
    acStack_5f8[0x13] = '\0';
    acStack_5f8[0x14] = '\0';
    acStack_5f8[0x15] = '\0';
    acStack_5f8[0x16] = '\0';
    acStack_5f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_5f8,auStack_5d8,&lStack_5a8,2);
    plVar4 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_5f8;
    pcVar6 = acStack_5f8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar6,pcVar2);
    pcStack_5e0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_5e0);
    lVar14 = 0;
    pcVar11 = (char *)auStack_5d8;
    do {
      if ((&cStack_5a9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5c0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_5c1 < '\0') {
    __ZdlPv(auStack_5d8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_680;
  pcStack_608 = FUN_1067e86b0;
  lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar4;
  pcVar2 = pcVar6;
  puStack_640 = unaff_x24;
  pcStack_638 = unaff_x23;
  puStack_630 = (undefined8 *)pcVar11;
  plStack_628 = plVar15;
  pcStack_620 = pcVar1;
  plStack_618 = plVar12;
  pppuStack_610 = &pppuStack_570;
  _objc_retain(plVar4);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_660;
    func_0x00010002b838(auStack_660,pcVar1);
    acStack_680[0] = '\0';
    acStack_680[1] = '\0';
    acStack_680[2] = '\0';
    acStack_680[3] = '\0';
    acStack_680[4] = '\0';
    acStack_680[5] = '\0';
    acStack_680[6] = '\0';
    acStack_680[7] = '\0';
    acStack_680[8] = '\0';
    acStack_680[9] = '\0';
    acStack_680[10] = '\0';
    acStack_680[0xb] = '\0';
    acStack_680[0xc] = '\0';
    acStack_680[0xd] = '\0';
    acStack_680[0xe] = '\0';
    acStack_680[0xf] = '\0';
    acStack_680[0x10] = '\0';
    acStack_680[0x11] = '\0';
    acStack_680[0x12] = '\0';
    acStack_680[0x13] = '\0';
    acStack_680[0x14] = '\0';
    acStack_680[0x15] = '\0';
    acStack_680[0x16] = '\0';
    acStack_680[0x17] = '\0';
    func_0x00010007e1e8(acStack_680,auStack_660,&lStack_648,1);
    plVar13 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_680,pcVar6);
    puStack_668 = acStack_680;
    func_0x00010007e5dc(&puStack_668);
    pcVar2 = pcVar9;
    pcVar11 = acStack_680;
    if (cStack_649 < '\0') {
      __ZdlPv(auStack_660[0]);
      pcVar2 = pcVar9;
      pcVar11 = acStack_680;
    }
  }
  plVar12 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar5 = alStack_6f0;
  pcStack_688 = FUN_1067e8824;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = (long **)0x0;
  puStack_6b0 = (undefined8 *)pcVar11;
  plStack_6a8 = plVar15;
  plStack_6a0 = plVar12;
  plStack_698 = plVar4;
  pppuStack_690 = &pppuStack_610;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar13 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_6d0,pcVar1);
    alStack_6f0[0] = 0;
    alStack_6f0[1] = 0;
    alStack_6f0[2] = 0;
    func_0x00010007e1e8(alStack_6f0,applStack_6d0,&lStack_6b8,1);
    plVar13 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_6f0,pcVar2);
    pplVar7 = &plStack_6d8;
    plStack_6d8 = alStack_6f0;
    func_0x00010007e5dc();
    pcVar2 = (char *)plVar5;
    plVar15 = alStack_6f0;
    if (cStack_6b9 < '\0') {
      pplVar7 = applStack_6d0[0];
      __ZdlPv();
      pcVar2 = (char *)plVar5;
      plVar15 = alStack_6f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_6d8 = plVar15;
  func_0x00010007e5dc(&plStack_6d8);
  if (cStack_6b9 < '\0') {
    __ZdlPv(applStack_6d0[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_6f8 = FUN_1067e893c;
  lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar13;
  puStack_730 = unaff_x24;
  pcStack_728 = unaff_x23;
  puStack_720 = (undefined8 *)pcVar11;
  plStack_718 = plVar15;
  plStack_710 = plVar12;
  pplStack_708 = pplVar7;
  pppuStack_700 = &pppuStack_690;
  _objc_retain(plVar13);
  if (pplVar8 != (long **)0x0) {
    plVar15 = pplVar8[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_750,pcVar1);
    uStack_770 = 0;
    uStack_768 = 0;
    uStack_760 = 0;
    func_0x00010007e1e8(&uStack_770,auStack_750,&lStack_738,1);
    plVar4 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_770,pcVar2);
    puStack_758 = (undefined1 *)&uStack_770;
    func_0x00010007e5dc(&puStack_758);
    if (cStack_739 < '\0') {
      __ZdlPv(auStack_750[0]);
    }
  }
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_738) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar12 = plVar15;
  __Unwind_Resume();
  puStack_798 = (undefined1 *)&uStack_7b0;
  pcStack_778 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_7b0 = 0;
    uStack_7a8 = 0;
    uStack_7a0 = 0;
    plStack_790 = plVar15;
    plStack_788 = plVar13;
    pppuStack_780 = &pppuStack_700;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_7b0,plVar4);
    func_0x00010007e5dc(&puStack_798);
  }
  return;
}



/* Entry: 1067e7538; end: 1067e76ab;  */

void FUN_1067e7538(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 *puStack_718;
  long *plStack_710;
  long *plStack_708;
  undefined8 ***pppuStack_700;
  code *pcStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined1 *puStack_6d8;
  undefined8 auStack_6d0 [2];
  char cStack_6b9;
  long lStack_6b8;
  undefined8 *puStack_6b0;
  char *pcStack_6a8;
  undefined8 *puStack_6a0;
  long *plStack_698;
  long *plStack_690;
  long **pplStack_688;
  undefined8 ***pppuStack_680;
  code *pcStack_678;
  long alStack_670 [3];
  long *plStack_658;
  long **applStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 *puStack_630;
  long *plStack_628;
  long *plStack_620;
  long *plStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  char acStack_600 [24];
  undefined1 *puStack_5e8;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  undefined8 *puStack_5c0;
  char *pcStack_5b8;
  undefined8 *puStack_5b0;
  long *plStack_5a8;
  char *pcStack_5a0;
  long *plStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  char acStack_578 [24];
  char *pcStack_560;
  undefined8 auStack_558 [2];
  char cStack_541;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  char *pcStack_518;
  undefined8 *puStack_510;
  long *plStack_508;
  char *pcStack_500;
  long *plStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  char acStack_4d8 [24];
  char *pcStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  char *pcStack_478;
  undefined8 *puStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  char acStack_440 [24];
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  char *pcStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  char *pcStack_3e0;
  long *plStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_11093ff28;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ff28,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1067e76ac;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar2 = pcVar1;
  pcVar11 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    plVar5 = (long *)&UNK_11093ff78;
    unaff_x23 = acStack_118;
    pcVar2 = acStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ff78,pcVar2,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar14 = 0;
    pcVar6 = (char *)auStack_f8;
    pcVar11 = param_4;
    do {
      if ((&cStack_c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar15);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcVar10 = acStack_1a0;
  pcStack_128 = FUN_1067e78dc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar9 = pcVar2;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar6;
  plStack_148 = plVar13;
  pcStack_140 = pcVar1;
  plStack_138 = plVar15;
  ppuStack_130 = &puStack_90;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    plVar12 = (long *)&UNK_11093ffc8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093ffc8,acStack_1a0,pcVar2);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar9 = pcVar10;
    pcVar11 = pcVar2;
    pcVar6 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar2;
      pcVar6 = acStack_1a0;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar2 = acStack_220;
  pcStack_1a8 = FUN_1067e7a50;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar1 = pcVar9;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar6;
  plStack_1c8 = plVar15;
  plStack_1c0 = plVar13;
  plStack_1b8 = plVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar12);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar1);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    plVar3 = (long *)&UNK_110940018;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940018,acStack_220,pcVar9);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar1 = pcVar2;
    pcVar11 = pcVar9;
    pcVar6 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar1 = pcVar2;
      pcVar11 = pcVar9;
      pcVar6 = acStack_220;
    }
  }
  plVar13 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_2a0;
  pcStack_228 = FUN_1067e7bc4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar3;
  pcVar2 = pcVar1;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar6;
  plStack_248 = plVar15;
  plStack_240 = plVar13;
  plStack_238 = plVar12;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_280;
    func_0x00010002b838(auStack_280,pcVar2);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    plVar5 = (long *)&UNK_110940068;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940068,acStack_2a0,pcVar1);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar2 = pcVar9;
    pcVar11 = pcVar1;
    pcVar6 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar2 = pcVar9;
      pcVar11 = pcVar1;
      pcVar6 = acStack_2a0;
    }
  }
  plVar13 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_320;
  pcStack_2a8 = FUN_1067e7d38;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar1 = pcVar2;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar6;
  plStack_2c8 = plVar15;
  plStack_2c0 = plVar13;
  plStack_2b8 = plVar3;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_300;
    func_0x00010002b838(auStack_300,pcVar1);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
    plVar12 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109400b8,acStack_320,pcVar2);
    puStack_308 = acStack_320;
    func_0x00010007e5dc(&puStack_308);
    pcVar1 = pcVar9;
    pcVar11 = pcVar2;
    pcVar6 = acStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar1 = pcVar9;
      pcVar11 = pcVar2;
      pcVar6 = acStack_320;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcStack_328 = FUN_1067e7eac;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar2 = pcVar1;
  pcVar9 = pcVar11;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = (undefined8 *)pcVar6;
  plStack_348 = plVar15;
  plStack_340 = plVar13;
  plStack_338 = plVar5;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_398;
    func_0x00010002b838(auStack_398,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_380,pcVar2);
    acStack_3b8[0] = '\0';
    acStack_3b8[1] = '\0';
    acStack_3b8[2] = '\0';
    acStack_3b8[3] = '\0';
    acStack_3b8[4] = '\0';
    acStack_3b8[5] = '\0';
    acStack_3b8[6] = '\0';
    acStack_3b8[7] = '\0';
    acStack_3b8[8] = '\0';
    acStack_3b8[9] = '\0';
    acStack_3b8[10] = '\0';
    acStack_3b8[0xb] = '\0';
    acStack_3b8[0xc] = '\0';
    acStack_3b8[0xd] = '\0';
    acStack_3b8[0xe] = '\0';
    acStack_3b8[0xf] = '\0';
    acStack_3b8[0x10] = '\0';
    acStack_3b8[0x11] = '\0';
    acStack_3b8[0x12] = '\0';
    acStack_3b8[0x13] = '\0';
    acStack_3b8[0x14] = '\0';
    acStack_3b8[0x15] = '\0';
    acStack_3b8[0x16] = '\0';
    acStack_3b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3b8,auStack_398,&lStack_368,2);
    plVar3 = (long *)&UNK_110940108;
    unaff_x23 = acStack_3b8;
    pcVar2 = acStack_3b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940108,pcVar2,pcVar11);
    pcStack_3a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_3a0);
    lVar14 = 0;
    pcVar6 = (char *)auStack_398;
    pcVar9 = pcVar11;
    do {
      if ((&cStack_369)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar5 = plVar15;
  __Unwind_Resume();
  pcVar10 = acStack_440;
  pcStack_3c8 = FUN_1067e80dc;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar11 = pcVar2;
  puStack_400 = unaff_x24;
  pcStack_3f8 = unaff_x23;
  puStack_3f0 = (undefined8 *)pcVar6;
  plStack_3e8 = plVar15;
  pcStack_3e0 = pcVar1;
  plStack_3d8 = plVar12;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x23 = (char *)auStack_420;
    func_0x00010002b838(auStack_420,pcVar1);
    acStack_440[0] = '\0';
    acStack_440[1] = '\0';
    acStack_440[2] = '\0';
    acStack_440[3] = '\0';
    acStack_440[4] = '\0';
    acStack_440[5] = '\0';
    acStack_440[6] = '\0';
    acStack_440[7] = '\0';
    acStack_440[8] = '\0';
    acStack_440[9] = '\0';
    acStack_440[10] = '\0';
    acStack_440[0xb] = '\0';
    acStack_440[0xc] = '\0';
    acStack_440[0xd] = '\0';
    acStack_440[0xe] = '\0';
    acStack_440[0xf] = '\0';
    acStack_440[0x10] = '\0';
    acStack_440[0x11] = '\0';
    acStack_440[0x12] = '\0';
    acStack_440[0x13] = '\0';
    acStack_440[0x14] = '\0';
    acStack_440[0x15] = '\0';
    acStack_440[0x16] = '\0';
    acStack_440[0x17] = '\0';
    func_0x00010007e1e8(acStack_440,auStack_420,&lStack_408,1);
    plVar13 = (long *)&UNK_110940158;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940158,acStack_440,pcVar2);
    puStack_428 = acStack_440;
    func_0x00010007e5dc(&puStack_428);
    pcVar11 = pcVar10;
    pcVar9 = pcVar2;
    pcVar6 = acStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      pcVar11 = pcVar10;
      pcVar9 = pcVar2;
      pcVar6 = acStack_440;
    }
  }
  plVar5 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  _objc_release(plVar3);
  plVar4 = plVar5;
  __Unwind_Resume();
  pcStack_448 = FUN_1067e8250;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar13;
  pcVar1 = pcVar11;
  pcVar2 = pcVar9;
  puStack_480 = unaff_x24;
  pcStack_478 = unaff_x23;
  puStack_470 = (undefined8 *)pcVar6;
  plStack_468 = plVar15;
  plStack_460 = plVar5;
  plStack_458 = plVar3;
  pppuStack_450 = &pppuStack_3d0;
  _objc_retain(plVar13);
  _objc_retain(pcVar11);
  puVar16 = (undefined8 *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_4b8;
    func_0x00010002b838(auStack_4b8,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_4a0,pcVar1);
    acStack_4d8[0] = '\0';
    acStack_4d8[1] = '\0';
    acStack_4d8[2] = '\0';
    acStack_4d8[3] = '\0';
    acStack_4d8[4] = '\0';
    acStack_4d8[5] = '\0';
    acStack_4d8[6] = '\0';
    acStack_4d8[7] = '\0';
    acStack_4d8[8] = '\0';
    acStack_4d8[9] = '\0';
    acStack_4d8[10] = '\0';
    acStack_4d8[0xb] = '\0';
    acStack_4d8[0xc] = '\0';
    acStack_4d8[0xd] = '\0';
    acStack_4d8[0xe] = '\0';
    acStack_4d8[0xf] = '\0';
    acStack_4d8[0x10] = '\0';
    acStack_4d8[0x11] = '\0';
    acStack_4d8[0x12] = '\0';
    acStack_4d8[0x13] = '\0';
    acStack_4d8[0x14] = '\0';
    acStack_4d8[0x15] = '\0';
    acStack_4d8[0x16] = '\0';
    acStack_4d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_4d8,auStack_4b8,&lStack_488,2);
    plVar12 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_4d8;
    pcVar1 = acStack_4d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401a8,pcVar1,pcVar9);
    pcStack_4c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_4c0);
    lVar14 = 0;
    puVar16 = auStack_4b8;
    pcVar2 = pcVar9;
    do {
      if ((&cStack_489)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar11);
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_4a1 < '\0') {
    __ZdlPv(auStack_4b8[0]);
  }
  _objc_release(pcVar11);
  _objc_release(plVar13);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcStack_4e8 = FUN_1067e8480;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar12;
  pcVar6 = pcVar1;
  puStack_520 = unaff_x24;
  pcStack_518 = unaff_x23;
  puStack_510 = puVar16;
  plStack_508 = plVar15;
  pcStack_500 = pcVar11;
  plStack_4f8 = plVar13;
  pppuStack_4f0 = &pppuStack_450;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar11 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_558;
    func_0x00010002b838(auStack_558,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_540,pcVar6);
    acStack_578[0] = '\0';
    acStack_578[1] = '\0';
    acStack_578[2] = '\0';
    acStack_578[3] = '\0';
    acStack_578[4] = '\0';
    acStack_578[5] = '\0';
    acStack_578[6] = '\0';
    acStack_578[7] = '\0';
    acStack_578[8] = '\0';
    acStack_578[9] = '\0';
    acStack_578[10] = '\0';
    acStack_578[0xb] = '\0';
    acStack_578[0xc] = '\0';
    acStack_578[0xd] = '\0';
    acStack_578[0xe] = '\0';
    acStack_578[0xf] = '\0';
    acStack_578[0x10] = '\0';
    acStack_578[0x11] = '\0';
    acStack_578[0x12] = '\0';
    acStack_578[0x13] = '\0';
    acStack_578[0x14] = '\0';
    acStack_578[0x15] = '\0';
    acStack_578[0x16] = '\0';
    acStack_578[0x17] = '\0';
    func_0x00010007e1e8(acStack_578,auStack_558,&lStack_528,2);
    plVar5 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_578;
    pcVar6 = acStack_578;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar6,pcVar2);
    pcStack_560 = unaff_x23;
    func_0x00010007e5dc(&pcStack_560);
    lVar14 = 0;
    pcVar11 = (char *)auStack_558;
    do {
      if ((&cStack_529)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_540 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_541 < '\0') {
    __ZdlPv(auStack_558[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_600;
  pcStack_588 = FUN_1067e86b0;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar5;
  pcVar2 = pcVar6;
  puStack_5c0 = unaff_x24;
  pcStack_5b8 = unaff_x23;
  puStack_5b0 = (undefined8 *)pcVar11;
  plStack_5a8 = plVar15;
  pcStack_5a0 = pcVar1;
  plStack_598 = plVar12;
  pppuStack_590 = &pppuStack_4f0;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_5e0;
    func_0x00010002b838(auStack_5e0,pcVar1);
    acStack_600[0] = '\0';
    acStack_600[1] = '\0';
    acStack_600[2] = '\0';
    acStack_600[3] = '\0';
    acStack_600[4] = '\0';
    acStack_600[5] = '\0';
    acStack_600[6] = '\0';
    acStack_600[7] = '\0';
    acStack_600[8] = '\0';
    acStack_600[9] = '\0';
    acStack_600[10] = '\0';
    acStack_600[0xb] = '\0';
    acStack_600[0xc] = '\0';
    acStack_600[0xd] = '\0';
    acStack_600[0xe] = '\0';
    acStack_600[0xf] = '\0';
    acStack_600[0x10] = '\0';
    acStack_600[0x11] = '\0';
    acStack_600[0x12] = '\0';
    acStack_600[0x13] = '\0';
    acStack_600[0x14] = '\0';
    acStack_600[0x15] = '\0';
    acStack_600[0x16] = '\0';
    acStack_600[0x17] = '\0';
    func_0x00010007e1e8(acStack_600,auStack_5e0,&lStack_5c8,1);
    plVar13 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_600,pcVar6);
    puStack_5e8 = acStack_600;
    func_0x00010007e5dc(&puStack_5e8);
    pcVar2 = pcVar9;
    pcVar11 = acStack_600;
    if (cStack_5c9 < '\0') {
      __ZdlPv(auStack_5e0[0]);
      pcVar2 = pcVar9;
      pcVar11 = acStack_600;
    }
  }
  plVar12 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar4 = alStack_670;
  pcStack_608 = FUN_1067e8824;
  lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = (long **)0x0;
  puStack_630 = (undefined8 *)pcVar11;
  plStack_628 = plVar15;
  plStack_620 = plVar12;
  plStack_618 = plVar5;
  pppuStack_610 = &pppuStack_590;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar13 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_650,pcVar1);
    alStack_670[0] = 0;
    alStack_670[1] = 0;
    alStack_670[2] = 0;
    func_0x00010007e1e8(alStack_670,applStack_650,&lStack_638,1);
    plVar13 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_670,pcVar2);
    pplVar7 = &plStack_658;
    plStack_658 = alStack_670;
    func_0x00010007e5dc();
    pcVar2 = (char *)plVar4;
    plVar15 = alStack_670;
    if (cStack_639 < '\0') {
      pplVar7 = applStack_650[0];
      __ZdlPv();
      pcVar2 = (char *)plVar4;
      plVar15 = alStack_670;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
    return;
  }
  ___stack_chk_fail();
  plStack_658 = plVar15;
  func_0x00010007e5dc(&plStack_658);
  if (cStack_639 < '\0') {
    __ZdlPv(applStack_650[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_678 = FUN_1067e893c;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar13;
  puStack_6b0 = unaff_x24;
  pcStack_6a8 = unaff_x23;
  puStack_6a0 = (undefined8 *)pcVar11;
  plStack_698 = plVar15;
  plStack_690 = plVar12;
  pplStack_688 = pplVar7;
  pppuStack_680 = &pppuStack_610;
  _objc_retain(plVar13);
  if (pplVar8 != (long **)0x0) {
    plVar15 = pplVar8[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_6d0,pcVar1);
    uStack_6f0 = 0;
    uStack_6e8 = 0;
    uStack_6e0 = 0;
    func_0x00010007e1e8(&uStack_6f0,auStack_6d0,&lStack_6b8,1);
    plVar5 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_6f0,pcVar2);
    puStack_6d8 = (undefined1 *)&uStack_6f0;
    func_0x00010007e5dc(&puStack_6d8);
    if (cStack_6b9 < '\0') {
      __ZdlPv(auStack_6d0[0]);
    }
  }
  plVar15 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar12 = plVar15;
  __Unwind_Resume();
  puStack_718 = (undefined1 *)&uStack_730;
  pcStack_6f8 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_730 = 0;
    uStack_728 = 0;
    uStack_720 = 0;
    plStack_710 = plVar15;
    plStack_708 = plVar13;
    pppuStack_700 = &pppuStack_680;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_730,plVar5);
    func_0x00010007e5dc(&puStack_718);
  }
  return;
}



/* Entry: 1067e76ac; end: 1067e78db;  */

void FUN_1067e76ac(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined1 *puStack_698;
  long *plStack_690;
  long *plStack_688;
  undefined8 ***pppuStack_680;
  code *pcStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 *puStack_658;
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined8 *puStack_630;
  char *pcStack_628;
  undefined8 *puStack_620;
  long *plStack_618;
  long *plStack_610;
  long **pplStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  long alStack_5f0 [3];
  long *plStack_5d8;
  long **applStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  undefined8 *puStack_5b0;
  long *plStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  char acStack_580 [24];
  undefined1 *puStack_568;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 *puStack_540;
  char *pcStack_538;
  undefined8 *puStack_530;
  long *plStack_528;
  char *pcStack_520;
  long *plStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  char acStack_4f8 [24];
  char *pcStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  char *pcStack_498;
  undefined8 *puStack_490;
  long *plStack_488;
  char *pcStack_480;
  long *plStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  char acStack_458 [24];
  char *pcStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  char *pcStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3c0 [24];
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  char *pcStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  char *pcStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  char *pcStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_2;
  pcVar1 = param_3;
  pcVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar2 = (char *)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    plVar14 = (long *)&UNK_11093ff78;
    unaff_x23 = acStack_98;
    pcVar1 = acStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093ff78,pcVar1,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar13 = 0;
    pcVar2 = (char *)auStack_78;
    pcVar10 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  plVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  plVar12 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_120;
  pcStack_a8 = FUN_1067e78dc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar14;
  pcVar8 = pcVar1;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar2;
  plStack_c8 = plVar15;
  pcStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar14);
  plVar15 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    plVar4 = (long *)&UNK_11093ffc8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11093ffc8,acStack_120,pcVar1);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar9;
    pcVar10 = pcVar1;
    pcVar2 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar9;
      pcVar10 = pcVar1;
      pcVar2 = acStack_120;
    }
  }
  plVar12 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar3 = plVar12;
  __Unwind_Resume();
  pcVar9 = acStack_1a0;
  pcStack_128 = FUN_1067e7a50;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  pcVar1 = pcVar8;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar2;
  plStack_148 = plVar15;
  plStack_140 = plVar12;
  plStack_138 = plVar14;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar4);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    plVar5 = (long *)&UNK_110940018;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940018,acStack_1a0,pcVar8);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar1 = pcVar9;
    pcVar10 = pcVar8;
    pcVar2 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar1 = pcVar9;
      pcVar10 = pcVar8;
      pcVar2 = acStack_1a0;
    }
  }
  plVar15 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_220;
  pcStack_1a8 = FUN_1067e7bc4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar8 = pcVar1;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar2;
  plStack_1c8 = plVar14;
  plStack_1c0 = plVar15;
  plStack_1b8 = plVar4;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar5);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar2);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    plVar12 = (long *)&UNK_110940068;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940068,acStack_220,pcVar1);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar8 = pcVar9;
    pcVar10 = pcVar1;
    pcVar2 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar8 = pcVar9;
      pcVar10 = pcVar1;
      pcVar2 = acStack_220;
    }
  }
  plVar15 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_2a0;
  pcStack_228 = FUN_1067e7d38;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar12;
  pcVar1 = pcVar8;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar2;
  plStack_248 = plVar14;
  plStack_240 = plVar15;
  plStack_238 = plVar5;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar12);
  plVar14 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)auStack_280;
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    plVar4 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109400b8,acStack_2a0,pcVar8);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar1 = pcVar9;
    pcVar10 = pcVar8;
    pcVar2 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar1 = pcVar9;
      pcVar10 = pcVar8;
      pcVar2 = acStack_2a0;
    }
  }
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcStack_2a8 = FUN_1067e7eac;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar4;
  pcVar8 = pcVar1;
  pcVar9 = pcVar10;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar2;
  plStack_2c8 = plVar14;
  plStack_2c0 = plVar15;
  plStack_2b8 = plVar12;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar4);
  _objc_retain(pcVar1);
  pcVar2 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x24 = auStack_318;
    func_0x00010002b838(auStack_318,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_300,pcVar2);
    acStack_338[0] = '\0';
    acStack_338[1] = '\0';
    acStack_338[2] = '\0';
    acStack_338[3] = '\0';
    acStack_338[4] = '\0';
    acStack_338[5] = '\0';
    acStack_338[6] = '\0';
    acStack_338[7] = '\0';
    acStack_338[8] = '\0';
    acStack_338[9] = '\0';
    acStack_338[10] = '\0';
    acStack_338[0xb] = '\0';
    acStack_338[0xc] = '\0';
    acStack_338[0xd] = '\0';
    acStack_338[0xe] = '\0';
    acStack_338[0xf] = '\0';
    acStack_338[0x10] = '\0';
    acStack_338[0x11] = '\0';
    acStack_338[0x12] = '\0';
    acStack_338[0x13] = '\0';
    acStack_338[0x14] = '\0';
    acStack_338[0x15] = '\0';
    acStack_338[0x16] = '\0';
    acStack_338[0x17] = '\0';
    func_0x00010007e1e8(acStack_338,auStack_318,&lStack_2e8,2);
    plVar5 = (long *)&UNK_110940108;
    unaff_x23 = acStack_338;
    pcVar8 = acStack_338;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940108,pcVar8,pcVar10);
    pcStack_320 = unaff_x23;
    func_0x00010007e5dc(&pcStack_320);
    lVar13 = 0;
    pcVar2 = (char *)auStack_318;
    pcVar9 = pcVar10;
    do {
      if ((&cStack_2e9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar1);
  plVar14 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar4);
  plVar12 = plVar14;
  __Unwind_Resume();
  pcVar11 = acStack_3c0;
  pcStack_348 = FUN_1067e80dc;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar5;
  pcVar10 = pcVar8;
  puStack_380 = unaff_x24;
  pcStack_378 = unaff_x23;
  puStack_370 = (undefined8 *)pcVar2;
  plStack_368 = plVar14;
  pcStack_360 = pcVar1;
  plStack_358 = plVar4;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(plVar5);
  plVar14 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar14 = (long *)plVar12[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_3a0;
    func_0x00010002b838(auStack_3a0,pcVar1);
    acStack_3c0[0] = '\0';
    acStack_3c0[1] = '\0';
    acStack_3c0[2] = '\0';
    acStack_3c0[3] = '\0';
    acStack_3c0[4] = '\0';
    acStack_3c0[5] = '\0';
    acStack_3c0[6] = '\0';
    acStack_3c0[7] = '\0';
    acStack_3c0[8] = '\0';
    acStack_3c0[9] = '\0';
    acStack_3c0[10] = '\0';
    acStack_3c0[0xb] = '\0';
    acStack_3c0[0xc] = '\0';
    acStack_3c0[0xd] = '\0';
    acStack_3c0[0xe] = '\0';
    acStack_3c0[0xf] = '\0';
    acStack_3c0[0x10] = '\0';
    acStack_3c0[0x11] = '\0';
    acStack_3c0[0x12] = '\0';
    acStack_3c0[0x13] = '\0';
    acStack_3c0[0x14] = '\0';
    acStack_3c0[0x15] = '\0';
    acStack_3c0[0x16] = '\0';
    acStack_3c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3c0,auStack_3a0,&lStack_388,1);
    plVar15 = (long *)&UNK_110940158;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940158,acStack_3c0,pcVar8);
    puStack_3a8 = acStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    pcVar10 = pcVar11;
    pcVar9 = pcVar8;
    pcVar2 = acStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      pcVar10 = pcVar11;
      pcVar9 = pcVar8;
      pcVar2 = acStack_3c0;
    }
  }
  plVar4 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar3 = plVar4;
  __Unwind_Resume();
  pcStack_3c8 = FUN_1067e8250;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar15;
  pcVar1 = pcVar10;
  pcVar8 = pcVar9;
  puStack_400 = unaff_x24;
  pcStack_3f8 = unaff_x23;
  puStack_3f0 = (undefined8 *)pcVar2;
  plStack_3e8 = plVar14;
  plStack_3e0 = plVar4;
  plStack_3d8 = plVar5;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(plVar15);
  _objc_retain(pcVar10);
  puVar16 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = auStack_438;
    func_0x00010002b838(auStack_438,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_420,pcVar1);
    acStack_458[0] = '\0';
    acStack_458[1] = '\0';
    acStack_458[2] = '\0';
    acStack_458[3] = '\0';
    acStack_458[4] = '\0';
    acStack_458[5] = '\0';
    acStack_458[6] = '\0';
    acStack_458[7] = '\0';
    acStack_458[8] = '\0';
    acStack_458[9] = '\0';
    acStack_458[10] = '\0';
    acStack_458[0xb] = '\0';
    acStack_458[0xc] = '\0';
    acStack_458[0xd] = '\0';
    acStack_458[0xe] = '\0';
    acStack_458[0xf] = '\0';
    acStack_458[0x10] = '\0';
    acStack_458[0x11] = '\0';
    acStack_458[0x12] = '\0';
    acStack_458[0x13] = '\0';
    acStack_458[0x14] = '\0';
    acStack_458[0x15] = '\0';
    acStack_458[0x16] = '\0';
    acStack_458[0x17] = '\0';
    func_0x00010007e1e8(acStack_458,auStack_438,&lStack_408,2);
    plVar12 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_458;
    pcVar1 = acStack_458;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109401a8,pcVar1,pcVar9);
    pcStack_440 = unaff_x23;
    func_0x00010007e5dc(&pcStack_440);
    lVar13 = 0;
    puVar16 = auStack_438;
    pcVar8 = pcVar9;
    do {
      if ((&cStack_409)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar10);
  plVar14 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(pcVar10);
  _objc_release(plVar15);
  plVar5 = plVar14;
  __Unwind_Resume();
  pcStack_468 = FUN_1067e8480;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar12;
  pcVar2 = pcVar1;
  puStack_4a0 = unaff_x24;
  pcStack_498 = unaff_x23;
  puStack_490 = puVar16;
  plStack_488 = plVar14;
  pcStack_480 = pcVar10;
  plStack_478 = plVar15;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(plVar12);
  _objc_retain(pcVar1);
  pcVar10 = (char *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar14 = (long *)plVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_4d8;
    func_0x00010002b838(auStack_4d8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_4c0,pcVar2);
    acStack_4f8[0] = '\0';
    acStack_4f8[1] = '\0';
    acStack_4f8[2] = '\0';
    acStack_4f8[3] = '\0';
    acStack_4f8[4] = '\0';
    acStack_4f8[5] = '\0';
    acStack_4f8[6] = '\0';
    acStack_4f8[7] = '\0';
    acStack_4f8[8] = '\0';
    acStack_4f8[9] = '\0';
    acStack_4f8[10] = '\0';
    acStack_4f8[0xb] = '\0';
    acStack_4f8[0xc] = '\0';
    acStack_4f8[0xd] = '\0';
    acStack_4f8[0xe] = '\0';
    acStack_4f8[0xf] = '\0';
    acStack_4f8[0x10] = '\0';
    acStack_4f8[0x11] = '\0';
    acStack_4f8[0x12] = '\0';
    acStack_4f8[0x13] = '\0';
    acStack_4f8[0x14] = '\0';
    acStack_4f8[0x15] = '\0';
    acStack_4f8[0x16] = '\0';
    acStack_4f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_4f8,auStack_4d8,&lStack_4a8,2);
    plVar4 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_4f8;
    pcVar2 = acStack_4f8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109401f8,pcVar2,pcVar8);
    pcStack_4e0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_4e0);
    lVar13 = 0;
    pcVar10 = (char *)auStack_4d8;
    do {
      if ((&cStack_4a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar1);
  plVar14 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_4c1 < '\0') {
    __ZdlPv(auStack_4d8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar12);
  plVar5 = plVar14;
  __Unwind_Resume();
  pcVar9 = acStack_580;
  pcStack_508 = FUN_1067e86b0;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar4;
  pcVar8 = pcVar2;
  puStack_540 = unaff_x24;
  pcStack_538 = unaff_x23;
  puStack_530 = (undefined8 *)pcVar10;
  plStack_528 = plVar14;
  pcStack_520 = pcVar1;
  plStack_518 = plVar12;
  pppuStack_510 = &pppuStack_470;
  _objc_retain(plVar4);
  plVar14 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar14 = (long *)plVar5[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_560;
    func_0x00010002b838(auStack_560,pcVar1);
    acStack_580[0] = '\0';
    acStack_580[1] = '\0';
    acStack_580[2] = '\0';
    acStack_580[3] = '\0';
    acStack_580[4] = '\0';
    acStack_580[5] = '\0';
    acStack_580[6] = '\0';
    acStack_580[7] = '\0';
    acStack_580[8] = '\0';
    acStack_580[9] = '\0';
    acStack_580[10] = '\0';
    acStack_580[0xb] = '\0';
    acStack_580[0xc] = '\0';
    acStack_580[0xd] = '\0';
    acStack_580[0xe] = '\0';
    acStack_580[0xf] = '\0';
    acStack_580[0x10] = '\0';
    acStack_580[0x11] = '\0';
    acStack_580[0x12] = '\0';
    acStack_580[0x13] = '\0';
    acStack_580[0x14] = '\0';
    acStack_580[0x15] = '\0';
    acStack_580[0x16] = '\0';
    acStack_580[0x17] = '\0';
    func_0x00010007e1e8(acStack_580,auStack_560,&lStack_548,1);
    plVar15 = (long *)&UNK_110940398;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940398,acStack_580,pcVar2);
    puStack_568 = acStack_580;
    func_0x00010007e5dc(&puStack_568);
    pcVar8 = pcVar9;
    pcVar10 = acStack_580;
    if (cStack_549 < '\0') {
      __ZdlPv(auStack_560[0]);
      pcVar8 = pcVar9;
      pcVar10 = acStack_580;
    }
  }
  plVar12 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar5 = plVar12;
  __Unwind_Resume();
  plVar3 = alStack_5f0;
  pcStack_588 = FUN_1067e8824;
  lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = (long **)0x0;
  puStack_5b0 = (undefined8 *)pcVar10;
  plStack_5a8 = plVar14;
  plStack_5a0 = plVar12;
  plStack_598 = plVar4;
  pppuStack_590 = &pppuStack_510;
  if (plVar5 != (long *)0x0) {
    plVar12 = (long *)plVar5[1];
    pcVar1 = "true";
    if ((int)plVar15 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_5d0,pcVar1);
    alStack_5f0[0] = 0;
    alStack_5f0[1] = 0;
    alStack_5f0[2] = 0;
    func_0x00010007e1e8(alStack_5f0,applStack_5d0,&lStack_5b8,1);
    plVar15 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_5f0,pcVar8);
    pplVar6 = &plStack_5d8;
    plStack_5d8 = alStack_5f0;
    func_0x00010007e5dc();
    pcVar8 = (char *)plVar3;
    plVar14 = alStack_5f0;
    if (cStack_5b9 < '\0') {
      pplVar6 = applStack_5d0[0];
      __ZdlPv();
      pcVar8 = (char *)plVar3;
      plVar14 = alStack_5f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_5d8 = plVar14;
  func_0x00010007e5dc(&plStack_5d8);
  if (cStack_5b9 < '\0') {
    __ZdlPv(applStack_5d0[0]);
  }
  pplVar7 = pplVar6;
  __Unwind_Resume();
  pcStack_5f8 = FUN_1067e893c;
  lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar15;
  puStack_630 = unaff_x24;
  pcStack_628 = unaff_x23;
  puStack_620 = (undefined8 *)pcVar10;
  plStack_618 = plVar14;
  plStack_610 = plVar12;
  pplStack_608 = pplVar6;
  pppuStack_600 = &pppuStack_590;
  _objc_retain(plVar15);
  if (pplVar7 != (long **)0x0) {
    plVar14 = pplVar7[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    func_0x00010002b838(auStack_650,pcVar1);
    uStack_670 = 0;
    uStack_668 = 0;
    uStack_660 = 0;
    func_0x00010007e1e8(&uStack_670,auStack_650,&lStack_638,1);
    plVar4 = (long *)&UNK_110940438;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940438,&uStack_670,pcVar8);
    puStack_658 = (undefined1 *)&uStack_670;
    func_0x00010007e5dc(&puStack_658);
    if (cStack_639 < '\0') {
      __ZdlPv(auStack_650[0]);
    }
  }
  plVar14 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  plVar12 = plVar14;
  __Unwind_Resume();
  puStack_698 = (undefined1 *)&uStack_6b0;
  pcStack_678 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    uStack_6a0 = 0;
    plStack_690 = plVar14;
    plStack_688 = plVar15;
    pppuStack_680 = &pppuStack_600;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_6b0,plVar4);
    func_0x00010007e5dc(&puStack_698);
  }
  return;
}



/* Entry: 1067e78dc; end: 1067e7a4f;  */

void FUN_1067e78dc(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 *puStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  undefined8 ***pppuStack_5e0;
  code *pcStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 *puStack_5b8;
  undefined8 auStack_5b0 [2];
  char cStack_599;
  long lStack_598;
  undefined8 *puStack_590;
  char *pcStack_588;
  undefined8 *puStack_580;
  long *plStack_578;
  long *plStack_570;
  long **pplStack_568;
  undefined8 ***pppuStack_560;
  code *pcStack_558;
  long alStack_550 [3];
  long *plStack_538;
  long **applStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 *puStack_510;
  long *plStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  char acStack_4e0 [24];
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  char *pcStack_498;
  undefined8 *puStack_490;
  long *plStack_488;
  char *pcStack_480;
  long *plStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  char acStack_458 [24];
  char *pcStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  char *pcStack_3f8;
  undefined8 *puStack_3f0;
  long *plStack_3e8;
  char *pcStack_3e0;
  long *plStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  char *pcStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_11093ffc8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11093ffc8,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_100;
  pcStack_88 = FUN_1067e7a50;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar15;
  pcVar2 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    plVar4 = (long *)&UNK_110940018;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940018,acStack_100,pcVar1);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar2 = pcVar6;
    param_4 = pcVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar2 = pcVar6;
      param_4 = pcVar1;
    }
  }
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume();
  pcVar6 = acStack_180;
  pcStack_108 = FUN_1067e7bc4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar4;
  pcVar1 = pcVar2;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar4);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = (char *)auStack_160;
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    plVar15 = (long *)&UNK_110940068;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940068,acStack_180,pcVar2);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar1 = pcVar6;
    param_4 = pcVar2;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar1 = pcVar6;
      param_4 = pcVar2;
    }
  }
  plVar13 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  __Unwind_Resume();
  pcVar6 = acStack_200;
  pcStack_188 = FUN_1067e7d38;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar15;
  pcVar2 = pcVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar15);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_1e0;
    func_0x00010002b838(auStack_1e0,pcVar2);
    acStack_200[0] = '\0';
    acStack_200[1] = '\0';
    acStack_200[2] = '\0';
    acStack_200[3] = '\0';
    acStack_200[4] = '\0';
    acStack_200[5] = '\0';
    acStack_200[6] = '\0';
    acStack_200[7] = '\0';
    acStack_200[8] = '\0';
    acStack_200[9] = '\0';
    acStack_200[10] = '\0';
    acStack_200[0xb] = '\0';
    acStack_200[0xc] = '\0';
    acStack_200[0xd] = '\0';
    acStack_200[0xe] = '\0';
    acStack_200[0xf] = '\0';
    acStack_200[0x10] = '\0';
    acStack_200[0x11] = '\0';
    acStack_200[0x12] = '\0';
    acStack_200[0x13] = '\0';
    acStack_200[0x14] = '\0';
    acStack_200[0x15] = '\0';
    acStack_200[0x16] = '\0';
    acStack_200[0x17] = '\0';
    func_0x00010007e1e8(acStack_200,auStack_1e0,&lStack_1c8,1);
    plVar4 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109400b8,acStack_200,pcVar1);
    puStack_1e8 = acStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    pcVar2 = pcVar6;
    param_4 = pcVar1;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      pcVar2 = pcVar6;
      param_4 = pcVar1;
    }
  }
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume();
  pcStack_208 = FUN_1067e7eac;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar4;
  pcVar1 = pcVar2;
  pcVar11 = param_4;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(plVar4);
  _objc_retain(pcVar2);
  pcVar6 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x24 = auStack_278;
    func_0x00010002b838(auStack_278,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_260,pcVar1);
    acStack_298[0] = '\0';
    acStack_298[1] = '\0';
    acStack_298[2] = '\0';
    acStack_298[3] = '\0';
    acStack_298[4] = '\0';
    acStack_298[5] = '\0';
    acStack_298[6] = '\0';
    acStack_298[7] = '\0';
    acStack_298[8] = '\0';
    acStack_298[9] = '\0';
    acStack_298[10] = '\0';
    acStack_298[0xb] = '\0';
    acStack_298[0xc] = '\0';
    acStack_298[0xd] = '\0';
    acStack_298[0xe] = '\0';
    acStack_298[0xf] = '\0';
    acStack_298[0x10] = '\0';
    acStack_298[0x11] = '\0';
    acStack_298[0x12] = '\0';
    acStack_298[0x13] = '\0';
    acStack_298[0x14] = '\0';
    acStack_298[0x15] = '\0';
    acStack_298[0x16] = '\0';
    acStack_298[0x17] = '\0';
    func_0x00010007e1e8(acStack_298,auStack_278,&lStack_248,2);
    plVar15 = (long *)&UNK_110940108;
    unaff_x23 = acStack_298;
    pcVar1 = acStack_298;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940108,pcVar1,param_4);
    pcStack_280 = unaff_x23;
    func_0x00010007e5dc(&pcStack_280);
    lVar14 = 0;
    pcVar6 = (char *)auStack_278;
    pcVar11 = param_4;
    do {
      if ((&cStack_249)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar2);
  plVar13 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(pcVar2);
  _objc_release(plVar4);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcVar10 = acStack_320;
  pcStack_2a8 = FUN_1067e80dc;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar15;
  pcVar9 = pcVar1;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar6;
  plStack_2c8 = plVar13;
  pcStack_2c0 = pcVar2;
  plStack_2b8 = plVar4;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(plVar15);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_300;
    func_0x00010002b838(auStack_300,pcVar2);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
    plVar12 = (long *)&UNK_110940158;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940158,acStack_320,pcVar1);
    puStack_308 = acStack_320;
    func_0x00010007e5dc(&puStack_308);
    pcVar9 = pcVar10;
    pcVar11 = pcVar1;
    pcVar6 = acStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar1;
      pcVar6 = acStack_320;
    }
  }
  plVar4 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_328 = FUN_1067e8250;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar1 = pcVar9;
  pcVar2 = pcVar11;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = (undefined8 *)pcVar6;
  plStack_348 = plVar13;
  plStack_340 = plVar4;
  plStack_338 = plVar15;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(plVar12);
  _objc_retain(pcVar9);
  puVar16 = (undefined8 *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_398;
    func_0x00010002b838(auStack_398,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_380,pcVar1);
    acStack_3b8[0] = '\0';
    acStack_3b8[1] = '\0';
    acStack_3b8[2] = '\0';
    acStack_3b8[3] = '\0';
    acStack_3b8[4] = '\0';
    acStack_3b8[5] = '\0';
    acStack_3b8[6] = '\0';
    acStack_3b8[7] = '\0';
    acStack_3b8[8] = '\0';
    acStack_3b8[9] = '\0';
    acStack_3b8[10] = '\0';
    acStack_3b8[0xb] = '\0';
    acStack_3b8[0xc] = '\0';
    acStack_3b8[0xd] = '\0';
    acStack_3b8[0xe] = '\0';
    acStack_3b8[0xf] = '\0';
    acStack_3b8[0x10] = '\0';
    acStack_3b8[0x11] = '\0';
    acStack_3b8[0x12] = '\0';
    acStack_3b8[0x13] = '\0';
    acStack_3b8[0x14] = '\0';
    acStack_3b8[0x15] = '\0';
    acStack_3b8[0x16] = '\0';
    acStack_3b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3b8,auStack_398,&lStack_368,2);
    plVar3 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_3b8;
    pcVar1 = acStack_3b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401a8,pcVar1,pcVar11);
    pcStack_3a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_3a0);
    lVar14 = 0;
    puVar16 = auStack_398;
    pcVar2 = pcVar11;
    do {
      if ((&cStack_369)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar9);
  _objc_release(plVar12);
  plVar4 = plVar15;
  __Unwind_Resume();
  pcStack_3c8 = FUN_1067e8480;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar6 = pcVar1;
  puStack_400 = unaff_x24;
  pcStack_3f8 = unaff_x23;
  puStack_3f0 = puVar16;
  plStack_3e8 = plVar15;
  pcStack_3e0 = pcVar9;
  plStack_3d8 = plVar12;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(plVar3);
  _objc_retain(pcVar1);
  pcVar11 = (char *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x24 = auStack_438;
    func_0x00010002b838(auStack_438,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_420,pcVar6);
    acStack_458[0] = '\0';
    acStack_458[1] = '\0';
    acStack_458[2] = '\0';
    acStack_458[3] = '\0';
    acStack_458[4] = '\0';
    acStack_458[5] = '\0';
    acStack_458[6] = '\0';
    acStack_458[7] = '\0';
    acStack_458[8] = '\0';
    acStack_458[9] = '\0';
    acStack_458[10] = '\0';
    acStack_458[0xb] = '\0';
    acStack_458[0xc] = '\0';
    acStack_458[0xd] = '\0';
    acStack_458[0xe] = '\0';
    acStack_458[0xf] = '\0';
    acStack_458[0x10] = '\0';
    acStack_458[0x11] = '\0';
    acStack_458[0x12] = '\0';
    acStack_458[0x13] = '\0';
    acStack_458[0x14] = '\0';
    acStack_458[0x15] = '\0';
    acStack_458[0x16] = '\0';
    acStack_458[0x17] = '\0';
    func_0x00010007e1e8(acStack_458,auStack_438,&lStack_408,2);
    plVar13 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_458;
    pcVar6 = acStack_458;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar6,pcVar2);
    pcStack_440 = unaff_x23;
    func_0x00010007e5dc(&pcStack_440);
    lVar14 = 0;
    pcVar11 = (char *)auStack_438;
    do {
      if ((&cStack_409)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar3);
  plVar12 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_4e0;
  pcStack_468 = FUN_1067e86b0;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar13;
  pcVar2 = pcVar6;
  puStack_4a0 = unaff_x24;
  pcStack_498 = unaff_x23;
  puStack_490 = (undefined8 *)pcVar11;
  plStack_488 = plVar15;
  pcStack_480 = pcVar1;
  plStack_478 = plVar3;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(plVar13);
  plVar15 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x23 = (char *)auStack_4c0;
    func_0x00010002b838(auStack_4c0,pcVar1);
    acStack_4e0[0] = '\0';
    acStack_4e0[1] = '\0';
    acStack_4e0[2] = '\0';
    acStack_4e0[3] = '\0';
    acStack_4e0[4] = '\0';
    acStack_4e0[5] = '\0';
    acStack_4e0[6] = '\0';
    acStack_4e0[7] = '\0';
    acStack_4e0[8] = '\0';
    acStack_4e0[9] = '\0';
    acStack_4e0[10] = '\0';
    acStack_4e0[0xb] = '\0';
    acStack_4e0[0xc] = '\0';
    acStack_4e0[0xd] = '\0';
    acStack_4e0[0xe] = '\0';
    acStack_4e0[0xf] = '\0';
    acStack_4e0[0x10] = '\0';
    acStack_4e0[0x11] = '\0';
    acStack_4e0[0x12] = '\0';
    acStack_4e0[0x13] = '\0';
    acStack_4e0[0x14] = '\0';
    acStack_4e0[0x15] = '\0';
    acStack_4e0[0x16] = '\0';
    acStack_4e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_4e0,auStack_4c0,&lStack_4a8,1);
    plVar4 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_4e0,pcVar6);
    puStack_4c8 = acStack_4e0;
    func_0x00010007e5dc(&puStack_4c8);
    pcVar2 = pcVar9;
    pcVar11 = acStack_4e0;
    if (cStack_4a9 < '\0') {
      __ZdlPv(auStack_4c0[0]);
      pcVar2 = pcVar9;
      pcVar11 = acStack_4e0;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar5 = alStack_550;
  pcStack_4e8 = FUN_1067e8824;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = (long **)0x0;
  puStack_510 = (undefined8 *)pcVar11;
  plStack_508 = plVar15;
  plStack_500 = plVar12;
  plStack_4f8 = plVar13;
  pppuStack_4f0 = &pppuStack_470;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_530,pcVar1);
    alStack_550[0] = 0;
    alStack_550[1] = 0;
    alStack_550[2] = 0;
    func_0x00010007e1e8(alStack_550,applStack_530,&lStack_518,1);
    plVar4 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_550,pcVar2);
    pplVar7 = &plStack_538;
    plStack_538 = alStack_550;
    func_0x00010007e5dc();
    pcVar2 = (char *)plVar5;
    plVar15 = alStack_550;
    if (cStack_519 < '\0') {
      pplVar7 = applStack_530[0];
      __ZdlPv();
      pcVar2 = (char *)plVar5;
      plVar15 = alStack_550;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
    return;
  }
  ___stack_chk_fail();
  plStack_538 = plVar15;
  func_0x00010007e5dc(&plStack_538);
  if (cStack_519 < '\0') {
    __ZdlPv(applStack_530[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_558 = FUN_1067e893c;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar4;
  puStack_590 = unaff_x24;
  pcStack_588 = unaff_x23;
  puStack_580 = (undefined8 *)pcVar11;
  plStack_578 = plVar15;
  plStack_570 = plVar12;
  pplStack_568 = pplVar7;
  pppuStack_560 = &pppuStack_4f0;
  _objc_retain(plVar4);
  if (pplVar8 != (long **)0x0) {
    plVar15 = pplVar8[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    func_0x00010002b838(auStack_5b0,pcVar1);
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    uStack_5c0 = 0;
    func_0x00010007e1e8(&uStack_5d0,auStack_5b0,&lStack_598,1);
    plVar13 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_5d0,pcVar2);
    puStack_5b8 = (undefined1 *)&uStack_5d0;
    func_0x00010007e5dc(&puStack_5b8);
    if (cStack_599 < '\0') {
      __ZdlPv(auStack_5b0[0]);
    }
  }
  plVar15 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar12 = plVar15;
  __Unwind_Resume();
  puStack_5f8 = (undefined1 *)&uStack_610;
  pcStack_5d8 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_610 = 0;
    uStack_608 = 0;
    uStack_600 = 0;
    plStack_5f0 = plVar15;
    plStack_5e8 = plVar4;
    pppuStack_5e0 = &pppuStack_560;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_610,plVar13)
    ;
    func_0x00010007e5dc(&puStack_5f8);
  }
  return;
}



/* Entry: 1067e7a50; end: 1067e7bc3;  */

void FUN_1067e7a50(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 *puStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined8 ***pppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 *puStack_538;
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 *puStack_510;
  char *pcStack_508;
  undefined8 *puStack_500;
  long *plStack_4f8;
  long *plStack_4f0;
  long **pplStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  long alStack_4d0 [3];
  long *plStack_4b8;
  long **applStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 *puStack_490;
  long *plStack_488;
  long *plStack_480;
  long *plStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  char acStack_460 [24];
  undefined1 *puStack_448;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  undefined8 *puStack_420;
  char *pcStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  char *pcStack_400;
  long *plStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3d8 [24];
  char *pcStack_3c0;
  undefined8 auStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  char *pcStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  char *pcStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  undefined8 auStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_110940018;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940018,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_100;
  pcStack_88 = FUN_1067e7bc4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar2 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    plVar5 = (long *)&UNK_110940068;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940068,acStack_100,pcVar1);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar2 = pcVar6;
    param_4 = pcVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar2 = pcVar6;
      param_4 = pcVar1;
    }
  }
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume();
  pcVar6 = acStack_180;
  pcStack_108 = FUN_1067e7d38;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar5;
  pcVar1 = pcVar2;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar5);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_160;
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    plVar15 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109400b8,acStack_180,pcVar2);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar1 = pcVar6;
    param_4 = pcVar2;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar1 = pcVar6;
      param_4 = pcVar2;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  __Unwind_Resume();
  pcStack_188 = FUN_1067e7eac;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar2 = pcVar1;
  pcVar11 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(plVar15);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_1e0,pcVar2);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
    plVar5 = (long *)&UNK_110940108;
    unaff_x23 = acStack_218;
    pcVar2 = acStack_218;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940108,pcVar2,param_4);
    pcStack_200 = unaff_x23;
    func_0x00010007e5dc(&pcStack_200);
    lVar14 = 0;
    pcVar6 = (char *)auStack_1f8;
    pcVar11 = param_4;
    do {
      if ((&cStack_1c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar15);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcVar10 = acStack_2a0;
  pcStack_228 = FUN_1067e80dc;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar9 = pcVar2;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar6;
  plStack_248 = plVar13;
  pcStack_240 = pcVar1;
  plStack_238 = plVar15;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_280;
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    plVar12 = (long *)&UNK_110940158;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940158,acStack_2a0,pcVar2);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar9 = pcVar10;
    pcVar11 = pcVar2;
    pcVar6 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar2;
      pcVar6 = acStack_2a0;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcStack_2a8 = FUN_1067e8250;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar1 = pcVar9;
  pcVar2 = pcVar11;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar6;
  plStack_2c8 = plVar15;
  plStack_2c0 = plVar13;
  plStack_2b8 = plVar5;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(plVar12);
  _objc_retain(pcVar9);
  puVar16 = (undefined8 *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_318;
    func_0x00010002b838(auStack_318,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_300,pcVar1);
    acStack_338[0] = '\0';
    acStack_338[1] = '\0';
    acStack_338[2] = '\0';
    acStack_338[3] = '\0';
    acStack_338[4] = '\0';
    acStack_338[5] = '\0';
    acStack_338[6] = '\0';
    acStack_338[7] = '\0';
    acStack_338[8] = '\0';
    acStack_338[9] = '\0';
    acStack_338[10] = '\0';
    acStack_338[0xb] = '\0';
    acStack_338[0xc] = '\0';
    acStack_338[0xd] = '\0';
    acStack_338[0xe] = '\0';
    acStack_338[0xf] = '\0';
    acStack_338[0x10] = '\0';
    acStack_338[0x11] = '\0';
    acStack_338[0x12] = '\0';
    acStack_338[0x13] = '\0';
    acStack_338[0x14] = '\0';
    acStack_338[0x15] = '\0';
    acStack_338[0x16] = '\0';
    acStack_338[0x17] = '\0';
    func_0x00010007e1e8(acStack_338,auStack_318,&lStack_2e8,2);
    plVar3 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_338;
    pcVar1 = acStack_338;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401a8,pcVar1,pcVar11);
    pcStack_320 = unaff_x23;
    func_0x00010007e5dc(&pcStack_320);
    lVar14 = 0;
    puVar16 = auStack_318;
    pcVar2 = pcVar11;
    do {
      if ((&cStack_2e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_301 < '\0') {
    __ZdlPv(auStack_318[0]);
  }
  _objc_release(pcVar9);
  _objc_release(plVar12);
  plVar5 = plVar15;
  __Unwind_Resume();
  pcStack_348 = FUN_1067e8480;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar6 = pcVar1;
  puStack_380 = unaff_x24;
  pcStack_378 = unaff_x23;
  puStack_370 = puVar16;
  plStack_368 = plVar15;
  pcStack_360 = pcVar9;
  plStack_358 = plVar12;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(plVar3);
  _objc_retain(pcVar1);
  pcVar11 = (char *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x24 = auStack_3b8;
    func_0x00010002b838(auStack_3b8,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_3a0,pcVar6);
    acStack_3d8[0] = '\0';
    acStack_3d8[1] = '\0';
    acStack_3d8[2] = '\0';
    acStack_3d8[3] = '\0';
    acStack_3d8[4] = '\0';
    acStack_3d8[5] = '\0';
    acStack_3d8[6] = '\0';
    acStack_3d8[7] = '\0';
    acStack_3d8[8] = '\0';
    acStack_3d8[9] = '\0';
    acStack_3d8[10] = '\0';
    acStack_3d8[0xb] = '\0';
    acStack_3d8[0xc] = '\0';
    acStack_3d8[0xd] = '\0';
    acStack_3d8[0xe] = '\0';
    acStack_3d8[0xf] = '\0';
    acStack_3d8[0x10] = '\0';
    acStack_3d8[0x11] = '\0';
    acStack_3d8[0x12] = '\0';
    acStack_3d8[0x13] = '\0';
    acStack_3d8[0x14] = '\0';
    acStack_3d8[0x15] = '\0';
    acStack_3d8[0x16] = '\0';
    acStack_3d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3d8,auStack_3b8,&lStack_388,2);
    plVar13 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_3d8;
    pcVar6 = acStack_3d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar6,pcVar2);
    pcStack_3c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_3c0);
    lVar14 = 0;
    pcVar11 = (char *)auStack_3b8;
    do {
      if ((&cStack_389)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_3a1 < '\0') {
    __ZdlPv(auStack_3b8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar3);
  plVar12 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_460;
  pcStack_3e8 = FUN_1067e86b0;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar13;
  pcVar2 = pcVar6;
  puStack_420 = unaff_x24;
  pcStack_418 = unaff_x23;
  puStack_410 = (undefined8 *)pcVar11;
  plStack_408 = plVar15;
  pcStack_400 = pcVar1;
  plStack_3f8 = plVar3;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(plVar13);
  plVar15 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x23 = (char *)auStack_440;
    func_0x00010002b838(auStack_440,pcVar1);
    acStack_460[0] = '\0';
    acStack_460[1] = '\0';
    acStack_460[2] = '\0';
    acStack_460[3] = '\0';
    acStack_460[4] = '\0';
    acStack_460[5] = '\0';
    acStack_460[6] = '\0';
    acStack_460[7] = '\0';
    acStack_460[8] = '\0';
    acStack_460[9] = '\0';
    acStack_460[10] = '\0';
    acStack_460[0xb] = '\0';
    acStack_460[0xc] = '\0';
    acStack_460[0xd] = '\0';
    acStack_460[0xe] = '\0';
    acStack_460[0xf] = '\0';
    acStack_460[0x10] = '\0';
    acStack_460[0x11] = '\0';
    acStack_460[0x12] = '\0';
    acStack_460[0x13] = '\0';
    acStack_460[0x14] = '\0';
    acStack_460[0x15] = '\0';
    acStack_460[0x16] = '\0';
    acStack_460[0x17] = '\0';
    func_0x00010007e1e8(acStack_460,auStack_440,&lStack_428,1);
    plVar5 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_460,pcVar6);
    puStack_448 = acStack_460;
    func_0x00010007e5dc(&puStack_448);
    pcVar2 = pcVar9;
    pcVar11 = acStack_460;
    if (cStack_429 < '\0') {
      __ZdlPv(auStack_440[0]);
      pcVar2 = pcVar9;
      pcVar11 = acStack_460;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar4 = alStack_4d0;
  pcStack_468 = FUN_1067e8824;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = (long **)0x0;
  puStack_490 = (undefined8 *)pcVar11;
  plStack_488 = plVar15;
  plStack_480 = plVar12;
  plStack_478 = plVar13;
  pppuStack_470 = &pppuStack_3f0;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_4b0,pcVar1);
    alStack_4d0[0] = 0;
    alStack_4d0[1] = 0;
    alStack_4d0[2] = 0;
    func_0x00010007e1e8(alStack_4d0,applStack_4b0,&lStack_498,1);
    plVar5 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_4d0,pcVar2);
    pplVar7 = &plStack_4b8;
    plStack_4b8 = alStack_4d0;
    func_0x00010007e5dc();
    pcVar2 = (char *)plVar4;
    plVar15 = alStack_4d0;
    if (cStack_499 < '\0') {
      pplVar7 = applStack_4b0[0];
      __ZdlPv();
      pcVar2 = (char *)plVar4;
      plVar15 = alStack_4d0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return;
  }
  ___stack_chk_fail();
  plStack_4b8 = plVar15;
  func_0x00010007e5dc(&plStack_4b8);
  if (cStack_499 < '\0') {
    __ZdlPv(applStack_4b0[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_4d8 = FUN_1067e893c;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar5;
  puStack_510 = unaff_x24;
  pcStack_508 = unaff_x23;
  puStack_500 = (undefined8 *)pcVar11;
  plStack_4f8 = plVar15;
  plStack_4f0 = plVar12;
  pplStack_4e8 = pplVar7;
  pppuStack_4e0 = &pppuStack_470;
  _objc_retain(plVar5);
  if (pplVar8 != (long **)0x0) {
    plVar15 = pplVar8[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    func_0x00010002b838(auStack_530,pcVar1);
    uStack_550 = 0;
    uStack_548 = 0;
    uStack_540 = 0;
    func_0x00010007e1e8(&uStack_550,auStack_530,&lStack_518,1);
    plVar13 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_550,pcVar2);
    puStack_538 = (undefined1 *)&uStack_550;
    func_0x00010007e5dc(&puStack_538);
    if (cStack_519 < '\0') {
      __ZdlPv(auStack_530[0]);
    }
  }
  plVar15 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar12 = plVar15;
  __Unwind_Resume();
  puStack_578 = (undefined1 *)&uStack_590;
  pcStack_558 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_590 = 0;
    uStack_588 = 0;
    uStack_580 = 0;
    plStack_570 = plVar15;
    plStack_568 = plVar5;
    pppuStack_560 = &pppuStack_4e0;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_590,plVar13)
    ;
    func_0x00010007e5dc(&puStack_578);
  }
  return;
}



/* Entry: 1067e7bc4; end: 1067e7d37;  */

void FUN_1067e7bc4(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 *puStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 *puStack_4b8;
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  undefined8 *puStack_490;
  char *pcStack_488;
  undefined8 *puStack_480;
  long *plStack_478;
  long *plStack_470;
  long **pplStack_468;
  undefined8 ***pppuStack_460;
  code *pcStack_458;
  long alStack_450 [3];
  long *plStack_438;
  long **applStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 *puStack_410;
  long *plStack_408;
  long *plStack_400;
  long *plStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  char acStack_3e0 [24];
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  char *pcStack_398;
  undefined8 *puStack_390;
  long *plStack_388;
  char *pcStack_380;
  long *plStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  char acStack_358 [24];
  char *pcStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  char *pcStack_2e0;
  long *plStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_110940068;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940068,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_100;
  pcStack_88 = FUN_1067e7d38;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar15;
  pcVar2 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    plVar4 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109400b8,acStack_100,pcVar1);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar2 = pcVar6;
    param_4 = pcVar1;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar2 = pcVar6;
      param_4 = pcVar1;
    }
  }
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  __Unwind_Resume();
  pcStack_108 = FUN_1067e7eac;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar4;
  pcVar1 = pcVar2;
  pcVar11 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar4);
  _objc_retain(pcVar2);
  pcVar6 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
    plVar15 = (long *)&UNK_110940108;
    unaff_x23 = acStack_198;
    pcVar1 = acStack_198;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940108,pcVar1,param_4);
    pcStack_180 = unaff_x23;
    func_0x00010007e5dc(&pcStack_180);
    lVar14 = 0;
    pcVar6 = (char *)auStack_178;
    pcVar11 = param_4;
    do {
      if ((&cStack_149)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar2);
  plVar13 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar2);
  _objc_release(plVar4);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcVar10 = acStack_220;
  pcStack_1a8 = FUN_1067e80dc;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar15;
  pcVar9 = pcVar1;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar6;
  plStack_1c8 = plVar13;
  pcStack_1c0 = pcVar2;
  plStack_1b8 = plVar4;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(plVar15);
  plVar13 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar13 = (long *)plVar3[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar2);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    plVar12 = (long *)&UNK_110940158;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940158,acStack_220,pcVar1);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar9 = pcVar10;
    pcVar11 = pcVar1;
    pcVar6 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar1;
      pcVar6 = acStack_220;
    }
  }
  plVar4 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_228 = FUN_1067e8250;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar1 = pcVar9;
  pcVar2 = pcVar11;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar6;
  plStack_248 = plVar13;
  plStack_240 = plVar4;
  plStack_238 = plVar15;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(plVar12);
  _objc_retain(pcVar9);
  puVar16 = (undefined8 *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_298;
    func_0x00010002b838(auStack_298,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    plVar3 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_2b8;
    pcVar1 = acStack_2b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401a8,pcVar1,pcVar11);
    pcStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar14 = 0;
    puVar16 = auStack_298;
    pcVar2 = pcVar11;
    do {
      if ((&cStack_269)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(pcVar9);
  _objc_release(plVar12);
  plVar4 = plVar15;
  __Unwind_Resume();
  pcStack_2c8 = FUN_1067e8480;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar6 = pcVar1;
  puStack_300 = unaff_x24;
  pcStack_2f8 = unaff_x23;
  puStack_2f0 = puVar16;
  plStack_2e8 = plVar15;
  pcStack_2e0 = pcVar9;
  plStack_2d8 = plVar12;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(plVar3);
  _objc_retain(pcVar1);
  pcVar11 = (char *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_320,pcVar6);
    acStack_358[0] = '\0';
    acStack_358[1] = '\0';
    acStack_358[2] = '\0';
    acStack_358[3] = '\0';
    acStack_358[4] = '\0';
    acStack_358[5] = '\0';
    acStack_358[6] = '\0';
    acStack_358[7] = '\0';
    acStack_358[8] = '\0';
    acStack_358[9] = '\0';
    acStack_358[10] = '\0';
    acStack_358[0xb] = '\0';
    acStack_358[0xc] = '\0';
    acStack_358[0xd] = '\0';
    acStack_358[0xe] = '\0';
    acStack_358[0xf] = '\0';
    acStack_358[0x10] = '\0';
    acStack_358[0x11] = '\0';
    acStack_358[0x12] = '\0';
    acStack_358[0x13] = '\0';
    acStack_358[0x14] = '\0';
    acStack_358[0x15] = '\0';
    acStack_358[0x16] = '\0';
    acStack_358[0x17] = '\0';
    func_0x00010007e1e8(acStack_358,auStack_338,&lStack_308,2);
    plVar13 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_358;
    pcVar6 = acStack_358;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar6,pcVar2);
    pcStack_340 = unaff_x23;
    func_0x00010007e5dc(&pcStack_340);
    lVar14 = 0;
    pcVar11 = (char *)auStack_338;
    do {
      if ((&cStack_309)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_321 < '\0') {
    __ZdlPv(auStack_338[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar3);
  plVar12 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_3e0;
  pcStack_368 = FUN_1067e86b0;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar13;
  pcVar2 = pcVar6;
  puStack_3a0 = unaff_x24;
  pcStack_398 = unaff_x23;
  puStack_390 = (undefined8 *)pcVar11;
  plStack_388 = plVar15;
  pcStack_380 = pcVar1;
  plStack_378 = plVar3;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(plVar13);
  plVar15 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x23 = (char *)auStack_3c0;
    func_0x00010002b838(auStack_3c0,pcVar1);
    acStack_3e0[0] = '\0';
    acStack_3e0[1] = '\0';
    acStack_3e0[2] = '\0';
    acStack_3e0[3] = '\0';
    acStack_3e0[4] = '\0';
    acStack_3e0[5] = '\0';
    acStack_3e0[6] = '\0';
    acStack_3e0[7] = '\0';
    acStack_3e0[8] = '\0';
    acStack_3e0[9] = '\0';
    acStack_3e0[10] = '\0';
    acStack_3e0[0xb] = '\0';
    acStack_3e0[0xc] = '\0';
    acStack_3e0[0xd] = '\0';
    acStack_3e0[0xe] = '\0';
    acStack_3e0[0xf] = '\0';
    acStack_3e0[0x10] = '\0';
    acStack_3e0[0x11] = '\0';
    acStack_3e0[0x12] = '\0';
    acStack_3e0[0x13] = '\0';
    acStack_3e0[0x14] = '\0';
    acStack_3e0[0x15] = '\0';
    acStack_3e0[0x16] = '\0';
    acStack_3e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_3e0,auStack_3c0,&lStack_3a8,1);
    plVar4 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_3e0,pcVar6);
    puStack_3c8 = acStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    pcVar2 = pcVar9;
    pcVar11 = acStack_3e0;
    if (cStack_3a9 < '\0') {
      __ZdlPv(auStack_3c0[0]);
      pcVar2 = pcVar9;
      pcVar11 = acStack_3e0;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar5 = alStack_450;
  pcStack_3e8 = FUN_1067e8824;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = (long **)0x0;
  puStack_410 = (undefined8 *)pcVar11;
  plStack_408 = plVar15;
  plStack_400 = plVar12;
  plStack_3f8 = plVar13;
  pppuStack_3f0 = &pppuStack_370;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_430,pcVar1);
    alStack_450[0] = 0;
    alStack_450[1] = 0;
    alStack_450[2] = 0;
    func_0x00010007e1e8(alStack_450,applStack_430,&lStack_418,1);
    plVar4 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_450,pcVar2);
    pplVar7 = &plStack_438;
    plStack_438 = alStack_450;
    func_0x00010007e5dc();
    pcVar2 = (char *)plVar5;
    plVar15 = alStack_450;
    if (cStack_419 < '\0') {
      pplVar7 = applStack_430[0];
      __ZdlPv();
      pcVar2 = (char *)plVar5;
      plVar15 = alStack_450;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return;
  }
  ___stack_chk_fail();
  plStack_438 = plVar15;
  func_0x00010007e5dc(&plStack_438);
  if (cStack_419 < '\0') {
    __ZdlPv(applStack_430[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_458 = FUN_1067e893c;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar4;
  puStack_490 = unaff_x24;
  pcStack_488 = unaff_x23;
  puStack_480 = (undefined8 *)pcVar11;
  plStack_478 = plVar15;
  plStack_470 = plVar12;
  pplStack_468 = pplVar7;
  pppuStack_460 = &pppuStack_3f0;
  _objc_retain(plVar4);
  if (pplVar8 != (long **)0x0) {
    plVar15 = pplVar8[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    func_0x00010002b838(auStack_4b0,pcVar1);
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    func_0x00010007e1e8(&uStack_4d0,auStack_4b0,&lStack_498,1);
    plVar13 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_4d0,pcVar2);
    puStack_4b8 = (undefined1 *)&uStack_4d0;
    func_0x00010007e5dc(&puStack_4b8);
    if (cStack_499 < '\0') {
      __ZdlPv(auStack_4b0[0]);
    }
  }
  plVar15 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar12 = plVar15;
  __Unwind_Resume();
  puStack_4f8 = (undefined1 *)&uStack_510;
  pcStack_4d8 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_510 = 0;
    uStack_508 = 0;
    uStack_500 = 0;
    plStack_4f0 = plVar15;
    plStack_4e8 = plVar4;
    pppuStack_4e0 = &pppuStack_460;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_510,plVar13)
    ;
    func_0x00010007e5dc(&puStack_4f8);
  }
  return;
}



/* Entry: 1067e7d38; end: 1067e7eab;  */

void FUN_1067e7d38(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 *puStack_478;
  long *plStack_470;
  long *plStack_468;
  undefined8 ***pppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 *puStack_438;
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 *puStack_410;
  char *pcStack_408;
  undefined8 *puStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  long **pplStack_3e8;
  undefined8 ***pppuStack_3e0;
  code *pcStack_3d8;
  long alStack_3d0 [3];
  long *plStack_3b8;
  long **applStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 *puStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  char acStack_360 [24];
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  char *pcStack_318;
  undefined8 *puStack_310;
  long *plStack_308;
  char *pcStack_300;
  long *plStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  char *pcStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  char *pcStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_238 [24];
  char *pcStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_1109400b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109400b8,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1067e7eac;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar15;
  pcVar2 = pcVar1;
  pcVar11 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  _objc_retain(pcVar1);
  pcVar6 = (char *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    plVar5 = (long *)&UNK_110940108;
    unaff_x23 = acStack_118;
    pcVar2 = acStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940108,pcVar2,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar14 = 0;
    pcVar6 = (char *)auStack_f8;
    pcVar11 = param_4;
    do {
      if ((&cStack_c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar13 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar15);
  plVar3 = plVar13;
  __Unwind_Resume();
  pcVar10 = acStack_1a0;
  pcStack_128 = FUN_1067e80dc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar9 = pcVar2;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar6;
  plStack_148 = plVar13;
  pcStack_140 = pcVar1;
  plStack_138 = plVar15;
  ppuStack_130 = &puStack_90;
  _objc_retain(plVar5);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    plVar12 = (long *)&UNK_110940158;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940158,acStack_1a0,pcVar2);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar9 = pcVar10;
    pcVar11 = pcVar2;
    pcVar6 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar2;
      pcVar6 = acStack_1a0;
    }
  }
  plVar13 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar4 = plVar13;
  __Unwind_Resume();
  pcStack_1a8 = FUN_1067e8250;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar12;
  pcVar1 = pcVar9;
  pcVar2 = pcVar11;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar6;
  plStack_1c8 = plVar15;
  plStack_1c0 = plVar13;
  plStack_1b8 = plVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(plVar12);
  _objc_retain(pcVar9);
  puVar16 = (undefined8 *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_200,pcVar1);
    acStack_238[0] = '\0';
    acStack_238[1] = '\0';
    acStack_238[2] = '\0';
    acStack_238[3] = '\0';
    acStack_238[4] = '\0';
    acStack_238[5] = '\0';
    acStack_238[6] = '\0';
    acStack_238[7] = '\0';
    acStack_238[8] = '\0';
    acStack_238[9] = '\0';
    acStack_238[10] = '\0';
    acStack_238[0xb] = '\0';
    acStack_238[0xc] = '\0';
    acStack_238[0xd] = '\0';
    acStack_238[0xe] = '\0';
    acStack_238[0xf] = '\0';
    acStack_238[0x10] = '\0';
    acStack_238[0x11] = '\0';
    acStack_238[0x12] = '\0';
    acStack_238[0x13] = '\0';
    acStack_238[0x14] = '\0';
    acStack_238[0x15] = '\0';
    acStack_238[0x16] = '\0';
    acStack_238[0x17] = '\0';
    func_0x00010007e1e8(acStack_238,auStack_218,&lStack_1e8,2);
    plVar3 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_238;
    pcVar1 = acStack_238;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401a8,pcVar1,pcVar11);
    pcStack_220 = unaff_x23;
    func_0x00010007e5dc(&pcStack_220);
    lVar14 = 0;
    puVar16 = auStack_218;
    pcVar2 = pcVar11;
    do {
      if ((&cStack_1e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar9);
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(pcVar9);
  _objc_release(plVar12);
  plVar5 = plVar15;
  __Unwind_Resume();
  pcStack_248 = FUN_1067e8480;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar6 = pcVar1;
  puStack_280 = unaff_x24;
  pcStack_278 = unaff_x23;
  puStack_270 = puVar16;
  plStack_268 = plVar15;
  pcStack_260 = pcVar9;
  plStack_258 = plVar12;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(plVar3);
  _objc_retain(pcVar1);
  pcVar11 = (char *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)plVar5[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,pcVar6);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar6 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_2a0,pcVar6);
    acStack_2d8[0] = '\0';
    acStack_2d8[1] = '\0';
    acStack_2d8[2] = '\0';
    acStack_2d8[3] = '\0';
    acStack_2d8[4] = '\0';
    acStack_2d8[5] = '\0';
    acStack_2d8[6] = '\0';
    acStack_2d8[7] = '\0';
    acStack_2d8[8] = '\0';
    acStack_2d8[9] = '\0';
    acStack_2d8[10] = '\0';
    acStack_2d8[0xb] = '\0';
    acStack_2d8[0xc] = '\0';
    acStack_2d8[0xd] = '\0';
    acStack_2d8[0xe] = '\0';
    acStack_2d8[0xf] = '\0';
    acStack_2d8[0x10] = '\0';
    acStack_2d8[0x11] = '\0';
    acStack_2d8[0x12] = '\0';
    acStack_2d8[0x13] = '\0';
    acStack_2d8[0x14] = '\0';
    acStack_2d8[0x15] = '\0';
    acStack_2d8[0x16] = '\0';
    acStack_2d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2d8,auStack_2b8,&lStack_288,2);
    plVar13 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_2d8;
    pcVar6 = acStack_2d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar6,pcVar2);
    pcStack_2c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_2c0);
    lVar14 = 0;
    pcVar11 = (char *)auStack_2b8;
    do {
      if ((&cStack_289)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar1);
  plVar15 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar3);
  plVar12 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_360;
  pcStack_2e8 = FUN_1067e86b0;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar13;
  pcVar2 = pcVar6;
  puStack_320 = unaff_x24;
  pcStack_318 = unaff_x23;
  puStack_310 = (undefined8 *)pcVar11;
  plStack_308 = plVar15;
  pcStack_300 = pcVar1;
  plStack_2f8 = plVar3;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(plVar13);
  plVar15 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x23 = (char *)auStack_340;
    func_0x00010002b838(auStack_340,pcVar1);
    acStack_360[0] = '\0';
    acStack_360[1] = '\0';
    acStack_360[2] = '\0';
    acStack_360[3] = '\0';
    acStack_360[4] = '\0';
    acStack_360[5] = '\0';
    acStack_360[6] = '\0';
    acStack_360[7] = '\0';
    acStack_360[8] = '\0';
    acStack_360[9] = '\0';
    acStack_360[10] = '\0';
    acStack_360[0xb] = '\0';
    acStack_360[0xc] = '\0';
    acStack_360[0xd] = '\0';
    acStack_360[0xe] = '\0';
    acStack_360[0xf] = '\0';
    acStack_360[0x10] = '\0';
    acStack_360[0x11] = '\0';
    acStack_360[0x12] = '\0';
    acStack_360[0x13] = '\0';
    acStack_360[0x14] = '\0';
    acStack_360[0x15] = '\0';
    acStack_360[0x16] = '\0';
    acStack_360[0x17] = '\0';
    func_0x00010007e1e8(acStack_360,auStack_340,&lStack_328,1);
    plVar5 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_360,pcVar6);
    puStack_348 = acStack_360;
    func_0x00010007e5dc(&puStack_348);
    pcVar2 = pcVar9;
    pcVar11 = acStack_360;
    if (cStack_329 < '\0') {
      __ZdlPv(auStack_340[0]);
      pcVar2 = pcVar9;
      pcVar11 = acStack_360;
    }
  }
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar3 = plVar12;
  __Unwind_Resume();
  plVar4 = alStack_3d0;
  pcStack_368 = FUN_1067e8824;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar7 = (long **)0x0;
  puStack_390 = (undefined8 *)pcVar11;
  plStack_388 = plVar15;
  plStack_380 = plVar12;
  plStack_378 = plVar13;
  pppuStack_370 = &pppuStack_2f0;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_3b0,pcVar1);
    alStack_3d0[0] = 0;
    alStack_3d0[1] = 0;
    alStack_3d0[2] = 0;
    func_0x00010007e1e8(alStack_3d0,applStack_3b0,&lStack_398,1);
    plVar5 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109403e8,alStack_3d0,pcVar2);
    pplVar7 = &plStack_3b8;
    plStack_3b8 = alStack_3d0;
    func_0x00010007e5dc();
    pcVar2 = (char *)plVar4;
    plVar15 = alStack_3d0;
    if (cStack_399 < '\0') {
      pplVar7 = applStack_3b0[0];
      __ZdlPv();
      pcVar2 = (char *)plVar4;
      plVar15 = alStack_3d0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  plStack_3b8 = plVar15;
  func_0x00010007e5dc(&plStack_3b8);
  if (cStack_399 < '\0') {
    __ZdlPv(applStack_3b0[0]);
  }
  pplVar8 = pplVar7;
  __Unwind_Resume();
  pcStack_3d8 = FUN_1067e893c;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar5;
  puStack_410 = unaff_x24;
  pcStack_408 = unaff_x23;
  puStack_400 = (undefined8 *)pcVar11;
  plStack_3f8 = plVar15;
  plStack_3f0 = plVar12;
  pplStack_3e8 = pplVar7;
  pppuStack_3e0 = &pppuStack_370;
  _objc_retain(plVar5);
  if (pplVar8 != (long **)0x0) {
    plVar15 = pplVar8[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    func_0x00010002b838(auStack_430,pcVar1);
    uStack_450 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    func_0x00010007e1e8(&uStack_450,auStack_430,&lStack_418,1);
    plVar13 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_450,pcVar2);
    puStack_438 = (undefined1 *)&uStack_450;
    func_0x00010007e5dc(&puStack_438);
    if (cStack_419 < '\0') {
      __ZdlPv(auStack_430[0]);
    }
  }
  plVar15 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar12 = plVar15;
  __Unwind_Resume();
  puStack_478 = (undefined1 *)&uStack_490;
  pcStack_458 = FUN_1067e8ab0;
  if (plVar12 != (long *)0x0) {
    uStack_490 = 0;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_470 = plVar15;
    plStack_468 = plVar5;
    pppuStack_460 = &pppuStack_3e0;
    (**(code **)(*(long *)plVar12[1] + 0x18))((long *)plVar12[1],&UNK_110940488,&uStack_490,plVar13)
    ;
    func_0x00010007e5dc(&puStack_478);
  }
  return;
}



/* Entry: 1067e7eac; end: 1067e80db;  */

void FUN_1067e7eac(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 *puStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  undefined8 ***pppuStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 *puStack_3b8;
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 *puStack_390;
  char *pcStack_388;
  undefined8 *puStack_380;
  long *plStack_378;
  long *plStack_370;
  long **pplStack_368;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  long alStack_350 [3];
  long *plStack_338;
  long **applStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined8 *puStack_310;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2e0 [24];
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  char *pcStack_298;
  undefined8 *puStack_290;
  long *plStack_288;
  char *pcStack_280;
  long *plStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  char acStack_258 [24];
  char *pcStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  char *pcStack_1e0;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  char *pcStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_2;
  pcVar1 = param_3;
  pcVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar2 = (char *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    plVar14 = (long *)&UNK_110940108;
    unaff_x23 = acStack_98;
    pcVar1 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940108,pcVar1,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    pcVar2 = (char *)auStack_78;
    pcVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  plVar11 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_120;
  pcStack_a8 = FUN_1067e80dc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar14;
  pcVar8 = pcVar1;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar2;
  plStack_c8 = plVar13;
  pcStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar14);
  plVar13 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar13 = (long *)plVar11[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    plVar7 = (long *)&UNK_110940158;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940158,acStack_120,pcVar1);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar9;
    pcVar10 = pcVar1;
    pcVar2 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar9;
      pcVar10 = pcVar1;
      pcVar2 = acStack_120;
    }
  }
  plVar11 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  _objc_release(plVar14);
  plVar3 = plVar11;
  __Unwind_Resume();
  pcStack_128 = FUN_1067e8250;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar7;
  pcVar1 = pcVar8;
  pcVar9 = pcVar10;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar2;
  plStack_148 = plVar13;
  plStack_140 = plVar11;
  plStack_138 = plVar14;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar7);
  _objc_retain(pcVar8);
  puVar15 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar14 = (long *)plVar3[1];
    _objc_retain(plVar7);
    if (plVar7 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar7;
      _objc_retainAutorelease(plVar7);
      func_0x00010bdc3520();
    }
    _objc_release(plVar7);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
    plVar4 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_1b8;
    pcVar1 = acStack_1b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109401a8,pcVar1,pcVar10);
    pcStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar12 = 0;
    puVar15 = auStack_198;
    pcVar9 = pcVar10;
    do {
      if ((&cStack_169)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  plVar14 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar8);
  _objc_release(plVar7);
  plVar11 = plVar14;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1067e8480;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar4;
  pcVar2 = pcVar1;
  puStack_200 = unaff_x24;
  pcStack_1f8 = unaff_x23;
  puStack_1f0 = puVar15;
  plStack_1e8 = plVar14;
  pcStack_1e0 = pcVar8;
  plStack_1d8 = plVar7;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(plVar4);
  _objc_retain(pcVar1);
  pcVar10 = (char *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar14 = (long *)plVar11[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x24 = auStack_238;
    func_0x00010002b838(auStack_238,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_220,pcVar2);
    acStack_258[0] = '\0';
    acStack_258[1] = '\0';
    acStack_258[2] = '\0';
    acStack_258[3] = '\0';
    acStack_258[4] = '\0';
    acStack_258[5] = '\0';
    acStack_258[6] = '\0';
    acStack_258[7] = '\0';
    acStack_258[8] = '\0';
    acStack_258[9] = '\0';
    acStack_258[10] = '\0';
    acStack_258[0xb] = '\0';
    acStack_258[0xc] = '\0';
    acStack_258[0xd] = '\0';
    acStack_258[0xe] = '\0';
    acStack_258[0xf] = '\0';
    acStack_258[0x10] = '\0';
    acStack_258[0x11] = '\0';
    acStack_258[0x12] = '\0';
    acStack_258[0x13] = '\0';
    acStack_258[0x14] = '\0';
    acStack_258[0x15] = '\0';
    acStack_258[0x16] = '\0';
    acStack_258[0x17] = '\0';
    func_0x00010007e1e8(acStack_258,auStack_238,&lStack_208,2);
    plVar13 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_258;
    pcVar2 = acStack_258;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109401f8,pcVar2,pcVar9);
    pcStack_240 = unaff_x23;
    func_0x00010007e5dc(&pcStack_240);
    lVar12 = 0;
    pcVar10 = (char *)auStack_238;
    do {
      if ((&cStack_209)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar1);
  plVar14 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar4);
  plVar11 = plVar14;
  __Unwind_Resume();
  pcVar9 = acStack_2e0;
  pcStack_268 = FUN_1067e86b0;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar13;
  pcVar8 = pcVar2;
  puStack_2a0 = unaff_x24;
  pcStack_298 = unaff_x23;
  puStack_290 = (undefined8 *)pcVar10;
  plStack_288 = plVar14;
  pcStack_280 = pcVar1;
  plStack_278 = plVar4;
  pppuStack_270 = &pppuStack_1d0;
  _objc_retain(plVar13);
  plVar14 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar14 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x23 = (char *)auStack_2c0;
    func_0x00010002b838(auStack_2c0,pcVar1);
    acStack_2e0[0] = '\0';
    acStack_2e0[1] = '\0';
    acStack_2e0[2] = '\0';
    acStack_2e0[3] = '\0';
    acStack_2e0[4] = '\0';
    acStack_2e0[5] = '\0';
    acStack_2e0[6] = '\0';
    acStack_2e0[7] = '\0';
    acStack_2e0[8] = '\0';
    acStack_2e0[9] = '\0';
    acStack_2e0[10] = '\0';
    acStack_2e0[0xb] = '\0';
    acStack_2e0[0xc] = '\0';
    acStack_2e0[0xd] = '\0';
    acStack_2e0[0xe] = '\0';
    acStack_2e0[0xf] = '\0';
    acStack_2e0[0x10] = '\0';
    acStack_2e0[0x11] = '\0';
    acStack_2e0[0x12] = '\0';
    acStack_2e0[0x13] = '\0';
    acStack_2e0[0x14] = '\0';
    acStack_2e0[0x15] = '\0';
    acStack_2e0[0x16] = '\0';
    acStack_2e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2e0,auStack_2c0,&lStack_2a8,1);
    plVar7 = (long *)&UNK_110940398;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940398,acStack_2e0,pcVar2);
    puStack_2c8 = acStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    pcVar8 = pcVar9;
    pcVar10 = acStack_2e0;
    if (cStack_2a9 < '\0') {
      __ZdlPv(auStack_2c0[0]);
      pcVar8 = pcVar9;
      pcVar10 = acStack_2e0;
    }
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar4 = plVar11;
  __Unwind_Resume();
  plVar3 = alStack_350;
  pcStack_2e8 = FUN_1067e8824;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  puStack_310 = (undefined8 *)pcVar10;
  plStack_308 = plVar14;
  plStack_300 = plVar11;
  plStack_2f8 = plVar13;
  pppuStack_2f0 = &pppuStack_270;
  if (plVar4 != (long *)0x0) {
    plVar11 = (long *)plVar4[1];
    pcVar1 = "true";
    if ((int)plVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_330,pcVar1);
    alStack_350[0] = 0;
    alStack_350[1] = 0;
    alStack_350[2] = 0;
    func_0x00010007e1e8(alStack_350,applStack_330,&lStack_318,1);
    plVar7 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109403e8,alStack_350,pcVar8);
    pplVar5 = &plStack_338;
    plStack_338 = alStack_350;
    func_0x00010007e5dc();
    pcVar8 = (char *)plVar3;
    plVar14 = alStack_350;
    if (cStack_319 < '\0') {
      pplVar5 = applStack_330[0];
      __ZdlPv();
      pcVar8 = (char *)plVar3;
      plVar14 = alStack_350;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  plStack_338 = plVar14;
  func_0x00010007e5dc(&plStack_338);
  if (cStack_319 < '\0') {
    __ZdlPv(applStack_330[0]);
  }
  pplVar6 = pplVar5;
  __Unwind_Resume();
  pcStack_358 = FUN_1067e893c;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar7;
  puStack_390 = unaff_x24;
  pcStack_388 = unaff_x23;
  puStack_380 = (undefined8 *)pcVar10;
  plStack_378 = plVar14;
  plStack_370 = plVar11;
  pplStack_368 = pplVar5;
  pppuStack_360 = &pppuStack_2f0;
  _objc_retain(plVar7);
  if (pplVar6 != (long **)0x0) {
    plVar14 = pplVar6[1];
    _objc_retain(plVar7);
    if (plVar7 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar7;
      _objc_retainAutorelease(plVar7);
      func_0x00010bdc3520();
    }
    _objc_release(plVar7);
    func_0x00010002b838(auStack_3b0,pcVar1);
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    func_0x00010007e1e8(&uStack_3d0,auStack_3b0,&lStack_398,1);
    plVar13 = (long *)&UNK_110940438;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110940438,&uStack_3d0,pcVar8);
    puStack_3b8 = (undefined1 *)&uStack_3d0;
    func_0x00010007e5dc(&puStack_3b8);
    if (cStack_399 < '\0') {
      __ZdlPv(auStack_3b0[0]);
    }
  }
  plVar14 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar7);
  _objc_release(plVar7);
  plVar11 = plVar14;
  __Unwind_Resume();
  puStack_3f8 = (undefined1 *)&uStack_410;
  pcStack_3d8 = FUN_1067e8ab0;
  if (plVar11 != (long *)0x0) {
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 0;
    plStack_3f0 = plVar14;
    plStack_3e8 = plVar7;
    pppuStack_3e0 = &pppuStack_360;
    (**(code **)(*(long *)plVar11[1] + 0x18))((long *)plVar11[1],&UNK_110940488,&uStack_410,plVar13)
    ;
    func_0x00010007e5dc(&puStack_3f8);
  }
  return;
}



/* Entry: 1067e80dc; end: 1067e824f;  */

void FUN_1067e80dc(long param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 *puStack_358;
  long *plStack_350;
  long *plStack_348;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 *puStack_318;
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  char *pcStack_2e8;
  undefined8 *puStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long **pplStack_2c8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  long alStack_2b0 [3];
  long *plStack_298;
  long **applStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  char *pcStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  char *pcStack_1e0;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar15 = (long *)&UNK_110940158;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110940158,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar1 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar1 = pcVar2;
      param_4 = param_3;
    }
  }
  plVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1067e8250;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar15;
  pcVar2 = pcVar1;
  pcVar8 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  _objc_retain(pcVar1);
  puVar14 = (undefined8 *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)plVar12[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    plVar11 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_118;
    pcVar2 = acStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1109401a8,pcVar2,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar13 = 0;
    puVar14 = auStack_f8;
    pcVar8 = param_4;
    do {
      if ((&cStack_c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar1);
  plVar12 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar15);
  plVar3 = plVar12;
  __Unwind_Resume();
  pcStack_128 = FUN_1067e8480;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar11;
  pcVar7 = pcVar2;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = puVar14;
  plStack_148 = plVar12;
  pcStack_140 = pcVar1;
  plStack_138 = plVar15;
  ppuStack_130 = &puStack_90;
  _objc_retain(plVar11);
  _objc_retain(pcVar2);
  pcVar1 = (char *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,pcVar1);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar1 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
    plVar6 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_1b8;
    pcVar7 = acStack_1b8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109401f8,pcVar7,pcVar8);
    pcStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar13 = 0;
    pcVar1 = (char *)auStack_198;
    do {
      if ((&cStack_169)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar2);
  plVar15 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar2);
  _objc_release(plVar11);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcVar9 = acStack_240;
  pcStack_1c8 = FUN_1067e86b0;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar6;
  pcVar8 = pcVar7;
  puStack_200 = unaff_x24;
  pcStack_1f8 = unaff_x23;
  puStack_1f0 = (undefined8 *)pcVar1;
  plStack_1e8 = plVar15;
  pcStack_1e0 = pcVar2;
  plStack_1d8 = plVar11;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(plVar6);
  plVar15 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    unaff_x23 = (char *)auStack_220;
    func_0x00010002b838(auStack_220,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,auStack_220,&lStack_208,1);
    plVar12 = (long *)&UNK_110940398;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940398,acStack_240,pcVar7);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    pcVar8 = pcVar9;
    pcVar1 = acStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      pcVar8 = pcVar9;
      pcVar1 = acStack_240;
    }
  }
  plVar11 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar3 = plVar11;
  __Unwind_Resume();
  plVar10 = alStack_2b0;
  pcStack_248 = FUN_1067e8824;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = (long **)0x0;
  puStack_270 = (undefined8 *)pcVar1;
  plStack_268 = plVar15;
  plStack_260 = plVar11;
  plStack_258 = plVar6;
  pppuStack_250 = &pppuStack_1d0;
  if (plVar3 != (long *)0x0) {
    plVar11 = (long *)plVar3[1];
    pcVar2 = "true";
    if ((int)plVar12 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(applStack_290,pcVar2);
    alStack_2b0[0] = 0;
    alStack_2b0[1] = 0;
    alStack_2b0[2] = 0;
    func_0x00010007e1e8(alStack_2b0,applStack_290,&lStack_278,1);
    plVar12 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109403e8,alStack_2b0,pcVar8);
    pplVar4 = &plStack_298;
    plStack_298 = alStack_2b0;
    func_0x00010007e5dc();
    pcVar8 = (char *)plVar10;
    plVar15 = alStack_2b0;
    if (cStack_279 < '\0') {
      pplVar4 = applStack_290[0];
      __ZdlPv();
      pcVar8 = (char *)plVar10;
      plVar15 = alStack_2b0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  plStack_298 = plVar15;
  func_0x00010007e5dc(&plStack_298);
  if (cStack_279 < '\0') {
    __ZdlPv(applStack_290[0]);
  }
  pplVar5 = pplVar4;
  __Unwind_Resume();
  pcStack_2b8 = FUN_1067e893c;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar12;
  puStack_2f0 = unaff_x24;
  pcStack_2e8 = unaff_x23;
  puStack_2e0 = (undefined8 *)pcVar1;
  plStack_2d8 = plVar15;
  plStack_2d0 = plVar11;
  pplStack_2c8 = pplVar4;
  pppuStack_2c0 = &pppuStack_250;
  _objc_retain(plVar12);
  if (pplVar5 != (long **)0x0) {
    plVar15 = pplVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_310,pcVar1);
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    func_0x00010007e1e8(&uStack_330,auStack_310,&lStack_2f8,1);
    plVar6 = (long *)&UNK_110940438;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110940438,&uStack_330,pcVar8);
    puStack_318 = (undefined1 *)&uStack_330;
    func_0x00010007e5dc(&puStack_318);
    if (cStack_2f9 < '\0') {
      __ZdlPv(auStack_310[0]);
    }
  }
  plVar15 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar11 = plVar15;
  __Unwind_Resume();
  puStack_358 = (undefined1 *)&uStack_370;
  pcStack_338 = FUN_1067e8ab0;
  if (plVar11 != (long *)0x0) {
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    plStack_350 = plVar15;
    plStack_348 = plVar12;
    pppuStack_340 = &pppuStack_2c0;
    (**(code **)(*(long *)plVar11[1] + 0x18))((long *)plVar11[1],&UNK_110940488,&uStack_370,plVar6);
    func_0x00010007e5dc(&puStack_358);
  }
  return;
}



/* Entry: 1067e8250; end: 1067e847f;  */

void FUN_1067e8250(long param_1,long *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  long *plVar2;
  char *pcVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  char *pcVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 *puStack_298;
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined8 *puStack_270;
  char *pcStack_268;
  undefined8 *puStack_260;
  long *plStack_258;
  long *plStack_250;
  long **pplStack_248;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  long alStack_230 [3];
  long *plStack_218;
  long **applStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  long *plStack_168;
  char *pcStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  char *pcStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_2;
  pcVar1 = param_3;
  uVar11 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar15 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    plVar13 = (long *)&UNK_1109401a8;
    unaff_x23 = acStack_98;
    pcVar1 = acStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109401a8,pcVar1,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar15 = auStack_78;
    uVar11 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  plVar14 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  plVar2 = plVar14;
  __Unwind_Resume();
  pcStack_a8 = FUN_1067e8480;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar13;
  pcVar3 = pcVar1;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar15;
  plStack_c8 = plVar14;
  pcStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  _objc_retain(pcVar1);
  pcVar16 = (char *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar14 = (long *)plVar2[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)plVar13;
      _objc_retainAutorelease(plVar13);
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar3 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    plVar7 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_138;
    pcVar3 = acStack_138;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109401f8,pcVar3,uVar11);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar12 = 0;
    pcVar16 = (char *)auStack_118;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar1);
  plVar14 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar1);
  _objc_release(plVar13);
  plVar4 = plVar14;
  __Unwind_Resume();
  pcVar9 = acStack_1c0;
  pcStack_148 = FUN_1067e86b0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar7;
  pcVar8 = pcVar3;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = (undefined8 *)pcVar16;
  plStack_168 = plVar14;
  pcStack_160 = pcVar1;
  plStack_158 = plVar13;
  ppuStack_150 = &puStack_b0;
  _objc_retain(plVar7);
  plVar13 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar13 = (long *)plVar4[1];
    _objc_retain(plVar7);
    if (plVar7 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar7;
      _objc_retainAutorelease(plVar7);
      func_0x00010bdc3520();
    }
    _objc_release(plVar7);
    unaff_x23 = (char *)auStack_1a0;
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1c0[0] = '\0';
    acStack_1c0[1] = '\0';
    acStack_1c0[2] = '\0';
    acStack_1c0[3] = '\0';
    acStack_1c0[4] = '\0';
    acStack_1c0[5] = '\0';
    acStack_1c0[6] = '\0';
    acStack_1c0[7] = '\0';
    acStack_1c0[8] = '\0';
    acStack_1c0[9] = '\0';
    acStack_1c0[10] = '\0';
    acStack_1c0[0xb] = '\0';
    acStack_1c0[0xc] = '\0';
    acStack_1c0[0xd] = '\0';
    acStack_1c0[0xe] = '\0';
    acStack_1c0[0xf] = '\0';
    acStack_1c0[0x10] = '\0';
    acStack_1c0[0x11] = '\0';
    acStack_1c0[0x12] = '\0';
    acStack_1c0[0x13] = '\0';
    acStack_1c0[0x14] = '\0';
    acStack_1c0[0x15] = '\0';
    acStack_1c0[0x16] = '\0';
    acStack_1c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c0,auStack_1a0,&lStack_188,1);
    plVar2 = (long *)&UNK_110940398;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940398,acStack_1c0,pcVar3);
    puStack_1a8 = acStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    pcVar8 = pcVar9;
    pcVar16 = acStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      pcVar8 = pcVar9;
      pcVar16 = acStack_1c0;
    }
  }
  plVar14 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar7);
  _objc_release(plVar7);
  plVar4 = plVar14;
  __Unwind_Resume();
  plVar10 = alStack_230;
  pcStack_1c8 = FUN_1067e8824;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  puStack_1f0 = (undefined8 *)pcVar16;
  plStack_1e8 = plVar13;
  plStack_1e0 = plVar14;
  plStack_1d8 = plVar7;
  pppuStack_1d0 = &ppuStack_150;
  if (plVar4 != (long *)0x0) {
    plVar14 = (long *)plVar4[1];
    pcVar1 = "true";
    if ((int)plVar2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_210,pcVar1);
    alStack_230[0] = 0;
    alStack_230[1] = 0;
    alStack_230[2] = 0;
    func_0x00010007e1e8(alStack_230,applStack_210,&lStack_1f8,1);
    plVar2 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1109403e8,alStack_230,pcVar8);
    pplVar5 = &plStack_218;
    plStack_218 = alStack_230;
    func_0x00010007e5dc();
    pcVar8 = (char *)plVar10;
    plVar13 = alStack_230;
    if (cStack_1f9 < '\0') {
      pplVar5 = applStack_210[0];
      __ZdlPv();
      pcVar8 = (char *)plVar10;
      plVar13 = alStack_230;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  plStack_218 = plVar13;
  func_0x00010007e5dc(&plStack_218);
  if (cStack_1f9 < '\0') {
    __ZdlPv(applStack_210[0]);
  }
  pplVar6 = pplVar5;
  __Unwind_Resume();
  pcStack_238 = FUN_1067e893c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar2;
  puStack_270 = unaff_x24;
  pcStack_268 = unaff_x23;
  puStack_260 = (undefined8 *)pcVar16;
  plStack_258 = plVar13;
  plStack_250 = plVar14;
  pplStack_248 = pplVar5;
  pppuStack_240 = &pppuStack_1d0;
  _objc_retain(plVar2);
  if (pplVar6 != (long **)0x0) {
    plVar13 = pplVar6[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    func_0x00010002b838(auStack_290,pcVar1);
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    func_0x00010007e1e8(&uStack_2b0,auStack_290,&lStack_278,1);
    plVar7 = (long *)&UNK_110940438;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940438,&uStack_2b0,pcVar8);
    puStack_298 = (undefined1 *)&uStack_2b0;
    func_0x00010007e5dc(&puStack_298);
    if (cStack_279 < '\0') {
      __ZdlPv(auStack_290[0]);
    }
  }
  plVar13 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar14 = plVar13;
  __Unwind_Resume();
  puStack_2d8 = (undefined1 *)&uStack_2f0;
  pcStack_2b8 = FUN_1067e8ab0;
  if (plVar14 != (long *)0x0) {
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    plStack_2d0 = plVar13;
    plStack_2c8 = plVar2;
    pppuStack_2c0 = &pppuStack_240;
    (**(code **)(*(long *)plVar14[1] + 0x18))((long *)plVar14[1],&UNK_110940488,&uStack_2f0,plVar7);
    func_0x00010007e5dc(&puStack_2d8);
  }
  return;
}



/* Entry: 1067e8480; end: 1067e86af;  */

void FUN_1067e8480(long param_1,long *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  char *pcStack_1c8;
  undefined8 *puStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long **pplStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  long alStack_190 [3];
  long *plStack_178;
  long **applStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  char *pcStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  pcVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar2 = (char *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    plVar6 = (long *)&UNK_1109401f8;
    unaff_x23 = acStack_98;
    pcVar1 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109401f8,pcVar1,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    pcVar2 = (char *)auStack_78;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  plVar13 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  plVar11 = plVar13;
  __Unwind_Resume();
  pcVar9 = acStack_120;
  pcStack_a8 = FUN_1067e86b0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar6;
  pcVar8 = pcVar1;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar2;
  plStack_c8 = plVar13;
  pcStack_c0 = param_3;
  plStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar6);
  plVar13 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar13 = (long *)plVar11[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    plVar7 = (long *)&UNK_110940398;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940398,acStack_120,pcVar1);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar9;
    pcVar2 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar9;
      pcVar2 = acStack_120;
    }
  }
  plVar11 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar3 = plVar11;
  __Unwind_Resume();
  plVar10 = alStack_190;
  pcStack_128 = FUN_1067e8824;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = (long **)0x0;
  puStack_150 = (undefined8 *)pcVar2;
  plStack_148 = plVar13;
  plStack_140 = plVar11;
  plStack_138 = plVar6;
  ppuStack_130 = &puStack_b0;
  if (plVar3 != (long *)0x0) {
    plVar11 = (long *)plVar3[1];
    pcVar1 = "true";
    if ((int)plVar7 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(applStack_170,pcVar1);
    alStack_190[0] = 0;
    alStack_190[1] = 0;
    alStack_190[2] = 0;
    func_0x00010007e1e8(alStack_190,applStack_170,&lStack_158,1);
    plVar7 = (long *)&UNK_1109403e8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109403e8,alStack_190,pcVar8);
    pplVar4 = &plStack_178;
    plStack_178 = alStack_190;
    func_0x00010007e5dc();
    pcVar8 = (char *)plVar10;
    plVar13 = alStack_190;
    if (cStack_159 < '\0') {
      pplVar4 = applStack_170[0];
      __ZdlPv();
      pcVar8 = (char *)plVar10;
      plVar13 = alStack_190;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  plStack_178 = plVar13;
  func_0x00010007e5dc(&plStack_178);
  if (cStack_159 < '\0') {
    __ZdlPv(applStack_170[0]);
  }
  pplVar5 = pplVar4;
  __Unwind_Resume();
  pcStack_198 = FUN_1067e893c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar7;
  puStack_1d0 = unaff_x24;
  pcStack_1c8 = unaff_x23;
  puStack_1c0 = (undefined8 *)pcVar2;
  plStack_1b8 = plVar13;
  plStack_1b0 = plVar11;
  pplStack_1a8 = pplVar4;
  pppuStack_1a0 = &ppuStack_130;
  _objc_retain(plVar7);
  if (pplVar5 != (long **)0x0) {
    plVar13 = pplVar5[1];
    _objc_retain(plVar7);
    if (plVar7 == (long *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)plVar7;
      _objc_retainAutorelease(plVar7);
      func_0x00010bdc3520();
    }
    _objc_release(plVar7);
    func_0x00010002b838(auStack_1f0,pcVar1);
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    func_0x00010007e1e8(&uStack_210,auStack_1f0,&lStack_1d8,1);
    plVar6 = (long *)&UNK_110940438;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110940438,&uStack_210,pcVar8);
    puStack_1f8 = (undefined1 *)&uStack_210;
    func_0x00010007e5dc(&puStack_1f8);
    if (cStack_1d9 < '\0') {
      __ZdlPv(auStack_1f0[0]);
    }
  }
  plVar13 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar7);
  _objc_release(plVar7);
  plVar11 = plVar13;
  __Unwind_Resume();
  puStack_238 = (undefined1 *)&uStack_250;
  pcStack_218 = FUN_1067e8ab0;
  if (plVar11 != (long *)0x0) {
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    plStack_230 = plVar13;
    plStack_228 = plVar7;
    pppuStack_220 = &pppuStack_1a0;
    (**(code **)(*(long *)plVar11[1] + 0x18))((long *)plVar11[1],&UNK_110940488,&uStack_250,plVar6);
    func_0x00010007e5dc(&puStack_238);
  }
  return;
}



/* Entry: 1067e86b0; end: 1067e8823;  */

void FUN_1067e86b0(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long **pplVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *unaff_x22;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  char *pcStack_190;
  char *pcStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  plVar9 = (long *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110940398,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
      unaff_x22 = &uStack_80;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  plVar8 = alStack_f0;
  pcStack_88 = FUN_1067e8824;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = (long **)0x0;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar9;
  pcStack_a0 = pcVar2;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    pcVar2 = "true";
    if ((int)pcVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(applStack_d0,pcVar2);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1109403e8,alStack_f0,puVar6);
    pplVar4 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x00010007e5dc();
    puVar6 = (undefined1 *)plVar8;
    plVar9 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar4 = applStack_d0[0];
      __ZdlPv();
      puVar6 = (undefined1 *)plVar8;
      plVar9 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar9;
  func_0x00010007e5dc(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  __Unwind_Resume();
  pcStack_f8 = FUN_1067e893c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar1;
  ppuStack_100 = &puStack_90;
  _objc_retain(pcVar1);
  if (pplVar4 != (long **)0x0) {
    plVar9 = pplVar4[1];
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_150,pcVar2);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_138,1);
    pcVar2 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110940438,&uStack_170,puVar6);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x00010007e5dc(&puStack_158);
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  puStack_198 = (undefined1 *)&uStack_1b0;
  pcStack_178 = FUN_1067e8ab0;
  if (pcVar5 != (char *)0x0) {
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    pcStack_190 = pcVar3;
    pcStack_188 = pcVar1;
    pppuStack_180 = &ppuStack_100;
    (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
              (*(long **)(pcVar5 + 8),&UNK_110940488,&uStack_1b0,pcVar2);
    func_0x00010007e5dc(&puStack_198);
  }
  return;
}



/* Entry: 1067e8824; end: 1067e893b;  */

void FUN_1067e8824(long param_1,char *param_2,undefined1 *param_3)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *unaff_x21;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    pcVar2 = "true";
    if ((int)param_2 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar2);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = "\x01";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1109403e8,&uStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar5;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar5;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_1067e893c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar6 = (long *)ppuVar1[1];
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_d0,pcVar2);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010007e1e8(&uStack_f0,auStack_d0,&lStack_b8,1);
    pcVar2 = "";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110940438,&uStack_f0,param_3);
    puStack_d8 = (undefined1 *)&uStack_f0;
    func_0x00010007e5dc(&puStack_d8);
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  puStack_118 = (undefined1 *)&uStack_130;
  pcStack_f8 = FUN_1067e8ab0;
  if (pcVar4 != (char *)0x0) {
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    pcStack_110 = pcVar3;
    pcStack_108 = param_2;
    ppuStack_100 = &puStack_80;
    (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
              (*(long **)(pcVar4 + 8),&UNK_110940488,&uStack_130,pcVar2);
    func_0x00010007e5dc(&puStack_118);
  }
  return;
}



/* Entry: 1067e893c; end: 1067e8aaf;  */

void FUN_1067e893c(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110940438,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1067e8ab0;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110940488,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1067e8ab0; end: 1067e8b27;  */

void FUN_1067e8ab0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110940488,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067e8b28; end: 1067e8f8f; -[SCBoltURLMediaDataSource initWithMediaPackage:operaMediaManager:deleteEnabled:prefetchedSnapchatter:canReply:uiContainer:safetyReportScopeExposer:externalMediaLinkSendingService:operaSessionScopeExposer:notificationPool:grapheneLogger:groupDataModel:senderSnapchatterObservable:circumstanceEngine:snapchattersDataTracker:cachedSummaryInfoProvider:imageDownloader:snapSavingService:contextLoggerProvider:] */

undefined8 *
FUN_1067e8b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9
             ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_98 = PTR_PTR_1126f34d0;
  puVar1 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 5) = param_5;
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0c4040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1067ea5d8;
    puStack_78 = &UNK_1109405b8;
    _objc_retain();
    puStack_70 = puVar3;
    func_0x00010bf97e80(uVar2);
    _objc_release(puStack_70);
    uVar4 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    *(char *)(puVar1 + 7) = (char)param_7;
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_16;
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x000108faa770();
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126b2d18;
      _objc_alloc();
      uVar2 = param_19;
      func_0x00010c269d40(param_19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c860();
      uVar4 = puVar1[0x12];
      puVar1[0x12] = puVar3;
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    _objc_retain(param_20);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_21;
    _objc_release(uVar2);
    if (param_7 != 0) {
      lVar5 = puVar1[6];
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 == 0) {
        func_0x00010bec84c0(puVar1);
      }
    }
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1067e8f90; end: 1067e9043; -[SCBoltURLMediaDataSource canResolvePlaylistItemGroupDataModel:] */

undefined8 FUN_1067e8f90(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ce398;
  _objc_opt_class(PTR_PTR_1126ce398);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfe5d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe5d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = uVar4;
  func_0x00010c0720c0(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1067e9044; end: 1067e90ff; -[SCBoltURLMediaDataSource playlistItemGroupModelForDataModel:] */

void FUN_1067e9044(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ce398;
  _objc_opt_class(PTR_PTR_1126ce398);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126b23e8;
  _objc_alloc(PTR_PTR_1126b23e8);
  uVar3 = uVar1;
  func_0x00010bfe5d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c01ade0(puVar2);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067e9100; end: 1067e9127; -[SCBoltURLMediaDataSource dataModelForGroup:] */

void FUN_1067e9100(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067e9128; end: 1067e9197; -[SCBoltURLMediaDataSource dataModelFor:] */

void FUN_1067e9128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010c154b60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067e9198; end: 1067e9307; -[SCBoltURLMediaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_1067e9198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0c4040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x000100504554();
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar2);
  uVar3 = uVar1;
  func_0x00010c246ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c13a9c0(param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1067e9308; end: 1067e940f;  */

undefined8 FUN_1067e9308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bdc1720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = param_3;
  func_0x00010bdc1720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf433a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1067e9410; end: 1067e9413; -[SCBoltURLMediaDataSource loadMediaForPlaylistItemGroup:] */

void FUN_1067e9410(void)

{
  return;
}



/* Entry: 1067e9414; end: 1067e9603; -[SCBoltURLMediaDataSource pageDataForDataModel:completion:] */

void FUN_1067e9414(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar2 = PTR_PTR_1126b5748;
    _objc_opt_class(PTR_PTR_1126b5748);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    uVar3 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x78);
      uVar3 = uVar1;
      func_0x00010bfe5ec0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar2 = PTR_PTR_1126ce3a0;
      _objc_alloc();
      uVar4 = uVar7;
      func_0x00010c154b60(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bfb0d80(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0c4040(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c028fe0(puVar2);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf67c00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      FUN_1067ea69c();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar2);
      _objc_release(uVar7);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067e9604; end: 1067e9713; -[SCBoltURLMediaDataSource _subscribeToSnapchatterObservable:] */

void FUN_1067e9604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1067e9714; end: 1067e97bf;  */

bool FUN_1067e9714(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_2;
  func_0x00010bfb8280(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb8280(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 == lVar3;
}



/* Entry: 1067e97c0; end: 1067e989f;  */

void FUN_1067e97c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1067e98a0;
    puStack_40 = &UNK_1108434b0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1067e98a0; end: 1067e98cb;  */

void FUN_1067e98a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8a7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067e98cc; end: 1067e98cf; -[SCBoltURLMediaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_1067e98cc(void)

{
  return;
}



/* Entry: 1067e98d0; end: 1067e98d3; -[SCBoltURLMediaDataSource removeMediaForItem:] */

void FUN_1067e98d0(void)

{
  return;
}



/* Entry: 1067e98d4; end: 1067e98db; -[SCBoltURLMediaDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_1067e98d4(void)

{
  return 0;
}



/* Entry: 1067e98dc; end: 1067e98f7; -[SCBoltURLMediaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_1067e98dc(void)

{
  long in_x5;
  
  if (in_x5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067e98f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x5 + 0x10))(in_x5,0,0);
    return;
  }
  return;
}



/* Entry: 1067e98f8; end: 1067e99d3; -[SCBoltURLMediaDataSource registeredEventsForOperaSession] */

void FUN_1067e98f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long in_x4;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar9 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2d30;
  puStack_50 = puVar1;
  func_0x00010bf6b1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_48 = puVar12;
  func_0x00010c149e20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined *)0x3;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  _objc_retain(puVar10);
  _objc_retain(in_x4);
  puVar12 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)ppuVar9;
  func_0x00010c0720c0();
  _objc_release(puVar12);
  if ((int)puVar4 == 0) {
    puVar12 = PTR_PTR_1126b2d30;
    func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)ppuVar9;
    func_0x00010c0720c0();
    _objc_release(puVar12);
    if ((int)puVar4 == 0) {
      puVar12 = PTR_PTR_1126b2d30;
      func_0x00010c149e20(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)ppuVar9;
      func_0x00010c0720c0();
      _objc_release(puVar12);
      if ((int)puVar4 == 0) goto LAB_1067e9ebc;
      lVar8 = *(long *)(puVar1 + 0x18);
      func_0x00010c0c4040();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010bf529e0();
      _objc_release(lVar8);
      if (lVar5 == 0) goto LAB_1067e9ebc;
      puVar12 = puVar10;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar12;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar10;
      func_0x00010c118b40(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar12;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      func_0x00010c08fa60();
      if (puVar2 == (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSURL_1126ae598;
        _objc_alloc();
        func_0x00010c04e820();
      }
      _objc_initWeak(auStack_b8,puVar1);
      uVar6 = *(undefined8 *)(puVar1 + 0x20);
      _objc_copyWeak(auStack_f0,auStack_b8);
      func_0x00010c14a960(uVar6);
      puVar2 = PTR_PTR_1126b2d20;
      func_0x00010c0b3940(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = in_x4;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (lVar5 == 0) {
        uVar11 = *(undefined8 *)(puVar1 + 0xa8);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar11;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar11;
        func_0x00010bf56fa0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar11);
        puVar1 = PTR_PTR_1126b6038;
        _objc_alloc(PTR_PTR_1126b6038);
        func_0x00010bff0a60();
        puVar2 = PTR_PTR_1126b5c68;
        func_0x00010c149e20(PTR_PTR_1126b5c68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a0480(uVar7);
        _objc_release(puVar2);
        _objc_release(puVar1);
        _objc_release(uVar7);
      }
      _objc_destroyWeak(auStack_f0);
      _objc_destroyWeak(auStack_b8);
      goto LAB_1067e9ea4;
    }
    lVar5 = *(long *)(puVar1 + 0x18);
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) goto LAB_1067e9ebc;
    uVar11 = *(undefined8 *)(puVar1 + 0x58);
    _objc_retain(uVar11);
    _objc_initWeak(auStack_b8,puVar1);
    uVar6 = *(undefined8 *)(puVar1 + 0x50);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar1 + 0x18);
    func_0x00010c099720(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1067e9f34;
    puStack_d0 = &UNK_11085aad8;
    _objc_copyWeak(auStack_c0,auStack_b8);
    uStack_c8 = uVar11;
    func_0x00010bf6c3e0(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  else {
    lVar5 = *(long *)(puVar1 + 0x48);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      if (*(long *)(puVar1 + 0x40) == 0) goto LAB_1067e9ebc;
      puVar12 = PTR_PTR_1126ce3a8;
      _objc_alloc(PTR_PTR_1126ce3a8);
      uVar6 = *(undefined8 *)(puVar1 + 0x18);
      func_0x00010c099720(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(puVar1 + 0x18);
      func_0x00010bf67c00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c026240(puVar12);
      _objc_release(uVar7);
      _objc_release(uVar6);
      puVar3 = PTR_PTR_1126b2e98;
      func_0x00010c0c66c0(PTR_PTR_1126b2e98);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126b2ec8;
      _objc_alloc(PTR_PTR_1126b2ec8);
      func_0x00010c0587e0();
      func_0x00010bf9d620(*(undefined8 *)(puVar1 + 0x48));
LAB_1067e9ea4:
      _objc_release(puVar12);
      _objc_release(puVar3);
    }
  }
  _objc_release();
LAB_1067e9ebc:
  _objc_release(in_x4);
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  return;
}



/* Entry: 1067e99d4; end: 1067e9f33; -[SCBoltURLMediaDataSource operaViewDidSendEvent:page:params:] */

void FUN_1067e99d4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar9 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar9);
  if ((int)uVar2 == 0) {
    puVar9 = PTR_PTR_1126b2d30;
    func_0x00010bf6b1c0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar9);
    if ((int)uVar2 == 0) {
      puVar9 = PTR_PTR_1126b2d30;
      func_0x00010c149e20(PTR_PTR_1126b2d30);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar9);
      if ((int)uVar2 == 0) goto LAB_1067e9ebc;
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00010c0c4040();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      if (lVar1 == 0) goto LAB_1067e9ebc;
      puVar9 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar9;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
        _objc_alloc();
        func_0x00010c04e820();
      }
      _objc_initWeak(auStack_68,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_a0,auStack_68);
      func_0x00010c14a960(uVar2);
      puVar5 = PTR_PTR_1126b2d20;
      func_0x00010c0b3940(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar5);
      if (lVar1 == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0xa8);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar8;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        func_0x00010bf56fa0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(uVar8);
        puVar5 = PTR_PTR_1126b6038;
        _objc_alloc(PTR_PTR_1126b6038);
        func_0x00010bff0a60();
        puVar7 = PTR_PTR_1126b5c68;
        func_0x00010c149e20(PTR_PTR_1126b5c68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a0480(uVar3);
        _objc_release(puVar7);
        _objc_release(puVar5);
        _objc_release(uVar3);
      }
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_68);
      goto LAB_1067e9ea4;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_1067e9ebc;
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar8);
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c099720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1067e9f34;
    puStack_80 = &UNK_11085aad8;
    _objc_copyWeak(auStack_70,auStack_68);
    uStack_78 = uVar8;
    func_0x00010bf6c3e0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_1067e9ebc;
      puVar9 = PTR_PTR_1126ce3a8;
      _objc_alloc(PTR_PTR_1126ce3a8);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c099720(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf67c00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c026240(puVar9);
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar6 = PTR_PTR_1126b2e98;
      func_0x00010c0c66c0(PTR_PTR_1126b2e98);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b2ec8;
      _objc_alloc(PTR_PTR_1126b2ec8);
      func_0x00010c0587e0();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48));
LAB_1067e9ea4:
      _objc_release(puVar9);
      _objc_release(puVar6);
    }
  }
  _objc_release();
LAB_1067e9ebc:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067e9f34; end: 1067e9fab;  */

void FUN_1067e9f34(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be7af00();
  _objc_release(lVar1);
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  return;
}



/* Entry: 1067e9fac; end: 1067e9fe3;  */

void FUN_1067e9fac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067e9fe4; end: 1067e9fef; -[SCBoltURLMediaDataSource setPlaylistItemController:] */

void FUN_1067e9fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1067e9ff0; end: 1067ea067; -[SCBoltURLMediaDataSource setOperaEventAnnouncing:] */

void FUN_1067e9ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  _objc_retain();
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067ea068; end: 1067ea0d7; -[SCBoltURLMediaDataSource reportDidCompleteWithCancelled:] */

void FUN_1067ea068(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
    if ((param_3 & 1) == 0) {
      if (*(long *)(param_1 + 0x68) != 0) {
        plVar2 = *(long **)(*(long *)(param_1 + 0x68) + 8);
        uStack_40 = 0;
        uStack_38 = 0;
        (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1109406e0,&uStack_40,1);
        func_0x00010007e5dc(&stack0xffffffffffffffd8);
      }
      return;
    }
  }
  return;
}



/* Entry: 1067ea0d8; end: 1067ea1db; -[SCBoltURLMediaDataSource _presentDeleteMemoryNotification:] */

void FUN_1067ea0d8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  if (param_3 == 0) {
    func_0x0001067ee354();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_1067ee33c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1067ea1dc;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar3;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(uVar3);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1067ea1dc; end: 1067ea217;  */

void FUN_1067ea1dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ea218; end: 1067ea31b; -[SCBoltURLMediaDataSource _presentSaveMemoryNotification:] */

void FUN_1067ea218(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  if (param_3 == 0) {
    func_0x0001067ee384();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001067ee36c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1067ea31c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar3;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(uVar3);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1067ea31c; end: 1067ea357;  */

void FUN_1067ea31c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ea358; end: 1067ea4e3; -[SCBoltURLMediaDataSource _reloadCurrentPlaylistGroup] */

void FUN_1067ea358(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      func_0x00010be36bc0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101400(lVar4);
      _objc_release(uVar6);
      _objc_release(lVar4);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + 0xa8,0);
  _objc_storeStrong(lVar3 + 0xa0,0);
  _objc_storeStrong(lVar3 + 0x98,0);
  _objc_storeStrong(lVar3 + 0x90,0);
  _objc_storeStrong(lVar3 + 0x88,0);
  _objc_storeStrong(lVar3 + 0x80,0);
  _objc_storeStrong(lVar3 + 0x78,0);
  _objc_storeStrong(lVar3 + 0x70,0);
  _objc_storeStrong(lVar3 + 0x68,0);
  _objc_storeStrong(lVar3 + 0x60,0);
  _objc_storeStrong(lVar3 + 0x58,0);
  _objc_storeStrong(lVar3 + 0x50,0);
  _objc_storeStrong(lVar3 + 0x48,0);
  _objc_storeStrong(lVar3 + 0x40,0);
  _objc_storeStrong(lVar3 + 0x30,0);
  _objc_storeStrong(lVar3 + 0x20,0);
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_destroyWeak(lVar3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar3 + 8);
  return;
}



/* Entry: 1067ea4e4; end: 1067ea5d7; -[SCBoltURLMediaDataSource .cxx_destruct] */

void FUN_1067ea4e4(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1067ea5d8; end: 1067ea69b;  */

void FUN_1067ea5d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b60f8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0134e0(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1067ea69c; end: 1067eb0d3;  */

undefined1 *
FUN_1067ea69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126b2368;
  _objc_retain(param_5);
  _objc_opt_new();
  puVar3 = param_7;
  func_0x00010c0c3fe0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53a0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puStack_c8 = puVar2;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c2971c0(param_3,param_4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  puVar3 = param_7;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c074fe0();
  _objc_release(puVar3);
  puVar3 = param_7;
  uStack_b8 = param_6;
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010c0c3fe0(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1f160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar2);
    func_0x00010c0c3fe0(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1f160();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar12);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_7;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c074fe0();
  uStack_d8 = (ulong)((uint)puVar4 ^ 1);
  _objc_release(puVar3);
  puVar3 = param_7;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010c08fa60();
  if (puVar12 < (undefined *)0x3) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar5 = param_7;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar2);
  puVar3 = param_7;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_7;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = param_7;
  func_0x00010bf2d380();
  uStack_e8 = param_5;
  _objc_retain(param_5);
  _objc_retain(puVar12);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  if ((int)param_7 != 0) {
    func_0x00010bfb8280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  puVar5 = PTR_PTR_1126b23a0;
  puStack_100 = puVar2;
  lStack_c0 = param_8;
  if (puVar3 == (undefined *)0x0) {
    puStack_f8 = (undefined *)0x0;
    puStack_f0 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar3;
    func_0x00010c2923e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2398;
    _objc_alloc();
    puVar6 = puVar3;
    func_0x00010c294420(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf85d80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c242760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar5;
    func_0x00010c01bcc0();
    puStack_f8 = puVar2;
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  puVar5 = PTR_PTR_1126b2370;
  _objc_alloc(PTR_PTR_1126b2370);
  uStack_140._4_4_ = uStack_140._4_4_ & 0xffffff00;
  uStack_140 = CONCAT44(uStack_140._4_4_,0x1000000);
  uStack_148 = 1;
  uStack_150 = uStack_150 & 0xffffffffffffff00;
  func_0x00010c01f560();
  puVar6 = PTR_PTR_1126b2380;
  _objc_alloc(PTR_PTR_1126b2380);
  uStack_150 = 0;
  func_0x00010c0607a0();
  puVar7 = PTR_PTR_1126b2390;
  _objc_alloc(PTR_PTR_1126b2390);
  puVar8 = puVar7;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uStack_e8;
  puVar2 = puStack_f8;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_120 = 0;
  uStack_118 = uStack_d8;
  uStack_128 = 0x48;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_150 = 0;
  uStack_148 = 0xf;
  puStack_130 = puVar4;
  func_0x00010c045140(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puStack_f0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(uVar10);
  puVar2 = puStack_100;
  func_0x00010c1d0640(puStack_100);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puStack_e0);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  lVar1 = lStack_c0;
  puVar3 = puStack_d0;
  puVar4 = puVar12;
  if (lStack_c0 != 0) {
    puVar5 = puStack_d0;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010c244280(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1d0640(puVar2);
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110ebeb58;
      puVar5 = puVar3;
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_98 = &PTR____CFConstantStringClassReference_110ebeb18;
      puVar6 = PTR_PTR_1126b19f8;
      puStack_88 = puVar5;
      func_0x00010c0cbb20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_90 = &PTR____CFConstantStringClassReference_110ebeb38;
      ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7090;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_80 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf6bba0();
  if ((int)puVar6 != 0) {
    func_0x00010befa120(puVar5);
  }
  func_0x00010befa120(puVar5);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  puVar6 = puVar3;
  func_0x00010c276840();
  if ((undefined *)0x1 < puVar6) {
    puVar6 = PTR_PTR_1126b3af0;
    _objc_alloc(PTR_PTR_1126b3af0);
    func_0x00010c276840(puVar3);
    func_0x00010c0c52c0(puVar3);
    func_0x00010c054900(puVar6);
    puVar4 = PTR_PTR_1126b3b00;
    _objc_opt_class();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar7);
    func_0x00010c1d0640(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar4);
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126b23e0;
  _objc_alloc();
  uVar11 = 0;
  puVar7 = puVar2;
  func_0x00010c033240();
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puStack_c8);
  _objc_release(lVar1);
  _objc_release(puVar3);
  uVar10 = uStack_b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar9 = &uStack_190;
    puStack_170 = puVar3;
    pcStack_158 = FUN_1067eb0d4;
    puStack_180 = puVar4;
    puStack_178 = puVar6;
    puStack_168 = puVar5;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    _objc_retain(uVar11);
    puStack_188 = PTR_PTR_1126f34d8;
    uStack_190 = uVar10;
    _objc_msgSendSuper2(&uStack_190,PTR_s_init_1125d9248);
    if (puVar9 != (undefined8 *)0x0) {
      _objc_retain(puVar7);
      uVar10 = *(undefined8 *)((long)puVar9 + 8);
      *(undefined **)((long)puVar9 + 8) = puVar7;
      _objc_release(uVar10);
      _objc_storeWeak((undefined1 *)((long)puVar9 + 0x10),uVar11);
    }
    _objc_release(uVar11);
    _objc_release(puVar7);
    return (undefined1 *)puVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 1067eb0d4; end: 1067eb16f; -[SCBoltURLMediaOperaFeaturePlugin initWithBoltURLMediaDataSource:navigationDelegate:] */

undefined1 *
FUN_1067eb0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f34d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067eb170; end: 1067eb197; -[SCBoltURLMediaOperaFeaturePlugin playlistDataSource] */

void FUN_1067eb170(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067eb198; end: 1067eb19f; -[SCBoltURLMediaOperaFeaturePlugin addEventListenersWithEventAnnouncing:] */

void FUN_1067eb198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d5430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setOperaEventAnnouncing__112652f30);
  return;
}



/* Entry: 1067eb1a0; end: 1067eb1cf; -[SCBoltURLMediaOperaFeaturePlugin type] */

void FUN_1067eb1a0(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e60438);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e60438);
  return;
}



/* Entry: 1067eb1d0; end: 1067eb38b; -[SCBoltURLMediaOperaFeaturePlugin updateOperaConfiguration:] */

void FUN_1067eb1d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5480();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c2a9880(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2b5380(0,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5460(0,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9060(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5f60(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2bd1e0(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ae960(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b33a0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8100(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4560(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a75e0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afd20(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067eb38c; end: 1067eb393; -[SCBoltURLMediaOperaFeaturePlugin setPlaylistItemController:] */

void FUN_1067eb38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setPlaylistItemController__1126551a0);
  return;
}



/* Entry: 1067eb394; end: 1067eb39f; -[SCBoltURLMediaOperaFeaturePlugin setOperaControlling:] */

void FUN_1067eb394(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1067eb3a0; end: 1067eb3af; -[SCBoltURLMediaOperaFeaturePlugin teardown] */

void FUN_1067eb3a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067eb3b0; end: 1067eb3e3; -[SCBoltURLMediaOperaFeaturePlugin .cxx_destruct] */

void FUN_1067eb3b0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067eb3e4; end: 1067eb817; -[SCBoltURLMediaOperaImplementation initWithOperaSessionScopeExposer:operaSessionScopeServices:navigationDelegate:simpleContentFetcher:imageFetchingService:contextLoggerProvider:contextOperaPluginProvider:snapchattersObservableRepository:currentUserId:circumstanceEngine:safetyReportScopeExposer:externalMediaLinkSendingService:notificationPool:snapchattersDataTracker:temporaryFileWriter:cachedSummaryInfoProvider:imageDownloader:snapSavingService:userTrackedLogger:] */

undefined8 *
FUN_1067eb3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f34e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 4,param_5);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_21;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ce3b0;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1067eb818; end: 1067ebaa7; -[SCBoltURLMediaOperaImplementation presentOperaWithMediaPackage:presentingViewController:baseOperaView:] */

void FUN_1067eb818(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0c4040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c15df40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c2445e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
    uVar9 = (undefined1)*(undefined8 *)(param_1 + 0x40);
    lVar1 = param_3;
    func_0x00010c15df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar1);
    _objc_initWeak(auStack_68,param_1);
    uVar3 = uVar5;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    param_2 = auStack_68;
    _objc_copyWeak(auStack_78);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uVar6 = uVar3;
    uStack_70 = uVar9;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_68);
    __Unwind_Resume();
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == (undefined1 *)0x0) {
      puVar7 = *(undefined1 **)(param_3 + 0x20);
      func_0x00010c15df40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x000109020298();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    else {
      _objc_retain(param_2);
      puVar8 = param_2;
    }
    _objc_release(param_2);
    lVar1 = param_3 + 0x40;
    _objc_loadWeakRetained(lVar1);
    if (*(char *)(param_3 + 0x48) == '\x01') {
      func_0x00010bf80140(*(undefined8 *)(param_3 + 0x20));
    }
    func_0x00010be7d060(lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar8);
    return;
  }
  return;
}



/* Entry: 1067ebaa8; end: 1067ebbaf;  */

void FUN_1067ebaa8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c15df40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000109020298();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    _objc_retain(param_2);
    lVar2 = param_2;
  }
  _objc_release(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010bf80140(*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010be7d060(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1067ebbb0; end: 1067ec033; -[SCBoltURLMediaOperaImplementation _presentOperaWithMediaPackage:presentingViewController:baseOperaView:prefetchedSnapchatter:canReply:deleteEnabled:senderSnapchatterObservable:] */

void FUN_1067ebbb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puStack_78;
  long lStack_70;
  
  puVar1 = PTR_PTR_1126ce3b8;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar14 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar14);
  func_0x00010c046880(puVar1,param_2,lVar14,*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x98),
                      *(undefined8 *)(param_1 + 0xa0));
  _objc_release(lVar14);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  puVar3 = PTR_PTR_1126ce398;
  _objc_alloc();
  uVar15 = param_3;
  func_0x00010c099720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b1c0(puVar3,param_2,uVar15);
  _objc_release(uVar15);
  puVar4 = PTR_PTR_1126ce3c0;
  _objc_alloc();
  func_0x00010c029a60();
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126ce3c8;
  _objc_alloc();
  lVar14 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar14);
  func_0x00010bff9120(puVar6,param_2,puVar4,lVar14);
  _objc_release(lVar14);
  func_0x00010befa120(puVar5,param_2,puVar6);
  lVar14 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar7 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar14);
  func_0x00010befa120(puVar5,param_2,lVar8);
  puVar9 = PTR_PTR_1126ce3d0;
  _objc_alloc();
  func_0x00010c05f0c0();
  func_0x00010befa120(puVar5,param_2,puVar9);
  puVar10 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0(puVar10,param_2,puVar11,puVar3);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c018aa0(0);
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  puVar12 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0(puVar12,param_2,4,0x16,5,0xffffffffffffffff,0,0x48,puVar13,0);
  func_0x00010bf23920(uVar15,param_2,puVar12,param_4,param_5,puVar10,puVar11,param_1,puVar5,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar12);
  _objc_release(puVar13);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar15);
  puVar12 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar12);
  _objc_release(uVar15);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)(puVar1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(puVar1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1067ec034; end: 1067ec07b; -[SCBoltURLMediaOperaImplementation applicationDidEnterBackground] */

void FUN_1067ec034(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1067ec07c; end: 1067ec07f; -[SCBoltURLMediaOperaImplementation operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_1067ec07c(void)

{
  return;
}



/* Entry: 1067ec080; end: 1067ec0db; -[SCBoltURLMediaOperaImplementation operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_1067ec080(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1067ec0dc; end: 1067ec0df; -[SCBoltURLMediaOperaImplementation operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_1067ec0dc(void)

{
  return;
}



/* Entry: 1067ec0e0; end: 1067ec0e3; -[SCBoltURLMediaOperaImplementation operaPresenterDidCancelDismissing:] */

void FUN_1067ec0e0(void)

{
  return;
}



/* Entry: 1067ec0e4; end: 1067ec0e7; -[SCBoltURLMediaOperaImplementation operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_1067ec0e4(void)

{
  return;
}



/* Entry: 1067ec0e8; end: 1067ec0eb; -[SCBoltURLMediaOperaImplementation operaPresenterDidFailToPresent:] */

void FUN_1067ec0e8(void)

{
  return;
}



/* Entry: 1067ec0ec; end: 1067ec0ef; -[SCBoltURLMediaOperaImplementation operaPresenterDidFinishDismissing:] */

void FUN_1067ec0ec(void)

{
  return;
}



/* Entry: 1067ec0f0; end: 1067ec137; -[SCBoltURLMediaOperaImplementation operaPresenterDidTearDown:] */

void FUN_1067ec0f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1067ec138; end: 1067ec13b; -[SCBoltURLMediaOperaImplementation operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_1067ec138(void)

{
  return;
}



/* Entry: 1067ec13c; end: 1067ec13f; -[SCBoltURLMediaOperaImplementation operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_1067ec13c(void)

{
  return;
}


