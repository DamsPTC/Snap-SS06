/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107802b94; end: 107802bfb;  */

void FUN_107802b94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107808810();
  func_0x000107802b48();
  uVar1 = *(float *)(param_5 + 4) < *(float *)(unaff_x22 + 4);
  if ((bool)uVar1) {
    func_0x0001078090e8();
    func_0x0001078095b4();
    if ((bool)uVar1) {
      func_0x000107808c74();
      func_0x0001078095a4();
      if ((bool)uVar1) {
        func_0x000107808c9c();
        func_0x0001078095c4();
        if ((bool)uVar1) {
          func_0x0001078093b4();
          uVar3 = param_1[1];
          uVar2 = *param_1;
          uVar4 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar4;
          param_2[1] = uVar3;
          *param_2 = uVar2;
          uVar2 = param_1[2];
          param_1[2] = param_2[2];
          param_2[2] = uVar2;
          uVar2 = param_1[3];
          param_1[3] = param_2[3];
          param_2[3] = uVar2;
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1078036c0; end: 107803783;  */

void FUN_1078036c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    uVar1 = *param_1;
    param_3[1] = param_1[1];
    *param_3 = uVar1;
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3 = param_3 + 4;
  }
  return;
}



/* Entry: 107804cdc; end: 107804d4f;  */

void FUN_107804cdc(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (param_3 - param_2) / 0x18;
  uVar3 = *param_1;
  if (uVar2 < uVar3) {
    _memmove(param_1 + 1);
  }
  else {
    lVar1 = param_2 + uVar3 * 0x18;
    _memmove(param_1 + 1,param_2,uVar3 * 0x18);
    _memcpy(param_1 + 1 + uVar3 * 3,lVar1,param_3 - lVar1);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 107805704; end: 107805bff;  */

/* WARNING: Possible PIC construction at 0x000107805750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010780577c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107805764) */
/* WARNING: Removing unreachable block (ram,0x00010780575c) */
/* WARNING: Removing unreachable block (ram,0x000107805754) */
/* WARNING: Removing unreachable block (ram,0x00010780576c) */
/* WARNING: Removing unreachable block (ram,0x000107805780) */
/* WARNING: Removing unreachable block (ram,0x000107805790) */
/* WARNING: Removing unreachable block (ram,0x000107805798) */
/* WARNING: Removing unreachable block (ram,0x00010780579c) */
/* WARNING: Removing unreachable block (ram,0x000107805890) */
/* WARNING: Removing unreachable block (ram,0x000107805898) */
/* WARNING: Removing unreachable block (ram,0x00010780589c) */
/* WARNING: Removing unreachable block (ram,0x0001078058bc) */
/* WARNING: Removing unreachable block (ram,0x0001078058c0) */
/* WARNING: Removing unreachable block (ram,0x0001078058cc) */
/* WARNING: Removing unreachable block (ram,0x0001078058d4) */
/* WARNING: Removing unreachable block (ram,0x0001078058d8) */
/* WARNING: Removing unreachable block (ram,0x0001078058a0) */
/* WARNING: Removing unreachable block (ram,0x0001078058a4) */
/* WARNING: Removing unreachable block (ram,0x0001078058ac) */
/* WARNING: Removing unreachable block (ram,0x0001078058b0) */
/* WARNING: Removing unreachable block (ram,0x0001078058b8) */
/* WARNING: Removing unreachable block (ram,0x0001078058dc) */
/* WARNING: Removing unreachable block (ram,0x0001078058e8) */
/* WARNING: Removing unreachable block (ram,0x0001078058ec) */
/* WARNING: Removing unreachable block (ram,0x0001078058f4) */
/* WARNING: Removing unreachable block (ram,0x0001078058f8) */
/* WARNING: Removing unreachable block (ram,0x000107805900) */
/* WARNING: Removing unreachable block (ram,0x000107805924) */
/* WARNING: Removing unreachable block (ram,0x000107805904) */
/* WARNING: Removing unreachable block (ram,0x000107805908) */
/* WARNING: Removing unreachable block (ram,0x000107805910) */
/* WARNING: Removing unreachable block (ram,0x000107805914) */
/* WARNING: Removing unreachable block (ram,0x000107805918) */
/* WARNING: Removing unreachable block (ram,0x00010780592c) */
/* WARNING: Removing unreachable block (ram,0x000107805938) */
/* WARNING: Removing unreachable block (ram,0x000107805948) */
/* WARNING: Removing unreachable block (ram,0x000107805788) */
/* WARNING: Removing unreachable block (ram,0x0001078057a0) */
/* WARNING: Removing unreachable block (ram,0x0001078057a8) */
/* WARNING: Removing unreachable block (ram,0x0001078057b4) */
/* WARNING: Removing unreachable block (ram,0x0001078057b8) */
/* WARNING: Removing unreachable block (ram,0x0001078057bc) */
/* WARNING: Removing unreachable block (ram,0x0001078057e0) */
/* WARNING: Removing unreachable block (ram,0x0001078057e4) */
/* WARNING: Removing unreachable block (ram,0x000107805800) */
/* WARNING: Removing unreachable block (ram,0x0001078057ec) */
/* WARNING: Removing unreachable block (ram,0x0001078057fc) */
/* WARNING: Removing unreachable block (ram,0x0001078057cc) */
/* WARNING: Removing unreachable block (ram,0x0001078057dc) */
/* WARNING: Removing unreachable block (ram,0x000107805804) */
/* WARNING: Removing unreachable block (ram,0x00010780580c) */
/* WARNING: Removing unreachable block (ram,0x00010780583c) */
/* WARNING: Removing unreachable block (ram,0x000107805844) */
/* WARNING: Removing unreachable block (ram,0x000107805848) */
/* WARNING: Removing unreachable block (ram,0x000107805868) */
/* WARNING: Removing unreachable block (ram,0x000107805968) */
/* WARNING: Removing unreachable block (ram,0x000107805970) */
/* WARNING: Removing unreachable block (ram,0x00010780587c) */
/* WARNING: Removing unreachable block (ram,0x000107805880) */
/* WARNING: Removing unreachable block (ram,0x000107805814) */
/* WARNING: Removing unreachable block (ram,0x000107805818) */
/* WARNING: Removing unreachable block (ram,0x000107805820) */
/* WARNING: Removing unreachable block (ram,0x000107805824) */
/* WARNING: Removing unreachable block (ram,0x000107805828) */
/* WARNING: Removing unreachable block (ram,0x000107805830) */
/* WARNING: Removing unreachable block (ram,0x000107805834) */
/* WARNING: Removing unreachable block (ram,0x000107805838) */
/* WARNING: Removing unreachable block (ram,0x000107805ad0) */
/* WARNING: Removing unreachable block (ram,0x000107805ad4) */
/* WARNING: Removing unreachable block (ram,0x000107805adc) */
/* WARNING: Removing unreachable block (ram,0x000107805ae0) */
/* WARNING: Removing unreachable block (ram,0x000107805b04) */
/* WARNING: Removing unreachable block (ram,0x000107805ae8) */
/* WARNING: Removing unreachable block (ram,0x000107805af0) */
/* WARNING: Removing unreachable block (ram,0x000107805af4) */
/* WARNING: Removing unreachable block (ram,0x000107805af8) */
/* WARNING: Removing unreachable block (ram,0x000107805afc) */
/* WARNING: Removing unreachable block (ram,0x000107805b08) */
/* WARNING: Removing unreachable block (ram,0x000107805b10) */
/* WARNING: Removing unreachable block (ram,0x000107805b84) */
/* WARNING: Removing unreachable block (ram,0x000107805b18) */
/* WARNING: Removing unreachable block (ram,0x000107805b20) */
/* WARNING: Removing unreachable block (ram,0x000107805b30) */
/* WARNING: Removing unreachable block (ram,0x000107805b34) */
/* WARNING: Removing unreachable block (ram,0x000107805b38) */
/* WARNING: Removing unreachable block (ram,0x000107805b4c) */
/* WARNING: Removing unreachable block (ram,0x000107805b54) */
/* WARNING: Removing unreachable block (ram,0x000107805b60) */
/* WARNING: Removing unreachable block (ram,0x000107805b64) */
/* WARNING: Removing unreachable block (ram,0x000107805b68) */
/* WARNING: Removing unreachable block (ram,0x000107805b90) */

long FUN_107805704(long param_1,long param_2,ulong *param_3)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar5;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *puVar6;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 uVar7;
  undefined8 extraout_x10_01;
  long extraout_x11;
  long extraout_x11_00;
  undefined8 *puVar8;
  undefined8 *extraout_x11_01;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x26;
  undefined *puVar10;
  undefined4 uVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  
  func_0x000107809a18();
  func_0x000107809ce0();
  func_0x000107808a28();
  func_0x000107808d84();
  func_0x000107809020();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107805988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61e8)[unaff_x26] * 4 + 0x10780598c))();
    return param_1;
  }
  bVar2 = 0x23e < extraout_x8_00;
  if ((long)extraout_x8_00 < 0x240) {
    uVar3 = (long)unaff_x20 - (long)unaff_x19 < 0;
    uVar4 = unaff_x20 == unaff_x19;
    if ((unaff_x25 & 1) == 0) {
      if (!(bool)uVar4) {
        while (func_0x000107809f1c(), !(bool)uVar4) {
          uVar13 = (ulong)*(uint *)(unaff_x20 + 4);
          func_0x000107809708();
          if ((bool)uVar3) {
            uVar9 = *(undefined8 *)((long)unaff_x20 + 0x24);
            uVar1 = *(undefined4 *)((long)unaff_x20 + 0x2c);
            do {
              func_0x00010780a120();
              func_0x000107809d1c();
            } while ((bool)uVar3);
            *extraout_x11_01 = extraout_x10_01;
            *(int *)(extraout_x11_01 + 1) = (int)uVar13;
            *(undefined4 *)((long)extraout_x11_01 + 0x14) = uVar1;
            *(undefined8 *)((long)extraout_x11_01 + 0xc) = uVar9;
          }
          func_0x000107809f8c();
        }
      }
    }
    else {
      puVar6 = unaff_x20;
      if (!(bool)uVar4) {
        while( true ) {
          puVar8 = puVar6;
          uVar4 = 1;
          if (puVar8 + 3 == unaff_x19) break;
          uVar13 = (ulong)(uint)*(float *)(puVar8 + 4);
          puVar6 = puVar8 + 3;
          if (*(float *)(puVar8 + 4) < *(float *)(puVar8 + 1)) {
            uVar9 = *(undefined8 *)((long)puVar8 + 0x24);
            uVar1 = *(undefined4 *)((long)puVar8 + 0x2c);
            do {
              uVar4 = 1;
              func_0x000107809d04();
              uVar11 = (undefined4)uVar13;
              puVar6 = extraout_x9;
              uVar7 = extraout_x10;
              puVar8 = unaff_x20;
              if (extraout_x11 == 0) goto LAB_107805a8c;
              func_0x000107809d1c();
              uVar11 = (undefined4)uVar13;
            } while ((bool)uVar4);
            puVar6 = extraout_x9_00;
            uVar7 = extraout_x10_00;
            puVar8 = (undefined8 *)((long)unaff_x20 + extraout_x11_00 + 0x18);
LAB_107805a8c:
            *puVar8 = uVar7;
            *(undefined4 *)(puVar8 + 1) = uVar11;
            *(undefined8 *)((long)puVar8 + 0xc) = uVar9;
            *(undefined4 *)((long)puVar8 + 0x14) = uVar1;
          }
        }
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x000107809514();
      if (bVar2) {
        func_0x000107808e08();
        puVar10 = (undefined *)0x107805754;
        unaff_x21 = param_3;
      }
      else {
        func_0x000107809308();
        puVar10 = (undefined *)0x107805780;
      }
      goto code_r0x000107805c00;
    }
    uVar4 = unaff_x20 == unaff_x19;
    if (!(bool)uVar4) {
      func_0x000107809034();
      do {
        func_0x000107808e08();
        func_0x000107805e7c();
        func_0x000107809efc();
      } while( true );
    }
  }
  func_0x0001078087c4(extraout_x8);
  if ((bool)uVar4) {
    return param_1;
  }
  puVar10 = &SUB_107805c00;
  ___stack_chk_fail();
  unaff_x21 = param_3;
code_r0x000107805c00:
  fVar12 = *(float *)(param_2 + 8);
  uVar13 = (ulong)(uint)fVar12;
  uVar14 = 0;
  if (*(float *)(param_1 + 8) <= fVar12) {
    if (fVar12 <= *(float *)(unaff_x21 + 1)) {
      return 0;
    }
    func_0x000107809398();
    unaff_x21[1] = uVar14;
    *unaff_x21 = uVar13;
    unaff_x21[2] = extraout_x8_02;
    if (*(float *)(param_2 + 8) < *(float *)(param_1 + 8)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar12 <= *(float *)(unaff_x21 + 1)) {
      func_0x000107808e40();
      uVar13 = (ulong)(uint)*(float *)(unaff_x21 + 1);
      uVar14 = 0;
      if (*(float *)(param_2 + 8) <= *(float *)(unaff_x21 + 1)) {
        return 1;
      }
      func_0x000107809398(puVar10);
      uVar5 = extraout_x8_03;
    }
    else {
      func_0x000107809bf8();
      uVar5 = extraout_x8_01;
    }
    unaff_x21[1] = uVar14;
    *unaff_x21 = uVar13;
    unaff_x21[2] = uVar5;
  }
  return 1;
}



/* Entry: 10780654c; end: 107806593;  */

void FUN_10780654c(void)

{
  undefined1 in_NG;
  
  func_0x000107808810();
  func_0x0001078064a0();
  func_0x0001078095b4();
  if ((bool)in_NG) {
    func_0x0001078087a0();
    func_0x0001078095a4();
    if ((bool)in_NG) {
      func_0x00010780877c();
      func_0x0001078095c4();
      if ((bool)in_NG) {
        func_0x000107808758();
      }
    }
  }
  return;
}



/* Entry: 107806e18; end: 107806f3b;  */

/* WARNING: Possible PIC construction at 0x0001078070b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078071f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078071f4) */
/* WARNING: Removing unreachable block (ram,0x000107807208) */
/* WARNING: Removing unreachable block (ram,0x000107807210) */
/* WARNING: Removing unreachable block (ram,0x000107807220) */
/* WARNING: Removing unreachable block (ram,0x000107807274) */
/* WARNING: Removing unreachable block (ram,0x000107807254) */
/* WARNING: Removing unreachable block (ram,0x0001078072dc) */
/* WARNING: Removing unreachable block (ram,0x000107807218) */
/* WARNING: Removing unreachable block (ram,0x0001078072e8) */
/* WARNING: Removing unreachable block (ram,0x0001078072f0) */
/* WARNING: Removing unreachable block (ram,0x0001078072f8) */
/* WARNING: Removing unreachable block (ram,0x000107807300) */
/* WARNING: Removing unreachable block (ram,0x000107807324) */
/* WARNING: Removing unreachable block (ram,0x000107807360) */
/* WARNING: Removing unreachable block (ram,0x00010780737c) */
/* WARNING: Removing unreachable block (ram,0x0001078073e0) */
/* WARNING: Removing unreachable block (ram,0x000107807424) */
/* WARNING: Removing unreachable block (ram,0x000107807440) */
/* WARNING: Removing unreachable block (ram,0x000107807458) */
/* WARNING: Removing unreachable block (ram,0x000107807470) */
/* WARNING: Removing unreachable block (ram,0x000107807478) */
/* WARNING: Removing unreachable block (ram,0x00010780747c) */
/* WARNING: Removing unreachable block (ram,0x000107807480) */
/* WARNING: Removing unreachable block (ram,0x0001078074b4) */
/* WARNING: Removing unreachable block (ram,0x0001078074c0) */
/* WARNING: Removing unreachable block (ram,0x0001078074c8) */
/* WARNING: Removing unreachable block (ram,0x000107807638) */
/* WARNING: Removing unreachable block (ram,0x000107807644) */
/* WARNING: Removing unreachable block (ram,0x000107807670) */
/* WARNING: Removing unreachable block (ram,0x000107807694) */
/* WARNING: Removing unreachable block (ram,0x0001078076c0) */
/* WARNING: Removing unreachable block (ram,0x0001078076d8) */
/* WARNING: Removing unreachable block (ram,0x0001078076cc) */
/* WARNING: Removing unreachable block (ram,0x000107808a68) */
/* WARNING: Removing unreachable block (ram,0x00010780764c) */
/* WARNING: Removing unreachable block (ram,0x0001078074d0) */
/* WARNING: Removing unreachable block (ram,0x0001078074f0) */
/* WARNING: Removing unreachable block (ram,0x00010780752c) */
/* WARNING: Removing unreachable block (ram,0x000107807510) */
/* WARNING: Removing unreachable block (ram,0x000107807518) */
/* WARNING: Removing unreachable block (ram,0x00010780751c) */
/* WARNING: Removing unreachable block (ram,0x000107807520) */
/* WARNING: Removing unreachable block (ram,0x000107807524) */
/* WARNING: Removing unreachable block (ram,0x000107807534) */
/* WARNING: Removing unreachable block (ram,0x000107807554) */
/* WARNING: Removing unreachable block (ram,0x000107807618) */
/* WARNING: Removing unreachable block (ram,0x000107807560) */
/* WARNING: Removing unreachable block (ram,0x0001078075a0) */
/* WARNING: Removing unreachable block (ram,0x0001078075b0) */
/* WARNING: Removing unreachable block (ram,0x0001078075b4) */
/* WARNING: Removing unreachable block (ram,0x0001078075b8) */
/* WARNING: Removing unreachable block (ram,0x0001078075c8) */
/* WARNING: Removing unreachable block (ram,0x0001078075e4) */
/* WARNING: Removing unreachable block (ram,0x0001078075f4) */
/* WARNING: Removing unreachable block (ram,0x0001078075f8) */
/* WARNING: Removing unreachable block (ram,0x000107807600) */
/* WARNING: Removing unreachable block (ram,0x00010780762c) */
/* WARNING: Removing unreachable block (ram,0x00010780730c) */
/* WARNING: Removing unreachable block (ram,0x0001078003c8) */
/* WARNING: Removing unreachable block (ram,0x0001078003e8) */
/* WARNING: Removing unreachable block (ram,0x0001078003f8) */
/* WARNING: Removing unreachable block (ram,0x000107800410) */
/* WARNING: Removing unreachable block (ram,0x000107800418) */
/* WARNING: Removing unreachable block (ram,0x000107800428) */
/* WARNING: Removing unreachable block (ram,0x00010780042c) */
/* WARNING: Removing unreachable block (ram,0x000107800430) */
/* WARNING: Removing unreachable block (ram,0x000107800434) */
/* WARNING: Removing unreachable block (ram,0x000107800438) */
/* WARNING: Removing unreachable block (ram,0x00010780043c) */
/* WARNING: Removing unreachable block (ram,0x000107800448) */
/* WARNING: Removing unreachable block (ram,0x000107800458) */
/* WARNING: Removing unreachable block (ram,0x00010780045c) */
/* WARNING: Removing unreachable block (ram,0x000107800460) */
/* WARNING: Removing unreachable block (ram,0x000107800474) */
/* WARNING: Removing unreachable block (ram,0x00010780048c) */
/* WARNING: Removing unreachable block (ram,0x00010780049c) */
/* WARNING: Removing unreachable block (ram,0x0001078004c4) */
/* WARNING: Removing unreachable block (ram,0x0001078004cc) */
/* WARNING: Removing unreachable block (ram,0x0001078004e0) */
/* WARNING: Removing unreachable block (ram,0x0001078004e4) */
/* WARNING: Removing unreachable block (ram,0x0001078004e8) */
/* WARNING: Removing unreachable block (ram,0x0001078004ec) */
/* WARNING: Removing unreachable block (ram,0x0001078004f0) */
/* WARNING: Removing unreachable block (ram,0x0001078004f4) */
/* WARNING: Removing unreachable block (ram,0x0001078004fc) */
/* WARNING: Removing unreachable block (ram,0x000107800510) */
/* WARNING: Removing unreachable block (ram,0x000107800528) */
/* WARNING: Removing unreachable block (ram,0x000107800538) */
/* WARNING: Removing unreachable block (ram,0x000107800550) */
/* WARNING: Removing unreachable block (ram,0x000107800558) */
/* WARNING: Removing unreachable block (ram,0x000107800568) */
/* WARNING: Removing unreachable block (ram,0x00010780056c) */
/* WARNING: Removing unreachable block (ram,0x000107800570) */
/* WARNING: Removing unreachable block (ram,0x000107800574) */
/* WARNING: Removing unreachable block (ram,0x000107800578) */
/* WARNING: Removing unreachable block (ram,0x00010780057c) */
/* WARNING: Removing unreachable block (ram,0x000107800588) */
/* WARNING: Removing unreachable block (ram,0x00010780059c) */
/* WARNING: Removing unreachable block (ram,0x0001078005a8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ac) */
/* WARNING: Removing unreachable block (ram,0x0001078005c0) */
/* WARNING: Removing unreachable block (ram,0x0001078005c4) */
/* WARNING: Removing unreachable block (ram,0x0001078005c8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ec) */
/* WARNING: Removing unreachable block (ram,0x0001078005f0) */
/* WARNING: Removing unreachable block (ram,0x0001078007e8) */
/* WARNING: Removing unreachable block (ram,0x0001078007ec) */
/* WARNING: Removing unreachable block (ram,0x0001078007f4) */
/* WARNING: Removing unreachable block (ram,0x0001078007f8) */
/* WARNING: Removing unreachable block (ram,0x000107800800) */
/* WARNING: Removing unreachable block (ram,0x000107800808) */
/* WARNING: Removing unreachable block (ram,0x000107800810) */
/* WARNING: Removing unreachable block (ram,0x000107800f64) */
/* WARNING: Removing unreachable block (ram,0x000107800818) */
/* WARNING: Removing unreachable block (ram,0x000107800f14) */
/* WARNING: Removing unreachable block (ram,0x000107800820) */
/* WARNING: Removing unreachable block (ram,0x000107800fcc) */
/* WARNING: Removing unreachable block (ram,0x000107800fd0) */
/* WARNING: Removing unreachable block (ram,0x000107800fd8) */
/* WARNING: Removing unreachable block (ram,0x000107800fe0) */
/* WARNING: Removing unreachable block (ram,0x000107800fe4) */
/* WARNING: Removing unreachable block (ram,0x000107800fec) */
/* WARNING: Removing unreachable block (ram,0x000107800ffc) */
/* WARNING: Removing unreachable block (ram,0x000107801004) */
/* WARNING: Removing unreachable block (ram,0x000107801008) */
/* WARNING: Removing unreachable block (ram,0x000107800828) */
/* WARNING: Removing unreachable block (ram,0x000107800840) */
/* WARNING: Removing unreachable block (ram,0x000107800844) */
/* WARNING: Removing unreachable block (ram,0x00010780084c) */
/* WARNING: Removing unreachable block (ram,0x000107800854) */
/* WARNING: Removing unreachable block (ram,0x000107800858) */
/* WARNING: Removing unreachable block (ram,0x00010780085c) */
/* WARNING: Removing unreachable block (ram,0x0001078008f8) */
/* WARNING: Removing unreachable block (ram,0x0001078008fc) */
/* WARNING: Removing unreachable block (ram,0x00010780094c) */
/* WARNING: Removing unreachable block (ram,0x000107800908) */
/* WARNING: Removing unreachable block (ram,0x00010780090c) */
/* WARNING: Removing unreachable block (ram,0x000107800910) */
/* WARNING: Removing unreachable block (ram,0x000107800918) */
/* WARNING: Removing unreachable block (ram,0x00010780091c) */
/* WARNING: Removing unreachable block (ram,0x000107800920) */
/* WARNING: Removing unreachable block (ram,0x000107800924) */
/* WARNING: Removing unreachable block (ram,0x00010780092c) */
/* WARNING: Removing unreachable block (ram,0x000107800930) */
/* WARNING: Removing unreachable block (ram,0x000107800934) */
/* WARNING: Removing unreachable block (ram,0x000107800950) */
/* WARNING: Removing unreachable block (ram,0x000107800958) */
/* WARNING: Removing unreachable block (ram,0x000107800964) */
/* WARNING: Removing unreachable block (ram,0x00010780096c) */
/* WARNING: Removing unreachable block (ram,0x000107800974) */
/* WARNING: Removing unreachable block (ram,0x00010780098c) */
/* WARNING: Removing unreachable block (ram,0x0001078009b4) */
/* WARNING: Removing unreachable block (ram,0x0001078009b8) */
/* WARNING: Removing unreachable block (ram,0x0001078009c0) */
/* WARNING: Removing unreachable block (ram,0x0001078009d0) */
/* WARNING: Removing unreachable block (ram,0x000107800994) */
/* WARNING: Removing unreachable block (ram,0x00010780099c) */
/* WARNING: Removing unreachable block (ram,0x0001078009a8) */
/* WARNING: Removing unreachable block (ram,0x0001078009ac) */
/* WARNING: Removing unreachable block (ram,0x0001078009b0) */
/* WARNING: Removing unreachable block (ram,0x000107800978) */
/* WARNING: Removing unreachable block (ram,0x000107800980) */
/* WARNING: Removing unreachable block (ram,0x000107800984) */
/* WARNING: Removing unreachable block (ram,0x00010780093c) */
/* WARNING: Removing unreachable block (ram,0x000107800860) */
/* WARNING: Removing unreachable block (ram,0x000107800868) */
/* WARNING: Removing unreachable block (ram,0x00010780086c) */
/* WARNING: Removing unreachable block (ram,0x000107800870) */
/* WARNING: Removing unreachable block (ram,0x000107800878) */
/* WARNING: Removing unreachable block (ram,0x000107800888) */
/* WARNING: Removing unreachable block (ram,0x000107800880) */
/* WARNING: Removing unreachable block (ram,0x000107800894) */
/* WARNING: Removing unreachable block (ram,0x00010780089c) */
/* WARNING: Removing unreachable block (ram,0x0001078008a0) */
/* WARNING: Removing unreachable block (ram,0x0001078008a4) */
/* WARNING: Removing unreachable block (ram,0x0001078008ac) */
/* WARNING: Removing unreachable block (ram,0x0001078008b0) */
/* WARNING: Removing unreachable block (ram,0x0001078008b4) */
/* WARNING: Removing unreachable block (ram,0x0001078008b8) */
/* WARNING: Removing unreachable block (ram,0x0001078008c0) */
/* WARNING: Removing unreachable block (ram,0x0001078008c4) */
/* WARNING: Removing unreachable block (ram,0x0001078008c8) */
/* WARNING: Removing unreachable block (ram,0x0001078008d8) */
/* WARNING: Removing unreachable block (ram,0x0001078008e4) */
/* WARNING: Removing unreachable block (ram,0x0001078008d0) */
/* WARNING: Removing unreachable block (ram,0x000107800bc4) */
/* WARNING: Removing unreachable block (ram,0x000107800d34) */
/* WARNING: Removing unreachable block (ram,0x000107800d3c) */
/* WARNING: Removing unreachable block (ram,0x000107800d44) */
/* WARNING: Removing unreachable block (ram,0x000107800d4c) */
/* WARNING: Removing unreachable block (ram,0x000107800d54) */
/* WARNING: Removing unreachable block (ram,0x000107800f7c) */
/* WARNING: Removing unreachable block (ram,0x000107800d5c) */
/* WARNING: Removing unreachable block (ram,0x000107800f38) */
/* WARNING: Removing unreachable block (ram,0x000107800f40) */
/* WARNING: Removing unreachable block (ram,0x000107800f44) */
/* WARNING: Removing unreachable block (ram,0x000107800f48) */
/* WARNING: Removing unreachable block (ram,0x000107800d64) */
/* WARNING: Removing unreachable block (ram,0x000107801054) */
/* WARNING: Removing unreachable block (ram,0x000107801058) */
/* WARNING: Removing unreachable block (ram,0x000107801060) */
/* WARNING: Removing unreachable block (ram,0x000107801068) */
/* WARNING: Removing unreachable block (ram,0x00010780106c) */
/* WARNING: Removing unreachable block (ram,0x000107801074) */
/* WARNING: Removing unreachable block (ram,0x000107801080) */
/* WARNING: Removing unreachable block (ram,0x000107801084) */
/* WARNING: Removing unreachable block (ram,0x000107801090) */
/* WARNING: Removing unreachable block (ram,0x000107801098) */
/* WARNING: Removing unreachable block (ram,0x00010780109c) */
/* WARNING: Removing unreachable block (ram,0x000107800d6c) */
/* WARNING: Removing unreachable block (ram,0x000107800d84) */
/* WARNING: Removing unreachable block (ram,0x000107800d88) */
/* WARNING: Removing unreachable block (ram,0x000107800d90) */
/* WARNING: Removing unreachable block (ram,0x000107800d94) */
/* WARNING: Removing unreachable block (ram,0x000107800d98) */
/* WARNING: Removing unreachable block (ram,0x000107800d9c) */
/* WARNING: Removing unreachable block (ram,0x000107800e2c) */
/* WARNING: Removing unreachable block (ram,0x000107800e30) */
/* WARNING: Removing unreachable block (ram,0x000107800e78) */
/* WARNING: Removing unreachable block (ram,0x000107800e3c) */
/* WARNING: Removing unreachable block (ram,0x000107800e40) */
/* WARNING: Removing unreachable block (ram,0x000107800e44) */
/* WARNING: Removing unreachable block (ram,0x000107800e48) */
/* WARNING: Removing unreachable block (ram,0x000107800e4c) */
/* WARNING: Removing unreachable block (ram,0x000107800e50) */
/* WARNING: Removing unreachable block (ram,0x000107800e54) */
/* WARNING: Removing unreachable block (ram,0x000107800e58) */
/* WARNING: Removing unreachable block (ram,0x000107800e5c) */
/* WARNING: Removing unreachable block (ram,0x000107800e60) */
/* WARNING: Removing unreachable block (ram,0x000107800e80) */
/* WARNING: Removing unreachable block (ram,0x000107800e84) */
/* WARNING: Removing unreachable block (ram,0x000107800e8c) */
/* WARNING: Removing unreachable block (ram,0x000107800e98) */
/* WARNING: Removing unreachable block (ram,0x000107800ea0) */
/* WARNING: Removing unreachable block (ram,0x000107800ea8) */
/* WARNING: Removing unreachable block (ram,0x000107800ec0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee8) */
/* WARNING: Removing unreachable block (ram,0x000107800eec) */
/* WARNING: Removing unreachable block (ram,0x000107800ef4) */
/* WARNING: Removing unreachable block (ram,0x000107800f04) */
/* WARNING: Removing unreachable block (ram,0x000107800ec8) */
/* WARNING: Removing unreachable block (ram,0x000107800ed0) */
/* WARNING: Removing unreachable block (ram,0x000107800edc) */
/* WARNING: Removing unreachable block (ram,0x000107800ee0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee4) */
/* WARNING: Removing unreachable block (ram,0x000107800eac) */
/* WARNING: Removing unreachable block (ram,0x000107800eb4) */
/* WARNING: Removing unreachable block (ram,0x000107800eb8) */
/* WARNING: Removing unreachable block (ram,0x000107800e68) */
/* WARNING: Removing unreachable block (ram,0x000107800da0) */
/* WARNING: Removing unreachable block (ram,0x000107800da8) */
/* WARNING: Removing unreachable block (ram,0x000107800dac) */
/* WARNING: Removing unreachable block (ram,0x000107800db0) */
/* WARNING: Removing unreachable block (ram,0x000107800db8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc0) */
/* WARNING: Removing unreachable block (ram,0x000107800dd4) */
/* WARNING: Removing unreachable block (ram,0x000107800ddc) */
/* WARNING: Removing unreachable block (ram,0x000107800de0) */
/* WARNING: Removing unreachable block (ram,0x000107800de4) */
/* WARNING: Removing unreachable block (ram,0x000107800de8) */
/* WARNING: Removing unreachable block (ram,0x000107800dec) */
/* WARNING: Removing unreachable block (ram,0x000107800df0) */
/* WARNING: Removing unreachable block (ram,0x000107800df4) */
/* WARNING: Removing unreachable block (ram,0x000107800df8) */
/* WARNING: Removing unreachable block (ram,0x000107800dfc) */
/* WARNING: Removing unreachable block (ram,0x000107800e00) */
/* WARNING: Removing unreachable block (ram,0x000107800e10) */
/* WARNING: Removing unreachable block (ram,0x000107800e1c) */
/* WARNING: Removing unreachable block (ram,0x000107800e08) */
/* WARNING: Removing unreachable block (ram,0x0001078005f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009d4) */
/* WARNING: Removing unreachable block (ram,0x0001078009dc) */
/* WARNING: Removing unreachable block (ram,0x0001078009e4) */
/* WARNING: Removing unreachable block (ram,0x0001078009ec) */
/* WARNING: Removing unreachable block (ram,0x0001078009f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009fc) */
/* WARNING: Removing unreachable block (ram,0x000107800f70) */
/* WARNING: Removing unreachable block (ram,0x000107800a04) */
/* WARNING: Removing unreachable block (ram,0x000107800f20) */
/* WARNING: Removing unreachable block (ram,0x000107800a0c) */
/* WARNING: Removing unreachable block (ram,0x000107801010) */
/* WARNING: Removing unreachable block (ram,0x000107801014) */
/* WARNING: Removing unreachable block (ram,0x00010780101c) */
/* WARNING: Removing unreachable block (ram,0x000107801024) */
/* WARNING: Removing unreachable block (ram,0x000107801028) */
/* WARNING: Removing unreachable block (ram,0x000107801030) */
/* WARNING: Removing unreachable block (ram,0x000107801040) */
/* WARNING: Removing unreachable block (ram,0x000107801048) */
/* WARNING: Removing unreachable block (ram,0x00010780104c) */
/* WARNING: Removing unreachable block (ram,0x000107800a14) */
/* WARNING: Removing unreachable block (ram,0x000107800a2c) */
/* WARNING: Removing unreachable block (ram,0x000107800a30) */
/* WARNING: Removing unreachable block (ram,0x000107800a38) */
/* WARNING: Removing unreachable block (ram,0x000107800a40) */
/* WARNING: Removing unreachable block (ram,0x000107800a44) */
/* WARNING: Removing unreachable block (ram,0x000107800a48) */
/* WARNING: Removing unreachable block (ram,0x000107800ae0) */
/* WARNING: Removing unreachable block (ram,0x000107800ae4) */
/* WARNING: Removing unreachable block (ram,0x000107800b34) */
/* WARNING: Removing unreachable block (ram,0x000107800af0) */
/* WARNING: Removing unreachable block (ram,0x000107800af4) */
/* WARNING: Removing unreachable block (ram,0x000107800af8) */
/* WARNING: Removing unreachable block (ram,0x000107800b00) */
/* WARNING: Removing unreachable block (ram,0x000107800b04) */
/* WARNING: Removing unreachable block (ram,0x000107800b08) */
/* WARNING: Removing unreachable block (ram,0x000107800b0c) */
/* WARNING: Removing unreachable block (ram,0x000107800b14) */
/* WARNING: Removing unreachable block (ram,0x000107800b18) */
/* WARNING: Removing unreachable block (ram,0x000107800b1c) */
/* WARNING: Removing unreachable block (ram,0x000107800b3c) */
/* WARNING: Removing unreachable block (ram,0x000107800b40) */
/* WARNING: Removing unreachable block (ram,0x000107800b48) */
/* WARNING: Removing unreachable block (ram,0x000107800b54) */
/* WARNING: Removing unreachable block (ram,0x000107800b5c) */
/* WARNING: Removing unreachable block (ram,0x000107800b64) */
/* WARNING: Removing unreachable block (ram,0x000107800b7c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba4) */
/* WARNING: Removing unreachable block (ram,0x000107800ba8) */
/* WARNING: Removing unreachable block (ram,0x000107800bb0) */
/* WARNING: Removing unreachable block (ram,0x000107800bc0) */
/* WARNING: Removing unreachable block (ram,0x000107800b84) */
/* WARNING: Removing unreachable block (ram,0x000107800b8c) */
/* WARNING: Removing unreachable block (ram,0x000107800b98) */
/* WARNING: Removing unreachable block (ram,0x000107800b9c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba0) */
/* WARNING: Removing unreachable block (ram,0x000107800b68) */
/* WARNING: Removing unreachable block (ram,0x000107800b70) */
/* WARNING: Removing unreachable block (ram,0x000107800b74) */
/* WARNING: Removing unreachable block (ram,0x000107800b24) */
/* WARNING: Removing unreachable block (ram,0x000107800a4c) */
/* WARNING: Removing unreachable block (ram,0x000107800a54) */
/* WARNING: Removing unreachable block (ram,0x000107800a58) */
/* WARNING: Removing unreachable block (ram,0x000107800a5c) */
/* WARNING: Removing unreachable block (ram,0x000107800a64) */
/* WARNING: Removing unreachable block (ram,0x000107800a74) */
/* WARNING: Removing unreachable block (ram,0x000107800a6c) */
/* WARNING: Removing unreachable block (ram,0x000107800a80) */
/* WARNING: Removing unreachable block (ram,0x000107800a88) */
/* WARNING: Removing unreachable block (ram,0x000107800a8c) */
/* WARNING: Removing unreachable block (ram,0x000107800a90) */
/* WARNING: Removing unreachable block (ram,0x000107800a98) */
/* WARNING: Removing unreachable block (ram,0x000107800a9c) */
/* WARNING: Removing unreachable block (ram,0x000107800aa0) */
/* WARNING: Removing unreachable block (ram,0x000107800aa4) */
/* WARNING: Removing unreachable block (ram,0x000107800aac) */
/* WARNING: Removing unreachable block (ram,0x000107800ab0) */
/* WARNING: Removing unreachable block (ram,0x000107800ab4) */
/* WARNING: Removing unreachable block (ram,0x000107800ac4) */
/* WARNING: Removing unreachable block (ram,0x000107800ad0) */
/* WARNING: Removing unreachable block (ram,0x000107800abc) */
/* WARNING: Removing unreachable block (ram,0x0001078005f8) */
/* WARNING: Removing unreachable block (ram,0x000107800600) */
/* WARNING: Removing unreachable block (ram,0x000107800608) */
/* WARNING: Removing unreachable block (ram,0x000107800610) */
/* WARNING: Removing unreachable block (ram,0x000107800618) */
/* WARNING: Removing unreachable block (ram,0x000107800620) */
/* WARNING: Removing unreachable block (ram,0x000107800f58) */
/* WARNING: Removing unreachable block (ram,0x000107800628) */
/* WARNING: Removing unreachable block (ram,0x000107800f08) */
/* WARNING: Removing unreachable block (ram,0x000107800f28) */
/* WARNING: Removing unreachable block (ram,0x000107800f2c) */
/* WARNING: Removing unreachable block (ram,0x000107800f30) */
/* WARNING: Removing unreachable block (ram,0x000107800f50) */
/* WARNING: Removing unreachable block (ram,0x000107800630) */
/* WARNING: Removing unreachable block (ram,0x000107800f88) */
/* WARNING: Removing unreachable block (ram,0x000107800f8c) */
/* WARNING: Removing unreachable block (ram,0x000107800f94) */
/* WARNING: Removing unreachable block (ram,0x000107800f9c) */
/* WARNING: Removing unreachable block (ram,0x000107800fa0) */
/* WARNING: Removing unreachable block (ram,0x000107800fa8) */
/* WARNING: Removing unreachable block (ram,0x000107800fb8) */
/* WARNING: Removing unreachable block (ram,0x000107800fc0) */
/* WARNING: Removing unreachable block (ram,0x000107800fc4) */
/* WARNING: Removing unreachable block (ram,0x000107800638) */
/* WARNING: Removing unreachable block (ram,0x000107800650) */
/* WARNING: Removing unreachable block (ram,0x000107800654) */
/* WARNING: Removing unreachable block (ram,0x00010780065c) */
/* WARNING: Removing unreachable block (ram,0x000107800664) */
/* WARNING: Removing unreachable block (ram,0x000107800668) */
/* WARNING: Removing unreachable block (ram,0x00010780066c) */
/* WARNING: Removing unreachable block (ram,0x000107800704) */
/* WARNING: Removing unreachable block (ram,0x000107800708) */
/* WARNING: Removing unreachable block (ram,0x000107800758) */
/* WARNING: Removing unreachable block (ram,0x000107800714) */
/* WARNING: Removing unreachable block (ram,0x000107800718) */
/* WARNING: Removing unreachable block (ram,0x00010780071c) */
/* WARNING: Removing unreachable block (ram,0x000107800724) */
/* WARNING: Removing unreachable block (ram,0x000107800728) */
/* WARNING: Removing unreachable block (ram,0x00010780072c) */
/* WARNING: Removing unreachable block (ram,0x000107800730) */
/* WARNING: Removing unreachable block (ram,0x000107800738) */
/* WARNING: Removing unreachable block (ram,0x00010780073c) */
/* WARNING: Removing unreachable block (ram,0x000107800740) */
/* WARNING: Removing unreachable block (ram,0x000107800760) */
/* WARNING: Removing unreachable block (ram,0x000107800764) */
/* WARNING: Removing unreachable block (ram,0x00010780076c) */
/* WARNING: Removing unreachable block (ram,0x000107800778) */
/* WARNING: Removing unreachable block (ram,0x000107800780) */
/* WARNING: Removing unreachable block (ram,0x000107800788) */
/* WARNING: Removing unreachable block (ram,0x0001078007a0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c8) */
/* WARNING: Removing unreachable block (ram,0x0001078007cc) */
/* WARNING: Removing unreachable block (ram,0x0001078007d4) */
/* WARNING: Removing unreachable block (ram,0x0001078007e4) */
/* WARNING: Removing unreachable block (ram,0x0001078007a8) */
/* WARNING: Removing unreachable block (ram,0x0001078007b0) */
/* WARNING: Removing unreachable block (ram,0x0001078007bc) */
/* WARNING: Removing unreachable block (ram,0x0001078007c0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c4) */
/* WARNING: Removing unreachable block (ram,0x00010780078c) */
/* WARNING: Removing unreachable block (ram,0x000107800794) */
/* WARNING: Removing unreachable block (ram,0x000107800798) */
/* WARNING: Removing unreachable block (ram,0x000107800748) */
/* WARNING: Removing unreachable block (ram,0x000107800670) */
/* WARNING: Removing unreachable block (ram,0x000107800678) */
/* WARNING: Removing unreachable block (ram,0x00010780067c) */
/* WARNING: Removing unreachable block (ram,0x000107800680) */
/* WARNING: Removing unreachable block (ram,0x000107800688) */
/* WARNING: Removing unreachable block (ram,0x000107800698) */
/* WARNING: Removing unreachable block (ram,0x000107800690) */
/* WARNING: Removing unreachable block (ram,0x0001078006a4) */
/* WARNING: Removing unreachable block (ram,0x0001078006ac) */
/* WARNING: Removing unreachable block (ram,0x0001078006b0) */
/* WARNING: Removing unreachable block (ram,0x0001078006b4) */
/* WARNING: Removing unreachable block (ram,0x0001078006bc) */
/* WARNING: Removing unreachable block (ram,0x0001078006c0) */
/* WARNING: Removing unreachable block (ram,0x0001078006c4) */
/* WARNING: Removing unreachable block (ram,0x0001078006c8) */
/* WARNING: Removing unreachable block (ram,0x0001078006d0) */
/* WARNING: Removing unreachable block (ram,0x0001078006d4) */
/* WARNING: Removing unreachable block (ram,0x0001078006d8) */
/* WARNING: Removing unreachable block (ram,0x0001078006e8) */
/* WARNING: Removing unreachable block (ram,0x0001078006f4) */
/* WARNING: Removing unreachable block (ram,0x000107800bcc) */
/* WARNING: Removing unreachable block (ram,0x000107800bd0) */
/* WARNING: Removing unreachable block (ram,0x000107800bd8) */
/* WARNING: Removing unreachable block (ram,0x000107800ca8) */
/* WARNING: Removing unreachable block (ram,0x000107800c74) */
/* WARNING: Removing unreachable block (ram,0x000107800d10) */
/* WARNING: Removing unreachable block (ram,0x000107800d28) */
/* WARNING: Removing unreachable block (ram,0x0001078010a4) */
/* WARNING: Removing unreachable block (ram,0x0001078010e4) */
/* WARNING: Removing unreachable block (ram,0x0001078010f0) */
/* WARNING: Removing unreachable block (ram,0x000107809878) */
/* WARNING: Removing unreachable block (ram,0x00010780987c) */
/* WARNING: Removing unreachable block (ram,0x0001078006e0) */

ulong * FUN_107806e18(ulong param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined1 in_CY;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  bool bVar8;
  ulong *puVar9;
  undefined8 extraout_x8;
  undefined8 uVar10;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong *puVar11;
  undefined8 extraout_x8_03;
  double *pdVar12;
  undefined8 *extraout_x10;
  long extraout_x10_00;
  long lVar13;
  long extraout_x10_01;
  ulong uVar14;
  ulong uVar15;
  ulong *extraout_x11;
  undefined8 extraout_x11_00;
  ulong *extraout_x11_01;
  undefined8 extraout_x11_02;
  long extraout_x12;
  undefined8 *puVar16;
  long extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  undefined8 *unaff_x19;
  ulong *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x23;
  ulong *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar17;
  undefined *puVar18;
  float fVar19;
  ulong uVar20;
  double dVar21;
  ulong in_register_00005008;
  double dVar22;
  float fVar23;
  double dVar24;
  double unaff_d15;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001078087f8();
  uStack_38 = extraout_x8_00;
  func_0x000107808fe4();
  if (!(bool)in_CY || (bool)in_ZR) {
    puVar9 = (ulong *)0x1;
                    /* WARNING: Could not recover jumptable at 0x000107806e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea6206)[extraout_x8_01] * 4 + 0x107806e58))(1);
    return puVar9;
  }
  func_0x000107808fa8();
  func_0x000107806cc0();
  func_0x00010780968c();
  puVar9 = extraout_x11;
  while( true ) {
    cVar5 = SBORROW8((long)puVar9,(long)unaff_x20);
    cVar6 = (long)puVar9 - (long)unaff_x20 < 0;
    uVar7 = puVar9 == unaff_x20;
    if ((bool)uVar7) break;
    param_1 = (ulong)*(uint *)((long)puVar9 + 0xc);
    in_register_00005008 = 0;
    func_0x000107809750();
    if ((bool)cVar6) {
      uStack_48 = *extraout_x10;
      uStack_40 = *(undefined4 *)(extraout_x10 + 1);
      cVar6 = true;
      do {
        func_0x000107809a60();
        fVar19 = (float)param_1;
        if ((bool)uVar7) {
          uVar7 = true;
          puVar16 = unaff_x19;
          goto LAB_107806ee8;
        }
        fVar23 = *(float *)(extraout_x13 + 0x24);
        cVar5 = NAN(fVar19) || NAN(fVar23);
        uVar7 = fVar19 == fVar23;
        cVar6 = fVar19 < fVar23;
      } while ((bool)cVar6);
      puVar16 = (undefined8 *)((long)unaff_x19 + extraout_x12 + 0x30);
LAB_107806ee8:
      *puVar16 = uStack_48;
      *(undefined4 *)(puVar16 + 1) = uStack_40;
      *(float *)((long)puVar16 + 0xc) = fVar19;
      puVar16[2] = extraout_x11_00;
      func_0x000107809798();
      if ((bool)uVar7) {
        func_0x000107809614();
        goto LAB_107806f1c;
      }
    }
    func_0x0001078096ec();
    puVar9 = extraout_x11_01;
  }
  param_2 = (ulong *)0x1;
  uVar7 = 1;
LAB_107806f1c:
  func_0x0001078087c4(uStack_38);
  if ((bool)uVar7) {
    return param_2;
  }
  ___stack_chk_fail();
  puStack_68 = &UNK_107806f3c;
  ppuVar17 = &puStack_70;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000107808a58();
  func_0x000107809938();
  if ((cVar6 == cVar5) && (func_0x000107808d30(), cVar6 == cVar5)) {
    func_0x000107808ae8();
    lVar13 = extraout_x10_00;
    if ((cVar6 != cVar5) && (*(float *)(extraout_x10_00 + 0xc) < *(float *)(extraout_x10_00 + 0x24))
       ) {
      lVar13 = extraout_x10_00 + 0x18;
    }
    fVar23 = *(float *)(lVar13 + 0xc);
    fVar19 = *(float *)(param_4 + 0xc);
    param_1 = (ulong)(uint)fVar19;
    in_register_00005008 = 0;
    cVar5 = NAN(fVar23) || NAN(fVar19);
    uVar7 = fVar23 == fVar19;
    cVar6 = fVar23 < fVar19;
    if (!(bool)cVar6) {
      func_0x00010780a100();
      do {
        func_0x0001078098ac();
        if (cVar6 != cVar5) break;
        func_0x00010780966c();
        puVar9 = (ulong *)((long)param_2 + extraout_x10_01 * extraout_x12_00);
        if ((extraout_x13_00 + 2 < (long)param_3) &&
           (*(float *)((long)puVar9 + 0xc) < *(float *)((long)puVar9 + 0x24))) {
          puVar9 = puVar9 + 3;
        }
        fVar23 = *(float *)((long)puVar9 + 0xc);
        fVar19 = (float)param_1;
        cVar5 = NAN(fVar23) || NAN(fVar19);
        uVar7 = fVar23 == fVar19;
        cVar6 = fVar23 < fVar19;
      } while (!(bool)cVar6);
      func_0x000107809c14();
      *(undefined8 *)(param_4 + 0x10) = extraout_x11_02;
    }
  }
  func_0x0001078087c4(uStack_78);
  if ((bool)uVar7) {
    return param_2;
  }
  puVar18 = &UNK_107806ffc;
  ___stack_chk_fail();
  puVar3 = auStack_90;
code_r0x000107806ffc:
  uVar15 = param_4;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x27;
  *(ulong **)(puVar3 + -0x40) = unaff_x24;
  *(undefined1 **)(puVar3 + -0x38) = unaff_x23;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(ulong *)(puVar3 + -0x28) = unaff_x21;
  *(ulong **)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar3 + -0x10) = ppuVar17;
  *(undefined **)(puVar3 + -8) = puVar18;
  ppuVar17 = (undefined1 **)(puVar3 + -0x10);
  func_0x000107808a28();
  *(undefined8 *)(puVar3 + -0x58) = extraout_x8_02;
  unaff_x23 = puVar3 + -0x268;
  unaff_x22 = *param_3 * -0x18;
  unaff_x24 = param_3 + *param_3 * 3 + -2;
  do {
    unaff_x22 = unaff_x22 + 0x18;
    bVar8 = unaff_x22 == 0x18;
    if (bVar8) {
      func_0x0001078087c4(*(undefined8 *)(puVar3 + -0x58));
      if (bVar8) {
        return param_2;
      }
      ___stack_chk_fail();
      func_0x000107809e08();
      puVar18 = &UNK_107807154;
      puVar9 = param_2;
      func_0x000104bd46a0();
      puVar3 = puVar3 + -0x270;
      while( true ) {
        puVar11 = puVar9 + 1;
        iVar2 = (int)*puVar9;
        if (iVar2 == iVar2 >> 0x1f) break;
        if (iVar2 < 0) {
          puVar11 = (ulong *)*puVar11;
        }
        *(ulong **)(puVar3 + -0x40) = unaff_x24;
        *(undefined1 **)(puVar3 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar3 + -0x30) = 0x18;
        *(ulong **)(puVar3 + -0x28) = param_2;
        *(ulong **)(puVar3 + -0x20) = unaff_x20;
        *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
        *(undefined1 ***)(puVar3 + -0x10) = ppuVar17;
        *(undefined **)(puVar3 + -8) = puVar18;
        ppuVar17 = (undefined1 **)(puVar3 + -0x10);
        func_0x0001078087f8();
        *(undefined8 *)(puVar3 + -0x48) = extraout_x8_03;
        func_0x00010780936c();
        func_0x000107809ec0();
        *(ulong *)(puVar3 + -0x68) = in_register_00005008;
        *(ulong *)(puVar3 + -0x70) = param_1;
        *(undefined8 *)(puVar3 + -0x60) = unaff_x19[0xb];
        func_0x0001078099b8();
        puVar18 = &UNK_1078071f4;
        puVar3 = puVar3 + -0xa0;
        puVar9 = param_3;
        param_3 = puVar11;
      }
      if (iVar2 < 0) {
        puVar11 = (ulong *)*puVar11;
      }
      pdVar12 = (double *)*param_3;
      uVar15 = *puVar11;
      dVar24 = *pdVar12;
      dVar22 = pdVar12[3];
      dVar21 = pdVar12[2];
      puVar11[uVar15 * 4 + 2] = (ulong)pdVar12[1];
      puVar11[uVar15 * 4 + 1] = (ulong)dVar24;
      puVar11[uVar15 * 4 + 4] = (ulong)dVar22;
      puVar11[uVar15 * 4 + 3] = (ulong)dVar21;
      *puVar11 = uVar15 + 1;
      if (uVar15 + 1 < 0x11) {
        return puVar9;
      }
      func_0x000107809884();
      *(undefined1 ***)(puVar3 + 0x90) = ppuVar17;
      *(undefined **)(puVar3 + 0x98) = puVar18;
      puVar9 = param_3;
      func_0x000107808a58();
      *(undefined8 *)(puVar3 + -0x10) = extraout_x8;
      *(undefined8 *)(puVar3 + -0x6a8) = 0;
      uVar14 = puVar9[0xc];
      func_0x0001077ffe04();
      uVar15 = uVar14;
      func_0x0001077ffc80();
      puVar9 = puVar11 + 1;
      func_0x000107801344(puVar3 + -0x460,puVar9,puVar9 + *puVar11 * 4);
      func_0x000107801344(puVar3 + -0x688,puVar9,puVar9 + *puVar11 * 4);
      func_0x0001078090c4();
      *(ulong *)(puVar3 + -0x6f0) = uVar14;
      *(ulong **)(puVar3 + -0x6e8) = param_3;
      *(ulong *)(puVar3 + -0x6f8) = uVar15;
      uVar10 = 0;
      if (*(long *)(puVar3 + -0x238) != 0) {
        func_0x000107808c30();
        func_0x000107801438();
        uVar10 = *(undefined8 *)(puVar3 + -0x238);
      }
      func_0x000107808f7c(uVar10);
      *(double *)(puVar3 + -0x6d0) = unaff_d15;
      do {
        func_0x0001078090b8();
        func_0x000107808a04();
        func_0x0001078088cc();
        func_0x0001078087d8();
        if (dVar21 < *(double *)(puVar3 + -0x6d0)) {
code_r0x0001078003ac:
          *(double *)(puVar3 + -0x6d0) = dVar21;
          unaff_d15 = dVar24;
        }
        else {
          bVar8 = false;
          bVar4 = true;
          if (dVar21 == *(double *)(puVar3 + -0x6d0)) {
            bVar8 = false;
            bVar4 = true;
            if (!NAN(dVar24) && !NAN(unaff_d15)) {
              bVar8 = dVar24 == unaff_d15;
              bVar4 = unaff_d15 <= dVar24;
            }
          }
          if (!bVar4 || bVar8) goto code_r0x0001078003ac;
        }
        func_0x000107808730();
        func_0x00010780a04c();
      } while( true );
    }
    puVar16 = (undefined8 *)*unaff_x20;
    plVar1 = (long *)unaff_x20[1];
    uVar14 = unaff_x20[6];
    *(ulong **)(puVar3 + -0x268) = unaff_x24;
    uVar20 = unaff_x20[3];
    *(ulong *)(puVar3 + -0x248) = unaff_x20[4];
    *(ulong *)(puVar3 + -0x250) = uVar20;
    *(ulong *)(puVar3 + -0x240) = uVar15;
    *(ulong *)(puVar3 + -0x238) = *plVar1 - uVar15;
    *(undefined8 **)(puVar3 + -0x230) = puVar16;
    *(long **)(puVar3 + -0x228) = plVar1;
    *(undefined8 *)(puVar3 + -0x218) = 0;
    *(undefined8 *)(puVar3 + -0x210) = 0;
    *(undefined8 *)(puVar3 + -0x220) = 0;
    *(ulong *)(puVar3 + -0x208) = uVar14;
    in_register_00005008 = unaff_x24[1];
    param_1 = *unaff_x24;
    *(ulong *)(puVar3 + -600) = in_register_00005008;
    *(ulong *)(puVar3 + -0x260) = param_1;
    *(undefined8 *)(puVar3 + -0x200) = 0;
    *(undefined8 *)(puVar3 + -0x1f8) = 0;
    param_2 = (ulong *)*puVar16;
    param_3 = (ulong *)(puVar3 + -0x268);
    FUN_107807804();
    puVar9 = (ulong *)(puVar3 + -0x200);
    if ((*puVar9 < *(ulong *)unaff_x20[1]) && (*(long *)(puVar3 + -0x1f8) != 0)) break;
    unaff_x24 = unaff_x24 + -3;
  } while( true );
  param_3 = (ulong *)(puVar3 + -0x1f8);
  puVar18 = &UNK_1078070bc;
  puVar3 = puVar3 + -0x270;
  param_2 = unaff_x20;
  param_4 = *puVar9;
  unaff_x21 = uVar15;
  goto code_r0x000107806ffc;
}



/* Entry: 107807804; end: 107807943;  */

void FUN_107807804(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  iVar1 = *param_5;
  if (iVar1 == iVar1 >> 0x1f) {
    return;
  }
  puVar9 = (ulong *)(param_5 + 2);
  if (iVar1 < 0) {
    puVar9 = (ulong *)*puVar9;
  }
  uVar6 = param_6[0xb];
  puVar5 = (ulong *)*param_6;
  uVar2 = (ulong)param_6[6] <= uVar6;
  uVar3 = uVar6 == param_6[6];
  if ((bool)uVar2) {
    uVar6 = *puVar9;
    uVar8 = puVar5[2];
    uVar11 = *puVar5;
    puVar9[uVar6 * 3 + 2] = puVar5[1];
    puVar9[uVar6 * 3 + 1] = uVar11;
    puVar9[uVar6 * 3 + 3] = uVar8;
    *puVar9 = uVar6 + 1;
    if (uVar6 + 1 < 0x11) goto LAB_1078078fc;
  }
  else {
    puVar4 = puVar9;
    func_0x00010780385c(puVar9,puVar5,*(long *)param_6[8] - uVar6);
    func_0x0001078036f0(puVar9 + (long)puVar4 * 3 + 1,param_6 + 1);
    uVar12 = param_6[10];
    uVar11 = param_6[9];
    lVar7 = param_6[0xb];
    param_6[9] = puVar9;
    param_6[10] = puVar4;
    param_6[0xb] = lVar7 + 1;
    FUN_107807804(puVar9[(long)puVar4 * 3 + 3],param_6);
    param_6[10] = uVar12;
    param_6[9] = uVar11;
    func_0x000107809f98(lVar7);
    if ((!(bool)uVar3) || (func_0x000107809acc(), !(bool)uVar2)) goto LAB_1078078fc;
    if (param_6[9] != 0) {
      func_0x0001078099d4();
      goto LAB_1078078fc;
    }
  }
  func_0x000107809314();
  func_0x000107807944();
LAB_1078078fc:
  uVar10 = (undefined4)uVar11;
  if ((param_6[0xe] != 0) && (lVar7 = param_6[9], lVar7 != 0)) {
    func_0x000107803f40(puVar9 + 1,puVar9 + 1 + *puVar9 * 3);
    lVar7 = lVar7 + param_6[10] * 0x18;
    *(undefined4 *)(lVar7 + 8) = uVar10;
    *(undefined4 *)(lVar7 + 0xc) = param_2;
    *(undefined4 *)(lVar7 + 0x10) = param_3;
    *(undefined4 *)(lVar7 + 0x14) = param_4;
  }
  return;
}



/* Entry: 107807cc0; end: 107807d33;  */

void FUN_107807cc0(void)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x00010780a21c();
  func_0x00010780a198();
  func_0x00010732f6dc();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x000107809dec();
      func_0x0001078092c0();
      func_0x000100061de0();
      func_0x000107809320();
      func_0x000107807d34();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10780803c; end: 10780804f;  */

ulong FUN_10780803c(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  ulong extraout_x8;
  ulong extraout_x10;
  
  ppuVar1 = &PTR_LOOP_110c8acd8;
  lVar2 = param_2;
  func_0x000107264c5c(param_2);
  func_0x000100062d4c(&PTR_LOOP_110c8acd8,param_2);
  func_0x000100061c28((long)ppuVar1 + lVar2);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 107808174; end: 10780817f;  */

undefined ** FUN_107808174(void)

{
  return &PTR_DAT_1109dfc08;
}



/* Entry: 1078083dc; end: 107808657;  */

void FUN_1078083dc(long param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  byte *pbStack_2a8;
  undefined4 uStack_298;
  undefined **ppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_268;
  undefined1 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_240 [8];
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *plStack_130;
  undefined8 uStack_128;
  long lStack_28;
  byte bStack_20;
  long lStack_18;
  byte bStack_10;
  undefined8 uStack_8;
  
  func_0x00010780a21c();
  func_0x000107808930();
  uStack_8 = extraout_x8;
  func_0x00010726fc00(&plStack_130,param_1 + 8);
  if (plStack_130 == (long *)0x0) {
LAB_107808448:
    func_0x000107809a30();
    plStack_2c0 = (long *)0x0;
    uStack_2b8 = 0;
    plStack_130 = (long *)0x0;
    uStack_128 = 0;
  }
  else {
    func_0x00010726fc3c();
    uStack_2b8 = uStack_128;
    plStack_2c0 = plStack_130;
    in_ZR = *plStack_130 == -1;
    if ((bool)in_ZR) {
      func_0x00010726fc88();
      goto LAB_107808448;
    }
    plStack_130 = (long *)0x0;
    uStack_128 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x0001072508cc(&uStack_238);
  }
  func_0x000107809a30();
  func_0x00010726fc00(&plStack_130,unaff_x19 + 8);
  if (plStack_130 == (long *)0x0) {
    func_0x000107809a30();
  }
  else {
    lVar3 = *plStack_130;
    func_0x000107809a30();
    in_ZR = lVar3 == -1;
    if (!(bool)in_ZR) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uStack_2b0 = 4;
      uStack_298 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      ppuStack_290 = &PTR_DAT_110996720;
      uStack_288 = 0;
      uStack_270 = 4;
      uStack_268 = 0;
      uStack_264 = 1;
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_260 = 0;
      func_0x00010743cc34(&uStack_238,&uStack_2b0,7);
      func_0x00010743d7bc(&plStack_130,&uStack_238);
      func_0x000107288cd8(&uStack_238);
      func_0x000107262330(&uStack_2b0);
      if (*(long **)(unaff_x19 + 0x40) == (long *)0x0) goto LAB_107808628;
      (**(code **)(**(long **)(unaff_x19 + 0x40) + 0x30))(&uStack_2b0);
      for (pbVar4 = (byte *)(CONCAT44(uStack_2ac,uStack_2b0) + 0x2f);
          in_ZR = pbVar4 + -0x2f == pbStack_2a8, !(bool)in_ZR; pbVar4 = pbVar4 + 0x60) {
        func_0x00010007847c(&uStack_238,&UNK_10f42adc0);
        uVar5 = *(ulong *)(pbVar4 + -0xf);
        pbVar1 = *(byte **)(pbVar4 + -0x17);
        if (-1 < (char)*pbVar4) {
          uVar5 = (ulong)*pbVar4;
          pbVar1 = pbVar4 + -0x17;
        }
        func_0x00010812e128(&lStack_18,pbVar1,uVar5);
        if (lStack_18 == 1) {
          uVar5 = *(ulong *)(pbVar4 + 9);
          pbVar1 = *(byte **)(pbVar4 + 1);
          if (-1 < (char)pbVar4[0x18]) {
            uVar5 = (ulong)pbVar4[0x18];
            pbVar1 = pbVar4 + 1;
          }
          func_0x00010812e2dc(&lStack_28,pbVar1,uVar5);
          if (lStack_28 == 1) {
            uVar5 = (ulong)bStack_10;
            uVar6 = (ulong)bStack_20;
            func_0x0001003a8364();
            func_0x0001003ac750(auStack_240);
            func_0x00010812c9ac(*(undefined8 *)(lVar3 + 0x648),auStack_240,
                                uVar6 << 0x10 | uVar5 << 8 | 4,0,pbVar4 + 0x19);
            func_0x0001003a8c94(auStack_240);
          }
          func_0x00010780871c(&lStack_28);
        }
        func_0x000107808708(&lStack_18);
        func_0x000100078bd8(&uStack_238);
      }
      func_0x0001072af510(&uStack_2b0);
      func_0x00010743d7e4(&plStack_130);
    }
  }
  func_0x000107270b00(&plStack_2c0);
  func_0x0001078087c4(uStack_8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107808628:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107808630);
  (*pcVar2)();
}



/* Entry: 10780a2b4; end: 10780a3fb;  */

/* WARNING: Possible PIC construction at 0x00010780a5ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010780a5f0) */
/* WARNING: Removing unreachable block (ram,0x00010780a5f8) */
/* WARNING: Removing unreachable block (ram,0x00010780a600) */

void FUN_10780a2b4(long *param_1,undefined4 param_2,float param_3,undefined4 param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,long *param_10,
                  undefined8 param_11)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *unaff_x19;
  uint uVar13;
  undefined8 unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  ulong uVar14;
  undefined8 unaff_x23;
  short *unaff_x24;
  long unaff_x25;
  short *unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  ulong unaff_d8;
  float fVar20;
  ulong unaff_d9;
  undefined8 unaff_d10;
  float fVar21;
  ulong unaff_d11;
  float fVar22;
  ulong unaff_d12;
  float fVar23;
  ulong unaff_d13;
  double unaff_d14;
  ulong unaff_d15;
  float fVar24;
  float in_stack_00000000;
  float in_stack_00000004;
  
  puVar1 = (ushort *)*param_10;
  if (puVar1 == (ushort *)param_10[1]) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  fVar24 = param_9 * 0.6 * in_stack_00000000;
  if (param_5 - param_6 == 0.0) {
    fVar24 = 0.0;
  }
  fVar23 = param_6 - param_5;
  if (param_6 - param_5 <= param_8 - param_7) {
    fVar23 = param_8 - param_7;
  }
  fVar21 = fVar23 * in_stack_00000000;
  uVar14 = 1;
  uVar13 = (uint)param_11;
  if ((*puVar1 != 0) && ((uint)*puVar1 != (uVar13 & 0xffff))) {
    uVar14 = (ulong)(puVar1[1] == 0 || (uint)puVar1[1] == (uVar13 & 0xffff));
  }
  fVar2 = param_3 * 0.25 + fVar21;
  if (param_3 * 0.25 <= param_3 - fVar21) {
    fVar2 = param_3;
  }
  fVar20 = fVar2 * 0.5;
  if ((int)uVar14 == 0) {
    fVar20 = in_stack_00000000 * (param_9 + param_9 + fVar23 * 0.5);
  }
  dVar16 = (double)(ulong)(uint)(in_stack_00000004 * fVar20);
  _fmodf(dVar16,(ulong)(uint)fVar2);
  puVar5 = (undefined1 *)register0x00000008;
  uVar4 = 0;
  do {
    plVar12 = param_1;
    uVar11 = uVar4;
    uVar10 = uVar14;
    *(ulong *)(puVar5 + -0xa0) = unaff_d15;
    *(double *)(puVar5 + -0x98) = unaff_d14;
    *(ulong *)(puVar5 + -0x90) = unaff_d13;
    *(ulong *)(puVar5 + -0x88) = unaff_d12;
    *(ulong *)(puVar5 + -0x80) = unaff_d11;
    *(undefined8 *)(puVar5 + -0x78) = unaff_d10;
    *(ulong *)(puVar5 + -0x70) = unaff_d9;
    *(ulong *)(puVar5 + -0x68) = unaff_d8;
    *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
    *(ulong *)(puVar5 + -0x58) = unaff_x27;
    *(short **)(puVar5 + -0x50) = unaff_x26;
    *(long *)(puVar5 + -0x48) = unaff_x25;
    *(short **)(puVar5 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
    *(ulong *)(puVar5 + -0x30) = unaff_x22;
    *(long **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(long **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(undefined **)(puVar5 + -8) = unaff_x30;
    unaff_x29 = puVar5 + -0x10;
    *(undefined4 *)(puVar5 + -0xd8) = param_4;
    *(float *)(puVar5 + -0xd4) = fVar21;
    *(undefined4 *)(puVar5 + -0xd0) = param_2;
    *(float *)(puVar5 + -0xcc) = fVar24;
    dVar17 = 5.2220990168286e-315;
    fVar21 = fVar21 * 0.5;
    unaff_d15 = (ulong)(uint)fVar21;
    func_0x00010780a254();
    *(int *)(puVar5 + -0xc4) = SUB84(dVar17,0);
    unaff_x25 = 0;
    unaff_d12 = (ulong)(uint)(SUB84(dVar16,0) - fVar2);
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = 0;
    unaff_x26 = (short *)(param_10[1] + -4);
    fVar24 = (float)(int)uVar13;
    unaff_d8 = (ulong)(uint)fVar24;
    unaff_d10 = 0x3ff0000000000000;
    unaff_d13 = 0;
    unaff_d14 = dVar16;
    for (unaff_x24 = (short *)*param_10; dVar16 = dVar17, fVar23 = (float)unaff_d13,
        unaff_x24 != unaff_x26; unaff_x24 = unaff_x24 + 2) {
      func_0x0001077f4424(unaff_x24,unaff_x24 + 2);
      dVar18 = dVar16;
      func_0x0001077f4454(unaff_x24 + 2,unaff_x24);
      dVar17 = (double)(ulong)(uint)(float)dVar18;
      *(float *)(puVar5 + -200) = (float)dVar18;
      fVar20 = fVar23 + SUB84(dVar16,0);
      unaff_d9 = (ulong)(uint)fVar20;
code_r0x00010780a4b8:
      fVar22 = fVar2 + (float)unaff_d12;
      uVar14 = (ulong)(uint)fVar22;
      if (fVar22 < fVar20) {
        fVar15 = (fVar22 - fVar23) / SUB84(dVar16,0);
        fVar3 = fVar15 * (float)(int)unaff_x24[2] + (1.0 - fVar15) * (float)(int)*unaff_x24;
        dVar17 = (double)(ulong)(uint)fVar3;
        unaff_d12 = uVar14;
        if (0.0 <= fVar3) {
          fVar15 = fVar15 * (float)(int)unaff_x24[3] + (1.0 - fVar15) * (float)(int)unaff_x24[1];
          fVar19 = fVar21 + fVar22;
          bVar6 = false;
          if ((0.0 <= fVar22 - fVar21) && (bVar6 = false, !NAN(fVar3) && !NAN(fVar24))) {
            bVar6 = fVar3 < fVar24;
          }
          if (bVar6) {
            bVar6 = false;
            if ((0.0 <= fVar15) && (bVar6 = false, !NAN(fVar15) && !NAN(fVar24))) {
              bVar6 = fVar15 < fVar24;
            }
            fVar22 = *(float *)(puVar5 + -0xc4);
            bVar7 = false;
            bVar8 = true;
            if (bVar6) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar19) && !NAN(fVar22)) {
                bVar7 = fVar19 == fVar22;
                bVar8 = fVar22 <= fVar19;
              }
            }
            if (!bVar8 || bVar7) {
              unaff_x27 = unaff_x27 & 0xffffffffffffff00 | 1;
              *(int *)(puVar5 + -0xc0) = (int)fVar3;
              *(int *)(puVar5 + -0xbc) = (int)fVar15;
              dVar17 = (double)(ulong)(uint)*(float *)(puVar5 + -0xcc);
              *(undefined4 *)(puVar5 + -0xb8) = *(undefined4 *)(puVar5 + -0xd0);
              *(undefined4 *)(puVar5 + -0xb4) = *(undefined4 *)(puVar5 + -200);
              *(long *)(puVar5 + -0xb0) = unaff_x25;
              *(ulong *)(puVar5 + -0xa8) = unaff_x27;
              if (*(float *)(puVar5 + -0xcc) != 0.0) {
                dVar17 = (double)(ulong)*(uint *)(puVar5 + -0xd4);
                plVar9 = param_10;
                func_0x0001077f3e84(dVar17,*(undefined4 *)(puVar5 + -0xcc),
                                    *(undefined4 *)(puVar5 + -0xd8),param_10,puVar5 + -0xc0);
                if ((int)plVar9 == 0) goto code_r0x00010780a4b8;
              }
              func_0x000107407c70(plVar12,puVar5 + -0xc0);
            }
          }
        }
        goto code_r0x00010780a4b8;
      }
      unaff_x25 = unaff_x25 + 1;
      unaff_d13 = unaff_d9;
      unaff_d14 = dVar16;
    }
    if ((((int)uVar11 != 0) || ((int)uVar10 != 0)) || (*plVar12 != plVar12[1])) {
      return;
    }
    dVar16 = (double)(ulong)(uint)(fVar23 * 0.5);
    param_1 = (long *)(puVar5 + -0xc0);
    param_2 = *(undefined4 *)(puVar5 + -0xd0);
    fVar24 = *(float *)(puVar5 + -0xcc);
    param_4 = *(undefined4 *)(puVar5 + -0xd8);
    fVar21 = *(float *)(puVar5 + -0xd4);
    unaff_x30 = &UNK_10780a5f0;
    puVar5 = puVar5 + -0xe0;
    uVar14 = 0;
    uVar4 = 1;
    unaff_x19 = plVar12;
    unaff_x20 = param_11;
    unaff_x21 = param_10;
    unaff_x22 = uVar10;
    unaff_x23 = uVar11;
    unaff_d11 = (ulong)(uint)fVar2;
  } while( true );
}



/* Entry: 10780b434; end: 10780b4c3;  */

void FUN_10780b434(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x9;
  long lVar9;
  
  lVar8 = *param_2;
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8);
  iVar2 = *(int *)(lVar7 + 0xc) * *(int *)(lVar7 + 8);
  lVar9 = *param_3;
  iVar3 = *(int *)(lVar9 + 0xc) * *(int *)(lVar9 + 8);
  if (iVar2 < iVar1) {
    if (iVar1 < iVar3) {
      *param_1 = lVar9;
    }
    else {
      *param_1 = lVar8;
      *param_2 = lVar7;
      lVar8 = *param_3;
      if (*(int *)(lVar8 + 0xc) * *(int *)(lVar8 + 8) <= iVar2) {
        return;
      }
      *param_2 = lVar8;
    }
    *param_3 = lVar7;
  }
  else {
    cVar4 = SBORROW4(iVar3,iVar1);
    cVar5 = iVar3 - iVar1 < 0;
    bVar6 = iVar3 == iVar1;
    if (iVar1 < iVar3) {
      *param_2 = lVar9;
      *param_3 = lVar8;
      func_0x00010780d7b8(*param_2);
      if (!bVar6 && cVar5 == cVar4) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 10780bc98; end: 10780bd83;  */

void FUN_10780bc98(void)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  long extraout_x8;
  long extraout_x11;
  long lVar4;
  long extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  long extraout_x13;
  int extraout_w15;
  int extraout_w16;
  long unaff_x20;
  
  func_0x00010780d854();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780bcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea6602)[extraout_x8] * 4 + 0x10780bccc))(1);
    return;
  }
  func_0x00010780d8fc();
  func_0x00010780bb58();
  func_0x00010780da80();
  lVar4 = extraout_x11;
  do {
    if (lVar4 == unaff_x20) {
      return;
    }
    func_0x00010780da70();
    iVar2 = (*(int *)(extraout_x11_00 + 0xc) + *(int *)(extraout_x11_00 + 8)) * 2;
    iVar1 = (*(int *)(extraout_x13 + 0xc) + *(int *)(extraout_x13 + 8)) * 2;
    bVar3 = iVar2 == iVar1;
    if (iVar1 < iVar2) {
      do {
        func_0x00010780dca8();
        if (bVar3) {
          bVar3 = true;
          break;
        }
        func_0x00010780dbe4();
        iVar1 = (extraout_w16 + extraout_w15) * 2;
        bVar3 = extraout_w12 == iVar1;
      } while (!bVar3 && iVar1 <= extraout_w12);
      func_0x00010780da40();
      if (bVar3) {
        func_0x00010780da10();
        return;
      }
    }
    func_0x00010780da20();
    lVar4 = extraout_x11_01;
  } while( true );
}



/* Entry: 10780ca54; end: 10780ca9b;  */

void FUN_10780ca54(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010780d818();
  func_0x00010780c9d4();
  func_0x00010780db1c();
  func_0x00010780d9cc();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x00010780d804();
    func_0x00010780d9cc();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x00010780d7f0();
      func_0x00010780d9cc();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010780db28();
      }
    }
  }
  return;
}



/* Entry: 10780d278; end: 10780d34b;  */

void FUN_10780d278(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  long lStack_40;
  
  uVar1 = (uint)param_2;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  if ((*param_1 != uVar1) || (param_1[1] != uVar2)) {
    func_0x0001073c802c(&uStack_48,param_2);
    uStack_50 = uStack_50 & 0xffffff00;
    func_0x0001074669d0(lStack_40,lStack_40 + (ulong)uStack_44 * (ulong)uStack_48,&uStack_50);
    uStack_50 = *param_1;
    if (uVar1 <= *param_1) {
      uStack_50 = uVar1;
    }
    uStack_4c = param_1[1];
    if (uVar2 <= param_1[1]) {
      uStack_4c = uVar2;
    }
    func_0x00010780d41c(param_1,&uStack_48,0,0,0,0,&uStack_50);
    func_0x0001073c81ec(param_1,&uStack_48);
    func_0x0001073c7fd0(&uStack_48);
  }
  return;
}



/* Entry: 10780df20; end: 10780e8bf;  */

/* WARNING: Possible PIC construction at 0x00010780dff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010780dff8) */
/* WARNING: Removing unreachable block (ram,0x00010780e010) */
/* WARNING: Removing unreachable block (ram,0x00010780e278) */
/* WARNING: Removing unreachable block (ram,0x00010780e018) */
/* WARNING: Removing unreachable block (ram,0x00010780e01c) */
/* WARNING: Removing unreachable block (ram,0x00010780e0d4) */
/* WARNING: Removing unreachable block (ram,0x00010780e11c) */
/* WARNING: Removing unreachable block (ram,0x00010780e12c) */
/* WARNING: Removing unreachable block (ram,0x00010780e14c) */
/* WARNING: Removing unreachable block (ram,0x00010780e158) */
/* WARNING: Removing unreachable block (ram,0x00010780e15c) */
/* WARNING: Removing unreachable block (ram,0x00010780e160) */
/* WARNING: Removing unreachable block (ram,0x00010780e16c) */
/* WARNING: Removing unreachable block (ram,0x00010780e250) */
/* WARNING: Removing unreachable block (ram,0x00010780e264) */
/* WARNING: Removing unreachable block (ram,0x00010780e174) */
/* WARNING: Removing unreachable block (ram,0x00010780e03c) */
/* WARNING: Removing unreachable block (ram,0x00010780e040) */
/* WARNING: Removing unreachable block (ram,0x00010780e054) */
/* WARNING: Removing unreachable block (ram,0x00010780e084) */
/* WARNING: Removing unreachable block (ram,0x00010780e094) */
/* WARNING: Removing unreachable block (ram,0x00010780e0b4) */
/* WARNING: Removing unreachable block (ram,0x00010780e0c0) */
/* WARNING: Removing unreachable block (ram,0x00010780e180) */
/* WARNING: Removing unreachable block (ram,0x00010780e1a8) */
/* WARNING: Removing unreachable block (ram,0x00010780e1e8) */
/* WARNING: Removing unreachable block (ram,0x00010780e1f8) */
/* WARNING: Removing unreachable block (ram,0x00010780e218) */
/* WARNING: Removing unreachable block (ram,0x00010780e224) */
/* WARNING: Removing unreachable block (ram,0x00010780e238) */
/* WARNING: Removing unreachable block (ram,0x00010780e268) */
/* WARNING: Removing unreachable block (ram,0x00010780e22c) */
/* WARNING: Removing unreachable block (ram,0x00010780e0c8) */

undefined8 *******
FUN_10780df20(undefined8 param_1,undefined8 *******param_2,undefined8 param_3,long *param_4,
             undefined1 param_5)

{
  undefined8 *******pppppppuVar1;
  undefined8 ******ppppppuVar2;
  ushort uVar3;
  byte bVar4;
  undefined8 *****pppppuVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *puVar11;
  undefined8 *******pppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 extraout_x8;
  ulong uVar14;
  undefined8 *******pppppppuVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******unaff_x19;
  undefined8 *******unaff_x20;
  undefined8 ******ppppppuVar18;
  long lVar19;
  undefined8 ******ppppppuVar20;
  undefined8 *******pppppppuVar21;
  ulong uVar22;
  ulong uVar23;
  byte bVar24;
  uint6 uVar25;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  undefined8 uVar26;
  byte bVar32;
  undefined8 ******ppppppuStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  undefined8 ******ppppppuStack_3c8;
  undefined8 ******ppppppuStack_3c0;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined8 ******ppppppuStack_398;
  undefined8 ******ppppppuStack_390;
  undefined1 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 ******ppppppuStack_360;
  undefined8 ******ppppppuStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 ******ppppppuStack_340;
  undefined8 ******ppppppuStack_338;
  undefined8 *****pppppuStack_328;
  undefined8 ******ppppppuStack_320;
  undefined8 ******ppppppuStack_318;
  undefined8 *puStack_310;
  undefined8 ******ppppppuStack_300;
  undefined8 ******ppppppuStack_2f8;
  undefined8 ******ppppppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [448];
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 *puStack_f0;
  undefined1 auStack_e8 [64];
  undefined8 ******ppppppuStack_a8;
  undefined1 uStack_a0;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  
  func_0x0001078121d4();
  pppppppuVar8 = (undefined8 *******)0x30;
  uStack_88 = extraout_x8;
  __Znwm();
  pppppppuVar8[1] = (undefined8 ******)0x0;
  pppppppuVar8[2] = (undefined8 ******)0x0;
  pppppppuVar9 = pppppppuVar8 + 3;
  *pppppppuVar8 = (undefined8 ******)&PTR_DAT_1109dfce8;
  func_0x000107810024(pppppppuVar9,param_3);
  ppppppuStack_360 = (undefined8 ******)&UNK_10e52b660;
  ppppppuStack_358 = (undefined8 *******)0x0;
  uStack_350 = 0;
  uStack_348 = 0;
  puStack_380 = &UNK_10e52b660;
  uStack_378 = 0;
  uStack_370 = 0;
  lStack_368 = 0;
  pppppppuVar12 = unaff_x19 + 0xf;
  ppppppuStack_2f8 = (undefined8 ******)CONCAT71(ppppppuStack_2f8._1_7_,1);
  ppppppuStack_340 = pppppppuVar9;
  ppppppuStack_338 = pppppppuVar8;
  ppppppuStack_300 = pppppppuVar12;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  pppppppuVar8 = (undefined8 *******)*ppppppuStack_340;
  uVar7 = pppppppuVar8 == (undefined8 *******)(ppppppuStack_340 + 1);
  if ((bool)uVar7) {
    func_0x000100100f40(&ppppppuStack_300);
    uStack_a0 = 1;
    ppppppuStack_a8 = pppppppuVar12;
    __ZNSt3__119__shared_mutex_base4lockEv();
    ppppppuStack_2f8 = ppppppuStack_358;
    ppppppuStack_300 = ppppppuStack_360;
    func_0x00010781050c(&ppppppuStack_300);
    unaff_x20 = &ppppppuStack_3c0;
    pppppppuVar8 = (undefined8 *******)ppppppuStack_2f8;
    pppppppuVar9 = (undefined8 *******)ppppppuStack_300;
    while (ppppppuStack_318 = pppppppuVar8, pppppppuVar9 != (undefined8 *******)0x0) {
      pppppppuVar10 = unaff_x19 + 7;
      func_0x00010780e8ec(pppppppuVar10,*pppppppuVar8);
      pppppppuVar21 = pppppppuVar8 + 1;
      uVar3 = *(ushort *)pppppppuVar21;
      pppppppuVar1 = pppppppuVar10 + 1;
      pppppppuVar15 = pppppppuVar1;
      pppppppuVar17 = pppppppuVar1;
      while (pppppppuVar16 = (undefined8 *******)*pppppppuVar17,
            pppppppuVar16 != (undefined8 *******)0x0) {
        bVar6 = *(ushort *)((long)pppppppuVar16 + 0x22) < *(ushort *)((long)pppppppuVar8 + 10);
        if (*(ushort *)(pppppppuVar16 + 4) != uVar3) {
          bVar6 = *(ushort *)(pppppppuVar16 + 4) < uVar3;
        }
        lVar19 = 8;
        if (!bVar6) {
          lVar19 = 0;
        }
        pppppppuVar17 = (undefined8 *******)((long)pppppppuVar16 + lVar19);
        if (!bVar6) {
          pppppppuVar15 = pppppppuVar16;
        }
      }
      uVar7 = true;
      if (pppppppuVar1 == pppppppuVar15) {
LAB_10780e368:
        func_0x00010780ea08();
        ppppppuStack_300 = param_2;
        func_0x00010780eb08(pppppppuVar10 + 2,&ppppppuStack_300);
        func_0x00010780ebe4();
        if (pppppppuVar10[1] == (undefined8 ******)0x0) {
          ppppppuVar18 = *pppppppuVar8;
          func_0x000107526f60(&ppppppuStack_300,unaff_x19,ppppppuVar18,pppppppuVar21);
          ppppppuStack_3c0 = unaff_x19;
          func_0x000107278b70(&uStack_3b8,ppppppuVar18);
          uStack_3a8 = *(undefined4 *)pppppppuVar21;
          puStack_f0 = (undefined8 *)0x0;
          puVar11 = (undefined8 *)0x28;
          __Znwm();
          *puVar11 = &PTR_DAT_1109dff28;
          puVar11[1] = ppppppuStack_3c0;
          func_0x000107278b70(puVar11 + 2,&uStack_3b8);
          *(undefined4 *)(puVar11 + 4) = uStack_3a8;
          puStack_f0 = puVar11;
          (**(code **)(*param_4 + 0x10))
                    (&pppppuStack_328,param_4,&ppppppuStack_300,&ppppppuStack_108);
          pppppuVar5 = pppppuStack_328;
          pppppuStack_328 = (undefined8 ******)0x0;
          ppppppuVar18 = pppppppuVar10[1];
          pppppppuVar10[1] = (undefined8 ******)pppppuVar5;
          if (ppppppuVar18 != (undefined8 ******)0x0) {
            func_0x000107812334();
            pppppuVar5 = pppppuStack_328;
            pppppuStack_328 = (undefined8 ******)0x0;
            if ((undefined8 ******)pppppuVar5 != (undefined8 ******)0x0) {
              func_0x000107812334();
            }
          }
          func_0x0001072ad0c8(&ppppppuStack_108);
          func_0x00010726b09c(&uStack_3b8);
          func_0x00010724b374(&ppppppuStack_300);
        }
      }
      else {
        uVar7 = uVar3 == *(ushort *)(pppppppuVar15 + 4);
        bVar6 = *(ushort *)((long)pppppppuVar8 + 10) < *(ushort *)((long)pppppppuVar15 + 0x22);
        if (!(bool)uVar7) {
          bVar6 = uVar3 < *(ushort *)(pppppppuVar15 + 4);
        }
        if ((bVar6) || (((ulong)pppppppuVar15[5] & 1) == 0)) goto LAB_10780e368;
      }
      ppppppuStack_320 = (undefined8 ******)((long)pppppppuVar9 + 1);
      ppppppuStack_318 = pppppppuVar8 + 2;
      func_0x00010781050c(&ppppppuStack_320);
      pppppppuVar8 = (undefined8 *******)ppppppuStack_318;
      pppppppuVar9 = (undefined8 *******)ppppppuStack_320;
    }
    func_0x000104c305a0(&ppppppuStack_a8);
    if (lStack_368 != 0) {
      ppppppuStack_3c0 = param_2;
      func_0x00010780f73c(&uStack_3b8,&puStack_380);
      ppppppuStack_390 = ppppppuStack_338;
      ppppppuStack_398 = ppppppuStack_340;
      if ((undefined8 *******)ppppppuStack_338 != (undefined8 *******)0x0) {
        do {
          func_0x000107812250();
        } while (extraout_w10 != 0);
      }
      ppppppuStack_300 = (undefined8 ******)((ulong)ppppppuStack_300 & 0xffffffffffffff00);
      ppppppuVar18 = unaff_x19[0x27] + 0x13c;
      uStack_388 = param_5;
      func_0x00010724e2c8(ppppppuVar18,&ppppppuStack_300);
      if ((int)ppppppuVar18 == 0) {
        ppppppuStack_2f8 = ppppppuStack_390;
        ppppppuStack_300 = ppppppuStack_398;
        if ((undefined8 *******)ppppppuStack_390 != (undefined8 *******)0x0) {
          do {
            func_0x000107812250();
          } while (extraout_w10_02 != 0);
        }
        func_0x00010780ee80(unaff_x19,CONCAT71(uStack_3b7,uStack_3b8),uStack_3b0,uStack_388);
        func_0x0001078100a8(&ppppppuStack_300);
      }
      else {
        ppppppuStack_2f8 = (undefined8 ******)CONCAT71(ppppppuStack_2f8._1_7_,1);
        ppppppuStack_300 = pppppppuVar12;
        __ZNSt3__119__shared_mutex_base4lockEv();
        ppppppuStack_108 = ppppppuStack_3c0;
        func_0x00010780eb08(unaff_x19 + 0xb,&ppppppuStack_108);
        func_0x00010780ebe4();
        pppppppuVar8 = &ppppppuStack_300;
        func_0x000104c305a0();
        func_0x0001073af260();
        (*(code *)(*pppppppuVar8)[4])(&ppppppuStack_320);
        ppppppuVar18 = unaff_x19[0x28];
        ppppppuStack_f8 = ppppppuStack_318;
        ppppppuStack_100 = ppppppuStack_320;
        ppppppuStack_108 = unaff_x19;
        if ((undefined8 *******)ppppppuStack_318 != (undefined8 *******)0x0) {
          do {
            func_0x000107812250();
          } while (extraout_w10_00 != 0);
        }
        puStack_f0 = puStack_310;
        func_0x00010780fdd0(auStack_e8,&ppppppuStack_3c0);
        FUN_10780f8b0(&ppppppuStack_300,unaff_x19 + 0x2a);
        func_0x00010780f904(&uStack_2e8,&ppppppuStack_108);
        puStack_90 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x80;
        __Znwm();
        *puVar11 = &PTR_DAT_1109dfdd8;
        puVar11[2] = ppppppuStack_2f8;
        puVar11[1] = ppppppuStack_300;
        ppppppuStack_300 = (undefined8 *******)0x0;
        ppppppuStack_2f8 = (undefined8 *******)0x0;
        puVar11[4] = uStack_2e8;
        puVar11[3] = ppppppuStack_2f0;
        puVar11[6] = lStack_2d8;
        puVar11[5] = uStack_2e0;
        if (lStack_2d8 != 0) {
          do {
            func_0x000107812250();
          } while (extraout_w10_01 != 0);
        }
        puVar11[7] = uStack_2d0;
        func_0x00010780fdd0(puVar11 + 8,auStack_2c8);
        puStack_90 = puVar11;
        (*(code *)(*ppppppuVar18)[2])(ppppppuVar18,&ppppppuStack_a8);
        func_0x0001006393ec(&ppppppuStack_a8);
        func_0x00010780ee34(&ppppppuStack_300);
        func_0x00010780ee5c(&ppppppuStack_108);
        func_0x00010725b1d4(&ppppppuStack_320);
      }
      func_0x00010780f740(&ppppppuStack_3c0);
    }
    if (((undefined8 *******)ppppppuStack_338 != (undefined8 *******)0x0) &&
       ((undefined8 ******)ppppppuStack_338[1] == (undefined8 ******)0x0)) {
      ppppppuStack_2f8 = (undefined8 ******)0x0;
      ppppppuStack_2f0 = (undefined8 ******)0x0;
      uStack_3b8 = 1;
      ppppppuStack_3c0 = pppppppuVar12;
      ppppppuStack_300 = &ppppppuStack_2f8;
      __ZNSt3__119__shared_mutex_base11lock_sharedEv();
      unaff_x20 = &ppppppuStack_108;
      func_0x00010780ec28(&ppppppuStack_108,unaff_x19,ppppppuStack_340);
      func_0x00010780f76c(&ppppppuStack_300,ppppppuStack_2f8);
      ppppppuStack_300 = ppppppuStack_108;
      ppppppuStack_2f8 = ppppppuStack_100;
      ppppppuStack_2f0 = ppppppuStack_f8;
      pppppppuVar12 = &ppppppuStack_2f8;
      if ((undefined8 *******)ppppppuStack_f8 != (undefined8 *******)0x0) {
        ppppppuStack_108 = &ppppppuStack_100;
        ppppppuStack_100[2] = &ppppppuStack_2f8;
        ppppppuStack_100 = (undefined8 *******)0x0;
        ppppppuStack_f8 = (undefined8 *******)0x0;
        pppppppuVar12 = (undefined8 *******)ppppppuStack_300;
      }
      ppppppuStack_300 = pppppppuVar12;
      func_0x0001078108a4(&ppppppuStack_108);
      func_0x000107812390();
      ppppppuStack_3d8 = ppppppuStack_300;
      ppppppuStack_3d0 = ppppppuStack_2f8;
      ppppppuStack_3c8 = ppppppuStack_2f0;
      pppppppuVar12 = &ppppppuStack_3d0;
      if ((undefined8 *******)ppppppuStack_2f0 != (undefined8 *******)0x0) {
        ppppppuStack_2f8[2] = &ppppppuStack_3d0;
        ppppppuStack_2f8 = (undefined8 *******)0x0;
        ppppppuStack_2f0 = (undefined8 *******)0x0;
        pppppppuVar12 = (undefined8 *******)ppppppuStack_3d8;
        ppppppuStack_300 = &ppppppuStack_2f8;
      }
      ppppppuStack_3d8 = pppppppuVar12;
      (*(code *)**param_2)(param_2,&ppppppuStack_3d8);
      func_0x0001078108a4(&ppppppuStack_3d8);
      func_0x0001078108a4(&ppppppuStack_300);
    }
    func_0x00010780f838(&puStack_380);
    func_0x00010780ee10(&ppppppuStack_360);
    pppppppuVar8 = &ppppppuStack_340;
    func_0x0001078100a8();
    func_0x0001078121c0(uStack_88);
    if ((bool)uVar7) {
      return pppppppuVar8;
    }
    ___stack_chk_fail();
    func_0x0001078108a4(&ppppppuStack_3d8);
    func_0x0001078108a4(&ppppppuStack_300);
    func_0x00010780f838(&puStack_380);
    func_0x00010780ee10(&ppppppuStack_360);
    pppppppuVar12 = &ppppppuStack_340;
    func_0x0001078100a8();
    func_0x0001078122bc();
  }
  else {
    pppppppuVar12 = unaff_x19 + 7;
  }
  func_0x0001078122e0();
  func_0x00010781253c();
  pppppppuVar9 = unaff_x20;
  func_0x0001078122d4(unaff_x20,pppppppuVar8);
  lVar19 = 0;
  ppppppuVar18 = pppppppuVar9[1];
  ppppppuVar2 = pppppppuVar9[2];
  ppppppuVar20 = *pppppppuVar9;
  uVar14 = (ulong)ppppppuVar20 >> 0xc ^ (ulong)pppppppuVar12 >> 7;
  bVar4 = (byte)pppppppuVar12;
  uVar25 = CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar14 = uVar14 & (ulong)ppppppuVar2;
    uVar26 = *(undefined8 *)((long)ppppppuVar20 + uVar14);
    cVar27 = (char)((ulong)uVar26 >> 8);
    cVar28 = (char)((ulong)uVar26 >> 0x10);
    cVar29 = (char)((ulong)uVar26 >> 0x18);
    cVar30 = (char)((ulong)uVar26 >> 0x20);
    cVar31 = (char)((ulong)uVar26 >> 0x28);
    bVar24 = (byte)((ulong)uVar26 >> 0x30);
    bVar32 = (byte)((ulong)uVar26 >> 0x38);
    for (uVar22 = CONCAT17(-(bVar32 == (bVar4 & 0x7f)),
                           CONCAT16(-(bVar24 == (bVar4 & 0x7f)),
                                    CONCAT15(-(cVar31 == (char)(uVar25 >> 0x28)),
                                             CONCAT14(-(cVar30 == (char)(uVar25 >> 0x20)),
                                                      CONCAT13(-(cVar29 == (char)(uVar25 >> 0x18)),
                                                               CONCAT12(-(cVar28 ==
                                                                         (char)(uVar25 >> 0x10)),
                                                                        CONCAT11(-(cVar27 ==
                                                                                  (char)(uVar25 >> 8
                                                                                        )),
                                                                                 -((char)uVar26 ==
                                                                                  (char)uVar25))))))
                                   )) & 0x8080808080808080; uVar22 != 0;
        uVar22 = uVar22 - 1 & uVar22) {
      uVar23 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar23 = uVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & (ulong)ppppppuVar2;
      ppppppuVar13 = ppppppuVar18 + uVar23 * 8;
      func_0x000107798a7c(ppppppuVar13,unaff_x20);
      if ((int)ppppppuVar13 != 0) {
        return (undefined8 *******)((long)*pppppppuVar8 + uVar23);
      }
    }
    bVar24 = NEON_umaxv(CONCAT17(-(bVar32 == 0x80),
                                 CONCAT16(-(bVar24 == 0x80),
                                          CONCAT15(-(cVar31 == -0x80),
                                                   CONCAT14(-(cVar30 == -0x80),
                                                            CONCAT13(-(cVar29 == -0x80),
                                                                     CONCAT12(-(cVar28 == -0x80),
                                                                              CONCAT11(-(cVar27 ==
                                                                                        -0x80),-((
                                                  char)uVar26 == -0x80)))))))),1);
    if ((bVar24 & 1) != 0) break;
    lVar19 = lVar19 + 8;
    uVar14 = lVar19 + uVar14;
  }
  return (undefined8 *******)0x0;
}



/* Entry: 10780f1d8; end: 10780f2bf;  */

void FUN_10780f1d8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001078122e0();
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_1109dfed8;
  func_0x0001077ff70c();
  *unaff_x20 = puVar2;
  unaff_x20[1] = puVar1;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010780fe0c(&uStack_40);
  return;
}



/* Entry: 10780f57c; end: 10780f5ab;  */

void FUN_10780f57c(void)

{
  long extraout_x8;
  
  func_0x000107812384();
  if (extraout_x8 != 0) {
    func_0x00010780f5ac();
    func_0x00010781222c();
  }
  return;
}



/* Entry: 10780f8b0; end: 10780f903;  */

void FUN_10780f8b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107812250();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 10780fca0; end: 10780fccf;  */

undefined8 FUN_10780fca0(undefined8 *param_1,undefined8 *param_2)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = *param_2;
  func_0x00010780fcd0(param_1 + 1,param_2 + 1);
  func_0x000107812384(param_2 + 1);
  if (extraout_x8 != 0) {
    func_0x00010781222c();
  }
  return unaff_x19;
}



/* Entry: 10780fed4; end: 10780ff33;  */

undefined8 FUN_10780fed4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010780ff00(&uStack_28);
  return param_1;
}



/* Entry: 107810050; end: 1078100cf;  */

void FUN_107810050(void)

{
  func_0x0001078124ac();
  func_0x000107810070();
  return;
}



/* Entry: 107810484; end: 1078104f7;  */

void FUN_107810484(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar2;
  
  func_0x000107812290();
  func_0x000104ab30b8();
  func_0x0001078124a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      puVar1 = unaff_x20;
      func_0x00010781037c();
      func_0x0001078121e8();
      func_0x000107812174(unaff_w21 & 0x7f);
      uVar2 = *unaff_x20;
      puVar1 = (undefined8 *)(unaff_x25 + (long)puVar1 * 0x10);
      puVar1[1] = unaff_x20[1];
      *puVar1 = uVar2;
    }
    unaff_x20 = unaff_x20 + 2;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1078107a4; end: 1078107bf;  */

void FUN_1078107a4(void)

{
  func_0x000107812518();
  return;
}



/* Entry: 107810960; end: 107810b2f;  */

void FUN_107810960(void)

{
  undefined1 in_ZR;
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long lVar6;
  long *unaff_x22;
  undefined1 auStack_148 [16];
  long lStack_138;
  undefined1 auStack_130 [64];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001078121d4();
  puVar5 = (undefined1 *)(unaff_x19 + 8);
  uStack_48 = extraout_x8;
  func_0x000107810bd8(auStack_148,puVar5);
  iVar1 = (int)unaff_x19 + 8;
  func_0x000107810c5c();
  if (iVar1 != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uStack_78 = *(undefined8 *)(unaff_x19 + 0x70);
    uStack_80 = *(undefined8 *)(unaff_x19 + 0x68);
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      do {
        func_0x000107812250();
      } while (extraout_w10 != 0);
    }
    puVar5 = *(undefined1 **)(unaff_x19 + 0x48);
    func_0x00010780ee80(lVar6,puVar5,*(undefined8 *)(unaff_x19 + 0x50),
                        *(undefined1 *)(unaff_x19 + 0x78));
    func_0x0001078100a8(&uStack_80);
    func_0x000107284284(auStack_90,unaff_x19 + 0x28);
    uVar2 = unaff_x19 + 0x28;
    func_0x0001072842e4();
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)(unaff_x19 + 0x28);
      func_0x00010728433c();
      unaff_x22 = &lStack_138;
      lStack_138 = lVar6;
      func_0x00010780f954(auStack_130,unaff_x19 + 0x40);
      FUN_10780f8b0(&uStack_f0,lVar6 + 0x150);
      func_0x000107810ccc(&uStack_d8,&lStack_138);
      puStack_50 = (undefined8 *)0x0;
      puVar4 = (undefined8 *)0x68;
      __Znwm();
      *puVar4 = &PTR_DAT_1109dfe48;
      puVar4[2] = uStack_e8;
      puVar4[1] = uStack_f0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      puVar4[4] = uStack_d8;
      puVar4[3] = uStack_e0;
      func_0x00010780fdd0(puVar4 + 5,auStack_d0);
      puVar5 = auStack_68;
      puStack_50 = puVar4;
      (**(code **)(*plVar3 + 0x10))(plVar3,puVar5);
      func_0x0001006393ec(auStack_68);
      func_0x000107810cac(&uStack_f0);
      func_0x00010780f740(auStack_130);
    }
    func_0x000107270b00(auStack_90);
  }
  func_0x000107270b00();
  func_0x0001078121c0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001006393ec(auStack_68);
    func_0x000107810cac(&uStack_f0);
    func_0x00010780f740(unaff_x22 + 1);
    func_0x000107270b00(auStack_90);
    func_0x000107270b00(auStack_148);
    func_0x0001078122bc();
    func_0x0001078124f8(puVar5);
    func_0x000107812448();
    return;
  }
  return;
}



/* Entry: 107810d6c; end: 107810d8f;  */

void FUN_107810d6c(long param_1,undefined8 param_2)

{
  func_0x0001078122d4(param_2,param_1 + 8);
  func_0x0001078123c4(&PTR_DAT_1109dfe48);
  func_0x000107810ccc();
  return;
}



/* Entry: 107811080; end: 1078110a3;  */

undefined1  [16] FUN_107811080(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x0001078110a4(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1078111bc; end: 107811223;  */

uint * FUN_1078111bc(long param_1)

{
  char cVar1;
  bool bVar2;
  long extraout_x8;
  int *extraout_x8_00;
  long *extraout_x9;
  
  if ((ulong)*(uint *)(param_1 + 0x24) * (ulong)*(uint *)(param_1 + 0x20) != 0) {
    func_0x0001073c893c();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
      if (bVar2) {
        *extraout_x9 = *extraout_x9 - extraout_x8;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x0001073c88ec();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_00,0x10);
      if (bVar2) {
        *extraout_x8_00 = *extraout_x8_00 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010724e5b8(param_1 + 0x28);
  return (uint *)(param_1 + 0x20);
}



/* Entry: 107811954; end: 10781198b;  */

void FUN_107811954(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078122e0();
  uVar1 = *param_2;
  *param_1 = &PTR_DAT_1109dff28;
  param_1[1] = uVar1;
  func_0x000107278b70(param_1 + 2,param_2 + 1);
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107811b0c; end: 107811b57;  */

void FUN_107811b0c(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107812260();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107812328();
  func_0x000107812318();
  return;
}



/* Entry: 107811d00; end: 107811d6b;  */

long * FUN_107811d00(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107811d48();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 107811f88; end: 107812007;  */

long FUN_107811f88(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001078122d4();
  func_0x000107812008();
  FUN_107811d00(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 4,unaff_x19 + 2);
  func_0x000107278b70(lStack_38);
  lStack_38 = lStack_38 + 0x10;
  func_0x00010781250c();
  lVar1 = unaff_x19[1];
  func_0x0001078123bc();
  return lVar1;
}



/* Entry: 107812624; end: 107812a17;  */

void FUN_107812624(long *param_1,ushort *param_2,long *param_3)

{
  char cVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long *plVar14;
  long **pplVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 ***pppuVar20;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint uStack_f0;
  undefined8 **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar18 = param_1 + 2;
  *plVar18 = 0;
  uVar13 = 0x3800;
  uStack_100 = plVar18;
  __Znwm();
  lStack_108 = uVar13 + 0x3800;
  uStack_120 = uVar13;
  uStack_118 = uVar13;
  uStack_110 = uVar13;
  func_0x000107812a2c(param_1,&uStack_120);
  func_0x000107812ae4(&uStack_120);
  cVar1 = *(char *)((long)param_3 + 0x17);
  lStack_b8 = *param_3;
  if (-1 < (long)cVar1) {
    lStack_b8 = (long)param_3;
  }
  lStack_b0 = param_3[1];
  if (-1 < cVar1) {
    lStack_b0 = (long)cVar1;
  }
  lStack_b0 = lStack_b8 + lStack_b0;
  uStack_a8 = 99;
  do {
    iVar10 = (int)&lStack_b8;
    lVar17 = 1;
    func_0x000104c2f188();
    if (iVar10 == 0) {
      return;
    }
    plVar14 = &lStack_b8;
    func_0x000104c2f1c8();
    lStack_c8 = (long)plVar14 + lVar17;
    uStack_c0 = 99;
    plStack_d0 = plVar14;
    while( true ) {
      iVar10 = (int)&plStack_d0;
      uVar13 = 3;
      func_0x000104c2f188();
      if (iVar10 == 0) break;
      pplVar15 = &plStack_d0;
      func_0x000104c2f1c8();
      pppuVar20 = (undefined8 ***)0x0;
      bVar8 = 0;
      bVar7 = 0;
      bVar6 = 0;
      bVar5 = 0;
      bVar4 = 0;
      bVar3 = 0;
      lStack_e0 = (long)pplVar15 + uVar13;
      uStack_d8 = 99;
      uStack_120 = uStack_120 & 0xffffffffffff0000;
      uStack_118 = 0;
      uStack_110 = 0;
      lStack_108 = CONCAT62(lStack_108._2_6_,1);
      uStack_100 = (long *)0x0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uVar19 = 0;
      ppuStack_e8 = pplVar15;
      while( true ) {
        uVar11 = (uint)&ppuStack_e8;
        func_0x000104c2f230();
        if (uVar11 == 0) break;
        switch(uStack_d8._4_4_) {
        case 1:
          func_0x000107812b58();
          uStack_120 = CONCAT62(uStack_120._2_6_,(short)uVar11);
          bVar8 = 1;
          break;
        case 2:
          pppuVar20 = &ppuStack_e8;
          func_0x000104c2f1c8();
          uVar19 = uVar13;
          break;
        case 3:
          func_0x000107812b58();
          uStack_100 = (long *)CONCAT44(uStack_100._4_4_,uVar11);
          bVar7 = 1;
          break;
        case 4:
          func_0x000107812b58();
          uStack_100 = (long *)CONCAT44(uVar11,(uint)uStack_100);
          bVar6 = 1;
          break;
        case 5:
          uVar12 = SUB84(&ppuStack_e8,0);
          func_0x000107812b34();
          uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar12);
          bVar5 = 1;
          break;
        case 6:
          uVar12 = SUB84(&ppuStack_e8,0);
          func_0x000107812b34();
          uStack_f8 = CONCAT44(uVar12,(int)uStack_f8);
          bVar4 = 1;
          break;
        case 7:
          func_0x000107812b58();
          bVar3 = 1;
          uStack_f0 = uVar11;
          break;
        default:
          func_0x000104c2f2fc(&ppuStack_e8);
        }
      }
      if ((bool)(bVar8 & bVar7 & bVar6 & bVar5 & bVar4 & bVar3)) {
        if ((((((uint)uStack_100 < 0x100) && (uStack_100._4_4_ < 0x100)) &&
             (0xfffffeff < (int)uStack_f8 - 0x80U)) &&
            ((0xfffffeff < uStack_f8._4_4_ - 0x80U && (uStack_f0 < 0x100)))) &&
           (*param_2 <= (ushort)uStack_120 && (ushort)uStack_120 <= param_2[1])) {
          if (((uint)uStack_100 != 0) && (uStack_100._4_4_ != 0)) {
            uVar13 = ((ulong)uStack_100 & 0xffffffff) + 6;
            if (uVar19 != (uStack_100._4_4_ + 6) * (int)uVar13) goto LAB_10781299c;
            func_0x0001078081c4(&lStack_a0,uVar13 | (ulong)(uStack_100._4_4_ + 6) << 0x20,pppuVar20,
                                uVar19);
            func_0x0001073c81ec(&uStack_118,&lStack_a0);
            func_0x0001073c7fd0(&lStack_a0);
          }
          uVar13 = param_1[1];
          if (uVar13 < (ulong)param_1[2]) {
            func_0x0001077ff70c(uVar13,&uStack_120);
            lVar17 = uVar13 + 0x38;
          }
          else {
            lVar17 = uVar13 - *param_1;
            uVar13 = lVar17 / 0x38 + 1;
            if (0x492492492492492 < uVar13) {
              func_0x000107812a18();
LAB_1078129d4:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1078129d8);
              (*pcVar9)();
            }
            uVar2 = (param_1[2] - *param_1) / 0x38;
            uVar19 = uVar2 * 2;
            if (uVar19 < uVar13 || uVar19 - uVar13 == 0) {
              uVar19 = uVar13;
            }
            if (0x249249249249248 < uVar2) {
              uVar19 = 0x492492492492492;
            }
            plStack_80 = plVar18;
            if (uVar19 == 0) {
              lVar16 = 0;
            }
            else {
              if (0x492492492492492 < uVar19) {
                func_0x000104bd35f4();
                goto LAB_1078129d4;
              }
              lVar16 = uVar19 * 0x38;
              __Znwm();
            }
            lVar17 = lVar16 + lVar17;
            lStack_88 = lVar16 + uVar19 * 0x38;
            lStack_a0 = lVar16;
            lStack_98 = lVar17;
            func_0x0001077ff70c(lVar17,&uStack_120);
            lStack_90 = lVar17 + 0x38;
            func_0x000107812a2c(param_1,&lStack_a0);
            lVar17 = param_1[1];
            func_0x000107812ae4(&lStack_a0);
          }
          param_1[1] = lVar17;
        }
      }
LAB_10781299c:
      func_0x000107812b60();
    }
  } while( true );
}



/* Entry: 107812e54; end: 107812ea3;  */

undefined2 * FUN_107812e54(undefined2 *param_1,undefined2 *param_2,double *param_3)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)(param_1 + 4);
  if (puVar1 < *(undefined2 **)(param_1 + 8)) {
    *puVar1 = *param_2;
    *(float *)(puVar1 + 2) = (float)*param_3;
    puVar1 = puVar1 + 4;
  }
  else {
    puVar1 = param_1;
    func_0x000107813144();
  }
  *(undefined2 **)(param_1 + 4) = puVar1;
  return puVar1 + -4;
}



/* Entry: 1078132ac; end: 1078132c7;  */

long * FUN_1078132ac(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  func_0x0001078132f4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078134cc; end: 1078134d7;  */

long * FUN_1078134cc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x0001078138d0();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107813520();
  }
  lVar1 = param_4 + param_3 * 0x80;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x80;
  return param_1;
}



/* Entry: 107813728; end: 10781372f;  */

void FUN_107813728(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078138fc(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x80;
    func_0x00010724b3d8(lVar1 + -0x48);
  }
  return;
}



/* Entry: 107813e60; end: 107813f43;  */

void FUN_107813e60(long *param_1,double param_2,ulong param_3,long param_4,long param_5,int param_6,
                  undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  double dVar6;
  
  lVar1 = param_3 + 0x20;
  uVar2 = param_3;
  func_0x000107813f44(param_3,lVar1,param_7);
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_3 + 0x10);
    func_0x0001078224b0();
    if (((int)uVar2 != 0) && (func_0x000107813f90(), (uVar2 & 1) == 0)) {
      func_0x0001074163dc(param_5);
      lVar5 = *(long *)(param_3 + 0x10);
      if ((param_6 == 0) || (param_2 != 0.0)) {
        lVar3 = lVar5;
        func_0x000107813fdc(lVar5,lVar1,param_5);
      }
      else {
        dVar6 = *(double *)(param_5 + 0x78);
        _log2();
        lVar3 = 0x80;
        if ((double)*(float *)(lVar5 + 0x1148) <= dVar6) {
          lVar3 = 0x78;
        }
        lVar3 = *(long *)(lVar1 + lVar3);
      }
      lVar3 = *(long *)(lVar5 + 0x1140) + lVar3;
      if (param_4 < lVar3) {
        *param_1 = lVar3;
        uVar4 = 1;
        goto LAB_107813f38;
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 2;
  }
LAB_107813f38:
  *(undefined4 *)(param_1 + 1) = uVar4;
  return;
}



/* Entry: 1078144f4; end: 1078147cf;  */

void FUN_1078144f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 unaff_x30;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_e60;
  undefined1 auStack_e58 [3672];
  
  func_0x0001078227a0();
  lVar1 = param_1;
  func_0x000107822a84();
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  *(long *)(param_1 + 0x18) = lVar1 + 8;
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001078143fc(param_1 + 0x30,*(undefined8 *)(param_1 + 0x20));
  func_0x000107415a58(auStack_e58,1,0);
  uStack_e60 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001077f51c8(param_1 + 0x40,auStack_e58,1,&uStack_e60,*(undefined8 *)(param_1 + 0x18));
  uVar2 = 0;
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x1128) = 0;
  *(undefined8 *)(param_1 + 0x1120) = 0;
  *(undefined8 *)(param_1 + 0x1118) = 0;
  *(undefined8 *)(param_1 + 0x1110) = 0;
  *(undefined1 *)(param_1 + 0x1130) = 1;
  *(undefined1 *)(param_1 + 0x1168) = 0;
  *(undefined1 *)(param_1 + 0x1170) = 0;
  *(undefined8 *)(param_1 + 0x1188) = 0;
  *(undefined8 *)(param_1 + 0x1180) = 0;
  *(undefined8 *)(param_1 + 0x1140) = 0;
  *(undefined8 *)(param_1 + 0x1138) = 0;
  *(undefined8 *)(param_1 + 0x1150) = 0;
  *(undefined8 *)(param_1 + 0x1148) = 0;
  *(undefined1 *)(param_1 + 0x1158) = 0;
  *(long *)(param_1 + 0x1178) = param_1 + 0x1180;
  *(undefined2 *)(param_1 + 0x1190) = 0;
  *(undefined1 *)(param_1 + 0x1192) = 1;
  *(undefined8 *)(param_1 + 0x11b8) = 0;
  *(undefined8 *)(param_1 + 0x11a0) = 0;
  *(undefined8 *)(param_1 + 0x1198) = 0;
  *(undefined8 *)(param_1 + 0x11b0) = 0;
  *(undefined8 *)(param_1 + 0x11a8) = 0;
  *(undefined4 *)(param_1 + 0x11b8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x11c8) = 0;
  *(undefined8 *)(param_1 + 0x11c0) = 0;
  *(undefined8 *)(param_1 + 0x11d8) = 0;
  *(undefined8 *)(param_1 + 0x11d0) = 0;
  *(undefined8 *)(param_1 + 0x11e0) = 0;
  *(undefined4 *)(param_1 + 0x11e0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1208) = 0;
  *(undefined8 *)(param_1 + 0x11f0) = 0;
  *(undefined8 *)(param_1 + 0x11e8) = 0;
  *(undefined8 *)(param_1 + 0x1200) = 0;
  *(undefined8 *)(param_1 + 0x11f8) = 0;
  *(undefined4 *)(param_1 + 0x1208) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1230) = 0;
  *(undefined8 *)(param_1 + 0x1218) = 0;
  *(undefined8 *)(param_1 + 0x1210) = 0;
  *(undefined8 *)(param_1 + 0x1228) = 0;
  *(undefined8 *)(param_1 + 0x1220) = 0;
  *(undefined4 *)(param_1 + 0x1230) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1258) = 0;
  *(undefined8 *)(param_1 + 0x1240) = 0;
  *(undefined8 *)(param_1 + 0x1238) = 0;
  *(undefined8 *)(param_1 + 0x1250) = 0;
  *(undefined8 *)(param_1 + 0x1248) = 0;
  *(undefined4 *)(param_1 + 0x1258) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1268) = 0;
  *(undefined8 *)(param_1 + 0x1260) = 0;
  *(undefined8 *)(param_1 + 0x1278) = 0;
  *(undefined8 *)(param_1 + 0x1270) = 0;
  *(undefined4 *)(param_1 + 0x1280) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1290) = 0;
  *(undefined8 *)(param_1 + 0x1288) = 0;
  *(undefined8 *)(param_1 + 0x12a0) = 0;
  *(undefined8 *)(param_1 + 0x1298) = 0;
  *(undefined8 *)(param_1 + 0x12b0) = 0;
  *(undefined8 *)(param_1 + 0x12a8) = 0;
  *(undefined8 *)(param_1 + 0x12c0) = 0;
  *(undefined8 *)(param_1 + 0x12b8) = 0;
  *(undefined8 *)(param_1 + 0x12d0) = 0;
  *(undefined8 *)(param_1 + 0x12c8) = 0;
  *(undefined8 *)(param_1 + 0x12d8) = 0;
  *(undefined4 *)(param_1 + 0x12d8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x12e8) = 0;
  *(undefined8 *)(param_1 + 0x12e0) = 0;
  *(undefined8 *)(param_1 + 0x12f8) = 0;
  *(undefined8 *)(param_1 + 0x12f0) = 0;
  *(undefined8 *)(param_1 + 0x1308) = 0;
  *(undefined8 *)(param_1 + 0x1300) = 0;
  func_0x00010782268c();
  *(undefined8 *)(param_1 + 0x1358) = uVar3;
  *(undefined8 *)(param_1 + 0x1350) = uVar2;
  *(undefined8 *)(param_1 + 0x1360) = 0;
  func_0x000107822a0c();
  func_0x00010781fa1c((undefined8 *)(param_1 + 0x1198));
  func_0x00010781fb4c(param_1 + 0x11c0);
  func_0x00010781fc7c((undefined8 *)(param_1 + 0x11e8));
  func_0x00010781fc90(param_1 + 0x1210);
  func_0x00010781fca4((undefined8 *)(param_1 + 0x1238));
  func_0x00010781fdd4((undefined8 *)(param_1 + 0x1288));
  func_0x00010781fdd4(param_1 + 0x12a0);
  func_0x00010781fe54(param_1 + 0x12b8);
  func_0x000107822134(0x12e0);
  func_0x000107822134(0x12f8);
  func_0x0001078229e4();
  func_0x000107822f80();
  func_0x000107822f6c();
  func_0x00010782233c(param_1,unaff_x30);
  return;
}



/* Entry: 107816538; end: 10781733b;  */

ulong FUN_107816538(long **param_1,long **param_2,long **param_3,long **param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  long **pplVar8;
  long **pplVar9;
  long *plVar10;
  undefined1 *puVar11;
  long **pplVar12;
  long **pplVar13;
  byte bVar14;
  code *extraout_x8;
  long *plVar15;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  undefined1 uVar16;
  long lVar17;
  long *plVar18;
  long *extraout_x9;
  long *extraout_x9_00;
  undefined1 uVar19;
  char *pcVar20;
  long *plVar21;
  ulong extraout_x10;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  uint uVar26;
  long *plVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  char *pcVar31;
  long ***ppplVar32;
  int iVar33;
  long ***ppplVar34;
  long ***ppplVar35;
  char *pcVar36;
  undefined4 uVar37;
  undefined8 uVar38;
  ulong uStack_1b8;
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  long **pplStack_120;
  long **pplStack_118;
  long **pplStack_110;
  long **pplStack_108;
  long **pplStack_100;
  long **pplStack_f8;
  long **pplStack_f0;
  long **pplStack_e8;
  long ***ppplStack_e0;
  long *plStack_d8;
  long **pplStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  long *plStack_b8;
  long **pplStack_b0;
  long **pplStack_a8;
  undefined4 uStack_9c;
  long *plStack_98;
  long *aplStack_90 [2];
  undefined1 auStack_7c [2];
  undefined1 uStack_7a;
  undefined1 auStack_78 [24];
  
  pplVar13 = param_2;
  if ((bRam0000000113726388 & 1) == 0) {
    pplVar13 = (long **)0x113726388;
    ___cxa_guard_acquire();
    if ((int)pplVar13 != 0) {
      uRam0000000113726380 = 0;
      uRam0000000113726382 = 0;
      pplVar13 = (long **)0x113726388;
      ___cxa_guard_release();
    }
  }
  iVar28 = (int)pplVar13;
  uVar6 = *(int *)(param_3 + 0xcb) == -1;
  if (!(bool)uVar6) {
    func_0x000107822a94(param_4[1]);
    (*extraout_x8)();
    if (iVar28 == 0) {
      pplVar13 = param_3 + 0xcb;
      plVar27 = *param_4;
      pplVar12 = param_4 + 0xd0;
      uVar22 = plVar27[5] + 0x778;
      func_0x0001073be6c4(aplStack_90);
      param_2[0x252] = param_2[0x251];
      param_2[0x255] = param_2[0x254];
      plStack_98 = (long *)0x0;
      pplVar8 = param_3;
      func_0x0001073fb0b0(param_3);
      uVar37 = SUB84(param_1,0);
      if ((uVar22 & 1) == 0) {
        plVar10 = (long *)0x0;
        iVar28 = 7;
        func_0x0001078229a0();
      }
      else {
        pplVar9 = (long **)plVar27[0x30];
        func_0x00010781733c(pplVar9,plVar27[0x31],pplVar8);
        ppplVar32 = (long ***)(param_4 + 0xd6);
        func_0x00010740b904(ppplVar32,pplVar9);
        uStack_9c = SUB84(param_1,0);
        plStack_b8 = plVar27;
        pplStack_b0 = param_2;
        pplStack_a8 = param_3;
        func_0x000107822818(aplStack_90[0]);
        uVar37 = SUB84(param_1,0);
        if ((bool)uVar6) {
          pplStack_108 = (long **)&uStack_9c;
          pplStack_118 = param_4;
          pplStack_110 = pplVar9;
          pplStack_100 = pplVar12;
          pplStack_f8 = param_3;
          if (((char)plVar27[0x14c] == '\x01') && ((*(byte *)(param_3 + 0xae) >> 1 & 1) != 0)) {
            uStack_1b8 = 0;
            pcVar31 = (char *)plVar27[0x14d];
            pcVar36 = (char *)plVar27[0x14e];
            ppplVar35 = (long ***)0x7;
            ppplVar34 = (long ***)0x7;
            pplStack_120 = param_2;
            do {
              uVar37 = SUB84(param_1,0);
              iVar33 = (int)ppplVar34;
              if (pcVar31 == pcVar36) break;
              bVar7 = *pcVar31 == '\x01';
              if (bVar7) {
                func_0x000107822fe8(plVar27);
                if (bVar7) {
                  ppplVar35 = (long ***)0x5;
                  ppplVar34 = (long ***)0x5;
                  if (((ulong)param_3[0x84] & 1) != 0) {
                    ppplVar32 = &pplStack_120;
                    FUN_10781cbbc(ppplVar32,param_3 + 0x5c);
                    ppplVar35 = ppplVar32;
                    ppplVar34 = ppplVar32;
                  }
                }
                else {
                  ppplVar35 = (long ***)0x5;
                  ppplVar34 = ppplVar35;
                }
              }
              else {
                func_0x000107822d40();
                ppplVar35 = ppplVar32;
              }
              uVar37 = SUB84(param_1,0);
              iVar33 = (int)ppplVar34;
              pcVar31 = pcVar31 + 1;
              uStack_1b8 = (ulong)ppplVar35 >> 0x20 & 1;
            } while ((int)ppplVar35 != 0);
          }
          else {
            pplStack_120 = param_2;
            func_0x000107822d40();
            uStack_1b8 = (ulong)ppplVar32 >> 0x20 & 1;
            iVar33 = 7;
            ppplVar35 = ppplVar32;
          }
          iVar28 = (int)ppplVar35;
          func_0x000107817360(&plStack_b8,iVar28 == 0);
        }
        else if ((((ulong)param_3[0x33] & 1) == 0) && (param_3[0xc] != param_3[0xd])) {
          if (((*(char *)(param_2 + 0x22d) == '\x01') && (param_2[0x22b] != (long *)0x0)) &&
             (func_0x000107822fb8(), ppplVar32 != (long ***)0x0)) {
            cVar2 = *(char *)((long)ppplVar32 + 0x24);
            pcVar36 = (char *)aplStack_90[0][1];
            for (pcVar31 = (char *)*aplStack_90[0];
                (pcVar20 = pcVar36, pcVar31 != pcVar36 && (pcVar20 = pcVar31, *pcVar31 != cVar2));
                pcVar31 = pcVar31 + 1) {
            }
            if ((char *)*aplStack_90[0] != pcVar20 && pcVar36 != pcVar20) {
              pplStack_d0 = (long **)CONCAT71(pplStack_d0._1_7_,cVar2);
              func_0x000107779fd0(&pplStack_120,&pplStack_d0,1);
              plVar10 = param_2[1];
              func_0x0001078173dc();
              if (((ulong)plVar10 & 1) == 0) {
                pcVar36 = (char *)aplStack_90[0][1];
                for (pcVar31 = (char *)*aplStack_90[0]; pcVar31 != pcVar36; pcVar31 = pcVar31 + 1) {
                  pplStack_d0 = (long **)CONCAT71(pplStack_d0._1_7_,*pcVar31);
                  if (*pcVar31 != cVar2) {
                    func_0x0001075357bc(&pplStack_120,&pplStack_d0);
                  }
                }
              }
              param_1 = pplStack_120;
              pplStack_c8 = pplStack_118;
              pplStack_d0 = pplStack_120;
              pplStack_c0 = pplStack_110;
              pplStack_120 = (long **)0x0;
              pplStack_118 = (long **)0x0;
              pplStack_110 = (long **)0x0;
              func_0x0001075358b8(auStack_78,aplStack_90,&pplStack_d0);
              func_0x000107543088(aplStack_90,auStack_78);
              func_0x0001073bcf58(auStack_78);
              func_0x0001074048e8(&pplStack_d0);
              ppplVar32 = &pplStack_120;
              func_0x0001074048e8();
            }
          }
          uVar6 = 0;
          bVar7 = *(char *)((long)param_4 + 0x6d6) == '\x01';
          if ((bVar7) && ((*(byte *)((long)param_4 + 0x6d1) & 1) == 0)) {
            uVar6 = *(undefined1 *)(param_3 + 0xc6);
          }
          pplStack_d0 = (long **)(CONCAT71(pplStack_d0._1_7_,uVar6) & 0xffffffffffffff01);
          pplStack_118 = aplStack_90;
          pplStack_108 = &plStack_98;
          pplStack_f0 = (long **)&uStack_9c;
          ppplStack_e0 = &pplStack_d0;
          pplStack_120 = param_3;
          pplStack_110 = param_4;
          pplStack_100 = param_2;
          pplStack_f8 = pplVar9;
          pplStack_e8 = pplVar12;
          plStack_d8 = plVar27;
          func_0x000107822fe8();
          if ((bVar7) && ((*(byte *)(param_3 + 0xae) >> 1 & 1) != 0)) {
            uStack_1b8 = 0;
            pcVar31 = (char *)plVar27[0x14d];
            pcVar36 = (char *)plVar27[0x14e];
            ppplVar32 = (long ***)0x7;
            ppplVar35 = (long ***)0x7;
            do {
              iVar33 = (int)ppplVar35;
              if (pcVar31 == pcVar36) goto LAB_107816868;
              bVar7 = *pcVar31 == '\x01';
              if (bVar7) {
                func_0x000107822fe8(plVar27);
                if (bVar7) {
                  ppplVar32 = (long ***)0x5;
                  ppplVar35 = ppplVar32;
                  if (((ulong)param_3[0x84] & 1) != 0) {
                    lVar17 = 0x428;
                    if (*(char *)(param_3 + 0xad) == '\0') {
                      lVar17 = 0x1a0;
                    }
                    ppplVar32 = &pplStack_120;
                    func_0x00010781d118(ppplVar32,param_3 + 0x5c,1,(long)param_3 + lVar17);
                    ppplVar35 = ppplVar32;
                  }
                }
                else {
                  ppplVar32 = (long ***)0x5;
                  ppplVar35 = ppplVar32;
                }
              }
              else {
                func_0x000107822d4c();
              }
              iVar33 = (int)ppplVar35;
              pcVar31 = pcVar31 + 1;
              uStack_1b8 = (ulong)ppplVar32 >> 0x20 & 1;
            } while ((int)ppplVar32 != 0);
            iVar28 = 0;
          }
          else {
            func_0x000107822d4c();
            uStack_1b8 = (ulong)ppplVar32 >> 0x20 & 1;
            iVar33 = 7;
LAB_107816868:
            iVar28 = (int)ppplVar32;
          }
          pplVar8 = &plStack_b8;
          func_0x000107817360(pplVar8,iVar28 == 0);
          if ((((iVar28 != 0) && (*(char *)(param_2 + 0x22d) == '\x01')) &&
              (param_2[0x22b] != (long *)0x0)) && (func_0x000107822fb8(), pplVar8 != (long **)0x0))
          {
            pplVar9 = param_2 + 0x23d;
            FUN_1078204d4(pplVar9,pplVar13);
            plVar10 = *(long **)((long)pplVar8 + 0x1c);
            param_1 = *(long ***)((long)pplVar8 + 0x14);
            uVar38 = *(undefined8 *)((long)pplVar8 + 0x1e);
            *(undefined8 *)((long)pplVar9 + 0x12) = *(undefined8 *)((long)pplVar8 + 0x26);
            *(undefined8 *)((long)pplVar9 + 10) = uVar38;
            pplVar9[1] = plVar10;
            *pplVar9 = (long *)param_1;
          }
          uVar37 = SUB84(param_1,0);
        }
        else {
          uStack_1b8 = 1;
          iVar33 = 7;
          iVar28 = 7;
        }
        plVar10 = (long *)(ulong)(iVar33 == 0);
      }
      bVar7 = *(char *)(param_3 + 0xc6) == '\x01';
      if (bVar7) {
        if (((iVar28 != 0) || ((*(byte *)((long)param_4 + 0x6d6) & 1) == 0)) ||
           (func_0x000107822818(aplStack_90[0]), bVar7)) {
          plStack_98 = (long *)0x0;
        }
        lVar17 = 0x418;
        if (((ulong)param_3[6] & 4) != 0) {
          lVar17 = 0x728;
        }
        pplVar8 = *(long ***)((long)plVar27 + lVar17 + 0x80);
        func_0x00010781733c(pplVar8,*(undefined8 *)((long)plVar27 + lVar17 + 0x88),param_3[0xc5]);
        func_0x00010740b904(param_4 + 0xd8,pplVar8);
        plStack_b8 = (long *)CONCAT44(plStack_b8._4_4_,uVar37);
        pplStack_118 = &plStack_98;
        pplStack_100 = &plStack_b8;
        pplStack_108 = pplVar8;
        pplStack_f8 = pplVar12;
        pplStack_f0 = param_3;
        if (((uint)plVar10 & (uint)*(byte *)(param_3 + 0xad)) == 1) {
          ppplVar32 = &pplStack_120;
          pplStack_120 = param_2;
          pplStack_110 = param_4;
          func_0x0001078173fc(ppplVar32,param_3 + 0x85);
          bVar7 = (int)ppplVar32 == 0;
        }
        else {
          ppplVar32 = &pplStack_120;
          pplStack_120 = param_2;
          pplStack_110 = param_4;
          func_0x0001078173fc(ppplVar32,param_3 + 0x34);
          bVar7 = false;
        }
        uStack_1b8 = (ulong)((uint)uStack_1b8 & (uint)((ulong)ppplVar32 >> 0x20) & 1);
      }
      else {
        bVar7 = false;
        ppplVar32 = (long ***)0x7;
      }
      iVar33 = (int)ppplVar32;
      if (((ulong)param_3[6] & 1) == 0) {
        bVar14 = 1;
      }
      else {
        bVar14 = *(byte *)((*param_4)[5] + 0x680);
      }
      uVar6 = ((ulong)param_3[6] & 6) == 0;
      uVar5 = false;
      if ((bool)uVar6) {
LAB_1078169f8:
        iVar29 = iVar28;
        if ((bVar14 & 1) == 0) {
          uVar5 = iVar28 < 0;
          if (iVar28 != 0) {
            uVar6 = 0;
            iVar33 = iVar28;
            goto joined_r0x000107816a88;
          }
        }
        else {
LAB_107816a84:
          if (iVar29 != 0) goto joined_r0x000107816a88;
        }
LAB_107816a08:
        uVar6 = *(char *)((long)param_4 + 0x6d3) == '\0';
        uVar5 = 0;
        func_0x000107822d34(*(undefined1 *)((*param_4)[5] + 0x580));
        pplStack_110 = (long **)CONCAT71(pplStack_110._1_7_,*(undefined1 *)((long)param_3 + 0x5ca));
        if ((uint)plVar10 == 0) {
LAB_107816a90:
          uVar30 = *(uint *)(param_3 + 0xcb);
          func_0x000107822548(&PTR_DAT_1131ad000);
          func_0x0001078228bc();
          func_0x000107822a38(auStack_160);
          func_0x000107823104();
          func_0x000107821e3c(0x1288);
          puVar11 = auStack_160;
        }
        else {
          uVar5 = (int)(*(byte *)(param_3 + 0x84) - 1) < 0;
          uVar6 = *(byte *)(param_3 + 0x84) == 1;
          if (!(bool)uVar6) goto LAB_107816a90;
          uVar30 = *(uint *)pplVar13;
          func_0x000107822548(&PTR_DAT_1131ad000);
          func_0x0001078228bc();
          func_0x000107822a38(auStack_140);
          func_0x000107823104();
          func_0x000107821e3c(0x1288);
          puVar11 = auStack_140;
        }
        plVar10 = (long *)(ulong)uVar30;
        func_0x0001072a6b60(puVar11);
        func_0x000107822d08();
        func_0x000107822d58();
      }
      else {
        iVar29 = iVar33;
        if (((bVar14 | *(byte *)((*param_4)[5] + 0x130)) & 1) == 0) {
          uVar5 = iVar28 < 0;
          uVar6 = iVar28 == 0;
          if (!(bool)uVar6) {
            iVar29 = iVar28;
            iVar33 = iVar28;
          }
          goto LAB_107816a84;
        }
        if ((*(byte *)((*param_4)[5] + 0x130) & 1) != 0) goto LAB_1078169f8;
        uVar5 = iVar28 < 0;
        uVar6 = iVar28 == 0;
        if (!(bool)uVar6) {
          iVar29 = iVar28;
        }
        if (iVar29 == 0) goto LAB_107816a08;
      }
joined_r0x000107816a88:
      if (iVar33 == 0) {
        uVar6 = *(char *)((long)param_4 + 0x6d2) == '\0';
        uVar5 = 0;
        func_0x000107822d34(*(undefined1 *)((*param_4)[5] + 0x40));
        pplStack_110 = (long **)CONCAT71(pplStack_110._1_7_,*(undefined1 *)((long)param_3 + 0x5c9));
        if (bVar7) {
          uVar5 = (int)(*(byte *)(param_3 + 0xad) - 1) < 0;
          uVar6 = *(byte *)(param_3 + 0xad) == 1;
          if (!(bool)uVar6) goto LAB_107816b48;
          uVar30 = *(uint *)pplVar13;
          func_0x000107822548(&PTR_DAT_1131ad000);
          func_0x0001078228bc();
          func_0x000107822a38(auStack_180);
          func_0x000107823104();
          func_0x000107821e3c(0x12a0);
          puVar11 = auStack_180;
        }
        else {
LAB_107816b48:
          uVar30 = *(uint *)(param_3 + 0xcb);
          func_0x000107822548(&PTR_DAT_1131ad000);
          func_0x0001078228bc();
          func_0x000107822a38(auStack_1a0);
          func_0x000107823104();
          func_0x000107821e3c(0x12a0);
          puVar11 = auStack_1a0;
        }
        plVar10 = (long *)(ulong)uVar30;
        func_0x0001072a6b60(puVar11);
        func_0x000107822d08();
        func_0x000107822d58();
      }
      bVar7 = false;
      if (plVar27[0x149] != 0) {
        func_0x000107822c50();
        bVar7 = !(bool)uVar6;
      }
      lVar17 = plVar27[0x14a];
      if (lVar17 == 0) {
        bVar1 = false;
      }
      else {
        uVar5 = *(long *)(lVar17 + 0x30) - *(long *)(lVar17 + 0x38) < 0;
        uVar6 = *(long *)(lVar17 + 0x30) == *(long *)(lVar17 + 0x38);
        bVar1 = !(bool)uVar6;
      }
      if (bVar7) {
        uVar5 = (int)(*(byte *)(param_3 + 0x5b) - 1) < 0;
        uVar6 = 0;
        if (*(byte *)(param_3 + 0x5b) == 1) {
          uVar5 = (long)param_2[0x254] - (long)param_2[0x255] < 0;
          uVar6 = param_2[0x254] == param_2[0x255];
          if (!(bool)uVar6) {
            pplStack_120 = param_3 + 0x34;
            func_0x000107822f54();
            func_0x000107817500();
          }
        }
      }
      if (bVar1) {
        uVar5 = (int)(*(byte *)(param_3 + 0x33) - 1) < 0;
        uVar6 = 0;
        if (*(byte *)(param_3 + 0x33) == 1) {
          uVar5 = (long)param_2[0x251] - (long)param_2[0x252] < 0;
          uVar6 = param_2[0x251] == param_2[0x252];
          if (!(bool)uVar6) {
            pplStack_120 = param_3 + 0xc;
            func_0x000107822f54();
            func_0x000107817500();
          }
        }
      }
      pplVar12 = param_2 + 0x233;
      func_0x000107820840(pplVar12,*(uint *)pplVar13);
      if (pplVar12 != (long **)0x0) {
        plVar21 = param_2[0x234];
        plVar15 = *pplVar12;
        plVar18 = pplVar12[1];
        uVar22 = (long)plVar21 - 1;
        if (((ulong)plVar21 & uVar22) == 0) {
          plVar18 = (long *)(uVar22 & (ulong)plVar18);
        }
        else if (plVar21 <= plVar18) {
          uVar4 = 0;
          if (plVar21 != (long *)0x0) {
            uVar4 = (ulong)plVar18 / (ulong)plVar21;
          }
          plVar18 = (long *)((long)plVar18 - uVar4 * (long)plVar21);
        }
        plVar23 = param_2[0x233];
        pplVar8 = (long **)plVar23[(long)plVar18];
        do {
          pplVar9 = pplVar8;
          pplVar8 = (long **)*pplVar9;
        } while ((long **)*pplVar9 != pplVar12);
        pplStack_118 = param_2 + 0x235;
        uVar5 = (long)pplVar9 - (long)pplStack_118 < 0;
        uVar6 = true;
        if (pplVar9 == pplStack_118) {
LAB_107816ce0:
          if (plVar15 == (long *)0x0) {
LAB_107816d14:
            plVar23[(long)plVar18] = 0;
            plVar15 = *pplVar12;
            goto LAB_107816d1c;
          }
          plVar24 = (long *)plVar15[1];
          if (((ulong)plVar21 & uVar22) == 0) {
            plVar25 = (long *)((ulong)plVar24 & uVar22);
          }
          else {
            plVar25 = plVar24;
            if (plVar21 <= plVar24) {
              uVar4 = 0;
              if (plVar21 != (long *)0x0) {
                uVar4 = (ulong)plVar24 / (ulong)plVar21;
              }
              plVar25 = (long *)((long)plVar24 - uVar4 * (long)plVar21);
            }
          }
          uVar5 = (long)plVar25 - (long)plVar18 < 0;
          uVar6 = plVar25 == plVar18;
          if (!(bool)uVar6) goto LAB_107816d14;
LAB_107816d24:
          if (((ulong)plVar21 & uVar22) == 0) {
            plVar24 = (long *)((ulong)plVar24 & uVar22);
          }
          else if (plVar21 <= plVar24) {
            uVar22 = 0;
            if (plVar21 != (long *)0x0) {
              uVar22 = (ulong)plVar24 / (ulong)plVar21;
            }
            plVar24 = (long *)((long)plVar24 - uVar22 * (long)plVar21);
          }
          uVar5 = (long)plVar24 - (long)plVar18 < 0;
          uVar6 = plVar24 == plVar18;
          if (!(bool)uVar6) {
            plVar23[(long)plVar24] = (long)pplVar9;
            plVar15 = *pplVar12;
          }
        }
        else {
          plVar24 = pplVar9[1];
          if (((ulong)plVar21 & uVar22) == 0) {
            plVar24 = (long *)((ulong)plVar24 & uVar22);
          }
          else if (plVar21 <= plVar24) {
            uVar4 = 0;
            if (plVar21 != (long *)0x0) {
              uVar4 = (ulong)plVar24 / (ulong)plVar21;
            }
            plVar24 = (long *)((long)plVar24 - uVar4 * (long)plVar21);
          }
          uVar5 = (long)plVar24 - (long)plVar18 < 0;
          uVar6 = plVar24 == plVar18;
          if (!(bool)uVar6) goto LAB_107816ce0;
LAB_107816d1c:
          if (plVar15 != (long *)0x0) {
            plVar24 = (long *)plVar15[1];
            goto LAB_107816d24;
          }
        }
        *pplVar9 = plVar15;
        *pplVar12 = (long *)0x0;
        param_2[0x236] = (long *)((long)param_2[0x236] + -1);
        pplStack_110 = (long **)0x1;
        pplStack_120 = pplVar12;
        func_0x000107822d60();
      }
      if (iVar29 == 0) {
        bVar14 = 1;
        if (iVar33 == 0) goto LAB_107816db0;
LAB_107816d98:
        uVar5 = iVar33 + -6 < 0;
        uVar6 = iVar33 == 6;
        uVar16 = 0;
        if (!(bool)uVar6) {
          uVar16 = *(undefined1 *)((long)param_4 + 0x6d5);
        }
      }
      else {
        uVar5 = iVar29 + -6 < 0;
        uVar6 = iVar29 == 6;
        bVar14 = !(bool)uVar6 & *(byte *)((long)param_4 + 0x6d4);
        if (iVar33 != 0) goto LAB_107816d98;
LAB_107816db0:
        uVar16 = 1;
      }
      if (((uStack_1b8 & 1) == 0) && ((*(ushort *)((long)plVar27 + 0x74) >> 7 & 1) == 0)) {
        uVar19 = *(undefined1 *)((long)param_4 + 0x6d7);
      }
      else {
        uVar19 = 1;
      }
      auStack_7c = (undefined1  [2])CONCAT11(uVar16,bVar14);
      _auStack_7c = CONCAT12(uVar19,auStack_7c) & 0x1ffff;
      uVar30 = *(uint *)pplVar13;
      plVar15 = (long *)(ulong)uVar30;
      plVar27 = param_2[0x234];
      if (plVar27 != (long *)0x0) {
        uVar22 = (long)plVar27 - 1;
        uVar26 = (uint)plVar27;
        if (((ulong)plVar27 & uVar22) == 0) {
          plVar10 = (long *)(ulong)(uVar26 - 1 & uVar30);
          uVar6 = true;
          uVar5 = false;
        }
        else {
          uVar5 = (long)plVar27 - (long)plVar15 < 0;
          uVar6 = plVar27 == plVar15;
          plVar10 = plVar15;
          if (plVar27 <= plVar15) {
            uVar3 = 0;
            if (uVar26 != 0) {
              uVar3 = uVar30 / uVar26;
            }
            plVar10 = (long *)(ulong)(uVar30 - uVar3 * uVar26);
          }
        }
        plVar18 = (long *)param_2[0x233][(long)plVar10];
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              plVar18 = (long *)*plVar18;
              if (plVar18 == (long *)0x0) goto LAB_107816e7c;
              plVar21 = (long *)plVar18[1];
              if (plVar21 != plVar15) break;
              uVar5 = (int)(*(uint *)(plVar18 + 2) - uVar30) < 0;
              uVar6 = *(uint *)(plVar18 + 2) == uVar30;
              if ((bool)uVar6) goto LAB_107816f90;
            }
            if (((ulong)plVar27 & uVar22) == 0) {
              plVar21 = (long *)((ulong)plVar21 & uVar22);
            }
            else if (plVar27 <= plVar21) {
              uVar4 = 0;
              if (plVar27 != (long *)0x0) {
                uVar4 = (ulong)plVar21 / (ulong)plVar27;
              }
              plVar21 = (long *)((long)plVar21 - uVar4 * (long)plVar27);
            }
            uVar5 = (long)plVar21 - (long)plVar10 < 0;
            uVar6 = plVar21 == plVar10;
          } while ((bool)uVar6);
        }
      }
LAB_107816e7c:
      func_0x000107822388();
      pplVar8 = param_2 + 0x235;
      pplVar9 = pplVar12;
      pplStack_120 = pplVar12;
      pplStack_118 = pplVar8;
      func_0x000107823098();
      *(undefined1 (*) [2])((long)pplVar9 + 0x14) = auStack_7c;
      *(undefined1 *)((long)pplVar9 + 0x16) = uStack_7a;
      func_0x000107822290(param_2[0x236]);
      if (plVar27 == (long *)0x0) {
LAB_107816ec0:
        func_0x000107821dc0((long)plVar27 << 1);
        pplVar9 = param_2 + 0x233;
        func_0x00010781fa30();
        plVar27 = param_2[0x234];
        if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
          uVar6 = 1;
          bVar7 = false;
          plVar10 = (long *)(ulong)((int)plVar27 - 1U & uVar30);
        }
        else {
          bVar7 = (long)plVar27 - (long)plVar15 < 0;
          uVar6 = plVar27 == plVar15;
          plVar10 = plVar15;
          if (plVar27 <= plVar15) {
            uVar22 = 0;
            if (plVar27 != (long *)0x0) {
              uVar22 = (ulong)plVar15 / (ulong)plVar27;
            }
            plVar10 = (long *)((long)plVar15 - uVar22 * (long)plVar27);
          }
        }
      }
      else {
        func_0x000107822234();
        bVar7 = false;
        if ((bool)uVar5) goto LAB_107816ec0;
      }
      uVar5 = bVar7;
      plVar15 = param_2[0x233];
      if (plVar15[(long)plVar10] == 0) {
        *pplVar12 = *pplVar8;
        *pplVar8 = (long *)pplVar12;
        plVar15[(long)plVar10] = (long)pplVar8;
        if (*pplVar12 != (long *)0x0) {
          plVar18 = (long *)(*pplVar12)[1];
          if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
            plVar18 = (long *)((ulong)plVar18 & (long)plVar27 - 1U);
            uVar6 = true;
            uVar5 = false;
          }
          else {
            uVar5 = (long)plVar18 - (long)plVar27 < 0;
            uVar6 = plVar18 == plVar27;
            if (plVar27 <= plVar18) {
              uVar22 = 0;
              if (plVar27 != (long *)0x0) {
                uVar22 = (ulong)plVar18 / (ulong)plVar27;
              }
              plVar18 = (long *)((long)plVar18 - uVar22 * (long)plVar27);
            }
          }
          plVar15[(long)plVar18] = (long)pplVar12;
        }
      }
      else {
        func_0x000107822b04();
      }
      pplVar12 = pplVar9;
      pplStack_120 = (long **)0x0;
      param_2[0x236] = (long *)((long)param_2[0x236] + 1);
      func_0x000107822d60();
      plVar15 = (long *)(ulong)*(uint *)pplVar13;
LAB_107816f90:
      uVar16 = *(undefined1 *)((long)param_4 + 0x6d7);
      plVar27 = param_2[0x248];
      if (plVar27 != (long *)0x0) {
        func_0x000107822824();
        uVar30 = (uint)plVar27;
        uVar26 = (uint)plVar15;
        if ((bool)uVar6) {
          plVar10 = (long *)((ulong)(uVar30 - 1) & (ulong)plVar15);
          uVar6 = true;
        }
        else {
          uVar5 = (long)plVar27 - (long)plVar15 < 0;
          uVar6 = plVar27 == plVar15;
          plVar10 = plVar15;
          if (plVar27 <= plVar15) {
            uVar3 = 0;
            if (uVar30 != 0) {
              uVar3 = uVar26 / uVar30;
            }
            plVar10 = (long *)(ulong)(uVar26 - uVar3 * uVar30);
          }
        }
        plVar18 = (long *)param_2[0x247][(long)plVar10];
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              plVar18 = (long *)*plVar18;
              if (plVar18 == (long *)0x0) goto LAB_107817024;
              plVar21 = (long *)plVar18[1];
              if (plVar21 != plVar15) break;
              uVar5 = (int)(*(uint *)(plVar18 + 2) - uVar26) < 0;
              uVar6 = false;
              if (*(uint *)(plVar18 + 2) == uVar26) goto LAB_107817108;
            }
            if (((ulong)plVar27 & extraout_x8_00) == 0) {
              plVar21 = (long *)((ulong)plVar21 & extraout_x8_00);
            }
            else if (plVar27 <= plVar21) {
              uVar22 = 0;
              if (plVar27 != (long *)0x0) {
                uVar22 = (ulong)plVar21 / (ulong)plVar27;
              }
              plVar21 = (long *)((long)plVar21 - uVar22 * (long)plVar27);
            }
            uVar5 = (long)plVar21 - (long)plVar10 < 0;
            uVar6 = plVar21 == plVar10;
          } while ((bool)uVar6);
        }
      }
LAB_107817024:
      func_0x000107822388();
      pplVar13 = param_2 + 0x249;
      pplVar8 = pplVar12;
      pplStack_120 = pplVar12;
      pplStack_118 = pplVar13;
      func_0x000107823098();
      *(undefined1 *)((long)pplVar8 + 0x14) = uVar16;
      func_0x000107822290(param_2[0x24a]);
      if ((plVar27 == (long *)0x0) || (func_0x000107822234(), (bool)uVar5)) {
        func_0x000107822180();
        uVar6 = plVar27 == (long *)0x3;
        func_0x000107821dc0();
        FUN_10781fcb8(param_2 + 0x247);
        plVar27 = param_2[0x248];
        func_0x000107822824();
        if ((bool)uVar6) {
          uVar6 = 1;
          plVar10 = (long *)((ulong)((int)plVar27 - 1) & (ulong)plVar15);
        }
        else {
          uVar6 = plVar27 == plVar15;
          plVar10 = plVar15;
          if (plVar27 <= plVar15) {
            uVar22 = 0;
            if (plVar27 != (long *)0x0) {
              uVar22 = (ulong)plVar15 / (ulong)plVar27;
            }
            plVar10 = (long *)((long)plVar15 - uVar22 * (long)plVar27);
          }
        }
      }
      plVar15 = param_2[0x247];
      if (plVar15[(long)plVar10] == 0) {
        *pplVar12 = *pplVar13;
        *pplVar13 = (long *)pplVar12;
        plVar15[(long)plVar10] = (long)pplVar13;
        if (*pplVar12 != (long *)0x0) {
          func_0x000107822af4();
          lVar17 = extraout_x8_01;
          if ((bool)uVar6) {
            plVar10 = (long *)((ulong)extraout_x9 & extraout_x10);
          }
          else {
            plVar10 = extraout_x9;
            if (plVar27 <= extraout_x9) {
              func_0x00010782306c();
              lVar17 = extraout_x8_02;
              plVar10 = extraout_x9_00;
            }
          }
          *(long ***)(lVar17 + (long)plVar10 * 8) = pplVar12;
        }
      }
      else {
        func_0x000107822b14();
      }
      pplStack_120 = (long **)0x0;
      param_2[0x24a] = (long *)((long)param_2[0x24a] + 1);
      func_0x000107820904(&pplStack_120);
LAB_107817108:
      func_0x000107822958((*param_2)[10]);
      (*extraout_x8_03)();
      func_0x0001073bcebc(aplStack_90);
      goto LAB_10781713c;
    }
  }
  _auStack_7c = CONCAT12(uRam0000000113726382,uRam0000000113726380);
LAB_10781713c:
  return (ulong)_auStack_7c;
}



/* Entry: 107818648; end: 1078187eb;  */

void FUN_107818648(long *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  ulong extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar8;
  ulong extraout_x10;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined8 uVar12;
  
  uVar11 = (ulong)param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    func_0x000107822824();
    uVar9 = (uint)uVar10;
    if ((bool)in_ZR) {
      unaff_x25 = (ulong)(uVar9 - 1 & param_2);
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar10 - uVar11) < 0;
      in_ZR = uVar10 == uVar11;
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = param_2 / uVar9;
        }
        unaff_x25 = (ulong)(param_2 - uVar1 * uVar9);
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_107818700;
          uVar8 = plVar7[1];
          if (uVar8 != uVar11) break;
          in_NG = (int)(*(uint *)(plVar7 + 2) - param_2) < 0;
          in_ZR = false;
          if (*(uint *)(plVar7 + 2) == param_2) {
            return;
          }
        }
        if ((uVar10 & extraout_x8) == 0) {
          uVar8 = uVar8 & extraout_x8;
        }
        else if (uVar10 <= uVar8) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar2 * uVar10;
        }
        in_NG = (long)(uVar8 - unaff_x25) < 0;
        in_ZR = uVar8 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_107818700:
  plVar7 = param_1 + 2;
  plVar4 = (long *)0x28;
  __Znwm();
  plVar5 = plVar4;
  func_0x0001078229a0();
  *plVar5 = 0;
  plVar5[1] = uVar11;
  *(uint *)(plVar5 + 2) = param_2;
  uVar12 = *param_3;
  *(undefined8 *)((long)plVar5 + 0x1c) = param_3[1];
  *(undefined8 *)((long)plVar5 + 0x14) = uVar12;
  func_0x000107821fc4();
  if ((uVar10 == 0) || (func_0x000107822234(), (bool)in_NG)) {
    func_0x000107822180();
    uVar3 = uVar10 == 3;
    func_0x000107821dc0();
    func_0x00010781fb60(param_1);
    uVar10 = param_1[1];
    func_0x000107822824();
    if ((bool)uVar3) {
      in_ZR = 1;
      unaff_x25 = (ulong)((int)uVar10 - 1U & param_2);
    }
    else {
      in_ZR = uVar10 == uVar11;
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar8 * uVar10;
      }
    }
  }
  lVar6 = *param_1;
  if (*(long *)(lVar6 + unaff_x25 * 8) == 0) {
    *plVar4 = *plVar7;
    *plVar7 = (long)plVar4;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar7;
    if (*plVar4 != 0) {
      func_0x000107822af4();
      lVar6 = extraout_x8_00;
      if ((bool)in_ZR) {
        uVar11 = extraout_x9 & extraout_x10;
      }
      else {
        uVar11 = extraout_x9;
        if (uVar10 <= extraout_x9) {
          func_0x00010782306c();
          lVar6 = extraout_x8_01;
          uVar11 = extraout_x9_00;
        }
      }
      *(long **)(lVar6 + uVar11 * 8) = plVar4;
    }
  }
  else {
    func_0x000107822538();
  }
  func_0x000107821f1c();
  func_0x0001078213f8();
  return;
}



/* Entry: 107819580; end: 1078195fb;  */

void FUN_107819580(long param_1)

{
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x21;
  long unaff_x22;
  long unaff_x25;
  long lVar1;
  ulong uVar2;
  
  func_0x0001078227a0();
  func_0x00010782259c();
  while (func_0x000107823058(), !(bool)in_CY) {
    lVar1 = extraout_x8 + unaff_x22 * unaff_x25;
    if (((*(byte *)(lVar1 + 0x78) & 1) == 0) &&
       ((((*(byte *)(lVar1 + 0x8d) & 1) != 0 || ((*(byte *)(unaff_x21 + 0xa60) & 1) == 0)) &&
        (func_0x000107822f34(), param_1 != 0)))) {
      uVar2 = 0;
      while( true ) {
        in_CY = 1;
        if ((ulong)(*(long *)(lVar1 + 0x68) - *(long *)(lVar1 + 0x60) >> 2) <= uVar2) break;
        func_0x000107822920();
        uVar2 = uVar2 + 1;
      }
    }
    else {
      func_0x000107822710();
    }
    unaff_x22 = unaff_x22 + 1;
  }
  return;
}



/* Entry: 10781a1c0; end: 10781a42f;  */

uint FUN_10781a1c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  uint uVar3;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uVar1 = *(long *)(param_2 + 0x168) == *(long *)(param_2 + 0x170);
  if (!(bool)uVar1) {
    func_0x00010781e194(&uStack_48,param_2 + 0x130);
  }
  func_0x000107822354();
  if (!(bool)uVar1) {
    func_0x00010781e194(&uStack_60,param_2 + 0x448);
  }
  func_0x000107822364();
  if (!(bool)uVar1) {
    func_0x00010781e194(&uStack_78,param_2 + 0x758);
  }
  if ((*(long *)(param_2 + 0xa38) != 0) && (func_0x0001078225cc(), !(bool)uVar1)) {
    func_0x000107822918(&uStack_90);
  }
  if ((*(long *)(param_2 + 0xa48) != 0) && (func_0x0001078225cc(), !(bool)uVar1)) {
    func_0x000107822918(&uStack_a8);
  }
  if ((*(long *)(param_2 + 0xa40) != 0) && (func_0x0001078225cc(), !(bool)uVar1)) {
    func_0x000107822918(&uStack_c0);
  }
  if ((*(long *)(param_2 + 0xa50) != 0) && (func_0x0001078225cc(), !(bool)uVar1)) {
    func_0x000107822918(&uStack_d8);
  }
  func_0x000107819704(param_1,param_2,param_3,param_4);
  uVar1 = *(long *)(param_2 + 0x168) == *(long *)(param_2 + 0x170);
  if ((bool)uVar1) {
LAB_10781a2ec:
    func_0x000107822354();
    if (!(bool)uVar1) {
      uVar2 = uStack_60;
      func_0x00010781a430(uStack_60,uStack_58,*(undefined8 *)(param_2 + 0x448),
                          *(undefined8 *)(param_2 + 0x450));
      if ((int)uVar2 == 0) goto LAB_10781a398;
    }
    func_0x000107822364();
    if (!(bool)uVar1) {
      uVar2 = uStack_78;
      func_0x00010781a430(uStack_78,uStack_70,*(undefined8 *)(param_2 + 0x758),
                          *(undefined8 *)(param_2 + 0x760));
      if ((int)uVar2 == 0) goto LAB_10781a398;
    }
    if ((*(long *)(param_2 + 0xa38) != 0) && (func_0x0001078225cc(), !(bool)uVar1)) {
      uVar2 = uStack_90;
      func_0x0001078228fc(uStack_90,uStack_88);
      if ((int)uVar2 == 0) goto LAB_10781a398;
    }
    if ((*(long *)(param_2 + 0xa48) != 0) && (func_0x0001078225cc(), !(bool)uVar1)) {
      uVar2 = uStack_a8;
      func_0x0001078228fc(uStack_a8,uStack_a0);
      if ((int)uVar2 == 0) goto LAB_10781a398;
    }
    if ((*(long *)(param_2 + 0xa40) != 0) && (func_0x0001078225cc(), !(bool)uVar1)) {
      uVar2 = uStack_c0;
      func_0x0001078228fc(uStack_c0,uStack_b8);
      if ((int)uVar2 == 0) goto LAB_10781a398;
    }
    if ((*(long *)(param_2 + 0xa50) == 0) || (func_0x0001078225cc(), (bool)uVar1)) {
      uVar3 = 0;
    }
    else {
      uVar2 = uStack_d8;
      func_0x0001078228fc(uStack_d8,uStack_d0);
      uVar3 = (uint)uVar2 ^ 1;
    }
  }
  else {
    uVar2 = uStack_48;
    func_0x00010781a430(uStack_48,uStack_40,*(undefined8 *)(param_2 + 0x130),
                        *(undefined8 *)(param_2 + 0x138));
    if ((int)uVar2 != 0) goto LAB_10781a2ec;
LAB_10781a398:
    uVar3 = 1;
  }
  func_0x0001074087f0(&uStack_d8);
  func_0x0001074087f0(&uStack_c0);
  func_0x0001074087f0(&uStack_a8);
  func_0x0001074087f0(&uStack_90);
  func_0x00010745c290(&uStack_78);
  func_0x00010745c290(&uStack_60);
  func_0x00010745c290(&uStack_48);
  return uVar3;
}



/* Entry: 10781a6b4; end: 10781a883;  */

void FUN_10781a6b4(long param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *(undefined8 *)(param_1 + 0x1138) = *(undefined8 *)(param_1 + 0x1140);
  plVar2 = (long *)(param_1 + 0x11a8);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    uStack_b0 = 0x3f800000;
    if ((*(byte *)((long)plVar2 + 0x16) & *(byte *)((long)plVar2 + 0x15) & 1) == 0) {
      uStack_b0 = 0;
    }
    uStack_ac = CONCAT31(uStack_ac._1_3_,*(byte *)((long)plVar2 + 0x15));
    uStack_a8 = 0x3f800000;
    if ((*(byte *)((long)plVar2 + 0x16) & *(byte *)((long)plVar2 + 0x14) & 1) == 0) {
      uStack_a8 = 0;
    }
    uStack_a4 = CONCAT31(uStack_a4._1_3_,*(byte *)((long)plVar2 + 0x14));
    FUN_107818648(param_1 + 0x11c0,*(undefined4 *)(plVar2 + 2),&uStack_b0);
  }
  if ((*(char *)(param_1 + 0x1168) == '\x01') && (*(long *)(param_1 + 0x1158) != 0)) {
    func_0x000107822d10();
    func_0x00010781c100(param_1 + 0x12f8);
    func_0x0001077f7230(&uStack_b0,param_1 + 0x40,*(long *)(param_1 + 0x1158) + 0x40);
    lVar1 = CONCAT44(uStack_a4,uStack_a8);
    for (lVar3 = CONCAT44(uStack_ac,uStack_b0); lVar4 = lStack_98, lVar3 != lVar1;
        lVar3 = lVar3 + 0x18) {
      uStack_58 = *(undefined8 *)(lVar3 + 0x10);
      uStack_60 = *(undefined8 *)(lVar3 + 8);
      if (*(long *)(lVar3 + 0x10) != 0) {
        do {
          func_0x000107821f0c();
        } while (extraout_w10 != 0);
      }
      func_0x00010781e398(param_1 + 0x11c0,&uStack_60);
      func_0x000107822fa4();
    }
    for (; lVar4 != lStack_90; lVar4 = lVar4 + 0x18) {
      uStack_58 = *(undefined8 *)(lVar4 + 0x10);
      uStack_60 = *(undefined8 *)(lVar4 + 8);
      if (*(long *)(lVar4 + 0x10) != 0) {
        do {
          func_0x000107821f0c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010781e398(param_1 + 0x12f8,&uStack_60);
      func_0x000107822fa4();
    }
    func_0x0001077f7f40(&uStack_b0);
  }
  else {
    func_0x000107822d10();
    func_0x00010781c100(param_1 + 0x12f8);
    func_0x00010781ff84(param_1 + 0x11c0,*(undefined8 *)(param_1 + 0x10f0));
    lVar3 = *(long *)(param_1 + 0x10e0);
    while (lVar3 != param_1 + 0x10e8) {
      func_0x0001078214bc(param_1 + 0x11c0,lVar3 + 0x28);
      func_0x00010002c7d4();
    }
  }
  return;
}



/* Entry: 10781b548; end: 10781b62f;  */

void FUN_10781b548(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 auStack_50 [16];
  
  if (*(char *)(param_4 + 2) == '\x01') {
    func_0x000107822fc4(*param_4);
  }
  iVar1 = *(int *)(*param_2 + 4);
  if (iVar1 == 2) {
    func_0x0001078223dc(auStack_50);
    func_0x00010781b6ec();
    func_0x00010781b6b8(param_1,auStack_50);
    func_0x00010781f634(auStack_50);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        func_0x0001078223dc(param_1);
        func_0x00010782302c();
        func_0x0001078216a4();
        unaff_x19[1] = unaff_x21;
        *unaff_x19 = unaff_x22;
        func_0x000107822064();
      }
      else {
        func_0x00010782302c(param_1,param_3);
        func_0x000107821c58();
        unaff_x19[1] = unaff_x21;
        *unaff_x19 = unaff_x22;
        func_0x000107822064();
      }
      return;
    }
    func_0x0001078223dc(auStack_50);
    func_0x00010781b690();
    func_0x00010781b65c(param_1,auStack_50);
    func_0x00010781f610(auStack_50);
  }
  return;
}



/* Entry: 10781ba3c; end: 10781ba5b;  */

void FUN_10781ba3c(void)

{
  return;
}



/* Entry: 10781bb4c; end: 10781bb57;  */

undefined ** FUN_10781bb4c(void)

{
  return &PTR_DAT_1109e01b0;
}



/* Entry: 10781bc60; end: 10781bc7f;  */

void FUN_10781bc60(undefined8 *param_1)

{
  func_0x0001078228c4();
  *param_1 = &PTR_DAT_1109e0220;
  return;
}



/* Entry: 10781bda0; end: 10781bdc7;  */

void FUN_10781bda0(undefined8 param_1)

{
  func_0x000107822b3c();
  func_0x0001078226b0(param_1,&PTR_DAT_1109e0370);
  func_0x000107822150();
  return;
}



/* Entry: 10781bf90; end: 10781c023;  */

long FUN_10781bf90(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010781bfc0(param_1);
    func_0x000107822cd4();
  }
  return param_1;
}



/* Entry: 10781c4d8; end: 10781c7bf;  */

void FUN_10781c4d8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long *param_7)

{
  char cVar1;
  char cVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  long *unaff_x19;
  long unaff_x21;
  long lVar6;
  short sVar7;
  uint uVar8;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_388 [808];
  double dVar9;
  
  lVar6 = param_4;
  func_0x000107822830();
  *param_2 = param_3;
  param_2[1] = lVar6;
  param_2[2] = param_5;
  uVar8 = NEON_ucvtf((uint)*(byte *)(lVar6 + 4));
  dVar9 = (double)(ulong)uVar8;
  func_0x000107822e74();
  *(float *)(unaff_x19 + 3) = (float)(8192.0 / (dVar9 * 512.0));
  lVar6 = *(long *)(param_4 + 0x218);
  bVar4 = *(byte *)(lVar6 + 0xc);
  dVar9 = (double)(ulong)(uint)(float)bVar4;
  func_0x000107822e74();
  *(float *)((long)unaff_x19 + 0x1c) = (float)dVar9;
  *(float *)(unaff_x19 + 4) =
       (float)((double)(uint)(1 << (ulong)((uint)bVar4 - (uint)*(byte *)(lVar6 + 0x10) & 0x1f)) *
               512.0 * 0.0001220703125);
  lVar6 = *(long *)(unaff_x21 + 0x28);
  sVar7 = -(ushort)(*(char *)(lVar6 + 0x700) == '\0');
  uVar10 = CONCAT26(-(ushort)(*(char *)(lVar6 + 0x138) == '\0'),
                    CONCAT24(-(ushort)(*(char *)(lVar6 + 0x178) == '\0'),
                             CONCAT22(-(ushort)(*(char *)(lVar6 + 0x688) == '\0'),sVar7))) &
           0x1000100010001;
  *(uint *)((long)unaff_x19 + 0x24) =
       CONCAT13((char)(uVar10 >> 0x30),
                CONCAT12((char)(uVar10 >> 0x20),CONCAT11((char)(uVar10 >> 0x10),(char)sVar7))) &
       0xffffff01;
  *(undefined1 *)(unaff_x19 + 5) = *(undefined1 *)(lVar6 + 0x298);
  unaff_x19[0x68] = 0;
  unaff_x19[0x67] = 0;
  unaff_x19[0x6a] = 0;
  unaff_x19[0x69] = 0;
  unaff_x19[0xcf] = 0;
  unaff_x19[0xce] = 0;
  unaff_x19[0xcd] = 0;
  unaff_x19[0xcc] = 0;
  func_0x00010781c7c0(unaff_x19 + 0xd0);
  lVar6 = *(long *)(unaff_x21 + 0xe0);
  func_0x000107822650();
  (*extraout_x8)(param_1);
  unaff_x19[0xd6] = lVar6;
  unaff_x19[0xd7] = param_6;
  lVar6 = *(long *)(unaff_x21 + 0x410);
  func_0x000107822650();
  (*extraout_x8_00)(param_1);
  unaff_x19[0xd8] = lVar6;
  unaff_x19[0xd9] = param_6;
  lVar6 = *unaff_x19;
  pcVar3 = *(char **)(lVar6 + 0x28);
  cVar1 = pcVar3[0x4ad];
  *(char *)(unaff_x19 + 0xda) = cVar1;
  cVar2 = *pcVar3;
  *(char *)((long)unaff_x19 + 0x6d1) = cVar2;
  *(char *)((long)unaff_x19 + 0x6d2) = pcVar3[0x41];
  *(char *)((long)unaff_x19 + 0x6d3) = pcVar3[0x581];
  if (cVar1 == '\x01') {
    if (cVar2 == '\0') {
      if ((*(long *)(lVar6 + 0x480) == *(long *)(lVar6 + 0x488)) &&
         (*(long *)(lVar6 + 0x790) == *(long *)(lVar6 + 0x798))) {
        bVar5 = 1;
      }
      else {
        bVar5 = pcVar3[0x130];
      }
      bVar4 = 0;
      *(byte *)((long)unaff_x19 + 0x6d4) = bVar5 & 1;
    }
    else {
      bVar4 = 1;
      *(undefined1 *)((long)unaff_x19 + 0x6d4) = 1;
    }
  }
  else {
    bVar4 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x6d4) = 0;
    if (cVar2 != '\0') {
      if (*(long *)(lVar6 + 0x168) == *(long *)(lVar6 + 0x170)) {
        bVar4 = 1;
      }
      else {
        bVar4 = pcVar3[0x680];
      }
    }
  }
  *(byte *)((long)unaff_x19 + 0x6d5) = bVar4 & 1;
  *(bool *)((long)unaff_x19 + 0x6d6) = pcVar3[0x1b8] != '\0';
  *(byte *)((long)unaff_x19 + 0x6d7) = (byte)((ushort)*(undefined2 *)(lVar6 + 0x74) >> 10) & 1;
  lVar11 = param_7[1];
  lVar6 = *param_7;
  *(int *)(unaff_x19 + 0xdd) = (int)param_7[2];
  unaff_x19[0xdc] = lVar11;
  unaff_x19[0xdb] = lVar6;
  func_0x00010740b448(auStack_388,unaff_x19[1] + 0x10,*(undefined1 *)((long)unaff_x19 + 0x25),
                      *(undefined1 *)((long)unaff_x19 + 0x24),unaff_x19[2]);
  func_0x000107822e14(unaff_x19 + 6,auStack_388);
  func_0x000107822e14(unaff_x19 + 0x6b,unaff_x19 + 6);
  if ((*(char *)((long)unaff_x19 + 0x24) != *(char *)((long)unaff_x19 + 0x26)) ||
     (*(char *)((long)unaff_x19 + 0x25) != *(char *)((long)unaff_x19 + 0x27))) {
    func_0x00010740b2c4(auStack_388,(int)unaff_x19[3],unaff_x19 + 0x6b,
                        *(char *)((long)unaff_x19 + 0x27),*(char *)((long)unaff_x19 + 0x26),
                        unaff_x19[2]);
    func_0x000107822e60(unaff_x19 + 0x7b);
    func_0x00010740b2c4(auStack_388,(int)unaff_x19[3],unaff_x19 + 0x9b,
                        *(undefined1 *)((long)unaff_x19 + 0x27),
                        *(undefined1 *)((long)unaff_x19 + 0x26),unaff_x19[2]);
    func_0x000107822e60(unaff_x19 + 0xab);
  }
  return;
}



/* Entry: 10781cbbc; end: 10781ccb7;  */

/* WARNING: Possible PIC construction at 0x00010781cc24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cdd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781cda0) */
/* WARNING: Removing unreachable block (ram,0x00010781cdb4) */
/* WARNING: Removing unreachable block (ram,0x00010781cd74) */
/* WARNING: Removing unreachable block (ram,0x00010781cd94) */
/* WARNING: Removing unreachable block (ram,0x00010781cdc0) */
/* WARNING: Removing unreachable block (ram,0x00010781cd80) */
/* WARNING: Removing unreachable block (ram,0x00010781cd54) */
/* WARNING: Removing unreachable block (ram,0x00010781cc28) */
/* WARNING: Removing unreachable block (ram,0x00010781cca4) */
/* WARNING: Removing unreachable block (ram,0x00010781ccb4) */
/* WARNING: Removing unreachable block (ram,0x00010781cc7c) */
/* WARNING: Removing unreachable block (ram,0x00010781cdd8) */

undefined *** FUN_10781cbbc(long *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined **appuStack_128 [3];
  undefined8 *puStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  undefined ***pppuStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a0 [48];
  
  func_0x000107821e20();
  lStack_e0 = *param_1;
  lStack_d8 = param_1[1];
  *(undefined8 *)(lStack_e0 + 0x1290) = *(undefined8 *)(lStack_e0 + 0x1288);
  lStack_d0 = param_1[2];
  lVar4 = param_1[5];
  lVar5 = param_1[4] + 8;
  uStack_b8 = 0x10781cc28;
  uStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000107821e20();
  ppuStack_108 = &PTR_DAT_1109e0390;
  pppuStack_f0 = &ppuStack_108;
  lStack_100 = lVar4;
  if (*(char *)(lVar5 + 0x20) == '\x01') {
    func_0x0001077f795c(auStack_168);
    func_0x0001077f795c(auStack_148,&ppuStack_108);
    puVar3 = (undefined8 *)0x48;
    __Znwm();
    *puVar3 = &PTR_DAT_1109e0410;
    func_0x00010781bbac(puVar3 + 1,auStack_168);
    func_0x00010781bbac(puVar3 + 5,auStack_148);
    puStack_110 = puVar3;
    func_0x00010781d0e8(auStack_a0,appuStack_128);
    pppuVar1 = appuStack_128;
  }
  else {
    func_0x00010781d0e8(auStack_a0,&ppuStack_108);
    pppuVar1 = &ppuStack_108;
  }
  pppuVar2 = (undefined ***)pppuVar1[3];
  if (pppuVar2 == pppuVar1) {
    lVar5 = 0x20;
  }
  else {
    if (pppuVar2 == (undefined ***)0x0) {
      return pppuVar1;
    }
    lVar5 = 0x28;
  }
  (**(code **)((long)*pppuVar2 + lVar5))();
  return pppuVar1;
}



/* Entry: 10781cf58; end: 10781cf63;  */

undefined ** FUN_10781cf58(void)

{
  return &PTR_DAT_1109e03f0;
}



/* Entry: 10781d094; end: 10781d0e7;  */

void FUN_10781d094(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001078221e8();
  *param_1 = &PTR_DAT_1109e0410;
  func_0x0001077f795c(param_1 + 1);
  func_0x0001077f795c(param_1 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 10781d994; end: 10781da97;  */

/* WARNING: Possible PIC construction at 0x00010781d9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781da84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781d9e0) */
/* WARNING: Removing unreachable block (ram,0x00010781d9e4) */
/* WARNING: Removing unreachable block (ram,0x00010781d9f4) */
/* WARNING: Removing unreachable block (ram,0x00010781d9fc) */
/* WARNING: Removing unreachable block (ram,0x00010781da04) */
/* WARNING: Removing unreachable block (ram,0x00010781da0c) */
/* WARNING: Removing unreachable block (ram,0x00010781da14) */
/* WARNING: Removing unreachable block (ram,0x00010781da2c) */
/* WARNING: Removing unreachable block (ram,0x00010781da1c) */
/* WARNING: Removing unreachable block (ram,0x00010781da24) */
/* WARNING: Removing unreachable block (ram,0x00010781da30) */
/* WARNING: Removing unreachable block (ram,0x00010781da38) */
/* WARNING: Removing unreachable block (ram,0x00010781da48) */
/* WARNING: Removing unreachable block (ram,0x00010781da4c) */
/* WARNING: Removing unreachable block (ram,0x00010781da40) */
/* WARNING: Removing unreachable block (ram,0x00010781d9ec) */
/* WARNING: Removing unreachable block (ram,0x00010781da88) */

void FUN_10781d994(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x00010781da98;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x00010781da98:
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781dc2c; end: 10781dc6f;  */

undefined8 * FUN_10781dc2c(undefined8 *param_1,undefined8 *param_2)

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
    func_0x00010781dc70();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10781dee8; end: 10781df57;  */

void FUN_10781dee8(void)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x0001078230e4();
  func_0x0001075533fc();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x000107822f40();
      func_0x0001078229c4();
      func_0x0001078222a8();
      func_0x00010781df58();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10781e414; end: 10781e453;  */

long * FUN_10781e414(long *param_1,long *param_2)

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
  func_0x00010781e474();
  func_0x000107821f80();
  func_0x000107821ec8();
  return param_1;
}



/* Entry: 10781e918; end: 10781e9af;  */

/* WARNING: Possible PIC construction at 0x00010781e954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781e958) */
/* WARNING: Removing unreachable block (ram,0x00010781e964) */
/* WARNING: Removing unreachable block (ram,0x00010781e974) */
/* WARNING: Removing unreachable block (ram,0x00010781e984) */

void FUN_10781e918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  code *extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 auStack_f0 [15];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001078220d8();
  func_0x00010781e8b8();
  puVar3 = param_5;
  func_0x000107822430();
  if ((int)puVar3 == 0) {
    return;
  }
  uStack_70 = param_4;
  uStack_68 = param_3;
  func_0x0001078220d8(param_4);
  func_0x000107821e20();
  uStack_78 = extraout_x8;
  func_0x0001078220fc();
  func_0x00010782265c();
  FUN_10781f0f0();
  func_0x000107822e8c();
  puVar3 = auStack_f0;
  func_0x0001077f79bc();
  func_0x000107821dac(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078221e8();
  *puVar3 = *param_5;
  func_0x000107822eb8(puVar3 + 1,param_5 + 1);
  *(undefined2 *)(unaff_x19 + 0x688) = *(undefined2 *)(unaff_x20 + 0x688);
  lVar1 = unaff_x19 + 0x690;
  cVar2 = *(char *)(unaff_x19 + 0x6b0);
  if (cVar2 != *(char *)(unaff_x20 + 0x6b0)) {
    if (cVar2 == '\0') {
      func_0x00010781bb90(lVar1,unaff_x20 + 0x690);
    }
    else {
      func_0x0001077f828c();
      *(undefined1 *)(unaff_x19 + 0x6b0) = 0;
    }
    goto LAB_10781f1b0;
  }
  if (cVar2 == '\0') goto LAB_10781f1b0;
  lVar4 = *(long *)(unaff_x19 + 0x6a8);
  *(undefined8 *)(unaff_x19 + 0x6a8) = 0;
  if (lVar4 == lVar1) {
    uVar5 = 0x20;
LAB_10781f174:
    func_0x000107822498(uVar5);
  }
  else if (lVar4 != 0) {
    uVar5 = 0x28;
    goto LAB_10781f174;
  }
  lVar4 = *(long *)(unaff_x20 + 0x6a8);
  if (lVar4 == 0) {
    *(undefined8 *)(unaff_x19 + 0x6a8) = 0;
  }
  else if (lVar4 == unaff_x20 + 0x690) {
    *(long *)(unaff_x19 + 0x6a8) = lVar1;
    func_0x000107822650(*(undefined8 *)(unaff_x20 + 0x6a8));
    (*extraout_x8_00)();
  }
  else {
    *(long *)(unaff_x19 + 0x6a8) = lVar4;
    *(undefined8 *)(unaff_x20 + 0x6a8) = 0;
  }
LAB_10781f1b0:
  uVar6 = *(undefined8 *)(unaff_x20 + 0x6c0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x6b8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x6d0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x6c8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x6e0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x6d8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x6e1);
  *(undefined8 *)(unaff_x19 + 0x6e9) = *(undefined8 *)(unaff_x20 + 0x6e9);
  *(undefined8 *)(unaff_x19 + 0x6e1) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x6d0) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x6c8) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x6e0) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x6d8) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x6c0) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x6b8) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x6f8);
  *(undefined8 *)(unaff_x19 + 0x700) = *(undefined8 *)(unaff_x20 + 0x700);
  *(undefined8 *)(unaff_x19 + 0x6f8) = uVar5;
  return;
}



/* Entry: 10781f0f0; end: 10781f1ef;  */

void FUN_10781f0f0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x0001078221e8();
  *param_1 = *param_2;
  func_0x000107822eb8(param_1 + 1,param_2 + 1);
  *(undefined2 *)(unaff_x19 + 0x688) = *(undefined2 *)(unaff_x20 + 0x688);
  lVar1 = unaff_x19 + 0x690;
  cVar2 = *(char *)(unaff_x19 + 0x6b0);
  if (cVar2 != *(char *)(unaff_x20 + 0x6b0)) {
    if (cVar2 == '\0') {
      func_0x00010781bb90(lVar1,unaff_x20 + 0x690);
    }
    else {
      func_0x0001077f828c();
      *(undefined1 *)(unaff_x19 + 0x6b0) = 0;
    }
    goto LAB_10781f1b0;
  }
  if (cVar2 == '\0') goto LAB_10781f1b0;
  lVar3 = *(long *)(unaff_x19 + 0x6a8);
  *(undefined8 *)(unaff_x19 + 0x6a8) = 0;
  if (lVar3 == lVar1) {
    uVar4 = 0x20;
LAB_10781f174:
    func_0x000107822498(uVar4);
  }
  else if (lVar3 != 0) {
    uVar4 = 0x28;
    goto LAB_10781f174;
  }
  lVar3 = *(long *)(unaff_x20 + 0x6a8);
  if (lVar3 == 0) {
    *(undefined8 *)(unaff_x19 + 0x6a8) = 0;
  }
  else if (lVar3 == unaff_x20 + 0x690) {
    *(long *)(unaff_x19 + 0x6a8) = lVar1;
    func_0x000107822650(*(undefined8 *)(unaff_x20 + 0x6a8));
    (*extraout_x8)();
  }
  else {
    *(long *)(unaff_x19 + 0x6a8) = lVar3;
    *(undefined8 *)(unaff_x20 + 0x6a8) = 0;
  }
LAB_10781f1b0:
  uVar5 = *(undefined8 *)(unaff_x20 + 0x6c0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x6b8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x6d0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x6c8);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x6e0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x6d8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x6e1);
  *(undefined8 *)(unaff_x19 + 0x6e9) = *(undefined8 *)(unaff_x20 + 0x6e9);
  *(undefined8 *)(unaff_x19 + 0x6e1) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x6d0) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x6c8) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x6e0) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x6d8) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x6c0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x6b8) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x6f8);
  *(undefined8 *)(unaff_x19 + 0x700) = *(undefined8 *)(unaff_x20 + 0x700);
  *(undefined8 *)(unaff_x19 + 0x6f8) = uVar4;
  return;
}



/* Entry: 10781f5e8; end: 10781f6f7;  */

undefined8 * FUN_10781f5e8(undefined8 *param_1)

{
  func_0x000104c2f714(param_1 + 9);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 10781f95c; end: 10781f97f;  */

void FUN_10781f95c(long param_1,long *param_2)

{
  long *unaff_x20;
  
  if (param_2 == (long *)0x0) {
    func_0x000104bfeb48();
    func_0x0001078230f8();
    while (unaff_x20 != (long *)0x0) {
      param_1 = (long)(unaff_x20 + 3);
      unaff_x20 = (long *)*unaff_x20;
      func_0x0001074b5130();
      func_0x0001078224e8();
    }
    func_0x000107822330();
    if (param_1 != 0) {
      __ZdlPv();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010781f970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_1,param_2);
  return;
}



/* Entry: 10781fcb8; end: 10781fdbb;  */

/* WARNING: Possible PIC construction at 0x00010781fd00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781fda8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781fd04) */
/* WARNING: Removing unreachable block (ram,0x00010781fd08) */
/* WARNING: Removing unreachable block (ram,0x00010781fd18) */
/* WARNING: Removing unreachable block (ram,0x00010781fd20) */
/* WARNING: Removing unreachable block (ram,0x00010781fd28) */
/* WARNING: Removing unreachable block (ram,0x00010781fd30) */
/* WARNING: Removing unreachable block (ram,0x00010781fd38) */
/* WARNING: Removing unreachable block (ram,0x00010781fd50) */
/* WARNING: Removing unreachable block (ram,0x00010781fd40) */
/* WARNING: Removing unreachable block (ram,0x00010781fd48) */
/* WARNING: Removing unreachable block (ram,0x00010781fd54) */
/* WARNING: Removing unreachable block (ram,0x00010781fd5c) */
/* WARNING: Removing unreachable block (ram,0x00010781fd6c) */
/* WARNING: Removing unreachable block (ram,0x00010781fd70) */
/* WARNING: Removing unreachable block (ram,0x00010781fd64) */
/* WARNING: Removing unreachable block (ram,0x00010781fd10) */
/* WARNING: Removing unreachable block (ram,0x00010781fdac) */

void FUN_10781fcb8(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x00010781fdbc;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x00010781fdbc:
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781fffc; end: 1078200ff;  */

/* WARNING: Possible PIC construction at 0x000107820044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078200ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107820048) */
/* WARNING: Removing unreachable block (ram,0x00010782004c) */
/* WARNING: Removing unreachable block (ram,0x00010782005c) */
/* WARNING: Removing unreachable block (ram,0x000107820064) */
/* WARNING: Removing unreachable block (ram,0x00010782006c) */
/* WARNING: Removing unreachable block (ram,0x000107820074) */
/* WARNING: Removing unreachable block (ram,0x00010782007c) */
/* WARNING: Removing unreachable block (ram,0x000107820094) */
/* WARNING: Removing unreachable block (ram,0x000107820084) */
/* WARNING: Removing unreachable block (ram,0x00010782008c) */
/* WARNING: Removing unreachable block (ram,0x000107820098) */
/* WARNING: Removing unreachable block (ram,0x0001078200a0) */
/* WARNING: Removing unreachable block (ram,0x0001078200b0) */
/* WARNING: Removing unreachable block (ram,0x0001078200b4) */
/* WARNING: Removing unreachable block (ram,0x0001078200a8) */
/* WARNING: Removing unreachable block (ram,0x000107820054) */
/* WARNING: Removing unreachable block (ram,0x0001078200f0) */

void FUN_10781fffc(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x000107820100;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x000107820100:
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078204d4; end: 107820653;  */

long FUN_1078204d4(undefined8 param_1,undefined8 param_2,long *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  ulong uVar7;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long *unaff_x20;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x23;
  
  func_0x000107823144();
  uVar1 = *param_4;
  uVar11 = (ulong)uVar1;
  uVar10 = param_3[1];
  plVar4 = param_3;
  if (uVar10 != 0) {
    func_0x000107823000();
    uVar9 = (uint)uVar10;
    if ((bool)in_ZR) {
      unaff_x23 = (ulong)(uVar9 - 1 & uVar1);
    }
    else {
      in_NG = (long)(uVar10 - uVar11) < 0;
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar1 / uVar9;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar9);
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x20 = (long *)0x0;
    uVar5 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar8;
          if (unaff_x20 == (long *)0x0) goto LAB_107820578;
          uVar7 = unaff_x20[1];
          plVar8 = unaff_x20;
          if (uVar7 != uVar11) break;
          in_NG = (int)(*(uint *)(unaff_x20 + 2) - uVar1) < 0;
          if (*(uint *)(unaff_x20 + 2) == uVar1) goto LAB_10782063c;
        }
        if ((uVar10 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar10 <= uVar7) {
          func_0x000107822ff4();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
      } while (uVar7 == unaff_x23);
    }
  }
LAB_107820578:
  func_0x000107822558();
  func_0x000107822964();
  *(undefined8 *)((long)plVar4 + 0x14) = 0;
  *(undefined8 *)((long)plVar4 + 0x24) = 0;
  *(undefined8 *)((long)plVar4 + 0x1c) = 0;
  *(undefined4 *)((long)plVar4 + 0x2c) = 0;
  func_0x000107821fc4();
  if ((uVar10 == 0) || (func_0x000107822234(param_1,param_2,(float)uVar10), (bool)in_NG)) {
    func_0x000107822b60();
    uVar3 = uVar10 == 3;
    func_0x000107821dc0();
    func_0x00010781d854(param_3);
    uVar10 = param_3[1];
    func_0x000107823000();
    if ((bool)uVar3) {
      unaff_x23 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar5 * uVar10;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x000107822b48();
    if (extraout_x9_00 != 0) {
      uVar11 = *(ulong *)(extraout_x9_00 + 8);
      lVar6 = extraout_x8_01;
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        func_0x000107822ff4();
        lVar6 = extraout_x8_02;
        uVar11 = extraout_x9_01;
      }
      *(long **)(lVar6 + uVar11 * 8) = unaff_x20;
    }
  }
  else {
    func_0x000107822538();
  }
  func_0x000107821f1c();
  func_0x00010781d970();
LAB_10782063c:
  return (long)unaff_x20 + 0x14;
}



/* Entry: 107820b4c; end: 107820bdb;  */

byte FUN_107820b4c(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = param_1;
  func_0x00010781a5b4();
  func_0x00010781a5b4(param_1,param_3);
  if (pbVar1 == (byte *)0x0) {
    if (param_1 != (byte *)0x0) {
LAB_107820b9c:
      if ((*param_1 & 1) == 0) {
        bVar2 = param_1[1] ^ 1;
        goto LAB_107820bc8;
      }
    }
  }
  else {
    if (param_1 == (byte *)0x0) {
      if ((*pbVar1 & 1) == 0) {
        bVar2 = pbVar1[1];
      }
      else {
        bVar2 = 1;
      }
      goto LAB_107820bc8;
    }
    if (((*pbVar1 & 1) != 0) || (pbVar1[1] == 1)) goto LAB_107820b9c;
  }
  bVar2 = 0;
LAB_107820bc8:
  return bVar2 & 1;
}



/* Entry: 1078215b0; end: 1078215d3;  */

void FUN_1078215b0(long param_1)

{
  func_0x000107822018();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078217c4; end: 10782183b;  */

/* WARNING: Possible PIC construction at 0x0001078217f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078217fc) */
/* WARNING: Removing unreachable block (ram,0x000107821824) */
/* WARNING: Removing unreachable block (ram,0x000107821838) */
/* WARNING: Removing unreachable block (ram,0x00010782181c) */
/* WARNING: Removing unreachable block (ram,0x000107822070) */

void FUN_1078217c4(void)

{
  func_0x000107823144();
  func_0x00010782304c();
  func_0x000107821e20();
  func_0x000107821864();
  return;
}



/* Entry: 107821934; end: 10782198b;  */

void FUN_107821934(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  
  func_0x000107821f50();
  if ((bool)in_ZR) {
    func_0x000107822484();
  }
  func_0x000107822470();
  func_0x00010781409c();
  func_0x0001078221e0();
  func_0x0001078221d8();
  func_0x000107822274();
  *unaff_x19 = &PTR_DAT_1109e0030;
  return;
}



/* Entry: 107821acc; end: 107821adf;  */

void FUN_107821acc(void)

{
  func_0x000107821c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107821d54; end: 1078231ab;  */

ulong FUN_107821d54(ulong param_1)

{
  if (1 < param_1) {
    param_1 = 1L << (-LZCOUNT(param_1 - 1) & 0x3fU);
  }
  return param_1;
}



/* Entry: 107824050; end: 1078240b3;  */

undefined1  [16] FUN_107824050(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x0001078240b4(*param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107824314; end: 107824357;  */

long * FUN_107824314(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x58;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10782503c; end: 1078250b3;  */

long * FUN_10782503c(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x555555555555555 < param_2) {
      func_0x000104bd35f4();
      lVar1 = *param_2;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *param_1 = lVar1;
      func_0x0001077fee20(param_1 + 2,param_2 + 2);
      return param_1;
    }
    lVar1 = (long)param_2 * 0x30;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + (long)param_2 * 0x30;
  return param_1;
}



/* Entry: 10782558c; end: 1078256ab;  */

void FUN_10782558c(float param_1,long param_2,long param_3,uint param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_1 * *(float *)(param_3 + 0x20);
  fVar1 = param_1 * *(float *)(param_3 + 0x24);
  fVar3 = *param_6;
  if (param_4 - 1 < 2) {
    *(float *)(param_2 + 0x70) = (fVar2 + fVar3) - param_5[3];
    fVar1 = fVar1 + *param_6 + param_5[1];
  }
  else {
    fVar2 = fVar2 + fVar1;
    func_0x0001078278b4();
    fVar1 = (fVar2 - fVar1) * 0.5;
    fVar3 = fVar3 + fVar1;
    *(float *)(param_2 + 0x70) = fVar3;
    func_0x0001078278b4();
    fVar1 = fVar1 + fVar3;
  }
  *(float *)(param_2 + 0x74) = fVar1;
  fVar1 = param_1 * *(float *)(param_3 + 0x18);
  param_1 = param_1 * *(float *)(param_3 + 0x1c);
  fVar2 = param_6[1];
  if ((param_4 & 0xfffffffd) == 1) {
    *(float *)(param_2 + 0x68) = (fVar1 + fVar2) - *param_5;
    fVar3 = param_1 + param_6[1] + param_5[2];
  }
  else {
    param_1 = fVar1 + param_1;
    func_0x0001078278b4();
    fVar3 = 0.5;
    fVar2 = fVar2 + (param_1 - fVar1) * 0.5;
    *(float *)(param_2 + 0x68) = fVar2;
    func_0x0001078278b4();
    fVar3 = fVar3 + fVar2;
  }
  *(float *)(param_2 + 0x6c) = fVar3;
  return;
}



/* Entry: 107826990; end: 1078269b3;  */

void FUN_107826990(short *param_1,short *param_2,short *param_3)

{
  for (; (param_1 != param_2 && (*param_1 != *param_3)); param_1 = param_1 + 1) {
  }
  return;
}



/* Entry: 107826d94; end: 107826df3;  */

void FUN_107826d94(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x0001078278bc();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0xa8) * 0xa8;
  func_0x000107826ea0(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010782782c();
  return;
}



/* Entry: 107826fc4; end: 10782701f;  */

void FUN_107826fc4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xa8;
    func_0x000107405490();
  }
  return;
}



/* Entry: 107827268; end: 10782726f;  */

void FUN_107827268(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078278bc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x00010089ccb4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107827634; end: 1078277eb;  */

undefined1  [16]
FUN_107827634(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x0001078276d8(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x28;
    __Znwm();
    uStack_58 = 1;
    *(undefined8 *)(lVar3 + 0x20) = *param_4;
    plStack_60 = param_1 + 1;
    func_0x0001074c3b24(param_1,uStack_48,plVar2,lVar3);
    uStack_68 = 0;
    func_0x0001074c3b70(&uStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 107827c3c; end: 107827c73;  */

long FUN_107827c3c(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long unaff_x20;
  long lVar1;
  
  func_0x0001078286c0();
  func_0x0001078285a0();
  func_0x00010782865c();
  if (param_4 < param_2) {
    param_2 = param_4 + 1;
  }
  lVar1 = param_2 * -2;
  do {
    if (lVar1 == 0) {
      return -1;
    }
    func_0x00010782861c();
    lVar1 = lVar1 + 2;
  } while (unaff_x20 != 0);
  return -lVar1 >> 1;
}



/* Entry: 107828058; end: 10782810f;  */

undefined8
FUN_107828058(undefined8 param_1,undefined1 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_60 [16];
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  func_0x000107278b70(auStack_60,param_4);
  uStack_78 = param_5[1];
  uStack_80 = *param_5;
  uStack_70 = *(undefined4 *)(param_5 + 2);
  uStack_98 = param_6[1];
  uStack_a0 = *param_6;
  uStack_90 = *(undefined4 *)(param_6 + 2);
  func_0x000107828110(uVar2,param_1,uVar1,auStack_60,&uStack_80,&uStack_a0,*param_7,param_7[1]);
  func_0x00010726b09c(auStack_60);
  return param_1;
}



/* Entry: 107828528; end: 10782859f;  */

long FUN_107828528(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  if (param_2 <= param_4) {
    return -1;
  }
  lVar1 = param_4 * -2;
  while( true ) {
    if (-lVar1 == param_2 * 2) {
      return -1;
    }
    func_0x00010782861c();
    if (param_1 == 0) break;
    lVar1 = lVar1 + -2;
  }
  return -lVar1 >> 1;
}



/* Entry: 107828978; end: 10782899b;  */

void FUN_107828978(void)

{
  func_0x00010782899c();
  return;
}



/* Entry: 107828c64; end: 1078290a7;  */

void FUN_107828c64(long param_1,ulong param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x21;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plStack_68 = (long *)((ulong)plStack_68 & 0xffffffffffffff00);
  plVar7 = (long *)(*(long *)(param_1 + 0x220) + 0xb50);
  func_0x00010724e2c8(plVar7,&plStack_68);
  if (((int)plVar7 != 0) && ((*(byte *)(param_1 + 0x1d8) & 1) == 0)) {
    return;
  }
  func_0x00010782a374(*(undefined8 *)(param_1 + 0x220));
  if ((((int)plVar7 != 0) && (*(char *)(param_1 + 0x1d8) == '\x01')) &&
     (param_2 < *(ulong *)(param_1 + 0x1d0))) {
    return;
  }
  if (*(char *)(param_1 + 0x89) != '\x01') goto LAB_107829014;
  uVar10 = *(ulong *)(param_1 + 0x1e0);
  uVar11 = *(ulong *)(param_1 + 0x200);
  if (uVar11 != 0) {
    uVar3 = uVar11 - 1;
    if ((uVar11 & uVar3) == 0) {
      unaff_x21 = uVar3 & uVar10;
    }
    else {
      unaff_x21 = uVar10;
      if (uVar11 <= uVar10) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar10 / uVar11;
        }
        unaff_x21 = uVar10 - uVar5 * uVar11;
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x1f8) + unaff_x21 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_107828d68;
          uVar5 = plVar12[1];
          if (uVar5 != uVar10) break;
          if (plVar12[2] == uVar10) goto LAB_107829010;
        }
        if ((uVar11 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar11 <= uVar5) {
          uVar6 = 0;
          if (uVar11 != 0) {
            uVar6 = uVar5 / uVar11;
          }
          uVar5 = uVar5 - uVar6 * uVar11;
        }
      } while (uVar5 == unaff_x21);
    }
  }
LAB_107828d68:
  plVar1 = (long *)(param_1 + 0x208);
  func_0x00010782a35c();
  uStack_58 = 1;
  *plVar7 = 0;
  plVar7[1] = uVar10;
  plVar7[2] = uVar10;
  plVar7[3] = 0;
  fVar13 = (float)(*(long *)(param_1 + 0x210) + 1);
  plStack_68 = plVar7;
  plStack_60 = plVar1;
  if ((uVar11 == 0) || (*(float *)(param_1 + 0x218) * (float)uVar11 < fVar13)) {
    uVar3 = 1;
    if (2 < uVar11) {
      uVar3 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar3 = uVar3 | uVar11 << 1;
    uVar5 = (ulong)(fVar13 / *(float *)(param_1 + 0x218));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar11 = *(ulong *)(param_1 + 0x200);
    }
    if (uVar11 < uVar3) {
LAB_107828e08:
      if (uVar3 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x107829098);
        (*pcVar2)();
      }
      lVar4 = uVar3 << 3;
      __Znwm(lVar4);
      func_0x000107829eac(param_1 + 0x1f8,lVar4);
      *(ulong *)(param_1 + 0x200) = uVar3;
      lVar4 = *(long *)(param_1 + 0x1f8);
      for (uVar11 = 0; uVar3 != uVar11; uVar11 = uVar11 + 1) {
        *(undefined8 *)(lVar4 + uVar11 * 8) = 0;
      }
      plVar7 = (long *)*plVar1;
      uVar11 = uVar3;
      if (plVar7 != (long *)0x0) {
        uVar8 = plVar7[1];
        uVar6 = uVar3 - 1;
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar8 / uVar3;
        }
        uVar9 = uVar8;
        if (uVar3 <= uVar8) {
          uVar9 = uVar8 - uVar5 * uVar3;
        }
        if ((uVar3 & uVar6) == 0) {
          uVar9 = uVar8 & uVar6;
        }
        *(long **)(lVar4 + uVar9 * 8) = plVar1;
        while (plVar12 = plVar7, plVar7 = (long *)*plVar12, plVar7 != (long *)0x0) {
          uVar5 = plVar7[1];
          if ((uVar3 & uVar6) == 0) {
            uVar5 = uVar5 & uVar6;
          }
          else if (uVar3 <= uVar5) {
            uVar8 = 0;
            if (uVar3 != 0) {
              uVar8 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar8 * uVar3;
          }
          if (uVar5 != uVar9) {
            if (*(long *)(lVar4 + uVar5 * 8) == 0) {
              *(long **)(lVar4 + uVar5 * 8) = plVar12;
              uVar9 = uVar5;
            }
            else {
              *plVar12 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar4 + uVar5 * 8);
              **(long **)(lVar4 + uVar5 * 8) = (long)plVar7;
              plVar7 = plVar12;
            }
          }
        }
      }
    }
    else if (uVar3 < uVar11) {
      uVar5 = (ulong)((float)*(ulong *)(param_1 + 0x210) / *(float *)(param_1 + 0x218));
      if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      if (uVar3 < uVar11) {
        if (uVar3 != 0) goto LAB_107828e08;
        func_0x000107829eac(param_1 + 0x1f8,0);
        *(undefined8 *)(param_1 + 0x200) = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulong *)(param_1 + 0x200);
      }
    }
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x21 = uVar11 - 1 & uVar10;
    }
    else {
      unaff_x21 = uVar10;
      if (uVar11 <= uVar10) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar10 / uVar11;
        }
        unaff_x21 = uVar10 - uVar3 * uVar11;
      }
    }
  }
  plVar12 = plStack_68;
  lVar4 = *(long *)(param_1 + 0x1f8);
  plVar7 = *(long **)(lVar4 + unaff_x21 * 8);
  if (plVar7 == (long *)0x0) {
    *plStack_68 = *plVar1;
    *plVar1 = (long)plStack_68;
    *(long **)(lVar4 + unaff_x21 * 8) = plVar1;
    if (*plStack_68 != 0) {
      uVar10 = *(ulong *)(*plStack_68 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar10 / uVar11;
        }
        uVar10 = uVar10 - uVar3 * uVar11;
      }
      *(long **)(lVar4 + uVar10 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x210) + 1;
  func_0x000107829ec4(&plStack_68);
LAB_107829010:
  plVar12[3] = param_2;
LAB_107829014:
  lVar4 = *(long *)(param_1 + 0x1e8);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x28) == '\x01') {
      uVar11 = *(ulong *)(lVar4 + 0x20);
    }
    else {
      uVar11 = 0;
    }
    uVar10 = param_2;
    if (param_2 <= uVar11) {
      uVar10 = uVar11;
    }
    *(ulong *)(lVar4 + 0x20) = uVar10;
    *(undefined1 *)(lVar4 + 0x28) = 1;
  }
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    uVar11 = *(ulong *)(param_1 + 0x1d0);
  }
  else {
    uVar11 = 0;
  }
  if (param_2 <= uVar11) {
    param_2 = uVar11;
  }
  *(ulong *)(param_1 + 0x1d0) = param_2;
  *(undefined1 *)(param_1 + 0x1d8) = 1;
  return;
}



/* Entry: 1078297c0; end: 107829813;  */

void FUN_1078297c0(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  func_0x00010750b930();
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_DAT_1109e07e0)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 107829c64; end: 107829cef;  */

void FUN_107829c64(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x108) * 0x108;
  func_0x000107829d3c(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 107829ee8; end: 107829eff;  */

void FUN_107829ee8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10782a0e4; end: 10782a14b;  */

void FUN_10782a0e4(int param_1)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x00010782a3e0();
  if (param_1 == 0) {
    return;
  }
  plStack_68 = (long *)((ulong)plStack_68 & 0xffffffffffffff00);
  plVar7 = (long *)(*(long *)(unaff_x20 + 0x220) + 0xb50);
  func_0x00010724e2c8(plVar7,&plStack_68);
  if (((int)plVar7 != 0) && ((*(byte *)(unaff_x20 + 0x1d8) & 1) == 0)) {
    return;
  }
  func_0x00010782a374(*(undefined8 *)(unaff_x20 + 0x220));
  if ((((int)plVar7 != 0) && (*(char *)(unaff_x20 + 0x1d8) == '\x01')) &&
     (unaff_x19 < *(ulong *)(unaff_x20 + 0x1d0))) {
    return;
  }
  if (*(char *)(unaff_x20 + 0x89) != '\x01') goto LAB_107829014;
  uVar10 = *(ulong *)(unaff_x20 + 0x1e0);
  uVar11 = *(ulong *)(unaff_x20 + 0x200);
  if (uVar11 != 0) {
    uVar3 = uVar11 - 1;
    if ((uVar11 & uVar3) == 0) {
      unaff_x21 = uVar3 & uVar10;
    }
    else {
      unaff_x21 = uVar10;
      if (uVar11 <= uVar10) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar10 / uVar11;
        }
        unaff_x21 = uVar10 - uVar5 * uVar11;
      }
    }
    plVar12 = *(long **)(*(long *)(unaff_x20 + 0x1f8) + unaff_x21 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_107828d68;
          uVar5 = plVar12[1];
          if (uVar5 != uVar10) break;
          if (plVar12[2] == uVar10) goto LAB_107829010;
        }
        if ((uVar11 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar11 <= uVar5) {
          uVar6 = 0;
          if (uVar11 != 0) {
            uVar6 = uVar5 / uVar11;
          }
          uVar5 = uVar5 - uVar6 * uVar11;
        }
      } while (uVar5 == unaff_x21);
    }
  }
LAB_107828d68:
  plVar1 = (long *)(unaff_x20 + 0x208);
  func_0x00010782a35c();
  uStack_58 = 1;
  *plVar7 = 0;
  plVar7[1] = uVar10;
  plVar7[2] = uVar10;
  plVar7[3] = 0;
  fVar13 = (float)(*(long *)(unaff_x20 + 0x210) + 1);
  plStack_68 = plVar7;
  plStack_60 = plVar1;
  if ((uVar11 == 0) || (*(float *)(unaff_x20 + 0x218) * (float)uVar11 < fVar13)) {
    uVar3 = 1;
    if (2 < uVar11) {
      uVar3 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar3 = uVar3 | uVar11 << 1;
    uVar5 = (ulong)(fVar13 / *(float *)(unaff_x20 + 0x218));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar11 = *(ulong *)(unaff_x20 + 0x200);
    }
    if (uVar11 < uVar3) {
LAB_107828e08:
      if (uVar3 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x107829098);
        (*pcVar2)();
      }
      lVar4 = uVar3 << 3;
      __Znwm(lVar4);
      func_0x000107829eac(unaff_x20 + 0x1f8,lVar4);
      *(ulong *)(unaff_x20 + 0x200) = uVar3;
      lVar4 = *(long *)(unaff_x20 + 0x1f8);
      for (uVar11 = 0; uVar3 != uVar11; uVar11 = uVar11 + 1) {
        *(undefined8 *)(lVar4 + uVar11 * 8) = 0;
      }
      plVar7 = (long *)*plVar1;
      uVar11 = uVar3;
      if (plVar7 != (long *)0x0) {
        uVar8 = plVar7[1];
        uVar6 = uVar3 - 1;
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar8 / uVar3;
        }
        uVar9 = uVar8;
        if (uVar3 <= uVar8) {
          uVar9 = uVar8 - uVar5 * uVar3;
        }
        if ((uVar3 & uVar6) == 0) {
          uVar9 = uVar8 & uVar6;
        }
        *(long **)(lVar4 + uVar9 * 8) = plVar1;
        while (plVar12 = plVar7, plVar7 = (long *)*plVar12, plVar7 != (long *)0x0) {
          uVar5 = plVar7[1];
          if ((uVar3 & uVar6) == 0) {
            uVar5 = uVar5 & uVar6;
          }
          else if (uVar3 <= uVar5) {
            uVar8 = 0;
            if (uVar3 != 0) {
              uVar8 = uVar5 / uVar3;
            }
            uVar5 = uVar5 - uVar8 * uVar3;
          }
          if (uVar5 != uVar9) {
            if (*(long *)(lVar4 + uVar5 * 8) == 0) {
              *(long **)(lVar4 + uVar5 * 8) = plVar12;
              uVar9 = uVar5;
            }
            else {
              *plVar12 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar4 + uVar5 * 8);
              **(long **)(lVar4 + uVar5 * 8) = (long)plVar7;
              plVar7 = plVar12;
            }
          }
        }
      }
    }
    else if (uVar3 < uVar11) {
      uVar5 = (ulong)((float)*(ulong *)(unaff_x20 + 0x210) / *(float *)(unaff_x20 + 0x218));
      if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      if (uVar3 < uVar11) {
        if (uVar3 != 0) goto LAB_107828e08;
        func_0x000107829eac(unaff_x20 + 0x1f8,0);
        *(undefined8 *)(unaff_x20 + 0x200) = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = *(ulong *)(unaff_x20 + 0x200);
      }
    }
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x21 = uVar11 - 1 & uVar10;
    }
    else {
      unaff_x21 = uVar10;
      if (uVar11 <= uVar10) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar10 / uVar11;
        }
        unaff_x21 = uVar10 - uVar3 * uVar11;
      }
    }
  }
  plVar12 = plStack_68;
  lVar4 = *(long *)(unaff_x20 + 0x1f8);
  plVar7 = *(long **)(lVar4 + unaff_x21 * 8);
  if (plVar7 == (long *)0x0) {
    *plStack_68 = *plVar1;
    *plVar1 = (long)plStack_68;
    *(long **)(lVar4 + unaff_x21 * 8) = plVar1;
    if (*plStack_68 != 0) {
      uVar10 = *(ulong *)(*plStack_68 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar10 / uVar11;
        }
        uVar10 = uVar10 - uVar3 * uVar11;
      }
      *(long **)(lVar4 + uVar10 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  *(long *)(unaff_x20 + 0x210) = *(long *)(unaff_x20 + 0x210) + 1;
  func_0x000107829ec4(&plStack_68);
LAB_107829010:
  plVar12[3] = unaff_x19;
LAB_107829014:
  lVar4 = *(long *)(unaff_x20 + 0x1e8);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x28) == '\x01') {
      uVar11 = *(ulong *)(lVar4 + 0x20);
    }
    else {
      uVar11 = 0;
    }
    uVar10 = unaff_x19;
    if (unaff_x19 <= uVar11) {
      uVar10 = uVar11;
    }
    *(ulong *)(lVar4 + 0x20) = uVar10;
    *(undefined1 *)(lVar4 + 0x28) = 1;
  }
  if (*(char *)(unaff_x20 + 0x1d8) == '\x01') {
    uVar11 = *(ulong *)(unaff_x20 + 0x1d0);
  }
  else {
    uVar11 = 0;
  }
  if (unaff_x19 <= uVar11) {
    unaff_x19 = uVar11;
  }
  *(ulong *)(unaff_x20 + 0x1d0) = unaff_x19;
  *(undefined1 *)(unaff_x20 + 0x1d8) = 1;
  return;
}



/* Entry: 10782a418; end: 10782a4d7;  */

long FUN_10782a418(long param_1)

{
  long lVar1;
  long *in_x4;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010782cbd4();
  func_0x00010782ac84();
  *(undefined8 *)(lVar1 + 0x370) = 0;
  *(undefined8 *)(lVar1 + 0x368) = 0;
  func_0x00010726ed14(lVar1 + 0x378);
  *(long *)(param_1 + 0x388) = param_1;
  lStack_40 = *in_x4;
  if (lStack_40 != 0) {
    lStack_38 = in_x4[1];
    *in_x4 = 0;
    in_x4[1] = 0;
    func_0x00010782a4d8(param_1,&lStack_40,0);
    func_0x00010750c6cc(&lStack_40);
  }
  return param_1;
}



/* Entry: 10782a9b8; end: 10782a9df;  */

long FUN_10782a9b8(long param_1)

{
  func_0x00010782a9e0();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10782acdc; end: 10782ae4b;  */

long FUN_10782acdc(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *piStack_60;
  long lStack_58;
  
  lVar6 = 0;
  piVar1 = (int *)((undefined8 *)*param_1)[1];
  for (piVar7 = *(int **)*param_1; piVar7 != piVar1; piVar7 = piVar7 + 0x1c) {
    piVar3 = (int *)0x0;
    switch(*piVar7) {
    case 2:
      piVar3 = piVar7 + 2;
      func_0x00010782b040(piVar3);
      break;
    case 3:
    case 5:
      piVar3 = (int *)((long)(piVar7[4] - piVar7[2]) & 0xfffffffffffffffc);
      break;
    case 4:
      piVar3 = piVar7 + 2;
      func_0x00010782b00c(piVar3);
      break;
    case 6:
      piVar3 = (int *)0x4;
      break;
    case 7:
      break;
    default:
      piVar3 = piVar7 + 2;
      if (*piVar7 == 1) {
        func_0x00010782b074();
      }
      else {
        func_0x00010782b0b4(piVar3);
      }
    }
    lVar6 = (long)piVar3 + lVar6;
    piVar3 = piVar7 + 8;
    func_0x000104c2db28();
    piStack_60 = piVar3;
    lVar2 = param_2;
    while (lStack_58 = lVar2, piStack_60 != (int *)0x0) {
      lVar4 = lVar2;
      func_0x000104c2d634(lVar2);
      lVar5 = 0;
      switch(*(int *)(lVar2 + 0x38)) {
      case 2:
        lVar5 = lVar2 + 0x40;
        func_0x000104c2d634(lVar5);
        break;
      case 3:
      case 4:
      case 5:
        lVar5 = 8;
        break;
      case 6:
        lVar5 = 1;
        break;
      case 7:
        break;
      default:
        lVar5 = lVar2 + 0x40;
        if (*(int *)(lVar2 + 0x38) == 1) {
          func_0x00010782b16c();
        }
        else {
          func_0x00010782b22c(lVar5);
        }
      }
      lVar6 = lVar4 + lVar6 + lVar5;
      func_0x000104c2de10(&piStack_60);
      lVar2 = lStack_58;
    }
    piStack_60 = (int *)0x0;
  }
  return lVar6;
}



/* Entry: 10782b2c4; end: 10782b353;  */

void FUN_10782b2c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e0c68;
  if (param_3 != 0) {
    do {
      func_0x00010782b618();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = &PTR_DAT_1109e0cb8;
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  func_0x00010782b628();
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10782b3fc; end: 10782b437;  */

undefined8 * FUN_10782b3fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e0cb8;
  func_0x00010737dbe4(param_1 + 3);
  func_0x000107331610(param_1 + 1);
  return param_1;
}



/* Entry: 10782b66c; end: 10782b79f;  */

long FUN_10782b66c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  ulong uStack_90;
  
  func_0x00010783323c();
  Hint_Prefetch(*param_1,0,2,0);
  uVar10 = param_2 + 8U;
  func_0x000104c2fe38(*param_1);
  lVar9 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar8 = *unaff_x20;
  uVar6 = uVar8 >> 0xc ^ uVar10 >> 7;
  bVar3 = (byte)uVar10;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                             CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                      CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                               CONCAT12(-(cVar15 ==
                                                                         (char)(uVar12 >> 0x10)),
                                                                        CONCAT11(-(cVar14 ==
                                                                                  (char)(uVar12 >> 8
                                                                                        )),
                                                                                 -((char)uVar13 ==
                                                                                  (char)uVar12))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar4 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar2;
      uVar4 = 0;
      uStack_90 = param_2 + 8U;
      func_0x0001073e0698(&uStack_90,uVar1 + uVar7 * 0x58);
      if ((uVar4 & 1) != 0) {
        lVar9 = unaff_x20[1] + uVar7 * 0x58;
        plVar5 = *(long **)(*(long *)(lVar9 + 0x48) + 8);
        func_0x00010783346c();
        (**(code **)(*unaff_x19 + 0x30))();
        if (plVar5 == unaff_x19) {
          return lVar9 + 0x38;
        }
        return 0;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar9 = lVar9 + 8;
    uVar6 = lVar9 + uVar6;
  }
  return 0;
}



/* Entry: 10782bf00; end: 10782bf17;  */

ulong FUN_10782bf00(ulong param_1)

{
  int iVar1;
  uint uVar2;
  long unaff_x19;
  uint unaff_w20;
  long lVar3;
  
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  lVar3 = *(long *)(param_1 + 0xe8);
  if (*(char *)(lVar3 + 0x128) == '\x01') {
    func_0x0001078334c4();
    func_0x000107832f10();
    iVar1 = (int)*(undefined8 *)(lVar3 + 0x60) + unaff_w20 * 0x18;
    func_0x0001074344b4();
    if (iVar1 != 0) {
      uVar2 = *(byte *)(*(long *)(*(long *)(unaff_x19 + 8) + 0x20) + (ulong)unaff_w20 * 0x20 + 0x18)
              ^ 1;
      goto code_r0x00010782bf74;
    }
  }
  uVar2 = 0;
code_r0x00010782bf74:
  return (ulong)(uVar2 & 1);
}



/* Entry: 10782cb80; end: 10782cbaf;  */

long FUN_10782cb80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) == '\x01')) {
    lVar1 = lVar1 + 0x60;
    FUN_10782bf00(lVar1);
    return lVar1;
  }
  return 0;
}



/* Entry: 10782d44c; end: 10782d563;  */

void FUN_10782d44c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  ulong uStack_68;
  undefined8 auStack_60 [2];
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = param_4;
  uVar3 = param_5;
  func_0x00010783323c();
  uStack_68 = uStack_68 & 0xffffffffffffff00;
  lVar1 = *(long *)(param_2 + 0x220) + 0x8f0;
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  func_0x00010724e2c8(lVar1,&uStack_68);
  if (((((int)lVar1 == 0) || (*(char *)(unaff_x20 + 0x1d8) != '\x01')) || ((param_5 & 1) == 0)) ||
     (*(ulong *)(unaff_x20 + 0x1d0) <= param_4)) {
    *(undefined1 *)(unaff_x20 + 0x89) = 1;
    func_0x0001078317e0(unaff_x20 + 0x2a8);
    func_0x000107831820(unaff_x20 + 0x2d0);
    func_0x000107831860(unaff_x20 + 0x2f8);
    *(long *)(unaff_x20 + 0x1e0) = *(long *)(unaff_x20 + 0x1e0) + 1;
    *(ulong *)(unaff_x20 + 0x1d0) = uStack_50;
    *(undefined1 *)(unaff_x20 + 0x1d8) = (undefined1)uStack_48;
    uStack_68 = *(long *)(*(long *)(unaff_x20 + 0x238) + 0x28) + 0x20;
    func_0x000107832ee8();
    auStack_60[0] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10 != 0);
    }
    func_0x00010782d564(&uStack_68,&UNK_107843634,0);
    func_0x00010724ae28(auStack_60);
  }
  return;
}



/* Entry: 10782eabc; end: 10782eb2b;  */

undefined8 * FUN_10782eabc(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010751838c(&uStack_30);
  return param_1;
}


