/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101eeb5c4; end: 101eeb5cb;  */

ulong FUN_101eeb5c4(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  
  if ((long)uRam0000000112e3bb98 < 1) {
    uVar3 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000035;
    func_0x000107c5fadc(0xd000000000000035,0x800000010f0196f0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    if ((int)uVar3 < 0x1f) {
      uVar3 = 0x1e;
    }
    uVar2 = (ulong)uVar3;
  }
  else {
    uVar2 = uRam0000000112e3bb98;
    if (uRam0000000112e3bb98 < 0x1f) {
      uVar2 = 0x1e;
    }
  }
  return uVar2;
}



/* Entry: 101eeb5cc; end: 101eeb63b;  */

long FUN_101eeb5cc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = lRam0000000112e3bac8;
  if (lRam0000000112e3bac8 < 1) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f019660);
    func_0x000107c4980c(uVar3);
    func_0x000107c61170(uVar1);
    lVar2 = (long)(int)uVar3;
  }
  return lVar2;
}



/* Entry: 101eeb63c; end: 101eeb63f;  */

ulong FUN_101eeb63c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  
  uVar3 = uRam0000000112e3ba80 & 0xffffffffffff;
  if ((uRam0000000112e3ba88 & 0x2000000000000000) != 0) {
    uVar3 = uRam0000000112e3ba88 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    uVar6 = *(ulong *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f019600);
    uVar2 = 0;
    uVar5 = 0xe000000000000000;
    func_0x000107c5fadc(0);
    uVar3 = uVar6;
    func_0x000107c5c1dc();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    uVar1 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010f019630);
    uVar2 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010ef34920);
    func_0x000107c5c1dc(uVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    uVar3 = uVar6;
    func_0x000107c5faec(uVar6);
    func_0x000107c61170(uVar6);
    uVar4 = uVar4 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar4 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar4 == 0) {
      func_0x000107c6142c(uVar5);
    }
  }
  else {
    func_0x000107c61434(uRam0000000112e3ba88);
    uVar3 = 0xd00000000000001d;
  }
  return uVar3;
}



/* Entry: 101eeb640; end: 101eeb6af;  */

long FUN_101eeb640(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = lRam0000000112e3ba40;
  if (lRam0000000112e3ba40 < 1) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f0195b0);
    func_0x000107c4980c(uVar3);
    func_0x000107c61170(uVar1);
    lVar2 = (long)(int)uVar3;
  }
  return lVar2;
}



/* Entry: 101eeb6b0; end: 101eeb6bb;  */

/* WARNING: Removing unreachable block (ram,0x000101eeaba0) */

long FUN_101eeb6b0(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long unaff_x20;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar5 = 0x800000010f019590;
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f);
  puVar3 = PTR_PTR_1126af7d0;
  func_0x000107c610f8(PTR_PTR_1126af7d0);
  func_0x000107c453e4();
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  if (lVar7 != 0) {
    lVar4 = lVar7;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar4 != 0) {
      lVar7 = lVar4;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar4);
      uVar1 = (uint)(uVar5 >> 0x20);
      uVar6 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar5 & 0xff000000000000) != 0) {
LAB_101eeab6c:
            func_0x000107c610f8(PTR_PTR_1126a98b0);
            lVar4 = lVar7;
            FUN_101eeb810(lVar7,uVar5);
            func_0x00010006c090(lVar7,uVar5);
            return lVar4;
          }
        }
        else if ((long)(int)lVar7 != lVar7 >> 0x20) goto LAB_101eeab6c;
      }
      else if ((uVar6 == 2) && (*(long *)(lVar7 + 0x10) != *(long *)(lVar7 + 0x18)))
      goto LAB_101eeab6c;
      func_0x00010006c090(lVar7,uVar5);
    }
  }
  return 0;
}



/* Entry: 101eeb6bc; end: 101eeb80f;  */

long FUN_101eeb6bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f019560);
  func_0x000107c4980c(uVar2);
  func_0x000107c61170(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 101eeb810; end: 101eeb8cf;  */

ulong FUN_101eeb810(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong unaff_x20;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar2);
    uVar1 = (uint)uVar2;
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    uVar1 = (uint)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  FUN_101eeb8e8();
  return (ulong)(uVar1 & 1);
}



/* Entry: 101eeb8d0; end: 101eeb8e7;  */

uint FUN_101eeb8d0(uint param_1)

{
  FUN_101eeb8e8();
  return param_1 & 1;
}



/* Entry: 101eeb8e8; end: 101eeb93b;  */

uint FUN_101eeb8e8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 101eeb93c; end: 101eeb953;  */

uint FUN_101eeb93c(uint param_1)

{
  FUN_101eeb8d0();
  return param_1 & 1;
}



/* Entry: 101eeb954; end: 101eebaef;  */

void FUN_101eeb954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101eebaf0; end: 101eebaf7;  */

void FUN_101eebaf0(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar2 = 0;
    func_0x000101eeb21c(0);
    lVar3 = lVar5;
    func_0x000107c614f0(lVar5);
    puVar4 = PTR_PTR_1126b2930;
    func_0x000107c61168(PTR_PTR_1126b2930);
    func_0x000107c40efc();
    func_0x000107c61180();
    func_0x000101eeb7dc(lVar5,puVar4,uVar2,lVar3);
    *param_1 = lVar5;
    param_1[1] = (long)&PTR_DAT_11049a318;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eebaf0);
  (*pcVar1)();
}



/* Entry: 101eebaf8; end: 101eebb13;  */

/* WARNING: Possible PIC construction at 0x000101eebb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eebb08) */

void FUN_101eebaf8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101eebb14; end: 101eebb5f;  */

void FUN_101eebb14(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eebb60; end: 101eebbdb;  */

void FUN_101eebb60(undefined8 param_1)

{
  if (lRam0000000112e3bde0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e699b6c);
  return;
}



/* Entry: 101eebbdc; end: 101eebc83;  */

void FUN_101eebbdc(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11049a408;
  func_0x000107c613fc(&UNK_11049a408,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x0001000285a8(0x112e3bdb0,&UNK_10da27790);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  pcVar2 = FUN_101eebc84;
  func_0x0001000bdd8c(FUN_101eebc84,puVar1);
  uVar3 = 0;
  func_0x0001002b2010(0);
  func_0x000107c610f8();
  func_0x000103aa5b70(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101eebc84; end: 101eebc87;  */

void FUN_101eebc84(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar2 = 0;
    func_0x000101eeb21c(0);
    lVar3 = lVar5;
    func_0x000107c614f0(lVar5);
    puVar4 = PTR_PTR_1126b2930;
    func_0x000107c61168(PTR_PTR_1126b2930);
    func_0x000107c40efc();
    func_0x000107c61180();
    func_0x000101eeb7dc(lVar5,puVar4,uVar2,lVar3);
    *param_1 = lVar5;
    param_1[1] = (long)&PTR_DAT_11049a318;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eebaf0);
  (*pcVar1)();
}



/* Entry: 101eebc88; end: 101eebccb; -[_TtC52SendToStoryRankingConfigurationServiceImplementation52SendToStoryRankingConfigurationServiceImplementation isEnabled] */

bool FUN_101eebc88(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  char cStack_28;
  
  func_0x000107c61174();
  FUN_101eebccc(auStack_48);
  func_0x000107c61170(param_1);
  return cStack_28 != '\x02';
}



/* Entry: 101eebccc; end: 101eec033;  */

/* WARNING: Removing unreachable block (ram,0x000101eebfa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eebccc(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  uint uVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_be [4];
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = *(undefined1 **)(unaff_x20 + _DAT_112e3be90);
  uVar6 = 0x800000010f019c20;
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (puVar8 != (undefined1 *)0x0) {
    puVar4 = puVar8;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar4 != (undefined1 *)0x0) {
      puVar8 = puVar4;
      func_0x000107c5ee30();
      func_0x000107c61170();
      uVar1 = (uint)(uVar6 >> 0x20);
      uVar7 = uVar1 >> 0x1e;
      lVar11 = (long)puVar8 >> 0x20;
      if (uVar1 >> 0x1e < 2) {
        if (uVar7 == 0) {
          if ((uVar6 & 0xff000000000000) != 0) {
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_88 = 0xc000000000000000;
            uStack_90 = 0;
            auStack_be[0] = SUB81(puVar8,0);
            auStack_be[1] = (undefined1)((ulong)puVar8 >> 8);
            auStack_be[2] = (undefined1)((ulong)puVar8 >> 0x10);
            auStack_be[3] = (undefined1)((ulong)puVar8 >> 0x18);
            uStack_ba = (undefined1)((ulong)puVar8 >> 0x20);
            uStack_b9 = (undefined1)((ulong)puVar8 >> 0x28);
            uStack_b8 = (undefined1)((ulong)puVar8 >> 0x30);
            uStack_b7 = (undefined1)((ulong)puVar8 >> 0x38);
            uStack_b6 = (undefined1)uVar6;
            uStack_b5 = (undefined1)(uVar6 >> 8);
            uStack_b4 = (undefined1)(uVar6 >> 0x10);
            uStack_b3 = (undefined1)(uVar6 >> 0x18);
            uStack_b2 = (undefined1)(uVar6 >> 0x20);
            puVar15 = auStack_be + (uVar6 >> 0x30 & 0xff);
            uStack_b1 = (undefined1)(uVar6 >> 0x28);
            FUN_101eec104();
            puVar5 = auStack_be;
            goto LAB_101eebf78;
          }
        }
        else if ((int)puVar8 != lVar11) goto LAB_101eebe70;
LAB_101eebedc:
        func_0x00010006c090(puVar8,uVar6);
        lVar11 = 0;
        lVar9 = 0;
        lVar10 = 0;
        lVar12 = 0;
        uVar13 = 2;
      }
      else {
        if ((uVar7 != 2) || (*(long *)(puVar8 + 0x10) == *(long *)(puVar8 + 0x18)))
        goto LAB_101eebedc;
LAB_101eebe70:
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_88 = 0xc000000000000000;
        uStack_90 = 0;
        if (uVar6 >> 0x3e == 2) {
          lVar11 = *(long *)(puVar8 + 0x10);
          lVar10 = *(long *)(puVar8 + 0x18);
          func_0x000107c5ec30();
          puVar15 = puVar4;
          puVar5 = puVar4;
          if (puVar4 != (undefined1 *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar11,(long)puVar15)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101eec02c);
              (*pcVar2)();
            }
            puVar5 = puVar4 + (lVar11 - (long)puVar15);
          }
          puVar14 = (undefined1 *)(lVar10 - lVar11);
          if (SBORROW8(lVar10,lVar11)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101eebecc);
            (*pcVar2)();
          }
LAB_101eebf34:
          func_0x000107c5ec38();
          puVar4 = puVar15;
          if (puVar5 == (undefined1 *)0x0) goto LAB_101eebf54;
          if ((long)puVar14 <= (long)puVar15) {
            puVar15 = puVar14;
          }
          puVar15 = puVar15 + (long)puVar5;
        }
        else {
          lVar10 = (long)(int)puVar8;
          puVar14 = (undefined1 *)(lVar11 - lVar10);
          if (lVar11 < lVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101eec028);
            (*pcVar2)();
          }
          func_0x000107c5ec30();
          if (puVar4 != (undefined1 *)0x0) {
            puVar15 = puVar4;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar10,(long)puVar15)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101eec030);
              (*pcVar2)();
            }
            puVar5 = puVar4 + (lVar10 - (long)puVar15);
            goto LAB_101eebf34;
          }
          func_0x000107c5ec38();
          puVar5 = (undefined1 *)0x0;
LAB_101eebf54:
          puVar15 = (undefined1 *)0x0;
        }
        FUN_101eec104();
LAB_101eebf78:
        func_0x00010006ae80(puVar5,puVar15,&uStack_80,0,100,0,&UNK_11049a690,puVar4);
        func_0x00010006c090(puVar8,uVar6);
        func_0x000100ee9068(&uStack_80);
        uVar13 = uStack_98;
        lVar11 = (long)(int)uStack_a8;
        lVar9 = (long)uStack_a8._4_4_;
        lVar10 = (long)(int)uStack_a0;
        lVar12 = (long)uStack_a0._4_4_;
        func_0x00010006c090(uStack_90,uStack_88);
      }
      goto LAB_101eebfc8;
    }
  }
  lVar9 = 1;
  lVar10 = 0xe;
  lVar11 = 2;
  lVar12 = 2;
  uVar13 = 1;
LAB_101eebfc8:
  *param_1 = lVar11;
  param_1[1] = lVar9;
  param_1[2] = lVar10;
  param_1[3] = lVar12;
  *(undefined1 *)(param_1 + 4) = uVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    func_0x000107c60eb0("SendToStoryRankingConfigurationServiceImplementation.SendToStoryRankingConfigurationServiceImplementation"
                        ,0x69,"init()",6,0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101eec060);
    (*pcVar2)();
  }
  return;
}



/* Entry: 101eec034; end: 101eec093; -[_TtC52SendToStoryRankingConfigurationServiceImplementation52SendToStoryRankingConfigurationServiceImplementation init] */

void FUN_101eec034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToStoryRankingConfigurationServiceImplementation.SendToStoryRankingConfigurationServiceImplementation"
                      ,0x69,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eec060);
  (*pcVar1)();
}



/* Entry: 101eec094; end: 101eec0a3; -[_TtC52SendToStoryRankingConfigurationServiceImplementation52SendToStoryRankingConfigurationServiceImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eec094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e3be90));
  return;
}



/* Entry: 101eec0a4; end: 101eec0c3;  */

void FUN_101eec0a4(void)

{
  func_0x000107c61168(&PTR_PTR_112809068);
  return;
}



/* Entry: 101eec0c4; end: 101eec103;  */

void FUN_101eec0c4(undefined8 *param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_101eebccc(&uStack_48);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  *(undefined1 *)(param_1 + 4) = uStack_28;
  return;
}



/* Entry: 101eec104; end: 101eec143;  */

void FUN_101eec104(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3bec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10da27890;
  func_0x000107c61520(&DAT_10da27890,&UNK_11049a690);
  puRam0000000112e3bec8 = puVar1;
  return;
}



/* Entry: 101eec144; end: 101eec34f;  */

long FUN_101eec144(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    *(long *)(unaff_x20 + 0x10) = lVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eec1b8);
  (*pcVar1)();
}



/* Entry: 101eec350; end: 101eec35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eec350(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar5 = &lStack_40;
  lVar3 = 0;
  FUN_101eec0a4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e3be98);
  puVar1[1] = 1;
  *puVar1 = 2;
  puVar1[3] = 2;
  puVar1[2] = 0xe;
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined8 *)(lVar4 + _DAT_112e3be90) = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c615f0(uVar6);
  func_0x000107c61154(&lStack_40,puVar2);
  *param_1 = plVar5;
  param_1[1] = &PTR_DAT_11049a4e0;
  return;
}



/* Entry: 101eec360; end: 101eec3fb;  */

void FUN_101eec360(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eec3fc; end: 101eec4a3;  */

void FUN_101eec3fc(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11049a530;
  func_0x000107c613fc(&UNK_11049a530,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x0001000285a8(0x112e3bed0,&UNK_10da27830);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar3);
  pcVar2 = FUN_101eec4a4;
  func_0x0001000bdd8c(FUN_101eec4a4,puVar1);
  uVar3 = 0;
  func_0x0001002aa6f8(0);
  func_0x000107c610f8();
  func_0x000103ee53d0(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101eec4a4; end: 101eec4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eec4a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar5 = &lStack_40;
  lVar3 = 0;
  FUN_101eec0a4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e3be98);
  puVar1[1] = 1;
  *puVar1 = 2;
  puVar1[3] = 2;
  puVar1[2] = 0xe;
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined8 *)(lVar4 + _DAT_112e3be90) = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c615f0(uVar6);
  func_0x000107c61154(&lStack_40,puVar2);
  *param_1 = plVar5;
  param_1[1] = &PTR_DAT_11049a4e0;
  return;
}



/* Entry: 101eec4a8; end: 101eec4ef;  */

void FUN_101eec4a8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10da279e0,0x60,2);
  uRam0000000113804628 = uStack_38;
  uRam0000000113804620 = uStack_40;
  uRam0000000113804638 = uStack_28;
  uRam0000000113804630 = uStack_30;
  uRam0000000113804648 = uStack_18;
  uRam0000000113804640 = uStack_20;
  return;
}



/* Entry: 101eec4f0; end: 101eec5cf;  */

void FUN_101eec4f0(undefined8 param_1,long param_2,long param_3)

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
          goto LAB_101eec59c;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_101eec59c;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 5) goto LAB_101eec5ac;
          pcVar3 = *(code **)(param_3 + 0x138);
        }
LAB_101eec59c:
        (*pcVar3)();
      }
LAB_101eec5ac:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101eec5d0; end: 101eec6bb;  */

void FUN_101eec5d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  if ((((((*unaff_x20 == 0) ||
         ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
        ((unaff_x20[1] == 0 ||
         ((**(code **)(param_3 + 0x18))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) &&
       ((unaff_x20[2] == 0 ||
        ((**(code **)(param_3 + 0x18))(unaff_x20[2],3,param_2,param_3), unaff_x21 == 0)))) &&
      ((unaff_x20[3] == 0 ||
       ((**(code **)(param_3 + 0x18))(unaff_x20[3],4,param_2,param_3), unaff_x21 == 0)))) &&
     (((char)unaff_x20[4] != '\x01' ||
      ((**(code **)(param_3 + 0x68))(1,5,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 6),*(undefined8 *)(unaff_x20 + 8),
                        param_2,param_3);
  }
  return;
}



/* Entry: 101eec6bc; end: 101eec6f7;  */

void FUN_101eec6bc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 101eec6f8; end: 101eec727;  */

undefined1  [16] FUN_101eec6f8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 101eec728; end: 101eec75b;  */

void FUN_101eec728(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 101eec75c; end: 101eec76f;  */

undefined1  [16] FUN_101eec75c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x101eec76c;
  return auVar1;
}



/* Entry: 101eec770; end: 101eec797;  */

void FUN_101eec770(void)

{
  FUN_101eec4f0();
  return;
}



/* Entry: 101eec798; end: 101eec79b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101eec798(undefined8 *param_1,undefined8 param_2,long param_3)

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
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
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



/* Entry: 101eec79c; end: 101eec7d3;  */

uint FUN_101eec79c(long param_1,long param_2)

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
  FUN_101eecdbc();
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



/* Entry: 101eec7d4; end: 101eec81b;  */

uint FUN_101eec7d4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_101eeca54(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101eec81c; end: 101eec8bb;  */

/* WARNING: Possible PIC construction at 0x000101eec868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eec878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eec86c) */
/* WARNING: Removing unreachable block (ram,0x000101eec87c) */

void FUN_101eec81c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e3bfa8 != -1) {
    func_0x000107c61568(0x112e3bfa8,FUN_101eec4a8);
  }
  uVar5 = uRam0000000113804648;
  uVar4 = uRam0000000113804640;
  uVar3 = uRam0000000113804638;
  uVar2 = uRam0000000113804630;
  uVar1 = uRam0000000113804628;
  *param_1 = uRam0000000113804620;
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



/* Entry: 101eec8bc; end: 101eec8f7;  */

void FUN_101eec8bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e3bfc8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e3bfc8,&UNK_10da279d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101eec8f8; end: 101eeca0b;  */

void FUN_101eec8f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = *(undefined1 *)(unaff_x20 + 2);
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_40 = unaff_x20[4];
  uStack_48 = unaff_x20[3];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101eeca0c; end: 101eeca53;  */

uint FUN_101eeca0c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_101eeca54(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101eeca54; end: 101eecabf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101eeca54(int *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
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
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
     ((param_1[3] != param_2[3] || (((*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4)) & 1) != 0))))
  {
    return (byte *)0x0;
  }
  pbVar10 = *(byte **)(param_1 + 6);
  pbVar25 = *(byte **)(param_1 + 8);
  lVar24 = *(long *)(param_2 + 6);
  uVar16 = *(ulong *)(param_2 + 8);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar16 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
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
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
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
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      lVar24 = CONCAT17(bVar34 | auVar43[7],
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
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 101eecac0; end: 101eecaff;  */

void FUN_101eecac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3bfb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da27900;
  func_0x000107c61520(&UNK_10da27900,&UNK_11049a690);
  puRam0000000112e3bfb0 = puVar1;
  return;
}



/* Entry: 101eecb00; end: 101eecb23;  */

void FUN_101eecb00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101eecb24();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101eecb24; end: 101eecb63;  */

void FUN_101eecb24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3bfb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da278d8;
  func_0x000107c61520(&UNK_10da278d8,&UNK_11049a690);
  puRam0000000112e3bfb8 = puVar1;
  return;
}



/* Entry: 101eecb64; end: 101eecb8f;  */

void FUN_101eecb64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101eecac0();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101eec104();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101eecb90; end: 101eecb93;  */

void FUN_101eecb90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3bfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da27940;
  func_0x000107c61520(&UNK_10da27940,&UNK_11049a690);
  puRam0000000112e3bfc0 = puVar1;
  return;
}



/* Entry: 101eecb94; end: 101eecbd3;  */

void FUN_101eecb94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3bfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da27940;
  func_0x000107c61520(&UNK_10da27940,&UNK_11049a690);
  puRam0000000112e3bfc0 = puVar1;
  return;
}



/* Entry: 101eecbd4; end: 101eecbff;  */

long FUN_101eecbd4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101eecc00; end: 101eecc0b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101eecc00(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x20) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x20) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101eecc0c; end: 101eeccc3;  */

undefined8 * FUN_101eecc0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  uVar1 = param_2[4];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 101eeccc4; end: 101eecd0b;  */

undefined8 * FUN_101eeccc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101eecd0c; end: 101eecdbb;  */

int FUN_101eecd0c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 4)) {
    uVar1 = *(byte *)(param_1 + 4) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101eecdbc; end: 101eecdfb;  */

void FUN_101eecdbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3bfd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10da278ac;
  func_0x000107c61520(&DAT_10da278ac,&UNK_11049a690);
  puRam0000000112e3bfd0 = puVar1;
  return;
}



/* Entry: 101eecdfc; end: 101eece8f;  */

bool FUN_101eecdfc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101eece90; end: 101eecf2f;  */

void FUN_101eece90(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101eecf30; end: 101eed02f;  */

undefined8 * FUN_101eecf30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_2[6];
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 101eed030; end: 101eed093;  */

undefined8 * FUN_101eed030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61170(uVar2);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 101eed094; end: 101eed2d3;  */

int FUN_101eed094(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101eed2d4; end: 101eed313;  */

void FUN_101eed2d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3c000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da27c04;
  func_0x000107c61520(&UNK_10da27c04,&UNK_11049a9a0);
  puRam0000000112e3c000 = puVar1;
  return;
}



/* Entry: 101eed314; end: 101eed327;  */

bool FUN_101eed314(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101eed328; end: 101eed3d3;  */

void FUN_101eed328(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101eed3d4; end: 101eed92f;  */

long FUN_101eed3d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101eed930; end: 101eed95f;  */

void FUN_101eed930(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101eed960; end: 101eed983;  */

void FUN_101eed960(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eed984; end: 101eeda27;  */

void FUN_101eed984(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61434(param_1);
  }
  else {
    lVar2 = 0;
    func_0x000101eefb80();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = lVar1;
    func_0x000107c615f0(lVar1);
    func_0x000101ef2708(param_1,param_2);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 101eeda28; end: 101eeda47;  */

void FUN_101eeda28(void)

{
  func_0x000107c61168(&PTR_PTR_112e3c048);
  return;
}



/* Entry: 101eeda48; end: 101eedbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101eeda48(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11302cb28);
  func_0x000107c61174();
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101eedbf0; end: 101eedbff;  */

void FUN_101eedbf0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  FUN_101eeda28();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11049aa80;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 101eedc00; end: 101eedc9f;  */

void FUN_101eedc00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eedca0; end: 101eedd47;  */

void FUN_101eedca0(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11049aad0;
  func_0x000107c613fc(&UNK_11049aad0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x0001000285a8(0x112e3c0a8,&UNK_10da27cb0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  pcVar2 = FUN_101eedd48;
  func_0x0001000bdd8c(FUN_101eedd48,puVar1);
  uVar3 = 0;
  func_0x0001002aa850(0);
  func_0x000107c610f8();
  func_0x000103ee5710(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101eedd48; end: 101eedd4b;  */

void FUN_101eedd48(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  FUN_101eeda28();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11049aa80;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 101eedd4c; end: 101eee653;  */

void FUN_101eedd4c(undefined8 *param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  code *pcVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 unaff_x20;
  code *pcVar24;
  ulong uVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 *puVar29;
  undefined *puVar30;
  ulong *puVar31;
  undefined *puVar32;
  code *pcVar33;
  undefined *puVar34;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  code *pcStack_248;
  code *pcStack_238;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  code *pcStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
  undefined1 auStack_1b0 [64];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *apuStack_88 [3];
  
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  apuStack_88[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_260 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101ef156c();
  puVar34 = puVar11;
  FUN_101ef156c();
  puStack_98 = puVar11;
  puStack_a0 = puVar11;
  uStack_af = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  puStack_e0 = (undefined *)0x0;
  puStack_f0 = puVar11;
  puStack_e8 = puVar11;
  puStack_90 = puVar34;
  if (param_2 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar6 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 0) {
    uStack_258 = 0;
    pcStack_250 = (code *)0x0;
    puVar34 = (undefined *)0x0;
    puVar17 = (undefined *)0x0;
    pcStack_248 = (code *)0x0;
    pcVar33 = (code *)0x0;
    puVar19 = (undefined *)0x0;
    puVar32 = (undefined *)0x0;
    pcStack_238 = (code *)0x0;
    puVar27 = (undefined *)0x0;
  }
  else {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar33 = (code *)SoftwareBreakpoint(1,0x101eee654);
      (*pcVar33)();
    }
    uVar23 = 0;
    pcVar33 = (code *)0x0;
    pcVar24 = (code *)0x0;
    pcVar22 = (code *)0x0;
    pcVar21 = (code *)0x0;
    uVar20 = 0;
    puVar11 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    puVar28 = (undefined *)0x0;
    puVar30 = (undefined *)0x0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar13 = *(ulong *)(param_2 + uVar20 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar13 = uVar20;
        FUN_101ef05a8(uVar20,param_2);
      }
      uVar20 = uVar20 + 1;
      puVar34 = &UNK_11049ab20;
      func_0x000107c613fc(&UNK_11049ab20,0x20,7);
      *(undefined ***)(puVar34 + 0x10) = &puStack_98;
      *(ulong *)(puVar34 + 0x18) = uVar13;
      func_0x000107c61174();
      func_0x000100cd61ac(uVar23,puVar14);
      puVar17 = &UNK_11049ab48;
      func_0x000107c613fc(&UNK_11049ab48,0x20,7);
      *(undefined8 *)(puVar17 + 0x10) = 0x101ef2934;
      *(undefined **)(puVar17 + 0x18) = puVar34;
      puVar14 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_1e0 = FUN_101ef2968;
      uStack_1d8 = SUB81(puVar17,0);
      uStack_1d7 = (undefined7)((ulong)puVar17 >> 8);
      puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1f8 = 0x42000000;
      pcStack_1f0 = FUN_101eee6c4;
      puStack_1e8 = &UNK_11049ab60;
      ppuVar7 = &puStack_200;
      func_0x000107c60bc4();
      func_0x000107c61574(CONCAT71(uStack_1d7,uStack_1d8));
      puVar17 = &UNK_11049ab98;
      func_0x000107c613fc(&UNK_11049ab98,0x20,7);
      *(undefined ***)(puVar17 + 0x10) = &puStack_e0;
      *(ulong *)(puVar17 + 0x18) = uVar13;
      func_0x000107c61174();
      func_0x000100cd61ac(pcVar33,puVar30);
      puVar19 = &UNK_11049abc0;
      func_0x000107c613fc(&UNK_11049abc0,0x20,7);
      *(code **)(puVar19 + 0x10) = FUN_101ef29bc;
      *(undefined **)(puVar19 + 0x18) = puVar17;
      pcStack_1e0 = FUN_101ef29e0;
      uStack_1d8 = SUB81(puVar19,0);
      uStack_1d7 = (undefined7)((ulong)puVar19 >> 8);
      puStack_200 = puVar14;
      uStack_1f8 = 0x42000000;
      pcStack_1f0 = FUN_101eee964;
      puStack_1e8 = &UNK_11049abd8;
      ppuVar8 = &puStack_200;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(CONCAT71(uStack_1d7,uStack_1d8));
      puVar19 = &UNK_11049ac10;
      func_0x000107c613fc(&UNK_11049ac10,0x30,7);
      *(undefined ***)(puVar19 + 0x10) = &puStack_98;
      *(ulong *)(puVar19 + 0x18) = uVar13;
      *(undefined8 *)(puVar19 + 0x20) = unaff_x20;
      *(undefined ***)(puVar19 + 0x28) = &puStack_e8;
      func_0x000107c61174();
      func_0x000107c6157c(unaff_x20);
      func_0x000100cd61ac(pcVar24,puVar28);
      puVar32 = &UNK_11049ac38;
      func_0x000107c613fc(&UNK_11049ac38,0x20,7);
      *(code **)(puVar32 + 0x10) = FUN_101ef2a00;
      *(undefined **)(puVar32 + 0x18) = puVar19;
      pcStack_1e0 = FUN_101ef2a44;
      uStack_1d8 = SUB81(puVar32,0);
      uStack_1d7 = (undefined7)((ulong)puVar32 >> 8);
      puStack_200 = puVar14;
      uStack_1f8 = 0x42000000;
      pcStack_1f0 = FUN_101eeeca8;
      puStack_1e8 = &UNK_11049ac50;
      ppuVar9 = &puStack_200;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c61574(CONCAT71(uStack_1d7,uStack_1d8));
      puVar32 = &UNK_11049ac88;
      func_0x000107c613fc(&UNK_11049ac88,0x28,7);
      *(undefined ***)(puVar32 + 0x10) = &puStack_a0;
      *(ulong *)(puVar32 + 0x18) = uVar13;
      *(undefined ***)(puVar32 + 0x20) = &puStack_f0;
      func_0x000107c61174();
      func_0x000100cd61ac(pcVar22,puVar16);
      puVar27 = &UNK_11049acb0;
      func_0x000107c613fc(&UNK_11049acb0,0x20,7);
      *(code **)(puVar27 + 0x10) = FUN_101ef2a84;
      *(undefined **)(puVar27 + 0x18) = puVar32;
      pcStack_1e0 = FUN_101ef2ac0;
      uStack_1d8 = SUB81(puVar27,0);
      uStack_1d7 = (undefined7)((ulong)puVar27 >> 8);
      puStack_200 = puVar14;
      uStack_1f8 = 0x42000000;
      pcStack_1f0 = FUN_101eef0ac;
      puStack_1e8 = &UNK_11049acc8;
      ppuVar10 = &puStack_200;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c61574(CONCAT71(uStack_1d7,uStack_1d8));
      puVar27 = &UNK_11049ad00;
      func_0x000107c613fc(&UNK_11049ad00,0x28,7);
      *(undefined ***)(puVar27 + 0x10) = apuStack_88;
      *(ulong *)(puVar27 + 0x18) = uVar13;
      *(undefined ***)(puVar27 + 0x20) = &puStack_90;
      func_0x000107c61174(uVar13);
      func_0x000100cd61ac(pcVar21,puVar11);
      puVar11 = &UNK_11049ad28;
      func_0x000107c613fc(&UNK_11049ad28,0x20,7);
      *(code **)(puVar11 + 0x10) = FUN_101ef2af8;
      *(undefined **)(puVar11 + 0x18) = puVar27;
      pcStack_1e0 = (code *)0x101ef2b20;
      uStack_1d8 = SUB81(puVar11,0);
      uStack_1d7 = (undefined7)((ulong)puVar11 >> 8);
      puStack_200 = puVar14;
      uStack_1f8 = 0x42000000;
      pcStack_1f0 = FUN_101eef450;
      puStack_1e8 = &UNK_11049ad40;
      ppuVar12 = &puStack_200;
      func_0x000107c60bc4();
      func_0x000107c61574(CONCAT71(uStack_1d7,uStack_1d8));
      func_0x000107c4c6a8(uVar13);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(uVar13);
      uVar23 = 0x101ef2934;
      pcVar33 = FUN_101ef29bc;
      pcVar24 = FUN_101ef2a00;
      pcVar22 = FUN_101ef2a84;
      pcVar21 = FUN_101ef2af8;
      puVar11 = puVar27;
      puVar16 = puVar32;
      puVar14 = puVar34;
      puVar28 = puVar19;
      puVar30 = puVar17;
    } while (uVar6 != uVar20);
    pcVar33 = FUN_101ef2a84;
    pcStack_238 = FUN_101ef2af8;
    pcStack_250 = FUN_101ef29bc;
    pcStack_248 = FUN_101ef2a00;
    uStack_258 = 0x101ef2934;
    puVar11 = puStack_e8;
  }
  lVar26 = *(long *)(puVar11 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar26 != 0) {
    puStack_200 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(puVar11);
    func_0x000100403514(0,lVar26,0);
    puVar29 = (undefined8 *)(puVar11 + 0x28);
    puVar16 = puStack_200;
    do {
      uVar23 = puVar29[-1];
      uVar2 = *puVar29;
      uVar6 = *(ulong *)(puVar16 + 0x10);
      uVar20 = *(ulong *)(puVar16 + 0x18);
      puStack_200 = puVar16;
      func_0x000107c61434(uVar2);
      if (uVar20 >> 1 <= uVar6) {
        func_0x000100403514(1 < uVar20,uVar6 + 1,1);
        puVar16 = puStack_200;
      }
      puVar29 = puVar29 + 8;
      *(ulong *)(puVar16 + 0x10) = uVar6 + 1;
      *(undefined8 *)(puVar16 + uVar6 * 0x10 + 0x20) = uVar23;
      *(undefined8 *)(puVar16 + uVar6 * 0x10 + 0x28) = uVar2;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    func_0x000107c6142c(puVar11);
  }
  puVar14 = puVar16;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar16);
  puVar11 = puStack_90;
  puVar31 = (ulong *)(puStack_90 + 0x40);
  uVar20 = *puVar31;
  uVar13 = 1L << ((ulong)(byte)puStack_90[0x20] & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((puStack_90[0x20] & 0x3f) < 6) {
    uVar6 = ~(-1L << (uVar13 & 0x3f));
  }
  func_0x000107c61434();
  lVar26 = 0;
  uVar6 = uVar6 & uVar20;
joined_r0x000101eee3b8:
  do {
    do {
      while (uVar20 = uVar6, uVar20 == 0) {
        bVar5 = SCARRY8(lVar26,1);
        lVar26 = lVar26 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar33 = (code *)SoftwareBreakpoint(1,0x101eee650);
          (*pcVar33)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar26) {
          func_0x000107c61574(puVar11);
          func_0x000107c6142c(puVar14);
          puVar30 = apuStack_88[0];
          puVar28 = puStack_98;
          puVar14 = puStack_a0;
          puVar16 = puStack_e8;
          puVar11 = puStack_f0;
          uStack_158 = uStack_c8;
          uStack_160 = uStack_d0;
          uStack_148 = uStack_b8;
          uStack_150 = uStack_c0;
          uStack_13f = uStack_af;
          uStack_147 = uStack_b7;
          uStack_140 = uStack_b0;
          uStack_ff = uStack_af;
          uStack_100 = uStack_b0;
          uStack_118 = uStack_c8;
          uStack_120 = uStack_d0;
          uStack_108 = uStack_b8;
          uStack_107 = uStack_b7;
          uStack_110 = uStack_c0;
          uStack_168 = uStack_d8;
          puStack_170 = puStack_e0;
          uStack_128 = uStack_d8;
          puStack_130 = puStack_e0;
          uStack_1cf = uStack_af;
          uStack_1d0 = uStack_b0;
          puStack_1e8 = (undefined *)uStack_c8;
          pcStack_1f0 = (code *)uStack_d0;
          uStack_1d8 = uStack_b8;
          uStack_1d7 = uStack_b7;
          pcStack_1e0 = (code *)uStack_c0;
          uStack_1f8 = uStack_d8;
          puStack_200 = puStack_e0;
          func_0x000107c61434(apuStack_88[0]);
          func_0x000107c61434(puVar28);
          func_0x000107c61434(puVar14);
          func_0x000101ef2b80(&puStack_170,auStack_1b0,0x112e3c228,&UNK_10da27d30);
          func_0x000101ef2b40(&puStack_200,0x112e3c228,&UNK_10da27d30);
          func_0x000107c6142c(puStack_a0);
          func_0x000107c6142c(puStack_98);
          func_0x000107c6142c(puStack_90);
          func_0x000107c6142c(apuStack_88[0]);
          func_0x000100cd61ac(uStack_258,puVar34);
          func_0x000100cd61ac(pcStack_250,puVar17);
          func_0x000100cd61ac(pcStack_248,puVar19);
          func_0x000100cd61ac(pcVar33,puVar32);
          func_0x000100cd61ac(pcStack_238,puVar27);
          *param_1 = puVar30;
          param_1[1] = puStack_260;
          param_1[2] = puVar28;
          param_1[3] = puVar14;
          param_1[4] = puVar16;
          param_1[5] = puVar11;
          param_1[7] = uStack_128;
          param_1[6] = puStack_130;
          param_1[9] = uStack_118;
          param_1[8] = uStack_120;
          param_1[0xb] = CONCAT71(uStack_107,uStack_108);
          param_1[10] = uStack_110;
          *(undefined8 *)((long)param_1 + 0x61) = uStack_ff;
          *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_100,uStack_107);
          return;
        }
        uVar6 = puVar31[lVar26];
      }
      uVar6 = uVar20 - 1 & uVar20;
    } while (*(long *)(puVar14 + 0x10) == 0);
    uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar18 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) | lVar26 << 6;
    puVar1 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar18 * 0x10);
    uVar20 = *puVar1;
    uVar3 = puVar1[1];
    uVar23 = *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar18 * 8);
    func_0x000107c6068c(&puStack_200,*(undefined8 *)(puVar14 + 0x28));
    func_0x000107c61434(uVar3);
    func_0x000107c61174();
    ppuVar7 = &puStack_200;
    func_0x000107c5fb58(ppuVar7,uVar20,uVar3);
    func_0x000107c606a8();
    uVar18 = -1L << ((ulong)(byte)puVar14[0x20] & 0x3f);
    uVar25 = (ulong)ppuVar7 & (uVar18 ^ 0xffffffffffffffff);
    if ((*(ulong *)(puVar14 + (uVar25 >> 6) * 8 + 0x38) >> (uVar25 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (ulong *)(*(long *)(puVar14 + 0x30) + uVar25 * 0x10);
        uVar15 = *puVar1;
        uVar4 = puVar1[1];
        if ((uVar15 == uVar20 && uVar4 == uVar3) ||
           (func_0x000107c605b8(uVar15,uVar4,uVar20,uVar3,0), (uVar15 & 1) != 0)) {
          func_0x000107c61174(uVar23);
          puVar16 = puStack_260;
          func_0x000107c61558(puStack_260);
          puStack_200 = puStack_260;
          FUN_101ef004c(uVar23,uVar20,uVar3,puVar16);
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(uVar23);
          puStack_260 = puStack_200;
          goto joined_r0x000101eee3b8;
        }
        uVar25 = uVar25 + 1 & ~uVar18;
      } while ((*(ulong *)(puVar14 + (uVar25 >> 6) * 8 + 0x38) >> (uVar25 & 0x3f) & 1) != 0);
    }
    func_0x000107c61170(uVar23);
    func_0x000107c6142c(uVar3);
  } while( true );
}



/* Entry: 101eee654; end: 101eee6c3;  */

void FUN_101eee654(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  FUN_101ef075c();
  uVar2 = *in_stack_00000018 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar2 + 0x10);
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x000101eefd50(uVar2,uVar1 + 1,1);
    *in_stack_00000018 = uVar2;
    uVar2 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar2 + uVar1 * 8 + 0x20) = in_stack_00000020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(in_stack_00000020);
  return;
}



/* Entry: 101eee6c4; end: 101eee7df;  */

/* WARNING: Possible PIC construction at 0x000101eee7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eee7b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eee7a4) */
/* WARNING: Removing unreachable block (ram,0x000101eee7bc) */

void FUN_101eee6c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  uVar3 = uVar2;
  func_0x000107c5faec(param_3);
  if (param_5 == 0) {
    param_5 = 0;
    uVar5 = 0;
    uVar4 = uVar3;
  }
  else {
    uVar5 = uVar3;
    func_0x000107c5faec(param_5);
    uVar4 = uVar5;
  }
  if (param_6 == 0) {
    param_6 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c61174(param_8);
  (*pcVar1)(param_2,uVar2,param_3,uVar3,param_4,param_5,uVar5,param_6,uVar4,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101eee7e0; end: 101eee963;  */

void FUN_101eee7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&uStack_b0 - extraout_x8;
  func_0x000101ef2b80(param_8,lVar3,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  lVar1 = lVar3;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000101ef2b40(lVar3,0x112d373d8,&UNK_10d9014c0);
    param_1 = 0;
  }
  else {
    func_0x000107c5ee8c();
    (**(code **)(lVar4 + 8))(lVar3,lVar2);
  }
  uStack_a8 = param_9[1];
  uStack_b0 = *param_9;
  uStack_98 = param_9[3];
  uStack_a0 = param_9[2];
  uStack_90 = param_9[4];
  uStack_88 = (undefined1)param_9[5];
  uStack_7f = *(undefined8 *)((long)param_9 + 0x31);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_9 + 0x29);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_9 + 0x29) >> 0x38);
  *param_9 = param_2;
  param_9[1] = param_3;
  param_9[2] = param_4;
  param_9[3] = param_5;
  param_9[4] = 0;
  param_9[5] = param_1;
  param_9[6] = param_10;
  *(undefined1 *)(param_9 + 7) = 2;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c61174(param_10);
  func_0x000101ef2b40(&uStack_b0,0x112e3c228,&UNK_10da27d30);
  return;
}



/* Entry: 101eee964; end: 101eeeac7;  */

void FUN_101eee964(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  
  lVar2 = 0x112d373d8;
  puVar3 = &UNK_10d9014c0;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffa0 + -extraout_x8;
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5faec(param_2);
  puVar4 = puVar3;
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar4;
    func_0x000107c5faec(param_4);
  }
  if (param_5 == 0) {
    lVar2 = 0;
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(puVar6,param_5);
    lVar2 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar6,param_5 == 0,1);
  (*pcVar1)(param_2,puVar3,param_3,puVar4,param_4,puVar5,puVar6);
  func_0x000107c6142c(puVar3);
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(puVar5);
  func_0x000101ef2b40(puVar6,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 101eeeac8; end: 101eeeca7;  */

/* WARNING: Possible PIC construction at 0x000101eeeba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eeeba8) */
/* WARNING: Removing unreachable block (ram,0x000101eeec50) */
/* WARNING: Removing unreachable block (ram,0x000101eeebd4) */
/* WARNING: Removing unreachable block (ram,0x000101eeec7c) */
/* WARNING: Removing unreachable block (ram,0x000101eeebe4) */

void FUN_101eeeac8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte in_stack_00000020;
  ulong *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  if ((in_stack_00000020 & 1) == 0) {
    uVar3 = *(undefined8 *)(in_stack_00000038 + 0x10);
    func_0x000107c5fadc();
    func_0x000107c4f628(uVar3);
    func_0x000107c61170(param_1);
  }
  else {
    FUN_101ef075c();
    uVar2 = *in_stack_00000028 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar2 + 0x10);
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar2 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      func_0x000101eefd50(uVar2,uVar1 + 1,1);
      *in_stack_00000028 = uVar2;
      uVar2 = uVar2 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
    *(undefined8 *)(uVar2 + uVar1 * 8 + 0x20) = in_stack_00000030;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(in_stack_00000030);
  return;
}



/* Entry: 101eeeca8; end: 101eeee0f;  */

void FUN_101eeeca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,byte param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined8 auStack_e0 [4];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uStack_9c = (uint)param_12;
  uStack_98 = param_9;
  lVar1 = 0;
  uVar4 = param_2;
  uStack_90 = param_8;
  uStack_88 = param_5;
  uStack_80 = param_6;
  uStack_78 = param_7;
  func_0x000107c5ede0();
  lStack_70 = *(long *)(lVar1 + -8);
  lStack_68 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_b0 + lVar1;
  pcStack_a8 = *(code **)(param_1 + 0x20);
  func_0x000107c5faec(param_2);
  uVar5 = uVar4;
  func_0x000107c5faec(param_3);
  func_0x000107c5edb4(puVar6,param_4);
  uVar2 = param_10;
  func_0x000107c61174(param_10);
  uVar3 = param_11;
  func_0x000107c61174(param_11);
  auStack_c0[lVar1] = (char)uStack_9c;
  *(undefined8 *)((long)auStack_e0 + lVar1 + 0x10) = param_10;
  *(undefined8 *)((long)auStack_e0 + lVar1 + 0x18) = param_11;
  *(undefined8 *)((long)auStack_e0 + lVar1 + 8) = uStack_98;
  *(undefined8 *)((long)auStack_e0 + lVar1) = uStack_90;
  (*pcStack_a8)(param_2,uVar4,param_3,uVar5,puVar6,uStack_88,uStack_80,uStack_78);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar5);
  (**(code **)(lStack_70 + 8))(puVar6,lStack_68);
  return;
}



/* Entry: 101eeee10; end: 101eef0ab;  */

/* WARNING: Possible PIC construction at 0x000101eeefa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eeefa8) */
/* WARNING: Removing unreachable block (ram,0x000101eef054) */
/* WARNING: Removing unreachable block (ram,0x000101eeefd4) */
/* WARNING: Removing unreachable block (ram,0x000101eef080) */
/* WARNING: Removing unreachable block (ram,0x000101eeefe4) */

void FUN_101eeee10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000000;
  ulong *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 auStack_100 [9];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  auStack_100[0] = in_stack_00000028;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)auStack_100 - extraout_x8;
  if (param_4 == 6) {
    FUN_101ef075c();
    uVar5 = *in_stack_00000018 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar5 + 0x10);
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x000101eefd50(uVar5,uVar1 + 1,1);
      *in_stack_00000018 = uVar5;
      uVar5 = uVar5 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    *(undefined8 *)(uVar5 + uVar1 * 8 + 0x20) = in_stack_00000020;
  }
  else {
    func_0x000107c5ee8c();
    uVar7 = param_1;
    func_0x000101ef2b80(in_stack_00000000,lVar2,0x112d373d8,&UNK_10d9014c0);
    lVar3 = 0;
    func_0x000107c5eea4();
    lVar6 = *(long *)(lVar3 + -8);
    lVar4 = lVar2;
    (**(code **)(lVar6 + 0x30))(lVar2,1,lVar3);
    if ((int)lVar4 == 1) {
      func_0x000101ef2b40(lVar2,0x112d373d8,&UNK_10d9014c0);
      uVar7 = 0;
    }
    else {
      func_0x000107c5ee8c();
      (**(code **)(lVar6 + 8))(lVar2,lVar3);
    }
    uStack_88 = in_stack_00000020;
    uStack_80 = 1;
    uStack_b8 = param_2;
    uStack_b0 = param_3;
    uStack_a8 = param_5;
    uStack_a0 = param_6;
    uStack_98 = param_1;
    uStack_90 = uVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(in_stack_00000020);
  return;
}



/* Entry: 101eef0ac; end: 101eef2fb;  */

void FUN_101eef0ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined *puVar10;
  long alStack_c0 [4];
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0x112d373d8;
  puVar4 = &UNK_10d9014c0;
  lStack_78 = param_8;
  uStack_70 = param_3;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lStack_68 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pcStack_80 = *(code **)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5faec();
  puVar5 = puVar4;
  uStack_90 = param_2;
  func_0x000107c5faec();
  uStack_98 = param_4;
  if (param_5 == 0) {
    lStack_a0 = 0;
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = puVar5;
    func_0x000107c5faec();
    lStack_a0 = param_5;
  }
  func_0x000107c5ee94(lVar8,param_6);
  if (param_7 != 0) {
    func_0x000107c5ee94(lVar7,param_7);
  }
  pcVar9 = *(code **)(lStack_68 + 0x38);
  (*pcVar9)(lVar7,param_7 == 0,1,lVar2);
  bVar1 = lStack_78 == 0;
  if (!bVar1) {
    func_0x000107c5ee94(lVar6);
  }
  (*pcVar9)(lVar6,bVar1,1,lVar2);
  uVar3 = param_9;
  func_0x000107c61174(param_9);
  *(long *)(lVar8 + -0x18) = lVar6;
  *(undefined8 *)(lVar8 + -0x10) = param_9;
  *(long *)(lVar8 + -0x20) = lVar7;
  (*pcStack_80)(uStack_90,puVar4,uStack_70,uStack_98,puVar5,lStack_a0,puVar10,lVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(puVar10);
  func_0x000101ef2b40(lVar6,0x112d373d8,&UNK_10d9014c0);
  func_0x000101ef2b40(lVar7,0x112d373d8,&UNK_10d9014c0);
  (**(code **)(lStack_68 + 8))(lVar8,lVar2);
  return;
}



/* Entry: 101eef2fc; end: 101eef44f;  */

/* WARNING: Possible PIC construction at 0x000101eef3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eef3d4) */

void FUN_101eef2fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  uint in_w6;
  ulong *in_x7;
  ulong uVar3;
  undefined8 in_stack_00000000;
  
  if ((in_w6 & 1) == 0) {
    puVar2 = PTR_PTR_1126c3320;
    func_0x000107c61168(PTR_PTR_1126c3320);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5cb1c(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c5faec(puVar2);
    func_0x000107c61170(puVar2);
  }
  else {
    FUN_101ef075c();
    uVar3 = *in_x7 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      func_0x000101eefd50(uVar3,uVar1 + 1,1);
      *in_x7 = uVar3;
      uVar3 = uVar3 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = in_stack_00000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(in_stack_00000000);
  return;
}



/* Entry: 101eef450; end: 101eef5a7;  */

void FUN_101eef450(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  
  lVar2 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffa0 + -extraout_x8;
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5faec(param_2);
  puVar5 = puVar4;
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar6,param_4);
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar6,param_4 == 0,1);
  uVar3 = param_5;
  func_0x000107c61174(param_5);
  (*pcVar1)(param_2,puVar4,param_3,puVar5,puVar6,param_5,param_6);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(puVar5);
  func_0x000101ef2b40(puVar6,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 101eef5a8; end: 101eef693;  */

void FUN_101eef5a8(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_101eefca0(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_101ef12e8(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef690);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef694);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef68c);
  (*pcVar1)();
}



/* Entry: 101eef694; end: 101eef7f7;  */

void FUN_101eef694(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  param_4 = param_4 >> 1;
  lVar5 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef7b4);
    (*pcVar1)();
  }
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (!SCARRY8(lVar6,lVar5)) {
    lVar2 = lVar4;
    func_0x000107c61558();
    if (((int)lVar2 == 0) || (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < lVar6 + lVar5)) {
      FUN_101ef07f0();
      uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
      lVar4 = lVar2;
    }
    lVar6 = uVar3 - *(long *)(lVar4 + 0x10);
    if (param_3 == param_4) {
      if (0 < lVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef7bc);
        (*pcVar1)();
      }
      lVar5 = 0;
    }
    else {
      if (lVar6 < lVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef7f4);
        (*pcVar1)();
      }
      func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x40 + 0x20,param_2 + param_3 * 0x40,
                          lVar5,&UNK_11049a8f8);
      if (0 < lVar5) {
        if (SCARRY8(*(long *)(lVar4 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef7f8);
          (*pcVar1)();
        }
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + lVar5;
      }
    }
    if (lVar5 == lVar6) {
      uStack_6f = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_77 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      func_0x000107c615e8(param_1);
      func_0x000101ef2b40(&uStack_a0,0x112e3c228,&UNK_10da27d30);
    }
    else {
      func_0x000107c615e8(param_1);
    }
    *unaff_x20 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef7b8);
  (*pcVar1)();
}



/* Entry: 101eef7f8; end: 101eef8f7;  */

void FUN_101eef7f8(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef8ec);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_101ef07f0();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef8f0);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef8f4);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x40 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_11049a8f8);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101eef8f8);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101eef8f8; end: 101eefb5b;  */

undefined * FUN_101eef8f8(long param_1,ulong param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  
  lVar11 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 != 0) {
    pcVar12 = (char *)(param_1 + 0x58);
    do {
      lVar4 = *(long *)(pcVar12 + -0x38);
      uVar8 = *(ulong *)(pcVar12 + -0x30);
      uVar9 = *(ulong *)(pcVar12 + -0x20);
      uVar10 = *(undefined8 *)(pcVar12 + -8);
      cVar1 = *pcVar12;
      func_0x000107c61434(uVar8);
      func_0x000107c61434(uVar9);
      func_0x000107c61174();
      func_0x000107c61174();
      puVar3 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar3 == 0) || ((long)puVar7 < 0)) ||
         (puVar3 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar2 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar2 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar2 = puVar7;
          }
          func_0x000107c60480(puVar2);
        }
        puVar3 = (undefined *)0x0;
        func_0x000101eefd50(0,puVar2 + 1,1,puVar7);
      }
      puVar2 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
      uVar6 = *(ulong *)(puVar2 + 0x10);
      puVar7 = puVar3;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar6) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
        func_0x000101eefd50(puVar7,uVar6 + 1,1,puVar3);
        puVar2 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
      }
      *(ulong *)(puVar2 + 0x10) = uVar6 + 1;
      *(undefined8 *)(puVar2 + uVar6 * 8 + 0x20) = uVar10;
      if ((cVar1 == '\0') && (*(long *)(param_2 + 0x10) != 0)) {
        func_0x000107c61434(uVar8);
        func_0x000107c61434(param_2);
        uVar6 = uVar8;
        func_0x000100029284();
        if ((uVar6 & 1) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x38) + lVar4 * 8);
          func_0x000107c61174();
          func_0x000107c6142c(param_2);
          func_0x000107c6142c(uVar8);
          func_0x000107c61174();
          puVar3 = puVar7;
          if ((ulong)puVar7 >> 0x3e != 0) {
            if ((undefined *)0x7fffffffffffffff < puVar7) {
              puVar2 = puVar7;
            }
            func_0x000107c60480(puVar2);
            puVar3 = (undefined *)0x0;
            func_0x000101eefd50(0,puVar2 + 1,1,puVar7);
            puVar2 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          }
          uVar6 = *(ulong *)(puVar2 + 0x10);
          puVar7 = puVar3;
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar6) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
            func_0x000101eefd50(puVar7,uVar6 + 1,1,puVar3);
            puVar2 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          }
          *(ulong *)(puVar2 + 0x10) = uVar6 + 1;
          *(undefined8 *)(puVar2 + uVar6 * 8 + 0x20) = uVar5;
          func_0x000107c61170();
          goto LAB_101eef944;
        }
        func_0x000107c61170(uVar10);
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(uVar8);
        uVar6 = param_2;
      }
      else {
LAB_101eef944:
        func_0x000107c61170(uVar10);
        uVar6 = uVar8;
        uVar8 = uVar9;
      }
      pcVar12 = pcVar12 + 0x40;
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(uVar6);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return puVar7;
}



/* Entry: 101eefb5c; end: 101eefb9f;  */

void FUN_101eefb5c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eefba0; end: 101eefc9f;  */

void FUN_101eefba0(ulong *param_1,code *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    (*param_2)();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,&UNK_11049a8f8);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_101ef0904(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_101ef0d60(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 101eefca0; end: 101eefe77;  */

void FUN_101eefca0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x000101eefd50();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 101eefe78; end: 101eefef7;  */

undefined * FUN_101eefe78(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_101eefff0();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101eefef8; end: 101eeffef;  */

long FUN_101eefef8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101eeffec);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101eefff0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101ef28f0(0);
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
      FUN_101ef28f0(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101eeffe8);
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



/* Entry: 101eefff0; end: 101ef004b;  */

void FUN_101eefff0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_101ef28f0();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e3c240;
  plVar5 = (long *)&UNK_10da27d40;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101ef004c; end: 101ef030b;  */

void FUN_101ef004c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ef0124);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101ef030c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ef00ec);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101ef019c();
    lVar6 = *unaff_x20;
    goto joined_r0x000101ef0138;
  }
  lVar6 = *unaff_x20;
joined_r0x000101ef0138:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ef019c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101ef030c; end: 101ef05a7;  */

void FUN_101ef030c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e3c248;
  func_0x0001000285a8(0x112e3c248,&UNK_10da27d48);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101ef0574:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101ef05a4);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101ef0574;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101ef05a8);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101ef05a8; end: 101ef075b;  */

ulong FUN_101ef05a8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ef068c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ef0690);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c51c8;
    func_0x000107c61168(PTR_PTR_1126c51c8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c51c8;
    func_0x000107c61168(PTR_PTR_1126c51c8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101ef28f0(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ef075c);
  (*pcVar2)();
}



/* Entry: 101ef075c; end: 101ef07cb;  */

void FUN_101ef075c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    func_0x000101eefd50(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}


