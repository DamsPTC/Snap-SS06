/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031fbfac; end: 1031fbfcf;  */

void FUN_1031fbfac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031fbfd0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031fbfd0; end: 1031fc00f;  */

void FUN_1031fbfd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9c980;
  func_0x000107c61520(&DAT_10db9c980,&UNK_110623fa8);
  puRam0000000112f4c220 = puVar1;
  return;
}



/* Entry: 1031fc010; end: 1031fc02b;  */

void FUN_1031fc010(void)

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



/* Entry: 1031fc02c; end: 1031fc09f;  */

long FUN_1031fc02c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031fc0a0; end: 1031fc12b;  */

undefined8 * FUN_1031fc0a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 1031fc12c; end: 1031fc217;  */

undefined8 * FUN_1031fc12c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1031fc218; end: 1031fc29b;  */

undefined8 * FUN_1031fc218(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1031fc29c; end: 1031fc4ab;  */

int FUN_1031fc29c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031fc4ac; end: 1031fc53b;  */

void FUN_1031fc4ac(void)

{
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = in_x6;
  puVar1[1] = in_x7;
  func_0x000107c61434(in_x7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1031fc53c; end: 1031fc55b;  */

void FUN_1031fc53c(long param_1,long param_2)

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



/* Entry: 1031fc55c; end: 1031fc627;  */

undefined1  [16] FUN_1031fc55c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe0;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1310b0);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f1310e0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031fc628);
  (*pcVar1)();
}



/* Entry: 1031fc628; end: 1031fc633;  */

undefined * FUN_1031fc628(void)

{
  return &UNK_1106240b0;
}



/* Entry: 1031fc634; end: 1031fc65f; +[SCChatMediaCarouselOperaKeys hasChatMediaCarouselLayer] */

void FUN_1031fc634(void)

{
  func_0x000107c5fadc(0xd000000000000028,0x800000010f131110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031fc660; end: 1031fc69b; -[SCChatMediaCarouselOperaKeys init] */

void FUN_1031fc660(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031fc69c; end: 1031fc6cf;  */

void FUN_1031fc69c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031fc6d0; end: 1031fc6d3; -[SCChatMediaCarouselOperaKeys .cxx_destruct] */

void FUN_1031fc6d0(void)

{
  return;
}



/* Entry: 1031fc6d4; end: 1031fc6f3;  */

void FUN_1031fc6d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c2588);
  return;
}



/* Entry: 1031fc6f4; end: 1031fc773;  */

void FUN_1031fc6f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110624178;
  func_0x000107c613fc(&UNK_110624178,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1031fc774,puVar1);
  return;
}



/* Entry: 1031fc774; end: 1031fc807;  */

void FUN_1031fc774(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  lVar3 = lStack_48;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000100083b20(&lStack_48);
    param_1[3] = (long)&UNK_1106242d8;
    FUN_1031fc818();
    param_1[4] = lVar4;
    func_0x000107c61170(lVar1);
    *param_1 = lVar3;
    param_1[1] = lStack_48;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031fc808);
  (*pcVar2)();
}



/* Entry: 1031fc808; end: 1031fc817;  */

undefined1  [16] FUN_1031fc808(void)

{
  return ZEXT816(0x1106241a0);
}



/* Entry: 1031fc818; end: 1031fc857;  */

void FUN_1031fc818(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9cb28;
  func_0x000107c61520(&DAT_10db9cb28,&UNK_1106242d8);
  puRam0000000112f4c290 = puVar1;
  return;
}



/* Entry: 1031fc858; end: 1031fcaeb;  */

void FUN_1031fc858(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_190 [64];
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = param_2;
  FUN_10326c384();
  if (((ulong)puVar2 & 1) != 0) {
    uStack_e8 = param_2[5];
    uStack_f0 = param_2[4];
    uStack_d8 = param_2[7];
    uStack_e0 = param_2[6];
    uStack_d0 = param_2[8];
    uStack_108 = param_2[1];
    uStack_110 = *param_2;
    uStack_f8 = param_2[3];
    uStack_100 = param_2[2];
    puVar3 = &UNK_10db9cc18;
    func_0x000107c614e0(&UNK_10db9cc18);
    lStack_78 = param_2[1];
    uStack_80 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    uStack_58 = param_2[5];
    uStack_60 = param_2[4];
    uStack_48 = param_2[7];
    uStack_50 = param_2[6];
    if (lStack_78 == 0) {
      func_0x000107c61574();
    }
    else {
      uStack_148 = param_2[1];
      uStack_150 = *param_2;
      uStack_138 = param_2[3];
      uStack_140 = param_2[2];
      uStack_128 = param_2[5];
      uStack_130 = param_2[4];
      uStack_118 = param_2[7];
      uStack_120 = param_2[6];
      uStack_c0 = uStack_150;
      uStack_b8 = uStack_148;
      uStack_b0 = uStack_140;
      uStack_a8 = uStack_138;
      uStack_a0 = uStack_130;
      uStack_98 = uStack_128;
      uStack_90 = uStack_120;
      uStack_88 = uStack_118;
      FUN_1031e7474(&uStack_150,auStack_190);
      puVar2 = &uStack_c0;
      FUN_1031e7358(puVar2,&uStack_110,puVar3);
      func_0x000107c61574(puVar3);
      uVar9 = 0x112f4b698;
      FUN_1031fd35c(&uStack_80,0x112f4b698,&UNK_10db9ae60);
      if (puVar2 != (undefined8 *)0x0) {
        puVar8 = puVar2;
        func_0x000107c4f958();
        func_0x000107c61180();
        if (puVar8 != (undefined8 *)0x0) {
          puVar4 = puVar8;
          func_0x000107c501b0();
          func_0x000107c61170(puVar8);
          if (((ulong)puVar4 & 1) != 0) goto LAB_1031fc96c;
          goto LAB_1031fcaac;
        }
LAB_1031fc96c:
        puVar8 = puVar2;
        func_0x000107c5c018();
        func_0x000107c61180();
        puVar4 = puVar2;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = puVar2;
          func_0x000107c5def0();
          if ((int)puVar8 == 0x65) goto LAB_1031fc9a0;
          puVar8 = puVar2;
          func_0x000107c4ab80();
          iVar1 = (int)puVar8;
          func_0x0001084360b8();
          if (iVar1 == 0) {
LAB_1031fcaac:
            func_0x000107c61170(puVar2);
            goto LAB_1031fcab4;
          }
          uVar9 = 0x800000010f131140;
          uVar5 = 0xd000000000000015;
          func_0x000107c5fadc(0xd000000000000015);
          func_0x000107c49810();
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          if (param_3 == 0) goto LAB_1031fcaac;
          lVar6 = param_3;
          func_0x000107c49820();
          func_0x000107c61170(param_3);
          if (lVar6 == 1) {
            func_0x000107c61170(puVar2);
            puVar8 = (undefined8 *)0x0;
            uVar9 = 2;
            goto LAB_1031fcabc;
          }
          if (lVar6 < 2) goto LAB_1031fcaac;
          func_0x000107c5c018();
          func_0x000107c61180();
          if (puVar4 != (undefined8 *)0x0) {
            puVar7 = puVar4;
            func_0x000107c5c05c();
            goto LAB_1031fc9c0;
          }
        }
        else {
          func_0x000107c61170();
LAB_1031fc9a0:
          func_0x000107c5c018();
          func_0x000107c61180();
          if (puVar4 != (undefined8 *)0x0) {
            puVar7 = puVar4;
            func_0x000107c5c05c();
LAB_1031fc9c0:
            func_0x000107c61180();
            func_0x000107c61170(puVar4);
            if (puVar7 != (undefined8 *)0x0) {
              puVar8 = puVar7;
              func_0x000107c5faec();
              func_0x000107c61170(puVar2);
              func_0x000107c61170(puVar7);
              goto LAB_1031fcabc;
            }
          }
        }
        func_0x000107c61170(puVar2);
        puVar8 = (undefined8 *)0x0;
        uVar9 = 0;
        goto LAB_1031fcabc;
      }
    }
  }
LAB_1031fcab4:
  puVar8 = (undefined8 *)0x0;
  uVar9 = 1;
LAB_1031fcabc:
  *param_1 = puVar8;
  param_1[1] = uVar9;
  return;
}



/* Entry: 1031fcaec; end: 1031fcaf3;  */

void FUN_1031fcaec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_190 [64];
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  puVar2 = param_2;
  FUN_10326c384();
  if (((ulong)puVar2 & 1) != 0) {
    uStack_e8 = param_2[5];
    uStack_f0 = param_2[4];
    uStack_d8 = param_2[7];
    uStack_e0 = param_2[6];
    uStack_d0 = param_2[8];
    uStack_108 = param_2[1];
    uStack_110 = *param_2;
    uStack_f8 = param_2[3];
    uStack_100 = param_2[2];
    puVar3 = &UNK_10db9cc18;
    func_0x000107c614e0(&UNK_10db9cc18);
    lStack_78 = param_2[1];
    uStack_80 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    uStack_58 = param_2[5];
    uStack_60 = param_2[4];
    uStack_48 = param_2[7];
    uStack_50 = param_2[6];
    if (lStack_78 == 0) {
      func_0x000107c61574();
    }
    else {
      uStack_148 = param_2[1];
      uStack_150 = *param_2;
      uStack_138 = param_2[3];
      uStack_140 = param_2[2];
      uStack_128 = param_2[5];
      uStack_130 = param_2[4];
      uStack_118 = param_2[7];
      uStack_120 = param_2[6];
      uStack_c0 = uStack_150;
      uStack_b8 = uStack_148;
      uStack_b0 = uStack_140;
      uStack_a8 = uStack_138;
      uStack_a0 = uStack_130;
      uStack_98 = uStack_128;
      uStack_90 = uStack_120;
      uStack_88 = uStack_118;
      FUN_1031e7474(&uStack_150,auStack_190);
      puVar2 = &uStack_c0;
      FUN_1031e7358(puVar2,&uStack_110,puVar3);
      func_0x000107c61574(puVar3);
      uVar10 = 0x112f4b698;
      FUN_1031fd35c(&uStack_80,0x112f4b698,&UNK_10db9ae60);
      if (puVar2 != (undefined8 *)0x0) {
        puVar9 = puVar2;
        func_0x000107c4f958();
        func_0x000107c61180();
        if (puVar9 != (undefined8 *)0x0) {
          puVar4 = puVar9;
          func_0x000107c501b0();
          func_0x000107c61170(puVar9);
          if (((ulong)puVar4 & 1) != 0) goto LAB_1031fc96c;
          goto LAB_1031fcaac;
        }
LAB_1031fc96c:
        puVar9 = puVar2;
        func_0x000107c5c018();
        func_0x000107c61180();
        puVar4 = puVar2;
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = puVar2;
          func_0x000107c5def0();
          if ((int)puVar9 == 0x65) goto LAB_1031fc9a0;
          puVar9 = puVar2;
          func_0x000107c4ab80();
          iVar1 = (int)puVar9;
          func_0x0001084360b8();
          if (iVar1 == 0) {
LAB_1031fcaac:
            func_0x000107c61170(puVar2);
            goto LAB_1031fcab4;
          }
          uVar10 = 0x800000010f131140;
          uVar5 = 0xd000000000000015;
          func_0x000107c5fadc(0xd000000000000015);
          func_0x000107c49810();
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          if (lVar8 == 0) goto LAB_1031fcaac;
          lVar6 = lVar8;
          func_0x000107c49820();
          func_0x000107c61170(lVar8);
          if (lVar6 == 1) {
            func_0x000107c61170(puVar2);
            puVar9 = (undefined8 *)0x0;
            uVar10 = 2;
            goto LAB_1031fcabc;
          }
          if (lVar6 < 2) goto LAB_1031fcaac;
          func_0x000107c5c018();
          func_0x000107c61180();
          if (puVar4 != (undefined8 *)0x0) {
            puVar7 = puVar4;
            func_0x000107c5c05c();
            goto LAB_1031fc9c0;
          }
        }
        else {
          func_0x000107c61170();
LAB_1031fc9a0:
          func_0x000107c5c018();
          func_0x000107c61180();
          if (puVar4 != (undefined8 *)0x0) {
            puVar7 = puVar4;
            func_0x000107c5c05c();
LAB_1031fc9c0:
            func_0x000107c61180();
            func_0x000107c61170(puVar4);
            if (puVar7 != (undefined8 *)0x0) {
              puVar9 = puVar7;
              func_0x000107c5faec();
              func_0x000107c61170(puVar2);
              func_0x000107c61170(puVar7);
              goto LAB_1031fcabc;
            }
          }
        }
        func_0x000107c61170(puVar2);
        puVar9 = (undefined8 *)0x0;
        uVar10 = 0;
        goto LAB_1031fcabc;
      }
    }
  }
LAB_1031fcab4:
  puVar9 = (undefined8 *)0x0;
  uVar10 = 1;
LAB_1031fcabc:
  *param_1 = puVar9;
  param_1[1] = uVar10;
  return;
}



/* Entry: 1031fcaf4; end: 1031fcb33;  */

void FUN_1031fcaf4(void)

{
  undefined *puVar1;
  
  if (puRam00000001135120e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9cbe8;
  func_0x000107c61520(&UNK_10db9cbe8,&UNK_110624370);
  puRam00000001135120e0 = puVar1;
  return;
}



/* Entry: 1031fcb34; end: 1031fcc07;  */

void FUN_1031fcb34(undefined8 *param_1)

{
  undefined1 auStack_280 [296];
  undefined1 auStack_158 [296];
  
  if (param_1[1] == 2) {
    func_0x0001000285a8(0x112f4c2f8,&UNK_10db9cc10);
    func_0x0001031feb20(auStack_158);
    func_0x000100854cb0(auStack_158);
    FUN_1031fd35c(auStack_158,0x112f4c298,&UNK_10db9cb20);
  }
  else if (param_1[1] == 1) {
    func_0x0001000285a8(0x112f4c2f8,&UNK_10db9cc10);
    FUN_1031fd32c(auStack_158);
    func_0x000107c610b4(auStack_280,auStack_158,0x128);
    func_0x000100854cb0(auStack_280);
  }
  else {
    FUN_1031fe5c4(*param_1);
  }
  return;
}



/* Entry: 1031fcc08; end: 1031fcc0f;  */

void FUN_1031fcc08(undefined8 *param_1)

{
  undefined1 auStack_280 [296];
  undefined1 auStack_158 [296];
  
  if (param_1[1] == 2) {
    func_0x0001000285a8(0x112f4c2f8,&UNK_10db9cc10);
    func_0x0001031feb20(auStack_158);
    func_0x000100854cb0(auStack_158);
    FUN_1031fd35c(auStack_158,0x112f4c298,&UNK_10db9cb20);
  }
  else if (param_1[1] == 1) {
    func_0x0001000285a8(0x112f4c2f8,&UNK_10db9cc10);
    FUN_1031fd32c(auStack_158);
    func_0x000107c610b4(auStack_280,auStack_158,0x128);
    func_0x000100854cb0(auStack_280);
  }
  else {
    FUN_1031fe5c4(*param_1);
  }
  return;
}



/* Entry: 1031fcc10; end: 1031fccf3;  */

undefined8 FUN_1031fcc10(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  
  uVar4 = *unaff_x20;
  uVar1 = unaff_x20[1];
  puVar2 = &UNK_110624390;
  func_0x000107c613fc(&UNK_110624390,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(uVar1);
  pcVar3 = FUN_1031fd39c;
  func_0x0001000bfde0(FUN_1031fd39c,puVar2,&UNK_110624370);
  func_0x000107c61574(puVar2);
  FUN_1031fcaf4();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar3);
  func_0x000107c6157c(uVar1);
  uVar4 = 0x112f4c298;
  func_0x0001000285a8(0x112f4c298,&UNK_10db9cb20);
  uVar5 = 0x1031fd3a0;
  func_0x000100775358(0x1031fd3a0,uVar1,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar1);
  return uVar5;
}



/* Entry: 1031fccf4; end: 1031fcd17;  */

void FUN_1031fccf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031fcd18();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031fcd18; end: 1031fcd57;  */

void FUN_1031fcd18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9cb50;
  func_0x000107c61520(&DAT_10db9cb50,&UNK_1106242d8);
  puRam0000000112f4c2a0 = puVar1;
  return;
}



/* Entry: 1031fcd58; end: 1031fcd5b;  */

void FUN_1031fcd58(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c2a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c2b0;
  func_0x00010002969c(0x112f4c2b0,&UNK_10db9cb48);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c2a8 = puVar2;
  return;
}



/* Entry: 1031fcd5c; end: 1031fcdab;  */

void FUN_1031fcd5c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4c2a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4c2b0;
  func_0x00010002969c(0x112f4c2b0,&UNK_10db9cb48);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4c2a8 = puVar2;
  return;
}



/* Entry: 1031fcdac; end: 1031fcdc3;  */

undefined ** FUN_1031fcdac(void)

{
  return &PTR_DAT_11062dbb8;
}



/* Entry: 1031fcdc4; end: 1031fcdfb;  */

undefined * FUN_1031fcdc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031fc818();
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



/* Entry: 1031fcdfc; end: 1031fcdff;  */

undefined8 * FUN_1031fcdfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c615f0();
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 1031fce00; end: 1031fce5b;  */

void FUN_1031fce00(undefined8 *param_1)

{
  func_0x000107c615e8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 1031fce5c; end: 1031fceb7;  */

undefined8 * FUN_1031fce5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1031fceb8; end: 1031fcef3;  */

undefined8 * FUN_1031fceb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615e8(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1031fcef4; end: 1031fcfab;  */

int FUN_1031fcef4(ulong *param_1,int param_2)

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



/* Entry: 1031fcfac; end: 1031fd13f;  */

undefined8 * FUN_1031fcfac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1031fd140; end: 1031fd26f;  */

int FUN_1031fd140(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar3 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < uVar2 + 1) {
    iVar1 = uVar2 - 1;
  }
  return iVar1;
}



/* Entry: 1031fd270; end: 1031fd32b;  */

undefined8 FUN_1031fd270(ulong param_1,long param_2,ulong param_3,long param_4)

{
  if (param_2 == 2) {
    if (param_4 == 2) {
      return 1;
    }
  }
  else if (param_2 == 1) {
    if (param_4 == 1) {
      return 1;
    }
  }
  else if (1 < param_4 - 1U) {
    if (param_2 == 0) {
      if (param_4 == 0) {
        return 1;
      }
    }
    else if (param_4 != 0) {
      if ((param_1 == param_3) && (param_2 == param_4)) {
        return 1;
      }
      func_0x000107c605b8();
      if ((param_1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1031fd32c; end: 1031fd35b;  */

void FUN_1031fd32c(undefined8 *param_1)

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



/* Entry: 1031fd35c; end: 1031fd39b;  */

undefined8 FUN_1031fd35c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1031fd39c; end: 1031fd3af;  */

void FUN_1031fd39c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_190 [64];
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  puVar2 = param_2;
  FUN_10326c384();
  if (((ulong)puVar2 & 1) != 0) {
    uStack_e8 = param_2[5];
    uStack_f0 = param_2[4];
    uStack_d8 = param_2[7];
    uStack_e0 = param_2[6];
    uStack_d0 = param_2[8];
    uStack_108 = param_2[1];
    uStack_110 = *param_2;
    uStack_f8 = param_2[3];
    uStack_100 = param_2[2];
    puVar3 = &UNK_10db9cc18;
    func_0x000107c614e0(&UNK_10db9cc18);
    lStack_78 = param_2[1];
    uStack_80 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    uStack_58 = param_2[5];
    uStack_60 = param_2[4];
    uStack_48 = param_2[7];
    uStack_50 = param_2[6];
    if (lStack_78 == 0) {
      func_0x000107c61574();
    }
    else {
      uStack_148 = param_2[1];
      uStack_150 = *param_2;
      uStack_138 = param_2[3];
      uStack_140 = param_2[2];
      uStack_128 = param_2[5];
      uStack_130 = param_2[4];
      uStack_118 = param_2[7];
      uStack_120 = param_2[6];
      uStack_c0 = uStack_150;
      uStack_b8 = uStack_148;
      uStack_b0 = uStack_140;
      uStack_a8 = uStack_138;
      uStack_a0 = uStack_130;
      uStack_98 = uStack_128;
      uStack_90 = uStack_120;
      uStack_88 = uStack_118;
      FUN_1031e7474(&uStack_150,auStack_190);
      puVar2 = &uStack_c0;
      FUN_1031e7358(puVar2,&uStack_110,puVar3);
      func_0x000107c61574(puVar3);
      uVar10 = 0x112f4b698;
      FUN_1031fd35c(&uStack_80,0x112f4b698,&UNK_10db9ae60);
      if (puVar2 != (undefined8 *)0x0) {
        puVar9 = puVar2;
        func_0x000107c4f958();
        func_0x000107c61180();
        if (puVar9 != (undefined8 *)0x0) {
          puVar4 = puVar9;
          func_0x000107c501b0();
          func_0x000107c61170(puVar9);
          if (((ulong)puVar4 & 1) != 0) goto LAB_1031fc96c;
          goto LAB_1031fcaac;
        }
LAB_1031fc96c:
        puVar9 = puVar2;
        func_0x000107c5c018();
        func_0x000107c61180();
        puVar4 = puVar2;
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = puVar2;
          func_0x000107c5def0();
          if ((int)puVar9 == 0x65) goto LAB_1031fc9a0;
          puVar9 = puVar2;
          func_0x000107c4ab80();
          iVar1 = (int)puVar9;
          func_0x0001084360b8();
          if (iVar1 == 0) {
LAB_1031fcaac:
            func_0x000107c61170(puVar2);
            goto LAB_1031fcab4;
          }
          uVar10 = 0x800000010f131140;
          uVar5 = 0xd000000000000015;
          func_0x000107c5fadc(0xd000000000000015);
          func_0x000107c49810();
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          if (lVar8 == 0) goto LAB_1031fcaac;
          lVar6 = lVar8;
          func_0x000107c49820();
          func_0x000107c61170(lVar8);
          if (lVar6 == 1) {
            func_0x000107c61170(puVar2);
            puVar9 = (undefined8 *)0x0;
            uVar10 = 2;
            goto LAB_1031fcabc;
          }
          if (lVar6 < 2) goto LAB_1031fcaac;
          func_0x000107c5c018();
          func_0x000107c61180();
          if (puVar4 != (undefined8 *)0x0) {
            puVar7 = puVar4;
            func_0x000107c5c05c();
            goto LAB_1031fc9c0;
          }
        }
        else {
          func_0x000107c61170();
LAB_1031fc9a0:
          func_0x000107c5c018();
          func_0x000107c61180();
          if (puVar4 != (undefined8 *)0x0) {
            puVar7 = puVar4;
            func_0x000107c5c05c();
LAB_1031fc9c0:
            func_0x000107c61180();
            func_0x000107c61170(puVar4);
            if (puVar7 != (undefined8 *)0x0) {
              puVar9 = puVar7;
              func_0x000107c5faec();
              func_0x000107c61170(puVar2);
              func_0x000107c61170(puVar7);
              goto LAB_1031fcabc;
            }
          }
        }
        func_0x000107c61170(puVar2);
        puVar9 = (undefined8 *)0x0;
        uVar10 = 0;
        goto LAB_1031fcabc;
      }
    }
  }
LAB_1031fcab4:
  puVar9 = (undefined8 *)0x0;
  uVar10 = 1;
LAB_1031fcabc:
  *param_1 = puVar9;
  param_1[1] = uVar10;
  return;
}



/* Entry: 1031fd3b0; end: 1031fd41f;  */

void FUN_1031fd3b0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61574(unaff_x20[4]);
  func_0x000107c61574(unaff_x20[5]);
  lVar3 = *(long *)(*unaff_x20 + 0x80);
  uVar1 = 0xff;
  func_0x0001031fd500(0xff,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58),
                      *(undefined8 *)(lVar2 + 0x60));
  lVar2 = 0;
  func_0x000107c60188(0,uVar1);
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar3,lVar2);
  return;
}



/* Entry: 1031fd420; end: 1031fd443;  */

void FUN_1031fd420(void)

{
  FUN_1031fd3b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031fd444; end: 1031fd447;  */

void FUN_1031fd444(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1031fd448; end: 1031fd4f3;  */

void FUN_1031fd448(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_30 = PTR___sBoWV_11034d678 + 0x40;
  uVar1 = 0xff;
  func_0x0001031fd500(0xff,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60));
  lVar2 = 0x13f;
  func_0x000107c60188();
  if (uVar1 < 0x40) {
    lStack_28 = *(long *)(lVar2 + -8) + 0x40;
    func_0x000107c61524(param_1,0,4,&puStack_40,param_1 + 0x68);
  }
  return;
}



/* Entry: 1031fd4f4; end: 1031fd513;  */

void FUN_1031fd4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e750868);
  return;
}



/* Entry: 1031fd514; end: 1031fd5bb;  */

void FUN_1031fd514(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    func_0x000107c6143c();
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      func_0x000107c5eea4();
      if (uVar2 < 0x40) {
        lStack_28 = *(long *)(lVar1 + -8) + 0x40;
        func_0x000107c6153c(param_1,0,3,&lStack_38,param_1 + 0x28);
      }
    }
  }
  return;
}



/* Entry: 1031fd5bc; end: 1031fd6fb;  */

long * FUN_1031fd5bc(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar12 = *(long *)(lVar1 + -8);
  lVar10 = *(long *)(lVar2 + -8);
  uVar3 = *(uint *)(lVar10 + 0x50);
  uVar7 = (ulong)uVar3 & 0xff;
  uVar8 = *(long *)(lVar12 + 0x40) + uVar7;
  lVar13 = *(long *)(lVar10 + 0x40);
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  lVar13 = lVar13 + uVar6;
  uVar4 = uVar3 | *(uint *)(lVar12 + 0x50) | *(uint *)(lVar11 + 0x50);
  uVar3 = uVar4 & 0xff;
  if ((uVar3 < 8 &&
      (lVar13 + (uVar8 & (uVar7 ^ 0xffffffffffffffff)) & (uVar6 ^ 0xffffffffffffffff)) +
      *(long *)(lVar11 + 0x40) < 0x19) && (uVar4 & 0x100000) == 0) {
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar1);
    uVar9 = uVar8 + (long)param_1 & ~uVar7;
    uVar8 = uVar8 + (long)param_2 & ~uVar7;
    (**(code **)(lVar10 + 0x10))(uVar9,uVar8,lVar2);
    (**(code **)(lVar11 + 0x10))(uVar9 + lVar13 & ~uVar6,uVar8 + lVar13 & ~uVar6,lVar5);
  }
  else {
    lVar13 = *param_2;
    *param_1 = lVar13;
    param_1 = (long *)(lVar13 + ((ulong)uVar3 + 0x10 & ((ulong)uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1031fd6fc; end: 1031fda23;  */

void FUN_1031fd6fc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar4 + 8))();
  lVar3 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar2 = *(long *)(lVar4 + 0x40) + param_1 + (ulong)*(byte *)(lVar3 + 0x50) &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar3 + 8))(uVar2);
  lVar4 = *(long *)(lVar3 + 0x40);
  lVar3 = 0;
  func_0x000107c5eea4();
  uVar1 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001031fd780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))
            (uVar2 + lVar4 + uVar1 & (uVar1 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Entry: 1031fda24; end: 1031fde87;  */

uint * FUN_1031fda24(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar17 = *(long *)(lVar4 + -8);
  uVar6 = *(uint *)(lVar17 + 0x54);
  lVar16 = *(long *)(lVar5 + -8);
  uVar7 = *(uint *)(lVar16 + 0x54);
  uVar11 = uVar7;
  if (uVar7 <= uVar6) {
    uVar11 = uVar6;
  }
  lVar8 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar8 + -8);
  uVar9 = *(uint *)(lVar10 + 0x54);
  uVar3 = uVar9;
  if (uVar9 <= uVar11) {
    uVar3 = uVar11;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar13 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar1 = *(long *)(lVar17 + 0x40) + uVar13;
  uVar12 = (ulong)*(byte *)(lVar10 + 0x50);
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1031fdb30;
  lVar2 = (*(long *)(lVar16 + 0x40) + uVar12 + (uVar1 & (uVar13 ^ 0xffffffffffffffff)) &
          (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40);
  uVar14 = (uint)lVar2;
  uVar11 = uVar14 << 3;
  if (uVar14 < 4) {
    uVar15 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar11 & 0x1f)) >> (ulong)(uVar11 & 0x1f)) + 1;
    if (0xff < uVar15) {
      if (uVar15 >> 0x10 == 0) {
        uVar15 = (uint)*(ushort *)((long)param_1 + lVar2);
      }
      else {
        uVar15 = *(uint *)((long)param_1 + lVar2);
      }
      goto LAB_1031fdac8;
    }
    if (1 < uVar15) goto LAB_1031fdac4;
  }
  else {
LAB_1031fdac4:
    uVar15 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_1031fdac8:
    if (uVar15 != 0) {
      uVar6 = 0;
      if (uVar14 < 4) {
        uVar6 = uVar15 - 1 << (ulong)(uVar11 & 0x1f);
      }
      if (uVar14 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 4;
        if (uVar14 < 4) {
          uVar11 = uVar14;
        }
        if ((int)uVar11 < 3) {
          if (uVar11 == 1) {
            uVar11 = (uint)(byte)*param_1;
          }
          else {
            uVar11 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar11 == 3) {
          uVar11 = (uint)(uint3)*param_1;
        }
        else {
          uVar11 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar3 + (uVar11 | uVar6) + 1);
    }
  }
  if (uVar3 == 0) {
    return (uint *)0x0;
  }
LAB_1031fdb30:
  if (uVar6 == uVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 0x30);
    lVar8 = lVar4;
    uVar9 = uVar6;
  }
  else {
    param_1 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar13);
    if (uVar7 == uVar3) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x30);
      lVar8 = lVar5;
      uVar9 = uVar7;
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x30);
      param_1 = (uint *)((ulong)((long)param_1 + uVar12 + *(long *)(lVar16 + 0x40)) & ~uVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001031fdba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar9,lVar8);
  return param_1;
}



/* Entry: 1031fde88; end: 1031fe1c3;  */

void FUN_1031fde88(long param_1,double param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long extraout_x12;
  long *unaff_x20;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong auStack_320 [6];
  long lStack_2f0;
  undefined1 auStack_2e8 [296];
  undefined1 auStack_1c0 [304];
  undefined1 auStack_90 [32];
  
  lVar2 = 0;
  auStack_320[4] = param_3;
  auStack_320[5] = param_4;
  lStack_2f0 = param_1;
  func_0x000107c5eea4();
  auStack_320[1] = *(long *)(lVar2 + -8);
  auStack_320[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(auStack_320[1] + 0x40));
  uVar5 = (long)auStack_320 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112f4c510;
  auStack_320[0] = uVar5;
  func_0x0001000285a8(0x112f4c510,&UNK_10db9cdd8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = uVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  auStack_320[3] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12;
  lVar2 = 0x112f4c308;
  func_0x0001000285a8(0x112f4c308,&UNK_10db9cd10);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (ulong *)(lVar6 - extraout_x8_01);
  func_0x00010006c804();
  lVar9 = *(long *)(*unaff_x20 + 0x80);
  func_0x000107c61428((long)unaff_x20 + lVar9,auStack_90,0,0);
  func_0x000103202600((long)unaff_x20 + lVar9,lVar6,0x112f4c510,&UNK_10db9cdd8);
  lVar3 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,lVar2);
  lVar1 = lStack_2f0;
  if ((int)lVar3 == 1) {
    func_0x0001032025c0(lVar6,0x112f4c510,&UNK_10db9cdd8);
    func_0x00010320253c(auStack_1c0);
    func_0x000107c610b4(lStack_2f0,auStack_1c0,0x129);
    goto LAB_1031fe19c;
  }
  func_0x000103202570(lVar6,puVar8);
  uVar5 = puVar8[1];
  if (uVar5 == 0) {
    if (auStack_320[5] == 0) goto LAB_1031fe070;
  }
  else if ((auStack_320[5] != 0) &&
          ((uVar4 = *puVar8, uVar4 == auStack_320[4] && uVar5 == auStack_320[5] ||
           (func_0x000107c605b8(uVar4,uVar5,auStack_320[4],auStack_320[5],0), (uVar4 & 1) != 0)))) {
LAB_1031fe070:
    uVar5 = auStack_320[0];
    (*(code *)unaff_x20[3])(auStack_320[0]);
    func_0x000107c5ee68((long)puVar8 + (long)*(int *)(lVar2 + 0x30));
    (**(code **)(auStack_320[1] + 8))(uVar5,auStack_320[2]);
    func_0x000107c610b4(auStack_1c0,puVar8 + 2,0x128);
    func_0x000107c610b4(lVar1,puVar8 + 2,0x128);
    func_0x000103202600(auStack_1c0,auStack_2e8,0x112f4c2b0,&UNK_10db9cb48);
    func_0x0001032025c0(puVar8,0x112f4c308,&UNK_10db9cd10);
    *(bool *)(lVar1 + 0x128) = param_2 < 300.0;
    FUN_103202648(lVar1);
    goto LAB_1031fe19c;
  }
  func_0x0001032025c0(puVar8,0x112f4c308,&UNK_10db9cd10);
  uVar5 = auStack_320[3];
  (**(code **)(lVar7 + 0x38))(auStack_320[3],1,1,lVar2);
  func_0x000107c61428((long)unaff_x20 + lVar9,auStack_1c0,0x21,0);
  FUN_103201414(uVar5,(long)unaff_x20 + lVar9);
  func_0x000107c614a8(auStack_1c0);
  func_0x00010320253c(auStack_1c0);
  func_0x000107c610b4(lVar1,auStack_1c0,0x129);
LAB_1031fe19c:
  func_0x000100070bfc();
  return;
}



/* Entry: 1031fe1c4; end: 1031fe307;  */

/* WARNING: Possible PIC construction at 0x0001031fe2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031fe2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031fe2dc) */
/* WARNING: Removing unreachable block (ram,0x0001031fe2ec) */

void FUN_1031fe1c4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_2;
  func_0x00010033bad0();
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8();
  func_0x000107c486f8(0x404c000000000000,0x404c000000000000);
  *(undefined **)(lVar1 + 0x30) = puVar2;
  *(undefined8 *)(lVar1 + 0x40) = 0x4046000000000000;
  *(undefined8 *)(lVar1 + 0x38) = 0x4046000000000000;
  plVar3 = (long *)0x112f4c300;
  func_0x0001000285a8(0x112f4c300,&UNK_10db9cc40);
  func_0x000107c613fc();
  lVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  plVar3[5] = lVar4;
  lVar5 = *(long *)(*plVar3 + 0x80);
  lVar4 = 0x112f4c308;
  func_0x0001000285a8(0x112f4c308,&UNK_10db9cd10);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))((long)plVar3 + lVar5,1,1,lVar4);
  plVar3[2] = 0x4072c00000000000;
  plVar3[3] = 0x1031fd3ac;
  plVar3[4] = 0;
  *(long **)(lVar1 + 0x48) = plVar3;
  *(long *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1031fe308; end: 1031fe313;  */

/* WARNING: Possible PIC construction at 0x0001031fe2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031fe2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031fe2dc) */
/* WARNING: Removing unreachable block (ram,0x0001031fe2ec) */

void FUN_1031fe308(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = lVar1;
  func_0x00010033bad0();
  func_0x000107c613fc();
  puVar6 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8();
  func_0x000107c486f8(0x404c000000000000,0x404c000000000000);
  *(undefined **)(lVar5 + 0x30) = puVar6;
  *(undefined8 *)(lVar5 + 0x40) = 0x4046000000000000;
  *(undefined8 *)(lVar5 + 0x38) = 0x4046000000000000;
  plVar7 = (long *)0x112f4c300;
  func_0x0001000285a8(0x112f4c300,&UNK_10db9cc40);
  func_0x000107c613fc();
  lVar8 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  plVar7[5] = lVar8;
  lVar9 = *(long *)(*plVar7 + 0x80);
  lVar8 = 0x112f4c308;
  func_0x0001000285a8(0x112f4c308,&UNK_10db9cd10);
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))((long)plVar7 + lVar9,1,1,lVar8);
  plVar7[2] = 0x4072c00000000000;
  plVar7[3] = 0x1031fd3ac;
  plVar7[4] = 0;
  *(long **)(lVar5 + 0x48) = plVar7;
  *(long *)(lVar5 + 0x10) = lVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 1031fe314; end: 1031fe437;  */

long FUN_1031fe314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  func_0x000107c613fc();
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8();
  func_0x000107c486f8(0x404c000000000000,0x404c000000000000);
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0x4046000000000000;
  *(undefined8 *)(unaff_x20 + 0x38) = 0x4046000000000000;
  plVar2 = (long *)0x112f4c300;
  func_0x0001000285a8(0x112f4c300,&UNK_10db9cc40);
  func_0x000107c613fc();
  lVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  plVar2[5] = lVar3;
  lVar4 = *(long *)(*plVar2 + 0x80);
  lVar3 = 0x112f4c308;
  func_0x0001000285a8(0x112f4c308,&UNK_10db9cd10);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)plVar2 + lVar4,1,1,lVar3);
  plVar2[2] = 0x4072c00000000000;
  plVar2[3] = 0x1031fd3ac;
  plVar2[4] = 0;
  *(long **)(unaff_x20 + 0x48) = plVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return unaff_x20;
}



/* Entry: 1031fe438; end: 1031fe467;  */

uint FUN_1031fe438(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000103200b7c(uVar1,*param_2,0x112ec02f0,&PTR_PTR_1126ab030);
  return (uint)uVar1 & 1;
}



/* Entry: 1031fe468; end: 1031fe4bf;  */

ulong FUN_1031fe468(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar3 = *param_1;
  uVar8 = param_1[1];
  uVar1 = param_2[1];
  func_0x000103200b7c(uVar3,*param_2,0x112ec02f0,&PTR_PTR_1126ab030);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if ((uVar8 & 0xc000000000000001) == 0) {
    if ((uVar1 & 0xc000000000000001) == 0) {
      if (uVar8 == uVar1) {
        uVar3 = 1;
      }
      else {
        if (*(long *)(uVar8 + 0x10) == *(long *)(uVar1 + 0x10)) {
          uVar11 = 1L << ((ulong)*(byte *)(uVar8 + 0x20) & 0x3f);
          uVar3 = 0xffffffffffffffff;
          if ((*(byte *)(uVar8 + 0x20) & 0x3f) < 6) {
            uVar3 = ~(-1L << (uVar11 & 0x3f));
          }
          uVar3 = uVar3 & *(ulong *)(uVar8 + 0x40);
          uVar9 = 0;
          func_0x000107c61438();
          func_0x000107c61434(uVar1);
          lVar5 = 0;
          do {
            if (uVar3 == 0) {
              do {
                lVar12 = lVar5 + 1;
                if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103201050);
                  (*pcVar2)();
                }
                if ((long)(uVar11 + 0x3f >> 6) <= lVar12) {
                  func_0x000107c6142c(uVar1);
                  func_0x000107c61430(uVar8,2);
                  return 1;
                }
                uVar3 = ((ulong *)(uVar8 + 0x40))[lVar12];
                lVar5 = lVar5 + 1;
              } while (uVar3 == 0);
              uVar10 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar3 = uVar3 - 1 & uVar3;
              uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar12 * 0x40;
            }
            else {
              uVar10 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar3 = uVar3 - 1 & uVar3;
              uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar5 << 6;
              lVar12 = lVar5;
            }
            lVar4 = *(long *)(*(long *)(uVar8 + 0x30) + uVar10 * 8);
            uVar10 = *(ulong *)(*(long *)(uVar8 + 0x38) + uVar10 * 8);
            func_0x000107c61174();
            func_0x000107c61174();
            lVar5 = lVar4;
            func_0x000100121450();
            func_0x000107c61170(lVar4);
            if ((uVar9 & 1) == 0) {
              func_0x000107c61170(uVar10);
              break;
            }
            FUN_1032024e4(0,0x112ea4a00,&PTR_PTR_1126bea48);
            uVar6 = *(ulong *)(*(long *)(uVar1 + 0x38) + lVar5 * 8);
            func_0x000107c61174();
            uVar7 = uVar6;
            uVar9 = uVar10;
            func_0x000107c60118();
            func_0x000107c61170(uVar10);
            func_0x000107c61170(uVar6);
            lVar5 = lVar12;
          } while ((uVar7 & 1) != 0);
          func_0x000107c6142c(uVar1);
          func_0x000107c61430(uVar8,2);
        }
        uVar3 = 0;
      }
    }
    else {
      uVar3 = uVar1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar1) {
        uVar3 = uVar1;
      }
      func_0x000107c61434();
      FUN_10320120c(uVar3,uVar8);
      func_0x000107c6142c(uVar8);
      uVar3 = (ulong)((uint)uVar3 & 1);
    }
  }
  else {
    uVar3 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar3 = uVar8;
    }
    if ((uVar1 & 0xc000000000000001) != 0) {
      uVar8 = uVar1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar1) {
        uVar8 = uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss17__CocoaDictionaryV7isEqual2toSbAB_tF_11034e850)(uVar8,uVar3);
      return uVar8;
    }
    func_0x000107c61434(uVar1);
    FUN_10320120c(uVar3,uVar1);
    func_0x000107c6142c(uVar1);
    uVar3 = (ulong)((uint)uVar3 & 1);
  }
  return uVar3;
}



/* Entry: 1031fe4c0; end: 1031fe56b;  */

byte FUN_1031fe4c0(ulong *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  uVar2 = param_1[1];
  lVar5 = *param_2;
  bVar1 = *(byte *)(param_2 + 1);
  if (uVar4 == 0) {
    if (lVar5 == 0) {
LAB_1031fe544:
      return (byte)uVar2 ^ bVar1 ^ 1;
    }
  }
  else if (lVar5 != 0) {
    FUN_1032024e4(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c61174(lVar5);
    func_0x000107c61174();
    uVar3 = uVar4;
    func_0x000107c60118();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar5);
    if ((uVar3 & 1) != 0) goto LAB_1031fe544;
  }
  return 0;
}



/* Entry: 1031fe56c; end: 1031fe5c3;  */

uint FUN_1031fe56c(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar1 = param_2[1];
  FUN_103200a34(uVar3,*param_2);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000103200b7c(uVar4,uVar1,0x112e152f0,&PTR_PTR_1126b5b00);
    uVar2 = (uint)uVar4;
  }
  return uVar2 & 1;
}



/* Entry: 1031fe5c4; end: 1031fed3b;  */

code * FUN_1031fe5c4(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_748 [304];
  undefined1 auStack_618 [296];
  undefined1 auStack_4f0 [296];
  undefined1 auStack_3c8 [304];
  undefined1 auStack_298 [296];
  byte bStack_170;
  undefined1 auStack_168 [296];
  
  FUN_1031fde88(auStack_298);
  func_0x000107c610b4(auStack_168,auStack_298,0x128);
  puVar1 = auStack_298;
  func_0x000100d3cb6c();
  if ((int)puVar1 == 1) {
    FUN_1031fed88();
    puVar4 = &UNK_1106245c0;
    func_0x000107c613fc(&UNK_1106245c0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    puVar5 = &UNK_1106245e8;
    func_0x000107c613fc(&UNK_1106245e8,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = param_2;
    func_0x000107c61434(param_2);
    pcVar2 = FUN_1031ff1a0;
    func_0x00010487e4e0(FUN_1031ff1a0,puVar5);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar5);
    uVar6 = 0x112f4c298;
    func_0x0001000285a8(0x112f4c298,&UNK_10db9cb20);
    pcVar7 = FUN_1031ff1ac;
    func_0x0001000bfde0(FUN_1031ff1ac,0,uVar6);
    func_0x000107c61574(pcVar2);
  }
  else {
    if ((bStack_170 & 1) == 0) {
      uVar3 = 0;
      FUN_1031fed88(0);
      puVar4 = &UNK_1106245c0;
      func_0x000107c613fc(&UNK_1106245c0,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar5 = &UNK_110624610;
      func_0x000107c613fc(&UNK_110624610,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = param_1;
      *(undefined8 *)(puVar5 + 0x20) = param_2;
      func_0x000107c61434(param_2);
      uVar6 = 0x103202974;
      func_0x00010487e4e0(0x103202974,puVar5);
      func_0x000107c61574(uVar3);
      func_0x000107c61574(puVar5);
      uVar3 = 0x112f4c298;
      func_0x0001000285a8(0x112f4c298,&UNK_10db9cb20);
      pcVar7 = FUN_1031ff1ac;
      func_0x0001000bfde0(FUN_1031ff1ac,0,uVar3);
      func_0x000107c61574(uVar6);
      uVar6 = 0x1031fe8c4;
      func_0x0001000c0ebc(0x1031fe8c4,0);
      func_0x000107c61574(pcVar7);
      func_0x000107c610b4(auStack_4f0,auStack_168,0x128);
      FUN_1031ff238(auStack_4f0);
      func_0x000107c610b4(auStack_618,auStack_4f0,0x128);
      func_0x000107c610b4(auStack_3c8,auStack_298,0x129);
      func_0x000103202600(auStack_3c8,auStack_748,0x112f4c418,&UNK_10db9cd20);
      pcVar7 = (code *)auStack_618;
      func_0x0001006c71a4(pcVar7);
      func_0x000107c61574(uVar6);
      func_0x0001032025c0(auStack_298,0x112f4c420,&UNK_10db9cd28);
      puVar1 = auStack_618;
    }
    else {
      func_0x0001000285a8(0x112f4c2f8,&UNK_10db9cc10);
      func_0x000107c610b4(auStack_3c8,auStack_168,0x128);
      FUN_1031ff238(auStack_3c8);
      func_0x000107c610b4(auStack_748,auStack_3c8,0x128);
      pcVar7 = (code *)auStack_748;
      func_0x000100854cb0(pcVar7);
      puVar1 = auStack_748;
    }
    func_0x0001032025c0(puVar1,0x112f4c298,&UNK_10db9cb20);
  }
  return pcVar7;
}



/* Entry: 1031fed3c; end: 1031fed87;  */

void FUN_1031fed3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031fed88; end: 1031fefb7;  */

undefined8 FUN_1031fed88(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar2 = uStack_48;
  uVar6 = uStack_48;
  func_0x000107c3f8f8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar1 = uVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  puVar3 = &UNK_110624658;
  func_0x000107c613fc(&UNK_110624658,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  uVar2 = 0x112f4c518;
  func_0x0001000285a8(0x112f4c518,&UNK_10db9cde0);
  func_0x000107c613fc();
  pcVar4 = FUN_103201464;
  func_0x0001000b64ac(FUN_103201464,puVar3,uVar2);
  pcVar5 = pcVar4;
  FUN_10320146c();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar4);
  puVar3 = &UNK_110624680;
  func_0x000107c613fc(&UNK_110624680,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  func_0x000107c6157c();
  func_0x000107c615f0(uVar1);
  pcVar4 = FUN_1032014ac;
  func_0x00010068b194(FUN_1032014ac,puVar3,&UNK_110624990);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar3);
  uVar6 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(pcVar4);
  puVar3 = &UNK_1106246a8;
  func_0x000107c613fc(&UNK_1106246a8,0x19,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar3[0x18] = param_1;
  func_0x000107c6157c();
  uVar2 = 0x1032014b4;
  func_0x00010068b194(0x1032014b4,puVar3,&UNK_110624910);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c();
  func_0x0001000285a8(0x112f4c508,&UNK_10db9cdd0);
  uVar6 = 0x1032014c0;
  func_0x0001000bfde0(0x1032014c0);
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574();
  return uVar6;
}



/* Entry: 1031fefb8; end: 1031ff19f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1031fefb8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [304];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [296];
  char cStack_70;
  
  lVar4 = 0x112f4c510;
  func_0x0001000285a8(0x112f4c510,&UNK_10db9cdd8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar5 = (undefined8 *)((long)&uStack_300 + lVar4);
  func_0x000107c610b4(auStack_198,param_1,0x129);
  if (cStack_70 == '\x01') {
    iVar2 = (int)auStack_198;
    func_0x000100d3cb6c();
    if (iVar2 != 1) {
      func_0x000107c61428(param_2 + 0x10,auStack_1b0,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61648();
      if (param_2 != 0) {
        plVar6 = *(long **)(param_2 + 0x48);
        func_0x000103202600(auStack_198,auStack_2e0,0x112f4c508,&UNK_10db9cdd0);
        func_0x000107c6157c(plVar6);
        func_0x000107c61574(param_2);
        func_0x00010006c804();
        *puVar5 = param_3;
        *(undefined8 *)(auStack_2f0 + lVar4 + -8) = param_4;
        pcVar1 = (code *)plVar6[3];
        lVar3 = 0x112f4c308;
        func_0x0001000285a8(0x112f4c308,&UNK_10db9cd10);
        iVar2 = *(int *)(lVar3 + 0x30);
        func_0x000107c61434(param_4);
        (*pcVar1)((long)puVar5 + (long)iVar2);
        func_0x000107c610b4(auStack_2f0 + lVar4,param_1,0x128);
        (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar5,0,1,lVar3);
        lVar4 = *(long *)(*plVar6 + 0x80);
        func_0x000107c61428((long)plVar6 + lVar4,&uStack_2f8,0x21,0);
        func_0x000103202600(auStack_198,auStack_2e0,0x112f4c508,&UNK_10db9cdd0);
        FUN_103201414(puVar5,(long)plVar6 + lVar4);
        func_0x000107c614a8(&uStack_2f8);
        func_0x000100070bfc();
        func_0x000107c61574(plVar6);
        func_0x0001032025c0(auStack_198,0x112f4c508,&UNK_10db9cdd0);
      }
    }
  }
  return;
}



/* Entry: 1031ff1a0; end: 1031ff1ab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1031ff1a0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [304];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [296];
  char cStack_70;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar6 = 0x112f4c510;
  func_0x0001000285a8(0x112f4c510,&UNK_10db9cdd8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = -extraout_x8;
  puVar7 = (undefined8 *)((long)&uStack_300 + lVar6);
  func_0x000107c610b4(auStack_198,param_1,0x129);
  if (cStack_70 == '\x01') {
    iVar3 = (int)auStack_198;
    func_0x000100d3cb6c();
    if (iVar3 != 1) {
      func_0x000107c61428(lVar4 + 0x10,auStack_1b0,0,0);
      lVar4 = lVar4 + 0x10;
      func_0x000107c61648();
      if (lVar4 != 0) {
        plVar8 = *(long **)(lVar4 + 0x48);
        func_0x000103202600(auStack_198,auStack_2e0,0x112f4c508,&UNK_10db9cdd0);
        func_0x000107c6157c(plVar8);
        func_0x000107c61574(lVar4);
        func_0x00010006c804();
        *puVar7 = uVar2;
        *(undefined8 *)(auStack_2f0 + lVar6 + -8) = uVar5;
        pcVar1 = (code *)plVar8[3];
        lVar4 = 0x112f4c308;
        func_0x0001000285a8(0x112f4c308,&UNK_10db9cd10);
        iVar3 = *(int *)(lVar4 + 0x30);
        func_0x000107c61434(uVar5);
        (*pcVar1)((long)puVar7 + (long)iVar3);
        func_0x000107c610b4(auStack_2f0 + lVar6,param_1,0x128);
        (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar7,0,1,lVar4);
        lVar6 = *(long *)(*plVar8 + 0x80);
        func_0x000107c61428((long)plVar8 + lVar6,&uStack_2f8,0x21,0);
        func_0x000103202600(auStack_198,auStack_2e0,0x112f4c508,&UNK_10db9cdd0);
        FUN_103201414(puVar7,(long)plVar8 + lVar6);
        func_0x000107c614a8(&uStack_2f8);
        func_0x000100070bfc();
        func_0x000107c61574(plVar8);
        func_0x0001032025c0(auStack_198,0x112f4c508,&UNK_10db9cdd0);
      }
    }
  }
  return;
}



/* Entry: 1031ff1ac; end: 1031ff20b;  */

void FUN_1031ff1ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_280 [304];
  undefined1 auStack_150 [304];
  
  func_0x000107c610b4(auStack_150,param_2,0x129);
  func_0x000103202600(auStack_150,auStack_280,0x112f4c508,&UNK_10db9cdd0);
  func_0x000107c610b4(param_1,auStack_150,0x128);
  return;
}



/* Entry: 1031ff20c; end: 1031ff237;  */

void FUN_1031ff20c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031ff238; end: 1031ff23b;  */

void FUN_1031ff238(void)

{
  return;
}



/* Entry: 1031ff23c; end: 1031ff5cf;  */

code * FUN_1031ff23c(ulong *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  uVar12 = *param_1;
  uStack_68 = uVar12;
  if (uVar12 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar13 = uVar12;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar12);
  if ((long)uVar13 < 2) {
    FUN_103201c78(&uStack_68);
    uVar12 = uStack_68;
  }
  uVar13 = uVar12 & 0xffffffffffffff8;
  if (uVar12 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar13 + 0x10);
  }
  else {
    uVar14 = uVar13;
    if (0x7fffffffffffffff < uVar12) {
      uVar14 = uVar12;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar15 = 0;
  while( true ) {
    if (uVar14 == uVar15) {
      puVar6 = puVar7;
      func_0x00010254afb4(puVar7);
      func_0x000107c6142c(puVar7);
      if (param_3 == 0) {
        func_0x000107c6142c(puVar6);
        func_0x0001000285a8(0x112f4c548,&UNK_10db9ce18);
        func_0x000107c61434(uVar12);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_103201ff0();
        pcVar2 = (code *)&uStack_78;
        uStack_78 = uVar12;
        puStack_70 = puVar7;
        func_0x000100854cb0(pcVar2);
        func_0x000107c6142c(puVar7);
        func_0x000107c61430(uVar12,2);
      }
      else {
        func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
        uVar8 = 0;
        FUN_1032024e4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar9 = uVar8;
        func_0x000100120cb0();
        func_0x000107c615f0(param_3);
        puVar7 = puVar6;
        func_0x000107c5fe08(puVar6,uVar8,uVar9);
        func_0x000107c6142c(puVar6);
        lVar10 = param_3;
        func_0x000107c4f970(param_3);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        lVar11 = lVar10;
        func_0x0001000b637c(lVar10);
        func_0x000107c61170(lVar10);
        puVar7 = &UNK_1106247c0;
        func_0x000107c613fc(&UNK_1106247c0,0x18,7);
        *(ulong *)(puVar7 + 0x10) = uVar12;
        func_0x000107c61434(uVar12);
        pcVar2 = FUN_103202524;
        func_0x0001000bfde0(FUN_103202524,puVar7,&UNK_110624990);
        func_0x000107c6142c(uVar12);
        func_0x000107c615e8(param_3);
        func_0x000107c61574(lVar11);
        func_0x000107c61574(puVar7);
      }
      return pcVar2;
    }
    if ((uVar12 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar13 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031ff5a4);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar12 + uVar15 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar15;
      FUN_103201050(uVar15,uVar12,&PTR_PTR_1126ab030,0x112ec02f0);
    }
    uVar1 = uVar15 + 1;
    if (SCARRY8(uVar15,1)) break;
    uVar4 = uVar3;
    func_0x000107c3ea08();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar15 = uVar15 + 1;
    if (uVar4 != 0) {
      puVar6 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
         (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar5 = puVar7;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_1032015a8(0,puVar5 + 1,1,puVar7,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,
                      0x112d4a820,&UNK_10d910f30);
      }
      uVar3 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar15 = *(ulong *)(uVar3 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar15) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_1032015a8(puVar7,uVar15 + 1,1,puVar6,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,
                      0x112d4a820,&UNK_10d910f30);
        uVar3 = (ulong)puVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar3 + 0x10) = uVar15 + 1;
      *(ulong *)(uVar3 + uVar15 * 8 + 0x20) = uVar4;
      uVar15 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031ff5a0);
  (*pcVar2)();
}



/* Entry: 1031ff5d0; end: 1031ff677;  */

void FUN_1031ff5d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_48;
  
  uVar5 = *param_2;
  lStack_48 = 0;
  uVar2 = 0;
  FUN_1032024e4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = 0;
  FUN_1032024e4(0,0x112ea4a00,&PTR_PTR_1126bea48);
  uVar4 = uVar3;
  func_0x000100120cb0();
  func_0x000107c5f9e0(uVar5,&lStack_48,uVar2,uVar3,uVar4);
  if (lStack_48 != 0) {
    *param_1 = param_3;
    param_1[1] = lStack_48;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ff678);
  (*pcVar1)();
}



/* Entry: 1031ff678; end: 1031ffb37;  */

code * FUN_1031ff678(undefined8 *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined8 *****pppppuVar12;
  char *pcVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined8 *****pppppuVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 ****ppppuStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  char *pcStack_98;
  undefined *puStack_90;
  
  pcVar13 = (char *)*param_1;
  uVar2 = param_1[1];
  if ((ulong)pcVar13 >> 0x3e == 0) {
    pcVar17 = *(char **)(((ulong)pcVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar17 = (char *)((ulong)pcVar13 & 0xffffffffffffff8);
    if ((char *)0x7fffffffffffffff < pcVar13) {
      pcVar17 = pcVar13;
    }
    func_0x000107c60480();
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar17 != (char *)0x0) {
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    pcVar15 = (char *)((ulong)pcVar17 & ((long)pcVar17 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x0001032019d8(0,pcVar15,0);
    if ((long)pcVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1031ffb38);
      (*pcVar3)();
    }
    pcVar18 = (char *)0x0;
    pppppuVar16 = *(undefined8 ******)(param_2 + 0x30);
    do {
      puVar14 = puStack_90;
      if (((ulong)pcVar13 & 0xc000000000000001) == 0) {
        pcVar4 = *(char **)(pcVar13 + (long)pcVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        pcVar4 = pcVar18;
        pcVar15 = pcVar13;
        FUN_103201050(pcVar18,pcVar13,&PTR_PTR_1126ab030,0x112ec02f0);
      }
      pcVar5 = pcVar4;
      func_0x000107c424f8();
      func_0x000107c61180();
      if (pcVar5 == (char *)0x0) {
        pcVar5 = pcVar4;
        func_0x000107c3ea08();
        func_0x000107c61180();
        if (pcVar5 == (char *)0x0) {
LAB_1031ff9e8:
          pcVar15 = &UNK_10db9cdf8;
          func_0x0001000285a8(0x112f4c530);
          ppppuStack_c8 = (undefined8 *****)0x0;
          uStack_c0 = uStack_c0 & 0xffffffffffffff00;
          pppppuVar12 = &ppppuStack_c8;
          func_0x000100854cb0();
        }
        else {
          if ((uVar2 & 0xc000000000000001) == 0) {
            if (*(long *)(uVar2 + 0x10) != 0) {
              func_0x000107c61434(uVar2);
              pcVar11 = pcVar5;
              func_0x000100121450();
              if (((ulong)pcVar15 & 1) != 0) {
                ppppuStack_c8 = *(undefined8 *****)(*(long *)(uVar2 + 0x38) + (long)pcVar11 * 8);
                func_0x000107c61174();
                func_0x000107c6142c(uVar2);
                pppppuVar8 = (undefined8 *****)ppppuStack_c8;
                goto joined_r0x0001031ff9a4;
              }
              func_0x000107c6142c(uVar2);
            }
LAB_1031ff9dc:
            ppppuStack_c8 = (undefined8 *****)0x0;
LAB_1031ff9e0:
            func_0x000107c61170(pcVar5);
            goto LAB_1031ff9e8;
          }
          pcVar15 = pcVar5;
          func_0x000107c61174();
          pcVar11 = pcVar15;
          func_0x000107c6043c();
          func_0x000107c61170(pcVar15);
          if (pcVar11 == (char *)0x0) goto LAB_1031ff9dc;
          uVar19 = 0;
          pcStack_98 = pcVar11;
          FUN_1032024e4(0,0x112ea4a00,&PTR_PTR_1126bea48);
          func_0x000107c6147c(&ppppuStack_c8,&pcStack_98,PTR___syXlN_11034f1a0 + 8,uVar19,7);
          pppppuVar8 = (undefined8 *****)ppppuStack_c8;
joined_r0x0001031ff9a4:
          ppppuStack_c8 = pppppuVar8;
          if (pppppuVar8 == (undefined8 *****)0x0) goto LAB_1031ff9e0;
          pcVar15 = (char *)(ulong)(param_3 & 1);
          pppppuVar12 = pppppuVar8;
          FUN_1031ffb38();
          func_0x000107c61170(pppppuVar8);
          func_0x000107c61170(pcVar5);
        }
        func_0x000107c61170(pcVar4);
      }
      else {
        pcVar11 = pcVar5;
        func_0x000107c5faec();
        func_0x000107c61170(pcVar5);
        func_0x0001000285a8(0x112f4c530,&UNK_10db9cdf8);
        uVar19 = *(undefined8 *)(param_2 + 0x38);
        uVar20 = *(undefined8 *)(param_2 + 0x40);
        puVar6 = &UNK_1106246f8;
        func_0x000107c613fc(&UNK_1106246f8,0x30,7);
        *(undefined8 *)(puVar6 + 0x10) = uVar19;
        *(undefined8 *)(puVar6 + 0x18) = uVar20;
        *(char **)(puVar6 + 0x20) = pcVar11;
        *(char **)(puVar6 + 0x28) = pcVar15;
        puVar7 = &UNK_110624720;
        func_0x000107c613fc(&UNK_110624720,0x20,7);
        *(code **)(puVar7 + 0x10) = FUN_10320236c;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        pcStack_a8 = FUN_103202378;
        ppppuStack_c8 = (undefined8 ****)PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_100f9148c;
        puStack_b0 = &UNK_110624738;
        pppppuVar8 = &ppppuStack_c8;
        puStack_a0 = puVar7;
        func_0x000107c60bc4(pppppuVar8);
        puVar10 = puStack_a0;
        func_0x000107c61434(pcVar15);
        func_0x000107c6157c(puVar7);
        func_0x000107c61574(puVar10);
        pppppuVar9 = pppppuVar16;
        func_0x000107c45138();
        func_0x000107c61180();
        func_0x000107c6142c(pcVar15);
        func_0x000107c60bd0(pppppuVar8);
        pcVar15 = "";
        puVar10 = puVar7;
        func_0x000107c61544(puVar7,"",0x7a,0x146,0x24,1);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar7);
        if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1031ffb1c);
          (*pcVar3)();
        }
        uStack_c0 = uStack_c0 & 0xffffffffffffff00;
        pppppuVar12 = &ppppuStack_c8;
        ppppuStack_c8 = pppppuVar9;
        func_0x000100854cb0();
        func_0x000107c61170(pppppuVar9);
        func_0x000107c61170(pcVar4);
      }
      uVar1 = *(ulong *)(puVar14 + 0x10);
      pcVar4 = (char *)(uVar1 + 1);
      puStack_90 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar1) {
        pcVar15 = pcVar4;
        func_0x0001032019d8(1 < *(ulong *)(puVar14 + 0x18),pcVar4,1);
      }
      pcVar18 = pcVar18 + 1;
      *(char **)(puStack_90 + 0x10) = pcVar4;
      *(undefined8 ******)(puStack_90 + uVar1 * 8 + 0x20) = pppppuVar12;
      puVar14 = puStack_90;
    } while (pcVar17 != pcVar18);
  }
  FUN_1032020e8();
  func_0x0001000285a8(0x112f4c530,&UNK_10db9cdf8);
  puVar6 = puVar14;
  func_0x000100b658a4(puVar14);
  func_0x000107c6142c(puVar14);
  puVar14 = &UNK_1106246d0;
  func_0x000107c613fc(&UNK_1106246d0,0x18,7);
  *(char **)(puVar14 + 0x10) = pcVar13;
  pcVar3 = FUN_103202340;
  func_0x0001000bfde0(FUN_103202340,puVar14,&UNK_110624910);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar14);
  return pcVar3;
}



/* Entry: 1031ffb38; end: 1031ffcbf;  */

void FUN_1031ffb38(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lStack_58;
  
  uVar5 = param_2;
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  lVar1 = lStack_58;
  func_0x000107c45070();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  func_0x000107c3e980();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  lVar4 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = lVar4;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar1 == 0) {
      lVar4 = 0;
      uVar5 = 0;
    }
    else {
      func_0x000107c5fb14();
      lVar4 = lVar1;
    }
  }
  puVar3 = &UNK_110624770;
  func_0x000107c613fc(&UNK_110624770,0x40,7);
  puVar3[0x10] = (byte)param_2 & 1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(long *)(puVar3 + 0x20) = lVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  *(undefined8 *)(puVar3 + 0x30) = unaff_x20;
  *(long *)(puVar3 + 0x38) = lVar2;
  func_0x0001000285a8(0x112f4c538,&UNK_10db9ce08);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  func_0x000107c6157c();
  func_0x0001000b64ac(0x1032023b4,puVar3);
  return;
}



/* Entry: 1031ffcc0; end: 1032001f3;  */

void FUN_1031ffcc0(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_300;
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
  undefined8 uStack_25f;
  undefined *puStack_250;
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
  undefined8 uStack_1af;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
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
  undefined8 uStack_bf;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar16 = 0;
  lVar1 = *param_2;
  uVar9 = param_2[1];
  uVar14 = *(ulong *)(lVar1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    plVar10 = (long *)(lVar1 + 0x20 + uVar16 * 0x10);
    do {
      if (uVar14 == uVar16) {
        uVar16 = (ulong)puVar7 >> 0x3e;
        if (uVar16 == 0) {
          puVar6 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if (((ulong)puVar7 & 0x8000000000000000) != 0) {
            puVar6 = puVar7;
          }
          func_0x000107c60480();
        }
        if (puVar6 != *(undefined **)(lVar1 + 0x10)) {
          func_0x000107c6142c(puVar7);
          FUN_1031fd32c(&uStack_198);
          func_0x000107c610b4(param_1,&uStack_198,0x128);
          *(undefined1 *)(param_1 + 0x128) = 0;
          return;
        }
        puVar6 = puVar6 + 1;
        pcVar13 = (char *)(lVar1 + 0x28);
        goto LAB_1031ffde8;
      }
      if (*(ulong *)(lVar1 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103200114);
        (*pcVar3)();
      }
      lVar4 = *plVar10;
      uVar16 = uVar16 + 1;
      plVar10 = plVar10 + 2;
    } while (lVar4 == 0);
    func_0x000107c61174();
    puVar6 = puVar7;
    func_0x000107c61550();
    if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
       (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar5 = puVar7;
        }
        func_0x000107c60480(puVar5);
      }
      puVar6 = (undefined *)0x0;
      func_0x0001013420bc(0,puVar5 + 1,1,puVar7);
    }
    uVar11 = (ulong)puVar6 & 0xffffffffffffff8;
    uVar15 = *(ulong *)(uVar11 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar15) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
      func_0x0001013420bc(puVar7,uVar15 + 1,1,puVar6);
      uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar15 + 1;
    *(long *)(uVar11 + uVar15 * 8 + 0x20) = lVar4;
  } while( true );
  while( true ) {
    puVar6 = puVar6 + -1;
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103200118);
      (*pcVar3)();
    }
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 0x10;
    uVar14 = uVar15 - 1;
    if (cVar2 == '\x01') break;
LAB_1031ffde8:
    uVar15 = uVar14;
    if (uVar15 == 0) break;
  }
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c61434(uVar9);
  func_0x000107c5afb4(0x4046000000000000,0x4046000000000000);
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    uVar16 = 8;
  }
  else {
    if (uVar16 == 0) {
      puVar5 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
      if (((ulong)puVar7 & 0x8000000000000000) != 0) {
        puVar5 = puVar7;
      }
      func_0x000107c60480(puVar5);
    }
    uVar14 = 8;
    FUN_1032022a4(8,puVar5);
    func_0x000107c61174();
    puVar5 = puVar7;
    func_0x000107c61550();
    if ((uVar16 != 0) || (puVar8 = puVar7, ((ulong)puVar5 & 1) == 0)) {
      if (uVar16 == 0) {
        puVar5 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if (((ulong)puVar7 & 0x8000000000000000) != 0) {
          puVar5 = puVar7;
        }
        func_0x000107c60480(puVar5);
      }
      puVar8 = (undefined *)0x0;
      func_0x0001013420bc(0,puVar5 + 1,1,puVar7);
    }
    uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
    uVar16 = *(ulong *)(uVar11 + 0x10);
    puVar7 = puVar8;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar16) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
      func_0x0001013420bc(puVar7,uVar16 + 1,1,puVar8);
      uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar16 + 1;
    *(undefined **)(uVar11 + uVar16 * 8 + 0x20) = puVar6;
    uVar16 = uVar14;
    func_0x000107c61558();
    uVar11 = uVar14;
    if ((uVar16 & 1) == 0) {
      uVar11 = 0;
      FUN_103201708(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
    }
    uVar14 = *(ulong *)(uVar11 + 0x10);
    uVar16 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar14) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_103201708(uVar16,uVar14 + 1,1,uVar11);
    }
    *(ulong *)(uVar16 + 0x10) = uVar14 + 1;
    *(undefined8 *)(uVar16 + uVar14 * 8 + 0x20) = 9;
    puVar5 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c4de3c();
    func_0x000107c61180();
    uVar14 = uVar9;
    func_0x000107c61550();
    if ((((int)uVar14 == 0) || ((long)uVar9 < 0)) || (uVar14 = uVar9, (uVar9 >> 0x3e & 1) != 0)) {
      if (uVar9 >> 0x3e == 0) {
        uVar11 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar11 = uVar9 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar9) {
          uVar11 = uVar9;
        }
        func_0x000107c60480(uVar11);
      }
      uVar14 = 0;
      FUN_1032015a8(0,uVar11 + 1,1,uVar9,0x112e152f0,&PTR_PTR_1126b5b00,0x112e152f8,&UNK_10d9f2500);
    }
    uVar12 = uVar14 & 0xffffffffffffff8;
    uVar11 = *(ulong *)(uVar12 + 0x10);
    uVar9 = uVar14;
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
      FUN_1032015a8(uVar9,uVar11 + 1,1,uVar14,0x112e152f0,&PTR_PTR_1126b5b00,0x112e152f8,
                    &UNK_10d9f2500);
      uVar12 = uVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
    *(undefined **)(uVar12 + uVar11 * 8 + 0x20) = puVar5;
    func_0x000107c61170(puVar6);
  }
  puStack_300 = puVar7;
  FUN_1032013b0(&puStack_300);
  uStack_1c8 = uStack_278;
  uStack_1d0 = uStack_280;
  uStack_1c0 = uStack_270;
  uStack_1af = uStack_25f;
  uStack_208 = uStack_2b8;
  uStack_210 = uStack_2c0;
  uStack_1f8 = uStack_2a8;
  uStack_200 = uStack_2b0;
  uStack_1e8 = uStack_298;
  uStack_1f0 = uStack_2a0;
  uStack_1d8 = uStack_288;
  uStack_1e0 = uStack_290;
  uStack_248 = uStack_2f8;
  puStack_250 = puStack_300;
  uStack_238 = uStack_2e8;
  uStack_240 = uStack_2f0;
  uStack_228 = uStack_2d8;
  uStack_230 = uStack_2e0;
  uStack_218 = uStack_2c8;
  uStack_220 = uStack_2d0;
  func_0x0001031e6100(&puStack_250);
  uStack_e8 = uStack_1d8;
  uStack_f0 = uStack_1e0;
  uStack_d8 = uStack_1c8;
  uStack_e0 = uStack_1d0;
  uStack_d0 = uStack_1c0;
  uStack_bf = uStack_1af;
  uStack_128 = uStack_218;
  uStack_130 = uStack_220;
  uStack_118 = uStack_208;
  uStack_120 = uStack_210;
  uStack_108 = uStack_1f8;
  uStack_110 = uStack_200;
  uStack_f8 = uStack_1e8;
  uStack_100 = uStack_1f0;
  uStack_158 = uStack_248;
  puStack_160 = puStack_250;
  uStack_148 = uStack_238;
  uStack_150 = uStack_240;
  uStack_138 = uStack_228;
  uStack_140 = uStack_230;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0xd000000000000010;
  uStack_180 = 0x800000010f131180;
  uStack_178 = 0xd000000000000012;
  uStack_170 = 0x800000010f131160;
  uStack_168 = 0;
  uStack_b0 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0x101;
  uStack_80 = 0;
  uStack_78 = 1;
  uStack_a8 = uVar16;
  uStack_a0 = uVar9;
  FUN_1031ff238(&uStack_198);
  func_0x000107c610b4(param_1,&uStack_198,0x128);
  *(bool *)(param_1 + 0x128) = uVar15 == 0;
  return;
}



/* Entry: 1032001f4; end: 1032002d7;  */

void FUN_1032001f4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    uStack_40 = 0x10320252c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100f1c768;
    puStack_48 = &UNK_1106247d8;
    uStack_38 = param_1;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c440d8(param_2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_2);
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1032002d8; end: 103200423;  */

void FUN_1032002d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_70;
  if (param_1 == 0) {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100087f6c(&puStack_70);
    func_0x000100c7f554();
  }
  else {
    puVar2 = PTR_PTR_1126df4e0;
    func_0x000107c61168(PTR_PTR_1126df4e0);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar2);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c4423c(0x4000000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar3;
    func_0x000107c5cb2c(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    uStack_50 = 0x103202534;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101218f4c;
    puStack_58 = &UNK_110624800;
    uStack_48 = param_2;
    func_0x000107c60bc4(&puStack_70);
    uVar1 = uStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
    func_0x000107c5c320(puVar2);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 103200424; end: 10320049b;  */

void FUN_103200424(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lStack_28;
  
  lStack_28 = 0;
  uVar3 = 0;
  FUN_1032024e4(0,0x112ec02f0,&PTR_PTR_1126ab030);
  func_0x000107c5fc4c(param_1,&lStack_28,uVar3);
  lVar1 = lStack_28;
  if (lStack_28 != 0) {
    func_0x000100087f6c(&lStack_28);
    func_0x000107c6142c(lVar1);
    func_0x000100c7f554();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10320049c);
  (*pcVar2)();
}



/* Entry: 10320049c; end: 1032007e7;  */

/* WARNING: Removing unreachable block (ram,0x000103200584) */

void FUN_10320049c(undefined8 param_1,ulong param_2,undefined1 *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  uStack_a8 = param_1;
  puStack_a0 = param_3;
  func_0x000107c5f804();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar12 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((param_2 & 1) != 0) {
    puVar5 = puStack_a0;
    uStack_b8 = param_4;
    lStack_b0 = param_7;
    func_0x000107c4d6f4();
    func_0x000107c61180();
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032007e8);
      (*pcVar2)();
    }
    func_0x000107c5edb4(lVar11);
    func_0x000107c61170(puVar5);
    uVar10 = 0;
    lVar6 = lVar11;
    func_0x000107c5ede8(lVar11,0);
    (**(code **)(lVar14 + 8))(lVar11,lVar4);
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x00010006c00c(lVar6,uVar10);
    lVar4 = lVar6;
    func_0x000107c5ee20(lVar6,uVar10);
    func_0x000107c4635c();
    func_0x000107c61170(lVar4);
    func_0x00010006c090(lVar6,uVar10);
    if (puVar7 == (undefined *)0x0) {
      func_0x00010006c090(lVar6,uVar10);
      param_7 = lStack_b0;
    }
    else {
      uStack_88 = CONCAT71(uStack_88._1_7_,1);
      puStack_90 = puVar7;
      func_0x000107c61174(puVar7);
      func_0x000100087f6c(&puStack_90);
      func_0x000107c61170(puVar7);
      func_0x00010006c090(lVar6,uVar10);
      func_0x000107c61170(puVar7);
      param_7 = lStack_b0;
    }
  }
  if (param_5 != 0) {
    puVar5 = puStack_a0;
    func_0x000107c4d6f0();
    func_0x000107c61180();
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032007e4);
      (*pcVar2)();
    }
    puVar8 = puVar5;
    FUN_1032023c8();
    func_0x000107c61170(puVar5);
    puVar5 = puVar8;
    if (param_7 != 0) {
      FUN_1032024e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      (**(code **)(lVar13 + 0x68))
                (puVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
                 lVar3);
      puVar5 = puVar12;
      func_0x000107c5fff0(puVar12);
      (**(code **)(lVar13 + 8))(puVar12,lVar3);
      uVar10 = uStack_a8;
      pcStack_70 = FUN_1032024dc;
      uStack_68 = uStack_a8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1010866ac;
      puStack_78 = &UNK_110624788;
      ppuVar9 = &puStack_90;
      func_0x000107c60bc4(ppuVar9);
      uVar1 = uStack_68;
      func_0x000107c6157c(uVar10);
      func_0x000107c61574(uVar1);
      func_0x000107c42fec(param_7);
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c615e8(param_7);
    }
    func_0x000107c61170(puVar5);
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1032007e8; end: 10320082f;  */

void FUN_1032007e8(long param_1)

{
  long lStack_30;
  undefined1 uStack_28;
  
  if (param_1 != 0) {
    uStack_28 = 0;
    lStack_30 = param_1;
    func_0x000107c61174();
    func_0x000100087f6c(&lStack_30);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103200830; end: 103200a33;  */

void FUN_103200830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar1);
  func_0x000107c4348c(0,0,param_1,param_2,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52610();
  lVar2 = 0x112ea49e8;
  func_0x0001000285a8(0x112ea49e8,&UNK_10db2c3c0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  uVar6 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar2 + 0x20) = uVar6;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c61174(uVar6);
  func_0x000107c5c5fc(param_1);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  *(undefined **)(lVar2 + 0x28) = puVar3;
  *(undefined8 *)(lVar2 + 0x30) = uVar6;
  *(undefined **)(lVar2 + 0x38) = puVar1;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  lVar4 = lVar2;
  func_0x00010254d530(lVar2);
  func_0x000107c61588(lVar2);
  uVar6 = 0x112ea49f0;
  func_0x0001000285a8(0x112ea49f0,&UNK_10dab7b80);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar6);
  func_0x000107c5fadc(param_4,param_5);
  lVar2 = lVar4;
  func_0x00010254a080(lVar4);
  func_0x000107c6142c(lVar4);
  uVar5 = 0;
  func_0x000100eca28c(0);
  uVar6 = uVar5;
  func_0x000100ecbdec();
  lVar4 = lVar2;
  func_0x000107c5f9dc(lVar2,uVar5,PTR___sypN_11034f1a8 + 8,uVar6);
  func_0x000107c6142c(lVar2);
  func_0x000107c422b8(0x4010000000000000,0x4010000000000000,param_4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 103200a34; end: 10320104f;  */

undefined8 FUN_103200a34(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == *(long *)(param_2 + 0x10)) {
    if ((lVar7 != 0) && (param_1 != param_2)) {
      pbVar8 = (byte *)(param_1 + 0x28);
      pbVar9 = (byte *)(param_2 + 0x28);
      do {
        uVar5 = *(ulong *)(pbVar8 + -8);
        bVar1 = *pbVar8;
        lVar6 = *(long *)(pbVar9 + -8);
        bVar2 = *pbVar9;
        if (uVar5 == 0) {
          if (lVar6 != 0) {
            return 0;
          }
          if (((bVar1 ^ bVar2) & 1) != 0) {
            return 0;
          }
        }
        else {
          if (lVar6 == 0) goto LAB_103200b5c;
          FUN_1032024e4(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
          func_0x000107c61174(lVar6);
          func_0x000107c61174();
          func_0x000107c61174(lVar6);
          func_0x000107c61174();
          uVar3 = uVar5;
          func_0x000107c60118();
          func_0x000107c61170(uVar5);
          func_0x000107c61170(lVar6);
          if ((uVar3 & 1) == 0) {
            func_0x000107c61170(uVar5);
            func_0x000107c61170(lVar6);
            goto LAB_103200b5c;
          }
          func_0x000107c61170(lVar6);
          func_0x000107c61170(uVar5);
          if (bVar1 != bVar2) goto LAB_103200b5c;
        }
        pbVar8 = pbVar8 + 0x10;
        pbVar9 = pbVar9 + 0x10;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar4 = 1;
  }
  else {
LAB_103200b5c:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 103201050; end: 10320120b;  */

ulong FUN_103201050(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103201134);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103201138);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1032024e4(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10320120c);
  (*pcVar2)();
}



/* Entry: 10320120c; end: 1032013af;  */

undefined8 FUN_10320120c(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar8 = *(long *)(param_2 + 0x10);
  lVar2 = param_1;
  func_0x000107c6042c();
  if (lVar8 == lVar2) {
    uVar7 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(param_2 + 0x40);
    lVar2 = 0;
    do {
      if (uVar9 == 0) {
        do {
          lVar8 = lVar2 + 1;
          if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1032013b0);
            (*pcVar1)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar8) {
            return 1;
          }
          uVar9 = ((ulong *)(param_2 + 0x40))[lVar8];
          lVar2 = lVar2 + 1;
        } while (uVar9 == 0);
        uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
      }
      else {
        uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar8 = lVar2;
      }
      uVar6 = LZCOUNT(uVar6) | lVar8 << 6;
      lVar3 = *(long *)(*(long *)(param_2 + 0x30) + uVar6 * 8);
      uVar6 = *(ulong *)(*(long *)(param_2 + 0x38) + uVar6 * 8);
      func_0x000107c61174();
      func_0x000107c61174();
      lVar2 = lVar3;
      func_0x000107c6043c(lVar3,param_1);
      func_0x000107c61170(lVar3);
      if (lVar2 == 0) {
        func_0x000107c61170(uVar6);
        return 0;
      }
      uVar4 = 0;
      FUN_1032024e4(0,0x112ea4a00,&PTR_PTR_1126bea48);
      lStack_70 = lVar2;
      func_0x000107c6147c(&uStack_68,&lStack_70,PTR___syXlN_11034f1a0 + 8,uVar4,7);
      uVar5 = uVar6;
      func_0x000107c60118(uVar6,uStack_68);
      uVar4 = uStack_68;
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar4);
      lVar2 = lVar8;
    } while ((uVar5 & 1) != 0);
  }
  return 0;
}



/* Entry: 1032013b0; end: 1032013d3;  */

void FUN_1032013b0(long param_1)

{
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 1 | 0x40;
  return;
}



/* Entry: 1032013d4; end: 103201413;  */

void FUN_1032013d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcfb6cc;
  func_0x000107c61520(&DAT_10dcfb6cc,&UNK_11076bad0);
  puRam0000000112f4c500 = puVar1;
  return;
}



/* Entry: 103201414; end: 103201463;  */

undefined8 FUN_103201414(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f4c510;
  func_0x0001000285a8(0x112f4c510,&UNK_10db9cdd8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103201464; end: 10320146b;  */

void FUN_103201464(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uStack_40 = 0x10320252c;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100f1c768;
    puStack_48 = &UNK_1106247d8;
    uStack_38 = param_1;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c440d8(lVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(lVar3);
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10320146c; end: 1032014ab;  */

void FUN_10320146c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4c520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9cf14;
  func_0x000107c61520(&UNK_10db9cf14,&UNK_1106249b8);
  puRam0000000112f4c520 = puVar1;
  return;
}



/* Entry: 1032014ac; end: 1032014c7;  */

code * FUN_1032014ac(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar13 = *param_1;
  uStack_68 = uVar13;
  if (uVar13 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar14 = uVar13;
    }
    func_0x000107c60480(uVar14,*(undefined8 *)(unaff_x20 + 0x10));
  }
  func_0x000107c61434(uVar13);
  if ((long)uVar14 < 2) {
    FUN_103201c78(&uStack_68);
    uVar13 = uStack_68;
  }
  uVar14 = uVar13 & 0xffffffffffffff8;
  if (uVar13 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar14 + 0x10);
  }
  else {
    uVar15 = uVar14;
    if (0x7fffffffffffffff < uVar13) {
      uVar15 = uVar13;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar16 = 0;
  while( true ) {
    if (uVar15 == uVar16) {
      puVar7 = puVar8;
      func_0x00010254afb4(puVar8);
      func_0x000107c6142c(puVar8);
      if (lVar2 == 0) {
        func_0x000107c6142c(puVar7);
        func_0x0001000285a8(0x112f4c548,&UNK_10db9ce18);
        func_0x000107c61434(uVar13);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_103201ff0();
        pcVar3 = (code *)&uStack_78;
        uStack_78 = uVar13;
        puStack_70 = puVar8;
        func_0x000100854cb0(pcVar3);
        func_0x000107c6142c(puVar8);
        func_0x000107c61430(uVar13,2);
      }
      else {
        func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
        uVar9 = 0;
        FUN_1032024e4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar10 = uVar9;
        func_0x000100120cb0();
        func_0x000107c615f0(lVar2);
        puVar8 = puVar7;
        func_0x000107c5fe08(puVar7,uVar9,uVar10);
        func_0x000107c6142c(puVar7);
        lVar11 = lVar2;
        func_0x000107c4f970(lVar2);
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        lVar12 = lVar11;
        func_0x0001000b637c(lVar11);
        func_0x000107c61170(lVar11);
        puVar8 = &UNK_1106247c0;
        func_0x000107c613fc(&UNK_1106247c0,0x18,7);
        *(ulong *)(puVar8 + 0x10) = uVar13;
        func_0x000107c61434(uVar13);
        pcVar3 = FUN_103202524;
        func_0x0001000bfde0(FUN_103202524,puVar8,&UNK_110624990);
        func_0x000107c6142c(uVar13);
        func_0x000107c615e8(lVar2);
        func_0x000107c61574(lVar12);
        func_0x000107c61574(puVar8);
      }
      return pcVar3;
    }
    if ((uVar13 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar14 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1031ff5a4);
        (*pcVar3)();
      }
      uVar4 = *(ulong *)(uVar13 + uVar16 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar16;
      FUN_103201050(uVar16,uVar13,&PTR_PTR_1126ab030,0x112ec02f0);
    }
    uVar1 = uVar16 + 1;
    if (SCARRY8(uVar16,1)) break;
    uVar5 = uVar4;
    func_0x000107c3ea08();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar16 = uVar16 + 1;
    if (uVar5 != 0) {
      puVar7 = puVar8;
      func_0x000107c61550();
      if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
         (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar8 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar8) {
            puVar6 = puVar8;
          }
          func_0x000107c60480(puVar6);
        }
        puVar7 = (undefined *)0x0;
        FUN_1032015a8(0,puVar6 + 1,1,puVar8,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,
                      0x112d4a820,&UNK_10d910f30);
      }
      uVar4 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar16 = *(ulong *)(uVar4 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar16) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_1032015a8(puVar8,uVar16 + 1,1,puVar7,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,
                      0x112d4a820,&UNK_10d910f30);
        uVar4 = (ulong)puVar8 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar16 + 1;
      *(ulong *)(uVar4 + uVar16 * 8 + 0x20) = uVar5;
      uVar16 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1031ff5a0);
  (*pcVar3)();
}



/* Entry: 1032014c8; end: 10320153f;  */

void FUN_1032014c8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1032024e4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103201540; end: 1032015a7;  */

/* WARNING: Possible PIC construction at 0x000103201570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103201574) */
/* WARNING: Removing unreachable block (ram,0x000103201578) */

void FUN_103201540(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112f4c540;
    plVar5 = (long *)&UNK_10db9ce10;
  }
  else {
    puVar3 = (ulong *)0x112f4c530;
    plVar5 = (long *)&UNK_10db9cdf8;
    unaff_x30 = 0x103201574;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1032015a8; end: 103201707;  */

ulong FUN_1032015a8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103201708);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103201810(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103201704);
      (*pcVar1)();
    }
    FUN_1032018a0(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103201708; end: 10320180f;  */

undefined * FUN_103201708(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103201810);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f4c528;
    func_0x0001000285a8(0x112f4c528,&UNK_10db9cdf0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11076a028);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103201810; end: 10320189f;  */

undefined *
FUN_103201810(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1032014c8(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1032018a0; end: 1032019bb;  */

long FUN_1032018a0(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032019b8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032019bc);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1032024e4(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1032024e4(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1032019b4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1032019bc; end: 1032019f3;  */

void FUN_1032019bc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1032019f4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1032019f4; end: 103201c77;  */

undefined * FUN_1032019f4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103201b48);
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
    puVar3 = (undefined *)0x112e152f0;
    FUN_1032014c8(0x112e152f0,&PTR_PTR_1126b5b00,0x112e152f8,&UNK_10d9f2500);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1032024e4(0,0x112e152f0,&PTR_PTR_1126b5b00);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103201c78; end: 103201fef;  */

void FUN_103201c78(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  uVar14 = uVar11 & 0xffffffffffffff8;
  if (uVar11 >> 0x3e == 0) {
    uVar12 = *(ulong *)(uVar14 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar14;
    if ((uVar11 & 0x8000000000000000) != 0) {
      uVar12 = uVar11;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (uVar12 != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        if ((uVar11 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103201ddc);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(uVar11 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar10;
          FUN_103201050(uVar10,uVar11,&PTR_PTR_1126ab030,0x112ec02f0);
        }
        uVar2 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103201dd8);
          (*pcVar3)();
        }
        uVar6 = uVar5;
        func_0x000107c3ea08();
        func_0x000107c61180();
        if (uVar6 != 0) break;
        func_0x000107c61170(uVar5);
        uVar10 = uVar10 + 1;
        if (uVar2 == uVar12) goto LAB_103201df8;
      }
      uVar10 = uVar6;
      func_0x000107c49820();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      puVar7 = puVar9;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x000101755b54(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar5 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x000101755b54(puVar9,uVar5 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar5 + 1;
      *(ulong *)(puVar9 + uVar5 * 8 + 0x20) = uVar10;
      uVar10 = uVar2;
    } while (uVar2 != uVar12);
  }
LAB_103201df8:
  if (uVar11 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar14 + 0x10);
  }
  else {
    if ((uVar11 & 0x8000000000000000) != 0) {
      uVar14 = uVar11;
    }
    func_0x000107c60480();
  }
  if ((long)uVar14 < 2) {
    lVar13 = 1;
    uVar14 = *(ulong *)(puVar9 + 0x10);
LAB_103201e30:
    do {
      uVar12 = 0;
      do {
        if (uVar14 == uVar12) {
          puVar7 = PTR_PTR_1126ab030;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ed0();
          func_0x000107c52d28(puVar7);
          func_0x000107c61170(puVar8);
          func_0x000107c61174();
          uVar12 = uVar11;
          func_0x000107c61550();
          if ((((int)uVar12 == 0) || ((long)uVar11 < 0)) ||
             (uVar12 = uVar11, (uVar11 >> 0x3e & 1) != 0)) {
            if (uVar11 >> 0x3e == 0) {
              uVar10 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar10 = uVar11 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar11) {
                uVar10 = uVar11;
              }
              func_0x000107c60480(uVar10);
            }
            uVar12 = 0;
            FUN_1032015a8(0,uVar10 + 1,1,uVar11,0x112ec02f0,&PTR_PTR_1126ab030,0x112ec0340,
                          &UNK_10daddc30);
          }
          uVar5 = uVar12 & 0xffffffffffffff8;
          uVar10 = *(ulong *)(uVar5 + 0x10);
          uVar11 = uVar12;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
            uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_1032015a8(uVar11,uVar10 + 1,1,uVar12,0x112ec02f0,&PTR_PTR_1126ab030,0x112ec0340,
                          &UNK_10daddc30);
            uVar5 = uVar11 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar5 + 0x10) = uVar10 + 1;
          *(undefined **)(uVar5 + uVar10 * 8 + 0x20) = puVar7;
          func_0x000107c61170(puVar7);
          *param_1 = uVar11;
          break;
        }
        if (*(ulong *)(puVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103201fec);
          (*pcVar3)();
        }
        lVar1 = uVar12 * 8;
        uVar12 = uVar12 + 1;
      } while (*(long *)(puVar9 + lVar1 + 0x20) != lVar13);
      bVar4 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103201ff0);
        (*pcVar3)();
      }
      if (uVar11 >> 0x3e != 0) {
        uVar12 = uVar11 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uVar12 = uVar11;
        }
        func_0x000107c60480();
        if (1 < (long)uVar12) break;
        goto LAB_103201e30;
      }
    } while (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) < 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar9);
  return;
}



/* Entry: 103201ff0; end: 1032020e7;  */

undefined * FUN_103201ff0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112f4c550);
    puVar2 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar3 = puVar9[-1];
      uVar4 = *puVar9;
      func_0x000107c61174();
      func_0x000107c61174();
      uVar5 = uVar3;
      func_0x000100121450();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032020e4);
        (*pcVar1)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar5 * 8) = uVar3;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032020e8);
        (*pcVar1)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 1032020e8; end: 1032022a3;  */

undefined * FUN_1032020e8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1032019bc(0,0,0);
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103202268);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar9;
        FUN_103201050(uVar9,param_1,&PTR_PTR_1126ab030,0x112ec02f0);
      }
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103202264);
        (*pcVar3)();
      }
      puVar5 = PTR_PTR_1126b5b00;
      func_0x000107c61168();
      uVar6 = uVar4;
      func_0x000107c3ea08(uVar4);
      func_0x000107c61180();
      uVar7 = uVar4;
      func_0x000107c424f8(uVar4);
      func_0x000107c61180();
      func_0x000107c5cc04();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      uVar4 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        FUN_1032019bc(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar4 + 1;
      *(undefined **)(puVar2 + uVar4 * 8 + 0x20) = puVar5;
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar8);
  }
  return puVar2;
}


