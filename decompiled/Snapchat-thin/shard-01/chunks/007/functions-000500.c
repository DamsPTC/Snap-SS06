/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101448638; end: 101448677;  */

void FUN_101448638(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93fd4c;
  func_0x000107c61520(&UNK_10d93fd4c,&UNK_1103b9c78);
  puRam0000000112d9f470 = puVar1;
  return;
}



/* Entry: 101448678; end: 10144867b;  */

void FUN_101448678(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93fdb4;
  func_0x000107c61520(&UNK_10d93fdb4,&UNK_1103b9bf0);
  puRam0000000112d9f478 = puVar1;
  return;
}



/* Entry: 10144867c; end: 1014486ff;  */

void FUN_10144867c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d9f478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93fdb4;
  func_0x000107c61520(&UNK_10d93fdb4,&UNK_1103b9bf0);
  puRam0000000112d9f478 = puVar1;
  return;
}



/* Entry: 101448700; end: 101448873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101448700(undefined8 param_1,long param_2,ulong param_3)

{
  long unaff_x20;
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_c0 [16];
  undefined8 *puStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  
  lVar1 = _DAT_112d9f3f0;
  func_0x000107c61428(unaff_x20 + _DAT_112d9f3f0,auStack_60,0x20,0);
  lVar1 = *(long *)(unaff_x20 + lVar1);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x000107c61434(lVar1);
    func_0x000100029284();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((param_3 & 1) != 0) {
      puVar2 = *(undefined **)(*(long *)(lVar1 + 0x38) + param_2 * 8);
      func_0x000107c61434(puVar2);
    }
    func_0x000107c6142c(lVar1);
  }
  func_0x000107c614a8(auStack_60);
  lVar1 = *(long *)(puVar2 + 0x10);
  if (lVar1 != 0) {
    lVar1 = *(long *)((long)(puVar2 + 0x10) + lVar1 * 2 * 8);
    puStack_b0 = &uStack_68;
    uStack_68 = 0;
    puStack_90 = puStack_b0;
    puStack_70 = puStack_b0;
    puStack_50 = puStack_b0;
    func_0x000107c61174(lVar1);
    func_0x00010405bfc8(0x101448d88,auStack_60,0x101448d8c,auStack_80,0x101448d0c,auStack_a0,
                        0x101448d90,auStack_c0);
    func_0x000107c61170(lVar1);
  }
  puStack_b0 = &uStack_68;
  uStack_68 = 0;
  puStack_90 = puStack_b0;
  puStack_70 = puStack_b0;
  puStack_50 = puStack_b0;
  func_0x00010405bfc8(0x101448d94,auStack_60,0x101448d98,auStack_80,0x101448d10,auStack_a0,
                      0x101448d9c,auStack_c0);
  func_0x000107c6142c(puVar2);
  return;
}



/* Entry: 101448874; end: 101448bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101448874(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112d9f3f0;
  func_0x000107c61428(unaff_x20 + _DAT_112d9f3f0,auStack_78,0x20,0);
  lVar8 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar2 = param_3;
    uVar6 = param_4;
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
      puVar9 = *(undefined **)(*(long *)(lVar8 + 0x38) + lVar2 * 8);
      func_0x000107c61434(puVar9);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar8);
      goto LAB_101448924;
    }
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c614a8(auStack_78);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_101448924:
  puVar3 = puVar9;
  func_0x000107c61558();
  puVar5 = puVar9;
  if (((ulong)puVar3 & 1) == 0) {
    puVar5 = (undefined *)0x0;
    FUN_10144801c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
  }
  uVar6 = *(ulong *)(puVar5 + 0x10);
  puVar9 = puVar5;
  if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar6) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
    FUN_10144801c(puVar9,uVar6 + 1,1,puVar5);
  }
  *(ulong *)(puVar9 + 0x10) = uVar6 + 1;
  *(undefined8 *)(puVar9 + uVar6 * 0x10 + 0x20) = param_2;
  *(undefined8 *)(puVar9 + uVar6 * 0x10 + 0x28) = param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_78,0x21,0);
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(puVar9);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_101447570(puVar9,param_3,param_4,uVar4,0x112d9f3e0,&UNK_10d93fe20);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar7;
  func_0x000107c614a8(auStack_78);
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 101448bc8; end: 101448c07;  */

void FUN_101448bc8(void)

{
  long unaff_x20;
  
  **(undefined8 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 101448c08; end: 101448c33;  */

void FUN_101448c08(void)

{
  long unaff_x20;
  
  FUN_10144676c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101448c34; end: 101448c67;  */

void FUN_101448c34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101446888(*(undefined8 *)(unaff_x20 + 0x40),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101448c68; end: 101448ca7;  */

void FUN_101448c68(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101448ca8; end: 101448cd7;  */

void FUN_101448ca8(void)

{
  long unaff_x20;
  
  FUN_1014482d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101448cd8; end: 101448dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101448cd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d9f410);
  FUN_101448dbc(uVar1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar3 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSiN_11034deb0;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar4);
  func_0x000107c6057c(puVar3,puVar5);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar5);
  func_0x00010526b040(uVar6,uVar1,puVar2,puVar3,1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101448dbc; end: 101449183;  */

undefined1  [16] FUN_101448dbc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack_18;
  
  uVar2 = 0xef4c49414d455f4e;
  switch(param_1) {
  case 0:
    pcVar4 = "APP_LOGIN_USERNAME";
    goto code_r0x000101448e64;
  case 2:
    pcVar4 = "APP_LOGIN_GOOGLE";
    break;
  case 3:
    uVar2 = 0xed00005649545f4e;
  case 1:
    auVar10._8_8_ = uVar2;
    auVar10._0_8_ = 0x49474f4c5f505041;
    return auVar10;
  case 4:
    pcVar4 = "APP_LOGIN_PASSKEY";
    goto code_r0x000101449098;
  case 5:
    auVar14._8_8_ = 0xee00504352415f4e;
    auVar14._0_8_ = 0x49474f4c5f505041;
    return auVar14;
  case 6:
    auVar16._8_8_ = 0xef454c5050415f4e;
    auVar16._0_8_ = 0x49474f4c5f505041;
    return auVar16;
  case 7:
    auVar11._8_8_ = 0xef454e4f48505f4e;
    auVar11._0_8_ = 0x49474f4c5f505041;
    return auVar11;
  case 8:
    pcVar4 = "APP_LOGIN_ANSWER_CHALLENGE";
    uVar3 = 10;
    goto code_r0x000101449040;
  case 9:
    pcVar4 = "FETCH_LOGIN_OPTIONS";
    goto code_r0x000101448e84;
  case 10:
    pcVar4 = "LOGIN_WITH_1TLV3";
    break;
  case 0xb:
    pcVar4 = "LOGIN_WITH_PASSWORD";
code_r0x000101448e84:
    auVar7._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar7._0_8_ = 0xd000000000000013;
    return auVar7;
  case 0xc:
    pcVar4 = "REACTIVATE_ACCOUNT";
code_r0x000101448e64:
    auVar6._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar6._0_8_ = 0xd000000000000012;
    return auVar6;
  case 0xd:
    pcVar4 = "REGISTER_WITH_PHONE_EMAIL";
    uVar3 = 9;
code_r0x000101449040:
    auVar19._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar19._0_8_ = uVar3 | 0xd000000000000010;
    return auVar19;
  case 0xe:
    pcVar4 = "REGISTER_WITH_USERNAME_PASSWORD";
    goto code_r0x000101449058;
  case 0xf:
    auVar9._8_8_ = 0xee00485455414f5f;
    auVar9._0_8_ = 0x5245545349474552;
    return auVar9;
  case 0x10:
    pcVar4 = "REGISTER_WITH_GOOGLE";
    goto code_r0x00010144913c;
  case 0x11:
    auVar13._8_8_ = 0x800000010ef80a30;
    auVar13._0_8_ = 0xd00000000000001e;
    return auVar13;
  case 0x12:
    auVar17._8_8_ = 0xef45444f435f4e49;
    auVar17._0_8_ = 0x474f4c5f444e4553;
    return auVar17;
  case 0x13:
    auVar23._8_8_ = 0xee0065646f435f56;
    auVar23._0_8_ = 0x4c444f5f444e4553;
    return auVar23;
  case 0x14:
    pcVar4 = "SEND_TWO_FA_CODE";
    break;
  case 0x15:
    auVar15._8_8_ = 0xee004c454e4e4148;
    auVar15._0_8_ = 0x435f594649524556;
    return auVar15;
  case 0x16:
    pcVar4 = "VERIFY_LOGIN_CODE";
code_r0x000101449098:
    auVar22._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar22._0_8_ = 0xd000000000000011;
    return auVar22;
  case 0x17:
    auVar24._8_8_ = 0xeb00000000564c44;
    auVar24._0_8_ = 0x4f5f594649524556;
    return auVar24;
  case 0x18:
    auVar8._8_8_ = 0xed000041465f4f57;
    auVar8._0_8_ = 0x545f594649524556;
    return auVar8;
  case 0x19:
    pcVar4 = "SET_PHONE_NUMBER";
    break;
  case 0x1a:
    pcVar4 = "CONFIRM_PHONE_NUMBER";
code_r0x00010144913c:
    auVar27._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar27._0_8_ = 0xd000000000000014;
    return auVar27;
  case 0x1b:
    auVar5._8_8_ = 0x800000010ef80990;
    auVar5._0_8_ = 0xd000000000000018;
    return auVar5;
  case 0x1c:
    auVar25._8_8_ = 0xec0000004c49414d;
    auVar25._0_8_ = 0x455f455441445055;
    return auVar25;
  case 0x1d:
    auVar26._8_8_ = 0x800000010ef80960;
    auVar26._0_8_ = 0xd000000000000021;
    return auVar26;
  case 0x1e:
    pcVar4 = "REQUEST_PHONE_VERIFICATION_CODE";
code_r0x000101449058:
    auVar20._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar20._0_8_ = 0xd00000000000001f;
    return auVar20;
  case 0x1f:
    auVar12._8_8_ = 0x800000010ef80920;
    auVar12._0_8_ = 0xd000000000000016;
    return auVar12;
  case 0x20:
    auVar21._8_8_ = 0xeb000000004c4941;
    auVar21._0_8_ = 0x4d455f4b43454843;
    return auVar21;
  default:
    uStack_18 = param_1;
    func_0x000107c60614(&UNK_11073afd0,&uStack_18,&UNK_11073afd0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101449184);
    (*pcVar1)();
  }
  auVar18._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar18._0_8_ = 0xd000000000000010;
  return auVar18;
}



/* Entry: 101449184; end: 1014491cf;  */

void FUN_101449184(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = 0x44455452415453;
  param_1[1] = 0xe700000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1014491d0; end: 1014492c3;  */

void FUN_1014491d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c602fc(0x17);
  func_0x000107c6142c(0xe000000000000000);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar1 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c6057c(puVar1,puVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  uVar2 = param_3[1];
  *param_3 = 0xd000000000000012;
  param_3[1] = 0x800000010ef80bb0;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1014492c4; end: 101449327;  */

void FUN_1014492c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = 0x4554454c504d4f43;
  param_1[1] = 0xe900000000000044;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101449328; end: 1014493a3;  */

void FUN_101449328(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5dc44(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126a6e88;
  func_0x000107c610f8();
  func_0x000107c45e54();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1014493a4; end: 1014493bb;  */

void FUN_1014493a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5dc44(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126a6e88;
  func_0x000107c610f8();
  func_0x000107c45e54();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1014493bc; end: 1014493ff;  */

void FUN_1014493bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_101449504();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103b9e68;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101449400; end: 101449407;  */

void FUN_101449400(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101449504();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103b9e68;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101449408; end: 101449437;  */

void FUN_101449408(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101449438; end: 10144945b;  */

void FUN_101449438(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10144945c; end: 101449473;  */

void FUN_10144945c(void)

{
  return;
}



/* Entry: 101449474; end: 1014494ef;  */

void FUN_101449474(void)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = lStack_28;
  func_0x000107c5dc44();
  func_0x000107c61180();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c445c0(lVar2);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1014494f0; end: 101449503;  */

void FUN_1014494f0(void)

{
  return;
}



/* Entry: 101449504; end: 101449523;  */

void FUN_101449504(void)

{
  func_0x000107c61168(&PTR_PTR_112d9f4e0);
  return;
}



/* Entry: 101449524; end: 101449577;  */

void FUN_101449524(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a6e90;
  func_0x000107c610f8();
  func_0x000107c49484();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101449578; end: 10144958f;  */

void FUN_101449578(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a6e90;
  func_0x000107c610f8();
  func_0x000107c49484();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 101449590; end: 10144969f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101449590(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000ad7c4();
  func_0x000100083b20(&lStack_58);
  uVar1 = *(undefined8 *)(lStack_58 + _DAT_113092390);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_58);
  func_0x000100083b20(&uStack_60);
  lVar2 = lStack_58;
  func_0x0001000ad7c4();
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c5ba34();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126a6e98;
  func_0x000107c610f8();
  func_0x000107c46548();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uStack_60);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 1014496a0; end: 1014496cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014496a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&lStack_58);
  uVar2 = *(undefined8 *)(lStack_58 + _DAT_113092390);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_58);
  func_0x000100083b20(&uStack_60);
  lVar3 = lStack_58;
  func_0x0001000ad7c4();
  puVar4 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c5ba34();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126a6e98;
  func_0x000107c610f8();
  func_0x000107c46548();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uStack_60);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar4);
  *param_1 = puVar5;
  return;
}



/* Entry: 1014496cc; end: 101449747;  */

undefined * FUN_1014496cc(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a6ea8;
  func_0x000107c610f8(PTR_PTR_1126a6ea8);
  func_0x000107c47ac8();
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 101449748; end: 10144975f;  */

void FUN_101449748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101449760; end: 1014497cf;  */

void FUN_101449760(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a6eb0;
  func_0x000107c610f8();
  func_0x000107c4588c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  *param_1 = puVar2;
  return;
}



/* Entry: 1014497d0; end: 1014497e7;  */

void FUN_1014497d0(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_PTR_1126bd560;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126bd560;
  func_0x000107c610f8();
  func_0x000107c45740();
  func_0x000107c61170(ppuVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1014497e8; end: 101449837;  */

void FUN_1014497e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  func_0x0001000ad7c4();
  uVar2 = *param_2;
  func_0x000107c610f8();
  func_0x000107c45740();
  func_0x000107c61170(puVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101449838; end: 101449867;  */

undefined1  [16] FUN_101449838(void)

{
  return ZEXT816(0x1103ba178);
}



/* Entry: 101449868; end: 1014498d7;  */

void FUN_101449868(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x00010009af0c(0);
  func_0x000107c610f8();
  func_0x000104066cec(uStack_38,param_2,uVar1);
  *param_1 = uStack_38;
  return;
}



/* Entry: 1014498d8; end: 1014498e7;  */

undefined1  [16] FUN_1014498d8(void)

{
  return ZEXT816(0x1103ba280);
}



/* Entry: 1014498e8; end: 10144996b;  */

void FUN_1014498e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000106bfd878(uStack_38);
  func_0x000107c615e8(uVar1);
  func_0x000100083b20(&uStack_38);
  puVar2 = PTR_PTR_1126a6ec8;
  func_0x000107c610f8();
  func_0x000107c45740();
  func_0x000107c61170(uStack_38);
  *param_1 = puVar2;
  return;
}



/* Entry: 10144996c; end: 10144999b;  */

undefined1  [16] FUN_10144996c(void)

{
  return ZEXT816(0x1103ba398);
}



/* Entry: 10144999c; end: 101449aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10144999c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x0001000285a8(0x112d9f598,&UNK_10d940440);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d9f5a0);
  puVar2 = &UNK_1103ba478;
  func_0x000107c613fc(&UNK_1103ba478,0x20,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(long *)(puVar2 + 0x18) = lVar1;
  pcStack_50 = FUN_101449ab0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103ba490;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174();
  func_0x000107c6157c(lVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar1);
  return uVar4;
}



/* Entry: 101449ab0; end: 101449af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101449ab0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d9f5a8);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d9f5a8) = 0;
  uStack_28 = uVar1;
  func_0x000100b60084(&uStack_28);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101449af8; end: 101449b13;  */

void FUN_101449af8(long param_1,long param_2)

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



/* Entry: 101449b14; end: 101449b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101449b14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d9f5a8);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d9f5a8) = uVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101449b48; end: 101449c3f; -[_TtC43PendingAppNotificationStorageImplementation33PendingAppNotificationStorageImpl setPendingNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101449b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d9f5a0);
  puVar1 = &UNK_1103ba4d8;
  func_0x000107c613fc(&UNK_1103ba4d8,0x20,7);
  *(long *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  pcStack_50 = FUN_101449e20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103ba4f0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101449c40; end: 101449d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101449c40(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = _DAT_112d9f5a0;
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010ef80bf0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d9f5a8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101449d70; end: 101449d8f; -[_TtC43PendingAppNotificationStorageImplementation33PendingAppNotificationStorageImpl init] */

void FUN_101449d70(void)

{
  FUN_101449c40();
  return;
}



/* Entry: 101449d90; end: 101449dc3;  */

void FUN_101449d90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101449dc4; end: 101449dfb; -[_TtC43PendingAppNotificationStorageImplementation33PendingAppNotificationStorageImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101449de0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101449de4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101449dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d9f5a0));
  return;
}



/* Entry: 101449dfc; end: 101449dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101449dfc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x0001000285a8(0x112d9f598,&UNK_10d940440);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d9f5a0);
  puVar2 = &UNK_1103ba478;
  func_0x000107c613fc(&UNK_1103ba478,0x20,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(long *)(puVar2 + 0x18) = lVar1;
  pcStack_50 = FUN_101449ab0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103ba490;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174();
  func_0x000107c6157c(lVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar1);
  return uVar4;
}



/* Entry: 101449e00; end: 101449e1f;  */

void FUN_101449e00(void)

{
  func_0x000107c61168(&PTR_PTR_1127d6e90);
  return;
}



/* Entry: 101449e20; end: 101449e2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101449e20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d9f5a8);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d9f5a8) = uVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101449e2c; end: 101449e63;  */

void FUN_101449e2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101449e00();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103ba4b8;
  return;
}



/* Entry: 101449e64; end: 101449e83;  */

undefined1  [16] FUN_101449e64(void)

{
  return ZEXT816(0x1103ba530);
}



/* Entry: 101449e84; end: 101449f23; -[_TtC42AutoOneTapLoginEventServicesImplementation31AutoOneTapLoginEventServiceImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101449e84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112d9f5f0;
  uStack_38 = 0;
  func_0x0001000285a8(0x112d9f5e8,&UNK_10d940540);
  func_0x000107c613fc();
  puVar3 = &uStack_38;
  func_0x00010006c248();
  *(undefined8 **)(param_1 + lVar1) = puVar3;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_112d9f5f8) = puVar4;
  lStack_48 = param_1;
  lStack_40 = lVar2;
  func_0x000107c61154(&lStack_48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101449f24; end: 101449f57; -[_TtC42AutoOneTapLoginEventServicesImplementation31AutoOneTapLoginEventServiceImpl events] */

void FUN_101449f24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101449f58();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101449f58; end: 10144a103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101449f58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d9f5f8);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_1103ba5f0;
  func_0x000107c613fc(&UNK_1103ba5f0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103ba618;
  func_0x000107c613fc(&UNK_1103ba618,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  pcStack_40 = FUN_10144a104;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1004725e8;
  puStack_48 = &UNK_1103ba630;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  return puVar1;
}



/* Entry: 10144a104; end: 10144a127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144a104(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d9f5f0);
    func_0x000107c6157c(uVar3);
    func_0x0001000c74f0(&lStack_50);
    func_0x000107c61574(uVar3);
    func_0x000107c61170(lVar2);
    if (lStack_50 != 0) {
      func_0x000107c4d664(param_1);
      func_0x000107c61170(lStack_50);
    }
  }
  func_0x000107c5c310(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10144a128; end: 10144a16b;  */

void FUN_10144a128(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 10144a16c; end: 10144a213; -[_TtC42AutoOneTapLoginEventServicesImplementation31AutoOneTapLoginEventServiceImpl emit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144a16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d9f5f0);
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000100075034(0x10144a340,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112d9f5f8));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10144a214; end: 10144a243;  */

void FUN_10144a214(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 10144a244; end: 10144a2b3; -[_TtC42AutoOneTapLoginEventServicesImplementation31AutoOneTapLoginEventServiceImpl clearLatestValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144a244(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d9f5f0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_10144a214,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10144a2b4; end: 10144a2e7;  */

void FUN_10144a2b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10144a2e8; end: 10144a31f; -[_TtC42AutoOneTapLoginEventServicesImplementation31AutoOneTapLoginEventServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144a2e8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d9f5f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d9f5f0));
  return;
}



/* Entry: 10144a320; end: 10144a353;  */

void FUN_10144a320(void)

{
  func_0x000107c61168(&PTR_PTR_1127d6f50);
  return;
}



/* Entry: 10144a354; end: 10144a3bb;  */

void FUN_10144a354(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112d9f630,&UNK_10d9405d8);
  pcVar1 = FUN_10144a3cc;
  func_0x0001000823a8(FUN_10144a3cc,0);
  uVar2 = 0;
  func_0x0001000923c4(0);
  func_0x000107c610f8();
  func_0x0001040681b8(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 10144a3bc; end: 10144a3cb;  */

undefined1  [16] FUN_10144a3bc(void)

{
  return ZEXT816(0x1103ba668);
}



/* Entry: 10144a3cc; end: 10144a3fb;  */

void FUN_10144a3cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10144a320();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10144a3fc; end: 10144a557;  */

void FUN_10144a3fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar9 = &UNK_1103ba750;
  func_0x000107c613fc(&UNK_1103ba750,0x50,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar11;
  *(undefined8 *)(puVar9 + 0x18) = uVar4;
  *(undefined8 *)(puVar9 + 0x20) = uVar1;
  *(undefined8 *)(puVar9 + 0x28) = uVar5;
  *(undefined8 *)(puVar9 + 0x30) = uVar2;
  *(undefined8 *)(puVar9 + 0x38) = uVar6;
  *(undefined8 *)(puVar9 + 0x40) = uVar3;
  *(undefined8 *)(puVar9 + 0x48) = uVar7;
  pcStack_70 = FUN_10144a5c4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10144a830;
  puStack_78 = &UNK_1103ba768;
  ppuVar10 = &puStack_90;
  puStack_68 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_68;
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  uVar11 = 0;
  func_0x00010009d600(0);
  func_0x000107c610f8();
  func_0x0001040685d8(puVar8,uVar11);
  *param_1 = puVar8;
  return;
}



/* Entry: 10144a558; end: 10144a567;  */

undefined1  [16] FUN_10144a558(void)

{
  return ZEXT816(0x1103ba730);
}



/* Entry: 10144a568; end: 10144a5c3;  */

void FUN_10144a568(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10144a5c4; end: 10144a82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10144a5c4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar1 = _DAT_113083800;
  uVar3 = *(undefined8 *)(lStack_68 + _DAT_113083800);
  func_0x000107c61174(uVar3);
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  lVar4 = lStack_68;
  func_0x000107c444a4(lStack_68);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&uStack_70);
  uVar7 = uStack_70;
  puVar5 = PTR_PTR_1126a6ed8;
  func_0x000107c610f8(PTR_PTR_1126a6ed8);
  func_0x000107c492bc();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  func_0x000107c4ec80(lStack_68);
  func_0x000107c61180();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&uStack_70);
  uVar7 = uStack_70;
  func_0x000107c4e41c(uStack_70);
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  uVar8 = *(undefined8 *)(lVar2 + lVar1);
  func_0x000107c61174(uVar8);
  func_0x000100083b20(&uStack_78);
  uVar3 = uStack_78;
  func_0x000107c400b8(uStack_78);
  func_0x000107c61180();
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar9 = uStack_80;
  func_0x000107c44fe4(uStack_80);
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar12 = *(undefined8 *)(lStack_88 + _DAT_113091b70);
  func_0x000107c615f0(uVar12);
  func_0x000107c61170(lStack_88);
  uVar10 = 0;
  func_0x00010406901c();
  func_0x0001040686c0();
  puVar11 = PTR_PTR_1126a6ee0;
  func_0x000107c610f8(PTR_PTR_1126a6ee0);
  func_0x000107c47fe8();
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar2);
  return puVar11;
}



/* Entry: 10144a830; end: 10144a867;  */

void FUN_10144a830(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10144a868; end: 10144a89b;  */

void FUN_10144a868(long param_1,long param_2)

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



/* Entry: 10144a89c; end: 10144a913;  */

void FUN_10144a89c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4ec80(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = *param_2;
  func_0x000107c610f8();
  func_0x000107c45740();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10144a914; end: 10144a943;  */

void FUN_10144a914(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6ee8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 10144a944; end: 10144a9a3;  */

undefined1  [16] FUN_10144a944(void)

{
  return ZEXT816(0x1103ba848);
}



/* Entry: 10144a9a4; end: 10144aa3b;  */

void FUN_10144a9a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c444a4(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uStack_38;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a6f10;
  func_0x000107c610f8();
  func_0x000107c46b98();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10144aa3c; end: 10144aa73;  */

void FUN_10144aa3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = uStack_38;
  func_0x000107c444a4(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uStack_38;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a6f10;
  func_0x000107c610f8();
  func_0x000107c46b98();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10144aa74; end: 10144aabb;  */

void FUN_10144aa74(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010009d0ac(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000104068068();
  *param_1 = param_2;
  return;
}



/* Entry: 10144aabc; end: 10144ab13;  */

void FUN_10144aabc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010009d0ac(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000104068068();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10144ab14; end: 10144ab57;  */

void FUN_10144ab14(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10144ac5c();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103baca0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10144ab58; end: 10144ab5f;  */

void FUN_10144ab58(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_10144ac5c();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103baca0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10144ab60; end: 10144ab8f;  */

void FUN_10144ab60(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10144ab90; end: 10144abb3;  */

void FUN_10144ab90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10144abb4; end: 10144abbf;  */

void FUN_10144abb4(void)

{
  return;
}



/* Entry: 10144abc0; end: 10144abff;  */

void FUN_10144abc0(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c3df8c(uStack_28);
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 10144ac00; end: 10144ac03;  */

void FUN_10144ac00(void)

{
  return;
}



/* Entry: 10144ac04; end: 10144ac43;  */

void FUN_10144ac04(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000107c3dfd8(uStack_28);
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 10144ac44; end: 10144ac5b;  */

void FUN_10144ac44(void)

{
  return;
}



/* Entry: 10144ac5c; end: 10144ac7b;  */

void FUN_10144ac5c(void)

{
  func_0x000107c61168(&PTR_PTR_112d9f6d8);
  return;
}



/* Entry: 10144ac7c; end: 10144ace3;  */

undefined1  [16] FUN_10144ac7c(void)

{
  return ZEXT816(0x1103bad60);
}



/* Entry: 10144ace4; end: 10144adbb;  */

void FUN_10144ace4(long *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c3ff98(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  lVar3 = *param_2;
  func_0x000107c610f8();
  func_0x000107c45f14();
  func_0x000107c61170(uVar2);
  if (lVar3 != 0) {
    *param_1 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10144ad64);
  (*pcVar1)();
}



/* Entry: 10144adbc; end: 10144adfb;  */

undefined1  [16] FUN_10144adbc(void)

{
  return ZEXT816(0x1103baef8);
}



/* Entry: 10144adfc; end: 10144ae63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144adfc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_10144af8c();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112d9f780) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 10144ae64; end: 10144af03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144ae64(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d9f780) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10144af04; end: 10144af37; -[_TtC46ValdiNetworkStatusProviderSaberServiceProvider26ValdiNetworkStatusProvider isConnectedWifi] */

uint FUN_10144af04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010144aeb0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10144af38; end: 10144af6b;  */

void FUN_10144af38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10144af6c; end: 10144af7b;  */

undefined1  [16] FUN_10144af6c(void)

{
  return ZEXT816(0x1103baff8);
}



/* Entry: 10144af7c; end: 10144af8b; -[_TtC46ValdiNetworkStatusProviderSaberServiceProvider26ValdiNetworkStatusProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144af7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d9f780));
  return;
}



/* Entry: 10144af8c; end: 10144afab;  */

void FUN_10144af8c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7010);
  return;
}


